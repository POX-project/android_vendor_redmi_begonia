/*
 * Reverse-Engineered Source for: libimsma.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libimsma"

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
#include "libimsma.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::ImsMediaReceiver::~ImsMediaReceiver() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16ImsMediaReceiverD2Ev(void) {
    ALOGD("_ZN7android16ImsMediaReceiverD2Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::ImsMa::GetTurnOffVideoByLocalState() */
extern "C" __attribute__((visibility("default"))) int _ZN7android5ImsMa27GetTurnOffVideoByLocalStateEv(void) {
    ALOGD("_ZN7android5ImsMa27GetTurnOffVideoByLocalStateEv() called");
    return 0;
}

/* Demangled: android::printCodecBitrateTable(unsigned int, _video_media_bitrate*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android22printCodecBitrateTableEjP20_video_media_bitrate(void) {
    ALOGD("_ZN7android22printCodecBitrateTableEjP20_video_media_bitrate() called");
    return 0;
}

/* Demangled: android::ImsMa::SetPeerSurface(android::sp<android::Surface> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android5ImsMa14SetPeerSurfaceERKNS_2spINS_7SurfaceEEE(void) {
    ALOGD("_ZN7android5ImsMa14SetPeerSurfaceERKNS_2spINS_7SurfaceEEE() called");
    return 0;
}

/* Demangled: android::ImsMa::SetRecordParameters(android::record_quality_t, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android5ImsMa19SetRecordParametersENS_16record_quality_tEPc(void) {
    ALOGD("_ZN7android5ImsMa19SetRecordParametersENS_16record_quality_tEPc() called");
    return 0;
}

/* Exported Object: vtable for android::ImsMediaReceiver */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android16ImsMediaReceiverE = NULL;

/* Exported Object: vtable for android::ImsMa::MediaSession */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android5ImsMa12MediaSessionE = NULL;

/* Demangled: android::ImsMediaReceiver::Pause() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16ImsMediaReceiver5PauseEv(void) {
    ALOGD("_ZN7android16ImsMediaReceiver5PauseEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::ImsMediaSender::onMessageReceived(android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14ImsMediaSender17onMessageReceivedERKNS_2spINS_8AMessageEEE(void) {
    ALOGD("_ZN7android14ImsMediaSender17onMessageReceivedERKNS_2spINS_8AMessageEEE() called");
    return 0;
}

/* Demangled: android::ImsMa::PreConnect(int, char*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android5ImsMa10PreConnectEiPcjj(void) {
    ALOGD("_ZN7android5ImsMa10PreConnectEiPcjj() called");
    return 0;
}

/* Demangled: android::PrintRtpRtpConfig(android::rtp_rtcp_config_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17PrintRtpRtpConfigEPNS_17rtp_rtcp_config_tE(void) {
    ALOGD("_ZN7android17PrintRtpRtpConfigEPNS_17rtp_rtcp_config_tE() called");
    return 0;
}

/* Demangled: android::ImsMediaSender::Stop() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14ImsMediaSender4StopEv(void) {
    ALOGD("_ZN7android14ImsMediaSender4StopEv() called");
    return 0;
}

/* Demangled: android::ImsMa::SetHold_l(android::ma_datapath_t, android::imsma_hold_mode_t, android::imsma_hold_direction_t) */
extern "C" __attribute__((visibility("default"))) int _ZN7android5ImsMa9SetHold_lENS_13ma_datapath_tENS_17imsma_hold_mode_tENS_22imsma_hold_direction_tE(void) {
    ALOGD("_ZN7android5ImsMa9SetHold_lENS_13ma_datapath_tENS_17imsma_hold_mode_tENS_22imsma_hold_direction_tE() called");
    return 0;
}

