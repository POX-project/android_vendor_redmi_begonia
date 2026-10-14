/*
 * Reverse-Engineered ABI Specification for: libmtk_vt_wrapper.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libmtk_vt_wrapper.so
 */

#ifndef BEGONIA_RE_LIBMTK_VT_WRAPPER_H
#define BEGONIA_RE_LIBMTK_VT_WRAPPER_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZTCN9VTService10BnVTClientE0_N7android11BnInterfaceINS_9IVTClientEEE */
/* Demangled: construction vtable for android::BnInterface<VTService::IVTClient>-in-VTService::BnVTClient */
extern void* _ZTCN9VTService10BnVTClientE0_N7android11BnInterfaceINS_9IVTClientEEE;

/* Symbol: _ZTCN9VTService11BnVTServiceE16_N7android7BBinderE */
/* Demangled: construction vtable for android::BBinder-in-VTService::BnVTService */
extern void* _ZTCN9VTService11BnVTServiceE16_N7android7BBinderE;

/* Symbol: _ZN9VTService8VTClient5mLockE */
/* Demangled: VTService::VTClient::mLock */
extern void* _ZN9VTService8VTClient5mLockE;

/* Symbol: _ZTTN9VTService8VTClient13DeathNotifierE */
/* Demangled: VTT for VTService::VTClient::DeathNotifier */
extern void* _ZTTN9VTService8VTClient13DeathNotifierE;

/* Symbol: _ZN9VTService8VTClient11getVTClientEv */
/* Demangled: VTService::VTClient::getVTClient() */
int _ZN9VTService8VTClient11getVTClientEv(void);

/* Symbol: _ZN9VTService9IVTClient14setDefaultImplEN7android2spIS0_EE */
/* Demangled: VTService::IVTClient::setDefaultImpl(android::sp<VTService::IVTClient>) */
int _ZN9VTService9IVTClient14setDefaultImplEN7android2spIS0_EE(void);

/* Symbol: _ZTv0_n24_N9VTService9IVTClientD0Ev */
/* Demangled: virtual thunk to VTService::IVTClient::~IVTClient() */
int _ZTv0_n24_N9VTService9IVTClientD0Ev(void);

/* Symbol: _ZN7android11BnInterfaceIN9VTService10IVTServiceEE10onAsBinderEv */
/* Demangled: android::BnInterface<VTService::IVTService>::onAsBinder() */
int _ZN7android11BnInterfaceIN9VTService10IVTServiceEE10onAsBinderEv(void);

/* Symbol: _ZTCN9VTService11BnVTServiceE0_N7android11BnInterfaceINS_10IVTServiceEEE */
/* Demangled: construction vtable for android::BnInterface<VTService::IVTService>-in-VTService::BnVTService */
extern void* _ZTCN9VTService11BnVTServiceE0_N7android11BnInterfaceINS_10IVTServiceEEE;

/* Symbol: _ZTTN9VTService8VTClientE */
/* Demangled: VTT for VTService::VTClient */
extern void* _ZTTN9VTService8VTClientE;

/* Symbol: _ZTCN9VTService8VTClientE0_N7android10IInterfaceE */
/* Demangled: construction vtable for android::IInterface-in-VTService::VTClient */
extern void* _ZTCN9VTService8VTClientE0_N7android10IInterfaceE;

/* Symbol: Java_com_mediatek_ims_internal_ImsVTProvider_nTagSocketWithUid */
/* Demangled: Java_com_mediatek_ims_internal_ImsVTProvider_nTagSocketWithUid */
int Java_com_mediatek_ims_internal_ImsVTProvider_nTagSocketWithUid(void);

/* Symbol: _ZTCN9VTService10BnVTClientE8_NS_17IVTNotifyCallbackE */
/* Demangled: construction vtable for VTService::IVTNotifyCallback-in-VTService::BnVTClient */
extern void* _ZTCN9VTService10BnVTClientE8_NS_17IVTNotifyCallbackE;

/* Symbol: _ZThn48_N9VTService8VTClient9setCameraEii */
/* Demangled: non-virtual thunk to VTService::VTClient::setCamera(int, int) */
int _ZThn48_N9VTService8VTClient9setCameraEii(void);

/* Symbol: _ZThn48_N9VTService8VTClient8snapshotEiNS_20VT_SRV_SNAPSHOT_TYPEEN7android7String8E */
/* Demangled: non-virtual thunk to VTService::VTClient::snapshot(int, VTService::VT_SRV_SNAPSHOT_TYPE, android::String8) */
int _ZThn48_N9VTService8VTClient8snapshotEiNS_20VT_SRV_SNAPSHOT_TYPEEN7android7String8E(void);

/* Symbol: _ZThn48_N9VTService8VTClient18updateNetworkTableEbiN7android7String8E */
/* Demangled: non-virtual thunk to VTService::VTClient::updateNetworkTable(bool, int, android::String8) */
int _ZThn48_N9VTService8VTClient18updateNetworkTableEbiN7android7String8E(void);

/* Symbol: Java_com_mediatek_ims_internal_ImsVTProvider_nSetPreviewSurface */
/* Demangled: Java_com_mediatek_ims_internal_ImsVTProvider_nSetPreviewSurface */
int Java_com_mediatek_ims_internal_ImsVTProvider_nSetPreviewSurface(void);

/* Symbol: Java_com_mediatek_ims_internal_ImsVTProvider_nStartRecording */
/* Demangled: Java_com_mediatek_ims_internal_ImsVTProvider_nStartRecording */
int Java_com_mediatek_ims_internal_ImsVTProvider_nStartRecording(void);

/* Symbol: _ZTCN9VTService10BnVTClientE0_NS_9IVTClientE */
/* Demangled: construction vtable for VTService::IVTClient-in-VTService::BnVTClient */
extern void* _ZTCN9VTService10BnVTClientE0_NS_9IVTClientE;

/* Symbol: _ZTCN9VTService10IVTServiceE8_NS_12IVTInterfaceE */
/* Demangled: construction vtable for VTService::IVTInterface-in-VTService::IVTService */
extern void* _ZTCN9VTService10IVTServiceE8_NS_12IVTInterfaceE;

