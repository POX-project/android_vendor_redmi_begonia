/*
 * Reverse-Engineered ABI Specification for: libmtk_vt_service.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libmtk_vt_service.so
 */

#ifndef BEGONIA_RE_LIBMTK_VT_SERVICE_H
#define BEGONIA_RE_LIBMTK_VT_SERVICE_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN9VTService9IVTClient14getDefaultImplEv */
/* Demangled: VTService::IVTClient::getDefaultImpl() */
int _ZN9VTService9IVTClient14getDefaultImplEv(void);

/* Symbol: _ZTCN9VTService10IVTServiceE0_N7android10IInterfaceE */
/* Demangled: construction vtable for android::IInterface-in-VTService::IVTService */
extern void* _ZTCN9VTService10IVTServiceE0_N7android10IInterfaceE;

/* Symbol: _ZN9VTService12ImsMaHandler12finalizationEv */
/* Demangled: VTService::ImsMaHandler::finalization() */
int _ZN9VTService12ImsMaHandler12finalizationEv(void);

/* Symbol: _ZN9VTService9VTMALStub12setRANEnableEb */
/* Demangled: VTService::VTMALStub::setRANEnable(bool) */
int _ZN9VTService9VTMALStub12setRANEnableEb(void);

/* Symbol: _ZN9VTService12VTCoreHelper9getUsedNrEv */
/* Demangled: VTService::VTCoreHelper::getUsedNr() */
int _ZN9VTService12VTCoreHelper9getUsedNrEv(void);

/* Symbol: _ZN9VTService6VTCore23setHandoverStateBySimIdEib */
/* Demangled: VTService::VTCore::setHandoverStateBySimId(int, bool) */
int _ZN9VTService6VTCore23setHandoverStateBySimIdEib(void);

/* Symbol: _ZN9VTService16g_vt_srv_msg_hdrE */
/* Demangled: VTService::g_vt_srv_msg_hdr */
extern void* _ZN9VTService16g_vt_srv_msg_hdrE;

/* Symbol: _ZTCN9VTService9VTServiceE0_NS_11BnVTServiceE */
/* Demangled: construction vtable for VTService::BnVTService-in-VTService::VTService */
extern void* _ZTCN9VTService9VTServiceE0_NS_11BnVTServiceE;

/* Symbol: _ZN7android2spIN9VTService9IVTClientEED2Ev */
/* Demangled: android::sp<VTService::IVTClient>::~sp() */
int _ZN7android2spIN9VTService9IVTClientEED2Ev(void);

/* Symbol: _ZTCN9VTService9IVTClientE8_NS_17IVTNotifyCallbackE */
/* Demangled: construction vtable for VTService::IVTNotifyCallback-in-VTService::IVTClient */
extern void* _ZTCN9VTService9IVTClientE8_NS_17IVTNotifyCallbackE;

/* Symbol: _ZN9VTService12VTCoreHelper14getIntPropertyEPKc */
/* Demangled: VTService::VTCoreHelper::getIntProperty(char const*) */
int _ZN9VTService12VTCoreHelper14getIntPropertyEPKc(void);

/* Symbol: _ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEC2ERKNSt3__16vectorINS0_17GrantorDescriptorENS4_9allocatorIS6_EEEEP13native_handlem */
/* Demangled: android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1>::MQDescriptor(std::__1::vector<android::hardware::GrantorDescriptor, std::__1::allocator<android::hardware::GrantorDescriptor> > const&, native_handle*, unsigned long) */
int _ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEC2ERKNSt3__16vectorINS0_17GrantorDescriptorENS4_9allocatorIS6_EEEEP13native_handlem(void);

/* Symbol: _ZN9VTService9VTMALStub16notifyRanBitRateEbi */
/* Demangled: VTService::VTMALStub::notifyRanBitRate(bool, int) */
int _ZN9VTService9VTMALStub16notifyRanBitRateEbi(void);

/* Symbol: _ZN9VTService6VTCore16tagSocketWithUidEi */
/* Demangled: VTService::VTCore::tagSocketWithUid(int) */
int _ZN9VTService6VTCore16tagSocketWithUidEi(void);

/* Symbol: _ZN9VTService6VTCore14setSignalLevelEii */
/* Demangled: VTService::VTCore::setSignalLevel(int, int) */
int _ZN9VTService6VTCore14setSignalLevelEii(void);

/* Symbol: _ZN9VTService9VTService19setCameraParametersEiiPN7android17sensor_info_vilteE */
/* Demangled: VTService::VTService::setCameraParameters(int, int, android::sensor_info_vilte*) */
int _ZN9VTService9VTService19setCameraParametersEiiPN7android17sensor_info_vilteE(void);

/* Symbol: _ZN9VTService9VTService23setCameraParametersOnlyEiPN7android17sensor_info_vilteE */
/* Demangled: VTService::VTService::setCameraParametersOnly(int, android::sensor_info_vilte*) */
int _ZN9VTService9VTService23setCameraParametersOnlyEiPN7android17sensor_info_vilteE(void);

/* Symbol: _ZTv0_n24_N9VTService10IVTServiceD0Ev */
/* Demangled: virtual thunk to VTService::IVTService::~IVTService() */
int _ZTv0_n24_N9VTService10IVTServiceD0Ev(void);

/* Symbol: _ZN9VTService9VTMALStub23setDeviceRotationDegreeEi */
/* Demangled: VTService::VTMALStub::setDeviceRotationDegree(int) */
int _ZN9VTService9VTMALStub23setDeviceRotationDegreeEi(void);

/* Symbol: _ZN9VTService12VTCoreHelper21setHandoverStateBySimEii */
/* Demangled: VTService::VTCoreHelper::setHandoverStateBySim(int, int) */
int _ZN9VTService12VTCoreHelper21setHandoverStateBySimEii(void);

/* Symbol: _ZN9VTService11onBinderDieEPv */
/* Demangled: VTService::onBinderDie(void*) */
int _ZN9VTService11onBinderDieEPv(void);

/* Symbol: _ZN9VTService9VTMALStub27GetTurnOffVideoByLocalStateEv */
/* Demangled: VTService::VTMALStub::GetTurnOffVideoByLocalState() */
int _ZN9VTService9VTMALStub27GetTurnOffVideoByLocalStateEv(void);

/* Symbol: _ZN9VTService12VTCoreHelper5checkEi */
/* Demangled: VTService::VTCoreHelper::check(int) */
int _ZN9VTService12VTCoreHelper5checkEi(void);

/* Symbol: _ZN9VTService12VTCoreHelper20setRequestVdoProfileEiN7android2spINS_12VideoProfileEEE */
/* Demangled: VTService::VTCoreHelper::setRequestVdoProfile(int, android::sp<VTService::VideoProfile>) */
int _ZN9VTService12VTCoreHelper20setRequestVdoProfileEiN7android2spINS_12VideoProfileEEE(void);

/* Symbol: _ZN9VTService12VTCoreHelper15getHideMeStringEi */
/* Demangled: VTService::VTCoreHelper::getHideMeString(int) */
int _ZN9VTService12VTCoreHelper15getHideMeStringEi(void);

/* Symbol: _ZTCN9VTService11BnVTServiceE16_N7android7IBinderE */
/* Demangled: construction vtable for android::IBinder-in-VTService::BnVTService */
extern void* _ZTCN9VTService11BnVTServiceE16_N7android7IBinderE;

/* Symbol: _ZN7android2spIN9VTService27VideoTelephonyDeathReceiverEED2Ev */
/* Demangled: android::sp<VTService::VideoTelephonyDeathReceiver>::~sp() */
int _ZN7android2spIN9VTService27VideoTelephonyDeathReceiverEED2Ev(void);

/* Symbol: _ZN9VTService9VTMALStub11StartRecordEN7android13record_mode_tE */
/* Demangled: VTService::VTMALStub::StartRecord(android::record_mode_t) */
int _ZN9VTService9VTMALStub11StartRecordEN7android13record_mode_tE(void);

/* Symbol: _ZN9VTService9VTService8snapshotEiNS_20VT_SRV_SNAPSHOT_TYPEEN7android7String8E */
/* Demangled: VTService::VTService::snapshot(int, VTService::VT_SRV_SNAPSHOT_TYPE, android::String8) */
int _ZN9VTService9VTService8snapshotEiNS_20VT_SRV_SNAPSHOT_TYPEEN7android7String8E(void);

/* Symbol: _ZNK9VTService9IVTClient22getInterfaceDescriptorEv */
/* Demangled: VTService::IVTClient::getInterfaceDescriptor() const */
int _ZNK9VTService9IVTClient22getInterfaceDescriptorEv(void);

/* Symbol: _ZTCN9VTService10BnVTClientE0_N7android11BnInterfaceINS_9IVTClientEEE */
/* Demangled: construction vtable for android::BnInterface<VTService::IVTClient>-in-VTService::BnVTClient */
extern void* _ZTCN9VTService10BnVTClientE0_N7android11BnInterfaceINS_9IVTClientEEE;

/* Symbol: _ZN9VTService9VTMALStub9getLoggerEv */
/* Demangled: VTService::VTMALStub::getLogger() */
int _ZN9VTService9VTMALStub9getLoggerEv(void);

/* Symbol: _ZN9VTService9VTService14startRecordingEiNS_18VT_SRV_RECORD_TYPEEN7android7String8Ei */
/* Demangled: VTService::VTService::startRecording(int, VTService::VT_SRV_RECORD_TYPE, android::String8, int) */
int _ZN9VTService9VTService14startRecordingEiNS_18VT_SRV_RECORD_TYPEEN7android7String8Ei(void);

/* Symbol: _ZN7android16MessageQueueBaseINS_8hardware12MQDescriptorEhLNS1_8MQFlavorE1EED2Ev */
/* Demangled: android::MessageQueueBase<android::hardware::MQDescriptor, unsigned char, (android::hardware::MQFlavor)1>::~MessageQueueBase() */
int _ZN7android16MessageQueueBaseINS_8hardware12MQDescriptorEhLNS1_8MQFlavorE1EED2Ev(void);

/* Symbol: _ZN9VTService9VTMALStub7RestartEN7android13ma_datapath_tEPNS1_27imsma_pause_resume_params_tES4_NS_18VT_RESTART_MA_MODEE */
/* Demangled: VTService::VTMALStub::Restart(android::ma_datapath_t, android::imsma_pause_resume_params_t*, android::imsma_pause_resume_params_t*, VTService::VT_RESTART_MA_MODE) */
int _ZN9VTService9VTMALStub7RestartEN7android13ma_datapath_tEPNS1_27imsma_pause_resume_params_tES4_NS_18VT_RESTART_MA_MODEE(void);

/* Symbol: _ZN9VTService11vt_ua_2_rtpEP23vt_srv_imcb_msg_param_sPN7android17rtp_rtcp_config_tE */
/* Demangled: VTService::vt_ua_2_rtp(vt_srv_imcb_msg_param_s*, android::rtp_rtcp_config_t*) */
int _ZN9VTService11vt_ua_2_rtpEP23vt_srv_imcb_msg_param_sPN7android17rtp_rtcp_config_tE(void);

/* Symbol: _ZN9VTService12VTCoreHelper9logStringEPKcNS_13VT_SRV_LOG_LVE */
/* Demangled: VTService::VTCoreHelper::logString(char const*, VTService::VT_SRV_LOG_LV) */
int _ZN9VTService12VTCoreHelper9logStringEPKcNS_13VT_SRV_LOG_LVE(void);

/* Symbol: _ZN9VTService15VTMsgDispatcher15dispatchMessageEiPvib */
/* Demangled: VTService::VTMsgDispatcher::dispatchMessage(int, void*, int, bool) */
int _ZN9VTService15VTMsgDispatcher15dispatchMessageEiPvib(void);

/* Symbol: _ZNK7android6VectorIN9VTService26vt_srv_network_info_structEE10do_destroyEPvm */
/* Demangled: android::Vector<VTService::vt_srv_network_info_struct>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN9VTService26vt_srv_network_info_structEE10do_destroyEPvm(void);

/* Symbol: _ZThn40_N9VTService9VTService10binderDiedERKN7android2wpINS1_7IBinderEEE */
/* Demangled: non-virtual thunk to VTService::VTService::binderDied(android::wp<android::IBinder> const&) */
int _ZThn40_N9VTService9VTService10binderDiedERKN7android2wpINS1_7IBinderEEE(void);

/* Symbol: _ZN9VTService12VTCoreHelper16getSurfaceStringEi */
/* Demangled: VTService::VTCoreHelper::getSurfaceString(int) */
int _ZN9VTService12VTCoreHelper16getSurfaceStringEi(void);

/* Symbol: _ZN9VTService6VTCore13switchFeatureEiii */
/* Demangled: VTService::VTCore::switchFeature(int, int, int) */
int _ZN9VTService6VTCore13switchFeatureEiii(void);

/* Symbol: _ZN7android7details20AidlMQDescriptorShimIaLNS_8hardware8MQFlavorE1EEaSERKS4_ */
/* Demangled: android::details::AidlMQDescriptorShim<signed char, (android::hardware::MQFlavor)1>::operator=(android::details::AidlMQDescriptorShim<signed char, (android::hardware::MQFlavor)1> const&) */
int _ZN7android7details20AidlMQDescriptorShimIaLNS_8hardware8MQFlavorE1EEaSERKS4_(void);

/* Symbol: _ZTCN9VTService27VideoTelephonyDeathReceiverE0_N7android8hardware20hidl_death_recipientE */
/* Demangled: construction vtable for android::hardware::hidl_death_recipient-in-VTService::VideoTelephonyDeathReceiver */
extern void* _ZTCN9VTService27VideoTelephonyDeathReceiverE0_N7android8hardware20hidl_death_recipientE;

/* Symbol: _ZTCN9VTService9VTServiceE0_N7android10IInterfaceE */
/* Demangled: construction vtable for android::IInterface-in-VTService::VTService */
extern void* _ZTCN9VTService9VTServiceE0_N7android10IInterfaceE;

/* Symbol: _ZTCN9VTService11BnVTServiceE8_NS_12IVTInterfaceE */
/* Demangled: construction vtable for VTService::IVTInterface-in-VTService::BnVTService */
extern void* _ZTCN9VTService11BnVTServiceE8_NS_12IVTInterfaceE;

/* Symbol: _ZTVN9VTService27VideoTelephonyDeathReceiverE */
/* Demangled: vtable for VTService::VideoTelephonyDeathReceiver */
extern void* _ZTVN9VTService27VideoTelephonyDeathReceiverE;

/* Symbol: _ZN7android16MessageQueueBaseINS_8hardware12MQDescriptorEhLNS1_8MQFlavorE1EEC2ERKNS2_IhLS3_1EEEb */
/* Demangled: android::MessageQueueBase<android::hardware::MQDescriptor, unsigned char, (android::hardware::MQFlavor)1>::MessageQueueBase(android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&, bool) */
int _ZN7android16MessageQueueBaseINS_8hardware12MQDescriptorEhLNS1_8MQFlavorE1EEC2ERKNS2_IhLS3_1EEEb(void);