/* Demangled: android::printHEVCCodecParam(hevc_codec_fmtp*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android19printHEVCCodecParamEP15hevc_codec_fmtp(void) {
    ALOGD("_ZN7android19printHEVCCodecParamEP15hevc_codec_fmtp() called");
    return 0;
}

/* Demangled: android::ImsMediaSender::ImsMediaSender(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14ImsMediaSenderC2Ei(void) {
    ALOGD("_ZN7android14ImsMediaSenderC2Ei() called");
    return 0;
}

/* Demangled: android::ImsMediaSender::Start(android::VT_CALL_MODE) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14ImsMediaSender5StartENS_12VT_CALL_MODEE(void) {
    ALOGD("_ZN7android14ImsMediaSender5StartENS_12VT_CALL_MODEE() called");
    return 0;
}

/* Exported Object: android::ImsMa::mSensorCnt */
extern "C" __attribute__((visibility("default"))) void* _ZN7android5ImsMa10mSensorCntE = NULL;

/* Demangled: android::ImsMa::getCodecCapability(video_codec_fmtp**, int*, unsigned int, android::VT_Quality) */
extern "C" __attribute__((visibility("default"))) int _ZN7android5ImsMa18getCodecCapabilityEPP16video_codec_fmtpPijNS_10VT_QualityE(void) {
    ALOGD("_ZN7android5ImsMa18getCodecCapabilityEPP16video_codec_fmtpPijNS_10VT_QualityE() called");
    return 0;
}

/* Demangled: android::ImsMa::ImsMa(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android5ImsMaC2Ej(void) {
    ALOGD("_ZN7android5ImsMaC2Ej() called");
    return 0;
}

/* Demangled: android::ImsMa::~ImsMa() */
extern "C" __attribute__((visibility("default"))) int _ZN7android5ImsMaD1Ev(void) {
    ALOGD("_ZN7android5ImsMaD1Ev() called");
    return 0;
}

/* Demangled: android::ImsMa::Resume(android::ma_datapath_t, android::imsma_pause_resume_params_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android5ImsMa6ResumeENS_13ma_datapath_tEPNS_27imsma_pause_resume_params_tE(void) {
    ALOGD("_ZN7android5ImsMa6ResumeENS_13ma_datapath_tEPNS_27imsma_pause_resume_params_tE() called");
    return 0;
}

/* Demangled: android::ImsMa::Resume_l(android::ma_datapath_t, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android5ImsMa8Resume_lENS_13ma_datapath_tEi(void) {
    ALOGD("_ZN7android5ImsMa8Resume_lENS_13ma_datapath_tEi() called");
    return 0;
}

/* Demangled: android::ImsMediaSender::~ImsMediaSender() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14ImsMediaSenderD1Ev(void) {
    ALOGD("_ZN7android14ImsMediaSenderD1Ev() called");
    return 0;
}

/* Demangled: android::ImsMediaSender::setCurrentCameraInfo(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14ImsMediaSender20setCurrentCameraInfoEiii(void) {
    ALOGD("_ZN7android14ImsMediaSender20setCurrentCameraInfoEiii() called");
    return 0;
}

/* Demangled: android::ImsMediaSender::Resume() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14ImsMediaSender6ResumeEv(void) {
    ALOGD("_ZN7android14ImsMediaSender6ResumeEv() called");
    return 0;
}

/* Demangled: android::ImsMa::MediaSession::~MediaSession() */
extern "C" __attribute__((visibility("default"))) int _ZN7android5ImsMa12MediaSessionD1Ev(void) {
    ALOGD("_ZN7android5ImsMa12MediaSessionD1Ev() called");
    return 0;
}

/* Demangled: android::ImsMa::MediaSession::onMessageReceived(android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android5ImsMa12MediaSession17onMessageReceivedERKNS_2spINS_8AMessageEEE(void) {
    ALOGD("_ZN7android5ImsMa12MediaSession17onMessageReceivedERKNS_2spINS_8AMessageEEE() called");
    return 0;
}

/* Demangled: android::ImsMa::setSensorParameters(android::sensor_info_vilte*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android5ImsMa19setSensorParametersEPNS_17sensor_info_vilteEi(void) {
    ALOGD("_ZN7android5ImsMa19setSensorParametersEPNS_17sensor_info_vilteEi() called");
    return 0;
}

/* Exported Object: mSensorInfos */
extern "C" __attribute__((visibility("default"))) void* mSensorInfos = NULL;

