/*
 * Reverse-Engineered Source for: libwlservice.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libwlservice"

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
#include "libwlservice.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::WhiteListService::~WhiteListService() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16WhiteListServiceD0Ev(void) {
    ALOGD("_ZN7android16WhiteListServiceD0Ev() called");
    return 0;
}

/* Demangled: android::WhiteListService::startElementHandler(char const*, char const**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16WhiteListService19startElementHandlerEPKcPS2_(void) {
    ALOGD("_ZN7android16WhiteListService19startElementHandlerEPKcPS2_() called");
    return 0;
}

/* Demangled: android::IWhiteListService::getInterfaceDescriptor() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android17IWhiteListService22getInterfaceDescriptorEv(void) {
    ALOGD("_ZNK7android17IWhiteListService22getInterfaceDescriptorEv() called");
    return 0;
}

/* Exported Object: vtable for android::BpWhiteListService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android18BpWhiteListServiceE = NULL;

/* Exported Object: vtable for android::WhiteListService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android16WhiteListServiceE = NULL;

/* Demangled: android::IWhiteListService::~IWhiteListService() */
extern "C" __attribute__((visibility("default"))) int _ZN7android17IWhiteListServiceD2Ev(void) {
    ALOGD("_ZN7android17IWhiteListServiceD2Ev() called");
    return 0;
}

/* Demangled: android::WhiteListService::CreateApplicationForFeature(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16WhiteListService27CreateApplicationForFeatureEPKc(void) {
    ALOGD("_ZN7android16WhiteListService27CreateApplicationForFeatureEPKc() called");
    return 0;
}

/* Demangled: android::BnInterface<android::IWhiteListService>::onAsBinder() */
extern "C" __attribute__((visibility("default"))) int _ZN7android11BnInterfaceINS_17IWhiteListServiceEE10onAsBinderEv(void) {
    ALOGD("_ZN7android11BnInterfaceINS_17IWhiteListServiceEE10onAsBinderEv() called");
    return 0;
}

/* Exported Object: android::IWhiteListService::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN7android17IWhiteListService10descriptorE = NULL;

/* Exported Object: construction vtable for android::BnInterface<android::IWhiteListService>-in-android::BnWhiteListService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android18BnWhiteListServiceE0_NS_11BnInterfaceINS_17IWhiteListServiceEEE = NULL;

/* Demangled: android::WhiteListService::endElementHandler(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16WhiteListService17endElementHandlerEPKc(void) {
    ALOGD("_ZN7android16WhiteListService17endElementHandlerEPKc() called");
    return 0;
}

/* Exported Object: construction vtable for android::BpRefBase-in-android::BpWhiteListService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android18BpWhiteListServiceE4_NS_9BpRefBaseE = NULL;

/* Demangled: android::WhiteListService::~WhiteListService() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16WhiteListServiceD2Ev(void) {
    ALOGD("_ZN7android16WhiteListServiceD2Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to android::WhiteListService::~WhiteListService() */
