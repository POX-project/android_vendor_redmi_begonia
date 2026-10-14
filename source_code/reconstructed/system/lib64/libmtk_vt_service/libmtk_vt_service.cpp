/*
 * Reverse-Engineered Source for: libmtk_vt_service.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libmtk_vt_service"

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
#include "libmtk_vt_service.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: VTService::IVTClient::getDefaultImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9IVTClient14getDefaultImplEv(void) {
    ALOGD("_ZN9VTService9IVTClient14getDefaultImplEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::IInterface-in-VTService::IVTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService10IVTServiceE0_N7android10IInterfaceE = NULL;

/* Demangled: VTService::ImsMaHandler::finalization() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12ImsMaHandler12finalizationEv(void) {
    ALOGD("_ZN9VTService12ImsMaHandler12finalizationEv() called");
    return 0;
}

/* Demangled: VTService::VTMALStub::setRANEnable(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9VTMALStub12setRANEnableEb(void) {
    ALOGD("_ZN9VTService9VTMALStub12setRANEnableEb() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::getUsedNr() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper9getUsedNrEv(void) {
    ALOGD("_ZN9VTService12VTCoreHelper9getUsedNrEv() called");
    return 0;
}

/* Demangled: VTService::VTCore::setHandoverStateBySimId(int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService6VTCore23setHandoverStateBySimIdEib(void) {
    ALOGD("_ZN9VTService6VTCore23setHandoverStateBySimIdEib() called");
    return 0;
}

/* Exported Object: VTService::g_vt_srv_msg_hdr */
extern "C" __attribute__((visibility("default"))) void* _ZN9VTService16g_vt_srv_msg_hdrE = NULL;

/* Exported Object: construction vtable for VTService::BnVTService-in-VTService::VTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService9VTServiceE0_NS_11BnVTServiceE = NULL;

/* Demangled: android::sp<VTService::IVTClient>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN9VTService9IVTClientEED2Ev(void) {
    ALOGD("_ZN7android2spIN9VTService9IVTClientEED2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for VTService::IVTNotifyCallback-in-VTService::IVTClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService9IVTClientE8_NS_17IVTNotifyCallbackE = NULL;

/* Demangled: VTService::VTCoreHelper::getIntProperty(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper14getIntPropertyEPKc(void) {
    ALOGD("_ZN9VTService12VTCoreHelper14getIntPropertyEPKc() called");
    return 0;
}

/* Demangled: android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1>::MQDescriptor(std::__1::vector<android::hardware::GrantorDescriptor, std::__1::allocator<android::hardware::GrantorDescriptor> > const&, native_handle*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEC2ERKNSt3__16vectorINS0_17GrantorDescriptorENS4_9allocatorIS6_EEEEP13native_handlem(void) {
    ALOGD("_ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEC2ERKNSt3__16vectorINS0_17GrantorDescriptorENS4_9allocatorIS6_EEEEP13native_handlem() called");
    return 0;
}

/* Demangled: VTService::VTMALStub::notifyRanBitRate(bool, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9VTMALStub16notifyRanBitRateEbi(void) {
    ALOGD("_ZN9VTService9VTMALStub16notifyRanBitRateEbi() called");
    return 0;
}

/* Demangled: VTService::VTCore::tagSocketWithUid(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService6VTCore16tagSocketWithUidEi(void) {
    ALOGD("_ZN9VTService6VTCore16tagSocketWithUidEi() called");
    return 0;
}

/* Demangled: VTService::VTCore::setSignalLevel(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService6VTCore14setSignalLevelEii(void) {
    ALOGD("_ZN9VTService6VTCore14setSignalLevelEii() called");
    return 0;
}

/* Demangled: VTService::VTService::setCameraParameters(int, int, android::sensor_info_vilte*) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9VTService19setCameraParametersEiiPN7android17sensor_info_vilteE(void) {
    ALOGD("_ZN9VTService9VTService19setCameraParametersEiiPN7android17sensor_info_vilteE() called");
    return 0;
}

/* Demangled: VTService::VTService::setCameraParametersOnly(int, android::sensor_info_vilte*) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9VTService23setCameraParametersOnlyEiPN7android17sensor_info_vilteE(void) {
    ALOGD("_ZN9VTService9VTService23setCameraParametersOnlyEiPN7android17sensor_info_vilteE() called");
    return 0;
}

/* Demangled: virtual thunk to VTService::IVTService::~IVTService() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N9VTService10IVTServiceD0Ev(void) {
    ALOGD("_ZTv0_n24_N9VTService10IVTServiceD0Ev() called");
    return 0;
}

/* Demangled: VTService::VTMALStub::setDeviceRotationDegree(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9VTMALStub23setDeviceRotationDegreeEi(void) {
    ALOGD("_ZN9VTService9VTMALStub23setDeviceRotationDegreeEi() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::setHandoverStateBySim(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper21setHandoverStateBySimEii(void) {
    ALOGD("_ZN9VTService12VTCoreHelper21setHandoverStateBySimEii() called");
    return 0;
}

/* Demangled: VTService::onBinderDie(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService11onBinderDieEPv(void) {
    ALOGD("_ZN9VTService11onBinderDieEPv() called");
    return 0;
}

/* Demangled: VTService::VTMALStub::GetTurnOffVideoByLocalState() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9VTMALStub27GetTurnOffVideoByLocalStateEv(void) {
    ALOGD("_ZN9VTService9VTMALStub27GetTurnOffVideoByLocalStateEv() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::check(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper5checkEi(void) {
    ALOGD("_ZN9VTService12VTCoreHelper5checkEi() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::setRequestVdoProfile(int, android::sp<VTService::VideoProfile>) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper20setRequestVdoProfileEiN7android2spINS_12VideoProfileEEE(void) {
    ALOGD("_ZN9VTService12VTCoreHelper20setRequestVdoProfileEiN7android2spINS_12VideoProfileEEE() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::getHideMeString(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper15getHideMeStringEi(void) {
    ALOGD("_ZN9VTService12VTCoreHelper15getHideMeStringEi() called");
    return 0;
}

/* Exported Object: construction vtable for android::IBinder-in-VTService::BnVTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService11BnVTServiceE16_N7android7IBinderE = NULL;

/* Demangled: android::sp<VTService::VideoTelephonyDeathReceiver>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN9VTService27VideoTelephonyDeathReceiverEED2Ev(void) {
    ALOGD("_ZN7android2spIN9VTService27VideoTelephonyDeathReceiverEED2Ev() called");
    return 0;
}

/* Demangled: VTService::VTMALStub::StartRecord(android::record_mode_t) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9VTMALStub11StartRecordEN7android13record_mode_tE(void) {
    ALOGD("_ZN9VTService9VTMALStub11StartRecordEN7android13record_mode_tE() called");
    return 0;
}

/* Demangled: VTService::VTService::snapshot(int, VTService::VT_SRV_SNAPSHOT_TYPE, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9VTService8snapshotEiNS_20VT_SRV_SNAPSHOT_TYPEEN7android7String8E(void) {
    ALOGD("_ZN9VTService9VTService8snapshotEiNS_20VT_SRV_SNAPSHOT_TYPEEN7android7String8E() called");
    return 0;
}

/* Demangled: VTService::IVTClient::getInterfaceDescriptor() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9VTService9IVTClient22getInterfaceDescriptorEv(void) {
    ALOGD("_ZNK9VTService9IVTClient22getInterfaceDescriptorEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::BnInterface<VTService::IVTClient>-in-VTService::BnVTClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService10BnVTClientE0_N7android11BnInterfaceINS_9IVTClientEEE = NULL;

/* Demangled: VTService::VTMALStub::getLogger() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9VTMALStub9getLoggerEv(void) {
    ALOGD("_ZN9VTService9VTMALStub9getLoggerEv() called");
    return 0;
}

/* Demangled: VTService::VTService::startRecording(int, VTService::VT_SRV_RECORD_TYPE, android::String8, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9VTService14startRecordingEiNS_18VT_SRV_RECORD_TYPEEN7android7String8Ei(void) {
    ALOGD("_ZN9VTService9VTService14startRecordingEiNS_18VT_SRV_RECORD_TYPEEN7android7String8Ei() called");
    return 0;
}

/* Demangled: android::MessageQueueBase<android::hardware::MQDescriptor, unsigned char, (android::hardware::MQFlavor)1>::~MessageQueueBase() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16MessageQueueBaseINS_8hardware12MQDescriptorEhLNS1_8MQFlavorE1EED2Ev(void) {
    ALOGD("_ZN7android16MessageQueueBaseINS_8hardware12MQDescriptorEhLNS1_8MQFlavorE1EED2Ev() called");
    return 0;
}

/* Demangled: VTService::VTMALStub::Restart(android::ma_datapath_t, android::imsma_pause_resume_params_t*, android::imsma_pause_resume_params_t*, VTService::VT_RESTART_MA_MODE) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9VTMALStub7RestartEN7android13ma_datapath_tEPNS1_27imsma_pause_resume_params_tES4_NS_18VT_RESTART_MA_MODEE(void) {
    ALOGD("_ZN9VTService9VTMALStub7RestartEN7android13ma_datapath_tEPNS1_27imsma_pause_resume_params_tES4_NS_18VT_RESTART_MA_MODEE() called");
    return 0;
}

/* Demangled: VTService::vt_ua_2_rtp(vt_srv_imcb_msg_param_s*, android::rtp_rtcp_config_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService11vt_ua_2_rtpEP23vt_srv_imcb_msg_param_sPN7android17rtp_rtcp_config_tE(void) {
    ALOGD("_ZN9VTService11vt_ua_2_rtpEP23vt_srv_imcb_msg_param_sPN7android17rtp_rtcp_config_tE() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::logString(char const*, VTService::VT_SRV_LOG_LV) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper9logStringEPKcNS_13VT_SRV_LOG_LVE(void) {
    ALOGD("_ZN9VTService12VTCoreHelper9logStringEPKcNS_13VT_SRV_LOG_LVE() called");
    return 0;
}

/* Demangled: VTService::VTMsgDispatcher::dispatchMessage(int, void*, int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService15VTMsgDispatcher15dispatchMessageEiPvib(void) {
    ALOGD("_ZN9VTService15VTMsgDispatcher15dispatchMessageEiPvib() called");
    return 0;
}

/* Demangled: android::Vector<VTService::vt_srv_network_info_struct>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN9VTService26vt_srv_network_info_structEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN9VTService26vt_srv_network_info_structEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: non-virtual thunk to VTService::VTService::binderDied(android::wp<android::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZThn40_N9VTService9VTService10binderDiedERKN7android2wpINS1_7IBinderEEE(void) {
    ALOGD("_ZThn40_N9VTService9VTService10binderDiedERKN7android2wpINS1_7IBinderEEE() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::getSurfaceString(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper16getSurfaceStringEi(void) {
    ALOGD("_ZN9VTService12VTCoreHelper16getSurfaceStringEi() called");
    return 0;
}

/* Demangled: VTService::VTCore::switchFeature(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService6VTCore13switchFeatureEiii(void) {
    ALOGD("_ZN9VTService6VTCore13switchFeatureEiii() called");
    return 0;
}

/* Demangled: android::details::AidlMQDescriptorShim<signed char, (android::hardware::MQFlavor)1>::operator=(android::details::AidlMQDescriptorShim<signed char, (android::hardware::MQFlavor)1> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7details20AidlMQDescriptorShimIaLNS_8hardware8MQFlavorE1EEaSERKS4_(void) {
    ALOGD("_ZN7android7details20AidlMQDescriptorShimIaLNS_8hardware8MQFlavorE1EEaSERKS4_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::hidl_death_recipient-in-VTService::VideoTelephonyDeathReceiver */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService27VideoTelephonyDeathReceiverE0_N7android8hardware20hidl_death_recipientE = NULL;

/* Exported Object: construction vtable for android::IInterface-in-VTService::VTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService9VTServiceE0_N7android10IInterfaceE = NULL;

/* Exported Object: construction vtable for VTService::IVTInterface-in-VTService::BnVTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService11BnVTServiceE8_NS_12IVTInterfaceE = NULL;

/* Exported Object: vtable for VTService::VideoTelephonyDeathReceiver */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9VTService27VideoTelephonyDeathReceiverE = NULL;