/* Demangled: android::ImsMa::SetVTQuality(android::VT_Quality) */
extern "C" __attribute__((visibility("default"))) int _ZN7android5ImsMa12SetVTQualityENS_10VT_QualityE(void) {
    ALOGD("_ZN7android5ImsMa12SetVTQualityENS_10VT_QualityE() called");
    return 0;
}

/* Demangled: android::ImsMediaReceiver::UpdateSinkConfig(video_codec_fmtp*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16ImsMediaReceiver16UpdateSinkConfigEP16video_codec_fmtp(void) {
    ALOGD("_ZN7android16ImsMediaReceiver16UpdateSinkConfigEP16video_codec_fmtp() called");
    return 0;
}

/* Demangled: android::ImsMa::MediaSession::Init(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android5ImsMa12MediaSession4InitEj(void) {
    ALOGD("_ZN7android5ImsMa12MediaSession4InitEj() called");
    return 0;
}

/* Exported Object: android::ImsMa::mGetCodecCapPtr */
extern "C" __attribute__((visibility("default"))) void* _ZN7android5ImsMa15mGetCodecCapPtrE = NULL;

/* Demangled: android::ImsMa::ConnectSock(int, unsigned char, unsigned short, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android5ImsMa11ConnectSockEihtPh(void) {
    ALOGD("_ZN7android5ImsMa11ConnectSockEihtPh() called");
    return 0;
}

/* Demangled: android::ImsMa::transfer2VtCallMode(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android5ImsMa19transfer2VtCallModeEi(void) {
    ALOGD("_ZN7android5ImsMa19transfer2VtCallModeEi() called");
    return 0;
}

/* Demangled: android::ImsMediaReceiver::Resume() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16ImsMediaReceiver6ResumeEv(void) {
    ALOGD("_ZN7android16ImsMediaReceiver6ResumeEv() called");
    return 0;
}

/* Demangled: android::ImsMediaSender::SetSourceConfig(video_codec_fmtp*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14ImsMediaSender15SetSourceConfigEP16video_codec_fmtpi(void) {
    ALOGD("_ZN7android14ImsMediaSender15SetSourceConfigEP16video_codec_fmtpi() called");
    return 0;
}

/* Demangled: android::ImsMediaSender::getBufferQueueProducer(android::sp<android::IGraphicBufferProducer>*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14ImsMediaSender22getBufferQueueProducerEPNS_2spINS_22IGraphicBufferProducerEEE(void) {
    ALOGD("_ZN7android14ImsMediaSender22getBufferQueueProducerEPNS_2spINS_22IGraphicBufferProducerEEE() called");
    return 0;
}

/* Demangled: android::ImsMa::setLowPowerMode(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android5ImsMa15setLowPowerModeEb(void) {
    ALOGD("_ZN7android5ImsMa15setLowPowerModeEb() called");
    return 0;
}

/* Demangled: android::ImsMa::getCodecBitrateTable(unsigned int*, _video_media_bitrate**, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android5ImsMa20getCodecBitrateTableEPjPP20_video_media_bitratej(void) {
    ALOGD("_ZN7android5ImsMa20getCodecBitrateTableEPjPP20_video_media_bitratej() called");
    return 0;
}

/* Demangled: android::ImsMediaSender::adjustEncBitRate(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14ImsMediaSender16adjustEncBitRateEi(void) {
    ALOGD("_ZN7android14ImsMediaSender16adjustEncBitRateEi() called");
    return 0;
}

/* Demangled: android::ImsMa::getRtpRtcpCapability(android::rtp_rtcp_capability_t**, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android5ImsMa20getRtpRtcpCapabilityEPPNS_21rtp_rtcp_capability_tEj(void) {
    ALOGD("_ZN7android5ImsMa20getRtpRtcpCapabilityEPPNS_21rtp_rtcp_capability_tEj() called");
    return 0;
}

/* Demangled: android::ImsMa::modifyFlags(unsigned int, android::ImsMa::FlagMode) */
extern "C" __attribute__((visibility("default"))) int _ZN7android5ImsMa11modifyFlagsEjNS0_8FlagModeE(void) {
    ALOGD("_ZN7android5ImsMa11modifyFlagsEjNS0_8FlagModeE() called");
    return 0;
}

