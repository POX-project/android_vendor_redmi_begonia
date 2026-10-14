/*
 * Reverse-Engineered Source for: libmtk_vt_wrapper.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libmtk_vt_wrapper"

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
#include "libmtk_vt_wrapper.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: construction vtable for android::BnInterface<VTService::IVTClient>-in-VTService::BnVTClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService10BnVTClientE0_N7android11BnInterfaceINS_9IVTClientEEE = NULL;

/* Exported Object: construction vtable for android::BBinder-in-VTService::BnVTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService11BnVTServiceE16_N7android7BBinderE = NULL;

/* Exported Object: VTService::VTClient::mLock */
extern "C" __attribute__((visibility("default"))) void* _ZN9VTService8VTClient5mLockE = NULL;

/* Exported Object: VTT for VTService::VTClient::DeathNotifier */
extern "C" __attribute__((visibility("default"))) void* _ZTTN9VTService8VTClient13DeathNotifierE = NULL;

/* Demangled: VTService::VTClient::getVTClient() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService8VTClient11getVTClientEv(void) {
    ALOGD("_ZN9VTService8VTClient11getVTClientEv() called");
    return 0;
}

/* Demangled: VTService::IVTClient::setDefaultImpl(android::sp<VTService::IVTClient>) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9IVTClient14setDefaultImplEN7android2spIS0_EE(void) {
    ALOGD("_ZN9VTService9IVTClient14setDefaultImplEN7android2spIS0_EE() called");
    return 0;
}

/* Demangled: virtual thunk to VTService::IVTClient::~IVTClient() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N9VTService9IVTClientD0Ev(void) {
    ALOGD("_ZTv0_n24_N9VTService9IVTClientD0Ev() called");
    return 0;
}

/* Demangled: android::BnInterface<VTService::IVTService>::onAsBinder() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11BnInterfaceIN9VTService10IVTServiceEE10onAsBinderEv(void) {
    ALOGD("_ZN7android11BnInterfaceIN9VTService10IVTServiceEE10onAsBinderEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::BnInterface<VTService::IVTService>-in-VTService::BnVTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService11BnVTServiceE0_N7android11BnInterfaceINS_10IVTServiceEEE = NULL;

/* Exported Object: VTT for VTService::VTClient */
extern "C" __attribute__((visibility("default"))) void* _ZTTN9VTService8VTClientE = NULL;

/* Exported Object: construction vtable for android::IInterface-in-VTService::VTClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService8VTClientE0_N7android10IInterfaceE = NULL;

/* Demangled: Java_com_mediatek_ims_internal_ImsVTProvider_nTagSocketWithUid */
extern "C" __attribute__((visibility("default"))) int Java_com_mediatek_ims_internal_ImsVTProvider_nTagSocketWithUid(void) {
    ALOGD("Java_com_mediatek_ims_internal_ImsVTProvider_nTagSocketWithUid() called");
    return 0;
}

/* Exported Object: construction vtable for VTService::IVTNotifyCallback-in-VTService::BnVTClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService10BnVTClientE8_NS_17IVTNotifyCallbackE = NULL;

/* Demangled: non-virtual thunk to VTService::VTClient::setCamera(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZThn48_N9VTService8VTClient9setCameraEii(void) {
    ALOGD("_ZThn48_N9VTService8VTClient9setCameraEii() called");
    return 0;
}

/* Demangled: non-virtual thunk to VTService::VTClient::snapshot(int, VTService::VT_SRV_SNAPSHOT_TYPE, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZThn48_N9VTService8VTClient8snapshotEiNS_20VT_SRV_SNAPSHOT_TYPEEN7android7String8E(void) {
    ALOGD("_ZThn48_N9VTService8VTClient8snapshotEiNS_20VT_SRV_SNAPSHOT_TYPEEN7android7String8E() called");
    return 0;
}

/* Demangled: non-virtual thunk to VTService::VTClient::updateNetworkTable(bool, int, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZThn48_N9VTService8VTClient18updateNetworkTableEbiN7android7String8E(void) {
    ALOGD("_ZThn48_N9VTService8VTClient18updateNetworkTableEbiN7android7String8E() called");
    return 0;
}

/* Demangled: Java_com_mediatek_ims_internal_ImsVTProvider_nSetPreviewSurface */
extern "C" __attribute__((visibility("default"))) int Java_com_mediatek_ims_internal_ImsVTProvider_nSetPreviewSurface(void) {
    ALOGD("Java_com_mediatek_ims_internal_ImsVTProvider_nSetPreviewSurface() called");
    return 0;
}

/* Demangled: Java_com_mediatek_ims_internal_ImsVTProvider_nStartRecording */
extern "C" __attribute__((visibility("default"))) int Java_com_mediatek_ims_internal_ImsVTProvider_nStartRecording(void) {
    ALOGD("Java_com_mediatek_ims_internal_ImsVTProvider_nStartRecording() called");
    return 0;
}