/* Demangled: android::MessageQueueBase<android::hardware::MQDescriptor, unsigned char, (android::hardware::MQFlavor)1>::MessageQueueBase(android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16MessageQueueBaseINS_8hardware12MQDescriptorEhLNS1_8MQFlavorE1EEC2ERKNS2_IhLS3_1EEEb(void) {
    ALOGD("_ZN7android16MessageQueueBaseINS_8hardware12MQDescriptorEhLNS1_8MQFlavorE1EEC2ERKNS2_IhLS3_1EEEb() called");
    return 0;
}

/* Demangled: android::sp<VTService::VTCore>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN9VTService6VTCoreEED2Ev(void) {
    ALOGD("_ZN7android2spIN9VTService6VTCoreEED2Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to VTService::VTService::startRecording(int, VTService::VT_SRV_RECORD_TYPE, android::String8, int) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N9VTService9VTService14startRecordingEiNS_18VT_SRV_RECORD_TYPEEN7android7String8Ei(void) {
    ALOGD("_ZThn8_N9VTService9VTService14startRecordingEiNS_18VT_SRV_RECORD_TYPEEN7android7String8Ei() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::isUsed(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper6isUsedEi(void) {
    ALOGD("_ZN9VTService12VTCoreHelper6isUsedEi() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::isMatch(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper7isMatchEii(void) {
    ALOGD("_ZN9VTService12VTCoreHelper7isMatchEii() called");
    return 0;
}

/* Demangled: VTService::VTService::setupVTService(android::sp<VTService::IVTClient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9VTService14setupVTServiceERKN7android2spINS_9IVTClientEEE(void) {
    ALOGD("_ZN9VTService9VTService14setupVTServiceERKN7android2spINS_9IVTClientEEE() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::logAction(char const*, char const*, int, char const*, VTService::VT_SRV_LOG_LV) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper9logActionEPKcS2_iS2_NS_13VT_SRV_LOG_LVE(void) {
    ALOGD("_ZN9VTService12VTCoreHelper9logActionEPKcS2_iS2_NS_13VT_SRV_LOG_LVE() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::checkRange(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper10checkRangeEiii(void) {
    ALOGD("_ZN9VTService12VTCoreHelper10checkRangeEiii() called");
    return 0;
}

/* Demangled: VTService::VTCore::VTCore(android::sp<VTService::IVTServiceCallBack> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService6VTCoreC2ERKN7android2spINS_18IVTServiceCallBackEEE(void) {
    ALOGD("_ZN9VTService6VTCoreC2ERKN7android2spINS_18IVTServiceCallBackEEE() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::getOperatorId(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper13getOperatorIdEi(void) {
    ALOGD("_ZN9VTService12VTCoreHelper13getOperatorIdEi() called");
    return 0;
}

/* Demangled: VTService::vt_rtp_codec_2_ua(vt_srv_imcb_msg_vt_cap_setting_s*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService17vt_rtp_codec_2_uaEP32vt_srv_imcb_msg_vt_cap_setting_sii(void) {
    ALOGD("_ZN9VTService17vt_rtp_codec_2_uaEP32vt_srv_imcb_msg_vt_cap_setting_sii() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::getLocalCameraStateString(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper25getLocalCameraStateStringEi(void) {
    ALOGD("_ZN9VTService12VTCoreHelper25getLocalCameraStateStringEi() called");
    return 0;
}

/* Demangled: non-virtual thunk to VTService::VTService::snapshot(int, VTService::VT_SRV_SNAPSHOT_TYPE, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N9VTService9VTService8snapshotEiNS_20VT_SRV_SNAPSHOT_TYPEEN7android7String8E(void) {
    ALOGD("_ZThn8_N9VTService9VTService8snapshotEiNS_20VT_SRV_SNAPSHOT_TYPEEN7android7String8E() called");
    return 0;
}

/* Demangled: VTService::VTMsgHdlr::handleMessage(android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9VTMsgHdlr13handleMessageERKN7android2spINS1_8AMessageEEE(void) {
    ALOGD("_ZN9VTService9VTMsgHdlr13handleMessageERKN7android2spINS1_8AMessageEEE() called");
    return 0;
}

/* Demangled: android::details::AidlMQDescriptorShim<signed char, (android::hardware::MQFlavor)1>::AidlMQDescriptorShim(aidl::android::hardware::common::fmq::MQDescriptor<signed char, aidl::android::hardware::common::fmq::SynchronizedReadWrite> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7details20AidlMQDescriptorShimIaLNS_8hardware8MQFlavorE1EEC2ERKN4aidl7android8hardware6common3fmq12MQDescriptorIaNS9_21SynchronizedReadWriteEEE(void) {
    ALOGD("_ZN7android7details20AidlMQDescriptorShimIaLNS_8hardware8MQFlavorE1EEC2ERKN4aidl7android8hardware6common3fmq12MQDescriptorIaNS9_21SynchronizedReadWriteEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to VTService::VTService::setCameraParametersOnly(int, android::sensor_info_vilte*) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N9VTService9VTService23setCameraParametersOnlyEiPN7android17sensor_info_vilteE(void) {
    ALOGD("_ZThn8_N9VTService9VTService23setCameraParametersOnlyEiPN7android17sensor_info_vilteE() called");
    return 0;
}

/* Exported Object: VTT for VTService::BnVTClient */
extern "C" __attribute__((visibility("default"))) void* _ZTTN9VTService10BnVTClientE = NULL;

/* Demangled: VTService::VTMALStub::setUIMode(VTService::VT_SRV_UI_MODE) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9VTMALStub9setUIModeENS_14VT_SRV_UI_MODEE(void) {
    ALOGD("_ZN9VTService9VTMALStub9setUIModeENS_14VT_SRV_UI_MODEE() called");
    return 0;
}

/* Demangled: VTService::ImsMaHandler::onMessageReceived(android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12ImsMaHandler17onMessageReceivedERKN7android2spINS1_8AMessageEEE(void) {
    ALOGD("_ZN9VTService12ImsMaHandler17onMessageReceivedERKN7android2spINS1_8AMessageEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: std::__1::vector<android::hardware::GrantorDescriptor, std::__1::allocator<android::hardware::GrantorDescriptor> >::__append(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android8hardware17GrantorDescriptorENS_9allocatorIS3_EEE8__appendEm(void) {
    ALOGD("_ZNSt3__16vectorIN7android8hardware17GrantorDescriptorENS_9allocatorIS3_EEE8__appendEm() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<void (*)(bool, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&), std::__1::allocator<void (*)(bool, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>, void (bool, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFvbRKN7android8hardware12MQDescriptorIhLNS3_8MQFlavorE1EEEENS_9allocatorISA_EES9_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFvbRKN7android8hardware12MQDescriptorIhLNS3_8MQFlavorE1EEEENS_9allocatorISA_EES9_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<void (*)(bool, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&), std::__1::allocator<void (*)(bool, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>, void (bool, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>::operator()(bool&&, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFvbRKN7android8hardware12MQDescriptorIhLNS3_8MQFlavorE1EEEENS_9allocatorISA_EES9_EclEObS8_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFvbRKN7android8hardware12MQDescriptorIhLNS3_8MQFlavorE1EEEENS_9allocatorISA_EES9_EclEObS8_() called");
    return 0;
}

/* Exported Object: VTT for VTService::VTService */
extern "C" __attribute__((visibility("default"))) void* _ZTTN9VTService9VTServiceE = NULL;

/* Exported Object: construction vtable for VTService::IVTInterface-in-VTService::IVTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService10IVTServiceE8_NS_12IVTInterfaceE = NULL;

/* Demangled: VTService::VTMALStub::setSignalLevel(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9VTMALStub14setSignalLevelEi(void) {
    ALOGD("_ZN9VTService9VTMALStub14setSignalLevelEi() called");
    return 0;
}

/* Demangled: VTService::VTCore::setCameraParameters(int, int, android::sensor_info_vilte*) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService6VTCore19setCameraParametersEiiPN7android17sensor_info_vilteE(void) {
    ALOGD("_ZN9VTService6VTCore19setCameraParametersEiiPN7android17sensor_info_vilteE() called");
    return 0;
}

/* Demangled: VTService::VTCore::setCameraParametersWithSim(int, int, int, android::sensor_info_vilte*) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService6VTCore26setCameraParametersWithSimEiiiPN7android17sensor_info_vilteE(void) {
    ALOGD("_ZN9VTService6VTCore26setCameraParametersWithSimEiiiPN7android17sensor_info_vilteE() called");
    return 0;
}

/* Demangled: virtual thunk to VTService::IVTClient::~IVTClient() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N9VTService9IVTClientD1Ev(void) {
    ALOGD("_ZTv0_n24_N9VTService9IVTClientD1Ev() called");
    return 0;
}

/* Demangled: VTService::VTMALStub::SetPeerSurface(android::sp<android::Surface> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9VTMALStub14SetPeerSurfaceERKN7android2spINS1_7SurfaceEEE(void) {
    ALOGD("_ZN9VTService9VTMALStub14SetPeerSurfaceERKN7android2spINS1_7SurfaceEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::VTCoreHelper() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelperC2Ev(void) {
    ALOGD("_ZN9VTService12VTCoreHelperC2Ev() called");
    return 0;
}

/* Exported Object: VTT for VTService::VideoTelephonyDeathReceiver */
extern "C" __attribute__((visibility("default"))) void* _ZTTN9VTService27VideoTelephonyDeathReceiverE = NULL;

/* Demangled: VTService::VTCoreHelper::getStateStringWithId(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper20getStateStringWithIdEi(void) {
    ALOGD("_ZN9VTService12VTCoreHelper20getStateStringWithIdEi() called");
    return 0;
}

/* Demangled: VTService::VTService::getClient() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9VTService9getClientEv(void) {
    ALOGD("_ZN9VTService9VTService9getClientEv() called");
    return 0;
}

/* Exported Object: VTT for VTService::IVTClient */
extern "C" __attribute__((visibility("default"))) void* _ZTTN9VTService9IVTClientE = NULL;

/* Demangled: VTService::VTMALStub::Resume(android::ma_datapath_t, android::imsma_pause_resume_params_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9VTMALStub6ResumeEN7android13ma_datapath_tEPNS1_27imsma_pause_resume_params_tE(void) {
    ALOGD("_ZN9VTService9VTMALStub6ResumeEN7android13ma_datapath_tEPNS1_27imsma_pause_resume_params_tE() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::getReqFromProfile(vt_srv_imcb_msg_session_modify_s*, android::sp<VTService::VideoProfile>, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper17getReqFromProfileEP32vt_srv_imcb_msg_session_modify_sN7android2spINS_12VideoProfileEEEi(void) {
    ALOGD("_ZN9VTService12VTCoreHelper17getReqFromProfileEP32vt_srv_imcb_msg_session_modify_sN7android2spINS_12VideoProfileEEEi() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::getProfileFromInd(vt_srv_imcb_msg_session_modify_s*) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper17getProfileFromIndEP32vt_srv_imcb_msg_session_modify_s(void) {
    ALOGD("_ZN9VTService12VTCoreHelper17getProfileFromIndEP32vt_srv_imcb_msg_session_modify_s() called");
    return 0;
}

/* Demangled: non-virtual thunk to VTService::VTService::stopRecording(int) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N9VTService9VTService13stopRecordingEi(void) {
    ALOGD("_ZThn8_N9VTService9VTService13stopRecordingEi() called");
    return 0;
}

/* Demangled: VTService::IVTClient::~IVTClient() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9IVTClientD1Ev(void) {
    ALOGD("_ZN9VTService9IVTClientD1Ev() called");
    return 0;
}

/* Exported Object: VTService::g_vt_SendMsgLock */
extern "C" __attribute__((visibility("default"))) void* _ZN9VTService16g_vt_SendMsgLockE = NULL;

