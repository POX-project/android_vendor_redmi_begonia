/*
 * Reverse-Engineered ABI Specification for: libimsma.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libimsma.so
 */

#ifndef BEGONIA_RE_LIBIMSMA_H
#define BEGONIA_RE_LIBIMSMA_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN7android16ImsMediaReceiverD2Ev */
/* Demangled: android::ImsMediaReceiver::~ImsMediaReceiver() */
int _ZN7android16ImsMediaReceiverD2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN7android5ImsMa27GetTurnOffVideoByLocalStateEv */
/* Demangled: android::ImsMa::GetTurnOffVideoByLocalState() */
int _ZN7android5ImsMa27GetTurnOffVideoByLocalStateEv(void);

/* Symbol: _ZN7android22printCodecBitrateTableEjP20_video_media_bitrate */
/* Demangled: android::printCodecBitrateTable(unsigned int, _video_media_bitrate*) */
int _ZN7android22printCodecBitrateTableEjP20_video_media_bitrate(void);

/* Symbol: _ZN7android5ImsMa14SetPeerSurfaceERKNS_2spINS_7SurfaceEEE */
/* Demangled: android::ImsMa::SetPeerSurface(android::sp<android::Surface> const&) */
int _ZN7android5ImsMa14SetPeerSurfaceERKNS_2spINS_7SurfaceEEE(void);

/* Symbol: _ZN7android5ImsMa19SetRecordParametersENS_16record_quality_tEPc */
/* Demangled: android::ImsMa::SetRecordParameters(android::record_quality_t, char*) */
int _ZN7android5ImsMa19SetRecordParametersENS_16record_quality_tEPc(void);

/* Symbol: _ZTVN7android16ImsMediaReceiverE */
/* Demangled: vtable for android::ImsMediaReceiver */
extern void* _ZTVN7android16ImsMediaReceiverE;

/* Symbol: _ZTVN7android5ImsMa12MediaSessionE */
/* Demangled: vtable for android::ImsMa::MediaSession */
extern void* _ZTVN7android5ImsMa12MediaSessionE;

/* Symbol: _ZN7android16ImsMediaReceiver5PauseEv */
/* Demangled: android::ImsMediaReceiver::Pause() */
int _ZN7android16ImsMediaReceiver5PauseEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN7android14ImsMediaSender17onMessageReceivedERKNS_2spINS_8AMessageEEE */
/* Demangled: android::ImsMediaSender::onMessageReceived(android::sp<android::AMessage> const&) */
int _ZN7android14ImsMediaSender17onMessageReceivedERKNS_2spINS_8AMessageEEE(void);

/* Symbol: _ZN7android5ImsMa10PreConnectEiPcjj */
/* Demangled: android::ImsMa::PreConnect(int, char*, unsigned int, unsigned int) */
int _ZN7android5ImsMa10PreConnectEiPcjj(void);

/* Symbol: _ZN7android17PrintRtpRtpConfigEPNS_17rtp_rtcp_config_tE */
/* Demangled: android::PrintRtpRtpConfig(android::rtp_rtcp_config_t*) */
int _ZN7android17PrintRtpRtpConfigEPNS_17rtp_rtcp_config_tE(void);

/* Symbol: _ZN7android14ImsMediaSender4StopEv */
/* Demangled: android::ImsMediaSender::Stop() */
int _ZN7android14ImsMediaSender4StopEv(void);

/* Symbol: _ZN7android5ImsMa9SetHold_lENS_13ma_datapath_tENS_17imsma_hold_mode_tENS_22imsma_hold_direction_tE */
/* Demangled: android::ImsMa::SetHold_l(android::ma_datapath_t, android::imsma_hold_mode_t, android::imsma_hold_direction_t) */
int _ZN7android5ImsMa9SetHold_lENS_13ma_datapath_tENS_17imsma_hold_mode_tENS_22imsma_hold_direction_tE(void);