/* Exported Object: construction vtable for VTService::IVTClient-in-VTService::BnVTClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService10BnVTClientE0_NS_9IVTClientE = NULL;

/* Exported Object: construction vtable for VTService::IVTInterface-in-VTService::IVTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService10IVTServiceE8_NS_12IVTInterfaceE = NULL;

/* Exported Object: construction vtable for VTService::IVTService-in-VTService::BnVTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService11BnVTServiceE0_NS_10IVTServiceE = NULL;

/* Demangled: VTService::VTClient::releaseVTClient() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService8VTClient15releaseVTClientEv(void) {
    ALOGD("_ZN9VTService8VTClient15releaseVTClientEv() called");
    return 0;
}

/* Demangled: VTService::VTClient::updateNetworkTable(bool, int, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService8VTClient18updateNetworkTableEbiN7android7String8E(void) {
    ALOGD("_ZN9VTService8VTClient18updateNetworkTableEbiN7android7String8E() called");
    return 0;
}

/* Demangled: VTService::BnVTClient::onTransact(unsigned int, android::Parcel const&, android::Parcel*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService10BnVTClient10onTransactEjRKN7android6ParcelEPS2_j(void) {
    ALOGD("_ZN9VTService10BnVTClient10onTransactEjRKN7android6ParcelEPS2_j() called");
    return 0;
}

/* Exported Object: VTService::gVTClient */
extern "C" __attribute__((visibility("default"))) void* _ZN9VTService9gVTClientE = NULL;

/* Demangled: non-virtual thunk to VTService::VTClient::setUIMode(int, VTService::VT_SRV_UI_MODE) */
extern "C" __attribute__((visibility("default"))) int _ZThn48_N9VTService8VTClient9setUIModeEiNS_14VT_SRV_UI_MODEE(void) {
    ALOGD("_ZThn48_N9VTService8VTClient9setUIModeEiNS_14VT_SRV_UI_MODEE() called");
    return 0;
}

/* Exported Object: VTT for VTService::BnVTClient */
extern "C" __attribute__((visibility("default"))) void* _ZTTN9VTService10BnVTClientE = NULL;

/* Exported Object: vtable for VTService::BpVTService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9VTService11BpVTServiceE = NULL;

/* Demangled: android::sp<VTService::VTClient::DeathNotifier>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN9VTService8VTClient13DeathNotifierEED2Ev(void) {
    ALOGD("_ZN7android2spIN9VTService8VTClient13DeathNotifierEED2Ev() called");
    return 0;
}

/* Demangled: VTService::VTClient::triggerGetOperatorId() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService8VTClient20triggerGetOperatorIdEv(void) {
    ALOGD("_ZN9VTService8VTClient20triggerGetOperatorIdEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to VTService::IVTService::~IVTService() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N9VTService10IVTServiceD1Ev(void) {
    ALOGD("_ZThn8_N9VTService10IVTServiceD1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to VTService::VTClient::setPreviewSurface(int, android::sp<android::Surface> const&) */
extern "C" __attribute__((visibility("default"))) int _ZThn48_N9VTService8VTClient17setPreviewSurfaceEiRKN7android2spINS1_7SurfaceEEE(void) {
    ALOGD("_ZThn48_N9VTService8VTClient17setPreviewSurfaceEiRKN7android2spINS1_7SurfaceEEE() called");
    return 0;
}

/* Demangled: VTService::VTClient::requestSessionModify(int, android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService8VTClient20requestSessionModifyEiRKN7android7String8E(void) {
    ALOGD("_ZN9VTService8VTClient20requestSessionModifyEiRKN7android7String8E() called");
    return 0;
}

/* Exported Object: construction vtable for android::IBinder::DeathRecipient-in-VTService::VTClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService8VTClientE40_N7android7IBinder14DeathRecipientE = NULL;

/* Exported Object: vtable for VTService::BnVTClient */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9VTService10BnVTClientE = NULL;