/* Demangled: VTService::VTMALStub::Init(android::ma_datapath_t) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9VTMALStub4InitEN7android13ma_datapath_tE(void) {
    ALOGD("_ZN9VTService9VTMALStub4InitEN7android13ma_datapath_tE() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::logFlow(char const*, char const*, int, char const*, VTService::VT_SRV_LOG_LV) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper7logFlowEPKcS2_iS2_NS_13VT_SRV_LOG_LVE(void) {
    ALOGD("_ZN9VTService12VTCoreHelper7logFlowEPKcS2_iS2_NS_13VT_SRV_LOG_LVE() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::getNetworkIdByIfName(android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper20getNetworkIdByIfNameEN7android7String8E(void) {
    ALOGD("_ZN9VTService12VTCoreHelper20getNetworkIdByIfNameEN7android7String8E() called");
    return 0;
}

/* Demangled: VTService::VideoTelephonyDeathReceiver::serviceDied(unsigned long, android::wp<android::hidl::base::V1_0::IBase> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService27VideoTelephonyDeathReceiver11serviceDiedEmRKN7android2wpINS1_4hidl4base4V1_05IBaseEEE(void) {
    ALOGD("_ZN9VTService27VideoTelephonyDeathReceiver11serviceDiedEmRKN7android2wpINS1_4hidl4base4V1_05IBaseEEE() called");
    return 0;
}

/* Demangled: android::MessageQueueBase<android::hardware::MQDescriptor, unsigned char, (android::hardware::MQFlavor)1>::readBlocking(unsigned char*, unsigned long, unsigned int, unsigned int, long, android::hardware::EventFlag*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16MessageQueueBaseINS_8hardware12MQDescriptorEhLNS1_8MQFlavorE1EE12readBlockingEPhmjjlPNS1_9EventFlagE(void) {
    ALOGD("_ZN7android16MessageQueueBaseINS_8hardware12MQDescriptorEhLNS1_8MQFlavorE1EE12readBlockingEPhmjjlPNS1_9EventFlagE() called");
    return 0;
}

/* Demangled: VTService::VTService::setSignalLevel(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9VTService14setSignalLevelEii(void) {
    ALOGD("_ZN9VTService9VTService14setSignalLevelEii() called");
    return 0;
}

/* Exported Object: construction vtable for android::BBinder-in-VTService::VTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService9VTServiceE16_N7android7BBinderE = NULL;

/* Demangled: VTService::VTCoreHelper::isVoLTEon() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper9isVoLTEonEv(void) {
    ALOGD("_ZN9VTService12VTCoreHelper9isVoLTEonEv() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::get(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper3getEi(void) {
    ALOGD("_ZN9VTService12VTCoreHelper3getEi() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::getRequestVdoProfile(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper20getRequestVdoProfileEi(void) {
    ALOGD("_ZN9VTService12VTCoreHelper20getRequestVdoProfileEi() called");
    return 0;
}

/* Demangled: VTService::VTService::updateNetworkTable(bool, int, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9VTService18updateNetworkTableEbiN7android7String8E(void) {
    ALOGD("_ZN9VTService9VTService18updateNetworkTableEbiN7android7String8E() called");
    return 0;
}

/* Demangled: non-virtual thunk to VTService::VTService::triggerGetOperatorId() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N9VTService9VTService20triggerGetOperatorIdEv(void) {
    ALOGD("_ZThn8_N9VTService9VTService20triggerGetOperatorIdEv() called");
    return 0;
}

/* Demangled: VTService::IVTClient::asInterface(android::sp<android::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9IVTClient11asInterfaceERKN7android2spINS1_7IBinderEEE(void) {
    ALOGD("_ZN9VTService9IVTClient11asInterfaceERKN7android2spINS1_7IBinderEEE() called");
    return 0;
}

/* Exported Object: VTT for VTService::IVTService */
extern "C" __attribute__((visibility("default"))) void* _ZTTN9VTService10IVTServiceE = NULL;

/* Demangled: VTService::VTCore::finalization(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService6VTCore12finalizationEi(void) {
    ALOGD("_ZN9VTService6VTCore12finalizationEi() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::removeNetworkInfoRecord(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper23removeNetworkInfoRecordEi(void) {
    ALOGD("_ZN9VTService12VTCoreHelper23removeNetworkInfoRecordEi() called");
    return 0;
}

/* Demangled: VTService::VTMsgDispatcher::~VTMsgDispatcher() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService15VTMsgDispatcherD1Ev(void) {
    ALOGD("_ZN9VTService15VTMsgDispatcherD1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::IInterface-in-VTService::BnVTClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService10BnVTClientE0_N7android10IInterfaceE = NULL;

/* Exported Object: construction vtable for VTService::IVTNotifyCallback-in-VTService::BpVTClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService10BpVTClientE8_NS_17IVTNotifyCallbackE = NULL;

/* Demangled: VTService::IVTService::getInterfaceDescriptor() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9VTService10IVTService22getInterfaceDescriptorEv(void) {
    ALOGD("_ZNK9VTService10IVTService22getInterfaceDescriptorEv() called");
    return 0;
}

/* Demangled: VTService::VTCore::resetUpdateInfo(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService6VTCore15resetUpdateInfoEi(void) {
    ALOGD("_ZN9VTService6VTCore15resetUpdateInfoEi() called");
    return 0;
}

/* Demangled: non-virtual thunk to VTService::IVTClient::~IVTClient() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N9VTService9IVTClientD1Ev(void) {
    ALOGD("_ZThn8_N9VTService9IVTClientD1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::IInterface-in-VTService::BpVTClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService10BpVTClientE0_N7android10IInterfaceE = NULL;

/* Demangled: virtual thunk to VTService::VTCore::~VTCore() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N9VTService6VTCoreD1Ev(void) {
    ALOGD("_ZTv0_n24_N9VTService6VTCoreD1Ev() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::setState(int, VTService::VT_SRV_MA_STATE) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper8setStateEiNS_15VT_SRV_MA_STATEE(void) {
    ALOGD("_ZN9VTService12VTCoreHelper8setStateEiNS_15VT_SRV_MA_STATEE() called");
    return 0;
}

/* Demangled: VTService::VTCore::init(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService6VTCore4initEi(void) {
    ALOGD("_ZN9VTService6VTCore4initEi() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<VTService::vt_srv_network_info_struct> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN9VTService26vt_srv_network_info_structEEE = NULL;

/* Exported Object: construction vtable for VTService::IVTInterface-in-VTService::BpVTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService11BpVTServiceE8_NS_12IVTInterfaceE = NULL;

/* Exported Object: VTService::VTMALStub::MA_INVALID_MODE */
extern "C" __attribute__((visibility("default"))) void* _ZN9VTService9VTMALStub15MA_INVALID_MODEE = NULL;

/* Demangled: VTService::VTCore::~VTCore() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService6VTCoreD2Ev(void) {
    ALOGD("_ZN9VTService6VTCoreD2Ev() called");
    return 0;
}

/* Demangled: VTService::VTCore::setUIMode(int, VTService::VT_SRV_UI_MODE) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService6VTCore9setUIModeEiNS_14VT_SRV_UI_MODEE(void) {
    ALOGD("_ZN9VTService6VTCore9setUIModeEiNS_14VT_SRV_UI_MODEE() called");
    return 0;
}

/* Demangled: VTService::VTMsgDispatcher::VTMsgDispatcher(void (*)(int, void*, int)) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService15VTMsgDispatcherC1EPFviPviE(void) {
    ALOGD("_ZN9VTService15VTMsgDispatcherC1EPFviPviE() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::setIsSetSensorCnt(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper17setIsSetSensorCntEi(void) {
    ALOGD("_ZN9VTService12VTCoreHelper17setIsSetSensorCntEi() called");
    return 0;
}

/* Demangled: VTService::VTService::setCamera(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9VTService9setCameraEii(void) {
    ALOGD("_ZN9VTService9VTService9setCameraEii() called");
    return 0;
}

/* Demangled: non-virtual thunk to VTService::VTService::setSignalLevel(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N9VTService9VTService14setSignalLevelEii(void) {
    ALOGD("_ZThn8_N9VTService9VTService14setSignalLevelEii() called");
    return 0;
}

/* Demangled: non-virtual thunk to VTService::BnVTClient::onTransact(unsigned int, android::Parcel const&, android::Parcel*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N9VTService10BnVTClient10onTransactEjRKN7android6ParcelEPS2_j(void) {
    ALOGD("_ZThn16_N9VTService10BnVTClient10onTransactEjRKN7android6ParcelEPS2_j() called");
    return 0;
}

/* Exported Object: vtable for VTService::BpVTService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9VTService11BpVTServiceE = NULL;

/* Demangled: VTService::IVTService::~IVTService() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService10IVTServiceD1Ev(void) {
    ALOGD("_ZN9VTService10IVTServiceD1Ev() called");
    return 0;
}

/* Demangled: android::MessageQueueBase<android::details::AidlMQDescriptorShim, signed char, (android::hardware::MQFlavor)1>::~MessageQueueBase() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16MessageQueueBaseINS_7details20AidlMQDescriptorShimEaLNS_8hardware8MQFlavorE1EED2Ev(void) {
    ALOGD("_ZN7android16MessageQueueBaseINS_7details20AidlMQDescriptorShimEaLNS_8hardware8MQFlavorE1EED2Ev() called");
    return 0;
}

/* Demangled: VTService::VTCore::responseSessionModify(int, android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService6VTCore21responseSessionModifyEiRKN7android7String8E(void) {
    ALOGD("_ZN9VTService6VTCore21responseSessionModifyEiRKN7android7String8E() called");
    return 0;
}

/* Exported Object: construction vtable for android::IBinder-in-VTService::VTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService9VTServiceE16_N7android7IBinderE = NULL;

/* Exported Object: construction vtable for android::IInterface-in-VTService::IVTClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService9IVTClientE0_N7android10IInterfaceE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Exported Object: VTT for VTService::VTCore */
extern "C" __attribute__((visibility("default"))) void* _ZTTN9VTService6VTCoreE = NULL;

/* Demangled: VTService::VTCoreHelper::getRecordString(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper15getRecordStringEi(void) {
    ALOGD("_ZN9VTService12VTCoreHelper15getRecordStringEi() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::getNetworkInfoIndex(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper19getNetworkInfoIndexEi(void) {
    ALOGD("_ZN9VTService12VTCoreHelper19getNetworkInfoIndexEi() called");
    return 0;
}

/* Demangled: android::MessageQueueBase<android::details::AidlMQDescriptorShim, signed char, (android::hardware::MQFlavor)1>::write(signed char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16MessageQueueBaseINS_7details20AidlMQDescriptorShimEaLNS_8hardware8MQFlavorE1EE5writeEPKam(void) {
    ALOGD("_ZN7android16MessageQueueBaseINS_7details20AidlMQDescriptorShimEaLNS_8hardware8MQFlavorE1EE5writeEPKam() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::getProfileFromCancelInd(vt_srv_imcb_msg_session_modify_cancel_s*) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper23getProfileFromCancelIndEP39vt_srv_imcb_msg_session_modify_cancel_s(void) {
    ALOGD("_ZN9VTService12VTCoreHelper23getProfileFromCancelIndEP39vt_srv_imcb_msg_session_modify_cancel_s() called");
    return 0;
}

/* Demangled: android::Vector<VTService::vt_srv_network_info_struct>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN9VTService26vt_srv_network_info_structEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN9VTService26vt_srv_network_info_structEE12do_constructEPvm() called");
    return 0;
}

/* Exported Object: VTService::IVTService::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN9VTService10IVTService10descriptorE = NULL;

/* Exported Object: VTT for VTService::BnVTService */
extern "C" __attribute__((visibility("default"))) void* _ZTTN9VTService11BnVTServiceE = NULL;

/* Exported Object: construction vtable for android::BnInterface<VTService::IVTService>-in-VTService::BnVTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService11BnVTServiceE0_N7android11BnInterfaceINS_10IVTServiceEEE = NULL;

/* Exported Object: VTService::VTCore::mHelper */
extern "C" __attribute__((visibility("default"))) void* _ZN9VTService6VTCore7mHelperE = NULL;

/* Demangled: VTService::VTMALStub::SnapShot(char const*, android::snapshot_mode_t) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9VTMALStub8SnapShotEPKcN7android15snapshot_mode_tE(void) {
    ALOGD("_ZN9VTService9VTMALStub8SnapShotEPKcN7android15snapshot_mode_tE() called");
    return 0;
}

/* Demangled: VTService::VTMALStub::SetRecordParameters(android::record_quality_t, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9VTMALStub19SetRecordParametersEN7android16record_quality_tEPc(void) {
    ALOGD("_ZN9VTService9VTMALStub19SetRecordParametersEN7android16record_quality_tEPc() called");
    return 0;
}

/* Exported Object: VTT for VTService::VTMALStub */
extern "C" __attribute__((visibility("default"))) void* _ZTTN9VTService9VTMALStubE = NULL;

/* Demangled: VTService::VTCore::clearAll() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService6VTCore8clearAllEv(void) {
    ALOGD("_ZN9VTService6VTCore8clearAllEv() called");
    return 0;
}

/* Exported Object: vtable for VTService::VideoProfile */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9VTService12VideoProfileE = NULL;

/* Demangled: VTService::VTCoreHelper::getStringProperty(char const*, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper17getStringPropertyEPKcPc(void) {
    ALOGD("_ZN9VTService12VTCoreHelper17getStringPropertyEPKcPc() called");
    return 0;
}

/* Demangled: android::MessageQueueBase<android::hardware::MQDescriptor, unsigned char, (android::hardware::MQFlavor)1>::initMemory(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16MessageQueueBaseINS_8hardware12MQDescriptorEhLNS1_8MQFlavorE1EE10initMemoryEb(void) {
    ALOGD("_ZN7android16MessageQueueBaseINS_8hardware12MQDescriptorEhLNS1_8MQFlavorE1EE10initMemoryEb() called");
    return 0;
}

/* Demangled: VTService::VTCore::setPreviewSurface(int, android::sp<android::Surface> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService6VTCore17setPreviewSurfaceEiRKN7android2spINS1_7SurfaceEEE(void) {
    ALOGD("_ZN9VTService6VTCore17setPreviewSurfaceEiRKN7android2spINS1_7SurfaceEEE() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::addNetworkInfoRecord(int, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper20addNetworkInfoRecordEiN7android7String8E(void) {
    ALOGD("_ZN9VTService12VTCoreHelper20addNetworkInfoRecordEiN7android7String8E() called");
    return 0;
}

/* Demangled: VTService::VTCore::getUpdateInfo(int, vt_srv_imcb_msg_param_s*, vt_srv_imcb_msg_param_s*) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService6VTCore13getUpdateInfoEiP23vt_srv_imcb_msg_param_sS2_(void) {
    ALOGD("_ZN9VTService6VTCore13getUpdateInfoEiP23vt_srv_imcb_msg_param_sS2_() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::getPeerCameraStateString(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper24getPeerCameraStateStringEi(void) {
    ALOGD("_ZN9VTService12VTCoreHelper24getPeerCameraStateStringEi() called");
    return 0;
}

/* Demangled: non-virtual thunk to VTService::VTService::switchFeature(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N9VTService9VTService13switchFeatureEiii(void) {
    ALOGD("_ZThn8_N9VTService9VTService13switchFeatureEiii() called");
    return 0;
}

/* Exported Object: VTService::mRildReady */
extern "C" __attribute__((visibility("default"))) void* _ZN9VTService10mRildReadyE = NULL;