/* Symbol: _ZN7android2spIN9VTService6VTCoreEED2Ev */
/* Demangled: android::sp<VTService::VTCore>::~sp() */
int _ZN7android2spIN9VTService6VTCoreEED2Ev(void);

/* Symbol: _ZThn8_N9VTService9VTService14startRecordingEiNS_18VT_SRV_RECORD_TYPEEN7android7String8Ei */
/* Demangled: non-virtual thunk to VTService::VTService::startRecording(int, VTService::VT_SRV_RECORD_TYPE, android::String8, int) */
int _ZThn8_N9VTService9VTService14startRecordingEiNS_18VT_SRV_RECORD_TYPEEN7android7String8Ei(void);

/* Symbol: _ZN9VTService12VTCoreHelper6isUsedEi */
/* Demangled: VTService::VTCoreHelper::isUsed(int) */
int _ZN9VTService12VTCoreHelper6isUsedEi(void);

/* Symbol: _ZN9VTService12VTCoreHelper7isMatchEii */
/* Demangled: VTService::VTCoreHelper::isMatch(int, int) */
int _ZN9VTService12VTCoreHelper7isMatchEii(void);

/* Symbol: _ZN9VTService9VTService14setupVTServiceERKN7android2spINS_9IVTClientEEE */
/* Demangled: VTService::VTService::setupVTService(android::sp<VTService::IVTClient> const&) */
int _ZN9VTService9VTService14setupVTServiceERKN7android2spINS_9IVTClientEEE(void);

/* Symbol: _ZN9VTService12VTCoreHelper9logActionEPKcS2_iS2_NS_13VT_SRV_LOG_LVE */
/* Demangled: VTService::VTCoreHelper::logAction(char const*, char const*, int, char const*, VTService::VT_SRV_LOG_LV) */
int _ZN9VTService12VTCoreHelper9logActionEPKcS2_iS2_NS_13VT_SRV_LOG_LVE(void);

/* Symbol: _ZN9VTService12VTCoreHelper10checkRangeEiii */
/* Demangled: VTService::VTCoreHelper::checkRange(int, int, int) */
int _ZN9VTService12VTCoreHelper10checkRangeEiii(void);

/* Symbol: _ZN9VTService6VTCoreC2ERKN7android2spINS_18IVTServiceCallBackEEE */
/* Demangled: VTService::VTCore::VTCore(android::sp<VTService::IVTServiceCallBack> const&) */
int _ZN9VTService6VTCoreC2ERKN7android2spINS_18IVTServiceCallBackEEE(void);

/* Symbol: _ZN9VTService12VTCoreHelper13getOperatorIdEi */
/* Demangled: VTService::VTCoreHelper::getOperatorId(int) */
int _ZN9VTService12VTCoreHelper13getOperatorIdEi(void);

/* Symbol: _ZN9VTService17vt_rtp_codec_2_uaEP32vt_srv_imcb_msg_vt_cap_setting_sii */
/* Demangled: VTService::vt_rtp_codec_2_ua(vt_srv_imcb_msg_vt_cap_setting_s*, int, int) */
int _ZN9VTService17vt_rtp_codec_2_uaEP32vt_srv_imcb_msg_vt_cap_setting_sii(void);

/* Symbol: _ZN9VTService12VTCoreHelper25getLocalCameraStateStringEi */
/* Demangled: VTService::VTCoreHelper::getLocalCameraStateString(int) */
int _ZN9VTService12VTCoreHelper25getLocalCameraStateStringEi(void);

/* Symbol: _ZThn8_N9VTService9VTService8snapshotEiNS_20VT_SRV_SNAPSHOT_TYPEEN7android7String8E */
/* Demangled: non-virtual thunk to VTService::VTService::snapshot(int, VTService::VT_SRV_SNAPSHOT_TYPE, android::String8) */
int _ZThn8_N9VTService9VTService8snapshotEiNS_20VT_SRV_SNAPSHOT_TYPEEN7android7String8E(void);

/* Symbol: _ZN9VTService9VTMsgHdlr13handleMessageERKN7android2spINS1_8AMessageEEE */
/* Demangled: VTService::VTMsgHdlr::handleMessage(android::sp<android::AMessage> const&) */
int _ZN9VTService9VTMsgHdlr13handleMessageERKN7android2spINS1_8AMessageEEE(void);

/* Symbol: _ZN7android7details20AidlMQDescriptorShimIaLNS_8hardware8MQFlavorE1EEC2ERKN4aidl7android8hardware6common3fmq12MQDescriptorIaNS9_21SynchronizedReadWriteEEE */
/* Demangled: android::details::AidlMQDescriptorShim<signed char, (android::hardware::MQFlavor)1>::AidlMQDescriptorShim(aidl::android::hardware::common::fmq::MQDescriptor<signed char, aidl::android::hardware::common::fmq::SynchronizedReadWrite> const&) */
int _ZN7android7details20AidlMQDescriptorShimIaLNS_8hardware8MQFlavorE1EEC2ERKN4aidl7android8hardware6common3fmq12MQDescriptorIaNS9_21SynchronizedReadWriteEEE(void);

/* Symbol: _ZThn8_N9VTService9VTService23setCameraParametersOnlyEiPN7android17sensor_info_vilteE */
/* Demangled: non-virtual thunk to VTService::VTService::setCameraParametersOnly(int, android::sensor_info_vilte*) */
int _ZThn8_N9VTService9VTService23setCameraParametersOnlyEiPN7android17sensor_info_vilteE(void);

/* Symbol: _ZTTN9VTService10BnVTClientE */
/* Demangled: VTT for VTService::BnVTClient */
extern void* _ZTTN9VTService10BnVTClientE;

/* Symbol: _ZN9VTService9VTMALStub9setUIModeENS_14VT_SRV_UI_MODEE */
/* Demangled: VTService::VTMALStub::setUIMode(VTService::VT_SRV_UI_MODE) */
int _ZN9VTService9VTMALStub9setUIModeENS_14VT_SRV_UI_MODEE(void);

/* Symbol: _ZN9VTService12ImsMaHandler17onMessageReceivedERKN7android2spINS1_8AMessageEEE */
/* Demangled: VTService::ImsMaHandler::onMessageReceived(android::sp<android::AMessage> const&) */
int _ZN9VTService12ImsMaHandler17onMessageReceivedERKN7android2spINS1_8AMessageEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE12do_constructEPvm(void);

/* Symbol: _ZNSt3__16vectorIN7android8hardware17GrantorDescriptorENS_9allocatorIS3_EEE8__appendEm */
/* Demangled: std::__1::vector<android::hardware::GrantorDescriptor, std::__1::allocator<android::hardware::GrantorDescriptor> >::__append(unsigned long) */
int _ZNSt3__16vectorIN7android8hardware17GrantorDescriptorENS_9allocatorIS3_EEE8__appendEm(void);

/* Symbol: _ZNSt3__110__function6__funcIPFvbRKN7android8hardware12MQDescriptorIhLNS3_8MQFlavorE1EEEENS_9allocatorISA_EES9_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<void (*)(bool, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&), std::__1::allocator<void (*)(bool, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>, void (bool, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFvbRKN7android8hardware12MQDescriptorIhLNS3_8MQFlavorE1EEEENS_9allocatorISA_EES9_E18destroy_deallocateEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFvbRKN7android8hardware12MQDescriptorIhLNS3_8MQFlavorE1EEEENS_9allocatorISA_EES9_EclEObS8_ */
/* Demangled: std::__1::__function::__func<void (*)(bool, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&), std::__1::allocator<void (*)(bool, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>, void (bool, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>::operator()(bool&&, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&) */
int _ZNSt3__110__function6__funcIPFvbRKN7android8hardware12MQDescriptorIhLNS3_8MQFlavorE1EEEENS_9allocatorISA_EES9_EclEObS8_(void);

/* Symbol: _ZTTN9VTService9VTServiceE */
/* Demangled: VTT for VTService::VTService */
extern void* _ZTTN9VTService9VTServiceE;

/* Symbol: _ZTCN9VTService10IVTServiceE8_NS_12IVTInterfaceE */
/* Demangled: construction vtable for VTService::IVTInterface-in-VTService::IVTService */
extern void* _ZTCN9VTService10IVTServiceE8_NS_12IVTInterfaceE;

/* Symbol: _ZN9VTService9VTMALStub14setSignalLevelEi */
/* Demangled: VTService::VTMALStub::setSignalLevel(int) */
int _ZN9VTService9VTMALStub14setSignalLevelEi(void);

/* Symbol: _ZN9VTService6VTCore19setCameraParametersEiiPN7android17sensor_info_vilteE */
/* Demangled: VTService::VTCore::setCameraParameters(int, int, android::sensor_info_vilte*) */
int _ZN9VTService6VTCore19setCameraParametersEiiPN7android17sensor_info_vilteE(void);

/* Symbol: _ZN9VTService6VTCore26setCameraParametersWithSimEiiiPN7android17sensor_info_vilteE */
/* Demangled: VTService::VTCore::setCameraParametersWithSim(int, int, int, android::sensor_info_vilte*) */
int _ZN9VTService6VTCore26setCameraParametersWithSimEiiiPN7android17sensor_info_vilteE(void);

/* Symbol: _ZTv0_n24_N9VTService9IVTClientD1Ev */
/* Demangled: virtual thunk to VTService::IVTClient::~IVTClient() */
int _ZTv0_n24_N9VTService9IVTClientD1Ev(void);

/* Symbol: _ZN9VTService9VTMALStub14SetPeerSurfaceERKN7android2spINS1_7SurfaceEEE */
/* Demangled: VTService::VTMALStub::SetPeerSurface(android::sp<android::Surface> const&) */
int _ZN9VTService9VTMALStub14SetPeerSurfaceERKN7android2spINS1_7SurfaceEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN9VTService12VTCoreHelperC2Ev */
/* Demangled: VTService::VTCoreHelper::VTCoreHelper() */
int _ZN9VTService12VTCoreHelperC2Ev(void);

/* Symbol: _ZTTN9VTService27VideoTelephonyDeathReceiverE */
/* Demangled: VTT for VTService::VideoTelephonyDeathReceiver */
extern void* _ZTTN9VTService27VideoTelephonyDeathReceiverE;

/* Symbol: _ZN9VTService12VTCoreHelper20getStateStringWithIdEi */
/* Demangled: VTService::VTCoreHelper::getStateStringWithId(int) */
int _ZN9VTService12VTCoreHelper20getStateStringWithIdEi(void);

/* Symbol: _ZN9VTService9VTService9getClientEv */
/* Demangled: VTService::VTService::getClient() */
int _ZN9VTService9VTService9getClientEv(void);

/* Symbol: _ZTTN9VTService9IVTClientE */
/* Demangled: VTT for VTService::IVTClient */
extern void* _ZTTN9VTService9IVTClientE;

/* Symbol: _ZN9VTService9VTMALStub6ResumeEN7android13ma_datapath_tEPNS1_27imsma_pause_resume_params_tE */
/* Demangled: VTService::VTMALStub::Resume(android::ma_datapath_t, android::imsma_pause_resume_params_t*) */
int _ZN9VTService9VTMALStub6ResumeEN7android13ma_datapath_tEPNS1_27imsma_pause_resume_params_tE(void);

/* Symbol: _ZN9VTService12VTCoreHelper17getReqFromProfileEP32vt_srv_imcb_msg_session_modify_sN7android2spINS_12VideoProfileEEEi */
/* Demangled: VTService::VTCoreHelper::getReqFromProfile(vt_srv_imcb_msg_session_modify_s*, android::sp<VTService::VideoProfile>, int) */
int _ZN9VTService12VTCoreHelper17getReqFromProfileEP32vt_srv_imcb_msg_session_modify_sN7android2spINS_12VideoProfileEEEi(void);

/* Symbol: _ZN9VTService12VTCoreHelper17getProfileFromIndEP32vt_srv_imcb_msg_session_modify_s */
/* Demangled: VTService::VTCoreHelper::getProfileFromInd(vt_srv_imcb_msg_session_modify_s*) */
int _ZN9VTService12VTCoreHelper17getProfileFromIndEP32vt_srv_imcb_msg_session_modify_s(void);

/* Symbol: _ZThn8_N9VTService9VTService13stopRecordingEi */
/* Demangled: non-virtual thunk to VTService::VTService::stopRecording(int) */
int _ZThn8_N9VTService9VTService13stopRecordingEi(void);

/* Symbol: _ZN9VTService9IVTClientD1Ev */
/* Demangled: VTService::IVTClient::~IVTClient() */
int _ZN9VTService9IVTClientD1Ev(void);

/* Symbol: _ZN9VTService16g_vt_SendMsgLockE */
/* Demangled: VTService::g_vt_SendMsgLock */
extern void* _ZN9VTService16g_vt_SendMsgLockE;

/* Symbol: _ZN9VTService9VTMALStub4InitEN7android13ma_datapath_tE */
/* Demangled: VTService::VTMALStub::Init(android::ma_datapath_t) */
int _ZN9VTService9VTMALStub4InitEN7android13ma_datapath_tE(void);

/* Symbol: _ZN9VTService12VTCoreHelper7logFlowEPKcS2_iS2_NS_13VT_SRV_LOG_LVE */
/* Demangled: VTService::VTCoreHelper::logFlow(char const*, char const*, int, char const*, VTService::VT_SRV_LOG_LV) */
int _ZN9VTService12VTCoreHelper7logFlowEPKcS2_iS2_NS_13VT_SRV_LOG_LVE(void);

/* Symbol: _ZN9VTService12VTCoreHelper20getNetworkIdByIfNameEN7android7String8E */
/* Demangled: VTService::VTCoreHelper::getNetworkIdByIfName(android::String8) */
int _ZN9VTService12VTCoreHelper20getNetworkIdByIfNameEN7android7String8E(void);

/* Symbol: _ZN9VTService27VideoTelephonyDeathReceiver11serviceDiedEmRKN7android2wpINS1_4hidl4base4V1_05IBaseEEE */
/* Demangled: VTService::VideoTelephonyDeathReceiver::serviceDied(unsigned long, android::wp<android::hidl::base::V1_0::IBase> const&) */
int _ZN9VTService27VideoTelephonyDeathReceiver11serviceDiedEmRKN7android2wpINS1_4hidl4base4V1_05IBaseEEE(void);

/* Symbol: _ZN7android16MessageQueueBaseINS_8hardware12MQDescriptorEhLNS1_8MQFlavorE1EE12readBlockingEPhmjjlPNS1_9EventFlagE */
/* Demangled: android::MessageQueueBase<android::hardware::MQDescriptor, unsigned char, (android::hardware::MQFlavor)1>::readBlocking(unsigned char*, unsigned long, unsigned int, unsigned int, long, android::hardware::EventFlag*) */
int _ZN7android16MessageQueueBaseINS_8hardware12MQDescriptorEhLNS1_8MQFlavorE1EE12readBlockingEPhmjjlPNS1_9EventFlagE(void);

