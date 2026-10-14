/*
 * Reverse-Engineered ABI Specification for: libwlservice.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libwlservice.so
 */

#ifndef BEGONIA_RE_LIBWLSERVICE_H
#define BEGONIA_RE_LIBWLSERVICE_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN7android16WhiteListServiceD0Ev */
/* Demangled: android::WhiteListService::~WhiteListService() */
int _ZN7android16WhiteListServiceD0Ev(void);

/* Symbol: _ZN7android16WhiteListService19startElementHandlerEPKcPS2_ */
/* Demangled: android::WhiteListService::startElementHandler(char const*, char const**) */
int _ZN7android16WhiteListService19startElementHandlerEPKcPS2_(void);

/* Symbol: _ZNK7android17IWhiteListService22getInterfaceDescriptorEv */
/* Demangled: android::IWhiteListService::getInterfaceDescriptor() const */
int _ZNK7android17IWhiteListService22getInterfaceDescriptorEv(void);

/* Symbol: _ZTVN7android18BpWhiteListServiceE */
/* Demangled: vtable for android::BpWhiteListService */
extern void* _ZTVN7android18BpWhiteListServiceE;

/* Symbol: _ZTVN7android16WhiteListServiceE */
/* Demangled: vtable for android::WhiteListService */
extern void* _ZTVN7android16WhiteListServiceE;

/* Symbol: _ZN7android17IWhiteListServiceD2Ev */
/* Demangled: android::IWhiteListService::~IWhiteListService() */
int _ZN7android17IWhiteListServiceD2Ev(void);

/* Symbol: _ZN7android16WhiteListService27CreateApplicationForFeatureEPKc */
/* Demangled: android::WhiteListService::CreateApplicationForFeature(char const*) */
int _ZN7android16WhiteListService27CreateApplicationForFeatureEPKc(void);

/* Symbol: _ZN7android11BnInterfaceINS_17IWhiteListServiceEE10onAsBinderEv */
/* Demangled: android::BnInterface<android::IWhiteListService>::onAsBinder() */
int _ZN7android11BnInterfaceINS_17IWhiteListServiceEE10onAsBinderEv(void);

/* Symbol: _ZN7android17IWhiteListService10descriptorE */
/* Demangled: android::IWhiteListService::descriptor */
extern void* _ZN7android17IWhiteListService10descriptorE;

/* Symbol: _ZTCN7android18BnWhiteListServiceE0_NS_11BnInterfaceINS_17IWhiteListServiceEEE */
/* Demangled: construction vtable for android::BnInterface<android::IWhiteListService>-in-android::BnWhiteListService */
extern void* _ZTCN7android18BnWhiteListServiceE0_NS_11BnInterfaceINS_17IWhiteListServiceEEE;

/* Symbol: _ZN7android16WhiteListService17endElementHandlerEPKc */
/* Demangled: android::WhiteListService::endElementHandler(char const*) */
int _ZN7android16WhiteListService17endElementHandlerEPKc(void);

/* Symbol: _ZTCN7android18BpWhiteListServiceE4_NS_9BpRefBaseE */
/* Demangled: construction vtable for android::BpRefBase-in-android::BpWhiteListService */
extern void* _ZTCN7android18BpWhiteListServiceE4_NS_9BpRefBaseE;

/* Symbol: _ZN7android16WhiteListServiceD2Ev */
/* Demangled: android::WhiteListService::~WhiteListService() */
int _ZN7android16WhiteListServiceD2Ev(void);

/* Symbol: _ZThn4_N7android16WhiteListServiceD0Ev */
/* Demangled: non-virtual thunk to android::WhiteListService::~WhiteListService() */
int _ZThn4_N7android16WhiteListServiceD0Ev(void);

/* Symbol: _ZTCN7android16WhiteListServiceE0_NS_10IInterfaceE */
/* Demangled: construction vtable for android::IInterface-in-android::WhiteListService */
extern void* _ZTCN7android16WhiteListServiceE0_NS_10IInterfaceE;

/* Symbol: _ZTv0_n12_N7android17IWhiteListServiceD1Ev */
/* Demangled: virtual thunk to android::IWhiteListService::~IWhiteListService() */
int _ZTv0_n12_N7android17IWhiteListServiceD1Ev(void);

