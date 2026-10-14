/*
 * Reverse-Engineered ABI Specification for: libimsma_rtp.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libimsma_rtp.so
 */

#ifndef BEGONIA_RE_LIBIMSMA_RTP_H
#define BEGONIA_RE_LIBIMSMA_RTP_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN7android13RTPController17onSendGenericNackENS_2spINS_7ABufferEEE */
/* Demangled: android::RTPController::onSendGenericNack(android::sp<android::ABuffer>) */
int _ZN7android13RTPController17onSendGenericNackENS_2spINS_7ABufferEEE(void);

/* Symbol: _ZN7android2spINS_8AMessageEEaSERKS2_ */
/* Demangled: android::sp<android::AMessage>::operator=(android::sp<android::AMessage> const&) */
int _ZN7android2spINS_8AMessageEEaSERKS2_(void);

/* Symbol: _ZN7android13RTPController14startRtcpTimerEv */
/* Demangled: android::RTPController::startRtcpTimer() */
int _ZN7android13RTPController14startRtcpTimerEv(void);

/* Symbol: _ZN5imsma12AVCAssemblerC1EN7android2spINS1_8AMessageEEE */
/* Demangled: imsma::AVCAssembler::AVCAssembler(android::sp<android::AMessage>) */
int _ZN5imsma12AVCAssemblerC1EN7android2spINS1_8AMessageEEE(void);

/* Symbol: _ZN5imsma13HEVCAssembler16addSingleNALUnitERKN7android2spINS1_7ABufferEEE */
/* Demangled: imsma::HEVCAssembler::addSingleNALUnit(android::sp<android::ABuffer> const&) */
int _ZN5imsma13HEVCAssembler16addSingleNALUnitERKN7android2spINS1_7ABufferEEE(void);

/* Symbol: _ZN7android14IRTPController4opIDE */
/* Demangled: android::IRTPController::opID */
extern void* _ZN7android14IRTPController4opIDE;

/* Symbol: _ZN5imsma11RTPReceiver16copyConfigParamsEPN7android17rtp_rtcp_config_tES3_ */
/* Demangled: imsma::RTPReceiver::copyConfigParams(android::rtp_rtcp_config_t*, android::rtp_rtcp_config_t*) */
int _ZN5imsma11RTPReceiver16copyConfigParamsEPN7android17rtp_rtcp_config_tES3_(void);

/* Symbol: _ZN5imsma12AVCAssemblerC2EN7android2spINS1_8AMessageEEE */
/* Demangled: imsma::AVCAssembler::AVCAssembler(android::sp<android::AMessage>) */
int _ZN5imsma12AVCAssemblerC2EN7android2spINS1_8AMessageEEE(void);

/* Symbol: _ZN5imsma13HEVCAssemblerD1Ev */
/* Demangled: imsma::HEVCAssembler::~HEVCAssembler() */
int _ZN5imsma13HEVCAssemblerD1Ev(void);

/* Symbol: _ZN5imsma11RTPReceiverD0Ev */
/* Demangled: imsma::RTPReceiver::~RTPReceiver() */
int _ZN5imsma11RTPReceiverD0Ev(void);

/* Symbol: _ZN5imsma12RTPAssemblerC2Ev */
/* Demangled: imsma::RTPAssembler::RTPAssembler() */
int _ZN5imsma12RTPAssemblerC2Ev(void);

/* Symbol: _ZN5imsma13HEVCAssembler13assembleToNALEN7android2spINS0_16NALFragMentsInfoEEE */
/* Demangled: imsma::HEVCAssembler::assembleToNAL(android::sp<imsma::HEVCAssembler::NALFragMentsInfo>) */
int _ZN5imsma13HEVCAssembler13assembleToNALEN7android2spINS0_16NALFragMentsInfoEEE(void);

/* Symbol: _ZN7android13RTPController13checkAndAddFBEjl */
/* Demangled: android::RTPController::checkAndAddFB(unsigned int, long) */
int _ZN7android13RTPController13checkAndAddFBEjl(void);

/* Symbol: _ZN7android13RTPController21calculateNextIntervalEv */
/* Demangled: android::RTPController::calculateNextInterval() */
int _ZN7android13RTPController21calculateNextIntervalEv(void);

/* Symbol: _ZN5imsma9RTPSender7onStartEv */
/* Demangled: imsma::RTPSender::onStart() */
int _ZN5imsma9RTPSender7onStartEv(void);

/* Symbol: _ZN5imsma13HEVCAssembler16submitAccessUnitERKN7android2spINS1_7ABufferEEE */
/* Demangled: imsma::HEVCAssembler::submitAccessUnit(android::sp<android::ABuffer> const&) */
int _ZN5imsma13HEVCAssembler16submitAccessUnitERKN7android2spINS1_7ABufferEEE(void);

/* Symbol: _ZTv0_n24_N7android13RTPControllerD0Ev */
/* Demangled: virtual thunk to android::RTPController::~RTPController() */
int _ZTv0_n24_N7android13RTPControllerD0Ev(void);

/* Symbol: _ZN5imsma9RTPSender17onSetConfigParamsEPN7android17rtp_rtcp_config_tE */
/* Demangled: imsma::RTPSender::onSetConfigParams(android::rtp_rtcp_config_t*) */
int _ZN5imsma9RTPSender17onSetConfigParamsEPN7android17rtp_rtcp_config_tE(void);

/* Symbol: _ZN5imsma11RTPReceiver14postTimeUpdateEjmi */
/* Demangled: imsma::RTPReceiver::postTimeUpdate(unsigned int, unsigned long, int) */
int _ZN5imsma11RTPReceiver14postTimeUpdateEjmi(void);

/* Symbol: _ZN7android14IRTPControllerD2Ev */
/* Demangled: android::IRTPController::~IRTPController() */
int _ZN7android14IRTPControllerD2Ev(void);

/* Symbol: _ZN7android13RTPController13stopRtcpTimerEv */
/* Demangled: android::RTPController::stopRtcpTimer() */
int _ZN7android13RTPController13stopRtcpTimerEv(void);

/* Symbol: _ZN5imsma9RTPSourceD0Ev */
/* Demangled: imsma::RTPSource::~RTPSource() */
int _ZN5imsma9RTPSourceD0Ev(void);

/* Symbol: _ZN7android13RTPController14onReceiveTMMBNENS_2spINS_7ABufferEEE */
/* Demangled: android::RTPController::onReceiveTMMBN(android::sp<android::ABuffer>) */
int _ZN7android13RTPController14onReceiveTMMBNENS_2spINS_7ABufferEEE(void);

/* Symbol: _ZN5imsma9RTPSenderD2Ev */
/* Demangled: imsma::RTPSender::~RTPSender() */
int _ZN5imsma9RTPSenderD2Ev(void);

/* Symbol: _ZN5imsma9RTPSender12recordSignalEv */
/* Demangled: imsma::RTPSender::recordSignal() */
int _ZN5imsma9RTPSender12recordSignalEv(void);

/* Symbol: _ZN5imsma9RTPSender16updateEncBitRateEN7android2spINS1_7ABufferEEE */
/* Demangled: imsma::RTPSender::updateEncBitRate(android::sp<android::ABuffer>) */
int _ZN5imsma9RTPSender16updateEncBitRateEN7android2spINS1_7ABufferEEE(void);

/* Symbol: _ZTVN7android4ListIPNS_21rtp_rtcp_capability_tEEE */
/* Demangled: vtable for android::List<android::rtp_rtcp_capability_t*> */
extern void* _ZTVN7android4ListIPNS_21rtp_rtcp_capability_tEEE;

/* Symbol: _ZTv0_n24_N7android14IRTPControllerD0Ev */
/* Demangled: virtual thunk to android::IRTPController::~IRTPController() */
int _ZTv0_n24_N7android14IRTPControllerD0Ev(void);

/* Symbol: _ZN5imsma9RTPSender12processTMMBREN7android2spINS1_7ABufferEEE */
/* Demangled: imsma::RTPSender::processTMMBR(android::sp<android::ABuffer>) */
int _ZN5imsma9RTPSender12processTMMBREN7android2spINS1_7ABufferEEE(void);

/* Symbol: _ZNK7android6VectorINS_2spINS_7ABufferEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<android::sp<android::ABuffer> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spINS_7ABufferEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5imsma9RTPSource10flushQueueEv */
/* Demangled: imsma::RTPSource::flushQueue() */
int _ZN5imsma9RTPSource10flushQueueEv(void);

/* Symbol: _ZN5imsma13HEVCAssembler12assembleMoreEN7android2spINS_9RTPSourceEEE */
/* Demangled: imsma::HEVCAssembler::assembleMore(android::sp<imsma::RTPSource>) */
int _ZN5imsma13HEVCAssembler12assembleMoreEN7android2spINS_9RTPSourceEEE(void);

/* Symbol: _ZN5imsma9RTPSource4stopEv */
/* Demangled: imsma::RTPSource::stop() */
int _ZN5imsma9RTPSource4stopEv(void);

/* Symbol: _ZN5imsma9RTPSender15setConfigParamsEPN7android17rtp_rtcp_config_tE */
/* Demangled: imsma::RTPSender::setConfigParams(android::rtp_rtcp_config_t*) */
int _ZN5imsma9RTPSender15setConfigParamsEPN7android17rtp_rtcp_config_tE(void);