/* Symbol: _ZN7android19printHEVCCodecParamEP15hevc_codec_fmtp */
/* Demangled: android::printHEVCCodecParam(hevc_codec_fmtp*) */
int _ZN7android19printHEVCCodecParamEP15hevc_codec_fmtp(void);

/* Symbol: _ZN7android14ImsMediaSenderC2Ei */
/* Demangled: android::ImsMediaSender::ImsMediaSender(int) */
int _ZN7android14ImsMediaSenderC2Ei(void);

/* Symbol: _ZN7android14ImsMediaSender5StartENS_12VT_CALL_MODEE */
/* Demangled: android::ImsMediaSender::Start(android::VT_CALL_MODE) */
int _ZN7android14ImsMediaSender5StartENS_12VT_CALL_MODEE(void);

/* Symbol: _ZN7android5ImsMa10mSensorCntE */
/* Demangled: android::ImsMa::mSensorCnt */
extern void* _ZN7android5ImsMa10mSensorCntE;

/* Symbol: _ZN7android5ImsMa18getCodecCapabilityEPP16video_codec_fmtpPijNS_10VT_QualityE */
/* Demangled: android::ImsMa::getCodecCapability(video_codec_fmtp**, int*, unsigned int, android::VT_Quality) */
int _ZN7android5ImsMa18getCodecCapabilityEPP16video_codec_fmtpPijNS_10VT_QualityE(void);

/* Symbol: _ZN7android5ImsMaC2Ej */
/* Demangled: android::ImsMa::ImsMa(unsigned int) */
int _ZN7android5ImsMaC2Ej(void);

/* Symbol: _ZN7android5ImsMaD1Ev */
/* Demangled: android::ImsMa::~ImsMa() */
int _ZN7android5ImsMaD1Ev(void);

/* Symbol: _ZN7android5ImsMa6ResumeENS_13ma_datapath_tEPNS_27imsma_pause_resume_params_tE */
/* Demangled: android::ImsMa::Resume(android::ma_datapath_t, android::imsma_pause_resume_params_t*) */
int _ZN7android5ImsMa6ResumeENS_13ma_datapath_tEPNS_27imsma_pause_resume_params_tE(void);

/* Symbol: _ZN7android5ImsMa8Resume_lENS_13ma_datapath_tEi */
/* Demangled: android::ImsMa::Resume_l(android::ma_datapath_t, int) */
int _ZN7android5ImsMa8Resume_lENS_13ma_datapath_tEi(void);

/* Symbol: _ZN7android14ImsMediaSenderD1Ev */
/* Demangled: android::ImsMediaSender::~ImsMediaSender() */
int _ZN7android14ImsMediaSenderD1Ev(void);

/* Symbol: _ZN7android14ImsMediaSender20setCurrentCameraInfoEiii */
/* Demangled: android::ImsMediaSender::setCurrentCameraInfo(int, int, int) */
int _ZN7android14ImsMediaSender20setCurrentCameraInfoEiii(void);

/* Symbol: _ZN7android14ImsMediaSender6ResumeEv */
/* Demangled: android::ImsMediaSender::Resume() */
int _ZN7android14ImsMediaSender6ResumeEv(void);

/* Symbol: _ZN7android5ImsMa12MediaSessionD1Ev */
/* Demangled: android::ImsMa::MediaSession::~MediaSession() */
int _ZN7android5ImsMa12MediaSessionD1Ev(void);

/* Symbol: _ZN7android5ImsMa12MediaSession17onMessageReceivedERKNS_2spINS_8AMessageEEE */
/* Demangled: android::ImsMa::MediaSession::onMessageReceived(android::sp<android::AMessage> const&) */
int _ZN7android5ImsMa12MediaSession17onMessageReceivedERKNS_2spINS_8AMessageEEE(void);

/* Symbol: _ZN7android5ImsMa19setSensorParametersEPNS_17sensor_info_vilteEi */
/* Demangled: android::ImsMa::setSensorParameters(android::sensor_info_vilte*, int) */
int _ZN7android5ImsMa19setSensorParametersEPNS_17sensor_info_vilteEi(void);