/* Symbol: _ZN7android16WhiteListService11instantiateEv */
/* Demangled: android::WhiteListService::instantiate() */
int _ZN7android16WhiteListService11instantiateEv(void);

/* Symbol: _ZN7android17IWhiteListServiceC2Ev */
/* Demangled: android::IWhiteListService::IWhiteListService() */
int _ZN7android17IWhiteListServiceC2Ev(void);

/* Symbol: _ZN7android18BnWhiteListService10onTransactEjRKNS_6ParcelEPS1_j */
/* Demangled: android::BnWhiteListService::onTransact(unsigned int, android::Parcel const&, android::Parcel*, unsigned int) */
int _ZN7android18BnWhiteListService10onTransactEjRKNS_6ParcelEPS1_j(void);

/* Symbol: _ZN7android17IWhiteListService14setDefaultImplENS_2spIS0_EE */
/* Demangled: android::IWhiteListService::setDefaultImpl(android::sp<android::IWhiteListService>) */
int _ZN7android17IWhiteListService14setDefaultImplENS_2spIS0_EE(void);

/* Symbol: _ZTVN7android17IWhiteListServiceE */
/* Demangled: vtable for android::IWhiteListService */
extern void* _ZTVN7android17IWhiteListServiceE;

/* Symbol: _ZTCN7android18BnWhiteListServiceE4_NS_7IBinderE */
/* Demangled: construction vtable for android::IBinder-in-android::BnWhiteListService */
extern void* _ZTCN7android18BnWhiteListServiceE4_NS_7IBinderE;

/* Symbol: _ZN7android16WhiteListService26CreateOptionForApplicationEPKc */
/* Demangled: android::WhiteListService::CreateOptionForApplication(char const*) */
int _ZN7android16WhiteListService26CreateOptionForApplicationEPKc(void);

/* Symbol: _ZN7android16WhiteListService18CheckOptionOnorOffENS_7String8ES1_S1_ */
/* Demangled: android::WhiteListService::CheckOptionOnorOff(android::String8, android::String8, android::String8) */
int _ZN7android16WhiteListService18CheckOptionOnorOffENS_7String8ES1_S1_(void);

/* Symbol: _ZThn4_N7android18BnWhiteListService10onTransactEjRKNS_6ParcelEPS1_j */
/* Demangled: non-virtual thunk to android::BnWhiteListService::onTransact(unsigned int, android::Parcel const&, android::Parcel*, unsigned int) */
int _ZThn4_N7android18BnWhiteListService10onTransactEjRKNS_6ParcelEPS1_j(void);

/* Symbol: _ZTCN7android18BpWhiteListServiceE0_NS_17IWhiteListServiceE */
/* Demangled: construction vtable for android::IWhiteListService-in-android::BpWhiteListService */
extern void* _ZTCN7android18BpWhiteListServiceE0_NS_17IWhiteListServiceE;

/* Symbol: _ZN7android17IWhiteListService12default_implE */
/* Demangled: android::IWhiteListService::default_impl */
extern void* _ZN7android17IWhiteListService12default_implE;

/* Symbol: _ZTCN7android18BnWhiteListServiceE4_NS_7BBinderE */
/* Demangled: construction vtable for android::BBinder-in-android::BnWhiteListService */
extern void* _ZTCN7android18BnWhiteListServiceE4_NS_7BBinderE;

/* Symbol: _ZN7android16WhiteListServiceC2Ev */
/* Demangled: android::WhiteListService::WhiteListService() */
int _ZN7android16WhiteListServiceC2Ev(void);

/* Symbol: _ZTCN7android16WhiteListServiceE0_NS_17IWhiteListServiceE */
/* Demangled: construction vtable for android::IWhiteListService-in-android::WhiteListService */
extern void* _ZTCN7android16WhiteListServiceE0_NS_17IWhiteListServiceE;

/* Symbol: _ZTCN7android16WhiteListServiceE4_NS_7BBinderE */
/* Demangled: construction vtable for android::BBinder-in-android::WhiteListService */
extern void* _ZTCN7android16WhiteListServiceE4_NS_7BBinderE;

/* Symbol: _ZTCN7android16WhiteListServiceE4_NS_7IBinderE */
/* Demangled: construction vtable for android::IBinder-in-android::WhiteListService */
extern void* _ZTCN7android16WhiteListServiceE4_NS_7IBinderE;