/* Symbol: _ZN5imsma11RTPReceiver9addStreamEPN7android17rtp_rtcp_config_tENS1_2spI13SocketWrapperEENS4_INS1_8AMessageEEEi */
/* Demangled: imsma::RTPReceiver::addStream(android::rtp_rtcp_config_t*, android::sp<SocketWrapper>, android::sp<android::AMessage>, int) */
int _ZN5imsma11RTPReceiver9addStreamEPN7android17rtp_rtcp_config_tENS1_2spI13SocketWrapperEENS4_INS1_8AMessageEEEi(void);

/* Symbol: _ZN5imsma9RTPSource12processTMMBNEN7android2spINS1_7ABufferEEE */
/* Demangled: imsma::RTPSource::processTMMBN(android::sp<android::ABuffer>) */
int _ZN5imsma9RTPSource12processTMMBNEN7android2spINS1_7ABufferEEE(void);

/* Symbol: _ZNK7android6VectorINS_2spINS_7ABufferEEEE7do_copyEPvPKvm */
/* Demangled: android::Vector<android::sp<android::ABuffer> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spINS_7ABufferEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN5imsma13HEVCAssembler20addFragmentedNALUnitEPN7android4ListINS1_2spINS1_7ABufferEEEEE */
/* Demangled: imsma::HEVCAssembler::addFragmentedNALUnit(android::List<android::sp<android::ABuffer> >*) */
int _ZN5imsma13HEVCAssembler20addFragmentedNALUnitEPN7android4ListINS1_2spINS1_7ABufferEEEEE(void);

/* Symbol: _ZN7android13RTPController17onMessageReceivedERKNS_2spINS_8AMessageEEE */
/* Demangled: android::RTPController::onMessageReceived(android::sp<android::AMessage> const&) */
int _ZN7android13RTPController17onMessageReceivedERKNS_2spINS_8AMessageEEE(void);

/* Symbol: _ZN7android13RTPController16setHandoverStateEi */
/* Demangled: android::RTPController::setHandoverState(int) */
int _ZN7android13RTPController16setHandoverStateEi(void);

/* Symbol: _ZN5imsma11RTPReceiver6onStopEi */
/* Demangled: imsma::RTPReceiver::onStop(int) */
int _ZN5imsma11RTPReceiver6onStopEi(void);

/* Symbol: _ZN5imsma12RTPAssembler16onPacketReceivedERKN7android2spINS_9RTPSourceEEE */
/* Demangled: imsma::RTPAssembler::onPacketReceived(android::sp<imsma::RTPSource> const&) */
int _ZN5imsma12RTPAssembler16onPacketReceivedERKN7android2spINS_9RTPSourceEEE(void);

/* Symbol: _ZN7android2spIN5imsma13HEVCAssembler16NALFragMentsInfoEEaSEPS3_ */
/* Demangled: android::sp<imsma::HEVCAssembler::NALFragMentsInfo>::operator=(imsma::HEVCAssembler::NALFragMentsInfo*) */
int _ZN7android2spIN5imsma13HEVCAssembler16NALFragMentsInfoEEaSEPS3_(void);

/* Symbol: _ZN7android14IRTPController19createRTPControllerEj */
/* Demangled: android::IRTPController::createRTPController(unsigned int) */
int _ZN7android14IRTPController19createRTPControllerEj(void);

/* Symbol: _ZN5imsma9RTPSender24queueSingleNALUnitPacketEN7android2spINS1_7ABufferEEE */
/* Demangled: imsma::RTPSender::queueSingleNALUnitPacket(android::sp<android::ABuffer>) */
int _ZN5imsma9RTPSender24queueSingleNALUnitPacketEN7android2spINS1_7ABufferEEE(void);

/* Symbol: _ZN5imsma9RTPSender18postSendRTPMessageEv */
/* Demangled: imsma::RTPSender::postSendRTPMessage() */
int _ZN5imsma9RTPSender18postSendRTPMessageEv(void);

/* Symbol: _ZN5imsma12AVCAssembler13assembleToNALEN7android2spINS0_16NALFragMentsInfoEEE */
/* Demangled: imsma::AVCAssembler::assembleToNAL(android::sp<imsma::AVCAssembler::NALFragMentsInfo>) */
int _ZN5imsma12AVCAssembler13assembleToNALEN7android2spINS0_16NALFragMentsInfoEEE(void);

/* Symbol: _ZN5imsma9RTPSender19setVideoOrientationEhhh */
/* Demangled: imsma::RTPSender::setVideoOrientation(unsigned char, unsigned char, unsigned char) */
int _ZN5imsma9RTPSender19setVideoOrientationEhhh(void);

/* Symbol: _ZN5imsma9RTPSender26queueFragmentNALUnitPacketEN7android2spINS1_7ABufferEEEmPKhmRS4_Pi */
/* Demangled: imsma::RTPSender::queueFragmentNALUnitPacket(android::sp<android::ABuffer>, unsigned long, unsigned char const*, unsigned long, android::sp<android::ABuffer>&, int*) */
int _ZN5imsma9RTPSender26queueFragmentNALUnitPacketEN7android2spINS1_7ABufferEEEmPKhmRS4_Pi(void);

/* Symbol: _ZTVN5imsma9RTPSourceE */
/* Demangled: vtable for imsma::RTPSource */
extern void* _ZTVN5imsma9RTPSourceE;

/* Symbol: _ZN5imsma12AVCAssembler10isKeyFrameERKN7android2spINS1_7ABufferEEE */
/* Demangled: imsma::AVCAssembler::isKeyFrame(android::sp<android::ABuffer> const&) */
int _ZN5imsma12AVCAssembler10isKeyFrameERKN7android2spINS1_7ABufferEEE(void);

/* Symbol: _ZTVN5imsma13HEVCAssembler16NALFragMentsInfoE */
/* Demangled: vtable for imsma::HEVCAssembler::NALFragMentsInfo */
extern void* _ZTVN5imsma13HEVCAssembler16NALFragMentsInfoE;

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIjjEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjjEEEE;

/* Symbol: _ZN7android13RTPController6addSLIERKNS_2spINS_7ABufferEEE */
/* Demangled: android::RTPController::addSLI(android::sp<android::ABuffer> const&) */
int _ZN7android13RTPController6addSLIERKNS_2spINS_7ABufferEEE(void);

/* Symbol: _ZN5imsma9RTPSender20onProcessGenericNACKEN7android2spINS1_7ABufferEEE */
/* Demangled: imsma::RTPSender::onProcessGenericNACK(android::sp<android::ABuffer>) */
int _ZN5imsma9RTPSender20onProcessGenericNACKEN7android2spINS1_7ABufferEEE(void);

/* Symbol: _ZN5imsma13HEVCAssembler18packetLostRegisterEv */
/* Demangled: imsma::HEVCAssembler::packetLostRegister() */
int _ZN5imsma13HEVCAssembler18packetLostRegisterEv(void);

/* Symbol: _ZTVN5imsma12AVCAssembler16NALFragMentsInfoE */
/* Demangled: vtable for imsma::AVCAssembler::NALFragMentsInfo */
extern void* _ZTVN5imsma12AVCAssembler16NALFragMentsInfoE;

/* Symbol: _ZN5imsma13HEVCAssemblerD0Ev */
/* Demangled: imsma::HEVCAssembler::~HEVCAssembler() */
int _ZN5imsma13HEVCAssemblerD0Ev(void);

/* Symbol: _ZN5imsma9RTPSender10processFIREh */
/* Demangled: imsma::RTPSender::processFIR(unsigned char) */
int _ZN5imsma9RTPSender10processFIREh(void);

/* Symbol: _ZN5imsma9RTPSender15addRTPFixHeaderEN7android2spINS1_7ABufferEEE */
/* Demangled: imsma::RTPSender::addRTPFixHeader(android::sp<android::ABuffer>) */
int _ZN5imsma9RTPSender15addRTPFixHeaderEN7android2spINS1_7ABufferEEE(void);

/* Symbol: _ZN5imsma9RTPSource5startEv */
/* Demangled: imsma::RTPSource::start() */
int _ZN5imsma9RTPSource5startEv(void);

/* Symbol: _ZTVN7android8AHandlerE */
/* Demangled: vtable for android::AHandler */
extern void* _ZTVN7android8AHandlerE;

/* Symbol: _ZNK7android6VectorINS_2spIN5imsma11RTPReceiver9TrackInfoEEEE12do_constructEPvm */
/* Demangled: android::Vector<android::sp<imsma::RTPReceiver::TrackInfo> >::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5imsma11RTPReceiver9TrackInfoEEEE12do_constructEPvm(void);

/* Symbol: _ZN5imsma9RTPSource19updateStatisticInfoEN7android2spINS1_7ABufferEEE */
/* Demangled: imsma::RTPSource::updateStatisticInfo(android::sp<android::ABuffer>) */
int _ZN5imsma9RTPSource19updateStatisticInfoEN7android2spINS1_7ABufferEEE(void);

/* Symbol: _ZN5imsma9RTPSource22calculateArrivalJitterERKN7android2spINS1_7ABufferEEE */
/* Demangled: imsma::RTPSource::calculateArrivalJitter(android::sp<android::ABuffer> const&) */
int _ZN5imsma9RTPSource22calculateArrivalJitterERKN7android2spINS1_7ABufferEEE(void);

/* Symbol: _ZN7android14IRTPController13getCapabilityEhj */
/* Demangled: android::IRTPController::getCapability(unsigned char, unsigned int) */
int _ZN7android14IRTPController13getCapabilityEhj(void);

/* Symbol: _ZN7android14IRTPControllerC2Ev */
/* Demangled: android::IRTPController::IRTPController() */
int _ZN7android14IRTPControllerC2Ev(void);