/* Symbol: _ZTCN9VTService11BnVTServiceE0_NS_10IVTServiceE */
/* Demangled: construction vtable for VTService::IVTService-in-VTService::BnVTService */
extern void* _ZTCN9VTService11BnVTServiceE0_NS_10IVTServiceE;

/* Symbol: _ZN9VTService8VTClient15releaseVTClientEv */
/* Demangled: VTService::VTClient::releaseVTClient() */
int _ZN9VTService8VTClient15releaseVTClientEv(void);

/* Symbol: _ZN9VTService8VTClient18updateNetworkTableEbiN7android7String8E */
/* Demangled: VTService::VTClient::updateNetworkTable(bool, int, android::String8) */
int _ZN9VTService8VTClient18updateNetworkTableEbiN7android7String8E(void);

/* Symbol: _ZN9VTService10BnVTClient10onTransactEjRKN7android6ParcelEPS2_j */
/* Demangled: VTService::BnVTClient::onTransact(unsigned int, android::Parcel const&, android::Parcel*, unsigned int) */
int _ZN9VTService10BnVTClient10onTransactEjRKN7android6ParcelEPS2_j(void);

/* Symbol: _ZN9VTService9gVTClientE */
/* Demangled: VTService::gVTClient */
extern void* _ZN9VTService9gVTClientE;

/* Symbol: _ZThn48_N9VTService8VTClient9setUIModeEiNS_14VT_SRV_UI_MODEE */
/* Demangled: non-virtual thunk to VTService::VTClient::setUIMode(int, VTService::VT_SRV_UI_MODE) */
int _ZThn48_N9VTService8VTClient9setUIModeEiNS_14VT_SRV_UI_MODEE(void);

/* Symbol: _ZTTN9VTService10BnVTClientE */
/* Demangled: VTT for VTService::BnVTClient */
extern void* _ZTTN9VTService10BnVTClientE;

/* Symbol: _ZTVN9VTService11BpVTServiceE */
/* Demangled: vtable for VTService::BpVTService */
extern void* _ZTVN9VTService11BpVTServiceE;

/* Symbol: _ZN7android2spIN9VTService8VTClient13DeathNotifierEED2Ev */
/* Demangled: android::sp<VTService::VTClient::DeathNotifier>::~sp() */
int _ZN7android2spIN9VTService8VTClient13DeathNotifierEED2Ev(void);

/* Symbol: _ZN9VTService8VTClient20triggerGetOperatorIdEv */
/* Demangled: VTService::VTClient::triggerGetOperatorId() */
int _ZN9VTService8VTClient20triggerGetOperatorIdEv(void);

/* Symbol: _ZThn8_N9VTService10IVTServiceD1Ev */
/* Demangled: non-virtual thunk to VTService::IVTService::~IVTService() */
int _ZThn8_N9VTService10IVTServiceD1Ev(void);

/* Symbol: _ZThn48_N9VTService8VTClient17setPreviewSurfaceEiRKN7android2spINS1_7SurfaceEEE */
/* Demangled: non-virtual thunk to VTService::VTClient::setPreviewSurface(int, android::sp<android::Surface> const&) */
int _ZThn48_N9VTService8VTClient17setPreviewSurfaceEiRKN7android2spINS1_7SurfaceEEE(void);

/* Symbol: _ZN9VTService8VTClient20requestSessionModifyEiRKN7android7String8E */
/* Demangled: VTService::VTClient::requestSessionModify(int, android::String8 const&) */
int _ZN9VTService8VTClient20requestSessionModifyEiRKN7android7String8E(void);

/* Symbol: _ZTCN9VTService8VTClientE40_N7android7IBinder14DeathRecipientE */
/* Demangled: construction vtable for android::IBinder::DeathRecipient-in-VTService::VTClient */
extern void* _ZTCN9VTService8VTClientE40_N7android7IBinder14DeathRecipientE;

/* Symbol: _ZTVN9VTService10BnVTClientE */
/* Demangled: vtable for VTService::BnVTClient */
extern void* _ZTVN9VTService10BnVTClientE;

/* Symbol: _ZN9VTService10IVTServiceD2Ev */
/* Demangled: VTService::IVTService::~IVTService() */
int _ZN9VTService10IVTServiceD2Ev(void);

/* Symbol: _Z6notifyiiiiiPKcS0_RKN7android2spINS1_22IGraphicBufferProducerEEE */
/* Demangled: notify(int, int, int, int, int, char const*, char const*, android::sp<android::IGraphicBufferProducer> const&) */
int _Z6notifyiiiiiPKcS0_RKN7android2spINS1_22IGraphicBufferProducerEEE(void);

/* Symbol: _ZThn8_N9VTService9IVTClientD0Ev */
/* Demangled: non-virtual thunk to VTService::IVTClient::~IVTClient() */
int _ZThn8_N9VTService9IVTClientD0Ev(void);

/* Symbol: _ZTCN9VTService10BpVTClientE0_N7android11BpInterfaceINS_9IVTClientEEE */
/* Demangled: construction vtable for android::BpInterface<VTService::IVTClient>-in-VTService::BpVTClient */
extern void* _ZTCN9VTService10BpVTClientE0_N7android11BpInterfaceINS_9IVTClientEEE;

/* Symbol: _ZThn48_N9VTService8VTClient20triggerGetOperatorIdEv */
/* Demangled: non-virtual thunk to VTService::VTClient::triggerGetOperatorId() */
int _ZThn48_N9VTService8VTClient20triggerGetOperatorIdEv(void);

/* Symbol: _ZTCN9VTService8VTClientE16_N7android7BBinderE */
/* Demangled: construction vtable for android::BBinder-in-VTService::VTClient */
extern void* _ZTCN9VTService8VTClientE16_N7android7BBinderE;

/* Symbol: _ZNK9VTService9IVTClient22getInterfaceDescriptorEv */
/* Demangled: VTService::IVTClient::getInterfaceDescriptor() const */
int _ZNK9VTService9IVTClient22getInterfaceDescriptorEv(void);