/* Symbol: _ZN9VTService9VTService14setSignalLevelEii */
/* Demangled: VTService::VTService::setSignalLevel(int, int) */
int _ZN9VTService9VTService14setSignalLevelEii(void);

/* Symbol: _ZTCN9VTService9VTServiceE16_N7android7BBinderE */
/* Demangled: construction vtable for android::BBinder-in-VTService::VTService */
extern void* _ZTCN9VTService9VTServiceE16_N7android7BBinderE;

/* Symbol: _ZN9VTService12VTCoreHelper9isVoLTEonEv */
/* Demangled: VTService::VTCoreHelper::isVoLTEon() */
int _ZN9VTService12VTCoreHelper9isVoLTEonEv(void);

/* Symbol: _ZN9VTService12VTCoreHelper3getEi */
/* Demangled: VTService::VTCoreHelper::get(int) */
int _ZN9VTService12VTCoreHelper3getEi(void);

/* Symbol: _ZN9VTService12VTCoreHelper20getRequestVdoProfileEi */
/* Demangled: VTService::VTCoreHelper::getRequestVdoProfile(int) */
int _ZN9VTService12VTCoreHelper20getRequestVdoProfileEi(void);

/* Symbol: _ZN9VTService9VTService18updateNetworkTableEbiN7android7String8E */
/* Demangled: VTService::VTService::updateNetworkTable(bool, int, android::String8) */
int _ZN9VTService9VTService18updateNetworkTableEbiN7android7String8E(void);

/* Symbol: _ZThn8_N9VTService9VTService20triggerGetOperatorIdEv */
/* Demangled: non-virtual thunk to VTService::VTService::triggerGetOperatorId() */
int _ZThn8_N9VTService9VTService20triggerGetOperatorIdEv(void);

/* Symbol: _ZN9VTService9IVTClient11asInterfaceERKN7android2spINS1_7IBinderEEE */
/* Demangled: VTService::IVTClient::asInterface(android::sp<android::IBinder> const&) */
int _ZN9VTService9IVTClient11asInterfaceERKN7android2spINS1_7IBinderEEE(void);

/* Symbol: _ZTTN9VTService10IVTServiceE */
/* Demangled: VTT for VTService::IVTService */
extern void* _ZTTN9VTService10IVTServiceE;

/* Symbol: _ZN9VTService6VTCore12finalizationEi */
/* Demangled: VTService::VTCore::finalization(int) */
int _ZN9VTService6VTCore12finalizationEi(void);

/* Symbol: _ZN9VTService12VTCoreHelper23removeNetworkInfoRecordEi */
/* Demangled: VTService::VTCoreHelper::removeNetworkInfoRecord(int) */
int _ZN9VTService12VTCoreHelper23removeNetworkInfoRecordEi(void);

/* Symbol: _ZN9VTService15VTMsgDispatcherD1Ev */
/* Demangled: VTService::VTMsgDispatcher::~VTMsgDispatcher() */
int _ZN9VTService15VTMsgDispatcherD1Ev(void);

/* Symbol: _ZTCN9VTService10BnVTClientE0_N7android10IInterfaceE */
/* Demangled: construction vtable for android::IInterface-in-VTService::BnVTClient */
extern void* _ZTCN9VTService10BnVTClientE0_N7android10IInterfaceE;

/* Symbol: _ZTCN9VTService10BpVTClientE8_NS_17IVTNotifyCallbackE */
/* Demangled: construction vtable for VTService::IVTNotifyCallback-in-VTService::BpVTClient */
extern void* _ZTCN9VTService10BpVTClientE8_NS_17IVTNotifyCallbackE;

/* Symbol: _ZNK9VTService10IVTService22getInterfaceDescriptorEv */
/* Demangled: VTService::IVTService::getInterfaceDescriptor() const */
int _ZNK9VTService10IVTService22getInterfaceDescriptorEv(void);

/* Symbol: _ZN9VTService6VTCore15resetUpdateInfoEi */
/* Demangled: VTService::VTCore::resetUpdateInfo(int) */
int _ZN9VTService6VTCore15resetUpdateInfoEi(void);

/* Symbol: _ZThn8_N9VTService9IVTClientD1Ev */
/* Demangled: non-virtual thunk to VTService::IVTClient::~IVTClient() */
int _ZThn8_N9VTService9IVTClientD1Ev(void);

/* Symbol: _ZTCN9VTService10BpVTClientE0_N7android10IInterfaceE */
/* Demangled: construction vtable for android::IInterface-in-VTService::BpVTClient */
extern void* _ZTCN9VTService10BpVTClientE0_N7android10IInterfaceE;

/* Symbol: _ZTv0_n24_N9VTService6VTCoreD1Ev */
/* Demangled: virtual thunk to VTService::VTCore::~VTCore() */
int _ZTv0_n24_N9VTService6VTCoreD1Ev(void);

/* Symbol: _ZN9VTService12VTCoreHelper8setStateEiNS_15VT_SRV_MA_STATEE */
/* Demangled: VTService::VTCoreHelper::setState(int, VTService::VT_SRV_MA_STATE) */
int _ZN9VTService12VTCoreHelper8setStateEiNS_15VT_SRV_MA_STATEE(void);

/* Symbol: _ZN9VTService6VTCore4initEi */
/* Demangled: VTService::VTCore::init(int) */
int _ZN9VTService6VTCore4initEi(void);

/* Symbol: _ZTVN7android6VectorIN9VTService26vt_srv_network_info_structEEE */
/* Demangled: vtable for android::Vector<VTService::vt_srv_network_info_struct> */
extern void* _ZTVN7android6VectorIN9VTService26vt_srv_network_info_structEEE;

/* Symbol: _ZTCN9VTService11BpVTServiceE8_NS_12IVTInterfaceE */
/* Demangled: construction vtable for VTService::IVTInterface-in-VTService::BpVTService */
extern void* _ZTCN9VTService11BpVTServiceE8_NS_12IVTInterfaceE;

/* Symbol: _ZN9VTService9VTMALStub15MA_INVALID_MODEE */
/* Demangled: VTService::VTMALStub::MA_INVALID_MODE */
extern void* _ZN9VTService9VTMALStub15MA_INVALID_MODEE;

/* Symbol: _ZN9VTService6VTCoreD2Ev */
/* Demangled: VTService::VTCore::~VTCore() */
int _ZN9VTService6VTCoreD2Ev(void);

/* Symbol: _ZN9VTService6VTCore9setUIModeEiNS_14VT_SRV_UI_MODEE */
/* Demangled: VTService::VTCore::setUIMode(int, VTService::VT_SRV_UI_MODE) */
int _ZN9VTService6VTCore9setUIModeEiNS_14VT_SRV_UI_MODEE(void);

/* Symbol: _ZN9VTService15VTMsgDispatcherC1EPFviPviE */
/* Demangled: VTService::VTMsgDispatcher::VTMsgDispatcher(void (*)(int, void*, int)) */
int _ZN9VTService15VTMsgDispatcherC1EPFviPviE(void);

/* Symbol: _ZN9VTService12VTCoreHelper17setIsSetSensorCntEi */
/* Demangled: VTService::VTCoreHelper::setIsSetSensorCnt(int) */
int _ZN9VTService12VTCoreHelper17setIsSetSensorCntEi(void);

/* Symbol: _ZN9VTService9VTService9setCameraEii */
/* Demangled: VTService::VTService::setCamera(int, int) */
int _ZN9VTService9VTService9setCameraEii(void);

/* Symbol: _ZThn8_N9VTService9VTService14setSignalLevelEii */
/* Demangled: non-virtual thunk to VTService::VTService::setSignalLevel(int, int) */
int _ZThn8_N9VTService9VTService14setSignalLevelEii(void);

/* Symbol: _ZThn16_N9VTService10BnVTClient10onTransactEjRKN7android6ParcelEPS2_j */
/* Demangled: non-virtual thunk to VTService::BnVTClient::onTransact(unsigned int, android::Parcel const&, android::Parcel*, unsigned int) */
int _ZThn16_N9VTService10BnVTClient10onTransactEjRKN7android6ParcelEPS2_j(void);

/* Symbol: _ZTVN9VTService11BpVTServiceE */
/* Demangled: vtable for VTService::BpVTService */
extern void* _ZTVN9VTService11BpVTServiceE;

/* Symbol: _ZN9VTService10IVTServiceD1Ev */
/* Demangled: VTService::IVTService::~IVTService() */
int _ZN9VTService10IVTServiceD1Ev(void);

/* Symbol: _ZN7android16MessageQueueBaseINS_7details20AidlMQDescriptorShimEaLNS_8hardware8MQFlavorE1EED2Ev */
/* Demangled: android::MessageQueueBase<android::details::AidlMQDescriptorShim, signed char, (android::hardware::MQFlavor)1>::~MessageQueueBase() */
int _ZN7android16MessageQueueBaseINS_7details20AidlMQDescriptorShimEaLNS_8hardware8MQFlavorE1EED2Ev(void);

/* Symbol: _ZN9VTService6VTCore21responseSessionModifyEiRKN7android7String8E */
/* Demangled: VTService::VTCore::responseSessionModify(int, android::String8 const&) */
int _ZN9VTService6VTCore21responseSessionModifyEiRKN7android7String8E(void);

/* Symbol: _ZTCN9VTService9VTServiceE16_N7android7IBinderE */
/* Demangled: construction vtable for android::IBinder-in-VTService::VTService */
extern void* _ZTCN9VTService9VTServiceE16_N7android7IBinderE;

/* Symbol: _ZTCN9VTService9IVTClientE0_N7android10IInterfaceE */
/* Demangled: construction vtable for android::IInterface-in-VTService::IVTClient */
extern void* _ZTCN9VTService9IVTClientE0_N7android10IInterfaceE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE8do_splatEPvPKvm(void);

/* Symbol: _ZTTN9VTService6VTCoreE */
/* Demangled: VTT for VTService::VTCore */
extern void* _ZTTN9VTService6VTCoreE;

/* Symbol: _ZN9VTService12VTCoreHelper15getRecordStringEi */
/* Demangled: VTService::VTCoreHelper::getRecordString(int) */
int _ZN9VTService12VTCoreHelper15getRecordStringEi(void);

/* Symbol: _ZN9VTService12VTCoreHelper19getNetworkInfoIndexEi */
/* Demangled: VTService::VTCoreHelper::getNetworkInfoIndex(int) */
int _ZN9VTService12VTCoreHelper19getNetworkInfoIndexEi(void);