/* Demangled: android::ImsMa::InitMediaConfig(android::media_config*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android5ImsMa15InitMediaConfigEPNS_12media_configE(void) {
    ALOGD("_ZN7android5ImsMa15InitMediaConfigEPNS_12media_configE() called");
    return 0;
}

/* Demangled: android::ImsMediaReceiver::ImsMediaReceiver(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16ImsMediaReceiverC1Ei(void) {
    ALOGD("_ZN7android16ImsMediaReceiverC1Ei() called");
    return 0;
}

/* Demangled: android::ImsMa::setSignalLevel(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android5ImsMa14setSignalLevelEi(void) {
    ALOGD("_ZN7android5ImsMa14setSignalLevelEi() called");
    return 0;
}

/* Demangled: android::ImsMa::CheckSetBR(android::media_config*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android5ImsMa10CheckSetBREPNS_12media_configE(void) {
    ALOGD("_ZN7android5ImsMa10CheckSetBREPNS_12media_configE() called");
    return 0;
}

/* Demangled: android::ImsMa::UpdateMediaConfig(android::media_config*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android5ImsMa17UpdateMediaConfigEPNS_12media_configE(void) {
    ALOGD("_ZN7android5ImsMa17UpdateMediaConfigEPNS_12media_configE() called");
    return 0;
}

/* Demangled: android::ImsMediaReceiver::~ImsMediaReceiver() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16ImsMediaReceiverD0Ev(void) {
    ALOGD("_ZN7android16ImsMediaReceiverD0Ev() called");
    return 0;
}

/* Demangled: android::ImsMediaReceiver::StartRecord(android::record_mode_t) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16ImsMediaReceiver11StartRecordENS_13record_mode_tE(void) {
    ALOGD("_ZN7android16ImsMediaReceiver11StartRecordENS_13record_mode_tE() called");
    return 0;
}

/* Demangled: android::ImsMa::setHandoverState(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android5ImsMa16setHandoverStateEb(void) {
    ALOGD("_ZN7android5ImsMa16setHandoverStateEb() called");
    return 0;
}

/* Demangled: android::ImsMa::makeMyselfSocket(android::rtp_rtcp_config_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android5ImsMa16makeMyselfSocketEPNS_17rtp_rtcp_config_tE(void) {
    ALOGD("_ZN7android5ImsMa16makeMyselfSocketEPNS_17rtp_rtcp_config_tE() called");
    return 0;
}

/* Demangled: android::ImsMa::Start(android::ma_datapath_t) */
extern "C" __attribute__((visibility("default"))) int _ZN7android5ImsMa5StartENS_13ma_datapath_tE(void) {
    ALOGD("_ZN7android5ImsMa5StartENS_13ma_datapath_tE() called");
    return 0;
}

/* Demangled: android::ImsMediaSender::Pause() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14ImsMediaSender5PauseEv(void) {
    ALOGD("_ZN7android14ImsMediaSender5PauseEv() called");
    return 0;
}

/* Demangled: android::ImsMediaSender::setAvpfParamters(android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14ImsMediaSender16setAvpfParamtersERKNS_2spINS_8AMessageEEE(void) {
    ALOGD("_ZN7android14ImsMediaSender16setAvpfParamtersERKNS_2spINS_8AMessageEEE() called");
    return 0;
}

/* Demangled: android::ImsMa::SnapShot(char const*, android::snapshot_mode_t) */
extern "C" __attribute__((visibility("default"))) int _ZN7android5ImsMa8SnapShotEPKcNS_15snapshot_mode_tE(void) {
    ALOGD("_ZN7android5ImsMa8SnapShotEPKcNS_15snapshot_mode_tE() called");
    return 0;
}

