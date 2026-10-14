/*
 * Reverse-Engineered Source for: libimsma_rtp.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libimsma_rtp"

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
#include "libimsma_rtp.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::RTPController::onSendGenericNack(android::sp<android::ABuffer>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPController17onSendGenericNackENS_2spINS_7ABufferEEE(void) {
    ALOGD("_ZN7android13RTPController17onSendGenericNackENS_2spINS_7ABufferEEE() called");
    return 0;
}

/* Demangled: android::sp<android::AMessage>::operator=(android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_8AMessageEEaSERKS2_(void) {
    ALOGD("_ZN7android2spINS_8AMessageEEaSERKS2_() called");
    return 0;
}

/* Demangled: android::RTPController::startRtcpTimer() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPController14startRtcpTimerEv(void) {
    ALOGD("_ZN7android13RTPController14startRtcpTimerEv() called");
    return 0;
}

/* Demangled: imsma::AVCAssembler::AVCAssembler(android::sp<android::AMessage>) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma12AVCAssemblerC1EN7android2spINS1_8AMessageEEE(void) {
    ALOGD("_ZN5imsma12AVCAssemblerC1EN7android2spINS1_8AMessageEEE() called");
    return 0;
}

/* Demangled: imsma::HEVCAssembler::addSingleNALUnit(android::sp<android::ABuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma13HEVCAssembler16addSingleNALUnitERKN7android2spINS1_7ABufferEEE(void) {
    ALOGD("_ZN5imsma13HEVCAssembler16addSingleNALUnitERKN7android2spINS1_7ABufferEEE() called");
    return 0;
}

/* Exported Object: android::IRTPController::opID */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14IRTPController4opIDE = NULL;

/* Demangled: imsma::RTPReceiver::copyConfigParams(android::rtp_rtcp_config_t*, android::rtp_rtcp_config_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma11RTPReceiver16copyConfigParamsEPN7android17rtp_rtcp_config_tES3_(void) {
    ALOGD("_ZN5imsma11RTPReceiver16copyConfigParamsEPN7android17rtp_rtcp_config_tES3_() called");
    return 0;
}

/* Demangled: imsma::AVCAssembler::AVCAssembler(android::sp<android::AMessage>) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma12AVCAssemblerC2EN7android2spINS1_8AMessageEEE(void) {
    ALOGD("_ZN5imsma12AVCAssemblerC2EN7android2spINS1_8AMessageEEE() called");
    return 0;
}

/* Demangled: imsma::HEVCAssembler::~HEVCAssembler() */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma13HEVCAssemblerD1Ev(void) {
    ALOGD("_ZN5imsma13HEVCAssemblerD1Ev() called");
    return 0;
}

/* Demangled: imsma::RTPReceiver::~RTPReceiver() */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma11RTPReceiverD0Ev(void) {
    ALOGD("_ZN5imsma11RTPReceiverD0Ev() called");
    return 0;
}

/* Demangled: imsma::RTPAssembler::RTPAssembler() */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma12RTPAssemblerC2Ev(void) {
    ALOGD("_ZN5imsma12RTPAssemblerC2Ev() called");
    return 0;
}

/* Demangled: imsma::HEVCAssembler::assembleToNAL(android::sp<imsma::HEVCAssembler::NALFragMentsInfo>) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma13HEVCAssembler13assembleToNALEN7android2spINS0_16NALFragMentsInfoEEE(void) {
    ALOGD("_ZN5imsma13HEVCAssembler13assembleToNALEN7android2spINS0_16NALFragMentsInfoEEE() called");
    return 0;
}

/* Demangled: android::RTPController::checkAndAddFB(unsigned int, long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPController13checkAndAddFBEjl(void) {
    ALOGD("_ZN7android13RTPController13checkAndAddFBEjl() called");
    return 0;
}

/* Demangled: android::RTPController::calculateNextInterval() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPController21calculateNextIntervalEv(void) {
    ALOGD("_ZN7android13RTPController21calculateNextIntervalEv() called");
    return 0;
}

/* Demangled: imsma::RTPSender::onStart() */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSender7onStartEv(void) {
    ALOGD("_ZN5imsma9RTPSender7onStartEv() called");
    return 0;
}

/* Demangled: imsma::HEVCAssembler::submitAccessUnit(android::sp<android::ABuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma13HEVCAssembler16submitAccessUnitERKN7android2spINS1_7ABufferEEE(void) {
    ALOGD("_ZN5imsma13HEVCAssembler16submitAccessUnitERKN7android2spINS1_7ABufferEEE() called");
    return 0;
}

/* Demangled: virtual thunk to android::RTPController::~RTPController() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7android13RTPControllerD0Ev(void) {
    ALOGD("_ZTv0_n24_N7android13RTPControllerD0Ev() called");
    return 0;
}

/* Demangled: imsma::RTPSender::onSetConfigParams(android::rtp_rtcp_config_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSender17onSetConfigParamsEPN7android17rtp_rtcp_config_tE(void) {
    ALOGD("_ZN5imsma9RTPSender17onSetConfigParamsEPN7android17rtp_rtcp_config_tE() called");
    return 0;
}

/* Demangled: imsma::RTPReceiver::postTimeUpdate(unsigned int, unsigned long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma11RTPReceiver14postTimeUpdateEjmi(void) {
    ALOGD("_ZN5imsma11RTPReceiver14postTimeUpdateEjmi() called");
    return 0;
}

/* Demangled: android::IRTPController::~IRTPController() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14IRTPControllerD2Ev(void) {
    ALOGD("_ZN7android14IRTPControllerD2Ev() called");
    return 0;
}

/* Demangled: android::RTPController::stopRtcpTimer() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPController13stopRtcpTimerEv(void) {
    ALOGD("_ZN7android13RTPController13stopRtcpTimerEv() called");
    return 0;
}

/* Demangled: imsma::RTPSource::~RTPSource() */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSourceD0Ev(void) {
    ALOGD("_ZN5imsma9RTPSourceD0Ev() called");
    return 0;
}

/* Demangled: android::RTPController::onReceiveTMMBN(android::sp<android::ABuffer>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPController14onReceiveTMMBNENS_2spINS_7ABufferEEE(void) {
    ALOGD("_ZN7android13RTPController14onReceiveTMMBNENS_2spINS_7ABufferEEE() called");
    return 0;
}

/* Demangled: imsma::RTPSender::~RTPSender() */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSenderD2Ev(void) {
    ALOGD("_ZN5imsma9RTPSenderD2Ev() called");
    return 0;
}

/* Demangled: imsma::RTPSender::recordSignal() */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSender12recordSignalEv(void) {
    ALOGD("_ZN5imsma9RTPSender12recordSignalEv() called");
    return 0;
}

/* Demangled: imsma::RTPSender::updateEncBitRate(android::sp<android::ABuffer>) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSender16updateEncBitRateEN7android2spINS1_7ABufferEEE(void) {
    ALOGD("_ZN5imsma9RTPSender16updateEncBitRateEN7android2spINS1_7ABufferEEE() called");
    return 0;
}

/* Exported Object: vtable for android::List<android::rtp_rtcp_capability_t*> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android4ListIPNS_21rtp_rtcp_capability_tEEE = NULL;

/* Demangled: virtual thunk to android::IRTPController::~IRTPController() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7android14IRTPControllerD0Ev(void) {
    ALOGD("_ZTv0_n24_N7android14IRTPControllerD0Ev() called");
    return 0;
}

/* Demangled: imsma::RTPSender::processTMMBR(android::sp<android::ABuffer>) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSender12processTMMBREN7android2spINS1_7ABufferEEE(void) {
    ALOGD("_ZN5imsma9RTPSender12processTMMBREN7android2spINS1_7ABufferEEE() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<android::ABuffer> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spINS_7ABufferEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spINS_7ABufferEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: imsma::RTPSource::flushQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSource10flushQueueEv(void) {
    ALOGD("_ZN5imsma9RTPSource10flushQueueEv() called");
    return 0;
}

/* Demangled: imsma::HEVCAssembler::assembleMore(android::sp<imsma::RTPSource>) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma13HEVCAssembler12assembleMoreEN7android2spINS_9RTPSourceEEE(void) {
    ALOGD("_ZN5imsma13HEVCAssembler12assembleMoreEN7android2spINS_9RTPSourceEEE() called");
    return 0;
}

/* Demangled: imsma::RTPSource::stop() */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSource4stopEv(void) {
    ALOGD("_ZN5imsma9RTPSource4stopEv() called");
    return 0;
}