/* Symbol: _ZN7android16MessageQueueBaseINS_7details20AidlMQDescriptorShimEaLNS_8hardware8MQFlavorE1EE5writeEPKam */
/* Demangled: android::MessageQueueBase<android::details::AidlMQDescriptorShim, signed char, (android::hardware::MQFlavor)1>::write(signed char const*, unsigned long) */
int _ZN7android16MessageQueueBaseINS_7details20AidlMQDescriptorShimEaLNS_8hardware8MQFlavorE1EE5writeEPKam(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN9VTService12VTCoreHelper23getProfileFromCancelIndEP39vt_srv_imcb_msg_session_modify_cancel_s */
/* Demangled: VTService::VTCoreHelper::getProfileFromCancelInd(vt_srv_imcb_msg_session_modify_cancel_s*) */
int _ZN9VTService12VTCoreHelper23getProfileFromCancelIndEP39vt_srv_imcb_msg_session_modify_cancel_s(void);

/* Symbol: _ZNK7android6VectorIN9VTService26vt_srv_network_info_structEE12do_constructEPvm */
/* Demangled: android::Vector<VTService::vt_srv_network_info_struct>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN9VTService26vt_srv_network_info_structEE12do_constructEPvm(void);

/* Symbol: _ZN9VTService10IVTService10descriptorE */
/* Demangled: VTService::IVTService::descriptor */
extern void* _ZN9VTService10IVTService10descriptorE;

/* Symbol: _ZTTN9VTService11BnVTServiceE */
/* Demangled: VTT for VTService::BnVTService */
extern void* _ZTTN9VTService11BnVTServiceE;

/* Symbol: _ZTCN9VTService11BnVTServiceE0_N7android11BnInterfaceINS_10IVTServiceEEE */
/* Demangled: construction vtable for android::BnInterface<VTService::IVTService>-in-VTService::BnVTService */
extern void* _ZTCN9VTService11BnVTServiceE0_N7android11BnInterfaceINS_10IVTServiceEEE;

/* Symbol: _ZN9VTService6VTCore7mHelperE */
/* Demangled: VTService::VTCore::mHelper */
extern void* _ZN9VTService6VTCore7mHelperE;

/* Symbol: _ZN9VTService9VTMALStub8SnapShotEPKcN7android15snapshot_mode_tE */
/* Demangled: VTService::VTMALStub::SnapShot(char const*, android::snapshot_mode_t) */
int _ZN9VTService9VTMALStub8SnapShotEPKcN7android15snapshot_mode_tE(void);

/* Symbol: _ZN9VTService9VTMALStub19SetRecordParametersEN7android16record_quality_tEPc */
/* Demangled: VTService::VTMALStub::SetRecordParameters(android::record_quality_t, char*) */
int _ZN9VTService9VTMALStub19SetRecordParametersEN7android16record_quality_tEPc(void);

/* Symbol: _ZTTN9VTService9VTMALStubE */
/* Demangled: VTT for VTService::VTMALStub */
extern void* _ZTTN9VTService9VTMALStubE;

/* Symbol: _ZN9VTService6VTCore8clearAllEv */
/* Demangled: VTService::VTCore::clearAll() */
int _ZN9VTService6VTCore8clearAllEv(void);

/* Symbol: _ZTVN9VTService12VideoProfileE */
/* Demangled: vtable for VTService::VideoProfile */
extern void* _ZTVN9VTService12VideoProfileE;

/* Symbol: _ZN9VTService12VTCoreHelper17getStringPropertyEPKcPc */
/* Demangled: VTService::VTCoreHelper::getStringProperty(char const*, char*) */
int _ZN9VTService12VTCoreHelper17getStringPropertyEPKcPc(void);

/* Symbol: _ZN7android16MessageQueueBaseINS_8hardware12MQDescriptorEhLNS1_8MQFlavorE1EE10initMemoryEb */
/* Demangled: android::MessageQueueBase<android::hardware::MQDescriptor, unsigned char, (android::hardware::MQFlavor)1>::initMemory(bool) */
int _ZN7android16MessageQueueBaseINS_8hardware12MQDescriptorEhLNS1_8MQFlavorE1EE10initMemoryEb(void);

/* Symbol: _ZN9VTService6VTCore17setPreviewSurfaceEiRKN7android2spINS1_7SurfaceEEE */
/* Demangled: VTService::VTCore::setPreviewSurface(int, android::sp<android::Surface> const&) */
int _ZN9VTService6VTCore17setPreviewSurfaceEiRKN7android2spINS1_7SurfaceEEE(void);

/* Symbol: _ZN9VTService12VTCoreHelper20addNetworkInfoRecordEiN7android7String8E */
/* Demangled: VTService::VTCoreHelper::addNetworkInfoRecord(int, android::String8) */
int _ZN9VTService12VTCoreHelper20addNetworkInfoRecordEiN7android7String8E(void);

/* Symbol: _ZN9VTService6VTCore13getUpdateInfoEiP23vt_srv_imcb_msg_param_sS2_ */
/* Demangled: VTService::VTCore::getUpdateInfo(int, vt_srv_imcb_msg_param_s*, vt_srv_imcb_msg_param_s*) */
int _ZN9VTService6VTCore13getUpdateInfoEiP23vt_srv_imcb_msg_param_sS2_(void);

/* Symbol: _ZN9VTService12VTCoreHelper24getPeerCameraStateStringEi */
/* Demangled: VTService::VTCoreHelper::getPeerCameraStateString(int) */
int _ZN9VTService12VTCoreHelper24getPeerCameraStateStringEi(void);

/* Symbol: _ZThn8_N9VTService9VTService13switchFeatureEiii */
/* Demangled: non-virtual thunk to VTService::VTService::switchFeature(int, int, int) */
int _ZThn8_N9VTService9VTService13switchFeatureEiii(void);

/* Symbol: _ZN9VTService10mRildReadyE */
/* Demangled: VTService::mRildReady */
extern void* _ZN9VTService10mRildReadyE;

/* Symbol: _ZN9VTService6VTCore11notifyErrorEiPKc */
/* Demangled: VTService::VTCore::notifyError(int, char const*) */
int _ZN9VTService6VTCore11notifyErrorEiPKc(void);

/* Symbol: _ZN7android2spIN9VTService12VideoProfileEEaSERKS3_ */
/* Demangled: android::sp<VTService::VideoProfile>::operator=(android::sp<VTService::VideoProfile> const&) */
int _ZN7android2spIN9VTService12VideoProfileEEaSERKS3_(void);

/* Symbol: _ZN9VTService9VTService16releaseVTServiceEv */
/* Demangled: VTService::VTService::releaseVTService() */
int _ZN9VTService9VTService16releaseVTServiceEv(void);

/* Symbol: _ZN9VTService9VTMALStub14MA_NORMAL_MODEE */
/* Demangled: VTService::VTMALStub::MA_NORMAL_MODE */
extern void* _ZN9VTService9VTMALStub14MA_NORMAL_MODEE;

/* Symbol: _ZN9VTService6VTCore14notifyCallbackEiiii */
/* Demangled: VTService::VTCore::notifyCallback(int, int, int, int) */
int _ZN9VTService6VTCore14notifyCallbackEiiii(void);

/* Symbol: _ZN9VTService12VTCoreHelper6logMapEPKcS2_iNS_13VT_SRV_LOG_LVE */
/* Demangled: VTService::VTCoreHelper::logMap(char const*, char const*, int, VTService::VT_SRV_LOG_LV) */
int _ZN9VTService12VTCoreHelper6logMapEPKcS2_iNS_13VT_SRV_LOG_LVE(void);

/* Symbol: _ZN9VTService12VTCoreHelper17getSnapshotStringEi */
/* Demangled: VTService::VTCoreHelper::getSnapshotString(int) */
int _ZN9VTService12VTCoreHelper17getSnapshotStringEi(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_destroyEPvm(void);

/* Symbol: _ZN9VTService6VTCore15getCallFlowLockEi */
/* Demangled: VTService::VTCore::getCallFlowLock(int) */
int _ZN9VTService6VTCore15getCallFlowLockEi(void);

/* Symbol: _ZN9VTService12VTCoreHelper14getOnOffStringEi */
/* Demangled: VTService::VTCoreHelper::getOnOffString(int) */
int _ZN9VTService12VTCoreHelper14getOnOffStringEi(void);

/* Symbol: _ZN9VTService12VTCoreHelper20getIfNameByNetworkIdEi */
/* Demangled: VTService::VTCoreHelper::getIfNameByNetworkId(int) */
int _ZN9VTService12VTCoreHelper20getIfNameByNetworkIdEi(void);

/* Symbol: _ZThn8_N9VTService9VTService9setUIModeEiNS_14VT_SRV_UI_MODEE */
/* Demangled: non-virtual thunk to VTService::VTService::setUIMode(int, VTService::VT_SRV_UI_MODE) */
int _ZThn8_N9VTService9VTService9setUIModeEiNS_14VT_SRV_UI_MODEE(void);

/* Symbol: _ZTVN9VTService10BpVTClientE */
/* Demangled: vtable for VTService::BpVTClient */
extern void* _ZTVN9VTService10BpVTClientE;

/* Symbol: _ZN9VTService12VTCoreHelper17getRspFromProfileEP32vt_srv_imcb_msg_session_modify_sN7android2spINS_12VideoProfileEEEi */
/* Demangled: VTService::VTCoreHelper::getRspFromProfile(vt_srv_imcb_msg_session_modify_s*, android::sp<VTService::VideoProfile>, int) */
int _ZN9VTService12VTCoreHelper17getRspFromProfileEP32vt_srv_imcb_msg_session_modify_sN7android2spINS_12VideoProfileEEEi(void);

/* Symbol: _ZN9VTService12VTCoreHelper18packFromVdoProfileEN7android2spINS_12VideoProfileEEE */
/* Demangled: VTService::VTCoreHelper::packFromVdoProfile(android::sp<VTService::VideoProfile>) */
int _ZN9VTService12VTCoreHelper18packFromVdoProfileEN7android2spINS_12VideoProfileEEE(void);

/* Symbol: _ZNK7android6VectorIN9VTService26vt_srv_network_info_structEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<VTService::vt_srv_network_info_struct>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN9VTService26vt_srv_network_info_structEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN9VTService9VTMALStub9getUIModeEv */
/* Demangled: VTService::VTMALStub::getUIMode() */
int _ZN9VTService9VTMALStub9getUIModeEv(void);

/* Symbol: _ZN9VTService12VTCoreHelper19setDefaultLocalSizeEiii */
/* Demangled: VTService::VTCoreHelper::setDefaultLocalSize(int, int, int) */
int _ZN9VTService12VTCoreHelper19setDefaultLocalSizeEiii(void);

/* Symbol: _ZN7android16MessageQueueBaseINS_7details20AidlMQDescriptorShimEaLNS_8hardware8MQFlavorE1EE4readEPam */
/* Demangled: android::MessageQueueBase<android::details::AidlMQDescriptorShim, signed char, (android::hardware::MQFlavor)1>::read(signed char*, unsigned long) */
int _ZN7android16MessageQueueBaseINS_7details20AidlMQDescriptorShimEaLNS_8hardware8MQFlavorE1EE4readEPam(void);

/* Symbol: _ZN9VTService6VTCore27setHandoverStateByNetworkIdEib */
/* Demangled: VTService::VTCore::setHandoverStateByNetworkId(int, bool) */
int _ZN9VTService6VTCore27setHandoverStateByNetworkIdEib(void);

/* Symbol: _ZN9VTService6VTCore18updateNetworkTableEbiN7android7String8E */
/* Demangled: VTService::VTCore::updateNetworkTable(bool, int, android::String8) */
int _ZN9VTService6VTCore18updateNetworkTableEbiN7android7String8E(void);

/* Symbol: _ZN9VTService12VTPriMsgHdlr15dispatchMessageERKN7android2spINS1_8AMessageEEE */
/* Demangled: VTService::VTPriMsgHdlr::dispatchMessage(android::sp<android::AMessage> const&) */
int _ZN9VTService12VTPriMsgHdlr15dispatchMessageERKN7android2spINS1_8AMessageEEE(void);

/* Symbol: _ZN9VTService6VTCore14notifyCallbackEiiiiiRKN7android7String8ES4_RKNS1_2spINS1_22IGraphicBufferProducerEEE */
/* Demangled: VTService::VTCore::notifyCallback(int, int, int, int, int, android::String8 const&, android::String8 const&, android::sp<android::IGraphicBufferProducer> const&) */
int _ZN9VTService6VTCore14notifyCallbackEiiiiiRKN7android7String8ES4_RKNS1_2spINS1_22IGraphicBufferProducerEEE(void);

/* Symbol: _ZN9VTService10IVTService14getDefaultImplEv */
/* Demangled: VTService::IVTService::getDefaultImpl() */
int _ZN9VTService10IVTService14getDefaultImplEv(void);

/* Symbol: _ZN9VTService10VT_ConnectEPFviPviE */
/* Demangled: VTService::VT_Connect(void (*)(int, void*, int)) */
int _ZN9VTService10VT_ConnectEPFviPviE(void);

/* Symbol: _ZN9VTService9VTService14initializationEii */
/* Demangled: VTService::VTService::initialization(int, int) */
int _ZN9VTService9VTService14initializationEii(void);

/* Symbol: _ZTCN9VTService10BnVTClientE0_NS_9IVTClientE */
/* Demangled: construction vtable for VTService::IVTClient-in-VTService::BnVTClient */
extern void* _ZTCN9VTService10BnVTClientE0_NS_9IVTClientE;

/* Symbol: _ZN9VTService12VTCoreHelper7isDebugEv */
/* Demangled: VTService::VTCoreHelper::isDebug() */
int _ZN9VTService12VTCoreHelper7isDebugEv(void);

/* Symbol: _ZThn8_N9VTService9VTService16tagSocketWithUidEi */
/* Demangled: non-virtual thunk to VTService::VTService::tagSocketWithUid(int) */
int _ZThn8_N9VTService9VTService16tagSocketWithUidEi(void);

/* Symbol: _ZN9VTService6VTCore6updateEi */
/* Demangled: VTService::VTCore::update(int) */
int _ZN9VTService6VTCore6updateEi(void);

/* Symbol: _ZNSt3__110__function6__funcIPFvbRKN7android8hardware12MQDescriptorIhLNS3_8MQFlavorE1EEEENS_9allocatorISA_EES9_E7destroyEv */
/* Demangled: std::__1::__function::__func<void (*)(bool, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&), std::__1::allocator<void (*)(bool, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>, void (bool, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>::destroy() */
int _ZNSt3__110__function6__funcIPFvbRKN7android8hardware12MQDescriptorIhLNS3_8MQFlavorE1EEEENS_9allocatorISA_EES9_E7destroyEv(void);

/* Symbol: _ZN7android2spINS_7SurfaceEEaSEPS1_ */
/* Demangled: android::sp<android::Surface>::operator=(android::Surface*) */
int _ZN7android2spINS_7SurfaceEEaSEPS1_(void);

/* Symbol: _ZN9VTService10MsgHandler11exchangeMsgEv */
/* Demangled: VTService::MsgHandler::exchangeMsg() */
int _ZN9VTService10MsgHandler11exchangeMsgEv(void);

/* Symbol: _ZTVN9VTService12ImsMaHandlerE */
/* Demangled: vtable for VTService::ImsMaHandler */
extern void* _ZTVN9VTService12ImsMaHandlerE;

/* Symbol: _ZN9VTService12VTCoreHelper8setParamEiNS_12VT_SRV_PARAMEPv */
/* Demangled: VTService::VTCoreHelper::setParam(int, VTService::VT_SRV_PARAM, void*) */
int _ZN9VTService12VTCoreHelper8setParamEiNS_12VT_SRV_PARAMEPv(void);

/* Symbol: _ZN9VTService12VTCoreHelper19getDefaultLocalSizeEPiS1_i */
/* Demangled: VTService::VTCoreHelper::getDefaultLocalSize(int*, int*, int) */
int _ZN9VTService12VTCoreHelper19getDefaultLocalSizeEPiS1_i(void);

/* Symbol: _ZThn8_N9VTService9VTService17setPreviewSurfaceEiRKN7android2spINS1_7SurfaceEEE */
/* Demangled: non-virtual thunk to VTService::VTService::setPreviewSurface(int, android::sp<android::Surface> const&) */
int _ZThn8_N9VTService9VTService17setPreviewSurfaceEiRKN7android2spINS1_7SurfaceEEE(void);

/* Symbol: _ZN7android11BnInterfaceIN9VTService10IVTServiceEE10onAsBinderEv */
/* Demangled: android::BnInterface<VTService::IVTService>::onAsBinder() */
int _ZN7android11BnInterfaceIN9VTService10IVTServiceEE10onAsBinderEv(void);

/* Symbol: _ZN9VTService10MsgHandlerC1EN7android2spINS_6VTCoreEEEiNS2_INS1_5ImsMaEEEi */
/* Demangled: VTService::MsgHandler::MsgHandler(android::sp<VTService::VTCore>, int, android::sp<android::ImsMa>, int) */
int _ZN9VTService10MsgHandlerC1EN7android2spINS_6VTCoreEEEiNS2_INS1_5ImsMaEEEi(void);

/* Symbol: _ZN9VTService9VTMALStub5ResetEN7android13ma_datapath_tE */
/* Demangled: VTService::VTMALStub::Reset(android::ma_datapath_t) */
int _ZN9VTService9VTMALStub5ResetEN7android13ma_datapath_tE(void);

/* Symbol: _ZTVN7android8AHandlerE */
/* Demangled: vtable for android::AHandler */
extern void* _ZTVN7android8AHandlerE;

/* Symbol: _ZN9VTService6VTCore20setDeviceOrientationEii */
/* Demangled: VTService::VTCore::setDeviceOrientation(int, int) */
int _ZN9VTService6VTCore20setDeviceOrientationEii(void);

/* Symbol: _ZN9VTService12VTCoreHelper9isIMCBrunEv */
/* Demangled: VTService::VTCoreHelper::isIMCBrun() */
int _ZN9VTService12VTCoreHelper9isIMCBrunEv(void);

/* Symbol: _ZN7android16MessageQueueBaseINS_8hardware12MQDescriptorEhLNS1_8MQFlavorE1EE5writeEPKhm */
/* Demangled: android::MessageQueueBase<android::hardware::MQDescriptor, unsigned char, (android::hardware::MQFlavor)1>::write(unsigned char const*, unsigned long) */
int _ZN7android16MessageQueueBaseINS_8hardware12MQDescriptorEhLNS1_8MQFlavorE1EE5writeEPKhm(void);

/* Symbol: _ZNK7android6VectorIN9VTService26vt_srv_network_info_structEE7do_copyEPvPKvm */
/* Demangled: android::Vector<VTService::vt_srv_network_info_struct>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN9VTService26vt_srv_network_info_structEE7do_copyEPvPKvm(void);

/* Symbol: _ZTVN9VTService12VTPriMsgHdlrE */
/* Demangled: vtable for VTService::VTPriMsgHdlr */
extern void* _ZTVN9VTService12VTPriMsgHdlrE;

/* Symbol: _ZThn16_N9VTService11BnVTService10onTransactEjRKN7android6ParcelEPS2_j */
/* Demangled: non-virtual thunk to VTService::BnVTService::onTransact(unsigned int, android::Parcel const&, android::Parcel*, unsigned int) */
int _ZThn16_N9VTService11BnVTService10onTransactEjRKN7android6ParcelEPS2_j(void);

/* Symbol: _ZTVN9VTService10MsgHandlerE */
/* Demangled: vtable for VTService::MsgHandler */
extern void* _ZTVN9VTService10MsgHandlerE;

/* Symbol: _ZN9VTService12VTCoreHelper8getParamEiNS_12VT_SRV_PARAMEPPv */
/* Demangled: VTService::VTCoreHelper::getParam(int, VTService::VT_SRV_PARAM, void**) */
int _ZN9VTService12VTCoreHelper8getParamEiNS_12VT_SRV_PARAMEPPv(void);

/* Symbol: _ZN9VTService12VTCoreHelper18getCallStateStringEi */
/* Demangled: VTService::VTCoreHelper::getCallStateString(int) */
int _ZN9VTService12VTCoreHelper18getCallStateStringEi(void);

/* Symbol: _ZN9VTService12VTCoreHelper12checkElementEi */
/* Demangled: VTService::VTCoreHelper::checkElement(int) */
int _ZN9VTService12VTCoreHelper12checkElementEi(void);

/* Symbol: _ZThn8_N9VTService9VTService21responseSessionModifyEiRKN7android7String8E */
/* Demangled: non-virtual thunk to VTService::VTService::responseSessionModify(int, android::String8 const&) */
int _ZThn8_N9VTService9VTService21responseSessionModifyEiRKN7android7String8E(void);

/* Symbol: _ZN9VTService9VTMsgHdlr17onMessageReceivedERKN7android2spINS1_8AMessageEEE */
/* Demangled: VTService::VTMsgHdlr::onMessageReceived(android::sp<android::AMessage> const&) */
int _ZN9VTService9VTMsgHdlr17onMessageReceivedERKN7android2spINS1_8AMessageEEE(void);

/* Symbol: _ZTv0_n24_N9VTService9IVTClientD0Ev */
/* Demangled: virtual thunk to VTService::IVTClient::~IVTClient() */
int _ZTv0_n24_N9VTService9IVTClientD0Ev(void);

/* Symbol: _ZTCN9VTService10BnVTClientE16_N7android7BBinderE */
/* Demangled: construction vtable for android::BBinder-in-VTService::BnVTClient */
extern void* _ZTCN9VTService10BnVTClientE16_N7android7BBinderE;

/* Symbol: _ZTCN9VTService11BpVTServiceE0_N7android10IInterfaceE */
/* Demangled: construction vtable for android::IInterface-in-VTService::BpVTService */
extern void* _ZTCN9VTService11BpVTServiceE0_N7android10IInterfaceE;

/* Symbol: _ZN9VTService12VTCoreHelper17getIsSetSensorCntEv */
/* Demangled: VTService::VTCoreHelper::getIsSetSensorCnt() */
int _ZN9VTService12VTCoreHelper17getIsSetSensorCntEv(void);

/* Symbol: _ZN9VTService9VTService10onTransactEjRKN7android6ParcelEPS2_j */
/* Demangled: VTService::VTService::onTransact(unsigned int, android::Parcel const&, android::Parcel*, unsigned int) */
int _ZN9VTService9VTService10onTransactEjRKN7android6ParcelEPS2_j(void);

/* Symbol: _ZN9VTService9IVTClient12default_implE */
/* Demangled: VTService::IVTClient::default_impl */
extern void* _ZN9VTService9IVTClient12default_implE;

/* Symbol: _ZN9VTService11BnVTService10onTransactEjRKN7android6ParcelEPS2_j */
/* Demangled: VTService::BnVTService::onTransact(unsigned int, android::Parcel const&, android::Parcel*, unsigned int) */
int _ZN9VTService11BnVTService10onTransactEjRKN7android6ParcelEPS2_j(void);

/* Symbol: _ZN9VTService12VTCoreHelperC1Ev */
/* Demangled: VTService::VTCoreHelper::VTCoreHelper() */
int _ZN9VTService12VTCoreHelperC1Ev(void);

/* Symbol: _ZN9VTService12VTCoreHelper14getLabOperatorEv */
/* Demangled: VTService::VTCoreHelper::getLabOperator() */
int _ZN9VTService12VTCoreHelper14getLabOperatorEv(void);

/* Symbol: _ZTCN9VTService11BnVTServiceE0_NS_10IVTServiceE */
/* Demangled: construction vtable for VTService::IVTService-in-VTService::BnVTService */
extern void* _ZTCN9VTService11BnVTServiceE0_NS_10IVTServiceE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN7android16MessageQueueBaseINS_8hardware12MQDescriptorEhLNS1_8MQFlavorE1EE15mapGrantorDescrEj */
/* Demangled: android::MessageQueueBase<android::hardware::MQDescriptor, unsigned char, (android::hardware::MQFlavor)1>::mapGrantorDescr(unsigned int) */
int _ZN7android16MessageQueueBaseINS_8hardware12MQDescriptorEhLNS1_8MQFlavorE1EE15mapGrantorDescrEj(void);

/* Symbol: _ZThn48_N9VTService9VTService9getClientEv */
/* Demangled: non-virtual thunk to VTService::VTService::getClient() */
int _ZThn48_N9VTService9VTService9getClientEv(void);

/* Symbol: _ZN7android16MessageQueueBaseINS_7details20AidlMQDescriptorShimEaLNS_8hardware8MQFlavorE1EEC2ERKNS2_IaLS4_1EEEb */
/* Demangled: android::MessageQueueBase<android::details::AidlMQDescriptorShim, signed char, (android::hardware::MQFlavor)1>::MessageQueueBase(android::details::AidlMQDescriptorShim<signed char, (android::hardware::MQFlavor)1> const&, bool) */
int _ZN7android16MessageQueueBaseINS_7details20AidlMQDescriptorShimEaLNS_8hardware8MQFlavorE1EEC2ERKNS2_IaLS4_1EEEb(void);

/* Symbol: _ZN9VTService9VTService10binderDiedERKN7android2wpINS1_7IBinderEEE */
/* Demangled: VTService::VTService::binderDied(android::wp<android::IBinder> const&) */
int _ZN9VTService9VTService10binderDiedERKN7android2wpINS1_7IBinderEEE(void);

/* Symbol: _ZN9VTService9IVTClientD0Ev */
/* Demangled: VTService::IVTClient::~IVTClient() */
int _ZN9VTService9IVTClientD0Ev(void);

/* Symbol: _ZTVN9VTService9IVTClientE */
/* Demangled: vtable for VTService::IVTClient */
extern void* _ZTVN9VTService9IVTClientE;

/* Symbol: _ZTCN9VTService11BpVTServiceE0_N7android11BpInterfaceINS_10IVTServiceEEE */
/* Demangled: construction vtable for android::BpInterface<VTService::IVTService>-in-VTService::BpVTService */
extern void* _ZTCN9VTService11BpVTServiceE0_N7android11BpInterfaceINS_10IVTServiceEEE;

/* Symbol: _ZNK7android6VectorIN9VTService26vt_srv_network_info_structEE8do_splatEPvPKvm */
/* Demangled: android::Vector<VTService::vt_srv_network_info_struct>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN9VTService26vt_srv_network_info_structEE8do_splatEPvPKvm(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFvbRKN7android8hardware12MQDescriptorIhLNS3_8MQFlavorE1EEEENS_9allocatorISA_EES9_E7__cloneEv */
/* Demangled: std::__1::__function::__func<void (*)(bool, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&), std::__1::allocator<void (*)(bool, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>, void (bool, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFvbRKN7android8hardware12MQDescriptorIhLNS3_8MQFlavorE1EEEENS_9allocatorISA_EES9_E7__cloneEv(void);

/* Symbol: _ZN9VTService12VTPriMsgHdlr5clearEv */
/* Demangled: VTService::VTPriMsgHdlr::clear() */
int _ZN9VTService12VTPriMsgHdlr5clearEv(void);

/* Symbol: _ZN9VTService12VTCoreHelper11getHOStringEb */
/* Demangled: VTService::VTCoreHelper::getHOString(bool) */
int _ZN9VTService12VTCoreHelper11getHOStringEb(void);

/* Symbol: _ZN9VTService12VTCoreHelper16isImsVideoCallonEv */
/* Demangled: VTService::VTCoreHelper::isImsVideoCallon() */
int _ZN9VTService12VTCoreHelper16isImsVideoCallonEv(void);

/* Symbol: _ZN7android7details20AidlMQDescriptorShimIaLNS_8hardware8MQFlavorE1EEC2EmP13native_handlemb */
/* Demangled: android::details::AidlMQDescriptorShim<signed char, (android::hardware::MQFlavor)1>::AidlMQDescriptorShim(unsigned long, native_handle*, unsigned long, bool) */
int _ZN7android7details20AidlMQDescriptorShimIaLNS_8hardware8MQFlavorE1EEC2EmP13native_handlemb(void);

/* Symbol: _ZTVN9VTService9VTMsgHdlrE */
/* Demangled: vtable for VTService::VTMsgHdlr */
extern void* _ZTVN9VTService9VTMsgHdlrE;

/* Symbol: _ZN9VTService9IVTClient10descriptorE */
/* Demangled: VTService::IVTClient::descriptor */
extern void* _ZN9VTService9IVTClient10descriptorE;

/* Symbol: _ZTTN9VTService11BpVTServiceE */
/* Demangled: VTT for VTService::BpVTService */
extern void* _ZTTN9VTService11BpVTServiceE;

/* Symbol: _ZN9VTService6VTCore4openEii */
/* Demangled: VTService::VTCore::open(int, int) */
int _ZN9VTService6VTCore4openEii(void);

/* Symbol: _ZN9VTService12VTCoreHelper28getSessionModifyResultStringEi */
/* Demangled: VTService::VTCoreHelper::getSessionModifyResultString(int) */
int _ZN9VTService12VTCoreHelper28getSessionModifyResultStringEi(void);

/* Symbol: _ZNK7android6VectorIN9VTService26vt_srv_network_info_structEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<VTService::vt_srv_network_info_struct>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN9VTService26vt_srv_network_info_structEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN9VTService9VTService17setPreviewSurfaceEiRKN7android2spINS1_7SurfaceEEE */
/* Demangled: VTService::VTService::setPreviewSurface(int, android::sp<android::Surface> const&) */
int _ZN9VTService9VTService17setPreviewSurfaceEiRKN7android2spINS1_7SurfaceEEE(void);

/* Symbol: _ZN4aidl6vendor8mediatek8hardware14videotelephony15IVideoTelephony4hashE */
/* Demangled: aidl::vendor::mediatek::hardware::videotelephony::IVideoTelephony::hash */
extern void* _ZN4aidl6vendor8mediatek8hardware14videotelephony15IVideoTelephony4hashE;

/* Symbol: _ZN9VTService9IVTClientC2Ev */
/* Demangled: VTService::IVTClient::IVTClient() */
int _ZN9VTService9IVTClientC2Ev(void);

/* Symbol: _ZN7android2spIN9VTService8VTAVSyncEEaSEPS2_ */
/* Demangled: android::sp<VTService::VTAVSync>::operator=(VTService::VTAVSync*) */
int _ZN7android2spIN9VTService8VTAVSyncEEaSEPS2_(void);

/* Symbol: _ZN9VTService6VTCore15retriggerUpdateEi */
/* Demangled: VTService::VTCore::retriggerUpdate(int) */
int _ZN9VTService6VTCore15retriggerUpdateEi(void);

/* Symbol: _ZN9VTService15VTMsgDispatcherD0Ev */
/* Demangled: VTService::VTMsgDispatcher::~VTMsgDispatcher() */
int _ZN9VTService15VTMsgDispatcherD0Ev(void);

/* Symbol: _ZTVN9VTService11BnVTServiceE */
/* Demangled: vtable for VTService::BnVTService */
extern void* _ZTVN9VTService11BnVTServiceE;

/* Symbol: _ZN9VTService9VTMALStub17UpdateMediaConfigEPN7android12media_configE */
/* Demangled: VTService::VTMALStub::UpdateMediaConfig(android::media_config*) */
int _ZN9VTService9VTMALStub17UpdateMediaConfigEPN7android12media_configE(void);

/* Symbol: _ZN9VTService9VTMALStub10StopRecordEv */
/* Demangled: VTService::VTMALStub::StopRecord() */
int _ZN9VTService9VTMALStub10StopRecordEv(void);

/* Symbol: _ZThn8_N9VTService9VTService20setDeviceOrientationEii */
/* Demangled: non-virtual thunk to VTService::VTService::setDeviceOrientation(int, int) */
int _ZThn8_N9VTService9VTService20setDeviceOrientationEii(void);

/* Symbol: _ZN9VTService9VTService21responseSessionModifyEiRKN7android7String8E */
/* Demangled: VTService::VTService::responseSessionModify(int, android::String8 const&) */
int _ZN9VTService9VTService21responseSessionModifyEiRKN7android7String8E(void);

/* Symbol: _ZThn8_N9VTService9IVTClientD0Ev */
/* Demangled: non-virtual thunk to VTService::IVTClient::~IVTClient() */
int _ZThn8_N9VTService9IVTClientD0Ev(void);

/* Symbol: _ZTCN9VTService10BnVTClientE16_N7android7IBinderE */
/* Demangled: construction vtable for android::IBinder-in-VTService::BnVTClient */
extern void* _ZTCN9VTService10BnVTClientE16_N7android7IBinderE;

/* Symbol: _ZN9VTService12VTCoreHelper12getCamStringEi */
/* Demangled: VTService::VTCoreHelper::getCamString(int) */
int _ZN9VTService12VTCoreHelper12getCamStringEi(void);

/* Symbol: _ZN9VTService10gVTSClientE */
/* Demangled: VTService::gVTSClient */
extern void* _ZN9VTService10gVTSClientE;

/* Symbol: _ZN7android11BnInterfaceIN9VTService9IVTClientEE10onAsBinderEv */
/* Demangled: android::BnInterface<VTService::IVTClient>::onAsBinder() */
int _ZN7android11BnInterfaceIN9VTService9IVTClientEE10onAsBinderEv(void);

/* Symbol: _ZTv0_n24_N9VTService6VTCoreD0Ev */
/* Demangled: virtual thunk to VTService::VTCore::~VTCore() */
int _ZTv0_n24_N9VTService6VTCoreD0Ev(void);

/* Symbol: _ZN9VTService12VTCoreHelper13setOperatorIdEii */
/* Demangled: VTService::VTCoreHelper::setOperatorId(int, int) */
int _ZN9VTService12VTCoreHelper13setOperatorIdEii(void);

/* Symbol: _ZN9VTService15VTMsgDispatcher4initEPFviPviE */
/* Demangled: VTService::VTMsgDispatcher::init(void (*)(int, void*, int)) */
int _ZN9VTService15VTMsgDispatcher4initEPFviPviE(void);

/* Symbol: _ZTCN9VTService10BpVTClientE0_N7android11BpInterfaceINS_9IVTClientEEE */
/* Demangled: construction vtable for android::BpInterface<VTService::IVTClient>-in-VTService::BpVTClient */
extern void* _ZTCN9VTService10BpVTClientE0_N7android11BpInterfaceINS_9IVTClientEEE;

/* Symbol: _ZN9VTService9VTMALStub26GetTurnOffVideoByPeerStateEv */
/* Demangled: VTService::VTMALStub::GetTurnOffVideoByPeerState() */
int _ZN9VTService9VTMALStub26GetTurnOffVideoByPeerStateEv(void);

/* Symbol: _ZN9VTService6VTCoreD1Ev */
/* Demangled: VTService::VTCore::~VTCore() */
int _ZN9VTService6VTCoreD1Ev(void);

/* Symbol: _ZN9VTService6VTCore5closeEii */
/* Demangled: VTService::VTCore::close(int, int) */
int _ZN9VTService6VTCore5closeEii(void);

/* Symbol: _ZN9VTService9VTMALStub8SnapShotERN7android2spINS1_7IMemoryEEENS1_15snapshot_mode_tE */
/* Demangled: VTService::VTMALStub::SnapShot(android::sp<android::IMemory>&, android::snapshot_mode_t) */
int _ZN9VTService9VTMALStub8SnapShotERN7android2spINS1_7IMemoryEEENS1_15snapshot_mode_tE(void);

/* Symbol: _ZN9VTService12VTCoreHelper17getProfileFromCnfEP32vt_srv_imcb_msg_session_modify_s */
/* Demangled: VTService::VTCoreHelper::getProfileFromCnf(vt_srv_imcb_msg_session_modify_s*) */
int _ZN9VTService12VTCoreHelper17getProfileFromCnfEP32vt_srv_imcb_msg_session_modify_s(void);

/* Symbol: _ZThn8_N9VTService9VTService12finalizationEi */
/* Demangled: non-virtual thunk to VTService::VTService::finalization(int) */
int _ZThn8_N9VTService9VTService12finalizationEi(void);

/* Symbol: _ZThn8_N9VTService9VTService9setCameraEii */
/* Demangled: non-virtual thunk to VTService::VTService::setCamera(int, int) */
int _ZThn8_N9VTService9VTService9setCameraEii(void);

/* Symbol: _ZThn8_N9VTService9VTService20requestSessionModifyEiRKN7android7String8E */
/* Demangled: non-virtual thunk to VTService::VTService::requestSessionModify(int, android::String8 const&) */
int _ZThn8_N9VTService9VTService20requestSessionModifyEiRKN7android7String8E(void);

/* Symbol: _ZTVN9VTService10BnVTClientE */
/* Demangled: vtable for VTService::BnVTClient */
extern void* _ZTVN9VTService10BnVTClientE;

/* Symbol: _ZN9VTService10MsgHandlerC2EN7android2spINS_6VTCoreEEEiNS2_INS1_5ImsMaEEEi */
/* Demangled: VTService::MsgHandler::MsgHandler(android::sp<VTService::VTCore>, int, android::sp<android::ImsMa>, int) */
int _ZN9VTService10MsgHandlerC2EN7android2spINS_6VTCoreEEEiNS2_INS1_5ImsMaEEEi(void);

/* Symbol: _ZN9VTService6VTCore16setHandoverStateEb */
/* Demangled: VTService::VTCore::setHandoverState(bool) */
int _ZN9VTService6VTCore16setHandoverStateEb(void);

/* Symbol: _ZN9VTService10IVTServiceD0Ev */
/* Demangled: VTService::IVTService::~IVTService() */
int _ZN9VTService10IVTServiceD0Ev(void);

/* Symbol: _ZN9VTService13vt_ua_2_codecEP23vt_srv_imcb_msg_param_sP16video_codec_fmtp */
/* Demangled: VTService::vt_ua_2_codec(vt_srv_imcb_msg_param_s*, video_codec_fmtp*) */
int _ZN9VTService13vt_ua_2_codecEP23vt_srv_imcb_msg_param_sP16video_codec_fmtp(void);

/* Symbol: _ZN9VTService12VTPriMsgHdlr17onMessageReceivedERKN7android2spINS1_8AMessageEEE */
/* Demangled: VTService::VTPriMsgHdlr::onMessageReceived(android::sp<android::AMessage> const&) */
int _ZN9VTService12VTPriMsgHdlr17onMessageReceivedERKN7android2spINS1_8AMessageEEE(void);

/* Symbol: _ZN9VTService10IVTService12default_implE */
/* Demangled: VTService::IVTService::default_impl */
extern void* _ZN9VTService10IVTService12default_implE;

/* Symbol: _ZN9VTService9VTMALStub15InitMediaConfigEPN7android12media_configE */
/* Demangled: VTService::VTMALStub::InitMediaConfig(android::media_config*) */
int _ZN9VTService9VTMALStub15InitMediaConfigEPN7android12media_configE(void);

/* Symbol: _ZN7android2spIN9VTService12VTCoreHelperEED2Ev */
/* Demangled: android::sp<VTService::VTCoreHelper>::~sp() */
int _ZN7android2spIN9VTService12VTCoreHelperEED2Ev(void);

/* Symbol: _ZN9VTService4g_vtE */
/* Demangled: VTService::g_vt */
extern void* _ZN9VTService4g_vtE;

/* Symbol: _ZN9VTService12VTCoreHelper14getUaMsgStringEi */
/* Demangled: VTService::VTCoreHelper::getUaMsgString(int) */
int _ZN9VTService12VTCoreHelper14getUaMsgStringEi(void);

/* Symbol: _ZN9VTService12VTCoreHelper14getErrorStringEi */
/* Demangled: VTService::VTCoreHelper::getErrorString(int) */
int _ZN9VTService12VTCoreHelper14getErrorStringEi(void);

/* Symbol: _ZN9VTService12VTCoreHelper15isCancelRequestEN7android2spINS_12VideoProfileEEE */
/* Demangled: VTService::VTCoreHelper::isCancelRequest(android::sp<VTService::VideoProfile>) */
int _ZN9VTService12VTCoreHelper15isCancelRequestEN7android2spINS_12VideoProfileEEE(void);

/* Symbol: _ZN9VTService10IVTServiceC2Ev */
/* Demangled: VTService::IVTService::IVTService() */
int _ZN9VTService10IVTServiceC2Ev(void);

/* Symbol: _ZN9VTService9VTMALStub16setHandoverStateEb */
/* Demangled: VTService::VTMALStub::setHandoverState(bool) */
int _ZN9VTService9VTMALStub16setHandoverStateEb(void);

/* Symbol: _ZNSt3__16vectorIN7android8hardware17GrantorDescriptorENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_ */
/* Demangled: _ZNSt3__16vectorIN7android8hardware17GrantorDescriptorENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_ */
int _ZNSt3__16vectorIN7android8hardware17GrantorDescriptorENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_(void);

/* Symbol: _ZN9VTService15VTMsgDispatcherC2EPFviPviE */
/* Demangled: VTService::VTMsgDispatcher::VTMsgDispatcher(void (*)(int, void*, int)) */
int _ZN9VTService15VTMsgDispatcherC2EPFviPviE(void);

/* Symbol: _ZThn8_N9VTService10IVTServiceD1Ev */
/* Demangled: non-virtual thunk to VTService::IVTService::~IVTService() */
int _ZThn8_N9VTService10IVTServiceD1Ev(void);

/* Symbol: _ZTVN9VTService9VTMALStubE */
/* Demangled: vtable for VTService::VTMALStub */
extern void* _ZTVN9VTService9VTMALStubE;

/* Symbol: _ZN9VTService6VTCoreC1ERKN7android2spINS_18IVTServiceCallBackEEE */
/* Demangled: VTService::VTCore::VTCore(android::sp<VTService::IVTServiceCallBack> const&) */
int _ZN9VTService6VTCoreC1ERKN7android2spINS_18IVTServiceCallBackEEE(void);

/* Symbol: _ZN9VTService6VTCore20requestSessionModifyEiRKN7android7String8E */
/* Demangled: VTService::VTCore::requestSessionModify(int, android::String8 const&) */
int _ZN9VTService6VTCore20requestSessionModifyEiRKN7android7String8E(void);

/* Symbol: _ZTCN9VTService10BpVTClientE0_NS_9IVTClientE */
/* Demangled: construction vtable for VTService::IVTClient-in-VTService::BpVTClient */
extern void* _ZTCN9VTService10BpVTClientE0_NS_9IVTClientE;

/* Symbol: _ZN9VTService12VTCoreHelper19getVideoStateStringEi */
/* Demangled: VTService::VTCoreHelper::getVideoStateString(int) */
int _ZN9VTService12VTCoreHelper19getVideoStateStringEi(void);

/* Symbol: _ZN9VTService12VTCoreHelper12getFromIndexEi */
/* Demangled: VTService::VTCoreHelper::getFromIndex(int) */
int _ZN9VTService12VTCoreHelper12getFromIndexEi(void);

/* Symbol: _ZN9VTService9VTMALStub15SetCameraSensorEi */
/* Demangled: VTService::VTMALStub::SetCameraSensor(int) */
int _ZN9VTService9VTMALStub15SetCameraSensorEi(void);

/* Symbol: _ZN9VTService6VTCore6deinitEi */
/* Demangled: VTService::VTCore::deinit(int) */
int _ZN9VTService6VTCore6deinitEi(void);

/* Symbol: _ZN9VTService12VTCoreHelper15getUIModeStringEi */
/* Demangled: VTService::VTCoreHelper::getUIModeString(int) */
int _ZN9VTService12VTCoreHelper15getUIModeStringEi(void);

/* Symbol: _ZN9VTService12VTCoreHelper18unPackToVdoProfileEN7android7String8E */
/* Demangled: VTService::VTCoreHelper::unPackToVdoProfile(android::String8) */
int _ZN9VTService12VTCoreHelper18unPackToVdoProfileEN7android7String8E(void);

/* Symbol: _ZN9VTService6VTCore20triggerGetOperatorIdEv */
/* Demangled: VTService::VTCore::triggerGetOperatorId() */
int _ZN9VTService6VTCore20triggerGetOperatorIdEv(void);

/* Symbol: _ZN9VTService12VTCoreHelper18getNetworkIdByIfIdEi */
/* Demangled: VTService::VTCoreHelper::getNetworkIdByIfId(int) */
int _ZN9VTService12VTCoreHelper18getNetworkIdByIfIdEi(void);

/* Symbol: _ZN9VTService12VTCoreHelper4dumpEv */
/* Demangled: VTService::VTCoreHelper::dump() */
int _ZN9VTService12VTCoreHelper4dumpEv(void);

/* Symbol: _ZN7android2spIN9VTService10IVTServiceEED2Ev */
/* Demangled: android::sp<VTService::IVTService>::~sp() */
int _ZN7android2spIN9VTService10IVTServiceEED2Ev(void);

/* Symbol: _ZTVN9VTService10IVTServiceE */
/* Demangled: vtable for VTService::IVTService */
extern void* _ZTVN9VTService10IVTServiceE;

/* Symbol: _ZN9VTService9VTMALStub22getBufferQueueProducerEPN7android2spINS1_22IGraphicBufferProducerEEE */
/* Demangled: VTService::VTMALStub::getBufferQueueProducer(android::sp<android::IGraphicBufferProducer>*) */
int _ZN9VTService9VTMALStub22getBufferQueueProducerEPN7android2spINS1_22IGraphicBufferProducerEEE(void);

/* Symbol: _ZTv0_n24_N9VTService10IVTServiceD1Ev */
/* Demangled: virtual thunk to VTService::IVTService::~IVTService() */
int _ZTv0_n24_N9VTService10IVTServiceD1Ev(void);

/* Symbol: _ZN9VTService12VTCoreHelper15isCallConnectedEi */
/* Demangled: VTService::VTCoreHelper::isCallConnected(int) */
int _ZN9VTService12VTCoreHelper15isCallConnectedEi(void);

/* Symbol: _ZN9VTService6VTCore8snapshotEiNS_20VT_SRV_SNAPSHOT_TYPEEN7android7String8E */
/* Demangled: VTService::VTCore::snapshot(int, VTService::VT_SRV_SNAPSHOT_TYPE, android::String8) */
int _ZN9VTService6VTCore8snapshotEiNS_20VT_SRV_SNAPSHOT_TYPEEN7android7String8E(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFvbRKN7android8hardware12MQDescriptorIhLNS3_8MQFlavorE1EEEENS_9allocatorISA_EES9_E7__cloneEPNS0_6__baseIS9_EE */
/* Demangled: std::__1::__function::__func<void (*)(bool, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&), std::__1::allocator<void (*)(bool, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>, void (bool, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>::__clone(std::__1::__function::__base<void (bool, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>*) const */
int _ZNKSt3__110__function6__funcIPFvbRKN7android8hardware12MQDescriptorIhLNS3_8MQFlavorE1EEEENS_9allocatorISA_EES9_E7__cloneEPNS0_6__baseIS9_EE(void);

/* Symbol: _ZN9VTService10BnVTClient10onTransactEjRKN7android6ParcelEPS2_j */
/* Demangled: VTService::BnVTClient::onTransact(unsigned int, android::Parcel const&, android::Parcel*, unsigned int) */
int _ZN9VTService10BnVTClient10onTransactEjRKN7android6ParcelEPS2_j(void);

/* Symbol: _ZN9VTService12VTCoreHelper7getModeEi */
/* Demangled: VTService::VTCoreHelper::getMode(int) */
int _ZN9VTService12VTCoreHelper7getModeEi(void);

/* Symbol: _ZN9VTService6VTCore14startRecordingEiNS_18VT_SRV_RECORD_TYPEEN7android7String8Ei */
/* Demangled: VTService::VTCore::startRecording(int, VTService::VT_SRV_RECORD_TYPE, android::String8, int) */
int _ZN9VTService6VTCore14startRecordingEiNS_18VT_SRV_RECORD_TYPEEN7android7String8Ei(void);

/* Symbol: _ZThn16_N9VTService9VTService10onTransactEjRKN7android6ParcelEPS2_j */
/* Demangled: non-virtual thunk to VTService::VTService::onTransact(unsigned int, android::Parcel const&, android::Parcel*, unsigned int) */
int _ZThn16_N9VTService9VTService10onTransactEjRKN7android6ParcelEPS2_j(void);

/* Symbol: _ZTCN9VTService10BnVTClientE8_NS_17IVTNotifyCallbackE */
/* Demangled: construction vtable for VTService::IVTNotifyCallback-in-VTService::BnVTClient */
extern void* _ZTCN9VTService10BnVTClientE8_NS_17IVTNotifyCallbackE;

/* Symbol: _ZN9VTService6VTCore14initializationEii */
/* Demangled: VTService::VTCore::initialization(int, int) */
int _ZN9VTService6VTCore14initializationEii(void);

/* Symbol: _ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEaSERKS3_ */
/* Demangled: android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1>::operator=(android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&) */
int _ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEaSERKS3_(void);

/* Symbol: _ZN7android16MessageQueueBaseINS_7details20AidlMQDescriptorShimEaLNS_8hardware8MQFlavorE1EE15mapGrantorDescrEj */
/* Demangled: android::MessageQueueBase<android::details::AidlMQDescriptorShim, signed char, (android::hardware::MQFlavor)1>::mapGrantorDescr(unsigned int) */
int _ZN7android16MessageQueueBaseINS_7details20AidlMQDescriptorShimEaLNS_8hardware8MQFlavorE1EE15mapGrantorDescrEj(void);

/* Symbol: _ZGVN4aidl6vendor8mediatek8hardware14videotelephony15IVideoTelephony4hashE */
/* Demangled: guard variable for aidl::vendor::mediatek::hardware::videotelephony::IVideoTelephony::hash */
extern void* _ZGVN4aidl6vendor8mediatek8hardware14videotelephony15IVideoTelephony4hashE;

/* Symbol: _ZN9VTService9VTMALStub12SetVTQualityEN7android10VT_QualityE */
/* Demangled: VTService::VTMALStub::SetVTQuality(android::VT_Quality) */
int _ZN9VTService9VTMALStub12SetVTQualityEN7android10VT_QualityE(void);

/* Symbol: _ZN9VTService10MsgHandler12finalizationEv */
/* Demangled: VTService::MsgHandler::finalization() */
int _ZN9VTService10MsgHandler12finalizationEv(void);

/* Symbol: _ZN9VTService12VTCoreHelper5getIdEi */
/* Demangled: VTService::VTCoreHelper::getId(int) */
int _ZN9VTService12VTCoreHelper5getIdEi(void);

/* Symbol: _ZN7android16MessageQueueBaseINS_7details20AidlMQDescriptorShimEaLNS_8hardware8MQFlavorE1EE12readBlockingEPamjjlPNS3_9EventFlagE */
/* Demangled: android::MessageQueueBase<android::details::AidlMQDescriptorShim, signed char, (android::hardware::MQFlavor)1>::readBlocking(signed char*, unsigned long, unsigned int, unsigned int, long, android::hardware::EventFlag*) */
int _ZN7android16MessageQueueBaseINS_7details20AidlMQDescriptorShimEaLNS_8hardware8MQFlavorE1EE12readBlockingEPamjjlPNS3_9EventFlagE(void);

/* Symbol: _ZTCN9VTService11BpVTServiceE16_N7android9BpRefBaseE */
/* Demangled: construction vtable for android::BpRefBase-in-VTService::BpVTService */
extern void* _ZTCN9VTService11BpVTServiceE16_N7android9BpRefBaseE;

/* Symbol: _ZN9VTService12ImsMaHandlerC1EN7android2spINS1_5ImsMaEEENS2_INS_6VTCoreEEEi */
/* Demangled: VTService::ImsMaHandler::ImsMaHandler(android::sp<android::ImsMa>, android::sp<VTService::VTCore>, int) */
int _ZN9VTService12ImsMaHandlerC1EN7android2spINS1_5ImsMaEEENS2_INS_6VTCoreEEEi(void);

/* Symbol: _ZN9VTService9VTMALStub5StartEN7android13ma_datapath_tE */
/* Demangled: VTService::VTMALStub::Start(android::ma_datapath_t) */
int _ZN9VTService9VTMALStub5StartEN7android13ma_datapath_tE(void);

/* Symbol: _ZN9VTService6VTCore14notifyCallbackEii */
/* Demangled: VTService::VTCore::notifyCallback(int, int) */
int _ZN9VTService6VTCore14notifyCallbackEii(void);

/* Symbol: _ZN9VTService6VTCore17setDisplaySurfaceEiRKN7android2spINS1_7SurfaceEEE */
/* Demangled: VTService::VTCore::setDisplaySurface(int, android::sp<android::Surface> const&) */
int _ZN9VTService6VTCore17setDisplaySurfaceEiRKN7android2spINS1_7SurfaceEEE(void);

/* Symbol: _ZTCN9VTService9VTServiceE0_N7android11BnInterfaceINS_10IVTServiceEEE */
/* Demangled: construction vtable for android::BnInterface<VTService::IVTService>-in-VTService::VTService */
extern void* _ZTCN9VTService9VTServiceE0_N7android11BnInterfaceINS_10IVTServiceEEE;

/* Symbol: _ZN9VTService10IVTService14setDefaultImplEN7android2spIS0_EE */
/* Demangled: VTService::IVTService::setDefaultImpl(android::sp<VTService::IVTService>) */
int _ZN9VTService10IVTService14setDefaultImplEN7android2spIS0_EE(void);

/* Symbol: _ZN9VTService12VTCoreHelper3delEi */
/* Demangled: VTService::VTCoreHelper::del(int) */
int _ZN9VTService12VTCoreHelper3delEi(void);

/* Symbol: _ZN9VTService6VTCore23setCameraParametersOnlyEiPN7android17sensor_info_vilteE */
/* Demangled: VTService::VTCore::setCameraParametersOnly(int, android::sensor_info_vilte*) */
int _ZN9VTService6VTCore23setCameraParametersOnlyEiPN7android17sensor_info_vilteE(void);

/* Symbol: _ZN9VTService6VTCore26requestCancelSessionModifyEiN7android2spINS_12VideoProfileEEE */
/* Demangled: VTService::VTCore::requestCancelSessionModify(int, android::sp<VTService::VideoProfile>) */
int _ZN9VTService6VTCore26requestCancelSessionModifyEiN7android2spINS_12VideoProfileEEE(void);

/* Symbol: _ZN9VTService12VTCoreHelper12clearElementEPNS_30vt_srv_call_table_entry_structE */
/* Demangled: VTService::VTCoreHelper::clearElement(VTService::vt_srv_call_table_entry_struct*) */
int _ZN9VTService12VTCoreHelper12clearElementEPNS_30vt_srv_call_table_entry_structE(void);

/* Symbol: _ZN9VTService9VTService13switchFeatureEiii */
/* Demangled: VTService::VTService::switchFeature(int, int, int) */
int _ZN9VTService9VTService13switchFeatureEiii(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIjjEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjjEEEE;

/* Symbol: _ZN9VTService12VTCoreHelper14getStateStringEi */
/* Demangled: VTService::VTCoreHelper::getStateString(int) */
int _ZN9VTService12VTCoreHelper14getStateStringEi(void);

/* Symbol: _ZN9VTService10IVTService11asInterfaceERKN7android2spINS1_7IBinderEEE */
/* Demangled: VTService::IVTService::asInterface(android::sp<android::IBinder> const&) */
int _ZN9VTService10IVTService11asInterfaceERKN7android2spINS1_7IBinderEEE(void);

/* Symbol: _ZN9VTService9VTMALStub5PauseEN7android13ma_datapath_tEPNS1_27imsma_pause_resume_params_tE */
/* Demangled: VTService::VTMALStub::Pause(android::ma_datapath_t, android::imsma_pause_resume_params_t*) */
int _ZN9VTService9VTMALStub5PauseEN7android13ma_datapath_tEPNS1_27imsma_pause_resume_params_tE(void);

/* Symbol: _ZN9VTService6VTCore14updateCallModeEi */
/* Demangled: VTService::VTCore::updateCallMode(int) */
int _ZN9VTService6VTCore14updateCallModeEi(void);

/* Symbol: _ZN9VTService6VTCore9setCameraEii */
/* Demangled: VTService::VTCore::setCamera(int, int) */
int _ZN9VTService6VTCore9setCameraEii(void);

/* Symbol: _ZN9VTService21VTService_instantiateEv */
/* Demangled: VTService::VTService_instantiate() */
int _ZN9VTService21VTService_instantiateEv(void);

/* Symbol: _ZN9VTService9VTService7mVTCoreE */
/* Demangled: VTService::VTService::mVTCore */
extern void* _ZN9VTService9VTService7mVTCoreE;

/* Symbol: _ZN9VTService12ImsMaHandler11exchangeMsgEv */
/* Demangled: VTService::ImsMaHandler::exchangeMsg() */
int _ZN9VTService12ImsMaHandler11exchangeMsgEv(void);

/* Symbol: _ZN9VTService6VTCore14updateTxRxModeEiiPNS_30vt_srv_call_update_info_structE */
/* Demangled: VTService::VTCore::updateTxRxMode(int, int, VTService::vt_srv_call_update_info_struct*) */
int _ZN9VTService6VTCore14updateTxRxModeEiiPNS_30vt_srv_call_update_info_structE(void);

/* Symbol: _ZN9VTService9VTService20requestSessionModifyEiRKN7android7String8E */
/* Demangled: VTService::VTService::requestSessionModify(int, android::String8 const&) */
int _ZN9VTService9VTService20requestSessionModifyEiRKN7android7String8E(void);

/* Symbol: _ZTVN9VTService15VTMsgDispatcherE */
/* Demangled: vtable for VTService::VTMsgDispatcher */
extern void* _ZTVN9VTService15VTMsgDispatcherE;

/* Symbol: _ZTCN9VTService9VTServiceE40_N7android7IBinder14DeathRecipientE */
/* Demangled: construction vtable for android::IBinder::DeathRecipient-in-VTService::VTService */
extern void* _ZTCN9VTService9VTServiceE40_N7android7IBinder14DeathRecipientE;

/* Symbol: _ZN9VTService9VTMALStub15SetLocalSurfaceERKN7android2spINS1_7SurfaceEEE */
/* Demangled: VTService::VTMALStub::SetLocalSurface(android::sp<android::Surface> const&) */
int _ZN9VTService9VTMALStub15SetLocalSurfaceERKN7android2spINS1_7SurfaceEEE(void);

/* Symbol: _ZN9VTService12VTCoreHelper3addEiN7android2spINS_9VTMALStubEEE */
/* Demangled: VTService::VTCoreHelper::add(int, android::sp<VTService::VTMALStub>) */
int _ZN9VTService12VTCoreHelper3addEiN7android2spINS_9VTMALStubEEE(void);

/* Symbol: _ZN9VTService12VTCoreHelper17getCallModeStringEi */
/* Demangled: VTService::VTCoreHelper::getCallModeString(int) */
int _ZN9VTService12VTCoreHelper17getCallModeStringEi(void);

/* Symbol: _ZN9VTService12VTCoreHelper23getProfileFromCancelCnfEP43vt_srv_imcb_msg_session_modify_cancel_cnf_s */
/* Demangled: VTService::VTCoreHelper::getProfileFromCancelCnf(vt_srv_imcb_msg_session_modify_cancel_cnf_s*) */
int _ZN9VTService12VTCoreHelper23getProfileFromCancelCnfEP43vt_srv_imcb_msg_session_modify_cancel_cnf_s(void);

/* Symbol: _ZN7android2spIN9VTService12VTCoreHelperEEaSEPS2_ */
/* Demangled: android::sp<VTService::VTCoreHelper>::operator=(VTService::VTCoreHelper*) */
int _ZN7android2spIN9VTService12VTCoreHelperEEaSEPS2_(void);

/* Symbol: _ZN9VTService12VTCoreHelper8getStateEi */
/* Demangled: VTService::VTCoreHelper::getState(int) */
int _ZN9VTService12VTCoreHelper8getStateEi(void);

/* Symbol: _ZThn48_N9VTService9VTService14notifyCallbackEiiiiiRKN7android7String8ES4_RKNS1_2spINS1_22IGraphicBufferProducerEEE */
/* Demangled: non-virtual thunk to VTService::VTService::notifyCallback(int, int, int, int, int, android::String8 const&, android::String8 const&, android::sp<android::IGraphicBufferProducer> const&) */
int _ZThn48_N9VTService9VTService14notifyCallbackEiiiiiRKN7android7String8ES4_RKNS1_2spINS1_22IGraphicBufferProducerEEE(void);

/* Symbol: _ZTCN9VTService11BpVTServiceE0_NS_10IVTServiceE */
/* Demangled: construction vtable for VTService::IVTService-in-VTService::BpVTService */
extern void* _ZTCN9VTService11BpVTServiceE0_NS_10IVTServiceE;

/* Symbol: _ZN9VTService9VTMALStub14GetPeerSurfaceEv */
/* Demangled: VTService::VTMALStub::GetPeerSurface() */
int _ZN9VTService9VTMALStub14GetPeerSurfaceEv(void);

/* Symbol: _ZN7android16MessageQueueBaseINS_7details20AidlMQDescriptorShimEaLNS_8hardware8MQFlavorE1EE17unmapGrantorDescrEPvj */
/* Demangled: android::MessageQueueBase<android::details::AidlMQDescriptorShim, signed char, (android::hardware::MQFlavor)1>::unmapGrantorDescr(void*, unsigned int) */
int _ZN7android16MessageQueueBaseINS_7details20AidlMQDescriptorShimEaLNS_8hardware8MQFlavorE1EE17unmapGrantorDescrEPvj(void);

/* Symbol: _ZTVN9VTService6VTCoreE */
/* Demangled: vtable for VTService::VTCore */
extern void* _ZTVN9VTService6VTCoreE;

/* Symbol: _ZN9VTService12VTCoreHelper13getModeStringEi */
/* Demangled: VTService::VTCoreHelper::getModeString(int) */
int _ZN9VTService12VTCoreHelper13getModeStringEi(void);

/* Symbol: _ZThn8_N9VTService9VTService26setCameraParametersWithSimEiiiPN7android17sensor_info_vilteE */
/* Demangled: non-virtual thunk to VTService::VTService::setCameraParametersWithSim(int, int, int, android::sensor_info_vilte*) */
int _ZThn8_N9VTService9VTService26setCameraParametersWithSimEiiiPN7android17sensor_info_vilteE(void);

/* Symbol: _ZN9VTService9VTService20triggerGetOperatorIdEv */
/* Demangled: VTService::VTService::triggerGetOperatorId() */
int _ZN9VTService9VTService20triggerGetOperatorIdEv(void);

/* Symbol: _ZN9VTService12VTCoreHelper7setModeEiNS_16VT_SRV_CALL_MODEE */
/* Demangled: VTService::VTCoreHelper::setMode(int, VTService::VT_SRV_CALL_MODE) */
int _ZN9VTService12VTCoreHelper7setModeEiNS_16VT_SRV_CALL_MODEE(void);

/* Symbol: _ZN9VTService12VTCoreHelper21getHandoverStateBySimEi */
/* Demangled: VTService::VTCoreHelper::getHandoverStateBySim(int) */
int _ZN9VTService12VTCoreHelper21getHandoverStateBySimEi(void);

/* Symbol: _ZTVN9VTService12VTCoreHelperE */
/* Demangled: vtable for VTService::VTCoreHelper */
extern void* _ZTVN9VTService12VTCoreHelperE;

/* Symbol: _ZN9VTService9VTService9setUIModeEiNS_14VT_SRV_UI_MODEE */
/* Demangled: VTService::VTService::setUIMode(int, VTService::VT_SRV_UI_MODE) */
int _ZN9VTService9VTService9setUIModeEiNS_14VT_SRV_UI_MODEE(void);

/* Symbol: _ZN9VTService9IVTClientD2Ev */
/* Demangled: VTService::IVTClient::~IVTClient() */
int _ZN9VTService9IVTClientD2Ev(void);

/* Symbol: _ZN9VTService12ImsMaHandlerC2EN7android2spINS1_5ImsMaEEENS2_INS_6VTCoreEEEi */
/* Demangled: VTService::ImsMaHandler::ImsMaHandler(android::sp<android::ImsMa>, android::sp<VTService::VTCore>, int) */
int _ZN9VTService12ImsMaHandlerC2EN7android2spINS1_5ImsMaEEENS2_INS_6VTCoreEEEi(void);

/* Symbol: _ZN9VTService6VTCore13stopRecordingEi */
/* Demangled: VTService::VTCore::stopRecording(int) */
int _ZN9VTService6VTCore13stopRecordingEi(void);

/* Symbol: _ZN9VTService12VTCoreHelper6logMsgEiPKciiiiS2_S2_NS_13VT_SRV_LOG_LVE */
/* Demangled: VTService::VTCoreHelper::logMsg(int, char const*, int, int, int, int, char const*, char const*, VTService::VT_SRV_LOG_LV) */
int _ZN9VTService12VTCoreHelper6logMsgEiPKciiiiS2_S2_NS_13VT_SRV_LOG_LVE(void);

/* Symbol: _ZTCN9VTService6VTCoreE0_NS_12IVTInterfaceE */
/* Demangled: construction vtable for VTService::IVTInterface-in-VTService::VTCore */
extern void* _ZTCN9VTService6VTCoreE0_NS_12IVTInterfaceE;

/* Symbol: _ZN9VTService9VTService14notifyCallbackEiiiiiRKN7android7String8ES4_RKNS1_2spINS1_22IGraphicBufferProducerEEE */
/* Demangled: VTService::VTService::notifyCallback(int, int, int, int, int, android::String8 const&, android::String8 const&, android::sp<android::IGraphicBufferProducer> const&) */
int _ZN9VTService9VTService14notifyCallbackEiiiiiRKN7android7String8ES4_RKNS1_2spINS1_22IGraphicBufferProducerEEE(void);

/* Symbol: _ZN9VTService9VTMALStubC1EiiiiRKN7android2spINS_6VTCoreEEE */
/* Demangled: VTService::VTMALStub::VTMALStub(int, int, int, int, android::sp<VTService::VTCore> const&) */
int _ZN9VTService9VTMALStubC1EiiiiRKN7android2spINS_6VTCoreEEE(void);

/* Symbol: _ZN9VTService11vt_callbackEiPvi */
/* Demangled: VTService::vt_callback(int, void*, int) */
int _ZN9VTService11vt_callbackEiPvi(void);

/* Symbol: _ZThn8_N9VTService9VTService17setDisplaySurfaceEiRKN7android2spINS1_7SurfaceEEE */
/* Demangled: non-virtual thunk to VTService::VTService::setDisplaySurface(int, android::sp<android::Surface> const&) */
int _ZThn8_N9VTService9VTService17setDisplaySurfaceEiRKN7android2spINS1_7SurfaceEEE(void);

/* Symbol: _ZTCN9VTService9VTServiceE8_NS_12IVTInterfaceE */
/* Demangled: construction vtable for VTService::IVTInterface-in-VTService::VTService */
extern void* _ZTCN9VTService9VTServiceE8_NS_12IVTInterfaceE;

/* Symbol: _ZN9VTService9VTMALStubC2EiiiiRKN7android2spINS_6VTCoreEEE */
/* Demangled: VTService::VTMALStub::VTMALStub(int, int, int, int, android::sp<VTService::VTCore> const&) */
int _ZN9VTService9VTMALStubC2EiiiiRKN7android2spINS_6VTCoreEEE(void);

/* Symbol: _ZN9VTService9VTMALStub4StopEN7android13ma_datapath_tE */
/* Demangled: VTService::VTMALStub::Stop(android::ma_datapath_t) */
int _ZN9VTService9VTMALStub4StopEN7android13ma_datapath_tE(void);

/* Symbol: _ZN9VTService12VTCoreHelper18getCurrentOperatorEi */
/* Demangled: VTService::VTCoreHelper::getCurrentOperator(int) */
int _ZN9VTService12VTCoreHelper18getCurrentOperatorEi(void);

/* Symbol: _ZThn8_N9VTService9VTService18updateNetworkTableEbiN7android7String8E */
/* Demangled: non-virtual thunk to VTService::VTService::updateNetworkTable(bool, int, android::String8) */
int _ZThn8_N9VTService9VTService18updateNetworkTableEbiN7android7String8E(void);

/* Symbol: _ZN9VTService9VTService16tagSocketWithUidEi */
/* Demangled: VTService::VTService::tagSocketWithUid(int) */
int _ZN9VTService9VTService16tagSocketWithUidEi(void);

/* Symbol: _ZTTN9VTService10BpVTClientE */
/* Demangled: VTT for VTService::BpVTClient */
extern void* _ZTTN9VTService10BpVTClientE;

/* Symbol: _ZN9VTService12VTCoreHelper30geteEarlyMediaProfileFromStateEi */
/* Demangled: VTService::VTCoreHelper::geteEarlyMediaProfileFromState(int) */
int _ZN9VTService12VTCoreHelper30geteEarlyMediaProfileFromStateEi(void);

/* Symbol: _ZN9VTService12VTCoreHelper16getHideYouStringEi */
/* Demangled: VTService::VTCoreHelper::getHideYouString(int) */
int _ZN9VTService12VTCoreHelper16getHideYouStringEi(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFvbRKN7android8hardware12MQDescriptorIhLNS3_8MQFlavorE1EEEENS_9allocatorISA_EES9_EE */
/* Demangled: vtable for std::__1::__function::__func<void (*)(bool, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&), std::__1::allocator<void (*)(bool, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>, void (bool, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)> */
extern void* _ZTVNSt3__110__function6__funcIPFvbRKN7android8hardware12MQDescriptorIhLNS3_8MQFlavorE1EEEENS_9allocatorISA_EES9_EE;

/* Symbol: _ZN7android16MessageQueueBaseINS_7details20AidlMQDescriptorShimEaLNS_8hardware8MQFlavorE1EE13writeBlockingEPKamjjlPNS3_9EventFlagE */
/* Demangled: android::MessageQueueBase<android::details::AidlMQDescriptorShim, signed char, (android::hardware::MQFlavor)1>::writeBlocking(signed char const*, unsigned long, unsigned int, unsigned int, long, android::hardware::EventFlag*) */
int _ZN7android16MessageQueueBaseINS_7details20AidlMQDescriptorShimEaLNS_8hardware8MQFlavorE1EE13writeBlockingEPKamjjlPNS3_9EventFlagE(void);

/* Symbol: _ZN9VTService9VTService20setDeviceOrientationEii */
/* Demangled: VTService::VTService::setDeviceOrientation(int, int) */
int _ZN9VTService9VTService20setDeviceOrientationEii(void);

/* Symbol: _ZN9VTService15VTMsgDispatcherD2Ev */
/* Demangled: VTService::VTMsgDispatcher::~VTMsgDispatcher() */
int _ZN9VTService15VTMsgDispatcherD2Ev(void);

/* Symbol: _ZTCN9VTService10BpVTClientE16_N7android9BpRefBaseE */
/* Demangled: construction vtable for android::BpRefBase-in-VTService::BpVTClient */
extern void* _ZTCN9VTService10BpVTClientE16_N7android9BpRefBaseE;

/* Symbol: _ZN9VTService6VTCoreD0Ev */
/* Demangled: VTService::VTCore::~VTCore() */
int _ZN9VTService6VTCoreD0Ev(void);

/* Symbol: _ZThn8_N9VTService9VTService19setCameraParametersEiiPN7android17sensor_info_vilteE */
/* Demangled: non-virtual thunk to VTService::VTService::setCameraParameters(int, int, android::sensor_info_vilte*) */
int _ZThn8_N9VTService9VTService19setCameraParametersEiiPN7android17sensor_info_vilteE(void);

/* Symbol: _ZN7android2spIN9VTService18IVTServiceCallBackEEaSEPS2_ */
/* Demangled: android::sp<VTService::IVTServiceCallBack>::operator=(VTService::IVTServiceCallBack*) */
int _ZN7android2spIN9VTService18IVTServiceCallBackEEaSEPS2_(void);

/* Symbol: _ZN9VTService9VTService13stopRecordingEi */
/* Demangled: VTService::VTService::stopRecording(int) */
int _ZN9VTService9VTService13stopRecordingEi(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_compareEPKvS5_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_compareEPKvS5_(void);

/* Symbol: _ZN7android2spIN9VTService6VTCoreEEaSEPS2_ */
/* Demangled: android::sp<VTService::VTCore>::operator=(VTService::VTCore*) */
int _ZN7android2spIN9VTService6VTCoreEEaSEPS2_(void);

/* Symbol: _ZN9VTService6VTCore13init_internalEi */
/* Demangled: VTService::VTCore::init_internal(int) */
int _ZN9VTService6VTCore13init_internalEi(void);

/* Symbol: _ZN7android16MessageQueueBaseINS_7details20AidlMQDescriptorShimEaLNS_8hardware8MQFlavorE1EE10initMemoryEb */
/* Demangled: android::MessageQueueBase<android::details::AidlMQDescriptorShim, signed char, (android::hardware::MQFlavor)1>::initMemory(bool) */
int _ZN7android16MessageQueueBaseINS_7details20AidlMQDescriptorShimEaLNS_8hardware8MQFlavorE1EE10initMemoryEb(void);

/* Symbol: _ZN9VTService9VTService12finalizationEi */
/* Demangled: VTService::VTService::finalization(int) */
int _ZN9VTService9VTService12finalizationEi(void);

/* Symbol: _ZN9VTService9VTService26setCameraParametersWithSimEiiiPN7android17sensor_info_vilteE */
/* Demangled: VTService::VTService::setCameraParametersWithSim(int, int, int, android::sensor_info_vilte*) */
int _ZN9VTService9VTService26setCameraParametersWithSimEiiiPN7android17sensor_info_vilteE(void);

/* Symbol: _ZN9VTService9IVTClient14setDefaultImplEN7android2spIS0_EE */
/* Demangled: VTService::IVTClient::setDefaultImpl(android::sp<VTService::IVTClient>) */
int _ZN9VTService9IVTClient14setDefaultImplEN7android2spIS0_EE(void);

/* Symbol: _ZTCN9VTService9VTServiceE48_NS_18IVTServiceCallBackE */
/* Demangled: construction vtable for VTService::IVTServiceCallBack-in-VTService::VTService */
extern void* _ZTCN9VTService9VTServiceE48_NS_18IVTServiceCallBackE;

/* Symbol: _ZTCN9VTService11BnVTServiceE16_N7android7BBinderE */
/* Demangled: construction vtable for android::BBinder-in-VTService::BnVTService */
extern void* _ZTCN9VTService11BnVTServiceE16_N7android7BBinderE;

/* Symbol: _ZN9VTService12VTCoreHelper3popEv */
/* Demangled: VTService::VTCoreHelper::pop() */
int _ZN9VTService12VTCoreHelper3popEv(void);

/* Symbol: _ZN9VTService7VT_SendEiPvi */
/* Demangled: VTService::VT_Send(int, void*, int) */
int _ZN9VTService7VT_SendEiPvi(void);

/* Symbol: _ZN7android16MessageQueueBaseINS_8hardware12MQDescriptorEhLNS1_8MQFlavorE1EE4readEPhm */
/* Demangled: android::MessageQueueBase<android::hardware::MQDescriptor, unsigned char, (android::hardware::MQFlavor)1>::read(unsigned char*, unsigned long) */
int _ZN7android16MessageQueueBaseINS_8hardware12MQDescriptorEhLNS1_8MQFlavorE1EE4readEPhm(void);

/* Symbol: _ZTVN9VTService9VTServiceE */
/* Demangled: vtable for VTService::VTService */
extern void* _ZTVN9VTService9VTServiceE;

/* Symbol: _ZTCN9VTService9VTServiceE0_NS_10IVTServiceE */
/* Demangled: construction vtable for VTService::IVTService-in-VTService::VTService */
extern void* _ZTCN9VTService9VTServiceE0_NS_10IVTServiceE;

/* Symbol: _ZN9VTService10IVTServiceD2Ev */
/* Demangled: VTService::IVTService::~IVTService() */
int _ZN9VTService10IVTServiceD2Ev(void);

/* Symbol: _ZTCN9VTService11BnVTServiceE0_N7android10IInterfaceE */
/* Demangled: construction vtable for android::IInterface-in-VTService::BnVTService */
extern void* _ZTCN9VTService11BnVTServiceE0_N7android10IInterfaceE;

/* Symbol: _ZN9VTService9VTService17setDisplaySurfaceEiRKN7android2spINS1_7SurfaceEEE */
/* Demangled: VTService::VTService::setDisplaySurface(int, android::sp<android::Surface> const&) */
int _ZN9VTService9VTService17setDisplaySurfaceEiRKN7android2spINS1_7SurfaceEEE(void);

/* Symbol: _ZThn8_N9VTService10IVTServiceD0Ev */
/* Demangled: non-virtual thunk to VTService::IVTService::~IVTService() */
int _ZThn8_N9VTService10IVTServiceD0Ev(void);

/* Symbol: _ZN9VTService12VTCoreHelper4initEv */
/* Demangled: VTService::VTCoreHelper::init() */
int _ZN9VTService12VTCoreHelper4initEv(void);

/* Symbol: _ZN9VTService6VTCore14close_internalEii */
/* Demangled: VTService::VTCore::close_internal(int, int) */
int _ZN9VTService6VTCore14close_internalEii(void);

/* Symbol: _ZN7android16MessageQueueBaseINS_8hardware12MQDescriptorEhLNS1_8MQFlavorE1EE13writeBlockingEPKhmjjlPNS1_9EventFlagE */
/* Demangled: android::MessageQueueBase<android::hardware::MQDescriptor, unsigned char, (android::hardware::MQFlavor)1>::writeBlocking(unsigned char const*, unsigned long, unsigned int, unsigned int, long, android::hardware::EventFlag*) */
int _ZN7android16MessageQueueBaseINS_8hardware12MQDescriptorEhLNS1_8MQFlavorE1EE13writeBlockingEPKhmjjlPNS1_9EventFlagE(void);

/* Symbol: _ZThn8_N9VTService9VTService14initializationEii */
/* Demangled: non-virtual thunk to VTService::VTService::initialization(int, int) */
int _ZThn8_N9VTService9VTService14initializationEii(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBMTK_VT_SERVICE_H */