/* Symbol: _ZN7android2spI13SocketWrapperEaSEPS1_ */
/* Demangled: android::sp<SocketWrapper>::operator=(SocketWrapper*) */
int _ZN7android2spI13SocketWrapperEaSEPS1_(void);

/* Symbol: _ZN5imsma9RTPSender10updateSSRCEj */
/* Demangled: imsma::RTPSender::updateSSRC(unsigned int) */
int _ZN5imsma9RTPSender10updateSSRCEj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZTVN7android6VectorINS_2spIN5imsma11RTPReceiver9TrackInfoEEEEE */
/* Demangled: vtable for android::Vector<android::sp<imsma::RTPReceiver::TrackInfo> > */
extern void* _ZTVN7android6VectorINS_2spIN5imsma11RTPReceiver9TrackInfoEEEEE;

/* Symbol: _ZN5imsma9RTPSourceC2EjPN7android17rtp_rtcp_config_tEiRNS1_2spINS1_8AMessageEEE */
/* Demangled: imsma::RTPSource::RTPSource(unsigned int, android::rtp_rtcp_config_t*, int, android::sp<android::AMessage>&) */
int _ZN5imsma9RTPSourceC2EjPN7android17rtp_rtcp_config_tEiRNS1_2spINS1_8AMessageEEE(void);

/* Symbol: _ZN5imsma12AVCAssembler12assembleMoreEN7android2spINS_9RTPSourceEEE */
/* Demangled: imsma::AVCAssembler::assembleMore(android::sp<imsma::RTPSource>) */
int _ZN5imsma12AVCAssembler12assembleMoreEN7android2spINS_9RTPSourceEEE(void);

/* Symbol: _ZN5imsma9RTPSender31queueFragmentNALUnitPacket_HEVCEN7android2spINS1_7ABufferEEEmPKhmRS4_Pi */
/* Demangled: imsma::RTPSender::queueFragmentNALUnitPacket_HEVC(android::sp<android::ABuffer>, unsigned long, unsigned char const*, unsigned long, android::sp<android::ABuffer>&, int*) */
int _ZN5imsma9RTPSender31queueFragmentNALUnitPacket_HEVCEN7android2spINS1_7ABufferEEEmPKhmRS4_Pi(void);

/* Symbol: _ZN7android2spIN5imsma11RTPReceiver9TrackInfoEEaSERKS4_ */
/* Demangled: android::sp<imsma::RTPReceiver::TrackInfo>::operator=(android::sp<imsma::RTPReceiver::TrackInfo> const&) */
int _ZN7android2spIN5imsma11RTPReceiver9TrackInfoEEaSERKS4_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN5imsma11RTPReceiver17onMessageReceivedERKN7android2spINS1_8AMessageEEE */
/* Demangled: imsma::RTPReceiver::onMessageReceived(android::sp<android::AMessage> const&) */
int _ZN5imsma11RTPReceiver17onMessageReceivedERKN7android2spINS1_8AMessageEEE(void);

/* Symbol: _ZN7android14IRTPControllerD1Ev */
/* Demangled: android::IRTPController::~IRTPController() */
int _ZN7android14IRTPControllerD1Ev(void);

/* Symbol: _ZTVN7android17AHandlerReflectorINS_13RTPControllerEEE */
/* Demangled: vtable for android::AHandlerReflector<android::RTPController> */
extern void* _ZTVN7android17AHandlerReflectorINS_13RTPControllerEEE;

/* Symbol: _ZN7android13RTPController20onReceiveGenericNACKENS_2spINS_7ABufferEEE */
/* Demangled: android::RTPController::onReceiveGenericNACK(android::sp<android::ABuffer>) */
int _ZN7android13RTPController20onReceiveGenericNACKENS_2spINS_7ABufferEEE(void);

/* Symbol: _ZN7android13RTPController9scanTMMBRENS_2spINS_7ABufferEEE */
/* Demangled: android::RTPController::scanTMMBR(android::sp<android::ABuffer>) */
int _ZN7android13RTPController9scanTMMBRENS_2spINS_7ABufferEEE(void);

/* Symbol: _ZN5imsma9RTPSender19queueFUorSTAPPacketEN7android2spINS1_7ABufferEEE */
/* Demangled: imsma::RTPSender::queueFUorSTAPPacket(android::sp<android::ABuffer>) */
int _ZN5imsma9RTPSender19queueFUorSTAPPacketEN7android2spINS1_7ABufferEEE(void);

/* Symbol: _ZNK7android6VectorINS_2spINS_7ABufferEEEE10do_destroyEPvm */
/* Demangled: android::Vector<android::sp<android::ABuffer> >::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorINS_2spINS_7ABufferEEEE10do_destroyEPvm(void);

/* Symbol: _ZN5imsma12AVCAssembler10flushQueueEv */
/* Demangled: imsma::AVCAssembler::flushQueue() */
int _ZN5imsma12AVCAssembler10flushQueueEv(void);

/* Symbol: _ZN7android13RTPController15queueRTCPPacketERNS_2spINS_7ABufferEEEh */
/* Demangled: android::RTPController::queueRTCPPacket(android::sp<android::ABuffer>&, unsigned char) */
int _ZN7android13RTPController15queueRTCPPacketERNS_2spINS_7ABufferEEEh(void);

/* Symbol: _ZN5imsma9RTPSenderC1EjN7android2spI13SocketWrapperEENS2_INS1_8AMessageEEEj */
/* Demangled: imsma::RTPSender::RTPSender(unsigned int, android::sp<SocketWrapper>, android::sp<android::AMessage>, unsigned int) */
int _ZN5imsma9RTPSenderC1EjN7android2spI13SocketWrapperEENS2_INS1_8AMessageEEEj(void);

/* Symbol: _ZN7android13RTPController12onReceivePLIENS_2spINS_7ABufferEEE */
/* Demangled: android::RTPController::onReceivePLI(android::sp<android::ABuffer>) */
int _ZN7android13RTPController12onReceivePLIENS_2spINS_7ABufferEEE(void);

/* Symbol: _ZN5imsma9RTPSenderD1Ev */
/* Demangled: imsma::RTPSender::~RTPSender() */
int _ZN5imsma9RTPSenderD1Ev(void);

/* Symbol: _ZTVN7android6VectorINS_2spINS_7ABufferEEEEE */
/* Demangled: vtable for android::Vector<android::sp<android::ABuffer> > */
extern void* _ZTVN7android6VectorINS_2spINS_7ABufferEEEEE;

/* Symbol: _ZN7android13RTPControllerC2Ej */
/* Demangled: android::RTPController::RTPController(unsigned int) */
int _ZN7android13RTPControllerC2Ej(void);

/* Symbol: _ZN7android13RTPControllerD2Ev */
/* Demangled: android::RTPController::~RTPController() */
int _ZN7android13RTPControllerD2Ev(void);

/* Symbol: _ZN7android14IRTPController19sAudioCapParamsListE */
/* Demangled: android::IRTPController::sAudioCapParamsList */
extern void* _ZN7android14IRTPController19sAudioCapParamsListE;

/* Symbol: _ZN5imsma11RTPReceiver21peerResumedSendStreamEh */
/* Demangled: imsma::RTPReceiver::peerResumedSendStream(unsigned char) */
int _ZN5imsma11RTPReceiver21peerResumedSendStreamEh(void);

/* Symbol: _ZN7android13RTPController11onSendTMMBRENS_2spINS_7ABufferEEEb */
/* Demangled: android::RTPController::onSendTMMBR(android::sp<android::ABuffer>, bool) */
int _ZN7android13RTPController11onSendTMMBRENS_2spINS_7ABufferEEEb(void);

/* Symbol: _ZN7android13RTPController8addTMMBRERKNS_2spINS_7ABufferEEE */
/* Demangled: android::RTPController::addTMMBR(android::sp<android::ABuffer> const&) */
int _ZN7android13RTPController8addTMMBRERKNS_2spINS_7ABufferEEE(void);

/* Symbol: _ZN5imsma9RTPSource16processRTPPacketERKN7android2spINS1_7ABufferEEE */
/* Demangled: imsma::RTPSource::processRTPPacket(android::sp<android::ABuffer> const&) */
int _ZN5imsma9RTPSource16processRTPPacketERKN7android2spINS1_7ABufferEEE(void);

/* Symbol: _ZN5imsma11RTPReceiver5startEi */
/* Demangled: imsma::RTPReceiver::start(int) */
int _ZN5imsma11RTPReceiver5startEi(void);

/* Symbol: _ZN7android13RTPController6addFIRERKNS_2spINS_7ABufferEEE */
/* Demangled: android::RTPController::addFIR(android::sp<android::ABuffer> const&) */
int _ZN7android13RTPController6addFIRERKNS_2spINS_7ABufferEEE(void);

/* Symbol: _ZTCN7android13RTPControllerE0_NS_14IRTPControllerE */
/* Demangled: construction vtable for android::IRTPController-in-android::RTPController */
extern void* _ZTCN7android13RTPControllerE0_NS_14IRTPControllerE;

/* Symbol: _ZN5imsma12AVCAssembler10packetLostEv */
/* Demangled: imsma::AVCAssembler::packetLost() */
int _ZN5imsma12AVCAssembler10packetLostEv(void);

/* Symbol: _ZN5imsma12AVCAssembler5resetEv */
/* Demangled: imsma::AVCAssembler::reset() */
int _ZN5imsma12AVCAssembler5resetEv(void);