/* Symbol: _ZN9VTService9IVTClient10descriptorE */
/* Demangled: VTService::IVTClient::descriptor */
extern void* _ZN9VTService9IVTClient10descriptorE;

/* Symbol: _ZN9VTService9IVTClientD1Ev */
/* Demangled: VTService::IVTClient::~IVTClient() */
int _ZN9VTService9IVTClientD1Ev(void);

/* Symbol: _ZThn8_N9VTService8VTClient14notifyCallbackEiiiiiRKN7android7String8ES4_RKNS1_2spINS1_22IGraphicBufferProducerEEE */
/* Demangled: non-virtual thunk to VTService::VTClient::notifyCallback(int, int, int, int, int, android::String8 const&, android::String8 const&, android::sp<android::IGraphicBufferProducer> const&) */
int _ZThn8_N9VTService8VTClient14notifyCallbackEiiiiiRKN7android7String8ES4_RKNS1_2spINS1_22IGraphicBufferProducerEEE(void);

/* Symbol: Java_com_mediatek_ims_internal_ImsVTProvider_nResponseLocalConfig */
/* Demangled: Java_com_mediatek_ims_internal_ImsVTProvider_nResponseLocalConfig */
int Java_com_mediatek_ims_internal_ImsVTProvider_nResponseLocalConfig(void);

/* Symbol: _ZN7android11BnInterfaceIN9VTService9IVTClientEE10onAsBinderEv */
/* Demangled: android::BnInterface<VTService::IVTClient>::onAsBinder() */
int _ZN7android11BnInterfaceIN9VTService9IVTClientEE10onAsBinderEv(void);

/* Symbol: _ZTCN9VTService10BnVTClientE16_N7android7IBinderE */
/* Demangled: construction vtable for android::IBinder-in-VTService::BnVTClient */
extern void* _ZTCN9VTService10BnVTClientE16_N7android7IBinderE;

/* Symbol: _ZTCN9VTService11BpVTServiceE0_NS_10IVTServiceE */
/* Demangled: construction vtable for VTService::IVTService-in-VTService::BpVTService */
extern void* _ZTCN9VTService11BpVTServiceE0_NS_10IVTServiceE;

/* Symbol: _ZN9VTService8VTClient13DeathNotifier10binderDiedERKN7android2wpINS2_7IBinderEEE */
/* Demangled: VTService::VTClient::DeathNotifier::binderDied(android::wp<android::IBinder> const&) */
int _ZN9VTService8VTClient13DeathNotifier10binderDiedERKN7android2wpINS2_7IBinderEEE(void);

/* Symbol: _ZThn40_N9VTService8VTClient10binderDiedERKN7android2wpINS1_7IBinderEEE */
/* Demangled: non-virtual thunk to VTService::VTClient::binderDied(android::wp<android::IBinder> const&) */
int _ZThn40_N9VTService8VTClient10binderDiedERKN7android2wpINS1_7IBinderEEE(void);

/* Symbol: _ZThn48_N9VTService8VTClient20setDeviceOrientationEii */
/* Demangled: non-virtual thunk to VTService::VTClient::setDeviceOrientation(int, int) */
int _ZThn48_N9VTService8VTClient20setDeviceOrientationEii(void);

/* Symbol: _ZThn48_N9VTService8VTClient14startRecordingEiNS_18VT_SRV_RECORD_TYPEEN7android7String8Ei */
/* Demangled: non-virtual thunk to VTService::VTClient::startRecording(int, VTService::VT_SRV_RECORD_TYPE, android::String8, int) */
int _ZThn48_N9VTService8VTClient14startRecordingEiNS_18VT_SRV_RECORD_TYPEEN7android7String8Ei(void);

/* Symbol: g_ImsProvider */
/* Demangled: g_ImsProvider */
extern void* g_ImsProvider;

/* Symbol: JNI_OnLoad */
/* Demangled: JNI_OnLoad */
int JNI_OnLoad(void);

/* Symbol: _ZTCN9VTService11BpVTServiceE0_N7android11BpInterfaceINS_10IVTServiceEEE */
/* Demangled: construction vtable for android::BpInterface<VTService::IVTService>-in-VTService::BpVTService */
extern void* _ZTCN9VTService11BpVTServiceE0_N7android11BpInterfaceINS_10IVTServiceEEE;

/* Symbol: _ZTCN9VTService11BpVTServiceE0_N7android10IInterfaceE */
/* Demangled: construction vtable for android::IInterface-in-VTService::BpVTService */
extern void* _ZTCN9VTService11BpVTServiceE0_N7android10IInterfaceE;

/* Symbol: _ZN9VTService8VTClient12getVTServiceEv */
/* Demangled: VTService::VTClient::getVTService() */
int _ZN9VTService8VTClient12getVTServiceEv(void);

/* Symbol: Java_com_mediatek_ims_internal_ImsVTProvider_nSnapshot */
/* Demangled: Java_com_mediatek_ims_internal_ImsVTProvider_nSnapshot */
int Java_com_mediatek_ims_internal_ImsVTProvider_nSnapshot(void);

/* Symbol: _ZN9VTService9IVTClient11asInterfaceERKN7android2spINS1_7IBinderEEE */
/* Demangled: VTService::IVTClient::asInterface(android::sp<android::IBinder> const&) */
int _ZN9VTService9IVTClient11asInterfaceERKN7android2spINS1_7IBinderEEE(void);

/* Symbol: _ZN9VTService9IVTClient14getDefaultImplEv */
/* Demangled: VTService::IVTClient::getDefaultImpl() */
int _ZN9VTService9IVTClient14getDefaultImplEv(void);

/* Symbol: _ZN9VTService10IVTService14setDefaultImplEN7android2spIS0_EE */
/* Demangled: VTService::IVTService::setDefaultImpl(android::sp<VTService::IVTService>) */
int _ZN9VTService10IVTService14setDefaultImplEN7android2spIS0_EE(void);