/* Demangled: imsma::RTPSender::setConfigParams(android::rtp_rtcp_config_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSender15setConfigParamsEPN7android17rtp_rtcp_config_tE(void) {
    ALOGD("_ZN5imsma9RTPSender15setConfigParamsEPN7android17rtp_rtcp_config_tE() called");
    return 0;
}

/* Demangled: imsma::RTPReceiver::addStream(android::rtp_rtcp_config_t*, android::sp<SocketWrapper>, android::sp<android::AMessage>, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma11RTPReceiver9addStreamEPN7android17rtp_rtcp_config_tENS1_2spI13SocketWrapperEENS4_INS1_8AMessageEEEi(void) {
    ALOGD("_ZN5imsma11RTPReceiver9addStreamEPN7android17rtp_rtcp_config_tENS1_2spI13SocketWrapperEENS4_INS1_8AMessageEEEi() called");
    return 0;
}

/* Demangled: imsma::RTPSource::processTMMBN(android::sp<android::ABuffer>) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSource12processTMMBNEN7android2spINS1_7ABufferEEE(void) {
    ALOGD("_ZN5imsma9RTPSource12processTMMBNEN7android2spINS1_7ABufferEEE() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<android::ABuffer> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spINS_7ABufferEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spINS_7ABufferEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: imsma::HEVCAssembler::addFragmentedNALUnit(android::List<android::sp<android::ABuffer> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma13HEVCAssembler20addFragmentedNALUnitEPN7android4ListINS1_2spINS1_7ABufferEEEEE(void) {
    ALOGD("_ZN5imsma13HEVCAssembler20addFragmentedNALUnitEPN7android4ListINS1_2spINS1_7ABufferEEEEE() called");
    return 0;
}

/* Demangled: android::RTPController::onMessageReceived(android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPController17onMessageReceivedERKNS_2spINS_8AMessageEEE(void) {
    ALOGD("_ZN7android13RTPController17onMessageReceivedERKNS_2spINS_8AMessageEEE() called");
    return 0;
}

/* Demangled: android::RTPController::setHandoverState(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPController16setHandoverStateEi(void) {
    ALOGD("_ZN7android13RTPController16setHandoverStateEi() called");
    return 0;
}

/* Demangled: imsma::RTPReceiver::onStop(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma11RTPReceiver6onStopEi(void) {
    ALOGD("_ZN5imsma11RTPReceiver6onStopEi() called");
    return 0;
}

/* Demangled: imsma::RTPAssembler::onPacketReceived(android::sp<imsma::RTPSource> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma12RTPAssembler16onPacketReceivedERKN7android2spINS_9RTPSourceEEE(void) {
    ALOGD("_ZN5imsma12RTPAssembler16onPacketReceivedERKN7android2spINS_9RTPSourceEEE() called");
    return 0;
}

/* Demangled: android::sp<imsma::HEVCAssembler::NALFragMentsInfo>::operator=(imsma::HEVCAssembler::NALFragMentsInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5imsma13HEVCAssembler16NALFragMentsInfoEEaSEPS3_(void) {
    ALOGD("_ZN7android2spIN5imsma13HEVCAssembler16NALFragMentsInfoEEaSEPS3_() called");
    return 0;
}

/* Demangled: android::IRTPController::createRTPController(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14IRTPController19createRTPControllerEj(void) {
    ALOGD("_ZN7android14IRTPController19createRTPControllerEj() called");
    return 0;
}

/* Demangled: imsma::RTPSender::queueSingleNALUnitPacket(android::sp<android::ABuffer>) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSender24queueSingleNALUnitPacketEN7android2spINS1_7ABufferEEE(void) {
    ALOGD("_ZN5imsma9RTPSender24queueSingleNALUnitPacketEN7android2spINS1_7ABufferEEE() called");
    return 0;
}

/* Demangled: imsma::RTPSender::postSendRTPMessage() */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSender18postSendRTPMessageEv(void) {
    ALOGD("_ZN5imsma9RTPSender18postSendRTPMessageEv() called");
    return 0;
}

/* Demangled: imsma::AVCAssembler::assembleToNAL(android::sp<imsma::AVCAssembler::NALFragMentsInfo>) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma12AVCAssembler13assembleToNALEN7android2spINS0_16NALFragMentsInfoEEE(void) {
    ALOGD("_ZN5imsma12AVCAssembler13assembleToNALEN7android2spINS0_16NALFragMentsInfoEEE() called");
    return 0;
}

/* Demangled: imsma::RTPSender::setVideoOrientation(unsigned char, unsigned char, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSender19setVideoOrientationEhhh(void) {
    ALOGD("_ZN5imsma9RTPSender19setVideoOrientationEhhh() called");
    return 0;
}

/* Demangled: imsma::RTPSender::queueFragmentNALUnitPacket(android::sp<android::ABuffer>, unsigned long, unsigned char const*, unsigned long, android::sp<android::ABuffer>&, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSender26queueFragmentNALUnitPacketEN7android2spINS1_7ABufferEEEmPKhmRS4_Pi(void) {
    ALOGD("_ZN5imsma9RTPSender26queueFragmentNALUnitPacketEN7android2spINS1_7ABufferEEEmPKhmRS4_Pi() called");
    return 0;
}

/* Exported Object: vtable for imsma::RTPSource */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5imsma9RTPSourceE = NULL;

/* Demangled: imsma::AVCAssembler::isKeyFrame(android::sp<android::ABuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma12AVCAssembler10isKeyFrameERKN7android2spINS1_7ABufferEEE(void) {
    ALOGD("_ZN5imsma12AVCAssembler10isKeyFrameERKN7android2spINS1_7ABufferEEE() called");
    return 0;
}

/* Exported Object: vtable for imsma::HEVCAssembler::NALFragMentsInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5imsma13HEVCAssembler16NALFragMentsInfoE = NULL;

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjjEEEE = NULL;

/* Demangled: android::RTPController::addSLI(android::sp<android::ABuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPController6addSLIERKNS_2spINS_7ABufferEEE(void) {
    ALOGD("_ZN7android13RTPController6addSLIERKNS_2spINS_7ABufferEEE() called");
    return 0;
}

/* Demangled: imsma::RTPSender::onProcessGenericNACK(android::sp<android::ABuffer>) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSender20onProcessGenericNACKEN7android2spINS1_7ABufferEEE(void) {
    ALOGD("_ZN5imsma9RTPSender20onProcessGenericNACKEN7android2spINS1_7ABufferEEE() called");
    return 0;
}

/* Demangled: imsma::HEVCAssembler::packetLostRegister() */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma13HEVCAssembler18packetLostRegisterEv(void) {
    ALOGD("_ZN5imsma13HEVCAssembler18packetLostRegisterEv() called");
    return 0;
}

/* Exported Object: vtable for imsma::AVCAssembler::NALFragMentsInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5imsma12AVCAssembler16NALFragMentsInfoE = NULL;

/* Demangled: imsma::HEVCAssembler::~HEVCAssembler() */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma13HEVCAssemblerD0Ev(void) {
    ALOGD("_ZN5imsma13HEVCAssemblerD0Ev() called");
    return 0;
}

/* Demangled: imsma::RTPSender::processFIR(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSender10processFIREh(void) {
    ALOGD("_ZN5imsma9RTPSender10processFIREh() called");
    return 0;
}

/* Demangled: imsma::RTPSender::addRTPFixHeader(android::sp<android::ABuffer>) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSender15addRTPFixHeaderEN7android2spINS1_7ABufferEEE(void) {
    ALOGD("_ZN5imsma9RTPSender15addRTPFixHeaderEN7android2spINS1_7ABufferEEE() called");
    return 0;
}

/* Demangled: imsma::RTPSource::start() */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSource5startEv(void) {
    ALOGD("_ZN5imsma9RTPSource5startEv() called");
    return 0;
}