/* Symbol: _ZTTN7android18BpWhiteListServiceE */
/* Demangled: VTT for android::BpWhiteListService */
extern void* _ZTTN7android18BpWhiteListServiceE;

/* Symbol: _ZTCN7android18BnWhiteListServiceE0_NS_17IWhiteListServiceE */
/* Demangled: construction vtable for android::IWhiteListService-in-android::BnWhiteListService */
extern void* _ZTCN7android18BnWhiteListServiceE0_NS_17IWhiteListServiceE;

/* Symbol: _ZN7android17IWhiteListServiceD1Ev */
/* Demangled: android::IWhiteListService::~IWhiteListService() */
int _ZN7android17IWhiteListServiceD1Ev(void);

/* Symbol: _ZN7android17IWhiteListService11asInterfaceERKNS_2spINS_7IBinderEEE */
/* Demangled: android::IWhiteListService::asInterface(android::sp<android::IBinder> const&) */
int _ZN7android17IWhiteListService11asInterfaceERKNS_2spINS_7IBinderEEE(void);

/* Symbol: _ZN7android17IWhiteListService14getDefaultImplEv */
/* Demangled: android::IWhiteListService::getDefaultImpl() */
int _ZN7android17IWhiteListService14getDefaultImplEv(void);

/* Symbol: _ZTVN7android18BnWhiteListServiceE */
/* Demangled: vtable for android::BnWhiteListService */
extern void* _ZTVN7android18BnWhiteListServiceE;

/* Symbol: _ZTCN7android18BnWhiteListServiceE0_NS_10IInterfaceE */
/* Demangled: construction vtable for android::IInterface-in-android::BnWhiteListService */
extern void* _ZTCN7android18BnWhiteListServiceE0_NS_10IInterfaceE;

/* Symbol: _ZTTN7android16WhiteListServiceE */
/* Demangled: VTT for android::WhiteListService */
extern void* _ZTTN7android16WhiteListServiceE;

/* Symbol: _ZTv0_n12_N7android16WhiteListServiceD1Ev */
/* Demangled: virtual thunk to android::WhiteListService::~WhiteListService() */
int _ZTv0_n12_N7android16WhiteListServiceD1Ev(void);

/* Symbol: _ZN7android16WhiteListService14AddOptionValueEPKc */
/* Demangled: android::WhiteListService::AddOptionValue(char const*) */
int _ZN7android16WhiteListService14AddOptionValueEPKc(void);

/* Symbol: _ZN7android16WhiteListServiceD1Ev */
/* Demangled: android::WhiteListService::~WhiteListService() */
int _ZN7android16WhiteListServiceD1Ev(void);

/* Symbol: _ZTv0_n12_N7android17IWhiteListServiceD0Ev */
/* Demangled: virtual thunk to android::IWhiteListService::~IWhiteListService() */
int _ZTv0_n12_N7android17IWhiteListServiceD0Ev(void);

/* Symbol: _ZN7android2spINS_17IWhiteListServiceEEaSEOS2_ */
/* Demangled: android::sp<android::IWhiteListService>::operator=(android::sp<android::IWhiteListService>&&) */
int _ZN7android2spINS_17IWhiteListServiceEEaSEOS2_(void);

/* Symbol: _ZTCN7android18BpWhiteListServiceE0_NS_10IInterfaceE */
/* Demangled: construction vtable for android::IInterface-in-android::BpWhiteListService */
extern void* _ZTCN7android18BpWhiteListServiceE0_NS_10IInterfaceE;

/* Symbol: _ZN7android16WhiteListService22ParsingWhiteListConfigEv */
/* Demangled: android::WhiteListService::ParsingWhiteListConfig() */
int _ZN7android16WhiteListService22ParsingWhiteListConfigEv(void);

/* Symbol: _ZN7android16WhiteListService13CreateFeatureEPKc */
/* Demangled: android::WhiteListService::CreateFeature(char const*) */
int _ZN7android16WhiteListService13CreateFeatureEPKc(void);

/* Symbol: _ZN7android16WhiteListService14CopyOptionListEP13_Application_ */
/* Demangled: android::WhiteListService::CopyOptionList(_Application_*) */
int _ZN7android16WhiteListService14CopyOptionListEP13_Application_(void);