/* Demangled: VTService::VTCore::notifyError(int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService6VTCore11notifyErrorEiPKc(void) {
    ALOGD("_ZN9VTService6VTCore11notifyErrorEiPKc() called");
    return 0;
}

/* Demangled: android::sp<VTService::VideoProfile>::operator=(android::sp<VTService::VideoProfile> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN9VTService12VideoProfileEEaSERKS3_(void) {
    ALOGD("_ZN7android2spIN9VTService12VideoProfileEEaSERKS3_() called");
    return 0;
}

/* Demangled: VTService::VTService::releaseVTService() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9VTService16releaseVTServiceEv(void) {
    ALOGD("_ZN9VTService9VTService16releaseVTServiceEv() called");
    return 0;
}

/* Exported Object: VTService::VTMALStub::MA_NORMAL_MODE */
extern "C" __attribute__((visibility("default"))) void* _ZN9VTService9VTMALStub14MA_NORMAL_MODEE = NULL;

/* Demangled: VTService::VTCore::notifyCallback(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService6VTCore14notifyCallbackEiiii(void) {
    ALOGD("_ZN9VTService6VTCore14notifyCallbackEiiii() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::logMap(char const*, char const*, int, VTService::VT_SRV_LOG_LV) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper6logMapEPKcS2_iNS_13VT_SRV_LOG_LVE(void) {
    ALOGD("_ZN9VTService12VTCoreHelper6logMapEPKcS2_iNS_13VT_SRV_LOG_LVE() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::getSnapshotString(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper17getSnapshotStringEi(void) {
    ALOGD("_ZN9VTService12VTCoreHelper17getSnapshotStringEi() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: VTService::VTCore::getCallFlowLock(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService6VTCore15getCallFlowLockEi(void) {
    ALOGD("_ZN9VTService6VTCore15getCallFlowLockEi() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::getOnOffString(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper14getOnOffStringEi(void) {
    ALOGD("_ZN9VTService12VTCoreHelper14getOnOffStringEi() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::getIfNameByNetworkId(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper20getIfNameByNetworkIdEi(void) {
    ALOGD("_ZN9VTService12VTCoreHelper20getIfNameByNetworkIdEi() called");
    return 0;
}

/* Demangled: non-virtual thunk to VTService::VTService::setUIMode(int, VTService::VT_SRV_UI_MODE) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N9VTService9VTService9setUIModeEiNS_14VT_SRV_UI_MODEE(void) {
    ALOGD("_ZThn8_N9VTService9VTService9setUIModeEiNS_14VT_SRV_UI_MODEE() called");
    return 0;
}

/* Exported Object: vtable for VTService::BpVTClient */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9VTService10BpVTClientE = NULL;

/* Demangled: VTService::VTCoreHelper::getRspFromProfile(vt_srv_imcb_msg_session_modify_s*, android::sp<VTService::VideoProfile>, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper17getRspFromProfileEP32vt_srv_imcb_msg_session_modify_sN7android2spINS_12VideoProfileEEEi(void) {
    ALOGD("_ZN9VTService12VTCoreHelper17getRspFromProfileEP32vt_srv_imcb_msg_session_modify_sN7android2spINS_12VideoProfileEEEi() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::packFromVdoProfile(android::sp<VTService::VideoProfile>) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper18packFromVdoProfileEN7android2spINS_12VideoProfileEEE(void) {
    ALOGD("_ZN9VTService12VTCoreHelper18packFromVdoProfileEN7android2spINS_12VideoProfileEEE() called");
    return 0;
}

/* Demangled: android::Vector<VTService::vt_srv_network_info_struct>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN9VTService26vt_srv_network_info_structEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN9VTService26vt_srv_network_info_structEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: VTService::VTMALStub::getUIMode() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9VTMALStub9getUIModeEv(void) {
    ALOGD("_ZN9VTService9VTMALStub9getUIModeEv() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::setDefaultLocalSize(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper19setDefaultLocalSizeEiii(void) {
    ALOGD("_ZN9VTService12VTCoreHelper19setDefaultLocalSizeEiii() called");
    return 0;
}

/* Demangled: android::MessageQueueBase<android::details::AidlMQDescriptorShim, signed char, (android::hardware::MQFlavor)1>::read(signed char*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16MessageQueueBaseINS_7details20AidlMQDescriptorShimEaLNS_8hardware8MQFlavorE1EE4readEPam(void) {
    ALOGD("_ZN7android16MessageQueueBaseINS_7details20AidlMQDescriptorShimEaLNS_8hardware8MQFlavorE1EE4readEPam() called");
    return 0;
}

/* Demangled: VTService::VTCore::setHandoverStateByNetworkId(int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService6VTCore27setHandoverStateByNetworkIdEib(void) {
    ALOGD("_ZN9VTService6VTCore27setHandoverStateByNetworkIdEib() called");
    return 0;
}

/* Demangled: VTService::VTCore::updateNetworkTable(bool, int, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService6VTCore18updateNetworkTableEbiN7android7String8E(void) {
    ALOGD("_ZN9VTService6VTCore18updateNetworkTableEbiN7android7String8E() called");
    return 0;
}

/* Demangled: VTService::VTPriMsgHdlr::dispatchMessage(android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTPriMsgHdlr15dispatchMessageERKN7android2spINS1_8AMessageEEE(void) {
    ALOGD("_ZN9VTService12VTPriMsgHdlr15dispatchMessageERKN7android2spINS1_8AMessageEEE() called");
    return 0;
}

/* Demangled: VTService::VTCore::notifyCallback(int, int, int, int, int, android::String8 const&, android::String8 const&, android::sp<android::IGraphicBufferProducer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService6VTCore14notifyCallbackEiiiiiRKN7android7String8ES4_RKNS1_2spINS1_22IGraphicBufferProducerEEE(void) {
    ALOGD("_ZN9VTService6VTCore14notifyCallbackEiiiiiRKN7android7String8ES4_RKNS1_2spINS1_22IGraphicBufferProducerEEE() called");
    return 0;
}

/* Demangled: VTService::IVTService::getDefaultImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService10IVTService14getDefaultImplEv(void) {
    ALOGD("_ZN9VTService10IVTService14getDefaultImplEv() called");
    return 0;
}

/* Demangled: VTService::VT_Connect(void (*)(int, void*, int)) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService10VT_ConnectEPFviPviE(void) {
    ALOGD("_ZN9VTService10VT_ConnectEPFviPviE() called");
    return 0;
}

/* Demangled: VTService::VTService::initialization(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9VTService14initializationEii(void) {
    ALOGD("_ZN9VTService9VTService14initializationEii() called");
    return 0;
}

/* Exported Object: construction vtable for VTService::IVTClient-in-VTService::BnVTClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService10BnVTClientE0_NS_9IVTClientE = NULL;

/* Demangled: VTService::VTCoreHelper::isDebug() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper7isDebugEv(void) {
    ALOGD("_ZN9VTService12VTCoreHelper7isDebugEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to VTService::VTService::tagSocketWithUid(int) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N9VTService9VTService16tagSocketWithUidEi(void) {
    ALOGD("_ZThn8_N9VTService9VTService16tagSocketWithUidEi() called");
    return 0;
}

/* Demangled: VTService::VTCore::update(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService6VTCore6updateEi(void) {
    ALOGD("_ZN9VTService6VTCore6updateEi() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<void (*)(bool, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&), std::__1::allocator<void (*)(bool, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>, void (bool, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFvbRKN7android8hardware12MQDescriptorIhLNS3_8MQFlavorE1EEEENS_9allocatorISA_EES9_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFvbRKN7android8hardware12MQDescriptorIhLNS3_8MQFlavorE1EEEENS_9allocatorISA_EES9_E7destroyEv() called");
    return 0;
}

/* Demangled: android::sp<android::Surface>::operator=(android::Surface*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_7SurfaceEEaSEPS1_(void) {
    ALOGD("_ZN7android2spINS_7SurfaceEEaSEPS1_() called");
    return 0;
}

/* Demangled: VTService::MsgHandler::exchangeMsg() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService10MsgHandler11exchangeMsgEv(void) {
    ALOGD("_ZN9VTService10MsgHandler11exchangeMsgEv() called");
    return 0;
}

/* Exported Object: vtable for VTService::ImsMaHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9VTService12ImsMaHandlerE = NULL;

/* Demangled: VTService::VTCoreHelper::setParam(int, VTService::VT_SRV_PARAM, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper8setParamEiNS_12VT_SRV_PARAMEPv(void) {
    ALOGD("_ZN9VTService12VTCoreHelper8setParamEiNS_12VT_SRV_PARAMEPv() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::getDefaultLocalSize(int*, int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper19getDefaultLocalSizeEPiS1_i(void) {
    ALOGD("_ZN9VTService12VTCoreHelper19getDefaultLocalSizeEPiS1_i() called");
    return 0;
}

/* Demangled: non-virtual thunk to VTService::VTService::setPreviewSurface(int, android::sp<android::Surface> const&) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N9VTService9VTService17setPreviewSurfaceEiRKN7android2spINS1_7SurfaceEEE(void) {
    ALOGD("_ZThn8_N9VTService9VTService17setPreviewSurfaceEiRKN7android2spINS1_7SurfaceEEE() called");
    return 0;
}

/* Demangled: android::BnInterface<VTService::IVTService>::onAsBinder() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11BnInterfaceIN9VTService10IVTServiceEE10onAsBinderEv(void) {
    ALOGD("_ZN7android11BnInterfaceIN9VTService10IVTServiceEE10onAsBinderEv() called");
    return 0;
}

/* Demangled: VTService::MsgHandler::MsgHandler(android::sp<VTService::VTCore>, int, android::sp<android::ImsMa>, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService10MsgHandlerC1EN7android2spINS_6VTCoreEEEiNS2_INS1_5ImsMaEEEi(void) {
    ALOGD("_ZN9VTService10MsgHandlerC1EN7android2spINS_6VTCoreEEEiNS2_INS1_5ImsMaEEEi() called");
    return 0;
}

/* Demangled: VTService::VTMALStub::Reset(android::ma_datapath_t) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9VTMALStub5ResetEN7android13ma_datapath_tE(void) {
    ALOGD("_ZN9VTService9VTMALStub5ResetEN7android13ma_datapath_tE() called");
    return 0;
}

/* Exported Object: vtable for android::AHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8AHandlerE = NULL;

/* Demangled: VTService::VTCore::setDeviceOrientation(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService6VTCore20setDeviceOrientationEii(void) {
    ALOGD("_ZN9VTService6VTCore20setDeviceOrientationEii() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::isIMCBrun() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper9isIMCBrunEv(void) {
    ALOGD("_ZN9VTService12VTCoreHelper9isIMCBrunEv() called");
    return 0;
}

/* Demangled: android::MessageQueueBase<android::hardware::MQDescriptor, unsigned char, (android::hardware::MQFlavor)1>::write(unsigned char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16MessageQueueBaseINS_8hardware12MQDescriptorEhLNS1_8MQFlavorE1EE5writeEPKhm(void) {
    ALOGD("_ZN7android16MessageQueueBaseINS_8hardware12MQDescriptorEhLNS1_8MQFlavorE1EE5writeEPKhm() called");
    return 0;
}

/* Demangled: android::Vector<VTService::vt_srv_network_info_struct>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN9VTService26vt_srv_network_info_structEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN9VTService26vt_srv_network_info_structEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for VTService::VTPriMsgHdlr */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9VTService12VTPriMsgHdlrE = NULL;