/* Exported Object: vtable for android::AHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8AHandlerE = NULL;

/* Demangled: android::Vector<android::sp<imsma::RTPReceiver::TrackInfo> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5imsma11RTPReceiver9TrackInfoEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5imsma11RTPReceiver9TrackInfoEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: imsma::RTPSource::updateStatisticInfo(android::sp<android::ABuffer>) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSource19updateStatisticInfoEN7android2spINS1_7ABufferEEE(void) {
    ALOGD("_ZN5imsma9RTPSource19updateStatisticInfoEN7android2spINS1_7ABufferEEE() called");
    return 0;
}

/* Demangled: imsma::RTPSource::calculateArrivalJitter(android::sp<android::ABuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSource22calculateArrivalJitterERKN7android2spINS1_7ABufferEEE(void) {
    ALOGD("_ZN5imsma9RTPSource22calculateArrivalJitterERKN7android2spINS1_7ABufferEEE() called");
    return 0;
}

/* Demangled: android::IRTPController::getCapability(unsigned char, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14IRTPController13getCapabilityEhj(void) {
    ALOGD("_ZN7android14IRTPController13getCapabilityEhj() called");
    return 0;
}

/* Demangled: android::IRTPController::IRTPController() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14IRTPControllerC2Ev(void) {
    ALOGD("_ZN7android14IRTPControllerC2Ev() called");
    return 0;
}

/* Demangled: android::sp<SocketWrapper>::operator=(SocketWrapper*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spI13SocketWrapperEaSEPS1_(void) {
    ALOGD("_ZN7android2spI13SocketWrapperEaSEPS1_() called");
    return 0;
}

/* Demangled: imsma::RTPSender::updateSSRC(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSender10updateSSRCEj(void) {
    ALOGD("_ZN5imsma9RTPSender10updateSSRCEj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<android::sp<imsma::RTPReceiver::TrackInfo> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_2spIN5imsma11RTPReceiver9TrackInfoEEEEE = NULL;

/* Demangled: imsma::RTPSource::RTPSource(unsigned int, android::rtp_rtcp_config_t*, int, android::sp<android::AMessage>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSourceC2EjPN7android17rtp_rtcp_config_tEiRNS1_2spINS1_8AMessageEEE(void) {
    ALOGD("_ZN5imsma9RTPSourceC2EjPN7android17rtp_rtcp_config_tEiRNS1_2spINS1_8AMessageEEE() called");
    return 0;
}

/* Demangled: imsma::AVCAssembler::assembleMore(android::sp<imsma::RTPSource>) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma12AVCAssembler12assembleMoreEN7android2spINS_9RTPSourceEEE(void) {
    ALOGD("_ZN5imsma12AVCAssembler12assembleMoreEN7android2spINS_9RTPSourceEEE() called");
    return 0;
}

/* Demangled: imsma::RTPSender::queueFragmentNALUnitPacket_HEVC(android::sp<android::ABuffer>, unsigned long, unsigned char const*, unsigned long, android::sp<android::ABuffer>&, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSender31queueFragmentNALUnitPacket_HEVCEN7android2spINS1_7ABufferEEEmPKhmRS4_Pi(void) {
    ALOGD("_ZN5imsma9RTPSender31queueFragmentNALUnitPacket_HEVCEN7android2spINS1_7ABufferEEEmPKhmRS4_Pi() called");
    return 0;
}

/* Demangled: android::sp<imsma::RTPReceiver::TrackInfo>::operator=(android::sp<imsma::RTPReceiver::TrackInfo> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5imsma11RTPReceiver9TrackInfoEEaSERKS4_(void) {
    ALOGD("_ZN7android2spIN5imsma11RTPReceiver9TrackInfoEEaSERKS4_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: imsma::RTPReceiver::onMessageReceived(android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma11RTPReceiver17onMessageReceivedERKN7android2spINS1_8AMessageEEE(void) {
    ALOGD("_ZN5imsma11RTPReceiver17onMessageReceivedERKN7android2spINS1_8AMessageEEE() called");
    return 0;
}

/* Demangled: android::IRTPController::~IRTPController() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14IRTPControllerD1Ev(void) {
    ALOGD("_ZN7android14IRTPControllerD1Ev() called");
    return 0;
}

/* Exported Object: vtable for android::AHandlerReflector<android::RTPController> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android17AHandlerReflectorINS_13RTPControllerEEE = NULL;

/* Demangled: android::RTPController::onReceiveGenericNACK(android::sp<android::ABuffer>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPController20onReceiveGenericNACKENS_2spINS_7ABufferEEE(void) {
    ALOGD("_ZN7android13RTPController20onReceiveGenericNACKENS_2spINS_7ABufferEEE() called");
    return 0;
}

/* Demangled: android::RTPController::scanTMMBR(android::sp<android::ABuffer>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPController9scanTMMBRENS_2spINS_7ABufferEEE(void) {
    ALOGD("_ZN7android13RTPController9scanTMMBRENS_2spINS_7ABufferEEE() called");
    return 0;
}

/* Demangled: imsma::RTPSender::queueFUorSTAPPacket(android::sp<android::ABuffer>) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSender19queueFUorSTAPPacketEN7android2spINS1_7ABufferEEE(void) {
    ALOGD("_ZN5imsma9RTPSender19queueFUorSTAPPacketEN7android2spINS1_7ABufferEEE() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<android::ABuffer> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spINS_7ABufferEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spINS_7ABufferEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: imsma::AVCAssembler::flushQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma12AVCAssembler10flushQueueEv(void) {
    ALOGD("_ZN5imsma12AVCAssembler10flushQueueEv() called");
    return 0;
}

/* Demangled: android::RTPController::queueRTCPPacket(android::sp<android::ABuffer>&, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPController15queueRTCPPacketERNS_2spINS_7ABufferEEEh(void) {
    ALOGD("_ZN7android13RTPController15queueRTCPPacketERNS_2spINS_7ABufferEEEh() called");
    return 0;
}

/* Demangled: imsma::RTPSender::RTPSender(unsigned int, android::sp<SocketWrapper>, android::sp<android::AMessage>, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSenderC1EjN7android2spI13SocketWrapperEENS2_INS1_8AMessageEEEj(void) {
    ALOGD("_ZN5imsma9RTPSenderC1EjN7android2spI13SocketWrapperEENS2_INS1_8AMessageEEEj() called");
    return 0;
}

/* Demangled: android::RTPController::onReceivePLI(android::sp<android::ABuffer>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPController12onReceivePLIENS_2spINS_7ABufferEEE(void) {
    ALOGD("_ZN7android13RTPController12onReceivePLIENS_2spINS_7ABufferEEE() called");
    return 0;
}

/* Demangled: imsma::RTPSender::~RTPSender() */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSenderD1Ev(void) {
    ALOGD("_ZN5imsma9RTPSenderD1Ev() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<android::sp<android::ABuffer> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_2spINS_7ABufferEEEEE = NULL;

/* Demangled: android::RTPController::RTPController(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPControllerC2Ej(void) {
    ALOGD("_ZN7android13RTPControllerC2Ej() called");
    return 0;
}

/* Demangled: android::RTPController::~RTPController() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPControllerD2Ev(void) {
    ALOGD("_ZN7android13RTPControllerD2Ev() called");
    return 0;
}

/* Exported Object: android::IRTPController::sAudioCapParamsList */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14IRTPController19sAudioCapParamsListE = NULL;

/* Demangled: imsma::RTPReceiver::peerResumedSendStream(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma11RTPReceiver21peerResumedSendStreamEh(void) {
    ALOGD("_ZN5imsma11RTPReceiver21peerResumedSendStreamEh() called");
    return 0;
}

/* Demangled: android::RTPController::onSendTMMBR(android::sp<android::ABuffer>, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPController11onSendTMMBRENS_2spINS_7ABufferEEEb(void) {
    ALOGD("_ZN7android13RTPController11onSendTMMBRENS_2spINS_7ABufferEEEb() called");
    return 0;
}

/* Demangled: android::RTPController::addTMMBR(android::sp<android::ABuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPController8addTMMBRERKNS_2spINS_7ABufferEEE(void) {
    ALOGD("_ZN7android13RTPController8addTMMBRERKNS_2spINS_7ABufferEEE() called");
    return 0;
}

/* Demangled: imsma::RTPSource::processRTPPacket(android::sp<android::ABuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSource16processRTPPacketERKN7android2spINS1_7ABufferEEE(void) {
    ALOGD("_ZN5imsma9RTPSource16processRTPPacketERKN7android2spINS1_7ABufferEEE() called");
    return 0;
}

/* Demangled: imsma::RTPReceiver::start(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma11RTPReceiver5startEi(void) {
    ALOGD("_ZN5imsma11RTPReceiver5startEi() called");
    return 0;
}

/* Demangled: android::RTPController::addFIR(android::sp<android::ABuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPController6addFIRERKNS_2spINS_7ABufferEEE(void) {
    ALOGD("_ZN7android13RTPController6addFIRERKNS_2spINS_7ABufferEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::IRTPController-in-android::RTPController */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android13RTPControllerE0_NS_14IRTPControllerE = NULL;

/* Demangled: imsma::AVCAssembler::packetLost() */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma12AVCAssembler10packetLostEv(void) {
    ALOGD("_ZN5imsma12AVCAssembler10packetLostEv() called");
    return 0;
}

/* Demangled: imsma::AVCAssembler::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma12AVCAssembler5resetEv(void) {
    ALOGD("_ZN5imsma12AVCAssembler5resetEv() called");
    return 0;
}

/* Demangled: imsma::RTPReceiver::processTMMBN(android::sp<android::ABuffer>) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma11RTPReceiver12processTMMBNEN7android2spINS1_7ABufferEEE(void) {
    ALOGD("_ZN5imsma11RTPReceiver12processTMMBNEN7android2spINS1_7ABufferEEE() called");
    return 0;
}

/* Demangled: android::RTPController::updateSSRC(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPController10updateSSRCEj(void) {
    ALOGD("_ZN7android13RTPController10updateSSRCEj() called");
    return 0;
}

/* Demangled: imsma::RTPSource::isKeyFrame(android::sp<android::ABuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSource10isKeyFrameERKN7android2spINS1_7ABufferEEE(void) {
    ALOGD("_ZN5imsma9RTPSource10isKeyFrameERKN7android2spINS1_7ABufferEEE() called");
    return 0;
}

/* Demangled: android::RTPController::onUpdateConfigParams(android::rtp_rtcp_config_t*, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPController20onUpdateConfigParamsEPNS_17rtp_rtcp_config_tEh(void) {
    ALOGD("_ZN7android13RTPController20onUpdateConfigParamsEPNS_17rtp_rtcp_config_tEh() called");
    return 0;
}

/* Demangled: android::RTPController::makeAndsendRTCP(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPController15makeAndsendRTCPEh(void) {
    ALOGD("_ZN7android13RTPController15makeAndsendRTCPEh() called");
    return 0;
}

/* Demangled: imsma::RTPSource::getNewTMMBRInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSource15getNewTMMBRInfoEv(void) {
    ALOGD("_ZN5imsma9RTPSource15getNewTMMBRInfoEv() called");
    return 0;
}

/* Demangled: imsma::RTPSource::NotifyTMMBR() */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSource11NotifyTMMBREv(void) {
    ALOGD("_ZN5imsma9RTPSource11NotifyTMMBREv() called");
    return 0;
}

/* Demangled: imsma::RTPSource::getIDamageCount() */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSource15getIDamageCountEv(void) {
    ALOGD("_ZN5imsma9RTPSource15getIDamageCountEv() called");
    return 0;
}

/* Exported Object: vtable for imsma::HEVCAssembler */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5imsma13HEVCAssemblerE = NULL;

/* Demangled: imsma::RTPReceiver::onAddReceiveReportBlocks(android::sp<android::ABuffer> const&, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma11RTPReceiver24onAddReceiveReportBlocksERKN7android2spINS1_7ABufferEEEh(void) {
    ALOGD("_ZN5imsma11RTPReceiver24onAddReceiveReportBlocksERKN7android2spINS1_7ABufferEEEh() called");
    return 0;
}

/* Demangled: imsma::RTPSource::peerResumedSendStream() */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSource21peerResumedSendStreamEv(void) {
    ALOGD("_ZN5imsma9RTPSource21peerResumedSendStreamEv() called");
    return 0;
}

/* Demangled: imsma::RTPSource::queuePacket(android::sp<android::ABuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSource11queuePacketERKN7android2spINS1_7ABufferEEE(void) {
    ALOGD("_ZN5imsma9RTPSource11queuePacketERKN7android2spINS1_7ABufferEEE() called");
    return 0;
}

/* Demangled: imsma::AVCAssembler::isCSD(android::sp<android::ABuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma12AVCAssembler5isCSDERKN7android2spINS1_7ABufferEEE(void) {
    ALOGD("_ZN5imsma12AVCAssembler5isCSDERKN7android2spINS1_7ABufferEEE() called");
    return 0;
}

/* Demangled: imsma::RTPReceiver::onAddStream(android::rtp_rtcp_config_t*, android::sp<SocketWrapper>, android::sp<android::AMessage>, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma11RTPReceiver11onAddStreamEPN7android17rtp_rtcp_config_tENS1_2spI13SocketWrapperEENS4_INS1_8AMessageEEEi(void) {
    ALOGD("_ZN5imsma11RTPReceiver11onAddStreamEPN7android17rtp_rtcp_config_tENS1_2spI13SocketWrapperEENS4_INS1_8AMessageEEEi() called");
    return 0;
}

/* Demangled: imsma::RTPReceiver::queueRTPPacket(android::sp<android::ABuffer>&, int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma11RTPReceiver14queueRTPPacketERN7android2spINS1_7ABufferEEEiPj(void) {
    ALOGD("_ZN5imsma11RTPReceiver14queueRTPPacketERN7android2spINS1_7ABufferEEEiPj() called");
    return 0;
}

/* Demangled: android::sp<imsma::RTPSource>::operator=(imsma::RTPSource*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5imsma9RTPSourceEEaSEPS2_(void) {
    ALOGD("_ZN7android2spIN5imsma9RTPSourceEEaSEPS2_() called");
    return 0;
}

/* Exported Object: vtable for android::IRTPController */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android14IRTPControllerE = NULL;

/* Demangled: imsma::RTPReceiver::updateConfigParams(android::rtp_rtcp_config_t*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma11RTPReceiver18updateConfigParamsEPN7android17rtp_rtcp_config_tEi(void) {
    ALOGD("_ZN5imsma11RTPReceiver18updateConfigParamsEPN7android17rtp_rtcp_config_tEi() called");
    return 0;
}

/* Demangled: imsma::RTPReceiver::onProcessSenderInfo(android::sp<android::ABuffer> const&, unsigned int, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma11RTPReceiver19onProcessSenderInfoERKN7android2spINS1_7ABufferEEEjh(void) {
    ALOGD("_ZN5imsma11RTPReceiver19onProcessSenderInfoERKN7android2spINS1_7ABufferEEEjh() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<android::ABuffer> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spINS_7ABufferEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spINS_7ABufferEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: imsma::HEVCAssembler::addNALUnit(android::sp<imsma::RTPSource> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma13HEVCAssembler10addNALUnitERKN7android2spINS_9RTPSourceEEE(void) {
    ALOGD("_ZN5imsma13HEVCAssembler10addNALUnitERKN7android2spINS_9RTPSourceEEE() called");
    return 0;
}

/* Demangled: imsma::RTPReceiver::removeStream(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma11RTPReceiver12removeStreamEi(void) {
    ALOGD("_ZN5imsma11RTPReceiver12removeStreamEi() called");
    return 0;
}

/* Demangled: imsma::RTPSender::onAddSenderInfo(android::sp<android::ABuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSender15onAddSenderInfoERKN7android2spINS1_7ABufferEEE(void) {
    ALOGD("_ZN5imsma9RTPSender15onAddSenderInfoERKN7android2spINS1_7ABufferEEE() called");
    return 0;
}

/* Demangled: imsma::RTPReceiver::videoRTPPacketCallBack(void*, android::sp<android::ABuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma11RTPReceiver22videoRTPPacketCallBackEPvRKN7android2spINS2_7ABufferEEE(void) {
    ALOGD("_ZN5imsma11RTPReceiver22videoRTPPacketCallBackEPvRKN7android2spINS2_7ABufferEEE() called");
    return 0;
}

/* Demangled: android::RTPController::peerPausedSendStream(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPController20peerPausedSendStreamEh(void) {
    ALOGD("_ZN7android13RTPController20peerPausedSendStreamEh() called");
    return 0;
}

/* Demangled: android::RTPController::onRemoveStream(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPController14onRemoveStreamEii(void) {
    ALOGD("_ZN7android13RTPController14onRemoveStreamEii() called");
    return 0;
}

/* Demangled: android::RTPController::queueAccessUnit(android::sp<android::ABuffer> const&, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPController15queueAccessUnitERKNS_2spINS_7ABufferEEEh(void) {
    ALOGD("_ZN7android13RTPController15queueAccessUnitERKNS_2spINS_7ABufferEEEh() called");
    return 0;
}

/* Exported Object: vtable for imsma::RTPSender */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5imsma9RTPSenderE = NULL;

/* Exported Object: vtable for imsma::AVCAssembler */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5imsma12AVCAssemblerE = NULL;

/* Demangled: android::RTPController::startScheduleRTCP(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPController17startScheduleRTCPEh(void) {
    ALOGD("_ZN7android13RTPController17startScheduleRTCPEh() called");
    return 0;
}

/* Demangled: android::IRTPController::getRtpProfile(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14IRTPController13getRtpProfileEj(void) {
    ALOGD("_ZN7android14IRTPController13getRtpProfileEj() called");
    return 0;
}

/* Demangled: android::IRTPController::~IRTPController() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14IRTPControllerD0Ev(void) {
    ALOGD("_ZN7android14IRTPControllerD0Ev() called");
    return 0;
}

/* Demangled: imsma::AVCAssembler::~AVCAssembler() */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma12AVCAssemblerD2Ev(void) {
    ALOGD("_ZN5imsma12AVCAssemblerD2Ev() called");
    return 0;
}

/* Demangled: android::RTPController::onSendFIR() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPController9onSendFIREv(void) {
    ALOGD("_ZN7android13RTPController9onSendFIREv() called");
    return 0;
}

/* Demangled: imsma::RTPReceiver::RTPReceiver(android::sp<android::AMessage>, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma11RTPReceiverC1EN7android2spINS1_8AMessageEEEj(void) {
    ALOGD("_ZN5imsma11RTPReceiverC1EN7android2spINS1_8AMessageEEEj() called");
    return 0;
}

/* Demangled: imsma::RTPSender::~RTPSender() */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSenderD0Ev(void) {
    ALOGD("_ZN5imsma9RTPSenderD0Ev() called");
    return 0;
}

/* Demangled: imsma::RTPReceiver::onStart(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma11RTPReceiver7onStartEi(void) {
    ALOGD("_ZN5imsma11RTPReceiver7onStartEi() called");
    return 0;
}

/* Demangled: android::IRTPController::getCapability(android::rtp_rtcp_capability_t**, unsigned char*, unsigned char, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14IRTPController13getCapabilityEPPNS_21rtp_rtcp_capability_tEPhhj(void) {
    ALOGD("_ZN7android14IRTPController13getCapabilityEPPNS_21rtp_rtcp_capability_tEPhhj() called");
    return 0;
}

/* Demangled: android::RTPController::RTPController(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPControllerC1Ej(void) {
    ALOGD("_ZN7android13RTPControllerC1Ej() called");
    return 0;
}

/* Demangled: android::RTPController::~RTPController() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPControllerD1Ev(void) {
    ALOGD("_ZN7android13RTPControllerD1Ev() called");
    return 0;
}

/* Demangled: android::RTPController::stop(unsigned char, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPController4stopEhh(void) {
    ALOGD("_ZN7android13RTPController4stopEhh() called");
    return 0;
}

/* Demangled: android::RTPController::onSendTMMBN(android::sp<android::ABuffer>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPController11onSendTMMBNENS_2spINS_7ABufferEEE(void) {
    ALOGD("_ZN7android13RTPController11onSendTMMBNENS_2spINS_7ABufferEEE() called");
    return 0;
}

/* Demangled: imsma::RTPSender::processReportBlock(android::sp<android::ABuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSender18processReportBlockERKN7android2spINS1_7ABufferEEE(void) {
    ALOGD("_ZN5imsma9RTPSender18processReportBlockERKN7android2spINS1_7ABufferEEE() called");
    return 0;
}

/* Demangled: imsma::RTPSender::onMessageReceived(android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSender17onMessageReceivedERKN7android2spINS1_8AMessageEEE(void) {
    ALOGD("_ZN5imsma9RTPSender17onMessageReceivedERKN7android2spINS1_8AMessageEEE() called");
    return 0;
}

/* Demangled: imsma::RTPSender::queueFUorSTAPPacket_HEVC(android::sp<android::ABuffer>) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSender24queueFUorSTAPPacket_HEVCEN7android2spINS1_7ABufferEEE(void) {
    ALOGD("_ZN5imsma9RTPSender24queueFUorSTAPPacket_HEVCEN7android2spINS1_7ABufferEEE() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<android::ABuffer> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spINS_7ABufferEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spINS_7ABufferEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::RTPController::stopScheduleRTCP(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPController16stopScheduleRTCPEh(void) {
    ALOGD("_ZN7android13RTPController16stopScheduleRTCPEh() called");
    return 0;
}

/* Demangled: imsma::RTPSender::updateConfigParams(android::rtp_rtcp_config_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSender18updateConfigParamsEPN7android17rtp_rtcp_config_tE(void) {
    ALOGD("_ZN5imsma9RTPSender18updateConfigParamsEPN7android17rtp_rtcp_config_tE() called");
    return 0;
}

/* Demangled: android::RTPController::startSendRTCPPacket(long, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPController19startSendRTCPPacketElh(void) {
    ALOGD("_ZN7android13RTPController19startSendRTCPPacketElh() called");
    return 0;
}

/* Demangled: android::RTPController::addPLI(android::sp<android::ABuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPController6addPLIERKNS_2spINS_7ABufferEEE(void) {
    ALOGD("_ZN7android13RTPController6addPLIERKNS_2spINS_7ABufferEEE() called");
    return 0;
}

/* Demangled: imsma::AVCAssembler::addFragmentedNALUnit(android::List<android::sp<android::ABuffer> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma12AVCAssembler20addFragmentedNALUnitEPN7android4ListINS1_2spINS1_7ABufferEEEEE(void) {
    ALOGD("_ZN5imsma12AVCAssembler20addFragmentedNALUnitEPN7android4ListINS1_2spINS1_7ABufferEEEEE() called");
    return 0;
}

/* Demangled: android::RTPController::onSendPLI() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPController9onSendPLIEv(void) {
    ALOGD("_ZN7android13RTPController9onSendPLIEv() called");
    return 0;
}

/* Demangled: android::RTPController::onReceiveKeyFrame(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPController17onReceiveKeyFrameEi(void) {
    ALOGD("_ZN7android13RTPController17onReceiveKeyFrameEi() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: imsma::RTPReceiver::~RTPReceiver() */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma11RTPReceiverD2Ev(void) {
    ALOGD("_ZN5imsma11RTPReceiverD2Ev() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<imsma::RTPReceiver::TrackInfo> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5imsma11RTPReceiver9TrackInfoEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5imsma11RTPReceiver9TrackInfoEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: imsma::AVCAssembler::addNALUnit(android::sp<imsma::RTPSource> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma12AVCAssembler10addNALUnitERKN7android2spINS_9RTPSourceEEE(void) {
    ALOGD("_ZN5imsma12AVCAssembler10addNALUnitERKN7android2spINS_9RTPSourceEEE() called");
    return 0;
}

/* Demangled: android::RTPController::onSendSLI(android::sp<android::ABuffer>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPController9onSendSLIENS_2spINS_7ABufferEEE(void) {
    ALOGD("_ZN7android13RTPController9onSendSLIENS_2spINS_7ABufferEEE() called");
    return 0;
}

/* Demangled: android::sp<imsma::RTPSource>::operator=(android::sp<imsma::RTPSource> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5imsma9RTPSourceEEaSERKS3_(void) {
    ALOGD("_ZN7android2spIN5imsma9RTPSourceEEaSERKS3_() called");
    return 0;
}

/* Demangled: android::sp<imsma::AVCAssembler::NALFragMentsInfo>::operator=(imsma::AVCAssembler::NALFragMentsInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5imsma12AVCAssembler16NALFragMentsInfoEEaSEPS3_(void) {
    ALOGD("_ZN7android2spIN5imsma12AVCAssembler16NALFragMentsInfoEEaSEPS3_() called");
    return 0;
}

/* Demangled: android::RTPController::updateConfigParams(android::rtp_rtcp_config_t*, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPController18updateConfigParamsEPNS_17rtp_rtcp_config_tEh(void) {
    ALOGD("_ZN7android13RTPController18updateConfigParamsEPNS_17rtp_rtcp_config_tEh() called");
    return 0;
}

/* Demangled: android::RTPController::removeStream(unsigned char, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPController12removeStreamEhh(void) {
    ALOGD("_ZN7android13RTPController12removeStreamEhh() called");
    return 0;
}

/* Demangled: imsma::RTPSender::onProcessTMMBR(android::sp<android::ABuffer>) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSender14onProcessTMMBREN7android2spINS1_7ABufferEEE(void) {
    ALOGD("_ZN5imsma9RTPSender14onProcessTMMBREN7android2spINS1_7ABufferEEE() called");
    return 0;
}

/* Exported Object: vtable for imsma::RTPReceiver */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5imsma11RTPReceiverE = NULL;

/* Demangled: imsma::RTPSource::pollingCheckTSDelay() */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSource19pollingCheckTSDelayEv(void) {
    ALOGD("_ZN5imsma9RTPSource19pollingCheckTSDelayEv() called");
    return 0;
}

/* Demangled: imsma::RTPSource::clearTSDelayInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSource16clearTSDelayInfoEv(void) {
    ALOGD("_ZN5imsma9RTPSource16clearTSDelayInfoEv() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<imsma::RTPReceiver::TrackInfo> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5imsma11RTPReceiver9TrackInfoEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5imsma11RTPReceiver9TrackInfoEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<imsma::RTPReceiver::TrackInfo> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5imsma11RTPReceiver9TrackInfoEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5imsma11RTPReceiver9TrackInfoEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: VTT for android::IRTPController */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android14IRTPControllerE = NULL;

/* Demangled: android::RTPController::onAddStream(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPController11onAddStreamEii(void) {
    ALOGD("_ZN7android13RTPController11onAddStreamEii() called");
    return 0;
}

/* Exported Object: vtable for imsma::RTPReceiver::TrackInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5imsma11RTPReceiver9TrackInfoE = NULL;

/* Demangled: imsma::AVCAssembler::addSingleNALUnit(android::sp<android::ABuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma12AVCAssembler16addSingleNALUnitERKN7android2spINS1_7ABufferEEE(void) {
    ALOGD("_ZN5imsma12AVCAssembler16addSingleNALUnitERKN7android2spINS1_7ABufferEEE() called");
    return 0;
}

/* Exported Object: android::IRTPController::sVideoCapParamsFirstItem */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14IRTPController24sVideoCapParamsFirstItemE = NULL;

/* Demangled: android::RTPController::setConfigParams(android::rtp_rtcp_config_t*, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPController15setConfigParamsEPNS_17rtp_rtcp_config_tEh(void) {
    ALOGD("_ZN7android13RTPController15setConfigParamsEPNS_17rtp_rtcp_config_tEh() called");
    return 0;
}

/* Demangled: android::RTPController::onStop(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPController6onStopEii(void) {
    ALOGD("_ZN7android13RTPController6onStopEii() called");
    return 0;
}

/* Demangled: android::RTPController::addTMMBN(android::sp<android::ABuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPController8addTMMBNERKNS_2spINS_7ABufferEEE(void) {
    ALOGD("_ZN7android13RTPController8addTMMBNERKNS_2spINS_7ABufferEEE() called");
    return 0;
}

/* Demangled: imsma::RTPSender::onProcessFIR(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSender12onProcessFIREh(void) {
    ALOGD("_ZN5imsma9RTPSender12onProcessFIREh() called");
    return 0;
}

/* Demangled: imsma::RTPSender::onStop() */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSender6onStopEv(void) {
    ALOGD("_ZN5imsma9RTPSender6onStopEv() called");
    return 0;
}

/* Exported Object: vtable for android::List<android::sp<android::ABuffer> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android4ListINS_2spINS_7ABufferEEEEE = NULL;

/* Demangled: imsma::RTPSender::onProcessReportBlock(android::sp<android::ABuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSender20onProcessReportBlockERKN7android2spINS1_7ABufferEEE(void) {
    ALOGD("_ZN5imsma9RTPSender20onProcessReportBlockERKN7android2spINS1_7ABufferEEE() called");
    return 0;
}

/* Demangled: imsma::RTPSender::notifyAdjustEncBR(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSender17notifyAdjustEncBREj(void) {
    ALOGD("_ZN5imsma9RTPSender17notifyAdjustEncBREj() called");
    return 0;
}

/* Demangled: imsma::RTPSender::addRTPExtHeader(android::sp<android::ABuffer>) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSender15addRTPExtHeaderEN7android2spINS1_7ABufferEEE(void) {
    ALOGD("_ZN5imsma9RTPSender15addRTPExtHeaderEN7android2spINS1_7ABufferEEE() called");
    return 0;
}

/* Demangled: imsma::RTPSource::isCSD(android::sp<android::ABuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSource5isCSDERKN7android2spINS1_7ABufferEEE(void) {
    ALOGD("_ZN5imsma9RTPSource5isCSDERKN7android2spINS1_7ABufferEEE() called");
    return 0;
}

/* Demangled: imsma::RTPSource::~RTPSource() */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSourceD2Ev(void) {
    ALOGD("_ZN5imsma9RTPSourceD2Ev() called");
    return 0;
}

/* Demangled: imsma::RTPSender::onUpdateConfigParams(android::rtp_rtcp_config_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSender20onUpdateConfigParamsEPN7android17rtp_rtcp_config_tE(void) {
    ALOGD("_ZN5imsma9RTPSender20onUpdateConfigParamsEPN7android17rtp_rtcp_config_tE() called");
    return 0;
}

/* Demangled: imsma::HEVCAssembler::HEVCAssembler(android::sp<android::AMessage>) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma13HEVCAssemblerC1EN7android2spINS1_8AMessageEEE(void) {
    ALOGD("_ZN5imsma13HEVCAssemblerC1EN7android2spINS1_8AMessageEEE() called");
    return 0;
}

/* Demangled: imsma::HEVCAssembler::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma13HEVCAssembler5resetEv(void) {
    ALOGD("_ZN5imsma13HEVCAssembler5resetEv() called");
    return 0;
}

/* Exported Object: vtable for android::RTPController */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android13RTPControllerE = NULL;

/* Demangled: imsma::RTPReceiver::processSenderInfo(android::sp<android::ABuffer> const&, unsigned int, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma11RTPReceiver17processSenderInfoERKN7android2spINS1_7ABufferEEEjh(void) {
    ALOGD("_ZN5imsma11RTPReceiver17processSenderInfoERKN7android2spINS1_7ABufferEEEjh() called");
    return 0;
}

/* Demangled: imsma::RTPReceiver::addReceiveReportBlocks(android::sp<android::ABuffer> const&, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma11RTPReceiver22addReceiveReportBlocksERKN7android2spINS1_7ABufferEEEh(void) {
    ALOGD("_ZN5imsma11RTPReceiver22addReceiveReportBlocksERKN7android2spINS1_7ABufferEEEh() called");
    return 0;
}

/* Demangled: android::RTPController::addSDES(android::AString const&, android::sp<android::ABuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPController7addSDESERKNS_7AStringERKNS_2spINS_7ABufferEEE(void) {
    ALOGD("_ZN7android13RTPController7addSDESERKNS_7AStringERKNS_2spINS_7ABufferEEE() called");
    return 0;
}

/* Demangled: imsma::RTPReceiver::getNewTMMBRInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma11RTPReceiver15getNewTMMBRInfoEv(void) {
    ALOGD("_ZN5imsma11RTPReceiver15getNewTMMBRInfoEv() called");
    return 0;
}

/* Exported Object: vtable for android::List<unsigned int> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android4ListIjEE = NULL;

/* Demangled: imsma::HEVCAssembler::HEVCAssembler(android::sp<android::AMessage>) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma13HEVCAssemblerC2EN7android2spINS1_8AMessageEEE(void) {
    ALOGD("_ZN5imsma13HEVCAssemblerC2EN7android2spINS1_8AMessageEEE() called");
    return 0;
}

/* Demangled: android::RTPController::feedBackDecoderError(android::sp<android::AMessage>, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPController20feedBackDecoderErrorENS_2spINS_8AMessageEEEh(void) {
    ALOGD("_ZN7android13RTPController20feedBackDecoderErrorENS_2spINS_8AMessageEEEh() called");
    return 0;
}

/* Demangled: imsma::RTPSource::EstimateTSDelay(long) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSource15EstimateTSDelayEl(void) {
    ALOGD("_ZN5imsma9RTPSource15EstimateTSDelayEl() called");
    return 0;
}

/* Demangled: imsma::AVCAssembler::submitAccessUnit(android::sp<android::ABuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma12AVCAssembler16submitAccessUnitERKN7android2spINS1_7ABufferEEE(void) {
    ALOGD("_ZN5imsma12AVCAssembler16submitAccessUnitERKN7android2spINS1_7ABufferEEE() called");
    return 0;
}

/* Demangled: imsma::HEVCAssembler::packetLost() */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma13HEVCAssembler10packetLostEv(void) {
    ALOGD("_ZN5imsma13HEVCAssembler10packetLostEv() called");
    return 0;
}

/* Exported Object: android::IRTPController::sVideoCapParamsNum */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14IRTPController18sVideoCapParamsNumE = NULL;

/* Demangled: android::RTPController::start(unsigned char, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPController5startEhh(void) {
    ALOGD("_ZN7android13RTPController5startEhh() called");
    return 0;
}

/* Demangled: android::RTPController::onReceiveCSD(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPController12onReceiveCSDEi(void) {
    ALOGD("_ZN7android13RTPController12onReceiveCSDEi() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: imsma::RTPSource::processSenderInfo(android::sp<android::ABuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSource17processSenderInfoERKN7android2spINS1_7ABufferEEE(void) {
    ALOGD("_ZN5imsma9RTPSource17processSenderInfoERKN7android2spINS1_7ABufferEEE() called");
    return 0;
}

/* Demangled: android::RTPController::addNACK(android::sp<android::ABuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPController7addNACKERKNS_2spINS_7ABufferEEE(void) {
    ALOGD("_ZN7android13RTPController7addNACKERKNS_2spINS_7ABufferEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_compareEPKvS5_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_compareEPKvS5_() called");
    return 0;
}

/* Demangled: imsma::RTPSender::getSSRC() */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSender7getSSRCEv(void) {
    ALOGD("_ZN5imsma9RTPSender7getSSRCEv() called");
    return 0;
}

/* Demangled: imsma::RTPSource::RTPSource(unsigned int, android::rtp_rtcp_config_t*, int, android::sp<android::AMessage>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSourceC1EjPN7android17rtp_rtcp_config_tEiRNS1_2spINS1_8AMessageEEE(void) {
    ALOGD("_ZN5imsma9RTPSourceC1EjPN7android17rtp_rtcp_config_tEiRNS1_2spINS1_8AMessageEEE() called");
    return 0;
}

/* Demangled: imsma::RTPSource::addReceiverReportBlock(android::sp<android::ABuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSource22addReceiverReportBlockERKN7android2spINS1_7ABufferEEE(void) {
    ALOGD("_ZN5imsma9RTPSource22addReceiverReportBlockERKN7android2spINS1_7ABufferEEE() called");
    return 0;
}

/* Exported Object: android::IRTPController::sVideoCapParamsList */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14IRTPController19sVideoCapParamsListE = NULL;

/* Demangled: android::sp<android::AMessage>::operator=(android::sp<android::AMessage>&&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_8AMessageEEaSEOS2_(void) {
    ALOGD("_ZN7android2spINS_8AMessageEEaSEOS2_() called");
    return 0;
}

/* Demangled: imsma::AVCAssembler::~AVCAssembler() */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma12AVCAssemblerD1Ev(void) {
    ALOGD("_ZN5imsma12AVCAssemblerD1Ev() called");
    return 0;
}

/* Demangled: imsma::AVCAssembler::packetLostRegister() */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma12AVCAssembler18packetLostRegisterEv(void) {
    ALOGD("_ZN5imsma12AVCAssembler18packetLostRegisterEv() called");
    return 0;
}

/* Demangled: imsma::RTPReceiver::stop(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma11RTPReceiver4stopEi(void) {
    ALOGD("_ZN5imsma11RTPReceiver4stopEi() called");
    return 0;
}

/* Demangled: imsma::RTPSender::RTPSender(unsigned int, android::sp<SocketWrapper>, android::sp<android::AMessage>, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSenderC2EjN7android2spI13SocketWrapperEENS2_INS1_8AMessageEEEj(void) {
    ALOGD("_ZN5imsma9RTPSenderC2EjN7android2spI13SocketWrapperEENS2_INS1_8AMessageEEEj() called");
    return 0;
}

/* Demangled: android::RTPController::~RTPController() */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPControllerD0Ev(void) {
    ALOGD("_ZN7android13RTPControllerD0Ev() called");
    return 0;
}

/* Demangled: imsma::RTPSender::onQueueAccessUnit(android::sp<android::ABuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSender17onQueueAccessUnitERKN7android2spINS1_7ABufferEEE(void) {
    ALOGD("_ZN5imsma9RTPSender17onQueueAccessUnitERKN7android2spINS1_7ABufferEEE() called");
    return 0;
}

/* Demangled: imsma::AVCAssembler::addSingleTimeAggregationPacket(android::sp<android::ABuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma12AVCAssembler30addSingleTimeAggregationPacketERKN7android2spINS1_7ABufferEEE(void) {
    ALOGD("_ZN5imsma12AVCAssembler30addSingleTimeAggregationPacketERKN7android2spINS1_7ABufferEEE() called");
    return 0;
}

/* Demangled: imsma::RTPReceiver::isActive(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma11RTPReceiver8isActiveEh(void) {
    ALOGD("_ZN5imsma11RTPReceiver8isActiveEh() called");
    return 0;
}

/* Demangled: imsma::RTPReceiver::onPeerResumedSendStream(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma11RTPReceiver23onPeerResumedSendStreamEh(void) {
    ALOGD("_ZN5imsma11RTPReceiver23onPeerResumedSendStreamEh() called");
    return 0;
}

/* Demangled: imsma::RTPSource::peerPausedSendStream() */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSource20peerPausedSendStreamEv(void) {
    ALOGD("_ZN5imsma9RTPSource20peerPausedSendStreamEv() called");
    return 0;
}

/* Demangled: imsma::RTPAssembler::CopyMetas(android::sp<android::ABuffer> const&, android::sp<android::ABuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma12RTPAssembler9CopyMetasERKN7android2spINS1_7ABufferEEES6_(void) {
    ALOGD("_ZN5imsma12RTPAssembler9CopyMetasERKN7android2spINS1_7ABufferEEES6_() called");
    return 0;
}

/* Demangled: imsma::HEVCAssembler::~HEVCAssembler() */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma13HEVCAssemblerD2Ev(void) {
    ALOGD("_ZN5imsma13HEVCAssemblerD2Ev() called");
    return 0;
}

/* Demangled: android::IRTPController::getCapability(android::rtp_rtcp_capability_t**, unsigned char, unsigned char, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14IRTPController13getCapabilityEPPNS_21rtp_rtcp_capability_tEhhj(void) {
    ALOGD("_ZN7android14IRTPController13getCapabilityEPPNS_21rtp_rtcp_capability_tEhhj() called");
    return 0;
}

/* Demangled: imsma::RTPReceiver::~RTPReceiver() */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma11RTPReceiverD1Ev(void) {
    ALOGD("_ZN5imsma11RTPReceiverD1Ev() called");
    return 0;
}

/* Demangled: imsma::HEVCAssembler::flushQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma13HEVCAssembler10flushQueueEv(void) {
    ALOGD("_ZN5imsma13HEVCAssembler10flushQueueEv() called");
    return 0;
}

/* Demangled: android::RTPController::peerResumedSendStream(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPController21peerResumedSendStreamEh(void) {
    ALOGD("_ZN7android13RTPController21peerResumedSendStreamEh() called");
    return 0;
}

/* Demangled: android::RTPController::videoRTCPPacketCallBack(void*, android::sp<android::ABuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPController23videoRTCPPacketCallBackEPvRKNS_2spINS_7ABufferEEE(void) {
    ALOGD("_ZN7android13RTPController23videoRTCPPacketCallBackEPvRKNS_2spINS_7ABufferEEE() called");
    return 0;
}

/* Demangled: android::RTPController::onSendRTCP(android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPController10onSendRTCPERKNS_2spINS_8AMessageEEE(void) {
    ALOGD("_ZN7android13RTPController10onSendRTCPERKNS_2spINS_8AMessageEEE() called");
    return 0;
}

/* Demangled: android::RTPController::onReceiveSLI(android::sp<android::ABuffer>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPController12onReceiveSLIENS_2spINS_7ABufferEEE(void) {
    ALOGD("_ZN7android13RTPController12onReceiveSLIENS_2spINS_7ABufferEEE() called");
    return 0;
}

/* Demangled: android::RTPController::onReceiveFIR(android::sp<android::ABuffer>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPController12onReceiveFIRENS_2spINS_7ABufferEEE(void) {
    ALOGD("_ZN7android13RTPController12onReceiveFIRENS_2spINS_7ABufferEEE() called");
    return 0;
}

/* Demangled: imsma::RTPSender::getRTPSentCount() */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSender15getRTPSentCountEv(void) {
    ALOGD("_ZN5imsma9RTPSender15getRTPSentCountEv() called");
    return 0;
}

/* Demangled: imsma::RTPSender::requestRTPQueueDuration() */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSender23requestRTPQueueDurationEv(void) {
    ALOGD("_ZN5imsma9RTPSender23requestRTPQueueDurationEv() called");
    return 0;
}

/* Demangled: imsma::RTPSource::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSource5resetEv(void) {
    ALOGD("_ZN5imsma9RTPSource5resetEv() called");
    return 0;
}

/* Demangled: imsma::HEVCAssembler::isKeyFrame(android::sp<android::ABuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma13HEVCAssembler10isKeyFrameERKN7android2spINS1_7ABufferEEE(void) {
    ALOGD("_ZN5imsma13HEVCAssembler10isKeyFrameERKN7android2spINS1_7ABufferEEE() called");
    return 0;
}

/* Demangled: android::RTPController::onStart(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPController7onStartEii(void) {
    ALOGD("_ZN7android13RTPController7onStartEii() called");
    return 0;
}

/* Demangled: imsma::RTPReceiver::onPeerPausedSendStream(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma11RTPReceiver22onPeerPausedSendStreamEh(void) {
    ALOGD("_ZN5imsma11RTPReceiver22onPeerPausedSendStreamEh() called");
    return 0;
}

/* Exported Object: VTT for android::RTPController */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android13RTPControllerE = NULL;

/* Demangled: imsma::RTPSender::queueAccessUnit(android::sp<android::ABuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSender15queueAccessUnitERKN7android2spINS1_7ABufferEEE(void) {
    ALOGD("_ZN5imsma9RTPSender15queueAccessUnitERKN7android2spINS1_7ABufferEEE() called");
    return 0;
}

/* Demangled: virtual thunk to android::RTPController::~RTPController() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7android13RTPControllerD1Ev(void) {
    ALOGD("_ZTv0_n24_N7android13RTPControllerD1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: imsma::RTPSender::ifRiseBitrateBaseSignal(int*) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSender23ifRiseBitrateBaseSignalEPi(void) {
    ALOGD("_ZN5imsma9RTPSender23ifRiseBitrateBaseSignalEPi() called");
    return 0;
}

/* Demangled: imsma::RTPSource::extendSeqNumber(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSource15extendSeqNumberEjj(void) {
    ALOGD("_ZN5imsma9RTPSource15extendSeqNumberEjj() called");
    return 0;
}

/* Demangled: android::RTPController::recvDecoderRefreshPoint(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPController23recvDecoderRefreshPointEh(void) {
    ALOGD("_ZN7android13RTPController23recvDecoderRefreshPointEh() called");
    return 0;
}

/* Demangled: imsma::RTPSender::start() */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSender5startEv(void) {
    ALOGD("_ZN5imsma9RTPSender5startEv() called");
    return 0;
}

/* Demangled: imsma::RTPSender::processGenericNACKFB(android::sp<android::ABuffer>) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSender20processGenericNACKFBEN7android2spINS1_7ABufferEEE(void) {
    ALOGD("_ZN5imsma9RTPSender20processGenericNACKFBEN7android2spINS1_7ABufferEEE() called");
    return 0;
}

/* Demangled: imsma::RTPSender::getMaxBitrate() */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSender13getMaxBitrateEv(void) {
    ALOGD("_ZN5imsma9RTPSender13getMaxBitrateEv() called");
    return 0;
}

/* Demangled: imsma::RTPSource::~RTPSource() */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSourceD1Ev(void) {
    ALOGD("_ZN5imsma9RTPSourceD1Ev() called");
    return 0;
}

/* Demangled: imsma::RTPSender::queueRTPPacket(android::sp<android::ABuffer>) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSender14queueRTPPacketEN7android2spINS1_7ABufferEEE(void) {
    ALOGD("_ZN5imsma9RTPSender14queueRTPPacketEN7android2spINS1_7ABufferEEE() called");
    return 0;
}

/* Demangled: imsma::RTPReceiver::changeSSRC(android::sp<android::ABuffer>&, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma11RTPReceiver10changeSSRCERN7android2spINS1_7ABufferEEEij(void) {
    ALOGD("_ZN5imsma11RTPReceiver10changeSSRCERN7android2spINS1_7ABufferEEEij() called");
    return 0;
}

/* Demangled: imsma::RTPSource::updateConfigParams(android::rtp_rtcp_config_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSource18updateConfigParamsEPN7android17rtp_rtcp_config_tE(void) {
    ALOGD("_ZN5imsma9RTPSource18updateConfigParamsEPN7android17rtp_rtcp_config_tE() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<android::ABuffer> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spINS_7ABufferEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spINS_7ABufferEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: virtual thunk to android::IRTPController::~IRTPController() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N7android14IRTPControllerD1Ev(void) {
    ALOGD("_ZTv0_n24_N7android14IRTPControllerD1Ev() called");
    return 0;
}

/* Demangled: android::RTPController::setEventNotify(android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPController14setEventNotifyERKNS_2spINS_8AMessageEEE(void) {
    ALOGD("_ZN7android13RTPController14setEventNotifyERKNS_2spINS_8AMessageEEE() called");
    return 0;
}

/* Demangled: imsma::RTPReceiver::RTPReceiver(android::sp<android::AMessage>, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma11RTPReceiverC2EN7android2spINS1_8AMessageEEEj(void) {
    ALOGD("_ZN5imsma11RTPReceiverC2EN7android2spINS1_8AMessageEEEj() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<imsma::RTPReceiver::TrackInfo> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5imsma11RTPReceiver9TrackInfoEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5imsma11RTPReceiver9TrackInfoEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::RTPController::onSetConfigParams(android::rtp_rtcp_config_t*, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPController17onSetConfigParamsEPNS_17rtp_rtcp_config_tEh(void) {
    ALOGD("_ZN7android13RTPController17onSetConfigParamsEPNS_17rtp_rtcp_config_tEh() called");
    return 0;
}

/* Demangled: imsma::RTPSender::isActive() */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSender8isActiveEv(void) {
    ALOGD("_ZN5imsma9RTPSender8isActiveEv() called");
    return 0;
}

/* Demangled: imsma::RTPSource::getLostCount() */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSource12getLostCountEv(void) {
    ALOGD("_ZN5imsma9RTPSource12getLostCountEv() called");
    return 0;
}

/* Demangled: android::RTPController::findSocketFd(unsigned short) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPController12findSocketFdEt(void) {
    ALOGD("_ZN7android13RTPController12findSocketFdEt() called");
    return 0;
}

/* Demangled: imsma::RTPSender::addSenderInfo(android::sp<android::ABuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSender13addSenderInfoERKN7android2spINS1_7ABufferEEE(void) {
    ALOGD("_ZN5imsma9RTPSender13addSenderInfoERKN7android2spINS1_7ABufferEEE() called");
    return 0;
}

/* Demangled: imsma::RTPSource::GetdebugInfo(bool, int*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSource12GetdebugInfoEbPij(void) {
    ALOGD("_ZN5imsma9RTPSource12GetdebugInfoEbPij() called");
    return 0;
}

/* Demangled: imsma::RTPSource::writeLostInfoFirstNotCSD() */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSource24writeLostInfoFirstNotCSDEv(void) {
    ALOGD("_ZN5imsma9RTPSource24writeLostInfoFirstNotCSDEv() called");
    return 0;
}

/* Demangled: imsma::HEVCAssembler::addSingleTimeAggregationPacket(android::sp<android::ABuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma13HEVCAssembler30addSingleTimeAggregationPacketERKN7android2spINS1_7ABufferEEE(void) {
    ALOGD("_ZN5imsma13HEVCAssembler30addSingleTimeAggregationPacketERKN7android2spINS1_7ABufferEEE() called");
    return 0;
}

/* Demangled: android::RTPController::setAccuNotify(android::sp<android::AMessage> const&, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPController13setAccuNotifyERKNS_2spINS_8AMessageEEEh(void) {
    ALOGD("_ZN7android13RTPController13setAccuNotifyERKNS_2spINS_8AMessageEEEh() called");
    return 0;
}

/* Demangled: android::RTPController::setVideoOrientation(unsigned char, unsigned char, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPController19setVideoOrientationEhhh(void) {
    ALOGD("_ZN7android13RTPController19setVideoOrientationEhhh() called");
    return 0;
}

/* Demangled: android::RTPController::onReceiveTMMBR(android::sp<android::ABuffer>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPController14onReceiveTMMBRENS_2spINS_7ABufferEEE(void) {
    ALOGD("_ZN7android13RTPController14onReceiveTMMBRENS_2spINS_7ABufferEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: imsma::RTPSender::updateStatisticInfo(android::sp<android::ABuffer>) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSender19updateStatisticInfoEN7android2spINS1_7ABufferEEE(void) {
    ALOGD("_ZN5imsma9RTPSender19updateStatisticInfoEN7android2spINS1_7ABufferEEE() called");
    return 0;
}

/* Demangled: imsma::RTPReceiver::onUpdateConfigParams(android::rtp_rtcp_config_t*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma11RTPReceiver20onUpdateConfigParamsEPN7android17rtp_rtcp_config_tEi(void) {
    ALOGD("_ZN5imsma11RTPReceiver20onUpdateConfigParamsEPN7android17rtp_rtcp_config_tEi() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<imsma::RTPReceiver::TrackInfo> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5imsma11RTPReceiver9TrackInfoEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5imsma11RTPReceiver9TrackInfoEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for imsma::RTPAssembler */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5imsma12RTPAssemblerE = NULL;

/* Exported Object: android::IRTPController::sVideoCapParams */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14IRTPController15sVideoCapParamsE = NULL;

/* Demangled: imsma::RTPSender::stop() */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma9RTPSender4stopEv(void) {
    ALOGD("_ZN5imsma9RTPSender4stopEv() called");
    return 0;
}

/* Demangled: imsma::AVCAssembler::~AVCAssembler() */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma12AVCAssemblerD0Ev(void) {
    ALOGD("_ZN5imsma12AVCAssemblerD0Ev() called");
    return 0;
}

/* Demangled: android::RTPController::addStream(unsigned char, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN7android13RTPController9addStreamEhh(void) {
    ALOGD("_ZN7android13RTPController9addStreamEhh() called");
    return 0;
}

/* Demangled: imsma::RTPReceiver::peerPausedSendStream(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma11RTPReceiver20peerPausedSendStreamEh(void) {
    ALOGD("_ZN5imsma11RTPReceiver20peerPausedSendStreamEh() called");
    return 0;
}

/* Demangled: imsma::RTPReceiver::onRemoveStream(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5imsma11RTPReceiver14onRemoveStreamEi(void) {
    ALOGD("_ZN5imsma11RTPReceiver14onRemoveStreamEi() called");
    return 0;
}