/* Symbol: _ZN9VTService8VTClient19setCameraParametersEiiPN7android17sensor_info_vilteE */
/* Demangled: VTService::VTClient::setCameraParameters(int, int, android::sensor_info_vilte*) */
int _ZN9VTService8VTClient19setCameraParametersEiiPN7android17sensor_info_vilteE(void);

/* Symbol: _ZThn48_N9VTService8VTClient19setCameraParametersEiiPN7android17sensor_info_vilteE */
/* Demangled: non-virtual thunk to VTService::VTClient::setCameraParameters(int, int, android::sensor_info_vilte*) */
int _ZThn48_N9VTService8VTClient19setCameraParametersEiiPN7android17sensor_info_vilteE(void);

/* Symbol: _ZN4aidl6vendor8mediatek8hardware14videotelephony15IVideoTelephony4hashE */
/* Demangled: aidl::vendor::mediatek::hardware::videotelephony::IVideoTelephony::hash */
extern void* _ZN4aidl6vendor8mediatek8hardware14videotelephony15IVideoTelephony4hashE;

/* Symbol: _ZTCN9VTService11BnVTServiceE16_N7android7IBinderE */
/* Demangled: construction vtable for android::IBinder-in-VTService::BnVTService */
extern void* _ZTCN9VTService11BnVTServiceE16_N7android7IBinderE;

/* Symbol: _ZThn48_N9VTService8VTClient26setCameraParametersWithSimEiiiPN7android17sensor_info_vilteE */
/* Demangled: non-virtual thunk to VTService::VTClient::setCameraParametersWithSim(int, int, int, android::sensor_info_vilte*) */
int _ZThn48_N9VTService8VTClient26setCameraParametersWithSimEiiiPN7android17sensor_info_vilteE(void);

/* Symbol: Java_com_mediatek_ims_internal_ImsVTProvider_nSetUIMode */
/* Demangled: Java_com_mediatek_ims_internal_ImsVTProvider_nSetUIMode */
int Java_com_mediatek_ims_internal_ImsVTProvider_nSetUIMode(void);

/* Symbol: _ZTCN9VTService10IVTServiceE0_N7android10IInterfaceE */
/* Demangled: construction vtable for android::IInterface-in-VTService::IVTService */
extern void* _ZTCN9VTService10IVTServiceE0_N7android10IInterfaceE;

/* Symbol: _ZTTN9VTService11BnVTServiceE */
/* Demangled: VTT for VTService::BnVTService */
extern void* _ZTTN9VTService11BnVTServiceE;

/* Symbol: _ZN9VTService8VTClient10mVTServiceE */
/* Demangled: VTService::VTClient::mVTService */
extern void* _ZN9VTService8VTClient10mVTServiceE;

/* Symbol: _ZTv0_n24_N9VTService9IVTClientD1Ev */
/* Demangled: virtual thunk to VTService::IVTClient::~IVTClient() */
int _ZTv0_n24_N9VTService9IVTClientD1Ev(void);

/* Symbol: _ZTCN9VTService10BpVTClientE16_N7android9BpRefBaseE */
/* Demangled: construction vtable for android::BpRefBase-in-VTService::BpVTClient */
extern void* _ZTCN9VTService10BpVTClientE16_N7android9BpRefBaseE;

/* Symbol: _ZTTN9VTService10IVTServiceE */
/* Demangled: VTT for VTService::IVTService */
extern void* _ZTTN9VTService10IVTServiceE;

/* Symbol: _ZN9VTService10IVTService11asInterfaceERKN7android2spINS1_7IBinderEEE */
/* Demangled: VTService::IVTService::asInterface(android::sp<android::IBinder> const&) */
int _ZN9VTService10IVTService11asInterfaceERKN7android2spINS1_7IBinderEEE(void);

/* Symbol: Java_com_mediatek_ims_internal_ImsVTProvider_nSetCamera */
/* Demangled: Java_com_mediatek_ims_internal_ImsVTProvider_nSetCamera */
int Java_com_mediatek_ims_internal_ImsVTProvider_nSetCamera(void);

/* Symbol: Java_com_mediatek_ims_internal_ImsVTProvider_nTriggerGetOperatorId */
/* Demangled: Java_com_mediatek_ims_internal_ImsVTProvider_nTriggerGetOperatorId */
int Java_com_mediatek_ims_internal_ImsVTProvider_nTriggerGetOperatorId(void);

/* Symbol: _ZTTN9VTService11BpVTServiceE */
/* Demangled: VTT for VTService::BpVTService */
extern void* _ZTTN9VTService11BpVTServiceE;

/* Symbol: _ZN9VTService10IVTService12default_implE */
/* Demangled: VTService::IVTService::default_impl */
extern void* _ZN9VTService10IVTService12default_implE;

/* Symbol: _ZTVN9VTService10IVTServiceE */
/* Demangled: vtable for VTService::IVTService */
extern void* _ZTVN9VTService10IVTServiceE;

/* Symbol: _ZTCN9VTService8VTClientE0_NS_9IVTClientE */
/* Demangled: construction vtable for VTService::IVTClient-in-VTService::VTClient */
extern void* _ZTCN9VTService8VTClientE0_NS_9IVTClientE;

/* Symbol: _ZTCN9VTService10BpVTClientE0_NS_9IVTClientE */
/* Demangled: construction vtable for VTService::IVTClient-in-VTService::BpVTClient */
extern void* _ZTCN9VTService10BpVTClientE0_NS_9IVTClientE;

/* Symbol: _ZTTN9VTService9IVTClientE */
/* Demangled: VTT for VTService::IVTClient */
extern void* _ZTTN9VTService9IVTClientE;

/* Symbol: _ZN9VTService10IVTServiceC2Ev */
/* Demangled: VTService::IVTService::IVTService() */
int _ZN9VTService10IVTServiceC2Ev(void);

/* Symbol: _ZN9VTService8VTClient8snapshotEiNS_20VT_SRV_SNAPSHOT_TYPEEN7android7String8E */
/* Demangled: VTService::VTClient::snapshot(int, VTService::VT_SRV_SNAPSHOT_TYPE, android::String8) */
int _ZN9VTService8VTClient8snapshotEiNS_20VT_SRV_SNAPSHOT_TYPEEN7android7String8E(void);