extern "C" __attribute__((visibility("default"))) int _ZThn4_N7android16WhiteListServiceD0Ev(void) {
    ALOGD("_ZThn4_N7android16WhiteListServiceD0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::IInterface-in-android::WhiteListService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android16WhiteListServiceE0_NS_10IInterfaceE = NULL;

/* Demangled: virtual thunk to android::IWhiteListService::~IWhiteListService() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N7android17IWhiteListServiceD1Ev(void) {
    ALOGD("_ZTv0_n12_N7android17IWhiteListServiceD1Ev() called");
    return 0;
}

/* Demangled: android::WhiteListService::instantiate() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16WhiteListService11instantiateEv(void) {
    ALOGD("_ZN7android16WhiteListService11instantiateEv() called");
    return 0;
}

/* Demangled: android::IWhiteListService::IWhiteListService() */
extern "C" __attribute__((visibility("default"))) int _ZN7android17IWhiteListServiceC2Ev(void) {
    ALOGD("_ZN7android17IWhiteListServiceC2Ev() called");
    return 0;
}

/* Demangled: android::BnWhiteListService::onTransact(unsigned int, android::Parcel const&, android::Parcel*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android18BnWhiteListService10onTransactEjRKNS_6ParcelEPS1_j(void) {
    ALOGD("_ZN7android18BnWhiteListService10onTransactEjRKNS_6ParcelEPS1_j() called");
    return 0;
}

/* Demangled: android::IWhiteListService::setDefaultImpl(android::sp<android::IWhiteListService>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17IWhiteListService14setDefaultImplENS_2spIS0_EE(void) {
    ALOGD("_ZN7android17IWhiteListService14setDefaultImplENS_2spIS0_EE() called");
    return 0;
}

/* Exported Object: vtable for android::IWhiteListService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android17IWhiteListServiceE = NULL;

/* Exported Object: construction vtable for android::IBinder-in-android::BnWhiteListService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android18BnWhiteListServiceE4_NS_7IBinderE = NULL;

/* Demangled: android::WhiteListService::CreateOptionForApplication(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16WhiteListService26CreateOptionForApplicationEPKc(void) {
    ALOGD("_ZN7android16WhiteListService26CreateOptionForApplicationEPKc() called");
    return 0;
}

/* Demangled: android::WhiteListService::CheckOptionOnorOff(android::String8, android::String8, android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16WhiteListService18CheckOptionOnorOffENS_7String8ES1_S1_(void) {
    ALOGD("_ZN7android16WhiteListService18CheckOptionOnorOffENS_7String8ES1_S1_() called");
    return 0;
}

/* Demangled: non-virtual thunk to android::BnWhiteListService::onTransact(unsigned int, android::Parcel const&, android::Parcel*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZThn4_N7android18BnWhiteListService10onTransactEjRKNS_6ParcelEPS1_j(void) {
    ALOGD("_ZThn4_N7android18BnWhiteListService10onTransactEjRKNS_6ParcelEPS1_j() called");
    return 0;
}

/* Exported Object: construction vtable for android::IWhiteListService-in-android::BpWhiteListService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android18BpWhiteListServiceE0_NS_17IWhiteListServiceE = NULL;

/* Exported Object: android::IWhiteListService::default_impl */
extern "C" __attribute__((visibility("default"))) void* _ZN7android17IWhiteListService12default_implE = NULL;

/* Exported Object: construction vtable for android::BBinder-in-android::BnWhiteListService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android18BnWhiteListServiceE4_NS_7BBinderE = NULL;

/* Demangled: android::WhiteListService::WhiteListService() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16WhiteListServiceC2Ev(void) {
    ALOGD("_ZN7android16WhiteListServiceC2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::IWhiteListService-in-android::WhiteListService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android16WhiteListServiceE0_NS_17IWhiteListServiceE = NULL;

/* Exported Object: construction vtable for android::BBinder-in-android::WhiteListService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android16WhiteListServiceE4_NS_7BBinderE = NULL;

/* Exported Object: construction vtable for android::IBinder-in-android::WhiteListService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android16WhiteListServiceE4_NS_7IBinderE = NULL;

/* Exported Object: VTT for android::BpWhiteListService */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android18BpWhiteListServiceE = NULL;

/* Exported Object: construction vtable for android::IWhiteListService-in-android::BnWhiteListService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android18BnWhiteListServiceE0_NS_17IWhiteListServiceE = NULL;

/* Demangled: android::IWhiteListService::~IWhiteListService() */
extern "C" __attribute__((visibility("default"))) int _ZN7android17IWhiteListServiceD1Ev(void) {
    ALOGD("_ZN7android17IWhiteListServiceD1Ev() called");
    return 0;
}

/* Demangled: android::IWhiteListService::asInterface(android::sp<android::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17IWhiteListService11asInterfaceERKNS_2spINS_7IBinderEEE(void) {
    ALOGD("_ZN7android17IWhiteListService11asInterfaceERKNS_2spINS_7IBinderEEE() called");
    return 0;
}

/* Demangled: android::IWhiteListService::getDefaultImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android17IWhiteListService14getDefaultImplEv(void) {
    ALOGD("_ZN7android17IWhiteListService14getDefaultImplEv() called");
    return 0;
}

/* Exported Object: vtable for android::BnWhiteListService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android18BnWhiteListServiceE = NULL;

/* Exported Object: construction vtable for android::IInterface-in-android::BnWhiteListService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android18BnWhiteListServiceE0_NS_10IInterfaceE = NULL;

/* Exported Object: VTT for android::WhiteListService */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android16WhiteListServiceE = NULL;

/* Demangled: virtual thunk to android::WhiteListService::~WhiteListService() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N7android16WhiteListServiceD1Ev(void) {
    ALOGD("_ZTv0_n12_N7android16WhiteListServiceD1Ev() called");
    return 0;
}

/* Demangled: android::WhiteListService::AddOptionValue(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16WhiteListService14AddOptionValueEPKc(void) {
    ALOGD("_ZN7android16WhiteListService14AddOptionValueEPKc() called");
    return 0;
}

/* Demangled: android::WhiteListService::~WhiteListService() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16WhiteListServiceD1Ev(void) {
    ALOGD("_ZN7android16WhiteListServiceD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to android::IWhiteListService::~IWhiteListService() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N7android17IWhiteListServiceD0Ev(void) {
    ALOGD("_ZTv0_n12_N7android17IWhiteListServiceD0Ev() called");
    return 0;
}

/* Demangled: android::sp<android::IWhiteListService>::operator=(android::sp<android::IWhiteListService>&&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_17IWhiteListServiceEEaSEOS2_(void) {
    ALOGD("_ZN7android2spINS_17IWhiteListServiceEEaSEOS2_() called");
    return 0;
}

/* Exported Object: construction vtable for android::IInterface-in-android::BpWhiteListService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android18BpWhiteListServiceE0_NS_10IInterfaceE = NULL;

/* Demangled: android::WhiteListService::ParsingWhiteListConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16WhiteListService22ParsingWhiteListConfigEv(void) {
    ALOGD("_ZN7android16WhiteListService22ParsingWhiteListConfigEv() called");
    return 0;
}

/* Demangled: android::WhiteListService::CreateFeature(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16WhiteListService13CreateFeatureEPKc(void) {
    ALOGD("_ZN7android16WhiteListService13CreateFeatureEPKc() called");
    return 0;
}

/* Demangled: android::WhiteListService::CopyOptionList(_Application_*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16WhiteListService14CopyOptionListEP13_Application_(void) {
    ALOGD("_ZN7android16WhiteListService14CopyOptionListEP13_Application_() called");
    return 0;
}

/* Exported Object: construction vtable for android::BnInterface<android::IWhiteListService>-in-android::WhiteListService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android16WhiteListServiceE0_NS_11BnInterfaceINS_17IWhiteListServiceEEE = NULL;

/* Demangled: android::sp<android::IWhiteListService>& android::sp<android::IWhiteListService>::operator=<android::BpWhiteListService>(android::sp<android::BpWhiteListService>&&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_17IWhiteListServiceEEaSINS_18BpWhiteListServiceEEERS2_ONS0_IT_EE(void) {
    ALOGD("_ZN7android2spINS_17IWhiteListServiceEEaSINS_18BpWhiteListServiceEEERS2_ONS0_IT_EE() called");
    return 0;
}

/* Exported Object: construction vtable for android::IInterface-in-android::IWhiteListService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android17IWhiteListServiceE0_NS_10IInterfaceE = NULL;

/* Exported Object: construction vtable for android::BpInterface<android::IWhiteListService>-in-android::BpWhiteListService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android18BpWhiteListServiceE0_NS_11BpInterfaceINS_17IWhiteListServiceEEE = NULL;

/* Demangled: android::WhiteListService::WhiteListService() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16WhiteListServiceC1Ev(void) {
    ALOGD("_ZN7android16WhiteListServiceC1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to android::WhiteListService::~WhiteListService() */
extern "C" __attribute__((visibility("default"))) int _ZThn4_N7android16WhiteListServiceD1Ev(void) {
    ALOGD("_ZThn4_N7android16WhiteListServiceD1Ev() called");
    return 0;
}

/* Demangled: android::WhiteListService::GetOptionForApp(int, android::String8*, android::String8*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16WhiteListService15GetOptionForAppEiPNS_7String8ES2_(void) {
    ALOGD("_ZN7android16WhiteListService15GetOptionForAppEiPNS_7String8ES2_() called");
    return 0;
}

/* Exported Object: construction vtable for android::BnWhiteListService-in-android::WhiteListService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android16WhiteListServiceE0_NS_18BnWhiteListServiceE = NULL;

/* Demangled: android::IWhiteListService::~IWhiteListService() */
extern "C" __attribute__((visibility("default"))) int _ZN7android17IWhiteListServiceD0Ev(void) {
    ALOGD("_ZN7android17IWhiteListServiceD0Ev() called");
    return 0;
}

/* Demangled: android::sp<android::IWhiteListService>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_17IWhiteListServiceEED2Ev(void) {
    ALOGD("_ZN7android2spINS_17IWhiteListServiceEED2Ev() called");
    return 0;
}

/* Demangled: android::sp<android::IBinder>::sp<android::WhiteListService>(android::WhiteListService*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_7IBinderEEC2INS_16WhiteListServiceEEEPT_(void) {
    ALOGD("_ZN7android2spINS_7IBinderEEC2INS_16WhiteListServiceEEEPT_() called");
    return 0;
}

/* Demangled: virtual thunk to android::WhiteListService::~WhiteListService() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N7android16WhiteListServiceD0Ev(void) {
    ALOGD("_ZTv0_n12_N7android16WhiteListServiceD0Ev() called");
    return 0;
}

/* Exported Object: VTT for android::IWhiteListService */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android17IWhiteListServiceE = NULL;

/* Exported Object: VTT for android::BnWhiteListService */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android18BnWhiteListServiceE = NULL;
