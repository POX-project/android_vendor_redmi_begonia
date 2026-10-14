/*
 * Reverse-Engineered Source for: libdpframework.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libdpframework"

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
#include "libdpframework.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_MDP_SYNC "/dev/mdp_sync"
#define DEV_DEV_MTK_CMDQ "/dev/mtk_cmdq"
#define DEV_DEV_SW_SYNC "/dev/sw_sync"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_MDP_SYNC, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_MDP_SYNC, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_MDP_SYNC, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_MTK_CMDQ, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_MTK_CMDQ, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_MTK_CMDQ, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_SW_SYNC, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_SW_SYNC, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_SW_SYNC, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: DpIspStream::setPortType(int, unsigned int, DpJPEGEnc_Config_st*) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpIspStream11setPortTypeEijP19DpJPEGEnc_Config_st(void) {
    ALOGD("_ZN11DpIspStream11setPortTypeEijP19DpJPEGEnc_Config_st() called");
    return 0;
}

/* Demangled: DpCommandQueue::frameSrcInfo(DP_COLOR_ENUM, int, int, int, int, unsigned int*, unsigned int*, DpSecure) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpCommandQueue12frameSrcInfoE13DP_COLOR_ENUMiiiiPjS1_8DpSecure(void) {
    ALOGD("_ZN14DpCommandQueue12frameSrcInfoE13DP_COLOR_ENUMiiiiPjS1_8DpSecure() called");
    return 0;
}

/* Demangled: DpEngine_AAL::onAdvanceTile(DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpEngine_AAL13onAdvanceTileER9DpCommand(void) {
    ALOGD("_ZN12DpEngine_AAL13onAdvanceTileER9DpCommand() called");
    return 0;
}

/* Demangled: DpMmuHandler::DpMmuHandler(void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpMmuHandlerC2EPvj(void) {
    ALOGD("_ZN12DpMmuHandlerC2EPvj() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream::setOrientation(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpAsyncBlitStream14setOrientationEjj(void) {
    ALOGD("_ZN17DpAsyncBlitStream14setOrientationEjj() called");
    return 0;
}

/* Demangled: DpBlitStream::setDstBuffer(void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpBlitStream12setDstBufferEPvj(void) {
    ALOGD("_ZN12DpBlitStream12setDstBufferEPvj() called");
    return 0;
}

/* Demangled: DpIspStream::queueDstBuffer(int, int, unsigned int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpIspStream14queueDstBufferEiiPji(void) {
    ALOGD("_ZN11DpIspStream14queueDstBufferEiiPji() called");
    return 0;
}

/* Demangled: DpPortAdapt::getHWAddress(CLIENT_TYPE_ENUM, int, unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpPortAdapt12getHWAddressE16CLIENT_TYPE_ENUMiPjS1_(void) {
    ALOGD("_ZN11DpPortAdapt12getHWAddressE16CLIENT_TYPE_ENUMiPjS1_() called");
    return 0;
}

/* Demangled: DpCommandRecorder::addLabel() */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorder8addLabelEv(void) {
    ALOGD("_ZN17DpCommandRecorder8addLabelEv() called");
    return 0;
}

/* Demangled: DpEngine_RDMA::onConfigHDRTile(DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN13DpEngine_RDMA15onConfigHDRTileER9DpCommand(void) {
    ALOGD("_ZN13DpEngine_RDMA15onConfigHDRTileER9DpCommand() called");
    return 0;
}

/* Demangled: PQRSZConfig::PQRSZConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN11PQRSZConfigC1Ev(void) {
    ALOGD("_ZN11PQRSZConfigC1Ev() called");
    return 0;
}

/* Demangled: PQDREConfig::getDriverBlockFlag(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN11PQDREConfig18getDriverBlockFlagEb(void) {
    ALOGD("_ZN11PQDREConfig18getDriverBlockFlagEb() called");
    return 0;
}

/* Demangled: DpTilePath::dumpTileAccumulation() */
extern "C" __attribute__((visibility("default"))) int _ZN10DpTilePath20dumpTileAccumulationEv(void) {
    ALOGD("_ZN10DpTilePath20dumpTileAccumulationEv() called");
    return 0;
}

/* Demangled: DpMmuHandler::~DpMmuHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN12DpMmuHandlerD0Ev(void) {
    ALOGD("_ZN12DpMmuHandlerD0Ev() called");
    return 0;
}

/* Demangled: PQSessionManager::PQSessionManager() */
extern "C" __attribute__((visibility("default"))) int _ZN16PQSessionManagerC2Ev(void) {
    ALOGD("_ZN16PQSessionManagerC2Ev() called");
    return 0;
}

/* Demangled: tile_cal_main(TILE_PARAM_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z13tile_cal_mainP17TILE_PARAM_STRUCT(void) {
    ALOGD("_Z13tile_cal_mainP17TILE_PARAM_STRUCT() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream::setConfigBegin(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpAsyncBlitStream14setConfigBeginEj(void) {
    ALOGD("_ZN17DpAsyncBlitStream14setConfigBeginEj() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream2::setDstROI(unsigned int, int, int, DpRect const&) */
extern "C" __attribute__((visibility("default"))) int _ZN18DpAsyncBlitStream29setDstROIEjiiRK6DpRect(void) {
    ALOGD("_ZN18DpAsyncBlitStream29setDstROIEjiiRK6DpRect() called");
    return 0;
}

/* Demangled: DpIspStream::setPQParameter(int, DpPqParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpIspStream14setPQParameterEiRK9DpPqParam(void) {
    ALOGD("_ZN11DpIspStream14setPQParameterEiRK9DpPqParam() called");
    return 0;
}

/* Exported Object: DpPathConnection::s_moutMap */
extern "C" __attribute__((visibility("default"))) void* _ZN16DpPathConnection9s_moutMapE = NULL;

/* Demangled: DpPmemHandler::mapHWAddress(int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN13DpPmemHandler12mapHWAddressEij(void) {
    ALOGD("_ZN13DpPmemHandler12mapHWAddressEij() called");
    return 0;
}

/* Demangled: DpPortAdapt::getEndTime() const */
extern "C" __attribute__((visibility("default"))) int _ZNK11DpPortAdapt10getEndTimeEv(void) {
    ALOGD("_ZNK11DpPortAdapt10getEndTimeEv() called");
    return 0;
}

/* Demangled: DpEngineMutex::release(DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN13DpEngineMutex7releaseER9DpCommand(void) {
    ALOGD("_ZN13DpEngineMutex7releaseER9DpCommand() called");
    return 0;
}

/* Demangled: PQSession::isDCWaitHistEmpty() */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession17isDCWaitHistEmptyEv(void) {
    ALOGD("_ZN9PQSession17isDCWaitHistEmptyEv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::imbue(std::__1::locale const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream::queryHWSupport(unsigned int, unsigned int, unsigned int, unsigned int, int, DP_COLOR_ENUM, DP_COLOR_ENUM, DpPqParam*, DpRect*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpAsyncBlitStream14queryHWSupportEjjjji13DP_COLOR_ENUMS0_P9DpPqParamP6DpRectj(void) {
    ALOGD("_ZN17DpAsyncBlitStream14queryHWSupportEjjjji13DP_COLOR_ENUMS0_P9DpPqParamP6DpRectj() called");
    return 0;
}

/* Exported Object: vtable for ListPtr<DpStream::ChannelNode> */
extern "C" __attribute__((visibility("default"))) void* _ZTV7ListPtrIN8DpStream11ChannelNodeEE = NULL;

/* Demangled: DpDriver::getTDSHPGain(DISPLAY_TDSHP_T*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN8DpDriver12getTDSHPGainEP15DISPLAY_TDSHP_TPj(void) {
    ALOGD("_ZN8DpDriver12getTDSHPGainEP15DISPLAY_TDSHP_TPj() called");
    return 0;
}

/* Demangled: PQDCAdaptor::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN11PQDCAdaptor15destroyInstanceEv(void) {
    ALOGD("_ZN11PQDCAdaptor15destroyInstanceEv() called");
    return 0;
}

/* Demangled: DpDriver::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN8DpDriver11getInstanceEv(void) {
    ALOGD("_ZN8DpDriver11getInstanceEv() called");
    return 0;
}

/* Exported Object: g_profileTemp */
extern "C" __attribute__((visibility("default"))) void* g_profileTemp = NULL;

/* Demangled: PQAshmem::setAshmemValueByAddr(unsigned int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN8PQAshmem20setAshmemValueByAddrEPji(void) {
    ALOGD("_ZN8PQAshmem20setAshmemValueByAddrEPji() called");
    return 0;
}

/* Demangled: PQColorAdaptor::onConfigLocal3DLUT(COLOR_CONFIG_T*, DpCommand&, int&, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN14PQColorAdaptor18onConfigLocal3DLUTEP14COLOR_CONFIG_TR9DpCommandRiPi(void) {
    ALOGD("_ZN14PQColorAdaptor18onConfigLocal3DLUTEP14COLOR_CONFIG_TR9DpCommandRiPi() called");
    return 0;
}

/* Demangled: PQHDRAdaptor::onConfigCcorr(DpCommand&, DHDROUTPUT*) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQHDRAdaptor13onConfigCcorrER9DpCommandP10DHDROUTPUT(void) {
    ALOGD("_ZN12PQHDRAdaptor13onConfigCcorrER9DpCommandP10DHDROUTPUT() called");
    return 0;
}

/* Demangled: DpRingBufferPool::flushReadBuffer(int) */
extern "C" __attribute__((visibility("default"))) int _ZN16DpRingBufferPool15flushReadBufferEi(void) {
    ALOGD("_ZN16DpRingBufferPool15flushReadBufferEi() called");
    return 0;
}

/* Demangled: DpCommandQueue::setSubtaskId(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpCommandQueue12setSubtaskIdEj(void) {
    ALOGD("_ZN14DpCommandQueue12setSubtaskIdEj() called");
    return 0;
}

/* Demangled: DpCommandQueue::getReadbackStatus(bool&, bool&, int&, unsigned long long&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpCommandQueue17getReadbackStatusERbS0_RiRyRj(void) {
    ALOGD("_ZN14DpCommandQueue17getReadbackStatusERbS0_RiRyRj() called");
    return 0;
}

/* Demangled: DpPathControl::onStartStream() */
extern "C" __attribute__((visibility("default"))) int _ZN13DpPathControl13onStartStreamEv(void) {
    ALOGD("_ZN13DpPathControl13onStartStreamEv() called");
    return 0;
}

/* Demangled: DpBlitStream::invalidate(timeval*) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpBlitStream10invalidateEP7timeval(void) {
    ALOGD("_ZN12DpBlitStream10invalidateEP7timeval() called");
    return 0;
}

/* Exported Object: PQReadBackFactory::s_pInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN17PQReadBackFactory11s_pInstanceE = NULL;

/* Demangled: PQSession::setCurCutPosX(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession13setCurCutPosXEj(void) {
    ALOGD("_ZN9PQSession13setCurCutPosXEj() called");
    return 0;
}

/* Demangled: PQDREHistogramAdaptor::PrintAddress(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN21PQDREHistogramAdaptor12PrintAddressEj(void) {
    ALOGD("_ZN21PQDREHistogramAdaptor12PrintAddressEj() called");
    return 0;
}

/* Demangled: DpEngineBase::onFlushBuffer(DpEngineBase::FLUSH_TYPE_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpEngineBase13onFlushBufferENS_15FLUSH_TYPE_ENUME(void) {
    ALOGD("_ZN12DpEngineBase13onFlushBufferENS_15FLUSH_TYPE_ENUME() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream::waitSubmit() */
extern "C" __attribute__((visibility("default"))) int _ZN17DpAsyncBlitStream10waitSubmitEv(void) {
    ALOGD("_ZN17DpAsyncBlitStream10waitSubmitEv() called");
    return 0;
}

/* Demangled: DpPortAdapt::getIsp2MdpParam(void*, int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK11DpPortAdapt15getIsp2MdpParamEPvPi(void) {
    ALOGD("_ZNK11DpPortAdapt15getIsp2MdpParamEPvPi() called");
    return 0;
}

/* Demangled: DpCommandRecorder::dupRecord(DpCommandRecorder::BlockType) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorder9dupRecordENS_9BlockTypeE(void) {
    ALOGD("_ZN17DpCommandRecorder9dupRecordENS_9BlockTypeE() called");
    return 0;
}

/* Demangled: DpTilePath::config(int) */
extern "C" __attribute__((visibility("default"))) int _ZN10DpTilePath6configEi(void) {
    ALOGD("_ZN10DpTilePath6configEi() called");
    return 0;
}

/* Demangled: DpEngine_WROT::onWaitEvent(DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN13DpEngine_WROT11onWaitEventER9DpCommand(void) {
    ALOGD("_ZN13DpEngine_WROT11onWaitEventER9DpCommand() called");
    return 0;
}

/* Demangled: PQDSConfig::composeDSParameter(int, GlobalPQParam&, int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN10PQDSConfig18composeDSParameterEiR13GlobalPQParamib(void) {
    ALOGD("_ZN10PQDSConfig18composeDSParameterEiR13GlobalPQParamib() called");
    return 0;
}

/* Demangled: PQHDRAdaptor::~PQHDRAdaptor() */
extern "C" __attribute__((visibility("default"))) int _ZN12PQHDRAdaptorD2Ev(void) {
    ALOGD("_ZN12PQHDRAdaptorD2Ev() called");
    return 0;
}

/* Demangled: DpPathTopology::connectPath(int (&) [25], int, unsigned long long&, int (&) [25]) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpPathTopology11connectPathERA25_iiRyS1_(void) {
    ALOGD("_ZN14DpPathTopology11connectPathERA25_iiRyS1_() called");
    return 0;
}

/* Demangled: DpBasicBufferPool::~DpBasicBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN17DpBasicBufferPoolD2Ev(void) {
    ALOGD("_ZN17DpBasicBufferPoolD2Ev() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream::setSrcBuffer(void**, void**, unsigned int*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpAsyncBlitStream12setSrcBufferEPPvS1_Pjji(void) {
    ALOGD("_ZN17DpAsyncBlitStream12setSrcBufferEPPvS1_Pjji() called");
    return 0;
}

/* Demangled: DpBlitStream::~DpBlitStream() */
extern "C" __attribute__((visibility("default"))) int _ZN12DpBlitStreamD2Ev(void) {
    ALOGD("_ZN12DpBlitStreamD2Ev() called");
    return 0;
}

/* Demangled: DpVEncStream::setPortType(int, unsigned int, DpVEnc_Config*) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpVEncStream11setPortTypeEijP13DpVEnc_Config(void) {
    ALOGD("_ZN12DpVEncStream11setPortTypeEijP13DpVEnc_Config() called");
    return 0;
}

/* Demangled: PQSession::setCameraDpPqConfig(DpPqConfig*, DpPqParam const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession19setCameraDpPqConfigEP10DpPqConfigPK9DpPqParam(void) {
    ALOGD("_ZN9PQSession19setCameraDpPqConfigEP10DpPqConfigPK9DpPqParam() called");
    return 0;
}

/* Demangled: PQSession::PQSession(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSessionC2Ey(void) {
    ALOGD("_ZN9PQSessionC2Ey() called");
    return 0;
}

/* Demangled: PQAlgorithmFactory::~PQAlgorithmFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN18PQAlgorithmFactoryD1Ev(void) {
    ALOGD("_ZN18PQAlgorithmFactoryD1Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_filebuf<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: DpEngine_TDSHP::onDeInitEngine(DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpEngine_TDSHP14onDeInitEngineER9DpCommand(void) {
    ALOGD("_ZN14DpEngine_TDSHP14onDeInitEngineER9DpCommand() called");
    return 0;
}

/* Demangled: DpBufferPoolBase::decorateProxy(DpBufferPoolBase::BufferNode*) */
extern "C" __attribute__((visibility("default"))) int _ZN16DpBufferPoolBase13decorateProxyEPNS_10BufferNodeE(void) {
    ALOGD("_ZN16DpBufferPoolBase13decorateProxyEPNS_10BufferNodeE() called");
    return 0;
}

/* Demangled: DpBufferPoolBase::dumpUfoBuffer(int, DP_COLOR_ENUM, int, int, int, int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN16DpBufferPoolBase13dumpUfoBufferEi13DP_COLOR_ENUMiiiiPKc(void) {
    ALOGD("_ZN16DpBufferPoolBase13dumpUfoBufferEi13DP_COLOR_ENUMiiiiPKc() called");
    return 0;
}

/* Demangled: __createThread(long*, void* (*)(void*), void*) */
extern "C" __attribute__((visibility("default"))) int _Z14__createThreadPlPFPvS0_ES0_(void) {
    ALOGD("_Z14__createThreadPlPFPvS0_ES0_() called");
    return 0;
}

/* Demangled: DpPortAdapt::getDualOffset(int*, int*, int*, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpPortAdapt13getDualOffsetEPiS0_S0_S0_S0_(void) {
    ALOGD("_ZN11DpPortAdapt13getDualOffsetEPiS0_S0_S0_S0_() called");
    return 0;
}

/* Demangled: DpCommandQueue::getReadbackPABuffer(unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpCommandQueue19getReadbackPABufferERj(void) {
    ALOGD("_ZN14DpCommandQueue19getReadbackPABufferERj() called");
    return 0;
}

/* Exported Object: DpIonHandler::s_IONHandle */
extern "C" __attribute__((visibility("default"))) void* _ZN12DpIonHandler11s_IONHandleE = NULL;

/* Demangled: DpSync::createTimeline() */
extern "C" __attribute__((visibility("default"))) int _ZN6DpSync14createTimelineEv(void) {
    ALOGD("_ZN6DpSync14createTimelineEv() called");
    return 0;
}

/* Demangled: PQSession::getHDRDoneHistListSize() */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession22getHDRDoneHistListSizeEv(void) {
    ALOGD("_ZN9PQSession22getHDRDoneHistListSizeEv() called");
    return 0;
}

/* Demangled: PQTuningBuffer::push() */
extern "C" __attribute__((visibility("default"))) int _ZN14PQTuningBuffer4pushEv(void) {
    ALOGD("_ZN14PQTuningBuffer4pushEv() called");
    return 0;
}

/* Demangled: PQAshmem::PQAshmem() */
extern "C" __attribute__((visibility("default"))) int _ZN8PQAshmemC2Ev(void) {
    ALOGD("_ZN8PQAshmemC2Ev() called");
    return 0;
}

/* Demangled: tile_back_comp_resizer(TILE_RESIZER_BACKWARD_CAL_ARG_STRUCT*, TILE_FUNC_BLOCK_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z22tile_back_comp_resizerP36TILE_RESIZER_BACKWARD_CAL_ARG_STRUCTP22TILE_FUNC_BLOCK_STRUCT(void) {
    ALOGD("_Z22tile_back_comp_resizerP36TILE_RESIZER_BACKWARD_CAL_ARG_STRUCTP22TILE_FUNC_BLOCK_STRUCT() called");
    return 0;
}

/* Demangled: utilWriteBinBySize(char const*, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z18utilWriteBinBySizePKcPvj(void) {
    ALOGD("_Z18utilWriteBinBySizePKcPvj() called");
    return 0;
}

/* Demangled: DpBasicBufferPool::registerBufferFD(int, unsigned int*, int, int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpBasicBufferPool16registerBufferFDEiPjiiPi(void) {
    ALOGD("_ZN17DpBasicBufferPool16registerBufferFDEiPjiiPi() called");
    return 0;
}

/* Demangled: DpEngineBase::Factory(int) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpEngineBase7FactoryEi(void) {
    ALOGD("_ZN12DpEngineBase7FactoryEi() called");
    return 0;
}

/* Demangled: PQSession::setDrePreviousSize(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession18setDrePreviousSizeEii(void) {
    ALOGD("_ZN9PQSession18setDrePreviousSizeEii() called");
    return 0;
}

/* Demangled: DpWrapper_WPE::onWaitEvent(DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN13DpWrapper_WPE11onWaitEventER9DpCommand(void) {
    ALOGD("_ZN13DpWrapper_WPE11onWaitEventER9DpCommand() called");
    return 0;
}

/* Demangled: tile_copy_config_by_platform(TILE_PARAM_STRUCT*, ISP_TPIPE_CONFIG_STRUCT const*) */
extern "C" __attribute__((visibility("default"))) int _Z28tile_copy_config_by_platformP17TILE_PARAM_STRUCTPK23ISP_TPIPE_CONFIG_STRUCT(void) {
    ALOGD("_Z28tile_copy_config_by_platformP17TILE_PARAM_STRUCTPK23ISP_TPIPE_CONFIG_STRUCT() called");
    return 0;
}

/* Exported Object: PQConfig::s_pInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN8PQConfig11s_pInstanceE = NULL;

/* Demangled: DpPathComposer::DpPathComposer(DpStream*) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpPathComposerC2EP8DpStream(void) {
    ALOGD("_ZN14DpPathComposerC2EP8DpStream() called");
    return 0;
}

/* Demangled: notifyScenario(DP_SCENARIO_ENUM) */
extern "C" __attribute__((visibility("default"))) int _Z14notifyScenario16DP_SCENARIO_ENUM(void) {
    ALOGD("_Z14notifyScenario16DP_SCENARIO_ENUM() called");
    return 0;
}

/* Demangled: DpCommandRecorder::stopRecord() */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorder10stopRecordEv(void) {
    ALOGD("_ZN17DpCommandRecorder10stopRecordEv() called");
    return 0;
}

/* Demangled: DpEngine_RDMA::onWaitEvent(DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN13DpEngine_RDMA11onWaitEventER9DpCommand(void) {
    ALOGD("_ZN13DpEngine_RDMA11onWaitEventER9DpCommand() called");
    return 0;
}

/* Demangled: DpWrapper_WPE::onInitTileCalc(TILE_PARAM_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN13DpWrapper_WPE14onInitTileCalcEP17TILE_PARAM_STRUCT(void) {
    ALOGD("_ZN13DpWrapper_WPE14onInitTileCalcEP17TILE_PARAM_STRUCT() called");
    return 0;
}

/* Demangled: PQRSZConfig::PQRSZConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN11PQRSZConfigC2Ev(void) {
    ALOGD("_ZN11PQRSZConfigC2Ev() called");
    return 0;
}

/* Demangled: PQHDRAdaptor::tuningHDRInput(DHDRINPUT*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQHDRAdaptor14tuningHDRInputEP9DHDRINPUTi(void) {
    ALOGD("_ZN12PQHDRAdaptor14tuningHDRInputEP9DHDRINPUTi() called");
    return 0;
}

/* Demangled: PQDREAdaptor::onCalculate(PQSession*, DpPqParam&, bool, unsigned int, DRETopOutput*, DREVPTopOutput*, bool*, int, int, unsigned int, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQDREAdaptor11onCalculateEP9PQSessionR9DpPqParambjP12DRETopOutputP14DREVPTopOutputPbiijji(void) {
    ALOGD("_ZN12PQDREAdaptor11onCalculateEP9PQSessionR9DpPqParambjP12DRETopOutputP14DREVPTopOutputPbiijji() called");
    return 0;
}

/* Exported Object: DpPathConnection::s_selInMap */
extern "C" __attribute__((visibility("default"))) void* _ZN16DpPathConnection10s_selInMapE = NULL;

/* Demangled: PQSession::deleteDCDoneHistListNode() */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession24deleteDCDoneHistListNodeEv(void) {
    ALOGD("_ZN9PQSession24deleteDCDoneHistListNodeEv() called");
    return 0;
}

/* Demangled: PQDCAdaptor::getInstance(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11PQDCAdaptor11getInstanceEj(void) {
    ALOGD("_ZN11PQDCAdaptor11getInstanceEj() called");
    return 0;
}

/* Demangled: PQTuningBuffer::queryAshmemBufferBase() */
extern "C" __attribute__((visibility("default"))) int _ZN14PQTuningBuffer21queryAshmemBufferBaseEv(void) {
    ALOGD("_ZN14PQTuningBuffer21queryAshmemBufferBaseEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__push_back_slow_path<unsigned int const&>(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIRKjEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIRKjEEvOT_() called");
    return 0;
}

/* Demangled: DpCommandRecorder::getHDRReadback() */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorder14getHDRReadbackEv(void) {
    ALOGD("_ZN17DpCommandRecorder14getHDRReadbackEv() called");
    return 0;
}

/* Demangled: DpMmuHandler::~DpMmuHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN12DpMmuHandlerD1Ev(void) {
    ALOGD("_ZN12DpMmuHandlerD1Ev() called");
    return 0;
}

/* Demangled: PQSessionManager::isIdDuplicated(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN16PQSessionManager14isIdDuplicatedEy(void) {
    ALOGD("_ZN16PQSessionManager14isIdDuplicatedEy() called");
    return 0;
}

/* Demangled: PQHDRAdaptor::setLastHDRInfo(_DP_VDEC_DRV_COLORDESC_T) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQHDRAdaptor14setLastHDRInfoE24_DP_VDEC_DRV_COLORDESC_T(void) {
    ALOGD("_ZN12PQHDRAdaptor14setLastHDRInfoE24_DP_VDEC_DRV_COLORDESC_T() called");
    return 0;
}

/* Demangled: DpIspStream::queueDstBuffer(int, int*, unsigned int*, unsigned int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpIspStream14queueDstBufferEiPiPjS1_i(void) {
    ALOGD("_ZN11DpIspStream14queueDstBufferEiPiPjS1_i() called");
    return 0;
}

/* Demangled: PQDREAdaptor::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN12PQDREAdaptor15destroyInstanceEv(void) {
    ALOGD("_ZN12PQDREAdaptor15destroyInstanceEv() called");
    return 0;
}

/* Demangled: DpPathComposer::onCompose() */
extern "C" __attribute__((visibility("default"))) int _ZN14DpPathComposer9onComposeEv(void) {
    ALOGD("_ZN14DpPathComposer9onComposeEv() called");
    return 0;
}

/* Demangled: DpCommandQueue::initRegDstNum() */
extern "C" __attribute__((visibility("default"))) int _ZN14DpCommandQueue13initRegDstNumEv(void) {
    ALOGD("_ZN14DpCommandQueue13initRegDstNumEv() called");
    return 0;
}

/* Demangled: DpEngine_WPEO::onConfigFrame(DpCommand&, DpConfig&) */
extern "C" __attribute__((visibility("default"))) int _ZN13DpEngine_WPEO13onConfigFrameER9DpCommandR8DpConfig(void) {
    ALOGD("_ZN13DpEngine_WPEO13onConfigFrameER9DpCommandR8DpConfig() called");
    return 0;
}

/* Exported Object: DpIonHandler::s_instMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN12DpIonHandler11s_instMutexE = NULL;

/* Demangled: tile_tdr_isp_reg_to_dump_bld(TILE_REG_MAP_STRUCT*, unsigned int*, unsigned int*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _Z28tile_tdr_isp_reg_to_dump_bldP19TILE_REG_MAP_STRUCTPjS1_ji(void) {
    ALOGD("_Z28tile_tdr_isp_reg_to_dump_bldP19TILE_REG_MAP_STRUCTPjS1_ji() called");
    return 0;
}

/* Demangled: tile_tdr_isp_dump_inv_reg_internal_wpe(TILE_REG_MAP_STRUCT*, TILE_REG_MAP_STRUCT*, int, unsigned int*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z38tile_tdr_isp_dump_inv_reg_internal_wpeP19TILE_REG_MAP_STRUCTS0_iPjjj(void) {
    ALOGD("_Z38tile_tdr_isp_dump_inv_reg_internal_wpeP19TILE_REG_MAP_STRUCTS0_iPjjj() called");
    return 0;
}

/* Demangled: DpIspStream::waitComplete() */
extern "C" __attribute__((visibility("default"))) int _ZN11DpIspStream12waitCompleteEv(void) {
    ALOGD("_ZN11DpIspStream12waitCompleteEv() called");
    return 0;
}

/* Demangled: PQDREHistogramAdaptor::storeDREOutput(void*, unsigned int, DREVPTopOutput const*) */
extern "C" __attribute__((visibility("default"))) int _ZN21PQDREHistogramAdaptor14storeDREOutputEPvjPK14DREVPTopOutput(void) {
    ALOGD("_ZN21PQDREHistogramAdaptor14storeDREOutputEPvjPK14DREVPTopOutput() called");
    return 0;
}

/* Demangled: DpTilePath::onConfigCommandEnd(DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN10DpTilePath18onConfigCommandEndER9DpCommand(void) {
    ALOGD("_ZN10DpTilePath18onConfigCommandEndER9DpCommand() called");
    return 0;
}

/* Demangled: PQDCAdaptor::~PQDCAdaptor() */
extern "C" __attribute__((visibility("default"))) int _ZN11PQDCAdaptorD1Ev(void) {
    ALOGD("_ZN11PQDCAdaptorD1Ev() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream::DpAsyncBlitStream() */
extern "C" __attribute__((visibility("default"))) int _ZN17DpAsyncBlitStreamC1Ev(void) {
    ALOGD("_ZN17DpAsyncBlitStreamC1Ev() called");
    return 0;
}

/* Exported Object: WPEIReg */
extern "C" __attribute__((visibility("default"))) void* WPEIReg = NULL;

/* Demangled: DpVEncStream::dequeueSrcBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN12DpVEncStream16dequeueSrcBufferEv(void) {
    ALOGD("_ZN12DpVEncStream16dequeueSrcBufferEv() called");
    return 0;
}

/* Demangled: PQSession::setDCHandle(dcHandle*) */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession11setDCHandleEP8dcHandle(void) {
    ALOGD("_ZN9PQSession11setDCHandleEP8dcHandle() called");
    return 0;
}

/* Demangled: PQHDRAdaptor::initHDRInitParamIn(_DP_VDEC_DRV_COLORDESC_T*, DHDRINPUT*, bool, unsigned int, DpConfig&) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQHDRAdaptor18initHDRInitParamInEP24_DP_VDEC_DRV_COLORDESC_TP9DHDRINPUTbjR8DpConfig(void) {
    ALOGD("_ZN12PQHDRAdaptor18initHDRInitParamInEP24_DP_VDEC_DRV_COLORDESC_TP9DHDRINPUTbjR8DpConfig() called");
    return 0;
}

/* Exported Object: PQSessionManager::m_CapturepreAAL1Id */
extern "C" __attribute__((visibility("default"))) void* _ZN16PQSessionManager18m_CapturepreAAL1IdE = NULL;

/* Demangled: PQConfig::updatePQServiceStatus() */
extern "C" __attribute__((visibility("default"))) int _ZN8PQConfig21updatePQServiceStatusEv(void) {
    ALOGD("_ZN8PQConfig21updatePQServiceStatusEv() called");
    return 0;
}

/* Demangled: tile_tdr_isp_reg_to_dump(TILE_REG_MAP_STRUCT*, unsigned int*, unsigned int*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _Z24tile_tdr_isp_reg_to_dumpP19TILE_REG_MAP_STRUCTPjS1_ji(void) {
    ALOGD("_Z24tile_tdr_isp_reg_to_dumpP19TILE_REG_MAP_STRUCTPjS1_ji() called");
    return 0;
}

/* Demangled: DpIspStream::setDstConfig(int, DP_COLOR_ENUM, int, int, int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpIspStream12setDstConfigEi13DP_COLOR_ENUMiiib(void) {
    ALOGD("_ZN11DpIspStream12setDstConfigEi13DP_COLOR_ENUMiiib() called");
    return 0;
}

/* Demangled: PQHDRConfig::~PQHDRConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN11PQHDRConfigD1Ev(void) {
    ALOGD("_ZN11PQHDRConfigD1Ev() called");
    return 0;
}

/* Demangled: tile_tdr_isp_mask_to_dump_eaf(TILE_REG_MAP_STRUCT*, unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z29tile_tdr_isp_mask_to_dump_eafP19TILE_REG_MAP_STRUCTPjS1_(void) {
    ALOGD("_Z29tile_tdr_isp_mask_to_dump_eafP19TILE_REG_MAP_STRUCTPjS1_() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream::setDstConfig(unsigned int, int, int, DP_COLOR_ENUM, DpInterlaceFormat, DpRect*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpAsyncBlitStream12setDstConfigEjii13DP_COLOR_ENUM17DpInterlaceFormatP6DpRectj(void) {
    ALOGD("_ZN17DpAsyncBlitStream12setDstConfigEjii13DP_COLOR_ENUM17DpInterlaceFormatP6DpRectj() called");
    return 0;
}

/* Demangled: DpIspStream::queueBatchDstBuffer(int, DpBufferDesc*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpIspStream19queueBatchDstBufferEiP12DpBufferDescjj(void) {
    ALOGD("_ZN11DpIspStream19queueBatchDstBufferEiP12DpBufferDescjj() called");
    return 0;
}

/* Demangled: PQAlgorithmFactory::~PQAlgorithmFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN18PQAlgorithmFactoryD2Ev(void) {
    ALOGD("_ZN18PQAlgorithmFactoryD2Ev() called");
    return 0;
}

/* Demangled: tile_tdr_isp_fprint_dump_internal_wpe(__sFILE*, TILE_REG_MAP_STRUCT*, int, unsigned int*, unsigned int*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z37tile_tdr_isp_fprint_dump_internal_wpeP7__sFILEP19TILE_REG_MAP_STRUCTiPjS3_jj(void) {
    ALOGD("_Z37tile_tdr_isp_fprint_dump_internal_wpeP7__sFILEP19TILE_REG_MAP_STRUCTiPjS3_jj() called");
    return 0;
}

/* Demangled: DpBufferPoolBase::insertBufferNode(DP_MEMORY_ENUM, int, void**, unsigned int*, unsigned int*, DpMemory**, int, unsigned int*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN16DpBufferPoolBase16insertBufferNodeE14DP_MEMORY_ENUMiPPvPjS3_PP8DpMemoryiS3_b(void) {
    ALOGD("_ZN16DpBufferPoolBase16insertBufferNodeE14DP_MEMORY_ENUMiPPvPjS3_PP8DpMemoryiS3_b() called");
    return 0;
}

/* Demangled: DpPortAdapt::setDualOffset(int const*, int const*, int const*, int const*, int const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpPortAdapt13setDualOffsetEPKiS1_S1_S1_S1_(void) {
    ALOGD("_ZN11DpPortAdapt13setDualOffsetEPKiS1_S1_S1_S1_() called");
    return 0;
}

/* Demangled: tile_tdr_isp_dump_inv_reg_internal_eaf(TILE_REG_MAP_STRUCT*, TILE_REG_MAP_STRUCT*, int, unsigned int*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z38tile_tdr_isp_dump_inv_reg_internal_eafP19TILE_REG_MAP_STRUCTS0_iPjjj(void) {
    ALOGD("_Z38tile_tdr_isp_dump_inv_reg_internal_eafP19TILE_REG_MAP_STRUCTS0_iPjjj() called");
    return 0;
}

/* Demangled: PQRSZAdaptor::tuningRSZOutput(RszOutput*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQRSZAdaptor15tuningRSZOutputEP9RszOutputi(void) {
    ALOGD("_ZN12PQRSZAdaptor15tuningRSZOutputEP9RszOutputi() called");
    return 0;
}

/* Demangled: DpBasicBufferPool::unregisterBuffer(int) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpBasicBufferPool16unregisterBufferEi(void) {
    ALOGD("_ZN17DpBasicBufferPool16unregisterBufferEi() called");
    return 0;
}

/* Demangled: DpEngine_WROT::onDeInitEngine(DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN13DpEngine_WROT14onDeInitEngineER9DpCommand(void) {
    ALOGD("_ZN13DpEngine_WROT14onDeInitEngineER9DpCommand() called");
    return 0;
}

/* Demangled: PQDREAdaptor::calTileRegs(DpCommand&, PQSession*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQDREAdaptor11calTileRegsER9DpCommandP9PQSessionjjjjjjjjjjij(void) {
    ALOGD("_ZN12PQDREAdaptor11calTileRegsER9DpCommandP9PQSessionjjjjjjjjjjij() called");
    return 0;
}

/* Demangled: DpEngine_HDR::onConfigFrame(DpCommand&, DpConfig&) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpEngine_HDR13onConfigFrameER9DpCommandR8DpConfig(void) {
    ALOGD("_ZN12DpEngine_HDR13onConfigFrameER9DpCommandR8DpConfig() called");
    return 0;
}

/* Demangled: DpDriver::removeRefCnt(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN8DpDriver12removeRefCntEy(void) {
    ALOGD("_ZN8DpDriver12removeRefCntEy() called");
    return 0;
}

/* Demangled: PQSession::HandleHDRRef() */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession12HandleHDRRefEv(void) {
    ALOGD("_ZN9PQSession12HandleHDRRefEv() called");
    return 0;
}

/* Demangled: DpChannel::setIsp2MdpParam(void*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DpChannel15setIsp2MdpParamEPvi(void) {
    ALOGD("_ZN9DpChannel15setIsp2MdpParamEPvi() called");
    return 0;
}

/* Demangled: DpIspStream::configPQParameter(int) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpIspStream17configPQParameterEi(void) {
    ALOGD("_ZN11DpIspStream17configPQParameterEi() called");
    return 0;
}

/* Demangled: tile_proc_main_single(TILE_REG_MAP_STRUCT*, FUNC_DESCRIPTION_STRUCT*, ISP_TILE_HEX_DUMP_STRUCT*, ISP_TPIPE_DESCRIPTOR_STRUCT*, int, bool*, __sFILE*) */
extern "C" __attribute__((visibility("default"))) int _Z21tile_proc_main_singleP19TILE_REG_MAP_STRUCTP23FUNC_DESCRIPTION_STRUCTP24ISP_TILE_HEX_DUMP_STRUCTP27ISP_TPIPE_DESCRIPTOR_STRUCTiPbP7__sFILE(void) {
    ALOGD("_Z21tile_proc_main_singleP19TILE_REG_MAP_STRUCTP23FUNC_DESCRIPTION_STRUCTP24ISP_TILE_HEX_DUMP_STRUCTP27ISP_TPIPE_DESCRIPTOR_STRUCTiPbP7__sFILE() called");
    return 0;
}

/* Demangled: DpEngine_AAL::onDeInitEngine(DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpEngine_AAL14onDeInitEngineER9DpCommand(void) {
    ALOGD("_ZN12DpEngine_AAL14onDeInitEngineER9DpCommand() called");
    return 0;
}

/* Demangled: DpMmuHandler::DpMmuHandler(void*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpMmuHandlerC2EPvjj(void) {
    ALOGD("_ZN12DpMmuHandlerC2EPvjj() called");
    return 0;
}

/* Demangled: DpEngine_SCL::getRsz6TapTableIndex(int) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpEngine_SCL20getRsz6TapTableIndexEi(void) {
    ALOGD("_ZN12DpEngine_SCL20getRsz6TapTableIndexEi() called");
    return 0;
}

/* Exported Object: PQReadBackFactory::s_ALMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN17PQReadBackFactory9s_ALMutexE = NULL;

/* Exported Object: VTT for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: PQColorAdaptor::~PQColorAdaptor() */
extern "C" __attribute__((visibility("default"))) int _ZN14PQColorAdaptorD1Ev(void) {
    ALOGD("_ZN14PQColorAdaptorD1Ev() called");
    return 0;
}

/* Demangled: PQDREAdaptor::setDREOutput(DREVPTopOutput*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQDREAdaptor12setDREOutputEP14DREVPTopOutputb(void) {
    ALOGD("_ZN12PQDREAdaptor12setDREOutputEP14DREVPTopOutputb() called");
    return 0;
}

/* Demangled: PQDREAdaptor::setDRESkinWgtSetBuffer(DREsharedata*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQDREAdaptor22setDRESkinWgtSetBufferEP12DREsharedatab(void) {
    ALOGD("_ZN12PQDREAdaptor22setDRESkinWgtSetBufferEP12DREsharedatab() called");
    return 0;
}

/* Demangled: DpFragStream::setDstBuffer(int, unsigned int*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpFragStream12setDstBufferEiPjj(void) {
    ALOGD("_ZN12DpFragStream12setDstBufferEiPjj() called");
    return 0;
}

/* Demangled: DpCommandRecorder::endLabel() */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorder8endLabelEv(void) {
    ALOGD("_ZN17DpCommandRecorder8endLabelEv() called");
    return 0;
}

/* Demangled: DpMmuHandler::~DpMmuHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN12DpMmuHandlerD2Ev(void) {
    ALOGD("_ZN12DpMmuHandlerD2Ev() called");
    return 0;
}

/* Demangled: PQConfig::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN8PQConfig15destroyInstanceEv(void) {
    ALOGD("_ZN8PQConfig15destroyInstanceEv() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream2::setFlip(unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN18DpAsyncBlitStream27setFlipEji(void) {
    ALOGD("_ZN18DpAsyncBlitStream27setFlipEji() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: PQDREAdaptor::dumpFwReg(bool, DpPqParam const*, DpPqConfig*, DRETopInput const*, DRETopOutput const*, DREInitReg const*, DREReg const*, TAdaptiveCALTMReg const*, TAdaptiveCALTMFace_Exif const*, TAdaptiveCALTMFace_Dump const*) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQDREAdaptor9dumpFwRegEbPK9DpPqParamP10DpPqConfigPK11DRETopInputPK12DRETopOutputPK10DREInitRegPK6DRERegPK17TAdaptiveCALTMRegPK23TAdaptiveCALTMFace_ExifPK23TAdaptiveCALTMFace_Dump(void) {
    ALOGD("_ZN12PQDREAdaptor9dumpFwRegEbPK9DpPqParamP10DpPqConfigPK11DRETopInputPK12DRETopOutputPK10DREInitRegPK6DRERegPK17TAdaptiveCALTMRegPK23TAdaptiveCALTMFace_ExifPK23TAdaptiveCALTMFace_Dump() called");
    return 0;
}

/* Demangled: DpRingBufferPool::pollBufferStatus(CLIENT_TYPE_ENUM, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN16DpRingBufferPool16pollBufferStatusE16CLIENT_TYPE_ENUMb(void) {
    ALOGD("_ZN16DpRingBufferPool16pollBufferStatusE16CLIENT_TYPE_ENUMb() called");
    return 0;
}

/* Demangled: DpBasicBufferPool::registerBufferFDs(int*, unsigned int*, unsigned int*, int, int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpBasicBufferPool17registerBufferFDsEPiPjS1_iiS0_(void) {
    ALOGD("_ZN17DpBasicBufferPool17registerBufferFDsEPiPjS1_iiS0_() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream2::_calcCropROI(DpAsyncBlitStream2::CropROI&, DpAsyncBlitStream2::CropROI&, DP_COLOR_ENUM, bool, bool, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN18DpAsyncBlitStream212_calcCropROIERNS_7CropROIES1_13DP_COLOR_ENUMbbbb(void) {
    ALOGD("_ZN18DpAsyncBlitStream212_calcCropROIERNS_7CropROIES1_13DP_COLOR_ENUMbbbb() called");
    return 0;
}

/* Demangled: PQDSAdaptor::initDSFWparam(DS_CONFIG_T*, DpConfig&, DSInput*, bool, DpPqParam*) */
extern "C" __attribute__((visibility("default"))) int _ZN11PQDSAdaptor13initDSFWparamEP11DS_CONFIG_TR8DpConfigP7DSInputbP9DpPqParam(void) {
    ALOGD("_ZN11PQDSAdaptor13initDSFWparamEP11DS_CONFIG_TR8DpConfigP7DSInputbP9DpPqParam() called");
    return 0;
}

/* Demangled: DpIspStream::createThread() */
extern "C" __attribute__((visibility("default"))) int _ZN11DpIspStream12createThreadEv(void) {
    ALOGD("_ZN11DpIspStream12createThreadEv() called");
    return 0;
}

/* Demangled: DpCommandRecorder::getScenario() */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorder11getScenarioEv(void) {
    ALOGD("_ZN17DpCommandRecorder11getScenarioEv() called");
    return 0;
}

/* Demangled: DpEngine_WROT::onConfigTile(DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN13DpEngine_WROT12onConfigTileER9DpCommand(void) {
    ALOGD("_ZN13DpEngine_WROT12onConfigTileER9DpCommand() called");
    return 0;
}

/* Demangled: DpIonHandler::import_internal(int) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpIonHandler15import_internalEi(void) {
    ALOGD("_ZN12DpIonHandler15import_internalEi() called");
    return 0;
}

/* Demangled: DpMmuHandler::DpMmuHandler(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpMmuHandlerC2Ejj(void) {
    ALOGD("_ZN12DpMmuHandlerC2Ejj() called");
    return 0;
}

/* Demangled: PQTuningBuffer::PQTuningBuffer(ProxyTuningBuffer) */
extern "C" __attribute__((visibility("default"))) int _ZN14PQTuningBufferC2E17ProxyTuningBuffer(void) {
    ALOGD("_ZN14PQTuningBufferC2E17ProxyTuningBuffer() called");
    return 0;
}

/* Demangled: PQColorAdaptor::calRegs(PQSession*, DpCommand&, int, int, int*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN14PQColorAdaptor7calRegsEP9PQSessionR9DpCommandiiPib(void) {
    ALOGD("_ZN14PQColorAdaptor7calRegsEP9PQSessionR9DpCommandiiPib() called");
    return 0;
}

/* Exported Object: PQDREAdaptor::s_pInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN12PQDREAdaptor11s_pInstanceE = NULL;

/* Demangled: PQDREAdaptor::setDREFrameInfo(DREFrameInfo*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQDREAdaptor15setDREFrameInfoEP12DREFrameInfob(void) {
    ALOGD("_ZN12PQDREAdaptor15setDREFrameInfoEP12DREFrameInfob() called");
    return 0;
}

/* Demangled: DpEngine_TDSHP::onInitEngine(DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpEngine_TDSHP12onInitEngineER9DpCommand(void) {
    ALOGD("_ZN14DpEngine_TDSHP12onInitEngineER9DpCommand() called");
    return 0;
}

/* Demangled: conv_compact_to_block(unsigned char*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _Z21conv_compact_to_blockPhjjjjjjS_(void) {
    ALOGD("_Z21conv_compact_to_blockPhjjjjjjS_() called");
    return 0;
}

/* Demangled: DpDriver::submitCommand(DpCommandBlock&, unsigned long long*, unsigned int, char**) */
extern "C" __attribute__((visibility("default"))) int _ZN8DpDriver13submitCommandER14DpCommandBlockPyjPPc(void) {
    ALOGD("_ZN8DpDriver13submitCommandER14DpCommandBlockPyjPPc() called");
    return 0;
}

/* Demangled: DpPathComposer::setupPath(STREAM_TYPE_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpPathComposer9setupPathE16STREAM_TYPE_ENUM(void) {
    ALOGD("_ZN14DpPathComposer9setupPathE16STREAM_TYPE_ENUM() called");
    return 0;
}

/* Demangled: DpFragStream::stopFrag() */
extern "C" __attribute__((visibility("default"))) int _ZN12DpFragStream8stopFragEv(void) {
    ALOGD("_ZN12DpFragStream8stopFragEv() called");
    return 0;
}

/* Demangled: PQDCAdaptor::~PQDCAdaptor() */
extern "C" __attribute__((visibility("default"))) int _ZN11PQDCAdaptorD2Ev(void) {
    ALOGD("_ZN11PQDCAdaptorD2Ev() called");
    return 0;
}

/* Demangled: PQIspTuning::getRszTuningValue(RszReg*, RszInput*) */
extern "C" __attribute__((visibility("default"))) int _ZN11PQIspTuning17getRszTuningValueEP6RszRegP8RszInput(void) {
    ALOGD("_ZN11PQIspTuning17getRszTuningValueEP6RszRegP8RszInput() called");
    return 0;
}

/* Demangled: tpipe_main_query_platform_working_buffer_size(int) */
extern "C" __attribute__((visibility("default"))) int _Z45tpipe_main_query_platform_working_buffer_sizei(void) {
    ALOGD("_Z45tpipe_main_query_platform_working_buffer_sizei() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream::DpAsyncBlitStream() */
extern "C" __attribute__((visibility("default"))) int _ZN17DpAsyncBlitStreamC2Ev(void) {
    ALOGD("_ZN17DpAsyncBlitStreamC2Ev() called");
    return 0;
}

/* Demangled: DpVEncStream::stopStream() */
extern "C" __attribute__((visibility("default"))) int _ZN12DpVEncStream10stopStreamEv(void) {
    ALOGD("_ZN12DpVEncStream10stopStreamEv() called");
    return 0;
}

/* Demangled: PQSession::setHDRisLeftDone(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession16setHDRisLeftDoneEb(void) {
    ALOGD("_ZN9PQSession16setHDRisLeftDoneEb() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream2::invalidate(timeval*) */
extern "C" __attribute__((visibility("default"))) int _ZN18DpAsyncBlitStream210invalidateEP7timeval(void) {
    ALOGD("_ZN18DpAsyncBlitStream210invalidateEP7timeval() called");
    return 0;
}

/* Demangled: DpPortAdapt::pollStatus(CLIENT_TYPE_ENUM, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpPortAdapt10pollStatusE16CLIENT_TYPE_ENUMb(void) {
    ALOGD("_ZN11DpPortAdapt10pollStatusE16CLIENT_TYPE_ENUMb() called");
    return 0;
}

/* Demangled: PQSession::deleteHDRDoneHistListNode() */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession25deleteHDRDoneHistListNodeEv(void) {
    ALOGD("_ZN9PQSession25deleteHDRDoneHistListNodeEv() called");
    return 0;
}

/* Demangled: PQColorAdaptor::onUpdateSatEngine(COLOR_CONFIG_T*, DpCommand&, int&, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN14PQColorAdaptor17onUpdateSatEngineEP14COLOR_CONFIG_TR9DpCommandRiPi(void) {
    ALOGD("_ZN14PQColorAdaptor17onUpdateSatEngineEP14COLOR_CONFIG_TR9DpCommandRiPi() called");
    return 0;
}

/* Demangled: PQReadBackFactory::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN17PQReadBackFactory11getInstanceEv(void) {
    ALOGD("_ZN17PQReadBackFactory11getInstanceEv() called");
    return 0;
}

/* Demangled: DpCommandQueue::addMMpathLog(char const*, unsigned int, DP_MMPATH_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpCommandQueue12addMMpathLogEPKcj14DP_MMPATH_ENUM(void) {
    ALOGD("_ZN14DpCommandQueue12addMMpathLogEPKcj14DP_MMPATH_ENUM() called");
    return 0;
}

/* Demangled: DpCommandQueue::stop(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpCommandQueue4stopEb(void) {
    ALOGD("_ZN14DpCommandQueue4stopEb() called");
    return 0;
}

/* Demangled: DpEngine_RDMA::onConfigTile(DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN13DpEngine_RDMA12onConfigTileER9DpCommand(void) {
    ALOGD("_ZN13DpEngine_RDMA12onConfigTileER9DpCommand() called");
    return 0;
}

/* Demangled: PQSession::addHWNode(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession9addHWNodeEj(void) {
    ALOGD("_ZN9PQSession9addHWNodeEj() called");
    return 0;
}

/* Demangled: PQHDRConfig::~PQHDRConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN11PQHDRConfigD2Ev(void) {
    ALOGD("_ZN11PQHDRConfigD2Ev() called");
    return 0;
}

/* Demangled: DpWrapper_ISP::onWaitEvent(DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN13DpWrapper_ISP11onWaitEventER9DpCommand(void) {
    ALOGD("_ZN13DpWrapper_ISP11onWaitEventER9DpCommand() called");
    return 0;
}

/* Demangled: DpIonHandler::mapSWAddress() */
extern "C" __attribute__((visibility("default"))) int _ZN12DpIonHandler12mapSWAddressEv(void) {
    ALOGD("_ZN12DpIonHandler12mapSWAddressEv() called");
    return 0;
}

/* Demangled: PQConfig::getDebugLevel() */
extern "C" __attribute__((visibility("default"))) int _ZN8PQConfig13getDebugLevelEv(void) {
    ALOGD("_ZN8PQConfig13getDebugLevelEv() called");
    return 0;
}

/* Demangled: PQHDRAdaptor::onUpdateHDR(DpCommand&, DHDROUTPUT*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQHDRAdaptor11onUpdateHDRER9DpCommandP10DHDROUTPUTPi(void) {
    ALOGD("_ZN12PQHDRAdaptor11onUpdateHDRER9DpCommandP10DHDROUTPUTPi() called");
    return 0;
}

/* Demangled: DpBufferPoolBase::waitBufferFence(int) */
extern "C" __attribute__((visibility("default"))) int _ZN16DpBufferPoolBase15waitBufferFenceEi(void) {
    ALOGD("_ZN16DpBufferPoolBase15waitBufferFenceEi() called");
    return 0;
}

/* Demangled: DpVEncStream::setBatchParameter(ISP_TPIPE_CONFIG_STRUCT**, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpVEncStream17setBatchParameterEPP23ISP_TPIPE_CONFIG_STRUCTjj(void) {
    ALOGD("_ZN12DpVEncStream17setBatchParameterEPP23ISP_TPIPE_CONFIG_STRUCTjj() called");
    return 0;
}

/* Demangled: DpCommandQueue::setNumReadbackPABuffer(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpCommandQueue22setNumReadbackPABufferEjj(void) {
    ALOGD("_ZN14DpCommandQueue22setNumReadbackPABufferEjj() called");
    return 0;
}

/* Demangled: DpPathControl::DpPathControl(DpStream*) */
extern "C" __attribute__((visibility("default"))) int _ZN13DpPathControlC1EP8DpStream(void) {
    ALOGD("_ZN13DpPathControlC1EP8DpStream() called");
    return 0;
}

/* Demangled: DpIspStream::dequeueFrameEnd(unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpIspStream15dequeueFrameEndEPj(void) {
    ALOGD("_ZN11DpIspStream15dequeueFrameEndEPj() called");
    return 0;
}

/* Demangled: DpVEncStream::~DpVEncStream() */
extern "C" __attribute__((visibility("default"))) int _ZN12DpVEncStreamD1Ev(void) {
    ALOGD("_ZN12DpVEncStreamD1Ev() called");
    return 0;
}

/* Exported Object: vtable for DpCommandRecorder */
extern "C" __attribute__((visibility("default"))) void* _ZTV17DpCommandRecorder = NULL;

/* Demangled: setESLWROT(DpCommand&, unsigned int, DP_COLOR_ENUM) */
extern "C" __attribute__((visibility("default"))) int _Z10setESLWROTR9DpCommandj13DP_COLOR_ENUM(void) {
    ALOGD("_Z10setESLWROTR9DpCommandj13DP_COLOR_ENUM() called");
    return 0;
}

/* Exported Object: PQConfig::s_ALMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN8PQConfig9s_ALMutexE = NULL;

/* Demangled: PQHDRAdaptor::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN12PQHDRAdaptor15destroyInstanceEv(void) {
    ALOGD("_ZN12PQHDRAdaptor15destroyInstanceEv() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream2::setDstBuffer(unsigned int, void*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN18DpAsyncBlitStream212setDstBufferEjPvji(void) {
    ALOGD("_ZN18DpAsyncBlitStream212setDstBufferEjPvji() called");
    return 0;
}

/* Demangled: DpIonHandler::~DpIonHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN12DpIonHandlerD0Ev(void) {
    ALOGD("_ZN12DpIonHandlerD0Ev() called");
    return 0;
}

/* Demangled: PQTuningBuffer::isBypassHWAccess() */
extern "C" __attribute__((visibility("default"))) int _ZN14PQTuningBuffer16isBypassHWAccessEv(void) {
    ALOGD("_ZN14PQTuningBuffer16isBypassHWAccessEv() called");
    return 0;
}

/* Demangled: PQDCAdaptor::isADLEnable(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11PQDCAdaptor11isADLEnableEii(void) {
    ALOGD("_ZN11PQDCAdaptor11isADLEnableEii() called");
    return 0;
}

/* Demangled: PQDREHistogramAdaptor::getDREInput(void*, unsigned int, int, int, DRETopInput*, unsigned int*, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN21PQDREHistogramAdaptor11getDREInputEPvjiiP11DRETopInputPjRj(void) {
    ALOGD("_ZN21PQDREHistogramAdaptor11getDREInputEPvjiiP11DRETopInputPjRj() called");
    return 0;
}

/* Demangled: tile_tdr_isp_fprint_dump_eaf(__sFILE*, TILE_REG_MAP_STRUCT*, int, unsigned int*, unsigned int*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z28tile_tdr_isp_fprint_dump_eafP7__sFILEP19TILE_REG_MAP_STRUCTiPjS3_jj(void) {
    ALOGD("_Z28tile_tdr_isp_fprint_dump_eafP7__sFILEP19TILE_REG_MAP_STRUCTiPjS3_jj() called");
    return 0;
}

/* Demangled: wrapper_tile_cal_main_dp(int, TILE_PARAM_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z24wrapper_tile_cal_main_dpiP17TILE_PARAM_STRUCT(void) {
    ALOGD("_Z24wrapper_tile_cal_main_dpiP17TILE_PARAM_STRUCT() called");
    return 0;
}

/* Demangled: DpIonHandler::queryFeature() */
extern "C" __attribute__((visibility("default"))) int _ZN12DpIonHandler12queryFeatureEv(void) {
    ALOGD("_ZN12DpIonHandler12queryFeatureEv() called");
    return 0;
}

/* Demangled: PQConfig::checkBootMode() */
extern "C" __attribute__((visibility("default"))) int _ZN8PQConfig13checkBootModeEv(void) {
    ALOGD("_ZN8PQConfig13checkBootModeEv() called");
    return 0;
}

/* Demangled: PQColorAdaptor::~PQColorAdaptor() */
extern "C" __attribute__((visibility("default"))) int _ZN14PQColorAdaptorD2Ev(void) {
    ALOGD("_ZN14PQColorAdaptorD2Ev() called");
    return 0;
}

/* Demangled: tile_tdr_isp_dump_inv_reg_internal_bld(TILE_REG_MAP_STRUCT*, TILE_REG_MAP_STRUCT*, int, unsigned int*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z38tile_tdr_isp_dump_inv_reg_internal_bldP19TILE_REG_MAP_STRUCTS0_iPjjj(void) {
    ALOGD("_Z38tile_tdr_isp_dump_inv_reg_internal_bldP19TILE_REG_MAP_STRUCTS0_iPjjj() called");
    return 0;
}

/* Demangled: DpEngine_RDMA::onConfigFrame(DpCommand&, DpConfig&) */
extern "C" __attribute__((visibility("default"))) int _ZN13DpEngine_RDMA13onConfigFrameER9DpCommandR8DpConfig(void) {
    ALOGD("_ZN13DpEngine_RDMA13onConfigFrameER9DpCommandR8DpConfig() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi() called");
    return 0;
}

/* Demangled: DpTileEngine::getContinueReadbackBuffer(DpCommand&, unsigned int*, unsigned int&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpTileEngine25getContinueReadbackBufferER9DpCommandPjRjj(void) {
    ALOGD("_ZN12DpTileEngine25getContinueReadbackBufferER9DpCommandPjRjj() called");
    return 0;
}

/* Demangled: DpEngine_AAL::onInitEngine(DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpEngine_AAL12onInitEngineER9DpCommand(void) {
    ALOGD("_ZN12DpEngine_AAL12onInitEngineER9DpCommand() called");
    return 0;
}

/* Demangled: PQSession::cleanAIParamDirty() */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession17cleanAIParamDirtyEv(void) {
    ALOGD("_ZN9PQSession17cleanAIParamDirtyEv() called");
    return 0;
}

/* Demangled: DpPathComposer::mergePath(DpPortAdapt*, DpPortAdapt*, int (&) [25], int, int, DpPathBase*) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpPathComposer9mergePathEP11DpPortAdaptS1_RA25_iiiP10DpPathBase(void) {
    ALOGD("_ZN14DpPathComposer9mergePathEP11DpPortAdaptS1_RA25_iiiP10DpPathBase() called");
    return 0;
}

/* Demangled: DpPathConnection::~DpPathConnection() */
extern "C" __attribute__((visibility("default"))) int _ZN16DpPathConnectionD1Ev(void) {
    ALOGD("_ZN16DpPathConnectionD1Ev() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream::setDstConfig(unsigned int, int, int, int, int, DP_COLOR_ENUM, DP_PROFILE_ENUM, DpInterlaceFormat, DpRect*, DpSecure, bool, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpAsyncBlitStream12setDstConfigEjiiii13DP_COLOR_ENUM15DP_PROFILE_ENUM17DpInterlaceFormatP6DpRect8DpSecurebji(void) {
    ALOGD("_ZN17DpAsyncBlitStream12setDstConfigEjiiii13DP_COLOR_ENUM15DP_PROFILE_ENUM17DpInterlaceFormatP6DpRect8DpSecurebji() called");
    return 0;
}

/* Demangled: DpCommandRecorder::addMetLog(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorder9addMetLogEPKcj(void) {
    ALOGD("_ZN17DpCommandRecorder9addMetLogEPKcj() called");
    return 0;
}

/* Demangled: PQDSConfig::isDShpEnabled(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN10PQDSConfig13isDShpEnabledEb(void) {
    ALOGD("_ZN10PQDSConfig13isDShpEnabledEb() called");
    return 0;
}

/* Demangled: DpFragStream::setPQParameter(DpPqParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpFragStream14setPQParameterERK9DpPqParam(void) {
    ALOGD("_ZN12DpFragStream14setPQParameterERK9DpPqParam() called");
    return 0;
}

/* Demangled: DpCommandRecorder::addMMpathLog(char const*, unsigned int, DP_MMPATH_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorder12addMMpathLogEPKcj14DP_MMPATH_ENUM(void) {
    ALOGD("_ZN17DpCommandRecorder12addMMpathLogEPKcj14DP_MMPATH_ENUM() called");
    return 0;
}

/* Demangled: PQColorConfig::isEnabled(int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN13PQColorConfig9isEnabledEib(void) {
    ALOGD("_ZN13PQColorConfig9isEnabledEib() called");
    return 0;
}

/* Demangled: DpPathControl::onDumpDebugStream() */
extern "C" __attribute__((visibility("default"))) int _ZN13DpPathControl17onDumpDebugStreamEv(void) {
    ALOGD("_ZN13DpPathControl17onDumpDebugStreamEv() called");
    return 0;
}

/* Demangled: PQHDRAdaptor::getPQID(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQHDRAdaptor7getPQIDEb(void) {
    ALOGD("_ZN12PQHDRAdaptor7getPQIDEb() called");
    return 0;
}

/* Demangled: DpRingBufferPool::mapBufferLine(int, int, int*, int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK16DpRingBufferPool13mapBufferLineEiiPiS0_(void) {
    ALOGD("_ZNK16DpRingBufferPool13mapBufferLineEiiPiS0_() called");
    return 0;
}

/* Exported Object: WROT1Reg */
extern "C" __attribute__((visibility("default"))) void* WROT1Reg = NULL;

/* Demangled: PQSession::getDSReg(DpPqParam const*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession8getDSRegEPK9DpPqParamPj(void) {
    ALOGD("_ZN9PQSession8getDSRegEPK9DpPqParamPj() called");
    return 0;
}

/* Demangled: utilWriteBin(char const*, void*, void*, void*, DP_COLOR_ENUM, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z12utilWriteBinPKcPvS1_S1_13DP_COLOR_ENUMiiii(void) {
    ALOGD("_Z12utilWriteBinPKcPvS1_S1_13DP_COLOR_ENUMiiii() called");
    return 0;
}

/* Demangled: DpBufferPoolBase::dumpBuffer(int, DP_COLOR_ENUM, int, int, int, int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN16DpBufferPoolBase10dumpBufferEi13DP_COLOR_ENUMiiiiPKc(void) {
    ALOGD("_ZN16DpBufferPoolBase10dumpBufferEi13DP_COLOR_ENUMiiiiPKc() called");
    return 0;
}

/* Demangled: DpBufferPoolBase::getSWBaseWithIDBySize(int, void**, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN16DpBufferPoolBase21getSWBaseWithIDBySizeEiPPvj(void) {
    ALOGD("_ZN16DpBufferPoolBase21getSWBaseWithIDBySizeEiPPvj() called");
    return 0;
}

/* Demangled: PQConfig::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN8PQConfig11getInstanceEv(void) {
    ALOGD("_ZN8PQConfig11getInstanceEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to DpTilePathST::threadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZThn170348_N12DpTilePathST10threadLoopEv(void) {
    ALOGD("_ZThn170348_N12DpTilePathST10threadLoopEv() called");
    return 0;
}

/* Demangled: DpDriver::queryDeviceTreeInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN8DpDriver19queryDeviceTreeInfoEv(void) {
    ALOGD("_ZN8DpDriver19queryDeviceTreeInfoEv() called");
    return 0;
}

/* Demangled: PQSession::isDCDoneHistEmpty() */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession17isDCDoneHistEmptyEv(void) {
    ALOGD("_ZN9PQSession17isDCDoneHistEmptyEv() called");
    return 0;
}

/* Demangled: DpStream::resetStream() */
extern "C" __attribute__((visibility("default"))) int _ZN8DpStream11resetStreamEv(void) {
    ALOGD("_ZN8DpStream11resetStreamEv() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream2::queryPaddingSide(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN18DpAsyncBlitStream216queryPaddingSideEj(void) {
    ALOGD("_ZN18DpAsyncBlitStream216queryPaddingSideEj() called");
    return 0;
}

/* Demangled: PQSession::getNodePipeNum() */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession14getNodePipeNumEv(void) {
    ALOGD("_ZN9PQSession14getNodePipeNumEv() called");
    return 0;
}

/* Demangled: DpCommandQueue::mark(DpCommand::BLOCK_TYPE_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpCommandQueue4markEN9DpCommand15BLOCK_TYPE_ENUME(void) {
    ALOGD("_ZN14DpCommandQueue4markEN9DpCommand15BLOCK_TYPE_ENUME() called");
    return 0;
}

/* Demangled: PQSession::setDpPqConfig(DpPqConfig*, DpPqParam const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession13setDpPqConfigEP10DpPqConfigPK9DpPqParam(void) {
    ALOGD("_ZN9PQSession13setDpPqConfigEP10DpPqConfigPK9DpPqParam() called");
    return 0;
}

/* Demangled: tile_tdr_isp_fprint_dump_internal_bld(__sFILE*, TILE_REG_MAP_STRUCT*, int, unsigned int*, unsigned int*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z37tile_tdr_isp_fprint_dump_internal_bldP7__sFILEP19TILE_REG_MAP_STRUCTiPjS3_jj(void) {
    ALOGD("_Z37tile_tdr_isp_fprint_dump_internal_bldP7__sFILEP19TILE_REG_MAP_STRUCTiPjS3_jj() called");
    return 0;
}

/* Demangled: DpPortAdapt::getSourceCrop(int*, int*, int*, int*, int*, int*, int*, int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK11DpPortAdapt13getSourceCropEPiS0_S0_S0_S0_S0_S0_S0_(void) {
    ALOGD("_ZNK11DpPortAdapt13getSourceCropEPiS0_S0_S0_S0_S0_S0_S0_() called");
    return 0;
}

/* Demangled: DpIspStream::queueSrcBuffer(void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpIspStream14queueSrcBufferEPvj(void) {
    ALOGD("_ZN11DpIspStream14queueSrcBufferEPvj() called");
    return 0;
}

/* Demangled: DpTileEngine::onRetrieveTileParam(TILE_PARAM_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpTileEngine19onRetrieveTileParamEP17TILE_PARAM_STRUCT(void) {
    ALOGD("_ZN12DpTileEngine19onRetrieveTileParamEP17TILE_PARAM_STRUCT() called");
    return 0;
}

/* Demangled: DpVEncStream::queueDstBuffer(int, int, unsigned int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpVEncStream14queueDstBufferEiiPji(void) {
    ALOGD("_ZN12DpVEncStream14queueDstBufferEiiPji() called");
    return 0;
}

/* Demangled: DpCommandRecorder::getRegDstNum() */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorder12getRegDstNumEv(void) {
    ALOGD("_ZN17DpCommandRecorder12getRegDstNumEv() called");
    return 0;
}

/* Demangled: DpTilePath::dumpTileDebugInfo(ISP_TILE_MESSAGE_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN10DpTilePath17dumpTileDebugInfoE21ISP_TILE_MESSAGE_ENUM(void) {
    ALOGD("_ZN10DpTilePath17dumpTileDebugInfoE21ISP_TILE_MESSAGE_ENUM() called");
    return 0;
}

/* Demangled: PQHDRAdaptor::onCalculateISP(DpPqParam const*, PQSession*, DHDRINPUT*, DHDROUTPUT*, DpConfig&, _DP_VDEC_DRV_COLORDESC_T*, _DP_VDEC_DRV_DYNAMIC_METADATA_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQHDRAdaptor14onCalculateISPEPK9DpPqParamP9PQSessionP9DHDRINPUTP10DHDROUTPUTR8DpConfigP24_DP_VDEC_DRV_COLORDESC_TP31_DP_VDEC_DRV_DYNAMIC_METADATA_T(void) {
    ALOGD("_ZN12PQHDRAdaptor14onCalculateISPEPK9DpPqParamP9PQSessionP9DHDRINPUTP10DHDROUTPUTR8DpConfigP24_DP_VDEC_DRV_COLORDESC_TP31_DP_VDEC_DRV_DYNAMIC_METADATA_T() called");
    return 0;
}

/* Demangled: PQHDRConfig::getDriverDebugFlag(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN11PQHDRConfig18getDriverDebugFlagEb(void) {
    ALOGD("_ZN11PQHDRConfig18getDriverDebugFlagEb() called");
    return 0;
}

/* Exported Object: vtable for DpIonHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTV12DpIonHandler = NULL;

/* Demangled: PQSession::addHDRWaitHistListNode(PQHDRRegInfo) */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession22addHDRWaitHistListNodeE12PQHDRRegInfo(void) {
    ALOGD("_ZN9PQSession22addHDRWaitHistListNodeE12PQHDRRegInfo() called");
    return 0;
}

/* Exported Object: PQSessionManager::m_maxVideoIndex */
extern "C" __attribute__((visibility("default"))) void* _ZN16PQSessionManager15m_maxVideoIndexE = NULL;

/* Demangled: DpFragStream::setSrcConfig(DP_COLOR_ENUM, int, int, int, int, int, DpRect*) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpFragStream12setSrcConfigE13DP_COLOR_ENUMiiiiiP6DpRect(void) {
    ALOGD("_ZN12DpFragStream12setSrcConfigE13DP_COLOR_ENUMiiiiiP6DpRect() called");
    return 0;
}

/* Demangled: DpVEncStream::setDstConfig(int, DP_COLOR_ENUM, int, int, int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpVEncStream12setDstConfigEi13DP_COLOR_ENUMiiib(void) {
    ALOGD("_ZN12DpVEncStream12setDstConfigEi13DP_COLOR_ENUMiiib() called");
    return 0;
}

/* Demangled: DpVEncStream::~DpVEncStream() */
extern "C" __attribute__((visibility("default"))) int _ZN12DpVEncStreamD2Ev(void) {
    ALOGD("_ZN12DpVEncStreamD2Ev() called");
    return 0;
}

/* Demangled: DpEngine_WROT::onConfigFrame(DpCommand&, DpConfig&) */
extern "C" __attribute__((visibility("default"))) int _ZN13DpEngine_WROT13onConfigFrameER9DpCommandR8DpConfig(void) {
    ALOGD("_ZN13DpEngine_WROT13onConfigFrameER9DpCommandR8DpConfig() called");
    return 0;
}

/* Demangled: PQDCAdaptor::checkAndResetUnusedADLFW(PQSession*, dcHandle*, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN11PQDCAdaptor24checkAndResetUnusedADLFWEP9PQSessionP8dcHandley(void) {
    ALOGD("_ZN11PQDCAdaptor24checkAndResetUnusedADLFWEP9PQSessionP8dcHandley() called");
    return 0;
}

/* Demangled: tile_tdr_isp_dump_inv_reg(TILE_REG_MAP_STRUCT*, TILE_REG_MAP_STRUCT*, int, unsigned int*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z25tile_tdr_isp_dump_inv_regP19TILE_REG_MAP_STRUCTS0_iPjjj(void) {
    ALOGD("_Z25tile_tdr_isp_dump_inv_regP19TILE_REG_MAP_STRUCTS0_iPjjj() called");
    return 0;
}

/* Demangled: DpEngine_CAMIN::onConfigTile(DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpEngine_CAMIN12onConfigTileER9DpCommand(void) {
    ALOGD("_ZN14DpEngine_CAMIN12onConfigTileER9DpCommand() called");
    return 0;
}

/* Demangled: PQSession::getHDRMode() */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession10getHDRModeEv(void) {
    ALOGD("_ZN9PQSession10getHDRModeEv() called");
    return 0;
}

/* Demangled: DpVEncStream::startVideoRecord(unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpVEncStream16startVideoRecordEjjj(void) {
    ALOGD("_ZN12DpVEncStream16startVideoRecordEjjj() called");
    return 0;
}

/* Demangled: DpIonHandler::~DpIonHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN12DpIonHandlerD1Ev(void) {
    ALOGD("_ZN12DpIonHandlerD1Ev() called");
    return 0;
}

/* Demangled: DpIspStream::queueDstBuffer(int, void**, unsigned int*, unsigned int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpIspStream14queueDstBufferEiPPvPjS2_i(void) {
    ALOGD("_ZN11DpIspStream14queueDstBufferEiPPvPjS2_i() called");
    return 0;
}

/* Demangled: DpIspStream::queueDstBuffer(int, void**, unsigned int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpIspStream14queueDstBufferEiPPvPji(void) {
    ALOGD("_ZN11DpIspStream14queueDstBufferEiPPvPji() called");
    return 0;
}

/* Demangled: PQColorAdaptor::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN14PQColorAdaptor15destroyInstanceEv(void) {
    ALOGD("_ZN14PQColorAdaptor15destroyInstanceEv() called");
    return 0;
}

/* Demangled: PQDREAdaptor::getDREOutput(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQDREAdaptor12getDREOutputEb(void) {
    ALOGD("_ZN12PQDREAdaptor12getDREOutputEb() called");
    return 0;
}

/* Demangled: PQDREAdaptor::debugDumpTransData(DRETransInfo const*, DREsharedata const*) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQDREAdaptor18debugDumpTransDataEPK12DRETransInfoPK12DREsharedata(void) {
    ALOGD("_ZN12PQDREAdaptor18debugDumpTransDataEPK12DRETransInfoPK12DREsharedata() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream::setDstBuffer(unsigned int, void**, unsigned int*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpAsyncBlitStream12setDstBufferEjPPvPjji(void) {
    ALOGD("_ZN17DpAsyncBlitStream12setDstBufferEjPPvPjji() called");
    return 0;
}

/* Demangled: DpDriver::DpDriver() */
extern "C" __attribute__((visibility("default"))) int _ZN8DpDriverC1Ev(void) {
    ALOGD("_ZN8DpDriverC1Ev() called");
    return 0;
}

/* Demangled: PQDSAdaptor::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN11PQDSAdaptor15destroyInstanceEv(void) {
    ALOGD("_ZN11PQDSAdaptor15destroyInstanceEv() called");
    return 0;
}

/* Demangled: tile_tdr_isp_mask_to_dump_bld(TILE_REG_MAP_STRUCT*, unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z29tile_tdr_isp_mask_to_dump_bldP19TILE_REG_MAP_STRUCTPjS1_(void) {
    ALOGD("_Z29tile_tdr_isp_mask_to_dump_bldP19TILE_REG_MAP_STRUCTPjS1_() called");
    return 0;
}

/* Exported Object: vtable for ListPtr<DpRingBufferPool::RingBufferNode> */
extern "C" __attribute__((visibility("default"))) void* _ZTV7ListPtrIN16DpRingBufferPool14RingBufferNodeEE = NULL;

/* Demangled: DpAsyncBlitStream2::~DpAsyncBlitStream2() */
extern "C" __attribute__((visibility("default"))) int _ZN18DpAsyncBlitStream2D1Ev(void) {
    ALOGD("_ZN18DpAsyncBlitStream2D1Ev() called");
    return 0;
}

/* Demangled: DpVEncStream::waitSubmit() */
extern "C" __attribute__((visibility("default"))) int _ZN12DpVEncStream10waitSubmitEv(void) {
    ALOGD("_ZN12DpVEncStream10waitSubmitEv() called");
    return 0;
}

/* Demangled: DpCommandQueue::read(unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpCommandQueue4readEjjj(void) {
    ALOGD("_ZN14DpCommandQueue4readEjjj() called");
    return 0;
}

/* Demangled: DpCommandRecorder::dumpRecord() */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorder10dumpRecordEv(void) {
    ALOGD("_ZN17DpCommandRecorder10dumpRecordEv() called");
    return 0;
}

/* Demangled: PQDREConfig::isVPEnabled(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN11PQDREConfig11isVPEnabledEb(void) {
    ALOGD("_ZN11PQDREConfig11isVPEnabledEb() called");
    return 0;
}

/* Demangled: DpCommandRecorder::setSubtaskId(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorder12setSubtaskIdEj(void) {
    ALOGD("_ZN17DpCommandRecorder12setSubtaskIdEj() called");
    return 0;
}

/* Demangled: DpPathConnection::~DpPathConnection() */
extern "C" __attribute__((visibility("default"))) int _ZN16DpPathConnectionD2Ev(void) {
    ALOGD("_ZN16DpPathConnectionD2Ev() called");
    return 0;
}

/* Demangled: DpIspStream::queueSrcBuffer(unsigned int*, unsigned int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpIspStream14queueSrcBufferEPjS0_i(void) {
    ALOGD("_ZN11DpIspStream14queueSrcBufferEPjS0_i() called");
    return 0;
}

/* Demangled: VENCPostProc(DpVEnc_Config*, unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z12VENCPostProcP13DpVEnc_ConfigjPj(void) {
    ALOGD("_Z12VENCPostProcP13DpVEnc_ConfigjPj() called");
    return 0;
}

/* Demangled: DpCommandQueue::write(unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpCommandQueue5writeEjjj(void) {
    ALOGD("_ZN14DpCommandQueue5writeEjjj() called");
    return 0;
}

/* Demangled: DpEngine_HDR::onReconfigFrame(DpCommand&, DpConfig&) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpEngine_HDR15onReconfigFrameER9DpCommandR8DpConfig(void) {
    ALOGD("_ZN12DpEngine_HDR15onReconfigFrameER9DpCommandR8DpConfig() called");
    return 0;
}

/* Demangled: PQSession::getSVP() */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession6getSVPEv(void) {
    ALOGD("_ZN9PQSession6getSVPEv() called");
    return 0;
}

/* Demangled: PQDSAdaptor::dumpFwRegInFw(DpPqParam*, DSInput*, DSOutput*, DSReg*, PQSession*) */
extern "C" __attribute__((visibility("default"))) int _ZN11PQDSAdaptor13dumpFwRegInFwEP9DpPqParamP7DSInputP8DSOutputP5DSRegP9PQSession(void) {
    ALOGD("_ZN11PQDSAdaptor13dumpFwRegInFwEP9DpPqParamP7DSInputP8DSOutputP5DSRegP9PQSession() called");
    return 0;
}

/* Demangled: setESLWDMA(DpCommand&, DP_COLOR_ENUM) */
extern "C" __attribute__((visibility("default"))) int _Z10setESLWDMAR9DpCommand13DP_COLOR_ENUM(void) {
    ALOGD("_Z10setESLWDMAR9DpCommand13DP_COLOR_ENUM() called");
    return 0;
}

/* Demangled: funcFitConstraint(DpRingBufferPool*, int, int, int, int, int&, int&, int&, int&) */
extern "C" __attribute__((visibility("default"))) int _Z17funcFitConstraintP16DpRingBufferPooliiiiRiS1_S1_S1_(void) {
    ALOGD("_Z17funcFitConstraintP16DpRingBufferPooliiiiRiS1_S1_S1_() called");
    return 0;
}

/* Demangled: DpChannel::DpChannel() */
extern "C" __attribute__((visibility("default"))) int _ZN9DpChannelC1Ev(void) {
    ALOGD("_ZN9DpChannelC1Ev() called");
    return 0;
}

/* Demangled: DpFragStream::getPqID() */
extern "C" __attribute__((visibility("default"))) int _ZN12DpFragStream7getPqIDEv(void) {
    ALOGD("_ZN12DpFragStream7getPqIDEv() called");
    return 0;
}

/* Exported Object: PQSessionManager::s_ALMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN16PQSessionManager9s_ALMutexE = NULL;

/* Demangled: tile_print_error_message(ISP_TILE_MESSAGE_ENUM) */
extern "C" __attribute__((visibility("default"))) int _Z24tile_print_error_message21ISP_TILE_MESSAGE_ENUM(void) {
    ALOGD("_Z24tile_print_error_message21ISP_TILE_MESSAGE_ENUM() called");
    return 0;
}

/* Demangled: DpCommandQueue::DpCommandQueue(DpPathBase*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpCommandQueueC2EP10DpPathBasej(void) {
    ALOGD("_ZN14DpCommandQueueC2EP10DpPathBasej() called");
    return 0;
}

/* Demangled: PQSession::getDCisHW0Done() */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession14getDCisHW0DoneEv(void) {
    ALOGD("_ZN9PQSession14getDCisHW0DoneEv() called");
    return 0;
}

/* Demangled: PQDCAdaptor::getDCTable(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN11PQDCAdaptor10getDCTableEb(void) {
    ALOGD("_ZN11PQDCAdaptor10getDCTableEb() called");
    return 0;
}

/* Demangled: PQReadBackFactory::~PQReadBackFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN17PQReadBackFactoryD1Ev(void) {
    ALOGD("_ZN17PQReadBackFactoryD1Ev() called");
    return 0;
}

/* Exported Object: PQColorAdaptor::s_pInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN14PQColorAdaptor11s_pInstanceE = NULL;

/* Demangled: DpPathControl::onInitStream() */
extern "C" __attribute__((visibility("default"))) int _ZN13DpPathControl12onInitStreamEv(void) {
    ALOGD("_ZN13DpPathControl12onInitStreamEv() called");
    return 0;
}

/* Demangled: DpTileEngine::onInitTileCalc(TILE_PARAM_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpTileEngine14onInitTileCalcEP17TILE_PARAM_STRUCT(void) {
    ALOGD("_ZN12DpTileEngine14onInitTileCalcEP17TILE_PARAM_STRUCT() called");
    return 0;
}

/* Demangled: DpDriver::getEnableMet() */
extern "C" __attribute__((visibility("default"))) int _ZN8DpDriver12getEnableMetEv(void) {
    ALOGD("_ZN8DpDriver12getEnableMetEv() called");
    return 0;
}

/* Demangled: DpWrapper_ISP::onDumpDebugInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN13DpWrapper_ISP15onDumpDebugInfoEv(void) {
    ALOGD("_ZN13DpWrapper_ISP15onDumpDebugInfoEv() called");
    return 0;
}

/* Demangled: PQDSAdaptor::getInstance(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11PQDSAdaptor11getInstanceEj(void) {
    ALOGD("_ZN11PQDSAdaptor11getInstanceEj() called");
    return 0;
}

/* Demangled: DpPathComposer::createPathAndNew(DpPortAdapt*, DpPortAdapt*, int (&) [25], int, int, DpPathBase*&, int, STREAM_TYPE_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpPathComposer16createPathAndNewEP11DpPortAdaptS1_RA25_iiiRP10DpPathBasei16STREAM_TYPE_ENUM(void) {
    ALOGD("_ZN14DpPathComposer16createPathAndNewEP11DpPortAdaptS1_RA25_iiiRP10DpPathBasei16STREAM_TYPE_ENUM() called");
    return 0;
}

/* Demangled: PQDREHistogramAdaptor::findEmptyBuffer(unsigned long long, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN21PQDREHistogramAdaptor15findEmptyBufferEyPj(void) {
    ALOGD("_ZN21PQDREHistogramAdaptor15findEmptyBufferEyPj() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream::setDstBuffer(unsigned int, void**, void**, unsigned int*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpAsyncBlitStream12setDstBufferEjPPvS1_Pjji(void) {
    ALOGD("_ZN17DpAsyncBlitStream12setDstBufferEjPPvS1_Pjji() called");
    return 0;
}

/* Demangled: DpChannel::addTargetPort(int, PORT_TYPE_ENUM, DP_COLOR_ENUM, int, int, int, int, int, bool, unsigned long long, unsigned int, bool, DpBufferPoolBase*, DP_PROFILE_ENUM, DpSecure, bool, DpColorMatrix const*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN9DpChannel13addTargetPortEi14PORT_TYPE_ENUM13DP_COLOR_ENUMiiiiibyjbP16DpBufferPoolBase15DP_PROFILE_ENUM8DpSecurebPK13DpColorMatrixPv(void) {
    ALOGD("_ZN9DpChannel13addTargetPortEi14PORT_TYPE_ENUM13DP_COLOR_ENUMiiiiibyjbP16DpBufferPoolBase15DP_PROFILE_ENUM8DpSecurebPK13DpColorMatrixPv() called");
    return 0;
}

/* Demangled: DpBlitStream::setDstConfig(int, int, int, int, DP_COLOR_ENUM, DP_PROFILE_ENUM, DpInterlaceFormat, DpRect*, DpSecure, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpBlitStream12setDstConfigEiiii13DP_COLOR_ENUM15DP_PROFILE_ENUM17DpInterlaceFormatP6DpRect8DpSecureb(void) {
    ALOGD("_ZN12DpBlitStream12setDstConfigEiiii13DP_COLOR_ENUM15DP_PROFILE_ENUM17DpInterlaceFormatP6DpRect8DpSecureb() called");
    return 0;
}

/* Demangled: DpCommandRecorder::getPQReadback() */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorder13getPQReadbackEv(void) {
    ALOGD("_ZN17DpCommandRecorder13getPQReadbackEv() called");
    return 0;
}

/* Demangled: DpPathConnection::enablePath(DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN16DpPathConnection10enablePathER9DpCommand(void) {
    ALOGD("_ZN16DpPathConnection10enablePathER9DpCommand() called");
    return 0;
}

/* Demangled: DpDriver::getEventValue(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8DpDriver13getEventValueEi(void) {
    ALOGD("_ZNK8DpDriver13getEventValueEi() called");
    return 0;
}

/* Demangled: DpCommandRecorder::DpCommandRecorder(DpPathBase*) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorderC1EP10DpPathBase(void) {
    ALOGD("_ZN17DpCommandRecorderC1EP10DpPathBase() called");
    return 0;
}

/* Demangled: PQDREAdaptor::debugDumpFrameReg(DRETopOutput const*, DREInitParam const*, DREInitReg const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQDREAdaptor17debugDumpFrameRegEPK12DRETopOutputPK12DREInitParamPK10DREInitRegj(void) {
    ALOGD("_ZN12PQDREAdaptor17debugDumpFrameRegEPK12DRETopOutputPK12DREInitParamPK10DREInitRegj() called");
    return 0;
}

/* Demangled: DpRingBufferPool::destroyBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN16DpRingBufferPool13destroyBufferEv(void) {
    ALOGD("_ZN16DpRingBufferPool13destroyBufferEv() called");
    return 0;
}

/* Demangled: PQDSAdaptor::onCalculate(DSInput const*, DSOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN11PQDSAdaptor11onCalculateEPK7DSInputP8DSOutput(void) {
    ALOGD("_ZN11PQDSAdaptor11onCalculateEPK7DSInputP8DSOutput() called");
    return 0;
}

/* Demangled: PQHDRAdaptor::onConfigHDR(DpCommand&, DHDROUTPUT*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQHDRAdaptor11onConfigHDRER9DpCommandP10DHDROUTPUTPi(void) {
    ALOGD("_ZN12PQHDRAdaptor11onConfigHDRER9DpCommandP10DHDROUTPUTPi() called");
    return 0;
}

/* Demangled: DpPathComposer::DpPathComposer(DpStream*) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpPathComposerC1EP8DpStream(void) {
    ALOGD("_ZN14DpPathComposerC1EP8DpStream() called");
    return 0;
}

/* Demangled: DpWrapper_WPE::initTilePath(TILE_PARAM_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN13DpWrapper_WPE12initTilePathEP17TILE_PARAM_STRUCT(void) {
    ALOGD("_ZN13DpWrapper_WPE12initTilePathEP17TILE_PARAM_STRUCT() called");
    return 0;
}

/* Demangled: DpBufferPoolBase::DpBufferPoolBase(BUFFER_TYPE_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN16DpBufferPoolBaseC2E16BUFFER_TYPE_ENUM(void) {
    ALOGD("_ZN16DpBufferPoolBaseC2E16BUFFER_TYPE_ENUM() called");
    return 0;
}

/* Demangled: DpIonHandler::~DpIonHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN12DpIonHandlerD2Ev(void) {
    ALOGD("_ZN12DpIonHandlerD2Ev() called");
    return 0;
}

/* Demangled: PQDSConfig::PQDSConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN10PQDSConfigC1Ev(void) {
    ALOGD("_ZN10PQDSConfigC1Ev() called");
    return 0;
}

/* Demangled: PQAlgorithmAdaptor::PQAlgorithmAdaptor(ProxyTuningBuffer, ProxyTuningBuffer, ProxyTuningBuffer, ProxyTuningBuffer) */
extern "C" __attribute__((visibility("default"))) int _ZN18PQAlgorithmAdaptorC1E17ProxyTuningBufferS0_S0_S0_(void) {
    ALOGD("_ZN18PQAlgorithmAdaptorC1E17ProxyTuningBufferS0_S0_S0_() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::setbuf(char*, int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPci(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPci() called");
    return 0;
}

/* Demangled: DpPathTopology::~DpPathTopology() */
extern "C" __attribute__((visibility("default"))) int _ZN14DpPathTopologyD1Ev(void) {
    ALOGD("_ZN14DpPathTopologyD1Ev() called");
    return 0;
}

/* Demangled: DpEngineBase::reconfigFrame(DpCommand&, DpConfig&) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpEngineBase13reconfigFrameER9DpCommandR8DpConfig(void) {
    ALOGD("_ZN12DpEngineBase13reconfigFrameER9DpCommandR8DpConfig() called");
    return 0;
}

/* Demangled: DpVEncStream::setPQParameter(int, DpPqParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpVEncStream14setPQParameterEiRK9DpPqParam(void) {
    ALOGD("_ZN12DpVEncStream14setPQParameterEiRK9DpPqParam() called");
    return 0;
}

/* Demangled: DpDriver::DpDriver() */
extern "C" __attribute__((visibility("default"))) int _ZN8DpDriverC2Ev(void) {
    ALOGD("_ZN8DpDriverC2Ev() called");
    return 0;
}

/* Demangled: PQAshmem::getAshmemValueByOffset(unsigned int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN8PQAshmem22getAshmemValueByOffsetEjPi(void) {
    ALOGD("_ZN8PQAshmem22getAshmemValueByOffsetEjPi() called");
    return 0;
}

/* Demangled: tile_tpipe_conf_and_isp_reg_cmp_without_tdr(TILE_REG_MAP_STRUCT*, ISP_TPIPE_CONFIG_STRUCT*, char const*, char const*, char const*, char const*, char const*, char const*, void*, void*, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z43tile_tpipe_conf_and_isp_reg_cmp_without_tdrP19TILE_REG_MAP_STRUCTP23ISP_TPIPE_CONFIG_STRUCTPKcS4_S4_S4_S4_S4_PvS5_S5_S5_(void) {
    ALOGD("_Z43tile_tpipe_conf_and_isp_reg_cmp_without_tdrP19TILE_REG_MAP_STRUCTP23ISP_TPIPE_CONFIG_STRUCTPKcS4_S4_S4_S4_S4_PvS5_S5_S5_() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream2::~DpAsyncBlitStream2() */
extern "C" __attribute__((visibility("default"))) int _ZN18DpAsyncBlitStream2D2Ev(void) {
    ALOGD("_ZN18DpAsyncBlitStream2D2Ev() called");
    return 0;
}

/* Demangled: PQSession::updateDREShareStatus(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession20updateDREShareStatusEi(void) {
    ALOGD("_ZN9PQSession20updateDREShareStatusEi() called");
    return 0;
}

/* Demangled: PQDREAdaptor::dumpFWHWReg(unsigned int, DpPqConfig*, CDREVPTopFW*, CDRETopFW*, DREVPInitReg, DREInitReg) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQDREAdaptor11dumpFWHWRegEjP10DpPqConfigP11CDREVPTopFWP9CDRETopFW12DREVPInitReg10DREInitReg(void) {
    ALOGD("_ZN12PQDREAdaptor11dumpFWHWRegEjP10DpPqConfigP11CDREVPTopFWP9CDRETopFW12DREVPInitReg10DREInitReg() called");
    return 0;
}

/* Demangled: tile_lut_mdp_func_support(int*, TILE_FUNC_BLOCK_STRUCT*, TILE_REG_MAP_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z25tile_lut_mdp_func_supportPiP22TILE_FUNC_BLOCK_STRUCTP19TILE_REG_MAP_STRUCT(void) {
    ALOGD("_Z25tile_lut_mdp_func_supportPiP22TILE_FUNC_BLOCK_STRUCTP19TILE_REG_MAP_STRUCT() called");
    return 0;
}

/* Demangled: PQSessionManager::getPQSession(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN16PQSessionManager12getPQSessionEy(void) {
    ALOGD("_ZN16PQSessionManager12getPQSessionEy() called");
    return 0;
}

/* Demangled: DpCommandQueue::wait(DpCommandBase::EVENT_TYPE_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpCommandQueue4waitEN13DpCommandBase15EVENT_TYPE_ENUME(void) {
    ALOGD("_ZN14DpCommandQueue4waitEN13DpCommandBase15EVENT_TYPE_ENUME() called");
    return 0;
}

/* Demangled: DpStream::setHistogram() */
extern "C" __attribute__((visibility("default"))) int _ZN8DpStream12setHistogramEv(void) {
    ALOGD("_ZN8DpStream12setHistogramEv() called");
    return 0;
}

/* Demangled: DpStream::cleanReadbackEngineStatus(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8DpStream25cleanReadbackEngineStatusEj(void) {
    ALOGD("_ZN8DpStream25cleanReadbackEngineStatusEj() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream2::setSrcBuffer(void**, void**, unsigned int*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN18DpAsyncBlitStream212setSrcBufferEPPvS1_Pjji(void) {
    ALOGD("_ZN18DpAsyncBlitStream212setSrcBufferEPPvS1_Pjji() called");
    return 0;
}

/* Demangled: void std::__1::vector<DpAsyncBlitStream2::AsyncBlitJobPair*, std::__1::allocator<DpAsyncBlitStream2::AsyncBlitJobPair*> >::__push_back_slow_path<DpAsyncBlitStream2::AsyncBlitJobPair* const&>(DpAsyncBlitStream2::AsyncBlitJobPair* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN18DpAsyncBlitStream216AsyncBlitJobPairENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPN18DpAsyncBlitStream216AsyncBlitJobPairENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_() called");
    return 0;
}

/* Demangled: DpChannel::DpChannel() */
extern "C" __attribute__((visibility("default"))) int _ZN9DpChannelC2Ev(void) {
    ALOGD("_ZN9DpChannelC2Ev() called");
    return 0;
}

/* Demangled: PQDCAdaptor::tuningDCSWReg(ADLReg*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11PQDCAdaptor13tuningDCSWRegEP6ADLRegi(void) {
    ALOGD("_ZN11PQDCAdaptor13tuningDCSWRegEP6ADLRegi() called");
    return 0;
}

/* Exported Object: PQDREHistogramAdaptor::s_ALMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN21PQDREHistogramAdaptor9s_ALMutexE = NULL;

/* Demangled: DpStream::addChannel(DpChannel*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN8DpStream10addChannelEP9DpChannelPi(void) {
    ALOGD("_ZN8DpStream10addChannelEP9DpChannelPi() called");
    return 0;
}

/* Demangled: DpIspStream::setRotation(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpIspStream11setRotationEii(void) {
    ALOGD("_ZN11DpIspStream11setRotationEii() called");
    return 0;
}

/* Demangled: void std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> >::__push_back_slow_path<unsigned long long const&>(unsigned long long const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIyNS_9allocatorIyEEE21__push_back_slow_pathIRKyEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIyNS_9allocatorIyEEE21__push_back_slow_pathIRKyEEvOT_() called");
    return 0;
}

/* Demangled: PQReadBackFactory::~PQReadBackFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN17PQReadBackFactoryD2Ev(void) {
    ALOGD("_ZN17PQReadBackFactoryD2Ev() called");
    return 0;
}

/* Demangled: DpBufferPoolBase::flushWriteBuffer(int) */
extern "C" __attribute__((visibility("default"))) int _ZN16DpBufferPoolBase16flushWriteBufferEi(void) {
    ALOGD("_ZN16DpBufferPoolBase16flushWriteBufferEi() called");
    return 0;
}

/* Demangled: DpSync::DpSync() */
extern "C" __attribute__((visibility("default"))) int _ZN6DpSyncC1Ev(void) {
    ALOGD("_ZN6DpSyncC1Ev() called");
    return 0;
}

/* Exported Object: RDMA1Reg */
extern "C" __attribute__((visibility("default"))) void* RDMA1Reg = NULL;

/* Demangled: PQDREAdaptor::setDRETransInfo(DRETransInfo*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQDREAdaptor15setDRETransInfoEP12DRETransInfob(void) {
    ALOGD("_ZN12PQDREAdaptor15setDRETransInfoEP12DRETransInfob() called");
    return 0;
}

/* Demangled: PQSessionManager::setAALPreHWIdAndBufferIdCapture(unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN16PQSessionManager31setAALPreHWIdAndBufferIdCaptureEjjjj(void) {
    ALOGD("_ZN16PQSessionManager31setAALPreHWIdAndBufferIdCaptureEjjjj() called");
    return 0;
}

/* Demangled: PQSession::getCurCutPosX() */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession13getCurCutPosXEv(void) {
    ALOGD("_ZN9PQSession13getCurCutPosXEv() called");
    return 0;
}

/* Demangled: PQDREAdaptor::initDREOutput(DREVPTopOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQDREAdaptor13initDREOutputEP14DREVPTopOutput(void) {
    ALOGD("_ZN12PQDREAdaptor13initDREOutputEP14DREVPTopOutput() called");
    return 0;
}

/* Demangled: DpDriver::waitFramedone(unsigned long long, DpReadbackRegs_t&) */
extern "C" __attribute__((visibility("default"))) int _ZN8DpDriver13waitFramedoneEyR16DpReadbackRegs_t(void) {
    ALOGD("_ZN8DpDriver13waitFramedoneEyR16DpReadbackRegs_t() called");
    return 0;
}

/* Demangled: DpEngine_WPEO::onInitTileCalc(TILE_PARAM_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN13DpEngine_WPEO14onInitTileCalcEP17TILE_PARAM_STRUCT(void) {
    ALOGD("_ZN13DpEngine_WPEO14onInitTileCalcEP17TILE_PARAM_STRUCT() called");
    return 0;
}

/* Demangled: PQAlgorithmAdaptor::~PQAlgorithmAdaptor() */
extern "C" __attribute__((visibility("default"))) int _ZN18PQAlgorithmAdaptorD1Ev(void) {
    ALOGD("_ZN18PQAlgorithmAdaptorD1Ev() called");
    return 0;
}

/* Demangled: DpVEncStream::queueDstBuffer(int, void**, unsigned int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpVEncStream14queueDstBufferEiPPvPji(void) {
    ALOGD("_ZN12DpVEncStream14queueDstBufferEiPPvPji() called");
    return 0;
}

/* Demangled: DpCommandQueue::frameDstInfo(DP_COLOR_ENUM, int, int, int, int, int, int, unsigned int*, unsigned int*, DpSecure) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpCommandQueue12frameDstInfoE13DP_COLOR_ENUMiiiiiiPjS1_8DpSecure(void) {
    ALOGD("_ZN14DpCommandQueue12frameDstInfoE13DP_COLOR_ENUMiiiiiiPjS1_8DpSecure() called");
    return 0;
}

/* Exported Object: vtable for DpEngine_RDMA */
extern "C" __attribute__((visibility("default"))) void* _ZTV13DpEngine_RDMA = NULL;

/* Demangled: PQSession::setPreHWIdAndBufferId(unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession21setPreHWIdAndBufferIdEjjjj(void) {
    ALOGD("_ZN9PQSession21setPreHWIdAndBufferIdEjjjj() called");
    return 0;
}

/* Demangled: PQSession::getHDRConfig(HDR_CONFIG_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession12getHDRConfigEP12HDR_CONFIG_T(void) {
    ALOGD("_ZN9PQSession12getHDRConfigEP12HDR_CONFIG_T() called");
    return 0;
}

/* Demangled: PQSession::initDpPqConfig(DpPqConfig*) */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession14initDpPqConfigEP10DpPqConfig(void) {
    ALOGD("_ZN9PQSession14initDpPqConfigEP10DpPqConfig() called");
    return 0;
}

/* Demangled: DpStream::getReadbackPABuffer(unsigned int&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8DpStream19getReadbackPABufferERj(void) {
    ALOGD("_ZNK8DpStream19getReadbackPABufferERj() called");
    return 0;
}

/* Demangled: DpChannel::getTargetROI(int, int*, int*, int*, int*, int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9DpChannel12getTargetROIEiPiS0_S0_S0_S0_(void) {
    ALOGD("_ZNK9DpChannel12getTargetROIEiPiS0_S0_S0_S0_() called");
    return 0;
}

/* Demangled: DpIspStream::dequeueDstBuffer(int, void**, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpIspStream16dequeueDstBufferEiPPvb(void) {
    ALOGD("_ZN11DpIspStream16dequeueDstBufferEiPPvb() called");
    return 0;
}

/* Demangled: PQDREAdaptor::getDefaultDREOutput(unsigned int, DRETopOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQDREAdaptor19getDefaultDREOutputEjP12DRETopOutput(void) {
    ALOGD("_ZN12PQDREAdaptor19getDefaultDREOutputEjP12DRETopOutput() called");
    return 0;
}

/* Demangled: DpChannel::setEndTime(timeval*) */
extern "C" __attribute__((visibility("default"))) int _ZN9DpChannel10setEndTimeEP7timeval(void) {
    ALOGD("_ZN9DpChannel10setEndTimeEP7timeval() called");
    return 0;
}

/* Demangled: DpFragStream::~DpFragStream() */
extern "C" __attribute__((visibility("default"))) int _ZN12DpFragStreamD1Ev(void) {
    ALOGD("_ZN12DpFragStreamD1Ev() called");
    return 0;
}

/* Demangled: DpVEncStream::getPqID() */
extern "C" __attribute__((visibility("default"))) int _ZN12DpVEncStream7getPqIDEv(void) {
    ALOGD("_ZN12DpVEncStream7getPqIDEv() called");
    return 0;
}

/* Demangled: PQIspTuning::getDSTuningValue(DSReg*, DSInput*) */
extern "C" __attribute__((visibility("default"))) int _ZN11PQIspTuning16getDSTuningValueEP5DSRegP7DSInput(void) {
    ALOGD("_ZN11PQIspTuning16getDSTuningValueEP5DSRegP7DSInput() called");
    return 0;
}

/* Demangled: PQTuningBuffer::~PQTuningBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN14PQTuningBufferD1Ev(void) {
    ALOGD("_ZN14PQTuningBufferD1Ev() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream2::createJob(unsigned int&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN18DpAsyncBlitStream29createJobERjRi(void) {
    ALOGD("_ZN18DpAsyncBlitStream29createJobERjRi() called");
    return 0;
}

/* Demangled: DpBlitStream::setPQParameter(DpPqParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpBlitStream14setPQParameterERK9DpPqParam(void) {
    ALOGD("_ZN12DpBlitStream14setPQParameterERK9DpPqParam() called");
    return 0;
}

/* Demangled: DpWrapper_WPE::onFlushBuffer(DpEngineBase::FLUSH_TYPE_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN13DpWrapper_WPE13onFlushBufferEN12DpEngineBase15FLUSH_TYPE_ENUME(void) {
    ALOGD("_ZN13DpWrapper_WPE13onFlushBufferEN12DpEngineBase15FLUSH_TYPE_ENUME() called");
    return 0;
}

/* Demangled: DpAutoBufferPool::destroyBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN16DpAutoBufferPool13destroyBufferEv(void) {
    ALOGD("_ZN16DpAutoBufferPool13destroyBufferEv() called");
    return 0;
}

/* Demangled: DpWrapper_ISP::onConfigFrame(DpCommand&, DpConfig&) */
extern "C" __attribute__((visibility("default"))) int _ZN13DpWrapper_ISP13onConfigFrameER9DpCommandR8DpConfig(void) {
    ALOGD("_ZN13DpWrapper_ISP13onConfigFrameER9DpCommandR8DpConfig() called");
    return 0;
}

/* Demangled: DpEngine_WROT::onUpdatePMQOS(DpCommand&, unsigned int&, unsigned int&, int&, timeval&, DP_FORMAT_FLAG_ENUM&) */
extern "C" __attribute__((visibility("default"))) int _ZN13DpEngine_WROT13onUpdatePMQOSER9DpCommandRjS2_RiR7timevalR19DP_FORMAT_FLAG_ENUM(void) {
    ALOGD("_ZN13DpEngine_WROT13onUpdatePMQOSER9DpCommandRjS2_RiR7timevalR19DP_FORMAT_FLAG_ENUM() called");
    return 0;
}

/* Demangled: PQDSConfig::PQDSConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN10PQDSConfigC2Ev(void) {
    ALOGD("_ZN10PQDSConfigC2Ev() called");
    return 0;
}

/* Demangled: DpCommandRecorder::addIspSecureMeta(cmdqSecIspMeta) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorder16addIspSecureMetaE14cmdqSecIspMeta(void) {
    ALOGD("_ZN17DpCommandRecorder16addIspSecureMetaE14cmdqSecIspMeta() called");
    return 0;
}

/* Demangled: DpPathTopology::~DpPathTopology() */
extern "C" __attribute__((visibility("default"))) int _ZN14DpPathTopologyD2Ev(void) {
    ALOGD("_ZN14DpPathTopologyD2Ev() called");
    return 0;
}

/* Demangled: forward_6_taps(int, int, int, int, int, int, int, int, int, int, int, int&, int&, int&, int&, int&, int&) */
extern "C" __attribute__((visibility("default"))) int _Z14forward_6_tapsiiiiiiiiiiiRiS_S_S_S_S_(void) {
    ALOGD("_Z14forward_6_tapsiiiiiiiiiiiRiS_S_S_S_S_() called");
    return 0;
}

/* Demangled: DpBufferPoolBase::dumpDebugInfo(CLIENT_TYPE_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN16DpBufferPoolBase13dumpDebugInfoE16CLIENT_TYPE_ENUM(void) {
    ALOGD("_ZN16DpBufferPoolBase13dumpDebugInfoE16CLIENT_TYPE_ENUM() called");
    return 0;
}

/* Exported Object: PQDCAdaptor::s_ALMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN11PQDCAdaptor9s_ALMutexE = NULL;

/* Demangled: tile_tdr_isp_reg_to_dump_eaf(TILE_REG_MAP_STRUCT*, unsigned int*, unsigned int*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _Z28tile_tdr_isp_reg_to_dump_eafP19TILE_REG_MAP_STRUCTPjS1_ji(void) {
    ALOGD("_Z28tile_tdr_isp_reg_to_dump_eafP19TILE_REG_MAP_STRUCTPjS1_ji() called");
    return 0;
}

/* Exported Object: vtable for DpPathControl */
extern "C" __attribute__((visibility("default"))) void* _ZTV13DpPathControl = NULL;

/* Demangled: PQDREHistogramAdaptor::dumpBufferPoolImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN21PQDREHistogramAdaptor18dumpBufferPoolImplEv(void) {
    ALOGD("_ZN21PQDREHistogramAdaptor18dumpBufferPoolImplEv() called");
    return 0;
}

/* Demangled: DpEngine_TDSHP::onPostProc(DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpEngine_TDSHP10onPostProcER9DpCommand(void) {
    ALOGD("_ZN14DpEngine_TDSHP10onPostProcER9DpCommand() called");
    return 0;
}

/* Demangled: DpBufferPoolBase::cancelBuffer(int) */
extern "C" __attribute__((visibility("default"))) int _ZN16DpBufferPoolBase12cancelBufferEi(void) {
    ALOGD("_ZN16DpBufferPoolBase12cancelBufferEi() called");
    return 0;
}

/* Demangled: DpPathComposer::~DpPathComposer() */
extern "C" __attribute__((visibility("default"))) int _ZN14DpPathComposerD0Ev(void) {
    ALOGD("_ZN14DpPathComposerD0Ev() called");
    return 0;
}

/* Demangled: DpVEncStream::queueSrcBuffer(int, unsigned int*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpVEncStream14queueSrcBufferEiPjj(void) {
    ALOGD("_ZN12DpVEncStream14queueSrcBufferEiPjj() called");
    return 0;
}

/* Demangled: DpTilePath::calcFrameInfo(DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN10DpTilePath13calcFrameInfoER9DpCommand(void) {
    ALOGD("_ZN10DpTilePath13calcFrameInfoER9DpCommand() called");
    return 0;
}

/* Demangled: PQSession::removeUselessDCWaitHistListNode(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession31removeUselessDCWaitHistListNodeEj(void) {
    ALOGD("_ZN9PQSession31removeUselessDCWaitHistListNodeEj() called");
    return 0;
}

/* Demangled: DpVEncStream::setFlipStatus(int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpVEncStream13setFlipStatusEib(void) {
    ALOGD("_ZN12DpVEncStream13setFlipStatusEib() called");
    return 0;
}

/* Demangled: DpPmemHandler::flushMemory(DpMemory::FLUSH_TYPE_ENUM, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN13DpPmemHandler11flushMemoryEN8DpMemory15FLUSH_TYPE_ENUMEii(void) {
    ALOGD("_ZN13DpPmemHandler11flushMemoryEN8DpMemory15FLUSH_TYPE_ENUMEii() called");
    return 0;
}

/* Demangled: PQSession::getHDRHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession12getHDRHandleEv(void) {
    ALOGD("_ZN9PQSession12getHDRHandleEv() called");
    return 0;
}

/* Demangled: PQRSZAdaptor::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN12PQRSZAdaptor15destroyInstanceEv(void) {
    ALOGD("_ZN12PQRSZAdaptor15destroyInstanceEv() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream2::setUser(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN18DpAsyncBlitStream27setUserEj(void) {
    ALOGD("_ZN18DpAsyncBlitStream27setUserEj() called");
    return 0;
}

/* Demangled: PQDREAdaptor::calRegs(PQSession*, DpCommand&, int, int, int, int, int*, bool, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQDREAdaptor7calRegsEP9PQSessionR9DpCommandiiiiPibi(void) {
    ALOGD("_ZN12PQDREAdaptor7calRegsEP9PQSessionR9DpCommandiiiiPibi() called");
    return 0;
}

/* Demangled: getProperty(char const*, int*, int) */
extern "C" __attribute__((visibility("default"))) int _Z11getPropertyPKcPii(void) {
    ALOGD("_Z11getPropertyPKcPii() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream::BaseConfig::BaseConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN17DpAsyncBlitStream10BaseConfigC1Ev(void) {
    ALOGD("_ZN17DpAsyncBlitStream10BaseConfigC1Ev() called");
    return 0;
}

/* Demangled: PQSession::getDrePreviousSize(int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession18getDrePreviousSizeEPiS0_(void) {
    ALOGD("_ZN9PQSession18getDrePreviousSizeEPiS0_() called");
    return 0;
}

/* Demangled: PQDREConfig::~PQDREConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN11PQDREConfigD1Ev(void) {
    ALOGD("_ZN11PQDREConfigD1Ev() called");
    return 0;
}

/* Demangled: PQDSAdaptor::getDSTable(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN11PQDSAdaptor10getDSTableEb(void) {
    ALOGD("_ZN11PQDSAdaptor10getDSTableEb() called");
    return 0;
}

/* Demangled: DpPortAdapt::getActiveBuffer(CLIENT_TYPE_ENUM, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpPortAdapt15getActiveBufferE16CLIENT_TYPE_ENUMb(void) {
    ALOGD("_ZN11DpPortAdapt15getActiveBufferE16CLIENT_TYPE_ENUMb() called");
    return 0;
}

/* Demangled: DpSync::DpSync() */
extern "C" __attribute__((visibility("default"))) int _ZN6DpSyncC2Ev(void) {
    ALOGD("_ZN6DpSyncC2Ev() called");
    return 0;
}

/* Demangled: tile_print_isp_error_message(ISP_TPIPE_MESSAGE_ENUM) */
extern "C" __attribute__((visibility("default"))) int _Z28tile_print_isp_error_message22ISP_TPIPE_MESSAGE_ENUM(void) {
    ALOGD("_Z28tile_print_isp_error_message22ISP_TPIPE_MESSAGE_ENUM() called");
    return 0;
}

/* Demangled: DpPathTopology::getPathInfo(STREAM_TYPE_ENUM, DpPortAdapt&, DpPortAdapt&, unsigned long long&, int (&) [25], int&, int&, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpPathTopology11getPathInfoE16STREAM_TYPE_ENUMR11DpPortAdaptS2_RyRA25_iRiS6_jj(void) {
    ALOGD("_ZN14DpPathTopology11getPathInfoE16STREAM_TYPE_ENUMR11DpPortAdaptS2_RyRA25_iRiS6_jj() called");
    return 0;
}

/* Demangled: DpCommandQueue::writeFromReg(unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpCommandQueue12writeFromRegEjjj(void) {
    ALOGD("_ZN14DpCommandQueue12writeFromRegEjjj() called");
    return 0;
}

/* Demangled: DpPathConnection::disablePath(DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN16DpPathConnection11disablePathER9DpCommand(void) {
    ALOGD("_ZN16DpPathConnection11disablePathER9DpCommand() called");
    return 0;
}

/* Demangled: PQDCAdaptor::calRegs(PQSession*, DpCommand&, DpConfig&, int*, int&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN11PQDCAdaptor7calRegsEP9PQSessionR9DpCommandR8DpConfigPiRib(void) {
    ALOGD("_ZN11PQDCAdaptor7calRegsEP9PQSessionR9DpCommandR8DpConfigPiRib() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE = NULL;

/* Demangled: DpEngineBase::onDumpBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN12DpEngineBase12onDumpBufferEv(void) {
    ALOGD("_ZN12DpEngineBase12onDumpBufferEv() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream::setDstBuffer(unsigned int, void*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpAsyncBlitStream12setDstBufferEjPvji(void) {
    ALOGD("_ZN17DpAsyncBlitStream12setDstBufferEjPvji() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream2::setSrcBuffer(void**, unsigned int*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN18DpAsyncBlitStream212setSrcBufferEPPvPjji(void) {
    ALOGD("_ZN18DpAsyncBlitStream212setSrcBufferEPPvPjji() called");
    return 0;
}

/* Demangled: DpIspStream::setDither(int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpIspStream9setDitherEib(void) {
    ALOGD("_ZN11DpIspStream9setDitherEib() called");
    return 0;
}

/* Exported Object: vtable for ListPtr<DpJobWorker::WorkerItem> */
extern "C" __attribute__((visibility("default"))) void* _ZTV7ListPtrIN11DpJobWorker10WorkerItemEE = NULL;

/* Demangled: PQAlgorithmAdaptor::~PQAlgorithmAdaptor() */
extern "C" __attribute__((visibility("default"))) int _ZN18PQAlgorithmAdaptorD2Ev(void) {
    ALOGD("_ZN18PQAlgorithmAdaptorD2Ev() called");
    return 0;
}

/* Demangled: PQHDRConfig::isCcorrEnabled(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN11PQHDRConfig14isCcorrEnabledEb(void) {
    ALOGD("_ZN11PQHDRConfig14isCcorrEnabledEb() called");
    return 0;
}

/* Demangled: PQDREAdaptor::getDRETransFinalCoefBuffer(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQDREAdaptor26getDRETransFinalCoefBufferEb(void) {
    ALOGD("_ZN12PQDREAdaptor26getDRETransFinalCoefBufferEb() called");
    return 0;
}

/* Demangled: PQDREHistogramAdaptor::initUserBuffer(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN21PQDREHistogramAdaptor14initUserBufferEPv(void) {
    ALOGD("_ZN21PQDREHistogramAdaptor14initUserBufferEPv() called");
    return 0;
}

/* Demangled: DpWrapper_ISP::onReconfigTiles(DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN13DpWrapper_ISP15onReconfigTilesER9DpCommand(void) {
    ALOGD("_ZN13DpWrapper_ISP15onReconfigTilesER9DpCommand() called");
    return 0;
}

/* Demangled: PQSession::getDCHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession11getDCHandleEv(void) {
    ALOGD("_ZN9PQSession11getDCHandleEv() called");
    return 0;
}

/* Exported Object: PQSessionManager::m_VideoIDBufferRing */
extern "C" __attribute__((visibility("default"))) void* _ZN16PQSessionManager19m_VideoIDBufferRingE = NULL;

/* Demangled: PQAlgorithmFactory::getDynamicContrast(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN18PQAlgorithmFactory18getDynamicContrastEj(void) {
    ALOGD("_ZN18PQAlgorithmFactory18getDynamicContrastEj() called");
    return 0;
}

/* Demangled: PQSessionManager::createPQSessionListHandle(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN16PQSessionManager25createPQSessionListHandleEy(void) {
    ALOGD("_ZN16PQSessionManager25createPQSessionListHandleEy() called");
    return 0;
}

/* Demangled: PQDSAdaptor::onConfigReg(DpCommand&, DSOutput, int*, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN11PQDSAdaptor11onConfigRegER9DpCommand8DSOutputPiRi(void) {
    ALOGD("_ZN11PQDSAdaptor11onConfigRegER9DpCommand8DSOutputPiRi() called");
    return 0;
}

/* Demangled: DpFragStream::~DpFragStream() */
extern "C" __attribute__((visibility("default"))) int _ZN12DpFragStreamD2Ev(void) {
    ALOGD("_ZN12DpFragStreamD2Ev() called");
    return 0;
}

/* Demangled: DpMmuHandler::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN12DpMmuHandler15destroyInstanceEv(void) {
    ALOGD("_ZN12DpMmuHandler15destroyInstanceEv() called");
    return 0;
}

/* Demangled: PQSession::deleteDCHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession14deleteDCHandleEv(void) {
    ALOGD("_ZN9PQSession14deleteDCHandleEv() called");
    return 0;
}

/* Demangled: PQSession::setDCisHW0Done(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession14setDCisHW0DoneEb(void) {
    ALOGD("_ZN9PQSession14setDCisHW0DoneEb() called");
    return 0;
}

/* Demangled: PQTuningBuffer::~PQTuningBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN14PQTuningBufferD2Ev(void) {
    ALOGD("_ZN14PQTuningBufferD2Ev() called");
    return 0;
}

/* Demangled: PQDSConfig::isISOShpEnabled(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN10PQDSConfig15isISOShpEnabledEb(void) {
    ALOGD("_ZN10PQDSConfig15isISOShpEnabledEb() called");
    return 0;
}

/* Exported Object: PQDSAdaptor::s_pInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN11PQDSAdaptor11s_pInstanceE = NULL;

/* Demangled: PQTuningBuffer::resetReady() */
extern "C" __attribute__((visibility("default"))) int _ZN14PQTuningBuffer10resetReadyEv(void) {
    ALOGD("_ZN14PQTuningBuffer10resetReadyEv() called");
    return 0;
}

/* Demangled: DpEngine_COLOR::onReconfigFrame(DpCommand&, DpConfig&) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpEngine_COLOR15onReconfigFrameER9DpCommandR8DpConfig(void) {
    ALOGD("_ZN14DpEngine_COLOR15onReconfigFrameER9DpCommandR8DpConfig() called");
    return 0;
}

/* Demangled: tile_lut_isp_func_enable(int*, TILE_FUNC_ENABLE_STRUCT*, TILE_REG_MAP_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z24tile_lut_isp_func_enablePiP23TILE_FUNC_ENABLE_STRUCTP19TILE_REG_MAP_STRUCT(void) {
    ALOGD("_Z24tile_lut_isp_func_enablePiP23TILE_FUNC_ENABLE_STRUCTP19TILE_REG_MAP_STRUCT() called");
    return 0;
}

/* Exported Object: SCL1Reg */
extern "C" __attribute__((visibility("default"))) void* SCL1Reg = NULL;

/* Demangled: DpTilePathST::threadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN12DpTilePathST10threadLoopEv(void) {
    ALOGD("_ZN12DpTilePathST10threadLoopEv() called");
    return 0;
}

/* Demangled: DpEngine_AAL::onPostProc(DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpEngine_AAL10onPostProcER9DpCommand(void) {
    ALOGD("_ZN12DpEngine_AAL10onPostProcER9DpCommand() called");
    return 0;
}

/* Demangled: DpEngine_HDR::onPostProc(DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpEngine_HDR10onPostProcER9DpCommand(void) {
    ALOGD("_ZN12DpEngine_HDR10onPostProcER9DpCommand() called");
    return 0;
}

/* Demangled: PQRSZConfig::getRSZConfig(RSZ_CONFIG_T*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN11PQRSZConfig12getRSZConfigEP12RSZ_CONFIG_Tb(void) {
    ALOGD("_ZN11PQRSZConfig12getRSZConfigEP12RSZ_CONFIG_Tb() called");
    return 0;
}

/* Demangled: DpPathComposer::~DpPathComposer() */
extern "C" __attribute__((visibility("default"))) int _ZN14DpPathComposerD1Ev(void) {
    ALOGD("_ZN14DpPathComposerD1Ev() called");
    return 0;
}

/* Demangled: DpCommandRecorder::setFrameDstInfo(unsigned int, DP_COLOR_ENUM, int, int, int, int, int, int, unsigned int*, unsigned int*, DpSecure) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorder15setFrameDstInfoEj13DP_COLOR_ENUMiiiiiiPjS1_8DpSecure(void) {
    ALOGD("_ZN17DpCommandRecorder15setFrameDstInfoEj13DP_COLOR_ENUMiiiiiiPjS1_8DpSecure() called");
    return 0;
}

/* Demangled: PQHDRAdaptor::tuningHDRSWReg(HDRFWReg*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQHDRAdaptor14tuningHDRSWRegEP8HDRFWRegi(void) {
    ALOGD("_ZN12PQHDRAdaptor14tuningHDRSWRegEP8HDRFWRegi() called");
    return 0;
}

/* Demangled: PQHDRAdaptor::setPQID(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQHDRAdaptor7setPQIDEy(void) {
    ALOGD("_ZN12PQHDRAdaptor7setPQIDEy() called");
    return 0;
}

/* Demangled: PQDREAdaptor::getDRETable(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQDREAdaptor11getDRETableEb(void) {
    ALOGD("_ZN12PQDREAdaptor11getDRETableEb() called");
    return 0;
}

/* Demangled: DpPathTopology::sortPathInfo(int, int, int (&) [25], unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpPathTopology12sortPathInfoEiiRA25_ij(void) {
    ALOGD("_ZN14DpPathTopology12sortPathInfoEiiRA25_ij() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream::queryPaddingSide(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpAsyncBlitStream16queryPaddingSideEj(void) {
    ALOGD("_ZN17DpAsyncBlitStream16queryPaddingSideEj() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream2::setDstConfig(unsigned int, int, int, DP_COLOR_ENUM, DpInterlaceFormat, DpRect*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN18DpAsyncBlitStream212setDstConfigEjii13DP_COLOR_ENUM17DpInterlaceFormatP6DpRectj(void) {
    ALOGD("_ZN18DpAsyncBlitStream212setDstConfigEjii13DP_COLOR_ENUM17DpInterlaceFormatP6DpRectj() called");
    return 0;
}

/* Demangled: tile_main_read_isp_reg_file(TILE_REG_MAP_STRUCT*, char const*, char const*, char const*, char const*, char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _Z27tile_main_read_isp_reg_fileP19TILE_REG_MAP_STRUCTPKcS2_S2_S2_S2_S2_(void) {
    ALOGD("_Z27tile_main_read_isp_reg_fileP19TILE_REG_MAP_STRUCTPKcS2_S2_S2_S2_S2_() called");
    return 0;
}

/* Demangled: DpStream::~DpStream() */
extern "C" __attribute__((visibility("default"))) int _ZN8DpStreamD1Ev(void) {
    ALOGD("_ZN8DpStreamD1Ev() called");
    return 0;
}

/* Demangled: DpIspStream::IspConfig::IspConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN11DpIspStream9IspConfigC1Ev(void) {
    ALOGD("_ZN11DpIspStream9IspConfigC1Ev() called");
    return 0;
}

/* Demangled: DpCommandQueue::setISPDebugDumpRegs(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpCommandQueue19setISPDebugDumpRegsEj(void) {
    ALOGD("_ZN14DpCommandQueue19setISPDebugDumpRegsEj() called");
    return 0;
}

/* Demangled: DpEngine_WROT::onInitEngine(DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN13DpEngine_WROT12onInitEngineER9DpCommand(void) {
    ALOGD("_ZN13DpEngine_WROT12onInitEngineER9DpCommand() called");
    return 0;
}

/* Demangled: DpEngine_AAL::onReconfigFrame(DpCommand&, DpConfig&) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpEngine_AAL15onReconfigFrameER9DpCommandR8DpConfig(void) {
    ALOGD("_ZN12DpEngine_AAL15onReconfigFrameER9DpCommandR8DpConfig() called");
    return 0;
}

/* Demangled: PQSession::getHDRisLeftPath() */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession16getHDRisLeftPathEv(void) {
    ALOGD("_ZN9PQSession16getHDRisLeftPathEv() called");
    return 0;
}

/* Demangled: PQIspTuning::~PQIspTuning() */
extern "C" __attribute__((visibility("default"))) int _ZN11PQIspTuningD1Ev(void) {
    ALOGD("_ZN11PQIspTuningD1Ev() called");
    return 0;
}

/* Demangled: DpRingBufferPool::acquireBuffer(int*, void**, unsigned int*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN16DpRingBufferPool13acquireBufferEPiPPvPjb(void) {
    ALOGD("_ZN16DpRingBufferPool13acquireBufferEPiPPvPjb() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream::BaseConfig::BaseConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN17DpAsyncBlitStream10BaseConfigC2Ev(void) {
    ALOGD("_ZN17DpAsyncBlitStream10BaseConfigC2Ev() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream::invalidate(timeval*) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpAsyncBlitStream10invalidateEP7timeval(void) {
    ALOGD("_ZN17DpAsyncBlitStream10invalidateEP7timeval() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream2::setConfigBegin(unsigned int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN18DpAsyncBlitStream214setConfigBeginEjii(void) {
    ALOGD("_ZN18DpAsyncBlitStream214setConfigBeginEjii() called");
    return 0;
}

/* Demangled: DpCommandRecorder::endOverwrite() */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorder12endOverwriteEv(void) {
    ALOGD("_ZN17DpCommandRecorder12endOverwriteEv() called");
    return 0;
}

/* Demangled: PQDREConfig::~PQDREConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN11PQDREConfigD2Ev(void) {
    ALOGD("_ZN11PQDREConfigD2Ev() called");
    return 0;
}

/* Demangled: DpPathComposer::createPath(DpPortAdapt*, DpPortAdapt*, int (&) [25], int, int, DpPathBase*) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpPathComposer10createPathEP11DpPortAdaptS1_RA25_iiiP10DpPathBase(void) {
    ALOGD("_ZN14DpPathComposer10createPathEP11DpPortAdaptS1_RA25_iiiP10DpPathBase() called");
    return 0;
}

/* Demangled: DpIspStream::queryISPFeatureSupport(std::__1::map<DP_ISP_FEATURE_ENUM, bool, std::__1::less<DP_ISP_FEATURE_ENUM>, std::__1::allocator<std::__1::pair<DP_ISP_FEATURE_ENUM const, bool> > >&) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpIspStream22queryISPFeatureSupportERNSt3__13mapI19DP_ISP_FEATURE_ENUMbNS0_4lessIS2_EENS0_9allocatorINS0_4pairIKS2_bEEEEEE(void) {
    ALOGD("_ZN11DpIspStream22queryISPFeatureSupportERNSt3__13mapI19DP_ISP_FEATURE_ENUMbNS0_4lessIS2_EENS0_9allocatorINS0_4pairIKS2_bEEEEEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<DpDoneJobItem, std::__1::allocator<DpDoneJobItem> >::__push_back_slow_path<DpDoneJobItem const&>(DpDoneJobItem const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI13DpDoneJobItemNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorI13DpDoneJobItemNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_() called");
    return 0;
}

/* Demangled: PQColorConfig::~PQColorConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN13PQColorConfigD1Ev(void) {
    ALOGD("_ZN13PQColorConfigD1Ev() called");
    return 0;
}

/* Exported Object: CAMINReg */
extern "C" __attribute__((visibility("default"))) void* CAMINReg = NULL;

/* Demangled: tile_tdr_isp_mask_to_dump_internal(TILE_REG_MAP_STRUCT*, unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z34tile_tdr_isp_mask_to_dump_internalP19TILE_REG_MAP_STRUCTPjS1_(void) {
    ALOGD("_Z34tile_tdr_isp_mask_to_dump_internalP19TILE_REG_MAP_STRUCTPjS1_() called");
    return 0;
}

/* Demangled: DpDriver::releasePABuffer(unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN8DpDriver15releasePABufferEjPj(void) {
    ALOGD("_ZN8DpDriver15releasePABufferEjPj() called");
    return 0;
}

/* Demangled: PQSession::updateDCShareStatus(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession19updateDCShareStatusEi(void) {
    ALOGD("_ZN9PQSession19updateDCShareStatusEi() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Demangled: tile_tdr_isp_reg_to_dump_internal_eaf(TILE_REG_MAP_STRUCT*, unsigned int*, unsigned int*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _Z37tile_tdr_isp_reg_to_dump_internal_eafP19TILE_REG_MAP_STRUCTPjS1_ji(void) {
    ALOGD("_Z37tile_tdr_isp_reg_to_dump_internal_eafP19TILE_REG_MAP_STRUCTPjS1_ji() called");
    return 0;
}

/* Exported Object: vtable for DpTilePath */
extern "C" __attribute__((visibility("default"))) void* _ZTV10DpTilePath = NULL;

/* Demangled: DpEngine_RDMA::onInitEngine(DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN13DpEngine_RDMA12onInitEngineER9DpCommand(void) {
    ALOGD("_ZN13DpEngine_RDMA12onInitEngineER9DpCommand() called");
    return 0;
}

/* Demangled: PQAlgorithmFactory::getDynamicSharpness(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN18PQAlgorithmFactory19getDynamicSharpnessEj(void) {
    ALOGD("_ZN18PQAlgorithmFactory19getDynamicSharpnessEj() called");
    return 0;
}

/* Demangled: PQSession::getScenario() */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession11getScenarioEv(void) {
    ALOGD("_ZN9PQSession11getScenarioEv() called");
    return 0;
}

/* Exported Object: PQColorConfig::m_ColorTableInit */
extern "C" __attribute__((visibility("default"))) void* _ZN13PQColorConfig16m_ColorTableInitE = NULL;

/* Demangled: PQDREConfig::isEnabled(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN11PQDREConfig9isEnabledEb(void) {
    ALOGD("_ZN11PQDREConfig9isEnabledEb() called");
    return 0;
}

/* Demangled: DpIspStream::dequeueSrcBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN11DpIspStream16dequeueSrcBufferEv(void) {
    ALOGD("_ZN11DpIspStream16dequeueSrcBufferEv() called");
    return 0;
}

/* Exported Object: g_profileData */
extern "C" __attribute__((visibility("default"))) void* g_profileData = NULL;

/* Demangled: PQSession::getDREInitFWStatus() */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession18getDREInitFWStatusEv(void) {
    ALOGD("_ZN9PQSession18getDREInitFWStatusEv() called");
    return 0;
}

/* Demangled: PQDCAdaptor::tuningDCInput(ADLInput*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11PQDCAdaptor13tuningDCInputEP8ADLInputi(void) {
    ALOGD("_ZN11PQDCAdaptor13tuningDCInputEP8ADLInputi() called");
    return 0;
}

/* Demangled: PQHDRAdaptor::getHDRTable(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQHDRAdaptor11getHDRTableEb(void) {
    ALOGD("_ZN12PQHDRAdaptor11getHDRTableEb() called");
    return 0;
}

/* Exported Object: TDSHP0Reg */
extern "C" __attribute__((visibility("default"))) void* TDSHP0Reg = NULL;

/* Demangled: void std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__push_back_slow_path<unsigned int>(unsigned int&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIjEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIjEEvOT_() called");
    return 0;
}

/* Demangled: DpCommandRecorder::getBlockSize() */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorder12getBlockSizeEv(void) {
    ALOGD("_ZN17DpCommandRecorder12getBlockSizeEv() called");
    return 0;
}

/* Demangled: PQDSAdaptor::onCalcTDSHP(PQSession*, DpCommand&, DpConfig&, bool, bool, int*, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN11PQDSAdaptor11onCalcTDSHPEP9PQSessionR9DpCommandR8DpConfigbbPiRi(void) {
    ALOGD("_ZN11PQDSAdaptor11onCalcTDSHPEP9PQSessionR9DpCommandR8DpConfigbbPiRi() called");
    return 0;
}

/* Demangled: DpBlitStream::queryPaddingSide(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpBlitStream16queryPaddingSideEj(void) {
    ALOGD("_ZN12DpBlitStream16queryPaddingSideEj() called");
    return 0;
}

/* Demangled: PQDSAdaptor::onConfigTDSHP(PQSession*, DpCommand&, DpConfig&, bool, bool, int*, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN11PQDSAdaptor13onConfigTDSHPEP9PQSessionR9DpCommandR8DpConfigbbPiRi(void) {
    ALOGD("_ZN11PQDSAdaptor13onConfigTDSHPEP9PQSessionR9DpCommandR8DpConfigbbPiRi() called");
    return 0;
}

/* Exported Object: vtable for DpTilePathST */
extern "C" __attribute__((visibility("default"))) void* _ZTV12DpTilePathST = NULL;

/* Demangled: DpIspStream::setPQParameter(int, DpPqParam const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpIspStream14setPQParameterEiPK9DpPqParam(void) {
    ALOGD("_ZN11DpIspStream14setPQParameterEiPK9DpPqParam() called");
    return 0;
}

/* Demangled: PQHDRAdaptor::setLastHDRPInfo(_DP_VDEC_DRV_DYNAMIC_METADATA_T) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQHDRAdaptor15setLastHDRPInfoE31_DP_VDEC_DRV_DYNAMIC_METADATA_T(void) {
    ALOGD("_ZN12PQHDRAdaptor15setLastHDRPInfoE31_DP_VDEC_DRV_DYNAMIC_METADATA_T() called");
    return 0;
}

/* Demangled: DpPortAdapt::~DpPortAdapt() */
extern "C" __attribute__((visibility("default"))) int _ZN11DpPortAdaptD1Ev(void) {
    ALOGD("_ZN11DpPortAdaptD1Ev() called");
    return 0;
}

/* Demangled: DpPathComposer::~DpPathComposer() */
extern "C" __attribute__((visibility("default"))) int _ZN14DpPathComposerD2Ev(void) {
    ALOGD("_ZN14DpPathComposerD2Ev() called");
    return 0;
}

/* Demangled: DpWrapper_ISP::onConfigTile(DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN13DpWrapper_ISP12onConfigTileER9DpCommand(void) {
    ALOGD("_ZN13DpWrapper_ISP12onConfigTileER9DpCommand() called");
    return 0;
}

/* Demangled: DpMmuHandler::DpMmuHandler(void*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpMmuHandlerC1EPvjj(void) {
    ALOGD("_ZN12DpMmuHandlerC1EPvjj() called");
    return 0;
}

/* Demangled: DpIonHandler::cacheInvalidbyRange() */
extern "C" __attribute__((visibility("default"))) int _ZN12DpIonHandler19cacheInvalidbyRangeEv(void) {
    ALOGD("_ZN12DpIonHandler19cacheInvalidbyRangeEv() called");
    return 0;
}

/* Demangled: PQSessionManager::~PQSessionManager() */
extern "C" __attribute__((visibility("default"))) int _ZN16PQSessionManagerD1Ev(void) {
    ALOGD("_ZN16PQSessionManagerD1Ev() called");
    return 0;
}

/* Demangled: PQTuningBuffer::isOverwritten() */
extern "C" __attribute__((visibility("default"))) int _ZN14PQTuningBuffer13isOverwrittenEv(void) {
    ALOGD("_ZN14PQTuningBuffer13isOverwrittenEv() called");
    return 0;
}

/* Demangled: PQHDRAdaptor::initHDRFWinput(DHDRINPUT*, DpConfig&) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQHDRAdaptor14initHDRFWinputEP9DHDRINPUTR8DpConfig(void) {
    ALOGD("_ZN12PQHDRAdaptor14initHDRFWinputEP9DHDRINPUTR8DpConfig() called");
    return 0;
}

/* Demangled: PQDREConfig::getDebugFlag(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN11PQDREConfig12getDebugFlagEb(void) {
    ALOGD("_ZN11PQDREConfig12getDebugFlagEb() called");
    return 0;
}

/* Demangled: DpCommandQueue::writeFd(unsigned int, unsigned int, unsigned int, int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpCommandQueue7writeFdEjjjPii(void) {
    ALOGD("_ZN14DpCommandQueue7writeFdEjjjPii() called");
    return 0;
}

/* Exported Object: DpEngine_WROT::RGB_TO_JPEG */
extern "C" __attribute__((visibility("default"))) void* _ZN13DpEngine_WROT11RGB_TO_JPEGE = NULL;

/* Demangled: PQHDRAdaptor::tuningHDR10PLUSSWReg(HDR10PLUS_FWReg*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQHDRAdaptor20tuningHDR10PLUSSWRegEP15HDR10PLUS_FWRegi(void) {
    ALOGD("_ZN12PQHDRAdaptor20tuningHDR10PLUSSWRegEP15HDR10PLUS_FWRegi() called");
    return 0;
}

/* Demangled: DpRingBufferPool::dequeueBuffer(int*, void**, unsigned int*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN16DpRingBufferPool13dequeueBufferEPiPPvPjb(void) {
    ALOGD("_ZN16DpRingBufferPool13dequeueBufferEPiPPvPjb() called");
    return 0;
}

/* Demangled: DpIspStream::IspConfig::IspConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN11DpIspStream9IspConfigC2Ev(void) {
    ALOGD("_ZN11DpIspStream9IspConfigC2Ev() called");
    return 0;
}

/* Demangled: DpStream::~DpStream() */
extern "C" __attribute__((visibility("default"))) int _ZN8DpStreamD2Ev(void) {
    ALOGD("_ZN8DpStreamD2Ev() called");
    return 0;
}

/* Demangled: PQIspTuning::~PQIspTuning() */
extern "C" __attribute__((visibility("default"))) int _ZN11PQIspTuningD2Ev(void) {
    ALOGD("_ZN11PQIspTuningD2Ev() called");
    return 0;
}

/* Demangled: DpIonHandler::DpIonHandler(int, unsigned int, bool, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpIonHandlerC1EijbPi(void) {
    ALOGD("_ZN12DpIonHandlerC1EijbPi() called");
    return 0;
}

/* Demangled: PQConfig::getEnable() */
extern "C" __attribute__((visibility("default"))) int _ZN8PQConfig9getEnableEv(void) {
    ALOGD("_ZN8PQConfig9getEnableEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<DpAsyncBlitStream::AsyncBlitJob*, std::__1::allocator<DpAsyncBlitStream::AsyncBlitJob*> >::__push_back_slow_path<DpAsyncBlitStream::AsyncBlitJob* const&>(DpAsyncBlitStream::AsyncBlitJob* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN17DpAsyncBlitStream12AsyncBlitJobENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPN17DpAsyncBlitStream12AsyncBlitJobENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_() called");
    return 0;
}

/* Demangled: DpIspStream::setSharpness(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpIspStream12setSharpnessEii(void) {
    ALOGD("_ZN11DpIspStream12setSharpnessEii() called");
    return 0;
}

/* Demangled: PQSession::getDREVPReg(DpPqParam const*, DREVPReg*) */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession11getDREVPRegEPK9DpPqParamP8DREVPReg(void) {
    ALOGD("_ZN9PQSession11getDREVPRegEPK9DpPqParamP8DREVPReg() called");
    return 0;
}

/* Demangled: PQColorConfig::~PQColorConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN13PQColorConfigD2Ev(void) {
    ALOGD("_ZN13PQColorConfigD2Ev() called");
    return 0;
}

/* Demangled: DpRingBufferPool::pollBufferStatus(CLIENT_TYPE_ENUM, int, int, int, int, int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN16DpRingBufferPool16pollBufferStatusE16CLIENT_TYPE_ENUMiiiiib(void) {
    ALOGD("_ZN16DpRingBufferPool16pollBufferStatusE16CLIENT_TYPE_ENUMiiiiib() called");
    return 0;
}

/* Demangled: DpBlitStream::setDstBuffer(int, unsigned int*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpBlitStream12setDstBufferEiPjj(void) {
    ALOGD("_ZN12DpBlitStream12setDstBufferEiPjj() called");
    return 0;
}

/* Exported Object: WPEOReg */
extern "C" __attribute__((visibility("default"))) void* WPEOReg = NULL;

/* Demangled: void std::__1::vector<timeval, std::__1::allocator<timeval> >::__push_back_slow_path<timeval const&>(timeval const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI7timevalNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorI7timevalNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_() called");
    return 0;
}

/* Demangled: DpCommandQueue::setPath(DpPathBase*) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpCommandQueue7setPathEP10DpPathBase(void) {
    ALOGD("_ZN14DpCommandQueue7setPathEP10DpPathBase() called");
    return 0;
}

/* Demangled: PQSession::getPQParam(DpPqParam*) */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession10getPQParamEP9DpPqParam(void) {
    ALOGD("_ZN9PQSession10getPQParamEP9DpPqParam() called");
    return 0;
}

/* Demangled: tile_tdr_isp_dump_inv_reg_eaf(TILE_REG_MAP_STRUCT*, TILE_REG_MAP_STRUCT*, int, unsigned int*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z29tile_tdr_isp_dump_inv_reg_eafP19TILE_REG_MAP_STRUCTS0_iPjjj(void) {
    ALOGD("_Z29tile_tdr_isp_dump_inv_reg_eafP19TILE_REG_MAP_STRUCTS0_iPjjj() called");
    return 0;
}

/* Demangled: DpCommandQueue::setTDShpPar(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpCommandQueue11setTDShpParEj(void) {
    ALOGD("_ZN14DpCommandQueue11setTDShpParEj() called");
    return 0;
}

/* Demangled: PQSession::~PQSession() */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSessionD1Ev(void) {
    ALOGD("_ZN9PQSessionD1Ev() called");
    return 0;
}

/* Demangled: PQIspTuning::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN11PQIspTuning11getInstanceEv(void) {
    ALOGD("_ZN11PQIspTuning11getInstanceEv() called");
    return 0;
}

/* Exported Object: DpPortAdapt::s_dumpMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN11DpPortAdapt11s_dumpMutexE = NULL;

/* Demangled: DpCommandRecorder::addIspMetLog(char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorder12addIspMetLogEPcj(void) {
    ALOGD("_ZN17DpCommandRecorder12addIspMetLogEPcj() called");
    return 0;
}

/* Demangled: DpMmuHandler::DpMmuHandler(void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpMmuHandlerC1EPvj(void) {
    ALOGD("_ZN12DpMmuHandlerC1EPvj() called");
    return 0;
}

/* Demangled: PQDSAdaptor::~PQDSAdaptor() */
extern "C" __attribute__((visibility("default"))) int _ZN11PQDSAdaptorD1Ev(void) {
    ALOGD("_ZN11PQDSAdaptorD1Ev() called");
    return 0;
}

/* Demangled: PQDCAdaptor::ADL_updateLumaCurve(DpCommand&, ADLOutput const&, int&, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN11PQDCAdaptor19ADL_updateLumaCurveER9DpCommandRK9ADLOutputRiPi(void) {
    ALOGD("_ZN11PQDCAdaptor19ADL_updateLumaCurveER9DpCommandRK9ADLOutputRiPi() called");
    return 0;
}

/* Demangled: PQDREAdaptor::getDRESkinWgtSetBuffer(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQDREAdaptor22getDRESkinWgtSetBufferEb(void) {
    ALOGD("_ZN12PQDREAdaptor22getDRESkinWgtSetBufferEb() called");
    return 0;
}

/* Demangled: tile_tdr_isp_mask_to_dump_wpe(TILE_REG_MAP_STRUCT*, unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z29tile_tdr_isp_mask_to_dump_wpeP19TILE_REG_MAP_STRUCTPjS1_(void) {
    ALOGD("_Z29tile_tdr_isp_mask_to_dump_wpeP19TILE_REG_MAP_STRUCTPjS1_() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream::setConfigEnd() */
extern "C" __attribute__((visibility("default"))) int _ZN17DpAsyncBlitStream12setConfigEndEv(void) {
    ALOGD("_ZN17DpAsyncBlitStream12setConfigEndEv() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream::queryTheoreticalExecTime(unsigned int, unsigned int, unsigned int, unsigned int, std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpAsyncBlitStream24queryTheoreticalExecTimeEjjjjPNSt3__16vectorIjNS0_9allocatorIjEEEE(void) {
    ALOGD("_ZN17DpAsyncBlitStream24queryTheoreticalExecTimeEjjjjPNSt3__16vectorIjNS0_9allocatorIjEEEE() called");
    return 0;
}

/* Demangled: DpVEncStream::setCallback(void (*)(void*), void*) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpVEncStream11setCallbackEPFvPvES0_(void) {
    ALOGD("_ZN12DpVEncStream11setCallbackEPFvPvES0_() called");
    return 0;
}

/* Demangled: DpCommandRecorder::beginOverwrite(int) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorder14beginOverwriteEi(void) {
    ALOGD("_ZN17DpCommandRecorder14beginOverwriteEi() called");
    return 0;
}

/* Demangled: PQAshmem::getAshmemValueByAddr(unsigned int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN8PQAshmem20getAshmemValueByAddrEPjPi(void) {
    ALOGD("_ZN8PQAshmem20getAshmemValueByAddrEPjPi() called");
    return 0;
}

/* Demangled: PQIspTuning::getIspTuningFileStatus() */
extern "C" __attribute__((visibility("default"))) int _ZN11PQIspTuning22getIspTuningFileStatusEv(void) {
    ALOGD("_ZN11PQIspTuning22getIspTuningFileStatusEv() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream::setRotate(unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpAsyncBlitStream9setRotateEji(void) {
    ALOGD("_ZN17DpAsyncBlitStream9setRotateEji() called");
    return 0;
}

/* Demangled: DpVEncStream::getJPEGFilesize(unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpVEncStream15getJPEGFilesizeEPj(void) {
    ALOGD("_ZN12DpVEncStream15getJPEGFilesizeEPj() called");
    return 0;
}

/* Demangled: PQDREAdaptor::PQDREAdaptor(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQDREAdaptorC1Ej(void) {
    ALOGD("_ZN12PQDREAdaptorC1Ej() called");
    return 0;
}

/* Demangled: PQAshmem::~PQAshmem() */
extern "C" __attribute__((visibility("default"))) int _ZN8PQAshmemD1Ev(void) {
    ALOGD("_ZN8PQAshmemD1Ev() called");
    return 0;
}

/* Demangled: PQRSZAdaptor::getRSZTable() */
extern "C" __attribute__((visibility("default"))) int _ZN12PQRSZAdaptor11getRSZTableEv(void) {
    ALOGD("_ZN12PQRSZAdaptor11getRSZTableEv() called");
    return 0;
}

/* Demangled: tile_main_query_working_buffer_size() */
extern "C" __attribute__((visibility("default"))) int _Z35tile_main_query_working_buffer_sizev(void) {
    ALOGD("_Z35tile_main_query_working_buffer_sizev() called");
    return 0;
}

/* Demangled: DpPortAdapt::DpPortAdapt(int, DpChannel*, PORT_TYPE_ENUM, DP_COLOR_ENUM, int, int, int, int, int, bool, unsigned long long, unsigned int, bool, bool, bool, DpBufferPoolBase*, DP_PROFILE_ENUM, DpSecure, bool, DpColorMatrix const*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpPortAdaptC2EiP9DpChannel14PORT_TYPE_ENUM13DP_COLOR_ENUMiiiiibyjbbbP16DpBufferPoolBase15DP_PROFILE_ENUM8DpSecurebPK13DpColorMatrixPv(void) {
    ALOGD("_ZN11DpPortAdaptC2EiP9DpChannel14PORT_TYPE_ENUM13DP_COLOR_ENUMiiiiibyjbbbP16DpBufferPoolBase15DP_PROFILE_ENUM8DpSecurebPK13DpColorMatrixPv() called");
    return 0;
}

/* Exported Object: IMG2OReg */
extern "C" __attribute__((visibility("default"))) void* IMG2OReg = NULL;

/* Demangled: PQSession::addDCWaitHistListNode(PQDCHist) */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession21addDCWaitHistListNodeE8PQDCHist(void) {
    ALOGD("_ZN9PQSession21addDCWaitHistListNodeE8PQDCHist() called");
    return 0;
}

/* Demangled: PQDSAdaptor::dumpFWReg(DpPqParam*, DSInput*, DSOutput*, DSReg*) */
extern "C" __attribute__((visibility("default"))) int _ZN11PQDSAdaptor9dumpFWRegEP9DpPqParamP7DSInputP8DSOutputP5DSReg(void) {
    ALOGD("_ZN11PQDSAdaptor9dumpFWRegEP9DpPqParamP7DSInputP8DSOutputP5DSReg() called");
    return 0;
}

/* Demangled: PQDREHistogramAdaptor::registerBuffer(void*, unsigned long long, unsigned int, unsigned int*, unsigned int, HISTPOS) */
extern "C" __attribute__((visibility("default"))) int _ZN21PQDREHistogramAdaptor14registerBufferEPvyjPjj7HISTPOS(void) {
    ALOGD("_ZN21PQDREHistogramAdaptor14registerBufferEPvyjPjj7HISTPOS() called");
    return 0;
}

/* Demangled: dpProfilerDumpInfo() */
extern "C" __attribute__((visibility("default"))) int _Z18dpProfilerDumpInfov(void) {
    ALOGD("_Z18dpProfilerDumpInfov() called");
    return 0;
}

/* Demangled: DpEngine_RDMA::onPostProc(DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN13DpEngine_RDMA10onPostProcER9DpCommand(void) {
    ALOGD("_ZN13DpEngine_RDMA10onPostProcER9DpCommand() called");
    return 0;
}

/* Demangled: PQRSZConfig::~PQRSZConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN11PQRSZConfigD1Ev(void) {
    ALOGD("_ZN11PQRSZConfigD1Ev() called");
    return 0;
}

/* Demangled: PQSession::setVideoDpPqConfig(DpPqConfig*, DpPqParam const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession18setVideoDpPqConfigEP10DpPqConfigPK9DpPqParam(void) {
    ALOGD("_ZN9PQSession18setVideoDpPqConfigEP10DpPqConfigPK9DpPqParam() called");
    return 0;
}

/* Demangled: PQSession::checkAndResetUnusedHDRFW() */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession24checkAndResetUnusedHDRFWEv(void) {
    ALOGD("_ZN9PQSession24checkAndResetUnusedHDRFWEv() called");
    return 0;
}

/* Demangled: DpBufferPoolBase::getFormatInfo(DP_COLOR_ENUM, char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN16DpBufferPoolBase13getFormatInfoE13DP_COLOR_ENUMPcj(void) {
    ALOGD("_ZN16DpBufferPoolBase13getFormatInfoE13DP_COLOR_ENUMPcj() called");
    return 0;
}

/* Demangled: DpBufferPoolBase::~DpBufferPoolBase() */
extern "C" __attribute__((visibility("default"))) int _ZN16DpBufferPoolBaseD0Ev(void) {
    ALOGD("_ZN16DpBufferPoolBaseD0Ev() called");
    return 0;
}

/* Demangled: DpWrapper_WPE::onInitEngine(DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN13DpWrapper_WPE12onInitEngineER9DpCommand(void) {
    ALOGD("_ZN13DpWrapper_WPE12onInitEngineER9DpCommand() called");
    return 0;
}

/* Demangled: PQSession::addHDRPipeCount() */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession15addHDRPipeCountEv(void) {
    ALOGD("_ZN9PQSession15addHDRPipeCountEv() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream::setSrcBuffer(void*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpAsyncBlitStream12setSrcBufferEPvji(void) {
    ALOGD("_ZN17DpAsyncBlitStream12setSrcBufferEPvji() called");
    return 0;
}

/* Demangled: DpPortAdapt::~DpPortAdapt() */
extern "C" __attribute__((visibility("default"))) int _ZN11DpPortAdaptD2Ev(void) {
    ALOGD("_ZN11DpPortAdaptD2Ev() called");
    return 0;
}

/* Demangled: PQDREAdaptor::getPQScenario(PQSession*) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQDREAdaptor13getPQScenarioEP9PQSession(void) {
    ALOGD("_ZN12PQDREAdaptor13getPQScenarioEP9PQSession() called");
    return 0;
}

/* Demangled: PQSessionManager::~PQSessionManager() */
extern "C" __attribute__((visibility("default"))) int _ZN16PQSessionManagerD2Ev(void) {
    ALOGD("_ZN16PQSessionManagerD2Ev() called");
    return 0;
}

/* Demangled: tile_tdr_isp_fprint_dump_wpe(__sFILE*, TILE_REG_MAP_STRUCT*, int, unsigned int*, unsigned int*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z28tile_tdr_isp_fprint_dump_wpeP7__sFILEP19TILE_REG_MAP_STRUCTiPjS3_jj(void) {
    ALOGD("_Z28tile_tdr_isp_fprint_dump_wpeP7__sFILEP19TILE_REG_MAP_STRUCTiPjS3_jj() called");
    return 0;
}

/* Demangled: DpEngine_VENC::onReconfigTiles(DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN13DpEngine_VENC15onReconfigTilesER9DpCommand(void) {
    ALOGD("_ZN13DpEngine_VENC15onReconfigTilesER9DpCommand() called");
    return 0;
}

/* Exported Object: PQAlgorithmFactory::s_ALMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN18PQAlgorithmFactory9s_ALMutexE = NULL;

/* Demangled: PQDREConfig::getDriverDebugFlag(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN11PQDREConfig18getDriverDebugFlagEb(void) {
    ALOGD("_ZN11PQDREConfig18getDriverDebugFlagEb() called");
    return 0;
}

/* Demangled: DpCommandRecorder::getISPDebugDumpRegs() */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorder19getISPDebugDumpRegsEv(void) {
    ALOGD("_ZN17DpCommandRecorder19getISPDebugDumpRegsEv() called");
    return 0;
}

/* Demangled: DpPmemHandler::free_internal() */
extern "C" __attribute__((visibility("default"))) int _ZN13DpPmemHandler13free_internalEv(void) {
    ALOGD("_ZN13DpPmemHandler13free_internalEv() called");
    return 0;
}

/* Demangled: DpPmemHandler::~DpPmemHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN13DpPmemHandlerD0Ev(void) {
    ALOGD("_ZN13DpPmemHandlerD0Ev() called");
    return 0;
}

/* Demangled: PQConfig::setEnable(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN8PQConfig9setEnableEb(void) {
    ALOGD("_ZN8PQConfig9setEnableEb() called");
    return 0;
}

/* Demangled: PQDSAdaptor::onUpdateReg(DpCommand&, DSOutput, int*, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN11PQDSAdaptor11onUpdateRegER9DpCommand8DSOutputPiRi(void) {
    ALOGD("_ZN11PQDSAdaptor11onUpdateRegER9DpCommand8DSOutputPiRi() called");
    return 0;
}

/* Demangled: PQDREAdaptor::onCalculateVideoImpl(PQSession*, DpPqParam&, bool, DREVPTopOutput*, CDREVPTopFW*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQDREAdaptor20onCalculateVideoImplEP9PQSessionR9DpPqParambP14DREVPTopOutputP11CDREVPTopFWj(void) {
    ALOGD("_ZN12PQDREAdaptor20onCalculateVideoImplEP9PQSessionR9DpPqParambP14DREVPTopOutputP11CDREVPTopFWj() called");
    return 0;
}

/* Demangled: tileCalculateLCM(int, int) */
extern "C" __attribute__((visibility("default"))) int _Z16tileCalculateLCMii(void) {
    ALOGD("_Z16tileCalculateLCMii() called");
    return 0;
}

/* Demangled: PQSession::setHDRRegInfo(unsigned int*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession13setHDRRegInfoEPjjj(void) {
    ALOGD("_ZN9PQSession13setHDRRegInfoEPjjj() called");
    return 0;
}

/* Demangled: DpChannel::getSourceCrop(int, int*, int*, int*, int*, int*, int*, int*, int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9DpChannel13getSourceCropEiPiS0_S0_S0_S0_S0_S0_S0_(void) {
    ALOGD("_ZNK9DpChannel13getSourceCropEiPiS0_S0_S0_S0_S0_S0_S0_() called");
    return 0;
}

/* Demangled: conv_field_to_frame(unsigned char*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _Z19conv_field_to_framePhjjjjjS_(void) {
    ALOGD("_Z19conv_field_to_framePhjjjjjS_() called");
    return 0;
}

/* Demangled: DpCommandQueue::poll(unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpCommandQueue4pollEjjj(void) {
    ALOGD("_ZN14DpCommandQueue4pollEjjj() called");
    return 0;
}

/* Demangled: non-virtual thunk to DpTilePathMT::threadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZThn170348_N12DpTilePathMT10threadLoopEv(void) {
    ALOGD("_ZThn170348_N12DpTilePathMT10threadLoopEv() called");
    return 0;
}

/* Demangled: PQRSZAdaptor::PQRSZAdaptor(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQRSZAdaptorC1Ej(void) {
    ALOGD("_ZN12PQRSZAdaptorC1Ej() called");
    return 0;
}

/* Demangled: PQHDRAdaptor::getLastHDRInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN12PQHDRAdaptor14getLastHDRInfoEv(void) {
    ALOGD("_ZN12PQHDRAdaptor14getLastHDRInfoEv() called");
    return 0;
}

/* Demangled: DpBasicBufferPool::getHWBaseWithID(int, int, unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpBasicBufferPool15getHWBaseWithIDEiiPjS0_(void) {
    ALOGD("_ZN17DpBasicBufferPool15getHWBaseWithIDEiiPjS0_() called");
    return 0;
}

/* Demangled: DpIspStream::detectCropChange(int) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpIspStream16detectCropChangeEi(void) {
    ALOGD("_ZN11DpIspStream16detectCropChangeEi() called");
    return 0;
}

/* Demangled: DpCommandRecorder::getReadbackRegs(unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorder15getReadbackRegsERj(void) {
    ALOGD("_ZN17DpCommandRecorder15getReadbackRegsERj() called");
    return 0;
}

/* Demangled: DpFragStream::dequeueFrag(int*, DP_COLOR_ENUM*, void**, int*, int*, int*, int*, int*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpFragStream11dequeueFragEPiP13DP_COLOR_ENUMPPvS0_S0_S0_S0_S0_b(void) {
    ALOGD("_ZN12DpFragStream11dequeueFragEPiP13DP_COLOR_ENUMPPvS0_S0_S0_S0_S0_b() called");
    return 0;
}

/* Demangled: DpFragStream::setSrcConfig(DP_COLOR_ENUM, int, int, int, int, int, int, DpRect*) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpFragStream12setSrcConfigE13DP_COLOR_ENUMiiiiiiP6DpRect(void) {
    ALOGD("_ZN12DpFragStream12setSrcConfigE13DP_COLOR_ENUMiiiiiiP6DpRect() called");
    return 0;
}

/* Demangled: DpPathConnection::initTilePath(TILE_PARAM_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN16DpPathConnection12initTilePathEP17TILE_PARAM_STRUCT(void) {
    ALOGD("_ZN16DpPathConnection12initTilePathEP17TILE_PARAM_STRUCT() called");
    return 0;
}

/* Demangled: PQSession::getRSZConfig(RSZ_CONFIG_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession12getRSZConfigEP12RSZ_CONFIG_T(void) {
    ALOGD("_ZN9PQSession12getRSZConfigEP12RSZ_CONFIG_T() called");
    return 0;
}

/* Demangled: DpVEncStream::setSrcConfig(DP_COLOR_ENUM, int, int, int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpVEncStream12setSrcConfigE13DP_COLOR_ENUMiiib(void) {
    ALOGD("_ZN12DpVEncStream12setSrcConfigE13DP_COLOR_ENUMiiib() called");
    return 0;
}

/* Demangled: DpEngine_VENC::onWaitEvent(DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN13DpEngine_VENC11onWaitEventER9DpCommand(void) {
    ALOGD("_ZN13DpEngine_VENC11onWaitEventER9DpCommand() called");
    return 0;
}

/* Demangled: PQSession::setPreActPosX(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession13setPreActPosXEj(void) {
    ALOGD("_ZN9PQSession13setPreActPosXEj() called");
    return 0;
}

/* Demangled: PQDREAdaptor::writeCurve16(DpCommand&, DREVPTopOutput const*, unsigned int, unsigned int, int*, int&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQDREAdaptor12writeCurve16ER9DpCommandPK14DREVPTopOutputjjPiRib(void) {
    ALOGD("_ZN12PQDREAdaptor12writeCurve16ER9DpCommandPK14DREVPTopOutputjjPiRib() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream2::setDstBuffer(unsigned int, void**, void**, unsigned int*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN18DpAsyncBlitStream212setDstBufferEjPPvS1_Pjji(void) {
    ALOGD("_ZN18DpAsyncBlitStream212setDstBufferEjPPvS1_Pjji() called");
    return 0;
}

/* Demangled: DpIonHandler::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN12DpIonHandler15destroyInstanceEv(void) {
    ALOGD("_ZN12DpIonHandler15destroyInstanceEv() called");
    return 0;
}

/* Demangled: PQSession::getHDRWaitHistListSize() */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession22getHDRWaitHistListSizeEv(void) {
    ALOGD("_ZN9PQSession22getHDRWaitHistListSizeEv() called");
    return 0;
}

/* Demangled: PQSession::~PQSession() */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSessionD2Ev(void) {
    ALOGD("_ZN9PQSessionD2Ev() called");
    return 0;
}

/* Demangled: PQDSAdaptor::ConfigDSParamByScenario(DSInput*, DpPqParam*) */
extern "C" __attribute__((visibility("default"))) int _ZN11PQDSAdaptor23ConfigDSParamByScenarioEP7DSInputP9DpPqParam(void) {
    ALOGD("_ZN11PQDSAdaptor23ConfigDSParamByScenarioEP7DSInputP9DpPqParam() called");
    return 0;
}

/* Demangled: PQColorAdaptor::onUpdateLocal3DLUT(COLOR_CONFIG_T*, DpCommand&, int&, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN14PQColorAdaptor18onUpdateLocal3DLUTEP14COLOR_CONFIG_TR9DpCommandRiPi(void) {
    ALOGD("_ZN14PQColorAdaptor18onUpdateLocal3DLUTEP14COLOR_CONFIG_TR9DpCommandRiPi() called");
    return 0;
}

/* Demangled: PQDREConfig::getIspTuningFlag(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN11PQDREConfig16getIspTuningFlagEb(void) {
    ALOGD("_ZN11PQDREConfig16getIspTuningFlagEb() called");
    return 0;
}

/* Demangled: DpBufferPoolBase::setSecureMode(DpSecure) */
extern "C" __attribute__((visibility("default"))) int _ZN16DpBufferPoolBase13setSecureModeE8DpSecure(void) {
    ALOGD("_ZN16DpBufferPoolBase13setSecureModeE8DpSecure() called");
    return 0;
}

/* Demangled: DpCommandQueue::getTDShpPar() */
extern "C" __attribute__((visibility("default"))) int _ZN14DpCommandQueue11getTDShpParEv(void) {
    ALOGD("_ZN14DpCommandQueue11getTDShpParEv() called");
    return 0;
}

/* Demangled: DpCommandRecorder::getFrameInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorder12getFrameInfoEv(void) {
    ALOGD("_ZN17DpCommandRecorder12getFrameInfoEv() called");
    return 0;
}

/* Demangled: PQDSAdaptor::~PQDSAdaptor() */
extern "C" __attribute__((visibility("default"))) int _ZN11PQDSAdaptorD2Ev(void) {
    ALOGD("_ZN11PQDSAdaptorD2Ev() called");
    return 0;
}

/* Exported Object: DpPathTopology::s_topology */
extern "C" __attribute__((visibility("default"))) void* _ZN14DpPathTopology10s_topologyE = NULL;

/* Demangled: DpBufferPoolBase::queueBuffer(int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN16DpBufferPoolBase11queueBufferEib(void) {
    ALOGD("_ZN16DpBufferPoolBase11queueBufferEib() called");
    return 0;
}

/* Demangled: DpRingBufferPool::getSWBaseWithID(int, void**, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN16DpRingBufferPool15getSWBaseWithIDEiPPvPj(void) {
    ALOGD("_ZN16DpRingBufferPool15getSWBaseWithIDEiPPvPj() called");
    return 0;
}

/* Demangled: DpPortAdapt::getChannelInfo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK11DpPortAdapt14getChannelInfoEv(void) {
    ALOGD("_ZNK11DpPortAdapt14getChannelInfoEv() called");
    return 0;
}

/* Demangled: DpDriver::notifyEngineWROT() */
extern "C" __attribute__((visibility("default"))) int _ZN8DpDriver16notifyEngineWROTEv(void) {
    ALOGD("_ZN8DpDriver16notifyEngineWROTEv() called");
    return 0;
}

/* Demangled: DpCommandQueue::DpCommandQueue(DpPathBase*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpCommandQueueC1EP10DpPathBasej(void) {
    ALOGD("_ZN14DpCommandQueueC1EP10DpPathBasej() called");
    return 0;
}

/* Demangled: DpEngine_WROT::onReconfigFrame(DpCommand&, DpConfig&) */
extern "C" __attribute__((visibility("default"))) int _ZN13DpEngine_WROT15onReconfigFrameER9DpCommandR8DpConfig(void) {
    ALOGD("_ZN13DpEngine_WROT15onReconfigFrameER9DpCommandR8DpConfig() called");
    return 0;
}

/* Demangled: PQSession::getDSConfig(DS_CONFIG_T**) */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession11getDSConfigEPP11DS_CONFIG_T(void) {
    ALOGD("_ZN9PQSession11getDSConfigEPP11DS_CONFIG_T() called");
    return 0;
}

/* Demangled: PQIspTuning::getDreTuningValue(DREToolReg*, TAdaptiveCALTMReg*, TAdaptiveCALTMFace_Dump*) */
extern "C" __attribute__((visibility("default"))) int _ZN11PQIspTuning17getDreTuningValueEP10DREToolRegP17TAdaptiveCALTMRegP23TAdaptiveCALTMFace_Dump(void) {
    ALOGD("_ZN11PQIspTuning17getDreTuningValueEP10DREToolRegP17TAdaptiveCALTMRegP23TAdaptiveCALTMFace_Dump() called");
    return 0;
}

/* Demangled: PQDREHistogramAdaptor::PQDREHistogramAdaptor(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN21PQDREHistogramAdaptorC1Ej(void) {
    ALOGD("_ZN21PQDREHistogramAdaptorC1Ej() called");
    return 0;
}

/* Demangled: tile_tdr_isp_dump_inv_reg_bld(TILE_REG_MAP_STRUCT*, TILE_REG_MAP_STRUCT*, int, unsigned int*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z29tile_tdr_isp_dump_inv_reg_bldP19TILE_REG_MAP_STRUCTS0_iPjjj(void) {
    ALOGD("_Z29tile_tdr_isp_dump_inv_reg_bldP19TILE_REG_MAP_STRUCTS0_iPjjj() called");
    return 0;
}

/* Demangled: DpVEncStream::DpVEncStream(DpVEncStream::ISPStreamType) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpVEncStreamC2ENS_13ISPStreamTypeE(void) {
    ALOGD("_ZN12DpVEncStreamC2ENS_13ISPStreamTypeE() called");
    return 0;
}

/* Exported Object: DpMultiThread::s_worker */
extern "C" __attribute__((visibility("default"))) void* _ZN13DpMultiThread8s_workerE = NULL;

/* Demangled: PQDCConfig::PQDCConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN10PQDCConfigC1Ev(void) {
    ALOGD("_ZN10PQDCConfigC1Ev() called");
    return 0;
}

/* Demangled: PQDREAdaptor::setDRETransFinalCoefBuffer(DREsharedata*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQDREAdaptor26setDRETransFinalCoefBufferEP12DREsharedatab(void) {
    ALOGD("_ZN12PQDREAdaptor26setDRETransFinalCoefBufferEP12DREsharedatab() called");
    return 0;
}

/* Demangled: PQDREAdaptor::PQDREAdaptor(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQDREAdaptorC2Ej(void) {
    ALOGD("_ZN12PQDREAdaptorC2Ej() called");
    return 0;
}

/* Exported Object: vtable for DpMultiThread */
extern "C" __attribute__((visibility("default"))) void* _ZTV13DpMultiThread = NULL;

/* Demangled: DpAsyncBlitStream2::setSrcBuffer(void*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN18DpAsyncBlitStream212setSrcBufferEPvji(void) {
    ALOGD("_ZN18DpAsyncBlitStream212setSrcBufferEPvji() called");
    return 0;
}

/* Demangled: PQSession::setDREInitFWStatus(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession18setDREInitFWStatusEi(void) {
    ALOGD("_ZN9PQSession18setDREInitFWStatusEi() called");
    return 0;
}

/* Demangled: PQDCAdaptor::setDCShareData(DCsharedata) */
extern "C" __attribute__((visibility("default"))) int _ZN11PQDCAdaptor14setDCShareDataE11DCsharedata(void) {
    ALOGD("_ZN11PQDCAdaptor14setDCShareDataE11DCsharedata() called");
    return 0;
}

/* Demangled: PQAshmem::~PQAshmem() */
extern "C" __attribute__((visibility("default"))) int _ZN8PQAshmemD2Ev(void) {
    ALOGD("_ZN8PQAshmemD2Ev() called");
    return 0;
}

/* Demangled: tile_tdr_isp_reg_to_dump_wpe(TILE_REG_MAP_STRUCT*, unsigned int*, unsigned int*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _Z28tile_tdr_isp_reg_to_dump_wpeP19TILE_REG_MAP_STRUCTPjS1_ji(void) {
    ALOGD("_Z28tile_tdr_isp_reg_to_dump_wpeP19TILE_REG_MAP_STRUCTPjS1_ji() called");
    return 0;
}

/* Demangled: PQAshmem::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN8PQAshmem11getInstanceEv(void) {
    ALOGD("_ZN8PQAshmem11getInstanceEv() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream2::refreshCropROI(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN18DpAsyncBlitStream214refreshCropROIEj(void) {
    ALOGD("_ZN18DpAsyncBlitStream214refreshCropROIEj() called");
    return 0;
}

/* Demangled: DpEngine_RDMA::onUpdatePMQOS(DpCommand&, unsigned int&, unsigned int&, int&, timeval&, DP_FORMAT_FLAG_ENUM&) */
extern "C" __attribute__((visibility("default"))) int _ZN13DpEngine_RDMA13onUpdatePMQOSER9DpCommandRjS2_RiR7timevalR19DP_FORMAT_FLAG_ENUM(void) {
    ALOGD("_ZN13DpEngine_RDMA13onUpdatePMQOSER9DpCommandRjS2_RiR7timevalR19DP_FORMAT_FLAG_ENUM() called");
    return 0;
}

/* Demangled: PQRSZConfig::~PQRSZConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN11PQRSZConfigD2Ev(void) {
    ALOGD("_ZN11PQRSZConfigD2Ev() called");
    return 0;
}

/* Demangled: PQColorConfig::isMDPColorMode() */
extern "C" __attribute__((visibility("default"))) int _ZN13PQColorConfig14isMDPColorModeEv(void) {
    ALOGD("_ZN13PQColorConfig14isMDPColorModeEv() called");
    return 0;
}

/* Demangled: DpBufferPoolBase::~DpBufferPoolBase() */
extern "C" __attribute__((visibility("default"))) int _ZN16DpBufferPoolBaseD1Ev(void) {
    ALOGD("_ZN16DpBufferPoolBaseD1Ev() called");
    return 0;
}

/* Demangled: wrapper_tile_proc_main_single(TILE_PARAM_STRUCT*, int, bool*, __sFILE*) */
extern "C" __attribute__((visibility("default"))) int _Z29wrapper_tile_proc_main_singleP17TILE_PARAM_STRUCTiPbP7__sFILE(void) {
    ALOGD("_Z29wrapper_tile_proc_main_singleP17TILE_PARAM_STRUCTiPbP7__sFILE() called");
    return 0;
}

/* Demangled: DpEngine_AAL::onRetrieveFrameParam(TILE_PARAM_STRUCT*, DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpEngine_AAL20onRetrieveFrameParamEP17TILE_PARAM_STRUCTR9DpCommand(void) {
    ALOGD("_ZN12DpEngine_AAL20onRetrieveFrameParamEP17TILE_PARAM_STRUCTR9DpCommand() called");
    return 0;
}

/* Demangled: DpAutoBufferPool::DpAutoBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN16DpAutoBufferPoolC1Ev(void) {
    ALOGD("_ZN16DpAutoBufferPoolC1Ev() called");
    return 0;
}

/* Demangled: DpEngine_AAL::onConfigFrame(DpCommand&, DpConfig&) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpEngine_AAL13onConfigFrameER9DpCommandR8DpConfig(void) {
    ALOGD("_ZN12DpEngine_AAL13onConfigFrameER9DpCommandR8DpConfig() called");
    return 0;
}

/* Demangled: DpCommandQueue::addMetLog(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpCommandQueue9addMetLogEPKcj(void) {
    ALOGD("_ZN14DpCommandQueue9addMetLogEPKcj() called");
    return 0;
}

/* Demangled: DpWrapper_ISP::onInitTileCalc(TILE_PARAM_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN13DpWrapper_ISP14onInitTileCalcEP17TILE_PARAM_STRUCT(void) {
    ALOGD("_ZN13DpWrapper_ISP14onInitTileCalcEP17TILE_PARAM_STRUCT() called");
    return 0;
}

/* Exported Object: DpDriver::s_pInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN8DpDriver11s_pInstanceE = NULL;

/* Demangled: DpBlitStream::setSrcBuffer(void**, void**, unsigned int*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpBlitStream12setSrcBufferEPPvS1_Pjj(void) {
    ALOGD("_ZN12DpBlitStream12setSrcBufferEPPvS1_Pjj() called");
    return 0;
}

/* Demangled: DpEngine_IMG2O::onRetrieveTileParam(TILE_PARAM_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpEngine_IMG2O19onRetrieveTileParamEP17TILE_PARAM_STRUCT(void) {
    ALOGD("_ZN14DpEngine_IMG2O19onRetrieveTileParamEP17TILE_PARAM_STRUCT() called");
    return 0;
}

/* Demangled: DpWrapper_ISP::onRetrieveTileParam(TILE_PARAM_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN13DpWrapper_ISP19onRetrieveTileParamEP17TILE_PARAM_STRUCT(void) {
    ALOGD("_ZN13DpWrapper_ISP19onRetrieveTileParamEP17TILE_PARAM_STRUCT() called");
    return 0;
}

/* Demangled: DpPmemHandler::~DpPmemHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN13DpPmemHandlerD1Ev(void) {
    ALOGD("_ZN13DpPmemHandlerD1Ev() called");
    return 0;
}

/* Demangled: PQDREConfig::getDREConfig(DRE_CONFIG_T*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN11PQDREConfig12getDREConfigEP12DRE_CONFIG_Tb(void) {
    ALOGD("_ZN11PQDREConfig12getDREConfigEP12DRE_CONFIG_Tb() called");
    return 0;
}

/* Demangled: DpStream::DpStream(STREAM_TYPE_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN8DpStreamC2E16STREAM_TYPE_ENUM(void) {
    ALOGD("_ZN8DpStreamC2E16STREAM_TYPE_ENUM() called");
    return 0;
}

/* Demangled: PQSession::isHDRWaitHistEmpty() */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession18isHDRWaitHistEmptyEv(void) {
    ALOGD("_ZN9PQSession18isHDRWaitHistEmptyEv() called");
    return 0;
}

/* Exported Object: PQDSConfig::m_TDSHPTableInit */
extern "C" __attribute__((visibility("default"))) void* _ZN10PQDSConfig16m_TDSHPTableInitE = NULL;

/* Demangled: PQDCAdaptor::tuningDCOutput(ADLOutput*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11PQDCAdaptor14tuningDCOutputEP9ADLOutputi(void) {
    ALOGD("_ZN11PQDCAdaptor14tuningDCOutputEP9ADLOutputi() called");
    return 0;
}

/* Demangled: PQRSZAdaptor::PQRSZAdaptor(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQRSZAdaptorC2Ej(void) {
    ALOGD("_ZN12PQRSZAdaptorC2Ej() called");
    return 0;
}

/* Demangled: PQDREHistogramAdaptor::dumpBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN21PQDREHistogramAdaptor14dumpBufferPoolEv(void) {
    ALOGD("_ZN21PQDREHistogramAdaptor14dumpBufferPoolEv() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream::waitComplete(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpAsyncBlitStream12waitCompleteEPv(void) {
    ALOGD("_ZN17DpAsyncBlitStream12waitCompleteEPv() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream::setDstROI(unsigned int, int, int, DpRect const&) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpAsyncBlitStream9setDstROIEjiiRK6DpRect(void) {
    ALOGD("_ZN17DpAsyncBlitStream9setDstROIEjiiRK6DpRect() called");
    return 0;
}

/* Demangled: DpCommandQueue::getPQSessionID() */
extern "C" __attribute__((visibility("default"))) int _ZN14DpCommandQueue14getPQSessionIDEv(void) {
    ALOGD("_ZN14DpCommandQueue14getPQSessionIDEv() called");
    return 0;
}

/* Demangled: PQDCConfig::getDCConfig(DC_CONFIG_T*, GlobalPQParam&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN10PQDCConfig11getDCConfigEP11DC_CONFIG_TR13GlobalPQParamb(void) {
    ALOGD("_ZN10PQDCConfig11getDCConfigEP11DC_CONFIG_TR13GlobalPQParamb() called");
    return 0;
}

/* Demangled: DpChannel::unlockChannel() */
extern "C" __attribute__((visibility("default"))) int _ZN9DpChannel13unlockChannelEv(void) {
    ALOGD("_ZN9DpChannel13unlockChannelEv() called");
    return 0;
}

/* Demangled: PQTuningBuffer::toBePrepared() */
extern "C" __attribute__((visibility("default"))) int _ZN14PQTuningBuffer12toBePreparedEv(void) {
    ALOGD("_ZN14PQTuningBuffer12toBePreparedEv() called");
    return 0;
}

/* Demangled: PQRSZAdaptor::tuningRSZInput(RszInput*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQRSZAdaptor14tuningRSZInputEP8RszInputi(void) {
    ALOGD("_ZN12PQRSZAdaptor14tuningRSZInputEP8RszInputi() called");
    return 0;
}

/* Demangled: PQHDRConfig::isEnabled(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN11PQHDRConfig9isEnabledEb(void) {
    ALOGD("_ZN11PQHDRConfig9isEnabledEb() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream::~DpAsyncBlitStream() */
extern "C" __attribute__((visibility("default"))) int _ZN17DpAsyncBlitStreamD1Ev(void) {
    ALOGD("_ZN17DpAsyncBlitStreamD1Ev() called");
    return 0;
}

/* Demangled: DpFragStream::queueFrag(int) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpFragStream9queueFragEi(void) {
    ALOGD("_ZN12DpFragStream9queueFragEi() called");
    return 0;
}

/* Demangled: DpVEncStream::setParameter(ISP_TPIPE_CONFIG_STRUCT&, ISP2MDP_STRUCT*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpVEncStream12setParameterER23ISP_TPIPE_CONFIG_STRUCTP14ISP2MDP_STRUCTj(void) {
    ALOGD("_ZN12DpVEncStream12setParameterER23ISP_TPIPE_CONFIG_STRUCTP14ISP2MDP_STRUCTj() called");
    return 0;
}

/* Demangled: DpSync::wait(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6DpSync4waitEii(void) {
    ALOGD("_ZN6DpSync4waitEii() called");
    return 0;
}

/* Demangled: backward_4_taps(int, int, int, int, int, int, int, int, int, int&, int&) */
extern "C" __attribute__((visibility("default"))) int _Z15backward_4_tapsiiiiiiiiiRiS_(void) {
    ALOGD("_Z15backward_4_tapsiiiiiiiiiRiS_() called");
    return 0;
}

/* Demangled: tpipe_main_platform(ISP_TPIPE_CONFIG_STRUCT const*, ISP_TPIPE_DESCRIPTOR_STRUCT*, char*, int, void*, void*, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z19tpipe_main_platformPK23ISP_TPIPE_CONFIG_STRUCTP27ISP_TPIPE_DESCRIPTOR_STRUCTPciPvS5_S5_S5_(void) {
    ALOGD("_Z19tpipe_main_platformPK23ISP_TPIPE_CONFIG_STRUCTP27ISP_TPIPE_DESCRIPTOR_STRUCTPciPvS5_S5_S5_() called");
    return 0;
}

/* Demangled: tile_tdr_isp_fprint_dump(__sFILE*, TILE_REG_MAP_STRUCT*, int, unsigned int*, unsigned int*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z24tile_tdr_isp_fprint_dumpP7__sFILEP19TILE_REG_MAP_STRUCTiPjS3_jj(void) {
    ALOGD("_Z24tile_tdr_isp_fprint_dumpP7__sFILEP19TILE_REG_MAP_STRUCTiPjS3_jj() called");
    return 0;
}

/* Demangled: DpBufferPoolBase::abortPoll(CLIENT_TYPE_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN16DpBufferPoolBase9abortPollE16CLIENT_TYPE_ENUM(void) {
    ALOGD("_ZN16DpBufferPoolBase9abortPollE16CLIENT_TYPE_ENUM() called");
    return 0;
}

/* Demangled: DpPortAdapt::getJPEGConfig(DpJPEGEnc_Config_st*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK11DpPortAdapt13getJPEGConfigEP19DpJPEGEnc_Config_st(void) {
    ALOGD("_ZNK11DpPortAdapt13getJPEGConfigEP19DpJPEGEnc_Config_st() called");
    return 0;
}

/* Demangled: PQSession::setAIParam(DpPqParam const*, DpAIParam const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession10setAIParamEPK9DpPqParamPK9DpAIParamb(void) {
    ALOGD("_ZN9PQSession10setAIParamEPK9DpPqParamPK9DpAIParamb() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev() called");
    return 0;
}

/* Demangled: PQDCAdaptor::onCalculateImage(PQSession*, int, DpImageParam const&, ADLOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN11PQDCAdaptor16onCalculateImageEP9PQSessioniRK12DpImageParamP9ADLOutput(void) {
    ALOGD("_ZN11PQDCAdaptor16onCalculateImageEP9PQSessioniRK12DpImageParamP9ADLOutput() called");
    return 0;
}

/* Demangled: PQDREHistogramAdaptor::searchBuffer(unsigned long long, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN21PQDREHistogramAdaptor12searchBufferEyPj(void) {
    ALOGD("_ZN21PQDREHistogramAdaptor12searchBufferEyPj() called");
    return 0;
}

/* Demangled: DpCommandQueue::~DpCommandQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN14DpCommandQueueD0Ev(void) {
    ALOGD("_ZN14DpCommandQueueD0Ev() called");
    return 0;
}

/* Demangled: PQRSZAdaptor::getInstance(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQRSZAdaptor11getInstanceEj(void) {
    ALOGD("_ZN12PQRSZAdaptor11getInstanceEj() called");
    return 0;
}

/* Exported Object: PQIspTuning::s_pInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN11PQIspTuning11s_pInstanceE = NULL;

/* Demangled: PQDREHistogramAdaptor::PQDREHistogramAdaptor(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN21PQDREHistogramAdaptorC2Ej(void) {
    ALOGD("_ZN21PQDREHistogramAdaptorC2Ej() called");
    return 0;
}

/* Demangled: DpGetFnDump2() */
extern "C" __attribute__((visibility("default"))) int _Z12DpGetFnDump2v(void) {
    ALOGD("_Z12DpGetFnDump2v() called");
    return 0;
}

/* Demangled: DpRingBufferPool::createBuffer(int, DP_COLOR_ENUM, int, int, int, int, int, int, int, DpRect*) */
extern "C" __attribute__((visibility("default"))) int _ZN16DpRingBufferPool12createBufferEi13DP_COLOR_ENUMiiiiiiiP6DpRect(void) {
    ALOGD("_ZN16DpRingBufferPool12createBufferEi13DP_COLOR_ENUMiiiiiiiP6DpRect() called");
    return 0;
}

/* Demangled: PQDCConfig::PQDCConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN10PQDCConfigC2Ev(void) {
    ALOGD("_ZN10PQDCConfigC2Ev() called");
    return 0;
}

/* Demangled: DpBlitStream::setSrcBuffer(void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpBlitStream12setSrcBufferEPvj(void) {
    ALOGD("_ZN12DpBlitStream12setSrcBufferEPvj() called");
    return 0;
}

/* Demangled: DpIspStream::DpIspStream(DpIspStream::ISPStreamType) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpIspStreamC1ENS_13ISPStreamTypeE(void) {
    ALOGD("_ZN11DpIspStreamC1ENS_13ISPStreamTypeE() called");
    return 0;
}

/* Demangled: DpIspStream::~DpIspStream() */
extern "C" __attribute__((visibility("default"))) int _ZN11DpIspStreamD1Ev(void) {
    ALOGD("_ZN11DpIspStreamD1Ev() called");
    return 0;
}

/* Demangled: PQSession::getHDRHistDone() */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession14getHDRHistDoneEv(void) {
    ALOGD("_ZN9PQSession14getHDRHistDoneEv() called");
    return 0;
}

/* Demangled: PQConfig::PQConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN8PQConfigC1Ev(void) {
    ALOGD("_ZN8PQConfigC1Ev() called");
    return 0;
}

/* Demangled: forward_src_acc(int, int, int, int, int, int, int, int, int, int, int, int&, int&, int&, int&, int&, int&) */
extern "C" __attribute__((visibility("default"))) int _Z15forward_src_acciiiiiiiiiiiRiS_S_S_S_S_(void) {
    ALOGD("_Z15forward_src_acciiiiiiiiiiiRiS_S_S_S_S_() called");
    return 0;
}

/* Demangled: tile_tdr_isp_fprint_dump_internal_eaf(__sFILE*, TILE_REG_MAP_STRUCT*, int, unsigned int*, unsigned int*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z37tile_tdr_isp_fprint_dump_internal_eafP7__sFILEP19TILE_REG_MAP_STRUCTiPjS3_jj(void) {
    ALOGD("_Z37tile_tdr_isp_fprint_dump_internal_eafP7__sFILEP19TILE_REG_MAP_STRUCTiPjS3_jj() called");
    return 0;
}

/* Demangled: DpAutoBufferPool::createBuffer(DP_COLOR_ENUM, int, int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN16DpAutoBufferPool12createBufferE13DP_COLOR_ENUMiiij(void) {
    ALOGD("_ZN16DpAutoBufferPool12createBufferE13DP_COLOR_ENUMiiij() called");
    return 0;
}

/* Demangled: DpWrapper_WPE::onRetrieveTileParam(TILE_PARAM_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN13DpWrapper_WPE19onRetrieveTileParamEP17TILE_PARAM_STRUCT(void) {
    ALOGD("_ZN13DpWrapper_WPE19onRetrieveTileParamEP17TILE_PARAM_STRUCT() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream::cancelJob(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpAsyncBlitStream9cancelJobEj(void) {
    ALOGD("_ZN17DpAsyncBlitStream9cancelJobEj() called");
    return 0;
}

/* Demangled: DpChannel::setParameterList(void**, int, unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN9DpChannel16setParameterListEPPvijPj(void) {
    ALOGD("_ZN9DpChannel16setParameterListEPPvijPj() called");
    return 0;
}

/* Exported Object: vtable for DpEngine_HDR */
extern "C" __attribute__((visibility("default"))) void* _ZTV12DpEngine_HDR = NULL;

/* Demangled: PQColorConfig::composeTransitionInput(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN13PQColorConfig22composeTransitionInputEPv(void) {
    ALOGD("_ZN13PQColorConfig22composeTransitionInputEPv() called");
    return 0;
}

/* Demangled: DpBufferPoolBase::~DpBufferPoolBase() */
extern "C" __attribute__((visibility("default"))) int _ZN16DpBufferPoolBaseD2Ev(void) {
    ALOGD("_ZN16DpBufferPoolBaseD2Ev() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream::detectFrameChange(DpAsyncBlitStream::BlitConfig&) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpAsyncBlitStream17detectFrameChangeERNS_10BlitConfigE(void) {
    ALOGD("_ZN17DpAsyncBlitStream17detectFrameChangeERNS_10BlitConfigE() called");
    return 0;
}

/* Demangled: DpDriver::simCommand(DpCommandBlock&, void**, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN8DpDriver10simCommandER14DpCommandBlockPPvRj(void) {
    ALOGD("_ZN8DpDriver10simCommandER14DpCommandBlockPPvRj() called");
    return 0;
}

/* Demangled: tile_isp_tdr(TILE_REG_MAP_STRUCT*, FUNC_DESCRIPTION_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z12tile_isp_tdrP19TILE_REG_MAP_STRUCTP23FUNC_DESCRIPTION_STRUCT(void) {
    ALOGD("_Z12tile_isp_tdrP19TILE_REG_MAP_STRUCTP23FUNC_DESCRIPTION_STRUCT() called");
    return 0;
}

/* Demangled: DpAutoBufferPool::DpAutoBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN16DpAutoBufferPoolC2Ev(void) {
    ALOGD("_ZN16DpAutoBufferPoolC2Ev() called");
    return 0;
}

/* Demangled: DpBasicBufferPool::acquireBuffer(int*, void**, unsigned int*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpBasicBufferPool13acquireBufferEPiPPvPjb(void) {
    ALOGD("_ZN17DpBasicBufferPool13acquireBufferEPiPPvPjb() called");
    return 0;
}

/* Demangled: PQSession::setPQparam(DpPqParam const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession10setPQparamEPK9DpPqParam(void) {
    ALOGD("_ZN9PQSession10setPQparamEPK9DpPqParam() called");
    return 0;
}

/* Demangled: DpStream::getNumReadbackPABuffer(unsigned int&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8DpStream22getNumReadbackPABufferERj(void) {
    ALOGD("_ZNK8DpStream22getNumReadbackPABufferERj() called");
    return 0;
}

/* Demangled: DpBlitStream::setSrcConfig(int, int, DP_COLOR_ENUM, DpInterlaceFormat, DpRect*) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpBlitStream12setSrcConfigEii13DP_COLOR_ENUM17DpInterlaceFormatP6DpRect(void) {
    ALOGD("_ZN12DpBlitStream12setSrcConfigEii13DP_COLOR_ENUM17DpInterlaceFormatP6DpRect() called");
    return 0;
}

/* Demangled: DpMmuHandler::mapSWAddressBySize(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpMmuHandler18mapSWAddressBySizeEj(void) {
    ALOGD("_ZN12DpMmuHandler18mapSWAddressBySizeEj() called");
    return 0;
}

/* Demangled: tile_tdr_isp_mask_to_dump(TILE_REG_MAP_STRUCT*, unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z25tile_tdr_isp_mask_to_dumpP19TILE_REG_MAP_STRUCTPjS1_(void) {
    ALOGD("_Z25tile_tdr_isp_mask_to_dumpP19TILE_REG_MAP_STRUCTPjS1_() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream2::refreshCropROIs() */
extern "C" __attribute__((visibility("default"))) int _ZN18DpAsyncBlitStream215refreshCropROIsEv(void) {
    ALOGD("_ZN18DpAsyncBlitStream215refreshCropROIsEv() called");
    return 0;
}

/* Demangled: DpCommandQueue::addIspMetLog(char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpCommandQueue12addIspMetLogEPcj(void) {
    ALOGD("_ZN14DpCommandQueue12addIspMetLogEPcj() called");
    return 0;
}

/* Demangled: DpMmuHandler::flushMemory(DpMemory::FLUSH_TYPE_ENUM, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpMmuHandler11flushMemoryEN8DpMemory15FLUSH_TYPE_ENUMEii(void) {
    ALOGD("_ZN12DpMmuHandler11flushMemoryEN8DpMemory15FLUSH_TYPE_ENUMEii() called");
    return 0;
}

/* Demangled: tile_tdr_isp_reg_to_dump_internal_bld(TILE_REG_MAP_STRUCT*, unsigned int*, unsigned int*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _Z37tile_tdr_isp_reg_to_dump_internal_bldP19TILE_REG_MAP_STRUCTPjS1_ji(void) {
    ALOGD("_Z37tile_tdr_isp_reg_to_dump_internal_bldP19TILE_REG_MAP_STRUCTPjS1_ji() called");
    return 0;
}

/* Demangled: DpPmemHandler::~DpPmemHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN13DpPmemHandlerD2Ev(void) {
    ALOGD("_ZN13DpPmemHandlerD2Ev() called");
    return 0;
}

/* Demangled: PQHDRAdaptor::isSEIInfoExist(_DP_VDEC_DRV_COLORDESC_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQHDRAdaptor14isSEIInfoExistEP24_DP_VDEC_DRV_COLORDESC_T(void) {
    ALOGD("_ZN12PQHDRAdaptor14isSEIInfoExistEP24_DP_VDEC_DRV_COLORDESC_T() called");
    return 0;
}

/* Demangled: DpVEncStream::queueBatchDstBuffer(int, DpBufferDesc*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpVEncStream19queueBatchDstBufferEiP12DpBufferDescjj(void) {
    ALOGD("_ZN12DpVEncStream19queueBatchDstBufferEiP12DpBufferDescjj() called");
    return 0;
}

/* Demangled: DpIonHandler::mapHWAddress(int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpIonHandler12mapHWAddressEij(void) {
    ALOGD("_ZN12DpIonHandler12mapHWAddressEij() called");
    return 0;
}

/* Demangled: DpEngine_COLOR::onDeInitEngine(DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpEngine_COLOR14onDeInitEngineER9DpCommand(void) {
    ALOGD("_ZN14DpEngine_COLOR14onDeInitEngineER9DpCommand() called");
    return 0;
}

/* Demangled: DpPathControl::onWaitStream() */
extern "C" __attribute__((visibility("default"))) int _ZN13DpPathControl12onWaitStreamEv(void) {
    ALOGD("_ZN13DpPathControl12onWaitStreamEv() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream::setSrcBuffer(void**, unsigned int*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpAsyncBlitStream12setSrcBufferEPPvPjji(void) {
    ALOGD("_ZN17DpAsyncBlitStream12setSrcBufferEPPvPjji() called");
    return 0;
}

/* Demangled: PQSession::setSVP(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession6setSVPEb(void) {
    ALOGD("_ZN9PQSession6setSVPEb() called");
    return 0;
}

/* Demangled: format2string(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z13format2stringj(void) {
    ALOGD("_Z13format2stringj() called");
    return 0;
}

/* Exported Object: WPEO2Reg */
extern "C" __attribute__((visibility("default"))) void* WPEO2Reg = NULL;

/* Demangled: DpIonHandler::cacheFlushbyRange() */
extern "C" __attribute__((visibility("default"))) int _ZN12DpIonHandler17cacheFlushbyRangeEv(void) {
    ALOGD("_ZN12DpIonHandler17cacheFlushbyRangeEv() called");
    return 0;
}

/* Demangled: PQSession::deleteHDRWaitHistListNode() */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession25deleteHDRWaitHistListNodeEv(void) {
    ALOGD("_ZN9PQSession25deleteHDRWaitHistListNodeEv() called");
    return 0;
}

/* Demangled: PQAshmem::initAshmem(android::sp<vendor::mediatek::hardware::pq::V2_0::IPictureQuality>) */
extern "C" __attribute__((visibility("default"))) int _ZN8PQAshmem10initAshmemEN7android2spIN6vendor8mediatek8hardware2pq4V2_015IPictureQualityEEE(void) {
    ALOGD("_ZN8PQAshmem10initAshmemEN7android2spIN6vendor8mediatek8hardware2pq4V2_015IPictureQualityEEE() called");
    return 0;
}

/* Demangled: PQHDRAdaptor::updateHDRFWinputFrameSize(DHDRINPUT*, DpConfig&, PQSession*) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQHDRAdaptor25updateHDRFWinputFrameSizeEP9DHDRINPUTR8DpConfigP9PQSession(void) {
    ALOGD("_ZN12PQHDRAdaptor25updateHDRFWinputFrameSizeEP9DHDRINPUTR8DpConfigP9PQSession() called");
    return 0;
}

/* Demangled: DpBufferPoolBase::dumpBufferInfo(char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN16DpBufferPoolBase14dumpBufferInfoEPcj(void) {
    ALOGD("_ZN16DpBufferPoolBase14dumpBufferInfoEPcj() called");
    return 0;
}

/* Demangled: DpPathConnection::DpPathConnection(DpPathBase*) */
extern "C" __attribute__((visibility("default"))) int _ZN16DpPathConnectionC2EP10DpPathBase(void) {
    ALOGD("_ZN16DpPathConnectionC2EP10DpPathBase() called");
    return 0;
}

/* Demangled: DpEngine_SCL::initInParam(RszInput*, DpPqParam*, DpConfig&) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpEngine_SCL11initInParamEP8RszInputP9DpPqParamR8DpConfig(void) {
    ALOGD("_ZN12DpEngine_SCL11initInParamEP8RszInputP9DpPqParamR8DpConfig() called");
    return 0;
}

/* Demangled: PQDREAdaptor::debugDumpFWInput(DREVPTopInput const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQDREAdaptor16debugDumpFWInputEPK13DREVPTopInputj(void) {
    ALOGD("_ZN12PQDREAdaptor16debugDumpFWInputEPK13DREVPTopInputj() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream::~DpAsyncBlitStream() */
extern "C" __attribute__((visibility("default"))) int _ZN17DpAsyncBlitStreamD2Ev(void) {
    ALOGD("_ZN17DpAsyncBlitStreamD2Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> >, std::__1::allocator<std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> > > >::__push_back_slow_path<std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> > >(std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS0_IyNS_9allocatorIyEEEENS1_IS3_EEE21__push_back_slow_pathIS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS0_IyNS_9allocatorIyEEEENS1_IS3_EEE21__push_back_slow_pathIS3_EEvOT_() called");
    return 0;
}

/* Demangled: DpEngine_SCL::onDeInitEngine(DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpEngine_SCL14onDeInitEngineER9DpCommand(void) {
    ALOGD("_ZN12DpEngine_SCL14onDeInitEngineER9DpCommand() called");
    return 0;
}

/* Exported Object: PQColorAdaptor::s_ALMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN14PQColorAdaptor9s_ALMutexE = NULL;

/* Demangled: DpEngine_TDSHP::ADL_resetLumaHist(DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpEngine_TDSHP17ADL_resetLumaHistER9DpCommand(void) {
    ALOGD("_ZN14DpEngine_TDSHP17ADL_resetLumaHistER9DpCommand() called");
    return 0;
}

/* Demangled: DpPathControl::~DpPathControl() */
extern "C" __attribute__((visibility("default"))) int _ZN13DpPathControlD0Ev(void) {
    ALOGD("_ZN13DpPathControlD0Ev() called");
    return 0;
}

/* Demangled: DpChannel::setSourceCrop(int, int, int, int, int, int, int, int, int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9DpChannel13setSourceCropEiiiiiiiiib(void) {
    ALOGD("_ZN9DpChannel13setSourceCropEiiiiiiiiib() called");
    return 0;
}

/* Exported Object: vtable for DpCommandQueue */
extern "C" __attribute__((visibility("default"))) void* _ZTV14DpCommandQueue = NULL;

/* Demangled: DpBlitStream::queryHWSupport(unsigned int, unsigned int, unsigned int, unsigned int, int, DP_COLOR_ENUM, DP_COLOR_ENUM, DpPqParam*, DpRect*) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpBlitStream14queryHWSupportEjjjji13DP_COLOR_ENUMS0_P9DpPqParamP6DpRect(void) {
    ALOGD("_ZN12DpBlitStream14queryHWSupportEjjjji13DP_COLOR_ENUMS0_P9DpPqParamP6DpRect() called");
    return 0;
}

/* Demangled: DpEngine_VENC::onRetrieveTileParam(TILE_PARAM_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN13DpEngine_VENC19onRetrieveTileParamEP17TILE_PARAM_STRUCT(void) {
    ALOGD("_ZN13DpEngine_VENC19onRetrieveTileParamEP17TILE_PARAM_STRUCT() called");
    return 0;
}

/* Demangled: DpPathComposer::newPath(STREAM_TYPE_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpPathComposer7newPathE16STREAM_TYPE_ENUM(void) {
    ALOGD("_ZN14DpPathComposer7newPathE16STREAM_TYPE_ENUM() called");
    return 0;
}

/* Demangled: DpCommandQueue::setDumpOrder(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpCommandQueue12setDumpOrderEj(void) {
    ALOGD("_ZN14DpCommandQueue12setDumpOrderEj() called");
    return 0;
}

/* Demangled: DpCommandQueue::~DpCommandQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN14DpCommandQueueD1Ev(void) {
    ALOGD("_ZN14DpCommandQueueD1Ev() called");
    return 0;
}

/* Demangled: PQDREHistogramAdaptor::createBuffer(unsigned long long, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN21PQDREHistogramAdaptor12createBufferEyPj(void) {
    ALOGD("_ZN21PQDREHistogramAdaptor12createBufferEyPj() called");
    return 0;
}

/* Demangled: DpMemory::Factory(DP_MEMORY_ENUM, void*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8DpMemory7FactoryE14DP_MEMORY_ENUMPvjj(void) {
    ALOGD("_ZN8DpMemory7FactoryE14DP_MEMORY_ENUMPvjj() called");
    return 0;
}

/* Demangled: DpCommandRecorder::initRecord() */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorder10initRecordEv(void) {
    ALOGD("_ZN17DpCommandRecorder10initRecordEv() called");
    return 0;
}

/* Demangled: PQColorAdaptor::onUpdateLumaEngine(COLOR_CONFIG_T*, DpCommand&, int, int&, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN14PQColorAdaptor18onUpdateLumaEngineEP14COLOR_CONFIG_TR9DpCommandiRiPi(void) {
    ALOGD("_ZN14PQColorAdaptor18onUpdateLumaEngineEP14COLOR_CONFIG_TR9DpCommandiRiPi() called");
    return 0;
}

/* Demangled: PQDREConfig::getAdaptiveCaltmFlag(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN11PQDREConfig20getAdaptiveCaltmFlagEb(void) {
    ALOGD("_ZN11PQDREConfig20getAdaptiveCaltmFlagEb() called");
    return 0;
}

/* Demangled: DpEngineBase::onDumpDebugInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN12DpEngineBase15onDumpDebugInfoEv(void) {
    ALOGD("_ZN12DpEngineBase15onDumpDebugInfoEv() called");
    return 0;
}

/* Demangled: DpIspStream::detectFrameChange(DpIspStream::IspConfig&) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpIspStream17detectFrameChangeERNS_9IspConfigE(void) {
    ALOGD("_ZN11DpIspStream17detectFrameChangeERNS_9IspConfigE() called");
    return 0;
}

/* Demangled: DpIspStream::~DpIspStream() */
extern "C" __attribute__((visibility("default"))) int _ZN11DpIspStreamD2Ev(void) {
    ALOGD("_ZN11DpIspStreamD2Ev() called");
    return 0;
}

/* Demangled: DpVEncStream::queueDstBuffer(int, void**, unsigned int*, unsigned int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpVEncStream14queueDstBufferEiPPvPjS2_i(void) {
    ALOGD("_ZN12DpVEncStream14queueDstBufferEiPPvPjS2_i() called");
    return 0;
}

/* Exported Object: AAL0Reg */
extern "C" __attribute__((visibility("default"))) void* AAL0Reg = NULL;

/* Demangled: PQConfig::PQConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN8PQConfigC2Ev(void) {
    ALOGD("_ZN8PQConfigC2Ev() called");
    return 0;
}

/* Demangled: tile_cal_main_dp(int, TILE_REG_MAP_STRUCT*, FUNC_DESCRIPTION_STRUCT*, ISP_TILE_HEX_DUMP_STRUCT*, ISP_TPIPE_DESCRIPTOR_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z16tile_cal_main_dpiP19TILE_REG_MAP_STRUCTP23FUNC_DESCRIPTION_STRUCTP24ISP_TILE_HEX_DUMP_STRUCTP27ISP_TPIPE_DESCRIPTOR_STRUCT(void) {
    ALOGD("_Z16tile_cal_main_dpiP19TILE_REG_MAP_STRUCTP23FUNC_DESCRIPTION_STRUCTP24ISP_TILE_HEX_DUMP_STRUCTP27ISP_TPIPE_DESCRIPTOR_STRUCT() called");
    return 0;
}

/* Demangled: DpTilePath::onConfigBatchedFrames(DpCommand&, DpConfig&) */
extern "C" __attribute__((visibility("default"))) int _ZN10DpTilePath21onConfigBatchedFramesER9DpCommandR8DpConfig(void) {
    ALOGD("_ZN10DpTilePath21onConfigBatchedFramesER9DpCommandR8DpConfig() called");
    return 0;
}

/* Demangled: PQSession::getPipeNum() */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession10getPipeNumEv(void) {
    ALOGD("_ZN9PQSession10getPipeNumEv() called");
    return 0;
}

/* Demangled: DpBlitStream::setUser(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpBlitStream7setUserEj(void) {
    ALOGD("_ZN12DpBlitStream7setUserEj() called");
    return 0;
}

/* Demangled: DpIspStream::setSrcConfig(DP_COLOR_ENUM, int, int, int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpIspStream12setSrcConfigE13DP_COLOR_ENUMiiib(void) {
    ALOGD("_ZN11DpIspStream12setSrcConfigE13DP_COLOR_ENUMiiib() called");
    return 0;
}

/* Demangled: DpPortAdapt::flushBuffer(CLIENT_TYPE_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpPortAdapt11flushBufferE16CLIENT_TYPE_ENUM(void) {
    ALOGD("_ZN11DpPortAdapt11flushBufferE16CLIENT_TYPE_ENUM() called");
    return 0;
}

/* Demangled: DpVEncStream::queueBatchSrcBuffer(DpBufferDesc*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpVEncStream19queueBatchSrcBufferEP12DpBufferDescjj(void) {
    ALOGD("_ZN12DpVEncStream19queueBatchSrcBufferEP12DpBufferDescjj() called");
    return 0;
}

/* Demangled: DpBasicBufferPool::dequeueBuffer(int*, void**, unsigned int*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpBasicBufferPool13dequeueBufferEPiPPvPjb(void) {
    ALOGD("_ZN17DpBasicBufferPool13dequeueBufferEPiPPvPjb() called");
    return 0;
}

/* Demangled: DpDriver::getEnableDumpRegister() */
extern "C" __attribute__((visibility("default"))) int _ZN8DpDriver21getEnableDumpRegisterEv(void) {
    ALOGD("_ZN8DpDriver21getEnableDumpRegisterEv() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream2::BaseConfig::BaseConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN18DpAsyncBlitStream210BaseConfigC1Ev(void) {
    ALOGD("_ZN18DpAsyncBlitStream210BaseConfigC1Ev() called");
    return 0;
}

/* Demangled: DpCommandQueue::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN14DpCommandQueue5resetEv(void) {
    ALOGD("_ZN14DpCommandQueue5resetEv() called");
    return 0;
}

/* Demangled: DpEngine_AAL::onReconfigTiles(DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpEngine_AAL15onReconfigTilesER9DpCommand(void) {
    ALOGD("_ZN12DpEngine_AAL15onReconfigTilesER9DpCommand() called");
    return 0;
}

/* Demangled: PQDREAdaptor::getDRETransCurtgtBuffer(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQDREAdaptor23getDRETransCurtgtBufferEb(void) {
    ALOGD("_ZN12PQDREAdaptor23getDRETransCurtgtBufferEb() called");
    return 0;
}

/* Demangled: DpCommandRecorder::getBlockBaseSW() */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorder14getBlockBaseSWEv(void) {
    ALOGD("_ZN17DpCommandRecorder14getBlockBaseSWEv() called");
    return 0;
}

/* Demangled: DpEngine_VENC::threadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN13DpEngine_VENC10threadLoopEv(void) {
    ALOGD("_ZN13DpEngine_VENC10threadLoopEv() called");
    return 0;
}

/* Demangled: DpEngine_HDR::onConfigTile(DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpEngine_HDR12onConfigTileER9DpCommand(void) {
    ALOGD("_ZN12DpEngine_HDR12onConfigTileER9DpCommand() called");
    return 0;
}

/* Demangled: DpIonHandler::DpIonHandler(void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpIonHandlerC2EPvj(void) {
    ALOGD("_ZN12DpIonHandlerC2EPvj() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream2::setPQParameter(unsigned int, DpPqParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN18DpAsyncBlitStream214setPQParameterEjRK9DpPqParam(void) {
    ALOGD("_ZN18DpAsyncBlitStream214setPQParameterEjRK9DpPqParam() called");
    return 0;
}

/* Demangled: DpCommandRecorder::getSecIspMeta() */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorder13getSecIspMetaEv(void) {
    ALOGD("_ZN17DpCommandRecorder13getSecIspMetaEv() called");
    return 0;
}

/* Exported Object: DpEngine_WROT::s_uvTable */
extern "C" __attribute__((visibility("default"))) void* _ZN13DpEngine_WROT9s_uvTableE = NULL;

/* Demangled: PQSessionManager::setAALPrePipeNumCapture(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN16PQSessionManager23setAALPrePipeNumCaptureEj(void) {
    ALOGD("_ZN16PQSessionManager23setAALPrePipeNumCaptureEj() called");
    return 0;
}

/* Demangled: DpDriver::addRefCnt(int&) */
extern "C" __attribute__((visibility("default"))) int _ZN8DpDriver9addRefCntERi(void) {
    ALOGD("_ZN8DpDriver9addRefCntERi() called");
    return 0;
}

/* Demangled: PQDREHistogramAdaptor::setBypass(void*, unsigned long long, DRETopOutput const*) */
extern "C" __attribute__((visibility("default"))) int _ZN21PQDREHistogramAdaptor9setBypassEPvyPK12DRETopOutput(void) {
    ALOGD("_ZN21PQDREHistogramAdaptor9setBypassEPvyPK12DRETopOutput() called");
    return 0;
}

/* Demangled: DpPortAdapt::flipBuffer(CLIENT_TYPE_ENUM, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpPortAdapt10flipBufferE16CLIENT_TYPE_ENUMb(void) {
    ALOGD("_ZN11DpPortAdapt10flipBufferE16CLIENT_TYPE_ENUMb() called");
    return 0;
}

/* Exported Object: IMGIReg */
extern "C" __attribute__((visibility("default"))) void* IMGIReg = NULL;

/* Demangled: DpPmemHandler::mapSWAddressBySize(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN13DpPmemHandler18mapSWAddressBySizeEj(void) {
    ALOGD("_ZN13DpPmemHandler18mapSWAddressBySizeEj() called");
    return 0;
}

/* Exported Object: PQDSAdaptor::s_ALMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN11PQDSAdaptor9s_ALMutexE = NULL;

/* Demangled: PQTuningBuffer::pull() */
extern "C" __attribute__((visibility("default"))) int _ZN14PQTuningBuffer4pullEv(void) {
    ALOGD("_ZN14PQTuningBuffer4pullEv() called");
    return 0;
}

/* Demangled: PQDREAdaptor::tuningDREInput(void*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQDREAdaptor14tuningDREInputEPvi(void) {
    ALOGD("_ZN12PQDREAdaptor14tuningDREInputEPvi() called");
    return 0;
}

/* Demangled: DpRingBufferPool::DpRingBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN16DpRingBufferPoolC1Ev(void) {
    ALOGD("_ZN16DpRingBufferPoolC1Ev() called");
    return 0;
}

/* Demangled: DpStream::dumpDebugStream() */
extern "C" __attribute__((visibility("default"))) int _ZN8DpStream15dumpDebugStreamEv(void) {
    ALOGD("_ZN8DpStream15dumpDebugStreamEv() called");
    return 0;
}

/* Demangled: DpCommandRecorder::hasIspSecMeta() */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorder13hasIspSecMetaEv(void) {
    ALOGD("_ZN17DpCommandRecorder13hasIspSecMetaEv() called");
    return 0;
}

/* Demangled: PQDREHistogramAdaptor::setBypass(void*, unsigned long long, DREVPTopOutput const*) */
extern "C" __attribute__((visibility("default"))) int _ZN21PQDREHistogramAdaptor9setBypassEPvyPK14DREVPTopOutput(void) {
    ALOGD("_ZN21PQDREHistogramAdaptor9setBypassEPvyPK14DREVPTopOutput() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream::createJob(unsigned int&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpAsyncBlitStream9createJobERjRi(void) {
    ALOGD("_ZN17DpAsyncBlitStream9createJobERjRi() called");
    return 0;
}

/* Demangled: DpBlitStream::setSrcBuffer(int, unsigned int*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpBlitStream12setSrcBufferEiPjj(void) {
    ALOGD("_ZN12DpBlitStream12setSrcBufferEiPjj() called");
    return 0;
}

/* Demangled: DpIspStream::queueSrcBuffer(int*, unsigned int*, unsigned int*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpIspStream14queueSrcBufferEPiPjS1_j(void) {
    ALOGD("_ZN11DpIspStream14queueSrcBufferEPiPjS1_j() called");
    return 0;
}

/* Demangled: DpPathControl::~DpPathControl() */
extern "C" __attribute__((visibility("default"))) int _ZN13DpPathControlD1Ev(void) {
    ALOGD("_ZN13DpPathControlD1Ev() called");
    return 0;
}

/* Demangled: PQColorAdaptor::onConfigHueEngine(COLOR_CONFIG_T*, DpCommand&, int&, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN14PQColorAdaptor17onConfigHueEngineEP14COLOR_CONFIG_TR9DpCommandRiPi(void) {
    ALOGD("_ZN14PQColorAdaptor17onConfigHueEngineEP14COLOR_CONFIG_TR9DpCommandRiPi() called");
    return 0;
}

/* Demangled: PQHDRConfig::getDebugFlag(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN11PQHDRConfig12getDebugFlagEb(void) {
    ALOGD("_ZN11PQHDRConfig12getDebugFlagEb() called");
    return 0;
}

/* Demangled: DpCommandQueue::readback(unsigned int, unsigned int, unsigned int, int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpCommandQueue8readbackEjjjPii(void) {
    ALOGD("_ZN14DpCommandQueue8readbackEjjjPii() called");
    return 0;
}

/* Demangled: PQColorAdaptor::tuningColorOutput(COLOR_CONFIG_T*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14PQColorAdaptor17tuningColorOutputEP14COLOR_CONFIG_Ti(void) {
    ALOGD("_ZN14PQColorAdaptor17tuningColorOutputEP14COLOR_CONFIG_Ti() called");
    return 0;
}

/* Demangled: DpVEncStream::setBatchParameter(ISP_TPIPE_CONFIG_STRUCT**, unsigned int, ISP2MDP_STRUCT*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpVEncStream17setBatchParameterEPP23ISP_TPIPE_CONFIG_STRUCTjP14ISP2MDP_STRUCTj(void) {
    ALOGD("_ZN12DpVEncStream17setBatchParameterEPP23ISP_TPIPE_CONFIG_STRUCTjP14ISP2MDP_STRUCTj() called");
    return 0;
}

/* Demangled: DpCommandQueue::~DpCommandQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN14DpCommandQueueD2Ev(void) {
    ALOGD("_ZN14DpCommandQueueD2Ev() called");
    return 0;
}

/* Demangled: DpEngine_HDR::onRetrieveFrameParam(TILE_PARAM_STRUCT*, DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpEngine_HDR20onRetrieveFrameParamEP17TILE_PARAM_STRUCTR9DpCommand(void) {
    ALOGD("_ZN12DpEngine_HDR20onRetrieveFrameParamEP17TILE_PARAM_STRUCTR9DpCommand() called");
    return 0;
}

/* Demangled: PQSession::removeUselessDCDoneHistListNode(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession31removeUselessDCDoneHistListNodeEj(void) {
    ALOGD("_ZN9PQSession31removeUselessDCDoneHistListNodeEj() called");
    return 0;
}

/* Demangled: PQReadBackFactory::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN17PQReadBackFactory15destroyInstanceEv(void) {
    ALOGD("_ZN17PQReadBackFactory15destroyInstanceEv() called");
    return 0;
}

/* Demangled: PQDREAdaptor::debugDumpFWInput(DRETopInput const*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQDREAdaptor16debugDumpFWInputEPK11DRETopInputji(void) {
    ALOGD("_ZN12PQDREAdaptor16debugDumpFWInputEPK11DRETopInputji() called");
    return 0;
}

/* Demangled: tile_lut_mdp_func_enable(int*, TILE_FUNC_ENABLE_STRUCT*, TILE_REG_MAP_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z24tile_lut_mdp_func_enablePiP23TILE_FUNC_ENABLE_STRUCTP19TILE_REG_MAP_STRUCT(void) {
    ALOGD("_Z24tile_lut_mdp_func_enablePiP23TILE_FUNC_ENABLE_STRUCTP19TILE_REG_MAP_STRUCT() called");
    return 0;
}

/* Demangled: DpBlitStream::setDstBuffer(void**, unsigned int*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpBlitStream12setDstBufferEPPvPjj(void) {
    ALOGD("_ZN12DpBlitStream12setDstBufferEPPvPjj() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream2::setDither(unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN18DpAsyncBlitStream29setDitherEjb(void) {
    ALOGD("_ZN18DpAsyncBlitStream29setDitherEjb() called");
    return 0;
}

/* Demangled: DpFragStream::setDstBuffer(void**, unsigned int*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpFragStream12setDstBufferEPPvPjj(void) {
    ALOGD("_ZN12DpFragStream12setDstBufferEPPvPjj() called");
    return 0;
}

/* Demangled: PQHDRAdaptor::isHDRinfoChanged(_DP_VDEC_DRV_COLORDESC_T*, _DP_VDEC_DRV_DYNAMIC_METADATA_T*, HDR_MODE_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQHDRAdaptor16isHDRinfoChangedEP24_DP_VDEC_DRV_COLORDESC_TP31_DP_VDEC_DRV_DYNAMIC_METADATA_T13HDR_MODE_ENUM(void) {
    ALOGD("_ZN12PQHDRAdaptor16isHDRinfoChangedEP24_DP_VDEC_DRV_COLORDESC_TP31_DP_VDEC_DRV_DYNAMIC_METADATA_T13HDR_MODE_ENUM() called");
    return 0;
}

/* Demangled: DpCommandRecorder::setFrameSrcInfo(DP_COLOR_ENUM, int, int, int, int, unsigned int*, unsigned int*, DpSecure) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorder15setFrameSrcInfoE13DP_COLOR_ENUMiiiiPjS1_8DpSecure(void) {
    ALOGD("_ZN17DpCommandRecorder15setFrameSrcInfoE13DP_COLOR_ENUMiiiiPjS1_8DpSecure() called");
    return 0;
}

/* Demangled: DpTilePathMT::threadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN12DpTilePathMT10threadLoopEv(void) {
    ALOGD("_ZN12DpTilePathMT10threadLoopEv() called");
    return 0;
}

/* Demangled: DpWrapper_ISP::initTilePath(TILE_PARAM_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN13DpWrapper_ISP12initTilePathEP17TILE_PARAM_STRUCT(void) {
    ALOGD("_ZN13DpWrapper_ISP12initTilePathEP17TILE_PARAM_STRUCT() called");
    return 0;
}

/* Demangled: DpIspStream::queryPQHWSize(unsigned int*, unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpIspStream13queryPQHWSizeEPjS0_S0_(void) {
    ALOGD("_ZN11DpIspStream13queryPQHWSizeEPjS0_S0_() called");
    return 0;
}

/* Demangled: DpBufferPoolBase::releaseBuffer(int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN16DpBufferPoolBase13releaseBufferEib(void) {
    ALOGD("_ZN16DpBufferPoolBase13releaseBufferEib() called");
    return 0;
}

/* Demangled: DpStream::startStream(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN8DpStream11startStreamEb(void) {
    ALOGD("_ZN8DpStream11startStreamEb() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream2::BaseConfig::BaseConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN18DpAsyncBlitStream210BaseConfigC2Ev(void) {
    ALOGD("_ZN18DpAsyncBlitStream210BaseConfigC2Ev() called");
    return 0;
}

/* Demangled: DpDriver::~DpDriver() */
extern "C" __attribute__((visibility("default"))) int _ZN8DpDriverD1Ev(void) {
    ALOGD("_ZN8DpDriverD1Ev() called");
    return 0;
}

/* Demangled: PQSession::setPreCutPosX(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession13setPreCutPosXEj(void) {
    ALOGD("_ZN9PQSession13setPreCutPosXEj() called");
    return 0;
}

/* Demangled: tile_tdr_isp_dump_inv_reg_internal(TILE_REG_MAP_STRUCT*, TILE_REG_MAP_STRUCT*, int, unsigned int*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z34tile_tdr_isp_dump_inv_reg_internalP19TILE_REG_MAP_STRUCTS0_iPjjj(void) {
    ALOGD("_Z34tile_tdr_isp_dump_inv_reg_internalP19TILE_REG_MAP_STRUCTS0_iPjjj() called");
    return 0;
}

/* Demangled: DpWrapper_ISP::onInitEngine(DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN13DpWrapper_ISP12onInitEngineER9DpCommand(void) {
    ALOGD("_ZN13DpWrapper_ISP12onInitEngineER9DpCommand() called");
    return 0;
}

/* Demangled: DpEngine_RDMA::onDeInitEngine(DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN13DpEngine_RDMA14onDeInitEngineER9DpCommand(void) {
    ALOGD("_ZN13DpEngine_RDMA14onDeInitEngineER9DpCommand() called");
    return 0;
}

/* Demangled: PQSession::HandleHDRHistDoneAndCheckRef(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession28HandleHDRHistDoneAndCheckRefEj(void) {
    ALOGD("_ZN9PQSession28HandleHDRHistDoneAndCheckRefEj() called");
    return 0;
}

/* Demangled: PQSession::getID() */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession5getIDEv(void) {
    ALOGD("_ZN9PQSession5getIDEv() called");
    return 0;
}

/* Demangled: PQDSConfig::isEnabled(GlobalPQParam&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN10PQDSConfig9isEnabledER13GlobalPQParamb(void) {
    ALOGD("_ZN10PQDSConfig9isEnabledER13GlobalPQParamb() called");
    return 0;
}

/* Demangled: PQColorConfig::dumpTransitionRegisters(char const*, void*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN13PQColorConfig23dumpTransitionRegistersEPKcPvb(void) {
    ALOGD("_ZN13PQColorConfig23dumpTransitionRegistersEPKcPvb() called");
    return 0;
}

/* Demangled: PQDREAdaptor::getDefaultDREVPOutput(unsigned int, DREVPTopOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQDREAdaptor21getDefaultDREVPOutputEjP14DREVPTopOutput(void) {
    ALOGD("_ZN12PQDREAdaptor21getDefaultDREVPOutputEjP14DREVPTopOutput() called");
    return 0;
}

/* Exported Object: vtable for DpEngine_COLOR */
extern "C" __attribute__((visibility("default"))) void* _ZTV14DpEngine_COLOR = NULL;

/* Demangled: DpChannel::setParameter(void*, int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN9DpChannel12setParameterEPviPj(void) {
    ALOGD("_ZN9DpChannel12setParameterEPviPj() called");
    return 0;
}

/* Demangled: DpEngineMutex::DpEngineMutex(DpPathBase*) */
extern "C" __attribute__((visibility("default"))) int _ZN13DpEngineMutexC2EP10DpPathBase(void) {
    ALOGD("_ZN13DpEngineMutexC2EP10DpPathBase() called");
    return 0;
}

/* Demangled: DpVEncStream::queueSrcBuffer(unsigned int*, unsigned int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpVEncStream14queueSrcBufferEPjS0_i(void) {
    ALOGD("_ZN12DpVEncStream14queueSrcBufferEPjS0_i() called");
    return 0;
}

/* Demangled: DpCommandRecorder::flushRecord() */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorder11flushRecordEv(void) {
    ALOGD("_ZN17DpCommandRecorder11flushRecordEv() called");
    return 0;
}

/* Demangled: DpChannel::~DpChannel() */
extern "C" __attribute__((visibility("default"))) int _ZN9DpChannelD1Ev(void) {
    ALOGD("_ZN9DpChannelD1Ev() called");
    return 0;
}

/* Demangled: PQSession::getDpPqConfig(DpPqConfig**) */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession13getDpPqConfigEPP10DpPqConfig(void) {
    ALOGD("_ZN9PQSession13getDpPqConfigEPP10DpPqConfig() called");
    return 0;
}

/* Demangled: DpCommandQueue::setReadbackRegs() */
extern "C" __attribute__((visibility("default"))) int _ZN14DpCommandQueue15setReadbackRegsEv(void) {
    ALOGD("_ZN14DpCommandQueue15setReadbackRegsEv() called");
    return 0;
}

/* Demangled: DpRingBufferPool::DpRingBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN16DpRingBufferPoolC2Ev(void) {
    ALOGD("_ZN16DpRingBufferPoolC2Ev() called");
    return 0;
}

/* Demangled: DpChannel::setSourcePort(PORT_TYPE_ENUM, DP_COLOR_ENUM, int, int, int, int, bool, bool, DpBufferPoolBase*, DP_PROFILE_ENUM, DpSecure, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9DpChannel13setSourcePortE14PORT_TYPE_ENUM13DP_COLOR_ENUMiiiibbP16DpBufferPoolBase15DP_PROFILE_ENUM8DpSecureb(void) {
    ALOGD("_ZN9DpChannel13setSourcePortE14PORT_TYPE_ENUM13DP_COLOR_ENUMiiiibbP16DpBufferPoolBase15DP_PROFILE_ENUM8DpSecureb() called");
    return 0;
}

/* Demangled: DpEngine_AAL::onConfigTile(DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpEngine_AAL12onConfigTileER9DpCommand(void) {
    ALOGD("_ZN12DpEngine_AAL12onConfigTileER9DpCommand() called");
    return 0;
}

/* Demangled: PQDSAdaptor::tuningDSSWReg(int) */
extern "C" __attribute__((visibility("default"))) int _ZN11PQDSAdaptor13tuningDSSWRegEi(void) {
    ALOGD("_ZN11PQDSAdaptor13tuningDSSWRegEi() called");
    return 0;
}

/* Demangled: tile_lut_isp_func_subrdma(int*, TILE_FUNC_SUBRDMA_STRUCT*, TILE_REG_MAP_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z25tile_lut_isp_func_subrdmaPiP24TILE_FUNC_SUBRDMA_STRUCTP19TILE_REG_MAP_STRUCT(void) {
    ALOGD("_Z25tile_lut_isp_func_subrdmaPiP24TILE_FUNC_SUBRDMA_STRUCTP19TILE_REG_MAP_STRUCT() called");
    return 0;
}

/* Demangled: DpBasicBufferPool::getSWBaseWithID(int, void**, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpBasicBufferPool15getSWBaseWithIDEiPPvPj(void) {
    ALOGD("_ZN17DpBasicBufferPool15getSWBaseWithIDEiPPvPj() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream2::queryHWSupport(unsigned int, unsigned int, unsigned int, unsigned int, int, DP_COLOR_ENUM, DP_COLOR_ENUM, DpPqParam*, DpRect*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN18DpAsyncBlitStream214queryHWSupportEjjjji13DP_COLOR_ENUMS0_P9DpPqParamP6DpRectj(void) {
    ALOGD("_ZN18DpAsyncBlitStream214queryHWSupportEjjjji13DP_COLOR_ENUMS0_P9DpPqParamP6DpRectj() called");
    return 0;
}

/* Demangled: DpVEncStream::stopVideoRecord() */
extern "C" __attribute__((visibility("default"))) int _ZN12DpVEncStream15stopVideoRecordEv(void) {
    ALOGD("_ZN12DpVEncStream15stopVideoRecordEv() called");
    return 0;
}

/* Demangled: PQHDRAdaptor::PQHDRAdaptor(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQHDRAdaptorC1Ej(void) {
    ALOGD("_ZN12PQHDRAdaptorC1Ej() called");
    return 0;
}

/* Demangled: PQDREAdaptor::dumpFwRegInFw(DpPqParam const*, PQSession*) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQDREAdaptor13dumpFwRegInFwEPK9DpPqParamP9PQSession(void) {
    ALOGD("_ZN12PQDREAdaptor13dumpFwRegInFwEPK9DpPqParamP9PQSession() called");
    return 0;
}

/* Demangled: DpPathControl::~DpPathControl() */
extern "C" __attribute__((visibility("default"))) int _ZN13DpPathControlD2Ev(void) {
    ALOGD("_ZN13DpPathControlD2Ev() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream::setSrcConfig(int, int, DP_COLOR_ENUM, DpInterlaceFormat, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpAsyncBlitStream12setSrcConfigEii13DP_COLOR_ENUM17DpInterlaceFormatj(void) {
    ALOGD("_ZN17DpAsyncBlitStream12setSrcConfigEii13DP_COLOR_ENUM17DpInterlaceFormatj() called");
    return 0;
}

/* Demangled: PQSession::isHDRDoneHistEmpty() */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession18isHDRDoneHistEmptyEv(void) {
    ALOGD("_ZN9PQSession18isHDRDoneHistEmptyEv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekpos(std::__1::fpos<mbstate_t>, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj() called");
    return 0;
}

/* Demangled: DpColor2MMDumpColor(DP_COLOR_ENUM) */
extern "C" __attribute__((visibility("default"))) int _Z19DpColor2MMDumpColor13DP_COLOR_ENUM(void) {
    ALOGD("_Z19DpColor2MMDumpColor13DP_COLOR_ENUM() called");
    return 0;
}

/* Demangled: DpVEncStream::setRotation(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpVEncStream11setRotationEii(void) {
    ALOGD("_ZN12DpVEncStream11setRotationEii() called");
    return 0;
}

/* Demangled: DpCommandQueue::addIspSecureMeta(cmdqSecIspMeta) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpCommandQueue16addIspSecureMetaE14cmdqSecIspMeta(void) {
    ALOGD("_ZN14DpCommandQueue16addIspSecureMetaE14cmdqSecIspMeta() called");
    return 0;
}

/* Demangled: PQSession::getVideoInfoScenario() */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession20getVideoInfoScenarioEv(void) {
    ALOGD("_ZN9PQSession20getVideoInfoScenarioEv() called");
    return 0;
}

/* Demangled: PQHDRAdaptor::getPreHDRMode(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQHDRAdaptor13getPreHDRModeEb(void) {
    ALOGD("_ZN12PQHDRAdaptor13getPreHDRModeEb() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream2::setDstConfig(unsigned int, int, int, int, int, DP_COLOR_ENUM, DP_PROFILE_ENUM, DpInterlaceFormat, DpRect*, DpSecure, bool, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN18DpAsyncBlitStream212setDstConfigEjiiii13DP_COLOR_ENUM15DP_PROFILE_ENUM17DpInterlaceFormatP6DpRect8DpSecurebji(void) {
    ALOGD("_ZN18DpAsyncBlitStream212setDstConfigEjiiii13DP_COLOR_ENUM15DP_PROFILE_ENUM17DpInterlaceFormatP6DpRect8DpSecurebji() called");
    return 0;
}

/* Demangled: DpCommandRecorder::getSyncMode() */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorder11getSyncModeEv(void) {
    ALOGD("_ZN17DpCommandRecorder11getSyncModeEv() called");
    return 0;
}

/* Demangled: DpCommandRecorder::getReadbackPABuffer(unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorder19getReadbackPABufferERj(void) {
    ALOGD("_ZN17DpCommandRecorder19getReadbackPABufferERj() called");
    return 0;
}

/* Demangled: DpIonHandler::flushMemory(DpMemory::FLUSH_TYPE_ENUM, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpIonHandler11flushMemoryEN8DpMemory15FLUSH_TYPE_ENUMEii(void) {
    ALOGD("_ZN12DpIonHandler11flushMemoryEN8DpMemory15FLUSH_TYPE_ENUMEii() called");
    return 0;
}

/* Demangled: PQSession::removeUselessHDRDoneHistListNode(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession32removeUselessHDRDoneHistListNodeEj(void) {
    ALOGD("_ZN9PQSession32removeUselessHDRDoneHistListNodeEj() called");
    return 0;
}

/* Exported Object: PQSessionManager::m_CapturepreAAL0BufferId */
extern "C" __attribute__((visibility("default"))) void* _ZN16PQSessionManager24m_CapturepreAAL0BufferIdE = NULL;

/* Demangled: PQDREAdaptor::writeDRE30Curve(DpCommand&, DRETopOutput const*, unsigned int, unsigned int, int*, int&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQDREAdaptor15writeDRE30CurveER9DpCommandPK12DRETopOutputjjPiRib(void) {
    ALOGD("_ZN12PQDREAdaptor15writeDRE30CurveER9DpCommandPK12DRETopOutputjjPiRib() called");
    return 0;
}

/* Demangled: DpIspStream::setDstConfig(int, int, int, int, int, DP_COLOR_ENUM, DP_PROFILE_ENUM, DpInterlaceFormat, DpRect*, bool, DpSecure) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpIspStream12setDstConfigEiiiii13DP_COLOR_ENUM15DP_PROFILE_ENUM17DpInterlaceFormatP6DpRectb8DpSecure(void) {
    ALOGD("_ZN11DpIspStream12setDstConfigEiiiii13DP_COLOR_ENUM15DP_PROFILE_ENUM17DpInterlaceFormatP6DpRectb8DpSecure() called");
    return 0;
}

/* Demangled: PQSession::getPreHWIdAndBufferId(unsigned int*, unsigned int*, unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession21getPreHWIdAndBufferIdEPjS0_S0_S0_(void) {
    ALOGD("_ZN9PQSession21getPreHWIdAndBufferIdEPjS0_S0_S0_() called");
    return 0;
}

/* Demangled: DpIspStream::queueSrcBuffer(void**, unsigned int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpIspStream14queueSrcBufferEPPvPji(void) {
    ALOGD("_ZN11DpIspStream14queueSrcBufferEPPvPji() called");
    return 0;
}

/* Demangled: DpCommandQueue::setEvent(DpCommandBase::EVENT_TYPE_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpCommandQueue8setEventEN13DpCommandBase15EVENT_TYPE_ENUME(void) {
    ALOGD("_ZN14DpCommandQueue8setEventEN13DpCommandBase15EVENT_TYPE_ENUME() called");
    return 0;
}

/* Demangled: DpEngine_HDR::onDeInitEngine(DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpEngine_HDR14onDeInitEngineER9DpCommand(void) {
    ALOGD("_ZN12DpEngine_HDR14onDeInitEngineER9DpCommand() called");
    return 0;
}

/* Demangled: DpPmemHandler::alloc_internal(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN13DpPmemHandler14alloc_internalEj(void) {
    ALOGD("_ZN13DpPmemHandler14alloc_internalEj() called");
    return 0;
}

/* Demangled: PQDREHistogramAdaptor::getInstance(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN21PQDREHistogramAdaptor11getInstanceEj(void) {
    ALOGD("_ZN21PQDREHistogramAdaptor11getInstanceEj() called");
    return 0;
}

/* Demangled: DpBufferPoolBase::pollBufferStatus(CLIENT_TYPE_ENUM, int, int, int, int, int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN16DpBufferPoolBase16pollBufferStatusE16CLIENT_TYPE_ENUMiiiiib(void) {
    ALOGD("_ZN16DpBufferPoolBase16pollBufferStatusE16CLIENT_TYPE_ENUMiiiiib() called");
    return 0;
}

/* Demangled: PQDSConfig::~PQDSConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN10PQDSConfigD1Ev(void) {
    ALOGD("_ZN10PQDSConfigD1Ev() called");
    return 0;
}

/* Demangled: DpBufferPoolBase::getSWBaseWithID(int, void**, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN16DpBufferPoolBase15getSWBaseWithIDEiPPvPj(void) {
    ALOGD("_ZN16DpBufferPoolBase15getSWBaseWithIDEiPPvPj() called");
    return 0;
}

/* Demangled: DpIspStream::setParameter(ISP_TPIPE_CONFIG_STRUCT&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpIspStream12setParameterER23ISP_TPIPE_CONFIG_STRUCTj(void) {
    ALOGD("_ZN11DpIspStream12setParameterER23ISP_TPIPE_CONFIG_STRUCTj() called");
    return 0;
}

/* Exported Object: vtable for DpMmuHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTV12DpMmuHandler = NULL;

/* Exported Object: PQSessionManager::m_lastVideoIndex */
extern "C" __attribute__((visibility("default"))) void* _ZN16PQSessionManager16m_lastVideoIndexE = NULL;

/* Exported Object: PQDSConfig::m_TDSHPTable */
extern "C" __attribute__((visibility("default"))) void* _ZN10PQDSConfig12m_TDSHPTableE = NULL;

/* Demangled: PQDREAdaptor::getDRETransPrefloatBuffer(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQDREAdaptor25getDRETransPrefloatBufferEb(void) {
    ALOGD("_ZN12PQDREAdaptor25getDRETransPrefloatBufferEb() called");
    return 0;
}

/* Demangled: DpDriver::~DpDriver() */
extern "C" __attribute__((visibility("default"))) int _ZN8DpDriverD2Ev(void) {
    ALOGD("_ZN8DpDriverD2Ev() called");
    return 0;
}

/* Demangled: PQRSZAdaptor::calRegs(PQSession*, DpCommand&, RszInput*, RszOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQRSZAdaptor7calRegsEP9PQSessionR9DpCommandP8RszInputP9RszOutput(void) {
    ALOGD("_ZN12PQRSZAdaptor7calRegsEP9PQSessionR9DpCommandP8RszInputP9RszOutput() called");
    return 0;
}

/* Demangled: PQDSConfig::getIspTuningFlag(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN10PQDSConfig16getIspTuningFlagEb(void) {
    ALOGD("_ZN10PQDSConfig16getIspTuningFlagEb() called");
    return 0;
}

/* Demangled: PQHDRAdaptor::onCalculateCore(int, DHDRINPUT*, DHDROUTPUT*, DpConfig&, _DP_VDEC_DRV_DYNAMIC_METADATA_T*, PQSession*) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQHDRAdaptor15onCalculateCoreEiP9DHDRINPUTP10DHDROUTPUTR8DpConfigP31_DP_VDEC_DRV_DYNAMIC_METADATA_TP9PQSession(void) {
    ALOGD("_ZN12PQHDRAdaptor15onCalculateCoreEiP9DHDRINPUTP10DHDROUTPUTR8DpConfigP31_DP_VDEC_DRV_DYNAMIC_METADATA_TP9PQSession() called");
    return 0;
}

/* Demangled: forward_4_taps(int, int, int, int, int, int, int, int, int, int, int, int&, int&, int&, int&, int&, int&) */
extern "C" __attribute__((visibility("default"))) int _Z14forward_4_tapsiiiiiiiiiiiRiS_S_S_S_S_(void) {
    ALOGD("_Z14forward_4_tapsiiiiiiiiiiiRiS_S_S_S_S_() called");
    return 0;
}

/* Demangled: DpEngine_IMG2O::onConfigFrame(DpCommand&, DpConfig&) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpEngine_IMG2O13onConfigFrameER9DpCommandR8DpConfig(void) {
    ALOGD("_ZN14DpEngine_IMG2O13onConfigFrameER9DpCommandR8DpConfig() called");
    return 0;
}

/* Demangled: PQDSAdaptor::tuningDSOutput(DSOutput*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11PQDSAdaptor14tuningDSOutputEP8DSOutputi(void) {
    ALOGD("_ZN11PQDSAdaptor14tuningDSOutputEP8DSOutputi() called");
    return 0;
}

/* Demangled: PQColorConfig::initColorTable() */
extern "C" __attribute__((visibility("default"))) int _ZN13PQColorConfig14initColorTableEv(void) {
    ALOGD("_ZN13PQColorConfig14initColorTableEv() called");
    return 0;
}

/* Demangled: PQHDRAdaptor::getHDR10PLUSTable(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQHDRAdaptor17getHDR10PLUSTableEb(void) {
    ALOGD("_ZN12PQHDRAdaptor17getHDR10PLUSTableEb() called");
    return 0;
}

/* Demangled: DpCommandQueue::setPQSessionID(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpCommandQueue14setPQSessionIDEy(void) {
    ALOGD("_ZN14DpCommandQueue14setPQSessionIDEy() called");
    return 0;
}

/* Exported Object: vtable for DpWrapper_ISP */
extern "C" __attribute__((visibility("default"))) void* _ZTV13DpWrapper_ISP = NULL;

/* Demangled: PQIspTuning::getHFGTuningValue(HFGInput_frame*) */
extern "C" __attribute__((visibility("default"))) int _ZN11PQIspTuning17getHFGTuningValueEP14HFGInput_frame(void) {
    ALOGD("_ZN11PQIspTuning17getHFGTuningValueEP14HFGInput_frame() called");
    return 0;
}

/* Demangled: DpBasicBufferPool::DpBasicBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN17DpBasicBufferPoolC1Ev(void) {
    ALOGD("_ZN17DpBasicBufferPoolC1Ev() called");
    return 0;
}

/* Demangled: DpStream::setReadbackPABuffer(unsigned int*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8DpStream19setReadbackPABufferEPjj(void) {
    ALOGD("_ZN8DpStream19setReadbackPABufferEPjj() called");
    return 0;
}

/* Demangled: DpBlitStream::DpBlitStream() */
extern "C" __attribute__((visibility("default"))) int _ZN12DpBlitStreamC1Ev(void) {
    ALOGD("_ZN12DpBlitStreamC1Ev() called");
    return 0;
}

/* Demangled: DpChannel::~DpChannel() */
extern "C" __attribute__((visibility("default"))) int _ZN9DpChannelD2Ev(void) {
    ALOGD("_ZN9DpChannelD2Ev() called");
    return 0;
}

/* Demangled: DpIspStream::DpIspStream(DpIspStream::ISPStreamType) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpIspStreamC2ENS_13ISPStreamTypeE(void) {
    ALOGD("_ZN11DpIspStreamC2ENS_13ISPStreamTypeE() called");
    return 0;
}

/* Demangled: DpDriver::setFrameInfo(DpFrameInfo_t, int, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN8DpDriver12setFrameInfoE13DpFrameInfo_tiPc(void) {
    ALOGD("_ZN8DpDriver12setFrameInfoE13DpFrameInfo_tiPc() called");
    return 0;
}

/* Demangled: PQDCAdaptor::getUserInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN11PQDCAdaptor11getUserInfoEv(void) {
    ALOGD("_ZN11PQDCAdaptor11getUserInfoEv() called");
    return 0;
}

/* Demangled: PQHDRAdaptor::reInitHDR10FW(DHDRINPUT*, DHDROUTPUT*, DpPqParam) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQHDRAdaptor13reInitHDR10FWEP9DHDRINPUTP10DHDROUTPUT9DpPqParam(void) {
    ALOGD("_ZN12PQHDRAdaptor13reInitHDR10FWEP9DHDRINPUTP10DHDROUTPUT9DpPqParam() called");
    return 0;
}

/* Demangled: DpEngineBase::onFlipBuffer(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpEngineBase12onFlipBufferEb(void) {
    ALOGD("_ZN12DpEngineBase12onFlipBufferEb() called");
    return 0;
}

/* Demangled: DpStream::stopStream() */
extern "C" __attribute__((visibility("default"))) int _ZN8DpStream10stopStreamEv(void) {
    ALOGD("_ZN8DpStream10stopStreamEv() called");
    return 0;
}

/* Demangled: PQSession::getPreActPosX() */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession13getPreActPosXEv(void) {
    ALOGD("_ZN9PQSession13getPreActPosXEv() called");
    return 0;
}

/* Demangled: DpEngineMutex::require(DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN13DpEngineMutex7requireER9DpCommand(void) {
    ALOGD("_ZN13DpEngineMutex7requireER9DpCommand() called");
    return 0;
}

/* Exported Object: DpEngine_WROT::RGB_TO_BT601 */
extern "C" __attribute__((visibility("default"))) void* _ZN13DpEngine_WROT12RGB_TO_BT601E = NULL;

/* Demangled: PQSession::setHDRisLeftPath(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession16setHDRisLeftPathEb(void) {
    ALOGD("_ZN9PQSession16setHDRisLeftPathEb() called");
    return 0;
}

/* Demangled: PQHDRAdaptor::getLastHDRPInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN12PQHDRAdaptor15getLastHDRPInfoEv(void) {
    ALOGD("_ZN12PQHDRAdaptor15getLastHDRPInfoEv() called");
    return 0;
}

/* Exported Object: COLOR0Reg */
extern "C" __attribute__((visibility("default"))) void* COLOR0Reg = NULL;

/* Demangled: DpSync::~DpSync() */
extern "C" __attribute__((visibility("default"))) int _ZN6DpSyncD1Ev(void) {
    ALOGD("_ZN6DpSyncD1Ev() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream2::setConfigEnd() */
extern "C" __attribute__((visibility("default"))) int _ZN18DpAsyncBlitStream212setConfigEndEv(void) {
    ALOGD("_ZN18DpAsyncBlitStream212setConfigEndEv() called");
    return 0;
}

/* Demangled: DpIspStream::BaseConfig::BaseConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN11DpIspStream10BaseConfigC1Ev(void) {
    ALOGD("_ZN11DpIspStream10BaseConfigC1Ev() called");
    return 0;
}

/* Demangled: PQHDRAdaptor::PQHDRAdaptor(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQHDRAdaptorC2Ej(void) {
    ALOGD("_ZN12PQHDRAdaptorC2Ej() called");
    return 0;
}

/* Demangled: PQAlgorithmFactory::getHDR(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN18PQAlgorithmFactory6getHDREj(void) {
    ALOGD("_ZN18PQAlgorithmFactory6getHDREj() called");
    return 0;
}

/* Exported Object: DpDriver::s_instMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN8DpDriver11s_instMutexE = NULL;

/* Demangled: DpDriver::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN8DpDriver15destroyInstanceEv(void) {
    ALOGD("_ZN8DpDriver15destroyInstanceEv() called");
    return 0;
}

/* Demangled: DpBufferPoolBase::activateBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN16DpBufferPoolBase14activateBufferEv(void) {
    ALOGD("_ZN16DpBufferPoolBase14activateBufferEv() called");
    return 0;
}

/* Demangled: DpVEncStream::DpVEncStream(DpVEncStream::ISPStreamType) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpVEncStreamC1ENS_13ISPStreamTypeE(void) {
    ALOGD("_ZN12DpVEncStreamC1ENS_13ISPStreamTypeE() called");
    return 0;
}

/* Demangled: DpCommandRecorder::translateAddr(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorder13translateAddrEj(void) {
    ALOGD("_ZN17DpCommandRecorder13translateAddrEj() called");
    return 0;
}

/* Demangled: PQRSZConfig::getIspTuningFlag(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN11PQRSZConfig16getIspTuningFlagEb(void) {
    ALOGD("_ZN11PQRSZConfig16getIspTuningFlagEb() called");
    return 0;
}

/* Demangled: PQDREAdaptor::initDREOutput(DRETopOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQDREAdaptor13initDREOutputEP12DRETopOutput(void) {
    ALOGD("_ZN12PQDREAdaptor13initDREOutputEP12DRETopOutput() called");
    return 0;
}

/* Demangled: DpEngineBase::bindOutPort(DpPortAdapt*) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpEngineBase11bindOutPortEP11DpPortAdapt(void) {
    ALOGD("_ZN12DpEngineBase11bindOutPortEP11DpPortAdapt() called");
    return 0;
}

/* Demangled: PQReadBackFactory::getDRE(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN17PQReadBackFactory6getDREEj(void) {
    ALOGD("_ZN17PQReadBackFactory6getDREEj() called");
    return 0;
}

/* Demangled: PQSession::getDCDoneHistListSize() */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession21getDCDoneHistListSizeEv(void) {
    ALOGD("_ZN9PQSession21getDCDoneHistListSizeEv() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream::setFlip(unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpAsyncBlitStream7setFlipEji(void) {
    ALOGD("_ZN17DpAsyncBlitStream7setFlipEji() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream2::setDstBuffer(unsigned int, int, unsigned int*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN18DpAsyncBlitStream212setDstBufferEjiPjji(void) {
    ALOGD("_ZN18DpAsyncBlitStream212setDstBufferEjiPjji() called");
    return 0;
}

/* Demangled: DpCommandQueue::acquire(DpCommandBase::EVENT_TYPE_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpCommandQueue7acquireEN13DpCommandBase15EVENT_TYPE_ENUME(void) {
    ALOGD("_ZN14DpCommandQueue7acquireEN13DpCommandBase15EVENT_TYPE_ENUME() called");
    return 0;
}

/* Demangled: tile_isp_mode_init(TILE_REG_MAP_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z18tile_isp_mode_initP19TILE_REG_MAP_STRUCT(void) {
    ALOGD("_Z18tile_isp_mode_initP19TILE_REG_MAP_STRUCT() called");
    return 0;
}

/* Demangled: DpFragStream::setDstConfig(DP_COLOR_ENUM, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpFragStream12setDstConfigE13DP_COLOR_ENUMiii(void) {
    ALOGD("_ZN12DpFragStream12setDstConfigE13DP_COLOR_ENUMiii() called");
    return 0;
}

/* Demangled: PQTuningBuffer::isSync() */
extern "C" __attribute__((visibility("default"))) int _ZN14PQTuningBuffer6isSyncEv(void) {
    ALOGD("_ZN14PQTuningBuffer6isSyncEv() called");
    return 0;
}

/* Demangled: PQColorAdaptor::onConfigLumaEngine(COLOR_CONFIG_T*, DpCommand&, int, int&, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN14PQColorAdaptor18onConfigLumaEngineEP14COLOR_CONFIG_TR9DpCommandiRiPi(void) {
    ALOGD("_ZN14PQColorAdaptor18onConfigLumaEngineEP14COLOR_CONFIG_TR9DpCommandiRiPi() called");
    return 0;
}

/* Demangled: DpVEncStream::setSrcCrop(int, int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpVEncStream10setSrcCropEiiiiiii(void) {
    ALOGD("_ZN12DpVEncStream10setSrcCropEiiiiiii() called");
    return 0;
}

/* Demangled: DpCommandQueue::mark(DpCommand::BLOCK_TYPE_ENUM, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpCommandQueue4markEN9DpCommand15BLOCK_TYPE_ENUMEjj(void) {
    ALOGD("_ZN14DpCommandQueue4markEN9DpCommand15BLOCK_TYPE_ENUMEjj() called");
    return 0;
}

/* Demangled: PQSession::getHDRInfoWithLock(DpPqParam const*, _DP_VDEC_DRV_COLORDESC_T*, _DP_VDEC_DRV_DYNAMIC_METADATA_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession18getHDRInfoWithLockEPK9DpPqParamP24_DP_VDEC_DRV_COLORDESC_TP31_DP_VDEC_DRV_DYNAMIC_METADATA_T(void) {
    ALOGD("_ZN9PQSession18getHDRInfoWithLockEPK9DpPqParamP24_DP_VDEC_DRV_COLORDESC_TP31_DP_VDEC_DRV_DYNAMIC_METADATA_T() called");
    return 0;
}

/* Demangled: PQDSConfig::~PQDSConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN10PQDSConfigD2Ev(void) {
    ALOGD("_ZN10PQDSConfigD2Ev() called");
    return 0;
}

/* Demangled: DpEngine_COLOR::onConfigFrame(DpCommand&, DpConfig&) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpEngine_COLOR13onConfigFrameER9DpCommandR8DpConfig(void) {
    ALOGD("_ZN14DpEngine_COLOR13onConfigFrameER9DpCommandR8DpConfig() called");
    return 0;
}

/* Demangled: DpVEncStream::startStream(timeval*) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpVEncStream11startStreamEP7timeval(void) {
    ALOGD("_ZN12DpVEncStream11startStreamEP7timeval() called");
    return 0;
}

/* Demangled: PQDREAdaptor::tuningDREOutput(void*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQDREAdaptor15tuningDREOutputEPvi(void) {
    ALOGD("_ZN12PQDREAdaptor15tuningDREOutputEPvi() called");
    return 0;
}

/* Demangled: PQDREHistogramAdaptor::unregisterBuffer(unsigned long long, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN21PQDREHistogramAdaptor16unregisterBufferEyj(void) {
    ALOGD("_ZN21PQDREHistogramAdaptor16unregisterBufferEyj() called");
    return 0;
}

/* Demangled: funcPullBufferData(DpRingBufferPool*, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z18funcPullBufferDataP16DpRingBufferPooliiiii(void) {
    ALOGD("_Z18funcPullBufferDataP16DpRingBufferPooliiiii() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream::compression(DP_COLOR_ENUM&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpAsyncBlitStream11compressionER13DP_COLOR_ENUMj(void) {
    ALOGD("_ZN17DpAsyncBlitStream11compressionER13DP_COLOR_ENUMj() called");
    return 0;
}

/* Demangled: DpIspStream::getJPEGFilesize(unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpIspStream15getJPEGFilesizeEPj(void) {
    ALOGD("_ZN11DpIspStream15getJPEGFilesizeEPj() called");
    return 0;
}

/* Exported Object: vtable for DpEngine_IMGI */
extern "C" __attribute__((visibility("default"))) void* _ZTV13DpEngine_IMGI = NULL;

/* Demangled: DpPmemHandler::DpPmemHandler(void*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN13DpPmemHandlerC2EPvjj(void) {
    ALOGD("_ZN13DpPmemHandlerC2EPvjj() called");
    return 0;
}

/* Demangled: PQHDRAdaptor::tuningHDROutput(DHDROUTPUT*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQHDRAdaptor15tuningHDROutputEP10DHDROUTPUTi(void) {
    ALOGD("_ZN12PQHDRAdaptor15tuningHDROutputEP10DHDROUTPUTi() called");
    return 0;
}

/* Demangled: DpPortAdapt::waitFence(CLIENT_TYPE_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpPortAdapt9waitFenceE16CLIENT_TYPE_ENUM(void) {
    ALOGD("_ZN11DpPortAdapt9waitFenceE16CLIENT_TYPE_ENUM() called");
    return 0;
}

/* Demangled: DpTilePath::onConfigFrameMode(DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN10DpTilePath17onConfigFrameModeER9DpCommand(void) {
    ALOGD("_ZN10DpTilePath17onConfigFrameModeER9DpCommand() called");
    return 0;
}

/* Demangled: PQDCAdaptor::PQDCAdaptor(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11PQDCAdaptorC1Ej(void) {
    ALOGD("_ZN11PQDCAdaptorC1Ej() called");
    return 0;
}

/* Demangled: PQDREHistogramAdaptor::setHistogram(unsigned int*, unsigned int, void*, unsigned long long, int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN21PQDREHistogramAdaptor12setHistogramEPjjPvyiij(void) {
    ALOGD("_ZN21PQDREHistogramAdaptor12setHistogramEPjjPvyiij() called");
    return 0;
}

/* Demangled: DpCommandRecorder::getSecureAddrMD() */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorder15getSecureAddrMDEv(void) {
    ALOGD("_ZN17DpCommandRecorder15getSecureAddrMDEv() called");
    return 0;
}

/* Demangled: DpTilePath::onConfigFrame(DpCommand&, DpConfig&) */
extern "C" __attribute__((visibility("default"))) int _ZN10DpTilePath13onConfigFrameER9DpCommandR8DpConfig(void) {
    ALOGD("_ZN10DpTilePath13onConfigFrameER9DpCommandR8DpConfig() called");
    return 0;
}

/* Exported Object: PATH1_SOUTReg */
extern "C" __attribute__((visibility("default"))) void* PATH1_SOUTReg = NULL;

/* Demangled: PQSessionManager::getAALPreHWIdAndBufferIdCapture(unsigned int*, unsigned int*, unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN16PQSessionManager31getAALPreHWIdAndBufferIdCaptureEPjS0_S0_S0_(void) {
    ALOGD("_ZN16PQSessionManager31getAALPreHWIdAndBufferIdCaptureEPjS0_S0_S0_() called");
    return 0;
}

/* Demangled: PQSession::getDREHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession12getDREHandleEv(void) {
    ALOGD("_ZN9PQSession12getDREHandleEv() called");
    return 0;
}

/* Demangled: PQRSZAdaptor::dumpFWReg(DpPqParam*, RszInput*, RszOutput*, RszReg*) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQRSZAdaptor9dumpFWRegEP9DpPqParamP8RszInputP9RszOutputP6RszReg(void) {
    ALOGD("_ZN12PQRSZAdaptor9dumpFWRegEP9DpPqParamP8RszInputP9RszOutputP6RszReg() called");
    return 0;
}

/* Demangled: DpRingBufferPool::queueBuffer(int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN16DpRingBufferPool11queueBufferEib(void) {
    ALOGD("_ZN16DpRingBufferPool11queueBufferEib() called");
    return 0;
}

/* Demangled: DpBasicBufferPool::DpBasicBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN17DpBasicBufferPoolC2Ev(void) {
    ALOGD("_ZN17DpBasicBufferPoolC2Ev() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream2::setSrcCrop(unsigned int, DpRect) */
extern "C" __attribute__((visibility("default"))) int _ZN18DpAsyncBlitStream210setSrcCropEj6DpRect(void) {
    ALOGD("_ZN18DpAsyncBlitStream210setSrcCropEj6DpRect() called");
    return 0;
}

/* Demangled: DpBlitStream::DpBlitStream() */
extern "C" __attribute__((visibility("default"))) int _ZN12DpBlitStreamC2Ev(void) {
    ALOGD("_ZN12DpBlitStreamC2Ev() called");
    return 0;
}

/* Demangled: DpIspStream::waitCompleteLoop(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpIspStream16waitCompleteLoopEPv(void) {
    ALOGD("_ZN11DpIspStream16waitCompleteLoopEPv() called");
    return 0;
}

/* Demangled: PQAlgorithmFactory::PQAlgorithmFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN18PQAlgorithmFactoryC1Ev(void) {
    ALOGD("_ZN18PQAlgorithmFactoryC1Ev() called");
    return 0;
}

/* Demangled: PQDREAdaptor::writeDRE30Curve(DpCommand&, DREVPTopOutput const*, unsigned int, unsigned int, int*, int&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQDREAdaptor15writeDRE30CurveER9DpCommandPK14DREVPTopOutputjjPiRib(void) {
    ALOGD("_ZN12PQDREAdaptor15writeDRE30CurveER9DpCommandPK14DREVPTopOutputjjPiRib() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream::setUser(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpAsyncBlitStream7setUserEj(void) {
    ALOGD("_ZN17DpAsyncBlitStream7setUserEj() called");
    return 0;
}

/* Demangled: DpIspStream::BaseConfig::BaseConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN11DpIspStream10BaseConfigC2Ev(void) {
    ALOGD("_ZN11DpIspStream10BaseConfigC2Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<DpIspStream::IspConfig, std::__1::allocator<DpIspStream::IspConfig> >::__push_back_slow_path<DpIspStream::IspConfig const&>(DpIspStream::IspConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN11DpIspStream9IspConfigENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN11DpIspStream9IspConfigENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_() called");
    return 0;
}

/* Demangled: DpVEncStream::setSrcConfig(int, int, int, int, DP_COLOR_ENUM, DP_PROFILE_ENUM, DpInterlaceFormat, DpRect*, bool, DpSecure) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpVEncStream12setSrcConfigEiiii13DP_COLOR_ENUM15DP_PROFILE_ENUM17DpInterlaceFormatP6DpRectb8DpSecure(void) {
    ALOGD("_ZN12DpVEncStream12setSrcConfigEiiii13DP_COLOR_ENUM15DP_PROFILE_ENUM17DpInterlaceFormatP6DpRectb8DpSecure() called");
    return 0;
}

/* Demangled: DpSync::~DpSync() */
extern "C" __attribute__((visibility("default"))) int _ZN6DpSyncD2Ev(void) {
    ALOGD("_ZN6DpSyncD2Ev() called");
    return 0;
}

/* Demangled: DpBlitStream::setSrcConfig(int, int, int, int, DP_COLOR_ENUM, DP_PROFILE_ENUM, DpInterlaceFormat, DpRect*, DpSecure, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpBlitStream12setSrcConfigEiiii13DP_COLOR_ENUM15DP_PROFILE_ENUM17DpInterlaceFormatP6DpRect8DpSecureb(void) {
    ALOGD("_ZN12DpBlitStream12setSrcConfigEiiii13DP_COLOR_ENUM15DP_PROFILE_ENUM17DpInterlaceFormatP6DpRect8DpSecureb() called");
    return 0;
}

/* Exported Object: DpPathTopology::s_adjency */
extern "C" __attribute__((visibility("default"))) void* _ZN14DpPathTopology9s_adjencyE = NULL;

/* Exported Object: vtable for ListPtr<DpPathBase> */
extern "C" __attribute__((visibility("default"))) void* _ZTV7ListPtrI10DpPathBaseE = NULL;

/* Demangled: DpPortAdapt::dumpBuffer(CLIENT_TYPE_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpPortAdapt10dumpBufferE16CLIENT_TYPE_ENUM(void) {
    ALOGD("_ZN11DpPortAdapt10dumpBufferE16CLIENT_TYPE_ENUM() called");
    return 0;
}

/* Demangled: DpVEncStream::setDstConfig(int, int, int, int, int, DP_COLOR_ENUM, DP_PROFILE_ENUM, DpInterlaceFormat, DpRect*, bool, DpSecure) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpVEncStream12setDstConfigEiiiii13DP_COLOR_ENUM15DP_PROFILE_ENUM17DpInterlaceFormatP6DpRectb8DpSecure(void) {
    ALOGD("_ZN12DpVEncStream12setDstConfigEiiiii13DP_COLOR_ENUM15DP_PROFILE_ENUM17DpInterlaceFormatP6DpRectb8DpSecure() called");
    return 0;
}

/* Demangled: tile_isp_frame_mode_init(TILE_REG_MAP_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z24tile_isp_frame_mode_initP19TILE_REG_MAP_STRUCT(void) {
    ALOGD("_Z24tile_isp_frame_mode_initP19TILE_REG_MAP_STRUCT() called");
    return 0;
}

/* Demangled: DpVEncStream::dequeueDstBuffer(int, void**, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpVEncStream16dequeueDstBufferEiPPvb(void) {
    ALOGD("_ZN12DpVEncStream16dequeueDstBufferEiPPvb() called");
    return 0;
}

/* Demangled: DpCommandRecorder::setSecureMode(int, unsigned long long, unsigned int*, DpSecure, unsigned int, unsigned int*, unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorder13setSecureModeEiyPj8DpSecurejS0_S0_S0_(void) {
    ALOGD("_ZN17DpCommandRecorder13setSecureModeEiyPj8DpSecurejS0_S0_S0_() called");
    return 0;
}

/* Demangled: PQHDRAdaptor::calRegs(PQSession*, DpCommand&, DpConfig&, int*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQHDRAdaptor7calRegsEP9PQSessionR9DpCommandR8DpConfigPib(void) {
    ALOGD("_ZN12PQHDRAdaptor7calRegsEP9PQSessionR9DpCommandR8DpConfigPib() called");
    return 0;
}

/* Demangled: PQDCAdaptor::getDCShareData() */
extern "C" __attribute__((visibility("default"))) int _ZN11PQDCAdaptor14getDCShareDataEv(void) {
    ALOGD("_ZN11PQDCAdaptor14getDCShareDataEv() called");
    return 0;
}

/* Demangled: DpBufferPoolBase::flushReadBuffer(int) */
extern "C" __attribute__((visibility("default"))) int _ZN16DpBufferPoolBase15flushReadBufferEi(void) {
    ALOGD("_ZN16DpBufferPoolBase15flushReadBufferEi() called");
    return 0;
}

/* Demangled: DpWrapper_ISP::onFlushBuffer(DpEngineBase::FLUSH_TYPE_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN13DpWrapper_ISP13onFlushBufferEN12DpEngineBase15FLUSH_TYPE_ENUME(void) {
    ALOGD("_ZN13DpWrapper_ISP13onFlushBufferEN12DpEngineBase15FLUSH_TYPE_ENUME() called");
    return 0;
}

/* Demangled: DpWrapper_ISP::onReconfigFrame(DpCommand&, DpConfig&) */
extern "C" __attribute__((visibility("default"))) int _ZN13DpWrapper_ISP15onReconfigFrameER9DpCommandR8DpConfig(void) {
    ALOGD("_ZN13DpWrapper_ISP15onReconfigFrameER9DpCommandR8DpConfig() called");
    return 0;
}

/* Demangled: getProperty(char const*, char*, char const*) */
extern "C" __attribute__((visibility("default"))) int _Z11getPropertyPKcPcS0_(void) {
    ALOGD("_Z11getPropertyPKcPcS0_() called");
    return 0;
}

/* Demangled: PQHDRConfig::getHDRConfig(HDR_CONFIG_T*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN11PQHDRConfig12getHDRConfigEP12HDR_CONFIG_Tb(void) {
    ALOGD("_ZN11PQHDRConfig12getHDRConfigEP12HDR_CONFIG_Tb() called");
    return 0;
}

/* Demangled: PQSession::dumpAIParam() */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession11dumpAIParamEv(void) {
    ALOGD("_ZN9PQSession11dumpAIParamEv() called");
    return 0;
}

/* Demangled: DpIspStream::setSrcConfig(int, int, int, int, DP_COLOR_ENUM, DP_PROFILE_ENUM, DpInterlaceFormat, DpRect*, bool, DpSecure) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpIspStream12setSrcConfigEiiii13DP_COLOR_ENUM15DP_PROFILE_ENUM17DpInterlaceFormatP6DpRectb8DpSecure(void) {
    ALOGD("_ZN11DpIspStream12setSrcConfigEiiii13DP_COLOR_ENUM15DP_PROFILE_ENUM17DpInterlaceFormatP6DpRectb8DpSecure() called");
    return 0;
}

/* Demangled: DpStream::delChannel(int) */
extern "C" __attribute__((visibility("default"))) int _ZN8DpStream10delChannelEi(void) {
    ALOGD("_ZN8DpStream10delChannelEi() called");
    return 0;
}

/* Demangled: DpVEncStream::setParameter(ISP_TPIPE_CONFIG_STRUCT&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpVEncStream12setParameterER23ISP_TPIPE_CONFIG_STRUCTj(void) {
    ALOGD("_ZN12DpVEncStream12setParameterER23ISP_TPIPE_CONFIG_STRUCTj() called");
    return 0;
}

/* Demangled: PQColorAdaptor::PQColorAdaptor(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN14PQColorAdaptorC1Ej(void) {
    ALOGD("_ZN14PQColorAdaptorC1Ej() called");
    return 0;
}

/* Demangled: DpBasicBufferPool::registerBuffer(void**, unsigned int*, int, int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpBasicBufferPool14registerBufferEPPvPjiiPi(void) {
    ALOGD("_ZN17DpBasicBufferPool14registerBufferEPPvPjiiPi() called");
    return 0;
}

/* Exported Object: vtable for DpComposerBase */
extern "C" __attribute__((visibility("default"))) void* _ZTV14DpComposerBase = NULL;

/* Demangled: DpAsyncBlitStream2::setSrcBuffer(int, unsigned int*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN18DpAsyncBlitStream212setSrcBufferEiPjji(void) {
    ALOGD("_ZN18DpAsyncBlitStream212setSrcBufferEiPjji() called");
    return 0;
}

/* Demangled: DpDriver::execCommand(DpCommandBlock&) */
extern "C" __attribute__((visibility("default"))) int _ZN8DpDriver11execCommandER14DpCommandBlock(void) {
    ALOGD("_ZN8DpDriver11execCommandER14DpCommandBlock() called");
    return 0;
}

/* Exported Object: vtable for DpEngine_IMG2O */
extern "C" __attribute__((visibility("default"))) void* _ZTV14DpEngine_IMG2O = NULL;

/* Demangled: PQSession::checkTimes() */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession10checkTimesEv(void) {
    ALOGD("_ZN9PQSession10checkTimesEv() called");
    return 0;
}

/* Exported Object: vtable for DpEngine_TDSHP */
extern "C" __attribute__((visibility("default"))) void* _ZTV14DpEngine_TDSHP = NULL;

/* Exported Object: vtable for DpEngine_CAMIN */
extern "C" __attribute__((visibility("default"))) void* _ZTV14DpEngine_CAMIN = NULL;

/* Demangled: DpAsyncBlitStream2::setOrientation(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN18DpAsyncBlitStream214setOrientationEjj(void) {
    ALOGD("_ZN18DpAsyncBlitStream214setOrientationEjj() called");
    return 0;
}

/* Exported Object: PATH0_SOUTReg */
extern "C" __attribute__((visibility("default"))) void* PATH0_SOUTReg = NULL;

/* Demangled: DpChannel::lockChannel() */
extern "C" __attribute__((visibility("default"))) int _ZN9DpChannel11lockChannelEv(void) {
    ALOGD("_ZN9DpChannel11lockChannelEv() called");
    return 0;
}

/* Exported Object: SCL2Reg */
extern "C" __attribute__((visibility("default"))) void* SCL2Reg = NULL;

/* Demangled: DpBufferPoolBase::getBufferFdWithID(int, int, int*, unsigned int*, unsigned int*, bool*) */
extern "C" __attribute__((visibility("default"))) int _ZN16DpBufferPoolBase17getBufferFdWithIDEiiPiPjS1_Pb(void) {
    ALOGD("_ZN16DpBufferPoolBase17getBufferFdWithIDEiiPiPjS1_Pb() called");
    return 0;
}

/* Exported Object: vtable for DpEngine_MDPSOUT */
extern "C" __attribute__((visibility("default"))) void* _ZTV16DpEngine_MDPSOUT = NULL;

/* Demangled: forward_cub_acc(int, int, int, int, int, int, int, int, int, int, int, int&, int&, int&, int&, int&, int&) */
extern "C" __attribute__((visibility("default"))) int _Z15forward_cub_acciiiiiiiiiiiRiS_S_S_S_S_(void) {
    ALOGD("_Z15forward_cub_acciiiiiiiiiiiRiS_S_S_S_S_() called");
    return 0;
}

/* Demangled: tile_main_platform(ISP_TPIPE_CONFIG_STRUCT const*, ISP_TPIPE_DESCRIPTOR_STRUCT*, char*, int, void*, void*, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z18tile_main_platformPK23ISP_TPIPE_CONFIG_STRUCTP27ISP_TPIPE_DESCRIPTOR_STRUCTPciPvS5_S5_S5_(void) {
    ALOGD("_Z18tile_main_platformPK23ISP_TPIPE_CONFIG_STRUCTP27ISP_TPIPE_DESCRIPTOR_STRUCTPciPvS5_S5_S5_() called");
    return 0;
}

/* Demangled: PQConfig::getAshmemContext(unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN8PQConfig16getAshmemContextEjb(void) {
    ALOGD("_ZN8PQConfig16getAshmemContextEjb() called");
    return 0;
}

/* Exported Object: PQSessionManager::m_CapturepreAAL0Id */
extern "C" __attribute__((visibility("default"))) void* _ZN16PQSessionManager18m_CapturepreAAL0IdE = NULL;

/* Demangled: PQDCAdaptor::PQDCAdaptor(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11PQDCAdaptorC2Ej(void) {
    ALOGD("_ZN11PQDCAdaptorC2Ej() called");
    return 0;
}

/* Demangled: PQDREConfig::isHDRVPEnabled(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN11PQDREConfig14isHDRVPEnabledEb(void) {
    ALOGD("_ZN11PQDREConfig14isHDRVPEnabledEb() called");
    return 0;
}

/* Demangled: calWROTSetting(WrotInput*, WrotOutput*) */
extern "C" __attribute__((visibility("default"))) int _Z14calWROTSettingP9WrotInputP10WrotOutput(void) {
    ALOGD("_Z14calWROTSettingP9WrotInputP10WrotOutput() called");
    return 0;
}

/* Demangled: PQHDRConfig::PQHDRConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN11PQHDRConfigC1Ev(void) {
    ALOGD("_ZN11PQHDRConfigC1Ev() called");
    return 0;
}

/* Demangled: PQDREAdaptor::writeCurve16(DpCommand&, DRETopOutput const*, unsigned int, unsigned int, int*, int&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQDREAdaptor12writeCurve16ER9DpCommandPK12DRETopOutputjjPiRib(void) {
    ALOGD("_ZN12PQDREAdaptor12writeCurve16ER9DpCommandPK12DRETopOutputjjPiRib() called");
    return 0;
}

/* Demangled: DpIspStream::waitSubmit() */
extern "C" __attribute__((visibility("default"))) int _ZN11DpIspStream10waitSubmitEv(void) {
    ALOGD("_ZN11DpIspStream10waitSubmitEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<DpReadbackEngines_t, std::__1::allocator<DpReadbackEngines_t> >::__push_back_slow_path<DpReadbackEngines_t const&>(DpReadbackEngines_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI19DpReadbackEngines_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorI19DpReadbackEngines_tNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_() called");
    return 0;
}

/* Demangled: DpEngine_RDMA::onReconfigFrame(DpCommand&, DpConfig&) */
extern "C" __attribute__((visibility("default"))) int _ZN13DpEngine_RDMA15onReconfigFrameER9DpCommandR8DpConfig(void) {
    ALOGD("_ZN13DpEngine_RDMA15onReconfigFrameER9DpCommandR8DpConfig() called");
    return 0;
}

/* Demangled: PQSession::getDCisHW0Path() */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession14getDCisHW0PathEv(void) {
    ALOGD("_ZN9PQSession14getDCisHW0PathEv() called");
    return 0;
}

/* Demangled: PQAlgorithmFactory::PQAlgorithmFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN18PQAlgorithmFactoryC2Ev(void) {
    ALOGD("_ZN18PQAlgorithmFactoryC2Ev() called");
    return 0;
}

/* Exported Object: PQIspTuning::s_ALMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN11PQIspTuning9s_ALMutexE = NULL;

/* Exported Object: vtable for ListPtr<DpBufferPoolBase::BufferNode> */
extern "C" __attribute__((visibility("default"))) void* _ZTV7ListPtrIN16DpBufferPoolBase10BufferNodeEE = NULL;

/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__push_back_slow_path<int const&>(int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_() called");
    return 0;
}

/* Demangled: DpCommandQueue::swap() */
extern "C" __attribute__((visibility("default"))) int _ZN14DpCommandQueue4swapEv(void) {
    ALOGD("_ZN14DpCommandQueue4swapEv() called");
    return 0;
}

/* Demangled: DpPathConnection::DpPathConnection(DpPathBase*) */
extern "C" __attribute__((visibility("default"))) int _ZN16DpPathConnectionC1EP10DpPathBase(void) {
    ALOGD("_ZN16DpPathConnectionC1EP10DpPathBase() called");
    return 0;
}

/* Demangled: PQSession::getHDRHistListSize(int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession18getHDRHistListSizeEPiS0_(void) {
    ALOGD("_ZN9PQSession18getHDRHistListSizeEPiS0_() called");
    return 0;
}

/* Demangled: tile_lut_mdp_func_output_disable(int, TILE_FUNC_ENABLE_STRUCT*, TILE_REG_MAP_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z32tile_lut_mdp_func_output_disableiP23TILE_FUNC_ENABLE_STRUCTP19TILE_REG_MAP_STRUCT(void) {
    ALOGD("_Z32tile_lut_mdp_func_output_disableiP23TILE_FUNC_ENABLE_STRUCTP19TILE_REG_MAP_STRUCT() called");
    return 0;
}

/* Demangled: DpPortAdapt::abortPoll(CLIENT_TYPE_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpPortAdapt9abortPollE16CLIENT_TYPE_ENUM(void) {
    ALOGD("_ZN11DpPortAdapt9abortPollE16CLIENT_TYPE_ENUM() called");
    return 0;
}

/* Demangled: PQSession::getHDRInfo(DpPqParam const*, _DP_VDEC_DRV_COLORDESC_T*, _DP_VDEC_DRV_DYNAMIC_METADATA_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession10getHDRInfoEPK9DpPqParamP24_DP_VDEC_DRV_COLORDESC_TP31_DP_VDEC_DRV_DYNAMIC_METADATA_T(void) {
    ALOGD("_ZN9PQSession10getHDRInfoEPK9DpPqParamP24_DP_VDEC_DRV_COLORDESC_TP31_DP_VDEC_DRV_DYNAMIC_METADATA_T() called");
    return 0;
}

/* Demangled: PQHDRAdaptor::getInstance(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQHDRAdaptor11getInstanceEj(void) {
    ALOGD("_ZN12PQHDRAdaptor11getInstanceEj() called");
    return 0;
}

/* Demangled: DpBasicBufferPool::registerBuffer(void**, unsigned int*, unsigned int*, int, int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpBasicBufferPool14registerBufferEPPvPjS2_iiPi(void) {
    ALOGD("_ZN17DpBasicBufferPool14registerBufferEPPvPjS2_iiPi() called");
    return 0;
}

/* Demangled: PQSessionManager::createPQSession(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN16PQSessionManager15createPQSessionEy(void) {
    ALOGD("_ZN16PQSessionManager15createPQSessionEy() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream::BlitConfig::BlitConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN17DpAsyncBlitStream10BlitConfigC1Ev(void) {
    ALOGD("_ZN17DpAsyncBlitStream10BlitConfigC1Ev() called");
    return 0;
}

/* Demangled: PQSession::setPrePipeNum(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession13setPrePipeNumEj(void) {
    ALOGD("_ZN9PQSession13setPrePipeNumEj() called");
    return 0;
}

/* Demangled: PQIspTuning::loadIspTuningFile() */
extern "C" __attribute__((visibility("default"))) int _ZN11PQIspTuning17loadIspTuningFileEv(void) {
    ALOGD("_ZN11PQIspTuning17loadIspTuningFileEv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv() called");
    return 0;
}

/* Demangled: DpCommandRecorder::copyTile(op_meta*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorder8copyTileEP7op_metajj(void) {
    ALOGD("_ZN17DpCommandRecorder8copyTileEP7op_metajj() called");
    return 0;
}

/* Demangled: DpTilePath::execCommand() */
extern "C" __attribute__((visibility("default"))) int _ZN10DpTilePath11execCommandEv(void) {
    ALOGD("_ZN10DpTilePath11execCommandEv() called");
    return 0;
}

/* Demangled: PQDCAdaptor::onCalcADL(PQSession*, DpCommand&, DpConfig&, int, int*, int&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN11PQDCAdaptor9onCalcADLEP9PQSessionR9DpCommandR8DpConfigiPiRib(void) {
    ALOGD("_ZN11PQDCAdaptor9onCalcADLEP9PQSessionR9DpCommandR8DpConfigiPiRib() called");
    return 0;
}

/* Demangled: PQDREAdaptor::getDREFrameInfo(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQDREAdaptor15getDREFrameInfoEb(void) {
    ALOGD("_ZN12PQDREAdaptor15getDREFrameInfoEb() called");
    return 0;
}

/* Demangled: PQDREAdaptor::setDRETransCurtgtBuffer(DREsharedata*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQDREAdaptor23setDRETransCurtgtBufferEP12DREsharedatab(void) {
    ALOGD("_ZN12PQDREAdaptor23setDRETransCurtgtBufferEP12DREsharedatab() called");
    return 0;
}

/* Demangled: DpEngine_TDSHP::onReconfigFrame(DpCommand&, DpConfig&) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpEngine_TDSHP15onReconfigFrameER9DpCommandR8DpConfig(void) {
    ALOGD("_ZN14DpEngine_TDSHP15onReconfigFrameER9DpCommandR8DpConfig() called");
    return 0;
}

/* Demangled: DpFragStream::setDstConfig(DP_COLOR_ENUM, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpFragStream12setDstConfigE13DP_COLOR_ENUMiiii(void) {
    ALOGD("_ZN12DpFragStream12setDstConfigE13DP_COLOR_ENUMiiii() called");
    return 0;
}

/* Exported Object: WPEI2Reg */
extern "C" __attribute__((visibility("default"))) void* WPEI2Reg = NULL;

/* Demangled: PQColorAdaptor::PQColorAdaptor(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN14PQColorAdaptorC2Ej(void) {
    ALOGD("_ZN14PQColorAdaptorC2Ej() called");
    return 0;
}

/* Demangled: DpStream::waitStream() */
extern "C" __attribute__((visibility("default"))) int _ZN8DpStream10waitStreamEv(void) {
    ALOGD("_ZN8DpStream10waitStreamEv() called");
    return 0;
}

/* Demangled: DpChannel::getParameter(void*, int*, unsigned int*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9DpChannel12getParameterEPvPiPjj(void) {
    ALOGD("_ZNK9DpChannel12getParameterEPvPiPjj() called");
    return 0;
}

/* Demangled: DpMmuHandler::DpMmuHandler(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpMmuHandlerC1Ejj(void) {
    ALOGD("_ZN12DpMmuHandlerC1Ejj() called");
    return 0;
}

/* Demangled: PQRSZAdaptor::tuningRSZSWReg(int) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQRSZAdaptor14tuningRSZSWRegEi(void) {
    ALOGD("_ZN12PQRSZAdaptor14tuningRSZSWRegEi() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream2::setSrcConfig(int, int, DP_COLOR_ENUM, DpInterlaceFormat, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN18DpAsyncBlitStream212setSrcConfigEii13DP_COLOR_ENUM17DpInterlaceFormatj(void) {
    ALOGD("_ZN18DpAsyncBlitStream212setSrcConfigEii13DP_COLOR_ENUM17DpInterlaceFormatj() called");
    return 0;
}

/* Demangled: PQColorConfig::composeColorParameter(int, int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN13PQColorConfig21composeColorParameterEiib(void) {
    ALOGD("_ZN13PQColorConfig21composeColorParameterEiib() called");
    return 0;
}

/* Demangled: PQHDRAdaptor::dumpFwRegInFw(DpPqParam const*, DHDRINPUT*, DHDROUTPUT*, _DP_VDEC_DRV_DYNAMIC_METADATA_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQHDRAdaptor13dumpFwRegInFwEPK9DpPqParamP9DHDRINPUTP10DHDROUTPUTP31_DP_VDEC_DRV_DYNAMIC_METADATA_T(void) {
    ALOGD("_ZN12PQHDRAdaptor13dumpFwRegInFwEPK9DpPqParamP9DHDRINPUTP10DHDROUTPUTP31_DP_VDEC_DRV_DYNAMIC_METADATA_T() called");
    return 0;
}

/* Demangled: DpCommandRecorder::findLabel(int) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorder9findLabelEi(void) {
    ALOGD("_ZN17DpCommandRecorder9findLabelEi() called");
    return 0;
}

/* Demangled: DpEngine_SCL::onConfigTile(DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpEngine_SCL12onConfigTileER9DpCommand(void) {
    ALOGD("_ZN12DpEngine_SCL12onConfigTileER9DpCommand() called");
    return 0;
}

/* Demangled: DpMemory::Factory(DP_MEMORY_ENUM, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8DpMemory7FactoryE14DP_MEMORY_ENUMPvj(void) {
    ALOGD("_ZN8DpMemory7FactoryE14DP_MEMORY_ENUMPvj() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream2::setRotate(unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN18DpAsyncBlitStream29setRotateEji(void) {
    ALOGD("_ZN18DpAsyncBlitStream29setRotateEji() called");
    return 0;
}

/* Demangled: DpIspStream::setPortMatrix(int, DpColorMatrix*) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpIspStream13setPortMatrixEiP13DpColorMatrix(void) {
    ALOGD("_ZN11DpIspStream13setPortMatrixEiP13DpColorMatrix() called");
    return 0;
}

/* Demangled: DpCommandQueue::secure(int, unsigned long long, unsigned int*, DpSecure, unsigned int, unsigned int*, unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpCommandQueue6secureEiyPj8DpSecurejS0_S0_S0_(void) {
    ALOGD("_ZN14DpCommandQueue6secureEiyPj8DpSecurejS0_S0_S0_() called");
    return 0;
}

/* Demangled: PQAshmem::setAshmemValueByOffset(unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN8PQAshmem22setAshmemValueByOffsetEji(void) {
    ALOGD("_ZN8PQAshmem22setAshmemValueByOffsetEji() called");
    return 0;
}

/* Demangled: DpPortAdapt::getSWAddress(CLIENT_TYPE_ENUM, void**, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpPortAdapt12getSWAddressE16CLIENT_TYPE_ENUMPPvPj(void) {
    ALOGD("_ZN11DpPortAdapt12getSWAddressE16CLIENT_TYPE_ENUMPPvPj() called");
    return 0;
}

/* Demangled: DpEngine_VENC::onConfigFrame(DpCommand&, DpConfig&) */
extern "C" __attribute__((visibility("default"))) int _ZN13DpEngine_VENC13onConfigFrameER9DpCommandR8DpConfig(void) {
    ALOGD("_ZN13DpEngine_VENC13onConfigFrameER9DpCommandR8DpConfig() called");
    return 0;
}

/* Demangled: DpDriver::queryEngUsages(unsigned int (&) [60]) */
extern "C" __attribute__((visibility("default"))) int _ZN8DpDriver14queryEngUsagesERA60_j(void) {
    ALOGD("_ZN8DpDriver14queryEngUsagesERA60_j() called");
    return 0;
}

/* Exported Object: PQAshmem::s_ALMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN8PQAshmem9s_ALMutexE = NULL;

/* Demangled: DpPathControl::onStopStream() */
extern "C" __attribute__((visibility("default"))) int _ZN13DpPathControl12onStopStreamEv(void) {
    ALOGD("_ZN13DpPathControl12onStopStreamEv() called");
    return 0;
}

/* Demangled: PQSession::getCurActPosX() */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession13getCurActPosXEv(void) {
    ALOGD("_ZN9PQSession13getCurActPosXEv() called");
    return 0;
}

/* Demangled: DpEngine_HDR::onInitEngine(DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpEngine_HDR12onInitEngineER9DpCommand(void) {
    ALOGD("_ZN12DpEngine_HDR12onInitEngineER9DpCommand() called");
    return 0;
}

/* Demangled: DpEngine_WPEO::onRetrieveTileParam(TILE_PARAM_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN13DpEngine_WPEO19onRetrieveTileParamEP17TILE_PARAM_STRUCT(void) {
    ALOGD("_ZN13DpEngine_WPEO19onRetrieveTileParamEP17TILE_PARAM_STRUCT() called");
    return 0;
}

/* Demangled: PQHDRConfig::PQHDRConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN11PQHDRConfigC2Ev(void) {
    ALOGD("_ZN11PQHDRConfigC2Ev() called");
    return 0;
}

/* Demangled: DpBlitStream::setDstBuffer(void**, void**, unsigned int*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpBlitStream12setDstBufferEPPvS1_Pjj(void) {
    ALOGD("_ZN12DpBlitStream12setDstBufferEPPvS1_Pjj() called");
    return 0;
}

/* Demangled: DpIspStream::setParameter(ISP_TPIPE_CONFIG_STRUCT&, ISP2MDP_STRUCT*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpIspStream12setParameterER23ISP_TPIPE_CONFIG_STRUCTP14ISP2MDP_STRUCTj(void) {
    ALOGD("_ZN11DpIspStream12setParameterER23ISP_TPIPE_CONFIG_STRUCTP14ISP2MDP_STRUCTj() called");
    return 0;
}

/* Demangled: DpPathConnection::queryMuxInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN16DpPathConnection12queryMuxInfoEv(void) {
    ALOGD("_ZN16DpPathConnection12queryMuxInfoEv() called");
    return 0;
}

/* Demangled: PQSessionManager::getPQSessionListHandle(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN16PQSessionManager22getPQSessionListHandleEy(void) {
    ALOGD("_ZN16PQSessionManager22getPQSessionListHandleEy() called");
    return 0;
}

/* Demangled: PQDREHistogramAdaptor::unregisterAllBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN21PQDREHistogramAdaptor19unregisterAllBufferEv(void) {
    ALOGD("_ZN21PQDREHistogramAdaptor19unregisterAllBufferEv() called");
    return 0;
}

/* Exported Object: DpPathConnection::s_selOutMap */
extern "C" __attribute__((visibility("default"))) void* _ZN16DpPathConnection11s_selOutMapE = NULL;

/* Exported Object: IMGI2Reg */
extern "C" __attribute__((visibility("default"))) void* IMGI2Reg = NULL;

/* Demangled: backward_6_taps(int, int, int, int, int, int, int, int, int, int&, int&) */
extern "C" __attribute__((visibility("default"))) int _Z15backward_6_tapsiiiiiiiiiRiS_(void) {
    ALOGD("_Z15backward_6_tapsiiiiiiiiiRiS_() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream2::setDstBuffer(unsigned int, void**, unsigned int*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN18DpAsyncBlitStream212setDstBufferEjPPvPjji(void) {
    ALOGD("_ZN18DpAsyncBlitStream212setDstBufferEjPPvPjji() called");
    return 0;
}

/* Demangled: DpMmuHandler::mapHWAddress(int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpMmuHandler12mapHWAddressEij(void) {
    ALOGD("_ZN12DpMmuHandler12mapHWAddressEij() called");
    return 0;
}

/* Demangled: DpEngine_COLOR::onConfigTile(DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpEngine_COLOR12onConfigTileER9DpCommand(void) {
    ALOGD("_ZN14DpEngine_COLOR12onConfigTileER9DpCommand() called");
    return 0;
}

/* Demangled: PQSessionManager::findVideoID(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN16PQSessionManager11findVideoIDEj(void) {
    ALOGD("_ZN16PQSessionManager11findVideoIDEj() called");
    return 0;
}

/* Demangled: PQDCConfig::isEnabled(GlobalPQParam&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN10PQDCConfig9isEnabledER13GlobalPQParamb(void) {
    ALOGD("_ZN10PQDCConfig9isEnabledER13GlobalPQParamb() called");
    return 0;
}

/* Demangled: PQAlgorithmFactory::getColor(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN18PQAlgorithmFactory8getColorEj(void) {
    ALOGD("_ZN18PQAlgorithmFactory8getColorEj() called");
    return 0;
}

/* Demangled: DpIspStream::getPqID() */
extern "C" __attribute__((visibility("default"))) int _ZN11DpIspStream7getPqIDEv(void) {
    ALOGD("_ZN11DpIspStream7getPqIDEv() called");
    return 0;
}

/* Demangled: DpCommandRecorder::reorder() */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorder7reorderEv(void) {
    ALOGD("_ZN17DpCommandRecorder7reorderEv() called");
    return 0;
}

/* Demangled: DpCommandRecorder::setSecureMetaData(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorder17setSecureMetaDataEjj(void) {
    ALOGD("_ZN17DpCommandRecorder17setSecureMetaDataEjj() called");
    return 0;
}

/* Exported Object: PQRSZAdaptor::s_ALMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN12PQRSZAdaptor9s_ALMutexE = NULL;

/* Demangled: DpAsyncBlitStream::BlitConfig::BlitConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN17DpAsyncBlitStream10BlitConfigC2Ev(void) {
    ALOGD("_ZN17DpAsyncBlitStream10BlitConfigC2Ev() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream2::cancelJob(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN18DpAsyncBlitStream29cancelJobEj(void) {
    ALOGD("_ZN18DpAsyncBlitStream29cancelJobEj() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev() called");
    return 0;
}

/* Demangled: DpEngine_TDSHP::onReconfigTiles(DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpEngine_TDSHP15onReconfigTilesER9DpCommand(void) {
    ALOGD("_ZN14DpEngine_TDSHP15onReconfigTilesER9DpCommand() called");
    return 0;
}

/* Demangled: DpMemory::Factory(DP_MEMORY_ENUM, int, unsigned int, bool, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN8DpMemory7FactoryE14DP_MEMORY_ENUMijbPi(void) {
    ALOGD("_ZN8DpMemory7FactoryE14DP_MEMORY_ENUMijbPi() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream::setDstBuffer(unsigned int, int, unsigned int*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpAsyncBlitStream12setDstBufferEjiPjji(void) {
    ALOGD("_ZN17DpAsyncBlitStream12setDstBufferEjiPjji() called");
    return 0;
}

/* Demangled: DpIspStream::queryMultiPortSupport(DpIspStream::ISPStreamType) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpIspStream21queryMultiPortSupportENS_13ISPStreamTypeE(void) {
    ALOGD("_ZN11DpIspStream21queryMultiPortSupportENS_13ISPStreamTypeE() called");
    return 0;
}

/* Exported Object: PQRSZAdaptor::s_pInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN12PQRSZAdaptor11s_pInstanceE = NULL;

/* Demangled: conv_block_to_scan(unsigned char*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _Z18conv_block_to_scanPhjjjjjS_(void) {
    ALOGD("_Z18conv_block_to_scanPhjjjjjS_() called");
    return 0;
}

/* Demangled: getWROTFIFOSetting(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z18getWROTFIFOSettingj(void) {
    ALOGD("_Z18getWROTFIFOSettingj() called");
    return 0;
}

/* Demangled: PQColorConfig::getColorConfig(COLOR_CONFIG_T**, int, bool, int) */
extern "C" __attribute__((visibility("default"))) int _ZN13PQColorConfig14getColorConfigEPP14COLOR_CONFIG_Tibi(void) {
    ALOGD("_ZN13PQColorConfig14getColorConfigEPP14COLOR_CONFIG_Tibi() called");
    return 0;
}

/* Exported Object: PQSessionManager::m_CapturepreAALPipeNum */
extern "C" __attribute__((visibility("default"))) void* _ZN16PQSessionManager22m_CapturepreAALPipeNumE = NULL;

/* Demangled: PQAlgorithmAdaptor::PQAlgorithmAdaptor(ProxyTuningBuffer, ProxyTuningBuffer, ProxyTuningBuffer, ProxyTuningBuffer) */
extern "C" __attribute__((visibility("default"))) int _ZN18PQAlgorithmAdaptorC2E17ProxyTuningBufferS0_S0_S0_(void) {
    ALOGD("_ZN18PQAlgorithmAdaptorC2E17ProxyTuningBufferS0_S0_S0_() called");
    return 0;
}

/* Demangled: DpPortAdapt::getVENCConfig(DpVEnc_Config**) const */
extern "C" __attribute__((visibility("default"))) int _ZNK11DpPortAdapt13getVENCConfigEPP13DpVEnc_Config(void) {
    ALOGD("_ZNK11DpPortAdapt13getVENCConfigEPP13DpVEnc_Config() called");
    return 0;
}

/* Demangled: DpEngine_CAMIN::onUpdatePMQOS(DpCommand&, unsigned int&, unsigned int&, int&, timeval&, DP_FORMAT_FLAG_ENUM&) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpEngine_CAMIN13onUpdatePMQOSER9DpCommandRjS2_RiR7timevalR19DP_FORMAT_FLAG_ENUM(void) {
    ALOGD("_ZN14DpEngine_CAMIN13onUpdatePMQOSER9DpCommandRjS2_RiR7timevalR19DP_FORMAT_FLAG_ENUM() called");
    return 0;
}

/* Demangled: DpIspStream::setSrcCrop(int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpIspStream10setSrcCropEiiiiii(void) {
    ALOGD("_ZN11DpIspStream10setSrcCropEiiiiii() called");
    return 0;
}

/* Demangled: PQDREAdaptor::tuningDRESWReg(CDRETopFW*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQDREAdaptor14tuningDRESWRegEP9CDRETopFWi(void) {
    ALOGD("_ZN12PQDREAdaptor14tuningDRESWRegEP9CDRETopFWi() called");
    return 0;
}

/* Demangled: PQDREAdaptor::tuningToolReadDREVPReg(CDREVPTopFW*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQDREAdaptor22tuningToolReadDREVPRegEP11CDREVPTopFWi(void) {
    ALOGD("_ZN12PQDREAdaptor22tuningToolReadDREVPRegEP11CDREVPTopFWi() called");
    return 0;
}

/* Exported Object: PQDREAdaptor::s_ALMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN12PQDREAdaptor9s_ALMutexE = NULL;

/* Exported Object: DpFRegistry<DpEngineBase*, int>::gHead */
extern "C" __attribute__((visibility("default"))) void* _ZN11DpFRegistryIP12DpEngineBaseiE5gHeadE = NULL;

/* Demangled: DpAsyncBlitStream::configPQParameter(unsigned int, DpAsyncBlitStream::BlitConfig&) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpAsyncBlitStream17configPQParameterEjRNS_10BlitConfigE(void) {
    ALOGD("_ZN17DpAsyncBlitStream17configPQParameterEjRNS_10BlitConfigE() called");
    return 0;
}

/* Demangled: DpPortAdapt::getBufferFd(CLIENT_TYPE_ENUM, int, int*, unsigned int*, unsigned int*, bool&) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpPortAdapt11getBufferFdE16CLIENT_TYPE_ENUMiPiPjS2_Rb(void) {
    ALOGD("_ZN11DpPortAdapt11getBufferFdE16CLIENT_TYPE_ENUMiPiPjS2_Rb() called");
    return 0;
}

/* Demangled: DpVEncStream::waitComplete() */
extern "C" __attribute__((visibility("default"))) int _ZN12DpVEncStream12waitCompleteEv(void) {
    ALOGD("_ZN12DpVEncStream12waitCompleteEv() called");
    return 0;
}

/* Demangled: DpCommandRecorder::getEngine(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorder9getEngineEj(void) {
    ALOGD("_ZN17DpCommandRecorder9getEngineEj() called");
    return 0;
}

/* Demangled: PQDSAdaptor::getVideoSourceSize(DSInput*, DpPqParam*) */
extern "C" __attribute__((visibility("default"))) int _ZN11PQDSAdaptor18getVideoSourceSizeEP7DSInputP9DpPqParam(void) {
    ALOGD("_ZN11PQDSAdaptor18getVideoSourceSizeEP7DSInputP9DpPqParam() called");
    return 0;
}

/* Demangled: PQDCAdaptor::onCalculate(PQSession*, int, int, int, bool, ADLOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN11PQDCAdaptor11onCalculateEP9PQSessioniiibP9ADLOutput(void) {
    ALOGD("_ZN11PQDCAdaptor11onCalculateEP9PQSessioniiibP9ADLOutput() called");
    return 0;
}

/* Demangled: DpIspStream::queueDstBuffer(int, unsigned int*, unsigned int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpIspStream14queueDstBufferEiPjS0_i(void) {
    ALOGD("_ZN11DpIspStream14queueDstBufferEiPjS0_i() called");
    return 0;
}

/* Demangled: PQSession::deleteHWNode() */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession12deleteHWNodeEv(void) {
    ALOGD("_ZN9PQSession12deleteHWNodeEv() called");
    return 0;
}

/* Demangled: DpVEncStream::setSrcCrop(int, int, int, int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpVEncStream10setSrcCropEiiiiiiiii(void) {
    ALOGD("_ZN12DpVEncStream10setSrcCropEiiiiiiiii() called");
    return 0;
}

/* Demangled: PQSession::getPreCutPosX() */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession13getPreCutPosXEv(void) {
    ALOGD("_ZN9PQSession13getPreCutPosXEv() called");
    return 0;
}

/* Demangled: DpRingBufferPool::dequeueBuffer(int*, DP_COLOR_ENUM*, void**, int*, int*, int*, int*, int*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN16DpRingBufferPool13dequeueBufferEPiP13DP_COLOR_ENUMPPvS0_S0_S0_S0_S0_b(void) {
    ALOGD("_ZN16DpRingBufferPool13dequeueBufferEPiP13DP_COLOR_ENUMPPvS0_S0_S0_S0_S0_b() called");
    return 0;
}

/* Exported Object: WROT0Reg */
extern "C" __attribute__((visibility("default"))) void* WROT0Reg = NULL;

/* Demangled: PQHDRAdaptor::setPrePipeNum(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQHDRAdaptor13setPrePipeNumEj(void) {
    ALOGD("_ZN12PQHDRAdaptor13setPrePipeNumEj() called");
    return 0;
}

/* Demangled: PQDREAdaptor::tuningDREVPSWReg(CDREVPTopFW*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQDREAdaptor16tuningDREVPSWRegEP11CDREVPTopFWi(void) {
    ALOGD("_ZN12PQDREAdaptor16tuningDREVPSWRegEP11CDREVPTopFWi() called");
    return 0;
}

/* Demangled: PQDREHistogramAdaptor::checkAndResetUnusedDREFW(PQDREBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN21PQDREHistogramAdaptor24checkAndResetUnusedDREFWEP11PQDREBuffer(void) {
    ALOGD("_ZN21PQDREHistogramAdaptor24checkAndResetUnusedDREFWEP11PQDREBuffer() called");
    return 0;
}

/* Demangled: PQSession::deleteDCWaitHistListNode() */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession24deleteDCWaitHistListNodeEv(void) {
    ALOGD("_ZN9PQSession24deleteDCWaitHistListNodeEv() called");
    return 0;
}

/* Demangled: DpAutoBufferPool::~DpAutoBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN16DpAutoBufferPoolD0Ev(void) {
    ALOGD("_ZN16DpAutoBufferPoolD0Ev() called");
    return 0;
}

/* Exported Object: PQColorConfig::m_ColorTableAIInit */
extern "C" __attribute__((visibility("default"))) void* _ZN13PQColorConfig18m_ColorTableAIInitE = NULL;

/* Demangled: DpEngineMutex::DpEngineMutex(DpPathBase*) */
extern "C" __attribute__((visibility("default"))) int _ZN13DpEngineMutexC1EP10DpPathBase(void) {
    ALOGD("_ZN13DpEngineMutexC1EP10DpPathBase() called");
    return 0;
}

/* Demangled: DpStream::setNumReadbackPABuffer(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8DpStream22setNumReadbackPABufferEjj(void) {
    ALOGD("_ZN8DpStream22setNumReadbackPABufferEjj() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream::setSrcCrop(unsigned int, DpRect) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpAsyncBlitStream10setSrcCropEj6DpRect(void) {
    ALOGD("_ZN17DpAsyncBlitStream10setSrcCropEj6DpRect() called");
    return 0;
}

/* Demangled: backward_src_acc(int, int, int, int, int, int, int, int, int, int&, int&) */
extern "C" __attribute__((visibility("default"))) int _Z16backward_src_acciiiiiiiiiRiS_(void) {
    ALOGD("_Z16backward_src_acciiiiiiiiiRiS_() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream2::transToRotFlip(unsigned int, int&, bool&) */
extern "C" __attribute__((visibility("default"))) int _ZN18DpAsyncBlitStream214transToRotFlipEjRiRb(void) {
    ALOGD("_ZN18DpAsyncBlitStream214transToRotFlipEjRiRb() called");
    return 0;
}

/* Demangled: DpTileEngine::advanceTile(DpCommand&, TILE_PARAM_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpTileEngine11advanceTileER9DpCommandP17TILE_PARAM_STRUCT(void) {
    ALOGD("_ZN12DpTileEngine11advanceTileER9DpCommandP17TILE_PARAM_STRUCT() called");
    return 0;
}

/* Demangled: PQSession::setHDRMode(DpPqParam const*, _DP_VDEC_DRV_COLORDESC_T*, _DP_VDEC_DRV_DYNAMIC_METADATA_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession10setHDRModeEPK9DpPqParamP24_DP_VDEC_DRV_COLORDESC_TP31_DP_VDEC_DRV_DYNAMIC_METADATA_T(void) {
    ALOGD("_ZN9PQSession10setHDRModeEPK9DpPqParamP24_DP_VDEC_DRV_COLORDESC_TP31_DP_VDEC_DRV_DYNAMIC_METADATA_T() called");
    return 0;
}

/* Demangled: DpEngineMutex::~DpEngineMutex() */
extern "C" __attribute__((visibility("default"))) int _ZN13DpEngineMutexD1Ev(void) {
    ALOGD("_ZN13DpEngineMutexD1Ev() called");
    return 0;
}

/* Demangled: DpPortAdapt::getPortInfo(DP_COLOR_ENUM*, int*, int*, int*, int*, DP_PROFILE_ENUM*, bool*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK11DpPortAdapt11getPortInfoEP13DP_COLOR_ENUMPiS2_S2_S2_P15DP_PROFILE_ENUMPb(void) {
    ALOGD("_ZNK11DpPortAdapt11getPortInfoEP13DP_COLOR_ENUMPiS2_S2_S2_P15DP_PROFILE_ENUMPb() called");
    return 0;
}

/* Demangled: DpIspStream::initPQService() */
extern "C" __attribute__((visibility("default"))) int _ZN11DpIspStream13initPQServiceEv(void) {
    ALOGD("_ZN11DpIspStream13initPQServiceEv() called");
    return 0;
}

/* Demangled: DpVEncStream::setSrcCrop(int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpVEncStream10setSrcCropEiiiiii(void) {
    ALOGD("_ZN12DpVEncStream10setSrcCropEiiiiii() called");
    return 0;
}

/* Exported Object: HDR0Reg */
extern "C" __attribute__((visibility("default"))) void* HDR0Reg = NULL;

/* Demangled: DpIonHandler::DpIonHandler(int, unsigned int, bool, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpIonHandlerC2EijbPi(void) {
    ALOGD("_ZN12DpIonHandlerC2EijbPi() called");
    return 0;
}

/* Demangled: PQSession::getAIParam(DpAIParam*) */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession10getAIParamEP9DpAIParam(void) {
    ALOGD("_ZN9PQSession10getAIParamEP9DpAIParam() called");
    return 0;
}

/* Demangled: PQSession::HandleDCHistDoneAndCheckRef(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession27HandleDCHistDoneAndCheckRefEj(void) {
    ALOGD("_ZN9PQSession27HandleDCHistDoneAndCheckRefEj() called");
    return 0;
}

/* Demangled: DpIspStream::queueSrcBuffer(void**, unsigned int*, unsigned int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpIspStream14queueSrcBufferEPPvPjS2_i(void) {
    ALOGD("_ZN11DpIspStream14queueSrcBufferEPPvPjS2_i() called");
    return 0;
}

/* Demangled: DpEngine_IMG2O::onInitTileCalc(TILE_PARAM_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpEngine_IMG2O14onInitTileCalcEP17TILE_PARAM_STRUCT(void) {
    ALOGD("_ZN14DpEngine_IMG2O14onInitTileCalcEP17TILE_PARAM_STRUCT() called");
    return 0;
}

/* Exported Object: vtable for DpTilePathMT */
extern "C" __attribute__((visibility("default"))) void* _ZTV12DpTilePathMT = NULL;

/* Demangled: setESLRDMA(DpCommand&, unsigned int, DP_COLOR_ENUM) */
extern "C" __attribute__((visibility("default"))) int _Z10setESLRDMAR9DpCommandj13DP_COLOR_ENUM(void) {
    ALOGD("_Z10setESLRDMAR9DpCommandj13DP_COLOR_ENUM() called");
    return 0;
}

/* Demangled: PQColorAdaptor::onUpdateHueEngine(COLOR_CONFIG_T*, DpCommand&, int&, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN14PQColorAdaptor17onUpdateHueEngineEP14COLOR_CONFIG_TR9DpCommandRiPi(void) {
    ALOGD("_ZN14PQColorAdaptor17onUpdateHueEngineEP14COLOR_CONFIG_TR9DpCommandRiPi() called");
    return 0;
}

/* Demangled: PQHDRAdaptor::getHDROutput(DHDROUTPUT*, int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQHDRAdaptor12getHDROutputEP10DHDROUTPUTib(void) {
    ALOGD("_ZN12PQHDRAdaptor12getHDROutputEP10DHDROUTPUTib() called");
    return 0;
}

/* Demangled: DpRingBufferPool::releaseBuffer(int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN16DpRingBufferPool13releaseBufferEib(void) {
    ALOGD("_ZN16DpRingBufferPool13releaseBufferEib() called");
    return 0;
}

/* Exported Object: vtable for DpBasicBufferPool */
extern "C" __attribute__((visibility("default"))) void* _ZTV17DpBasicBufferPool = NULL;

/* Demangled: DpCommandRecorder::getSecurePortFlag() */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorder17getSecurePortFlagEv(void) {
    ALOGD("_ZN17DpCommandRecorder17getSecurePortFlagEv() called");
    return 0;
}

/* Demangled: DpCommandRecorder::getSecureAddrCount() */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorder18getSecureAddrCountEv(void) {
    ALOGD("_ZN17DpCommandRecorder18getSecureAddrCountEv() called");
    return 0;
}

/* Demangled: calRDMASetting(RdmaInput*, RdmaOutput*) */
extern "C" __attribute__((visibility("default"))) int _Z14calRDMASettingP9RdmaInputP10RdmaOutput(void) {
    ALOGD("_Z14calRDMASettingP9RdmaInputP10RdmaOutput() called");
    return 0;
}

/* Demangled: PQSession::setPipeNum(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession10setPipeNumEj(void) {
    ALOGD("_ZN9PQSession10setPipeNumEj() called");
    return 0;
}

/* Demangled: PQSession::setPictureDpPqConfig(DpPqConfig*, DpPqParam const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession20setPictureDpPqConfigEP10DpPqConfigPK9DpPqParam(void) {
    ALOGD("_ZN9PQSession20setPictureDpPqConfigEP10DpPqConfigPK9DpPqParam() called");
    return 0;
}

/* Demangled: PQDREAdaptor::~PQDREAdaptor() */
extern "C" __attribute__((visibility("default"))) int _ZN12PQDREAdaptorD1Ev(void) {
    ALOGD("_ZN12PQDREAdaptorD1Ev() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream2::DpAsyncBlitStream2() */
extern "C" __attribute__((visibility("default"))) int _ZN18DpAsyncBlitStream2C1Ev(void) {
    ALOGD("_ZN18DpAsyncBlitStream2C1Ev() called");
    return 0;
}

/* Demangled: DpIspStream::setBatchParameter(ISP_TPIPE_CONFIG_STRUCT**, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpIspStream17setBatchParameterEPP23ISP_TPIPE_CONFIG_STRUCTjj(void) {
    ALOGD("_ZN11DpIspStream17setBatchParameterEPP23ISP_TPIPE_CONFIG_STRUCTjj() called");
    return 0;
}

/* Demangled: PQSession::setDCisHW0Path(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession14setDCisHW0PathEb(void) {
    ALOGD("_ZN9PQSession14setDCisHW0PathEb() called");
    return 0;
}

/* Exported Object: vtable for DpBufferPoolBase */
extern "C" __attribute__((visibility("default"))) void* _ZTV16DpBufferPoolBase = NULL;

/* Demangled: DpPathComposer::setupPath(DpChannel*, STREAM_TYPE_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpPathComposer9setupPathEP9DpChannel16STREAM_TYPE_ENUM(void) {
    ALOGD("_ZN14DpPathComposer9setupPathEP9DpChannel16STREAM_TYPE_ENUM() called");
    return 0;
}

/* Demangled: DpCommandQueue::write(unsigned int, unsigned int, unsigned int, int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpCommandQueue5writeEjjjPii(void) {
    ALOGD("_ZN14DpCommandQueue5writeEjjjPii() called");
    return 0;
}

/* Demangled: DpCommandRecorder::getFrameInfoToCMDQ() */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorder18getFrameInfoToCMDQEv(void) {
    ALOGD("_ZN17DpCommandRecorder18getFrameInfoToCMDQEv() called");
    return 0;
}

/* Demangled: DpEngine_HDR::onReconfigTiles(DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpEngine_HDR15onReconfigTilesER9DpCommand(void) {
    ALOGD("_ZN12DpEngine_HDR15onReconfigTilesER9DpCommand() called");
    return 0;
}

/* Demangled: tile_init_mdp_func_property(TILE_FUNC_BLOCK_STRUCT*, TILE_REG_MAP_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z27tile_init_mdp_func_propertyP22TILE_FUNC_BLOCK_STRUCTP19TILE_REG_MAP_STRUCT(void) {
    ALOGD("_Z27tile_init_mdp_func_propertyP22TILE_FUNC_BLOCK_STRUCTP19TILE_REG_MAP_STRUCT() called");
    return 0;
}

/* Demangled: DpIspStream::setBatchParameter(ISP_TPIPE_CONFIG_STRUCT**, unsigned int, ISP2MDP_STRUCT*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpIspStream17setBatchParameterEPP23ISP_TPIPE_CONFIG_STRUCTjP14ISP2MDP_STRUCTj(void) {
    ALOGD("_ZN11DpIspStream17setBatchParameterEPP23ISP_TPIPE_CONFIG_STRUCTjP14ISP2MDP_STRUCTj() called");
    return 0;
}

/* Demangled: PQDCConfig::~PQDCConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN10PQDCConfigD1Ev(void) {
    ALOGD("_ZN10PQDCConfigD1Ev() called");
    return 0;
}

/* Demangled: tile_tdr_isp_fprint_dump_internal(__sFILE*, TILE_REG_MAP_STRUCT*, int, unsigned int*, unsigned int*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z33tile_tdr_isp_fprint_dump_internalP7__sFILEP19TILE_REG_MAP_STRUCTiPjS3_jj(void) {
    ALOGD("_Z33tile_tdr_isp_fprint_dump_internalP7__sFILEP19TILE_REG_MAP_STRUCTiPjS3_jj() called");
    return 0;
}

/* Demangled: DpStream::initNumReadbackPABuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN8DpStream23initNumReadbackPABufferEv(void) {
    ALOGD("_ZN8DpStream23initNumReadbackPABufferEv() called");
    return 0;
}

/* Demangled: DpCommandRecorder::getEngineFlag() */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorder13getEngineFlagEv(void) {
    ALOGD("_ZN17DpCommandRecorder13getEngineFlagEv() called");
    return 0;
}

/* Exported Object: vtable for DpEngineBase */
extern "C" __attribute__((visibility("default"))) void* _ZTV12DpEngineBase = NULL;

/* Demangled: PQDSConfig::isUREnabled(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN10PQDSConfig11isUREnabledEb(void) {
    ALOGD("_ZN10PQDSConfig11isUREnabledEb() called");
    return 0;
}

/* Demangled: PQHDRAdaptor::setPreHDRMode(HDR_MODE_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQHDRAdaptor13setPreHDRModeE13HDR_MODE_ENUM(void) {
    ALOGD("_ZN12PQHDRAdaptor13setPreHDRModeE13HDR_MODE_ENUM() called");
    return 0;
}

/* Demangled: PQDREHistogramAdaptor::getDREInput(void*, unsigned int, int, int, DREVPTopInput*, unsigned int*, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN21PQDREHistogramAdaptor11getDREInputEPvjiiP13DREVPTopInputPjRj(void) {
    ALOGD("_ZN21PQDREHistogramAdaptor11getDREInputEPvjiiP13DREVPTopInputPjRj() called");
    return 0;
}

/* Demangled: tile_isp_mode_close(TILE_REG_MAP_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z19tile_isp_mode_closeP19TILE_REG_MAP_STRUCT(void) {
    ALOGD("_Z19tile_isp_mode_closeP19TILE_REG_MAP_STRUCT() called");
    return 0;
}

/* Demangled: DpEngine_SCL::onConfigFrame(DpCommand&, DpConfig&) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpEngine_SCL13onConfigFrameER9DpCommandR8DpConfig(void) {
    ALOGD("_ZN12DpEngine_SCL13onConfigFrameER9DpCommandR8DpConfig() called");
    return 0;
}

/* Demangled: PQSession::getHDRisLeftDone() */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession16getHDRisLeftDoneEv(void) {
    ALOGD("_ZN9PQSession16getHDRisLeftDoneEv() called");
    return 0;
}

/* Demangled: PQDCAdaptor::setUserInfo(USER_INFO_SCENARIO_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN11PQDCAdaptor11setUserInfoE23USER_INFO_SCENARIO_ENUM(void) {
    ALOGD("_ZN11PQDCAdaptor11setUserInfoE23USER_INFO_SCENARIO_ENUM() called");
    return 0;
}

/* Demangled: PQReadBackFactory::PQReadBackFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN17PQReadBackFactoryC1Ev(void) {
    ALOGD("_ZN17PQReadBackFactoryC1Ev() called");
    return 0;
}

/* Exported Object: PQColorConfig::m_ColorTable */
extern "C" __attribute__((visibility("default"))) void* _ZN13PQColorConfig12m_ColorTableE = NULL;

/* Demangled: tile_tdr_isp_mask_to_dump_internal_wpe(TILE_REG_MAP_STRUCT*, unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z38tile_tdr_isp_mask_to_dump_internal_wpeP19TILE_REG_MAP_STRUCTPjS1_(void) {
    ALOGD("_Z38tile_tdr_isp_mask_to_dump_internal_wpeP19TILE_REG_MAP_STRUCTPjS1_() called");
    return 0;
}

/* Demangled: DpEngineBase::onAbortPollPort() */
extern "C" __attribute__((visibility("default"))) int _ZN12DpEngineBase15onAbortPollPortEv(void) {
    ALOGD("_ZN12DpEngineBase15onAbortPollPortEv() called");
    return 0;
}

/* Demangled: DpCommandRecorder::resetRecord() */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorder11resetRecordEv(void) {
    ALOGD("_ZN17DpCommandRecorder11resetRecordEv() called");
    return 0;
}

/* Demangled: DpCommandRecorder::getPriority() */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorder11getPriorityEv(void) {
    ALOGD("_ZN17DpCommandRecorder11getPriorityEv() called");
    return 0;
}

/* Demangled: PQSession::resetHDRHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession14resetHDRHandleEv(void) {
    ALOGD("_ZN9PQSession14resetHDRHandleEv() called");
    return 0;
}

/* Demangled: DpAutoBufferPool::~DpAutoBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN16DpAutoBufferPoolD1Ev(void) {
    ALOGD("_ZN16DpAutoBufferPoolD1Ev() called");
    return 0;
}

/* Demangled: PQRSZAdaptor::~PQRSZAdaptor() */
extern "C" __attribute__((visibility("default"))) int _ZN12PQRSZAdaptorD1Ev(void) {
    ALOGD("_ZN12PQRSZAdaptorD1Ev() called");
    return 0;
}

/* Demangled: PQDREAdaptor::getDRETransInfo(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQDREAdaptor15getDRETransInfoEb(void) {
    ALOGD("_ZN12PQDREAdaptor15getDRETransInfoEb() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream::setPQParameter(unsigned int, DpPqParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpAsyncBlitStream14setPQParameterEjRK9DpPqParam(void) {
    ALOGD("_ZN17DpAsyncBlitStream14setPQParameterEjRK9DpPqParam() called");
    return 0;
}

/* Demangled: DpCommandQueue::appendNumReadback(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpCommandQueue17appendNumReadbackEjj(void) {
    ALOGD("_ZN14DpCommandQueue17appendNumReadbackEjj() called");
    return 0;
}

/* Exported Object: vtable for DpEngine_SCL */
extern "C" __attribute__((visibility("default"))) void* _ZTV12DpEngine_SCL = NULL;

/* Demangled: tile_tdr_isp_fprint_dump_bld(__sFILE*, TILE_REG_MAP_STRUCT*, int, unsigned int*, unsigned int*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z28tile_tdr_isp_fprint_dump_bldP7__sFILEP19TILE_REG_MAP_STRUCTiPjS3_jj(void) {
    ALOGD("_Z28tile_tdr_isp_fprint_dump_bldP7__sFILEP19TILE_REG_MAP_STRUCTiPjS3_jj() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream2::queryTheoreticalExecTime(unsigned int, unsigned int, unsigned int, unsigned int, std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN18DpAsyncBlitStream224queryTheoreticalExecTimeEjjjjPNSt3__16vectorIjNS0_9allocatorIjEEEE(void) {
    ALOGD("_ZN18DpAsyncBlitStream224queryTheoreticalExecTimeEjjjjPNSt3__16vectorIjNS0_9allocatorIjEEEE() called");
    return 0;
}

/* Demangled: DpWrapper_WPE::onConfigTile(DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN13DpWrapper_WPE12onConfigTileER9DpCommand(void) {
    ALOGD("_ZN13DpWrapper_WPE12onConfigTileER9DpCommand() called");
    return 0;
}

/* Exported Object: vtable for DpPmemHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTV13DpPmemHandler = NULL;

/* Exported Object: PQSessionManager::s_pInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN16PQSessionManager11s_pInstanceE = NULL;

/* Demangled: DpBufferPoolBase::pollBufferStatus(CLIENT_TYPE_ENUM, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN16DpBufferPoolBase16pollBufferStatusE16CLIENT_TYPE_ENUMb(void) {
    ALOGD("_ZN16DpBufferPoolBase16pollBufferStatusE16CLIENT_TYPE_ENUMb() called");
    return 0;
}

/* Demangled: DpCommandRecorder::markRecord(DpCommandRecorder::BlockType, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorder10markRecordENS_9BlockTypeEjj(void) {
    ALOGD("_ZN17DpCommandRecorder10markRecordENS_9BlockTypeEjj() called");
    return 0;
}

/* Demangled: PQDSConfig::initTDSHPTable() */
extern "C" __attribute__((visibility("default"))) int _ZN10PQDSConfig14initTDSHPTableEv(void) {
    ALOGD("_ZN10PQDSConfig14initTDSHPTableEv() called");
    return 0;
}

/* Demangled: DpEngineMutex::~DpEngineMutex() */
extern "C" __attribute__((visibility("default"))) int _ZN13DpEngineMutexD2Ev(void) {
    ALOGD("_ZN13DpEngineMutexD2Ev() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream::setSrcBuffer(int, unsigned int*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpAsyncBlitStream12setSrcBufferEiPjji(void) {
    ALOGD("_ZN17DpAsyncBlitStream12setSrcBufferEiPjji() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream2::setSrcConfig(int, int, int, int, DP_COLOR_ENUM, DP_PROFILE_ENUM, DpInterlaceFormat, DpSecure, bool, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN18DpAsyncBlitStream212setSrcConfigEiiii13DP_COLOR_ENUM15DP_PROFILE_ENUM17DpInterlaceFormat8DpSecurebj(void) {
    ALOGD("_ZN18DpAsyncBlitStream212setSrcConfigEiiii13DP_COLOR_ENUM15DP_PROFILE_ENUM17DpInterlaceFormat8DpSecurebj() called");
    return 0;
}

/* Exported Object: PQAlgorithmFactory::s_pInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN18PQAlgorithmFactory11s_pInstanceE = NULL;

/* Exported Object: DpPathTopology::s_engOrder */
extern "C" __attribute__((visibility("default"))) void* _ZN14DpPathTopology10s_engOrderE = NULL;

/* Demangled: tile_isp_frame_mode_close(TILE_REG_MAP_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z25tile_isp_frame_mode_closeP19TILE_REG_MAP_STRUCT(void) {
    ALOGD("_Z25tile_isp_frame_mode_closeP19TILE_REG_MAP_STRUCT() called");
    return 0;
}

/* Demangled: DpPathTopology::DpPathTopology() */
extern "C" __attribute__((visibility("default"))) int _ZN14DpPathTopologyC1Ev(void) {
    ALOGD("_ZN14DpPathTopologyC1Ev() called");
    return 0;
}

/* Demangled: DpEngineBase::onWaitFence() */
extern "C" __attribute__((visibility("default"))) int _ZN12DpEngineBase11onWaitFenceEv(void) {
    ALOGD("_ZN12DpEngineBase11onWaitFenceEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to DpEngine_VENC::threadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZThn8392_N13DpEngine_VENC10threadLoopEv(void) {
    ALOGD("_ZThn8392_N13DpEngine_VENC10threadLoopEv() called");
    return 0;
}

/* Demangled: PQDSAdaptor::calRegs(PQSession*, DpCommand&, DpConfig&, int, int, bool, int*, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN11PQDSAdaptor7calRegsEP9PQSessionR9DpCommandR8DpConfigiibPiRi(void) {
    ALOGD("_ZN11PQDSAdaptor7calRegsEP9PQSessionR9DpCommandR8DpConfigiibPiRi() called");
    return 0;
}

/* Exported Object: PQAshmem::s_pInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN8PQAshmem11s_pInstanceE = NULL;

/* Demangled: PQDREHistogramAdaptor::~PQDREHistogramAdaptor() */
extern "C" __attribute__((visibility("default"))) int _ZN21PQDREHistogramAdaptorD1Ev(void) {
    ALOGD("_ZN21PQDREHistogramAdaptorD1Ev() called");
    return 0;
}

/* Demangled: DpVEncStream::queueDstBuffer(int, unsigned int*, unsigned int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpVEncStream14queueDstBufferEiPjS0_i(void) {
    ALOGD("_ZN12DpVEncStream14queueDstBufferEiPjS0_i() called");
    return 0;
}

/* Demangled: PQSession::getDREConfig(DRE_CONFIG_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession12getDREConfigEP12DRE_CONFIG_T(void) {
    ALOGD("_ZN9PQSession12getDREConfigEP12DRE_CONFIG_T() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev() called");
    return 0;
}

/* Exported Object: PQHDRAdaptor::s_pInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN12PQHDRAdaptor11s_pInstanceE = NULL;

/* Demangled: PQDREAdaptor::~PQDREAdaptor() */
extern "C" __attribute__((visibility("default"))) int _ZN12PQDREAdaptorD2Ev(void) {
    ALOGD("_ZN12PQDREAdaptorD2Ev() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream2::DpAsyncBlitStream2() */
extern "C" __attribute__((visibility("default"))) int _ZN18DpAsyncBlitStream2C2Ev(void) {
    ALOGD("_ZN18DpAsyncBlitStream2C2Ev() called");
    return 0;
}

/* Demangled: DpCommandRecorder::beginLabel() */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorder10beginLabelEv(void) {
    ALOGD("_ZN17DpCommandRecorder10beginLabelEv() called");
    return 0;
}

/* Demangled: DpEngine_HDR::onAdvanceTile(DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpEngine_HDR13onAdvanceTileER9DpCommand(void) {
    ALOGD("_ZN12DpEngine_HDR13onAdvanceTileER9DpCommand() called");
    return 0;
}

/* Demangled: PQDCConfig::getDebugFlag(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN10PQDCConfig12getDebugFlagEb(void) {
    ALOGD("_ZN10PQDCConfig12getDebugFlagEb() called");
    return 0;
}

/* Demangled: PQColorAdaptor::getInstance(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN14PQColorAdaptor11getInstanceEj(void) {
    ALOGD("_ZN14PQColorAdaptor11getInstanceEj() called");
    return 0;
}

/* Demangled: PQDREAdaptor::onCalculateIspImpl(bool, DpPqParam&, DRETopOutput*, CDRETopFW*) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQDREAdaptor18onCalculateIspImplEbR9DpPqParamP12DRETopOutputP9CDRETopFW(void) {
    ALOGD("_ZN12PQDREAdaptor18onCalculateIspImplEbR9DpPqParamP12DRETopOutputP9CDRETopFW() called");
    return 0;
}

/* Demangled: tile_tdr_isp_reg_to_dump_internal_wpe(TILE_REG_MAP_STRUCT*, unsigned int*, unsigned int*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _Z37tile_tdr_isp_reg_to_dump_internal_wpeP19TILE_REG_MAP_STRUCTPjS1_ji(void) {
    ALOGD("_Z37tile_tdr_isp_reg_to_dump_internal_wpeP19TILE_REG_MAP_STRUCTPjS1_ji() called");
    return 0;
}

/* Demangled: DpBasicBufferPool::setSecureMode(DpSecure) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpBasicBufferPool13setSecureModeE8DpSecure(void) {
    ALOGD("_ZN17DpBasicBufferPool13setSecureModeE8DpSecure() called");
    return 0;
}

/* Demangled: DpCommandQueue::clear(DpCommandBase::EVENT_TYPE_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpCommandQueue5clearEN13DpCommandBase15EVENT_TYPE_ENUME(void) {
    ALOGD("_ZN14DpCommandQueue5clearEN13DpCommandBase15EVENT_TYPE_ENUME() called");
    return 0;
}

/* Demangled: DpWrapper_WPE::onReconfigTiles(DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN13DpWrapper_WPE15onReconfigTilesER9DpCommand(void) {
    ALOGD("_ZN13DpWrapper_WPE15onReconfigTilesER9DpCommand() called");
    return 0;
}

/* Demangled: PQSession::getVideoID() */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession10getVideoIDEv(void) {
    ALOGD("_ZN9PQSession10getVideoIDEv() called");
    return 0;
}

/* Demangled: PQDCConfig::~PQDCConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN10PQDCConfigD2Ev(void) {
    ALOGD("_ZN10PQDCConfigD2Ev() called");
    return 0;
}

/* Demangled: PQAshmem::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN8PQAshmem15destroyInstanceEv(void) {
    ALOGD("_ZN8PQAshmem15destroyInstanceEv() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream::setDither(unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpAsyncBlitStream9setDitherEjb(void) {
    ALOGD("_ZN17DpAsyncBlitStream9setDitherEjb() called");
    return 0;
}

/* Demangled: DpStream::getReadbackEngineStatus(std::__1::vector<DpReadbackEngines_t, std::__1::allocator<DpReadbackEngines_t> >&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8DpStream23getReadbackEngineStatusERNSt3__16vectorI19DpReadbackEngines_tNS0_9allocatorIS2_EEEE(void) {
    ALOGD("_ZNK8DpStream23getReadbackEngineStatusERNSt3__16vectorI19DpReadbackEngines_tNS0_9allocatorIS2_EEEE() called");
    return 0;
}

/* Demangled: DpChannel::getIsp2MdpParam(void*, int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9DpChannel15getIsp2MdpParamEPvPi(void) {
    ALOGD("_ZNK9DpChannel15getIsp2MdpParamEPvPi() called");
    return 0;
}

/* Demangled: DpCommandQueue::dup(DpCommand::BLOCK_TYPE_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpCommandQueue3dupEN9DpCommand15BLOCK_TYPE_ENUME(void) {
    ALOGD("_ZN14DpCommandQueue3dupEN9DpCommand15BLOCK_TYPE_ENUME() called");
    return 0;
}

/* Demangled: PQSession::getHDRRef() */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession9getHDRRefEv(void) {
    ALOGD("_ZN9PQSession9getHDRRefEv() called");
    return 0;
}

/* Demangled: PQConfig::~PQConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN8PQConfigD1Ev(void) {
    ALOGD("_ZN8PQConfigD1Ev() called");
    return 0;
}

/* Demangled: PQAshmem::getAshmemBase() */
extern "C" __attribute__((visibility("default"))) int _ZN8PQAshmem13getAshmemBaseEv(void) {
    ALOGD("_ZN8PQAshmem13getAshmemBaseEv() called");
    return 0;
}

/* Exported Object: vtable for DpAutoBufferPool */
extern "C" __attribute__((visibility("default"))) void* _ZTV16DpAutoBufferPool = NULL;

/* Demangled: DpBlitStream::getPqID() */
extern "C" __attribute__((visibility("default"))) int _ZN12DpBlitStream7getPqIDEv(void) {
    ALOGD("_ZN12DpBlitStream7getPqIDEv() called");
    return 0;
}

/* Demangled: PQReadBackFactory::PQReadBackFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN17PQReadBackFactoryC2Ev(void) {
    ALOGD("_ZN17PQReadBackFactoryC2Ev() called");
    return 0;
}

/* Demangled: PQIspTuning::getTuningValue(char const*, unsigned int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN11PQIspTuning14getTuningValueEPKcRjS2_(void) {
    ALOGD("_ZN11PQIspTuning14getTuningValueEPKcRjS2_() called");
    return 0;
}

/* Exported Object: RDMA0Reg */
extern "C" __attribute__((visibility("default"))) void* RDMA0Reg = NULL;

/* Demangled: DpWrapper_ISP::onUpdatePMQOS(DpCommand&, unsigned int&, unsigned int&, int&, timeval&) */
extern "C" __attribute__((visibility("default"))) int _ZN13DpWrapper_ISP13onUpdatePMQOSER9DpCommandRjS2_RiR7timeval(void) {
    ALOGD("_ZN13DpWrapper_ISP13onUpdatePMQOSER9DpCommandRjS2_RiR7timeval() called");
    return 0;
}

/* Demangled: DpDriver::allocatePABuffer(unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN8DpDriver16allocatePABufferEjPj(void) {
    ALOGD("_ZN8DpDriver16allocatePABufferEjPj() called");
    return 0;
}

/* Demangled: DpBlitStream::setOrientation(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpBlitStream14setOrientationEj(void) {
    ALOGD("_ZN12DpBlitStream14setOrientationEj() called");
    return 0;
}

/* Exported Object: PQDREHistogramAdaptor::s_pInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN21PQDREHistogramAdaptor11s_pInstanceE = NULL;

/* Demangled: DpAutoBufferPool::~DpAutoBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN16DpAutoBufferPoolD2Ev(void) {
    ALOGD("_ZN16DpAutoBufferPoolD2Ev() called");
    return 0;
}

/* Exported Object: vtable for DpRingBufferPool */
extern "C" __attribute__((visibility("default"))) void* _ZTV16DpRingBufferPool = NULL;

/* Demangled: DpFragStream::dequeueFrag(int*, DP_COLOR_ENUM*, void**, int*, int*, int*, int*, int*, int*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpFragStream11dequeueFragEPiP13DP_COLOR_ENUMPPvS0_S0_S0_S0_S0_S0_b(void) {
    ALOGD("_ZN12DpFragStream11dequeueFragEPiP13DP_COLOR_ENUMPPvS0_S0_S0_S0_S0_S0_b() called");
    return 0;
}

/* Demangled: PQConfig::getPQServiceStatus() */
extern "C" __attribute__((visibility("default"))) int _ZN8PQConfig18getPQServiceStatusEv(void) {
    ALOGD("_ZN8PQConfig18getPQServiceStatusEv() called");
    return 0;
}

/* Demangled: DpCommandQueue::getReadbackValues(unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpCommandQueue17getReadbackValuesERj(void) {
    ALOGD("_ZN14DpCommandQueue17getReadbackValuesERj() called");
    return 0;
}

/* Demangled: DpTileEngine::dumpTileAccumulation() */
extern "C" __attribute__((visibility("default"))) int _ZN12DpTileEngine20dumpTileAccumulationEv(void) {
    ALOGD("_ZN12DpTileEngine20dumpTileAccumulationEv() called");
    return 0;
}

/* Demangled: DpEngine_RDMA::onReconfigTiles(DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN13DpEngine_RDMA15onReconfigTilesER9DpCommand(void) {
    ALOGD("_ZN13DpEngine_RDMA15onReconfigTilesER9DpCommand() called");
    return 0;
}

/* Exported Object: VENCReg */
extern "C" __attribute__((visibility("default"))) void* VENCReg = NULL;

/* Demangled: PQTuningBuffer::isValid() */
extern "C" __attribute__((visibility("default"))) int _ZN14PQTuningBuffer7isValidEv(void) {
    ALOGD("_ZN14PQTuningBuffer7isValidEv() called");
    return 0;
}

/* Demangled: PQRSZAdaptor::~PQRSZAdaptor() */
extern "C" __attribute__((visibility("default"))) int _ZN12PQRSZAdaptorD2Ev(void) {
    ALOGD("_ZN12PQRSZAdaptorD2Ev() called");
    return 0;
}

/* Demangled: PQDREAdaptor::writeBlock(DpCommand&, DREVPTopOutput const*, unsigned int, unsigned int, unsigned int, unsigned int, int*, int&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQDREAdaptor10writeBlockER9DpCommandPK14DREVPTopOutputjjjjPiRib(void) {
    ALOGD("_ZN12PQDREAdaptor10writeBlockER9DpCommandPK14DREVPTopOutputjjjjPiRib() called");
    return 0;
}

/* Demangled: PQDREHistogramAdaptor::getDREBlock(unsigned int*, int, int, int, int, DREVPTopInput*) */
extern "C" __attribute__((visibility("default"))) int _ZN21PQDREHistogramAdaptor11getDREBlockEPjiiiiP13DREVPTopInput(void) {
    ALOGD("_ZN21PQDREHistogramAdaptor11getDREBlockEPjiiiiP13DREVPTopInput() called");
    return 0;
}

/* Demangled: DpEngine_TDSHP::onAdvanceTile(DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpEngine_TDSHP13onAdvanceTileER9DpCommand(void) {
    ALOGD("_ZN14DpEngine_TDSHP13onAdvanceTileER9DpCommand() called");
    return 0;
}

/* Demangled: tile_lut_isp_func_output_disable(int, TILE_FUNC_ENABLE_STRUCT*, TILE_REG_MAP_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z32tile_lut_isp_func_output_disableiP23TILE_FUNC_ENABLE_STRUCTP19TILE_REG_MAP_STRUCT(void) {
    ALOGD("_Z32tile_lut_isp_func_output_disableiP23TILE_FUNC_ENABLE_STRUCTP19TILE_REG_MAP_STRUCT() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream::getJobID() */
extern "C" __attribute__((visibility("default"))) int _ZN17DpAsyncBlitStream8getJobIDEv(void) {
    ALOGD("_ZN17DpAsyncBlitStream8getJobIDEv() called");
    return 0;
}

/* Demangled: DpVEncStream::dequeueFrameEnd(unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpVEncStream15dequeueFrameEndEPj(void) {
    ALOGD("_ZN12DpVEncStream15dequeueFrameEndEPj() called");
    return 0;
}

/* Demangled: DpTilePath::finishCommand(bool, unsigned long long, unsigned long long, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN10DpTilePath13finishCommandEbyyPc(void) {
    ALOGD("_ZN10DpTilePath13finishCommandEbyyPc() called");
    return 0;
}

/* Demangled: PQColorAdaptor::onConfigSatEngine(COLOR_CONFIG_T*, DpCommand&, int&, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN14PQColorAdaptor17onConfigSatEngineEP14COLOR_CONFIG_TR9DpCommandRiPi(void) {
    ALOGD("_ZN14PQColorAdaptor17onConfigSatEngineEP14COLOR_CONFIG_TR9DpCommandRiPi() called");
    return 0;
}

/* Demangled: DpEngineBase::onPollPort(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpEngineBase10onPollPortEb(void) {
    ALOGD("_ZN12DpEngineBase10onPollPortEb() called");
    return 0;
}

/* Exported Object: DpPortAdapt::s_dumpID */
extern "C" __attribute__((visibility("default"))) void* _ZN11DpPortAdapt8s_dumpIDE = NULL;

/* Demangled: DpWrapper_WPE::onConfigFrame(DpCommand&, DpConfig&) */
extern "C" __attribute__((visibility("default"))) int _ZN13DpWrapper_WPE13onConfigFrameER9DpCommandR8DpConfig(void) {
    ALOGD("_ZN13DpWrapper_WPE13onConfigFrameER9DpCommandR8DpConfig() called");
    return 0;
}

/* Demangled: tile_tdr_isp_mask_to_dump_internal_eaf(TILE_REG_MAP_STRUCT*, unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z38tile_tdr_isp_mask_to_dump_internal_eafP19TILE_REG_MAP_STRUCTPjS1_(void) {
    ALOGD("_Z38tile_tdr_isp_mask_to_dump_internal_eafP19TILE_REG_MAP_STRUCTPjS1_() called");
    return 0;
}

/* Demangled: DpFragStream::DpFragStream() */
extern "C" __attribute__((visibility("default"))) int _ZN12DpFragStreamC1Ev(void) {
    ALOGD("_ZN12DpFragStreamC1Ev() called");
    return 0;
}

/* Demangled: DpCommandRecorder::markRecord(DpCommandRecorder::BlockType) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorder10markRecordENS_9BlockTypeE(void) {
    ALOGD("_ZN17DpCommandRecorder10markRecordENS_9BlockTypeE() called");
    return 0;
}

/* Demangled: DpCommandRecorder::~DpCommandRecorder() */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorderD0Ev(void) {
    ALOGD("_ZN17DpCommandRecorderD0Ev() called");
    return 0;
}

/* Demangled: DpIonHandler::free_internal() */
extern "C" __attribute__((visibility("default"))) int _ZN12DpIonHandler13free_internalEv(void) {
    ALOGD("_ZN12DpIonHandler13free_internalEv() called");
    return 0;
}

/* Demangled: DpMmuHandler::mapSWAddress() */
extern "C" __attribute__((visibility("default"))) int _ZN12DpMmuHandler12mapSWAddressEv(void) {
    ALOGD("_ZN12DpMmuHandler12mapSWAddressEv() called");
    return 0;
}

/* Demangled: DpPathComposer::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN14DpPathComposer5resetEv(void) {
    ALOGD("_ZN14DpPathComposer5resetEv() called");
    return 0;
}

/* Demangled: DpCommandQueue::waitNoClear(DpCommandBase::EVENT_TYPE_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpCommandQueue11waitNoClearEN13DpCommandBase15EVENT_TYPE_ENUME(void) {
    ALOGD("_ZN14DpCommandQueue11waitNoClearEN13DpCommandBase15EVENT_TYPE_ENUME() called");
    return 0;
}

/* Demangled: DpWrapper_ISP::onPostProc(DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN13DpWrapper_ISP10onPostProcER9DpCommand(void) {
    ALOGD("_ZN13DpWrapper_ISP10onPostProcER9DpCommand() called");
    return 0;
}

/* Demangled: DpEngine_COLOR::onReconfigTiles(DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpEngine_COLOR15onReconfigTilesER9DpCommand(void) {
    ALOGD("_ZN14DpEngine_COLOR15onReconfigTilesER9DpCommand() called");
    return 0;
}

/* Demangled: DpRingBufferPool::~DpRingBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN16DpRingBufferPoolD0Ev(void) {
    ALOGD("_ZN16DpRingBufferPoolD0Ev() called");
    return 0;
}

/* Demangled: DpBasicBufferPool::registerBuffer(unsigned int*, unsigned int*, int, int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpBasicBufferPool14registerBufferEPjS0_iiPi(void) {
    ALOGD("_ZN17DpBasicBufferPool14registerBufferEPjS0_iiPi() called");
    return 0;
}

/* Demangled: DpCommandQueue::init() */
extern "C" __attribute__((visibility("default"))) int _ZN14DpCommandQueue4initEv(void) {
    ALOGD("_ZN14DpCommandQueue4initEv() called");
    return 0;
}

/* Demangled: DpWrapper_WPE::onUpdatePMQOS(DpCommand&, unsigned int&, unsigned int&, timeval&) */
extern "C" __attribute__((visibility("default"))) int _ZN13DpWrapper_WPE13onUpdatePMQOSER9DpCommandRjS2_R7timeval(void) {
    ALOGD("_ZN13DpWrapper_WPE13onUpdatePMQOSER9DpCommandRjS2_R7timeval() called");
    return 0;
}

/* Demangled: PQDREAdaptor::getInstance(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQDREAdaptor11getInstanceEj(void) {
    ALOGD("_ZN12PQDREAdaptor11getInstanceEj() called");
    return 0;
}

/* Demangled: DpCommandRecorder::appendNumReadback(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorder17appendNumReadbackEjj(void) {
    ALOGD("_ZN17DpCommandRecorder17appendNumReadbackEjj() called");
    return 0;
}

/* Demangled: PQRSZConfig::isUREnabled(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN11PQRSZConfig11isUREnabledEb(void) {
    ALOGD("_ZN11PQRSZConfig11isUREnabledEb() called");
    return 0;
}

/* Exported Object: PQHDRAdaptor::s_ALMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN12PQHDRAdaptor9s_ALMutexE = NULL;

/* Demangled: PQDREHistogramAdaptor::~PQDREHistogramAdaptor() */
extern "C" __attribute__((visibility("default"))) int _ZN21PQDREHistogramAdaptorD2Ev(void) {
    ALOGD("_ZN21PQDREHistogramAdaptorD2Ev() called");
    return 0;
}

/* Demangled: DpPathTopology::DpPathTopology() */
extern "C" __attribute__((visibility("default"))) int _ZN14DpPathTopologyC2Ev(void) {
    ALOGD("_ZN14DpPathTopologyC2Ev() called");
    return 0;
}

/* Demangled: DpPortAdapt::bindClient(CLIENT_TYPE_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpPortAdapt10bindClientE16CLIENT_TYPE_ENUM(void) {
    ALOGD("_ZN11DpPortAdapt10bindClientE16CLIENT_TYPE_ENUM() called");
    return 0;
}

/* Demangled: DpIspStream::queueBatchSrcBuffer(DpBufferDesc*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpIspStream19queueBatchSrcBufferEP12DpBufferDescjj(void) {
    ALOGD("_ZN11DpIspStream19queueBatchSrcBufferEP12DpBufferDescjj() called");
    return 0;
}

/* Demangled: DpIonHandler::alloc_internal(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpIonHandler14alloc_internalEj(void) {
    ALOGD("_ZN12DpIonHandler14alloc_internalEj() called");
    return 0;
}

/* Demangled: DpMmuHandler::queryFeature() */
extern "C" __attribute__((visibility("default"))) int _ZN12DpMmuHandler12queryFeatureEv(void) {
    ALOGD("_ZN12DpMmuHandler12queryFeatureEv() called");
    return 0;
}

/* Demangled: PQDREAdaptor::debugDumpTileReg(DREInitParam const*, DREInitReg const*, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQDREAdaptor16debugDumpTileRegEPK12DREInitParamPK10DREInitRegjjj(void) {
    ALOGD("_ZN12PQDREAdaptor16debugDumpTileRegEPK12DREInitParamPK10DREInitRegjjj() called");
    return 0;
}

/* Demangled: tile_tdr_isp_reg_to_dump_internal(TILE_REG_MAP_STRUCT*, unsigned int*, unsigned int*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _Z33tile_tdr_isp_reg_to_dump_internalP19TILE_REG_MAP_STRUCTPjS1_ji(void) {
    ALOGD("_Z33tile_tdr_isp_reg_to_dump_internalP19TILE_REG_MAP_STRUCTPjS1_ji() called");
    return 0;
}

/* Demangled: PQSession::setCurActPosX(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession13setCurActPosXEj(void) {
    ALOGD("_ZN9PQSession13setCurActPosXEj() called");
    return 0;
}

/* Demangled: PQDSConfig::getDSConfig(DS_CONFIG_T**, int, GlobalPQParam&, bool, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10PQDSConfig11getDSConfigEPP11DS_CONFIG_TiR13GlobalPQParambi(void) {
    ALOGD("_ZN10PQDSConfig11getDSConfigEPP11DS_CONFIG_TiR13GlobalPQParambi() called");
    return 0;
}

/* Demangled: PQSessionManager::deletePQSession(PQSessionListHandle*) */
extern "C" __attribute__((visibility("default"))) int _ZN16PQSessionManager15deletePQSessionEP19PQSessionListHandle(void) {
    ALOGD("_ZN16PQSessionManager15deletePQSessionEP19PQSessionListHandle() called");
    return 0;
}

/* Demangled: PQDREAdaptor::debugDumpFrameReg(DREVPTopOutput const*, DREVPInitParam const*, DREVPInitReg const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQDREAdaptor17debugDumpFrameRegEPK14DREVPTopOutputPK14DREVPInitParamPK12DREVPInitRegj(void) {
    ALOGD("_ZN12PQDREAdaptor17debugDumpFrameRegEPK14DREVPTopOutputPK14DREVPInitParamPK12DREVPInitRegj() called");
    return 0;
}

/* Exported Object: vtable for ListPtr<DpPortAdapt> */
extern "C" __attribute__((visibility("default"))) void* _ZTV7ListPtrI11DpPortAdaptE = NULL;

/* Demangled: DpCommandQueue::getSyncMode() */
extern "C" __attribute__((visibility("default"))) int _ZN14DpCommandQueue11getSyncModeEv(void) {
    ALOGD("_ZN14DpCommandQueue11getSyncModeEv() called");
    return 0;
}

/* Exported Object: vtable for DpEngine_AAL */
extern "C" __attribute__((visibility("default"))) void* _ZTV12DpEngine_AAL = NULL;

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::sync() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv() called");
    return 0;
}

/* Demangled: PQColorConfig::translateTransitionOutput(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN13PQColorConfig25translateTransitionOutputEPv(void) {
    ALOGD("_ZN13PQColorConfig25translateTransitionOutputEPv() called");
    return 0;
}

/* Demangled: PQHDRAdaptor::onCalculateDualVideo(PQSession*, DHDRINPUT*, DHDROUTPUT*, DpConfig&, _DP_VDEC_DRV_COLORDESC_T*, _DP_VDEC_DRV_DYNAMIC_METADATA_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQHDRAdaptor20onCalculateDualVideoEP9PQSessionP9DHDRINPUTP10DHDROUTPUTR8DpConfigP24_DP_VDEC_DRV_COLORDESC_TP31_DP_VDEC_DRV_DYNAMIC_METADATA_T(void) {
    ALOGD("_ZN12PQHDRAdaptor20onCalculateDualVideoEP9PQSessionP9DHDRINPUTP10DHDROUTPUTR8DpConfigP24_DP_VDEC_DRV_COLORDESC_TP31_DP_VDEC_DRV_DYNAMIC_METADATA_T() called");
    return 0;
}

/* Demangled: DpIspStream::startStream(timeval*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpIspStream11startStreamEP7timevali(void) {
    ALOGD("_ZN11DpIspStream11startStreamEP7timevali() called");
    return 0;
}

/* Demangled: PQSession::getDCConfig(DC_CONFIG_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession11getDCConfigEP11DC_CONFIG_T(void) {
    ALOGD("_ZN9PQSession11getDCConfigEP11DC_CONFIG_T() called");
    return 0;
}

/* Demangled: PQHDRAdaptor::initCcorrInitParamIn(DHDRINPUT*, bool, DpPqParam&) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQHDRAdaptor20initCcorrInitParamInEP9DHDRINPUTbR9DpPqParam(void) {
    ALOGD("_ZN12PQHDRAdaptor20initCcorrInitParamInEP9DHDRINPUTbR9DpPqParam() called");
    return 0;
}

/* Demangled: DpBlitStream::setSrcBuffer(void**, unsigned int*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpBlitStream12setSrcBufferEPPvPjj(void) {
    ALOGD("_ZN12DpBlitStream12setSrcBufferEPPvPjj() called");
    return 0;
}

/* Exported Object: vtable for DpWrapper_WPE */
extern "C" __attribute__((visibility("default"))) void* _ZTV13DpWrapper_WPE = NULL;

/* Demangled: PQConfig::~PQConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN8PQConfigD2Ev(void) {
    ALOGD("_ZN8PQConfigD2Ev() called");
    return 0;
}

/* Demangled: PQDREHistogramAdaptor::storeDREOutput(void*, unsigned int, DRETopOutput const*) */
extern "C" __attribute__((visibility("default"))) int _ZN21PQDREHistogramAdaptor14storeDREOutputEPvjPK12DRETopOutput(void) {
    ALOGD("_ZN21PQDREHistogramAdaptor14storeDREOutputEPvjPK12DRETopOutput() called");
    return 0;
}

/* Demangled: DpEngine_TDSHP::onConfigTile(DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpEngine_TDSHP12onConfigTileER9DpCommand(void) {
    ALOGD("_ZN14DpEngine_TDSHP12onConfigTileER9DpCommand() called");
    return 0;
}

/* Exported Object: DpMmuHandler::s_IONHandle */
extern "C" __attribute__((visibility("default"))) void* _ZN12DpMmuHandler11s_IONHandleE = NULL;

/* Demangled: DpDriver::checkHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN8DpDriver11checkHandleEv(void) {
    ALOGD("_ZN8DpDriver11checkHandleEv() called");
    return 0;
}

/* Demangled: PQDREConfig::PQDREConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN11PQDREConfigC1Ev(void) {
    ALOGD("_ZN11PQDREConfigC1Ev() called");
    return 0;
}

/* Demangled: DpIonHandler::DpIonHandler(void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpIonHandlerC1EPvj(void) {
    ALOGD("_ZN12DpIonHandlerC1EPvj() called");
    return 0;
}

/* Demangled: PQIspTuning::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN11PQIspTuning15destroyInstanceEv(void) {
    ALOGD("_ZN11PQIspTuning15destroyInstanceEv() called");
    return 0;
}

/* Demangled: DpCommandRecorder::getDREReadback() */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorder14getDREReadbackEv(void) {
    ALOGD("_ZN17DpCommandRecorder14getDREReadbackEv() called");
    return 0;
}

/* Demangled: DpVEncStream::setPQParameter(int, DpPqParam const*) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpVEncStream14setPQParameterEiPK9DpPqParam(void) {
    ALOGD("_ZN12DpVEncStream14setPQParameterEiPK9DpPqParam() called");
    return 0;
}

/* Demangled: DpBufferPoolBase::dumpFenceInfo(int) */
extern "C" __attribute__((visibility("default"))) int _ZN16DpBufferPoolBase13dumpFenceInfoEi(void) {
    ALOGD("_ZN16DpBufferPoolBase13dumpFenceInfoEi() called");
    return 0;
}

/* Demangled: DpBlitStream::setDstConfig(int, int, DP_COLOR_ENUM, DpInterlaceFormat, DpRect*) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpBlitStream12setDstConfigEii13DP_COLOR_ENUM17DpInterlaceFormatP6DpRect(void) {
    ALOGD("_ZN12DpBlitStream12setDstConfigEii13DP_COLOR_ENUM17DpInterlaceFormatP6DpRect() called");
    return 0;
}

/* Demangled: DpIspStream::setSrcCrop(int, int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpIspStream10setSrcCropEiiiiiii(void) {
    ALOGD("_ZN11DpIspStream10setSrcCropEiiiiiii() called");
    return 0;
}

/* Demangled: DpCommandQueue::flush(bool, unsigned long long*, char**) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpCommandQueue5flushEbPyPPc(void) {
    ALOGD("_ZN14DpCommandQueue5flushEbPyPPc() called");
    return 0;
}

/* Exported Object: PQDCAdaptor::s_pInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN11PQDCAdaptor11s_pInstanceE = NULL;

/* Demangled: DpStream::appendNumReadback(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8DpStream17appendNumReadbackEjj(void) {
    ALOGD("_ZN8DpStream17appendNumReadbackEjj() called");
    return 0;
}

/* Exported Object: vtable for DpPathComposer */
extern "C" __attribute__((visibility("default"))) void* _ZTV14DpPathComposer = NULL;

/* Demangled: DpChannel::resetChannel() */
extern "C" __attribute__((visibility("default"))) int _ZN9DpChannel12resetChannelEv(void) {
    ALOGD("_ZN9DpChannel12resetChannelEv() called");
    return 0;
}

/* Demangled: DpPortAdapt::getParameter(void*, int*, unsigned int*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK11DpPortAdapt12getParameterEPvPiPjj(void) {
    ALOGD("_ZNK11DpPortAdapt12getParameterEPvPiPjj() called");
    return 0;
}

/* Demangled: DpPmemHandler::DpPmemHandler(void*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN13DpPmemHandlerC1EPvjj(void) {
    ALOGD("_ZN13DpPmemHandlerC1EPvjj() called");
    return 0;
}

/* Demangled: PQHDRAdaptor::setHDROutput(DHDROUTPUT*) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQHDRAdaptor12setHDROutputEP10DHDROUTPUT(void) {
    ALOGD("_ZN12PQHDRAdaptor12setHDROutputEP10DHDROUTPUT() called");
    return 0;
}

/* Demangled: DpFragStream::DpFragStream() */
extern "C" __attribute__((visibility("default"))) int _ZN12DpFragStreamC2Ev(void) {
    ALOGD("_ZN12DpFragStreamC2Ev() called");
    return 0;
}

/* Demangled: DpCommandRecorder::~DpCommandRecorder() */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorderD1Ev(void) {
    ALOGD("_ZN17DpCommandRecorderD1Ev() called");
    return 0;
}

/* Exported Object: PQSessionManager::m_CapturepreAAL1BufferId */
extern "C" __attribute__((visibility("default"))) void* _ZN16PQSessionManager24m_CapturepreAAL1BufferIdE = NULL;

/* Demangled: PQHDRConfig::getExternalPanelNits(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN11PQHDRConfig20getExternalPanelNitsEb(void) {
    ALOGD("_ZN11PQHDRConfig20getExternalPanelNitsEb() called");
    return 0;
}

/* Demangled: PQDREAdaptor::setDRETransPrefloatBuffer(DREsharedata*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQDREAdaptor25setDRETransPrefloatBufferEP12DREsharedatab(void) {
    ALOGD("_ZN12PQDREAdaptor25setDRETransPrefloatBufferEP12DREsharedatab() called");
    return 0;
}

/* Demangled: PQDREConfig::getDemoWindowX(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN11PQDREConfig14getDemoWindowXEb(void) {
    ALOGD("_ZN11PQDREConfig14getDemoWindowXEb() called");
    return 0;
}

/* Demangled: DpAutoBufferPool::acquireBuffer(int*, void**, unsigned int*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN16DpAutoBufferPool13acquireBufferEPiPPvPjb(void) {
    ALOGD("_ZN16DpAutoBufferPool13acquireBufferEPiPPvPjb() called");
    return 0;
}

/* Demangled: PQSession::setHistogram(unsigned int*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession12setHistogramEPjjj(void) {
    ALOGD("_ZN9PQSession12setHistogramEPjjj() called");
    return 0;
}

/* Demangled: DpPortAdapt::DpPortAdapt(int, DpChannel*, PORT_TYPE_ENUM, DP_COLOR_ENUM, int, int, int, int, int, bool, unsigned long long, unsigned int, bool, bool, bool, DpBufferPoolBase*, DP_PROFILE_ENUM, DpSecure, bool, DpColorMatrix const*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpPortAdaptC1EiP9DpChannel14PORT_TYPE_ENUM13DP_COLOR_ENUMiiiiibyjbbbP16DpBufferPoolBase15DP_PROFILE_ENUM8DpSecurebPK13DpColorMatrixPv(void) {
    ALOGD("_ZN11DpPortAdaptC1EiP9DpChannel14PORT_TYPE_ENUM13DP_COLOR_ENUMiiiiibyjbbbP16DpBufferPoolBase15DP_PROFILE_ENUM8DpSecurebPK13DpColorMatrixPv() called");
    return 0;
}

/* Exported Object: DpMmuHandler::s_instMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN12DpMmuHandler11s_instMutexE = NULL;

/* Demangled: DpRingBufferPool::~DpRingBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN16DpRingBufferPoolD1Ev(void) {
    ALOGD("_ZN16DpRingBufferPoolD1Ev() called");
    return 0;
}

/* Demangled: DpCommandRecorder::getReadbackValues(unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorder17getReadbackValuesERj(void) {
    ALOGD("_ZN17DpCommandRecorder17getReadbackValuesERj() called");
    return 0;
}

/* Demangled: DpEngine_VENC::onInitTileCalc(TILE_PARAM_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN13DpEngine_VENC14onInitTileCalcEP17TILE_PARAM_STRUCT(void) {
    ALOGD("_ZN13DpEngine_VENC14onInitTileCalcEP17TILE_PARAM_STRUCT() called");
    return 0;
}

/* Exported Object: vtable for DpEngine_VENC */
extern "C" __attribute__((visibility("default"))) void* _ZTV13DpEngine_VENC = NULL;

/* Demangled: PQConfig::setDebugLevel(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8PQConfig13setDebugLevelEj(void) {
    ALOGD("_ZN8PQConfig13setDebugLevelEj() called");
    return 0;
}

/* Demangled: DpStream::initialize() */
extern "C" __attribute__((visibility("default"))) int _ZN8DpStream10initializeEv(void) {
    ALOGD("_ZN8DpStream10initializeEv() called");
    return 0;
}

/* Demangled: DpVEncStream::setPortMatrix(int, DpColorMatrix*) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpVEncStream13setPortMatrixEiP13DpColorMatrix(void) {
    ALOGD("_ZN12DpVEncStream13setPortMatrixEiP13DpColorMatrix() called");
    return 0;
}

/* Demangled: PQAlgorithmFactory::getDRE(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN18PQAlgorithmFactory6getDREEj(void) {
    ALOGD("_ZN18PQAlgorithmFactory6getDREEj() called");
    return 0;
}

/* Demangled: DpIonHandler::mapSWAddressBySize(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpIonHandler18mapSWAddressBySizeEj(void) {
    ALOGD("_ZN12DpIonHandler18mapSWAddressBySizeEj() called");
    return 0;
}

/* Demangled: DpPmemHandler::mapSWAddress() */
extern "C" __attribute__((visibility("default"))) int _ZN13DpPmemHandler12mapSWAddressEv(void) {
    ALOGD("_ZN13DpPmemHandler12mapSWAddressEv() called");
    return 0;
}

/* Exported Object: SCL0Reg */
extern "C" __attribute__((visibility("default"))) void* SCL0Reg = NULL;

/* Demangled: DpEngine_SCL::onCalcRsz(DpCommand&, PQSession*, DpConfig&) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpEngine_SCL9onCalcRszER9DpCommandP9PQSessionR8DpConfig(void) {
    ALOGD("_ZN12DpEngine_SCL9onCalcRszER9DpCommandP9PQSessionR8DpConfig() called");
    return 0;
}

/* Demangled: PQSession::getColorConfig(COLOR_CONFIG_T**) */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession14getColorConfigEPP14COLOR_CONFIG_T(void) {
    ALOGD("_ZN9PQSession14getColorConfigEPP14COLOR_CONFIG_T() called");
    return 0;
}

/* Demangled: PQSession::getDREAvailable() */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession15getDREAvailableEv(void) {
    ALOGD("_ZN9PQSession15getDREAvailableEv() called");
    return 0;
}

/* Demangled: PQHDRAdaptor::getPrePipeNum(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQHDRAdaptor13getPrePipeNumEb(void) {
    ALOGD("_ZN12PQHDRAdaptor13getPrePipeNumEb() called");
    return 0;
}

/* Demangled: PQDREAdaptor::dumpFWSWReg(unsigned int, DpPqConfig*, CDREVPTopFW*, CDRETopFW*) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQDREAdaptor11dumpFWSWRegEjP10DpPqConfigP11CDREVPTopFWP9CDRETopFW(void) {
    ALOGD("_ZN12PQDREAdaptor11dumpFWSWRegEjP10DpPqConfigP11CDREVPTopFWP9CDRETopFW() called");
    return 0;
}

/* Demangled: tile_fprint_platform_config(ISP_TPIPE_CONFIG_STRUCT const*, TILE_REG_MAP_STRUCT*, char const*, char const*, char const*, char const*, char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _Z27tile_fprint_platform_configPK23ISP_TPIPE_CONFIG_STRUCTP19TILE_REG_MAP_STRUCTPKcS5_S5_S5_S5_S5_(void) {
    ALOGD("_Z27tile_fprint_platform_configPK23ISP_TPIPE_CONFIG_STRUCTP19TILE_REG_MAP_STRUCTPKcS5_S5_S5_S5_S5_() called");
    return 0;
}

/* Demangled: DpCommandRecorder::appendMeta(unsigned short, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorder10appendMetaEtjjj(void) {
    ALOGD("_ZN17DpCommandRecorder10appendMetaEtjjj() called");
    return 0;
}

/* Demangled: PQDREHistogramAdaptor::getBufferData(void*, unsigned int, unsigned int, bool*, HISTPOS*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN21PQDREHistogramAdaptor13getBufferDataEPvjjPbP7HISTPOSPj(void) {
    ALOGD("_ZN21PQDREHistogramAdaptor13getBufferDataEPvjjPbP7HISTPOSPj() called");
    return 0;
}

/* Demangled: DpEngine_TDSHP::onConfigFrame(DpCommand&, DpConfig&) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpEngine_TDSHP13onConfigFrameER9DpCommandR8DpConfig(void) {
    ALOGD("_ZN14DpEngine_TDSHP13onConfigFrameER9DpCommandR8DpConfig() called");
    return 0;
}

/* Demangled: DpCommandRecorder::setRegDstNum(int) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorder12setRegDstNumEi(void) {
    ALOGD("_ZN17DpCommandRecorder12setRegDstNumEi() called");
    return 0;
}

/* Demangled: PQAlgorithmFactory::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN18PQAlgorithmFactory11getInstanceEv(void) {
    ALOGD("_ZN18PQAlgorithmFactory11getInstanceEv() called");
    return 0;
}

/* Demangled: DpPathTopology::getEngUsages() */
extern "C" __attribute__((visibility("default"))) int _ZN14DpPathTopology12getEngUsagesEv(void) {
    ALOGD("_ZN14DpPathTopology12getEngUsagesEv() called");
    return 0;
}

/* Demangled: tile_init_isp_func_property(TILE_FUNC_BLOCK_STRUCT*, TILE_REG_MAP_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z27tile_init_isp_func_propertyP22TILE_FUNC_BLOCK_STRUCTP19TILE_REG_MAP_STRUCT(void) {
    ALOGD("_Z27tile_init_isp_func_propertyP22TILE_FUNC_BLOCK_STRUCTP19TILE_REG_MAP_STRUCT() called");
    return 0;
}

/* Demangled: DpSync::createFence(int&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6DpSync11createFenceERij(void) {
    ALOGD("_ZN6DpSync11createFenceERij() called");
    return 0;
}

/* Demangled: PQSession::_deleteDCHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession15_deleteDCHandleEv(void) {
    ALOGD("_ZN9PQSession15_deleteDCHandleEv() called");
    return 0;
}

/* Demangled: PQDCAdaptor::ADL_writeLumaCurve(DpCommand&, ADLOutput const&, int&, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN11PQDCAdaptor18ADL_writeLumaCurveER9DpCommandRK9ADLOutputRiPi(void) {
    ALOGD("_ZN11PQDCAdaptor18ADL_writeLumaCurveER9DpCommandRK9ADLOutputRiPi() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: PQDREAdaptor::debugDumpTileReg(DREVPInitParam const*, DREVPInitReg const*, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQDREAdaptor16debugDumpTileRegEPK14DREVPInitParamPK12DREVPInitRegjjj(void) {
    ALOGD("_ZN12PQDREAdaptor16debugDumpTileRegEPK14DREVPInitParamPK12DREVPInitRegjjj() called");
    return 0;
}

/* Demangled: DpPmemHandler::queryFeature() */
extern "C" __attribute__((visibility("default"))) int _ZN13DpPmemHandler12queryFeatureEv(void) {
    ALOGD("_ZN13DpPmemHandler12queryFeatureEv() called");
    return 0;
}

/* Demangled: PQIspTuning::PQIspTuning() */
extern "C" __attribute__((visibility("default"))) int _ZN11PQIspTuningC1Ev(void) {
    ALOGD("_ZN11PQIspTuningC1Ev() called");
    return 0;
}

/* Demangled: DpPathTopology::connectEdge(int, int, int (&) [25]) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpPathTopology11connectEdgeEiiRA25_i(void) {
    ALOGD("_ZN14DpPathTopology11connectEdgeEiiRA25_i() called");
    return 0;
}

/* Demangled: tile_module_sim_isp_lut_func(int*, int*, TILE_FUNC_ENABLE_STRUCT*, TILE_FUNC_BLOCK_STRUCT*, TILE_REG_MAP_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z28tile_module_sim_isp_lut_funcPiS_P23TILE_FUNC_ENABLE_STRUCTP22TILE_FUNC_BLOCK_STRUCTP19TILE_REG_MAP_STRUCT(void) {
    ALOGD("_Z28tile_module_sim_isp_lut_funcPiS_P23TILE_FUNC_ENABLE_STRUCTP22TILE_FUNC_BLOCK_STRUCTP19TILE_REG_MAP_STRUCT() called");
    return 0;
}

/* Demangled: PQDREConfig::PQDREConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN11PQDREConfigC2Ev(void) {
    ALOGD("_ZN11PQDREConfigC2Ev() called");
    return 0;
}

/* Demangled: DpStream::DpStream(STREAM_TYPE_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN8DpStreamC1E16STREAM_TYPE_ENUM(void) {
    ALOGD("_ZN8DpStreamC1E16STREAM_TYPE_ENUM() called");
    return 0;
}

/* Demangled: DpVEncStream::queueSrcBuffer(void**, unsigned int*, unsigned int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpVEncStream14queueSrcBufferEPPvPjS2_i(void) {
    ALOGD("_ZN12DpVEncStream14queueSrcBufferEPPvPjS2_i() called");
    return 0;
}

/* Demangled: DpCommandRecorder::dupLabel(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorder8dupLabelEj(void) {
    ALOGD("_ZN17DpCommandRecorder8dupLabelEj() called");
    return 0;
}

/* Demangled: DpEngine_RDMA::onAdvanceTile(DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN13DpEngine_RDMA13onAdvanceTileER9DpCommand(void) {
    ALOGD("_ZN13DpEngine_RDMA13onAdvanceTileER9DpCommand() called");
    return 0;
}

/* Demangled: DpEngine_SCL::onInitEngine(DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpEngine_SCL12onInitEngineER9DpCommand(void) {
    ALOGD("_ZN12DpEngine_SCL12onInitEngineER9DpCommand() called");
    return 0;
}

/* Demangled: PQColorConfig::PQColorConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN13PQColorConfigC1Ev(void) {
    ALOGD("_ZN13PQColorConfigC1Ev() called");
    return 0;
}

/* Exported Object: vtable for DpEngineNode<DpTileEngine> */
extern "C" __attribute__((visibility("default"))) void* _ZTV12DpEngineNodeI12DpTileEngineE = NULL;

/* Demangled: tpipe_print_platform_config(ISP_TPIPE_CONFIG_STRUCT const*) */
extern "C" __attribute__((visibility("default"))) int _Z27tpipe_print_platform_configPK23ISP_TPIPE_CONFIG_STRUCT(void) {
    ALOGD("_Z27tpipe_print_platform_configPK23ISP_TPIPE_CONFIG_STRUCT() called");
    return 0;
}

/* Demangled: tile_init_isp_func_subrdma_tdr(TILE_FUNC_SUBRDMA_STRUCT*, TILE_REG_MAP_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z30tile_init_isp_func_subrdma_tdrP24TILE_FUNC_SUBRDMA_STRUCTP19TILE_REG_MAP_STRUCT(void) {
    ALOGD("_Z30tile_init_isp_func_subrdma_tdrP24TILE_FUNC_SUBRDMA_STRUCTP19TILE_REG_MAP_STRUCT() called");
    return 0;
}

/* Demangled: PQSessionManager::destroyPQSession(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN16PQSessionManager16destroyPQSessionEj(void) {
    ALOGD("_ZN16PQSessionManager16destroyPQSessionEj() called");
    return 0;
}

/* Demangled: DpCommandQueue::read(unsigned int, unsigned int, int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpCommandQueue4readEjjPii(void) {
    ALOGD("_ZN14DpCommandQueue4readEjjPii() called");
    return 0;
}

/* Demangled: DpEngineBase::configFrame(DpCommand&, DpConfig&) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpEngineBase11configFrameER9DpCommandR8DpConfig(void) {
    ALOGD("_ZN12DpEngineBase11configFrameER9DpCommandR8DpConfig() called");
    return 0;
}

/* Exported Object: vtable for DpEngine_WPEI */
extern "C" __attribute__((visibility("default"))) void* _ZTV13DpEngine_WPEI = NULL;

/* Demangled: DpIspStream::setFlipStatus(int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpIspStream13setFlipStatusEib(void) {
    ALOGD("_ZN11DpIspStream13setFlipStatusEib() called");
    return 0;
}

/* Exported Object: IMG2O2Reg */
extern "C" __attribute__((visibility("default"))) void* IMG2O2Reg = NULL;

/* Demangled: DpAutoBufferPool::dequeueBuffer(int*, void**, unsigned int*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN16DpAutoBufferPool13dequeueBufferEPiPPvPjb(void) {
    ALOGD("_ZN16DpAutoBufferPool13dequeueBufferEPiPPvPjb() called");
    return 0;
}

/* Demangled: DpFragStream::startFrag(unsigned int*, bool, timeval*) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpFragStream9startFragEPjbP7timeval(void) {
    ALOGD("_ZN12DpFragStream9startFragEPjbP7timeval() called");
    return 0;
}

/* Demangled: DpCommandRecorder::~DpCommandRecorder() */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorderD2Ev(void) {
    ALOGD("_ZN17DpCommandRecorderD2Ev() called");
    return 0;
}

/* Demangled: PQSession::getPrePipeNum(unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession13getPrePipeNumEPj(void) {
    ALOGD("_ZN9PQSession13getPrePipeNumEPj() called");
    return 0;
}

/* Demangled: PQDCAdaptor::isADLVideoIDValid(int) */
extern "C" __attribute__((visibility("default"))) int _ZN11PQDCAdaptor17isADLVideoIDValidEi(void) {
    ALOGD("_ZN11PQDCAdaptor17isADLVideoIDValidEi() called");
    return 0;
}

/* Demangled: DpBasicBufferPool::~DpBasicBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN17DpBasicBufferPoolD0Ev(void) {
    ALOGD("_ZN17DpBasicBufferPoolD0Ev() called");
    return 0;
}

/* Demangled: DpSync::wakeup(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6DpSync6wakeupEj(void) {
    ALOGD("_ZN6DpSync6wakeupEj() called");
    return 0;
}

/* Demangled: PQDSAdaptor::tuningDSInput(DSInput*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11PQDSAdaptor13tuningDSInputEP7DSInputi(void) {
    ALOGD("_ZN11PQDSAdaptor13tuningDSInputEP7DSInputi() called");
    return 0;
}

/* Demangled: PQTuningBuffer::PQTuningBuffer(ProxyTuningBuffer) */
extern "C" __attribute__((visibility("default"))) int _ZN14PQTuningBufferC1E17ProxyTuningBuffer(void) {
    ALOGD("_ZN14PQTuningBufferC1E17ProxyTuningBuffer() called");
    return 0;
}

/* Exported Object: PQColorConfig::m_ColorTableAI */
extern "C" __attribute__((visibility("default"))) void* _ZN13PQColorConfig14m_ColorTableAIE = NULL;

/* Demangled: DpRingBufferPool::~DpRingBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN16DpRingBufferPoolD2Ev(void) {
    ALOGD("_ZN16DpRingBufferPoolD2Ev() called");
    return 0;
}

/* Demangled: PQSessionManager::getAALPrePipeNumCapture(unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN16PQSessionManager23getAALPrePipeNumCaptureEPj(void) {
    ALOGD("_ZN16PQSessionManager23getAALPrePipeNumCaptureEPj() called");
    return 0;
}

/* Demangled: PQDSAdaptor::PQDSAdaptor(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11PQDSAdaptorC1Ej(void) {
    ALOGD("_ZN11PQDSAdaptorC1Ej() called");
    return 0;
}

/* Demangled: DpEngine_COLOR::onInitEngine(DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpEngine_COLOR12onInitEngineER9DpCommand(void) {
    ALOGD("_ZN14DpEngine_COLOR12onInitEngineER9DpCommand() called");
    return 0;
}

/* Demangled: tile_for_comp_resizer(TILE_RESIZER_FORWARD_CAL_ARG_STRUCT*, TILE_FUNC_BLOCK_STRUCT*, TILE_RESIZER_BACKWARD_CAL_ARG_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z21tile_for_comp_resizerP35TILE_RESIZER_FORWARD_CAL_ARG_STRUCTP22TILE_FUNC_BLOCK_STRUCTP36TILE_RESIZER_BACKWARD_CAL_ARG_STRUCT(void) {
    ALOGD("_Z21tile_for_comp_resizerP35TILE_RESIZER_FORWARD_CAL_ARG_STRUCTP22TILE_FUNC_BLOCK_STRUCTP36TILE_RESIZER_BACKWARD_CAL_ARG_STRUCT() called");
    return 0;
}

/* Demangled: DpIspStream::setSrcCrop(int, int, int, int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpIspStream10setSrcCropEiiiiiiiii(void) {
    ALOGD("_ZN11DpIspStream10setSrcCropEiiiiiiiii() called");
    return 0;
}

/* Demangled: DpTilePath::onConfigTile(DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN10DpTilePath12onConfigTileER9DpCommand(void) {
    ALOGD("_ZN10DpTilePath12onConfigTileER9DpCommand() called");
    return 0;
}

/* Demangled: PQSession::removeUselessHDRWaitHistListNode(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession32removeUselessHDRWaitHistListNodeEj(void) {
    ALOGD("_ZN9PQSession32removeUselessHDRWaitHistListNodeEj() called");
    return 0;
}

/* Demangled: PQAlgorithmAdaptor::PQAlgorithmAdaptor(ProxyTuningBuffer, ProxyTuningBuffer, ProxyTuningBuffer) */
extern "C" __attribute__((visibility("default"))) int _ZN18PQAlgorithmAdaptorC2E17ProxyTuningBufferS0_S0_(void) {
    ALOGD("_ZN18PQAlgorithmAdaptorC2E17ProxyTuningBufferS0_S0_() called");
    return 0;
}

/* Demangled: backward_cub_acc(int, int, int, int, int, int, int, int, int, int&, int&) */
extern "C" __attribute__((visibility("default"))) int _Z16backward_cub_acciiiiiiiiiRiS_(void) {
    ALOGD("_Z16backward_cub_acciiiiiiiiiRiS_() called");
    return 0;
}

/* Demangled: DpPathControl::DpPathControl(DpStream*) */
extern "C" __attribute__((visibility("default"))) int _ZN13DpPathControlC2EP8DpStream(void) {
    ALOGD("_ZN13DpPathControlC2EP8DpStream() called");
    return 0;
}

/* Demangled: DpPortAdapt::dumpDebugInfo(CLIENT_TYPE_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpPortAdapt13dumpDebugInfoE16CLIENT_TYPE_ENUM(void) {
    ALOGD("_ZN11DpPortAdapt13dumpDebugInfoE16CLIENT_TYPE_ENUM() called");
    return 0;
}

/* Demangled: DpPortAdapt::getTargetROI(int*, int*, int*, int*, int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK11DpPortAdapt12getTargetROIEPiS0_S0_S0_S0_(void) {
    ALOGD("_ZNK11DpPortAdapt12getTargetROIEPiS0_S0_S0_S0_() called");
    return 0;
}

/* Exported Object: vtable for DpEngine_WPEO */
extern "C" __attribute__((visibility("default"))) void* _ZTV13DpEngine_WPEO = NULL;

/* Demangled: DpRingBufferPool::getHWBaseWithID(int, int, unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN16DpRingBufferPool15getHWBaseWithIDEiiPjS0_(void) {
    ALOGD("_ZN16DpRingBufferPool15getHWBaseWithIDEiiPjS0_() called");
    return 0;
}

/* Demangled: PQSessionManager::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN16PQSessionManager11getInstanceEv(void) {
    ALOGD("_ZN16PQSessionManager11getInstanceEv() called");
    return 0;
}

/* Demangled: utilWriteBMP(char const*, void*, void*, void*, DP_COLOR_ENUM, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z12utilWriteBMPPKcPvS1_S1_13DP_COLOR_ENUMiiii(void) {
    ALOGD("_Z12utilWriteBMPPKcPvS1_S1_13DP_COLOR_ENUMiiii() called");
    return 0;
}

/* Demangled: PQDREAdaptor::writeBlock(DpCommand&, DRETopOutput const*, unsigned int, unsigned int, unsigned int, unsigned int, int*, int&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQDREAdaptor10writeBlockER9DpCommandPK12DRETopOutputjjjjPiRib(void) {
    ALOGD("_ZN12PQDREAdaptor10writeBlockER9DpCommandPK12DRETopOutputjjjjPiRib() called");
    return 0;
}

/* Demangled: tile_tdr_isp_mask_to_dump_internal_bld(TILE_REG_MAP_STRUCT*, unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z38tile_tdr_isp_mask_to_dump_internal_bldP19TILE_REG_MAP_STRUCTPjS1_(void) {
    ALOGD("_Z38tile_tdr_isp_mask_to_dump_internal_bldP19TILE_REG_MAP_STRUCTPjS1_() called");
    return 0;
}

/* Demangled: DpIspStream::queueSrcBuffer(int, unsigned int*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpIspStream14queueSrcBufferEiPjj(void) {
    ALOGD("_ZN11DpIspStream14queueSrcBufferEiPjj() called");
    return 0;
}

/* Demangled: PQSessionManager::PQSessionManager() */
extern "C" __attribute__((visibility("default"))) int _ZN16PQSessionManagerC1Ev(void) {
    ALOGD("_ZN16PQSessionManagerC1Ev() called");
    return 0;
}

/* Demangled: PQDREHistogramAdaptor::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN21PQDREHistogramAdaptor15destroyInstanceEv(void) {
    ALOGD("_ZN21PQDREHistogramAdaptor15destroyInstanceEv() called");
    return 0;
}

/* Demangled: DpCommand::Factory(DpPathBase*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DpCommand7FactoryEP10DpPathBasej(void) {
    ALOGD("_ZN9DpCommand7FactoryEP10DpPathBasej() called");
    return 0;
}

/* Demangled: PQSessionManager::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN16PQSessionManager15destroyInstanceEv(void) {
    ALOGD("_ZN16PQSessionManager15destroyInstanceEv() called");
    return 0;
}

/* Demangled: PQDREHistogramAdaptor::getDREBlock(unsigned int*, int, int, int, int, DRETopInput*) */
extern "C" __attribute__((visibility("default"))) int _ZN21PQDREHistogramAdaptor11getDREBlockEPjiiiiP11DRETopInput(void) {
    ALOGD("_ZN21PQDREHistogramAdaptor11getDREBlockEPjiiiiP11DRETopInput() called");
    return 0;
}

/* Demangled: DpBufferPoolBase::getHWBaseWithID(int, int, unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN16DpBufferPoolBase15getHWBaseWithIDEiiPjS0_(void) {
    ALOGD("_ZN16DpBufferPoolBase15getHWBaseWithIDEiiPjS0_() called");
    return 0;
}

/* Demangled: dpProfilerResetInfo() */
extern "C" __attribute__((visibility("default"))) int _Z19dpProfilerResetInfov(void) {
    ALOGD("_Z19dpProfilerResetInfov() called");
    return 0;
}

/* Demangled: PQIspTuning::PQIspTuning() */
extern "C" __attribute__((visibility("default"))) int _ZN11PQIspTuningC2Ev(void) {
    ALOGD("_ZN11PQIspTuningC2Ev() called");
    return 0;
}

/* Demangled: PQRSZAdaptor::dumpFwRegInFw(DpPqParam*, RszInput*, RszOutput*, RszReg*, PQSession*) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQRSZAdaptor13dumpFwRegInFwEP9DpPqParamP8RszInputP9RszOutputP6RszRegP9PQSession(void) {
    ALOGD("_ZN12PQRSZAdaptor13dumpFwRegInFwEP9DpPqParamP8RszInputP9RszOutputP6RszRegP9PQSession() called");
    return 0;
}

/* Demangled: PQDREAdaptor::sramWrite(DpCommand&, unsigned int, unsigned int, int*, int&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQDREAdaptor9sramWriteER9DpCommandjjPiRib(void) {
    ALOGD("_ZN12PQDREAdaptor9sramWriteER9DpCommandjjPiRib() called");
    return 0;
}

/* Exported Object: CAMIN2Reg */
extern "C" __attribute__((visibility("default"))) void* CAMIN2Reg = NULL;

/* Demangled: DpVEncStream::queueSrcBuffer(void**, unsigned int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12DpVEncStream14queueSrcBufferEPPvPji(void) {
    ALOGD("_ZN12DpVEncStream14queueSrcBufferEPPvPji() called");
    return 0;
}

/* Exported Object: vtable for DpTileEngine */
extern "C" __attribute__((visibility("default"))) void* _ZTV12DpTileEngine = NULL;

/* Demangled: PQSession::setDREAvailable(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession15setDREAvailableEj(void) {
    ALOGD("_ZN9PQSession15setDREAvailableEj() called");
    return 0;
}

/* Demangled: PQAlgorithmFactory::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN18PQAlgorithmFactory15destroyInstanceEv(void) {
    ALOGD("_ZN18PQAlgorithmFactory15destroyInstanceEv() called");
    return 0;
}

/* Demangled: DpIspStream::stopStream() */
extern "C" __attribute__((visibility("default"))) int _ZN11DpIspStream10stopStreamEv(void) {
    ALOGD("_ZN11DpIspStream10stopStreamEv() called");
    return 0;
}

/* Demangled: PQColorConfig::PQColorConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN13PQColorConfigC2Ev(void) {
    ALOGD("_ZN13PQColorConfigC2Ev() called");
    return 0;
}

/* Demangled: DpCommandRecorder::getMdpPmqos() */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorder11getMdpPmqosEv(void) {
    ALOGD("_ZN17DpCommandRecorder11getMdpPmqosEv() called");
    return 0;
}

/* Exported Object: vtable for DpEngine_WROT */
extern "C" __attribute__((visibility("default"))) void* _ZTV13DpEngine_WROT = NULL;

/* Demangled: PQAlgorithmFactory::getRSZ(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN18PQAlgorithmFactory6getRSZEj(void) {
    ALOGD("_ZN18PQAlgorithmFactory6getRSZEj() called");
    return 0;
}

/* Demangled: tile_lut_isp_func_support(int*, TILE_FUNC_BLOCK_STRUCT*, TILE_REG_MAP_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z25tile_lut_isp_func_supportPiP22TILE_FUNC_BLOCK_STRUCTP19TILE_REG_MAP_STRUCT(void) {
    ALOGD("_Z25tile_lut_isp_func_supportPiP22TILE_FUNC_BLOCK_STRUCTP19TILE_REG_MAP_STRUCT() called");
    return 0;
}

/* Demangled: DpCommandRecorder::setNumReadbackPABuffer(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorder22setNumReadbackPABufferEjj(void) {
    ALOGD("_ZN17DpCommandRecorder22setNumReadbackPABufferEjj() called");
    return 0;
}

/* Demangled: tile_get_current_file_name(char const*) */
extern "C" __attribute__((visibility("default"))) int _Z26tile_get_current_file_namePKc(void) {
    ALOGD("_Z26tile_get_current_file_namePKc() called");
    return 0;
}

/* Demangled: DpPathTopology::getWeight(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpPathTopology9getWeightEii(void) {
    ALOGD("_ZN14DpPathTopology9getWeightEii() called");
    return 0;
}

/* Demangled: DpCommandRecorder::DpCommandRecorder(DpPathBase*) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorderC2EP10DpPathBase(void) {
    ALOGD("_ZN17DpCommandRecorderC2EP10DpPathBase() called");
    return 0;
}

/* Demangled: PQAlgorithmAdaptor::PQAlgorithmAdaptor(ProxyTuningBuffer, ProxyTuningBuffer, ProxyTuningBuffer) */
extern "C" __attribute__((visibility("default"))) int _ZN18PQAlgorithmAdaptorC1E17ProxyTuningBufferS0_S0_(void) {
    ALOGD("_ZN18PQAlgorithmAdaptorC1E17ProxyTuningBufferS0_S0_() called");
    return 0;
}

/* Demangled: PQDREAdaptor::initDREFWparam(int, DpPqConfig*, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12PQDREAdaptor14initDREFWparamEiP10DpPqConfigiiii(void) {
    ALOGD("_ZN12PQDREAdaptor14initDREFWparamEiP10DpPqConfigiiii() called");
    return 0;
}

/* Demangled: DpEngineBase::onGetEngineName() */
extern "C" __attribute__((visibility("default"))) int _ZN12DpEngineBase15onGetEngineNameEv(void) {
    ALOGD("_ZN12DpEngineBase15onGetEngineNameEv() called");
    return 0;
}

/* Demangled: DpChannel::setTargetROI(int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DpChannel12setTargetROIEiiiiii(void) {
    ALOGD("_ZN9DpChannel12setTargetROIEiiiiii() called");
    return 0;
}

/* Demangled: DpIspStream::setCallback(void (*)(void*), void*) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpIspStream11setCallbackEPFvPvES0_(void) {
    ALOGD("_ZN11DpIspStream11setCallbackEPFvPvES0_() called");
    return 0;
}

/* Demangled: DpIspStream::queueSrcBuffer(void*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11DpIspStream14queueSrcBufferEPvjj(void) {
    ALOGD("_ZN11DpIspStream14queueSrcBufferEPvjj() called");
    return 0;
}

/* Demangled: DpCommandRecorder::dumpRegister(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorder12dumpRegisterEy(void) {
    ALOGD("_ZN17DpCommandRecorder12dumpRegisterEy() called");
    return 0;
}

/* Demangled: PQHDRAdaptor::~PQHDRAdaptor() */
extern "C" __attribute__((visibility("default"))) int _ZN12PQHDRAdaptorD1Ev(void) {
    ALOGD("_ZN12PQHDRAdaptorD1Ev() called");
    return 0;
}

/* Demangled: DpEngine_TDSHP::onRetrieveFrameParam(TILE_PARAM_STRUCT*, DpCommand&) */
extern "C" __attribute__((visibility("default"))) int _ZN14DpEngine_TDSHP20onRetrieveFrameParamEP17TILE_PARAM_STRUCTR9DpCommand(void) {
    ALOGD("_ZN14DpEngine_TDSHP20onRetrieveFrameParamEP17TILE_PARAM_STRUCTR9DpCommand() called");
    return 0;
}

/* Demangled: tile_tdr_isp_dump_inv_reg_wpe(TILE_REG_MAP_STRUCT*, TILE_REG_MAP_STRUCT*, int, unsigned int*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z29tile_tdr_isp_dump_inv_reg_wpeP19TILE_REG_MAP_STRUCTS0_iPjjj(void) {
    ALOGD("_Z29tile_tdr_isp_dump_inv_reg_wpeP19TILE_REG_MAP_STRUCTS0_iPjjj() called");
    return 0;
}

/* Demangled: DpBasicBufferPool::~DpBasicBufferPool() */
extern "C" __attribute__((visibility("default"))) int _ZN17DpBasicBufferPoolD1Ev(void) {
    ALOGD("_ZN17DpBasicBufferPoolD1Ev() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream::setSrcConfig(int, int, int, int, DP_COLOR_ENUM, DP_PROFILE_ENUM, DpInterlaceFormat, DpSecure, bool, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN17DpAsyncBlitStream12setSrcConfigEiiii13DP_COLOR_ENUM15DP_PROFILE_ENUM17DpInterlaceFormat8DpSecurebj(void) {
    ALOGD("_ZN17DpAsyncBlitStream12setSrcConfigEiiii13DP_COLOR_ENUM15DP_PROFILE_ENUM17DpInterlaceFormat8DpSecurebj() called");
    return 0;
}

/* Demangled: DpBlitStream::~DpBlitStream() */
extern "C" __attribute__((visibility("default"))) int _ZN12DpBlitStreamD1Ev(void) {
    ALOGD("_ZN12DpBlitStreamD1Ev() called");
    return 0;
}

/* Demangled: PQSession::PQSession(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSessionC1Ey(void) {
    ALOGD("_ZN9PQSessionC1Ey() called");
    return 0;
}

/* Demangled: DpAsyncBlitStream::getPqID() */
extern "C" __attribute__((visibility("default"))) int _ZN17DpAsyncBlitStream7getPqIDEv(void) {
    ALOGD("_ZN17DpAsyncBlitStream7getPqIDEv() called");
    return 0;
}

/* Demangled: DpCommandRecorder::swapRecord() */
extern "C" __attribute__((visibility("default"))) int _ZN17DpCommandRecorder10swapRecordEv(void) {
    ALOGD("_ZN17DpCommandRecorder10swapRecordEv() called");
    return 0;
}

/* Demangled: PQSession::getDCWaitHistListSize() */
extern "C" __attribute__((visibility("default"))) int _ZN9PQSession21getDCWaitHistListSizeEv(void) {
    ALOGD("_ZN9PQSession21getDCWaitHistListSizeEv() called");
    return 0;
}

/* Demangled: PQDSAdaptor::PQDSAdaptor(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11PQDSAdaptorC2Ej(void) {
    ALOGD("_ZN11PQDSAdaptorC2Ej() called");
    return 0;
}

/* Demangled: PQAshmem::PQAshmem() */
extern "C" __attribute__((visibility("default"))) int _ZN8PQAshmemC1Ev(void) {
    ALOGD("_ZN8PQAshmemC1Ev() called");
    return 0;
}