/* Symbol: _Z13native_deinitP7_JNIEnvi */
/* Demangled: native_deinit(_JNIEnv*, int) */
int _Z13native_deinitP7_JNIEnvi(void);

/* Symbol: _ZN9VTService9IVTClient12default_implE */
/* Demangled: VTService::IVTClient::default_impl */
extern void* _ZN9VTService9IVTClient12default_implE;

/* Symbol: _ZN9VTService8VTClient17setDisplaySurfaceEiRKN7android2spINS1_7SurfaceEEE */
/* Demangled: VTService::VTClient::setDisplaySurface(int, android::sp<android::Surface> const&) */
int _ZN9VTService8VTClient17setDisplaySurfaceEiRKN7android2spINS1_7SurfaceEEE(void);

/* Symbol: _ZTCN9VTService8VTClientE0_NS_10BnVTClientE */
/* Demangled: construction vtable for VTService::BnVTClient-in-VTService::VTClient */
extern void* _ZTCN9VTService8VTClientE0_NS_10BnVTClientE;

/* Symbol: _ZTCN9VTService8VTClient13DeathNotifierE0_N7android7IBinder14DeathRecipientE */
/* Demangled: construction vtable for android::IBinder::DeathRecipient-in-VTService::VTClient::DeathNotifier */
extern void* _ZTCN9VTService8VTClient13DeathNotifierE0_N7android7IBinder14DeathRecipientE;

/* Symbol: _ZTCN9VTService11BnVTServiceE0_N7android10IInterfaceE */
/* Demangled: construction vtable for android::IInterface-in-VTService::BnVTService */
extern void* _ZTCN9VTService11BnVTServiceE0_N7android10IInterfaceE;

/* Symbol: _ZN9VTService8VTClient14mDeathNotifierE */
/* Demangled: VTService::VTClient::mDeathNotifier */
extern void* _ZN9VTService8VTClient14mDeathNotifierE;

/* Symbol: _ZN9VTService8VTClient9setCameraEii */
/* Demangled: VTService::VTClient::setCamera(int, int) */
int _ZN9VTService8VTClient9setCameraEii(void);

/* Symbol: _ZN9VTService8VTClient16tagSocketWithUidEi */
/* Demangled: VTService::VTClient::tagSocketWithUid(int) */
int _ZN9VTService8VTClient16tagSocketWithUidEi(void);

/* Symbol: _ZThn8_N9VTService9IVTClientD1Ev */
/* Demangled: non-virtual thunk to VTService::IVTClient::~IVTClient() */
int _ZThn8_N9VTService9IVTClientD1Ev(void);

/* Symbol: _ZN7android2spIN9VTService10IVTServiceEED2Ev */
/* Demangled: android::sp<VTService::IVTService>::~sp() */
int _ZN7android2spIN9VTService10IVTServiceEED2Ev(void);

/* Symbol: _ZN9VTService10IVTServiceD0Ev */
/* Demangled: VTService::IVTService::~IVTService() */
int _ZN9VTService10IVTServiceD0Ev(void);

/* Symbol: _ZTCN9VTService11BpVTServiceE16_N7android9BpRefBaseE */
/* Demangled: construction vtable for android::BpRefBase-in-VTService::BpVTService */
extern void* _ZTCN9VTService11BpVTServiceE16_N7android9BpRefBaseE;

/* Symbol: _ZThn48_N9VTService8VTClient14setSignalLevelEii */
/* Demangled: non-virtual thunk to VTService::VTClient::setSignalLevel(int, int) */
int _ZThn48_N9VTService8VTClient14setSignalLevelEii(void);

/* Symbol: _ZN9VTService8VTClient14notifyCallbackEiiiiiRKN7android7String8ES4_RKNS1_2spINS1_22IGraphicBufferProducerEEE */
/* Demangled: VTService::VTClient::notifyCallback(int, int, int, int, int, android::String8 const&, android::String8 const&, android::sp<android::IGraphicBufferProducer> const&) */
int _ZN9VTService8VTClient14notifyCallbackEiiiiiRKN7android7String8ES4_RKNS1_2spINS1_22IGraphicBufferProducerEEE(void);

/* Symbol: _ZTCN9VTService8VTClientE0_N7android11BnInterfaceINS_9IVTClientEEE */
/* Demangled: construction vtable for android::BnInterface<VTService::IVTClient>-in-VTService::VTClient */
extern void* _ZTCN9VTService8VTClientE0_N7android11BnInterfaceINS_9IVTClientEEE;

/* Symbol: _ZTCN9VTService8VTClientE48_NS_12IVTInterfaceE */
/* Demangled: construction vtable for VTService::IVTInterface-in-VTService::VTClient */
extern void* _ZTCN9VTService8VTClientE48_NS_12IVTInterfaceE;

/* Symbol: _Z11getVTClientv */
/* Demangled: getVTClient() */
int _Z11getVTClientv(void);

/* Symbol: Java_com_mediatek_ims_internal_ImsVTProvider_nSetSignalLevel */
/* Demangled: Java_com_mediatek_ims_internal_ImsVTProvider_nSetSignalLevel */
int Java_com_mediatek_ims_internal_ImsVTProvider_nSetSignalLevel(void);

/* Symbol: _ZTTN9VTService10BpVTClientE */
/* Demangled: VTT for VTService::BpVTClient */
extern void* _ZTTN9VTService10BpVTClientE;

/* Symbol: _ZN9VTService9IVTClientD2Ev */
/* Demangled: VTService::IVTClient::~IVTClient() */
int _ZN9VTService9IVTClientD2Ev(void);

/* Symbol: _ZThn48_N9VTService8VTClient12finalizationEi */
/* Demangled: non-virtual thunk to VTService::VTClient::finalization(int) */
int _ZThn48_N9VTService8VTClient12finalizationEi(void);

/* Symbol: _ZTCN9VTService8VTClientE16_N7android7IBinderE */
/* Demangled: construction vtable for android::IBinder-in-VTService::VTClient */
extern void* _ZTCN9VTService8VTClientE16_N7android7IBinderE;