/* Demangled: android::ImsMa::Stop_l(android::ma_datapath_t, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android5ImsMa6Stop_lENS_13ma_datapath_tEi(void) {
    ALOGD("_ZN7android5ImsMa6Stop_lENS_13ma_datapath_tEi() called");
    return 0;
}

/* Demangled: android::ImsMa::SetTurnOffVideo_l(android::ma_datapath_t, android::imsma_turn_off_video_mode_t, android::imsma_turn_off_video_direction_t) */
extern "C" __attribute__((visibility("default"))) int _ZN7android5ImsMa17SetTurnOffVideo_lENS_13ma_datapath_tENS_27imsma_turn_off_video_mode_tENS_32imsma_turn_off_video_direction_tE(void) {
    ALOGD("_ZN7android5ImsMa17SetTurnOffVideo_lENS_13ma_datapath_tENS_27imsma_turn_off_video_mode_tENS_32imsma_turn_off_video_direction_tE() called");
    return 0;
}

/* Demangled: android::ImsMediaReceiver::SetSurface(android::sp<android::Surface> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16ImsMediaReceiver10SetSurfaceERKNS_2spINS_7SurfaceEEE(void) {
    ALOGD("_ZN7android16ImsMediaReceiver10SetSurfaceERKNS_2spINS_7SurfaceEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::ImsMa::~ImsMa() */
extern "C" __attribute__((visibility("default"))) int _ZN7android5ImsMaD2Ev(void) {
    ALOGD("_ZN7android5ImsMaD2Ev() called");
    return 0;
}

/* Demangled: android::ImsMa::setDeviceRotationDegree(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android5ImsMa23setDeviceRotationDegreeEi(void) {
    ALOGD("_ZN7android5ImsMa23setDeviceRotationDegreeEi() called");
    return 0;
}

/* Demangled: android::ImsMediaReceiver::init(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16ImsMediaReceiver4initEj(void) {
    ALOGD("_ZN7android16ImsMediaReceiver4initEj() called");
    return 0;
}

/* Demangled: android::ImsMediaSender::~ImsMediaSender() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14ImsMediaSenderD2Ev(void) {
    ALOGD("_ZN7android14ImsMediaSenderD2Ev() called");
    return 0;
}

/* Demangled: android::ImsMa::MediaSession::~MediaSession() */
extern "C" __attribute__((visibility("default"))) int _ZN7android5ImsMa12MediaSessionD2Ev(void) {
    ALOGD("_ZN7android5ImsMa12MediaSessionD2Ev() called");
    return 0;
}

/* Demangled: android::ImsMa::MediaSession::Reset() */
extern "C" __attribute__((visibility("default"))) int _ZN7android5ImsMa12MediaSession5ResetEv(void) {
    ALOGD("_ZN7android5ImsMa12MediaSession5ResetEv() called");
    return 0;
}

/* Demangled: android::ImsMa::Pause_l(android::ma_datapath_t, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android5ImsMa7Pause_lENS_13ma_datapath_tEi(void) {
    ALOGD("_ZN7android5ImsMa7Pause_lENS_13ma_datapath_tEi() called");
    return 0;
}

/* Demangled: android::ImsMa::getBufferQueueProducer(android::sp<android::IGraphicBufferProducer>*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android5ImsMa22getBufferQueueProducerEPNS_2spINS_22IGraphicBufferProducerEEE(void) {
    ALOGD("_ZN7android5ImsMa22getBufferQueueProducerEPNS_2spINS_22IGraphicBufferProducerEEE() called");
    return 0;
}

/* Demangled: android::ImsMediaReceiver::onMessageReceived(android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16ImsMediaReceiver17onMessageReceivedERKNS_2spINS_8AMessageEEE(void) {
    ALOGD("_ZN7android16ImsMediaReceiver17onMessageReceivedERKNS_2spINS_8AMessageEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_compareEPKvS5_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_compareEPKvS5_() called");
    return 0;
}

/* Demangled: android::ImsMediaSender::init(android::sp<android::IRTPController> const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14ImsMediaSender4initERKNS_2spINS_14IRTPControllerEEEj(void) {
    ALOGD("_ZN7android14ImsMediaSender4initERKNS_2spINS_14IRTPControllerEEEj() called");
    return 0;
}

/* Exported Object: android::ImsMa::sMultiInstanceID */
extern "C" __attribute__((visibility("default"))) void* _ZN7android5ImsMa16sMultiInstanceIDE = NULL;