/* Symbol: mSensorInfos */
/* Demangled: mSensorInfos */
extern void* mSensorInfos;

/* Symbol: _ZN7android5ImsMa12SetVTQualityENS_10VT_QualityE */
/* Demangled: android::ImsMa::SetVTQuality(android::VT_Quality) */
int _ZN7android5ImsMa12SetVTQualityENS_10VT_QualityE(void);

/* Symbol: _ZN7android16ImsMediaReceiver16UpdateSinkConfigEP16video_codec_fmtp */
/* Demangled: android::ImsMediaReceiver::UpdateSinkConfig(video_codec_fmtp*) */
int _ZN7android16ImsMediaReceiver16UpdateSinkConfigEP16video_codec_fmtp(void);

/* Symbol: _ZN7android5ImsMa12MediaSession4InitEj */
/* Demangled: android::ImsMa::MediaSession::Init(unsigned int) */
int _ZN7android5ImsMa12MediaSession4InitEj(void);

/* Symbol: _ZN7android5ImsMa15mGetCodecCapPtrE */
/* Demangled: android::ImsMa::mGetCodecCapPtr */
extern void* _ZN7android5ImsMa15mGetCodecCapPtrE;

/* Symbol: _ZN7android5ImsMa11ConnectSockEihtPh */
/* Demangled: android::ImsMa::ConnectSock(int, unsigned char, unsigned short, unsigned char*) */
int _ZN7android5ImsMa11ConnectSockEihtPh(void);

/* Symbol: _ZN7android5ImsMa19transfer2VtCallModeEi */
/* Demangled: android::ImsMa::transfer2VtCallMode(int) */
int _ZN7android5ImsMa19transfer2VtCallModeEi(void);

/* Symbol: _ZN7android16ImsMediaReceiver6ResumeEv */
/* Demangled: android::ImsMediaReceiver::Resume() */
int _ZN7android16ImsMediaReceiver6ResumeEv(void);

/* Symbol: _ZN7android14ImsMediaSender15SetSourceConfigEP16video_codec_fmtpi */
/* Demangled: android::ImsMediaSender::SetSourceConfig(video_codec_fmtp*, int) */
int _ZN7android14ImsMediaSender15SetSourceConfigEP16video_codec_fmtpi(void);

/* Symbol: _ZN7android14ImsMediaSender22getBufferQueueProducerEPNS_2spINS_22IGraphicBufferProducerEEE */
/* Demangled: android::ImsMediaSender::getBufferQueueProducer(android::sp<android::IGraphicBufferProducer>*) */
int _ZN7android14ImsMediaSender22getBufferQueueProducerEPNS_2spINS_22IGraphicBufferProducerEEE(void);

/* Symbol: _ZN7android5ImsMa15setLowPowerModeEb */
/* Demangled: android::ImsMa::setLowPowerMode(bool) */
int _ZN7android5ImsMa15setLowPowerModeEb(void);

/* Symbol: _ZN7android5ImsMa20getCodecBitrateTableEPjPP20_video_media_bitratej */
/* Demangled: android::ImsMa::getCodecBitrateTable(unsigned int*, _video_media_bitrate**, unsigned int) */
int _ZN7android5ImsMa20getCodecBitrateTableEPjPP20_video_media_bitratej(void);

/* Symbol: _ZN7android14ImsMediaSender16adjustEncBitRateEi */
/* Demangled: android::ImsMediaSender::adjustEncBitRate(int) */
int _ZN7android14ImsMediaSender16adjustEncBitRateEi(void);

/* Symbol: _ZN7android5ImsMa20getRtpRtcpCapabilityEPPNS_21rtp_rtcp_capability_tEj */
/* Demangled: android::ImsMa::getRtpRtcpCapability(android::rtp_rtcp_capability_t**, unsigned int) */
int _ZN7android5ImsMa20getRtpRtcpCapabilityEPPNS_21rtp_rtcp_capability_tEj(void);

