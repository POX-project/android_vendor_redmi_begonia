/*
 * Reverse-Engineered ABI Specification for: libdpframework.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libdpframework.so
 */

#ifndef BEGONIA_RE_LIBDPFRAMEWORK_H
#define BEGONIA_RE_LIBDPFRAMEWORK_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN11DpIspStream11setPortTypeEijP19DpJPEGEnc_Config_st */
/* Demangled: DpIspStream::setPortType(int, unsigned int, DpJPEGEnc_Config_st*) */
int _ZN11DpIspStream11setPortTypeEijP19DpJPEGEnc_Config_st(void);

/* Symbol: _ZN14DpCommandQueue12frameSrcInfoE13DP_COLOR_ENUMiiiiPjS1_8DpSecure */
/* Demangled: DpCommandQueue::frameSrcInfo(DP_COLOR_ENUM, int, int, int, int, unsigned int*, unsigned int*, DpSecure) */
int _ZN14DpCommandQueue12frameSrcInfoE13DP_COLOR_ENUMiiiiPjS1_8DpSecure(void);

/* Symbol: _ZN12DpEngine_AAL13onAdvanceTileER9DpCommand */
/* Demangled: DpEngine_AAL::onAdvanceTile(DpCommand&) */
int _ZN12DpEngine_AAL13onAdvanceTileER9DpCommand(void);

/* Symbol: _ZN12DpMmuHandlerC2EPvj */
/* Demangled: DpMmuHandler::DpMmuHandler(void*, unsigned int) */
int _ZN12DpMmuHandlerC2EPvj(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::overflow(int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi(void);

/* Symbol: _ZN17DpAsyncBlitStream14setOrientationEjj */
/* Demangled: DpAsyncBlitStream::setOrientation(unsigned int, unsigned int) */
int _ZN17DpAsyncBlitStream14setOrientationEjj(void);

/* Symbol: _ZN12DpBlitStream12setDstBufferEPvj */
/* Demangled: DpBlitStream::setDstBuffer(void*, unsigned int) */
int _ZN12DpBlitStream12setDstBufferEPvj(void);

/* Symbol: _ZN11DpIspStream14queueDstBufferEiiPji */
/* Demangled: DpIspStream::queueDstBuffer(int, int, unsigned int*, int) */
int _ZN11DpIspStream14queueDstBufferEiiPji(void);

/* Symbol: _ZN11DpPortAdapt12getHWAddressE16CLIENT_TYPE_ENUMiPjS1_ */
/* Demangled: DpPortAdapt::getHWAddress(CLIENT_TYPE_ENUM, int, unsigned int*, unsigned int*) */
int _ZN11DpPortAdapt12getHWAddressE16CLIENT_TYPE_ENUMiPjS1_(void);

/* Symbol: _ZN17DpCommandRecorder8addLabelEv */
/* Demangled: DpCommandRecorder::addLabel() */
int _ZN17DpCommandRecorder8addLabelEv(void);

/* Symbol: _ZN13DpEngine_RDMA15onConfigHDRTileER9DpCommand */
/* Demangled: DpEngine_RDMA::onConfigHDRTile(DpCommand&) */
int _ZN13DpEngine_RDMA15onConfigHDRTileER9DpCommand(void);

/* Symbol: _ZN11PQRSZConfigC1Ev */
/* Demangled: PQRSZConfig::PQRSZConfig() */
int _ZN11PQRSZConfigC1Ev(void);

/* Symbol: _ZN11PQDREConfig18getDriverBlockFlagEb */
/* Demangled: PQDREConfig::getDriverBlockFlag(bool) */
int _ZN11PQDREConfig18getDriverBlockFlagEb(void);

/* Symbol: _ZN10DpTilePath20dumpTileAccumulationEv */
/* Demangled: DpTilePath::dumpTileAccumulation() */
int _ZN10DpTilePath20dumpTileAccumulationEv(void);

/* Symbol: _ZN12DpMmuHandlerD0Ev */
/* Demangled: DpMmuHandler::~DpMmuHandler() */
int _ZN12DpMmuHandlerD0Ev(void);

/* Symbol: _ZN16PQSessionManagerC2Ev */
/* Demangled: PQSessionManager::PQSessionManager() */
int _ZN16PQSessionManagerC2Ev(void);

/* Symbol: _Z13tile_cal_mainP17TILE_PARAM_STRUCT */
/* Demangled: tile_cal_main(TILE_PARAM_STRUCT*) */
int _Z13tile_cal_mainP17TILE_PARAM_STRUCT(void);

/* Symbol: _ZN17DpAsyncBlitStream14setConfigBeginEj */
/* Demangled: DpAsyncBlitStream::setConfigBegin(unsigned int) */
int _ZN17DpAsyncBlitStream14setConfigBeginEj(void);

/* Symbol: _ZN18DpAsyncBlitStream29setDstROIEjiiRK6DpRect */
/* Demangled: DpAsyncBlitStream2::setDstROI(unsigned int, int, int, DpRect const&) */
int _ZN18DpAsyncBlitStream29setDstROIEjiiRK6DpRect(void);

/* Symbol: _ZN11DpIspStream14setPQParameterEiRK9DpPqParam */
/* Demangled: DpIspStream::setPQParameter(int, DpPqParam const&) */
int _ZN11DpIspStream14setPQParameterEiRK9DpPqParam(void);

/* Symbol: _ZN16DpPathConnection9s_moutMapE */
/* Demangled: DpPathConnection::s_moutMap */
extern void* _ZN16DpPathConnection9s_moutMapE;

/* Symbol: _ZN13DpPmemHandler12mapHWAddressEij */
/* Demangled: DpPmemHandler::mapHWAddress(int, unsigned int) */
int _ZN13DpPmemHandler12mapHWAddressEij(void);

/* Symbol: _ZNK11DpPortAdapt10getEndTimeEv */
/* Demangled: DpPortAdapt::getEndTime() const */
int _ZNK11DpPortAdapt10getEndTimeEv(void);

/* Symbol: _ZN13DpEngineMutex7releaseER9DpCommand */
/* Demangled: DpEngineMutex::release(DpCommand&) */
int _ZN13DpEngineMutex7releaseER9DpCommand(void);

/* Symbol: _ZN9PQSession17isDCWaitHistEmptyEv */
/* Demangled: PQSession::isDCWaitHistEmpty() */
int _ZN9PQSession17isDCWaitHistEmptyEv(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::imbue(std::__1::locale const&) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE(void);

/* Symbol: _ZN17DpAsyncBlitStream14queryHWSupportEjjjji13DP_COLOR_ENUMS0_P9DpPqParamP6DpRectj */
/* Demangled: DpAsyncBlitStream::queryHWSupport(unsigned int, unsigned int, unsigned int, unsigned int, int, DP_COLOR_ENUM, DP_COLOR_ENUM, DpPqParam*, DpRect*, unsigned int) */
int _ZN17DpAsyncBlitStream14queryHWSupportEjjjji13DP_COLOR_ENUMS0_P9DpPqParamP6DpRectj(void);

/* Symbol: _ZTV7ListPtrIN8DpStream11ChannelNodeEE */
/* Demangled: vtable for ListPtr<DpStream::ChannelNode> */
extern void* _ZTV7ListPtrIN8DpStream11ChannelNodeEE;

/* Symbol: _ZN8DpDriver12getTDSHPGainEP15DISPLAY_TDSHP_TPj */
/* Demangled: DpDriver::getTDSHPGain(DISPLAY_TDSHP_T*, unsigned int*) */
int _ZN8DpDriver12getTDSHPGainEP15DISPLAY_TDSHP_TPj(void);

/* Symbol: _ZN11PQDCAdaptor15destroyInstanceEv */
/* Demangled: PQDCAdaptor::destroyInstance() */
int _ZN11PQDCAdaptor15destroyInstanceEv(void);

/* Symbol: _ZN8DpDriver11getInstanceEv */
/* Demangled: DpDriver::getInstance() */
int _ZN8DpDriver11getInstanceEv(void);

/* Symbol: g_profileTemp */
/* Demangled: g_profileTemp */
extern void* g_profileTemp;

/* Symbol: _ZN8PQAshmem20setAshmemValueByAddrEPji */
/* Demangled: PQAshmem::setAshmemValueByAddr(unsigned int*, int) */
int _ZN8PQAshmem20setAshmemValueByAddrEPji(void);

/* Symbol: _ZN14PQColorAdaptor18onConfigLocal3DLUTEP14COLOR_CONFIG_TR9DpCommandRiPi */
/* Demangled: PQColorAdaptor::onConfigLocal3DLUT(COLOR_CONFIG_T*, DpCommand&, int&, int*) */
int _ZN14PQColorAdaptor18onConfigLocal3DLUTEP14COLOR_CONFIG_TR9DpCommandRiPi(void);

/* Symbol: _ZN12PQHDRAdaptor13onConfigCcorrER9DpCommandP10DHDROUTPUT */
/* Demangled: PQHDRAdaptor::onConfigCcorr(DpCommand&, DHDROUTPUT*) */
int _ZN12PQHDRAdaptor13onConfigCcorrER9DpCommandP10DHDROUTPUT(void);

/* Symbol: _ZN16DpRingBufferPool15flushReadBufferEi */
/* Demangled: DpRingBufferPool::flushReadBuffer(int) */
int _ZN16DpRingBufferPool15flushReadBufferEi(void);

/* Symbol: _ZN14DpCommandQueue12setSubtaskIdEj */
/* Demangled: DpCommandQueue::setSubtaskId(unsigned int) */
int _ZN14DpCommandQueue12setSubtaskIdEj(void);

/* Symbol: _ZN14DpCommandQueue17getReadbackStatusERbS0_RiRyRj */
/* Demangled: DpCommandQueue::getReadbackStatus(bool&, bool&, int&, unsigned long long&, unsigned int&) */
int _ZN14DpCommandQueue17getReadbackStatusERbS0_RiRyRj(void);

/* Symbol: _ZN13DpPathControl13onStartStreamEv */
/* Demangled: DpPathControl::onStartStream() */
int _ZN13DpPathControl13onStartStreamEv(void);

/* Symbol: _ZN12DpBlitStream10invalidateEP7timeval */
/* Demangled: DpBlitStream::invalidate(timeval*) */
int _ZN12DpBlitStream10invalidateEP7timeval(void);

/* Symbol: _ZN17PQReadBackFactory11s_pInstanceE */
/* Demangled: PQReadBackFactory::s_pInstance */
extern void* _ZN17PQReadBackFactory11s_pInstanceE;

/* Symbol: _ZN9PQSession13setCurCutPosXEj */
/* Demangled: PQSession::setCurCutPosX(unsigned int) */
int _ZN9PQSession13setCurCutPosXEj(void);

/* Symbol: _ZN21PQDREHistogramAdaptor12PrintAddressEj */
/* Demangled: PQDREHistogramAdaptor::PrintAddress(unsigned int) */
int _ZN21PQDREHistogramAdaptor12PrintAddressEj(void);

/* Symbol: _ZN12DpEngineBase13onFlushBufferENS_15FLUSH_TYPE_ENUME */
/* Demangled: DpEngineBase::onFlushBuffer(DpEngineBase::FLUSH_TYPE_ENUM) */
int _ZN12DpEngineBase13onFlushBufferENS_15FLUSH_TYPE_ENUME(void);

/* Symbol: _ZN17DpAsyncBlitStream10waitSubmitEv */
/* Demangled: DpAsyncBlitStream::waitSubmit() */
int _ZN17DpAsyncBlitStream10waitSubmitEv(void);

/* Symbol: _ZNK11DpPortAdapt15getIsp2MdpParamEPvPi */
/* Demangled: DpPortAdapt::getIsp2MdpParam(void*, int*) const */
int _ZNK11DpPortAdapt15getIsp2MdpParamEPvPi(void);

/* Symbol: _ZN17DpCommandRecorder9dupRecordENS_9BlockTypeE */
/* Demangled: DpCommandRecorder::dupRecord(DpCommandRecorder::BlockType) */
int _ZN17DpCommandRecorder9dupRecordENS_9BlockTypeE(void);

/* Symbol: _ZN10DpTilePath6configEi */
/* Demangled: DpTilePath::config(int) */
int _ZN10DpTilePath6configEi(void);

/* Symbol: _ZN13DpEngine_WROT11onWaitEventER9DpCommand */
/* Demangled: DpEngine_WROT::onWaitEvent(DpCommand&) */
int _ZN13DpEngine_WROT11onWaitEventER9DpCommand(void);

/* Symbol: _ZN10PQDSConfig18composeDSParameterEiR13GlobalPQParamib */
/* Demangled: PQDSConfig::composeDSParameter(int, GlobalPQParam&, int, bool) */
int _ZN10PQDSConfig18composeDSParameterEiR13GlobalPQParamib(void);

/* Symbol: _ZN12PQHDRAdaptorD2Ev */
/* Demangled: PQHDRAdaptor::~PQHDRAdaptor() */
int _ZN12PQHDRAdaptorD2Ev(void);

/* Symbol: _ZN14DpPathTopology11connectPathERA25_iiRyS1_ */
/* Demangled: DpPathTopology::connectPath(int (&) [25], int, unsigned long long&, int (&) [25]) */
int _ZN14DpPathTopology11connectPathERA25_iiRyS1_(void);

/* Symbol: _ZN17DpBasicBufferPoolD2Ev */
/* Demangled: DpBasicBufferPool::~DpBasicBufferPool() */
int _ZN17DpBasicBufferPoolD2Ev(void);

/* Symbol: _ZN17DpAsyncBlitStream12setSrcBufferEPPvS1_Pjji */
/* Demangled: DpAsyncBlitStream::setSrcBuffer(void**, void**, unsigned int*, unsigned int, int) */
int _ZN17DpAsyncBlitStream12setSrcBufferEPPvS1_Pjji(void);

/* Symbol: _ZN12DpBlitStreamD2Ev */
/* Demangled: DpBlitStream::~DpBlitStream() */
int _ZN12DpBlitStreamD2Ev(void);

/* Symbol: _ZN12DpVEncStream11setPortTypeEijP13DpVEnc_Config */
/* Demangled: DpVEncStream::setPortType(int, unsigned int, DpVEnc_Config*) */
int _ZN12DpVEncStream11setPortTypeEijP13DpVEnc_Config(void);

/* Symbol: _ZN9PQSession19setCameraDpPqConfigEP10DpPqConfigPK9DpPqParam */
/* Demangled: PQSession::setCameraDpPqConfig(DpPqConfig*, DpPqParam const*) */
int _ZN9PQSession19setCameraDpPqConfigEP10DpPqConfigPK9DpPqParam(void);

/* Symbol: _ZN9PQSessionC2Ey */
/* Demangled: PQSession::PQSession(unsigned long long) */
int _ZN9PQSessionC2Ey(void);

/* Symbol: _ZN18PQAlgorithmFactoryD1Ev */
/* Demangled: PQAlgorithmFactory::~PQAlgorithmFactory() */
int _ZN18PQAlgorithmFactoryD1Ev(void);

/* Symbol: _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE */
/* Demangled: vtable for std::__1::basic_filebuf<char, std::__1::char_traits<char> > */
extern void* _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE;

/* Symbol: _ZN14DpEngine_TDSHP14onDeInitEngineER9DpCommand */
/* Demangled: DpEngine_TDSHP::onDeInitEngine(DpCommand&) */
int _ZN14DpEngine_TDSHP14onDeInitEngineER9DpCommand(void);

/* Symbol: _ZN16DpBufferPoolBase13decorateProxyEPNS_10BufferNodeE */
/* Demangled: DpBufferPoolBase::decorateProxy(DpBufferPoolBase::BufferNode*) */
int _ZN16DpBufferPoolBase13decorateProxyEPNS_10BufferNodeE(void);

/* Symbol: _ZN16DpBufferPoolBase13dumpUfoBufferEi13DP_COLOR_ENUMiiiiPKc */
/* Demangled: DpBufferPoolBase::dumpUfoBuffer(int, DP_COLOR_ENUM, int, int, int, int, char const*) */
int _ZN16DpBufferPoolBase13dumpUfoBufferEi13DP_COLOR_ENUMiiiiPKc(void);

/* Symbol: _Z14__createThreadPlPFPvS0_ES0_ */
/* Demangled: __createThread(long*, void* (*)(void*), void*) */
int _Z14__createThreadPlPFPvS0_ES0_(void);

/* Symbol: _ZN11DpPortAdapt13getDualOffsetEPiS0_S0_S0_S0_ */
/* Demangled: DpPortAdapt::getDualOffset(int*, int*, int*, int*, int*) */
int _ZN11DpPortAdapt13getDualOffsetEPiS0_S0_S0_S0_(void);

/* Symbol: _ZN14DpCommandQueue19getReadbackPABufferERj */
/* Demangled: DpCommandQueue::getReadbackPABuffer(unsigned int&) */
int _ZN14DpCommandQueue19getReadbackPABufferERj(void);

/* Symbol: _ZN12DpIonHandler11s_IONHandleE */
/* Demangled: DpIonHandler::s_IONHandle */
extern void* _ZN12DpIonHandler11s_IONHandleE;

/* Symbol: _ZN6DpSync14createTimelineEv */
/* Demangled: DpSync::createTimeline() */
int _ZN6DpSync14createTimelineEv(void);

/* Symbol: _ZN9PQSession22getHDRDoneHistListSizeEv */
/* Demangled: PQSession::getHDRDoneHistListSize() */
int _ZN9PQSession22getHDRDoneHistListSizeEv(void);

/* Symbol: _ZN14PQTuningBuffer4pushEv */
/* Demangled: PQTuningBuffer::push() */
int _ZN14PQTuningBuffer4pushEv(void);

/* Symbol: _ZN8PQAshmemC2Ev */
/* Demangled: PQAshmem::PQAshmem() */
int _ZN8PQAshmemC2Ev(void);

/* Symbol: _Z22tile_back_comp_resizerP36TILE_RESIZER_BACKWARD_CAL_ARG_STRUCTP22TILE_FUNC_BLOCK_STRUCT */
/* Demangled: tile_back_comp_resizer(TILE_RESIZER_BACKWARD_CAL_ARG_STRUCT*, TILE_FUNC_BLOCK_STRUCT*) */
int _Z22tile_back_comp_resizerP36TILE_RESIZER_BACKWARD_CAL_ARG_STRUCTP22TILE_FUNC_BLOCK_STRUCT(void);

/* Symbol: _Z18utilWriteBinBySizePKcPvj */
/* Demangled: utilWriteBinBySize(char const*, void*, unsigned int) */
int _Z18utilWriteBinBySizePKcPvj(void);

/* Symbol: _ZN17DpBasicBufferPool16registerBufferFDEiPjiiPi */
/* Demangled: DpBasicBufferPool::registerBufferFD(int, unsigned int*, int, int, int*) */
int _ZN17DpBasicBufferPool16registerBufferFDEiPjiiPi(void);

/* Symbol: _ZN12DpEngineBase7FactoryEi */
/* Demangled: DpEngineBase::Factory(int) */
int _ZN12DpEngineBase7FactoryEi(void);

/* Symbol: _ZN9PQSession18setDrePreviousSizeEii */
/* Demangled: PQSession::setDrePreviousSize(int, int) */
int _ZN9PQSession18setDrePreviousSizeEii(void);

/* Symbol: _ZN13DpWrapper_WPE11onWaitEventER9DpCommand */
/* Demangled: DpWrapper_WPE::onWaitEvent(DpCommand&) */
int _ZN13DpWrapper_WPE11onWaitEventER9DpCommand(void);

/* Symbol: _Z28tile_copy_config_by_platformP17TILE_PARAM_STRUCTPK23ISP_TPIPE_CONFIG_STRUCT */
/* Demangled: tile_copy_config_by_platform(TILE_PARAM_STRUCT*, ISP_TPIPE_CONFIG_STRUCT const*) */
int _Z28tile_copy_config_by_platformP17TILE_PARAM_STRUCTPK23ISP_TPIPE_CONFIG_STRUCT(void);

/* Symbol: _ZN8PQConfig11s_pInstanceE */
/* Demangled: PQConfig::s_pInstance */
extern void* _ZN8PQConfig11s_pInstanceE;

/* Symbol: _ZN14DpPathComposerC2EP8DpStream */
/* Demangled: DpPathComposer::DpPathComposer(DpStream*) */
int _ZN14DpPathComposerC2EP8DpStream(void);

/* Symbol: _Z14notifyScenario16DP_SCENARIO_ENUM */
/* Demangled: notifyScenario(DP_SCENARIO_ENUM) */
int _Z14notifyScenario16DP_SCENARIO_ENUM(void);

/* Symbol: _ZN17DpCommandRecorder10stopRecordEv */
/* Demangled: DpCommandRecorder::stopRecord() */
int _ZN17DpCommandRecorder10stopRecordEv(void);

/* Symbol: _ZN13DpEngine_RDMA11onWaitEventER9DpCommand */
/* Demangled: DpEngine_RDMA::onWaitEvent(DpCommand&) */
int _ZN13DpEngine_RDMA11onWaitEventER9DpCommand(void);

/* Symbol: _ZN13DpWrapper_WPE14onInitTileCalcEP17TILE_PARAM_STRUCT */
/* Demangled: DpWrapper_WPE::onInitTileCalc(TILE_PARAM_STRUCT*) */
int _ZN13DpWrapper_WPE14onInitTileCalcEP17TILE_PARAM_STRUCT(void);

/* Symbol: _ZN11PQRSZConfigC2Ev */
/* Demangled: PQRSZConfig::PQRSZConfig() */
int _ZN11PQRSZConfigC2Ev(void);

/* Symbol: _ZN12PQHDRAdaptor14tuningHDRInputEP9DHDRINPUTi */
/* Demangled: PQHDRAdaptor::tuningHDRInput(DHDRINPUT*, int) */
int _ZN12PQHDRAdaptor14tuningHDRInputEP9DHDRINPUTi(void);

/* Symbol: _ZN12PQDREAdaptor11onCalculateEP9PQSessionR9DpPqParambjP12DRETopOutputP14DREVPTopOutputPbiijji */
/* Demangled: PQDREAdaptor::onCalculate(PQSession*, DpPqParam&, bool, unsigned int, DRETopOutput*, DREVPTopOutput*, bool*, int, int, unsigned int, unsigned int, int) */
int _ZN12PQDREAdaptor11onCalculateEP9PQSessionR9DpPqParambjP12DRETopOutputP14DREVPTopOutputPbiijji(void);

/* Symbol: _ZN16DpPathConnection10s_selInMapE */
/* Demangled: DpPathConnection::s_selInMap */
extern void* _ZN16DpPathConnection10s_selInMapE;

/* Symbol: _ZN9PQSession24deleteDCDoneHistListNodeEv */
/* Demangled: PQSession::deleteDCDoneHistListNode() */
int _ZN9PQSession24deleteDCDoneHistListNodeEv(void);

/* Symbol: _ZN11PQDCAdaptor11getInstanceEj */
/* Demangled: PQDCAdaptor::getInstance(unsigned int) */
int _ZN11PQDCAdaptor11getInstanceEj(void);

/* Symbol: _ZN14PQTuningBuffer21queryAshmemBufferBaseEv */
/* Demangled: PQTuningBuffer::queryAshmemBufferBase() */
int _ZN14PQTuningBuffer21queryAshmemBufferBaseEv(void);

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIRKjEEvOT_ */
/* Demangled: void std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__push_back_slow_path<unsigned int const&>(unsigned int const&) */
int _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIRKjEEvOT_(void);

/* Symbol: _ZN17DpCommandRecorder14getHDRReadbackEv */
/* Demangled: DpCommandRecorder::getHDRReadback() */
int _ZN17DpCommandRecorder14getHDRReadbackEv(void);

/* Symbol: _ZN12DpMmuHandlerD1Ev */
/* Demangled: DpMmuHandler::~DpMmuHandler() */
int _ZN12DpMmuHandlerD1Ev(void);

/* Symbol: _ZN16PQSessionManager14isIdDuplicatedEy */
/* Demangled: PQSessionManager::isIdDuplicated(unsigned long long) */
int _ZN16PQSessionManager14isIdDuplicatedEy(void);

/* Symbol: _ZN12PQHDRAdaptor14setLastHDRInfoE24_DP_VDEC_DRV_COLORDESC_T */
/* Demangled: PQHDRAdaptor::setLastHDRInfo(_DP_VDEC_DRV_COLORDESC_T) */
int _ZN12PQHDRAdaptor14setLastHDRInfoE24_DP_VDEC_DRV_COLORDESC_T(void);

/* Symbol: _ZN11DpIspStream14queueDstBufferEiPiPjS1_i */
/* Demangled: DpIspStream::queueDstBuffer(int, int*, unsigned int*, unsigned int*, int) */
int _ZN11DpIspStream14queueDstBufferEiPiPjS1_i(void);

/* Symbol: _ZN12PQDREAdaptor15destroyInstanceEv */
/* Demangled: PQDREAdaptor::destroyInstance() */
int _ZN12PQDREAdaptor15destroyInstanceEv(void);

/* Symbol: _ZN14DpPathComposer9onComposeEv */
/* Demangled: DpPathComposer::onCompose() */
int _ZN14DpPathComposer9onComposeEv(void);

/* Symbol: _ZN14DpCommandQueue13initRegDstNumEv */
/* Demangled: DpCommandQueue::initRegDstNum() */
int _ZN14DpCommandQueue13initRegDstNumEv(void);

/* Symbol: _ZN13DpEngine_WPEO13onConfigFrameER9DpCommandR8DpConfig */
/* Demangled: DpEngine_WPEO::onConfigFrame(DpCommand&, DpConfig&) */
int _ZN13DpEngine_WPEO13onConfigFrameER9DpCommandR8DpConfig(void);

/* Symbol: _ZN12DpIonHandler11s_instMutexE */
/* Demangled: DpIonHandler::s_instMutex */
extern void* _ZN12DpIonHandler11s_instMutexE;

/* Symbol: _Z28tile_tdr_isp_reg_to_dump_bldP19TILE_REG_MAP_STRUCTPjS1_ji */
/* Demangled: tile_tdr_isp_reg_to_dump_bld(TILE_REG_MAP_STRUCT*, unsigned int*, unsigned int*, unsigned int, int) */
int _Z28tile_tdr_isp_reg_to_dump_bldP19TILE_REG_MAP_STRUCTPjS1_ji(void);

/* Symbol: _Z38tile_tdr_isp_dump_inv_reg_internal_wpeP19TILE_REG_MAP_STRUCTS0_iPjjj */
/* Demangled: tile_tdr_isp_dump_inv_reg_internal_wpe(TILE_REG_MAP_STRUCT*, TILE_REG_MAP_STRUCT*, int, unsigned int*, unsigned int, unsigned int) */
int _Z38tile_tdr_isp_dump_inv_reg_internal_wpeP19TILE_REG_MAP_STRUCTS0_iPjjj(void);

/* Symbol: _ZN11DpIspStream12waitCompleteEv */
/* Demangled: DpIspStream::waitComplete() */
int _ZN11DpIspStream12waitCompleteEv(void);

/* Symbol: _ZN21PQDREHistogramAdaptor14storeDREOutputEPvjPK14DREVPTopOutput */
/* Demangled: PQDREHistogramAdaptor::storeDREOutput(void*, unsigned int, DREVPTopOutput const*) */
int _ZN21PQDREHistogramAdaptor14storeDREOutputEPvjPK14DREVPTopOutput(void);

/* Symbol: _ZN10DpTilePath18onConfigCommandEndER9DpCommand */
/* Demangled: DpTilePath::onConfigCommandEnd(DpCommand&) */
int _ZN10DpTilePath18onConfigCommandEndER9DpCommand(void);

/* Symbol: _ZN11PQDCAdaptorD1Ev */
/* Demangled: PQDCAdaptor::~PQDCAdaptor() */
int _ZN11PQDCAdaptorD1Ev(void);

/* Symbol: _ZN17DpAsyncBlitStreamC1Ev */
/* Demangled: DpAsyncBlitStream::DpAsyncBlitStream() */
int _ZN17DpAsyncBlitStreamC1Ev(void);

/* Symbol: WPEIReg */
/* Demangled: WPEIReg */
extern void* WPEIReg;

/* Symbol: _ZN12DpVEncStream16dequeueSrcBufferEv */
/* Demangled: DpVEncStream::dequeueSrcBuffer() */
int _ZN12DpVEncStream16dequeueSrcBufferEv(void);

/* Symbol: _ZN9PQSession11setDCHandleEP8dcHandle */
/* Demangled: PQSession::setDCHandle(dcHandle*) */
int _ZN9PQSession11setDCHandleEP8dcHandle(void);

/* Symbol: _ZN12PQHDRAdaptor18initHDRInitParamInEP24_DP_VDEC_DRV_COLORDESC_TP9DHDRINPUTbjR8DpConfig */
/* Demangled: PQHDRAdaptor::initHDRInitParamIn(_DP_VDEC_DRV_COLORDESC_T*, DHDRINPUT*, bool, unsigned int, DpConfig&) */
int _ZN12PQHDRAdaptor18initHDRInitParamInEP24_DP_VDEC_DRV_COLORDESC_TP9DHDRINPUTbjR8DpConfig(void);

/* Symbol: _ZN16PQSessionManager18m_CapturepreAAL1IdE */
/* Demangled: PQSessionManager::m_CapturepreAAL1Id */
extern void* _ZN16PQSessionManager18m_CapturepreAAL1IdE;

/* Symbol: _ZN8PQConfig21updatePQServiceStatusEv */
/* Demangled: PQConfig::updatePQServiceStatus() */
int _ZN8PQConfig21updatePQServiceStatusEv(void);

/* Symbol: _Z24tile_tdr_isp_reg_to_dumpP19TILE_REG_MAP_STRUCTPjS1_ji */
/* Demangled: tile_tdr_isp_reg_to_dump(TILE_REG_MAP_STRUCT*, unsigned int*, unsigned int*, unsigned int, int) */
int _Z24tile_tdr_isp_reg_to_dumpP19TILE_REG_MAP_STRUCTPjS1_ji(void);

/* Symbol: _ZN11DpIspStream12setDstConfigEi13DP_COLOR_ENUMiiib */
/* Demangled: DpIspStream::setDstConfig(int, DP_COLOR_ENUM, int, int, int, bool) */
int _ZN11DpIspStream12setDstConfigEi13DP_COLOR_ENUMiiib(void);

/* Symbol: _ZN11PQHDRConfigD1Ev */
/* Demangled: PQHDRConfig::~PQHDRConfig() */
int _ZN11PQHDRConfigD1Ev(void);

/* Symbol: _Z29tile_tdr_isp_mask_to_dump_eafP19TILE_REG_MAP_STRUCTPjS1_ */
/* Demangled: tile_tdr_isp_mask_to_dump_eaf(TILE_REG_MAP_STRUCT*, unsigned int*, unsigned int*) */
int _Z29tile_tdr_isp_mask_to_dump_eafP19TILE_REG_MAP_STRUCTPjS1_(void);

/* Symbol: _ZN17DpAsyncBlitStream12setDstConfigEjii13DP_COLOR_ENUM17DpInterlaceFormatP6DpRectj */
/* Demangled: DpAsyncBlitStream::setDstConfig(unsigned int, int, int, DP_COLOR_ENUM, DpInterlaceFormat, DpRect*, unsigned int) */
int _ZN17DpAsyncBlitStream12setDstConfigEjii13DP_COLOR_ENUM17DpInterlaceFormatP6DpRectj(void);

/* Symbol: _ZN11DpIspStream19queueBatchDstBufferEiP12DpBufferDescjj */
/* Demangled: DpIspStream::queueBatchDstBuffer(int, DpBufferDesc*, unsigned int, unsigned int) */
int _ZN11DpIspStream19queueBatchDstBufferEiP12DpBufferDescjj(void);

/* Symbol: _ZN18PQAlgorithmFactoryD2Ev */
/* Demangled: PQAlgorithmFactory::~PQAlgorithmFactory() */
int _ZN18PQAlgorithmFactoryD2Ev(void);

/* Symbol: _Z37tile_tdr_isp_fprint_dump_internal_wpeP7__sFILEP19TILE_REG_MAP_STRUCTiPjS3_jj */
/* Demangled: tile_tdr_isp_fprint_dump_internal_wpe(__sFILE*, TILE_REG_MAP_STRUCT*, int, unsigned int*, unsigned int*, unsigned int, unsigned int) */
int _Z37tile_tdr_isp_fprint_dump_internal_wpeP7__sFILEP19TILE_REG_MAP_STRUCTiPjS3_jj(void);

/* Symbol: _ZN16DpBufferPoolBase16insertBufferNodeE14DP_MEMORY_ENUMiPPvPjS3_PP8DpMemoryiS3_b */
/* Demangled: DpBufferPoolBase::insertBufferNode(DP_MEMORY_ENUM, int, void**, unsigned int*, unsigned int*, DpMemory**, int, unsigned int*, bool) */
int _ZN16DpBufferPoolBase16insertBufferNodeE14DP_MEMORY_ENUMiPPvPjS3_PP8DpMemoryiS3_b(void);

/* Symbol: _ZN11DpPortAdapt13setDualOffsetEPKiS1_S1_S1_S1_ */
/* Demangled: DpPortAdapt::setDualOffset(int const*, int const*, int const*, int const*, int const*) */
int _ZN11DpPortAdapt13setDualOffsetEPKiS1_S1_S1_S1_(void);

/* Symbol: _Z38tile_tdr_isp_dump_inv_reg_internal_eafP19TILE_REG_MAP_STRUCTS0_iPjjj */
/* Demangled: tile_tdr_isp_dump_inv_reg_internal_eaf(TILE_REG_MAP_STRUCT*, TILE_REG_MAP_STRUCT*, int, unsigned int*, unsigned int, unsigned int) */
int _Z38tile_tdr_isp_dump_inv_reg_internal_eafP19TILE_REG_MAP_STRUCTS0_iPjjj(void);

/* Symbol: _ZN12PQRSZAdaptor15tuningRSZOutputEP9RszOutputi */
/* Demangled: PQRSZAdaptor::tuningRSZOutput(RszOutput*, int) */
int _ZN12PQRSZAdaptor15tuningRSZOutputEP9RszOutputi(void);

/* Symbol: _ZN17DpBasicBufferPool16unregisterBufferEi */
/* Demangled: DpBasicBufferPool::unregisterBuffer(int) */
int _ZN17DpBasicBufferPool16unregisterBufferEi(void);

/* Symbol: _ZN13DpEngine_WROT14onDeInitEngineER9DpCommand */
/* Demangled: DpEngine_WROT::onDeInitEngine(DpCommand&) */
int _ZN13DpEngine_WROT14onDeInitEngineER9DpCommand(void);

/* Symbol: _ZN12PQDREAdaptor11calTileRegsER9DpCommandP9PQSessionjjjjjjjjjjij */
/* Demangled: PQDREAdaptor::calTileRegs(DpCommand&, PQSession*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, int, unsigned int) */
int _ZN12PQDREAdaptor11calTileRegsER9DpCommandP9PQSessionjjjjjjjjjjij(void);

/* Symbol: _ZN12DpEngine_HDR13onConfigFrameER9DpCommandR8DpConfig */
/* Demangled: DpEngine_HDR::onConfigFrame(DpCommand&, DpConfig&) */
int _ZN12DpEngine_HDR13onConfigFrameER9DpCommandR8DpConfig(void);

/* Symbol: _ZN8DpDriver12removeRefCntEy */
/* Demangled: DpDriver::removeRefCnt(unsigned long long) */
int _ZN8DpDriver12removeRefCntEy(void);

/* Symbol: _ZN9PQSession12HandleHDRRefEv */
/* Demangled: PQSession::HandleHDRRef() */
int _ZN9PQSession12HandleHDRRefEv(void);

/* Symbol: _ZN9DpChannel15setIsp2MdpParamEPvi */
/* Demangled: DpChannel::setIsp2MdpParam(void*, int) */
int _ZN9DpChannel15setIsp2MdpParamEPvi(void);

/* Symbol: _ZN11DpIspStream17configPQParameterEi */
/* Demangled: DpIspStream::configPQParameter(int) */
int _ZN11DpIspStream17configPQParameterEi(void);

/* Symbol: _Z21tile_proc_main_singleP19TILE_REG_MAP_STRUCTP23FUNC_DESCRIPTION_STRUCTP24ISP_TILE_HEX_DUMP_STRUCTP27ISP_TPIPE_DESCRIPTOR_STRUCTiPbP7__sFILE */
/* Demangled: tile_proc_main_single(TILE_REG_MAP_STRUCT*, FUNC_DESCRIPTION_STRUCT*, ISP_TILE_HEX_DUMP_STRUCT*, ISP_TPIPE_DESCRIPTOR_STRUCT*, int, bool*, __sFILE*) */
int _Z21tile_proc_main_singleP19TILE_REG_MAP_STRUCTP23FUNC_DESCRIPTION_STRUCTP24ISP_TILE_HEX_DUMP_STRUCTP27ISP_TPIPE_DESCRIPTOR_STRUCTiPbP7__sFILE(void);

/* Symbol: _ZN12DpEngine_AAL14onDeInitEngineER9DpCommand */
/* Demangled: DpEngine_AAL::onDeInitEngine(DpCommand&) */
int _ZN12DpEngine_AAL14onDeInitEngineER9DpCommand(void);

/* Symbol: _ZN12DpMmuHandlerC2EPvjj */
/* Demangled: DpMmuHandler::DpMmuHandler(void*, unsigned int, unsigned int) */
int _ZN12DpMmuHandlerC2EPvjj(void);

/* Symbol: _ZN12DpEngine_SCL20getRsz6TapTableIndexEi */
/* Demangled: DpEngine_SCL::getRsz6TapTableIndex(int) */
int _ZN12DpEngine_SCL20getRsz6TapTableIndexEi(void);

/* Symbol: _ZN17PQReadBackFactory9s_ALMutexE */
/* Demangled: PQReadBackFactory::s_ALMutex */
extern void* _ZN17PQReadBackFactory9s_ALMutexE;

/* Symbol: _ZTTNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE */
/* Demangled: VTT for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern void* _ZTTNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE;

/* Symbol: _ZN14PQColorAdaptorD1Ev */
/* Demangled: PQColorAdaptor::~PQColorAdaptor() */
int _ZN14PQColorAdaptorD1Ev(void);

/* Symbol: _ZN12PQDREAdaptor12setDREOutputEP14DREVPTopOutputb */
/* Demangled: PQDREAdaptor::setDREOutput(DREVPTopOutput*, bool) */
int _ZN12PQDREAdaptor12setDREOutputEP14DREVPTopOutputb(void);

/* Symbol: _ZN12PQDREAdaptor22setDRESkinWgtSetBufferEP12DREsharedatab */
/* Demangled: PQDREAdaptor::setDRESkinWgtSetBuffer(DREsharedata*, bool) */
int _ZN12PQDREAdaptor22setDRESkinWgtSetBufferEP12DREsharedatab(void);

/* Symbol: _ZN12DpFragStream12setDstBufferEiPjj */
/* Demangled: DpFragStream::setDstBuffer(int, unsigned int*, unsigned int) */
int _ZN12DpFragStream12setDstBufferEiPjj(void);

/* Symbol: _ZN17DpCommandRecorder8endLabelEv */
/* Demangled: DpCommandRecorder::endLabel() */
int _ZN17DpCommandRecorder8endLabelEv(void);

/* Symbol: _ZN12DpMmuHandlerD2Ev */
/* Demangled: DpMmuHandler::~DpMmuHandler() */
int _ZN12DpMmuHandlerD2Ev(void);

/* Symbol: _ZN8PQConfig15destroyInstanceEv */
/* Demangled: PQConfig::destroyInstance() */
int _ZN8PQConfig15destroyInstanceEv(void);

/* Symbol: _ZN18DpAsyncBlitStream27setFlipEji */
/* Demangled: DpAsyncBlitStream2::setFlip(unsigned int, int) */
int _ZN18DpAsyncBlitStream27setFlipEji(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN12PQDREAdaptor9dumpFwRegEbPK9DpPqParamP10DpPqConfigPK11DRETopInputPK12DRETopOutputPK10DREInitRegPK6DRERegPK17TAdaptiveCALTMRegPK23TAdaptiveCALTMFace_ExifPK23TAdaptiveCALTMFace_Dump */
/* Demangled: PQDREAdaptor::dumpFwReg(bool, DpPqParam const*, DpPqConfig*, DRETopInput const*, DRETopOutput const*, DREInitReg const*, DREReg const*, TAdaptiveCALTMReg const*, TAdaptiveCALTMFace_Exif const*, TAdaptiveCALTMFace_Dump const*) */
int _ZN12PQDREAdaptor9dumpFwRegEbPK9DpPqParamP10DpPqConfigPK11DRETopInputPK12DRETopOutputPK10DREInitRegPK6DRERegPK17TAdaptiveCALTMRegPK23TAdaptiveCALTMFace_ExifPK23TAdaptiveCALTMFace_Dump(void);

/* Symbol: _ZN16DpRingBufferPool16pollBufferStatusE16CLIENT_TYPE_ENUMb */
/* Demangled: DpRingBufferPool::pollBufferStatus(CLIENT_TYPE_ENUM, bool) */
int _ZN16DpRingBufferPool16pollBufferStatusE16CLIENT_TYPE_ENUMb(void);

/* Symbol: _ZN17DpBasicBufferPool17registerBufferFDsEPiPjS1_iiS0_ */
/* Demangled: DpBasicBufferPool::registerBufferFDs(int*, unsigned int*, unsigned int*, int, int, int*) */
int _ZN17DpBasicBufferPool17registerBufferFDsEPiPjS1_iiS0_(void);

/* Symbol: _ZN18DpAsyncBlitStream212_calcCropROIERNS_7CropROIES1_13DP_COLOR_ENUMbbbb */
/* Demangled: DpAsyncBlitStream2::_calcCropROI(DpAsyncBlitStream2::CropROI&, DpAsyncBlitStream2::CropROI&, DP_COLOR_ENUM, bool, bool, bool, bool) */
int _ZN18DpAsyncBlitStream212_calcCropROIERNS_7CropROIES1_13DP_COLOR_ENUMbbbb(void);

/* Symbol: _ZN11PQDSAdaptor13initDSFWparamEP11DS_CONFIG_TR8DpConfigP7DSInputbP9DpPqParam */
/* Demangled: PQDSAdaptor::initDSFWparam(DS_CONFIG_T*, DpConfig&, DSInput*, bool, DpPqParam*) */
int _ZN11PQDSAdaptor13initDSFWparamEP11DS_CONFIG_TR8DpConfigP7DSInputbP9DpPqParam(void);

/* Symbol: _ZN11DpIspStream12createThreadEv */
/* Demangled: DpIspStream::createThread() */
int _ZN11DpIspStream12createThreadEv(void);

/* Symbol: _ZN17DpCommandRecorder11getScenarioEv */
/* Demangled: DpCommandRecorder::getScenario() */
int _ZN17DpCommandRecorder11getScenarioEv(void);

/* Symbol: _ZN13DpEngine_WROT12onConfigTileER9DpCommand */
/* Demangled: DpEngine_WROT::onConfigTile(DpCommand&) */
int _ZN13DpEngine_WROT12onConfigTileER9DpCommand(void);

/* Symbol: _ZN12DpIonHandler15import_internalEi */
/* Demangled: DpIonHandler::import_internal(int) */
int _ZN12DpIonHandler15import_internalEi(void);

/* Symbol: _ZN12DpMmuHandlerC2Ejj */
/* Demangled: DpMmuHandler::DpMmuHandler(unsigned int, unsigned int) */
int _ZN12DpMmuHandlerC2Ejj(void);

/* Symbol: _ZN14PQTuningBufferC2E17ProxyTuningBuffer */
/* Demangled: PQTuningBuffer::PQTuningBuffer(ProxyTuningBuffer) */
int _ZN14PQTuningBufferC2E17ProxyTuningBuffer(void);

/* Symbol: _ZN14PQColorAdaptor7calRegsEP9PQSessionR9DpCommandiiPib */
/* Demangled: PQColorAdaptor::calRegs(PQSession*, DpCommand&, int, int, int*, bool) */
int _ZN14PQColorAdaptor7calRegsEP9PQSessionR9DpCommandiiPib(void);

/* Symbol: _ZN12PQDREAdaptor11s_pInstanceE */
/* Demangled: PQDREAdaptor::s_pInstance */
extern void* _ZN12PQDREAdaptor11s_pInstanceE;

/* Symbol: _ZN12PQDREAdaptor15setDREFrameInfoEP12DREFrameInfob */
/* Demangled: PQDREAdaptor::setDREFrameInfo(DREFrameInfo*, bool) */
int _ZN12PQDREAdaptor15setDREFrameInfoEP12DREFrameInfob(void);

/* Symbol: _ZN14DpEngine_TDSHP12onInitEngineER9DpCommand */
/* Demangled: DpEngine_TDSHP::onInitEngine(DpCommand&) */
int _ZN14DpEngine_TDSHP12onInitEngineER9DpCommand(void);

/* Symbol: _Z21conv_compact_to_blockPhjjjjjjS_ */
/* Demangled: conv_compact_to_block(unsigned char*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned char*) */
int _Z21conv_compact_to_blockPhjjjjjjS_(void);

/* Symbol: _ZN8DpDriver13submitCommandER14DpCommandBlockPyjPPc */
/* Demangled: DpDriver::submitCommand(DpCommandBlock&, unsigned long long*, unsigned int, char**) */
int _ZN8DpDriver13submitCommandER14DpCommandBlockPyjPPc(void);

/* Symbol: _ZN14DpPathComposer9setupPathE16STREAM_TYPE_ENUM */
/* Demangled: DpPathComposer::setupPath(STREAM_TYPE_ENUM) */
int _ZN14DpPathComposer9setupPathE16STREAM_TYPE_ENUM(void);

/* Symbol: _ZN12DpFragStream8stopFragEv */
/* Demangled: DpFragStream::stopFrag() */
int _ZN12DpFragStream8stopFragEv(void);

/* Symbol: _ZN11PQDCAdaptorD2Ev */
/* Demangled: PQDCAdaptor::~PQDCAdaptor() */
int _ZN11PQDCAdaptorD2Ev(void);

/* Symbol: _ZN11PQIspTuning17getRszTuningValueEP6RszRegP8RszInput */
/* Demangled: PQIspTuning::getRszTuningValue(RszReg*, RszInput*) */
int _ZN11PQIspTuning17getRszTuningValueEP6RszRegP8RszInput(void);

/* Symbol: _Z45tpipe_main_query_platform_working_buffer_sizei */
/* Demangled: tpipe_main_query_platform_working_buffer_size(int) */
int _Z45tpipe_main_query_platform_working_buffer_sizei(void);

/* Symbol: _ZN17DpAsyncBlitStreamC2Ev */
/* Demangled: DpAsyncBlitStream::DpAsyncBlitStream() */
int _ZN17DpAsyncBlitStreamC2Ev(void);

/* Symbol: _ZN12DpVEncStream10stopStreamEv */
/* Demangled: DpVEncStream::stopStream() */
int _ZN12DpVEncStream10stopStreamEv(void);

/* Symbol: _ZN9PQSession16setHDRisLeftDoneEb */
/* Demangled: PQSession::setHDRisLeftDone(bool) */
int _ZN9PQSession16setHDRisLeftDoneEb(void);

/* Symbol: _ZN18DpAsyncBlitStream210invalidateEP7timeval */
/* Demangled: DpAsyncBlitStream2::invalidate(timeval*) */
int _ZN18DpAsyncBlitStream210invalidateEP7timeval(void);

/* Symbol: _ZN11DpPortAdapt10pollStatusE16CLIENT_TYPE_ENUMb */
/* Demangled: DpPortAdapt::pollStatus(CLIENT_TYPE_ENUM, bool) */
int _ZN11DpPortAdapt10pollStatusE16CLIENT_TYPE_ENUMb(void);

/* Symbol: _ZN9PQSession25deleteHDRDoneHistListNodeEv */
/* Demangled: PQSession::deleteHDRDoneHistListNode() */
int _ZN9PQSession25deleteHDRDoneHistListNodeEv(void);

/* Symbol: _ZN14PQColorAdaptor17onUpdateSatEngineEP14COLOR_CONFIG_TR9DpCommandRiPi */
/* Demangled: PQColorAdaptor::onUpdateSatEngine(COLOR_CONFIG_T*, DpCommand&, int&, int*) */
int _ZN14PQColorAdaptor17onUpdateSatEngineEP14COLOR_CONFIG_TR9DpCommandRiPi(void);

/* Symbol: _ZN17PQReadBackFactory11getInstanceEv */
/* Demangled: PQReadBackFactory::getInstance() */
int _ZN17PQReadBackFactory11getInstanceEv(void);

/* Symbol: _ZN14DpCommandQueue12addMMpathLogEPKcj14DP_MMPATH_ENUM */
/* Demangled: DpCommandQueue::addMMpathLog(char const*, unsigned int, DP_MMPATH_ENUM) */
int _ZN14DpCommandQueue12addMMpathLogEPKcj14DP_MMPATH_ENUM(void);

/* Symbol: _ZN14DpCommandQueue4stopEb */
/* Demangled: DpCommandQueue::stop(bool) */
int _ZN14DpCommandQueue4stopEb(void);

/* Symbol: _ZN13DpEngine_RDMA12onConfigTileER9DpCommand */
/* Demangled: DpEngine_RDMA::onConfigTile(DpCommand&) */
int _ZN13DpEngine_RDMA12onConfigTileER9DpCommand(void);

/* Symbol: _ZN9PQSession9addHWNodeEj */
/* Demangled: PQSession::addHWNode(unsigned int) */
int _ZN9PQSession9addHWNodeEj(void);

/* Symbol: _ZN11PQHDRConfigD2Ev */
/* Demangled: PQHDRConfig::~PQHDRConfig() */
int _ZN11PQHDRConfigD2Ev(void);

/* Symbol: _ZN13DpWrapper_ISP11onWaitEventER9DpCommand */
/* Demangled: DpWrapper_ISP::onWaitEvent(DpCommand&) */
int _ZN13DpWrapper_ISP11onWaitEventER9DpCommand(void);

/* Symbol: _ZN12DpIonHandler12mapSWAddressEv */
/* Demangled: DpIonHandler::mapSWAddress() */
int _ZN12DpIonHandler12mapSWAddressEv(void);

/* Symbol: _ZN8PQConfig13getDebugLevelEv */
/* Demangled: PQConfig::getDebugLevel() */
int _ZN8PQConfig13getDebugLevelEv(void);

/* Symbol: _ZN12PQHDRAdaptor11onUpdateHDRER9DpCommandP10DHDROUTPUTPi */
/* Demangled: PQHDRAdaptor::onUpdateHDR(DpCommand&, DHDROUTPUT*, int*) */
int _ZN12PQHDRAdaptor11onUpdateHDRER9DpCommandP10DHDROUTPUTPi(void);

/* Symbol: _ZN16DpBufferPoolBase15waitBufferFenceEi */
/* Demangled: DpBufferPoolBase::waitBufferFence(int) */
int _ZN16DpBufferPoolBase15waitBufferFenceEi(void);

/* Symbol: _ZN12DpVEncStream17setBatchParameterEPP23ISP_TPIPE_CONFIG_STRUCTjj */
/* Demangled: DpVEncStream::setBatchParameter(ISP_TPIPE_CONFIG_STRUCT**, unsigned int, unsigned int) */
int _ZN12DpVEncStream17setBatchParameterEPP23ISP_TPIPE_CONFIG_STRUCTjj(void);

/* Symbol: _ZN14DpCommandQueue22setNumReadbackPABufferEjj */
/* Demangled: DpCommandQueue::setNumReadbackPABuffer(unsigned int, unsigned int) */
int _ZN14DpCommandQueue22setNumReadbackPABufferEjj(void);

/* Symbol: _ZN13DpPathControlC1EP8DpStream */
/* Demangled: DpPathControl::DpPathControl(DpStream*) */
int _ZN13DpPathControlC1EP8DpStream(void);

/* Symbol: _ZN11DpIspStream15dequeueFrameEndEPj */
/* Demangled: DpIspStream::dequeueFrameEnd(unsigned int*) */
int _ZN11DpIspStream15dequeueFrameEndEPj(void);

/* Symbol: _ZN12DpVEncStreamD1Ev */
/* Demangled: DpVEncStream::~DpVEncStream() */
int _ZN12DpVEncStreamD1Ev(void);

/* Symbol: _ZTV17DpCommandRecorder */
/* Demangled: vtable for DpCommandRecorder */
extern void* _ZTV17DpCommandRecorder;

/* Symbol: _Z10setESLWROTR9DpCommandj13DP_COLOR_ENUM */
/* Demangled: setESLWROT(DpCommand&, unsigned int, DP_COLOR_ENUM) */
int _Z10setESLWROTR9DpCommandj13DP_COLOR_ENUM(void);

/* Symbol: _ZN8PQConfig9s_ALMutexE */
/* Demangled: PQConfig::s_ALMutex */
extern void* _ZN8PQConfig9s_ALMutexE;

/* Symbol: _ZN12PQHDRAdaptor15destroyInstanceEv */
/* Demangled: PQHDRAdaptor::destroyInstance() */
int _ZN12PQHDRAdaptor15destroyInstanceEv(void);

/* Symbol: _ZN18DpAsyncBlitStream212setDstBufferEjPvji */
/* Demangled: DpAsyncBlitStream2::setDstBuffer(unsigned int, void*, unsigned int, int) */
int _ZN18DpAsyncBlitStream212setDstBufferEjPvji(void);

/* Symbol: _ZN12DpIonHandlerD0Ev */
/* Demangled: DpIonHandler::~DpIonHandler() */
int _ZN12DpIonHandlerD0Ev(void);

/* Symbol: _ZN14PQTuningBuffer16isBypassHWAccessEv */
/* Demangled: PQTuningBuffer::isBypassHWAccess() */
int _ZN14PQTuningBuffer16isBypassHWAccessEv(void);

/* Symbol: _ZN11PQDCAdaptor11isADLEnableEii */
/* Demangled: PQDCAdaptor::isADLEnable(int, int) */
int _ZN11PQDCAdaptor11isADLEnableEii(void);

/* Symbol: _ZN21PQDREHistogramAdaptor11getDREInputEPvjiiP11DRETopInputPjRj */
/* Demangled: PQDREHistogramAdaptor::getDREInput(void*, unsigned int, int, int, DRETopInput*, unsigned int*, unsigned int&) */
int _ZN21PQDREHistogramAdaptor11getDREInputEPvjiiP11DRETopInputPjRj(void);

/* Symbol: _Z28tile_tdr_isp_fprint_dump_eafP7__sFILEP19TILE_REG_MAP_STRUCTiPjS3_jj */
/* Demangled: tile_tdr_isp_fprint_dump_eaf(__sFILE*, TILE_REG_MAP_STRUCT*, int, unsigned int*, unsigned int*, unsigned int, unsigned int) */
int _Z28tile_tdr_isp_fprint_dump_eafP7__sFILEP19TILE_REG_MAP_STRUCTiPjS3_jj(void);

/* Symbol: _Z24wrapper_tile_cal_main_dpiP17TILE_PARAM_STRUCT */
/* Demangled: wrapper_tile_cal_main_dp(int, TILE_PARAM_STRUCT*) */
int _Z24wrapper_tile_cal_main_dpiP17TILE_PARAM_STRUCT(void);

/* Symbol: _ZN12DpIonHandler12queryFeatureEv */
/* Demangled: DpIonHandler::queryFeature() */
int _ZN12DpIonHandler12queryFeatureEv(void);

/* Symbol: _ZN8PQConfig13checkBootModeEv */
/* Demangled: PQConfig::checkBootMode() */
int _ZN8PQConfig13checkBootModeEv(void);

/* Symbol: _ZN14PQColorAdaptorD2Ev */
/* Demangled: PQColorAdaptor::~PQColorAdaptor() */
int _ZN14PQColorAdaptorD2Ev(void);

/* Symbol: _Z38tile_tdr_isp_dump_inv_reg_internal_bldP19TILE_REG_MAP_STRUCTS0_iPjjj */
/* Demangled: tile_tdr_isp_dump_inv_reg_internal_bld(TILE_REG_MAP_STRUCT*, TILE_REG_MAP_STRUCT*, int, unsigned int*, unsigned int, unsigned int) */
int _Z38tile_tdr_isp_dump_inv_reg_internal_bldP19TILE_REG_MAP_STRUCTS0_iPjjj(void);

/* Symbol: _ZN13DpEngine_RDMA13onConfigFrameER9DpCommandR8DpConfig */
/* Demangled: DpEngine_RDMA::onConfigFrame(DpCommand&, DpConfig&) */
int _ZN13DpEngine_RDMA13onConfigFrameER9DpCommandR8DpConfig(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::pbackfail(int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi(void);

/* Symbol: _ZN12DpTileEngine25getContinueReadbackBufferER9DpCommandPjRjj */
/* Demangled: DpTileEngine::getContinueReadbackBuffer(DpCommand&, unsigned int*, unsigned int&, unsigned int) */
int _ZN12DpTileEngine25getContinueReadbackBufferER9DpCommandPjRjj(void);

/* Symbol: _ZN12DpEngine_AAL12onInitEngineER9DpCommand */
/* Demangled: DpEngine_AAL::onInitEngine(DpCommand&) */
int _ZN12DpEngine_AAL12onInitEngineER9DpCommand(void);

/* Symbol: _ZN9PQSession17cleanAIParamDirtyEv */
/* Demangled: PQSession::cleanAIParamDirty() */
int _ZN9PQSession17cleanAIParamDirtyEv(void);

/* Symbol: _ZN14DpPathComposer9mergePathEP11DpPortAdaptS1_RA25_iiiP10DpPathBase */
/* Demangled: DpPathComposer::mergePath(DpPortAdapt*, DpPortAdapt*, int (&) [25], int, int, DpPathBase*) */
int _ZN14DpPathComposer9mergePathEP11DpPortAdaptS1_RA25_iiiP10DpPathBase(void);

/* Symbol: _ZN16DpPathConnectionD1Ev */
/* Demangled: DpPathConnection::~DpPathConnection() */
int _ZN16DpPathConnectionD1Ev(void);

/* Symbol: _ZN17DpAsyncBlitStream12setDstConfigEjiiii13DP_COLOR_ENUM15DP_PROFILE_ENUM17DpInterlaceFormatP6DpRect8DpSecurebji */
/* Demangled: DpAsyncBlitStream::setDstConfig(unsigned int, int, int, int, int, DP_COLOR_ENUM, DP_PROFILE_ENUM, DpInterlaceFormat, DpRect*, DpSecure, bool, unsigned int, int) */
int _ZN17DpAsyncBlitStream12setDstConfigEjiiii13DP_COLOR_ENUM15DP_PROFILE_ENUM17DpInterlaceFormatP6DpRect8DpSecurebji(void);

/* Symbol: _ZN17DpCommandRecorder9addMetLogEPKcj */
/* Demangled: DpCommandRecorder::addMetLog(char const*, unsigned int) */
int _ZN17DpCommandRecorder9addMetLogEPKcj(void);

/* Symbol: _ZN10PQDSConfig13isDShpEnabledEb */
/* Demangled: PQDSConfig::isDShpEnabled(bool) */
int _ZN10PQDSConfig13isDShpEnabledEb(void);

/* Symbol: _ZN12DpFragStream14setPQParameterERK9DpPqParam */
/* Demangled: DpFragStream::setPQParameter(DpPqParam const&) */
int _ZN12DpFragStream14setPQParameterERK9DpPqParam(void);

/* Symbol: _ZN17DpCommandRecorder12addMMpathLogEPKcj14DP_MMPATH_ENUM */
/* Demangled: DpCommandRecorder::addMMpathLog(char const*, unsigned int, DP_MMPATH_ENUM) */
int _ZN17DpCommandRecorder12addMMpathLogEPKcj14DP_MMPATH_ENUM(void);

/* Symbol: _ZN13PQColorConfig9isEnabledEib */
/* Demangled: PQColorConfig::isEnabled(int, bool) */
int _ZN13PQColorConfig9isEnabledEib(void);

/* Symbol: _ZN13DpPathControl17onDumpDebugStreamEv */
/* Demangled: DpPathControl::onDumpDebugStream() */
int _ZN13DpPathControl17onDumpDebugStreamEv(void);

/* Symbol: _ZN12PQHDRAdaptor7getPQIDEb */
/* Demangled: PQHDRAdaptor::getPQID(bool) */
int _ZN12PQHDRAdaptor7getPQIDEb(void);

/* Symbol: _ZNK16DpRingBufferPool13mapBufferLineEiiPiS0_ */
/* Demangled: DpRingBufferPool::mapBufferLine(int, int, int*, int*) const */
int _ZNK16DpRingBufferPool13mapBufferLineEiiPiS0_(void);

/* Symbol: WROT1Reg */
/* Demangled: WROT1Reg */
extern void* WROT1Reg;

/* Symbol: _ZN9PQSession8getDSRegEPK9DpPqParamPj */
/* Demangled: PQSession::getDSReg(DpPqParam const*, unsigned int*) */
int _ZN9PQSession8getDSRegEPK9DpPqParamPj(void);

/* Symbol: _Z12utilWriteBinPKcPvS1_S1_13DP_COLOR_ENUMiiii */
/* Demangled: utilWriteBin(char const*, void*, void*, void*, DP_COLOR_ENUM, int, int, int, int) */
int _Z12utilWriteBinPKcPvS1_S1_13DP_COLOR_ENUMiiii(void);

/* Symbol: _ZN16DpBufferPoolBase10dumpBufferEi13DP_COLOR_ENUMiiiiPKc */
/* Demangled: DpBufferPoolBase::dumpBuffer(int, DP_COLOR_ENUM, int, int, int, int, char const*) */
int _ZN16DpBufferPoolBase10dumpBufferEi13DP_COLOR_ENUMiiiiPKc(void);

/* Symbol: _ZN16DpBufferPoolBase21getSWBaseWithIDBySizeEiPPvj */
/* Demangled: DpBufferPoolBase::getSWBaseWithIDBySize(int, void**, unsigned int) */
int _ZN16DpBufferPoolBase21getSWBaseWithIDBySizeEiPPvj(void);

/* Symbol: _ZN8PQConfig11getInstanceEv */
/* Demangled: PQConfig::getInstance() */
int _ZN8PQConfig11getInstanceEv(void);

/* Symbol: _ZThn170348_N12DpTilePathST10threadLoopEv */
/* Demangled: non-virtual thunk to DpTilePathST::threadLoop() */
int _ZThn170348_N12DpTilePathST10threadLoopEv(void);

/* Symbol: _ZN8DpDriver19queryDeviceTreeInfoEv */
/* Demangled: DpDriver::queryDeviceTreeInfo() */
int _ZN8DpDriver19queryDeviceTreeInfoEv(void);

/* Symbol: _ZN9PQSession17isDCDoneHistEmptyEv */
/* Demangled: PQSession::isDCDoneHistEmpty() */
int _ZN9PQSession17isDCDoneHistEmptyEv(void);

/* Symbol: _ZN8DpStream11resetStreamEv */
/* Demangled: DpStream::resetStream() */
int _ZN8DpStream11resetStreamEv(void);

/* Symbol: _ZN18DpAsyncBlitStream216queryPaddingSideEj */
/* Demangled: DpAsyncBlitStream2::queryPaddingSide(unsigned int) */
int _ZN18DpAsyncBlitStream216queryPaddingSideEj(void);

/* Symbol: _ZN9PQSession14getNodePipeNumEv */
/* Demangled: PQSession::getNodePipeNum() */
int _ZN9PQSession14getNodePipeNumEv(void);

/* Symbol: _ZN14DpCommandQueue4markEN9DpCommand15BLOCK_TYPE_ENUME */
/* Demangled: DpCommandQueue::mark(DpCommand::BLOCK_TYPE_ENUM) */
int _ZN14DpCommandQueue4markEN9DpCommand15BLOCK_TYPE_ENUME(void);

/* Symbol: _ZN9PQSession13setDpPqConfigEP10DpPqConfigPK9DpPqParam */
/* Demangled: PQSession::setDpPqConfig(DpPqConfig*, DpPqParam const*) */
int _ZN9PQSession13setDpPqConfigEP10DpPqConfigPK9DpPqParam(void);

/* Symbol: _Z37tile_tdr_isp_fprint_dump_internal_bldP7__sFILEP19TILE_REG_MAP_STRUCTiPjS3_jj */
/* Demangled: tile_tdr_isp_fprint_dump_internal_bld(__sFILE*, TILE_REG_MAP_STRUCT*, int, unsigned int*, unsigned int*, unsigned int, unsigned int) */
int _Z37tile_tdr_isp_fprint_dump_internal_bldP7__sFILEP19TILE_REG_MAP_STRUCTiPjS3_jj(void);

/* Symbol: _ZNK11DpPortAdapt13getSourceCropEPiS0_S0_S0_S0_S0_S0_S0_ */
/* Demangled: DpPortAdapt::getSourceCrop(int*, int*, int*, int*, int*, int*, int*, int*) const */
int _ZNK11DpPortAdapt13getSourceCropEPiS0_S0_S0_S0_S0_S0_S0_(void);

/* Symbol: _ZN11DpIspStream14queueSrcBufferEPvj */
/* Demangled: DpIspStream::queueSrcBuffer(void*, unsigned int) */
int _ZN11DpIspStream14queueSrcBufferEPvj(void);

/* Symbol: _ZN12DpTileEngine19onRetrieveTileParamEP17TILE_PARAM_STRUCT */
/* Demangled: DpTileEngine::onRetrieveTileParam(TILE_PARAM_STRUCT*) */
int _ZN12DpTileEngine19onRetrieveTileParamEP17TILE_PARAM_STRUCT(void);

/* Symbol: _ZN12DpVEncStream14queueDstBufferEiiPji */
/* Demangled: DpVEncStream::queueDstBuffer(int, int, unsigned int*, int) */
int _ZN12DpVEncStream14queueDstBufferEiiPji(void);

/* Symbol: _ZN17DpCommandRecorder12getRegDstNumEv */
/* Demangled: DpCommandRecorder::getRegDstNum() */
int _ZN17DpCommandRecorder12getRegDstNumEv(void);

/* Symbol: _ZN10DpTilePath17dumpTileDebugInfoE21ISP_TILE_MESSAGE_ENUM */
/* Demangled: DpTilePath::dumpTileDebugInfo(ISP_TILE_MESSAGE_ENUM) */
int _ZN10DpTilePath17dumpTileDebugInfoE21ISP_TILE_MESSAGE_ENUM(void);

/* Symbol: _ZN12PQHDRAdaptor14onCalculateISPEPK9DpPqParamP9PQSessionP9DHDRINPUTP10DHDROUTPUTR8DpConfigP24_DP_VDEC_DRV_COLORDESC_TP31_DP_VDEC_DRV_DYNAMIC_METADATA_T */
/* Demangled: PQHDRAdaptor::onCalculateISP(DpPqParam const*, PQSession*, DHDRINPUT*, DHDROUTPUT*, DpConfig&, _DP_VDEC_DRV_COLORDESC_T*, _DP_VDEC_DRV_DYNAMIC_METADATA_T*) */
int _ZN12PQHDRAdaptor14onCalculateISPEPK9DpPqParamP9PQSessionP9DHDRINPUTP10DHDROUTPUTR8DpConfigP24_DP_VDEC_DRV_COLORDESC_TP31_DP_VDEC_DRV_DYNAMIC_METADATA_T(void);

/* Symbol: _ZN11PQHDRConfig18getDriverDebugFlagEb */
/* Demangled: PQHDRConfig::getDriverDebugFlag(bool) */
int _ZN11PQHDRConfig18getDriverDebugFlagEb(void);

/* Symbol: _ZTV12DpIonHandler */
/* Demangled: vtable for DpIonHandler */
extern void* _ZTV12DpIonHandler;

/* Symbol: _ZN9PQSession22addHDRWaitHistListNodeE12PQHDRRegInfo */
/* Demangled: PQSession::addHDRWaitHistListNode(PQHDRRegInfo) */
int _ZN9PQSession22addHDRWaitHistListNodeE12PQHDRRegInfo(void);

/* Symbol: _ZN16PQSessionManager15m_maxVideoIndexE */
/* Demangled: PQSessionManager::m_maxVideoIndex */
extern void* _ZN16PQSessionManager15m_maxVideoIndexE;

/* Symbol: _ZN12DpFragStream12setSrcConfigE13DP_COLOR_ENUMiiiiiP6DpRect */
/* Demangled: DpFragStream::setSrcConfig(DP_COLOR_ENUM, int, int, int, int, int, DpRect*) */
int _ZN12DpFragStream12setSrcConfigE13DP_COLOR_ENUMiiiiiP6DpRect(void);

/* Symbol: _ZN12DpVEncStream12setDstConfigEi13DP_COLOR_ENUMiiib */
/* Demangled: DpVEncStream::setDstConfig(int, DP_COLOR_ENUM, int, int, int, bool) */
int _ZN12DpVEncStream12setDstConfigEi13DP_COLOR_ENUMiiib(void);

/* Symbol: _ZN12DpVEncStreamD2Ev */
/* Demangled: DpVEncStream::~DpVEncStream() */
int _ZN12DpVEncStreamD2Ev(void);

/* Symbol: _ZN13DpEngine_WROT13onConfigFrameER9DpCommandR8DpConfig */
/* Demangled: DpEngine_WROT::onConfigFrame(DpCommand&, DpConfig&) */
int _ZN13DpEngine_WROT13onConfigFrameER9DpCommandR8DpConfig(void);

/* Symbol: _ZN11PQDCAdaptor24checkAndResetUnusedADLFWEP9PQSessionP8dcHandley */
/* Demangled: PQDCAdaptor::checkAndResetUnusedADLFW(PQSession*, dcHandle*, unsigned long long) */
int _ZN11PQDCAdaptor24checkAndResetUnusedADLFWEP9PQSessionP8dcHandley(void);

/* Symbol: _Z25tile_tdr_isp_dump_inv_regP19TILE_REG_MAP_STRUCTS0_iPjjj */
/* Demangled: tile_tdr_isp_dump_inv_reg(TILE_REG_MAP_STRUCT*, TILE_REG_MAP_STRUCT*, int, unsigned int*, unsigned int, unsigned int) */
int _Z25tile_tdr_isp_dump_inv_regP19TILE_REG_MAP_STRUCTS0_iPjjj(void);

/* Symbol: _ZN14DpEngine_CAMIN12onConfigTileER9DpCommand */
/* Demangled: DpEngine_CAMIN::onConfigTile(DpCommand&) */
int _ZN14DpEngine_CAMIN12onConfigTileER9DpCommand(void);

/* Symbol: _ZN9PQSession10getHDRModeEv */
/* Demangled: PQSession::getHDRMode() */
int _ZN9PQSession10getHDRModeEv(void);

/* Symbol: _ZN12DpVEncStream16startVideoRecordEjjj */
/* Demangled: DpVEncStream::startVideoRecord(unsigned int, unsigned int, unsigned int) */
int _ZN12DpVEncStream16startVideoRecordEjjj(void);

/* Symbol: _ZN12DpIonHandlerD1Ev */
/* Demangled: DpIonHandler::~DpIonHandler() */
int _ZN12DpIonHandlerD1Ev(void);

/* Symbol: _ZN11DpIspStream14queueDstBufferEiPPvPjS2_i */
/* Demangled: DpIspStream::queueDstBuffer(int, void**, unsigned int*, unsigned int*, int) */
int _ZN11DpIspStream14queueDstBufferEiPPvPjS2_i(void);

/* Symbol: _ZN11DpIspStream14queueDstBufferEiPPvPji */
/* Demangled: DpIspStream::queueDstBuffer(int, void**, unsigned int*, int) */
int _ZN11DpIspStream14queueDstBufferEiPPvPji(void);

/* Symbol: _ZN14PQColorAdaptor15destroyInstanceEv */
/* Demangled: PQColorAdaptor::destroyInstance() */
int _ZN14PQColorAdaptor15destroyInstanceEv(void);

/* Symbol: _ZN12PQDREAdaptor12getDREOutputEb */
/* Demangled: PQDREAdaptor::getDREOutput(bool) */
int _ZN12PQDREAdaptor12getDREOutputEb(void);

/* Symbol: _ZN12PQDREAdaptor18debugDumpTransDataEPK12DRETransInfoPK12DREsharedata */
/* Demangled: PQDREAdaptor::debugDumpTransData(DRETransInfo const*, DREsharedata const*) */
int _ZN12PQDREAdaptor18debugDumpTransDataEPK12DRETransInfoPK12DREsharedata(void);

/* Symbol: _ZN17DpAsyncBlitStream12setDstBufferEjPPvPjji */
/* Demangled: DpAsyncBlitStream::setDstBuffer(unsigned int, void**, unsigned int*, unsigned int, int) */
int _ZN17DpAsyncBlitStream12setDstBufferEjPPvPjji(void);

/* Symbol: _ZN8DpDriverC1Ev */
/* Demangled: DpDriver::DpDriver() */
int _ZN8DpDriverC1Ev(void);

/* Symbol: _ZN11PQDSAdaptor15destroyInstanceEv */
/* Demangled: PQDSAdaptor::destroyInstance() */
int _ZN11PQDSAdaptor15destroyInstanceEv(void);

/* Symbol: _Z29tile_tdr_isp_mask_to_dump_bldP19TILE_REG_MAP_STRUCTPjS1_ */
/* Demangled: tile_tdr_isp_mask_to_dump_bld(TILE_REG_MAP_STRUCT*, unsigned int*, unsigned int*) */
int _Z29tile_tdr_isp_mask_to_dump_bldP19TILE_REG_MAP_STRUCTPjS1_(void);

/* Symbol: _ZTV7ListPtrIN16DpRingBufferPool14RingBufferNodeEE */
/* Demangled: vtable for ListPtr<DpRingBufferPool::RingBufferNode> */
extern void* _ZTV7ListPtrIN16DpRingBufferPool14RingBufferNodeEE;

/* Symbol: _ZN18DpAsyncBlitStream2D1Ev */
/* Demangled: DpAsyncBlitStream2::~DpAsyncBlitStream2() */
int _ZN18DpAsyncBlitStream2D1Ev(void);

/* Symbol: _ZN12DpVEncStream10waitSubmitEv */
/* Demangled: DpVEncStream::waitSubmit() */
int _ZN12DpVEncStream10waitSubmitEv(void);

/* Symbol: _ZN14DpCommandQueue4readEjjj */
/* Demangled: DpCommandQueue::read(unsigned int, unsigned int, unsigned int) */
int _ZN14DpCommandQueue4readEjjj(void);

/* Symbol: _ZN17DpCommandRecorder10dumpRecordEv */
/* Demangled: DpCommandRecorder::dumpRecord() */
int _ZN17DpCommandRecorder10dumpRecordEv(void);

/* Symbol: _ZN11PQDREConfig11isVPEnabledEb */
/* Demangled: PQDREConfig::isVPEnabled(bool) */
int _ZN11PQDREConfig11isVPEnabledEb(void);

/* Symbol: _ZN17DpCommandRecorder12setSubtaskIdEj */
/* Demangled: DpCommandRecorder::setSubtaskId(unsigned int) */
int _ZN17DpCommandRecorder12setSubtaskIdEj(void);

/* Symbol: _ZN16DpPathConnectionD2Ev */
/* Demangled: DpPathConnection::~DpPathConnection() */
int _ZN16DpPathConnectionD2Ev(void);

/* Symbol: _ZN11DpIspStream14queueSrcBufferEPjS0_i */
/* Demangled: DpIspStream::queueSrcBuffer(unsigned int*, unsigned int*, int) */
int _ZN11DpIspStream14queueSrcBufferEPjS0_i(void);

/* Symbol: _Z12VENCPostProcP13DpVEnc_ConfigjPj */
/* Demangled: VENCPostProc(DpVEnc_Config*, unsigned int, unsigned int*) */
int _Z12VENCPostProcP13DpVEnc_ConfigjPj(void);

/* Symbol: _ZN14DpCommandQueue5writeEjjj */
/* Demangled: DpCommandQueue::write(unsigned int, unsigned int, unsigned int) */
int _ZN14DpCommandQueue5writeEjjj(void);

/* Symbol: _ZN12DpEngine_HDR15onReconfigFrameER9DpCommandR8DpConfig */
/* Demangled: DpEngine_HDR::onReconfigFrame(DpCommand&, DpConfig&) */
int _ZN12DpEngine_HDR15onReconfigFrameER9DpCommandR8DpConfig(void);

/* Symbol: _ZN9PQSession6getSVPEv */
/* Demangled: PQSession::getSVP() */
int _ZN9PQSession6getSVPEv(void);

/* Symbol: _ZN11PQDSAdaptor13dumpFwRegInFwEP9DpPqParamP7DSInputP8DSOutputP5DSRegP9PQSession */
/* Demangled: PQDSAdaptor::dumpFwRegInFw(DpPqParam*, DSInput*, DSOutput*, DSReg*, PQSession*) */
int _ZN11PQDSAdaptor13dumpFwRegInFwEP9DpPqParamP7DSInputP8DSOutputP5DSRegP9PQSession(void);

/* Symbol: _Z10setESLWDMAR9DpCommand13DP_COLOR_ENUM */
/* Demangled: setESLWDMA(DpCommand&, DP_COLOR_ENUM) */
int _Z10setESLWDMAR9DpCommand13DP_COLOR_ENUM(void);

/* Symbol: _Z17funcFitConstraintP16DpRingBufferPooliiiiRiS1_S1_S1_ */
/* Demangled: funcFitConstraint(DpRingBufferPool*, int, int, int, int, int&, int&, int&, int&) */
int _Z17funcFitConstraintP16DpRingBufferPooliiiiRiS1_S1_S1_(void);

/* Symbol: _ZN9DpChannelC1Ev */
/* Demangled: DpChannel::DpChannel() */
int _ZN9DpChannelC1Ev(void);

/* Symbol: _ZN12DpFragStream7getPqIDEv */
/* Demangled: DpFragStream::getPqID() */
int _ZN12DpFragStream7getPqIDEv(void);

/* Symbol: _ZN16PQSessionManager9s_ALMutexE */
/* Demangled: PQSessionManager::s_ALMutex */
extern void* _ZN16PQSessionManager9s_ALMutexE;

/* Symbol: _Z24tile_print_error_message21ISP_TILE_MESSAGE_ENUM */
/* Demangled: tile_print_error_message(ISP_TILE_MESSAGE_ENUM) */
int _Z24tile_print_error_message21ISP_TILE_MESSAGE_ENUM(void);

/* Symbol: _ZN14DpCommandQueueC2EP10DpPathBasej */
/* Demangled: DpCommandQueue::DpCommandQueue(DpPathBase*, unsigned int) */
int _ZN14DpCommandQueueC2EP10DpPathBasej(void);

/* Symbol: _ZN9PQSession14getDCisHW0DoneEv */
/* Demangled: PQSession::getDCisHW0Done() */
int _ZN9PQSession14getDCisHW0DoneEv(void);

/* Symbol: _ZN11PQDCAdaptor10getDCTableEb */
/* Demangled: PQDCAdaptor::getDCTable(bool) */
int _ZN11PQDCAdaptor10getDCTableEb(void);

/* Symbol: _ZN17PQReadBackFactoryD1Ev */
/* Demangled: PQReadBackFactory::~PQReadBackFactory() */
int _ZN17PQReadBackFactoryD1Ev(void);

/* Symbol: _ZN14PQColorAdaptor11s_pInstanceE */
/* Demangled: PQColorAdaptor::s_pInstance */
extern void* _ZN14PQColorAdaptor11s_pInstanceE;

/* Symbol: _ZN13DpPathControl12onInitStreamEv */
/* Demangled: DpPathControl::onInitStream() */
int _ZN13DpPathControl12onInitStreamEv(void);

/* Symbol: _ZN12DpTileEngine14onInitTileCalcEP17TILE_PARAM_STRUCT */
/* Demangled: DpTileEngine::onInitTileCalc(TILE_PARAM_STRUCT*) */
int _ZN12DpTileEngine14onInitTileCalcEP17TILE_PARAM_STRUCT(void);

/* Symbol: _ZN8DpDriver12getEnableMetEv */
/* Demangled: DpDriver::getEnableMet() */
int _ZN8DpDriver12getEnableMetEv(void);

/* Symbol: _ZN13DpWrapper_ISP15onDumpDebugInfoEv */
/* Demangled: DpWrapper_ISP::onDumpDebugInfo() */
int _ZN13DpWrapper_ISP15onDumpDebugInfoEv(void);

/* Symbol: _ZN11PQDSAdaptor11getInstanceEj */
/* Demangled: PQDSAdaptor::getInstance(unsigned int) */
int _ZN11PQDSAdaptor11getInstanceEj(void);

/* Symbol: _ZN14DpPathComposer16createPathAndNewEP11DpPortAdaptS1_RA25_iiiRP10DpPathBasei16STREAM_TYPE_ENUM */
/* Demangled: DpPathComposer::createPathAndNew(DpPortAdapt*, DpPortAdapt*, int (&) [25], int, int, DpPathBase*&, int, STREAM_TYPE_ENUM) */
int _ZN14DpPathComposer16createPathAndNewEP11DpPortAdaptS1_RA25_iiiRP10DpPathBasei16STREAM_TYPE_ENUM(void);

/* Symbol: _ZN21PQDREHistogramAdaptor15findEmptyBufferEyPj */
/* Demangled: PQDREHistogramAdaptor::findEmptyBuffer(unsigned long long, unsigned int*) */
int _ZN21PQDREHistogramAdaptor15findEmptyBufferEyPj(void);

/* Symbol: _ZN17DpAsyncBlitStream12setDstBufferEjPPvS1_Pjji */
/* Demangled: DpAsyncBlitStream::setDstBuffer(unsigned int, void**, void**, unsigned int*, unsigned int, int) */
int _ZN17DpAsyncBlitStream12setDstBufferEjPPvS1_Pjji(void);

/* Symbol: _ZN9DpChannel13addTargetPortEi14PORT_TYPE_ENUM13DP_COLOR_ENUMiiiiibyjbP16DpBufferPoolBase15DP_PROFILE_ENUM8DpSecurebPK13DpColorMatrixPv */
/* Demangled: DpChannel::addTargetPort(int, PORT_TYPE_ENUM, DP_COLOR_ENUM, int, int, int, int, int, bool, unsigned long long, unsigned int, bool, DpBufferPoolBase*, DP_PROFILE_ENUM, DpSecure, bool, DpColorMatrix const*, void*) */
int _ZN9DpChannel13addTargetPortEi14PORT_TYPE_ENUM13DP_COLOR_ENUMiiiiibyjbP16DpBufferPoolBase15DP_PROFILE_ENUM8DpSecurebPK13DpColorMatrixPv(void);

/* Symbol: _ZN12DpBlitStream12setDstConfigEiiii13DP_COLOR_ENUM15DP_PROFILE_ENUM17DpInterlaceFormatP6DpRect8DpSecureb */
/* Demangled: DpBlitStream::setDstConfig(int, int, int, int, DP_COLOR_ENUM, DP_PROFILE_ENUM, DpInterlaceFormat, DpRect*, DpSecure, bool) */
int _ZN12DpBlitStream12setDstConfigEiiii13DP_COLOR_ENUM15DP_PROFILE_ENUM17DpInterlaceFormatP6DpRect8DpSecureb(void);

/* Symbol: _ZN17DpCommandRecorder13getPQReadbackEv */
/* Demangled: DpCommandRecorder::getPQReadback() */
int _ZN17DpCommandRecorder13getPQReadbackEv(void);

/* Symbol: _ZN16DpPathConnection10enablePathER9DpCommand */
/* Demangled: DpPathConnection::enablePath(DpCommand&) */
int _ZN16DpPathConnection10enablePathER9DpCommand(void);

/* Symbol: _ZNK8DpDriver13getEventValueEi */
/* Demangled: DpDriver::getEventValue(int) const */
int _ZNK8DpDriver13getEventValueEi(void);

/* Symbol: _ZN17DpCommandRecorderC1EP10DpPathBase */
/* Demangled: DpCommandRecorder::DpCommandRecorder(DpPathBase*) */
int _ZN17DpCommandRecorderC1EP10DpPathBase(void);

/* Symbol: _ZN12PQDREAdaptor17debugDumpFrameRegEPK12DRETopOutputPK12DREInitParamPK10DREInitRegj */
/* Demangled: PQDREAdaptor::debugDumpFrameReg(DRETopOutput const*, DREInitParam const*, DREInitReg const*, unsigned int) */
int _ZN12PQDREAdaptor17debugDumpFrameRegEPK12DRETopOutputPK12DREInitParamPK10DREInitRegj(void);

/* Symbol: _ZN16DpRingBufferPool13destroyBufferEv */
/* Demangled: DpRingBufferPool::destroyBuffer() */
int _ZN16DpRingBufferPool13destroyBufferEv(void);

/* Symbol: _ZN11PQDSAdaptor11onCalculateEPK7DSInputP8DSOutput */
/* Demangled: PQDSAdaptor::onCalculate(DSInput const*, DSOutput*) */
int _ZN11PQDSAdaptor11onCalculateEPK7DSInputP8DSOutput(void);

/* Symbol: _ZN12PQHDRAdaptor11onConfigHDRER9DpCommandP10DHDROUTPUTPi */
/* Demangled: PQHDRAdaptor::onConfigHDR(DpCommand&, DHDROUTPUT*, int*) */
int _ZN12PQHDRAdaptor11onConfigHDRER9DpCommandP10DHDROUTPUTPi(void);

/* Symbol: _ZN14DpPathComposerC1EP8DpStream */
/* Demangled: DpPathComposer::DpPathComposer(DpStream*) */
int _ZN14DpPathComposerC1EP8DpStream(void);

/* Symbol: _ZN13DpWrapper_WPE12initTilePathEP17TILE_PARAM_STRUCT */
/* Demangled: DpWrapper_WPE::initTilePath(TILE_PARAM_STRUCT*) */
int _ZN13DpWrapper_WPE12initTilePathEP17TILE_PARAM_STRUCT(void);

/* Symbol: _ZN16DpBufferPoolBaseC2E16BUFFER_TYPE_ENUM */
/* Demangled: DpBufferPoolBase::DpBufferPoolBase(BUFFER_TYPE_ENUM) */
int _ZN16DpBufferPoolBaseC2E16BUFFER_TYPE_ENUM(void);

/* Symbol: _ZN12DpIonHandlerD2Ev */
/* Demangled: DpIonHandler::~DpIonHandler() */
int _ZN12DpIonHandlerD2Ev(void);

/* Symbol: _ZN10PQDSConfigC1Ev */
/* Demangled: PQDSConfig::PQDSConfig() */
int _ZN10PQDSConfigC1Ev(void);

/* Symbol: _ZN18PQAlgorithmAdaptorC1E17ProxyTuningBufferS0_S0_S0_ */
/* Demangled: PQAlgorithmAdaptor::PQAlgorithmAdaptor(ProxyTuningBuffer, ProxyTuningBuffer, ProxyTuningBuffer, ProxyTuningBuffer) */
int _ZN18PQAlgorithmAdaptorC1E17ProxyTuningBufferS0_S0_S0_(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPci */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::setbuf(char*, int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPci(void);

/* Symbol: _ZN14DpPathTopologyD1Ev */
/* Demangled: DpPathTopology::~DpPathTopology() */
int _ZN14DpPathTopologyD1Ev(void);

/* Symbol: _ZN12DpEngineBase13reconfigFrameER9DpCommandR8DpConfig */
/* Demangled: DpEngineBase::reconfigFrame(DpCommand&, DpConfig&) */
int _ZN12DpEngineBase13reconfigFrameER9DpCommandR8DpConfig(void);

/* Symbol: _ZN12DpVEncStream14setPQParameterEiRK9DpPqParam */
/* Demangled: DpVEncStream::setPQParameter(int, DpPqParam const&) */
int _ZN12DpVEncStream14setPQParameterEiRK9DpPqParam(void);

/* Symbol: _ZN8DpDriverC2Ev */
/* Demangled: DpDriver::DpDriver() */
int _ZN8DpDriverC2Ev(void);

/* Symbol: _ZN8PQAshmem22getAshmemValueByOffsetEjPi */
/* Demangled: PQAshmem::getAshmemValueByOffset(unsigned int, int*) */
int _ZN8PQAshmem22getAshmemValueByOffsetEjPi(void);

/* Symbol: _Z43tile_tpipe_conf_and_isp_reg_cmp_without_tdrP19TILE_REG_MAP_STRUCTP23ISP_TPIPE_CONFIG_STRUCTPKcS4_S4_S4_S4_S4_PvS5_S5_S5_ */
/* Demangled: tile_tpipe_conf_and_isp_reg_cmp_without_tdr(TILE_REG_MAP_STRUCT*, ISP_TPIPE_CONFIG_STRUCT*, char const*, char const*, char const*, char const*, char const*, char const*, void*, void*, void*, void*) */
int _Z43tile_tpipe_conf_and_isp_reg_cmp_without_tdrP19TILE_REG_MAP_STRUCTP23ISP_TPIPE_CONFIG_STRUCTPKcS4_S4_S4_S4_S4_PvS5_S5_S5_(void);

/* Symbol: _ZN18DpAsyncBlitStream2D2Ev */
/* Demangled: DpAsyncBlitStream2::~DpAsyncBlitStream2() */
int _ZN18DpAsyncBlitStream2D2Ev(void);

/* Symbol: _ZN9PQSession20updateDREShareStatusEi */
/* Demangled: PQSession::updateDREShareStatus(int) */
int _ZN9PQSession20updateDREShareStatusEi(void);

/* Symbol: _ZN12PQDREAdaptor11dumpFWHWRegEjP10DpPqConfigP11CDREVPTopFWP9CDRETopFW12DREVPInitReg10DREInitReg */
/* Demangled: PQDREAdaptor::dumpFWHWReg(unsigned int, DpPqConfig*, CDREVPTopFW*, CDRETopFW*, DREVPInitReg, DREInitReg) */
int _ZN12PQDREAdaptor11dumpFWHWRegEjP10DpPqConfigP11CDREVPTopFWP9CDRETopFW12DREVPInitReg10DREInitReg(void);

/* Symbol: _Z25tile_lut_mdp_func_supportPiP22TILE_FUNC_BLOCK_STRUCTP19TILE_REG_MAP_STRUCT */
/* Demangled: tile_lut_mdp_func_support(int*, TILE_FUNC_BLOCK_STRUCT*, TILE_REG_MAP_STRUCT*) */
int _Z25tile_lut_mdp_func_supportPiP22TILE_FUNC_BLOCK_STRUCTP19TILE_REG_MAP_STRUCT(void);

/* Symbol: _ZN16PQSessionManager12getPQSessionEy */
/* Demangled: PQSessionManager::getPQSession(unsigned long long) */
int _ZN16PQSessionManager12getPQSessionEy(void);

/* Symbol: _ZN14DpCommandQueue4waitEN13DpCommandBase15EVENT_TYPE_ENUME */
/* Demangled: DpCommandQueue::wait(DpCommandBase::EVENT_TYPE_ENUM) */
int _ZN14DpCommandQueue4waitEN13DpCommandBase15EVENT_TYPE_ENUME(void);

/* Symbol: _ZN8DpStream12setHistogramEv */
/* Demangled: DpStream::setHistogram() */
int _ZN8DpStream12setHistogramEv(void);

/* Symbol: _ZN8DpStream25cleanReadbackEngineStatusEj */
/* Demangled: DpStream::cleanReadbackEngineStatus(unsigned int) */
int _ZN8DpStream25cleanReadbackEngineStatusEj(void);

/* Symbol: _ZN18DpAsyncBlitStream212setSrcBufferEPPvS1_Pjji */
/* Demangled: DpAsyncBlitStream2::setSrcBuffer(void**, void**, unsigned int*, unsigned int, int) */
int _ZN18DpAsyncBlitStream212setSrcBufferEPPvS1_Pjji(void);

/* Symbol: _ZNSt3__16vectorIPN18DpAsyncBlitStream216AsyncBlitJobPairENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_ */
/* Demangled: void std::__1::vector<DpAsyncBlitStream2::AsyncBlitJobPair*, std::__1::allocator<DpAsyncBlitStream2::AsyncBlitJobPair*> >::__push_back_slow_path<DpAsyncBlitStream2::AsyncBlitJobPair* const&>(DpAsyncBlitStream2::AsyncBlitJobPair* const&) */
int _ZNSt3__16vectorIPN18DpAsyncBlitStream216AsyncBlitJobPairENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void);

/* Symbol: _ZN9DpChannelC2Ev */
/* Demangled: DpChannel::DpChannel() */
int _ZN9DpChannelC2Ev(void);

/* Symbol: _ZN11PQDCAdaptor13tuningDCSWRegEP6ADLRegi */
/* Demangled: PQDCAdaptor::tuningDCSWReg(ADLReg*, int) */
int _ZN11PQDCAdaptor13tuningDCSWRegEP6ADLRegi(void);

/* Symbol: _ZN21PQDREHistogramAdaptor9s_ALMutexE */
/* Demangled: PQDREHistogramAdaptor::s_ALMutex */
extern void* _ZN21PQDREHistogramAdaptor9s_ALMutexE;

/* Symbol: _ZN8DpStream10addChannelEP9DpChannelPi */
/* Demangled: DpStream::addChannel(DpChannel*, int*) */
int _ZN8DpStream10addChannelEP9DpChannelPi(void);

/* Symbol: _ZN11DpIspStream11setRotationEii */
/* Demangled: DpIspStream::setRotation(int, int) */
int _ZN11DpIspStream11setRotationEii(void);

/* Symbol: _ZNSt3__16vectorIyNS_9allocatorIyEEE21__push_back_slow_pathIRKyEEvOT_ */
/* Demangled: void std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> >::__push_back_slow_path<unsigned long long const&>(unsigned long long const&) */
int _ZNSt3__16vectorIyNS_9allocatorIyEEE21__push_back_slow_pathIRKyEEvOT_(void);

/* Symbol: _ZN17PQReadBackFactoryD2Ev */
/* Demangled: PQReadBackFactory::~PQReadBackFactory() */
int _ZN17PQReadBackFactoryD2Ev(void);

/* Symbol: _ZN16DpBufferPoolBase16flushWriteBufferEi */
/* Demangled: DpBufferPoolBase::flushWriteBuffer(int) */
int _ZN16DpBufferPoolBase16flushWriteBufferEi(void);

/* Symbol: _ZN6DpSyncC1Ev */
/* Demangled: DpSync::DpSync() */
int _ZN6DpSyncC1Ev(void);

/* Symbol: RDMA1Reg */
/* Demangled: RDMA1Reg */
extern void* RDMA1Reg;

/* Symbol: _ZN12PQDREAdaptor15setDRETransInfoEP12DRETransInfob */
/* Demangled: PQDREAdaptor::setDRETransInfo(DRETransInfo*, bool) */
int _ZN12PQDREAdaptor15setDRETransInfoEP12DRETransInfob(void);

/* Symbol: _ZN16PQSessionManager31setAALPreHWIdAndBufferIdCaptureEjjjj */
/* Demangled: PQSessionManager::setAALPreHWIdAndBufferIdCapture(unsigned int, unsigned int, unsigned int, unsigned int) */
int _ZN16PQSessionManager31setAALPreHWIdAndBufferIdCaptureEjjjj(void);

/* Symbol: _ZN9PQSession13getCurCutPosXEv */
/* Demangled: PQSession::getCurCutPosX() */
int _ZN9PQSession13getCurCutPosXEv(void);

/* Symbol: _ZN12PQDREAdaptor13initDREOutputEP14DREVPTopOutput */
/* Demangled: PQDREAdaptor::initDREOutput(DREVPTopOutput*) */
int _ZN12PQDREAdaptor13initDREOutputEP14DREVPTopOutput(void);

/* Symbol: _ZN8DpDriver13waitFramedoneEyR16DpReadbackRegs_t */
/* Demangled: DpDriver::waitFramedone(unsigned long long, DpReadbackRegs_t&) */
int _ZN8DpDriver13waitFramedoneEyR16DpReadbackRegs_t(void);

/* Symbol: _ZN13DpEngine_WPEO14onInitTileCalcEP17TILE_PARAM_STRUCT */
/* Demangled: DpEngine_WPEO::onInitTileCalc(TILE_PARAM_STRUCT*) */
int _ZN13DpEngine_WPEO14onInitTileCalcEP17TILE_PARAM_STRUCT(void);

/* Symbol: _ZN18PQAlgorithmAdaptorD1Ev */
/* Demangled: PQAlgorithmAdaptor::~PQAlgorithmAdaptor() */
int _ZN18PQAlgorithmAdaptorD1Ev(void);

/* Symbol: _ZN12DpVEncStream14queueDstBufferEiPPvPji */
/* Demangled: DpVEncStream::queueDstBuffer(int, void**, unsigned int*, int) */
int _ZN12DpVEncStream14queueDstBufferEiPPvPji(void);

/* Symbol: _ZN14DpCommandQueue12frameDstInfoE13DP_COLOR_ENUMiiiiiiPjS1_8DpSecure */
/* Demangled: DpCommandQueue::frameDstInfo(DP_COLOR_ENUM, int, int, int, int, int, int, unsigned int*, unsigned int*, DpSecure) */
int _ZN14DpCommandQueue12frameDstInfoE13DP_COLOR_ENUMiiiiiiPjS1_8DpSecure(void);

/* Symbol: _ZTV13DpEngine_RDMA */
/* Demangled: vtable for DpEngine_RDMA */
extern void* _ZTV13DpEngine_RDMA;

/* Symbol: _ZN9PQSession21setPreHWIdAndBufferIdEjjjj */
/* Demangled: PQSession::setPreHWIdAndBufferId(unsigned int, unsigned int, unsigned int, unsigned int) */
int _ZN9PQSession21setPreHWIdAndBufferIdEjjjj(void);

/* Symbol: _ZN9PQSession12getHDRConfigEP12HDR_CONFIG_T */
/* Demangled: PQSession::getHDRConfig(HDR_CONFIG_T*) */
int _ZN9PQSession12getHDRConfigEP12HDR_CONFIG_T(void);

/* Symbol: _ZN9PQSession14initDpPqConfigEP10DpPqConfig */
/* Demangled: PQSession::initDpPqConfig(DpPqConfig*) */
int _ZN9PQSession14initDpPqConfigEP10DpPqConfig(void);

/* Symbol: _ZNK8DpStream19getReadbackPABufferERj */
/* Demangled: DpStream::getReadbackPABuffer(unsigned int&) const */
int _ZNK8DpStream19getReadbackPABufferERj(void);

/* Symbol: _ZNK9DpChannel12getTargetROIEiPiS0_S0_S0_S0_ */
/* Demangled: DpChannel::getTargetROI(int, int*, int*, int*, int*, int*) const */
int _ZNK9DpChannel12getTargetROIEiPiS0_S0_S0_S0_(void);

/* Symbol: _ZN11DpIspStream16dequeueDstBufferEiPPvb */
/* Demangled: DpIspStream::dequeueDstBuffer(int, void**, bool) */
int _ZN11DpIspStream16dequeueDstBufferEiPPvb(void);

/* Symbol: _ZN12PQDREAdaptor19getDefaultDREOutputEjP12DRETopOutput */
/* Demangled: PQDREAdaptor::getDefaultDREOutput(unsigned int, DRETopOutput*) */
int _ZN12PQDREAdaptor19getDefaultDREOutputEjP12DRETopOutput(void);

/* Symbol: _ZN9DpChannel10setEndTimeEP7timeval */
/* Demangled: DpChannel::setEndTime(timeval*) */
int _ZN9DpChannel10setEndTimeEP7timeval(void);

/* Symbol: _ZN12DpFragStreamD1Ev */
/* Demangled: DpFragStream::~DpFragStream() */
int _ZN12DpFragStreamD1Ev(void);

/* Symbol: _ZN12DpVEncStream7getPqIDEv */
/* Demangled: DpVEncStream::getPqID() */
int _ZN12DpVEncStream7getPqIDEv(void);

/* Symbol: _ZN11PQIspTuning16getDSTuningValueEP5DSRegP7DSInput */
/* Demangled: PQIspTuning::getDSTuningValue(DSReg*, DSInput*) */
int _ZN11PQIspTuning16getDSTuningValueEP5DSRegP7DSInput(void);

/* Symbol: _ZN14PQTuningBufferD1Ev */
/* Demangled: PQTuningBuffer::~PQTuningBuffer() */
int _ZN14PQTuningBufferD1Ev(void);

/* Symbol: _ZN18DpAsyncBlitStream29createJobERjRi */
/* Demangled: DpAsyncBlitStream2::createJob(unsigned int&, int&) */
int _ZN18DpAsyncBlitStream29createJobERjRi(void);

/* Symbol: _ZN12DpBlitStream14setPQParameterERK9DpPqParam */
/* Demangled: DpBlitStream::setPQParameter(DpPqParam const&) */
int _ZN12DpBlitStream14setPQParameterERK9DpPqParam(void);

/* Symbol: _ZN13DpWrapper_WPE13onFlushBufferEN12DpEngineBase15FLUSH_TYPE_ENUME */
/* Demangled: DpWrapper_WPE::onFlushBuffer(DpEngineBase::FLUSH_TYPE_ENUM) */
int _ZN13DpWrapper_WPE13onFlushBufferEN12DpEngineBase15FLUSH_TYPE_ENUME(void);

/* Symbol: _ZN16DpAutoBufferPool13destroyBufferEv */
/* Demangled: DpAutoBufferPool::destroyBuffer() */
int _ZN16DpAutoBufferPool13destroyBufferEv(void);

/* Symbol: _ZN13DpWrapper_ISP13onConfigFrameER9DpCommandR8DpConfig */
/* Demangled: DpWrapper_ISP::onConfigFrame(DpCommand&, DpConfig&) */
int _ZN13DpWrapper_ISP13onConfigFrameER9DpCommandR8DpConfig(void);

/* Symbol: _ZN13DpEngine_WROT13onUpdatePMQOSER9DpCommandRjS2_RiR7timevalR19DP_FORMAT_FLAG_ENUM */
/* Demangled: DpEngine_WROT::onUpdatePMQOS(DpCommand&, unsigned int&, unsigned int&, int&, timeval&, DP_FORMAT_FLAG_ENUM&) */
int _ZN13DpEngine_WROT13onUpdatePMQOSER9DpCommandRjS2_RiR7timevalR19DP_FORMAT_FLAG_ENUM(void);

/* Symbol: _ZN10PQDSConfigC2Ev */
/* Demangled: PQDSConfig::PQDSConfig() */
int _ZN10PQDSConfigC2Ev(void);

/* Symbol: _ZN17DpCommandRecorder16addIspSecureMetaE14cmdqSecIspMeta */
/* Demangled: DpCommandRecorder::addIspSecureMeta(cmdqSecIspMeta) */
int _ZN17DpCommandRecorder16addIspSecureMetaE14cmdqSecIspMeta(void);

/* Symbol: _ZN14DpPathTopologyD2Ev */
/* Demangled: DpPathTopology::~DpPathTopology() */
int _ZN14DpPathTopologyD2Ev(void);

/* Symbol: _Z14forward_6_tapsiiiiiiiiiiiRiS_S_S_S_S_ */
/* Demangled: forward_6_taps(int, int, int, int, int, int, int, int, int, int, int, int&, int&, int&, int&, int&, int&) */
int _Z14forward_6_tapsiiiiiiiiiiiRiS_S_S_S_S_(void);

/* Symbol: _ZN16DpBufferPoolBase13dumpDebugInfoE16CLIENT_TYPE_ENUM */
/* Demangled: DpBufferPoolBase::dumpDebugInfo(CLIENT_TYPE_ENUM) */
int _ZN16DpBufferPoolBase13dumpDebugInfoE16CLIENT_TYPE_ENUM(void);

/* Symbol: _ZN11PQDCAdaptor9s_ALMutexE */
/* Demangled: PQDCAdaptor::s_ALMutex */
extern void* _ZN11PQDCAdaptor9s_ALMutexE;

/* Symbol: _Z28tile_tdr_isp_reg_to_dump_eafP19TILE_REG_MAP_STRUCTPjS1_ji */
/* Demangled: tile_tdr_isp_reg_to_dump_eaf(TILE_REG_MAP_STRUCT*, unsigned int*, unsigned int*, unsigned int, int) */
int _Z28tile_tdr_isp_reg_to_dump_eafP19TILE_REG_MAP_STRUCTPjS1_ji(void);

/* Symbol: _ZTV13DpPathControl */
/* Demangled: vtable for DpPathControl */
extern void* _ZTV13DpPathControl;

/* Symbol: _ZN21PQDREHistogramAdaptor18dumpBufferPoolImplEv */
/* Demangled: PQDREHistogramAdaptor::dumpBufferPoolImpl() */
int _ZN21PQDREHistogramAdaptor18dumpBufferPoolImplEv(void);

/* Symbol: _ZN14DpEngine_TDSHP10onPostProcER9DpCommand */
/* Demangled: DpEngine_TDSHP::onPostProc(DpCommand&) */
int _ZN14DpEngine_TDSHP10onPostProcER9DpCommand(void);

/* Symbol: _ZN16DpBufferPoolBase12cancelBufferEi */
/* Demangled: DpBufferPoolBase::cancelBuffer(int) */
int _ZN16DpBufferPoolBase12cancelBufferEi(void);

/* Symbol: _ZN14DpPathComposerD0Ev */
/* Demangled: DpPathComposer::~DpPathComposer() */
int _ZN14DpPathComposerD0Ev(void);

/* Symbol: _ZN12DpVEncStream14queueSrcBufferEiPjj */
/* Demangled: DpVEncStream::queueSrcBuffer(int, unsigned int*, unsigned int) */
int _ZN12DpVEncStream14queueSrcBufferEiPjj(void);

/* Symbol: _ZN10DpTilePath13calcFrameInfoER9DpCommand */
/* Demangled: DpTilePath::calcFrameInfo(DpCommand&) */
int _ZN10DpTilePath13calcFrameInfoER9DpCommand(void);

/* Symbol: _ZN9PQSession31removeUselessDCWaitHistListNodeEj */
/* Demangled: PQSession::removeUselessDCWaitHistListNode(unsigned int) */
int _ZN9PQSession31removeUselessDCWaitHistListNodeEj(void);

/* Symbol: _ZN12DpVEncStream13setFlipStatusEib */
/* Demangled: DpVEncStream::setFlipStatus(int, bool) */
int _ZN12DpVEncStream13setFlipStatusEib(void);

/* Symbol: _ZN13DpPmemHandler11flushMemoryEN8DpMemory15FLUSH_TYPE_ENUMEii */
/* Demangled: DpPmemHandler::flushMemory(DpMemory::FLUSH_TYPE_ENUM, int, int) */
int _ZN13DpPmemHandler11flushMemoryEN8DpMemory15FLUSH_TYPE_ENUMEii(void);

/* Symbol: _ZN9PQSession12getHDRHandleEv */
/* Demangled: PQSession::getHDRHandle() */
int _ZN9PQSession12getHDRHandleEv(void);

/* Symbol: _ZN12PQRSZAdaptor15destroyInstanceEv */
/* Demangled: PQRSZAdaptor::destroyInstance() */
int _ZN12PQRSZAdaptor15destroyInstanceEv(void);

/* Symbol: _ZN18DpAsyncBlitStream27setUserEj */
/* Demangled: DpAsyncBlitStream2::setUser(unsigned int) */
int _ZN18DpAsyncBlitStream27setUserEj(void);

/* Symbol: _ZN12PQDREAdaptor7calRegsEP9PQSessionR9DpCommandiiiiPibi */
/* Demangled: PQDREAdaptor::calRegs(PQSession*, DpCommand&, int, int, int, int, int*, bool, int) */
int _ZN12PQDREAdaptor7calRegsEP9PQSessionR9DpCommandiiiiPibi(void);

/* Symbol: _Z11getPropertyPKcPii */
/* Demangled: getProperty(char const*, int*, int) */
int _Z11getPropertyPKcPii(void);

/* Symbol: _ZN17DpAsyncBlitStream10BaseConfigC1Ev */
/* Demangled: DpAsyncBlitStream::BaseConfig::BaseConfig() */
int _ZN17DpAsyncBlitStream10BaseConfigC1Ev(void);

/* Symbol: _ZN9PQSession18getDrePreviousSizeEPiS0_ */
/* Demangled: PQSession::getDrePreviousSize(int*, int*) */
int _ZN9PQSession18getDrePreviousSizeEPiS0_(void);

/* Symbol: _ZN11PQDREConfigD1Ev */
/* Demangled: PQDREConfig::~PQDREConfig() */
int _ZN11PQDREConfigD1Ev(void);

/* Symbol: _ZN11PQDSAdaptor10getDSTableEb */
/* Demangled: PQDSAdaptor::getDSTable(bool) */
int _ZN11PQDSAdaptor10getDSTableEb(void);

/* Symbol: _ZN11DpPortAdapt15getActiveBufferE16CLIENT_TYPE_ENUMb */
/* Demangled: DpPortAdapt::getActiveBuffer(CLIENT_TYPE_ENUM, bool) */
int _ZN11DpPortAdapt15getActiveBufferE16CLIENT_TYPE_ENUMb(void);

/* Symbol: _ZN6DpSyncC2Ev */
/* Demangled: DpSync::DpSync() */
int _ZN6DpSyncC2Ev(void);

/* Symbol: _Z28tile_print_isp_error_message22ISP_TPIPE_MESSAGE_ENUM */
/* Demangled: tile_print_isp_error_message(ISP_TPIPE_MESSAGE_ENUM) */
int _Z28tile_print_isp_error_message22ISP_TPIPE_MESSAGE_ENUM(void);

/* Symbol: _ZN14DpPathTopology11getPathInfoE16STREAM_TYPE_ENUMR11DpPortAdaptS2_RyRA25_iRiS6_jj */
/* Demangled: DpPathTopology::getPathInfo(STREAM_TYPE_ENUM, DpPortAdapt&, DpPortAdapt&, unsigned long long&, int (&) [25], int&, int&, unsigned int, unsigned int) */
int _ZN14DpPathTopology11getPathInfoE16STREAM_TYPE_ENUMR11DpPortAdaptS2_RyRA25_iRiS6_jj(void);

/* Symbol: _ZN14DpCommandQueue12writeFromRegEjjj */
/* Demangled: DpCommandQueue::writeFromReg(unsigned int, unsigned int, unsigned int) */
int _ZN14DpCommandQueue12writeFromRegEjjj(void);

/* Symbol: _ZN16DpPathConnection11disablePathER9DpCommand */
/* Demangled: DpPathConnection::disablePath(DpCommand&) */
int _ZN16DpPathConnection11disablePathER9DpCommand(void);

/* Symbol: _ZN11PQDCAdaptor7calRegsEP9PQSessionR9DpCommandR8DpConfigPiRib */
/* Demangled: PQDCAdaptor::calRegs(PQSession*, DpCommand&, DpConfig&, int*, int&, bool) */
int _ZN11PQDCAdaptor7calRegsEP9PQSessionR9DpCommandR8DpConfigPiRib(void);

/* Symbol: _ZTCNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern void* _ZTCNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE;

/* Symbol: _ZN12DpEngineBase12onDumpBufferEv */
/* Demangled: DpEngineBase::onDumpBuffer() */
int _ZN12DpEngineBase12onDumpBufferEv(void);

/* Symbol: _ZN17DpAsyncBlitStream12setDstBufferEjPvji */
/* Demangled: DpAsyncBlitStream::setDstBuffer(unsigned int, void*, unsigned int, int) */
int _ZN17DpAsyncBlitStream12setDstBufferEjPvji(void);

/* Symbol: _ZN18DpAsyncBlitStream212setSrcBufferEPPvPjji */
/* Demangled: DpAsyncBlitStream2::setSrcBuffer(void**, unsigned int*, unsigned int, int) */
int _ZN18DpAsyncBlitStream212setSrcBufferEPPvPjji(void);

/* Symbol: _ZN11DpIspStream9setDitherEib */
/* Demangled: DpIspStream::setDither(int, bool) */
int _ZN11DpIspStream9setDitherEib(void);

/* Symbol: _ZTV7ListPtrIN11DpJobWorker10WorkerItemEE */
/* Demangled: vtable for ListPtr<DpJobWorker::WorkerItem> */
extern void* _ZTV7ListPtrIN11DpJobWorker10WorkerItemEE;

/* Symbol: _ZN18PQAlgorithmAdaptorD2Ev */
/* Demangled: PQAlgorithmAdaptor::~PQAlgorithmAdaptor() */
int _ZN18PQAlgorithmAdaptorD2Ev(void);

/* Symbol: _ZN11PQHDRConfig14isCcorrEnabledEb */
/* Demangled: PQHDRConfig::isCcorrEnabled(bool) */
int _ZN11PQHDRConfig14isCcorrEnabledEb(void);

/* Symbol: _ZN12PQDREAdaptor26getDRETransFinalCoefBufferEb */
/* Demangled: PQDREAdaptor::getDRETransFinalCoefBuffer(bool) */
int _ZN12PQDREAdaptor26getDRETransFinalCoefBufferEb(void);

/* Symbol: _ZN21PQDREHistogramAdaptor14initUserBufferEPv */
/* Demangled: PQDREHistogramAdaptor::initUserBuffer(void*) */
int _ZN21PQDREHistogramAdaptor14initUserBufferEPv(void);

/* Symbol: _ZN13DpWrapper_ISP15onReconfigTilesER9DpCommand */
/* Demangled: DpWrapper_ISP::onReconfigTiles(DpCommand&) */
int _ZN13DpWrapper_ISP15onReconfigTilesER9DpCommand(void);

/* Symbol: _ZN9PQSession11getDCHandleEv */
/* Demangled: PQSession::getDCHandle() */
int _ZN9PQSession11getDCHandleEv(void);

/* Symbol: _ZN16PQSessionManager19m_VideoIDBufferRingE */
/* Demangled: PQSessionManager::m_VideoIDBufferRing */
extern void* _ZN16PQSessionManager19m_VideoIDBufferRingE;

/* Symbol: _ZN18PQAlgorithmFactory18getDynamicContrastEj */
/* Demangled: PQAlgorithmFactory::getDynamicContrast(unsigned int) */
int _ZN18PQAlgorithmFactory18getDynamicContrastEj(void);

/* Symbol: _ZN16PQSessionManager25createPQSessionListHandleEy */
/* Demangled: PQSessionManager::createPQSessionListHandle(unsigned long long) */
int _ZN16PQSessionManager25createPQSessionListHandleEy(void);

/* Symbol: _ZN11PQDSAdaptor11onConfigRegER9DpCommand8DSOutputPiRi */
/* Demangled: PQDSAdaptor::onConfigReg(DpCommand&, DSOutput, int*, int&) */
int _ZN11PQDSAdaptor11onConfigRegER9DpCommand8DSOutputPiRi(void);

/* Symbol: _ZN12DpFragStreamD2Ev */
/* Demangled: DpFragStream::~DpFragStream() */
int _ZN12DpFragStreamD2Ev(void);

/* Symbol: _ZN12DpMmuHandler15destroyInstanceEv */
/* Demangled: DpMmuHandler::destroyInstance() */
int _ZN12DpMmuHandler15destroyInstanceEv(void);

/* Symbol: _ZN9PQSession14deleteDCHandleEv */
/* Demangled: PQSession::deleteDCHandle() */
int _ZN9PQSession14deleteDCHandleEv(void);

/* Symbol: _ZN9PQSession14setDCisHW0DoneEb */
/* Demangled: PQSession::setDCisHW0Done(bool) */
int _ZN9PQSession14setDCisHW0DoneEb(void);

/* Symbol: _ZN14PQTuningBufferD2Ev */
/* Demangled: PQTuningBuffer::~PQTuningBuffer() */
int _ZN14PQTuningBufferD2Ev(void);

/* Symbol: _ZN10PQDSConfig15isISOShpEnabledEb */
/* Demangled: PQDSConfig::isISOShpEnabled(bool) */
int _ZN10PQDSConfig15isISOShpEnabledEb(void);

/* Symbol: _ZN11PQDSAdaptor11s_pInstanceE */
/* Demangled: PQDSAdaptor::s_pInstance */
extern void* _ZN11PQDSAdaptor11s_pInstanceE;

/* Symbol: _ZN14PQTuningBuffer10resetReadyEv */
/* Demangled: PQTuningBuffer::resetReady() */
int _ZN14PQTuningBuffer10resetReadyEv(void);

/* Symbol: _ZN14DpEngine_COLOR15onReconfigFrameER9DpCommandR8DpConfig */
/* Demangled: DpEngine_COLOR::onReconfigFrame(DpCommand&, DpConfig&) */
int _ZN14DpEngine_COLOR15onReconfigFrameER9DpCommandR8DpConfig(void);

/* Symbol: _Z24tile_lut_isp_func_enablePiP23TILE_FUNC_ENABLE_STRUCTP19TILE_REG_MAP_STRUCT */
/* Demangled: tile_lut_isp_func_enable(int*, TILE_FUNC_ENABLE_STRUCT*, TILE_REG_MAP_STRUCT*) */
int _Z24tile_lut_isp_func_enablePiP23TILE_FUNC_ENABLE_STRUCTP19TILE_REG_MAP_STRUCT(void);

/* Symbol: SCL1Reg */
/* Demangled: SCL1Reg */
extern void* SCL1Reg;

/* Symbol: _ZN12DpTilePathST10threadLoopEv */
/* Demangled: DpTilePathST::threadLoop() */
int _ZN12DpTilePathST10threadLoopEv(void);

/* Symbol: _ZN12DpEngine_AAL10onPostProcER9DpCommand */
/* Demangled: DpEngine_AAL::onPostProc(DpCommand&) */
int _ZN12DpEngine_AAL10onPostProcER9DpCommand(void);

/* Symbol: _ZN12DpEngine_HDR10onPostProcER9DpCommand */
/* Demangled: DpEngine_HDR::onPostProc(DpCommand&) */
int _ZN12DpEngine_HDR10onPostProcER9DpCommand(void);

/* Symbol: _ZN11PQRSZConfig12getRSZConfigEP12RSZ_CONFIG_Tb */
/* Demangled: PQRSZConfig::getRSZConfig(RSZ_CONFIG_T*, bool) */
int _ZN11PQRSZConfig12getRSZConfigEP12RSZ_CONFIG_Tb(void);

/* Symbol: _ZN14DpPathComposerD1Ev */
/* Demangled: DpPathComposer::~DpPathComposer() */
int _ZN14DpPathComposerD1Ev(void);

/* Symbol: _ZN17DpCommandRecorder15setFrameDstInfoEj13DP_COLOR_ENUMiiiiiiPjS1_8DpSecure */
/* Demangled: DpCommandRecorder::setFrameDstInfo(unsigned int, DP_COLOR_ENUM, int, int, int, int, int, int, unsigned int*, unsigned int*, DpSecure) */
int _ZN17DpCommandRecorder15setFrameDstInfoEj13DP_COLOR_ENUMiiiiiiPjS1_8DpSecure(void);

/* Symbol: _ZN12PQHDRAdaptor14tuningHDRSWRegEP8HDRFWRegi */
/* Demangled: PQHDRAdaptor::tuningHDRSWReg(HDRFWReg*, int) */
int _ZN12PQHDRAdaptor14tuningHDRSWRegEP8HDRFWRegi(void);

/* Symbol: _ZN12PQHDRAdaptor7setPQIDEy */
/* Demangled: PQHDRAdaptor::setPQID(unsigned long long) */
int _ZN12PQHDRAdaptor7setPQIDEy(void);

/* Symbol: _ZN12PQDREAdaptor11getDRETableEb */
/* Demangled: PQDREAdaptor::getDRETable(bool) */
int _ZN12PQDREAdaptor11getDRETableEb(void);

/* Symbol: _ZN14DpPathTopology12sortPathInfoEiiRA25_ij */
/* Demangled: DpPathTopology::sortPathInfo(int, int, int (&) [25], unsigned int) */
int _ZN14DpPathTopology12sortPathInfoEiiRA25_ij(void);

/* Symbol: _ZN17DpAsyncBlitStream16queryPaddingSideEj */
/* Demangled: DpAsyncBlitStream::queryPaddingSide(unsigned int) */
int _ZN17DpAsyncBlitStream16queryPaddingSideEj(void);

/* Symbol: _ZN18DpAsyncBlitStream212setDstConfigEjii13DP_COLOR_ENUM17DpInterlaceFormatP6DpRectj */
/* Demangled: DpAsyncBlitStream2::setDstConfig(unsigned int, int, int, DP_COLOR_ENUM, DpInterlaceFormat, DpRect*, unsigned int) */
int _ZN18DpAsyncBlitStream212setDstConfigEjii13DP_COLOR_ENUM17DpInterlaceFormatP6DpRectj(void);

/* Symbol: _Z27tile_main_read_isp_reg_fileP19TILE_REG_MAP_STRUCTPKcS2_S2_S2_S2_S2_ */
/* Demangled: tile_main_read_isp_reg_file(TILE_REG_MAP_STRUCT*, char const*, char const*, char const*, char const*, char const*, char const*) */
int _Z27tile_main_read_isp_reg_fileP19TILE_REG_MAP_STRUCTPKcS2_S2_S2_S2_S2_(void);

/* Symbol: _ZN8DpStreamD1Ev */
/* Demangled: DpStream::~DpStream() */
int _ZN8DpStreamD1Ev(void);

/* Symbol: _ZN11DpIspStream9IspConfigC1Ev */
/* Demangled: DpIspStream::IspConfig::IspConfig() */
int _ZN11DpIspStream9IspConfigC1Ev(void);

/* Symbol: _ZN14DpCommandQueue19setISPDebugDumpRegsEj */
/* Demangled: DpCommandQueue::setISPDebugDumpRegs(unsigned int) */
int _ZN14DpCommandQueue19setISPDebugDumpRegsEj(void);

/* Symbol: _ZN13DpEngine_WROT12onInitEngineER9DpCommand */
/* Demangled: DpEngine_WROT::onInitEngine(DpCommand&) */
int _ZN13DpEngine_WROT12onInitEngineER9DpCommand(void);

/* Symbol: _ZN12DpEngine_AAL15onReconfigFrameER9DpCommandR8DpConfig */
/* Demangled: DpEngine_AAL::onReconfigFrame(DpCommand&, DpConfig&) */
int _ZN12DpEngine_AAL15onReconfigFrameER9DpCommandR8DpConfig(void);

/* Symbol: _ZN9PQSession16getHDRisLeftPathEv */
/* Demangled: PQSession::getHDRisLeftPath() */
int _ZN9PQSession16getHDRisLeftPathEv(void);

/* Symbol: _ZN11PQIspTuningD1Ev */
/* Demangled: PQIspTuning::~PQIspTuning() */
int _ZN11PQIspTuningD1Ev(void);

/* Symbol: _ZN16DpRingBufferPool13acquireBufferEPiPPvPjb */
/* Demangled: DpRingBufferPool::acquireBuffer(int*, void**, unsigned int*, bool) */
int _ZN16DpRingBufferPool13acquireBufferEPiPPvPjb(void);

/* Symbol: _ZN17DpAsyncBlitStream10BaseConfigC2Ev */
/* Demangled: DpAsyncBlitStream::BaseConfig::BaseConfig() */
int _ZN17DpAsyncBlitStream10BaseConfigC2Ev(void);

/* Symbol: _ZN17DpAsyncBlitStream10invalidateEP7timeval */
/* Demangled: DpAsyncBlitStream::invalidate(timeval*) */
int _ZN17DpAsyncBlitStream10invalidateEP7timeval(void);

/* Symbol: _ZN18DpAsyncBlitStream214setConfigBeginEjii */
/* Demangled: DpAsyncBlitStream2::setConfigBegin(unsigned int, int, int) */
int _ZN18DpAsyncBlitStream214setConfigBeginEjii(void);

/* Symbol: _ZN17DpCommandRecorder12endOverwriteEv */
/* Demangled: DpCommandRecorder::endOverwrite() */
int _ZN17DpCommandRecorder12endOverwriteEv(void);

/* Symbol: _ZN11PQDREConfigD2Ev */
/* Demangled: PQDREConfig::~PQDREConfig() */
int _ZN11PQDREConfigD2Ev(void);

/* Symbol: _ZN14DpPathComposer10createPathEP11DpPortAdaptS1_RA25_iiiP10DpPathBase */
/* Demangled: DpPathComposer::createPath(DpPortAdapt*, DpPortAdapt*, int (&) [25], int, int, DpPathBase*) */
int _ZN14DpPathComposer10createPathEP11DpPortAdaptS1_RA25_iiiP10DpPathBase(void);

/* Symbol: _ZN11DpIspStream22queryISPFeatureSupportERNSt3__13mapI19DP_ISP_FEATURE_ENUMbNS0_4lessIS2_EENS0_9allocatorINS0_4pairIKS2_bEEEEEE */
/* Demangled: DpIspStream::queryISPFeatureSupport(std::__1::map<DP_ISP_FEATURE_ENUM, bool, std::__1::less<DP_ISP_FEATURE_ENUM>, std::__1::allocator<std::__1::pair<DP_ISP_FEATURE_ENUM const, bool> > >&) */
int _ZN11DpIspStream22queryISPFeatureSupportERNSt3__13mapI19DP_ISP_FEATURE_ENUMbNS0_4lessIS2_EENS0_9allocatorINS0_4pairIKS2_bEEEEEE(void);

/* Symbol: _ZNSt3__16vectorI13DpDoneJobItemNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_ */
/* Demangled: void std::__1::vector<DpDoneJobItem, std::__1::allocator<DpDoneJobItem> >::__push_back_slow_path<DpDoneJobItem const&>(DpDoneJobItem const&) */
int _ZNSt3__16vectorI13DpDoneJobItemNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void);

/* Symbol: _ZN13PQColorConfigD1Ev */
/* Demangled: PQColorConfig::~PQColorConfig() */
int _ZN13PQColorConfigD1Ev(void);

/* Symbol: CAMINReg */
/* Demangled: CAMINReg */
extern void* CAMINReg;

/* Symbol: _Z34tile_tdr_isp_mask_to_dump_internalP19TILE_REG_MAP_STRUCTPjS1_ */
/* Demangled: tile_tdr_isp_mask_to_dump_internal(TILE_REG_MAP_STRUCT*, unsigned int*, unsigned int*) */
int _Z34tile_tdr_isp_mask_to_dump_internalP19TILE_REG_MAP_STRUCTPjS1_(void);

/* Symbol: _ZN8DpDriver15releasePABufferEjPj */
/* Demangled: DpDriver::releasePABuffer(unsigned int, unsigned int*) */
int _ZN8DpDriver15releasePABufferEjPj(void);

/* Symbol: _ZN9PQSession19updateDCShareStatusEi */
/* Demangled: PQSession::updateDCShareStatus(int) */
int _ZN9PQSession19updateDCShareStatusEi(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj(void);

/* Symbol: _Z37tile_tdr_isp_reg_to_dump_internal_eafP19TILE_REG_MAP_STRUCTPjS1_ji */
/* Demangled: tile_tdr_isp_reg_to_dump_internal_eaf(TILE_REG_MAP_STRUCT*, unsigned int*, unsigned int*, unsigned int, int) */
int _Z37tile_tdr_isp_reg_to_dump_internal_eafP19TILE_REG_MAP_STRUCTPjS1_ji(void);

/* Symbol: _ZTV10DpTilePath */
/* Demangled: vtable for DpTilePath */
extern void* _ZTV10DpTilePath;

/* Symbol: _ZN13DpEngine_RDMA12onInitEngineER9DpCommand */
/* Demangled: DpEngine_RDMA::onInitEngine(DpCommand&) */
int _ZN13DpEngine_RDMA12onInitEngineER9DpCommand(void);

/* Symbol: _ZN18PQAlgorithmFactory19getDynamicSharpnessEj */
/* Demangled: PQAlgorithmFactory::getDynamicSharpness(unsigned int) */
int _ZN18PQAlgorithmFactory19getDynamicSharpnessEj(void);

/* Symbol: _ZN9PQSession11getScenarioEv */
/* Demangled: PQSession::getScenario() */
int _ZN9PQSession11getScenarioEv(void);

/* Symbol: _ZN13PQColorConfig16m_ColorTableInitE */
/* Demangled: PQColorConfig::m_ColorTableInit */
extern void* _ZN13PQColorConfig16m_ColorTableInitE;

/* Symbol: _ZN11PQDREConfig9isEnabledEb */
/* Demangled: PQDREConfig::isEnabled(bool) */
int _ZN11PQDREConfig9isEnabledEb(void);

/* Symbol: _ZN11DpIspStream16dequeueSrcBufferEv */
/* Demangled: DpIspStream::dequeueSrcBuffer() */
int _ZN11DpIspStream16dequeueSrcBufferEv(void);

/* Symbol: g_profileData */
/* Demangled: g_profileData */
extern void* g_profileData;

/* Symbol: _ZN9PQSession18getDREInitFWStatusEv */
/* Demangled: PQSession::getDREInitFWStatus() */
int _ZN9PQSession18getDREInitFWStatusEv(void);

/* Symbol: _ZN11PQDCAdaptor13tuningDCInputEP8ADLInputi */
/* Demangled: PQDCAdaptor::tuningDCInput(ADLInput*, int) */
int _ZN11PQDCAdaptor13tuningDCInputEP8ADLInputi(void);

/* Symbol: _ZN12PQHDRAdaptor11getHDRTableEb */
/* Demangled: PQHDRAdaptor::getHDRTable(bool) */
int _ZN12PQHDRAdaptor11getHDRTableEb(void);

/* Symbol: TDSHP0Reg */
/* Demangled: TDSHP0Reg */
extern void* TDSHP0Reg;

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIjEEvOT_ */
/* Demangled: void std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__push_back_slow_path<unsigned int>(unsigned int&&) */
int _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIjEEvOT_(void);

/* Symbol: _ZN17DpCommandRecorder12getBlockSizeEv */
/* Demangled: DpCommandRecorder::getBlockSize() */
int _ZN17DpCommandRecorder12getBlockSizeEv(void);

/* Symbol: _ZN11PQDSAdaptor11onCalcTDSHPEP9PQSessionR9DpCommandR8DpConfigbbPiRi */
/* Demangled: PQDSAdaptor::onCalcTDSHP(PQSession*, DpCommand&, DpConfig&, bool, bool, int*, int&) */
int _ZN11PQDSAdaptor11onCalcTDSHPEP9PQSessionR9DpCommandR8DpConfigbbPiRi(void);

/* Symbol: _ZN12DpBlitStream16queryPaddingSideEj */
/* Demangled: DpBlitStream::queryPaddingSide(unsigned int) */
int _ZN12DpBlitStream16queryPaddingSideEj(void);

/* Symbol: _ZN11PQDSAdaptor13onConfigTDSHPEP9PQSessionR9DpCommandR8DpConfigbbPiRi */
/* Demangled: PQDSAdaptor::onConfigTDSHP(PQSession*, DpCommand&, DpConfig&, bool, bool, int*, int&) */
int _ZN11PQDSAdaptor13onConfigTDSHPEP9PQSessionR9DpCommandR8DpConfigbbPiRi(void);

/* Symbol: _ZTV12DpTilePathST */
/* Demangled: vtable for DpTilePathST */
extern void* _ZTV12DpTilePathST;

/* Symbol: _ZN11DpIspStream14setPQParameterEiPK9DpPqParam */
/* Demangled: DpIspStream::setPQParameter(int, DpPqParam const*) */
int _ZN11DpIspStream14setPQParameterEiPK9DpPqParam(void);

/* Symbol: _ZN12PQHDRAdaptor15setLastHDRPInfoE31_DP_VDEC_DRV_DYNAMIC_METADATA_T */
/* Demangled: PQHDRAdaptor::setLastHDRPInfo(_DP_VDEC_DRV_DYNAMIC_METADATA_T) */
int _ZN12PQHDRAdaptor15setLastHDRPInfoE31_DP_VDEC_DRV_DYNAMIC_METADATA_T(void);

/* Symbol: _ZN11DpPortAdaptD1Ev */
/* Demangled: DpPortAdapt::~DpPortAdapt() */
int _ZN11DpPortAdaptD1Ev(void);

/* Symbol: _ZN14DpPathComposerD2Ev */
/* Demangled: DpPathComposer::~DpPathComposer() */
int _ZN14DpPathComposerD2Ev(void);

/* Symbol: _ZN13DpWrapper_ISP12onConfigTileER9DpCommand */
/* Demangled: DpWrapper_ISP::onConfigTile(DpCommand&) */
int _ZN13DpWrapper_ISP12onConfigTileER9DpCommand(void);

/* Symbol: _ZN12DpMmuHandlerC1EPvjj */
/* Demangled: DpMmuHandler::DpMmuHandler(void*, unsigned int, unsigned int) */
int _ZN12DpMmuHandlerC1EPvjj(void);

/* Symbol: _ZN12DpIonHandler19cacheInvalidbyRangeEv */
/* Demangled: DpIonHandler::cacheInvalidbyRange() */
int _ZN12DpIonHandler19cacheInvalidbyRangeEv(void);

/* Symbol: _ZN16PQSessionManagerD1Ev */
/* Demangled: PQSessionManager::~PQSessionManager() */
int _ZN16PQSessionManagerD1Ev(void);

/* Symbol: _ZN14PQTuningBuffer13isOverwrittenEv */
/* Demangled: PQTuningBuffer::isOverwritten() */
int _ZN14PQTuningBuffer13isOverwrittenEv(void);

/* Symbol: _ZN12PQHDRAdaptor14initHDRFWinputEP9DHDRINPUTR8DpConfig */
/* Demangled: PQHDRAdaptor::initHDRFWinput(DHDRINPUT*, DpConfig&) */
int _ZN12PQHDRAdaptor14initHDRFWinputEP9DHDRINPUTR8DpConfig(void);

/* Symbol: _ZN11PQDREConfig12getDebugFlagEb */
/* Demangled: PQDREConfig::getDebugFlag(bool) */
int _ZN11PQDREConfig12getDebugFlagEb(void);

/* Symbol: _ZN14DpCommandQueue7writeFdEjjjPii */
/* Demangled: DpCommandQueue::writeFd(unsigned int, unsigned int, unsigned int, int*, int) */
int _ZN14DpCommandQueue7writeFdEjjjPii(void);

/* Symbol: _ZN13DpEngine_WROT11RGB_TO_JPEGE */
/* Demangled: DpEngine_WROT::RGB_TO_JPEG */
extern void* _ZN13DpEngine_WROT11RGB_TO_JPEGE;

/* Symbol: _ZN12PQHDRAdaptor20tuningHDR10PLUSSWRegEP15HDR10PLUS_FWRegi */
/* Demangled: PQHDRAdaptor::tuningHDR10PLUSSWReg(HDR10PLUS_FWReg*, int) */
int _ZN12PQHDRAdaptor20tuningHDR10PLUSSWRegEP15HDR10PLUS_FWRegi(void);

/* Symbol: _ZN16DpRingBufferPool13dequeueBufferEPiPPvPjb */
/* Demangled: DpRingBufferPool::dequeueBuffer(int*, void**, unsigned int*, bool) */
int _ZN16DpRingBufferPool13dequeueBufferEPiPPvPjb(void);

/* Symbol: _ZN11DpIspStream9IspConfigC2Ev */
/* Demangled: DpIspStream::IspConfig::IspConfig() */
int _ZN11DpIspStream9IspConfigC2Ev(void);

/* Symbol: _ZN8DpStreamD2Ev */
/* Demangled: DpStream::~DpStream() */
int _ZN8DpStreamD2Ev(void);

/* Symbol: _ZN11PQIspTuningD2Ev */
/* Demangled: PQIspTuning::~PQIspTuning() */
int _ZN11PQIspTuningD2Ev(void);

/* Symbol: _ZN12DpIonHandlerC1EijbPi */
/* Demangled: DpIonHandler::DpIonHandler(int, unsigned int, bool, int*) */
int _ZN12DpIonHandlerC1EijbPi(void);

/* Symbol: _ZN8PQConfig9getEnableEv */
/* Demangled: PQConfig::getEnable() */
int _ZN8PQConfig9getEnableEv(void);

/* Symbol: _ZNSt3__16vectorIPN17DpAsyncBlitStream12AsyncBlitJobENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_ */
/* Demangled: void std::__1::vector<DpAsyncBlitStream::AsyncBlitJob*, std::__1::allocator<DpAsyncBlitStream::AsyncBlitJob*> >::__push_back_slow_path<DpAsyncBlitStream::AsyncBlitJob* const&>(DpAsyncBlitStream::AsyncBlitJob* const&) */
int _ZNSt3__16vectorIPN17DpAsyncBlitStream12AsyncBlitJobENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void);

/* Symbol: _ZN11DpIspStream12setSharpnessEii */
/* Demangled: DpIspStream::setSharpness(int, int) */
int _ZN11DpIspStream12setSharpnessEii(void);

/* Symbol: _ZN9PQSession11getDREVPRegEPK9DpPqParamP8DREVPReg */
/* Demangled: PQSession::getDREVPReg(DpPqParam const*, DREVPReg*) */
int _ZN9PQSession11getDREVPRegEPK9DpPqParamP8DREVPReg(void);

/* Symbol: _ZN13PQColorConfigD2Ev */
/* Demangled: PQColorConfig::~PQColorConfig() */
int _ZN13PQColorConfigD2Ev(void);

/* Symbol: _ZN16DpRingBufferPool16pollBufferStatusE16CLIENT_TYPE_ENUMiiiiib */
/* Demangled: DpRingBufferPool::pollBufferStatus(CLIENT_TYPE_ENUM, int, int, int, int, int, bool) */
int _ZN16DpRingBufferPool16pollBufferStatusE16CLIENT_TYPE_ENUMiiiiib(void);

/* Symbol: _ZN12DpBlitStream12setDstBufferEiPjj */
/* Demangled: DpBlitStream::setDstBuffer(int, unsigned int*, unsigned int) */
int _ZN12DpBlitStream12setDstBufferEiPjj(void);

/* Symbol: WPEOReg */
/* Demangled: WPEOReg */
extern void* WPEOReg;

/* Symbol: _ZNSt3__16vectorI7timevalNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_ */
/* Demangled: void std::__1::vector<timeval, std::__1::allocator<timeval> >::__push_back_slow_path<timeval const&>(timeval const&) */
int _ZNSt3__16vectorI7timevalNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void);

/* Symbol: _ZN14DpCommandQueue7setPathEP10DpPathBase */
/* Demangled: DpCommandQueue::setPath(DpPathBase*) */
int _ZN14DpCommandQueue7setPathEP10DpPathBase(void);

/* Symbol: _ZN9PQSession10getPQParamEP9DpPqParam */
/* Demangled: PQSession::getPQParam(DpPqParam*) */
int _ZN9PQSession10getPQParamEP9DpPqParam(void);

/* Symbol: _Z29tile_tdr_isp_dump_inv_reg_eafP19TILE_REG_MAP_STRUCTS0_iPjjj */
/* Demangled: tile_tdr_isp_dump_inv_reg_eaf(TILE_REG_MAP_STRUCT*, TILE_REG_MAP_STRUCT*, int, unsigned int*, unsigned int, unsigned int) */
int _Z29tile_tdr_isp_dump_inv_reg_eafP19TILE_REG_MAP_STRUCTS0_iPjjj(void);

/* Symbol: _ZN14DpCommandQueue11setTDShpParEj */
/* Demangled: DpCommandQueue::setTDShpPar(unsigned int) */
int _ZN14DpCommandQueue11setTDShpParEj(void);

/* Symbol: _ZN9PQSessionD1Ev */
/* Demangled: PQSession::~PQSession() */
int _ZN9PQSessionD1Ev(void);

/* Symbol: _ZN11PQIspTuning11getInstanceEv */
/* Demangled: PQIspTuning::getInstance() */
int _ZN11PQIspTuning11getInstanceEv(void);

/* Symbol: _ZN11DpPortAdapt11s_dumpMutexE */
/* Demangled: DpPortAdapt::s_dumpMutex */
extern void* _ZN11DpPortAdapt11s_dumpMutexE;

/* Symbol: _ZN17DpCommandRecorder12addIspMetLogEPcj */
/* Demangled: DpCommandRecorder::addIspMetLog(char*, unsigned int) */
int _ZN17DpCommandRecorder12addIspMetLogEPcj(void);

/* Symbol: _ZN12DpMmuHandlerC1EPvj */
/* Demangled: DpMmuHandler::DpMmuHandler(void*, unsigned int) */
int _ZN12DpMmuHandlerC1EPvj(void);

/* Symbol: _ZN11PQDSAdaptorD1Ev */
/* Demangled: PQDSAdaptor::~PQDSAdaptor() */
int _ZN11PQDSAdaptorD1Ev(void);

/* Symbol: _ZN11PQDCAdaptor19ADL_updateLumaCurveER9DpCommandRK9ADLOutputRiPi */
/* Demangled: PQDCAdaptor::ADL_updateLumaCurve(DpCommand&, ADLOutput const&, int&, int*) */
int _ZN11PQDCAdaptor19ADL_updateLumaCurveER9DpCommandRK9ADLOutputRiPi(void);

/* Symbol: _ZN12PQDREAdaptor22getDRESkinWgtSetBufferEb */
/* Demangled: PQDREAdaptor::getDRESkinWgtSetBuffer(bool) */
int _ZN12PQDREAdaptor22getDRESkinWgtSetBufferEb(void);

/* Symbol: _Z29tile_tdr_isp_mask_to_dump_wpeP19TILE_REG_MAP_STRUCTPjS1_ */
/* Demangled: tile_tdr_isp_mask_to_dump_wpe(TILE_REG_MAP_STRUCT*, unsigned int*, unsigned int*) */
int _Z29tile_tdr_isp_mask_to_dump_wpeP19TILE_REG_MAP_STRUCTPjS1_(void);

/* Symbol: _ZN17DpAsyncBlitStream12setConfigEndEv */
/* Demangled: DpAsyncBlitStream::setConfigEnd() */
int _ZN17DpAsyncBlitStream12setConfigEndEv(void);

/* Symbol: _ZN17DpAsyncBlitStream24queryTheoreticalExecTimeEjjjjPNSt3__16vectorIjNS0_9allocatorIjEEEE */
/* Demangled: DpAsyncBlitStream::queryTheoreticalExecTime(unsigned int, unsigned int, unsigned int, unsigned int, std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >*) */
int _ZN17DpAsyncBlitStream24queryTheoreticalExecTimeEjjjjPNSt3__16vectorIjNS0_9allocatorIjEEEE(void);

/* Symbol: _ZN12DpVEncStream11setCallbackEPFvPvES0_ */
/* Demangled: DpVEncStream::setCallback(void (*)(void*), void*) */
int _ZN12DpVEncStream11setCallbackEPFvPvES0_(void);

/* Symbol: _ZN17DpCommandRecorder14beginOverwriteEi */
/* Demangled: DpCommandRecorder::beginOverwrite(int) */
int _ZN17DpCommandRecorder14beginOverwriteEi(void);

/* Symbol: _ZN8PQAshmem20getAshmemValueByAddrEPjPi */
/* Demangled: PQAshmem::getAshmemValueByAddr(unsigned int*, int*) */
int _ZN8PQAshmem20getAshmemValueByAddrEPjPi(void);

/* Symbol: _ZN11PQIspTuning22getIspTuningFileStatusEv */
/* Demangled: PQIspTuning::getIspTuningFileStatus() */
int _ZN11PQIspTuning22getIspTuningFileStatusEv(void);

/* Symbol: _ZN17DpAsyncBlitStream9setRotateEji */
/* Demangled: DpAsyncBlitStream::setRotate(unsigned int, int) */
int _ZN17DpAsyncBlitStream9setRotateEji(void);

/* Symbol: _ZN12DpVEncStream15getJPEGFilesizeEPj */
/* Demangled: DpVEncStream::getJPEGFilesize(unsigned int*) */
int _ZN12DpVEncStream15getJPEGFilesizeEPj(void);

/* Symbol: _ZN12PQDREAdaptorC1Ej */
/* Demangled: PQDREAdaptor::PQDREAdaptor(unsigned int) */
int _ZN12PQDREAdaptorC1Ej(void);

/* Symbol: _ZN8PQAshmemD1Ev */
/* Demangled: PQAshmem::~PQAshmem() */
int _ZN8PQAshmemD1Ev(void);

/* Symbol: _ZN12PQRSZAdaptor11getRSZTableEv */
/* Demangled: PQRSZAdaptor::getRSZTable() */
int _ZN12PQRSZAdaptor11getRSZTableEv(void);

/* Symbol: _Z35tile_main_query_working_buffer_sizev */
/* Demangled: tile_main_query_working_buffer_size() */
int _Z35tile_main_query_working_buffer_sizev(void);

/* Symbol: _ZN11DpPortAdaptC2EiP9DpChannel14PORT_TYPE_ENUM13DP_COLOR_ENUMiiiiibyjbbbP16DpBufferPoolBase15DP_PROFILE_ENUM8DpSecurebPK13DpColorMatrixPv */
/* Demangled: DpPortAdapt::DpPortAdapt(int, DpChannel*, PORT_TYPE_ENUM, DP_COLOR_ENUM, int, int, int, int, int, bool, unsigned long long, unsigned int, bool, bool, bool, DpBufferPoolBase*, DP_PROFILE_ENUM, DpSecure, bool, DpColorMatrix const*, void*) */
int _ZN11DpPortAdaptC2EiP9DpChannel14PORT_TYPE_ENUM13DP_COLOR_ENUMiiiiibyjbbbP16DpBufferPoolBase15DP_PROFILE_ENUM8DpSecurebPK13DpColorMatrixPv(void);

/* Symbol: IMG2OReg */
/* Demangled: IMG2OReg */
extern void* IMG2OReg;

/* Symbol: _ZN9PQSession21addDCWaitHistListNodeE8PQDCHist */
/* Demangled: PQSession::addDCWaitHistListNode(PQDCHist) */
int _ZN9PQSession21addDCWaitHistListNodeE8PQDCHist(void);

/* Symbol: _ZN11PQDSAdaptor9dumpFWRegEP9DpPqParamP7DSInputP8DSOutputP5DSReg */
/* Demangled: PQDSAdaptor::dumpFWReg(DpPqParam*, DSInput*, DSOutput*, DSReg*) */
int _ZN11PQDSAdaptor9dumpFWRegEP9DpPqParamP7DSInputP8DSOutputP5DSReg(void);

/* Symbol: _ZN21PQDREHistogramAdaptor14registerBufferEPvyjPjj7HISTPOS */
/* Demangled: PQDREHistogramAdaptor::registerBuffer(void*, unsigned long long, unsigned int, unsigned int*, unsigned int, HISTPOS) */
int _ZN21PQDREHistogramAdaptor14registerBufferEPvyjPjj7HISTPOS(void);

/* Symbol: _Z18dpProfilerDumpInfov */
/* Demangled: dpProfilerDumpInfo() */
int _Z18dpProfilerDumpInfov(void);

/* Symbol: _ZN13DpEngine_RDMA10onPostProcER9DpCommand */
/* Demangled: DpEngine_RDMA::onPostProc(DpCommand&) */
int _ZN13DpEngine_RDMA10onPostProcER9DpCommand(void);

/* Symbol: _ZN11PQRSZConfigD1Ev */
/* Demangled: PQRSZConfig::~PQRSZConfig() */
int _ZN11PQRSZConfigD1Ev(void);

/* Symbol: _ZN9PQSession18setVideoDpPqConfigEP10DpPqConfigPK9DpPqParam */
/* Demangled: PQSession::setVideoDpPqConfig(DpPqConfig*, DpPqParam const*) */
int _ZN9PQSession18setVideoDpPqConfigEP10DpPqConfigPK9DpPqParam(void);

/* Symbol: _ZN9PQSession24checkAndResetUnusedHDRFWEv */
/* Demangled: PQSession::checkAndResetUnusedHDRFW() */
int _ZN9PQSession24checkAndResetUnusedHDRFWEv(void);

/* Symbol: _ZN16DpBufferPoolBase13getFormatInfoE13DP_COLOR_ENUMPcj */
/* Demangled: DpBufferPoolBase::getFormatInfo(DP_COLOR_ENUM, char*, unsigned int) */
int _ZN16DpBufferPoolBase13getFormatInfoE13DP_COLOR_ENUMPcj(void);

/* Symbol: _ZN16DpBufferPoolBaseD0Ev */
/* Demangled: DpBufferPoolBase::~DpBufferPoolBase() */
int _ZN16DpBufferPoolBaseD0Ev(void);

/* Symbol: _ZN13DpWrapper_WPE12onInitEngineER9DpCommand */
/* Demangled: DpWrapper_WPE::onInitEngine(DpCommand&) */
int _ZN13DpWrapper_WPE12onInitEngineER9DpCommand(void);

/* Symbol: _ZN9PQSession15addHDRPipeCountEv */
/* Demangled: PQSession::addHDRPipeCount() */
int _ZN9PQSession15addHDRPipeCountEv(void);

/* Symbol: _ZN17DpAsyncBlitStream12setSrcBufferEPvji */
/* Demangled: DpAsyncBlitStream::setSrcBuffer(void*, unsigned int, int) */
int _ZN17DpAsyncBlitStream12setSrcBufferEPvji(void);

/* Symbol: _ZN11DpPortAdaptD2Ev */
/* Demangled: DpPortAdapt::~DpPortAdapt() */
int _ZN11DpPortAdaptD2Ev(void);

/* Symbol: _ZN12PQDREAdaptor13getPQScenarioEP9PQSession */
/* Demangled: PQDREAdaptor::getPQScenario(PQSession*) */
int _ZN12PQDREAdaptor13getPQScenarioEP9PQSession(void);

/* Symbol: _ZN16PQSessionManagerD2Ev */
/* Demangled: PQSessionManager::~PQSessionManager() */
int _ZN16PQSessionManagerD2Ev(void);

/* Symbol: _Z28tile_tdr_isp_fprint_dump_wpeP7__sFILEP19TILE_REG_MAP_STRUCTiPjS3_jj */
/* Demangled: tile_tdr_isp_fprint_dump_wpe(__sFILE*, TILE_REG_MAP_STRUCT*, int, unsigned int*, unsigned int*, unsigned int, unsigned int) */
int _Z28tile_tdr_isp_fprint_dump_wpeP7__sFILEP19TILE_REG_MAP_STRUCTiPjS3_jj(void);

/* Symbol: _ZN13DpEngine_VENC15onReconfigTilesER9DpCommand */
/* Demangled: DpEngine_VENC::onReconfigTiles(DpCommand&) */
int _ZN13DpEngine_VENC15onReconfigTilesER9DpCommand(void);

/* Symbol: _ZN18PQAlgorithmFactory9s_ALMutexE */
/* Demangled: PQAlgorithmFactory::s_ALMutex */
extern void* _ZN18PQAlgorithmFactory9s_ALMutexE;

/* Symbol: _ZN11PQDREConfig18getDriverDebugFlagEb */
/* Demangled: PQDREConfig::getDriverDebugFlag(bool) */
int _ZN11PQDREConfig18getDriverDebugFlagEb(void);

/* Symbol: _ZN17DpCommandRecorder19getISPDebugDumpRegsEv */
/* Demangled: DpCommandRecorder::getISPDebugDumpRegs() */
int _ZN17DpCommandRecorder19getISPDebugDumpRegsEv(void);

/* Symbol: _ZN13DpPmemHandler13free_internalEv */
/* Demangled: DpPmemHandler::free_internal() */
int _ZN13DpPmemHandler13free_internalEv(void);

/* Symbol: _ZN13DpPmemHandlerD0Ev */
/* Demangled: DpPmemHandler::~DpPmemHandler() */
int _ZN13DpPmemHandlerD0Ev(void);

/* Symbol: _ZN8PQConfig9setEnableEb */
/* Demangled: PQConfig::setEnable(bool) */
int _ZN8PQConfig9setEnableEb(void);

/* Symbol: _ZN11PQDSAdaptor11onUpdateRegER9DpCommand8DSOutputPiRi */
/* Demangled: PQDSAdaptor::onUpdateReg(DpCommand&, DSOutput, int*, int&) */
int _ZN11PQDSAdaptor11onUpdateRegER9DpCommand8DSOutputPiRi(void);

/* Symbol: _ZN12PQDREAdaptor20onCalculateVideoImplEP9PQSessionR9DpPqParambP14DREVPTopOutputP11CDREVPTopFWj */
/* Demangled: PQDREAdaptor::onCalculateVideoImpl(PQSession*, DpPqParam&, bool, DREVPTopOutput*, CDREVPTopFW*, unsigned int) */
int _ZN12PQDREAdaptor20onCalculateVideoImplEP9PQSessionR9DpPqParambP14DREVPTopOutputP11CDREVPTopFWj(void);

/* Symbol: _Z16tileCalculateLCMii */
/* Demangled: tileCalculateLCM(int, int) */
int _Z16tileCalculateLCMii(void);

/* Symbol: _ZN9PQSession13setHDRRegInfoEPjjj */
/* Demangled: PQSession::setHDRRegInfo(unsigned int*, unsigned int, unsigned int) */
int _ZN9PQSession13setHDRRegInfoEPjjj(void);

/* Symbol: _ZNK9DpChannel13getSourceCropEiPiS0_S0_S0_S0_S0_S0_S0_ */
/* Demangled: DpChannel::getSourceCrop(int, int*, int*, int*, int*, int*, int*, int*, int*) const */
int _ZNK9DpChannel13getSourceCropEiPiS0_S0_S0_S0_S0_S0_S0_(void);

/* Symbol: _Z19conv_field_to_framePhjjjjjS_ */
/* Demangled: conv_field_to_frame(unsigned char*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned char*) */
int _Z19conv_field_to_framePhjjjjjS_(void);

/* Symbol: _ZN14DpCommandQueue4pollEjjj */
/* Demangled: DpCommandQueue::poll(unsigned int, unsigned int, unsigned int) */
int _ZN14DpCommandQueue4pollEjjj(void);

/* Symbol: _ZThn170348_N12DpTilePathMT10threadLoopEv */
/* Demangled: non-virtual thunk to DpTilePathMT::threadLoop() */
int _ZThn170348_N12DpTilePathMT10threadLoopEv(void);

/* Symbol: _ZN12PQRSZAdaptorC1Ej */
/* Demangled: PQRSZAdaptor::PQRSZAdaptor(unsigned int) */
int _ZN12PQRSZAdaptorC1Ej(void);

/* Symbol: _ZN12PQHDRAdaptor14getLastHDRInfoEv */
/* Demangled: PQHDRAdaptor::getLastHDRInfo() */
int _ZN12PQHDRAdaptor14getLastHDRInfoEv(void);

/* Symbol: _ZN17DpBasicBufferPool15getHWBaseWithIDEiiPjS0_ */
/* Demangled: DpBasicBufferPool::getHWBaseWithID(int, int, unsigned int*, unsigned int*) */
int _ZN17DpBasicBufferPool15getHWBaseWithIDEiiPjS0_(void);

/* Symbol: _ZN11DpIspStream16detectCropChangeEi */
/* Demangled: DpIspStream::detectCropChange(int) */
int _ZN11DpIspStream16detectCropChangeEi(void);

/* Symbol: _ZN17DpCommandRecorder15getReadbackRegsERj */
/* Demangled: DpCommandRecorder::getReadbackRegs(unsigned int&) */
int _ZN17DpCommandRecorder15getReadbackRegsERj(void);

/* Symbol: _ZN12DpFragStream11dequeueFragEPiP13DP_COLOR_ENUMPPvS0_S0_S0_S0_S0_b */
/* Demangled: DpFragStream::dequeueFrag(int*, DP_COLOR_ENUM*, void**, int*, int*, int*, int*, int*, bool) */
int _ZN12DpFragStream11dequeueFragEPiP13DP_COLOR_ENUMPPvS0_S0_S0_S0_S0_b(void);

/* Symbol: _ZN12DpFragStream12setSrcConfigE13DP_COLOR_ENUMiiiiiiP6DpRect */
/* Demangled: DpFragStream::setSrcConfig(DP_COLOR_ENUM, int, int, int, int, int, int, DpRect*) */
int _ZN12DpFragStream12setSrcConfigE13DP_COLOR_ENUMiiiiiiP6DpRect(void);

/* Symbol: _ZN16DpPathConnection12initTilePathEP17TILE_PARAM_STRUCT */
/* Demangled: DpPathConnection::initTilePath(TILE_PARAM_STRUCT*) */
int _ZN16DpPathConnection12initTilePathEP17TILE_PARAM_STRUCT(void);

/* Symbol: _ZN9PQSession12getRSZConfigEP12RSZ_CONFIG_T */
/* Demangled: PQSession::getRSZConfig(RSZ_CONFIG_T*) */
int _ZN9PQSession12getRSZConfigEP12RSZ_CONFIG_T(void);

/* Symbol: _ZN12DpVEncStream12setSrcConfigE13DP_COLOR_ENUMiiib */
/* Demangled: DpVEncStream::setSrcConfig(DP_COLOR_ENUM, int, int, int, bool) */
int _ZN12DpVEncStream12setSrcConfigE13DP_COLOR_ENUMiiib(void);

/* Symbol: _ZN13DpEngine_VENC11onWaitEventER9DpCommand */
/* Demangled: DpEngine_VENC::onWaitEvent(DpCommand&) */
int _ZN13DpEngine_VENC11onWaitEventER9DpCommand(void);

/* Symbol: _ZN9PQSession13setPreActPosXEj */
/* Demangled: PQSession::setPreActPosX(unsigned int) */
int _ZN9PQSession13setPreActPosXEj(void);

/* Symbol: _ZN12PQDREAdaptor12writeCurve16ER9DpCommandPK14DREVPTopOutputjjPiRib */
/* Demangled: PQDREAdaptor::writeCurve16(DpCommand&, DREVPTopOutput const*, unsigned int, unsigned int, int*, int&, bool) */
int _ZN12PQDREAdaptor12writeCurve16ER9DpCommandPK14DREVPTopOutputjjPiRib(void);

/* Symbol: _ZN18DpAsyncBlitStream212setDstBufferEjPPvS1_Pjji */
/* Demangled: DpAsyncBlitStream2::setDstBuffer(unsigned int, void**, void**, unsigned int*, unsigned int, int) */
int _ZN18DpAsyncBlitStream212setDstBufferEjPPvS1_Pjji(void);

/* Symbol: _ZN12DpIonHandler15destroyInstanceEv */
/* Demangled: DpIonHandler::destroyInstance() */
int _ZN12DpIonHandler15destroyInstanceEv(void);

/* Symbol: _ZN9PQSession22getHDRWaitHistListSizeEv */
/* Demangled: PQSession::getHDRWaitHistListSize() */
int _ZN9PQSession22getHDRWaitHistListSizeEv(void);

/* Symbol: _ZN9PQSessionD2Ev */
/* Demangled: PQSession::~PQSession() */
int _ZN9PQSessionD2Ev(void);

/* Symbol: _ZN11PQDSAdaptor23ConfigDSParamByScenarioEP7DSInputP9DpPqParam */
/* Demangled: PQDSAdaptor::ConfigDSParamByScenario(DSInput*, DpPqParam*) */
int _ZN11PQDSAdaptor23ConfigDSParamByScenarioEP7DSInputP9DpPqParam(void);

/* Symbol: _ZN14PQColorAdaptor18onUpdateLocal3DLUTEP14COLOR_CONFIG_TR9DpCommandRiPi */
/* Demangled: PQColorAdaptor::onUpdateLocal3DLUT(COLOR_CONFIG_T*, DpCommand&, int&, int*) */
int _ZN14PQColorAdaptor18onUpdateLocal3DLUTEP14COLOR_CONFIG_TR9DpCommandRiPi(void);

/* Symbol: _ZN11PQDREConfig16getIspTuningFlagEb */
/* Demangled: PQDREConfig::getIspTuningFlag(bool) */
int _ZN11PQDREConfig16getIspTuningFlagEb(void);

/* Symbol: _ZN16DpBufferPoolBase13setSecureModeE8DpSecure */
/* Demangled: DpBufferPoolBase::setSecureMode(DpSecure) */
int _ZN16DpBufferPoolBase13setSecureModeE8DpSecure(void);

/* Symbol: _ZN14DpCommandQueue11getTDShpParEv */
/* Demangled: DpCommandQueue::getTDShpPar() */
int _ZN14DpCommandQueue11getTDShpParEv(void);

/* Symbol: _ZN17DpCommandRecorder12getFrameInfoEv */
/* Demangled: DpCommandRecorder::getFrameInfo() */
int _ZN17DpCommandRecorder12getFrameInfoEv(void);

/* Symbol: _ZN11PQDSAdaptorD2Ev */
/* Demangled: PQDSAdaptor::~PQDSAdaptor() */
int _ZN11PQDSAdaptorD2Ev(void);

/* Symbol: _ZN14DpPathTopology10s_topologyE */
/* Demangled: DpPathTopology::s_topology */
extern void* _ZN14DpPathTopology10s_topologyE;

/* Symbol: _ZN16DpBufferPoolBase11queueBufferEib */
/* Demangled: DpBufferPoolBase::queueBuffer(int, bool) */
int _ZN16DpBufferPoolBase11queueBufferEib(void);

/* Symbol: _ZN16DpRingBufferPool15getSWBaseWithIDEiPPvPj */
/* Demangled: DpRingBufferPool::getSWBaseWithID(int, void**, unsigned int*) */
int _ZN16DpRingBufferPool15getSWBaseWithIDEiPPvPj(void);

/* Symbol: _ZNK11DpPortAdapt14getChannelInfoEv */
/* Demangled: DpPortAdapt::getChannelInfo() const */
int _ZNK11DpPortAdapt14getChannelInfoEv(void);

/* Symbol: _ZN8DpDriver16notifyEngineWROTEv */
/* Demangled: DpDriver::notifyEngineWROT() */
int _ZN8DpDriver16notifyEngineWROTEv(void);

/* Symbol: _ZN14DpCommandQueueC1EP10DpPathBasej */
/* Demangled: DpCommandQueue::DpCommandQueue(DpPathBase*, unsigned int) */
int _ZN14DpCommandQueueC1EP10DpPathBasej(void);

/* Symbol: _ZN13DpEngine_WROT15onReconfigFrameER9DpCommandR8DpConfig */
/* Demangled: DpEngine_WROT::onReconfigFrame(DpCommand&, DpConfig&) */
int _ZN13DpEngine_WROT15onReconfigFrameER9DpCommandR8DpConfig(void);

/* Symbol: _ZN9PQSession11getDSConfigEPP11DS_CONFIG_T */
/* Demangled: PQSession::getDSConfig(DS_CONFIG_T**) */
int _ZN9PQSession11getDSConfigEPP11DS_CONFIG_T(void);

/* Symbol: _ZN11PQIspTuning17getDreTuningValueEP10DREToolRegP17TAdaptiveCALTMRegP23TAdaptiveCALTMFace_Dump */
/* Demangled: PQIspTuning::getDreTuningValue(DREToolReg*, TAdaptiveCALTMReg*, TAdaptiveCALTMFace_Dump*) */
int _ZN11PQIspTuning17getDreTuningValueEP10DREToolRegP17TAdaptiveCALTMRegP23TAdaptiveCALTMFace_Dump(void);

/* Symbol: _ZN21PQDREHistogramAdaptorC1Ej */
/* Demangled: PQDREHistogramAdaptor::PQDREHistogramAdaptor(unsigned int) */
int _ZN21PQDREHistogramAdaptorC1Ej(void);

/* Symbol: _Z29tile_tdr_isp_dump_inv_reg_bldP19TILE_REG_MAP_STRUCTS0_iPjjj */
/* Demangled: tile_tdr_isp_dump_inv_reg_bld(TILE_REG_MAP_STRUCT*, TILE_REG_MAP_STRUCT*, int, unsigned int*, unsigned int, unsigned int) */
int _Z29tile_tdr_isp_dump_inv_reg_bldP19TILE_REG_MAP_STRUCTS0_iPjjj(void);

/* Symbol: _ZN12DpVEncStreamC2ENS_13ISPStreamTypeE */
/* Demangled: DpVEncStream::DpVEncStream(DpVEncStream::ISPStreamType) */
int _ZN12DpVEncStreamC2ENS_13ISPStreamTypeE(void);

/* Symbol: _ZN13DpMultiThread8s_workerE */
/* Demangled: DpMultiThread::s_worker */
extern void* _ZN13DpMultiThread8s_workerE;

/* Symbol: _ZN10PQDCConfigC1Ev */
/* Demangled: PQDCConfig::PQDCConfig() */
int _ZN10PQDCConfigC1Ev(void);

/* Symbol: _ZN12PQDREAdaptor26setDRETransFinalCoefBufferEP12DREsharedatab */
/* Demangled: PQDREAdaptor::setDRETransFinalCoefBuffer(DREsharedata*, bool) */
int _ZN12PQDREAdaptor26setDRETransFinalCoefBufferEP12DREsharedatab(void);

/* Symbol: _ZN12PQDREAdaptorC2Ej */
/* Demangled: PQDREAdaptor::PQDREAdaptor(unsigned int) */
int _ZN12PQDREAdaptorC2Ej(void);

/* Symbol: _ZTV13DpMultiThread */
/* Demangled: vtable for DpMultiThread */
extern void* _ZTV13DpMultiThread;

/* Symbol: _ZN18DpAsyncBlitStream212setSrcBufferEPvji */
/* Demangled: DpAsyncBlitStream2::setSrcBuffer(void*, unsigned int, int) */
int _ZN18DpAsyncBlitStream212setSrcBufferEPvji(void);

/* Symbol: _ZN9PQSession18setDREInitFWStatusEi */
/* Demangled: PQSession::setDREInitFWStatus(int) */
int _ZN9PQSession18setDREInitFWStatusEi(void);

/* Symbol: _ZN11PQDCAdaptor14setDCShareDataE11DCsharedata */
/* Demangled: PQDCAdaptor::setDCShareData(DCsharedata) */
int _ZN11PQDCAdaptor14setDCShareDataE11DCsharedata(void);

/* Symbol: _ZN8PQAshmemD2Ev */
/* Demangled: PQAshmem::~PQAshmem() */
int _ZN8PQAshmemD2Ev(void);

/* Symbol: _Z28tile_tdr_isp_reg_to_dump_wpeP19TILE_REG_MAP_STRUCTPjS1_ji */
/* Demangled: tile_tdr_isp_reg_to_dump_wpe(TILE_REG_MAP_STRUCT*, unsigned int*, unsigned int*, unsigned int, int) */
int _Z28tile_tdr_isp_reg_to_dump_wpeP19TILE_REG_MAP_STRUCTPjS1_ji(void);

/* Symbol: _ZN8PQAshmem11getInstanceEv */
/* Demangled: PQAshmem::getInstance() */
int _ZN8PQAshmem11getInstanceEv(void);

/* Symbol: _ZN18DpAsyncBlitStream214refreshCropROIEj */
/* Demangled: DpAsyncBlitStream2::refreshCropROI(unsigned int) */
int _ZN18DpAsyncBlitStream214refreshCropROIEj(void);

/* Symbol: _ZN13DpEngine_RDMA13onUpdatePMQOSER9DpCommandRjS2_RiR7timevalR19DP_FORMAT_FLAG_ENUM */
/* Demangled: DpEngine_RDMA::onUpdatePMQOS(DpCommand&, unsigned int&, unsigned int&, int&, timeval&, DP_FORMAT_FLAG_ENUM&) */
int _ZN13DpEngine_RDMA13onUpdatePMQOSER9DpCommandRjS2_RiR7timevalR19DP_FORMAT_FLAG_ENUM(void);

/* Symbol: _ZN11PQRSZConfigD2Ev */
/* Demangled: PQRSZConfig::~PQRSZConfig() */
int _ZN11PQRSZConfigD2Ev(void);

/* Symbol: _ZN13PQColorConfig14isMDPColorModeEv */
/* Demangled: PQColorConfig::isMDPColorMode() */
int _ZN13PQColorConfig14isMDPColorModeEv(void);

/* Symbol: _ZN16DpBufferPoolBaseD1Ev */
/* Demangled: DpBufferPoolBase::~DpBufferPoolBase() */
int _ZN16DpBufferPoolBaseD1Ev(void);

/* Symbol: _Z29wrapper_tile_proc_main_singleP17TILE_PARAM_STRUCTiPbP7__sFILE */
/* Demangled: wrapper_tile_proc_main_single(TILE_PARAM_STRUCT*, int, bool*, __sFILE*) */
int _Z29wrapper_tile_proc_main_singleP17TILE_PARAM_STRUCTiPbP7__sFILE(void);

/* Symbol: _ZN12DpEngine_AAL20onRetrieveFrameParamEP17TILE_PARAM_STRUCTR9DpCommand */
/* Demangled: DpEngine_AAL::onRetrieveFrameParam(TILE_PARAM_STRUCT*, DpCommand&) */
int _ZN12DpEngine_AAL20onRetrieveFrameParamEP17TILE_PARAM_STRUCTR9DpCommand(void);

/* Symbol: _ZN16DpAutoBufferPoolC1Ev */
/* Demangled: DpAutoBufferPool::DpAutoBufferPool() */
int _ZN16DpAutoBufferPoolC1Ev(void);

/* Symbol: _ZN12DpEngine_AAL13onConfigFrameER9DpCommandR8DpConfig */
/* Demangled: DpEngine_AAL::onConfigFrame(DpCommand&, DpConfig&) */
int _ZN12DpEngine_AAL13onConfigFrameER9DpCommandR8DpConfig(void);

/* Symbol: _ZN14DpCommandQueue9addMetLogEPKcj */
/* Demangled: DpCommandQueue::addMetLog(char const*, unsigned int) */
int _ZN14DpCommandQueue9addMetLogEPKcj(void);

/* Symbol: _ZN13DpWrapper_ISP14onInitTileCalcEP17TILE_PARAM_STRUCT */
/* Demangled: DpWrapper_ISP::onInitTileCalc(TILE_PARAM_STRUCT*) */
int _ZN13DpWrapper_ISP14onInitTileCalcEP17TILE_PARAM_STRUCT(void);

/* Symbol: _ZN8DpDriver11s_pInstanceE */
/* Demangled: DpDriver::s_pInstance */
extern void* _ZN8DpDriver11s_pInstanceE;

/* Symbol: _ZN12DpBlitStream12setSrcBufferEPPvS1_Pjj */
/* Demangled: DpBlitStream::setSrcBuffer(void**, void**, unsigned int*, unsigned int) */
int _ZN12DpBlitStream12setSrcBufferEPPvS1_Pjj(void);

/* Symbol: _ZN14DpEngine_IMG2O19onRetrieveTileParamEP17TILE_PARAM_STRUCT */
/* Demangled: DpEngine_IMG2O::onRetrieveTileParam(TILE_PARAM_STRUCT*) */
int _ZN14DpEngine_IMG2O19onRetrieveTileParamEP17TILE_PARAM_STRUCT(void);

/* Symbol: _ZN13DpWrapper_ISP19onRetrieveTileParamEP17TILE_PARAM_STRUCT */
/* Demangled: DpWrapper_ISP::onRetrieveTileParam(TILE_PARAM_STRUCT*) */
int _ZN13DpWrapper_ISP19onRetrieveTileParamEP17TILE_PARAM_STRUCT(void);

/* Symbol: _ZN13DpPmemHandlerD1Ev */
/* Demangled: DpPmemHandler::~DpPmemHandler() */
int _ZN13DpPmemHandlerD1Ev(void);

/* Symbol: _ZN11PQDREConfig12getDREConfigEP12DRE_CONFIG_Tb */
/* Demangled: PQDREConfig::getDREConfig(DRE_CONFIG_T*, bool) */
int _ZN11PQDREConfig12getDREConfigEP12DRE_CONFIG_Tb(void);

/* Symbol: _ZN8DpStreamC2E16STREAM_TYPE_ENUM */
/* Demangled: DpStream::DpStream(STREAM_TYPE_ENUM) */
int _ZN8DpStreamC2E16STREAM_TYPE_ENUM(void);

/* Symbol: _ZN9PQSession18isHDRWaitHistEmptyEv */
/* Demangled: PQSession::isHDRWaitHistEmpty() */
int _ZN9PQSession18isHDRWaitHistEmptyEv(void);

/* Symbol: _ZN10PQDSConfig16m_TDSHPTableInitE */
/* Demangled: PQDSConfig::m_TDSHPTableInit */
extern void* _ZN10PQDSConfig16m_TDSHPTableInitE;

/* Symbol: _ZN11PQDCAdaptor14tuningDCOutputEP9ADLOutputi */
/* Demangled: PQDCAdaptor::tuningDCOutput(ADLOutput*, int) */
int _ZN11PQDCAdaptor14tuningDCOutputEP9ADLOutputi(void);

/* Symbol: _ZN12PQRSZAdaptorC2Ej */
/* Demangled: PQRSZAdaptor::PQRSZAdaptor(unsigned int) */
int _ZN12PQRSZAdaptorC2Ej(void);

/* Symbol: _ZN21PQDREHistogramAdaptor14dumpBufferPoolEv */
/* Demangled: PQDREHistogramAdaptor::dumpBufferPool() */
int _ZN21PQDREHistogramAdaptor14dumpBufferPoolEv(void);

/* Symbol: _ZN17DpAsyncBlitStream12waitCompleteEPv */
/* Demangled: DpAsyncBlitStream::waitComplete(void*) */
int _ZN17DpAsyncBlitStream12waitCompleteEPv(void);

/* Symbol: _ZN17DpAsyncBlitStream9setDstROIEjiiRK6DpRect */
/* Demangled: DpAsyncBlitStream::setDstROI(unsigned int, int, int, DpRect const&) */
int _ZN17DpAsyncBlitStream9setDstROIEjiiRK6DpRect(void);

/* Symbol: _ZN14DpCommandQueue14getPQSessionIDEv */
/* Demangled: DpCommandQueue::getPQSessionID() */
int _ZN14DpCommandQueue14getPQSessionIDEv(void);

/* Symbol: _ZN10PQDCConfig11getDCConfigEP11DC_CONFIG_TR13GlobalPQParamb */
/* Demangled: PQDCConfig::getDCConfig(DC_CONFIG_T*, GlobalPQParam&, bool) */
int _ZN10PQDCConfig11getDCConfigEP11DC_CONFIG_TR13GlobalPQParamb(void);

/* Symbol: _ZN9DpChannel13unlockChannelEv */
/* Demangled: DpChannel::unlockChannel() */
int _ZN9DpChannel13unlockChannelEv(void);

/* Symbol: _ZN14PQTuningBuffer12toBePreparedEv */
/* Demangled: PQTuningBuffer::toBePrepared() */
int _ZN14PQTuningBuffer12toBePreparedEv(void);

/* Symbol: _ZN12PQRSZAdaptor14tuningRSZInputEP8RszInputi */
/* Demangled: PQRSZAdaptor::tuningRSZInput(RszInput*, int) */
int _ZN12PQRSZAdaptor14tuningRSZInputEP8RszInputi(void);

/* Symbol: _ZN11PQHDRConfig9isEnabledEb */
/* Demangled: PQHDRConfig::isEnabled(bool) */
int _ZN11PQHDRConfig9isEnabledEb(void);

/* Symbol: _ZN17DpAsyncBlitStreamD1Ev */
/* Demangled: DpAsyncBlitStream::~DpAsyncBlitStream() */
int _ZN17DpAsyncBlitStreamD1Ev(void);

/* Symbol: _ZN12DpFragStream9queueFragEi */
/* Demangled: DpFragStream::queueFrag(int) */
int _ZN12DpFragStream9queueFragEi(void);

/* Symbol: _ZN12DpVEncStream12setParameterER23ISP_TPIPE_CONFIG_STRUCTP14ISP2MDP_STRUCTj */
/* Demangled: DpVEncStream::setParameter(ISP_TPIPE_CONFIG_STRUCT&, ISP2MDP_STRUCT*, unsigned int) */
int _ZN12DpVEncStream12setParameterER23ISP_TPIPE_CONFIG_STRUCTP14ISP2MDP_STRUCTj(void);

/* Symbol: _ZN6DpSync4waitEii */
/* Demangled: DpSync::wait(int, int) */
int _ZN6DpSync4waitEii(void);

/* Symbol: _Z15backward_4_tapsiiiiiiiiiRiS_ */
/* Demangled: backward_4_taps(int, int, int, int, int, int, int, int, int, int&, int&) */
int _Z15backward_4_tapsiiiiiiiiiRiS_(void);

/* Symbol: _Z19tpipe_main_platformPK23ISP_TPIPE_CONFIG_STRUCTP27ISP_TPIPE_DESCRIPTOR_STRUCTPciPvS5_S5_S5_ */
/* Demangled: tpipe_main_platform(ISP_TPIPE_CONFIG_STRUCT const*, ISP_TPIPE_DESCRIPTOR_STRUCT*, char*, int, void*, void*, void*, void*) */
int _Z19tpipe_main_platformPK23ISP_TPIPE_CONFIG_STRUCTP27ISP_TPIPE_DESCRIPTOR_STRUCTPciPvS5_S5_S5_(void);

/* Symbol: _Z24tile_tdr_isp_fprint_dumpP7__sFILEP19TILE_REG_MAP_STRUCTiPjS3_jj */
/* Demangled: tile_tdr_isp_fprint_dump(__sFILE*, TILE_REG_MAP_STRUCT*, int, unsigned int*, unsigned int*, unsigned int, unsigned int) */
int _Z24tile_tdr_isp_fprint_dumpP7__sFILEP19TILE_REG_MAP_STRUCTiPjS3_jj(void);

/* Symbol: _ZN16DpBufferPoolBase9abortPollE16CLIENT_TYPE_ENUM */
/* Demangled: DpBufferPoolBase::abortPoll(CLIENT_TYPE_ENUM) */
int _ZN16DpBufferPoolBase9abortPollE16CLIENT_TYPE_ENUM(void);

/* Symbol: _ZNK11DpPortAdapt13getJPEGConfigEP19DpJPEGEnc_Config_st */
/* Demangled: DpPortAdapt::getJPEGConfig(DpJPEGEnc_Config_st*) const */
int _ZNK11DpPortAdapt13getJPEGConfigEP19DpJPEGEnc_Config_st(void);

/* Symbol: _ZN9PQSession10setAIParamEPK9DpPqParamPK9DpAIParamb */
/* Demangled: PQSession::setAIParam(DpPqParam const*, DpAIParam const*, bool) */
int _ZN9PQSession10setAIParamEPK9DpPqParamPK9DpAIParamb(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev(void);

/* Symbol: _ZN11PQDCAdaptor16onCalculateImageEP9PQSessioniRK12DpImageParamP9ADLOutput */
/* Demangled: PQDCAdaptor::onCalculateImage(PQSession*, int, DpImageParam const&, ADLOutput*) */
int _ZN11PQDCAdaptor16onCalculateImageEP9PQSessioniRK12DpImageParamP9ADLOutput(void);

/* Symbol: _ZN21PQDREHistogramAdaptor12searchBufferEyPj */
/* Demangled: PQDREHistogramAdaptor::searchBuffer(unsigned long long, unsigned int*) */
int _ZN21PQDREHistogramAdaptor12searchBufferEyPj(void);

/* Symbol: _ZN14DpCommandQueueD0Ev */
/* Demangled: DpCommandQueue::~DpCommandQueue() */
int _ZN14DpCommandQueueD0Ev(void);

/* Symbol: _ZN12PQRSZAdaptor11getInstanceEj */
/* Demangled: PQRSZAdaptor::getInstance(unsigned int) */
int _ZN12PQRSZAdaptor11getInstanceEj(void);

/* Symbol: _ZN11PQIspTuning11s_pInstanceE */
/* Demangled: PQIspTuning::s_pInstance */
extern void* _ZN11PQIspTuning11s_pInstanceE;

/* Symbol: _ZN21PQDREHistogramAdaptorC2Ej */
/* Demangled: PQDREHistogramAdaptor::PQDREHistogramAdaptor(unsigned int) */
int _ZN21PQDREHistogramAdaptorC2Ej(void);

/* Symbol: _Z12DpGetFnDump2v */
/* Demangled: DpGetFnDump2() */
int _Z12DpGetFnDump2v(void);

/* Symbol: _ZN16DpRingBufferPool12createBufferEi13DP_COLOR_ENUMiiiiiiiP6DpRect */
/* Demangled: DpRingBufferPool::createBuffer(int, DP_COLOR_ENUM, int, int, int, int, int, int, int, DpRect*) */
int _ZN16DpRingBufferPool12createBufferEi13DP_COLOR_ENUMiiiiiiiP6DpRect(void);

/* Symbol: _ZN10PQDCConfigC2Ev */
/* Demangled: PQDCConfig::PQDCConfig() */
int _ZN10PQDCConfigC2Ev(void);

/* Symbol: _ZN12DpBlitStream12setSrcBufferEPvj */
/* Demangled: DpBlitStream::setSrcBuffer(void*, unsigned int) */
int _ZN12DpBlitStream12setSrcBufferEPvj(void);

/* Symbol: _ZN11DpIspStreamC1ENS_13ISPStreamTypeE */
/* Demangled: DpIspStream::DpIspStream(DpIspStream::ISPStreamType) */
int _ZN11DpIspStreamC1ENS_13ISPStreamTypeE(void);

/* Symbol: _ZN11DpIspStreamD1Ev */
/* Demangled: DpIspStream::~DpIspStream() */
int _ZN11DpIspStreamD1Ev(void);

/* Symbol: _ZN9PQSession14getHDRHistDoneEv */
/* Demangled: PQSession::getHDRHistDone() */
int _ZN9PQSession14getHDRHistDoneEv(void);

/* Symbol: _ZN8PQConfigC1Ev */
/* Demangled: PQConfig::PQConfig() */
int _ZN8PQConfigC1Ev(void);

/* Symbol: _Z15forward_src_acciiiiiiiiiiiRiS_S_S_S_S_ */
/* Demangled: forward_src_acc(int, int, int, int, int, int, int, int, int, int, int, int&, int&, int&, int&, int&, int&) */
int _Z15forward_src_acciiiiiiiiiiiRiS_S_S_S_S_(void);

/* Symbol: _Z37tile_tdr_isp_fprint_dump_internal_eafP7__sFILEP19TILE_REG_MAP_STRUCTiPjS3_jj */
/* Demangled: tile_tdr_isp_fprint_dump_internal_eaf(__sFILE*, TILE_REG_MAP_STRUCT*, int, unsigned int*, unsigned int*, unsigned int, unsigned int) */
int _Z37tile_tdr_isp_fprint_dump_internal_eafP7__sFILEP19TILE_REG_MAP_STRUCTiPjS3_jj(void);

/* Symbol: _ZN16DpAutoBufferPool12createBufferE13DP_COLOR_ENUMiiij */
/* Demangled: DpAutoBufferPool::createBuffer(DP_COLOR_ENUM, int, int, int, unsigned int) */
int _ZN16DpAutoBufferPool12createBufferE13DP_COLOR_ENUMiiij(void);

/* Symbol: _ZN13DpWrapper_WPE19onRetrieveTileParamEP17TILE_PARAM_STRUCT */
/* Demangled: DpWrapper_WPE::onRetrieveTileParam(TILE_PARAM_STRUCT*) */
int _ZN13DpWrapper_WPE19onRetrieveTileParamEP17TILE_PARAM_STRUCT(void);

/* Symbol: _ZN17DpAsyncBlitStream9cancelJobEj */
/* Demangled: DpAsyncBlitStream::cancelJob(unsigned int) */
int _ZN17DpAsyncBlitStream9cancelJobEj(void);

/* Symbol: _ZN9DpChannel16setParameterListEPPvijPj */
/* Demangled: DpChannel::setParameterList(void**, int, unsigned int, unsigned int*) */
int _ZN9DpChannel16setParameterListEPPvijPj(void);

/* Symbol: _ZTV12DpEngine_HDR */
/* Demangled: vtable for DpEngine_HDR */
extern void* _ZTV12DpEngine_HDR;

/* Symbol: _ZN13PQColorConfig22composeTransitionInputEPv */
/* Demangled: PQColorConfig::composeTransitionInput(void*) */
int _ZN13PQColorConfig22composeTransitionInputEPv(void);

/* Symbol: _ZN16DpBufferPoolBaseD2Ev */
/* Demangled: DpBufferPoolBase::~DpBufferPoolBase() */
int _ZN16DpBufferPoolBaseD2Ev(void);

/* Symbol: _ZN17DpAsyncBlitStream17detectFrameChangeERNS_10BlitConfigE */
/* Demangled: DpAsyncBlitStream::detectFrameChange(DpAsyncBlitStream::BlitConfig&) */
int _ZN17DpAsyncBlitStream17detectFrameChangeERNS_10BlitConfigE(void);

/* Symbol: _ZN8DpDriver10simCommandER14DpCommandBlockPPvRj */
/* Demangled: DpDriver::simCommand(DpCommandBlock&, void**, unsigned int&) */
int _ZN8DpDriver10simCommandER14DpCommandBlockPPvRj(void);

/* Symbol: _Z12tile_isp_tdrP19TILE_REG_MAP_STRUCTP23FUNC_DESCRIPTION_STRUCT */
/* Demangled: tile_isp_tdr(TILE_REG_MAP_STRUCT*, FUNC_DESCRIPTION_STRUCT*) */
int _Z12tile_isp_tdrP19TILE_REG_MAP_STRUCTP23FUNC_DESCRIPTION_STRUCT(void);

/* Symbol: _ZN16DpAutoBufferPoolC2Ev */
/* Demangled: DpAutoBufferPool::DpAutoBufferPool() */
int _ZN16DpAutoBufferPoolC2Ev(void);

/* Symbol: _ZN17DpBasicBufferPool13acquireBufferEPiPPvPjb */
/* Demangled: DpBasicBufferPool::acquireBuffer(int*, void**, unsigned int*, bool) */
int _ZN17DpBasicBufferPool13acquireBufferEPiPPvPjb(void);

/* Symbol: _ZN9PQSession10setPQparamEPK9DpPqParam */
/* Demangled: PQSession::setPQparam(DpPqParam const*) */
int _ZN9PQSession10setPQparamEPK9DpPqParam(void);

/* Symbol: _ZNK8DpStream22getNumReadbackPABufferERj */
/* Demangled: DpStream::getNumReadbackPABuffer(unsigned int&) const */
int _ZNK8DpStream22getNumReadbackPABufferERj(void);

/* Symbol: _ZN12DpBlitStream12setSrcConfigEii13DP_COLOR_ENUM17DpInterlaceFormatP6DpRect */
/* Demangled: DpBlitStream::setSrcConfig(int, int, DP_COLOR_ENUM, DpInterlaceFormat, DpRect*) */
int _ZN12DpBlitStream12setSrcConfigEii13DP_COLOR_ENUM17DpInterlaceFormatP6DpRect(void);

/* Symbol: _ZN12DpMmuHandler18mapSWAddressBySizeEj */
/* Demangled: DpMmuHandler::mapSWAddressBySize(unsigned int) */
int _ZN12DpMmuHandler18mapSWAddressBySizeEj(void);

/* Symbol: _Z25tile_tdr_isp_mask_to_dumpP19TILE_REG_MAP_STRUCTPjS1_ */
/* Demangled: tile_tdr_isp_mask_to_dump(TILE_REG_MAP_STRUCT*, unsigned int*, unsigned int*) */
int _Z25tile_tdr_isp_mask_to_dumpP19TILE_REG_MAP_STRUCTPjS1_(void);

/* Symbol: _ZN18DpAsyncBlitStream215refreshCropROIsEv */
/* Demangled: DpAsyncBlitStream2::refreshCropROIs() */
int _ZN18DpAsyncBlitStream215refreshCropROIsEv(void);

/* Symbol: _ZN14DpCommandQueue12addIspMetLogEPcj */
/* Demangled: DpCommandQueue::addIspMetLog(char*, unsigned int) */
int _ZN14DpCommandQueue12addIspMetLogEPcj(void);

/* Symbol: _ZN12DpMmuHandler11flushMemoryEN8DpMemory15FLUSH_TYPE_ENUMEii */
/* Demangled: DpMmuHandler::flushMemory(DpMemory::FLUSH_TYPE_ENUM, int, int) */
int _ZN12DpMmuHandler11flushMemoryEN8DpMemory15FLUSH_TYPE_ENUMEii(void);

/* Symbol: _Z37tile_tdr_isp_reg_to_dump_internal_bldP19TILE_REG_MAP_STRUCTPjS1_ji */
/* Demangled: tile_tdr_isp_reg_to_dump_internal_bld(TILE_REG_MAP_STRUCT*, unsigned int*, unsigned int*, unsigned int, int) */
int _Z37tile_tdr_isp_reg_to_dump_internal_bldP19TILE_REG_MAP_STRUCTPjS1_ji(void);

/* Symbol: _ZN13DpPmemHandlerD2Ev */
/* Demangled: DpPmemHandler::~DpPmemHandler() */
int _ZN13DpPmemHandlerD2Ev(void);

/* Symbol: _ZN12PQHDRAdaptor14isSEIInfoExistEP24_DP_VDEC_DRV_COLORDESC_T */
/* Demangled: PQHDRAdaptor::isSEIInfoExist(_DP_VDEC_DRV_COLORDESC_T*) */
int _ZN12PQHDRAdaptor14isSEIInfoExistEP24_DP_VDEC_DRV_COLORDESC_T(void);

/* Symbol: _ZN12DpVEncStream19queueBatchDstBufferEiP12DpBufferDescjj */
/* Demangled: DpVEncStream::queueBatchDstBuffer(int, DpBufferDesc*, unsigned int, unsigned int) */
int _ZN12DpVEncStream19queueBatchDstBufferEiP12DpBufferDescjj(void);

/* Symbol: _ZN12DpIonHandler12mapHWAddressEij */
/* Demangled: DpIonHandler::mapHWAddress(int, unsigned int) */
int _ZN12DpIonHandler12mapHWAddressEij(void);

/* Symbol: _ZN14DpEngine_COLOR14onDeInitEngineER9DpCommand */
/* Demangled: DpEngine_COLOR::onDeInitEngine(DpCommand&) */
int _ZN14DpEngine_COLOR14onDeInitEngineER9DpCommand(void);

/* Symbol: _ZN13DpPathControl12onWaitStreamEv */
/* Demangled: DpPathControl::onWaitStream() */
int _ZN13DpPathControl12onWaitStreamEv(void);

/* Symbol: _ZN17DpAsyncBlitStream12setSrcBufferEPPvPjji */
/* Demangled: DpAsyncBlitStream::setSrcBuffer(void**, unsigned int*, unsigned int, int) */
int _ZN17DpAsyncBlitStream12setSrcBufferEPPvPjji(void);

/* Symbol: _ZN9PQSession6setSVPEb */
/* Demangled: PQSession::setSVP(bool) */
int _ZN9PQSession6setSVPEb(void);

/* Symbol: _Z13format2stringj */
/* Demangled: format2string(unsigned int) */
int _Z13format2stringj(void);

/* Symbol: WPEO2Reg */
/* Demangled: WPEO2Reg */
extern void* WPEO2Reg;

/* Symbol: _ZN12DpIonHandler17cacheFlushbyRangeEv */
/* Demangled: DpIonHandler::cacheFlushbyRange() */
int _ZN12DpIonHandler17cacheFlushbyRangeEv(void);

/* Symbol: _ZN9PQSession25deleteHDRWaitHistListNodeEv */
/* Demangled: PQSession::deleteHDRWaitHistListNode() */
int _ZN9PQSession25deleteHDRWaitHistListNodeEv(void);

/* Symbol: _ZN8PQAshmem10initAshmemEN7android2spIN6vendor8mediatek8hardware2pq4V2_015IPictureQualityEEE */
/* Demangled: PQAshmem::initAshmem(android::sp<vendor::mediatek::hardware::pq::V2_0::IPictureQuality>) */
int _ZN8PQAshmem10initAshmemEN7android2spIN6vendor8mediatek8hardware2pq4V2_015IPictureQualityEEE(void);

/* Symbol: _ZN12PQHDRAdaptor25updateHDRFWinputFrameSizeEP9DHDRINPUTR8DpConfigP9PQSession */
/* Demangled: PQHDRAdaptor::updateHDRFWinputFrameSize(DHDRINPUT*, DpConfig&, PQSession*) */
int _ZN12PQHDRAdaptor25updateHDRFWinputFrameSizeEP9DHDRINPUTR8DpConfigP9PQSession(void);

/* Symbol: _ZN16DpBufferPoolBase14dumpBufferInfoEPcj */
/* Demangled: DpBufferPoolBase::dumpBufferInfo(char*, unsigned int) */
int _ZN16DpBufferPoolBase14dumpBufferInfoEPcj(void);

/* Symbol: _ZN16DpPathConnectionC2EP10DpPathBase */
/* Demangled: DpPathConnection::DpPathConnection(DpPathBase*) */
int _ZN16DpPathConnectionC2EP10DpPathBase(void);

/* Symbol: _ZN12DpEngine_SCL11initInParamEP8RszInputP9DpPqParamR8DpConfig */
/* Demangled: DpEngine_SCL::initInParam(RszInput*, DpPqParam*, DpConfig&) */
int _ZN12DpEngine_SCL11initInParamEP8RszInputP9DpPqParamR8DpConfig(void);

/* Symbol: _ZN12PQDREAdaptor16debugDumpFWInputEPK13DREVPTopInputj */
/* Demangled: PQDREAdaptor::debugDumpFWInput(DREVPTopInput const*, unsigned int) */
int _ZN12PQDREAdaptor16debugDumpFWInputEPK13DREVPTopInputj(void);

/* Symbol: _ZN17DpAsyncBlitStreamD2Ev */
/* Demangled: DpAsyncBlitStream::~DpAsyncBlitStream() */
int _ZN17DpAsyncBlitStreamD2Ev(void);

/* Symbol: _ZNSt3__16vectorINS0_IyNS_9allocatorIyEEEENS1_IS3_EEE21__push_back_slow_pathIS3_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> >, std::__1::allocator<std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> > > >::__push_back_slow_path<std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> > >(std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> >&&) */
int _ZNSt3__16vectorINS0_IyNS_9allocatorIyEEEENS1_IS3_EEE21__push_back_slow_pathIS3_EEvOT_(void);

/* Symbol: _ZN12DpEngine_SCL14onDeInitEngineER9DpCommand */
/* Demangled: DpEngine_SCL::onDeInitEngine(DpCommand&) */
int _ZN12DpEngine_SCL14onDeInitEngineER9DpCommand(void);

/* Symbol: _ZN14PQColorAdaptor9s_ALMutexE */
/* Demangled: PQColorAdaptor::s_ALMutex */
extern void* _ZN14PQColorAdaptor9s_ALMutexE;

/* Symbol: _ZN14DpEngine_TDSHP17ADL_resetLumaHistER9DpCommand */
/* Demangled: DpEngine_TDSHP::ADL_resetLumaHist(DpCommand&) */
int _ZN14DpEngine_TDSHP17ADL_resetLumaHistER9DpCommand(void);

/* Symbol: _ZN13DpPathControlD0Ev */
/* Demangled: DpPathControl::~DpPathControl() */
int _ZN13DpPathControlD0Ev(void);

/* Symbol: _ZN9DpChannel13setSourceCropEiiiiiiiiib */
/* Demangled: DpChannel::setSourceCrop(int, int, int, int, int, int, int, int, int, bool) */
int _ZN9DpChannel13setSourceCropEiiiiiiiiib(void);

/* Symbol: _ZTV14DpCommandQueue */
/* Demangled: vtable for DpCommandQueue */
extern void* _ZTV14DpCommandQueue;

/* Symbol: _ZN12DpBlitStream14queryHWSupportEjjjji13DP_COLOR_ENUMS0_P9DpPqParamP6DpRect */
/* Demangled: DpBlitStream::queryHWSupport(unsigned int, unsigned int, unsigned int, unsigned int, int, DP_COLOR_ENUM, DP_COLOR_ENUM, DpPqParam*, DpRect*) */
int _ZN12DpBlitStream14queryHWSupportEjjjji13DP_COLOR_ENUMS0_P9DpPqParamP6DpRect(void);

/* Symbol: _ZN13DpEngine_VENC19onRetrieveTileParamEP17TILE_PARAM_STRUCT */
/* Demangled: DpEngine_VENC::onRetrieveTileParam(TILE_PARAM_STRUCT*) */
int _ZN13DpEngine_VENC19onRetrieveTileParamEP17TILE_PARAM_STRUCT(void);

/* Symbol: _ZN14DpPathComposer7newPathE16STREAM_TYPE_ENUM */
/* Demangled: DpPathComposer::newPath(STREAM_TYPE_ENUM) */
int _ZN14DpPathComposer7newPathE16STREAM_TYPE_ENUM(void);

/* Symbol: _ZN14DpCommandQueue12setDumpOrderEj */
/* Demangled: DpCommandQueue::setDumpOrder(unsigned int) */
int _ZN14DpCommandQueue12setDumpOrderEj(void);

/* Symbol: _ZN14DpCommandQueueD1Ev */
/* Demangled: DpCommandQueue::~DpCommandQueue() */
int _ZN14DpCommandQueueD1Ev(void);

/* Symbol: _ZN21PQDREHistogramAdaptor12createBufferEyPj */
/* Demangled: PQDREHistogramAdaptor::createBuffer(unsigned long long, unsigned int*) */
int _ZN21PQDREHistogramAdaptor12createBufferEyPj(void);

/* Symbol: _ZN8DpMemory7FactoryE14DP_MEMORY_ENUMPvjj */
/* Demangled: DpMemory::Factory(DP_MEMORY_ENUM, void*, unsigned int, unsigned int) */
int _ZN8DpMemory7FactoryE14DP_MEMORY_ENUMPvjj(void);

/* Symbol: _ZN17DpCommandRecorder10initRecordEv */
/* Demangled: DpCommandRecorder::initRecord() */
int _ZN17DpCommandRecorder10initRecordEv(void);

/* Symbol: _ZN14PQColorAdaptor18onUpdateLumaEngineEP14COLOR_CONFIG_TR9DpCommandiRiPi */
/* Demangled: PQColorAdaptor::onUpdateLumaEngine(COLOR_CONFIG_T*, DpCommand&, int, int&, int*) */
int _ZN14PQColorAdaptor18onUpdateLumaEngineEP14COLOR_CONFIG_TR9DpCommandiRiPi(void);

/* Symbol: _ZN11PQDREConfig20getAdaptiveCaltmFlagEb */
/* Demangled: PQDREConfig::getAdaptiveCaltmFlag(bool) */
int _ZN11PQDREConfig20getAdaptiveCaltmFlagEb(void);

/* Symbol: _ZN12DpEngineBase15onDumpDebugInfoEv */
/* Demangled: DpEngineBase::onDumpDebugInfo() */
int _ZN12DpEngineBase15onDumpDebugInfoEv(void);

/* Symbol: _ZN11DpIspStream17detectFrameChangeERNS_9IspConfigE */
/* Demangled: DpIspStream::detectFrameChange(DpIspStream::IspConfig&) */
int _ZN11DpIspStream17detectFrameChangeERNS_9IspConfigE(void);

/* Symbol: _ZN11DpIspStreamD2Ev */
/* Demangled: DpIspStream::~DpIspStream() */
int _ZN11DpIspStreamD2Ev(void);

/* Symbol: _ZN12DpVEncStream14queueDstBufferEiPPvPjS2_i */
/* Demangled: DpVEncStream::queueDstBuffer(int, void**, unsigned int*, unsigned int*, int) */
int _ZN12DpVEncStream14queueDstBufferEiPPvPjS2_i(void);

/* Symbol: AAL0Reg */
/* Demangled: AAL0Reg */
extern void* AAL0Reg;

/* Symbol: _ZN8PQConfigC2Ev */
/* Demangled: PQConfig::PQConfig() */
int _ZN8PQConfigC2Ev(void);

/* Symbol: _Z16tile_cal_main_dpiP19TILE_REG_MAP_STRUCTP23FUNC_DESCRIPTION_STRUCTP24ISP_TILE_HEX_DUMP_STRUCTP27ISP_TPIPE_DESCRIPTOR_STRUCT */
/* Demangled: tile_cal_main_dp(int, TILE_REG_MAP_STRUCT*, FUNC_DESCRIPTION_STRUCT*, ISP_TILE_HEX_DUMP_STRUCT*, ISP_TPIPE_DESCRIPTOR_STRUCT*) */
int _Z16tile_cal_main_dpiP19TILE_REG_MAP_STRUCTP23FUNC_DESCRIPTION_STRUCTP24ISP_TILE_HEX_DUMP_STRUCTP27ISP_TPIPE_DESCRIPTOR_STRUCT(void);

/* Symbol: _ZN10DpTilePath21onConfigBatchedFramesER9DpCommandR8DpConfig */
/* Demangled: DpTilePath::onConfigBatchedFrames(DpCommand&, DpConfig&) */
int _ZN10DpTilePath21onConfigBatchedFramesER9DpCommandR8DpConfig(void);

/* Symbol: _ZN9PQSession10getPipeNumEv */
/* Demangled: PQSession::getPipeNum() */
int _ZN9PQSession10getPipeNumEv(void);

/* Symbol: _ZN12DpBlitStream7setUserEj */
/* Demangled: DpBlitStream::setUser(unsigned int) */
int _ZN12DpBlitStream7setUserEj(void);

/* Symbol: _ZN11DpIspStream12setSrcConfigE13DP_COLOR_ENUMiiib */
/* Demangled: DpIspStream::setSrcConfig(DP_COLOR_ENUM, int, int, int, bool) */
int _ZN11DpIspStream12setSrcConfigE13DP_COLOR_ENUMiiib(void);

/* Symbol: _ZN11DpPortAdapt11flushBufferE16CLIENT_TYPE_ENUM */
/* Demangled: DpPortAdapt::flushBuffer(CLIENT_TYPE_ENUM) */
int _ZN11DpPortAdapt11flushBufferE16CLIENT_TYPE_ENUM(void);

/* Symbol: _ZN12DpVEncStream19queueBatchSrcBufferEP12DpBufferDescjj */
/* Demangled: DpVEncStream::queueBatchSrcBuffer(DpBufferDesc*, unsigned int, unsigned int) */
int _ZN12DpVEncStream19queueBatchSrcBufferEP12DpBufferDescjj(void);

/* Symbol: _ZN17DpBasicBufferPool13dequeueBufferEPiPPvPjb */
/* Demangled: DpBasicBufferPool::dequeueBuffer(int*, void**, unsigned int*, bool) */
int _ZN17DpBasicBufferPool13dequeueBufferEPiPPvPjb(void);

/* Symbol: _ZN8DpDriver21getEnableDumpRegisterEv */
/* Demangled: DpDriver::getEnableDumpRegister() */
int _ZN8DpDriver21getEnableDumpRegisterEv(void);

/* Symbol: _ZN18DpAsyncBlitStream210BaseConfigC1Ev */
/* Demangled: DpAsyncBlitStream2::BaseConfig::BaseConfig() */
int _ZN18DpAsyncBlitStream210BaseConfigC1Ev(void);

/* Symbol: _ZN14DpCommandQueue5resetEv */
/* Demangled: DpCommandQueue::reset() */
int _ZN14DpCommandQueue5resetEv(void);

/* Symbol: _ZN12DpEngine_AAL15onReconfigTilesER9DpCommand */
/* Demangled: DpEngine_AAL::onReconfigTiles(DpCommand&) */
int _ZN12DpEngine_AAL15onReconfigTilesER9DpCommand(void);

/* Symbol: _ZN12PQDREAdaptor23getDRETransCurtgtBufferEb */
/* Demangled: PQDREAdaptor::getDRETransCurtgtBuffer(bool) */
int _ZN12PQDREAdaptor23getDRETransCurtgtBufferEb(void);

/* Symbol: _ZN17DpCommandRecorder14getBlockBaseSWEv */
/* Demangled: DpCommandRecorder::getBlockBaseSW() */
int _ZN17DpCommandRecorder14getBlockBaseSWEv(void);

/* Symbol: _ZN13DpEngine_VENC10threadLoopEv */
/* Demangled: DpEngine_VENC::threadLoop() */
int _ZN13DpEngine_VENC10threadLoopEv(void);

/* Symbol: _ZN12DpEngine_HDR12onConfigTileER9DpCommand */
/* Demangled: DpEngine_HDR::onConfigTile(DpCommand&) */
int _ZN12DpEngine_HDR12onConfigTileER9DpCommand(void);

/* Symbol: _ZN12DpIonHandlerC2EPvj */
/* Demangled: DpIonHandler::DpIonHandler(void*, unsigned int) */
int _ZN12DpIonHandlerC2EPvj(void);

/* Symbol: _ZN18DpAsyncBlitStream214setPQParameterEjRK9DpPqParam */
/* Demangled: DpAsyncBlitStream2::setPQParameter(unsigned int, DpPqParam const&) */
int _ZN18DpAsyncBlitStream214setPQParameterEjRK9DpPqParam(void);

/* Symbol: _ZN17DpCommandRecorder13getSecIspMetaEv */
/* Demangled: DpCommandRecorder::getSecIspMeta() */
int _ZN17DpCommandRecorder13getSecIspMetaEv(void);

/* Symbol: _ZN13DpEngine_WROT9s_uvTableE */
/* Demangled: DpEngine_WROT::s_uvTable */
extern void* _ZN13DpEngine_WROT9s_uvTableE;

/* Symbol: _ZN16PQSessionManager23setAALPrePipeNumCaptureEj */
/* Demangled: PQSessionManager::setAALPrePipeNumCapture(unsigned int) */
int _ZN16PQSessionManager23setAALPrePipeNumCaptureEj(void);

/* Symbol: _ZN8DpDriver9addRefCntERi */
/* Demangled: DpDriver::addRefCnt(int&) */
int _ZN8DpDriver9addRefCntERi(void);

/* Symbol: _ZN21PQDREHistogramAdaptor9setBypassEPvyPK12DRETopOutput */
/* Demangled: PQDREHistogramAdaptor::setBypass(void*, unsigned long long, DRETopOutput const*) */
int _ZN21PQDREHistogramAdaptor9setBypassEPvyPK12DRETopOutput(void);

/* Symbol: _ZN11DpPortAdapt10flipBufferE16CLIENT_TYPE_ENUMb */
/* Demangled: DpPortAdapt::flipBuffer(CLIENT_TYPE_ENUM, bool) */
int _ZN11DpPortAdapt10flipBufferE16CLIENT_TYPE_ENUMb(void);

/* Symbol: IMGIReg */
/* Demangled: IMGIReg */
extern void* IMGIReg;

/* Symbol: _ZN13DpPmemHandler18mapSWAddressBySizeEj */
/* Demangled: DpPmemHandler::mapSWAddressBySize(unsigned int) */
int _ZN13DpPmemHandler18mapSWAddressBySizeEj(void);

/* Symbol: _ZN11PQDSAdaptor9s_ALMutexE */
/* Demangled: PQDSAdaptor::s_ALMutex */
extern void* _ZN11PQDSAdaptor9s_ALMutexE;

/* Symbol: _ZN14PQTuningBuffer4pullEv */
/* Demangled: PQTuningBuffer::pull() */
int _ZN14PQTuningBuffer4pullEv(void);

/* Symbol: _ZN12PQDREAdaptor14tuningDREInputEPvi */
/* Demangled: PQDREAdaptor::tuningDREInput(void*, int) */
int _ZN12PQDREAdaptor14tuningDREInputEPvi(void);

/* Symbol: _ZN16DpRingBufferPoolC1Ev */
/* Demangled: DpRingBufferPool::DpRingBufferPool() */
int _ZN16DpRingBufferPoolC1Ev(void);

/* Symbol: _ZN8DpStream15dumpDebugStreamEv */
/* Demangled: DpStream::dumpDebugStream() */
int _ZN8DpStream15dumpDebugStreamEv(void);

/* Symbol: _ZN17DpCommandRecorder13hasIspSecMetaEv */
/* Demangled: DpCommandRecorder::hasIspSecMeta() */
int _ZN17DpCommandRecorder13hasIspSecMetaEv(void);

/* Symbol: _ZN21PQDREHistogramAdaptor9setBypassEPvyPK14DREVPTopOutput */
/* Demangled: PQDREHistogramAdaptor::setBypass(void*, unsigned long long, DREVPTopOutput const*) */
int _ZN21PQDREHistogramAdaptor9setBypassEPvyPK14DREVPTopOutput(void);

/* Symbol: _ZN17DpAsyncBlitStream9createJobERjRi */
/* Demangled: DpAsyncBlitStream::createJob(unsigned int&, int&) */
int _ZN17DpAsyncBlitStream9createJobERjRi(void);

/* Symbol: _ZN12DpBlitStream12setSrcBufferEiPjj */
/* Demangled: DpBlitStream::setSrcBuffer(int, unsigned int*, unsigned int) */
int _ZN12DpBlitStream12setSrcBufferEiPjj(void);

/* Symbol: _ZN11DpIspStream14queueSrcBufferEPiPjS1_j */
/* Demangled: DpIspStream::queueSrcBuffer(int*, unsigned int*, unsigned int*, unsigned int) */
int _ZN11DpIspStream14queueSrcBufferEPiPjS1_j(void);

/* Symbol: _ZN13DpPathControlD1Ev */
/* Demangled: DpPathControl::~DpPathControl() */
int _ZN13DpPathControlD1Ev(void);

/* Symbol: _ZN14PQColorAdaptor17onConfigHueEngineEP14COLOR_CONFIG_TR9DpCommandRiPi */
/* Demangled: PQColorAdaptor::onConfigHueEngine(COLOR_CONFIG_T*, DpCommand&, int&, int*) */
int _ZN14PQColorAdaptor17onConfigHueEngineEP14COLOR_CONFIG_TR9DpCommandRiPi(void);

/* Symbol: _ZN11PQHDRConfig12getDebugFlagEb */
/* Demangled: PQHDRConfig::getDebugFlag(bool) */
int _ZN11PQHDRConfig12getDebugFlagEb(void);

/* Symbol: _ZN14DpCommandQueue8readbackEjjjPii */
/* Demangled: DpCommandQueue::readback(unsigned int, unsigned int, unsigned int, int*, int) */
int _ZN14DpCommandQueue8readbackEjjjPii(void);

/* Symbol: _ZN14PQColorAdaptor17tuningColorOutputEP14COLOR_CONFIG_Ti */
/* Demangled: PQColorAdaptor::tuningColorOutput(COLOR_CONFIG_T*, int) */
int _ZN14PQColorAdaptor17tuningColorOutputEP14COLOR_CONFIG_Ti(void);

/* Symbol: _ZN12DpVEncStream17setBatchParameterEPP23ISP_TPIPE_CONFIG_STRUCTjP14ISP2MDP_STRUCTj */
/* Demangled: DpVEncStream::setBatchParameter(ISP_TPIPE_CONFIG_STRUCT**, unsigned int, ISP2MDP_STRUCT*, unsigned int) */
int _ZN12DpVEncStream17setBatchParameterEPP23ISP_TPIPE_CONFIG_STRUCTjP14ISP2MDP_STRUCTj(void);

/* Symbol: _ZN14DpCommandQueueD2Ev */
/* Demangled: DpCommandQueue::~DpCommandQueue() */
int _ZN14DpCommandQueueD2Ev(void);

/* Symbol: _ZN12DpEngine_HDR20onRetrieveFrameParamEP17TILE_PARAM_STRUCTR9DpCommand */
/* Demangled: DpEngine_HDR::onRetrieveFrameParam(TILE_PARAM_STRUCT*, DpCommand&) */
int _ZN12DpEngine_HDR20onRetrieveFrameParamEP17TILE_PARAM_STRUCTR9DpCommand(void);

/* Symbol: _ZN9PQSession31removeUselessDCDoneHistListNodeEj */
/* Demangled: PQSession::removeUselessDCDoneHistListNode(unsigned int) */
int _ZN9PQSession31removeUselessDCDoneHistListNodeEj(void);

/* Symbol: _ZN17PQReadBackFactory15destroyInstanceEv */
/* Demangled: PQReadBackFactory::destroyInstance() */
int _ZN17PQReadBackFactory15destroyInstanceEv(void);

/* Symbol: _ZN12PQDREAdaptor16debugDumpFWInputEPK11DRETopInputji */
/* Demangled: PQDREAdaptor::debugDumpFWInput(DRETopInput const*, unsigned int, int) */
int _ZN12PQDREAdaptor16debugDumpFWInputEPK11DRETopInputji(void);

/* Symbol: _Z24tile_lut_mdp_func_enablePiP23TILE_FUNC_ENABLE_STRUCTP19TILE_REG_MAP_STRUCT */
/* Demangled: tile_lut_mdp_func_enable(int*, TILE_FUNC_ENABLE_STRUCT*, TILE_REG_MAP_STRUCT*) */
int _Z24tile_lut_mdp_func_enablePiP23TILE_FUNC_ENABLE_STRUCTP19TILE_REG_MAP_STRUCT(void);

/* Symbol: _ZN12DpBlitStream12setDstBufferEPPvPjj */
/* Demangled: DpBlitStream::setDstBuffer(void**, unsigned int*, unsigned int) */
int _ZN12DpBlitStream12setDstBufferEPPvPjj(void);

/* Symbol: _ZN18DpAsyncBlitStream29setDitherEjb */
/* Demangled: DpAsyncBlitStream2::setDither(unsigned int, bool) */
int _ZN18DpAsyncBlitStream29setDitherEjb(void);

/* Symbol: _ZN12DpFragStream12setDstBufferEPPvPjj */
/* Demangled: DpFragStream::setDstBuffer(void**, unsigned int*, unsigned int) */
int _ZN12DpFragStream12setDstBufferEPPvPjj(void);

/* Symbol: _ZN12PQHDRAdaptor16isHDRinfoChangedEP24_DP_VDEC_DRV_COLORDESC_TP31_DP_VDEC_DRV_DYNAMIC_METADATA_T13HDR_MODE_ENUM */
/* Demangled: PQHDRAdaptor::isHDRinfoChanged(_DP_VDEC_DRV_COLORDESC_T*, _DP_VDEC_DRV_DYNAMIC_METADATA_T*, HDR_MODE_ENUM) */
int _ZN12PQHDRAdaptor16isHDRinfoChangedEP24_DP_VDEC_DRV_COLORDESC_TP31_DP_VDEC_DRV_DYNAMIC_METADATA_T13HDR_MODE_ENUM(void);

/* Symbol: _ZN17DpCommandRecorder15setFrameSrcInfoE13DP_COLOR_ENUMiiiiPjS1_8DpSecure */
/* Demangled: DpCommandRecorder::setFrameSrcInfo(DP_COLOR_ENUM, int, int, int, int, unsigned int*, unsigned int*, DpSecure) */
int _ZN17DpCommandRecorder15setFrameSrcInfoE13DP_COLOR_ENUMiiiiPjS1_8DpSecure(void);

/* Symbol: _ZN12DpTilePathMT10threadLoopEv */
/* Demangled: DpTilePathMT::threadLoop() */
int _ZN12DpTilePathMT10threadLoopEv(void);

/* Symbol: _ZN13DpWrapper_ISP12initTilePathEP17TILE_PARAM_STRUCT */
/* Demangled: DpWrapper_ISP::initTilePath(TILE_PARAM_STRUCT*) */
int _ZN13DpWrapper_ISP12initTilePathEP17TILE_PARAM_STRUCT(void);

/* Symbol: _ZN11DpIspStream13queryPQHWSizeEPjS0_S0_ */
/* Demangled: DpIspStream::queryPQHWSize(unsigned int*, unsigned int*, unsigned int*) */
int _ZN11DpIspStream13queryPQHWSizeEPjS0_S0_(void);

/* Symbol: _ZN16DpBufferPoolBase13releaseBufferEib */
/* Demangled: DpBufferPoolBase::releaseBuffer(int, bool) */
int _ZN16DpBufferPoolBase13releaseBufferEib(void);

/* Symbol: _ZN8DpStream11startStreamEb */
/* Demangled: DpStream::startStream(bool) */
int _ZN8DpStream11startStreamEb(void);

/* Symbol: _ZN18DpAsyncBlitStream210BaseConfigC2Ev */
/* Demangled: DpAsyncBlitStream2::BaseConfig::BaseConfig() */
int _ZN18DpAsyncBlitStream210BaseConfigC2Ev(void);

/* Symbol: _ZN8DpDriverD1Ev */
/* Demangled: DpDriver::~DpDriver() */
int _ZN8DpDriverD1Ev(void);

/* Symbol: _ZN9PQSession13setPreCutPosXEj */
/* Demangled: PQSession::setPreCutPosX(unsigned int) */
int _ZN9PQSession13setPreCutPosXEj(void);

/* Symbol: _Z34tile_tdr_isp_dump_inv_reg_internalP19TILE_REG_MAP_STRUCTS0_iPjjj */
/* Demangled: tile_tdr_isp_dump_inv_reg_internal(TILE_REG_MAP_STRUCT*, TILE_REG_MAP_STRUCT*, int, unsigned int*, unsigned int, unsigned int) */
int _Z34tile_tdr_isp_dump_inv_reg_internalP19TILE_REG_MAP_STRUCTS0_iPjjj(void);

/* Symbol: _ZN13DpWrapper_ISP12onInitEngineER9DpCommand */
/* Demangled: DpWrapper_ISP::onInitEngine(DpCommand&) */
int _ZN13DpWrapper_ISP12onInitEngineER9DpCommand(void);

/* Symbol: _ZN13DpEngine_RDMA14onDeInitEngineER9DpCommand */
/* Demangled: DpEngine_RDMA::onDeInitEngine(DpCommand&) */
int _ZN13DpEngine_RDMA14onDeInitEngineER9DpCommand(void);

/* Symbol: _ZN9PQSession28HandleHDRHistDoneAndCheckRefEj */
/* Demangled: PQSession::HandleHDRHistDoneAndCheckRef(unsigned int) */
int _ZN9PQSession28HandleHDRHistDoneAndCheckRefEj(void);

/* Symbol: _ZN9PQSession5getIDEv */
/* Demangled: PQSession::getID() */
int _ZN9PQSession5getIDEv(void);

/* Symbol: _ZN10PQDSConfig9isEnabledER13GlobalPQParamb */
/* Demangled: PQDSConfig::isEnabled(GlobalPQParam&, bool) */
int _ZN10PQDSConfig9isEnabledER13GlobalPQParamb(void);

/* Symbol: _ZN13PQColorConfig23dumpTransitionRegistersEPKcPvb */
/* Demangled: PQColorConfig::dumpTransitionRegisters(char const*, void*, bool) */
int _ZN13PQColorConfig23dumpTransitionRegistersEPKcPvb(void);

/* Symbol: _ZN12PQDREAdaptor21getDefaultDREVPOutputEjP14DREVPTopOutput */
/* Demangled: PQDREAdaptor::getDefaultDREVPOutput(unsigned int, DREVPTopOutput*) */
int _ZN12PQDREAdaptor21getDefaultDREVPOutputEjP14DREVPTopOutput(void);

/* Symbol: _ZTV14DpEngine_COLOR */
/* Demangled: vtable for DpEngine_COLOR */
extern void* _ZTV14DpEngine_COLOR;

/* Symbol: _ZN9DpChannel12setParameterEPviPj */
/* Demangled: DpChannel::setParameter(void*, int, unsigned int*) */
int _ZN9DpChannel12setParameterEPviPj(void);

/* Symbol: _ZN13DpEngineMutexC2EP10DpPathBase */
/* Demangled: DpEngineMutex::DpEngineMutex(DpPathBase*) */
int _ZN13DpEngineMutexC2EP10DpPathBase(void);

/* Symbol: _ZN12DpVEncStream14queueSrcBufferEPjS0_i */
/* Demangled: DpVEncStream::queueSrcBuffer(unsigned int*, unsigned int*, int) */
int _ZN12DpVEncStream14queueSrcBufferEPjS0_i(void);

/* Symbol: _ZN17DpCommandRecorder11flushRecordEv */
/* Demangled: DpCommandRecorder::flushRecord() */
int _ZN17DpCommandRecorder11flushRecordEv(void);

/* Symbol: _ZN9DpChannelD1Ev */
/* Demangled: DpChannel::~DpChannel() */
int _ZN9DpChannelD1Ev(void);

/* Symbol: _ZN9PQSession13getDpPqConfigEPP10DpPqConfig */
/* Demangled: PQSession::getDpPqConfig(DpPqConfig**) */
int _ZN9PQSession13getDpPqConfigEPP10DpPqConfig(void);

/* Symbol: _ZN14DpCommandQueue15setReadbackRegsEv */
/* Demangled: DpCommandQueue::setReadbackRegs() */
int _ZN14DpCommandQueue15setReadbackRegsEv(void);

/* Symbol: _ZN16DpRingBufferPoolC2Ev */
/* Demangled: DpRingBufferPool::DpRingBufferPool() */
int _ZN16DpRingBufferPoolC2Ev(void);

/* Symbol: _ZN9DpChannel13setSourcePortE14PORT_TYPE_ENUM13DP_COLOR_ENUMiiiibbP16DpBufferPoolBase15DP_PROFILE_ENUM8DpSecureb */
/* Demangled: DpChannel::setSourcePort(PORT_TYPE_ENUM, DP_COLOR_ENUM, int, int, int, int, bool, bool, DpBufferPoolBase*, DP_PROFILE_ENUM, DpSecure, bool) */
int _ZN9DpChannel13setSourcePortE14PORT_TYPE_ENUM13DP_COLOR_ENUMiiiibbP16DpBufferPoolBase15DP_PROFILE_ENUM8DpSecureb(void);

/* Symbol: _ZN12DpEngine_AAL12onConfigTileER9DpCommand */
/* Demangled: DpEngine_AAL::onConfigTile(DpCommand&) */
int _ZN12DpEngine_AAL12onConfigTileER9DpCommand(void);

/* Symbol: _ZN11PQDSAdaptor13tuningDSSWRegEi */
/* Demangled: PQDSAdaptor::tuningDSSWReg(int) */
int _ZN11PQDSAdaptor13tuningDSSWRegEi(void);

/* Symbol: _Z25tile_lut_isp_func_subrdmaPiP24TILE_FUNC_SUBRDMA_STRUCTP19TILE_REG_MAP_STRUCT */
/* Demangled: tile_lut_isp_func_subrdma(int*, TILE_FUNC_SUBRDMA_STRUCT*, TILE_REG_MAP_STRUCT*) */
int _Z25tile_lut_isp_func_subrdmaPiP24TILE_FUNC_SUBRDMA_STRUCTP19TILE_REG_MAP_STRUCT(void);

/* Symbol: _ZN17DpBasicBufferPool15getSWBaseWithIDEiPPvPj */
/* Demangled: DpBasicBufferPool::getSWBaseWithID(int, void**, unsigned int*) */
int _ZN17DpBasicBufferPool15getSWBaseWithIDEiPPvPj(void);

/* Symbol: _ZN18DpAsyncBlitStream214queryHWSupportEjjjji13DP_COLOR_ENUMS0_P9DpPqParamP6DpRectj */
/* Demangled: DpAsyncBlitStream2::queryHWSupport(unsigned int, unsigned int, unsigned int, unsigned int, int, DP_COLOR_ENUM, DP_COLOR_ENUM, DpPqParam*, DpRect*, unsigned int) */
int _ZN18DpAsyncBlitStream214queryHWSupportEjjjji13DP_COLOR_ENUMS0_P9DpPqParamP6DpRectj(void);

/* Symbol: _ZN12DpVEncStream15stopVideoRecordEv */
/* Demangled: DpVEncStream::stopVideoRecord() */
int _ZN12DpVEncStream15stopVideoRecordEv(void);

/* Symbol: _ZN12PQHDRAdaptorC1Ej */
/* Demangled: PQHDRAdaptor::PQHDRAdaptor(unsigned int) */
int _ZN12PQHDRAdaptorC1Ej(void);

/* Symbol: _ZN12PQDREAdaptor13dumpFwRegInFwEPK9DpPqParamP9PQSession */
/* Demangled: PQDREAdaptor::dumpFwRegInFw(DpPqParam const*, PQSession*) */
int _ZN12PQDREAdaptor13dumpFwRegInFwEPK9DpPqParamP9PQSession(void);

/* Symbol: _ZN13DpPathControlD2Ev */
/* Demangled: DpPathControl::~DpPathControl() */
int _ZN13DpPathControlD2Ev(void);

/* Symbol: _ZN17DpAsyncBlitStream12setSrcConfigEii13DP_COLOR_ENUM17DpInterlaceFormatj */
/* Demangled: DpAsyncBlitStream::setSrcConfig(int, int, DP_COLOR_ENUM, DpInterlaceFormat, unsigned int) */
int _ZN17DpAsyncBlitStream12setSrcConfigEii13DP_COLOR_ENUM17DpInterlaceFormatj(void);

/* Symbol: _ZN9PQSession18isHDRDoneHistEmptyEv */
/* Demangled: PQSession::isHDRDoneHistEmpty() */
int _ZN9PQSession18isHDRDoneHistEmptyEv(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekpos(std::__1::fpos<mbstate_t>, unsigned int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj(void);

/* Symbol: _Z19DpColor2MMDumpColor13DP_COLOR_ENUM */
/* Demangled: DpColor2MMDumpColor(DP_COLOR_ENUM) */
int _Z19DpColor2MMDumpColor13DP_COLOR_ENUM(void);

/* Symbol: _ZN12DpVEncStream11setRotationEii */
/* Demangled: DpVEncStream::setRotation(int, int) */
int _ZN12DpVEncStream11setRotationEii(void);

/* Symbol: _ZN14DpCommandQueue16addIspSecureMetaE14cmdqSecIspMeta */
/* Demangled: DpCommandQueue::addIspSecureMeta(cmdqSecIspMeta) */
int _ZN14DpCommandQueue16addIspSecureMetaE14cmdqSecIspMeta(void);

/* Symbol: _ZN9PQSession20getVideoInfoScenarioEv */
/* Demangled: PQSession::getVideoInfoScenario() */
int _ZN9PQSession20getVideoInfoScenarioEv(void);

/* Symbol: _ZN12PQHDRAdaptor13getPreHDRModeEb */
/* Demangled: PQHDRAdaptor::getPreHDRMode(bool) */
int _ZN12PQHDRAdaptor13getPreHDRModeEb(void);

/* Symbol: _ZN18DpAsyncBlitStream212setDstConfigEjiiii13DP_COLOR_ENUM15DP_PROFILE_ENUM17DpInterlaceFormatP6DpRect8DpSecurebji */
/* Demangled: DpAsyncBlitStream2::setDstConfig(unsigned int, int, int, int, int, DP_COLOR_ENUM, DP_PROFILE_ENUM, DpInterlaceFormat, DpRect*, DpSecure, bool, unsigned int, int) */
int _ZN18DpAsyncBlitStream212setDstConfigEjiiii13DP_COLOR_ENUM15DP_PROFILE_ENUM17DpInterlaceFormatP6DpRect8DpSecurebji(void);

/* Symbol: _ZN17DpCommandRecorder11getSyncModeEv */
/* Demangled: DpCommandRecorder::getSyncMode() */
int _ZN17DpCommandRecorder11getSyncModeEv(void);

/* Symbol: _ZN17DpCommandRecorder19getReadbackPABufferERj */
/* Demangled: DpCommandRecorder::getReadbackPABuffer(unsigned int&) */
int _ZN17DpCommandRecorder19getReadbackPABufferERj(void);

/* Symbol: _ZN12DpIonHandler11flushMemoryEN8DpMemory15FLUSH_TYPE_ENUMEii */
/* Demangled: DpIonHandler::flushMemory(DpMemory::FLUSH_TYPE_ENUM, int, int) */
int _ZN12DpIonHandler11flushMemoryEN8DpMemory15FLUSH_TYPE_ENUMEii(void);

/* Symbol: _ZN9PQSession32removeUselessHDRDoneHistListNodeEj */
/* Demangled: PQSession::removeUselessHDRDoneHistListNode(unsigned int) */
int _ZN9PQSession32removeUselessHDRDoneHistListNodeEj(void);

/* Symbol: _ZN16PQSessionManager24m_CapturepreAAL0BufferIdE */
/* Demangled: PQSessionManager::m_CapturepreAAL0BufferId */
extern void* _ZN16PQSessionManager24m_CapturepreAAL0BufferIdE;

/* Symbol: _ZN12PQDREAdaptor15writeDRE30CurveER9DpCommandPK12DRETopOutputjjPiRib */
/* Demangled: PQDREAdaptor::writeDRE30Curve(DpCommand&, DRETopOutput const*, unsigned int, unsigned int, int*, int&, bool) */
int _ZN12PQDREAdaptor15writeDRE30CurveER9DpCommandPK12DRETopOutputjjPiRib(void);

/* Symbol: _ZN11DpIspStream12setDstConfigEiiiii13DP_COLOR_ENUM15DP_PROFILE_ENUM17DpInterlaceFormatP6DpRectb8DpSecure */
/* Demangled: DpIspStream::setDstConfig(int, int, int, int, int, DP_COLOR_ENUM, DP_PROFILE_ENUM, DpInterlaceFormat, DpRect*, bool, DpSecure) */
int _ZN11DpIspStream12setDstConfigEiiiii13DP_COLOR_ENUM15DP_PROFILE_ENUM17DpInterlaceFormatP6DpRectb8DpSecure(void);

/* Symbol: _ZN9PQSession21getPreHWIdAndBufferIdEPjS0_S0_S0_ */
/* Demangled: PQSession::getPreHWIdAndBufferId(unsigned int*, unsigned int*, unsigned int*, unsigned int*) */
int _ZN9PQSession21getPreHWIdAndBufferIdEPjS0_S0_S0_(void);

/* Symbol: _ZN11DpIspStream14queueSrcBufferEPPvPji */
/* Demangled: DpIspStream::queueSrcBuffer(void**, unsigned int*, int) */
int _ZN11DpIspStream14queueSrcBufferEPPvPji(void);

/* Symbol: _ZN14DpCommandQueue8setEventEN13DpCommandBase15EVENT_TYPE_ENUME */
/* Demangled: DpCommandQueue::setEvent(DpCommandBase::EVENT_TYPE_ENUM) */
int _ZN14DpCommandQueue8setEventEN13DpCommandBase15EVENT_TYPE_ENUME(void);

/* Symbol: _ZN12DpEngine_HDR14onDeInitEngineER9DpCommand */
/* Demangled: DpEngine_HDR::onDeInitEngine(DpCommand&) */
int _ZN12DpEngine_HDR14onDeInitEngineER9DpCommand(void);

/* Symbol: _ZN13DpPmemHandler14alloc_internalEj */
/* Demangled: DpPmemHandler::alloc_internal(unsigned int) */
int _ZN13DpPmemHandler14alloc_internalEj(void);

/* Symbol: _ZN21PQDREHistogramAdaptor11getInstanceEj */
/* Demangled: PQDREHistogramAdaptor::getInstance(unsigned int) */
int _ZN21PQDREHistogramAdaptor11getInstanceEj(void);

/* Symbol: _ZN16DpBufferPoolBase16pollBufferStatusE16CLIENT_TYPE_ENUMiiiiib */
/* Demangled: DpBufferPoolBase::pollBufferStatus(CLIENT_TYPE_ENUM, int, int, int, int, int, bool) */
int _ZN16DpBufferPoolBase16pollBufferStatusE16CLIENT_TYPE_ENUMiiiiib(void);

/* Symbol: _ZN10PQDSConfigD1Ev */
/* Demangled: PQDSConfig::~PQDSConfig() */
int _ZN10PQDSConfigD1Ev(void);

/* Symbol: _ZN16DpBufferPoolBase15getSWBaseWithIDEiPPvPj */
/* Demangled: DpBufferPoolBase::getSWBaseWithID(int, void**, unsigned int*) */
int _ZN16DpBufferPoolBase15getSWBaseWithIDEiPPvPj(void);

/* Symbol: _ZN11DpIspStream12setParameterER23ISP_TPIPE_CONFIG_STRUCTj */
/* Demangled: DpIspStream::setParameter(ISP_TPIPE_CONFIG_STRUCT&, unsigned int) */
int _ZN11DpIspStream12setParameterER23ISP_TPIPE_CONFIG_STRUCTj(void);

/* Symbol: _ZTV12DpMmuHandler */
/* Demangled: vtable for DpMmuHandler */
extern void* _ZTV12DpMmuHandler;

/* Symbol: _ZN16PQSessionManager16m_lastVideoIndexE */
/* Demangled: PQSessionManager::m_lastVideoIndex */
extern void* _ZN16PQSessionManager16m_lastVideoIndexE;

/* Symbol: _ZN10PQDSConfig12m_TDSHPTableE */
/* Demangled: PQDSConfig::m_TDSHPTable */
extern void* _ZN10PQDSConfig12m_TDSHPTableE;

/* Symbol: _ZN12PQDREAdaptor25getDRETransPrefloatBufferEb */
/* Demangled: PQDREAdaptor::getDRETransPrefloatBuffer(bool) */
int _ZN12PQDREAdaptor25getDRETransPrefloatBufferEb(void);

/* Symbol: _ZN8DpDriverD2Ev */
/* Demangled: DpDriver::~DpDriver() */
int _ZN8DpDriverD2Ev(void);

/* Symbol: _ZN12PQRSZAdaptor7calRegsEP9PQSessionR9DpCommandP8RszInputP9RszOutput */
/* Demangled: PQRSZAdaptor::calRegs(PQSession*, DpCommand&, RszInput*, RszOutput*) */
int _ZN12PQRSZAdaptor7calRegsEP9PQSessionR9DpCommandP8RszInputP9RszOutput(void);

/* Symbol: _ZN10PQDSConfig16getIspTuningFlagEb */
/* Demangled: PQDSConfig::getIspTuningFlag(bool) */
int _ZN10PQDSConfig16getIspTuningFlagEb(void);

/* Symbol: _ZN12PQHDRAdaptor15onCalculateCoreEiP9DHDRINPUTP10DHDROUTPUTR8DpConfigP31_DP_VDEC_DRV_DYNAMIC_METADATA_TP9PQSession */
/* Demangled: PQHDRAdaptor::onCalculateCore(int, DHDRINPUT*, DHDROUTPUT*, DpConfig&, _DP_VDEC_DRV_DYNAMIC_METADATA_T*, PQSession*) */
int _ZN12PQHDRAdaptor15onCalculateCoreEiP9DHDRINPUTP10DHDROUTPUTR8DpConfigP31_DP_VDEC_DRV_DYNAMIC_METADATA_TP9PQSession(void);

/* Symbol: _Z14forward_4_tapsiiiiiiiiiiiRiS_S_S_S_S_ */
/* Demangled: forward_4_taps(int, int, int, int, int, int, int, int, int, int, int, int&, int&, int&, int&, int&, int&) */
int _Z14forward_4_tapsiiiiiiiiiiiRiS_S_S_S_S_(void);

/* Symbol: _ZN14DpEngine_IMG2O13onConfigFrameER9DpCommandR8DpConfig */
/* Demangled: DpEngine_IMG2O::onConfigFrame(DpCommand&, DpConfig&) */
int _ZN14DpEngine_IMG2O13onConfigFrameER9DpCommandR8DpConfig(void);

/* Symbol: _ZN11PQDSAdaptor14tuningDSOutputEP8DSOutputi */
/* Demangled: PQDSAdaptor::tuningDSOutput(DSOutput*, int) */
int _ZN11PQDSAdaptor14tuningDSOutputEP8DSOutputi(void);

/* Symbol: _ZN13PQColorConfig14initColorTableEv */
/* Demangled: PQColorConfig::initColorTable() */
int _ZN13PQColorConfig14initColorTableEv(void);

/* Symbol: _ZN12PQHDRAdaptor17getHDR10PLUSTableEb */
/* Demangled: PQHDRAdaptor::getHDR10PLUSTable(bool) */
int _ZN12PQHDRAdaptor17getHDR10PLUSTableEb(void);

/* Symbol: _ZN14DpCommandQueue14setPQSessionIDEy */
/* Demangled: DpCommandQueue::setPQSessionID(unsigned long long) */
int _ZN14DpCommandQueue14setPQSessionIDEy(void);

/* Symbol: _ZTV13DpWrapper_ISP */
/* Demangled: vtable for DpWrapper_ISP */
extern void* _ZTV13DpWrapper_ISP;

/* Symbol: _ZN11PQIspTuning17getHFGTuningValueEP14HFGInput_frame */
/* Demangled: PQIspTuning::getHFGTuningValue(HFGInput_frame*) */
int _ZN11PQIspTuning17getHFGTuningValueEP14HFGInput_frame(void);

/* Symbol: _ZN17DpBasicBufferPoolC1Ev */
/* Demangled: DpBasicBufferPool::DpBasicBufferPool() */
int _ZN17DpBasicBufferPoolC1Ev(void);

/* Symbol: _ZN8DpStream19setReadbackPABufferEPjj */
/* Demangled: DpStream::setReadbackPABuffer(unsigned int*, unsigned int) */
int _ZN8DpStream19setReadbackPABufferEPjj(void);

/* Symbol: _ZN12DpBlitStreamC1Ev */
/* Demangled: DpBlitStream::DpBlitStream() */
int _ZN12DpBlitStreamC1Ev(void);

/* Symbol: _ZN9DpChannelD2Ev */
/* Demangled: DpChannel::~DpChannel() */
int _ZN9DpChannelD2Ev(void);

/* Symbol: _ZN11DpIspStreamC2ENS_13ISPStreamTypeE */
/* Demangled: DpIspStream::DpIspStream(DpIspStream::ISPStreamType) */
int _ZN11DpIspStreamC2ENS_13ISPStreamTypeE(void);

/* Symbol: _ZN8DpDriver12setFrameInfoE13DpFrameInfo_tiPc */
/* Demangled: DpDriver::setFrameInfo(DpFrameInfo_t, int, char*) */
int _ZN8DpDriver12setFrameInfoE13DpFrameInfo_tiPc(void);

/* Symbol: _ZN11PQDCAdaptor11getUserInfoEv */
/* Demangled: PQDCAdaptor::getUserInfo() */
int _ZN11PQDCAdaptor11getUserInfoEv(void);

/* Symbol: _ZN12PQHDRAdaptor13reInitHDR10FWEP9DHDRINPUTP10DHDROUTPUT9DpPqParam */
/* Demangled: PQHDRAdaptor::reInitHDR10FW(DHDRINPUT*, DHDROUTPUT*, DpPqParam) */
int _ZN12PQHDRAdaptor13reInitHDR10FWEP9DHDRINPUTP10DHDROUTPUT9DpPqParam(void);

/* Symbol: _ZN12DpEngineBase12onFlipBufferEb */
/* Demangled: DpEngineBase::onFlipBuffer(bool) */
int _ZN12DpEngineBase12onFlipBufferEb(void);

/* Symbol: _ZN8DpStream10stopStreamEv */
/* Demangled: DpStream::stopStream() */
int _ZN8DpStream10stopStreamEv(void);

/* Symbol: _ZN9PQSession13getPreActPosXEv */
/* Demangled: PQSession::getPreActPosX() */
int _ZN9PQSession13getPreActPosXEv(void);

/* Symbol: _ZN13DpEngineMutex7requireER9DpCommand */
/* Demangled: DpEngineMutex::require(DpCommand&) */
int _ZN13DpEngineMutex7requireER9DpCommand(void);

/* Symbol: _ZN13DpEngine_WROT12RGB_TO_BT601E */
/* Demangled: DpEngine_WROT::RGB_TO_BT601 */
extern void* _ZN13DpEngine_WROT12RGB_TO_BT601E;

/* Symbol: _ZN9PQSession16setHDRisLeftPathEb */
/* Demangled: PQSession::setHDRisLeftPath(bool) */
int _ZN9PQSession16setHDRisLeftPathEb(void);

/* Symbol: _ZN12PQHDRAdaptor15getLastHDRPInfoEv */
/* Demangled: PQHDRAdaptor::getLastHDRPInfo() */
int _ZN12PQHDRAdaptor15getLastHDRPInfoEv(void);

/* Symbol: COLOR0Reg */
/* Demangled: COLOR0Reg */
extern void* COLOR0Reg;

/* Symbol: _ZN6DpSyncD1Ev */
/* Demangled: DpSync::~DpSync() */
int _ZN6DpSyncD1Ev(void);

/* Symbol: _ZN18DpAsyncBlitStream212setConfigEndEv */
/* Demangled: DpAsyncBlitStream2::setConfigEnd() */
int _ZN18DpAsyncBlitStream212setConfigEndEv(void);

/* Symbol: _ZN11DpIspStream10BaseConfigC1Ev */
/* Demangled: DpIspStream::BaseConfig::BaseConfig() */
int _ZN11DpIspStream10BaseConfigC1Ev(void);

/* Symbol: _ZN12PQHDRAdaptorC2Ej */
/* Demangled: PQHDRAdaptor::PQHDRAdaptor(unsigned int) */
int _ZN12PQHDRAdaptorC2Ej(void);

/* Symbol: _ZN18PQAlgorithmFactory6getHDREj */
/* Demangled: PQAlgorithmFactory::getHDR(unsigned int) */
int _ZN18PQAlgorithmFactory6getHDREj(void);

/* Symbol: _ZN8DpDriver11s_instMutexE */
/* Demangled: DpDriver::s_instMutex */
extern void* _ZN8DpDriver11s_instMutexE;

/* Symbol: _ZN8DpDriver15destroyInstanceEv */
/* Demangled: DpDriver::destroyInstance() */
int _ZN8DpDriver15destroyInstanceEv(void);

/* Symbol: _ZN16DpBufferPoolBase14activateBufferEv */
/* Demangled: DpBufferPoolBase::activateBuffer() */
int _ZN16DpBufferPoolBase14activateBufferEv(void);

/* Symbol: _ZN12DpVEncStreamC1ENS_13ISPStreamTypeE */
/* Demangled: DpVEncStream::DpVEncStream(DpVEncStream::ISPStreamType) */
int _ZN12DpVEncStreamC1ENS_13ISPStreamTypeE(void);

/* Symbol: _ZN17DpCommandRecorder13translateAddrEj */
/* Demangled: DpCommandRecorder::translateAddr(unsigned int) */
int _ZN17DpCommandRecorder13translateAddrEj(void);

/* Symbol: _ZN11PQRSZConfig16getIspTuningFlagEb */
/* Demangled: PQRSZConfig::getIspTuningFlag(bool) */
int _ZN11PQRSZConfig16getIspTuningFlagEb(void);

/* Symbol: _ZN12PQDREAdaptor13initDREOutputEP12DRETopOutput */
/* Demangled: PQDREAdaptor::initDREOutput(DRETopOutput*) */
int _ZN12PQDREAdaptor13initDREOutputEP12DRETopOutput(void);

/* Symbol: _ZN12DpEngineBase11bindOutPortEP11DpPortAdapt */
/* Demangled: DpEngineBase::bindOutPort(DpPortAdapt*) */
int _ZN12DpEngineBase11bindOutPortEP11DpPortAdapt(void);

/* Symbol: _ZN17PQReadBackFactory6getDREEj */
/* Demangled: PQReadBackFactory::getDRE(unsigned int) */
int _ZN17PQReadBackFactory6getDREEj(void);

/* Symbol: _ZN9PQSession21getDCDoneHistListSizeEv */
/* Demangled: PQSession::getDCDoneHistListSize() */
int _ZN9PQSession21getDCDoneHistListSizeEv(void);

/* Symbol: _ZN17DpAsyncBlitStream7setFlipEji */
/* Demangled: DpAsyncBlitStream::setFlip(unsigned int, int) */
int _ZN17DpAsyncBlitStream7setFlipEji(void);

/* Symbol: _ZN18DpAsyncBlitStream212setDstBufferEjiPjji */
/* Demangled: DpAsyncBlitStream2::setDstBuffer(unsigned int, int, unsigned int*, unsigned int, int) */
int _ZN18DpAsyncBlitStream212setDstBufferEjiPjji(void);

/* Symbol: _ZN14DpCommandQueue7acquireEN13DpCommandBase15EVENT_TYPE_ENUME */
/* Demangled: DpCommandQueue::acquire(DpCommandBase::EVENT_TYPE_ENUM) */
int _ZN14DpCommandQueue7acquireEN13DpCommandBase15EVENT_TYPE_ENUME(void);

/* Symbol: _Z18tile_isp_mode_initP19TILE_REG_MAP_STRUCT */
/* Demangled: tile_isp_mode_init(TILE_REG_MAP_STRUCT*) */
int _Z18tile_isp_mode_initP19TILE_REG_MAP_STRUCT(void);

/* Symbol: _ZN12DpFragStream12setDstConfigE13DP_COLOR_ENUMiii */
/* Demangled: DpFragStream::setDstConfig(DP_COLOR_ENUM, int, int, int) */
int _ZN12DpFragStream12setDstConfigE13DP_COLOR_ENUMiii(void);

/* Symbol: _ZN14PQTuningBuffer6isSyncEv */
/* Demangled: PQTuningBuffer::isSync() */
int _ZN14PQTuningBuffer6isSyncEv(void);

/* Symbol: _ZN14PQColorAdaptor18onConfigLumaEngineEP14COLOR_CONFIG_TR9DpCommandiRiPi */
/* Demangled: PQColorAdaptor::onConfigLumaEngine(COLOR_CONFIG_T*, DpCommand&, int, int&, int*) */
int _ZN14PQColorAdaptor18onConfigLumaEngineEP14COLOR_CONFIG_TR9DpCommandiRiPi(void);

/* Symbol: _ZN12DpVEncStream10setSrcCropEiiiiiii */
/* Demangled: DpVEncStream::setSrcCrop(int, int, int, int, int, int, int) */
int _ZN12DpVEncStream10setSrcCropEiiiiiii(void);

/* Symbol: _ZN14DpCommandQueue4markEN9DpCommand15BLOCK_TYPE_ENUMEjj */
/* Demangled: DpCommandQueue::mark(DpCommand::BLOCK_TYPE_ENUM, unsigned int, unsigned int) */
int _ZN14DpCommandQueue4markEN9DpCommand15BLOCK_TYPE_ENUMEjj(void);

/* Symbol: _ZN9PQSession18getHDRInfoWithLockEPK9DpPqParamP24_DP_VDEC_DRV_COLORDESC_TP31_DP_VDEC_DRV_DYNAMIC_METADATA_T */
/* Demangled: PQSession::getHDRInfoWithLock(DpPqParam const*, _DP_VDEC_DRV_COLORDESC_T*, _DP_VDEC_DRV_DYNAMIC_METADATA_T*) */
int _ZN9PQSession18getHDRInfoWithLockEPK9DpPqParamP24_DP_VDEC_DRV_COLORDESC_TP31_DP_VDEC_DRV_DYNAMIC_METADATA_T(void);

/* Symbol: _ZN10PQDSConfigD2Ev */
/* Demangled: PQDSConfig::~PQDSConfig() */
int _ZN10PQDSConfigD2Ev(void);

/* Symbol: _ZN14DpEngine_COLOR13onConfigFrameER9DpCommandR8DpConfig */
/* Demangled: DpEngine_COLOR::onConfigFrame(DpCommand&, DpConfig&) */
int _ZN14DpEngine_COLOR13onConfigFrameER9DpCommandR8DpConfig(void);

/* Symbol: _ZN12DpVEncStream11startStreamEP7timeval */
/* Demangled: DpVEncStream::startStream(timeval*) */
int _ZN12DpVEncStream11startStreamEP7timeval(void);

/* Symbol: _ZN12PQDREAdaptor15tuningDREOutputEPvi */
/* Demangled: PQDREAdaptor::tuningDREOutput(void*, int) */
int _ZN12PQDREAdaptor15tuningDREOutputEPvi(void);

/* Symbol: _ZN21PQDREHistogramAdaptor16unregisterBufferEyj */
/* Demangled: PQDREHistogramAdaptor::unregisterBuffer(unsigned long long, unsigned int) */
int _ZN21PQDREHistogramAdaptor16unregisterBufferEyj(void);

/* Symbol: _Z18funcPullBufferDataP16DpRingBufferPooliiiii */
/* Demangled: funcPullBufferData(DpRingBufferPool*, int, int, int, int, int) */
int _Z18funcPullBufferDataP16DpRingBufferPooliiiii(void);

/* Symbol: _ZN17DpAsyncBlitStream11compressionER13DP_COLOR_ENUMj */
/* Demangled: DpAsyncBlitStream::compression(DP_COLOR_ENUM&, unsigned int) */
int _ZN17DpAsyncBlitStream11compressionER13DP_COLOR_ENUMj(void);

/* Symbol: _ZN11DpIspStream15getJPEGFilesizeEPj */
/* Demangled: DpIspStream::getJPEGFilesize(unsigned int*) */
int _ZN11DpIspStream15getJPEGFilesizeEPj(void);

/* Symbol: _ZTV13DpEngine_IMGI */
/* Demangled: vtable for DpEngine_IMGI */
extern void* _ZTV13DpEngine_IMGI;

/* Symbol: _ZN13DpPmemHandlerC2EPvjj */
/* Demangled: DpPmemHandler::DpPmemHandler(void*, unsigned int, unsigned int) */
int _ZN13DpPmemHandlerC2EPvjj(void);

/* Symbol: _ZN12PQHDRAdaptor15tuningHDROutputEP10DHDROUTPUTi */
/* Demangled: PQHDRAdaptor::tuningHDROutput(DHDROUTPUT*, int) */
int _ZN12PQHDRAdaptor15tuningHDROutputEP10DHDROUTPUTi(void);

/* Symbol: _ZN11DpPortAdapt9waitFenceE16CLIENT_TYPE_ENUM */
/* Demangled: DpPortAdapt::waitFence(CLIENT_TYPE_ENUM) */
int _ZN11DpPortAdapt9waitFenceE16CLIENT_TYPE_ENUM(void);

/* Symbol: _ZN10DpTilePath17onConfigFrameModeER9DpCommand */
/* Demangled: DpTilePath::onConfigFrameMode(DpCommand&) */
int _ZN10DpTilePath17onConfigFrameModeER9DpCommand(void);

/* Symbol: _ZN11PQDCAdaptorC1Ej */
/* Demangled: PQDCAdaptor::PQDCAdaptor(unsigned int) */
int _ZN11PQDCAdaptorC1Ej(void);

/* Symbol: _ZN21PQDREHistogramAdaptor12setHistogramEPjjPvyiij */
/* Demangled: PQDREHistogramAdaptor::setHistogram(unsigned int*, unsigned int, void*, unsigned long long, int, int, unsigned int) */
int _ZN21PQDREHistogramAdaptor12setHistogramEPjjPvyiij(void);

/* Symbol: _ZN17DpCommandRecorder15getSecureAddrMDEv */
/* Demangled: DpCommandRecorder::getSecureAddrMD() */
int _ZN17DpCommandRecorder15getSecureAddrMDEv(void);

/* Symbol: _ZN10DpTilePath13onConfigFrameER9DpCommandR8DpConfig */
/* Demangled: DpTilePath::onConfigFrame(DpCommand&, DpConfig&) */
int _ZN10DpTilePath13onConfigFrameER9DpCommandR8DpConfig(void);

/* Symbol: PATH1_SOUTReg */
/* Demangled: PATH1_SOUTReg */
extern void* PATH1_SOUTReg;

/* Symbol: _ZN16PQSessionManager31getAALPreHWIdAndBufferIdCaptureEPjS0_S0_S0_ */
/* Demangled: PQSessionManager::getAALPreHWIdAndBufferIdCapture(unsigned int*, unsigned int*, unsigned int*, unsigned int*) */
int _ZN16PQSessionManager31getAALPreHWIdAndBufferIdCaptureEPjS0_S0_S0_(void);

/* Symbol: _ZN9PQSession12getDREHandleEv */
/* Demangled: PQSession::getDREHandle() */
int _ZN9PQSession12getDREHandleEv(void);

/* Symbol: _ZN12PQRSZAdaptor9dumpFWRegEP9DpPqParamP8RszInputP9RszOutputP6RszReg */
/* Demangled: PQRSZAdaptor::dumpFWReg(DpPqParam*, RszInput*, RszOutput*, RszReg*) */
int _ZN12PQRSZAdaptor9dumpFWRegEP9DpPqParamP8RszInputP9RszOutputP6RszReg(void);

/* Symbol: _ZN16DpRingBufferPool11queueBufferEib */
/* Demangled: DpRingBufferPool::queueBuffer(int, bool) */
int _ZN16DpRingBufferPool11queueBufferEib(void);

/* Symbol: _ZN17DpBasicBufferPoolC2Ev */
/* Demangled: DpBasicBufferPool::DpBasicBufferPool() */
int _ZN17DpBasicBufferPoolC2Ev(void);

/* Symbol: _ZN18DpAsyncBlitStream210setSrcCropEj6DpRect */
/* Demangled: DpAsyncBlitStream2::setSrcCrop(unsigned int, DpRect) */
int _ZN18DpAsyncBlitStream210setSrcCropEj6DpRect(void);

/* Symbol: _ZN12DpBlitStreamC2Ev */
/* Demangled: DpBlitStream::DpBlitStream() */
int _ZN12DpBlitStreamC2Ev(void);

/* Symbol: _ZN11DpIspStream16waitCompleteLoopEPv */
/* Demangled: DpIspStream::waitCompleteLoop(void*) */
int _ZN11DpIspStream16waitCompleteLoopEPv(void);

/* Symbol: _ZN18PQAlgorithmFactoryC1Ev */
/* Demangled: PQAlgorithmFactory::PQAlgorithmFactory() */
int _ZN18PQAlgorithmFactoryC1Ev(void);

/* Symbol: _ZN12PQDREAdaptor15writeDRE30CurveER9DpCommandPK14DREVPTopOutputjjPiRib */
/* Demangled: PQDREAdaptor::writeDRE30Curve(DpCommand&, DREVPTopOutput const*, unsigned int, unsigned int, int*, int&, bool) */
int _ZN12PQDREAdaptor15writeDRE30CurveER9DpCommandPK14DREVPTopOutputjjPiRib(void);

/* Symbol: _ZN17DpAsyncBlitStream7setUserEj */
/* Demangled: DpAsyncBlitStream::setUser(unsigned int) */
int _ZN17DpAsyncBlitStream7setUserEj(void);

/* Symbol: _ZN11DpIspStream10BaseConfigC2Ev */
/* Demangled: DpIspStream::BaseConfig::BaseConfig() */
int _ZN11DpIspStream10BaseConfigC2Ev(void);

/* Symbol: _ZNSt3__16vectorIN11DpIspStream9IspConfigENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_ */
/* Demangled: void std::__1::vector<DpIspStream::IspConfig, std::__1::allocator<DpIspStream::IspConfig> >::__push_back_slow_path<DpIspStream::IspConfig const&>(DpIspStream::IspConfig const&) */
int _ZNSt3__16vectorIN11DpIspStream9IspConfigENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void);

/* Symbol: _ZN12DpVEncStream12setSrcConfigEiiii13DP_COLOR_ENUM15DP_PROFILE_ENUM17DpInterlaceFormatP6DpRectb8DpSecure */
/* Demangled: DpVEncStream::setSrcConfig(int, int, int, int, DP_COLOR_ENUM, DP_PROFILE_ENUM, DpInterlaceFormat, DpRect*, bool, DpSecure) */
int _ZN12DpVEncStream12setSrcConfigEiiii13DP_COLOR_ENUM15DP_PROFILE_ENUM17DpInterlaceFormatP6DpRectb8DpSecure(void);

/* Symbol: _ZN6DpSyncD2Ev */
/* Demangled: DpSync::~DpSync() */
int _ZN6DpSyncD2Ev(void);

/* Symbol: _ZN12DpBlitStream12setSrcConfigEiiii13DP_COLOR_ENUM15DP_PROFILE_ENUM17DpInterlaceFormatP6DpRect8DpSecureb */
/* Demangled: DpBlitStream::setSrcConfig(int, int, int, int, DP_COLOR_ENUM, DP_PROFILE_ENUM, DpInterlaceFormat, DpRect*, DpSecure, bool) */
int _ZN12DpBlitStream12setSrcConfigEiiii13DP_COLOR_ENUM15DP_PROFILE_ENUM17DpInterlaceFormatP6DpRect8DpSecureb(void);

/* Symbol: _ZN14DpPathTopology9s_adjencyE */
/* Demangled: DpPathTopology::s_adjency */
extern void* _ZN14DpPathTopology9s_adjencyE;

/* Symbol: _ZTV7ListPtrI10DpPathBaseE */
/* Demangled: vtable for ListPtr<DpPathBase> */
extern void* _ZTV7ListPtrI10DpPathBaseE;

/* Symbol: _ZN11DpPortAdapt10dumpBufferE16CLIENT_TYPE_ENUM */
/* Demangled: DpPortAdapt::dumpBuffer(CLIENT_TYPE_ENUM) */
int _ZN11DpPortAdapt10dumpBufferE16CLIENT_TYPE_ENUM(void);

/* Symbol: _ZN12DpVEncStream12setDstConfigEiiiii13DP_COLOR_ENUM15DP_PROFILE_ENUM17DpInterlaceFormatP6DpRectb8DpSecure */
/* Demangled: DpVEncStream::setDstConfig(int, int, int, int, int, DP_COLOR_ENUM, DP_PROFILE_ENUM, DpInterlaceFormat, DpRect*, bool, DpSecure) */
int _ZN12DpVEncStream12setDstConfigEiiiii13DP_COLOR_ENUM15DP_PROFILE_ENUM17DpInterlaceFormatP6DpRectb8DpSecure(void);

/* Symbol: _Z24tile_isp_frame_mode_initP19TILE_REG_MAP_STRUCT */
/* Demangled: tile_isp_frame_mode_init(TILE_REG_MAP_STRUCT*) */
int _Z24tile_isp_frame_mode_initP19TILE_REG_MAP_STRUCT(void);

/* Symbol: _ZN12DpVEncStream16dequeueDstBufferEiPPvb */
/* Demangled: DpVEncStream::dequeueDstBuffer(int, void**, bool) */
int _ZN12DpVEncStream16dequeueDstBufferEiPPvb(void);

/* Symbol: _ZN17DpCommandRecorder13setSecureModeEiyPj8DpSecurejS0_S0_S0_ */
/* Demangled: DpCommandRecorder::setSecureMode(int, unsigned long long, unsigned int*, DpSecure, unsigned int, unsigned int*, unsigned int*, unsigned int*) */
int _ZN17DpCommandRecorder13setSecureModeEiyPj8DpSecurejS0_S0_S0_(void);

/* Symbol: _ZN12PQHDRAdaptor7calRegsEP9PQSessionR9DpCommandR8DpConfigPib */
/* Demangled: PQHDRAdaptor::calRegs(PQSession*, DpCommand&, DpConfig&, int*, bool) */
int _ZN12PQHDRAdaptor7calRegsEP9PQSessionR9DpCommandR8DpConfigPib(void);

/* Symbol: _ZN11PQDCAdaptor14getDCShareDataEv */
/* Demangled: PQDCAdaptor::getDCShareData() */
int _ZN11PQDCAdaptor14getDCShareDataEv(void);

/* Symbol: _ZN16DpBufferPoolBase15flushReadBufferEi */
/* Demangled: DpBufferPoolBase::flushReadBuffer(int) */
int _ZN16DpBufferPoolBase15flushReadBufferEi(void);

/* Symbol: _ZN13DpWrapper_ISP13onFlushBufferEN12DpEngineBase15FLUSH_TYPE_ENUME */
/* Demangled: DpWrapper_ISP::onFlushBuffer(DpEngineBase::FLUSH_TYPE_ENUM) */
int _ZN13DpWrapper_ISP13onFlushBufferEN12DpEngineBase15FLUSH_TYPE_ENUME(void);

/* Symbol: _ZN13DpWrapper_ISP15onReconfigFrameER9DpCommandR8DpConfig */
/* Demangled: DpWrapper_ISP::onReconfigFrame(DpCommand&, DpConfig&) */
int _ZN13DpWrapper_ISP15onReconfigFrameER9DpCommandR8DpConfig(void);

/* Symbol: _Z11getPropertyPKcPcS0_ */
/* Demangled: getProperty(char const*, char*, char const*) */
int _Z11getPropertyPKcPcS0_(void);

/* Symbol: _ZN11PQHDRConfig12getHDRConfigEP12HDR_CONFIG_Tb */
/* Demangled: PQHDRConfig::getHDRConfig(HDR_CONFIG_T*, bool) */
int _ZN11PQHDRConfig12getHDRConfigEP12HDR_CONFIG_Tb(void);

/* Symbol: _ZN9PQSession11dumpAIParamEv */
/* Demangled: PQSession::dumpAIParam() */
int _ZN9PQSession11dumpAIParamEv(void);

/* Symbol: _ZN11DpIspStream12setSrcConfigEiiii13DP_COLOR_ENUM15DP_PROFILE_ENUM17DpInterlaceFormatP6DpRectb8DpSecure */
/* Demangled: DpIspStream::setSrcConfig(int, int, int, int, DP_COLOR_ENUM, DP_PROFILE_ENUM, DpInterlaceFormat, DpRect*, bool, DpSecure) */
int _ZN11DpIspStream12setSrcConfigEiiii13DP_COLOR_ENUM15DP_PROFILE_ENUM17DpInterlaceFormatP6DpRectb8DpSecure(void);

/* Symbol: _ZN8DpStream10delChannelEi */
/* Demangled: DpStream::delChannel(int) */
int _ZN8DpStream10delChannelEi(void);

/* Symbol: _ZN12DpVEncStream12setParameterER23ISP_TPIPE_CONFIG_STRUCTj */
/* Demangled: DpVEncStream::setParameter(ISP_TPIPE_CONFIG_STRUCT&, unsigned int) */
int _ZN12DpVEncStream12setParameterER23ISP_TPIPE_CONFIG_STRUCTj(void);

/* Symbol: _ZN14PQColorAdaptorC1Ej */
/* Demangled: PQColorAdaptor::PQColorAdaptor(unsigned int) */
int _ZN14PQColorAdaptorC1Ej(void);

/* Symbol: _ZN17DpBasicBufferPool14registerBufferEPPvPjiiPi */
/* Demangled: DpBasicBufferPool::registerBuffer(void**, unsigned int*, int, int, int*) */
int _ZN17DpBasicBufferPool14registerBufferEPPvPjiiPi(void);

/* Symbol: _ZTV14DpComposerBase */
/* Demangled: vtable for DpComposerBase */
extern void* _ZTV14DpComposerBase;

/* Symbol: _ZN18DpAsyncBlitStream212setSrcBufferEiPjji */
/* Demangled: DpAsyncBlitStream2::setSrcBuffer(int, unsigned int*, unsigned int, int) */
int _ZN18DpAsyncBlitStream212setSrcBufferEiPjji(void);

/* Symbol: _ZN8DpDriver11execCommandER14DpCommandBlock */
/* Demangled: DpDriver::execCommand(DpCommandBlock&) */
int _ZN8DpDriver11execCommandER14DpCommandBlock(void);

/* Symbol: _ZTV14DpEngine_IMG2O */
/* Demangled: vtable for DpEngine_IMG2O */
extern void* _ZTV14DpEngine_IMG2O;

/* Symbol: _ZN9PQSession10checkTimesEv */
/* Demangled: PQSession::checkTimes() */
int _ZN9PQSession10checkTimesEv(void);

/* Symbol: _ZTV14DpEngine_TDSHP */
/* Demangled: vtable for DpEngine_TDSHP */
extern void* _ZTV14DpEngine_TDSHP;

/* Symbol: _ZTV14DpEngine_CAMIN */
/* Demangled: vtable for DpEngine_CAMIN */
extern void* _ZTV14DpEngine_CAMIN;

/* Symbol: _ZN18DpAsyncBlitStream214setOrientationEjj */
/* Demangled: DpAsyncBlitStream2::setOrientation(unsigned int, unsigned int) */
int _ZN18DpAsyncBlitStream214setOrientationEjj(void);

/* Symbol: PATH0_SOUTReg */
/* Demangled: PATH0_SOUTReg */
extern void* PATH0_SOUTReg;

/* Symbol: _ZN9DpChannel11lockChannelEv */
/* Demangled: DpChannel::lockChannel() */
int _ZN9DpChannel11lockChannelEv(void);

/* Symbol: SCL2Reg */
/* Demangled: SCL2Reg */
extern void* SCL2Reg;

/* Symbol: _ZN16DpBufferPoolBase17getBufferFdWithIDEiiPiPjS1_Pb */
/* Demangled: DpBufferPoolBase::getBufferFdWithID(int, int, int*, unsigned int*, unsigned int*, bool*) */
int _ZN16DpBufferPoolBase17getBufferFdWithIDEiiPiPjS1_Pb(void);

/* Symbol: _ZTV16DpEngine_MDPSOUT */
/* Demangled: vtable for DpEngine_MDPSOUT */
extern void* _ZTV16DpEngine_MDPSOUT;

/* Symbol: _Z15forward_cub_acciiiiiiiiiiiRiS_S_S_S_S_ */
/* Demangled: forward_cub_acc(int, int, int, int, int, int, int, int, int, int, int, int&, int&, int&, int&, int&, int&) */
int _Z15forward_cub_acciiiiiiiiiiiRiS_S_S_S_S_(void);

/* Symbol: _Z18tile_main_platformPK23ISP_TPIPE_CONFIG_STRUCTP27ISP_TPIPE_DESCRIPTOR_STRUCTPciPvS5_S5_S5_ */
/* Demangled: tile_main_platform(ISP_TPIPE_CONFIG_STRUCT const*, ISP_TPIPE_DESCRIPTOR_STRUCT*, char*, int, void*, void*, void*, void*) */
int _Z18tile_main_platformPK23ISP_TPIPE_CONFIG_STRUCTP27ISP_TPIPE_DESCRIPTOR_STRUCTPciPvS5_S5_S5_(void);

/* Symbol: _ZN8PQConfig16getAshmemContextEjb */
/* Demangled: PQConfig::getAshmemContext(unsigned int, bool) */
int _ZN8PQConfig16getAshmemContextEjb(void);

/* Symbol: _ZN16PQSessionManager18m_CapturepreAAL0IdE */
/* Demangled: PQSessionManager::m_CapturepreAAL0Id */
extern void* _ZN16PQSessionManager18m_CapturepreAAL0IdE;

/* Symbol: _ZN11PQDCAdaptorC2Ej */
/* Demangled: PQDCAdaptor::PQDCAdaptor(unsigned int) */
int _ZN11PQDCAdaptorC2Ej(void);

/* Symbol: _ZN11PQDREConfig14isHDRVPEnabledEb */
/* Demangled: PQDREConfig::isHDRVPEnabled(bool) */
int _ZN11PQDREConfig14isHDRVPEnabledEb(void);

/* Symbol: _Z14calWROTSettingP9WrotInputP10WrotOutput */
/* Demangled: calWROTSetting(WrotInput*, WrotOutput*) */
int _Z14calWROTSettingP9WrotInputP10WrotOutput(void);

/* Symbol: _ZN11PQHDRConfigC1Ev */
/* Demangled: PQHDRConfig::PQHDRConfig() */
int _ZN11PQHDRConfigC1Ev(void);

/* Symbol: _ZN12PQDREAdaptor12writeCurve16ER9DpCommandPK12DRETopOutputjjPiRib */
/* Demangled: PQDREAdaptor::writeCurve16(DpCommand&, DRETopOutput const*, unsigned int, unsigned int, int*, int&, bool) */
int _ZN12PQDREAdaptor12writeCurve16ER9DpCommandPK12DRETopOutputjjPiRib(void);

/* Symbol: _ZN11DpIspStream10waitSubmitEv */
/* Demangled: DpIspStream::waitSubmit() */
int _ZN11DpIspStream10waitSubmitEv(void);

/* Symbol: _ZNSt3__16vectorI19DpReadbackEngines_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_ */
/* Demangled: void std::__1::vector<DpReadbackEngines_t, std::__1::allocator<DpReadbackEngines_t> >::__push_back_slow_path<DpReadbackEngines_t const&>(DpReadbackEngines_t const&) */
int _ZNSt3__16vectorI19DpReadbackEngines_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void);

/* Symbol: _ZN13DpEngine_RDMA15onReconfigFrameER9DpCommandR8DpConfig */
/* Demangled: DpEngine_RDMA::onReconfigFrame(DpCommand&, DpConfig&) */
int _ZN13DpEngine_RDMA15onReconfigFrameER9DpCommandR8DpConfig(void);

/* Symbol: _ZN9PQSession14getDCisHW0PathEv */
/* Demangled: PQSession::getDCisHW0Path() */
int _ZN9PQSession14getDCisHW0PathEv(void);

/* Symbol: _ZN18PQAlgorithmFactoryC2Ev */
/* Demangled: PQAlgorithmFactory::PQAlgorithmFactory() */
int _ZN18PQAlgorithmFactoryC2Ev(void);

/* Symbol: _ZN11PQIspTuning9s_ALMutexE */
/* Demangled: PQIspTuning::s_ALMutex */
extern void* _ZN11PQIspTuning9s_ALMutexE;

/* Symbol: _ZTV7ListPtrIN16DpBufferPoolBase10BufferNodeEE */
/* Demangled: vtable for ListPtr<DpBufferPoolBase::BufferNode> */
extern void* _ZTV7ListPtrIN16DpBufferPoolBase10BufferNodeEE;

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_ */
/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__push_back_slow_path<int const&>(int const&) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_(void);

/* Symbol: _ZN14DpCommandQueue4swapEv */
/* Demangled: DpCommandQueue::swap() */
int _ZN14DpCommandQueue4swapEv(void);

/* Symbol: _ZN16DpPathConnectionC1EP10DpPathBase */
/* Demangled: DpPathConnection::DpPathConnection(DpPathBase*) */
int _ZN16DpPathConnectionC1EP10DpPathBase(void);

/* Symbol: _ZN9PQSession18getHDRHistListSizeEPiS0_ */
/* Demangled: PQSession::getHDRHistListSize(int*, int*) */
int _ZN9PQSession18getHDRHistListSizeEPiS0_(void);

/* Symbol: _Z32tile_lut_mdp_func_output_disableiP23TILE_FUNC_ENABLE_STRUCTP19TILE_REG_MAP_STRUCT */
/* Demangled: tile_lut_mdp_func_output_disable(int, TILE_FUNC_ENABLE_STRUCT*, TILE_REG_MAP_STRUCT*) */
int _Z32tile_lut_mdp_func_output_disableiP23TILE_FUNC_ENABLE_STRUCTP19TILE_REG_MAP_STRUCT(void);

/* Symbol: _ZN11DpPortAdapt9abortPollE16CLIENT_TYPE_ENUM */
/* Demangled: DpPortAdapt::abortPoll(CLIENT_TYPE_ENUM) */
int _ZN11DpPortAdapt9abortPollE16CLIENT_TYPE_ENUM(void);

/* Symbol: _ZN9PQSession10getHDRInfoEPK9DpPqParamP24_DP_VDEC_DRV_COLORDESC_TP31_DP_VDEC_DRV_DYNAMIC_METADATA_T */
/* Demangled: PQSession::getHDRInfo(DpPqParam const*, _DP_VDEC_DRV_COLORDESC_T*, _DP_VDEC_DRV_DYNAMIC_METADATA_T*) */
int _ZN9PQSession10getHDRInfoEPK9DpPqParamP24_DP_VDEC_DRV_COLORDESC_TP31_DP_VDEC_DRV_DYNAMIC_METADATA_T(void);

/* Symbol: _ZN12PQHDRAdaptor11getInstanceEj */
/* Demangled: PQHDRAdaptor::getInstance(unsigned int) */
int _ZN12PQHDRAdaptor11getInstanceEj(void);

/* Symbol: _ZN17DpBasicBufferPool14registerBufferEPPvPjS2_iiPi */
/* Demangled: DpBasicBufferPool::registerBuffer(void**, unsigned int*, unsigned int*, int, int, int*) */
int _ZN17DpBasicBufferPool14registerBufferEPPvPjS2_iiPi(void);

/* Symbol: _ZN16PQSessionManager15createPQSessionEy */
/* Demangled: PQSessionManager::createPQSession(unsigned long long) */
int _ZN16PQSessionManager15createPQSessionEy(void);

/* Symbol: _ZN17DpAsyncBlitStream10BlitConfigC1Ev */
/* Demangled: DpAsyncBlitStream::BlitConfig::BlitConfig() */
int _ZN17DpAsyncBlitStream10BlitConfigC1Ev(void);

/* Symbol: _ZN9PQSession13setPrePipeNumEj */
/* Demangled: PQSession::setPrePipeNum(unsigned int) */
int _ZN9PQSession13setPrePipeNumEj(void);

/* Symbol: _ZN11PQIspTuning17loadIspTuningFileEv */
/* Demangled: PQIspTuning::loadIspTuningFile() */
int _ZN11PQIspTuning17loadIspTuningFileEv(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::underflow() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv(void);

/* Symbol: _ZN17DpCommandRecorder8copyTileEP7op_metajj */
/* Demangled: DpCommandRecorder::copyTile(op_meta*, unsigned int, unsigned int) */
int _ZN17DpCommandRecorder8copyTileEP7op_metajj(void);

/* Symbol: _ZN10DpTilePath11execCommandEv */
/* Demangled: DpTilePath::execCommand() */
int _ZN10DpTilePath11execCommandEv(void);

/* Symbol: _ZN11PQDCAdaptor9onCalcADLEP9PQSessionR9DpCommandR8DpConfigiPiRib */
/* Demangled: PQDCAdaptor::onCalcADL(PQSession*, DpCommand&, DpConfig&, int, int*, int&, bool) */
int _ZN11PQDCAdaptor9onCalcADLEP9PQSessionR9DpCommandR8DpConfigiPiRib(void);

/* Symbol: _ZN12PQDREAdaptor15getDREFrameInfoEb */
/* Demangled: PQDREAdaptor::getDREFrameInfo(bool) */
int _ZN12PQDREAdaptor15getDREFrameInfoEb(void);

/* Symbol: _ZN12PQDREAdaptor23setDRETransCurtgtBufferEP12DREsharedatab */
/* Demangled: PQDREAdaptor::setDRETransCurtgtBuffer(DREsharedata*, bool) */
int _ZN12PQDREAdaptor23setDRETransCurtgtBufferEP12DREsharedatab(void);

/* Symbol: _ZN14DpEngine_TDSHP15onReconfigFrameER9DpCommandR8DpConfig */
/* Demangled: DpEngine_TDSHP::onReconfigFrame(DpCommand&, DpConfig&) */
int _ZN14DpEngine_TDSHP15onReconfigFrameER9DpCommandR8DpConfig(void);

/* Symbol: _ZN12DpFragStream12setDstConfigE13DP_COLOR_ENUMiiii */
/* Demangled: DpFragStream::setDstConfig(DP_COLOR_ENUM, int, int, int, int) */
int _ZN12DpFragStream12setDstConfigE13DP_COLOR_ENUMiiii(void);

/* Symbol: WPEI2Reg */
/* Demangled: WPEI2Reg */
extern void* WPEI2Reg;

/* Symbol: _ZN14PQColorAdaptorC2Ej */
/* Demangled: PQColorAdaptor::PQColorAdaptor(unsigned int) */
int _ZN14PQColorAdaptorC2Ej(void);

/* Symbol: _ZN8DpStream10waitStreamEv */
/* Demangled: DpStream::waitStream() */
int _ZN8DpStream10waitStreamEv(void);

/* Symbol: _ZNK9DpChannel12getParameterEPvPiPjj */
/* Demangled: DpChannel::getParameter(void*, int*, unsigned int*, unsigned int) const */
int _ZNK9DpChannel12getParameterEPvPiPjj(void);

/* Symbol: _ZN12DpMmuHandlerC1Ejj */
/* Demangled: DpMmuHandler::DpMmuHandler(unsigned int, unsigned int) */
int _ZN12DpMmuHandlerC1Ejj(void);

/* Symbol: _ZN12PQRSZAdaptor14tuningRSZSWRegEi */
/* Demangled: PQRSZAdaptor::tuningRSZSWReg(int) */
int _ZN12PQRSZAdaptor14tuningRSZSWRegEi(void);

/* Symbol: _ZN18DpAsyncBlitStream212setSrcConfigEii13DP_COLOR_ENUM17DpInterlaceFormatj */
/* Demangled: DpAsyncBlitStream2::setSrcConfig(int, int, DP_COLOR_ENUM, DpInterlaceFormat, unsigned int) */
int _ZN18DpAsyncBlitStream212setSrcConfigEii13DP_COLOR_ENUM17DpInterlaceFormatj(void);

/* Symbol: _ZN13PQColorConfig21composeColorParameterEiib */
/* Demangled: PQColorConfig::composeColorParameter(int, int, bool) */
int _ZN13PQColorConfig21composeColorParameterEiib(void);

/* Symbol: _ZN12PQHDRAdaptor13dumpFwRegInFwEPK9DpPqParamP9DHDRINPUTP10DHDROUTPUTP31_DP_VDEC_DRV_DYNAMIC_METADATA_T */
/* Demangled: PQHDRAdaptor::dumpFwRegInFw(DpPqParam const*, DHDRINPUT*, DHDROUTPUT*, _DP_VDEC_DRV_DYNAMIC_METADATA_T*) */
int _ZN12PQHDRAdaptor13dumpFwRegInFwEPK9DpPqParamP9DHDRINPUTP10DHDROUTPUTP31_DP_VDEC_DRV_DYNAMIC_METADATA_T(void);

/* Symbol: _ZN17DpCommandRecorder9findLabelEi */
/* Demangled: DpCommandRecorder::findLabel(int) */
int _ZN17DpCommandRecorder9findLabelEi(void);

/* Symbol: _ZN12DpEngine_SCL12onConfigTileER9DpCommand */
/* Demangled: DpEngine_SCL::onConfigTile(DpCommand&) */
int _ZN12DpEngine_SCL12onConfigTileER9DpCommand(void);

/* Symbol: _ZN8DpMemory7FactoryE14DP_MEMORY_ENUMPvj */
/* Demangled: DpMemory::Factory(DP_MEMORY_ENUM, void*, unsigned int) */
int _ZN8DpMemory7FactoryE14DP_MEMORY_ENUMPvj(void);

/* Symbol: _ZN18DpAsyncBlitStream29setRotateEji */
/* Demangled: DpAsyncBlitStream2::setRotate(unsigned int, int) */
int _ZN18DpAsyncBlitStream29setRotateEji(void);

/* Symbol: _ZN11DpIspStream13setPortMatrixEiP13DpColorMatrix */
/* Demangled: DpIspStream::setPortMatrix(int, DpColorMatrix*) */
int _ZN11DpIspStream13setPortMatrixEiP13DpColorMatrix(void);

/* Symbol: _ZN14DpCommandQueue6secureEiyPj8DpSecurejS0_S0_S0_ */
/* Demangled: DpCommandQueue::secure(int, unsigned long long, unsigned int*, DpSecure, unsigned int, unsigned int*, unsigned int*, unsigned int*) */
int _ZN14DpCommandQueue6secureEiyPj8DpSecurejS0_S0_S0_(void);

/* Symbol: _ZN8PQAshmem22setAshmemValueByOffsetEji */
/* Demangled: PQAshmem::setAshmemValueByOffset(unsigned int, int) */
int _ZN8PQAshmem22setAshmemValueByOffsetEji(void);

/* Symbol: _ZN11DpPortAdapt12getSWAddressE16CLIENT_TYPE_ENUMPPvPj */
/* Demangled: DpPortAdapt::getSWAddress(CLIENT_TYPE_ENUM, void**, unsigned int*) */
int _ZN11DpPortAdapt12getSWAddressE16CLIENT_TYPE_ENUMPPvPj(void);

/* Symbol: _ZN13DpEngine_VENC13onConfigFrameER9DpCommandR8DpConfig */
/* Demangled: DpEngine_VENC::onConfigFrame(DpCommand&, DpConfig&) */
int _ZN13DpEngine_VENC13onConfigFrameER9DpCommandR8DpConfig(void);

/* Symbol: _ZN8DpDriver14queryEngUsagesERA60_j */
/* Demangled: DpDriver::queryEngUsages(unsigned int (&) [60]) */
int _ZN8DpDriver14queryEngUsagesERA60_j(void);

/* Symbol: _ZN8PQAshmem9s_ALMutexE */
/* Demangled: PQAshmem::s_ALMutex */
extern void* _ZN8PQAshmem9s_ALMutexE;

/* Symbol: _ZN13DpPathControl12onStopStreamEv */
/* Demangled: DpPathControl::onStopStream() */
int _ZN13DpPathControl12onStopStreamEv(void);

/* Symbol: _ZN9PQSession13getCurActPosXEv */
/* Demangled: PQSession::getCurActPosX() */
int _ZN9PQSession13getCurActPosXEv(void);

/* Symbol: _ZN12DpEngine_HDR12onInitEngineER9DpCommand */
/* Demangled: DpEngine_HDR::onInitEngine(DpCommand&) */
int _ZN12DpEngine_HDR12onInitEngineER9DpCommand(void);

/* Symbol: _ZN13DpEngine_WPEO19onRetrieveTileParamEP17TILE_PARAM_STRUCT */
/* Demangled: DpEngine_WPEO::onRetrieveTileParam(TILE_PARAM_STRUCT*) */
int _ZN13DpEngine_WPEO19onRetrieveTileParamEP17TILE_PARAM_STRUCT(void);

/* Symbol: _ZN11PQHDRConfigC2Ev */
/* Demangled: PQHDRConfig::PQHDRConfig() */
int _ZN11PQHDRConfigC2Ev(void);

/* Symbol: _ZN12DpBlitStream12setDstBufferEPPvS1_Pjj */
/* Demangled: DpBlitStream::setDstBuffer(void**, void**, unsigned int*, unsigned int) */
int _ZN12DpBlitStream12setDstBufferEPPvS1_Pjj(void);

/* Symbol: _ZN11DpIspStream12setParameterER23ISP_TPIPE_CONFIG_STRUCTP14ISP2MDP_STRUCTj */
/* Demangled: DpIspStream::setParameter(ISP_TPIPE_CONFIG_STRUCT&, ISP2MDP_STRUCT*, unsigned int) */
int _ZN11DpIspStream12setParameterER23ISP_TPIPE_CONFIG_STRUCTP14ISP2MDP_STRUCTj(void);

/* Symbol: _ZN16DpPathConnection12queryMuxInfoEv */
/* Demangled: DpPathConnection::queryMuxInfo() */
int _ZN16DpPathConnection12queryMuxInfoEv(void);

/* Symbol: _ZN16PQSessionManager22getPQSessionListHandleEy */
/* Demangled: PQSessionManager::getPQSessionListHandle(unsigned long long) */
int _ZN16PQSessionManager22getPQSessionListHandleEy(void);

/* Symbol: _ZN21PQDREHistogramAdaptor19unregisterAllBufferEv */
/* Demangled: PQDREHistogramAdaptor::unregisterAllBuffer() */
int _ZN21PQDREHistogramAdaptor19unregisterAllBufferEv(void);

/* Symbol: _ZN16DpPathConnection11s_selOutMapE */
/* Demangled: DpPathConnection::s_selOutMap */
extern void* _ZN16DpPathConnection11s_selOutMapE;

/* Symbol: IMGI2Reg */
/* Demangled: IMGI2Reg */
extern void* IMGI2Reg;

/* Symbol: _Z15backward_6_tapsiiiiiiiiiRiS_ */
/* Demangled: backward_6_taps(int, int, int, int, int, int, int, int, int, int&, int&) */
int _Z15backward_6_tapsiiiiiiiiiRiS_(void);

/* Symbol: _ZN18DpAsyncBlitStream212setDstBufferEjPPvPjji */
/* Demangled: DpAsyncBlitStream2::setDstBuffer(unsigned int, void**, unsigned int*, unsigned int, int) */
int _ZN18DpAsyncBlitStream212setDstBufferEjPPvPjji(void);

/* Symbol: _ZN12DpMmuHandler12mapHWAddressEij */
/* Demangled: DpMmuHandler::mapHWAddress(int, unsigned int) */
int _ZN12DpMmuHandler12mapHWAddressEij(void);

/* Symbol: _ZN14DpEngine_COLOR12onConfigTileER9DpCommand */
/* Demangled: DpEngine_COLOR::onConfigTile(DpCommand&) */
int _ZN14DpEngine_COLOR12onConfigTileER9DpCommand(void);

/* Symbol: _ZN16PQSessionManager11findVideoIDEj */
/* Demangled: PQSessionManager::findVideoID(unsigned int) */
int _ZN16PQSessionManager11findVideoIDEj(void);

/* Symbol: _ZN10PQDCConfig9isEnabledER13GlobalPQParamb */
/* Demangled: PQDCConfig::isEnabled(GlobalPQParam&, bool) */
int _ZN10PQDCConfig9isEnabledER13GlobalPQParamb(void);

/* Symbol: _ZN18PQAlgorithmFactory8getColorEj */
/* Demangled: PQAlgorithmFactory::getColor(unsigned int) */
int _ZN18PQAlgorithmFactory8getColorEj(void);

/* Symbol: _ZN11DpIspStream7getPqIDEv */
/* Demangled: DpIspStream::getPqID() */
int _ZN11DpIspStream7getPqIDEv(void);

/* Symbol: _ZN17DpCommandRecorder7reorderEv */
/* Demangled: DpCommandRecorder::reorder() */
int _ZN17DpCommandRecorder7reorderEv(void);

/* Symbol: _ZN17DpCommandRecorder17setSecureMetaDataEjj */
/* Demangled: DpCommandRecorder::setSecureMetaData(unsigned int, unsigned int) */
int _ZN17DpCommandRecorder17setSecureMetaDataEjj(void);

/* Symbol: _ZN12PQRSZAdaptor9s_ALMutexE */
/* Demangled: PQRSZAdaptor::s_ALMutex */
extern void* _ZN12PQRSZAdaptor9s_ALMutexE;

/* Symbol: _ZN17DpAsyncBlitStream10BlitConfigC2Ev */
/* Demangled: DpAsyncBlitStream::BlitConfig::BlitConfig() */
int _ZN17DpAsyncBlitStream10BlitConfigC2Ev(void);

/* Symbol: _ZN18DpAsyncBlitStream29cancelJobEj */
/* Demangled: DpAsyncBlitStream2::cancelJob(unsigned int) */
int _ZN18DpAsyncBlitStream29cancelJobEj(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev(void);

/* Symbol: _ZN14DpEngine_TDSHP15onReconfigTilesER9DpCommand */
/* Demangled: DpEngine_TDSHP::onReconfigTiles(DpCommand&) */
int _ZN14DpEngine_TDSHP15onReconfigTilesER9DpCommand(void);

/* Symbol: _ZN8DpMemory7FactoryE14DP_MEMORY_ENUMijbPi */
/* Demangled: DpMemory::Factory(DP_MEMORY_ENUM, int, unsigned int, bool, int*) */
int _ZN8DpMemory7FactoryE14DP_MEMORY_ENUMijbPi(void);

/* Symbol: _ZN17DpAsyncBlitStream12setDstBufferEjiPjji */
/* Demangled: DpAsyncBlitStream::setDstBuffer(unsigned int, int, unsigned int*, unsigned int, int) */
int _ZN17DpAsyncBlitStream12setDstBufferEjiPjji(void);

/* Symbol: _ZN11DpIspStream21queryMultiPortSupportENS_13ISPStreamTypeE */
/* Demangled: DpIspStream::queryMultiPortSupport(DpIspStream::ISPStreamType) */
int _ZN11DpIspStream21queryMultiPortSupportENS_13ISPStreamTypeE(void);

/* Symbol: _ZN12PQRSZAdaptor11s_pInstanceE */
/* Demangled: PQRSZAdaptor::s_pInstance */
extern void* _ZN12PQRSZAdaptor11s_pInstanceE;

/* Symbol: _Z18conv_block_to_scanPhjjjjjS_ */
/* Demangled: conv_block_to_scan(unsigned char*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned char*) */
int _Z18conv_block_to_scanPhjjjjjS_(void);

/* Symbol: _Z18getWROTFIFOSettingj */
/* Demangled: getWROTFIFOSetting(unsigned int) */
int _Z18getWROTFIFOSettingj(void);

/* Symbol: _ZN13PQColorConfig14getColorConfigEPP14COLOR_CONFIG_Tibi */
/* Demangled: PQColorConfig::getColorConfig(COLOR_CONFIG_T**, int, bool, int) */
int _ZN13PQColorConfig14getColorConfigEPP14COLOR_CONFIG_Tibi(void);

/* Symbol: _ZN16PQSessionManager22m_CapturepreAALPipeNumE */
/* Demangled: PQSessionManager::m_CapturepreAALPipeNum */
extern void* _ZN16PQSessionManager22m_CapturepreAALPipeNumE;

/* Symbol: _ZN18PQAlgorithmAdaptorC2E17ProxyTuningBufferS0_S0_S0_ */
/* Demangled: PQAlgorithmAdaptor::PQAlgorithmAdaptor(ProxyTuningBuffer, ProxyTuningBuffer, ProxyTuningBuffer, ProxyTuningBuffer) */
int _ZN18PQAlgorithmAdaptorC2E17ProxyTuningBufferS0_S0_S0_(void);

/* Symbol: _ZNK11DpPortAdapt13getVENCConfigEPP13DpVEnc_Config */
/* Demangled: DpPortAdapt::getVENCConfig(DpVEnc_Config**) const */
int _ZNK11DpPortAdapt13getVENCConfigEPP13DpVEnc_Config(void);

/* Symbol: _ZN14DpEngine_CAMIN13onUpdatePMQOSER9DpCommandRjS2_RiR7timevalR19DP_FORMAT_FLAG_ENUM */
/* Demangled: DpEngine_CAMIN::onUpdatePMQOS(DpCommand&, unsigned int&, unsigned int&, int&, timeval&, DP_FORMAT_FLAG_ENUM&) */
int _ZN14DpEngine_CAMIN13onUpdatePMQOSER9DpCommandRjS2_RiR7timevalR19DP_FORMAT_FLAG_ENUM(void);

/* Symbol: _ZN11DpIspStream10setSrcCropEiiiiii */
/* Demangled: DpIspStream::setSrcCrop(int, int, int, int, int, int) */
int _ZN11DpIspStream10setSrcCropEiiiiii(void);

/* Symbol: _ZN12PQDREAdaptor14tuningDRESWRegEP9CDRETopFWi */
/* Demangled: PQDREAdaptor::tuningDRESWReg(CDRETopFW*, int) */
int _ZN12PQDREAdaptor14tuningDRESWRegEP9CDRETopFWi(void);

/* Symbol: _ZN12PQDREAdaptor22tuningToolReadDREVPRegEP11CDREVPTopFWi */
/* Demangled: PQDREAdaptor::tuningToolReadDREVPReg(CDREVPTopFW*, int) */
int _ZN12PQDREAdaptor22tuningToolReadDREVPRegEP11CDREVPTopFWi(void);

/* Symbol: _ZN12PQDREAdaptor9s_ALMutexE */
/* Demangled: PQDREAdaptor::s_ALMutex */
extern void* _ZN12PQDREAdaptor9s_ALMutexE;

/* Symbol: _ZN11DpFRegistryIP12DpEngineBaseiE5gHeadE */
/* Demangled: DpFRegistry<DpEngineBase*, int>::gHead */
extern void* _ZN11DpFRegistryIP12DpEngineBaseiE5gHeadE;

/* Symbol: _ZN17DpAsyncBlitStream17configPQParameterEjRNS_10BlitConfigE */
/* Demangled: DpAsyncBlitStream::configPQParameter(unsigned int, DpAsyncBlitStream::BlitConfig&) */
int _ZN17DpAsyncBlitStream17configPQParameterEjRNS_10BlitConfigE(void);

/* Symbol: _ZN11DpPortAdapt11getBufferFdE16CLIENT_TYPE_ENUMiPiPjS2_Rb */
/* Demangled: DpPortAdapt::getBufferFd(CLIENT_TYPE_ENUM, int, int*, unsigned int*, unsigned int*, bool&) */
int _ZN11DpPortAdapt11getBufferFdE16CLIENT_TYPE_ENUMiPiPjS2_Rb(void);

/* Symbol: _ZN12DpVEncStream12waitCompleteEv */
/* Demangled: DpVEncStream::waitComplete() */
int _ZN12DpVEncStream12waitCompleteEv(void);

/* Symbol: _ZN17DpCommandRecorder9getEngineEj */
/* Demangled: DpCommandRecorder::getEngine(unsigned int) */
int _ZN17DpCommandRecorder9getEngineEj(void);

/* Symbol: _ZN11PQDSAdaptor18getVideoSourceSizeEP7DSInputP9DpPqParam */
/* Demangled: PQDSAdaptor::getVideoSourceSize(DSInput*, DpPqParam*) */
int _ZN11PQDSAdaptor18getVideoSourceSizeEP7DSInputP9DpPqParam(void);

/* Symbol: _ZN11PQDCAdaptor11onCalculateEP9PQSessioniiibP9ADLOutput */
/* Demangled: PQDCAdaptor::onCalculate(PQSession*, int, int, int, bool, ADLOutput*) */
int _ZN11PQDCAdaptor11onCalculateEP9PQSessioniiibP9ADLOutput(void);

/* Symbol: _ZN11DpIspStream14queueDstBufferEiPjS0_i */
/* Demangled: DpIspStream::queueDstBuffer(int, unsigned int*, unsigned int*, int) */
int _ZN11DpIspStream14queueDstBufferEiPjS0_i(void);

/* Symbol: _ZN9PQSession12deleteHWNodeEv */
/* Demangled: PQSession::deleteHWNode() */
int _ZN9PQSession12deleteHWNodeEv(void);

/* Symbol: _ZN12DpVEncStream10setSrcCropEiiiiiiiii */
/* Demangled: DpVEncStream::setSrcCrop(int, int, int, int, int, int, int, int, int) */
int _ZN12DpVEncStream10setSrcCropEiiiiiiiii(void);

/* Symbol: _ZN9PQSession13getPreCutPosXEv */
/* Demangled: PQSession::getPreCutPosX() */
int _ZN9PQSession13getPreCutPosXEv(void);

/* Symbol: _ZN16DpRingBufferPool13dequeueBufferEPiP13DP_COLOR_ENUMPPvS0_S0_S0_S0_S0_b */
/* Demangled: DpRingBufferPool::dequeueBuffer(int*, DP_COLOR_ENUM*, void**, int*, int*, int*, int*, int*, bool) */
int _ZN16DpRingBufferPool13dequeueBufferEPiP13DP_COLOR_ENUMPPvS0_S0_S0_S0_S0_b(void);

/* Symbol: WROT0Reg */
/* Demangled: WROT0Reg */
extern void* WROT0Reg;

/* Symbol: _ZN12PQHDRAdaptor13setPrePipeNumEj */
/* Demangled: PQHDRAdaptor::setPrePipeNum(unsigned int) */
int _ZN12PQHDRAdaptor13setPrePipeNumEj(void);

/* Symbol: _ZN12PQDREAdaptor16tuningDREVPSWRegEP11CDREVPTopFWi */
/* Demangled: PQDREAdaptor::tuningDREVPSWReg(CDREVPTopFW*, int) */
int _ZN12PQDREAdaptor16tuningDREVPSWRegEP11CDREVPTopFWi(void);

/* Symbol: _ZN21PQDREHistogramAdaptor24checkAndResetUnusedDREFWEP11PQDREBuffer */
/* Demangled: PQDREHistogramAdaptor::checkAndResetUnusedDREFW(PQDREBuffer*) */
int _ZN21PQDREHistogramAdaptor24checkAndResetUnusedDREFWEP11PQDREBuffer(void);

/* Symbol: _ZN9PQSession24deleteDCWaitHistListNodeEv */
/* Demangled: PQSession::deleteDCWaitHistListNode() */
int _ZN9PQSession24deleteDCWaitHistListNodeEv(void);

/* Symbol: _ZN16DpAutoBufferPoolD0Ev */
/* Demangled: DpAutoBufferPool::~DpAutoBufferPool() */
int _ZN16DpAutoBufferPoolD0Ev(void);

/* Symbol: _ZN13PQColorConfig18m_ColorTableAIInitE */
/* Demangled: PQColorConfig::m_ColorTableAIInit */
extern void* _ZN13PQColorConfig18m_ColorTableAIInitE;

/* Symbol: _ZN13DpEngineMutexC1EP10DpPathBase */
/* Demangled: DpEngineMutex::DpEngineMutex(DpPathBase*) */
int _ZN13DpEngineMutexC1EP10DpPathBase(void);

/* Symbol: _ZN8DpStream22setNumReadbackPABufferEjj */
/* Demangled: DpStream::setNumReadbackPABuffer(unsigned int, unsigned int) */
int _ZN8DpStream22setNumReadbackPABufferEjj(void);

/* Symbol: _ZN17DpAsyncBlitStream10setSrcCropEj6DpRect */
/* Demangled: DpAsyncBlitStream::setSrcCrop(unsigned int, DpRect) */
int _ZN17DpAsyncBlitStream10setSrcCropEj6DpRect(void);

/* Symbol: _Z16backward_src_acciiiiiiiiiRiS_ */
/* Demangled: backward_src_acc(int, int, int, int, int, int, int, int, int, int&, int&) */
int _Z16backward_src_acciiiiiiiiiRiS_(void);

/* Symbol: _ZN18DpAsyncBlitStream214transToRotFlipEjRiRb */
/* Demangled: DpAsyncBlitStream2::transToRotFlip(unsigned int, int&, bool&) */
int _ZN18DpAsyncBlitStream214transToRotFlipEjRiRb(void);

/* Symbol: _ZN12DpTileEngine11advanceTileER9DpCommandP17TILE_PARAM_STRUCT */
/* Demangled: DpTileEngine::advanceTile(DpCommand&, TILE_PARAM_STRUCT*) */
int _ZN12DpTileEngine11advanceTileER9DpCommandP17TILE_PARAM_STRUCT(void);

/* Symbol: _ZN9PQSession10setHDRModeEPK9DpPqParamP24_DP_VDEC_DRV_COLORDESC_TP31_DP_VDEC_DRV_DYNAMIC_METADATA_T */
/* Demangled: PQSession::setHDRMode(DpPqParam const*, _DP_VDEC_DRV_COLORDESC_T*, _DP_VDEC_DRV_DYNAMIC_METADATA_T*) */
int _ZN9PQSession10setHDRModeEPK9DpPqParamP24_DP_VDEC_DRV_COLORDESC_TP31_DP_VDEC_DRV_DYNAMIC_METADATA_T(void);

/* Symbol: _ZN13DpEngineMutexD1Ev */
/* Demangled: DpEngineMutex::~DpEngineMutex() */
int _ZN13DpEngineMutexD1Ev(void);

/* Symbol: _ZNK11DpPortAdapt11getPortInfoEP13DP_COLOR_ENUMPiS2_S2_S2_P15DP_PROFILE_ENUMPb */
/* Demangled: DpPortAdapt::getPortInfo(DP_COLOR_ENUM*, int*, int*, int*, int*, DP_PROFILE_ENUM*, bool*) const */
int _ZNK11DpPortAdapt11getPortInfoEP13DP_COLOR_ENUMPiS2_S2_S2_P15DP_PROFILE_ENUMPb(void);

/* Symbol: _ZN11DpIspStream13initPQServiceEv */
/* Demangled: DpIspStream::initPQService() */
int _ZN11DpIspStream13initPQServiceEv(void);

/* Symbol: _ZN12DpVEncStream10setSrcCropEiiiiii */
/* Demangled: DpVEncStream::setSrcCrop(int, int, int, int, int, int) */
int _ZN12DpVEncStream10setSrcCropEiiiiii(void);

/* Symbol: HDR0Reg */
/* Demangled: HDR0Reg */
extern void* HDR0Reg;

/* Symbol: _ZN12DpIonHandlerC2EijbPi */
/* Demangled: DpIonHandler::DpIonHandler(int, unsigned int, bool, int*) */
int _ZN12DpIonHandlerC2EijbPi(void);

/* Symbol: _ZN9PQSession10getAIParamEP9DpAIParam */
/* Demangled: PQSession::getAIParam(DpAIParam*) */
int _ZN9PQSession10getAIParamEP9DpAIParam(void);

/* Symbol: _ZN9PQSession27HandleDCHistDoneAndCheckRefEj */
/* Demangled: PQSession::HandleDCHistDoneAndCheckRef(unsigned int) */
int _ZN9PQSession27HandleDCHistDoneAndCheckRefEj(void);

/* Symbol: _ZN11DpIspStream14queueSrcBufferEPPvPjS2_i */
/* Demangled: DpIspStream::queueSrcBuffer(void**, unsigned int*, unsigned int*, int) */
int _ZN11DpIspStream14queueSrcBufferEPPvPjS2_i(void);

/* Symbol: _ZN14DpEngine_IMG2O14onInitTileCalcEP17TILE_PARAM_STRUCT */
/* Demangled: DpEngine_IMG2O::onInitTileCalc(TILE_PARAM_STRUCT*) */
int _ZN14DpEngine_IMG2O14onInitTileCalcEP17TILE_PARAM_STRUCT(void);

/* Symbol: _ZTV12DpTilePathMT */
/* Demangled: vtable for DpTilePathMT */
extern void* _ZTV12DpTilePathMT;

/* Symbol: _Z10setESLRDMAR9DpCommandj13DP_COLOR_ENUM */
/* Demangled: setESLRDMA(DpCommand&, unsigned int, DP_COLOR_ENUM) */
int _Z10setESLRDMAR9DpCommandj13DP_COLOR_ENUM(void);

/* Symbol: _ZN14PQColorAdaptor17onUpdateHueEngineEP14COLOR_CONFIG_TR9DpCommandRiPi */
/* Demangled: PQColorAdaptor::onUpdateHueEngine(COLOR_CONFIG_T*, DpCommand&, int&, int*) */
int _ZN14PQColorAdaptor17onUpdateHueEngineEP14COLOR_CONFIG_TR9DpCommandRiPi(void);

/* Symbol: _ZN12PQHDRAdaptor12getHDROutputEP10DHDROUTPUTib */
/* Demangled: PQHDRAdaptor::getHDROutput(DHDROUTPUT*, int, bool) */
int _ZN12PQHDRAdaptor12getHDROutputEP10DHDROUTPUTib(void);

/* Symbol: _ZN16DpRingBufferPool13releaseBufferEib */
/* Demangled: DpRingBufferPool::releaseBuffer(int, bool) */
int _ZN16DpRingBufferPool13releaseBufferEib(void);

/* Symbol: _ZTV17DpBasicBufferPool */
/* Demangled: vtable for DpBasicBufferPool */
extern void* _ZTV17DpBasicBufferPool;

/* Symbol: _ZN17DpCommandRecorder17getSecurePortFlagEv */
/* Demangled: DpCommandRecorder::getSecurePortFlag() */
int _ZN17DpCommandRecorder17getSecurePortFlagEv(void);

/* Symbol: _ZN17DpCommandRecorder18getSecureAddrCountEv */
/* Demangled: DpCommandRecorder::getSecureAddrCount() */
int _ZN17DpCommandRecorder18getSecureAddrCountEv(void);

/* Symbol: _Z14calRDMASettingP9RdmaInputP10RdmaOutput */
/* Demangled: calRDMASetting(RdmaInput*, RdmaOutput*) */
int _Z14calRDMASettingP9RdmaInputP10RdmaOutput(void);

/* Symbol: _ZN9PQSession10setPipeNumEj */
/* Demangled: PQSession::setPipeNum(unsigned int) */
int _ZN9PQSession10setPipeNumEj(void);

/* Symbol: _ZN9PQSession20setPictureDpPqConfigEP10DpPqConfigPK9DpPqParam */
/* Demangled: PQSession::setPictureDpPqConfig(DpPqConfig*, DpPqParam const*) */
int _ZN9PQSession20setPictureDpPqConfigEP10DpPqConfigPK9DpPqParam(void);

/* Symbol: _ZN12PQDREAdaptorD1Ev */
/* Demangled: PQDREAdaptor::~PQDREAdaptor() */
int _ZN12PQDREAdaptorD1Ev(void);

/* Symbol: _ZN18DpAsyncBlitStream2C1Ev */
/* Demangled: DpAsyncBlitStream2::DpAsyncBlitStream2() */
int _ZN18DpAsyncBlitStream2C1Ev(void);

/* Symbol: _ZN11DpIspStream17setBatchParameterEPP23ISP_TPIPE_CONFIG_STRUCTjj */
/* Demangled: DpIspStream::setBatchParameter(ISP_TPIPE_CONFIG_STRUCT**, unsigned int, unsigned int) */
int _ZN11DpIspStream17setBatchParameterEPP23ISP_TPIPE_CONFIG_STRUCTjj(void);

/* Symbol: _ZN9PQSession14setDCisHW0PathEb */
/* Demangled: PQSession::setDCisHW0Path(bool) */
int _ZN9PQSession14setDCisHW0PathEb(void);

/* Symbol: _ZTV16DpBufferPoolBase */
/* Demangled: vtable for DpBufferPoolBase */
extern void* _ZTV16DpBufferPoolBase;

/* Symbol: _ZN14DpPathComposer9setupPathEP9DpChannel16STREAM_TYPE_ENUM */
/* Demangled: DpPathComposer::setupPath(DpChannel*, STREAM_TYPE_ENUM) */
int _ZN14DpPathComposer9setupPathEP9DpChannel16STREAM_TYPE_ENUM(void);

/* Symbol: _ZN14DpCommandQueue5writeEjjjPii */
/* Demangled: DpCommandQueue::write(unsigned int, unsigned int, unsigned int, int*, int) */
int _ZN14DpCommandQueue5writeEjjjPii(void);

/* Symbol: _ZN17DpCommandRecorder18getFrameInfoToCMDQEv */
/* Demangled: DpCommandRecorder::getFrameInfoToCMDQ() */
int _ZN17DpCommandRecorder18getFrameInfoToCMDQEv(void);

/* Symbol: _ZN12DpEngine_HDR15onReconfigTilesER9DpCommand */
/* Demangled: DpEngine_HDR::onReconfigTiles(DpCommand&) */
int _ZN12DpEngine_HDR15onReconfigTilesER9DpCommand(void);

/* Symbol: _Z27tile_init_mdp_func_propertyP22TILE_FUNC_BLOCK_STRUCTP19TILE_REG_MAP_STRUCT */
/* Demangled: tile_init_mdp_func_property(TILE_FUNC_BLOCK_STRUCT*, TILE_REG_MAP_STRUCT*) */
int _Z27tile_init_mdp_func_propertyP22TILE_FUNC_BLOCK_STRUCTP19TILE_REG_MAP_STRUCT(void);

/* Symbol: _ZN11DpIspStream17setBatchParameterEPP23ISP_TPIPE_CONFIG_STRUCTjP14ISP2MDP_STRUCTj */
/* Demangled: DpIspStream::setBatchParameter(ISP_TPIPE_CONFIG_STRUCT**, unsigned int, ISP2MDP_STRUCT*, unsigned int) */
int _ZN11DpIspStream17setBatchParameterEPP23ISP_TPIPE_CONFIG_STRUCTjP14ISP2MDP_STRUCTj(void);

/* Symbol: _ZN10PQDCConfigD1Ev */
/* Demangled: PQDCConfig::~PQDCConfig() */
int _ZN10PQDCConfigD1Ev(void);

/* Symbol: _Z33tile_tdr_isp_fprint_dump_internalP7__sFILEP19TILE_REG_MAP_STRUCTiPjS3_jj */
/* Demangled: tile_tdr_isp_fprint_dump_internal(__sFILE*, TILE_REG_MAP_STRUCT*, int, unsigned int*, unsigned int*, unsigned int, unsigned int) */
int _Z33tile_tdr_isp_fprint_dump_internalP7__sFILEP19TILE_REG_MAP_STRUCTiPjS3_jj(void);

/* Symbol: _ZN8DpStream23initNumReadbackPABufferEv */
/* Demangled: DpStream::initNumReadbackPABuffer() */
int _ZN8DpStream23initNumReadbackPABufferEv(void);

/* Symbol: _ZN17DpCommandRecorder13getEngineFlagEv */
/* Demangled: DpCommandRecorder::getEngineFlag() */
int _ZN17DpCommandRecorder13getEngineFlagEv(void);

/* Symbol: _ZTV12DpEngineBase */
/* Demangled: vtable for DpEngineBase */
extern void* _ZTV12DpEngineBase;

/* Symbol: _ZN10PQDSConfig11isUREnabledEb */
/* Demangled: PQDSConfig::isUREnabled(bool) */
int _ZN10PQDSConfig11isUREnabledEb(void);

/* Symbol: _ZN12PQHDRAdaptor13setPreHDRModeE13HDR_MODE_ENUM */
/* Demangled: PQHDRAdaptor::setPreHDRMode(HDR_MODE_ENUM) */
int _ZN12PQHDRAdaptor13setPreHDRModeE13HDR_MODE_ENUM(void);

/* Symbol: _ZN21PQDREHistogramAdaptor11getDREInputEPvjiiP13DREVPTopInputPjRj */
/* Demangled: PQDREHistogramAdaptor::getDREInput(void*, unsigned int, int, int, DREVPTopInput*, unsigned int*, unsigned int&) */
int _ZN21PQDREHistogramAdaptor11getDREInputEPvjiiP13DREVPTopInputPjRj(void);

/* Symbol: _Z19tile_isp_mode_closeP19TILE_REG_MAP_STRUCT */
/* Demangled: tile_isp_mode_close(TILE_REG_MAP_STRUCT*) */
int _Z19tile_isp_mode_closeP19TILE_REG_MAP_STRUCT(void);

/* Symbol: _ZN12DpEngine_SCL13onConfigFrameER9DpCommandR8DpConfig */
/* Demangled: DpEngine_SCL::onConfigFrame(DpCommand&, DpConfig&) */
int _ZN12DpEngine_SCL13onConfigFrameER9DpCommandR8DpConfig(void);

/* Symbol: _ZN9PQSession16getHDRisLeftDoneEv */
/* Demangled: PQSession::getHDRisLeftDone() */
int _ZN9PQSession16getHDRisLeftDoneEv(void);

/* Symbol: _ZN11PQDCAdaptor11setUserInfoE23USER_INFO_SCENARIO_ENUM */
/* Demangled: PQDCAdaptor::setUserInfo(USER_INFO_SCENARIO_ENUM) */
int _ZN11PQDCAdaptor11setUserInfoE23USER_INFO_SCENARIO_ENUM(void);

/* Symbol: _ZN17PQReadBackFactoryC1Ev */
/* Demangled: PQReadBackFactory::PQReadBackFactory() */
int _ZN17PQReadBackFactoryC1Ev(void);

/* Symbol: _ZN13PQColorConfig12m_ColorTableE */
/* Demangled: PQColorConfig::m_ColorTable */
extern void* _ZN13PQColorConfig12m_ColorTableE;

/* Symbol: _Z38tile_tdr_isp_mask_to_dump_internal_wpeP19TILE_REG_MAP_STRUCTPjS1_ */
/* Demangled: tile_tdr_isp_mask_to_dump_internal_wpe(TILE_REG_MAP_STRUCT*, unsigned int*, unsigned int*) */
int _Z38tile_tdr_isp_mask_to_dump_internal_wpeP19TILE_REG_MAP_STRUCTPjS1_(void);

/* Symbol: _ZN12DpEngineBase15onAbortPollPortEv */
/* Demangled: DpEngineBase::onAbortPollPort() */
int _ZN12DpEngineBase15onAbortPollPortEv(void);

/* Symbol: _ZN17DpCommandRecorder11resetRecordEv */
/* Demangled: DpCommandRecorder::resetRecord() */
int _ZN17DpCommandRecorder11resetRecordEv(void);

/* Symbol: _ZN17DpCommandRecorder11getPriorityEv */
/* Demangled: DpCommandRecorder::getPriority() */
int _ZN17DpCommandRecorder11getPriorityEv(void);

/* Symbol: _ZN9PQSession14resetHDRHandleEv */
/* Demangled: PQSession::resetHDRHandle() */
int _ZN9PQSession14resetHDRHandleEv(void);

/* Symbol: _ZN16DpAutoBufferPoolD1Ev */
/* Demangled: DpAutoBufferPool::~DpAutoBufferPool() */
int _ZN16DpAutoBufferPoolD1Ev(void);

/* Symbol: _ZN12PQRSZAdaptorD1Ev */
/* Demangled: PQRSZAdaptor::~PQRSZAdaptor() */
int _ZN12PQRSZAdaptorD1Ev(void);

/* Symbol: _ZN12PQDREAdaptor15getDRETransInfoEb */
/* Demangled: PQDREAdaptor::getDRETransInfo(bool) */
int _ZN12PQDREAdaptor15getDRETransInfoEb(void);

/* Symbol: _ZN17DpAsyncBlitStream14setPQParameterEjRK9DpPqParam */
/* Demangled: DpAsyncBlitStream::setPQParameter(unsigned int, DpPqParam const&) */
int _ZN17DpAsyncBlitStream14setPQParameterEjRK9DpPqParam(void);

/* Symbol: _ZN14DpCommandQueue17appendNumReadbackEjj */
/* Demangled: DpCommandQueue::appendNumReadback(unsigned int, unsigned int) */
int _ZN14DpCommandQueue17appendNumReadbackEjj(void);

/* Symbol: _ZTV12DpEngine_SCL */
/* Demangled: vtable for DpEngine_SCL */
extern void* _ZTV12DpEngine_SCL;

/* Symbol: _Z28tile_tdr_isp_fprint_dump_bldP7__sFILEP19TILE_REG_MAP_STRUCTiPjS3_jj */
/* Demangled: tile_tdr_isp_fprint_dump_bld(__sFILE*, TILE_REG_MAP_STRUCT*, int, unsigned int*, unsigned int*, unsigned int, unsigned int) */
int _Z28tile_tdr_isp_fprint_dump_bldP7__sFILEP19TILE_REG_MAP_STRUCTiPjS3_jj(void);

/* Symbol: _ZN18DpAsyncBlitStream224queryTheoreticalExecTimeEjjjjPNSt3__16vectorIjNS0_9allocatorIjEEEE */
/* Demangled: DpAsyncBlitStream2::queryTheoreticalExecTime(unsigned int, unsigned int, unsigned int, unsigned int, std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >*) */
int _ZN18DpAsyncBlitStream224queryTheoreticalExecTimeEjjjjPNSt3__16vectorIjNS0_9allocatorIjEEEE(void);

/* Symbol: _ZN13DpWrapper_WPE12onConfigTileER9DpCommand */
/* Demangled: DpWrapper_WPE::onConfigTile(DpCommand&) */
int _ZN13DpWrapper_WPE12onConfigTileER9DpCommand(void);

/* Symbol: _ZTV13DpPmemHandler */
/* Demangled: vtable for DpPmemHandler */
extern void* _ZTV13DpPmemHandler;

/* Symbol: _ZN16PQSessionManager11s_pInstanceE */
/* Demangled: PQSessionManager::s_pInstance */
extern void* _ZN16PQSessionManager11s_pInstanceE;

/* Symbol: _ZN16DpBufferPoolBase16pollBufferStatusE16CLIENT_TYPE_ENUMb */
/* Demangled: DpBufferPoolBase::pollBufferStatus(CLIENT_TYPE_ENUM, bool) */
int _ZN16DpBufferPoolBase16pollBufferStatusE16CLIENT_TYPE_ENUMb(void);

/* Symbol: _ZN17DpCommandRecorder10markRecordENS_9BlockTypeEjj */
/* Demangled: DpCommandRecorder::markRecord(DpCommandRecorder::BlockType, unsigned int, unsigned int) */
int _ZN17DpCommandRecorder10markRecordENS_9BlockTypeEjj(void);

/* Symbol: _ZN10PQDSConfig14initTDSHPTableEv */
/* Demangled: PQDSConfig::initTDSHPTable() */
int _ZN10PQDSConfig14initTDSHPTableEv(void);

/* Symbol: _ZN13DpEngineMutexD2Ev */
/* Demangled: DpEngineMutex::~DpEngineMutex() */
int _ZN13DpEngineMutexD2Ev(void);

/* Symbol: _ZN17DpAsyncBlitStream12setSrcBufferEiPjji */
/* Demangled: DpAsyncBlitStream::setSrcBuffer(int, unsigned int*, unsigned int, int) */
int _ZN17DpAsyncBlitStream12setSrcBufferEiPjji(void);

/* Symbol: _ZN18DpAsyncBlitStream212setSrcConfigEiiii13DP_COLOR_ENUM15DP_PROFILE_ENUM17DpInterlaceFormat8DpSecurebj */
/* Demangled: DpAsyncBlitStream2::setSrcConfig(int, int, int, int, DP_COLOR_ENUM, DP_PROFILE_ENUM, DpInterlaceFormat, DpSecure, bool, unsigned int) */
int _ZN18DpAsyncBlitStream212setSrcConfigEiiii13DP_COLOR_ENUM15DP_PROFILE_ENUM17DpInterlaceFormat8DpSecurebj(void);

/* Symbol: _ZN18PQAlgorithmFactory11s_pInstanceE */
/* Demangled: PQAlgorithmFactory::s_pInstance */
extern void* _ZN18PQAlgorithmFactory11s_pInstanceE;

/* Symbol: _ZN14DpPathTopology10s_engOrderE */
/* Demangled: DpPathTopology::s_engOrder */
extern void* _ZN14DpPathTopology10s_engOrderE;

/* Symbol: _Z25tile_isp_frame_mode_closeP19TILE_REG_MAP_STRUCT */
/* Demangled: tile_isp_frame_mode_close(TILE_REG_MAP_STRUCT*) */
int _Z25tile_isp_frame_mode_closeP19TILE_REG_MAP_STRUCT(void);

/* Symbol: _ZN14DpPathTopologyC1Ev */
/* Demangled: DpPathTopology::DpPathTopology() */
int _ZN14DpPathTopologyC1Ev(void);

/* Symbol: _ZN12DpEngineBase11onWaitFenceEv */
/* Demangled: DpEngineBase::onWaitFence() */
int _ZN12DpEngineBase11onWaitFenceEv(void);

/* Symbol: _ZThn8392_N13DpEngine_VENC10threadLoopEv */
/* Demangled: non-virtual thunk to DpEngine_VENC::threadLoop() */
int _ZThn8392_N13DpEngine_VENC10threadLoopEv(void);

/* Symbol: _ZN11PQDSAdaptor7calRegsEP9PQSessionR9DpCommandR8DpConfigiibPiRi */
/* Demangled: PQDSAdaptor::calRegs(PQSession*, DpCommand&, DpConfig&, int, int, bool, int*, int&) */
int _ZN11PQDSAdaptor7calRegsEP9PQSessionR9DpCommandR8DpConfigiibPiRi(void);

/* Symbol: _ZN8PQAshmem11s_pInstanceE */
/* Demangled: PQAshmem::s_pInstance */
extern void* _ZN8PQAshmem11s_pInstanceE;

/* Symbol: _ZN21PQDREHistogramAdaptorD1Ev */
/* Demangled: PQDREHistogramAdaptor::~PQDREHistogramAdaptor() */
int _ZN21PQDREHistogramAdaptorD1Ev(void);

/* Symbol: _ZN12DpVEncStream14queueDstBufferEiPjS0_i */
/* Demangled: DpVEncStream::queueDstBuffer(int, unsigned int*, unsigned int*, int) */
int _ZN12DpVEncStream14queueDstBufferEiPjS0_i(void);

/* Symbol: _ZN9PQSession12getDREConfigEP12DRE_CONFIG_T */
/* Demangled: PQSession::getDREConfig(DRE_CONFIG_T*) */
int _ZN9PQSession12getDREConfigEP12DRE_CONFIG_T(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev(void);

/* Symbol: _ZN12PQHDRAdaptor11s_pInstanceE */
/* Demangled: PQHDRAdaptor::s_pInstance */
extern void* _ZN12PQHDRAdaptor11s_pInstanceE;

/* Symbol: _ZN12PQDREAdaptorD2Ev */
/* Demangled: PQDREAdaptor::~PQDREAdaptor() */
int _ZN12PQDREAdaptorD2Ev(void);

/* Symbol: _ZN18DpAsyncBlitStream2C2Ev */
/* Demangled: DpAsyncBlitStream2::DpAsyncBlitStream2() */
int _ZN18DpAsyncBlitStream2C2Ev(void);

/* Symbol: _ZN17DpCommandRecorder10beginLabelEv */
/* Demangled: DpCommandRecorder::beginLabel() */
int _ZN17DpCommandRecorder10beginLabelEv(void);

/* Symbol: _ZN12DpEngine_HDR13onAdvanceTileER9DpCommand */
/* Demangled: DpEngine_HDR::onAdvanceTile(DpCommand&) */
int _ZN12DpEngine_HDR13onAdvanceTileER9DpCommand(void);

/* Symbol: _ZN10PQDCConfig12getDebugFlagEb */
/* Demangled: PQDCConfig::getDebugFlag(bool) */
int _ZN10PQDCConfig12getDebugFlagEb(void);

/* Symbol: _ZN14PQColorAdaptor11getInstanceEj */
/* Demangled: PQColorAdaptor::getInstance(unsigned int) */
int _ZN14PQColorAdaptor11getInstanceEj(void);

/* Symbol: _ZN12PQDREAdaptor18onCalculateIspImplEbR9DpPqParamP12DRETopOutputP9CDRETopFW */
/* Demangled: PQDREAdaptor::onCalculateIspImpl(bool, DpPqParam&, DRETopOutput*, CDRETopFW*) */
int _ZN12PQDREAdaptor18onCalculateIspImplEbR9DpPqParamP12DRETopOutputP9CDRETopFW(void);

/* Symbol: _Z37tile_tdr_isp_reg_to_dump_internal_wpeP19TILE_REG_MAP_STRUCTPjS1_ji */
/* Demangled: tile_tdr_isp_reg_to_dump_internal_wpe(TILE_REG_MAP_STRUCT*, unsigned int*, unsigned int*, unsigned int, int) */
int _Z37tile_tdr_isp_reg_to_dump_internal_wpeP19TILE_REG_MAP_STRUCTPjS1_ji(void);

/* Symbol: _ZN17DpBasicBufferPool13setSecureModeE8DpSecure */
/* Demangled: DpBasicBufferPool::setSecureMode(DpSecure) */
int _ZN17DpBasicBufferPool13setSecureModeE8DpSecure(void);

/* Symbol: _ZN14DpCommandQueue5clearEN13DpCommandBase15EVENT_TYPE_ENUME */
/* Demangled: DpCommandQueue::clear(DpCommandBase::EVENT_TYPE_ENUM) */
int _ZN14DpCommandQueue5clearEN13DpCommandBase15EVENT_TYPE_ENUME(void);

/* Symbol: _ZN13DpWrapper_WPE15onReconfigTilesER9DpCommand */
/* Demangled: DpWrapper_WPE::onReconfigTiles(DpCommand&) */
int _ZN13DpWrapper_WPE15onReconfigTilesER9DpCommand(void);

/* Symbol: _ZN9PQSession10getVideoIDEv */
/* Demangled: PQSession::getVideoID() */
int _ZN9PQSession10getVideoIDEv(void);

/* Symbol: _ZN10PQDCConfigD2Ev */
/* Demangled: PQDCConfig::~PQDCConfig() */
int _ZN10PQDCConfigD2Ev(void);

/* Symbol: _ZN8PQAshmem15destroyInstanceEv */
/* Demangled: PQAshmem::destroyInstance() */
int _ZN8PQAshmem15destroyInstanceEv(void);

/* Symbol: _ZN17DpAsyncBlitStream9setDitherEjb */
/* Demangled: DpAsyncBlitStream::setDither(unsigned int, bool) */
int _ZN17DpAsyncBlitStream9setDitherEjb(void);

/* Symbol: _ZNK8DpStream23getReadbackEngineStatusERNSt3__16vectorI19DpReadbackEngines_tNS0_9allocatorIS2_EEEE */
/* Demangled: DpStream::getReadbackEngineStatus(std::__1::vector<DpReadbackEngines_t, std::__1::allocator<DpReadbackEngines_t> >&) const */
int _ZNK8DpStream23getReadbackEngineStatusERNSt3__16vectorI19DpReadbackEngines_tNS0_9allocatorIS2_EEEE(void);

/* Symbol: _ZNK9DpChannel15getIsp2MdpParamEPvPi */
/* Demangled: DpChannel::getIsp2MdpParam(void*, int*) const */
int _ZNK9DpChannel15getIsp2MdpParamEPvPi(void);

/* Symbol: _ZN14DpCommandQueue3dupEN9DpCommand15BLOCK_TYPE_ENUME */
/* Demangled: DpCommandQueue::dup(DpCommand::BLOCK_TYPE_ENUM) */
int _ZN14DpCommandQueue3dupEN9DpCommand15BLOCK_TYPE_ENUME(void);

/* Symbol: _ZN9PQSession9getHDRRefEv */
/* Demangled: PQSession::getHDRRef() */
int _ZN9PQSession9getHDRRefEv(void);

/* Symbol: _ZN8PQConfigD1Ev */
/* Demangled: PQConfig::~PQConfig() */
int _ZN8PQConfigD1Ev(void);

/* Symbol: _ZN8PQAshmem13getAshmemBaseEv */
/* Demangled: PQAshmem::getAshmemBase() */
int _ZN8PQAshmem13getAshmemBaseEv(void);

/* Symbol: _ZTV16DpAutoBufferPool */
/* Demangled: vtable for DpAutoBufferPool */
extern void* _ZTV16DpAutoBufferPool;

/* Symbol: _ZN12DpBlitStream7getPqIDEv */
/* Demangled: DpBlitStream::getPqID() */
int _ZN12DpBlitStream7getPqIDEv(void);

/* Symbol: _ZN17PQReadBackFactoryC2Ev */
/* Demangled: PQReadBackFactory::PQReadBackFactory() */
int _ZN17PQReadBackFactoryC2Ev(void);

/* Symbol: _ZN11PQIspTuning14getTuningValueEPKcRjS2_ */
/* Demangled: PQIspTuning::getTuningValue(char const*, unsigned int&, unsigned int&) */
int _ZN11PQIspTuning14getTuningValueEPKcRjS2_(void);

/* Symbol: RDMA0Reg */
/* Demangled: RDMA0Reg */
extern void* RDMA0Reg;

/* Symbol: _ZN13DpWrapper_ISP13onUpdatePMQOSER9DpCommandRjS2_RiR7timeval */
/* Demangled: DpWrapper_ISP::onUpdatePMQOS(DpCommand&, unsigned int&, unsigned int&, int&, timeval&) */
int _ZN13DpWrapper_ISP13onUpdatePMQOSER9DpCommandRjS2_RiR7timeval(void);

/* Symbol: _ZN8DpDriver16allocatePABufferEjPj */
/* Demangled: DpDriver::allocatePABuffer(unsigned int, unsigned int*) */
int _ZN8DpDriver16allocatePABufferEjPj(void);

/* Symbol: _ZN12DpBlitStream14setOrientationEj */
/* Demangled: DpBlitStream::setOrientation(unsigned int) */
int _ZN12DpBlitStream14setOrientationEj(void);

/* Symbol: _ZN21PQDREHistogramAdaptor11s_pInstanceE */
/* Demangled: PQDREHistogramAdaptor::s_pInstance */
extern void* _ZN21PQDREHistogramAdaptor11s_pInstanceE;

/* Symbol: _ZN16DpAutoBufferPoolD2Ev */
/* Demangled: DpAutoBufferPool::~DpAutoBufferPool() */
int _ZN16DpAutoBufferPoolD2Ev(void);

/* Symbol: _ZTV16DpRingBufferPool */
/* Demangled: vtable for DpRingBufferPool */
extern void* _ZTV16DpRingBufferPool;

/* Symbol: _ZN12DpFragStream11dequeueFragEPiP13DP_COLOR_ENUMPPvS0_S0_S0_S0_S0_S0_b */
/* Demangled: DpFragStream::dequeueFrag(int*, DP_COLOR_ENUM*, void**, int*, int*, int*, int*, int*, int*, bool) */
int _ZN12DpFragStream11dequeueFragEPiP13DP_COLOR_ENUMPPvS0_S0_S0_S0_S0_S0_b(void);

/* Symbol: _ZN8PQConfig18getPQServiceStatusEv */
/* Demangled: PQConfig::getPQServiceStatus() */
int _ZN8PQConfig18getPQServiceStatusEv(void);

/* Symbol: _ZN14DpCommandQueue17getReadbackValuesERj */
/* Demangled: DpCommandQueue::getReadbackValues(unsigned int&) */
int _ZN14DpCommandQueue17getReadbackValuesERj(void);

/* Symbol: _ZN12DpTileEngine20dumpTileAccumulationEv */
/* Demangled: DpTileEngine::dumpTileAccumulation() */
int _ZN12DpTileEngine20dumpTileAccumulationEv(void);

/* Symbol: _ZN13DpEngine_RDMA15onReconfigTilesER9DpCommand */
/* Demangled: DpEngine_RDMA::onReconfigTiles(DpCommand&) */
int _ZN13DpEngine_RDMA15onReconfigTilesER9DpCommand(void);

/* Symbol: VENCReg */
/* Demangled: VENCReg */
extern void* VENCReg;

/* Symbol: _ZN14PQTuningBuffer7isValidEv */
/* Demangled: PQTuningBuffer::isValid() */
int _ZN14PQTuningBuffer7isValidEv(void);

/* Symbol: _ZN12PQRSZAdaptorD2Ev */
/* Demangled: PQRSZAdaptor::~PQRSZAdaptor() */
int _ZN12PQRSZAdaptorD2Ev(void);

/* Symbol: _ZN12PQDREAdaptor10writeBlockER9DpCommandPK14DREVPTopOutputjjjjPiRib */
/* Demangled: PQDREAdaptor::writeBlock(DpCommand&, DREVPTopOutput const*, unsigned int, unsigned int, unsigned int, unsigned int, int*, int&, bool) */
int _ZN12PQDREAdaptor10writeBlockER9DpCommandPK14DREVPTopOutputjjjjPiRib(void);

/* Symbol: _ZN21PQDREHistogramAdaptor11getDREBlockEPjiiiiP13DREVPTopInput */
/* Demangled: PQDREHistogramAdaptor::getDREBlock(unsigned int*, int, int, int, int, DREVPTopInput*) */
int _ZN21PQDREHistogramAdaptor11getDREBlockEPjiiiiP13DREVPTopInput(void);

/* Symbol: _ZN14DpEngine_TDSHP13onAdvanceTileER9DpCommand */
/* Demangled: DpEngine_TDSHP::onAdvanceTile(DpCommand&) */
int _ZN14DpEngine_TDSHP13onAdvanceTileER9DpCommand(void);

/* Symbol: _Z32tile_lut_isp_func_output_disableiP23TILE_FUNC_ENABLE_STRUCTP19TILE_REG_MAP_STRUCT */
/* Demangled: tile_lut_isp_func_output_disable(int, TILE_FUNC_ENABLE_STRUCT*, TILE_REG_MAP_STRUCT*) */
int _Z32tile_lut_isp_func_output_disableiP23TILE_FUNC_ENABLE_STRUCTP19TILE_REG_MAP_STRUCT(void);

/* Symbol: _ZN17DpAsyncBlitStream8getJobIDEv */
/* Demangled: DpAsyncBlitStream::getJobID() */
int _ZN17DpAsyncBlitStream8getJobIDEv(void);

/* Symbol: _ZN12DpVEncStream15dequeueFrameEndEPj */
/* Demangled: DpVEncStream::dequeueFrameEnd(unsigned int*) */
int _ZN12DpVEncStream15dequeueFrameEndEPj(void);

/* Symbol: _ZN10DpTilePath13finishCommandEbyyPc */
/* Demangled: DpTilePath::finishCommand(bool, unsigned long long, unsigned long long, char*) */
int _ZN10DpTilePath13finishCommandEbyyPc(void);

/* Symbol: _ZN14PQColorAdaptor17onConfigSatEngineEP14COLOR_CONFIG_TR9DpCommandRiPi */
/* Demangled: PQColorAdaptor::onConfigSatEngine(COLOR_CONFIG_T*, DpCommand&, int&, int*) */
int _ZN14PQColorAdaptor17onConfigSatEngineEP14COLOR_CONFIG_TR9DpCommandRiPi(void);

/* Symbol: _ZN12DpEngineBase10onPollPortEb */
/* Demangled: DpEngineBase::onPollPort(bool) */
int _ZN12DpEngineBase10onPollPortEb(void);

/* Symbol: _ZN11DpPortAdapt8s_dumpIDE */
/* Demangled: DpPortAdapt::s_dumpID */
extern void* _ZN11DpPortAdapt8s_dumpIDE;

/* Symbol: _ZN13DpWrapper_WPE13onConfigFrameER9DpCommandR8DpConfig */
/* Demangled: DpWrapper_WPE::onConfigFrame(DpCommand&, DpConfig&) */
int _ZN13DpWrapper_WPE13onConfigFrameER9DpCommandR8DpConfig(void);

/* Symbol: _Z38tile_tdr_isp_mask_to_dump_internal_eafP19TILE_REG_MAP_STRUCTPjS1_ */
/* Demangled: tile_tdr_isp_mask_to_dump_internal_eaf(TILE_REG_MAP_STRUCT*, unsigned int*, unsigned int*) */
int _Z38tile_tdr_isp_mask_to_dump_internal_eafP19TILE_REG_MAP_STRUCTPjS1_(void);

/* Symbol: _ZN12DpFragStreamC1Ev */
/* Demangled: DpFragStream::DpFragStream() */
int _ZN12DpFragStreamC1Ev(void);

/* Symbol: _ZN17DpCommandRecorder10markRecordENS_9BlockTypeE */
/* Demangled: DpCommandRecorder::markRecord(DpCommandRecorder::BlockType) */
int _ZN17DpCommandRecorder10markRecordENS_9BlockTypeE(void);

/* Symbol: _ZN17DpCommandRecorderD0Ev */
/* Demangled: DpCommandRecorder::~DpCommandRecorder() */
int _ZN17DpCommandRecorderD0Ev(void);

/* Symbol: _ZN12DpIonHandler13free_internalEv */
/* Demangled: DpIonHandler::free_internal() */
int _ZN12DpIonHandler13free_internalEv(void);

/* Symbol: _ZN12DpMmuHandler12mapSWAddressEv */
/* Demangled: DpMmuHandler::mapSWAddress() */
int _ZN12DpMmuHandler12mapSWAddressEv(void);

/* Symbol: _ZN14DpPathComposer5resetEv */
/* Demangled: DpPathComposer::reset() */
int _ZN14DpPathComposer5resetEv(void);

/* Symbol: _ZN14DpCommandQueue11waitNoClearEN13DpCommandBase15EVENT_TYPE_ENUME */
/* Demangled: DpCommandQueue::waitNoClear(DpCommandBase::EVENT_TYPE_ENUM) */
int _ZN14DpCommandQueue11waitNoClearEN13DpCommandBase15EVENT_TYPE_ENUME(void);

/* Symbol: _ZN13DpWrapper_ISP10onPostProcER9DpCommand */
/* Demangled: DpWrapper_ISP::onPostProc(DpCommand&) */
int _ZN13DpWrapper_ISP10onPostProcER9DpCommand(void);

/* Symbol: _ZN14DpEngine_COLOR15onReconfigTilesER9DpCommand */
/* Demangled: DpEngine_COLOR::onReconfigTiles(DpCommand&) */
int _ZN14DpEngine_COLOR15onReconfigTilesER9DpCommand(void);

/* Symbol: _ZN16DpRingBufferPoolD0Ev */
/* Demangled: DpRingBufferPool::~DpRingBufferPool() */
int _ZN16DpRingBufferPoolD0Ev(void);

/* Symbol: _ZN17DpBasicBufferPool14registerBufferEPjS0_iiPi */
/* Demangled: DpBasicBufferPool::registerBuffer(unsigned int*, unsigned int*, int, int, int*) */
int _ZN17DpBasicBufferPool14registerBufferEPjS0_iiPi(void);

/* Symbol: _ZN14DpCommandQueue4initEv */
/* Demangled: DpCommandQueue::init() */
int _ZN14DpCommandQueue4initEv(void);

/* Symbol: _ZN13DpWrapper_WPE13onUpdatePMQOSER9DpCommandRjS2_R7timeval */
/* Demangled: DpWrapper_WPE::onUpdatePMQOS(DpCommand&, unsigned int&, unsigned int&, timeval&) */
int _ZN13DpWrapper_WPE13onUpdatePMQOSER9DpCommandRjS2_R7timeval(void);

/* Symbol: _ZN12PQDREAdaptor11getInstanceEj */
/* Demangled: PQDREAdaptor::getInstance(unsigned int) */
int _ZN12PQDREAdaptor11getInstanceEj(void);

/* Symbol: _ZN17DpCommandRecorder17appendNumReadbackEjj */
/* Demangled: DpCommandRecorder::appendNumReadback(unsigned int, unsigned int) */
int _ZN17DpCommandRecorder17appendNumReadbackEjj(void);

/* Symbol: _ZN11PQRSZConfig11isUREnabledEb */
/* Demangled: PQRSZConfig::isUREnabled(bool) */
int _ZN11PQRSZConfig11isUREnabledEb(void);

/* Symbol: _ZN12PQHDRAdaptor9s_ALMutexE */
/* Demangled: PQHDRAdaptor::s_ALMutex */
extern void* _ZN12PQHDRAdaptor9s_ALMutexE;

/* Symbol: _ZN21PQDREHistogramAdaptorD2Ev */
/* Demangled: PQDREHistogramAdaptor::~PQDREHistogramAdaptor() */
int _ZN21PQDREHistogramAdaptorD2Ev(void);

/* Symbol: _ZN14DpPathTopologyC2Ev */
/* Demangled: DpPathTopology::DpPathTopology() */
int _ZN14DpPathTopologyC2Ev(void);

/* Symbol: _ZN11DpPortAdapt10bindClientE16CLIENT_TYPE_ENUM */
/* Demangled: DpPortAdapt::bindClient(CLIENT_TYPE_ENUM) */
int _ZN11DpPortAdapt10bindClientE16CLIENT_TYPE_ENUM(void);

/* Symbol: _ZN11DpIspStream19queueBatchSrcBufferEP12DpBufferDescjj */
/* Demangled: DpIspStream::queueBatchSrcBuffer(DpBufferDesc*, unsigned int, unsigned int) */
int _ZN11DpIspStream19queueBatchSrcBufferEP12DpBufferDescjj(void);

/* Symbol: _ZN12DpIonHandler14alloc_internalEj */
/* Demangled: DpIonHandler::alloc_internal(unsigned int) */
int _ZN12DpIonHandler14alloc_internalEj(void);

/* Symbol: _ZN12DpMmuHandler12queryFeatureEv */
/* Demangled: DpMmuHandler::queryFeature() */
int _ZN12DpMmuHandler12queryFeatureEv(void);

/* Symbol: _ZN12PQDREAdaptor16debugDumpTileRegEPK12DREInitParamPK10DREInitRegjjj */
/* Demangled: PQDREAdaptor::debugDumpTileReg(DREInitParam const*, DREInitReg const*, unsigned int, unsigned int, unsigned int) */
int _ZN12PQDREAdaptor16debugDumpTileRegEPK12DREInitParamPK10DREInitRegjjj(void);

/* Symbol: _Z33tile_tdr_isp_reg_to_dump_internalP19TILE_REG_MAP_STRUCTPjS1_ji */
/* Demangled: tile_tdr_isp_reg_to_dump_internal(TILE_REG_MAP_STRUCT*, unsigned int*, unsigned int*, unsigned int, int) */
int _Z33tile_tdr_isp_reg_to_dump_internalP19TILE_REG_MAP_STRUCTPjS1_ji(void);

/* Symbol: _ZN9PQSession13setCurActPosXEj */
/* Demangled: PQSession::setCurActPosX(unsigned int) */
int _ZN9PQSession13setCurActPosXEj(void);

/* Symbol: _ZN10PQDSConfig11getDSConfigEPP11DS_CONFIG_TiR13GlobalPQParambi */
/* Demangled: PQDSConfig::getDSConfig(DS_CONFIG_T**, int, GlobalPQParam&, bool, int) */
int _ZN10PQDSConfig11getDSConfigEPP11DS_CONFIG_TiR13GlobalPQParambi(void);

/* Symbol: _ZN16PQSessionManager15deletePQSessionEP19PQSessionListHandle */
/* Demangled: PQSessionManager::deletePQSession(PQSessionListHandle*) */
int _ZN16PQSessionManager15deletePQSessionEP19PQSessionListHandle(void);

/* Symbol: _ZN12PQDREAdaptor17debugDumpFrameRegEPK14DREVPTopOutputPK14DREVPInitParamPK12DREVPInitRegj */
/* Demangled: PQDREAdaptor::debugDumpFrameReg(DREVPTopOutput const*, DREVPInitParam const*, DREVPInitReg const*, unsigned int) */
int _ZN12PQDREAdaptor17debugDumpFrameRegEPK14DREVPTopOutputPK14DREVPInitParamPK12DREVPInitRegj(void);

/* Symbol: _ZTV7ListPtrI11DpPortAdaptE */
/* Demangled: vtable for ListPtr<DpPortAdapt> */
extern void* _ZTV7ListPtrI11DpPortAdaptE;

/* Symbol: _ZN14DpCommandQueue11getSyncModeEv */
/* Demangled: DpCommandQueue::getSyncMode() */
int _ZN14DpCommandQueue11getSyncModeEv(void);

/* Symbol: _ZTV12DpEngine_AAL */
/* Demangled: vtable for DpEngine_AAL */
extern void* _ZTV12DpEngine_AAL;

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::sync() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv(void);

/* Symbol: _ZN13PQColorConfig25translateTransitionOutputEPv */
/* Demangled: PQColorConfig::translateTransitionOutput(void*) */
int _ZN13PQColorConfig25translateTransitionOutputEPv(void);

/* Symbol: _ZN12PQHDRAdaptor20onCalculateDualVideoEP9PQSessionP9DHDRINPUTP10DHDROUTPUTR8DpConfigP24_DP_VDEC_DRV_COLORDESC_TP31_DP_VDEC_DRV_DYNAMIC_METADATA_T */
/* Demangled: PQHDRAdaptor::onCalculateDualVideo(PQSession*, DHDRINPUT*, DHDROUTPUT*, DpConfig&, _DP_VDEC_DRV_COLORDESC_T*, _DP_VDEC_DRV_DYNAMIC_METADATA_T*) */
int _ZN12PQHDRAdaptor20onCalculateDualVideoEP9PQSessionP9DHDRINPUTP10DHDROUTPUTR8DpConfigP24_DP_VDEC_DRV_COLORDESC_TP31_DP_VDEC_DRV_DYNAMIC_METADATA_T(void);

/* Symbol: _ZN11DpIspStream11startStreamEP7timevali */
/* Demangled: DpIspStream::startStream(timeval*, int) */
int _ZN11DpIspStream11startStreamEP7timevali(void);

/* Symbol: _ZN9PQSession11getDCConfigEP11DC_CONFIG_T */
/* Demangled: PQSession::getDCConfig(DC_CONFIG_T*) */
int _ZN9PQSession11getDCConfigEP11DC_CONFIG_T(void);

/* Symbol: _ZN12PQHDRAdaptor20initCcorrInitParamInEP9DHDRINPUTbR9DpPqParam */
/* Demangled: PQHDRAdaptor::initCcorrInitParamIn(DHDRINPUT*, bool, DpPqParam&) */
int _ZN12PQHDRAdaptor20initCcorrInitParamInEP9DHDRINPUTbR9DpPqParam(void);

/* Symbol: _ZN12DpBlitStream12setSrcBufferEPPvPjj */
/* Demangled: DpBlitStream::setSrcBuffer(void**, unsigned int*, unsigned int) */
int _ZN12DpBlitStream12setSrcBufferEPPvPjj(void);

/* Symbol: _ZTV13DpWrapper_WPE */
/* Demangled: vtable for DpWrapper_WPE */
extern void* _ZTV13DpWrapper_WPE;

/* Symbol: _ZN8PQConfigD2Ev */
/* Demangled: PQConfig::~PQConfig() */
int _ZN8PQConfigD2Ev(void);

/* Symbol: _ZN21PQDREHistogramAdaptor14storeDREOutputEPvjPK12DRETopOutput */
/* Demangled: PQDREHistogramAdaptor::storeDREOutput(void*, unsigned int, DRETopOutput const*) */
int _ZN21PQDREHistogramAdaptor14storeDREOutputEPvjPK12DRETopOutput(void);

/* Symbol: _ZN14DpEngine_TDSHP12onConfigTileER9DpCommand */
/* Demangled: DpEngine_TDSHP::onConfigTile(DpCommand&) */
int _ZN14DpEngine_TDSHP12onConfigTileER9DpCommand(void);

/* Symbol: _ZN12DpMmuHandler11s_IONHandleE */
/* Demangled: DpMmuHandler::s_IONHandle */
extern void* _ZN12DpMmuHandler11s_IONHandleE;

/* Symbol: _ZN8DpDriver11checkHandleEv */
/* Demangled: DpDriver::checkHandle() */
int _ZN8DpDriver11checkHandleEv(void);

/* Symbol: _ZN11PQDREConfigC1Ev */
/* Demangled: PQDREConfig::PQDREConfig() */
int _ZN11PQDREConfigC1Ev(void);

/* Symbol: _ZN12DpIonHandlerC1EPvj */
/* Demangled: DpIonHandler::DpIonHandler(void*, unsigned int) */
int _ZN12DpIonHandlerC1EPvj(void);

/* Symbol: _ZN11PQIspTuning15destroyInstanceEv */
/* Demangled: PQIspTuning::destroyInstance() */
int _ZN11PQIspTuning15destroyInstanceEv(void);

/* Symbol: _ZN17DpCommandRecorder14getDREReadbackEv */
/* Demangled: DpCommandRecorder::getDREReadback() */
int _ZN17DpCommandRecorder14getDREReadbackEv(void);

/* Symbol: _ZN12DpVEncStream14setPQParameterEiPK9DpPqParam */
/* Demangled: DpVEncStream::setPQParameter(int, DpPqParam const*) */
int _ZN12DpVEncStream14setPQParameterEiPK9DpPqParam(void);

/* Symbol: _ZN16DpBufferPoolBase13dumpFenceInfoEi */
/* Demangled: DpBufferPoolBase::dumpFenceInfo(int) */
int _ZN16DpBufferPoolBase13dumpFenceInfoEi(void);

/* Symbol: _ZN12DpBlitStream12setDstConfigEii13DP_COLOR_ENUM17DpInterlaceFormatP6DpRect */
/* Demangled: DpBlitStream::setDstConfig(int, int, DP_COLOR_ENUM, DpInterlaceFormat, DpRect*) */
int _ZN12DpBlitStream12setDstConfigEii13DP_COLOR_ENUM17DpInterlaceFormatP6DpRect(void);

/* Symbol: _ZN11DpIspStream10setSrcCropEiiiiiii */
/* Demangled: DpIspStream::setSrcCrop(int, int, int, int, int, int, int) */
int _ZN11DpIspStream10setSrcCropEiiiiiii(void);

/* Symbol: _ZN14DpCommandQueue5flushEbPyPPc */
/* Demangled: DpCommandQueue::flush(bool, unsigned long long*, char**) */
int _ZN14DpCommandQueue5flushEbPyPPc(void);

/* Symbol: _ZN11PQDCAdaptor11s_pInstanceE */
/* Demangled: PQDCAdaptor::s_pInstance */
extern void* _ZN11PQDCAdaptor11s_pInstanceE;

/* Symbol: _ZN8DpStream17appendNumReadbackEjj */
/* Demangled: DpStream::appendNumReadback(unsigned int, unsigned int) */
int _ZN8DpStream17appendNumReadbackEjj(void);

/* Symbol: _ZTV14DpPathComposer */
/* Demangled: vtable for DpPathComposer */
extern void* _ZTV14DpPathComposer;

/* Symbol: _ZN9DpChannel12resetChannelEv */
/* Demangled: DpChannel::resetChannel() */
int _ZN9DpChannel12resetChannelEv(void);

/* Symbol: _ZNK11DpPortAdapt12getParameterEPvPiPjj */
/* Demangled: DpPortAdapt::getParameter(void*, int*, unsigned int*, unsigned int) const */
int _ZNK11DpPortAdapt12getParameterEPvPiPjj(void);

/* Symbol: _ZN13DpPmemHandlerC1EPvjj */
/* Demangled: DpPmemHandler::DpPmemHandler(void*, unsigned int, unsigned int) */
int _ZN13DpPmemHandlerC1EPvjj(void);

/* Symbol: _ZN12PQHDRAdaptor12setHDROutputEP10DHDROUTPUT */
/* Demangled: PQHDRAdaptor::setHDROutput(DHDROUTPUT*) */
int _ZN12PQHDRAdaptor12setHDROutputEP10DHDROUTPUT(void);

/* Symbol: _ZN12DpFragStreamC2Ev */
/* Demangled: DpFragStream::DpFragStream() */
int _ZN12DpFragStreamC2Ev(void);

/* Symbol: _ZN17DpCommandRecorderD1Ev */
/* Demangled: DpCommandRecorder::~DpCommandRecorder() */
int _ZN17DpCommandRecorderD1Ev(void);

/* Symbol: _ZN16PQSessionManager24m_CapturepreAAL1BufferIdE */
/* Demangled: PQSessionManager::m_CapturepreAAL1BufferId */
extern void* _ZN16PQSessionManager24m_CapturepreAAL1BufferIdE;

/* Symbol: _ZN11PQHDRConfig20getExternalPanelNitsEb */
/* Demangled: PQHDRConfig::getExternalPanelNits(bool) */
int _ZN11PQHDRConfig20getExternalPanelNitsEb(void);

/* Symbol: _ZN12PQDREAdaptor25setDRETransPrefloatBufferEP12DREsharedatab */
/* Demangled: PQDREAdaptor::setDRETransPrefloatBuffer(DREsharedata*, bool) */
int _ZN12PQDREAdaptor25setDRETransPrefloatBufferEP12DREsharedatab(void);

/* Symbol: _ZN11PQDREConfig14getDemoWindowXEb */
/* Demangled: PQDREConfig::getDemoWindowX(bool) */
int _ZN11PQDREConfig14getDemoWindowXEb(void);

/* Symbol: _ZN16DpAutoBufferPool13acquireBufferEPiPPvPjb */
/* Demangled: DpAutoBufferPool::acquireBuffer(int*, void**, unsigned int*, bool) */
int _ZN16DpAutoBufferPool13acquireBufferEPiPPvPjb(void);

/* Symbol: _ZN9PQSession12setHistogramEPjjj */
/* Demangled: PQSession::setHistogram(unsigned int*, unsigned int, unsigned int) */
int _ZN9PQSession12setHistogramEPjjj(void);

/* Symbol: _ZN11DpPortAdaptC1EiP9DpChannel14PORT_TYPE_ENUM13DP_COLOR_ENUMiiiiibyjbbbP16DpBufferPoolBase15DP_PROFILE_ENUM8DpSecurebPK13DpColorMatrixPv */
/* Demangled: DpPortAdapt::DpPortAdapt(int, DpChannel*, PORT_TYPE_ENUM, DP_COLOR_ENUM, int, int, int, int, int, bool, unsigned long long, unsigned int, bool, bool, bool, DpBufferPoolBase*, DP_PROFILE_ENUM, DpSecure, bool, DpColorMatrix const*, void*) */
int _ZN11DpPortAdaptC1EiP9DpChannel14PORT_TYPE_ENUM13DP_COLOR_ENUMiiiiibyjbbbP16DpBufferPoolBase15DP_PROFILE_ENUM8DpSecurebPK13DpColorMatrixPv(void);

/* Symbol: _ZN12DpMmuHandler11s_instMutexE */
/* Demangled: DpMmuHandler::s_instMutex */
extern void* _ZN12DpMmuHandler11s_instMutexE;

/* Symbol: _ZN16DpRingBufferPoolD1Ev */
/* Demangled: DpRingBufferPool::~DpRingBufferPool() */
int _ZN16DpRingBufferPoolD1Ev(void);

/* Symbol: _ZN17DpCommandRecorder17getReadbackValuesERj */
/* Demangled: DpCommandRecorder::getReadbackValues(unsigned int&) */
int _ZN17DpCommandRecorder17getReadbackValuesERj(void);

/* Symbol: _ZN13DpEngine_VENC14onInitTileCalcEP17TILE_PARAM_STRUCT */
/* Demangled: DpEngine_VENC::onInitTileCalc(TILE_PARAM_STRUCT*) */
int _ZN13DpEngine_VENC14onInitTileCalcEP17TILE_PARAM_STRUCT(void);

/* Symbol: _ZTV13DpEngine_VENC */
/* Demangled: vtable for DpEngine_VENC */
extern void* _ZTV13DpEngine_VENC;

/* Symbol: _ZN8PQConfig13setDebugLevelEj */
/* Demangled: PQConfig::setDebugLevel(unsigned int) */
int _ZN8PQConfig13setDebugLevelEj(void);

/* Symbol: _ZN8DpStream10initializeEv */
/* Demangled: DpStream::initialize() */
int _ZN8DpStream10initializeEv(void);

/* Symbol: _ZN12DpVEncStream13setPortMatrixEiP13DpColorMatrix */
/* Demangled: DpVEncStream::setPortMatrix(int, DpColorMatrix*) */
int _ZN12DpVEncStream13setPortMatrixEiP13DpColorMatrix(void);

/* Symbol: _ZN18PQAlgorithmFactory6getDREEj */
/* Demangled: PQAlgorithmFactory::getDRE(unsigned int) */
int _ZN18PQAlgorithmFactory6getDREEj(void);

/* Symbol: _ZN12DpIonHandler18mapSWAddressBySizeEj */
/* Demangled: DpIonHandler::mapSWAddressBySize(unsigned int) */
int _ZN12DpIonHandler18mapSWAddressBySizeEj(void);

/* Symbol: _ZN13DpPmemHandler12mapSWAddressEv */
/* Demangled: DpPmemHandler::mapSWAddress() */
int _ZN13DpPmemHandler12mapSWAddressEv(void);

/* Symbol: SCL0Reg */
/* Demangled: SCL0Reg */
extern void* SCL0Reg;

/* Symbol: _ZN12DpEngine_SCL9onCalcRszER9DpCommandP9PQSessionR8DpConfig */
/* Demangled: DpEngine_SCL::onCalcRsz(DpCommand&, PQSession*, DpConfig&) */
int _ZN12DpEngine_SCL9onCalcRszER9DpCommandP9PQSessionR8DpConfig(void);

/* Symbol: _ZN9PQSession14getColorConfigEPP14COLOR_CONFIG_T */
/* Demangled: PQSession::getColorConfig(COLOR_CONFIG_T**) */
int _ZN9PQSession14getColorConfigEPP14COLOR_CONFIG_T(void);

/* Symbol: _ZN9PQSession15getDREAvailableEv */
/* Demangled: PQSession::getDREAvailable() */
int _ZN9PQSession15getDREAvailableEv(void);

/* Symbol: _ZN12PQHDRAdaptor13getPrePipeNumEb */
/* Demangled: PQHDRAdaptor::getPrePipeNum(bool) */
int _ZN12PQHDRAdaptor13getPrePipeNumEb(void);

/* Symbol: _ZN12PQDREAdaptor11dumpFWSWRegEjP10DpPqConfigP11CDREVPTopFWP9CDRETopFW */
/* Demangled: PQDREAdaptor::dumpFWSWReg(unsigned int, DpPqConfig*, CDREVPTopFW*, CDRETopFW*) */
int _ZN12PQDREAdaptor11dumpFWSWRegEjP10DpPqConfigP11CDREVPTopFWP9CDRETopFW(void);

/* Symbol: _Z27tile_fprint_platform_configPK23ISP_TPIPE_CONFIG_STRUCTP19TILE_REG_MAP_STRUCTPKcS5_S5_S5_S5_S5_ */
/* Demangled: tile_fprint_platform_config(ISP_TPIPE_CONFIG_STRUCT const*, TILE_REG_MAP_STRUCT*, char const*, char const*, char const*, char const*, char const*, char const*) */
int _Z27tile_fprint_platform_configPK23ISP_TPIPE_CONFIG_STRUCTP19TILE_REG_MAP_STRUCTPKcS5_S5_S5_S5_S5_(void);

/* Symbol: _ZN17DpCommandRecorder10appendMetaEtjjj */
/* Demangled: DpCommandRecorder::appendMeta(unsigned short, unsigned int, unsigned int, unsigned int) */
int _ZN17DpCommandRecorder10appendMetaEtjjj(void);

/* Symbol: _ZN21PQDREHistogramAdaptor13getBufferDataEPvjjPbP7HISTPOSPj */
/* Demangled: PQDREHistogramAdaptor::getBufferData(void*, unsigned int, unsigned int, bool*, HISTPOS*, unsigned int*) */
int _ZN21PQDREHistogramAdaptor13getBufferDataEPvjjPbP7HISTPOSPj(void);

/* Symbol: _ZN14DpEngine_TDSHP13onConfigFrameER9DpCommandR8DpConfig */
/* Demangled: DpEngine_TDSHP::onConfigFrame(DpCommand&, DpConfig&) */
int _ZN14DpEngine_TDSHP13onConfigFrameER9DpCommandR8DpConfig(void);

/* Symbol: _ZN17DpCommandRecorder12setRegDstNumEi */
/* Demangled: DpCommandRecorder::setRegDstNum(int) */
int _ZN17DpCommandRecorder12setRegDstNumEi(void);

/* Symbol: _ZN18PQAlgorithmFactory11getInstanceEv */
/* Demangled: PQAlgorithmFactory::getInstance() */
int _ZN18PQAlgorithmFactory11getInstanceEv(void);

/* Symbol: _ZN14DpPathTopology12getEngUsagesEv */
/* Demangled: DpPathTopology::getEngUsages() */
int _ZN14DpPathTopology12getEngUsagesEv(void);

/* Symbol: _Z27tile_init_isp_func_propertyP22TILE_FUNC_BLOCK_STRUCTP19TILE_REG_MAP_STRUCT */
/* Demangled: tile_init_isp_func_property(TILE_FUNC_BLOCK_STRUCT*, TILE_REG_MAP_STRUCT*) */
int _Z27tile_init_isp_func_propertyP22TILE_FUNC_BLOCK_STRUCTP19TILE_REG_MAP_STRUCT(void);

/* Symbol: _ZN6DpSync11createFenceERij */
/* Demangled: DpSync::createFence(int&, unsigned int) */
int _ZN6DpSync11createFenceERij(void);

/* Symbol: _ZN9PQSession15_deleteDCHandleEv */
/* Demangled: PQSession::_deleteDCHandle() */
int _ZN9PQSession15_deleteDCHandleEv(void);

/* Symbol: _ZN11PQDCAdaptor18ADL_writeLumaCurveER9DpCommandRK9ADLOutputRiPi */
/* Demangled: PQDCAdaptor::ADL_writeLumaCurve(DpCommand&, ADLOutput const&, int&, int*) */
int _ZN11PQDCAdaptor18ADL_writeLumaCurveER9DpCommandRK9ADLOutputRiPi(void);

/* Symbol: _ZTVNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE */
/* Demangled: vtable for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern void* _ZTVNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE;

/* Symbol: _ZN12PQDREAdaptor16debugDumpTileRegEPK14DREVPInitParamPK12DREVPInitRegjjj */
/* Demangled: PQDREAdaptor::debugDumpTileReg(DREVPInitParam const*, DREVPInitReg const*, unsigned int, unsigned int, unsigned int) */
int _ZN12PQDREAdaptor16debugDumpTileRegEPK14DREVPInitParamPK12DREVPInitRegjjj(void);

/* Symbol: _ZN13DpPmemHandler12queryFeatureEv */
/* Demangled: DpPmemHandler::queryFeature() */
int _ZN13DpPmemHandler12queryFeatureEv(void);

/* Symbol: _ZN11PQIspTuningC1Ev */
/* Demangled: PQIspTuning::PQIspTuning() */
int _ZN11PQIspTuningC1Ev(void);

/* Symbol: _ZN14DpPathTopology11connectEdgeEiiRA25_i */
/* Demangled: DpPathTopology::connectEdge(int, int, int (&) [25]) */
int _ZN14DpPathTopology11connectEdgeEiiRA25_i(void);

/* Symbol: _Z28tile_module_sim_isp_lut_funcPiS_P23TILE_FUNC_ENABLE_STRUCTP22TILE_FUNC_BLOCK_STRUCTP19TILE_REG_MAP_STRUCT */
/* Demangled: tile_module_sim_isp_lut_func(int*, int*, TILE_FUNC_ENABLE_STRUCT*, TILE_FUNC_BLOCK_STRUCT*, TILE_REG_MAP_STRUCT*) */
int _Z28tile_module_sim_isp_lut_funcPiS_P23TILE_FUNC_ENABLE_STRUCTP22TILE_FUNC_BLOCK_STRUCTP19TILE_REG_MAP_STRUCT(void);

/* Symbol: _ZN11PQDREConfigC2Ev */
/* Demangled: PQDREConfig::PQDREConfig() */
int _ZN11PQDREConfigC2Ev(void);

/* Symbol: _ZN8DpStreamC1E16STREAM_TYPE_ENUM */
/* Demangled: DpStream::DpStream(STREAM_TYPE_ENUM) */
int _ZN8DpStreamC1E16STREAM_TYPE_ENUM(void);

/* Symbol: _ZN12DpVEncStream14queueSrcBufferEPPvPjS2_i */
/* Demangled: DpVEncStream::queueSrcBuffer(void**, unsigned int*, unsigned int*, int) */
int _ZN12DpVEncStream14queueSrcBufferEPPvPjS2_i(void);

/* Symbol: _ZN17DpCommandRecorder8dupLabelEj */
/* Demangled: DpCommandRecorder::dupLabel(unsigned int) */
int _ZN17DpCommandRecorder8dupLabelEj(void);

/* Symbol: _ZN13DpEngine_RDMA13onAdvanceTileER9DpCommand */
/* Demangled: DpEngine_RDMA::onAdvanceTile(DpCommand&) */
int _ZN13DpEngine_RDMA13onAdvanceTileER9DpCommand(void);

/* Symbol: _ZN12DpEngine_SCL12onInitEngineER9DpCommand */
/* Demangled: DpEngine_SCL::onInitEngine(DpCommand&) */
int _ZN12DpEngine_SCL12onInitEngineER9DpCommand(void);

/* Symbol: _ZN13PQColorConfigC1Ev */
/* Demangled: PQColorConfig::PQColorConfig() */
int _ZN13PQColorConfigC1Ev(void);

/* Symbol: _ZTV12DpEngineNodeI12DpTileEngineE */
/* Demangled: vtable for DpEngineNode<DpTileEngine> */
extern void* _ZTV12DpEngineNodeI12DpTileEngineE;

/* Symbol: _Z27tpipe_print_platform_configPK23ISP_TPIPE_CONFIG_STRUCT */
/* Demangled: tpipe_print_platform_config(ISP_TPIPE_CONFIG_STRUCT const*) */
int _Z27tpipe_print_platform_configPK23ISP_TPIPE_CONFIG_STRUCT(void);

/* Symbol: _Z30tile_init_isp_func_subrdma_tdrP24TILE_FUNC_SUBRDMA_STRUCTP19TILE_REG_MAP_STRUCT */
/* Demangled: tile_init_isp_func_subrdma_tdr(TILE_FUNC_SUBRDMA_STRUCT*, TILE_REG_MAP_STRUCT*) */
int _Z30tile_init_isp_func_subrdma_tdrP24TILE_FUNC_SUBRDMA_STRUCTP19TILE_REG_MAP_STRUCT(void);

/* Symbol: _ZN16PQSessionManager16destroyPQSessionEj */
/* Demangled: PQSessionManager::destroyPQSession(unsigned int) */
int _ZN16PQSessionManager16destroyPQSessionEj(void);

/* Symbol: _ZN14DpCommandQueue4readEjjPii */
/* Demangled: DpCommandQueue::read(unsigned int, unsigned int, int*, int) */
int _ZN14DpCommandQueue4readEjjPii(void);

/* Symbol: _ZN12DpEngineBase11configFrameER9DpCommandR8DpConfig */
/* Demangled: DpEngineBase::configFrame(DpCommand&, DpConfig&) */
int _ZN12DpEngineBase11configFrameER9DpCommandR8DpConfig(void);

/* Symbol: _ZTV13DpEngine_WPEI */
/* Demangled: vtable for DpEngine_WPEI */
extern void* _ZTV13DpEngine_WPEI;

/* Symbol: _ZN11DpIspStream13setFlipStatusEib */
/* Demangled: DpIspStream::setFlipStatus(int, bool) */
int _ZN11DpIspStream13setFlipStatusEib(void);

/* Symbol: IMG2O2Reg */
/* Demangled: IMG2O2Reg */
extern void* IMG2O2Reg;

/* Symbol: _ZN16DpAutoBufferPool13dequeueBufferEPiPPvPjb */
/* Demangled: DpAutoBufferPool::dequeueBuffer(int*, void**, unsigned int*, bool) */
int _ZN16DpAutoBufferPool13dequeueBufferEPiPPvPjb(void);

/* Symbol: _ZN12DpFragStream9startFragEPjbP7timeval */
/* Demangled: DpFragStream::startFrag(unsigned int*, bool, timeval*) */
int _ZN12DpFragStream9startFragEPjbP7timeval(void);

/* Symbol: _ZN17DpCommandRecorderD2Ev */
/* Demangled: DpCommandRecorder::~DpCommandRecorder() */
int _ZN17DpCommandRecorderD2Ev(void);

/* Symbol: _ZN9PQSession13getPrePipeNumEPj */
/* Demangled: PQSession::getPrePipeNum(unsigned int*) */
int _ZN9PQSession13getPrePipeNumEPj(void);

/* Symbol: _ZN11PQDCAdaptor17isADLVideoIDValidEi */
/* Demangled: PQDCAdaptor::isADLVideoIDValid(int) */
int _ZN11PQDCAdaptor17isADLVideoIDValidEi(void);

/* Symbol: _ZN17DpBasicBufferPoolD0Ev */
/* Demangled: DpBasicBufferPool::~DpBasicBufferPool() */
int _ZN17DpBasicBufferPoolD0Ev(void);

/* Symbol: _ZN6DpSync6wakeupEj */
/* Demangled: DpSync::wakeup(unsigned int) */
int _ZN6DpSync6wakeupEj(void);

/* Symbol: _ZN11PQDSAdaptor13tuningDSInputEP7DSInputi */
/* Demangled: PQDSAdaptor::tuningDSInput(DSInput*, int) */
int _ZN11PQDSAdaptor13tuningDSInputEP7DSInputi(void);

/* Symbol: _ZN14PQTuningBufferC1E17ProxyTuningBuffer */
/* Demangled: PQTuningBuffer::PQTuningBuffer(ProxyTuningBuffer) */
int _ZN14PQTuningBufferC1E17ProxyTuningBuffer(void);

/* Symbol: _ZN13PQColorConfig14m_ColorTableAIE */
/* Demangled: PQColorConfig::m_ColorTableAI */
extern void* _ZN13PQColorConfig14m_ColorTableAIE;

/* Symbol: _ZN16DpRingBufferPoolD2Ev */
/* Demangled: DpRingBufferPool::~DpRingBufferPool() */
int _ZN16DpRingBufferPoolD2Ev(void);

/* Symbol: _ZN16PQSessionManager23getAALPrePipeNumCaptureEPj */
/* Demangled: PQSessionManager::getAALPrePipeNumCapture(unsigned int*) */
int _ZN16PQSessionManager23getAALPrePipeNumCaptureEPj(void);

/* Symbol: _ZN11PQDSAdaptorC1Ej */
/* Demangled: PQDSAdaptor::PQDSAdaptor(unsigned int) */
int _ZN11PQDSAdaptorC1Ej(void);

/* Symbol: _ZN14DpEngine_COLOR12onInitEngineER9DpCommand */
/* Demangled: DpEngine_COLOR::onInitEngine(DpCommand&) */
int _ZN14DpEngine_COLOR12onInitEngineER9DpCommand(void);

/* Symbol: _Z21tile_for_comp_resizerP35TILE_RESIZER_FORWARD_CAL_ARG_STRUCTP22TILE_FUNC_BLOCK_STRUCTP36TILE_RESIZER_BACKWARD_CAL_ARG_STRUCT */
/* Demangled: tile_for_comp_resizer(TILE_RESIZER_FORWARD_CAL_ARG_STRUCT*, TILE_FUNC_BLOCK_STRUCT*, TILE_RESIZER_BACKWARD_CAL_ARG_STRUCT*) */
int _Z21tile_for_comp_resizerP35TILE_RESIZER_FORWARD_CAL_ARG_STRUCTP22TILE_FUNC_BLOCK_STRUCTP36TILE_RESIZER_BACKWARD_CAL_ARG_STRUCT(void);

/* Symbol: _ZN11DpIspStream10setSrcCropEiiiiiiiii */
/* Demangled: DpIspStream::setSrcCrop(int, int, int, int, int, int, int, int, int) */
int _ZN11DpIspStream10setSrcCropEiiiiiiiii(void);

/* Symbol: _ZN10DpTilePath12onConfigTileER9DpCommand */
/* Demangled: DpTilePath::onConfigTile(DpCommand&) */
int _ZN10DpTilePath12onConfigTileER9DpCommand(void);

/* Symbol: _ZN9PQSession32removeUselessHDRWaitHistListNodeEj */
/* Demangled: PQSession::removeUselessHDRWaitHistListNode(unsigned int) */
int _ZN9PQSession32removeUselessHDRWaitHistListNodeEj(void);

/* Symbol: _ZN18PQAlgorithmAdaptorC2E17ProxyTuningBufferS0_S0_ */
/* Demangled: PQAlgorithmAdaptor::PQAlgorithmAdaptor(ProxyTuningBuffer, ProxyTuningBuffer, ProxyTuningBuffer) */
int _ZN18PQAlgorithmAdaptorC2E17ProxyTuningBufferS0_S0_(void);

/* Symbol: _Z16backward_cub_acciiiiiiiiiRiS_ */
/* Demangled: backward_cub_acc(int, int, int, int, int, int, int, int, int, int&, int&) */
int _Z16backward_cub_acciiiiiiiiiRiS_(void);

/* Symbol: _ZN13DpPathControlC2EP8DpStream */
/* Demangled: DpPathControl::DpPathControl(DpStream*) */
int _ZN13DpPathControlC2EP8DpStream(void);

/* Symbol: _ZN11DpPortAdapt13dumpDebugInfoE16CLIENT_TYPE_ENUM */
/* Demangled: DpPortAdapt::dumpDebugInfo(CLIENT_TYPE_ENUM) */
int _ZN11DpPortAdapt13dumpDebugInfoE16CLIENT_TYPE_ENUM(void);

/* Symbol: _ZNK11DpPortAdapt12getTargetROIEPiS0_S0_S0_S0_ */
/* Demangled: DpPortAdapt::getTargetROI(int*, int*, int*, int*, int*) const */
int _ZNK11DpPortAdapt12getTargetROIEPiS0_S0_S0_S0_(void);

/* Symbol: _ZTV13DpEngine_WPEO */
/* Demangled: vtable for DpEngine_WPEO */
extern void* _ZTV13DpEngine_WPEO;

/* Symbol: _ZN16DpRingBufferPool15getHWBaseWithIDEiiPjS0_ */
/* Demangled: DpRingBufferPool::getHWBaseWithID(int, int, unsigned int*, unsigned int*) */
int _ZN16DpRingBufferPool15getHWBaseWithIDEiiPjS0_(void);

/* Symbol: _ZN16PQSessionManager11getInstanceEv */
/* Demangled: PQSessionManager::getInstance() */
int _ZN16PQSessionManager11getInstanceEv(void);

/* Symbol: _Z12utilWriteBMPPKcPvS1_S1_13DP_COLOR_ENUMiiii */
/* Demangled: utilWriteBMP(char const*, void*, void*, void*, DP_COLOR_ENUM, int, int, int, int) */
int _Z12utilWriteBMPPKcPvS1_S1_13DP_COLOR_ENUMiiii(void);

/* Symbol: _ZN12PQDREAdaptor10writeBlockER9DpCommandPK12DRETopOutputjjjjPiRib */
/* Demangled: PQDREAdaptor::writeBlock(DpCommand&, DRETopOutput const*, unsigned int, unsigned int, unsigned int, unsigned int, int*, int&, bool) */
int _ZN12PQDREAdaptor10writeBlockER9DpCommandPK12DRETopOutputjjjjPiRib(void);

/* Symbol: _Z38tile_tdr_isp_mask_to_dump_internal_bldP19TILE_REG_MAP_STRUCTPjS1_ */
/* Demangled: tile_tdr_isp_mask_to_dump_internal_bld(TILE_REG_MAP_STRUCT*, unsigned int*, unsigned int*) */
int _Z38tile_tdr_isp_mask_to_dump_internal_bldP19TILE_REG_MAP_STRUCTPjS1_(void);

/* Symbol: _ZN11DpIspStream14queueSrcBufferEiPjj */
/* Demangled: DpIspStream::queueSrcBuffer(int, unsigned int*, unsigned int) */
int _ZN11DpIspStream14queueSrcBufferEiPjj(void);

/* Symbol: _ZN16PQSessionManagerC1Ev */
/* Demangled: PQSessionManager::PQSessionManager() */
int _ZN16PQSessionManagerC1Ev(void);

/* Symbol: _ZN21PQDREHistogramAdaptor15destroyInstanceEv */
/* Demangled: PQDREHistogramAdaptor::destroyInstance() */
int _ZN21PQDREHistogramAdaptor15destroyInstanceEv(void);

/* Symbol: _ZN9DpCommand7FactoryEP10DpPathBasej */
/* Demangled: DpCommand::Factory(DpPathBase*, unsigned int) */
int _ZN9DpCommand7FactoryEP10DpPathBasej(void);

/* Symbol: _ZN16PQSessionManager15destroyInstanceEv */
/* Demangled: PQSessionManager::destroyInstance() */
int _ZN16PQSessionManager15destroyInstanceEv(void);

/* Symbol: _ZN21PQDREHistogramAdaptor11getDREBlockEPjiiiiP11DRETopInput */
/* Demangled: PQDREHistogramAdaptor::getDREBlock(unsigned int*, int, int, int, int, DRETopInput*) */
int _ZN21PQDREHistogramAdaptor11getDREBlockEPjiiiiP11DRETopInput(void);

/* Symbol: _ZN16DpBufferPoolBase15getHWBaseWithIDEiiPjS0_ */
/* Demangled: DpBufferPoolBase::getHWBaseWithID(int, int, unsigned int*, unsigned int*) */
int _ZN16DpBufferPoolBase15getHWBaseWithIDEiiPjS0_(void);

/* Symbol: _Z19dpProfilerResetInfov */
/* Demangled: dpProfilerResetInfo() */
int _Z19dpProfilerResetInfov(void);

/* Symbol: _ZN11PQIspTuningC2Ev */
/* Demangled: PQIspTuning::PQIspTuning() */
int _ZN11PQIspTuningC2Ev(void);

/* Symbol: _ZN12PQRSZAdaptor13dumpFwRegInFwEP9DpPqParamP8RszInputP9RszOutputP6RszRegP9PQSession */
/* Demangled: PQRSZAdaptor::dumpFwRegInFw(DpPqParam*, RszInput*, RszOutput*, RszReg*, PQSession*) */
int _ZN12PQRSZAdaptor13dumpFwRegInFwEP9DpPqParamP8RszInputP9RszOutputP6RszRegP9PQSession(void);

/* Symbol: _ZN12PQDREAdaptor9sramWriteER9DpCommandjjPiRib */
/* Demangled: PQDREAdaptor::sramWrite(DpCommand&, unsigned int, unsigned int, int*, int&, bool) */
int _ZN12PQDREAdaptor9sramWriteER9DpCommandjjPiRib(void);

/* Symbol: CAMIN2Reg */
/* Demangled: CAMIN2Reg */
extern void* CAMIN2Reg;

/* Symbol: _ZN12DpVEncStream14queueSrcBufferEPPvPji */
/* Demangled: DpVEncStream::queueSrcBuffer(void**, unsigned int*, int) */
int _ZN12DpVEncStream14queueSrcBufferEPPvPji(void);

/* Symbol: _ZTV12DpTileEngine */
/* Demangled: vtable for DpTileEngine */
extern void* _ZTV12DpTileEngine;

/* Symbol: _ZN9PQSession15setDREAvailableEj */
/* Demangled: PQSession::setDREAvailable(unsigned int) */
int _ZN9PQSession15setDREAvailableEj(void);

/* Symbol: _ZN18PQAlgorithmFactory15destroyInstanceEv */
/* Demangled: PQAlgorithmFactory::destroyInstance() */
int _ZN18PQAlgorithmFactory15destroyInstanceEv(void);

/* Symbol: _ZN11DpIspStream10stopStreamEv */
/* Demangled: DpIspStream::stopStream() */
int _ZN11DpIspStream10stopStreamEv(void);

/* Symbol: _ZN13PQColorConfigC2Ev */
/* Demangled: PQColorConfig::PQColorConfig() */
int _ZN13PQColorConfigC2Ev(void);

/* Symbol: _ZN17DpCommandRecorder11getMdpPmqosEv */
/* Demangled: DpCommandRecorder::getMdpPmqos() */
int _ZN17DpCommandRecorder11getMdpPmqosEv(void);

/* Symbol: _ZTV13DpEngine_WROT */
/* Demangled: vtable for DpEngine_WROT */
extern void* _ZTV13DpEngine_WROT;

/* Symbol: _ZN18PQAlgorithmFactory6getRSZEj */
/* Demangled: PQAlgorithmFactory::getRSZ(unsigned int) */
int _ZN18PQAlgorithmFactory6getRSZEj(void);

/* Symbol: _Z25tile_lut_isp_func_supportPiP22TILE_FUNC_BLOCK_STRUCTP19TILE_REG_MAP_STRUCT */
/* Demangled: tile_lut_isp_func_support(int*, TILE_FUNC_BLOCK_STRUCT*, TILE_REG_MAP_STRUCT*) */
int _Z25tile_lut_isp_func_supportPiP22TILE_FUNC_BLOCK_STRUCTP19TILE_REG_MAP_STRUCT(void);

/* Symbol: _ZN17DpCommandRecorder22setNumReadbackPABufferEjj */
/* Demangled: DpCommandRecorder::setNumReadbackPABuffer(unsigned int, unsigned int) */
int _ZN17DpCommandRecorder22setNumReadbackPABufferEjj(void);

/* Symbol: _Z26tile_get_current_file_namePKc */
/* Demangled: tile_get_current_file_name(char const*) */
int _Z26tile_get_current_file_namePKc(void);

/* Symbol: _ZN14DpPathTopology9getWeightEii */
/* Demangled: DpPathTopology::getWeight(int, int) */
int _ZN14DpPathTopology9getWeightEii(void);

/* Symbol: _ZN17DpCommandRecorderC2EP10DpPathBase */
/* Demangled: DpCommandRecorder::DpCommandRecorder(DpPathBase*) */
int _ZN17DpCommandRecorderC2EP10DpPathBase(void);

/* Symbol: _ZN18PQAlgorithmAdaptorC1E17ProxyTuningBufferS0_S0_ */
/* Demangled: PQAlgorithmAdaptor::PQAlgorithmAdaptor(ProxyTuningBuffer, ProxyTuningBuffer, ProxyTuningBuffer) */
int _ZN18PQAlgorithmAdaptorC1E17ProxyTuningBufferS0_S0_(void);

/* Symbol: _ZN12PQDREAdaptor14initDREFWparamEiP10DpPqConfigiiii */
/* Demangled: PQDREAdaptor::initDREFWparam(int, DpPqConfig*, int, int, int, int) */
int _ZN12PQDREAdaptor14initDREFWparamEiP10DpPqConfigiiii(void);

/* Symbol: _ZN12DpEngineBase15onGetEngineNameEv */
/* Demangled: DpEngineBase::onGetEngineName() */
int _ZN12DpEngineBase15onGetEngineNameEv(void);

/* Symbol: _ZN9DpChannel12setTargetROIEiiiiii */
/* Demangled: DpChannel::setTargetROI(int, int, int, int, int, int) */
int _ZN9DpChannel12setTargetROIEiiiiii(void);

/* Symbol: _ZN11DpIspStream11setCallbackEPFvPvES0_ */
/* Demangled: DpIspStream::setCallback(void (*)(void*), void*) */
int _ZN11DpIspStream11setCallbackEPFvPvES0_(void);

/* Symbol: _ZN11DpIspStream14queueSrcBufferEPvjj */
/* Demangled: DpIspStream::queueSrcBuffer(void*, unsigned int, unsigned int) */
int _ZN11DpIspStream14queueSrcBufferEPvjj(void);

/* Symbol: _ZN17DpCommandRecorder12dumpRegisterEy */
/* Demangled: DpCommandRecorder::dumpRegister(unsigned long long) */
int _ZN17DpCommandRecorder12dumpRegisterEy(void);

/* Symbol: _ZN12PQHDRAdaptorD1Ev */
/* Demangled: PQHDRAdaptor::~PQHDRAdaptor() */
int _ZN12PQHDRAdaptorD1Ev(void);

/* Symbol: _ZN14DpEngine_TDSHP20onRetrieveFrameParamEP17TILE_PARAM_STRUCTR9DpCommand */
/* Demangled: DpEngine_TDSHP::onRetrieveFrameParam(TILE_PARAM_STRUCT*, DpCommand&) */
int _ZN14DpEngine_TDSHP20onRetrieveFrameParamEP17TILE_PARAM_STRUCTR9DpCommand(void);

/* Symbol: _Z29tile_tdr_isp_dump_inv_reg_wpeP19TILE_REG_MAP_STRUCTS0_iPjjj */
/* Demangled: tile_tdr_isp_dump_inv_reg_wpe(TILE_REG_MAP_STRUCT*, TILE_REG_MAP_STRUCT*, int, unsigned int*, unsigned int, unsigned int) */
int _Z29tile_tdr_isp_dump_inv_reg_wpeP19TILE_REG_MAP_STRUCTS0_iPjjj(void);

/* Symbol: _ZN17DpBasicBufferPoolD1Ev */
/* Demangled: DpBasicBufferPool::~DpBasicBufferPool() */
int _ZN17DpBasicBufferPoolD1Ev(void);

/* Symbol: _ZN17DpAsyncBlitStream12setSrcConfigEiiii13DP_COLOR_ENUM15DP_PROFILE_ENUM17DpInterlaceFormat8DpSecurebj */
/* Demangled: DpAsyncBlitStream::setSrcConfig(int, int, int, int, DP_COLOR_ENUM, DP_PROFILE_ENUM, DpInterlaceFormat, DpSecure, bool, unsigned int) */
int _ZN17DpAsyncBlitStream12setSrcConfigEiiii13DP_COLOR_ENUM15DP_PROFILE_ENUM17DpInterlaceFormat8DpSecurebj(void);

/* Symbol: _ZN12DpBlitStreamD1Ev */
/* Demangled: DpBlitStream::~DpBlitStream() */
int _ZN12DpBlitStreamD1Ev(void);

/* Symbol: _ZN9PQSessionC1Ey */
/* Demangled: PQSession::PQSession(unsigned long long) */
int _ZN9PQSessionC1Ey(void);

/* Symbol: _ZN17DpAsyncBlitStream7getPqIDEv */
/* Demangled: DpAsyncBlitStream::getPqID() */
int _ZN17DpAsyncBlitStream7getPqIDEv(void);

/* Symbol: _ZN17DpCommandRecorder10swapRecordEv */
/* Demangled: DpCommandRecorder::swapRecord() */
int _ZN17DpCommandRecorder10swapRecordEv(void);

/* Symbol: _ZN9PQSession21getDCWaitHistListSizeEv */
/* Demangled: PQSession::getDCWaitHistListSize() */
int _ZN9PQSession21getDCWaitHistListSizeEv(void);

/* Symbol: _ZN11PQDSAdaptorC2Ej */
/* Demangled: PQDSAdaptor::PQDSAdaptor(unsigned int) */
int _ZN11PQDSAdaptorC2Ej(void);

/* Symbol: _ZN8PQAshmemC1Ev */
/* Demangled: PQAshmem::PQAshmem() */
int _ZN8PQAshmemC1Ev(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBDPFRAMEWORK_H */