/* Demangled: non-virtual thunk to VTService::BnVTService::onTransact(unsigned int, android::Parcel const&, android::Parcel*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N9VTService11BnVTService10onTransactEjRKN7android6ParcelEPS2_j(void) {
    ALOGD("_ZThn16_N9VTService11BnVTService10onTransactEjRKN7android6ParcelEPS2_j() called");
    return 0;
}

/* Exported Object: vtable for VTService::MsgHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9VTService10MsgHandlerE = NULL;

/* Demangled: VTService::VTCoreHelper::getParam(int, VTService::VT_SRV_PARAM, void**) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper8getParamEiNS_12VT_SRV_PARAMEPPv(void) {
    ALOGD("_ZN9VTService12VTCoreHelper8getParamEiNS_12VT_SRV_PARAMEPPv() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::getCallStateString(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper18getCallStateStringEi(void) {
    ALOGD("_ZN9VTService12VTCoreHelper18getCallStateStringEi() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::checkElement(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper12checkElementEi(void) {
    ALOGD("_ZN9VTService12VTCoreHelper12checkElementEi() called");
    return 0;
}

/* Demangled: non-virtual thunk to VTService::VTService::responseSessionModify(int, android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N9VTService9VTService21responseSessionModifyEiRKN7android7String8E(void) {
    ALOGD("_ZThn8_N9VTService9VTService21responseSessionModifyEiRKN7android7String8E() called");
    return 0;
}

/* Demangled: VTService::VTMsgHdlr::onMessageReceived(android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9VTMsgHdlr17onMessageReceivedERKN7android2spINS1_8AMessageEEE(void) {
    ALOGD("_ZN9VTService9VTMsgHdlr17onMessageReceivedERKN7android2spINS1_8AMessageEEE() called");
    return 0;
}

/* Demangled: virtual thunk to VTService::IVTClient::~IVTClient() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N9VTService9IVTClientD0Ev(void) {
    ALOGD("_ZTv0_n24_N9VTService9IVTClientD0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::BBinder-in-VTService::BnVTClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService10BnVTClientE16_N7android7BBinderE = NULL;

/* Exported Object: construction vtable for android::IInterface-in-VTService::BpVTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService11BpVTServiceE0_N7android10IInterfaceE = NULL;

/* Demangled: VTService::VTCoreHelper::getIsSetSensorCnt() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper17getIsSetSensorCntEv(void) {
    ALOGD("_ZN9VTService12VTCoreHelper17getIsSetSensorCntEv() called");
    return 0;
}

/* Demangled: VTService::VTService::onTransact(unsigned int, android::Parcel const&, android::Parcel*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9VTService10onTransactEjRKN7android6ParcelEPS2_j(void) {
    ALOGD("_ZN9VTService9VTService10onTransactEjRKN7android6ParcelEPS2_j() called");
    return 0;
}

/* Exported Object: VTService::IVTClient::default_impl */
extern "C" __attribute__((visibility("default"))) void* _ZN9VTService9IVTClient12default_implE = NULL;

/* Demangled: VTService::BnVTService::onTransact(unsigned int, android::Parcel const&, android::Parcel*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService11BnVTService10onTransactEjRKN7android6ParcelEPS2_j(void) {
    ALOGD("_ZN9VTService11BnVTService10onTransactEjRKN7android6ParcelEPS2_j() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::VTCoreHelper() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelperC1Ev(void) {
    ALOGD("_ZN9VTService12VTCoreHelperC1Ev() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::getLabOperator() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper14getLabOperatorEv(void) {
    ALOGD("_ZN9VTService12VTCoreHelper14getLabOperatorEv() called");
    return 0;
}

/* Exported Object: construction vtable for VTService::IVTService-in-VTService::BnVTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService11BnVTServiceE0_NS_10IVTServiceE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::MessageQueueBase<android::hardware::MQDescriptor, unsigned char, (android::hardware::MQFlavor)1>::mapGrantorDescr(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16MessageQueueBaseINS_8hardware12MQDescriptorEhLNS1_8MQFlavorE1EE15mapGrantorDescrEj(void) {
    ALOGD("_ZN7android16MessageQueueBaseINS_8hardware12MQDescriptorEhLNS1_8MQFlavorE1EE15mapGrantorDescrEj() called");
    return 0;
}

/* Demangled: non-virtual thunk to VTService::VTService::getClient() */
extern "C" __attribute__((visibility("default"))) int _ZThn48_N9VTService9VTService9getClientEv(void) {
    ALOGD("_ZThn48_N9VTService9VTService9getClientEv() called");
    return 0;
}

/* Demangled: android::MessageQueueBase<android::details::AidlMQDescriptorShim, signed char, (android::hardware::MQFlavor)1>::MessageQueueBase(android::details::AidlMQDescriptorShim<signed char, (android::hardware::MQFlavor)1> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16MessageQueueBaseINS_7details20AidlMQDescriptorShimEaLNS_8hardware8MQFlavorE1EEC2ERKNS2_IaLS4_1EEEb(void) {
    ALOGD("_ZN7android16MessageQueueBaseINS_7details20AidlMQDescriptorShimEaLNS_8hardware8MQFlavorE1EEC2ERKNS2_IaLS4_1EEEb() called");
    return 0;
}

/* Demangled: VTService::VTService::binderDied(android::wp<android::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9VTService10binderDiedERKN7android2wpINS1_7IBinderEEE(void) {
    ALOGD("_ZN9VTService9VTService10binderDiedERKN7android2wpINS1_7IBinderEEE() called");
    return 0;
}

/* Demangled: VTService::IVTClient::~IVTClient() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9IVTClientD0Ev(void) {
    ALOGD("_ZN9VTService9IVTClientD0Ev() called");
    return 0;
}

/* Exported Object: vtable for VTService::IVTClient */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9VTService9IVTClientE = NULL;

/* Exported Object: construction vtable for android::BpInterface<VTService::IVTService>-in-VTService::BpVTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService11BpVTServiceE0_N7android11BpInterfaceINS_10IVTServiceEEE = NULL;

/* Demangled: android::Vector<VTService::vt_srv_network_info_struct>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN9VTService26vt_srv_network_info_structEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN9VTService26vt_srv_network_info_structEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<void (*)(bool, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&), std::__1::allocator<void (*)(bool, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>, void (bool, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFvbRKN7android8hardware12MQDescriptorIhLNS3_8MQFlavorE1EEEENS_9allocatorISA_EES9_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFvbRKN7android8hardware12MQDescriptorIhLNS3_8MQFlavorE1EEEENS_9allocatorISA_EES9_E7__cloneEv() called");
    return 0;
}

/* Demangled: VTService::VTPriMsgHdlr::clear() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTPriMsgHdlr5clearEv(void) {
    ALOGD("_ZN9VTService12VTPriMsgHdlr5clearEv() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::getHOString(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper11getHOStringEb(void) {
    ALOGD("_ZN9VTService12VTCoreHelper11getHOStringEb() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::isImsVideoCallon() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper16isImsVideoCallonEv(void) {
    ALOGD("_ZN9VTService12VTCoreHelper16isImsVideoCallonEv() called");
    return 0;
}

/* Demangled: android::details::AidlMQDescriptorShim<signed char, (android::hardware::MQFlavor)1>::AidlMQDescriptorShim(unsigned long, native_handle*, unsigned long, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android7details20AidlMQDescriptorShimIaLNS_8hardware8MQFlavorE1EEC2EmP13native_handlemb(void) {
    ALOGD("_ZN7android7details20AidlMQDescriptorShimIaLNS_8hardware8MQFlavorE1EEC2EmP13native_handlemb() called");
    return 0;
}

/* Exported Object: vtable for VTService::VTMsgHdlr */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9VTService9VTMsgHdlrE = NULL;

/* Exported Object: VTService::IVTClient::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN9VTService9IVTClient10descriptorE = NULL;

/* Exported Object: VTT for VTService::BpVTService */
extern "C" __attribute__((visibility("default"))) void* _ZTTN9VTService11BpVTServiceE = NULL;

/* Demangled: VTService::VTCore::open(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService6VTCore4openEii(void) {
    ALOGD("_ZN9VTService6VTCore4openEii() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::getSessionModifyResultString(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper28getSessionModifyResultStringEi(void) {
    ALOGD("_ZN9VTService12VTCoreHelper28getSessionModifyResultStringEi() called");
    return 0;
}

/* Demangled: android::Vector<VTService::vt_srv_network_info_struct>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN9VTService26vt_srv_network_info_structEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN9VTService26vt_srv_network_info_structEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: VTService::VTService::setPreviewSurface(int, android::sp<android::Surface> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9VTService17setPreviewSurfaceEiRKN7android2spINS1_7SurfaceEEE(void) {
    ALOGD("_ZN9VTService9VTService17setPreviewSurfaceEiRKN7android2spINS1_7SurfaceEEE() called");
    return 0;
}

/* Exported Object: aidl::vendor::mediatek::hardware::videotelephony::IVideoTelephony::hash */
extern "C" __attribute__((visibility("default"))) void* _ZN4aidl6vendor8mediatek8hardware14videotelephony15IVideoTelephony4hashE = NULL;

/* Demangled: VTService::IVTClient::IVTClient() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9IVTClientC2Ev(void) {
    ALOGD("_ZN9VTService9IVTClientC2Ev() called");
    return 0;
}

/* Demangled: android::sp<VTService::VTAVSync>::operator=(VTService::VTAVSync*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN9VTService8VTAVSyncEEaSEPS2_(void) {
    ALOGD("_ZN7android2spIN9VTService8VTAVSyncEEaSEPS2_() called");
    return 0;
}

/* Demangled: VTService::VTCore::retriggerUpdate(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService6VTCore15retriggerUpdateEi(void) {
    ALOGD("_ZN9VTService6VTCore15retriggerUpdateEi() called");
    return 0;
}

/* Demangled: VTService::VTMsgDispatcher::~VTMsgDispatcher() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService15VTMsgDispatcherD0Ev(void) {
    ALOGD("_ZN9VTService15VTMsgDispatcherD0Ev() called");
    return 0;
}

/* Exported Object: vtable for VTService::BnVTService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9VTService11BnVTServiceE = NULL;

/* Demangled: VTService::VTMALStub::UpdateMediaConfig(android::media_config*) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9VTMALStub17UpdateMediaConfigEPN7android12media_configE(void) {
    ALOGD("_ZN9VTService9VTMALStub17UpdateMediaConfigEPN7android12media_configE() called");
    return 0;
}

/* Demangled: VTService::VTMALStub::StopRecord() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9VTMALStub10StopRecordEv(void) {
    ALOGD("_ZN9VTService9VTMALStub10StopRecordEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to VTService::VTService::setDeviceOrientation(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N9VTService9VTService20setDeviceOrientationEii(void) {
    ALOGD("_ZThn8_N9VTService9VTService20setDeviceOrientationEii() called");
    return 0;
}

/* Demangled: VTService::VTService::responseSessionModify(int, android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9VTService21responseSessionModifyEiRKN7android7String8E(void) {
    ALOGD("_ZN9VTService9VTService21responseSessionModifyEiRKN7android7String8E() called");
    return 0;
}

/* Demangled: non-virtual thunk to VTService::IVTClient::~IVTClient() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N9VTService9IVTClientD0Ev(void) {
    ALOGD("_ZThn8_N9VTService9IVTClientD0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::IBinder-in-VTService::BnVTClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService10BnVTClientE16_N7android7IBinderE = NULL;

/* Demangled: VTService::VTCoreHelper::getCamString(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper12getCamStringEi(void) {
    ALOGD("_ZN9VTService12VTCoreHelper12getCamStringEi() called");
    return 0;
}

/* Exported Object: VTService::gVTSClient */
extern "C" __attribute__((visibility("default"))) void* _ZN9VTService10gVTSClientE = NULL;