/* Symbol: _ZTv0_n24_N9VTService10IVTServiceD0Ev */
/* Demangled: virtual thunk to VTService::IVTService::~IVTService() */
int _ZTv0_n24_N9VTService10IVTServiceD0Ev(void);

/* Symbol: _Z11native_initP7_JNIEnvi */
/* Demangled: native_init(_JNIEnv*, int) */
int _Z11native_initP7_JNIEnvi(void);

/* Symbol: Java_com_mediatek_ims_internal_ImsVTProvider_nRequestPeerConfig */
/* Demangled: Java_com_mediatek_ims_internal_ImsVTProvider_nRequestPeerConfig */
int Java_com_mediatek_ims_internal_ImsVTProvider_nRequestPeerConfig(void);

/* Symbol: _ZTVN9VTService10BpVTClientE */
/* Demangled: vtable for VTService::BpVTClient */
extern void* _ZTVN9VTService10BpVTClientE;

/* Symbol: _ZThn48_N9VTService8VTClient21responseSessionModifyEiRKN7android7String8E */
/* Demangled: non-virtual thunk to VTService::VTClient::responseSessionModify(int, android::String8 const&) */
int _ZThn48_N9VTService8VTClient21responseSessionModifyEiRKN7android7String8E(void);

/* Symbol: _ZThn48_N9VTService8VTClient16tagSocketWithUidEi */
/* Demangled: non-virtual thunk to VTService::VTClient::tagSocketWithUid(int) */
int _ZThn48_N9VTService8VTClient16tagSocketWithUidEi(void);

/* Symbol: _ZN9VTService8VTClient14setSignalLevelEii */
/* Demangled: VTService::VTClient::setSignalLevel(int, int) */
int _ZN9VTService8VTClient14setSignalLevelEii(void);

/* Symbol: g_vm */
/* Demangled: g_vm */
extern void* g_vm;

/* Symbol: _ZThn16_N9VTService10BnVTClient10onTransactEjRKN7android6ParcelEPS2_j */
/* Demangled: non-virtual thunk to VTService::BnVTClient::onTransact(unsigned int, android::Parcel const&, android::Parcel*, unsigned int) */
int _ZThn16_N9VTService10BnVTClient10onTransactEjRKN7android6ParcelEPS2_j(void);

/* Symbol: _ZTCN9VTService10BnVTClientE0_N7android10IInterfaceE */
/* Demangled: construction vtable for android::IInterface-in-VTService::BnVTClient */
extern void* _ZTCN9VTService10BnVTClientE0_N7android10IInterfaceE;

/* Symbol: _ZN9VTService8VTClient21responseSessionModifyEiRKN7android7String8E */
/* Demangled: VTService::VTClient::responseSessionModify(int, android::String8 const&) */
int _ZN9VTService8VTClient21responseSessionModifyEiRKN7android7String8E(void);

/* Symbol: _ZGVN4aidl6vendor8mediatek8hardware14videotelephony15IVideoTelephony4hashE */
/* Demangled: guard variable for aidl::vendor::mediatek::hardware::videotelephony::IVideoTelephony::hash */
extern void* _ZGVN4aidl6vendor8mediatek8hardware14videotelephony15IVideoTelephony4hashE;

/* Symbol: _ZTCN9VTService9IVTClientE8_NS_17IVTNotifyCallbackE */
/* Demangled: construction vtable for VTService::IVTNotifyCallback-in-VTService::IVTClient */
extern void* _ZTCN9VTService9IVTClientE8_NS_17IVTNotifyCallbackE;

/* Symbol: _ZThn48_N9VTService8VTClient23setCameraParametersOnlyEiPN7android17sensor_info_vilteE */
/* Demangled: non-virtual thunk to VTService::VTClient::setCameraParametersOnly(int, android::sensor_info_vilte*) */
int _ZThn48_N9VTService8VTClient23setCameraParametersOnlyEiPN7android17sensor_info_vilteE(void);

/* Symbol: _ZThn48_N9VTService8VTClient14initializationEii */
/* Demangled: non-virtual thunk to VTService::VTClient::initialization(int, int) */
int _ZThn48_N9VTService8VTClient14initializationEii(void);

/* Symbol: _ZN9VTService8VTClient20setDeviceOrientationEii */
/* Demangled: VTService::VTClient::setDeviceOrientation(int, int) */
int _ZN9VTService8VTClient20setDeviceOrientationEii(void);

/* Symbol: Java_com_mediatek_ims_internal_ImsVTProvider_nSetCameraParameters */
/* Demangled: Java_com_mediatek_ims_internal_ImsVTProvider_nSetCameraParameters */
int Java_com_mediatek_ims_internal_ImsVTProvider_nSetCameraParameters(void);

/* Symbol: Java_com_mediatek_ims_internal_ImsVTProvider_nSetCameraParametersOnly */
/* Demangled: Java_com_mediatek_ims_internal_ImsVTProvider_nSetCameraParametersOnly */
int Java_com_mediatek_ims_internal_ImsVTProvider_nSetCameraParametersOnly(void);

/* Symbol: _ZTVN9VTService11BnVTServiceE */
/* Demangled: vtable for VTService::BnVTService */
extern void* _ZTVN9VTService11BnVTServiceE;

/* Symbol: _ZN9VTService8VTClient10binderDiedERKN7android2wpINS1_7IBinderEEE */
/* Demangled: VTService::VTClient::binderDied(android::wp<android::IBinder> const&) */
int _ZN9VTService8VTClient10binderDiedERKN7android2wpINS1_7IBinderEEE(void);

/* Symbol: _ZN9VTService8VTClient14startRecordingEiNS_18VT_SRV_RECORD_TYPEEN7android7String8Ei */
/* Demangled: VTService::VTClient::startRecording(int, VTService::VT_SRV_RECORD_TYPE, android::String8, int) */
int _ZN9VTService8VTClient14startRecordingEiNS_18VT_SRV_RECORD_TYPEEN7android7String8Ei(void);