/* Symbol: _ZTCN7android16WhiteListServiceE0_NS_11BnInterfaceINS_17IWhiteListServiceEEE */
/* Demangled: construction vtable for android::BnInterface<android::IWhiteListService>-in-android::WhiteListService */
extern void* _ZTCN7android16WhiteListServiceE0_NS_11BnInterfaceINS_17IWhiteListServiceEEE;

/* Symbol: _ZN7android2spINS_17IWhiteListServiceEEaSINS_18BpWhiteListServiceEEERS2_ONS0_IT_EE */
/* Demangled: android::sp<android::IWhiteListService>& android::sp<android::IWhiteListService>::operator=<android::BpWhiteListService>(android::sp<android::BpWhiteListService>&&) */
int _ZN7android2spINS_17IWhiteListServiceEEaSINS_18BpWhiteListServiceEEERS2_ONS0_IT_EE(void);

/* Symbol: _ZTCN7android17IWhiteListServiceE0_NS_10IInterfaceE */
/* Demangled: construction vtable for android::IInterface-in-android::IWhiteListService */
extern void* _ZTCN7android17IWhiteListServiceE0_NS_10IInterfaceE;

/* Symbol: _ZTCN7android18BpWhiteListServiceE0_NS_11BpInterfaceINS_17IWhiteListServiceEEE */
/* Demangled: construction vtable for android::BpInterface<android::IWhiteListService>-in-android::BpWhiteListService */
extern void* _ZTCN7android18BpWhiteListServiceE0_NS_11BpInterfaceINS_17IWhiteListServiceEEE;

/* Symbol: _ZN7android16WhiteListServiceC1Ev */
/* Demangled: android::WhiteListService::WhiteListService() */
int _ZN7android16WhiteListServiceC1Ev(void);

/* Symbol: _ZThn4_N7android16WhiteListServiceD1Ev */
/* Demangled: non-virtual thunk to android::WhiteListService::~WhiteListService() */
int _ZThn4_N7android16WhiteListServiceD1Ev(void);

/* Symbol: _ZN7android16WhiteListService15GetOptionForAppEiPNS_7String8ES2_ */
/* Demangled: android::WhiteListService::GetOptionForApp(int, android::String8*, android::String8*) */
int _ZN7android16WhiteListService15GetOptionForAppEiPNS_7String8ES2_(void);

/* Symbol: _ZTCN7android16WhiteListServiceE0_NS_18BnWhiteListServiceE */
/* Demangled: construction vtable for android::BnWhiteListService-in-android::WhiteListService */
extern void* _ZTCN7android16WhiteListServiceE0_NS_18BnWhiteListServiceE;

/* Symbol: _ZN7android17IWhiteListServiceD0Ev */
/* Demangled: android::IWhiteListService::~IWhiteListService() */
int _ZN7android17IWhiteListServiceD0Ev(void);

/* Symbol: _ZN7android2spINS_17IWhiteListServiceEED2Ev */
/* Demangled: android::sp<android::IWhiteListService>::~sp() */
int _ZN7android2spINS_17IWhiteListServiceEED2Ev(void);

/* Symbol: _ZN7android2spINS_7IBinderEEC2INS_16WhiteListServiceEEEPT_ */
/* Demangled: android::sp<android::IBinder>::sp<android::WhiteListService>(android::WhiteListService*) */
int _ZN7android2spINS_7IBinderEEC2INS_16WhiteListServiceEEEPT_(void);

/* Symbol: _ZTv0_n12_N7android16WhiteListServiceD0Ev */
/* Demangled: virtual thunk to android::WhiteListService::~WhiteListService() */
int _ZTv0_n12_N7android16WhiteListServiceD0Ev(void);

/* Symbol: _ZTTN7android17IWhiteListServiceE */
/* Demangled: VTT for android::IWhiteListService */
extern void* _ZTTN7android17IWhiteListServiceE;

/* Symbol: _ZTTN7android18BnWhiteListServiceE */
/* Demangled: VTT for android::BnWhiteListService */
extern void* _ZTTN7android18BnWhiteListServiceE;

__END_DECLS

#endif /* BEGONIA_RE_LIBWLSERVICE_H */