/* Demangled: android::BnInterface<VTService::IVTClient>::onAsBinder() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11BnInterfaceIN9VTService9IVTClientEE10onAsBinderEv(void) {
    ALOGD("_ZN7android11BnInterfaceIN9VTService9IVTClientEE10onAsBinderEv() called");
    return 0;
}

/* Demangled: virtual thunk to VTService::VTCore::~VTCore() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N9VTService6VTCoreD0Ev(void) {
    ALOGD("_ZTv0_n24_N9VTService6VTCoreD0Ev() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::setOperatorId(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper13setOperatorIdEii(void) {
    ALOGD("_ZN9VTService12VTCoreHelper13setOperatorIdEii() called");
    return 0;
}

/* Demangled: VTService::VTMsgDispatcher::init(void (*)(int, void*, int)) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService15VTMsgDispatcher4initEPFviPviE(void) {
    ALOGD("_ZN9VTService15VTMsgDispatcher4initEPFviPviE() called");
    return 0;
}

/* Exported Object: construction vtable for android::BpInterface<VTService::IVTClient>-in-VTService::BpVTClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService10BpVTClientE0_N7android11BpInterfaceINS_9IVTClientEEE = NULL;

/* Demangled: VTService::VTMALStub::GetTurnOffVideoByPeerState() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9VTMALStub26GetTurnOffVideoByPeerStateEv(void) {
    ALOGD("_ZN9VTService9VTMALStub26GetTurnOffVideoByPeerStateEv() called");
    return 0;
}

/* Demangled: VTService::VTCore::~VTCore() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService6VTCoreD1Ev(void) {
    ALOGD("_ZN9VTService6VTCoreD1Ev() called");
    return 0;
}

/* Demangled: VTService::VTCore::close(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService6VTCore5closeEii(void) {
    ALOGD("_ZN9VTService6VTCore5closeEii() called");
    return 0;
}

/* Demangled: VTService::VTMALStub::SnapShot(android::sp<android::IMemory>&, android::snapshot_mode_t) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9VTMALStub8SnapShotERN7android2spINS1_7IMemoryEEENS1_15snapshot_mode_tE(void) {
    ALOGD("_ZN9VTService9VTMALStub8SnapShotERN7android2spINS1_7IMemoryEEENS1_15snapshot_mode_tE() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::getProfileFromCnf(vt_srv_imcb_msg_session_modify_s*) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper17getProfileFromCnfEP32vt_srv_imcb_msg_session_modify_s(void) {
    ALOGD("_ZN9VTService12VTCoreHelper17getProfileFromCnfEP32vt_srv_imcb_msg_session_modify_s() called");
    return 0;
}

/* Demangled: non-virtual thunk to VTService::VTService::finalization(int) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N9VTService9VTService12finalizationEi(void) {
    ALOGD("_ZThn8_N9VTService9VTService12finalizationEi() called");
    return 0;
}

/* Demangled: non-virtual thunk to VTService::VTService::setCamera(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N9VTService9VTService9setCameraEii(void) {
    ALOGD("_ZThn8_N9VTService9VTService9setCameraEii() called");
    return 0;
}

/* Demangled: non-virtual thunk to VTService::VTService::requestSessionModify(int, android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N9VTService9VTService20requestSessionModifyEiRKN7android7String8E(void) {
    ALOGD("_ZThn8_N9VTService9VTService20requestSessionModifyEiRKN7android7String8E() called");
    return 0;
}

/* Exported Object: vtable for VTService::BnVTClient */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9VTService10BnVTClientE = NULL;

/* Demangled: VTService::MsgHandler::MsgHandler(android::sp<VTService::VTCore>, int, android::sp<android::ImsMa>, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService10MsgHandlerC2EN7android2spINS_6VTCoreEEEiNS2_INS1_5ImsMaEEEi(void) {
    ALOGD("_ZN9VTService10MsgHandlerC2EN7android2spINS_6VTCoreEEEiNS2_INS1_5ImsMaEEEi() called");
    return 0;
}

/* Demangled: VTService::VTCore::setHandoverState(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService6VTCore16setHandoverStateEb(void) {
    ALOGD("_ZN9VTService6VTCore16setHandoverStateEb() called");
    return 0;
}

/* Demangled: VTService::IVTService::~IVTService() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService10IVTServiceD0Ev(void) {
    ALOGD("_ZN9VTService10IVTServiceD0Ev() called");
    return 0;
}

/* Demangled: VTService::vt_ua_2_codec(vt_srv_imcb_msg_param_s*, video_codec_fmtp*) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService13vt_ua_2_codecEP23vt_srv_imcb_msg_param_sP16video_codec_fmtp(void) {
    ALOGD("_ZN9VTService13vt_ua_2_codecEP23vt_srv_imcb_msg_param_sP16video_codec_fmtp() called");
    return 0;
}

/* Demangled: VTService::VTPriMsgHdlr::onMessageReceived(android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTPriMsgHdlr17onMessageReceivedERKN7android2spINS1_8AMessageEEE(void) {
    ALOGD("_ZN9VTService12VTPriMsgHdlr17onMessageReceivedERKN7android2spINS1_8AMessageEEE() called");
    return 0;
}

/* Exported Object: VTService::IVTService::default_impl */
extern "C" __attribute__((visibility("default"))) void* _ZN9VTService10IVTService12default_implE = NULL;

/* Demangled: VTService::VTMALStub::InitMediaConfig(android::media_config*) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9VTMALStub15InitMediaConfigEPN7android12media_configE(void) {
    ALOGD("_ZN9VTService9VTMALStub15InitMediaConfigEPN7android12media_configE() called");
    return 0;
}

/* Demangled: android::sp<VTService::VTCoreHelper>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN9VTService12VTCoreHelperEED2Ev(void) {
    ALOGD("_ZN7android2spIN9VTService12VTCoreHelperEED2Ev() called");
    return 0;
}

/* Exported Object: VTService::g_vt */
extern "C" __attribute__((visibility("default"))) void* _ZN9VTService4g_vtE = NULL;

/* Demangled: VTService::VTCoreHelper::getUaMsgString(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper14getUaMsgStringEi(void) {
    ALOGD("_ZN9VTService12VTCoreHelper14getUaMsgStringEi() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::getErrorString(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper14getErrorStringEi(void) {
    ALOGD("_ZN9VTService12VTCoreHelper14getErrorStringEi() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::isCancelRequest(android::sp<VTService::VideoProfile>) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper15isCancelRequestEN7android2spINS_12VideoProfileEEE(void) {
    ALOGD("_ZN9VTService12VTCoreHelper15isCancelRequestEN7android2spINS_12VideoProfileEEE() called");
    return 0;
}

/* Demangled: VTService::IVTService::IVTService() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService10IVTServiceC2Ev(void) {
    ALOGD("_ZN9VTService10IVTServiceC2Ev() called");
    return 0;
}

/* Demangled: VTService::VTMALStub::setHandoverState(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9VTMALStub16setHandoverStateEb(void) {
    ALOGD("_ZN9VTService9VTMALStub16setHandoverStateEb() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIN7android8hardware17GrantorDescriptorENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android8hardware17GrantorDescriptorENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_(void) {
    ALOGD("_ZNSt3__16vectorIN7android8hardware17GrantorDescriptorENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_() called");
    return 0;
}

/* Demangled: VTService::VTMsgDispatcher::VTMsgDispatcher(void (*)(int, void*, int)) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService15VTMsgDispatcherC2EPFviPviE(void) {
    ALOGD("_ZN9VTService15VTMsgDispatcherC2EPFviPviE() called");
    return 0;
}

/* Demangled: non-virtual thunk to VTService::IVTService::~IVTService() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N9VTService10IVTServiceD1Ev(void) {
    ALOGD("_ZThn8_N9VTService10IVTServiceD1Ev() called");
    return 0;
}

/* Exported Object: vtable for VTService::VTMALStub */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9VTService9VTMALStubE = NULL;

/* Demangled: VTService::VTCore::VTCore(android::sp<VTService::IVTServiceCallBack> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService6VTCoreC1ERKN7android2spINS_18IVTServiceCallBackEEE(void) {
    ALOGD("_ZN9VTService6VTCoreC1ERKN7android2spINS_18IVTServiceCallBackEEE() called");
    return 0;
}

/* Demangled: VTService::VTCore::requestSessionModify(int, android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService6VTCore20requestSessionModifyEiRKN7android7String8E(void) {
    ALOGD("_ZN9VTService6VTCore20requestSessionModifyEiRKN7android7String8E() called");
    return 0;
}

/* Exported Object: construction vtable for VTService::IVTClient-in-VTService::BpVTClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService10BpVTClientE0_NS_9IVTClientE = NULL;

/* Demangled: VTService::VTCoreHelper::getVideoStateString(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper19getVideoStateStringEi(void) {
    ALOGD("_ZN9VTService12VTCoreHelper19getVideoStateStringEi() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::getFromIndex(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper12getFromIndexEi(void) {
    ALOGD("_ZN9VTService12VTCoreHelper12getFromIndexEi() called");
    return 0;
}

/* Demangled: VTService::VTMALStub::SetCameraSensor(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9VTMALStub15SetCameraSensorEi(void) {
    ALOGD("_ZN9VTService9VTMALStub15SetCameraSensorEi() called");
    return 0;
}

/* Demangled: VTService::VTCore::deinit(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService6VTCore6deinitEi(void) {
    ALOGD("_ZN9VTService6VTCore6deinitEi() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::getUIModeString(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper15getUIModeStringEi(void) {
    ALOGD("_ZN9VTService12VTCoreHelper15getUIModeStringEi() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::unPackToVdoProfile(android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper18unPackToVdoProfileEN7android7String8E(void) {
    ALOGD("_ZN9VTService12VTCoreHelper18unPackToVdoProfileEN7android7String8E() called");
    return 0;
}

/* Demangled: VTService::VTCore::triggerGetOperatorId() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService6VTCore20triggerGetOperatorIdEv(void) {
    ALOGD("_ZN9VTService6VTCore20triggerGetOperatorIdEv() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::getNetworkIdByIfId(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper18getNetworkIdByIfIdEi(void) {
    ALOGD("_ZN9VTService12VTCoreHelper18getNetworkIdByIfIdEi() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::dump() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper4dumpEv(void) {
    ALOGD("_ZN9VTService12VTCoreHelper4dumpEv() called");
    return 0;
}

/* Demangled: android::sp<VTService::IVTService>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN9VTService10IVTServiceEED2Ev(void) {
    ALOGD("_ZN7android2spIN9VTService10IVTServiceEED2Ev() called");
    return 0;
}

/* Exported Object: vtable for VTService::IVTService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9VTService10IVTServiceE = NULL;

/* Demangled: VTService::VTMALStub::getBufferQueueProducer(android::sp<android::IGraphicBufferProducer>*) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9VTMALStub22getBufferQueueProducerEPN7android2spINS1_22IGraphicBufferProducerEEE(void) {
    ALOGD("_ZN9VTService9VTMALStub22getBufferQueueProducerEPN7android2spINS1_22IGraphicBufferProducerEEE() called");
    return 0;
}

/* Demangled: virtual thunk to VTService::IVTService::~IVTService() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N9VTService10IVTServiceD1Ev(void) {
    ALOGD("_ZTv0_n24_N9VTService10IVTServiceD1Ev() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::isCallConnected(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper15isCallConnectedEi(void) {
    ALOGD("_ZN9VTService12VTCoreHelper15isCallConnectedEi() called");
    return 0;
}

/* Demangled: VTService::VTCore::snapshot(int, VTService::VT_SRV_SNAPSHOT_TYPE, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService6VTCore8snapshotEiNS_20VT_SRV_SNAPSHOT_TYPEEN7android7String8E(void) {
    ALOGD("_ZN9VTService6VTCore8snapshotEiNS_20VT_SRV_SNAPSHOT_TYPEEN7android7String8E() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<void (*)(bool, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&), std::__1::allocator<void (*)(bool, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>, void (bool, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>::__clone(std::__1::__function::__base<void (bool, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFvbRKN7android8hardware12MQDescriptorIhLNS3_8MQFlavorE1EEEENS_9allocatorISA_EES9_E7__cloneEPNS0_6__baseIS9_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFvbRKN7android8hardware12MQDescriptorIhLNS3_8MQFlavorE1EEEENS_9allocatorISA_EES9_E7__cloneEPNS0_6__baseIS9_EE() called");
    return 0;
}

/* Demangled: VTService::BnVTClient::onTransact(unsigned int, android::Parcel const&, android::Parcel*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService10BnVTClient10onTransactEjRKN7android6ParcelEPS2_j(void) {
    ALOGD("_ZN9VTService10BnVTClient10onTransactEjRKN7android6ParcelEPS2_j() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::getMode(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper7getModeEi(void) {
    ALOGD("_ZN9VTService12VTCoreHelper7getModeEi() called");
    return 0;
}

/* Demangled: VTService::VTCore::startRecording(int, VTService::VT_SRV_RECORD_TYPE, android::String8, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService6VTCore14startRecordingEiNS_18VT_SRV_RECORD_TYPEEN7android7String8Ei(void) {
    ALOGD("_ZN9VTService6VTCore14startRecordingEiNS_18VT_SRV_RECORD_TYPEEN7android7String8Ei() called");
    return 0;
}

/* Demangled: non-virtual thunk to VTService::VTService::onTransact(unsigned int, android::Parcel const&, android::Parcel*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N9VTService9VTService10onTransactEjRKN7android6ParcelEPS2_j(void) {
    ALOGD("_ZThn16_N9VTService9VTService10onTransactEjRKN7android6ParcelEPS2_j() called");
    return 0;
}

/* Exported Object: construction vtable for VTService::IVTNotifyCallback-in-VTService::BnVTClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService10BnVTClientE8_NS_17IVTNotifyCallbackE = NULL;

/* Demangled: VTService::VTCore::initialization(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService6VTCore14initializationEii(void) {
    ALOGD("_ZN9VTService6VTCore14initializationEii() called");
    return 0;
}

/* Demangled: android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1>::operator=(android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEaSERKS3_(void) {
    ALOGD("_ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEaSERKS3_() called");
    return 0;
}

/* Demangled: android::MessageQueueBase<android::details::AidlMQDescriptorShim, signed char, (android::hardware::MQFlavor)1>::mapGrantorDescr(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16MessageQueueBaseINS_7details20AidlMQDescriptorShimEaLNS_8hardware8MQFlavorE1EE15mapGrantorDescrEj(void) {
    ALOGD("_ZN7android16MessageQueueBaseINS_7details20AidlMQDescriptorShimEaLNS_8hardware8MQFlavorE1EE15mapGrantorDescrEj() called");
    return 0;
}

/* Exported Object: guard variable for aidl::vendor::mediatek::hardware::videotelephony::IVideoTelephony::hash */
extern "C" __attribute__((visibility("default"))) void* _ZGVN4aidl6vendor8mediatek8hardware14videotelephony15IVideoTelephony4hashE = NULL;