/* Symbol: _ZN7android5ImsMa11modifyFlagsEjNS0_8FlagModeE */
/* Demangled: android::ImsMa::modifyFlags(unsigned int, android::ImsMa::FlagMode) */
int _ZN7android5ImsMa11modifyFlagsEjNS0_8FlagModeE(void);

/* Symbol: _ZN7android5ImsMa15InitMediaConfigEPNS_12media_configE */
/* Demangled: android::ImsMa::InitMediaConfig(android::media_config*) */
int _ZN7android5ImsMa15InitMediaConfigEPNS_12media_configE(void);

/* Symbol: _ZN7android16ImsMediaReceiverC1Ei */
/* Demangled: android::ImsMediaReceiver::ImsMediaReceiver(int) */
int _ZN7android16ImsMediaReceiverC1Ei(void);

/* Symbol: _ZN7android5ImsMa14setSignalLevelEi */
/* Demangled: android::ImsMa::setSignalLevel(int) */
int _ZN7android5ImsMa14setSignalLevelEi(void);

/* Symbol: _ZN7android5ImsMa10CheckSetBREPNS_12media_configE */
/* Demangled: android::ImsMa::CheckSetBR(android::media_config*) */
int _ZN7android5ImsMa10CheckSetBREPNS_12media_configE(void);

/* Symbol: _ZN7android5ImsMa17UpdateMediaConfigEPNS_12media_configE */
/* Demangled: android::ImsMa::UpdateMediaConfig(android::media_config*) */
int _ZN7android5ImsMa17UpdateMediaConfigEPNS_12media_configE(void);

/* Symbol: _ZN7android16ImsMediaReceiverD0Ev */
/* Demangled: android::ImsMediaReceiver::~ImsMediaReceiver() */
int _ZN7android16ImsMediaReceiverD0Ev(void);

/* Symbol: _ZN7android16ImsMediaReceiver11StartRecordENS_13record_mode_tE */
/* Demangled: android::ImsMediaReceiver::StartRecord(android::record_mode_t) */
int _ZN7android16ImsMediaReceiver11StartRecordENS_13record_mode_tE(void);

/* Symbol: _ZN7android5ImsMa16setHandoverStateEb */
/* Demangled: android::ImsMa::setHandoverState(bool) */
int _ZN7android5ImsMa16setHandoverStateEb(void);

/* Symbol: _ZN7android5ImsMa16makeMyselfSocketEPNS_17rtp_rtcp_config_tE */
/* Demangled: android::ImsMa::makeMyselfSocket(android::rtp_rtcp_config_t*) */
int _ZN7android5ImsMa16makeMyselfSocketEPNS_17rtp_rtcp_config_tE(void);

/* Symbol: _ZN7android5ImsMa5StartENS_13ma_datapath_tE */
/* Demangled: android::ImsMa::Start(android::ma_datapath_t) */
int _ZN7android5ImsMa5StartENS_13ma_datapath_tE(void);

/* Symbol: _ZN7android14ImsMediaSender5PauseEv */
/* Demangled: android::ImsMediaSender::Pause() */
int _ZN7android14ImsMediaSender5PauseEv(void);

/* Symbol: _ZN7android14ImsMediaSender16setAvpfParamtersERKNS_2spINS_8AMessageEEE */
/* Demangled: android::ImsMediaSender::setAvpfParamters(android::sp<android::AMessage> const&) */
int _ZN7android14ImsMediaSender16setAvpfParamtersERKNS_2spINS_8AMessageEEE(void);

/* Symbol: _ZN7android5ImsMa8SnapShotEPKcNS_15snapshot_mode_tE */
/* Demangled: android::ImsMa::SnapShot(char const*, android::snapshot_mode_t) */
int _ZN7android5ImsMa8SnapShotEPKcNS_15snapshot_mode_tE(void);