/* Symbol: _ZN5imsma11RTPReceiver12processTMMBNEN7android2spINS1_7ABufferEEE */
/* Demangled: imsma::RTPReceiver::processTMMBN(android::sp<android::ABuffer>) */
int _ZN5imsma11RTPReceiver12processTMMBNEN7android2spINS1_7ABufferEEE(void);

/* Symbol: _ZN7android13RTPController10updateSSRCEj */
/* Demangled: android::RTPController::updateSSRC(unsigned int) */
int _ZN7android13RTPController10updateSSRCEj(void);

/* Symbol: _ZN5imsma9RTPSource10isKeyFrameERKN7android2spINS1_7ABufferEEE */
/* Demangled: imsma::RTPSource::isKeyFrame(android::sp<android::ABuffer> const&) */
int _ZN5imsma9RTPSource10isKeyFrameERKN7android2spINS1_7ABufferEEE(void);

/* Symbol: _ZN7android13RTPController20onUpdateConfigParamsEPNS_17rtp_rtcp_config_tEh */
/* Demangled: android::RTPController::onUpdateConfigParams(android::rtp_rtcp_config_t*, unsigned char) */
int _ZN7android13RTPController20onUpdateConfigParamsEPNS_17rtp_rtcp_config_tEh(void);

/* Symbol: _ZN7android13RTPController15makeAndsendRTCPEh */
/* Demangled: android::RTPController::makeAndsendRTCP(unsigned char) */
int _ZN7android13RTPController15makeAndsendRTCPEh(void);

/* Symbol: _ZN5imsma9RTPSource15getNewTMMBRInfoEv */
/* Demangled: imsma::RTPSource::getNewTMMBRInfo() */
int _ZN5imsma9RTPSource15getNewTMMBRInfoEv(void);

/* Symbol: _ZN5imsma9RTPSource11NotifyTMMBREv */
/* Demangled: imsma::RTPSource::NotifyTMMBR() */
int _ZN5imsma9RTPSource11NotifyTMMBREv(void);

/* Symbol: _ZN5imsma9RTPSource15getIDamageCountEv */
/* Demangled: imsma::RTPSource::getIDamageCount() */
int _ZN5imsma9RTPSource15getIDamageCountEv(void);

/* Symbol: _ZTVN5imsma13HEVCAssemblerE */
/* Demangled: vtable for imsma::HEVCAssembler */
extern void* _ZTVN5imsma13HEVCAssemblerE;

/* Symbol: _ZN5imsma11RTPReceiver24onAddReceiveReportBlocksERKN7android2spINS1_7ABufferEEEh */
/* Demangled: imsma::RTPReceiver::onAddReceiveReportBlocks(android::sp<android::ABuffer> const&, unsigned char) */
int _ZN5imsma11RTPReceiver24onAddReceiveReportBlocksERKN7android2spINS1_7ABufferEEEh(void);

/* Symbol: _ZN5imsma9RTPSource21peerResumedSendStreamEv */
/* Demangled: imsma::RTPSource::peerResumedSendStream() */
int _ZN5imsma9RTPSource21peerResumedSendStreamEv(void);

/* Symbol: _ZN5imsma9RTPSource11queuePacketERKN7android2spINS1_7ABufferEEE */
/* Demangled: imsma::RTPSource::queuePacket(android::sp<android::ABuffer> const&) */
int _ZN5imsma9RTPSource11queuePacketERKN7android2spINS1_7ABufferEEE(void);

/* Symbol: _ZN5imsma12AVCAssembler5isCSDERKN7android2spINS1_7ABufferEEE */
/* Demangled: imsma::AVCAssembler::isCSD(android::sp<android::ABuffer> const&) */
int _ZN5imsma12AVCAssembler5isCSDERKN7android2spINS1_7ABufferEEE(void);

/* Symbol: _ZN5imsma11RTPReceiver11onAddStreamEPN7android17rtp_rtcp_config_tENS1_2spI13SocketWrapperEENS4_INS1_8AMessageEEEi */
/* Demangled: imsma::RTPReceiver::onAddStream(android::rtp_rtcp_config_t*, android::sp<SocketWrapper>, android::sp<android::AMessage>, int) */
int _ZN5imsma11RTPReceiver11onAddStreamEPN7android17rtp_rtcp_config_tENS1_2spI13SocketWrapperEENS4_INS1_8AMessageEEEi(void);

/* Symbol: _ZN5imsma11RTPReceiver14queueRTPPacketERN7android2spINS1_7ABufferEEEiPj */
/* Demangled: imsma::RTPReceiver::queueRTPPacket(android::sp<android::ABuffer>&, int, unsigned int*) */
int _ZN5imsma11RTPReceiver14queueRTPPacketERN7android2spINS1_7ABufferEEEiPj(void);

/* Symbol: _ZN7android2spIN5imsma9RTPSourceEEaSEPS2_ */
/* Demangled: android::sp<imsma::RTPSource>::operator=(imsma::RTPSource*) */
int _ZN7android2spIN5imsma9RTPSourceEEaSEPS2_(void);

/* Symbol: _ZTVN7android14IRTPControllerE */
/* Demangled: vtable for android::IRTPController */
extern void* _ZTVN7android14IRTPControllerE;

/* Symbol: _ZN5imsma11RTPReceiver18updateConfigParamsEPN7android17rtp_rtcp_config_tEi */
/* Demangled: imsma::RTPReceiver::updateConfigParams(android::rtp_rtcp_config_t*, int) */
int _ZN5imsma11RTPReceiver18updateConfigParamsEPN7android17rtp_rtcp_config_tEi(void);

/* Symbol: _ZN5imsma11RTPReceiver19onProcessSenderInfoERKN7android2spINS1_7ABufferEEEjh */
/* Demangled: imsma::RTPReceiver::onProcessSenderInfo(android::sp<android::ABuffer> const&, unsigned int, unsigned char) */
int _ZN5imsma11RTPReceiver19onProcessSenderInfoERKN7android2spINS1_7ABufferEEEjh(void);

/* Symbol: _ZNK7android6VectorINS_2spINS_7ABufferEEEE8do_splatEPvPKvm */
/* Demangled: android::Vector<android::sp<android::ABuffer> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spINS_7ABufferEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZN5imsma13HEVCAssembler10addNALUnitERKN7android2spINS_9RTPSourceEEE */
/* Demangled: imsma::HEVCAssembler::addNALUnit(android::sp<imsma::RTPSource> const&) */
int _ZN5imsma13HEVCAssembler10addNALUnitERKN7android2spINS_9RTPSourceEEE(void);

/* Symbol: _ZN5imsma11RTPReceiver12removeStreamEi */
/* Demangled: imsma::RTPReceiver::removeStream(int) */
int _ZN5imsma11RTPReceiver12removeStreamEi(void);

/* Symbol: _ZN5imsma9RTPSender15onAddSenderInfoERKN7android2spINS1_7ABufferEEE */
/* Demangled: imsma::RTPSender::onAddSenderInfo(android::sp<android::ABuffer> const&) */
int _ZN5imsma9RTPSender15onAddSenderInfoERKN7android2spINS1_7ABufferEEE(void);

/* Symbol: _ZN5imsma11RTPReceiver22videoRTPPacketCallBackEPvRKN7android2spINS2_7ABufferEEE */
/* Demangled: imsma::RTPReceiver::videoRTPPacketCallBack(void*, android::sp<android::ABuffer> const&) */
int _ZN5imsma11RTPReceiver22videoRTPPacketCallBackEPvRKN7android2spINS2_7ABufferEEE(void);

/* Symbol: _ZN7android13RTPController20peerPausedSendStreamEh */
/* Demangled: android::RTPController::peerPausedSendStream(unsigned char) */
int _ZN7android13RTPController20peerPausedSendStreamEh(void);

/* Symbol: _ZN7android13RTPController14onRemoveStreamEii */
/* Demangled: android::RTPController::onRemoveStream(int, int) */
int _ZN7android13RTPController14onRemoveStreamEii(void);

/* Symbol: _ZN7android13RTPController15queueAccessUnitERKNS_2spINS_7ABufferEEEh */
/* Demangled: android::RTPController::queueAccessUnit(android::sp<android::ABuffer> const&, unsigned char) */
int _ZN7android13RTPController15queueAccessUnitERKNS_2spINS_7ABufferEEEh(void);

/* Symbol: _ZTVN5imsma9RTPSenderE */
/* Demangled: vtable for imsma::RTPSender */
extern void* _ZTVN5imsma9RTPSenderE;

/* Symbol: _ZTVN5imsma12AVCAssemblerE */
/* Demangled: vtable for imsma::AVCAssembler */
extern void* _ZTVN5imsma12AVCAssemblerE;

/* Symbol: _ZN7android13RTPController17startScheduleRTCPEh */
/* Demangled: android::RTPController::startScheduleRTCP(unsigned char) */
int _ZN7android13RTPController17startScheduleRTCPEh(void);

/* Symbol: _ZN7android14IRTPController13getRtpProfileEj */
/* Demangled: android::IRTPController::getRtpProfile(unsigned int) */
int _ZN7android14IRTPController13getRtpProfileEj(void);

/* Symbol: _ZN7android14IRTPControllerD0Ev */
/* Demangled: android::IRTPController::~IRTPController() */
int _ZN7android14IRTPControllerD0Ev(void);

/* Symbol: _ZN5imsma12AVCAssemblerD2Ev */
/* Demangled: imsma::AVCAssembler::~AVCAssembler() */
int _ZN5imsma12AVCAssemblerD2Ev(void);

/* Symbol: _ZN7android13RTPController9onSendFIREv */
/* Demangled: android::RTPController::onSendFIR() */
int _ZN7android13RTPController9onSendFIREv(void);