/* Demangled: VTService::VTMALStub::SetVTQuality(android::VT_Quality) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9VTMALStub12SetVTQualityEN7android10VT_QualityE(void) {
    ALOGD("_ZN9VTService9VTMALStub12SetVTQualityEN7android10VT_QualityE() called");
    return 0;
}

/* Demangled: VTService::MsgHandler::finalization() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService10MsgHandler12finalizationEv(void) {
    ALOGD("_ZN9VTService10MsgHandler12finalizationEv() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::getId(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper5getIdEi(void) {
    ALOGD("_ZN9VTService12VTCoreHelper5getIdEi() called");
    return 0;
}

/* Demangled: android::MessageQueueBase<android::details::AidlMQDescriptorShim, signed char, (android::hardware::MQFlavor)1>::readBlocking(signed char*, unsigned long, unsigned int, unsigned int, long, android::hardware::EventFlag*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16MessageQueueBaseINS_7details20AidlMQDescriptorShimEaLNS_8hardware8MQFlavorE1EE12readBlockingEPamjjlPNS3_9EventFlagE(void) {
    ALOGD("_ZN7android16MessageQueueBaseINS_7details20AidlMQDescriptorShimEaLNS_8hardware8MQFlavorE1EE12readBlockingEPamjjlPNS3_9EventFlagE() called");
    return 0;
}

/* Exported Object: construction vtable for android::BpRefBase-in-VTService::BpVTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService11BpVTServiceE16_N7android9BpRefBaseE = NULL;

/* Demangled: VTService::ImsMaHandler::ImsMaHandler(android::sp<android::ImsMa>, android::sp<VTService::VTCore>, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12ImsMaHandlerC1EN7android2spINS1_5ImsMaEEENS2_INS_6VTCoreEEEi(void) {
    ALOGD("_ZN9VTService12ImsMaHandlerC1EN7android2spINS1_5ImsMaEEENS2_INS_6VTCoreEEEi() called");
    return 0;
}

/* Demangled: VTService::VTMALStub::Start(android::ma_datapath_t) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9VTMALStub5StartEN7android13ma_datapath_tE(void) {
    ALOGD("_ZN9VTService9VTMALStub5StartEN7android13ma_datapath_tE() called");
    return 0;
}

/* Demangled: VTService::VTCore::notifyCallback(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService6VTCore14notifyCallbackEii(void) {
    ALOGD("_ZN9VTService6VTCore14notifyCallbackEii() called");
    return 0;
}

/* Demangled: VTService::VTCore::setDisplaySurface(int, android::sp<android::Surface> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService6VTCore17setDisplaySurfaceEiRKN7android2spINS1_7SurfaceEEE(void) {
    ALOGD("_ZN9VTService6VTCore17setDisplaySurfaceEiRKN7android2spINS1_7SurfaceEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::BnInterface<VTService::IVTService>-in-VTService::VTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService9VTServiceE0_N7android11BnInterfaceINS_10IVTServiceEEE = NULL;

/* Demangled: VTService::IVTService::setDefaultImpl(android::sp<VTService::IVTService>) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService10IVTService14setDefaultImplEN7android2spIS0_EE(void) {
    ALOGD("_ZN9VTService10IVTService14setDefaultImplEN7android2spIS0_EE() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::del(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper3delEi(void) {
    ALOGD("_ZN9VTService12VTCoreHelper3delEi() called");
    return 0;
}

/* Demangled: VTService::VTCore::setCameraParametersOnly(int, android::sensor_info_vilte*) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService6VTCore23setCameraParametersOnlyEiPN7android17sensor_info_vilteE(void) {
    ALOGD("_ZN9VTService6VTCore23setCameraParametersOnlyEiPN7android17sensor_info_vilteE() called");
    return 0;
}

/* Demangled: VTService::VTCore::requestCancelSessionModify(int, android::sp<VTService::VideoProfile>) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService6VTCore26requestCancelSessionModifyEiN7android2spINS_12VideoProfileEEE(void) {
    ALOGD("_ZN9VTService6VTCore26requestCancelSessionModifyEiN7android2spINS_12VideoProfileEEE() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::clearElement(VTService::vt_srv_call_table_entry_struct*) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper12clearElementEPNS_30vt_srv_call_table_entry_structE(void) {
    ALOGD("_ZN9VTService12VTCoreHelper12clearElementEPNS_30vt_srv_call_table_entry_structE() called");
    return 0;
}

/* Demangled: VTService::VTService::switchFeature(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9VTService13switchFeatureEiii(void) {
    ALOGD("_ZN9VTService9VTService13switchFeatureEiii() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjjEEEE = NULL;

/* Demangled: VTService::VTCoreHelper::getStateString(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper14getStateStringEi(void) {
    ALOGD("_ZN9VTService12VTCoreHelper14getStateStringEi() called");
    return 0;
}

/* Demangled: VTService::IVTService::asInterface(android::sp<android::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService10IVTService11asInterfaceERKN7android2spINS1_7IBinderEEE(void) {
    ALOGD("_ZN9VTService10IVTService11asInterfaceERKN7android2spINS1_7IBinderEEE() called");
    return 0;
}

/* Demangled: VTService::VTMALStub::Pause(android::ma_datapath_t, android::imsma_pause_resume_params_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9VTMALStub5PauseEN7android13ma_datapath_tEPNS1_27imsma_pause_resume_params_tE(void) {
    ALOGD("_ZN9VTService9VTMALStub5PauseEN7android13ma_datapath_tEPNS1_27imsma_pause_resume_params_tE() called");
    return 0;
}

/* Demangled: VTService::VTCore::updateCallMode(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService6VTCore14updateCallModeEi(void) {
    ALOGD("_ZN9VTService6VTCore14updateCallModeEi() called");
    return 0;
}

/* Demangled: VTService::VTCore::setCamera(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService6VTCore9setCameraEii(void) {
    ALOGD("_ZN9VTService6VTCore9setCameraEii() called");
    return 0;
}

/* Demangled: VTService::VTService_instantiate() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService21VTService_instantiateEv(void) {
    ALOGD("_ZN9VTService21VTService_instantiateEv() called");
    return 0;
}

/* Exported Object: VTService::VTService::mVTCore */
extern "C" __attribute__((visibility("default"))) void* _ZN9VTService9VTService7mVTCoreE = NULL;

/* Demangled: VTService::ImsMaHandler::exchangeMsg() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12ImsMaHandler11exchangeMsgEv(void) {
    ALOGD("_ZN9VTService12ImsMaHandler11exchangeMsgEv() called");
    return 0;
}

/* Demangled: VTService::VTCore::updateTxRxMode(int, int, VTService::vt_srv_call_update_info_struct*) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService6VTCore14updateTxRxModeEiiPNS_30vt_srv_call_update_info_structE(void) {
    ALOGD("_ZN9VTService6VTCore14updateTxRxModeEiiPNS_30vt_srv_call_update_info_structE() called");
    return 0;
}

/* Demangled: VTService::VTService::requestSessionModify(int, android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9VTService20requestSessionModifyEiRKN7android7String8E(void) {
    ALOGD("_ZN9VTService9VTService20requestSessionModifyEiRKN7android7String8E() called");
    return 0;
}

/* Exported Object: vtable for VTService::VTMsgDispatcher */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9VTService15VTMsgDispatcherE = NULL;

/* Exported Object: construction vtable for android::IBinder::DeathRecipient-in-VTService::VTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService9VTServiceE40_N7android7IBinder14DeathRecipientE = NULL;

/* Demangled: VTService::VTMALStub::SetLocalSurface(android::sp<android::Surface> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9VTMALStub15SetLocalSurfaceERKN7android2spINS1_7SurfaceEEE(void) {
    ALOGD("_ZN9VTService9VTMALStub15SetLocalSurfaceERKN7android2spINS1_7SurfaceEEE() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::add(int, android::sp<VTService::VTMALStub>) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper3addEiN7android2spINS_9VTMALStubEEE(void) {
    ALOGD("_ZN9VTService12VTCoreHelper3addEiN7android2spINS_9VTMALStubEEE() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::getCallModeString(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper17getCallModeStringEi(void) {
    ALOGD("_ZN9VTService12VTCoreHelper17getCallModeStringEi() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::getProfileFromCancelCnf(vt_srv_imcb_msg_session_modify_cancel_cnf_s*) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper23getProfileFromCancelCnfEP43vt_srv_imcb_msg_session_modify_cancel_cnf_s(void) {
    ALOGD("_ZN9VTService12VTCoreHelper23getProfileFromCancelCnfEP43vt_srv_imcb_msg_session_modify_cancel_cnf_s() called");
    return 0;
}

/* Demangled: android::sp<VTService::VTCoreHelper>::operator=(VTService::VTCoreHelper*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN9VTService12VTCoreHelperEEaSEPS2_(void) {
    ALOGD("_ZN7android2spIN9VTService12VTCoreHelperEEaSEPS2_() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::getState(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper8getStateEi(void) {
    ALOGD("_ZN9VTService12VTCoreHelper8getStateEi() called");
    return 0;
}

/* Demangled: non-virtual thunk to VTService::VTService::notifyCallback(int, int, int, int, int, android::String8 const&, android::String8 const&, android::sp<android::IGraphicBufferProducer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZThn48_N9VTService9VTService14notifyCallbackEiiiiiRKN7android7String8ES4_RKNS1_2spINS1_22IGraphicBufferProducerEEE(void) {
    ALOGD("_ZThn48_N9VTService9VTService14notifyCallbackEiiiiiRKN7android7String8ES4_RKNS1_2spINS1_22IGraphicBufferProducerEEE() called");
    return 0;
}

/* Exported Object: construction vtable for VTService::IVTService-in-VTService::BpVTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService11BpVTServiceE0_NS_10IVTServiceE = NULL;

/* Demangled: VTService::VTMALStub::GetPeerSurface() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9VTMALStub14GetPeerSurfaceEv(void) {
    ALOGD("_ZN9VTService9VTMALStub14GetPeerSurfaceEv() called");
    return 0;
}

/* Demangled: android::MessageQueueBase<android::details::AidlMQDescriptorShim, signed char, (android::hardware::MQFlavor)1>::unmapGrantorDescr(void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16MessageQueueBaseINS_7details20AidlMQDescriptorShimEaLNS_8hardware8MQFlavorE1EE17unmapGrantorDescrEPvj(void) {
    ALOGD("_ZN7android16MessageQueueBaseINS_7details20AidlMQDescriptorShimEaLNS_8hardware8MQFlavorE1EE17unmapGrantorDescrEPvj() called");
    return 0;
}

/* Exported Object: vtable for VTService::VTCore */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9VTService6VTCoreE = NULL;

/* Demangled: VTService::VTCoreHelper::getModeString(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper13getModeStringEi(void) {
    ALOGD("_ZN9VTService12VTCoreHelper13getModeStringEi() called");
    return 0;
}

/* Demangled: non-virtual thunk to VTService::VTService::setCameraParametersWithSim(int, int, int, android::sensor_info_vilte*) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N9VTService9VTService26setCameraParametersWithSimEiiiPN7android17sensor_info_vilteE(void) {
    ALOGD("_ZThn8_N9VTService9VTService26setCameraParametersWithSimEiiiPN7android17sensor_info_vilteE() called");
    return 0;
}

/* Demangled: VTService::VTService::triggerGetOperatorId() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9VTService20triggerGetOperatorIdEv(void) {
    ALOGD("_ZN9VTService9VTService20triggerGetOperatorIdEv() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::setMode(int, VTService::VT_SRV_CALL_MODE) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper7setModeEiNS_16VT_SRV_CALL_MODEE(void) {
    ALOGD("_ZN9VTService12VTCoreHelper7setModeEiNS_16VT_SRV_CALL_MODEE() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::getHandoverStateBySim(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper21getHandoverStateBySimEi(void) {
    ALOGD("_ZN9VTService12VTCoreHelper21getHandoverStateBySimEi() called");
    return 0;
}

/* Exported Object: vtable for VTService::VTCoreHelper */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9VTService12VTCoreHelperE = NULL;