/* Symbol: _ZN7android2spIN9VTService8VTClientEED2Ev */
/* Demangled: android::sp<VTService::VTClient>::~sp() */
int _ZN7android2spIN9VTService8VTClientEED2Ev(void);

/* Symbol: _ZTCN9VTService9IVTClientE0_N7android10IInterfaceE */
/* Demangled: construction vtable for android::IInterface-in-VTService::IVTClient */
extern void* _ZTCN9VTService9IVTClientE0_N7android10IInterfaceE;

/* Symbol: _ZN9VTService8VTClient14initializationEii */
/* Demangled: VTService::VTClient::initialization(int, int) */
int _ZN9VTService8VTClient14initializationEii(void);

/* Symbol: g_VTSourceSensorInfo */
/* Demangled: g_VTSourceSensorInfo */
extern void* g_VTSourceSensorInfo;

/* Symbol: Java_com_mediatek_ims_internal_ImsVTProvider_nInitRefVTP */
/* Demangled: Java_com_mediatek_ims_internal_ImsVTProvider_nInitRefVTP */
int Java_com_mediatek_ims_internal_ImsVTProvider_nInitRefVTP(void);

/* Symbol: Java_com_mediatek_ims_internal_ImsVTProvider_nSetDeviceOrientation */
/* Demangled: Java_com_mediatek_ims_internal_ImsVTProvider_nSetDeviceOrientation */
int Java_com_mediatek_ims_internal_ImsVTProvider_nSetDeviceOrientation(void);

/* Symbol: Java_com_mediatek_ims_internal_ImsVTProvider_nSwitchFeature */
/* Demangled: Java_com_mediatek_ims_internal_ImsVTProvider_nSwitchFeature */
int Java_com_mediatek_ims_internal_ImsVTProvider_nSwitchFeature(void);

/* Symbol: _ZN7android2spIN9VTService9IVTClientEED2Ev */
/* Demangled: android::sp<VTService::IVTClient>::~sp() */
int _ZN7android2spIN9VTService9IVTClientEED2Ev(void);

/* Symbol: _ZThn48_N9VTService8VTClient20requestSessionModifyEiRKN7android7String8E */
/* Demangled: non-virtual thunk to VTService::VTClient::requestSessionModify(int, android::String8 const&) */
int _ZThn48_N9VTService8VTClient20requestSessionModifyEiRKN7android7String8E(void);

/* Symbol: Java_com_mediatek_ims_internal_ImsVTProvider_nSetDisplaySurface */
/* Demangled: Java_com_mediatek_ims_internal_ImsVTProvider_nSetDisplaySurface */
int Java_com_mediatek_ims_internal_ImsVTProvider_nSetDisplaySurface(void);

/* Symbol: _ZTVN9VTService9IVTClientE */
/* Demangled: vtable for VTService::IVTClient */
extern void* _ZTVN9VTService9IVTClientE;

/* Symbol: _ZN9VTService8VTClient12finalizationEi */
/* Demangled: VTService::VTClient::finalization(int) */
int _ZN9VTService8VTClient12finalizationEi(void);

/* Symbol: _ZN9VTService8VTClient17setPreviewSurfaceEiRKN7android2spINS1_7SurfaceEEE */
/* Demangled: VTService::VTClient::setPreviewSurface(int, android::sp<android::Surface> const&) */
int _ZN9VTService8VTClient17setPreviewSurfaceEiRKN7android2spINS1_7SurfaceEEE(void);

/* Symbol: Java_com_mediatek_ims_internal_ImsVTProvider_nInitialization */
/* Demangled: Java_com_mediatek_ims_internal_ImsVTProvider_nInitialization */
int Java_com_mediatek_ims_internal_ImsVTProvider_nInitialization(void);

/* Symbol: Java_com_mediatek_ims_internal_ImsVTProvider_nFinalization */
/* Demangled: Java_com_mediatek_ims_internal_ImsVTProvider_nFinalization */
int Java_com_mediatek_ims_internal_ImsVTProvider_nFinalization(void);

/* Symbol: _ZN9VTService9IVTClientC2Ev */
/* Demangled: VTService::IVTClient::IVTClient() */
int _ZN9VTService9IVTClientC2Ev(void);

/* Symbol: _ZTCN9VTService11BpVTServiceE8_NS_12IVTInterfaceE */
/* Demangled: construction vtable for VTService::IVTInterface-in-VTService::BpVTService */
extern void* _ZTCN9VTService11BpVTServiceE8_NS_12IVTInterfaceE;

/* Symbol: _ZN9VTService8VTClient9setUIModeEiNS_14VT_SRV_UI_MODEE */
/* Demangled: VTService::VTClient::setUIMode(int, VTService::VT_SRV_UI_MODE) */
int _ZN9VTService8VTClient9setUIModeEiNS_14VT_SRV_UI_MODEE(void);

/* Symbol: _ZThn48_N9VTService8VTClient13switchFeatureEiii */
/* Demangled: non-virtual thunk to VTService::VTClient::switchFeature(int, int, int) */
int _ZThn48_N9VTService8VTClient13switchFeatureEiii(void);

/* Symbol: Java_com_mediatek_ims_internal_ImsVTProvider_nSetCameraParametersWithSim */
/* Demangled: Java_com_mediatek_ims_internal_ImsVTProvider_nSetCameraParametersWithSim */
int Java_com_mediatek_ims_internal_ImsVTProvider_nSetCameraParametersWithSim(void);

/* Symbol: Java_com_mediatek_ims_internal_ImsVTProvider_nStopRecording */
/* Demangled: Java_com_mediatek_ims_internal_ImsVTProvider_nStopRecording */
int Java_com_mediatek_ims_internal_ImsVTProvider_nStopRecording(void);

/* Symbol: _ZTCN9VTService10BpVTClientE8_NS_17IVTNotifyCallbackE */
/* Demangled: construction vtable for VTService::IVTNotifyCallback-in-VTService::BpVTClient */
extern void* _ZTCN9VTService10BpVTClientE8_NS_17IVTNotifyCallbackE;