/* Symbol: _ZN5imsma11RTPReceiverC1EN7android2spINS1_8AMessageEEEj */
/* Demangled: imsma::RTPReceiver::RTPReceiver(android::sp<android::AMessage>, unsigned int) */
int _ZN5imsma11RTPReceiverC1EN7android2spINS1_8AMessageEEEj(void);

/* Symbol: _ZN5imsma9RTPSenderD0Ev */
/* Demangled: imsma::RTPSender::~RTPSender() */
int _ZN5imsma9RTPSenderD0Ev(void);

/* Symbol: _ZN5imsma11RTPReceiver7onStartEi */
/* Demangled: imsma::RTPReceiver::onStart(int) */
int _ZN5imsma11RTPReceiver7onStartEi(void);

/* Symbol: _ZN7android14IRTPController13getCapabilityEPPNS_21rtp_rtcp_capability_tEPhhj */
/* Demangled: android::IRTPController::getCapability(android::rtp_rtcp_capability_t**, unsigned char*, unsigned char, unsigned int) */
int _ZN7android14IRTPController13getCapabilityEPPNS_21rtp_rtcp_capability_tEPhhj(void);

/* Symbol: _ZN7android13RTPControllerC1Ej */
/* Demangled: android::RTPController::RTPController(unsigned int) */
int _ZN7android13RTPControllerC1Ej(void);

/* Symbol: _ZN7android13RTPControllerD1Ev */
/* Demangled: android::RTPController::~RTPController() */
int _ZN7android13RTPControllerD1Ev(void);

/* Symbol: _ZN7android13RTPController4stopEhh */
/* Demangled: android::RTPController::stop(unsigned char, unsigned char) */
int _ZN7android13RTPController4stopEhh(void);

/* Symbol: _ZN7android13RTPController11onSendTMMBNENS_2spINS_7ABufferEEE */
/* Demangled: android::RTPController::onSendTMMBN(android::sp<android::ABuffer>) */
int _ZN7android13RTPController11onSendTMMBNENS_2spINS_7ABufferEEE(void);

/* Symbol: _ZN5imsma9RTPSender18processReportBlockERKN7android2spINS1_7ABufferEEE */
/* Demangled: imsma::RTPSender::processReportBlock(android::sp<android::ABuffer> const&) */
int _ZN5imsma9RTPSender18processReportBlockERKN7android2spINS1_7ABufferEEE(void);

/* Symbol: _ZN5imsma9RTPSender17onMessageReceivedERKN7android2spINS1_8AMessageEEE */
/* Demangled: imsma::RTPSender::onMessageReceived(android::sp<android::AMessage> const&) */
int _ZN5imsma9RTPSender17onMessageReceivedERKN7android2spINS1_8AMessageEEE(void);

/* Symbol: _ZN5imsma9RTPSender24queueFUorSTAPPacket_HEVCEN7android2spINS1_7ABufferEEE */
/* Demangled: imsma::RTPSender::queueFUorSTAPPacket_HEVC(android::sp<android::ABuffer>) */
int _ZN5imsma9RTPSender24queueFUorSTAPPacket_HEVCEN7android2spINS1_7ABufferEEE(void);

/* Symbol: _ZNK7android6VectorINS_2spINS_7ABufferEEEE12do_constructEPvm */
/* Demangled: android::Vector<android::sp<android::ABuffer> >::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorINS_2spINS_7ABufferEEEE12do_constructEPvm(void);

/* Symbol: _ZN7android13RTPController16stopScheduleRTCPEh */
/* Demangled: android::RTPController::stopScheduleRTCP(unsigned char) */
int _ZN7android13RTPController16stopScheduleRTCPEh(void);

/* Symbol: _ZN5imsma9RTPSender18updateConfigParamsEPN7android17rtp_rtcp_config_tE */
/* Demangled: imsma::RTPSender::updateConfigParams(android::rtp_rtcp_config_t*) */
int _ZN5imsma9RTPSender18updateConfigParamsEPN7android17rtp_rtcp_config_tE(void);

/* Symbol: _ZN7android13RTPController19startSendRTCPPacketElh */
/* Demangled: android::RTPController::startSendRTCPPacket(long, unsigned char) */
int _ZN7android13RTPController19startSendRTCPPacketElh(void);

/* Symbol: _ZN7android13RTPController6addPLIERKNS_2spINS_7ABufferEEE */
/* Demangled: android::RTPController::addPLI(android::sp<android::ABuffer> const&) */
int _ZN7android13RTPController6addPLIERKNS_2spINS_7ABufferEEE(void);

/* Symbol: _ZN5imsma12AVCAssembler20addFragmentedNALUnitEPN7android4ListINS1_2spINS1_7ABufferEEEEE */
/* Demangled: imsma::AVCAssembler::addFragmentedNALUnit(android::List<android::sp<android::ABuffer> >*) */
int _ZN5imsma12AVCAssembler20addFragmentedNALUnitEPN7android4ListINS1_2spINS1_7ABufferEEEEE(void);

/* Symbol: _ZN7android13RTPController9onSendPLIEv */
/* Demangled: android::RTPController::onSendPLI() */
int _ZN7android13RTPController9onSendPLIEv(void);