/* Demangled: VTService::VTService::setUIMode(int, VTService::VT_SRV_UI_MODE) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9VTService9setUIModeEiNS_14VT_SRV_UI_MODEE(void) {
    ALOGD("_ZN9VTService9VTService9setUIModeEiNS_14VT_SRV_UI_MODEE() called");
    return 0;
}

/* Demangled: VTService::IVTClient::~IVTClient() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9IVTClientD2Ev(void) {
    ALOGD("_ZN9VTService9IVTClientD2Ev() called");
    return 0;
}

/* Demangled: VTService::ImsMaHandler::ImsMaHandler(android::sp<android::ImsMa>, android::sp<VTService::VTCore>, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12ImsMaHandlerC2EN7android2spINS1_5ImsMaEEENS2_INS_6VTCoreEEEi(void) {
    ALOGD("_ZN9VTService12ImsMaHandlerC2EN7android2spINS1_5ImsMaEEENS2_INS_6VTCoreEEEi() called");
    return 0;
}

/* Demangled: VTService::VTCore::stopRecording(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService6VTCore13stopRecordingEi(void) {
    ALOGD("_ZN9VTService6VTCore13stopRecordingEi() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::logMsg(int, char const*, int, int, int, int, char const*, char const*, VTService::VT_SRV_LOG_LV) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper6logMsgEiPKciiiiS2_S2_NS_13VT_SRV_LOG_LVE(void) {
    ALOGD("_ZN9VTService12VTCoreHelper6logMsgEiPKciiiiS2_S2_NS_13VT_SRV_LOG_LVE() called");
    return 0;
}

/* Exported Object: construction vtable for VTService::IVTInterface-in-VTService::VTCore */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService6VTCoreE0_NS_12IVTInterfaceE = NULL;

/* Demangled: VTService::VTService::notifyCallback(int, int, int, int, int, android::String8 const&, android::String8 const&, android::sp<android::IGraphicBufferProducer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9VTService14notifyCallbackEiiiiiRKN7android7String8ES4_RKNS1_2spINS1_22IGraphicBufferProducerEEE(void) {
    ALOGD("_ZN9VTService9VTService14notifyCallbackEiiiiiRKN7android7String8ES4_RKNS1_2spINS1_22IGraphicBufferProducerEEE() called");
    return 0;
}

/* Demangled: VTService::VTMALStub::VTMALStub(int, int, int, int, android::sp<VTService::VTCore> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9VTMALStubC1EiiiiRKN7android2spINS_6VTCoreEEE(void) {
    ALOGD("_ZN9VTService9VTMALStubC1EiiiiRKN7android2spINS_6VTCoreEEE() called");
    return 0;
}

/* Demangled: VTService::vt_callback(int, void*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService11vt_callbackEiPvi(void) {
    ALOGD("_ZN9VTService11vt_callbackEiPvi() called");
    return 0;
}

/* Demangled: non-virtual thunk to VTService::VTService::setDisplaySurface(int, android::sp<android::Surface> const&) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N9VTService9VTService17setDisplaySurfaceEiRKN7android2spINS1_7SurfaceEEE(void) {
    ALOGD("_ZThn8_N9VTService9VTService17setDisplaySurfaceEiRKN7android2spINS1_7SurfaceEEE() called");
    return 0;
}

/* Exported Object: construction vtable for VTService::IVTInterface-in-VTService::VTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService9VTServiceE8_NS_12IVTInterfaceE = NULL;

/* Demangled: VTService::VTMALStub::VTMALStub(int, int, int, int, android::sp<VTService::VTCore> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9VTMALStubC2EiiiiRKN7android2spINS_6VTCoreEEE(void) {
    ALOGD("_ZN9VTService9VTMALStubC2EiiiiRKN7android2spINS_6VTCoreEEE() called");
    return 0;
}

/* Demangled: VTService::VTMALStub::Stop(android::ma_datapath_t) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9VTMALStub4StopEN7android13ma_datapath_tE(void) {
    ALOGD("_ZN9VTService9VTMALStub4StopEN7android13ma_datapath_tE() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::getCurrentOperator(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper18getCurrentOperatorEi(void) {
    ALOGD("_ZN9VTService12VTCoreHelper18getCurrentOperatorEi() called");
    return 0;
}

/* Demangled: non-virtual thunk to VTService::VTService::updateNetworkTable(bool, int, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N9VTService9VTService18updateNetworkTableEbiN7android7String8E(void) {
    ALOGD("_ZThn8_N9VTService9VTService18updateNetworkTableEbiN7android7String8E() called");
    return 0;
}

/* Demangled: VTService::VTService::tagSocketWithUid(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9VTService16tagSocketWithUidEi(void) {
    ALOGD("_ZN9VTService9VTService16tagSocketWithUidEi() called");
    return 0;
}

/* Exported Object: VTT for VTService::BpVTClient */
extern "C" __attribute__((visibility("default"))) void* _ZTTN9VTService10BpVTClientE = NULL;

/* Demangled: VTService::VTCoreHelper::geteEarlyMediaProfileFromState(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper30geteEarlyMediaProfileFromStateEi(void) {
    ALOGD("_ZN9VTService12VTCoreHelper30geteEarlyMediaProfileFromStateEi() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::getHideYouString(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper16getHideYouStringEi(void) {
    ALOGD("_ZN9VTService12VTCoreHelper16getHideYouStringEi() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<void (*)(bool, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&), std::__1::allocator<void (*)(bool, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>, void (bool, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFvbRKN7android8hardware12MQDescriptorIhLNS3_8MQFlavorE1EEEENS_9allocatorISA_EES9_EE = NULL;

/* Demangled: android::MessageQueueBase<android::details::AidlMQDescriptorShim, signed char, (android::hardware::MQFlavor)1>::writeBlocking(signed char const*, unsigned long, unsigned int, unsigned int, long, android::hardware::EventFlag*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16MessageQueueBaseINS_7details20AidlMQDescriptorShimEaLNS_8hardware8MQFlavorE1EE13writeBlockingEPKamjjlPNS3_9EventFlagE(void) {
    ALOGD("_ZN7android16MessageQueueBaseINS_7details20AidlMQDescriptorShimEaLNS_8hardware8MQFlavorE1EE13writeBlockingEPKamjjlPNS3_9EventFlagE() called");
    return 0;
}

/* Demangled: VTService::VTService::setDeviceOrientation(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9VTService20setDeviceOrientationEii(void) {
    ALOGD("_ZN9VTService9VTService20setDeviceOrientationEii() called");
    return 0;
}

/* Demangled: VTService::VTMsgDispatcher::~VTMsgDispatcher() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService15VTMsgDispatcherD2Ev(void) {
    ALOGD("_ZN9VTService15VTMsgDispatcherD2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::BpRefBase-in-VTService::BpVTClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService10BpVTClientE16_N7android9BpRefBaseE = NULL;

/* Demangled: VTService::VTCore::~VTCore() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService6VTCoreD0Ev(void) {
    ALOGD("_ZN9VTService6VTCoreD0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to VTService::VTService::setCameraParameters(int, int, android::sensor_info_vilte*) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N9VTService9VTService19setCameraParametersEiiPN7android17sensor_info_vilteE(void) {
    ALOGD("_ZThn8_N9VTService9VTService19setCameraParametersEiiPN7android17sensor_info_vilteE() called");
    return 0;
}

/* Demangled: android::sp<VTService::IVTServiceCallBack>::operator=(VTService::IVTServiceCallBack*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN9VTService18IVTServiceCallBackEEaSEPS2_(void) {
    ALOGD("_ZN7android2spIN9VTService18IVTServiceCallBackEEaSEPS2_() called");
    return 0;
}

/* Demangled: VTService::VTService::stopRecording(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9VTService13stopRecordingEi(void) {
    ALOGD("_ZN9VTService9VTService13stopRecordingEi() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_compareEPKvS5_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_compareEPKvS5_() called");
    return 0;
}

/* Demangled: android::sp<VTService::VTCore>::operator=(VTService::VTCore*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN9VTService6VTCoreEEaSEPS2_(void) {
    ALOGD("_ZN7android2spIN9VTService6VTCoreEEaSEPS2_() called");
    return 0;
}

/* Demangled: VTService::VTCore::init_internal(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService6VTCore13init_internalEi(void) {
    ALOGD("_ZN9VTService6VTCore13init_internalEi() called");
    return 0;
}

/* Demangled: android::MessageQueueBase<android::details::AidlMQDescriptorShim, signed char, (android::hardware::MQFlavor)1>::initMemory(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16MessageQueueBaseINS_7details20AidlMQDescriptorShimEaLNS_8hardware8MQFlavorE1EE10initMemoryEb(void) {
    ALOGD("_ZN7android16MessageQueueBaseINS_7details20AidlMQDescriptorShimEaLNS_8hardware8MQFlavorE1EE10initMemoryEb() called");
    return 0;
}

/* Demangled: VTService::VTService::finalization(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9VTService12finalizationEi(void) {
    ALOGD("_ZN9VTService9VTService12finalizationEi() called");
    return 0;
}

/* Demangled: VTService::VTService::setCameraParametersWithSim(int, int, int, android::sensor_info_vilte*) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9VTService26setCameraParametersWithSimEiiiPN7android17sensor_info_vilteE(void) {
    ALOGD("_ZN9VTService9VTService26setCameraParametersWithSimEiiiPN7android17sensor_info_vilteE() called");
    return 0;
}

/* Demangled: VTService::IVTClient::setDefaultImpl(android::sp<VTService::IVTClient>) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9IVTClient14setDefaultImplEN7android2spIS0_EE(void) {
    ALOGD("_ZN9VTService9IVTClient14setDefaultImplEN7android2spIS0_EE() called");
    return 0;
}

/* Exported Object: construction vtable for VTService::IVTServiceCallBack-in-VTService::VTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService9VTServiceE48_NS_18IVTServiceCallBackE = NULL;

/* Exported Object: construction vtable for android::BBinder-in-VTService::BnVTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService11BnVTServiceE16_N7android7BBinderE = NULL;

/* Demangled: VTService::VTCoreHelper::pop() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper3popEv(void) {
    ALOGD("_ZN9VTService12VTCoreHelper3popEv() called");
    return 0;
}

/* Demangled: VTService::VT_Send(int, void*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService7VT_SendEiPvi(void) {
    ALOGD("_ZN9VTService7VT_SendEiPvi() called");
    return 0;
}

/* Demangled: android::MessageQueueBase<android::hardware::MQDescriptor, unsigned char, (android::hardware::MQFlavor)1>::read(unsigned char*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16MessageQueueBaseINS_8hardware12MQDescriptorEhLNS1_8MQFlavorE1EE4readEPhm(void) {
    ALOGD("_ZN7android16MessageQueueBaseINS_8hardware12MQDescriptorEhLNS1_8MQFlavorE1EE4readEPhm() called");
    return 0;
}

/* Exported Object: vtable for VTService::VTService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9VTService9VTServiceE = NULL;

/* Exported Object: construction vtable for VTService::IVTService-in-VTService::VTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService9VTServiceE0_NS_10IVTServiceE = NULL;

/* Demangled: VTService::IVTService::~IVTService() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService10IVTServiceD2Ev(void) {
    ALOGD("_ZN9VTService10IVTServiceD2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::IInterface-in-VTService::BnVTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService11BnVTServiceE0_N7android10IInterfaceE = NULL;

/* Demangled: VTService::VTService::setDisplaySurface(int, android::sp<android::Surface> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9VTService17setDisplaySurfaceEiRKN7android2spINS1_7SurfaceEEE(void) {
    ALOGD("_ZN9VTService9VTService17setDisplaySurfaceEiRKN7android2spINS1_7SurfaceEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to VTService::IVTService::~IVTService() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N9VTService10IVTServiceD0Ev(void) {
    ALOGD("_ZThn8_N9VTService10IVTServiceD0Ev() called");
    return 0;
}

/* Demangled: VTService::VTCoreHelper::init() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService12VTCoreHelper4initEv(void) {
    ALOGD("_ZN9VTService12VTCoreHelper4initEv() called");
    return 0;
}

/* Demangled: VTService::VTCore::close_internal(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService6VTCore14close_internalEii(void) {
    ALOGD("_ZN9VTService6VTCore14close_internalEii() called");
    return 0;
}

/* Demangled: android::MessageQueueBase<android::hardware::MQDescriptor, unsigned char, (android::hardware::MQFlavor)1>::writeBlocking(unsigned char const*, unsigned long, unsigned int, unsigned int, long, android::hardware::EventFlag*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16MessageQueueBaseINS_8hardware12MQDescriptorEhLNS1_8MQFlavorE1EE13writeBlockingEPKhmjjlPNS1_9EventFlagE(void) {
    ALOGD("_ZN7android16MessageQueueBaseINS_8hardware12MQDescriptorEhLNS1_8MQFlavorE1EE13writeBlockingEPKhmjjlPNS1_9EventFlagE() called");
    return 0;
}

/* Demangled: non-virtual thunk to VTService::VTService::initialization(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N9VTService9VTService14initializationEii(void) {
    ALOGD("_ZThn8_N9VTService9VTService14initializationEii() called");
    return 0;
}