/* Symbol: _ZN7android5ImsMa6Stop_lENS_13ma_datapath_tEi */
/* Demangled: android::ImsMa::Stop_l(android::ma_datapath_t, int) */
int _ZN7android5ImsMa6Stop_lENS_13ma_datapath_tEi(void);

/* Symbol: _ZN7android5ImsMa17SetTurnOffVideo_lENS_13ma_datapath_tENS_27imsma_turn_off_video_mode_tENS_32imsma_turn_off_video_direction_tE */
/* Demangled: android::ImsMa::SetTurnOffVideo_l(android::ma_datapath_t, android::imsma_turn_off_video_mode_t, android::imsma_turn_off_video_direction_t) */
int _ZN7android5ImsMa17SetTurnOffVideo_lENS_13ma_datapath_tENS_27imsma_turn_off_video_mode_tENS_32imsma_turn_off_video_direction_tE(void);

/* Symbol: _ZN7android16ImsMediaReceiver10SetSurfaceERKNS_2spINS_7SurfaceEEE */
/* Demangled: android::ImsMediaReceiver::SetSurface(android::sp<android::Surface> const&) */
int _ZN7android16ImsMediaReceiver10SetSurfaceERKNS_2spINS_7SurfaceEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE8do_splatEPvPKvm(void);

/* Symbol: _ZN7android5ImsMaD2Ev */
/* Demangled: android::ImsMa::~ImsMa() */
int _ZN7android5ImsMaD2Ev(void);

/* Symbol: _ZN7android5ImsMa23setDeviceRotationDegreeEi */
/* Demangled: android::ImsMa::setDeviceRotationDegree(int) */
int _ZN7android5ImsMa23setDeviceRotationDegreeEi(void);

/* Symbol: _ZN7android16ImsMediaReceiver4initEj */
/* Demangled: android::ImsMediaReceiver::init(unsigned int) */
int _ZN7android16ImsMediaReceiver4initEj(void);

/* Symbol: _ZN7android14ImsMediaSenderD2Ev */
/* Demangled: android::ImsMediaSender::~ImsMediaSender() */
int _ZN7android14ImsMediaSenderD2Ev(void);

/* Symbol: _ZN7android5ImsMa12MediaSessionD2Ev */
/* Demangled: android::ImsMa::MediaSession::~MediaSession() */
int _ZN7android5ImsMa12MediaSessionD2Ev(void);

/* Symbol: _ZN7android5ImsMa12MediaSession5ResetEv */
/* Demangled: android::ImsMa::MediaSession::Reset() */
int _ZN7android5ImsMa12MediaSession5ResetEv(void);

/* Symbol: _ZN7android5ImsMa7Pause_lENS_13ma_datapath_tEi */
/* Demangled: android::ImsMa::Pause_l(android::ma_datapath_t, int) */
int _ZN7android5ImsMa7Pause_lENS_13ma_datapath_tEi(void);

/* Symbol: _ZN7android5ImsMa22getBufferQueueProducerEPNS_2spINS_22IGraphicBufferProducerEEE */
/* Demangled: android::ImsMa::getBufferQueueProducer(android::sp<android::IGraphicBufferProducer>*) */
int _ZN7android5ImsMa22getBufferQueueProducerEPNS_2spINS_22IGraphicBufferProducerEEE(void);

/* Symbol: _ZN7android16ImsMediaReceiver17onMessageReceivedERKNS_2spINS_8AMessageEEE */
/* Demangled: android::ImsMediaReceiver::onMessageReceived(android::sp<android::AMessage> const&) */
int _ZN7android16ImsMediaReceiver17onMessageReceivedERKNS_2spINS_8AMessageEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_compareEPKvS5_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_compareEPKvS5_(void);