/* Symbol: _ZNK9VTService10IVTService22getInterfaceDescriptorEv */
/* Demangled: VTService::IVTService::getInterfaceDescriptor() const */
int _ZNK9VTService10IVTService22getInterfaceDescriptorEv(void);

/* Symbol: _ZThn8_N9VTService10IVTServiceD0Ev */
/* Demangled: non-virtual thunk to VTService::IVTService::~IVTService() */
int _ZThn8_N9VTService10IVTServiceD0Ev(void);

/* Symbol: _ZN9VTService10IVTService10descriptorE */
/* Demangled: VTService::IVTService::descriptor */
extern void* _ZN9VTService10IVTService10descriptorE;

/* Symbol: _ZN9VTService10IVTServiceD1Ev */
/* Demangled: VTService::IVTService::~IVTService() */
int _ZN9VTService10IVTServiceD1Ev(void);

/* Symbol: _ZN9VTService11BnVTService10onTransactEjRKN7android6ParcelEPS2_j */
/* Demangled: VTService::BnVTService::onTransact(unsigned int, android::Parcel const&, android::Parcel*, unsigned int) */
int _ZN9VTService11BnVTService10onTransactEjRKN7android6ParcelEPS2_j(void);

/* Symbol: _ZTVN9VTService8VTClientE */
/* Demangled: vtable for VTService::VTClient */
extern void* _ZTVN9VTService8VTClientE;

/* Symbol: _ZThn48_N9VTService8VTClient17setDisplaySurfaceEiRKN7android2spINS1_7SurfaceEEE */
/* Demangled: non-virtual thunk to VTService::VTClient::setDisplaySurface(int, android::sp<android::Surface> const&) */
int _ZThn48_N9VTService8VTClient17setDisplaySurfaceEiRKN7android2spINS1_7SurfaceEEE(void);

/* Symbol: Java_com_mediatek_ims_internal_ImsVTProvider_nUpdateNetworkTable */
/* Demangled: Java_com_mediatek_ims_internal_ImsVTProvider_nUpdateNetworkTable */
int Java_com_mediatek_ims_internal_ImsVTProvider_nUpdateNetworkTable(void);

/* Symbol: _ZTVN9VTService8VTClient13DeathNotifierE */
/* Demangled: vtable for VTService::VTClient::DeathNotifier */
extern void* _ZTVN9VTService8VTClient13DeathNotifierE;

/* Symbol: _ZThn48_N9VTService8VTClient13stopRecordingEi */
/* Demangled: non-virtual thunk to VTService::VTClient::stopRecording(int) */
int _ZThn48_N9VTService8VTClient13stopRecordingEi(void);

/* Symbol: _ZN9VTService8VTClient13switchFeatureEiii */
/* Demangled: VTService::VTClient::switchFeature(int, int, int) */
int _ZN9VTService8VTClient13switchFeatureEiii(void);

/* Symbol: _ZN9VTService9IVTClientD0Ev */
/* Demangled: VTService::IVTClient::~IVTClient() */
int _ZN9VTService9IVTClientD0Ev(void);

/* Symbol: _ZTCN9VTService10BnVTClientE16_N7android7BBinderE */
/* Demangled: construction vtable for android::BBinder-in-VTService::BnVTClient */
extern void* _ZTCN9VTService10BnVTClientE16_N7android7BBinderE;

/* Symbol: _ZN9VTService10IVTService14getDefaultImplEv */
/* Demangled: VTService::IVTService::getDefaultImpl() */
int _ZN9VTService10IVTService14getDefaultImplEv(void);

/* Symbol: _ZTv0_n24_N9VTService10IVTServiceD1Ev */
/* Demangled: virtual thunk to VTService::IVTService::~IVTService() */
int _ZTv0_n24_N9VTService10IVTServiceD1Ev(void);

/* Symbol: _ZTCN9VTService11BnVTServiceE8_NS_12IVTInterfaceE */
/* Demangled: construction vtable for VTService::IVTInterface-in-VTService::BnVTService */
extern void* _ZTCN9VTService11BnVTServiceE8_NS_12IVTInterfaceE;

/* Symbol: _ZTCN9VTService10BpVTClientE0_N7android10IInterfaceE */
/* Demangled: construction vtable for android::IInterface-in-VTService::BpVTClient */
extern void* _ZTCN9VTService10BpVTClientE0_N7android10IInterfaceE;

/* Symbol: _ZThn16_N9VTService11BnVTService10onTransactEjRKN7android6ParcelEPS2_j */
/* Demangled: non-virtual thunk to VTService::BnVTService::onTransact(unsigned int, android::Parcel const&, android::Parcel*, unsigned int) */
int _ZThn16_N9VTService11BnVTService10onTransactEjRKN7android6ParcelEPS2_j(void);

/* Symbol: _ZN9VTService8VTClient26setCameraParametersWithSimEiiiPN7android17sensor_info_vilteE */
/* Demangled: VTService::VTClient::setCameraParametersWithSim(int, int, int, android::sensor_info_vilte*) */
int _ZN9VTService8VTClient26setCameraParametersWithSimEiiiPN7android17sensor_info_vilteE(void);

/* Symbol: _ZN9VTService8VTClient23setCameraParametersOnlyEiPN7android17sensor_info_vilteE */
/* Demangled: VTService::VTClient::setCameraParametersOnly(int, android::sensor_info_vilte*) */
int _ZN9VTService8VTClient23setCameraParametersOnlyEiPN7android17sensor_info_vilteE(void);

/* Symbol: _ZN9VTService8VTClient13stopRecordingEi */
/* Demangled: VTService::VTClient::stopRecording(int) */
int _ZN9VTService8VTClient13stopRecordingEi(void);

/* Symbol: _ZTCN9VTService8VTClientE8_NS_17IVTNotifyCallbackE */
/* Demangled: construction vtable for VTService::IVTNotifyCallback-in-VTService::VTClient */
extern void* _ZTCN9VTService8VTClientE8_NS_17IVTNotifyCallbackE;

__END_DECLS

#endif /* BEGONIA_RE_LIBMTK_VT_WRAPPER_H */