/* Demangled: android::ImsMa::PostAndAwaitResponse(android::sp<android::AMessage>*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android5ImsMa20PostAndAwaitResponseEPNS_2spINS_8AMessageEEE(void) {
    ALOGD("_ZN7android5ImsMa20PostAndAwaitResponseEPNS_2spINS_8AMessageEEE() called");
    return 0;
}

/* Demangled: android::ImsMa::Reset(android::ma_datapath_t, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android5ImsMa5ResetENS_13ma_datapath_tEi(void) {
    ALOGD("_ZN7android5ImsMa5ResetENS_13ma_datapath_tEi() called");
    return 0;
}

/* Demangled: android::ImsMa::GetTurnOffVideoByPeerState() */
extern "C" __attribute__((visibility("default"))) int _ZN7android5ImsMa26GetTurnOffVideoByPeerStateEv(void) {
    ALOGD("_ZN7android5ImsMa26GetTurnOffVideoByPeerStateEv() called");
    return 0;
}

/* Demangled: android::ImsMediaSender::setNotify(android::sp<android::AMessage>&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14ImsMediaSender9setNotifyERNS_2spINS_8AMessageEEE(void) {
    ALOGD("_ZN7android14ImsMediaSender9setNotifyERNS_2spINS_8AMessageEEE() called");
    return 0;
}

/* Demangled: android::ImsMa::Init(android::ma_datapath_t) */
extern "C" __attribute__((visibility("default"))) int _ZN7android5ImsMa4InitENS_13ma_datapath_tE(void) {
    ALOGD("_ZN7android5ImsMa4InitENS_13ma_datapath_tE() called");
    return 0;
}

/* Demangled: android::compareCodecParam(video_codec_fmtp*, video_codec_fmtp*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17compareCodecParamEP16video_codec_fmtpS1_(void) {
    ALOGD("_ZN7android17compareCodecParamEP16video_codec_fmtpS1_() called");
    return 0;
}

/* Demangled: android::ImsMa::StartRecord(android::record_mode_t) */
extern "C" __attribute__((visibility("default"))) int _ZN7android5ImsMa11StartRecordENS_13record_mode_tE(void) {
    ALOGD("_ZN7android5ImsMa11StartRecordENS_13record_mode_tE() called");
    return 0;
}

/* Demangled: android::ImsMediaReceiver::ImsMediaReceiver(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16ImsMediaReceiverC2Ei(void) {
    ALOGD("_ZN7android16ImsMediaReceiverC2Ei() called");
    return 0;
}

/* Demangled: android::ImsMediaReceiver::StopRecord() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16ImsMediaReceiver10StopRecordEv(void) {
    ALOGD("_ZN7android16ImsMediaReceiver10StopRecordEv() called");
    return 0;
}

/* Demangled: android::ImsMa::MediaSession::SetNotify(android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android5ImsMa12MediaSession9SetNotifyERKNS_2spINS_8AMessageEEE(void) {
    ALOGD("_ZN7android5ImsMa12MediaSession9SetNotifyERKNS_2spINS_8AMessageEEE() called");
    return 0;
}

/* Exported Object: android::ImsMa::mSensorResolution */
extern "C" __attribute__((visibility("default"))) void* _ZN7android5ImsMa17mSensorResolutionE = NULL;