/* Symbol: _ZN7android14ImsMediaSender4initERKNS_2spINS_14IRTPControllerEEEj */
/* Demangled: android::ImsMediaSender::init(android::sp<android::IRTPController> const&, unsigned int) */
int _ZN7android14ImsMediaSender4initERKNS_2spINS_14IRTPControllerEEEj(void);

/* Symbol: _ZN7android5ImsMa16sMultiInstanceIDE */
/* Demangled: android::ImsMa::sMultiInstanceID */
extern void* _ZN7android5ImsMa16sMultiInstanceIDE;

/* Symbol: _ZN7android5ImsMa20PostAndAwaitResponseEPNS_2spINS_8AMessageEEE */
/* Demangled: android::ImsMa::PostAndAwaitResponse(android::sp<android::AMessage>*) */
int _ZN7android5ImsMa20PostAndAwaitResponseEPNS_2spINS_8AMessageEEE(void);

/* Symbol: _ZN7android5ImsMa5ResetENS_13ma_datapath_tEi */
/* Demangled: android::ImsMa::Reset(android::ma_datapath_t, int) */
int _ZN7android5ImsMa5ResetENS_13ma_datapath_tEi(void);

/* Symbol: _ZN7android5ImsMa26GetTurnOffVideoByPeerStateEv */
/* Demangled: android::ImsMa::GetTurnOffVideoByPeerState() */
int _ZN7android5ImsMa26GetTurnOffVideoByPeerStateEv(void);

/* Symbol: _ZN7android14ImsMediaSender9setNotifyERNS_2spINS_8AMessageEEE */
/* Demangled: android::ImsMediaSender::setNotify(android::sp<android::AMessage>&) */
int _ZN7android14ImsMediaSender9setNotifyERNS_2spINS_8AMessageEEE(void);

/* Symbol: _ZN7android5ImsMa4InitENS_13ma_datapath_tE */
/* Demangled: android::ImsMa::Init(android::ma_datapath_t) */
int _ZN7android5ImsMa4InitENS_13ma_datapath_tE(void);

/* Symbol: _ZN7android17compareCodecParamEP16video_codec_fmtpS1_ */
/* Demangled: android::compareCodecParam(video_codec_fmtp*, video_codec_fmtp*) */
int _ZN7android17compareCodecParamEP16video_codec_fmtpS1_(void);

/* Symbol: _ZN7android5ImsMa11StartRecordENS_13record_mode_tE */
/* Demangled: android::ImsMa::StartRecord(android::record_mode_t) */
int _ZN7android5ImsMa11StartRecordENS_13record_mode_tE(void);

/* Symbol: _ZN7android16ImsMediaReceiverC2Ei */
/* Demangled: android::ImsMediaReceiver::ImsMediaReceiver(int) */
int _ZN7android16ImsMediaReceiverC2Ei(void);

/* Symbol: _ZN7android16ImsMediaReceiver10StopRecordEv */
/* Demangled: android::ImsMediaReceiver::StopRecord() */
int _ZN7android16ImsMediaReceiver10StopRecordEv(void);

/* Symbol: _ZN7android5ImsMa12MediaSession9SetNotifyERKNS_2spINS_8AMessageEEE */
/* Demangled: android::ImsMa::MediaSession::SetNotify(android::sp<android::AMessage> const&) */
int _ZN7android5ImsMa12MediaSession9SetNotifyERKNS_2spINS_8AMessageEEE(void);

/* Symbol: _ZN7android5ImsMa17mSensorResolutionE */
/* Demangled: android::ImsMa::mSensorResolution */
extern void* _ZN7android5ImsMa17mSensorResolutionE;

/* Symbol: _ZN7android5ImsMa26mGetVideoCodecLevelFmtpPtrE */
/* Demangled: android::ImsMa::mGetVideoCodecLevelFmtpPtr */
extern void* _ZN7android5ImsMa26mGetVideoCodecLevelFmtpPtrE;