/* Symbol: _ZN7android13RTPController17onReceiveKeyFrameEi */
/* Demangled: android::RTPController::onReceiveKeyFrame(int) */
int _ZN7android13RTPController17onReceiveKeyFrameEi(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_destroyEPvm(void);

/* Symbol: _ZN5imsma11RTPReceiverD2Ev */
/* Demangled: imsma::RTPReceiver::~RTPReceiver() */
int _ZN5imsma11RTPReceiverD2Ev(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5imsma11RTPReceiver9TrackInfoEEEE8do_splatEPvPKvm */
/* Demangled: android::Vector<android::sp<imsma::RTPReceiver::TrackInfo> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5imsma11RTPReceiver9TrackInfoEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZN5imsma12AVCAssembler10addNALUnitERKN7android2spINS_9RTPSourceEEE */
/* Demangled: imsma::AVCAssembler::addNALUnit(android::sp<imsma::RTPSource> const&) */
int _ZN5imsma12AVCAssembler10addNALUnitERKN7android2spINS_9RTPSourceEEE(void);

/* Symbol: _ZN7android13RTPController9onSendSLIENS_2spINS_7ABufferEEE */
/* Demangled: android::RTPController::onSendSLI(android::sp<android::ABuffer>) */
int _ZN7android13RTPController9onSendSLIENS_2spINS_7ABufferEEE(void);

/* Symbol: _ZN7android2spIN5imsma9RTPSourceEEaSERKS3_ */
/* Demangled: android::sp<imsma::RTPSource>::operator=(android::sp<imsma::RTPSource> const&) */
int _ZN7android2spIN5imsma9RTPSourceEEaSERKS3_(void);

/* Symbol: _ZN7android2spIN5imsma12AVCAssembler16NALFragMentsInfoEEaSEPS3_ */
/* Demangled: android::sp<imsma::AVCAssembler::NALFragMentsInfo>::operator=(imsma::AVCAssembler::NALFragMentsInfo*) */
int _ZN7android2spIN5imsma12AVCAssembler16NALFragMentsInfoEEaSEPS3_(void);

/* Symbol: _ZN7android13RTPController18updateConfigParamsEPNS_17rtp_rtcp_config_tEh */
/* Demangled: android::RTPController::updateConfigParams(android::rtp_rtcp_config_t*, unsigned char) */
int _ZN7android13RTPController18updateConfigParamsEPNS_17rtp_rtcp_config_tEh(void);

/* Symbol: _ZN7android13RTPController12removeStreamEhh */
/* Demangled: android::RTPController::removeStream(unsigned char, unsigned char) */
int _ZN7android13RTPController12removeStreamEhh(void);

/* Symbol: _ZN5imsma9RTPSender14onProcessTMMBREN7android2spINS1_7ABufferEEE */
/* Demangled: imsma::RTPSender::onProcessTMMBR(android::sp<android::ABuffer>) */
int _ZN5imsma9RTPSender14onProcessTMMBREN7android2spINS1_7ABufferEEE(void);

/* Symbol: _ZTVN5imsma11RTPReceiverE */
/* Demangled: vtable for imsma::RTPReceiver */
extern void* _ZTVN5imsma11RTPReceiverE;

/* Symbol: _ZN5imsma9RTPSource19pollingCheckTSDelayEv */
/* Demangled: imsma::RTPSource::pollingCheckTSDelay() */
int _ZN5imsma9RTPSource19pollingCheckTSDelayEv(void);

/* Symbol: _ZN5imsma9RTPSource16clearTSDelayInfoEv */
/* Demangled: imsma::RTPSource::clearTSDelayInfo() */
int _ZN5imsma9RTPSource16clearTSDelayInfoEv(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5imsma11RTPReceiver9TrackInfoEEEE10do_destroyEPvm */
/* Demangled: android::Vector<android::sp<imsma::RTPReceiver::TrackInfo> >::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5imsma11RTPReceiver9TrackInfoEEEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5imsma11RTPReceiver9TrackInfoEEEE7do_copyEPvPKvm */
/* Demangled: android::Vector<android::sp<imsma::RTPReceiver::TrackInfo> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5imsma11RTPReceiver9TrackInfoEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZTTN7android14IRTPControllerE */
/* Demangled: VTT for android::IRTPController */
extern void* _ZTTN7android14IRTPControllerE;

/* Symbol: _ZN7android13RTPController11onAddStreamEii */
/* Demangled: android::RTPController::onAddStream(int, int) */
int _ZN7android13RTPController11onAddStreamEii(void);

/* Symbol: _ZTVN5imsma11RTPReceiver9TrackInfoE */
/* Demangled: vtable for imsma::RTPReceiver::TrackInfo */
extern void* _ZTVN5imsma11RTPReceiver9TrackInfoE;

/* Symbol: _ZN5imsma12AVCAssembler16addSingleNALUnitERKN7android2spINS1_7ABufferEEE */
/* Demangled: imsma::AVCAssembler::addSingleNALUnit(android::sp<android::ABuffer> const&) */
int _ZN5imsma12AVCAssembler16addSingleNALUnitERKN7android2spINS1_7ABufferEEE(void);

/* Symbol: _ZN7android14IRTPController24sVideoCapParamsFirstItemE */
/* Demangled: android::IRTPController::sVideoCapParamsFirstItem */
extern void* _ZN7android14IRTPController24sVideoCapParamsFirstItemE;

/* Symbol: _ZN7android13RTPController15setConfigParamsEPNS_17rtp_rtcp_config_tEh */
/* Demangled: android::RTPController::setConfigParams(android::rtp_rtcp_config_t*, unsigned char) */
int _ZN7android13RTPController15setConfigParamsEPNS_17rtp_rtcp_config_tEh(void);

/* Symbol: _ZN7android13RTPController6onStopEii */
/* Demangled: android::RTPController::onStop(int, int) */
int _ZN7android13RTPController6onStopEii(void);

/* Symbol: _ZN7android13RTPController8addTMMBNERKNS_2spINS_7ABufferEEE */
/* Demangled: android::RTPController::addTMMBN(android::sp<android::ABuffer> const&) */
int _ZN7android13RTPController8addTMMBNERKNS_2spINS_7ABufferEEE(void);

/* Symbol: _ZN5imsma9RTPSender12onProcessFIREh */
/* Demangled: imsma::RTPSender::onProcessFIR(unsigned char) */
int _ZN5imsma9RTPSender12onProcessFIREh(void);

/* Symbol: _ZN5imsma9RTPSender6onStopEv */
/* Demangled: imsma::RTPSender::onStop() */
int _ZN5imsma9RTPSender6onStopEv(void);

/* Symbol: _ZTVN7android4ListINS_2spINS_7ABufferEEEEE */
/* Demangled: vtable for android::List<android::sp<android::ABuffer> > */
extern void* _ZTVN7android4ListINS_2spINS_7ABufferEEEEE;

/* Symbol: _ZN5imsma9RTPSender20onProcessReportBlockERKN7android2spINS1_7ABufferEEE */
/* Demangled: imsma::RTPSender::onProcessReportBlock(android::sp<android::ABuffer> const&) */
int _ZN5imsma9RTPSender20onProcessReportBlockERKN7android2spINS1_7ABufferEEE(void);

/* Symbol: _ZN5imsma9RTPSender17notifyAdjustEncBREj */
/* Demangled: imsma::RTPSender::notifyAdjustEncBR(unsigned int) */
int _ZN5imsma9RTPSender17notifyAdjustEncBREj(void);

/* Symbol: _ZN5imsma9RTPSender15addRTPExtHeaderEN7android2spINS1_7ABufferEEE */
/* Demangled: imsma::RTPSender::addRTPExtHeader(android::sp<android::ABuffer>) */
int _ZN5imsma9RTPSender15addRTPExtHeaderEN7android2spINS1_7ABufferEEE(void);

/* Symbol: _ZN5imsma9RTPSource5isCSDERKN7android2spINS1_7ABufferEEE */
/* Demangled: imsma::RTPSource::isCSD(android::sp<android::ABuffer> const&) */
int _ZN5imsma9RTPSource5isCSDERKN7android2spINS1_7ABufferEEE(void);

/* Symbol: _ZN5imsma9RTPSourceD2Ev */
/* Demangled: imsma::RTPSource::~RTPSource() */
int _ZN5imsma9RTPSourceD2Ev(void);

/* Symbol: _ZN5imsma9RTPSender20onUpdateConfigParamsEPN7android17rtp_rtcp_config_tE */
/* Demangled: imsma::RTPSender::onUpdateConfigParams(android::rtp_rtcp_config_t*) */
int _ZN5imsma9RTPSender20onUpdateConfigParamsEPN7android17rtp_rtcp_config_tE(void);

/* Symbol: _ZN5imsma13HEVCAssemblerC1EN7android2spINS1_8AMessageEEE */
/* Demangled: imsma::HEVCAssembler::HEVCAssembler(android::sp<android::AMessage>) */
int _ZN5imsma13HEVCAssemblerC1EN7android2spINS1_8AMessageEEE(void);

/* Symbol: _ZN5imsma13HEVCAssembler5resetEv */
/* Demangled: imsma::HEVCAssembler::reset() */
int _ZN5imsma13HEVCAssembler5resetEv(void);

/* Symbol: _ZTVN7android13RTPControllerE */
/* Demangled: vtable for android::RTPController */
extern void* _ZTVN7android13RTPControllerE;

/* Symbol: _ZN5imsma11RTPReceiver17processSenderInfoERKN7android2spINS1_7ABufferEEEjh */
/* Demangled: imsma::RTPReceiver::processSenderInfo(android::sp<android::ABuffer> const&, unsigned int, unsigned char) */
int _ZN5imsma11RTPReceiver17processSenderInfoERKN7android2spINS1_7ABufferEEEjh(void);

/* Symbol: _ZN5imsma11RTPReceiver22addReceiveReportBlocksERKN7android2spINS1_7ABufferEEEh */
/* Demangled: imsma::RTPReceiver::addReceiveReportBlocks(android::sp<android::ABuffer> const&, unsigned char) */
int _ZN5imsma11RTPReceiver22addReceiveReportBlocksERKN7android2spINS1_7ABufferEEEh(void);

/* Symbol: _ZN7android13RTPController7addSDESERKNS_7AStringERKNS_2spINS_7ABufferEEE */
/* Demangled: android::RTPController::addSDES(android::AString const&, android::sp<android::ABuffer> const&) */
int _ZN7android13RTPController7addSDESERKNS_7AStringERKNS_2spINS_7ABufferEEE(void);

/* Symbol: _ZN5imsma11RTPReceiver15getNewTMMBRInfoEv */
/* Demangled: imsma::RTPReceiver::getNewTMMBRInfo() */
int _ZN5imsma11RTPReceiver15getNewTMMBRInfoEv(void);

/* Symbol: _ZTVN7android4ListIjEE */
/* Demangled: vtable for android::List<unsigned int> */
extern void* _ZTVN7android4ListIjEE;

/* Symbol: _ZN5imsma13HEVCAssemblerC2EN7android2spINS1_8AMessageEEE */
/* Demangled: imsma::HEVCAssembler::HEVCAssembler(android::sp<android::AMessage>) */
int _ZN5imsma13HEVCAssemblerC2EN7android2spINS1_8AMessageEEE(void);

/* Symbol: _ZN7android13RTPController20feedBackDecoderErrorENS_2spINS_8AMessageEEEh */
/* Demangled: android::RTPController::feedBackDecoderError(android::sp<android::AMessage>, unsigned char) */
int _ZN7android13RTPController20feedBackDecoderErrorENS_2spINS_8AMessageEEEh(void);

/* Symbol: _ZN5imsma9RTPSource15EstimateTSDelayEl */
/* Demangled: imsma::RTPSource::EstimateTSDelay(long) */
int _ZN5imsma9RTPSource15EstimateTSDelayEl(void);

/* Symbol: _ZN5imsma12AVCAssembler16submitAccessUnitERKN7android2spINS1_7ABufferEEE */
/* Demangled: imsma::AVCAssembler::submitAccessUnit(android::sp<android::ABuffer> const&) */
int _ZN5imsma12AVCAssembler16submitAccessUnitERKN7android2spINS1_7ABufferEEE(void);

/* Symbol: _ZN5imsma13HEVCAssembler10packetLostEv */
/* Demangled: imsma::HEVCAssembler::packetLost() */
int _ZN5imsma13HEVCAssembler10packetLostEv(void);

/* Symbol: _ZN7android14IRTPController18sVideoCapParamsNumE */
/* Demangled: android::IRTPController::sVideoCapParamsNum */
extern void* _ZN7android14IRTPController18sVideoCapParamsNumE;

/* Symbol: _ZN7android13RTPController5startEhh */
/* Demangled: android::RTPController::start(unsigned char, unsigned char) */
int _ZN7android13RTPController5startEhh(void);

/* Symbol: _ZN7android13RTPController12onReceiveCSDEi */
/* Demangled: android::RTPController::onReceiveCSD(int) */
int _ZN7android13RTPController12onReceiveCSDEi(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE8do_splatEPvPKvm(void);

/* Symbol: _ZN5imsma9RTPSource17processSenderInfoERKN7android2spINS1_7ABufferEEE */
/* Demangled: imsma::RTPSource::processSenderInfo(android::sp<android::ABuffer> const&) */
int _ZN5imsma9RTPSource17processSenderInfoERKN7android2spINS1_7ABufferEEE(void);

/* Symbol: _ZN7android13RTPController7addNACKERKNS_2spINS_7ABufferEEE */
/* Demangled: android::RTPController::addNACK(android::sp<android::ABuffer> const&) */
int _ZN7android13RTPController7addNACKERKNS_2spINS_7ABufferEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_compareEPKvS5_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_compareEPKvS5_(void);

/* Symbol: _ZN5imsma9RTPSender7getSSRCEv */
/* Demangled: imsma::RTPSender::getSSRC() */
int _ZN5imsma9RTPSender7getSSRCEv(void);

/* Symbol: _ZN5imsma9RTPSourceC1EjPN7android17rtp_rtcp_config_tEiRNS1_2spINS1_8AMessageEEE */
/* Demangled: imsma::RTPSource::RTPSource(unsigned int, android::rtp_rtcp_config_t*, int, android::sp<android::AMessage>&) */
int _ZN5imsma9RTPSourceC1EjPN7android17rtp_rtcp_config_tEiRNS1_2spINS1_8AMessageEEE(void);

/* Symbol: _ZN5imsma9RTPSource22addReceiverReportBlockERKN7android2spINS1_7ABufferEEE */
/* Demangled: imsma::RTPSource::addReceiverReportBlock(android::sp<android::ABuffer> const&) */
int _ZN5imsma9RTPSource22addReceiverReportBlockERKN7android2spINS1_7ABufferEEE(void);

/* Symbol: _ZN7android14IRTPController19sVideoCapParamsListE */
/* Demangled: android::IRTPController::sVideoCapParamsList */
extern void* _ZN7android14IRTPController19sVideoCapParamsListE;

/* Symbol: _ZN7android2spINS_8AMessageEEaSEOS2_ */
/* Demangled: android::sp<android::AMessage>::operator=(android::sp<android::AMessage>&&) */
int _ZN7android2spINS_8AMessageEEaSEOS2_(void);

/* Symbol: _ZN5imsma12AVCAssemblerD1Ev */
/* Demangled: imsma::AVCAssembler::~AVCAssembler() */
int _ZN5imsma12AVCAssemblerD1Ev(void);

/* Symbol: _ZN5imsma12AVCAssembler18packetLostRegisterEv */
/* Demangled: imsma::AVCAssembler::packetLostRegister() */
int _ZN5imsma12AVCAssembler18packetLostRegisterEv(void);

/* Symbol: _ZN5imsma11RTPReceiver4stopEi */
/* Demangled: imsma::RTPReceiver::stop(int) */
int _ZN5imsma11RTPReceiver4stopEi(void);

/* Symbol: _ZN5imsma9RTPSenderC2EjN7android2spI13SocketWrapperEENS2_INS1_8AMessageEEEj */
/* Demangled: imsma::RTPSender::RTPSender(unsigned int, android::sp<SocketWrapper>, android::sp<android::AMessage>, unsigned int) */
int _ZN5imsma9RTPSenderC2EjN7android2spI13SocketWrapperEENS2_INS1_8AMessageEEEj(void);

/* Symbol: _ZN7android13RTPControllerD0Ev */
/* Demangled: android::RTPController::~RTPController() */
int _ZN7android13RTPControllerD0Ev(void);

/* Symbol: _ZN5imsma9RTPSender17onQueueAccessUnitERKN7android2spINS1_7ABufferEEE */
/* Demangled: imsma::RTPSender::onQueueAccessUnit(android::sp<android::ABuffer> const&) */
int _ZN5imsma9RTPSender17onQueueAccessUnitERKN7android2spINS1_7ABufferEEE(void);

/* Symbol: _ZN5imsma12AVCAssembler30addSingleTimeAggregationPacketERKN7android2spINS1_7ABufferEEE */
/* Demangled: imsma::AVCAssembler::addSingleTimeAggregationPacket(android::sp<android::ABuffer> const&) */
int _ZN5imsma12AVCAssembler30addSingleTimeAggregationPacketERKN7android2spINS1_7ABufferEEE(void);

/* Symbol: _ZN5imsma11RTPReceiver8isActiveEh */
/* Demangled: imsma::RTPReceiver::isActive(unsigned char) */
int _ZN5imsma11RTPReceiver8isActiveEh(void);

/* Symbol: _ZN5imsma11RTPReceiver23onPeerResumedSendStreamEh */
/* Demangled: imsma::RTPReceiver::onPeerResumedSendStream(unsigned char) */
int _ZN5imsma11RTPReceiver23onPeerResumedSendStreamEh(void);

/* Symbol: _ZN5imsma9RTPSource20peerPausedSendStreamEv */
/* Demangled: imsma::RTPSource::peerPausedSendStream() */
int _ZN5imsma9RTPSource20peerPausedSendStreamEv(void);

/* Symbol: _ZN5imsma12RTPAssembler9CopyMetasERKN7android2spINS1_7ABufferEEES6_ */
/* Demangled: imsma::RTPAssembler::CopyMetas(android::sp<android::ABuffer> const&, android::sp<android::ABuffer> const&) */
int _ZN5imsma12RTPAssembler9CopyMetasERKN7android2spINS1_7ABufferEEES6_(void);

/* Symbol: _ZN5imsma13HEVCAssemblerD2Ev */
/* Demangled: imsma::HEVCAssembler::~HEVCAssembler() */
int _ZN5imsma13HEVCAssemblerD2Ev(void);

/* Symbol: _ZN7android14IRTPController13getCapabilityEPPNS_21rtp_rtcp_capability_tEhhj */
/* Demangled: android::IRTPController::getCapability(android::rtp_rtcp_capability_t**, unsigned char, unsigned char, unsigned int) */
int _ZN7android14IRTPController13getCapabilityEPPNS_21rtp_rtcp_capability_tEhhj(void);

/* Symbol: _ZN5imsma11RTPReceiverD1Ev */
/* Demangled: imsma::RTPReceiver::~RTPReceiver() */
int _ZN5imsma11RTPReceiverD1Ev(void);

/* Symbol: _ZN5imsma13HEVCAssembler10flushQueueEv */
/* Demangled: imsma::HEVCAssembler::flushQueue() */
int _ZN5imsma13HEVCAssembler10flushQueueEv(void);

/* Symbol: _ZN7android13RTPController21peerResumedSendStreamEh */
/* Demangled: android::RTPController::peerResumedSendStream(unsigned char) */
int _ZN7android13RTPController21peerResumedSendStreamEh(void);

/* Symbol: _ZN7android13RTPController23videoRTCPPacketCallBackEPvRKNS_2spINS_7ABufferEEE */
/* Demangled: android::RTPController::videoRTCPPacketCallBack(void*, android::sp<android::ABuffer> const&) */
int _ZN7android13RTPController23videoRTCPPacketCallBackEPvRKNS_2spINS_7ABufferEEE(void);

/* Symbol: _ZN7android13RTPController10onSendRTCPERKNS_2spINS_8AMessageEEE */
/* Demangled: android::RTPController::onSendRTCP(android::sp<android::AMessage> const&) */
int _ZN7android13RTPController10onSendRTCPERKNS_2spINS_8AMessageEEE(void);

/* Symbol: _ZN7android13RTPController12onReceiveSLIENS_2spINS_7ABufferEEE */
/* Demangled: android::RTPController::onReceiveSLI(android::sp<android::ABuffer>) */
int _ZN7android13RTPController12onReceiveSLIENS_2spINS_7ABufferEEE(void);

/* Symbol: _ZN7android13RTPController12onReceiveFIRENS_2spINS_7ABufferEEE */
/* Demangled: android::RTPController::onReceiveFIR(android::sp<android::ABuffer>) */
int _ZN7android13RTPController12onReceiveFIRENS_2spINS_7ABufferEEE(void);

/* Symbol: _ZN5imsma9RTPSender15getRTPSentCountEv */
/* Demangled: imsma::RTPSender::getRTPSentCount() */
int _ZN5imsma9RTPSender15getRTPSentCountEv(void);

/* Symbol: _ZN5imsma9RTPSender23requestRTPQueueDurationEv */
/* Demangled: imsma::RTPSender::requestRTPQueueDuration() */
int _ZN5imsma9RTPSender23requestRTPQueueDurationEv(void);

/* Symbol: _ZN5imsma9RTPSource5resetEv */
/* Demangled: imsma::RTPSource::reset() */
int _ZN5imsma9RTPSource5resetEv(void);

/* Symbol: _ZN5imsma13HEVCAssembler10isKeyFrameERKN7android2spINS1_7ABufferEEE */
/* Demangled: imsma::HEVCAssembler::isKeyFrame(android::sp<android::ABuffer> const&) */
int _ZN5imsma13HEVCAssembler10isKeyFrameERKN7android2spINS1_7ABufferEEE(void);

/* Symbol: _ZN7android13RTPController7onStartEii */
/* Demangled: android::RTPController::onStart(int, int) */
int _ZN7android13RTPController7onStartEii(void);

/* Symbol: _ZN5imsma11RTPReceiver22onPeerPausedSendStreamEh */
/* Demangled: imsma::RTPReceiver::onPeerPausedSendStream(unsigned char) */
int _ZN5imsma11RTPReceiver22onPeerPausedSendStreamEh(void);

/* Symbol: _ZTTN7android13RTPControllerE */
/* Demangled: VTT for android::RTPController */
extern void* _ZTTN7android13RTPControllerE;

/* Symbol: _ZN5imsma9RTPSender15queueAccessUnitERKN7android2spINS1_7ABufferEEE */
/* Demangled: imsma::RTPSender::queueAccessUnit(android::sp<android::ABuffer> const&) */
int _ZN5imsma9RTPSender15queueAccessUnitERKN7android2spINS1_7ABufferEEE(void);

/* Symbol: _ZTv0_n24_N7android13RTPControllerD1Ev */
/* Demangled: virtual thunk to android::RTPController::~RTPController() */
int _ZTv0_n24_N7android13RTPControllerD1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN5imsma9RTPSender23ifRiseBitrateBaseSignalEPi */
/* Demangled: imsma::RTPSender::ifRiseBitrateBaseSignal(int*) */
int _ZN5imsma9RTPSender23ifRiseBitrateBaseSignalEPi(void);

/* Symbol: _ZN5imsma9RTPSource15extendSeqNumberEjj */
/* Demangled: imsma::RTPSource::extendSeqNumber(unsigned int, unsigned int) */
int _ZN5imsma9RTPSource15extendSeqNumberEjj(void);

/* Symbol: _ZN7android13RTPController23recvDecoderRefreshPointEh */
/* Demangled: android::RTPController::recvDecoderRefreshPoint(unsigned char) */
int _ZN7android13RTPController23recvDecoderRefreshPointEh(void);

/* Symbol: _ZN5imsma9RTPSender5startEv */
/* Demangled: imsma::RTPSender::start() */
int _ZN5imsma9RTPSender5startEv(void);

/* Symbol: _ZN5imsma9RTPSender20processGenericNACKFBEN7android2spINS1_7ABufferEEE */
/* Demangled: imsma::RTPSender::processGenericNACKFB(android::sp<android::ABuffer>) */
int _ZN5imsma9RTPSender20processGenericNACKFBEN7android2spINS1_7ABufferEEE(void);

/* Symbol: _ZN5imsma9RTPSender13getMaxBitrateEv */
/* Demangled: imsma::RTPSender::getMaxBitrate() */
int _ZN5imsma9RTPSender13getMaxBitrateEv(void);

/* Symbol: _ZN5imsma9RTPSourceD1Ev */
/* Demangled: imsma::RTPSource::~RTPSource() */
int _ZN5imsma9RTPSourceD1Ev(void);

/* Symbol: _ZN5imsma9RTPSender14queueRTPPacketEN7android2spINS1_7ABufferEEE */
/* Demangled: imsma::RTPSender::queueRTPPacket(android::sp<android::ABuffer>) */
int _ZN5imsma9RTPSender14queueRTPPacketEN7android2spINS1_7ABufferEEE(void);

/* Symbol: _ZN5imsma11RTPReceiver10changeSSRCERN7android2spINS1_7ABufferEEEij */
/* Demangled: imsma::RTPReceiver::changeSSRC(android::sp<android::ABuffer>&, int, unsigned int) */
int _ZN5imsma11RTPReceiver10changeSSRCERN7android2spINS1_7ABufferEEEij(void);

/* Symbol: _ZN5imsma9RTPSource18updateConfigParamsEPN7android17rtp_rtcp_config_tE */
/* Demangled: imsma::RTPSource::updateConfigParams(android::rtp_rtcp_config_t*) */
int _ZN5imsma9RTPSource18updateConfigParamsEPN7android17rtp_rtcp_config_tE(void);

/* Symbol: _ZNK7android6VectorINS_2spINS_7ABufferEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<android::sp<android::ABuffer> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spINS_7ABufferEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZTv0_n24_N7android14IRTPControllerD1Ev */
/* Demangled: virtual thunk to android::IRTPController::~IRTPController() */
int _ZTv0_n24_N7android14IRTPControllerD1Ev(void);

/* Symbol: _ZN7android13RTPController14setEventNotifyERKNS_2spINS_8AMessageEEE */
/* Demangled: android::RTPController::setEventNotify(android::sp<android::AMessage> const&) */
int _ZN7android13RTPController14setEventNotifyERKNS_2spINS_8AMessageEEE(void);

/* Symbol: _ZN5imsma11RTPReceiverC2EN7android2spINS1_8AMessageEEEj */
/* Demangled: imsma::RTPReceiver::RTPReceiver(android::sp<android::AMessage>, unsigned int) */
int _ZN5imsma11RTPReceiverC2EN7android2spINS1_8AMessageEEEj(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5imsma11RTPReceiver9TrackInfoEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<android::sp<imsma::RTPReceiver::TrackInfo> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5imsma11RTPReceiver9TrackInfoEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN7android13RTPController17onSetConfigParamsEPNS_17rtp_rtcp_config_tEh */
/* Demangled: android::RTPController::onSetConfigParams(android::rtp_rtcp_config_t*, unsigned char) */
int _ZN7android13RTPController17onSetConfigParamsEPNS_17rtp_rtcp_config_tEh(void);

/* Symbol: _ZN5imsma9RTPSender8isActiveEv */
/* Demangled: imsma::RTPSender::isActive() */
int _ZN5imsma9RTPSender8isActiveEv(void);

/* Symbol: _ZN5imsma9RTPSource12getLostCountEv */
/* Demangled: imsma::RTPSource::getLostCount() */
int _ZN5imsma9RTPSource12getLostCountEv(void);

/* Symbol: _ZN7android13RTPController12findSocketFdEt */
/* Demangled: android::RTPController::findSocketFd(unsigned short) */
int _ZN7android13RTPController12findSocketFdEt(void);

/* Symbol: _ZN5imsma9RTPSender13addSenderInfoERKN7android2spINS1_7ABufferEEE */
/* Demangled: imsma::RTPSender::addSenderInfo(android::sp<android::ABuffer> const&) */
int _ZN5imsma9RTPSender13addSenderInfoERKN7android2spINS1_7ABufferEEE(void);

/* Symbol: _ZN5imsma9RTPSource12GetdebugInfoEbPij */
/* Demangled: imsma::RTPSource::GetdebugInfo(bool, int*, unsigned int) */
int _ZN5imsma9RTPSource12GetdebugInfoEbPij(void);

/* Symbol: _ZN5imsma9RTPSource24writeLostInfoFirstNotCSDEv */
/* Demangled: imsma::RTPSource::writeLostInfoFirstNotCSD() */
int _ZN5imsma9RTPSource24writeLostInfoFirstNotCSDEv(void);

/* Symbol: _ZN5imsma13HEVCAssembler30addSingleTimeAggregationPacketERKN7android2spINS1_7ABufferEEE */
/* Demangled: imsma::HEVCAssembler::addSingleTimeAggregationPacket(android::sp<android::ABuffer> const&) */
int _ZN5imsma13HEVCAssembler30addSingleTimeAggregationPacketERKN7android2spINS1_7ABufferEEE(void);

/* Symbol: _ZN7android13RTPController13setAccuNotifyERKNS_2spINS_8AMessageEEEh */
/* Demangled: android::RTPController::setAccuNotify(android::sp<android::AMessage> const&, unsigned char) */
int _ZN7android13RTPController13setAccuNotifyERKNS_2spINS_8AMessageEEEh(void);

/* Symbol: _ZN7android13RTPController19setVideoOrientationEhhh */
/* Demangled: android::RTPController::setVideoOrientation(unsigned char, unsigned char, unsigned char) */
int _ZN7android13RTPController19setVideoOrientationEhhh(void);

/* Symbol: _ZN7android13RTPController14onReceiveTMMBRENS_2spINS_7ABufferEEE */
/* Demangled: android::RTPController::onReceiveTMMBR(android::sp<android::ABuffer>) */
int _ZN7android13RTPController14onReceiveTMMBRENS_2spINS_7ABufferEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE12do_constructEPvm(void);

/* Symbol: _ZN5imsma9RTPSender19updateStatisticInfoEN7android2spINS1_7ABufferEEE */
/* Demangled: imsma::RTPSender::updateStatisticInfo(android::sp<android::ABuffer>) */
int _ZN5imsma9RTPSender19updateStatisticInfoEN7android2spINS1_7ABufferEEE(void);

/* Symbol: _ZN5imsma11RTPReceiver20onUpdateConfigParamsEPN7android17rtp_rtcp_config_tEi */
/* Demangled: imsma::RTPReceiver::onUpdateConfigParams(android::rtp_rtcp_config_t*, int) */
int _ZN5imsma11RTPReceiver20onUpdateConfigParamsEPN7android17rtp_rtcp_config_tEi(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5imsma11RTPReceiver9TrackInfoEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<android::sp<imsma::RTPReceiver::TrackInfo> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5imsma11RTPReceiver9TrackInfoEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZTVN5imsma12RTPAssemblerE */
/* Demangled: vtable for imsma::RTPAssembler */
extern void* _ZTVN5imsma12RTPAssemblerE;

/* Symbol: _ZN7android14IRTPController15sVideoCapParamsE */
/* Demangled: android::IRTPController::sVideoCapParams */
extern void* _ZN7android14IRTPController15sVideoCapParamsE;

/* Symbol: _ZN5imsma9RTPSender4stopEv */
/* Demangled: imsma::RTPSender::stop() */
int _ZN5imsma9RTPSender4stopEv(void);

/* Symbol: _ZN5imsma12AVCAssemblerD0Ev */
/* Demangled: imsma::AVCAssembler::~AVCAssembler() */
int _ZN5imsma12AVCAssemblerD0Ev(void);

/* Symbol: _ZN7android13RTPController9addStreamEhh */
/* Demangled: android::RTPController::addStream(unsigned char, unsigned char) */
int _ZN7android13RTPController9addStreamEhh(void);

/* Symbol: _ZN5imsma11RTPReceiver20peerPausedSendStreamEh */
/* Demangled: imsma::RTPReceiver::peerPausedSendStream(unsigned char) */
int _ZN5imsma11RTPReceiver20peerPausedSendStreamEh(void);

/* Symbol: _ZN5imsma11RTPReceiver14onRemoveStreamEi */
/* Demangled: imsma::RTPReceiver::onRemoveStream(int) */
int _ZN5imsma11RTPReceiver14onRemoveStreamEi(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBIMSMA_RTP_H */