/* Exported Object: android::ImsMa::mGetVideoCodecLevelFmtpPtr */
extern "C" __attribute__((visibility("default"))) void* _ZN7android5ImsMa26mGetVideoCodecLevelFmtpPtrE = NULL;

/* Demangled: android::printH264CodecParam(h264_codec_fmtp*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android19printH264CodecParamEP15h264_codec_fmtp(void) {
    ALOGD("_ZN7android19printH264CodecParamEP15h264_codec_fmtp() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjjEEEE = NULL;

/* Demangled: android::ImsMediaReceiver::~ImsMediaReceiver() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16ImsMediaReceiverD1Ev(void) {
    ALOGD("_ZN7android16ImsMediaReceiverD1Ev() called");
    return 0;
}

/* Demangled: android::ImsMediaReceiver::Stop(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16ImsMediaReceiver4StopEi(void) {
    ALOGD("_ZN7android16ImsMediaReceiver4StopEi() called");
    return 0;
}

/* Demangled: android::ImsMediaSender::SetDeviceRotateDegree(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14ImsMediaSender21SetDeviceRotateDegreeEi(void) {
    ALOGD("_ZN7android14ImsMediaSender21SetDeviceRotateDegreeEi() called");
    return 0;
}

/* Exported Object: vtable for android::ImsMa */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android5ImsMaE = NULL;

/* Demangled: android::ImsMa::SetNotify(android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android5ImsMa9SetNotifyERKNS_2spINS_8AMessageEEE(void) {
    ALOGD("_ZN7android5ImsMa9SetNotifyERKNS_2spINS_8AMessageEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::ImsMediaSender */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android14ImsMediaSenderE = NULL;

/* Exported Object: android::ImsMa::mGetCodecBitrateTablePtr */
extern "C" __attribute__((visibility("default"))) void* _ZN7android5ImsMa24mGetCodecBitrateTablePtrE = NULL;

/* Demangled: android::PrintRtpRtpCap(android::rtp_rtcp_capability_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14PrintRtpRtpCapEPNS_21rtp_rtcp_capability_tE(void) {
    ALOGD("_ZN7android14PrintRtpRtpCapEPNS_21rtp_rtcp_capability_tE() called");
    return 0;
}

/* Demangled: android::ImsMa::StopRecord() */
extern "C" __attribute__((visibility("default"))) int _ZN7android5ImsMa10StopRecordEv(void) {
    ALOGD("_ZN7android5ImsMa10StopRecordEv() called");
    return 0;
}

/* Demangled: android::ImsMa::setCurrentCameraId(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android5ImsMa18setCurrentCameraIdEj(void) {
    ALOGD("_ZN7android5ImsMa18setCurrentCameraIdEj() called");
    return 0;
}

/* Exported Object: vtable for android::AHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8AHandlerE = NULL;

/* Demangled: android::ImsMediaReceiver::setNotifyToVTS(android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16ImsMediaReceiver14setNotifyToVTSERKNS_2spINS_8AMessageEEE(void) {
    ALOGD("_ZN7android16ImsMediaReceiver14setNotifyToVTSERKNS_2spINS_8AMessageEEE() called");
    return 0;
}

/* Demangled: android::ImsMediaReceiver::SetSinkConfig(video_codec_fmtp*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16ImsMediaReceiver13SetSinkConfigEP16video_codec_fmtp(void) {
    ALOGD("_ZN7android16ImsMediaReceiver13SetSinkConfigEP16video_codec_fmtp() called");
    return 0;
}

/* Demangled: android::ImsMa::getCodecParameterSets(_video_format, unsigned int*, video_codec_level_fmtp**, unsigned int, android::VT_Quality) */
extern "C" __attribute__((visibility("default"))) int _ZN7android5ImsMa21getCodecParameterSetsE13_video_formatPjPP22video_codec_level_fmtpjNS_10VT_QualityE(void) {
    ALOGD("_ZN7android5ImsMa21getCodecParameterSetsE13_video_formatPjPP22video_codec_level_fmtpjNS_10VT_QualityE() called");
    return 0;
}