/* Demangled: VTService::IVTService::~IVTService() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService10IVTServiceD2Ev(void) {
    ALOGD("_ZN9VTService10IVTServiceD2Ev() called");
    return 0;
}

/* Demangled: notify(int, int, int, int, int, char const*, char const*, android::sp<android::IGraphicBufferProducer> const&) */
extern "C" __attribute__((visibility("default"))) int _Z6notifyiiiiiPKcS0_RKN7android2spINS1_22IGraphicBufferProducerEEE(void) {
    ALOGD("_Z6notifyiiiiiPKcS0_RKN7android2spINS1_22IGraphicBufferProducerEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to VTService::IVTClient::~IVTClient() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N9VTService9IVTClientD0Ev(void) {
    ALOGD("_ZThn8_N9VTService9IVTClientD0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::BpInterface<VTService::IVTClient>-in-VTService::BpVTClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService10BpVTClientE0_N7android11BpInterfaceINS_9IVTClientEEE = NULL;

/* Demangled: non-virtual thunk to VTService::VTClient::triggerGetOperatorId() */
extern "C" __attribute__((visibility("default"))) int _ZThn48_N9VTService8VTClient20triggerGetOperatorIdEv(void) {
    ALOGD("_ZThn48_N9VTService8VTClient20triggerGetOperatorIdEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::BBinder-in-VTService::VTClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService8VTClientE16_N7android7BBinderE = NULL;

/* Demangled: VTService::IVTClient::getInterfaceDescriptor() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9VTService9IVTClient22getInterfaceDescriptorEv(void) {
    ALOGD("_ZNK9VTService9IVTClient22getInterfaceDescriptorEv() called");
    return 0;
}

/* Exported Object: VTService::IVTClient::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN9VTService9IVTClient10descriptorE = NULL;

/* Demangled: VTService::IVTClient::~IVTClient() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9IVTClientD1Ev(void) {
    ALOGD("_ZN9VTService9IVTClientD1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to VTService::VTClient::notifyCallback(int, int, int, int, int, android::String8 const&, android::String8 const&, android::sp<android::IGraphicBufferProducer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N9VTService8VTClient14notifyCallbackEiiiiiRKN7android7String8ES4_RKNS1_2spINS1_22IGraphicBufferProducerEEE(void) {
    ALOGD("_ZThn8_N9VTService8VTClient14notifyCallbackEiiiiiRKN7android7String8ES4_RKNS1_2spINS1_22IGraphicBufferProducerEEE() called");
    return 0;
}

/* Demangled: Java_com_mediatek_ims_internal_ImsVTProvider_nResponseLocalConfig */
extern "C" __attribute__((visibility("default"))) int Java_com_mediatek_ims_internal_ImsVTProvider_nResponseLocalConfig(void) {
    ALOGD("Java_com_mediatek_ims_internal_ImsVTProvider_nResponseLocalConfig() called");
    return 0;
}

/* Demangled: android::BnInterface<VTService::IVTClient>::onAsBinder() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11BnInterfaceIN9VTService9IVTClientEE10onAsBinderEv(void) {
    ALOGD("_ZN7android11BnInterfaceIN9VTService9IVTClientEE10onAsBinderEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::IBinder-in-VTService::BnVTClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService10BnVTClientE16_N7android7IBinderE = NULL;

/* Exported Object: construction vtable for VTService::IVTService-in-VTService::BpVTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService11BpVTServiceE0_NS_10IVTServiceE = NULL;

/* Demangled: VTService::VTClient::DeathNotifier::binderDied(android::wp<android::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService8VTClient13DeathNotifier10binderDiedERKN7android2wpINS2_7IBinderEEE(void) {
    ALOGD("_ZN9VTService8VTClient13DeathNotifier10binderDiedERKN7android2wpINS2_7IBinderEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to VTService::VTClient::binderDied(android::wp<android::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZThn40_N9VTService8VTClient10binderDiedERKN7android2wpINS1_7IBinderEEE(void) {
    ALOGD("_ZThn40_N9VTService8VTClient10binderDiedERKN7android2wpINS1_7IBinderEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to VTService::VTClient::setDeviceOrientation(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZThn48_N9VTService8VTClient20setDeviceOrientationEii(void) {
    ALOGD("_ZThn48_N9VTService8VTClient20setDeviceOrientationEii() called");
    return 0;
}

/* Demangled: non-virtual thunk to VTService::VTClient::startRecording(int, VTService::VT_SRV_RECORD_TYPE, android::String8, int) */
extern "C" __attribute__((visibility("default"))) int _ZThn48_N9VTService8VTClient14startRecordingEiNS_18VT_SRV_RECORD_TYPEEN7android7String8Ei(void) {
    ALOGD("_ZThn48_N9VTService8VTClient14startRecordingEiNS_18VT_SRV_RECORD_TYPEEN7android7String8Ei() called");
    return 0;
}

/* Exported Object: g_ImsProvider */
extern "C" __attribute__((visibility("default"))) void* g_ImsProvider = NULL;

/* Demangled: JNI_OnLoad */
extern "C" __attribute__((visibility("default"))) int JNI_OnLoad(void) {
    ALOGD("JNI_OnLoad() called");
    return 0;
}

/* Exported Object: construction vtable for android::BpInterface<VTService::IVTService>-in-VTService::BpVTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService11BpVTServiceE0_N7android11BpInterfaceINS_10IVTServiceEEE = NULL;

/* Exported Object: construction vtable for android::IInterface-in-VTService::BpVTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService11BpVTServiceE0_N7android10IInterfaceE = NULL;

/* Demangled: VTService::VTClient::getVTService() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService8VTClient12getVTServiceEv(void) {
    ALOGD("_ZN9VTService8VTClient12getVTServiceEv() called");
    return 0;
}

/* Demangled: Java_com_mediatek_ims_internal_ImsVTProvider_nSnapshot */
extern "C" __attribute__((visibility("default"))) int Java_com_mediatek_ims_internal_ImsVTProvider_nSnapshot(void) {
    ALOGD("Java_com_mediatek_ims_internal_ImsVTProvider_nSnapshot() called");
    return 0;
}

/* Demangled: VTService::IVTClient::asInterface(android::sp<android::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9IVTClient11asInterfaceERKN7android2spINS1_7IBinderEEE(void) {
    ALOGD("_ZN9VTService9IVTClient11asInterfaceERKN7android2spINS1_7IBinderEEE() called");
    return 0;
}

/* Demangled: VTService::IVTClient::getDefaultImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9IVTClient14getDefaultImplEv(void) {
    ALOGD("_ZN9VTService9IVTClient14getDefaultImplEv() called");
    return 0;
}

/* Demangled: VTService::IVTService::setDefaultImpl(android::sp<VTService::IVTService>) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService10IVTService14setDefaultImplEN7android2spIS0_EE(void) {
    ALOGD("_ZN9VTService10IVTService14setDefaultImplEN7android2spIS0_EE() called");
    return 0;
}

/* Demangled: VTService::VTClient::setCameraParameters(int, int, android::sensor_info_vilte*) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService8VTClient19setCameraParametersEiiPN7android17sensor_info_vilteE(void) {
    ALOGD("_ZN9VTService8VTClient19setCameraParametersEiiPN7android17sensor_info_vilteE() called");
    return 0;
}

/* Demangled: non-virtual thunk to VTService::VTClient::setCameraParameters(int, int, android::sensor_info_vilte*) */
extern "C" __attribute__((visibility("default"))) int _ZThn48_N9VTService8VTClient19setCameraParametersEiiPN7android17sensor_info_vilteE(void) {
    ALOGD("_ZThn48_N9VTService8VTClient19setCameraParametersEiiPN7android17sensor_info_vilteE() called");
    return 0;
}

/* Exported Object: aidl::vendor::mediatek::hardware::videotelephony::IVideoTelephony::hash */
extern "C" __attribute__((visibility("default"))) void* _ZN4aidl6vendor8mediatek8hardware14videotelephony15IVideoTelephony4hashE = NULL;

/* Exported Object: construction vtable for android::IBinder-in-VTService::BnVTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService11BnVTServiceE16_N7android7IBinderE = NULL;

/* Demangled: non-virtual thunk to VTService::VTClient::setCameraParametersWithSim(int, int, int, android::sensor_info_vilte*) */
extern "C" __attribute__((visibility("default"))) int _ZThn48_N9VTService8VTClient26setCameraParametersWithSimEiiiPN7android17sensor_info_vilteE(void) {
    ALOGD("_ZThn48_N9VTService8VTClient26setCameraParametersWithSimEiiiPN7android17sensor_info_vilteE() called");
    return 0;
}

/* Demangled: Java_com_mediatek_ims_internal_ImsVTProvider_nSetUIMode */
extern "C" __attribute__((visibility("default"))) int Java_com_mediatek_ims_internal_ImsVTProvider_nSetUIMode(void) {
    ALOGD("Java_com_mediatek_ims_internal_ImsVTProvider_nSetUIMode() called");
    return 0;
}

/* Exported Object: construction vtable for android::IInterface-in-VTService::IVTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService10IVTServiceE0_N7android10IInterfaceE = NULL;

/* Exported Object: VTT for VTService::BnVTService */
extern "C" __attribute__((visibility("default"))) void* _ZTTN9VTService11BnVTServiceE = NULL;

/* Exported Object: VTService::VTClient::mVTService */
extern "C" __attribute__((visibility("default"))) void* _ZN9VTService8VTClient10mVTServiceE = NULL;

/* Demangled: virtual thunk to VTService::IVTClient::~IVTClient() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N9VTService9IVTClientD1Ev(void) {
    ALOGD("_ZTv0_n24_N9VTService9IVTClientD1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::BpRefBase-in-VTService::BpVTClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService10BpVTClientE16_N7android9BpRefBaseE = NULL;

/* Exported Object: VTT for VTService::IVTService */
extern "C" __attribute__((visibility("default"))) void* _ZTTN9VTService10IVTServiceE = NULL;

/* Demangled: VTService::IVTService::asInterface(android::sp<android::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService10IVTService11asInterfaceERKN7android2spINS1_7IBinderEEE(void) {
    ALOGD("_ZN9VTService10IVTService11asInterfaceERKN7android2spINS1_7IBinderEEE() called");
    return 0;
}

/* Demangled: Java_com_mediatek_ims_internal_ImsVTProvider_nSetCamera */
extern "C" __attribute__((visibility("default"))) int Java_com_mediatek_ims_internal_ImsVTProvider_nSetCamera(void) {
    ALOGD("Java_com_mediatek_ims_internal_ImsVTProvider_nSetCamera() called");
    return 0;
}

/* Demangled: Java_com_mediatek_ims_internal_ImsVTProvider_nTriggerGetOperatorId */
extern "C" __attribute__((visibility("default"))) int Java_com_mediatek_ims_internal_ImsVTProvider_nTriggerGetOperatorId(void) {
    ALOGD("Java_com_mediatek_ims_internal_ImsVTProvider_nTriggerGetOperatorId() called");
    return 0;
}

/* Exported Object: VTT for VTService::BpVTService */
extern "C" __attribute__((visibility("default"))) void* _ZTTN9VTService11BpVTServiceE = NULL;

/* Exported Object: VTService::IVTService::default_impl */
extern "C" __attribute__((visibility("default"))) void* _ZN9VTService10IVTService12default_implE = NULL;

/* Exported Object: vtable for VTService::IVTService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9VTService10IVTServiceE = NULL;

/* Exported Object: construction vtable for VTService::IVTClient-in-VTService::VTClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService8VTClientE0_NS_9IVTClientE = NULL;

/* Exported Object: construction vtable for VTService::IVTClient-in-VTService::BpVTClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService10BpVTClientE0_NS_9IVTClientE = NULL;

/* Exported Object: VTT for VTService::IVTClient */
extern "C" __attribute__((visibility("default"))) void* _ZTTN9VTService9IVTClientE = NULL;

/* Demangled: VTService::IVTService::IVTService() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService10IVTServiceC2Ev(void) {
    ALOGD("_ZN9VTService10IVTServiceC2Ev() called");
    return 0;
}

/* Demangled: VTService::VTClient::snapshot(int, VTService::VT_SRV_SNAPSHOT_TYPE, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService8VTClient8snapshotEiNS_20VT_SRV_SNAPSHOT_TYPEEN7android7String8E(void) {
    ALOGD("_ZN9VTService8VTClient8snapshotEiNS_20VT_SRV_SNAPSHOT_TYPEEN7android7String8E() called");
    return 0;
}

/* Demangled: native_deinit(_JNIEnv*, int) */
extern "C" __attribute__((visibility("default"))) int _Z13native_deinitP7_JNIEnvi(void) {
    ALOGD("_Z13native_deinitP7_JNIEnvi() called");
    return 0;
}

/* Exported Object: VTService::IVTClient::default_impl */
extern "C" __attribute__((visibility("default"))) void* _ZN9VTService9IVTClient12default_implE = NULL;

/* Demangled: VTService::VTClient::setDisplaySurface(int, android::sp<android::Surface> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService8VTClient17setDisplaySurfaceEiRKN7android2spINS1_7SurfaceEEE(void) {
    ALOGD("_ZN9VTService8VTClient17setDisplaySurfaceEiRKN7android2spINS1_7SurfaceEEE() called");
    return 0;
}

/* Exported Object: construction vtable for VTService::BnVTClient-in-VTService::VTClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService8VTClientE0_NS_10BnVTClientE = NULL;

/* Exported Object: construction vtable for android::IBinder::DeathRecipient-in-VTService::VTClient::DeathNotifier */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService8VTClient13DeathNotifierE0_N7android7IBinder14DeathRecipientE = NULL;

/* Exported Object: construction vtable for android::IInterface-in-VTService::BnVTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService11BnVTServiceE0_N7android10IInterfaceE = NULL;

/* Exported Object: VTService::VTClient::mDeathNotifier */
extern "C" __attribute__((visibility("default"))) void* _ZN9VTService8VTClient14mDeathNotifierE = NULL;

/* Demangled: VTService::VTClient::setCamera(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService8VTClient9setCameraEii(void) {
    ALOGD("_ZN9VTService8VTClient9setCameraEii() called");
    return 0;
}

/* Demangled: VTService::VTClient::tagSocketWithUid(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService8VTClient16tagSocketWithUidEi(void) {
    ALOGD("_ZN9VTService8VTClient16tagSocketWithUidEi() called");
    return 0;
}

/* Demangled: non-virtual thunk to VTService::IVTClient::~IVTClient() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N9VTService9IVTClientD1Ev(void) {
    ALOGD("_ZThn8_N9VTService9IVTClientD1Ev() called");
    return 0;
}

/* Demangled: android::sp<VTService::IVTService>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN9VTService10IVTServiceEED2Ev(void) {
    ALOGD("_ZN7android2spIN9VTService10IVTServiceEED2Ev() called");
    return 0;
}

/* Demangled: VTService::IVTService::~IVTService() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService10IVTServiceD0Ev(void) {
    ALOGD("_ZN9VTService10IVTServiceD0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::BpRefBase-in-VTService::BpVTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService11BpVTServiceE16_N7android9BpRefBaseE = NULL;

/* Demangled: non-virtual thunk to VTService::VTClient::setSignalLevel(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZThn48_N9VTService8VTClient14setSignalLevelEii(void) {
    ALOGD("_ZThn48_N9VTService8VTClient14setSignalLevelEii() called");
    return 0;
}

/* Demangled: VTService::VTClient::notifyCallback(int, int, int, int, int, android::String8 const&, android::String8 const&, android::sp<android::IGraphicBufferProducer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService8VTClient14notifyCallbackEiiiiiRKN7android7String8ES4_RKNS1_2spINS1_22IGraphicBufferProducerEEE(void) {
    ALOGD("_ZN9VTService8VTClient14notifyCallbackEiiiiiRKN7android7String8ES4_RKNS1_2spINS1_22IGraphicBufferProducerEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::BnInterface<VTService::IVTClient>-in-VTService::VTClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService8VTClientE0_N7android11BnInterfaceINS_9IVTClientEEE = NULL;

/* Exported Object: construction vtable for VTService::IVTInterface-in-VTService::VTClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService8VTClientE48_NS_12IVTInterfaceE = NULL;

/* Demangled: getVTClient() */
extern "C" __attribute__((visibility("default"))) int _Z11getVTClientv(void) {
    ALOGD("_Z11getVTClientv() called");
    return 0;
}

/* Demangled: Java_com_mediatek_ims_internal_ImsVTProvider_nSetSignalLevel */
extern "C" __attribute__((visibility("default"))) int Java_com_mediatek_ims_internal_ImsVTProvider_nSetSignalLevel(void) {
    ALOGD("Java_com_mediatek_ims_internal_ImsVTProvider_nSetSignalLevel() called");
    return 0;
}

/* Exported Object: VTT for VTService::BpVTClient */
extern "C" __attribute__((visibility("default"))) void* _ZTTN9VTService10BpVTClientE = NULL;

/* Demangled: VTService::IVTClient::~IVTClient() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9IVTClientD2Ev(void) {
    ALOGD("_ZN9VTService9IVTClientD2Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to VTService::VTClient::finalization(int) */
extern "C" __attribute__((visibility("default"))) int _ZThn48_N9VTService8VTClient12finalizationEi(void) {
    ALOGD("_ZThn48_N9VTService8VTClient12finalizationEi() called");
    return 0;
}

/* Exported Object: construction vtable for android::IBinder-in-VTService::VTClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService8VTClientE16_N7android7IBinderE = NULL;

/* Demangled: virtual thunk to VTService::IVTService::~IVTService() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N9VTService10IVTServiceD0Ev(void) {
    ALOGD("_ZTv0_n24_N9VTService10IVTServiceD0Ev() called");
    return 0;
}

/* Demangled: native_init(_JNIEnv*, int) */
extern "C" __attribute__((visibility("default"))) int _Z11native_initP7_JNIEnvi(void) {
    ALOGD("_Z11native_initP7_JNIEnvi() called");
    return 0;
}

/* Demangled: Java_com_mediatek_ims_internal_ImsVTProvider_nRequestPeerConfig */
extern "C" __attribute__((visibility("default"))) int Java_com_mediatek_ims_internal_ImsVTProvider_nRequestPeerConfig(void) {
    ALOGD("Java_com_mediatek_ims_internal_ImsVTProvider_nRequestPeerConfig() called");
    return 0;
}

/* Exported Object: vtable for VTService::BpVTClient */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9VTService10BpVTClientE = NULL;

/* Demangled: non-virtual thunk to VTService::VTClient::responseSessionModify(int, android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZThn48_N9VTService8VTClient21responseSessionModifyEiRKN7android7String8E(void) {
    ALOGD("_ZThn48_N9VTService8VTClient21responseSessionModifyEiRKN7android7String8E() called");
    return 0;
}

/* Demangled: non-virtual thunk to VTService::VTClient::tagSocketWithUid(int) */
extern "C" __attribute__((visibility("default"))) int _ZThn48_N9VTService8VTClient16tagSocketWithUidEi(void) {
    ALOGD("_ZThn48_N9VTService8VTClient16tagSocketWithUidEi() called");
    return 0;
}

/* Demangled: VTService::VTClient::setSignalLevel(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService8VTClient14setSignalLevelEii(void) {
    ALOGD("_ZN9VTService8VTClient14setSignalLevelEii() called");
    return 0;
}

/* Exported Object: g_vm */
extern "C" __attribute__((visibility("default"))) void* g_vm = NULL;

/* Demangled: non-virtual thunk to VTService::BnVTClient::onTransact(unsigned int, android::Parcel const&, android::Parcel*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N9VTService10BnVTClient10onTransactEjRKN7android6ParcelEPS2_j(void) {
    ALOGD("_ZThn16_N9VTService10BnVTClient10onTransactEjRKN7android6ParcelEPS2_j() called");
    return 0;
}

/* Exported Object: construction vtable for android::IInterface-in-VTService::BnVTClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService10BnVTClientE0_N7android10IInterfaceE = NULL;

/* Demangled: VTService::VTClient::responseSessionModify(int, android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService8VTClient21responseSessionModifyEiRKN7android7String8E(void) {
    ALOGD("_ZN9VTService8VTClient21responseSessionModifyEiRKN7android7String8E() called");
    return 0;
}

/* Exported Object: guard variable for aidl::vendor::mediatek::hardware::videotelephony::IVideoTelephony::hash */
extern "C" __attribute__((visibility("default"))) void* _ZGVN4aidl6vendor8mediatek8hardware14videotelephony15IVideoTelephony4hashE = NULL;

/* Exported Object: construction vtable for VTService::IVTNotifyCallback-in-VTService::IVTClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService9IVTClientE8_NS_17IVTNotifyCallbackE = NULL;

/* Demangled: non-virtual thunk to VTService::VTClient::setCameraParametersOnly(int, android::sensor_info_vilte*) */
extern "C" __attribute__((visibility("default"))) int _ZThn48_N9VTService8VTClient23setCameraParametersOnlyEiPN7android17sensor_info_vilteE(void) {
    ALOGD("_ZThn48_N9VTService8VTClient23setCameraParametersOnlyEiPN7android17sensor_info_vilteE() called");
    return 0;
}

/* Demangled: non-virtual thunk to VTService::VTClient::initialization(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZThn48_N9VTService8VTClient14initializationEii(void) {
    ALOGD("_ZThn48_N9VTService8VTClient14initializationEii() called");
    return 0;
}

/* Demangled: VTService::VTClient::setDeviceOrientation(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService8VTClient20setDeviceOrientationEii(void) {
    ALOGD("_ZN9VTService8VTClient20setDeviceOrientationEii() called");
    return 0;
}

/* Demangled: Java_com_mediatek_ims_internal_ImsVTProvider_nSetCameraParameters */
extern "C" __attribute__((visibility("default"))) int Java_com_mediatek_ims_internal_ImsVTProvider_nSetCameraParameters(void) {
    ALOGD("Java_com_mediatek_ims_internal_ImsVTProvider_nSetCameraParameters() called");
    return 0;
}

/* Demangled: Java_com_mediatek_ims_internal_ImsVTProvider_nSetCameraParametersOnly */
extern "C" __attribute__((visibility("default"))) int Java_com_mediatek_ims_internal_ImsVTProvider_nSetCameraParametersOnly(void) {
    ALOGD("Java_com_mediatek_ims_internal_ImsVTProvider_nSetCameraParametersOnly() called");
    return 0;
}

/* Exported Object: vtable for VTService::BnVTService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9VTService11BnVTServiceE = NULL;

/* Demangled: VTService::VTClient::binderDied(android::wp<android::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService8VTClient10binderDiedERKN7android2wpINS1_7IBinderEEE(void) {
    ALOGD("_ZN9VTService8VTClient10binderDiedERKN7android2wpINS1_7IBinderEEE() called");
    return 0;
}

/* Demangled: VTService::VTClient::startRecording(int, VTService::VT_SRV_RECORD_TYPE, android::String8, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService8VTClient14startRecordingEiNS_18VT_SRV_RECORD_TYPEEN7android7String8Ei(void) {
    ALOGD("_ZN9VTService8VTClient14startRecordingEiNS_18VT_SRV_RECORD_TYPEEN7android7String8Ei() called");
    return 0;
}

/* Demangled: android::sp<VTService::VTClient>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN9VTService8VTClientEED2Ev(void) {
    ALOGD("_ZN7android2spIN9VTService8VTClientEED2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::IInterface-in-VTService::IVTClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService9IVTClientE0_N7android10IInterfaceE = NULL;

/* Demangled: VTService::VTClient::initialization(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService8VTClient14initializationEii(void) {
    ALOGD("_ZN9VTService8VTClient14initializationEii() called");
    return 0;
}

/* Exported Object: g_VTSourceSensorInfo */
extern "C" __attribute__((visibility("default"))) void* g_VTSourceSensorInfo = NULL;

/* Demangled: Java_com_mediatek_ims_internal_ImsVTProvider_nInitRefVTP */
extern "C" __attribute__((visibility("default"))) int Java_com_mediatek_ims_internal_ImsVTProvider_nInitRefVTP(void) {
    ALOGD("Java_com_mediatek_ims_internal_ImsVTProvider_nInitRefVTP() called");
    return 0;
}

/* Demangled: Java_com_mediatek_ims_internal_ImsVTProvider_nSetDeviceOrientation */
extern "C" __attribute__((visibility("default"))) int Java_com_mediatek_ims_internal_ImsVTProvider_nSetDeviceOrientation(void) {
    ALOGD("Java_com_mediatek_ims_internal_ImsVTProvider_nSetDeviceOrientation() called");
    return 0;
}

/* Demangled: Java_com_mediatek_ims_internal_ImsVTProvider_nSwitchFeature */
extern "C" __attribute__((visibility("default"))) int Java_com_mediatek_ims_internal_ImsVTProvider_nSwitchFeature(void) {
    ALOGD("Java_com_mediatek_ims_internal_ImsVTProvider_nSwitchFeature() called");
    return 0;
}

/* Demangled: android::sp<VTService::IVTClient>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN9VTService9IVTClientEED2Ev(void) {
    ALOGD("_ZN7android2spIN9VTService9IVTClientEED2Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to VTService::VTClient::requestSessionModify(int, android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZThn48_N9VTService8VTClient20requestSessionModifyEiRKN7android7String8E(void) {
    ALOGD("_ZThn48_N9VTService8VTClient20requestSessionModifyEiRKN7android7String8E() called");
    return 0;
}

/* Demangled: Java_com_mediatek_ims_internal_ImsVTProvider_nSetDisplaySurface */
extern "C" __attribute__((visibility("default"))) int Java_com_mediatek_ims_internal_ImsVTProvider_nSetDisplaySurface(void) {
    ALOGD("Java_com_mediatek_ims_internal_ImsVTProvider_nSetDisplaySurface() called");
    return 0;
}

/* Exported Object: vtable for VTService::IVTClient */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9VTService9IVTClientE = NULL;

/* Demangled: VTService::VTClient::finalization(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService8VTClient12finalizationEi(void) {
    ALOGD("_ZN9VTService8VTClient12finalizationEi() called");
    return 0;
}

/* Demangled: VTService::VTClient::setPreviewSurface(int, android::sp<android::Surface> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService8VTClient17setPreviewSurfaceEiRKN7android2spINS1_7SurfaceEEE(void) {
    ALOGD("_ZN9VTService8VTClient17setPreviewSurfaceEiRKN7android2spINS1_7SurfaceEEE() called");
    return 0;
}

/* Demangled: Java_com_mediatek_ims_internal_ImsVTProvider_nInitialization */
extern "C" __attribute__((visibility("default"))) int Java_com_mediatek_ims_internal_ImsVTProvider_nInitialization(void) {
    ALOGD("Java_com_mediatek_ims_internal_ImsVTProvider_nInitialization() called");
    return 0;
}

/* Demangled: Java_com_mediatek_ims_internal_ImsVTProvider_nFinalization */
extern "C" __attribute__((visibility("default"))) int Java_com_mediatek_ims_internal_ImsVTProvider_nFinalization(void) {
    ALOGD("Java_com_mediatek_ims_internal_ImsVTProvider_nFinalization() called");
    return 0;
}

/* Demangled: VTService::IVTClient::IVTClient() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9IVTClientC2Ev(void) {
    ALOGD("_ZN9VTService9IVTClientC2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for VTService::IVTInterface-in-VTService::BpVTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService11BpVTServiceE8_NS_12IVTInterfaceE = NULL;

/* Demangled: VTService::VTClient::setUIMode(int, VTService::VT_SRV_UI_MODE) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService8VTClient9setUIModeEiNS_14VT_SRV_UI_MODEE(void) {
    ALOGD("_ZN9VTService8VTClient9setUIModeEiNS_14VT_SRV_UI_MODEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to VTService::VTClient::switchFeature(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZThn48_N9VTService8VTClient13switchFeatureEiii(void) {
    ALOGD("_ZThn48_N9VTService8VTClient13switchFeatureEiii() called");
    return 0;
}

/* Demangled: Java_com_mediatek_ims_internal_ImsVTProvider_nSetCameraParametersWithSim */
extern "C" __attribute__((visibility("default"))) int Java_com_mediatek_ims_internal_ImsVTProvider_nSetCameraParametersWithSim(void) {
    ALOGD("Java_com_mediatek_ims_internal_ImsVTProvider_nSetCameraParametersWithSim() called");
    return 0;
}

/* Demangled: Java_com_mediatek_ims_internal_ImsVTProvider_nStopRecording */
extern "C" __attribute__((visibility("default"))) int Java_com_mediatek_ims_internal_ImsVTProvider_nStopRecording(void) {
    ALOGD("Java_com_mediatek_ims_internal_ImsVTProvider_nStopRecording() called");
    return 0;
}

/* Exported Object: construction vtable for VTService::IVTNotifyCallback-in-VTService::BpVTClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService10BpVTClientE8_NS_17IVTNotifyCallbackE = NULL;

/* Demangled: VTService::IVTService::getInterfaceDescriptor() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9VTService10IVTService22getInterfaceDescriptorEv(void) {
    ALOGD("_ZNK9VTService10IVTService22getInterfaceDescriptorEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to VTService::IVTService::~IVTService() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N9VTService10IVTServiceD0Ev(void) {
    ALOGD("_ZThn8_N9VTService10IVTServiceD0Ev() called");
    return 0;
}

/* Exported Object: VTService::IVTService::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN9VTService10IVTService10descriptorE = NULL;

/* Demangled: VTService::IVTService::~IVTService() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService10IVTServiceD1Ev(void) {
    ALOGD("_ZN9VTService10IVTServiceD1Ev() called");
    return 0;
}

/* Demangled: VTService::BnVTService::onTransact(unsigned int, android::Parcel const&, android::Parcel*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService11BnVTService10onTransactEjRKN7android6ParcelEPS2_j(void) {
    ALOGD("_ZN9VTService11BnVTService10onTransactEjRKN7android6ParcelEPS2_j() called");
    return 0;
}

/* Exported Object: vtable for VTService::VTClient */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9VTService8VTClientE = NULL;

/* Demangled: non-virtual thunk to VTService::VTClient::setDisplaySurface(int, android::sp<android::Surface> const&) */
extern "C" __attribute__((visibility("default"))) int _ZThn48_N9VTService8VTClient17setDisplaySurfaceEiRKN7android2spINS1_7SurfaceEEE(void) {
    ALOGD("_ZThn48_N9VTService8VTClient17setDisplaySurfaceEiRKN7android2spINS1_7SurfaceEEE() called");
    return 0;
}

/* Demangled: Java_com_mediatek_ims_internal_ImsVTProvider_nUpdateNetworkTable */
extern "C" __attribute__((visibility("default"))) int Java_com_mediatek_ims_internal_ImsVTProvider_nUpdateNetworkTable(void) {
    ALOGD("Java_com_mediatek_ims_internal_ImsVTProvider_nUpdateNetworkTable() called");
    return 0;
}

/* Exported Object: vtable for VTService::VTClient::DeathNotifier */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9VTService8VTClient13DeathNotifierE = NULL;

/* Demangled: non-virtual thunk to VTService::VTClient::stopRecording(int) */
extern "C" __attribute__((visibility("default"))) int _ZThn48_N9VTService8VTClient13stopRecordingEi(void) {
    ALOGD("_ZThn48_N9VTService8VTClient13stopRecordingEi() called");
    return 0;
}

/* Demangled: VTService::VTClient::switchFeature(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService8VTClient13switchFeatureEiii(void) {
    ALOGD("_ZN9VTService8VTClient13switchFeatureEiii() called");
    return 0;
}

/* Demangled: VTService::IVTClient::~IVTClient() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService9IVTClientD0Ev(void) {
    ALOGD("_ZN9VTService9IVTClientD0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::BBinder-in-VTService::BnVTClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService10BnVTClientE16_N7android7BBinderE = NULL;

/* Demangled: VTService::IVTService::getDefaultImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService10IVTService14getDefaultImplEv(void) {
    ALOGD("_ZN9VTService10IVTService14getDefaultImplEv() called");
    return 0;
}

/* Demangled: virtual thunk to VTService::IVTService::~IVTService() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N9VTService10IVTServiceD1Ev(void) {
    ALOGD("_ZTv0_n24_N9VTService10IVTServiceD1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for VTService::IVTInterface-in-VTService::BnVTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService11BnVTServiceE8_NS_12IVTInterfaceE = NULL;

/* Exported Object: construction vtable for android::IInterface-in-VTService::BpVTClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService10BpVTClientE0_N7android10IInterfaceE = NULL;

/* Demangled: non-virtual thunk to VTService::BnVTService::onTransact(unsigned int, android::Parcel const&, android::Parcel*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N9VTService11BnVTService10onTransactEjRKN7android6ParcelEPS2_j(void) {
    ALOGD("_ZThn16_N9VTService11BnVTService10onTransactEjRKN7android6ParcelEPS2_j() called");
    return 0;
}

/* Demangled: VTService::VTClient::setCameraParametersWithSim(int, int, int, android::sensor_info_vilte*) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService8VTClient26setCameraParametersWithSimEiiiPN7android17sensor_info_vilteE(void) {
    ALOGD("_ZN9VTService8VTClient26setCameraParametersWithSimEiiiPN7android17sensor_info_vilteE() called");
    return 0;
}

/* Demangled: VTService::VTClient::setCameraParametersOnly(int, android::sensor_info_vilte*) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService8VTClient23setCameraParametersOnlyEiPN7android17sensor_info_vilteE(void) {
    ALOGD("_ZN9VTService8VTClient23setCameraParametersOnlyEiPN7android17sensor_info_vilteE() called");
    return 0;
}

/* Demangled: VTService::VTClient::stopRecording(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9VTService8VTClient13stopRecordingEi(void) {
    ALOGD("_ZN9VTService8VTClient13stopRecordingEi() called");
    return 0;
}

/* Exported Object: construction vtable for VTService::IVTNotifyCallback-in-VTService::VTClient */
extern "C" __attribute__((visibility("default"))) void* _ZTCN9VTService8VTClientE8_NS_17IVTNotifyCallbackE = NULL;