/* Symbol: _ZN7android19printH264CodecParamEP15h264_codec_fmtp */
/* Demangled: android::printH264CodecParam(h264_codec_fmtp*) */
int _ZN7android19printH264CodecParamEP15h264_codec_fmtp(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIjjEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjjEEEE;

/* Symbol: _ZN7android16ImsMediaReceiverD1Ev */
/* Demangled: android::ImsMediaReceiver::~ImsMediaReceiver() */
int _ZN7android16ImsMediaReceiverD1Ev(void);

/* Symbol: _ZN7android16ImsMediaReceiver4StopEi */
/* Demangled: android::ImsMediaReceiver::Stop(int) */
int _ZN7android16ImsMediaReceiver4StopEi(void);

/* Symbol: _ZN7android14ImsMediaSender21SetDeviceRotateDegreeEi */
/* Demangled: android::ImsMediaSender::SetDeviceRotateDegree(int) */
int _ZN7android14ImsMediaSender21SetDeviceRotateDegreeEi(void);

/* Symbol: _ZTVN7android5ImsMaE */
/* Demangled: vtable for android::ImsMa */
extern void* _ZTVN7android5ImsMaE;

/* Symbol: _ZN7android5ImsMa9SetNotifyERKNS_2spINS_8AMessageEEE */
/* Demangled: android::ImsMa::SetNotify(android::sp<android::AMessage> const&) */
int _ZN7android5ImsMa9SetNotifyERKNS_2spINS_8AMessageEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZTVN7android14ImsMediaSenderE */
/* Demangled: vtable for android::ImsMediaSender */
extern void* _ZTVN7android14ImsMediaSenderE;

/* Symbol: _ZN7android5ImsMa24mGetCodecBitrateTablePtrE */
/* Demangled: android::ImsMa::mGetCodecBitrateTablePtr */
extern void* _ZN7android5ImsMa24mGetCodecBitrateTablePtrE;

/* Symbol: _ZN7android14PrintRtpRtpCapEPNS_21rtp_rtcp_capability_tE */
/* Demangled: android::PrintRtpRtpCap(android::rtp_rtcp_capability_t*) */
int _ZN7android14PrintRtpRtpCapEPNS_21rtp_rtcp_capability_tE(void);

/* Symbol: _ZN7android5ImsMa10StopRecordEv */
/* Demangled: android::ImsMa::StopRecord() */
int _ZN7android5ImsMa10StopRecordEv(void);

/* Symbol: _ZN7android5ImsMa18setCurrentCameraIdEj */
/* Demangled: android::ImsMa::setCurrentCameraId(unsigned int) */
int _ZN7android5ImsMa18setCurrentCameraIdEj(void);

/* Symbol: _ZTVN7android8AHandlerE */
/* Demangled: vtable for android::AHandler */
extern void* _ZTVN7android8AHandlerE;

/* Symbol: _ZN7android16ImsMediaReceiver14setNotifyToVTSERKNS_2spINS_8AMessageEEE */
/* Demangled: android::ImsMediaReceiver::setNotifyToVTS(android::sp<android::AMessage> const&) */
int _ZN7android16ImsMediaReceiver14setNotifyToVTSERKNS_2spINS_8AMessageEEE(void);

/* Symbol: _ZN7android16ImsMediaReceiver13SetSinkConfigEP16video_codec_fmtp */
/* Demangled: android::ImsMediaReceiver::SetSinkConfig(video_codec_fmtp*) */
int _ZN7android16ImsMediaReceiver13SetSinkConfigEP16video_codec_fmtp(void);

/* Symbol: _ZN7android5ImsMa21getCodecParameterSetsE13_video_formatPjPP22video_codec_level_fmtpjNS_10VT_QualityE */
/* Demangled: android::ImsMa::getCodecParameterSets(_video_format, unsigned int*, video_codec_level_fmtp**, unsigned int, android::VT_Quality) */
int _ZN7android5ImsMa21getCodecParameterSetsE13_video_formatPjPP22video_codec_level_fmtpjNS_10VT_QualityE(void);

/* Symbol: _ZN7android5ImsMa8bindSockEhtPh */
/* Demangled: android::ImsMa::bindSock(unsigned char, unsigned short, unsigned char*) */
int _ZN7android5ImsMa8bindSockEhtPh(void);

/* Symbol: _ZN7android5ImsMa9printIPv4EPKcPh */
/* Demangled: android::ImsMa::printIPv4(char const*, unsigned char*) */
int _ZN7android5ImsMa9printIPv4EPKcPh(void);

/* Symbol: _ZN7android5ImsMa5PauseENS_13ma_datapath_tEPNS_27imsma_pause_resume_params_tE */
/* Demangled: android::ImsMa::Pause(android::ma_datapath_t, android::imsma_pause_resume_params_t*) */
int _ZN7android5ImsMa5PauseENS_13ma_datapath_tEPNS_27imsma_pause_resume_params_tE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE12do_constructEPvm(void);

/* Symbol: _ZN7android14ImsMediaSenderC1Ei */
/* Demangled: android::ImsMediaSender::ImsMediaSender(int) */
int _ZN7android14ImsMediaSenderC1Ei(void);

/* Symbol: _ZN7android5ImsMaD0Ev */
/* Demangled: android::ImsMa::~ImsMa() */
int _ZN7android5ImsMaD0Ev(void);

/* Symbol: _ZN7android5ImsMaC1Ej */
/* Demangled: android::ImsMa::ImsMa(unsigned int) */
int _ZN7android5ImsMaC1Ej(void);

/* Symbol: _ZN7android16ImsMediaReceiver9setNotifyERKNS_2spINS_8AMessageEEE */
/* Demangled: android::ImsMediaReceiver::setNotify(android::sp<android::AMessage> const&) */
int _ZN7android16ImsMediaReceiver9setNotifyERKNS_2spINS_8AMessageEEE(void);

/* Symbol: _ZN7android16ImsMediaReceiver19SetRecordParametersENS_16record_quality_tEPc */
/* Demangled: android::ImsMediaReceiver::SetRecordParameters(android::record_quality_t, char*) */
int _ZN7android16ImsMediaReceiver19SetRecordParametersENS_16record_quality_tEPc(void);

/* Symbol: _ZN7android14ImsMediaSenderD0Ev */
/* Demangled: android::ImsMediaSender::~ImsMediaSender() */
int _ZN7android14ImsMediaSenderD0Ev(void);

/* Symbol: _ZN7android5ImsMa12MediaSessionD0Ev */
/* Demangled: android::ImsMa::MediaSession::~MediaSession() */
int _ZN7android5ImsMa12MediaSessionD0Ev(void);

/* Symbol: _ZN7android15printCodecParamEP16video_codec_fmtp */
/* Demangled: android::printCodecParam(video_codec_fmtp*) */
int _ZN7android15printCodecParamEP16video_codec_fmtp(void);

/* Symbol: _ZN7android5ImsMa9printIPv6EPKcPh */
/* Demangled: android::ImsMa::printIPv6(char const*, unsigned char*) */
int _ZN7android5ImsMa9printIPv6EPKcPh(void);

/* Symbol: _ZN7android5ImsMa4StopENS_13ma_datapath_tEi */
/* Demangled: android::ImsMa::Stop(android::ma_datapath_t, int) */
int _ZN7android5ImsMa4StopENS_13ma_datapath_tEi(void);

/* Symbol: _ZN7android16ImsMediaReceiver5StartEv */
/* Demangled: android::ImsMediaReceiver::Start() */
int _ZN7android16ImsMediaReceiver5StartEv(void);

/* Symbol: _ZN7android14ImsMediaSender18UpdateSourceConfigEP16video_codec_fmtpi */
/* Demangled: android::ImsMediaSender::UpdateSourceConfig(video_codec_fmtp*, int) */
int _ZN7android14ImsMediaSender18UpdateSourceConfigEP16video_codec_fmtpi(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBIMSMA_H */