/* Demangled: android::ImsMa::bindSock(unsigned char, unsigned short, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android5ImsMa8bindSockEhtPh(void) {
    ALOGD("_ZN7android5ImsMa8bindSockEhtPh() called");
    return 0;
}

/* Demangled: android::ImsMa::printIPv4(char const*, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android5ImsMa9printIPv4EPKcPh(void) {
    ALOGD("_ZN7android5ImsMa9printIPv4EPKcPh() called");
    return 0;
}

/* Demangled: android::ImsMa::Pause(android::ma_datapath_t, android::imsma_pause_resume_params_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android5ImsMa5PauseENS_13ma_datapath_tEPNS_27imsma_pause_resume_params_tE(void) {
    ALOGD("_ZN7android5ImsMa5PauseENS_13ma_datapath_tEPNS_27imsma_pause_resume_params_tE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::ImsMediaSender::ImsMediaSender(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14ImsMediaSenderC1Ei(void) {
    ALOGD("_ZN7android14ImsMediaSenderC1Ei() called");
    return 0;
}

/* Demangled: android::ImsMa::~ImsMa() */
extern "C" __attribute__((visibility("default"))) int _ZN7android5ImsMaD0Ev(void) {
    ALOGD("_ZN7android5ImsMaD0Ev() called");
    return 0;
}

/* Demangled: android::ImsMa::ImsMa(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android5ImsMaC1Ej(void) {
    ALOGD("_ZN7android5ImsMaC1Ej() called");
    return 0;
}

/* Demangled: android::ImsMediaReceiver::setNotify(android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16ImsMediaReceiver9setNotifyERKNS_2spINS_8AMessageEEE(void) {
    ALOGD("_ZN7android16ImsMediaReceiver9setNotifyERKNS_2spINS_8AMessageEEE() called");
    return 0;
}

/* Demangled: android::ImsMediaReceiver::SetRecordParameters(android::record_quality_t, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16ImsMediaReceiver19SetRecordParametersENS_16record_quality_tEPc(void) {
    ALOGD("_ZN7android16ImsMediaReceiver19SetRecordParametersENS_16record_quality_tEPc() called");
    return 0;
}

/* Demangled: android::ImsMediaSender::~ImsMediaSender() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14ImsMediaSenderD0Ev(void) {
    ALOGD("_ZN7android14ImsMediaSenderD0Ev() called");
    return 0;
}

/* Demangled: android::ImsMa::MediaSession::~MediaSession() */
extern "C" __attribute__((visibility("default"))) int _ZN7android5ImsMa12MediaSessionD0Ev(void) {
    ALOGD("_ZN7android5ImsMa12MediaSessionD0Ev() called");
    return 0;
}

/* Demangled: android::printCodecParam(video_codec_fmtp*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android15printCodecParamEP16video_codec_fmtp(void) {
    ALOGD("_ZN7android15printCodecParamEP16video_codec_fmtp() called");
    return 0;
}

/* Demangled: android::ImsMa::printIPv6(char const*, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android5ImsMa9printIPv6EPKcPh(void) {
    ALOGD("_ZN7android5ImsMa9printIPv6EPKcPh() called");
    return 0;
}

/* Demangled: android::ImsMa::Stop(android::ma_datapath_t, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android5ImsMa4StopENS_13ma_datapath_tEi(void) {
    ALOGD("_ZN7android5ImsMa4StopENS_13ma_datapath_tEi() called");
    return 0;
}

/* Demangled: android::ImsMediaReceiver::Start() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16ImsMediaReceiver5StartEv(void) {
    ALOGD("_ZN7android16ImsMediaReceiver5StartEv() called");
    return 0;
}

/* Demangled: android::ImsMediaSender::UpdateSourceConfig(video_codec_fmtp*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14ImsMediaSender18UpdateSourceConfigEP16video_codec_fmtpi(void) {
    ALOGD("_ZN7android14ImsMediaSender18UpdateSourceConfigEP16video_codec_fmtpi() called");
    return 0;
}
