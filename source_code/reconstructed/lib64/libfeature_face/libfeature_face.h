/*
 * Reverse-Engineered ABI Specification for: libfeature.face.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libfeature.face.so
 */

#ifndef BEGONIA_RE_LIBFEATURE_FACE_H
#define BEGONIA_RE_LIBFEATURE_FACE_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN5NSCam13FaceEffectHal17setParametersImplEN7android2spINS_15BasicParametersEEE */
/* Demangled: NSCam::FaceEffectHal::setParametersImpl(android::sp<NSCam::BasicParameters>) */
int _ZN5NSCam13FaceEffectHal17setParametersImplEN7android2spINS_15BasicParametersEEE(void);

/* Symbol: _ZN5NSCam13FaceEffectHalD1Ev */
/* Demangled: NSCam::FaceEffectHal::~FaceEffectHal() */
int _ZN5NSCam13FaceEffectHalD1Ev(void);

/* Symbol: _ZN7halFDVT18halFDGetFaceResultEP21MtkCameraFaceMetadatai */
/* Demangled: halFDVT::halFDGetFaceResult(MtkCameraFaceMetadata*, int) */
int _ZN7halFDVT18halFDGetFaceResultEP21MtkCameraFaceMetadatai(void);

/* Symbol: _ZN9halHRBase14createInstanceE13HalHRObject_e */
/* Demangled: halHRBase::createInstance(HalHRObject_e) */
int _ZN9halHRBase14createInstanceE13HalHRObject_e(void);

/* Symbol: _ZTV5halHR */
/* Demangled: vtable for halHR */
extern void* _ZTV5halHR;

/* Symbol: _ZN5NSCam13FaceEffectHal16getGestureResultEP21MtkCameraFaceMetadataS2_i */
/* Demangled: NSCam::FaceEffectHal::getGestureResult(MtkCameraFaceMetadata*, MtkCameraFaceMetadata*, int) */
int _ZN5NSCam13FaceEffectHal16getGestureResultEP21MtkCameraFaceMetadataS2_i(void);

/* Symbol: _ZN7halFDVTD2Ev */
/* Demangled: halFDVT::~halFDVT() */
int _ZN7halFDVTD2Ev(void);

/* Symbol: _ZN6halASD17dumpASDInputImageEPvttj */
/* Demangled: halASD::dumpASDInputImage(void*, unsigned short, unsigned short, unsigned int) */
int _ZN6halASD17dumpASDInputImageEPvttj(void);

/* Symbol: _ZN5halHR14halHRGetResultEP9HR_RESULT */
/* Demangled: halHR::halHRGetResult(HR_RESULT*) */
int _ZN5halHR14halHRGetResultEP9HR_RESULT(void);

/* Symbol: _ZN5NSCam13FaceEffectHal23updateEffectRequestImplEN7android2spINS_13EffectRequestEEE */
/* Demangled: NSCam::FaceEffectHal::updateEffectRequestImpl(android::sp<NSCam::EffectRequest>) */
int _ZN5NSCam13FaceEffectHal23updateEffectRequestImplEN7android2spINS_13EffectRequestEEE(void);

/* Symbol: _ZTVN5NSCam15BasicParametersE */
/* Demangled: vtable for NSCam::BasicParameters */
extern void* _ZTVN5NSCam15BasicParametersE;

/* Symbol: _ZN7halFDVT11dumpFDParamER15MTKFDFTInitInfo */
/* Demangled: halFDVT::dumpFDParam(MTKFDFTInitInfo&) */
int _ZN7halFDVT11dumpFDParamER15MTKFDFTInitInfo(void);

/* Symbol: _ZN7halFDVT18halFDYUYV2ExtractYEPhS0_jj */
/* Demangled: halFDVT::halFDYUYV2ExtractY(unsigned char*, unsigned char*, unsigned int, unsigned int) */
int _ZN7halFDVT18halFDYUYV2ExtractYEPhS0_jj(void);

/* Symbol: _ZTV7halFDVT */
/* Demangled: vtable for halFDVT */
extern void* _ZTV7halFDVT;

/* Symbol: _ZN6halASDC1Ev */
/* Demangled: halASD::halASD() */
int _ZN6halASDC1Ev(void);

/* Symbol: _ZN5halHR15destroyInstanceEv */
/* Demangled: halHR::destroyInstance() */
int _ZN5halHR15destroyInstanceEv(void);

/* Symbol: _ZN5NSCam13FaceEffectHal10uninitImplEv */
/* Demangled: NSCam::FaceEffectHal::uninitImpl() */
int _ZN5NSCam13FaceEffectHal10uninitImplEv(void);

/* Symbol: _ZN5NSCam13FaceEffectHal8initImplEv */
/* Demangled: NSCam::FaceEffectHal::initImpl() */
int _ZN5NSCam13FaceEffectHal8initImplEv(void);

/* Symbol: _ZN5NSCam13FaceEffectHalD0Ev */
/* Demangled: NSCam::FaceEffectHal::~FaceEffectHal() */
int _ZN5NSCam13FaceEffectHalD0Ev(void);

/* Symbol: _ZTVN7android4ListINS_2spIN5NSCam13EffectRequestEEEEE */
/* Demangled: vtable for android::List<android::sp<NSCam::EffectRequest> > */
extern void* _ZTVN7android4ListINS_2spIN5NSCam13EffectRequestEEEEE;

/* Symbol: _ZN7halFDVT11halFDUninitEv */
/* Demangled: halFDVT::halFDUninit() */
int _ZN7halFDVT11halFDUninitEv(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<android::String8, android::String8> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEEE;

/* Symbol: _ZN7halFDVT11getInstanceEv */
/* Demangled: halFDVT::getInstance() */
int _ZN7halFDVT11getInstanceEv(void);

/* Symbol: _ZN7halFDVT15destroyInstanceEv */
/* Demangled: halFDVT::destroyInstance() */
int _ZN7halFDVT15destroyInstanceEv(void);

/* Symbol: _ZN7halFDVTD1Ev */
/* Demangled: halFDVT::~halFDVT() */
int _ZN7halFDVTD1Ev(void);

/* Symbol: _ZN6halASDD2Ev */
/* Demangled: halASD::~halASD() */
int _ZN6halASDD2Ev(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _ZN5NSCam13FaceEffectHal12onThreadLoopEPv */
/* Demangled: NSCam::FaceEffectHal::onThreadLoop(void*) */
int _ZN5NSCam13FaceEffectHal12onThreadLoopEPv(void);

/* Symbol: _ZN5NSCam13FaceEffectHal16isParameterValidEPKc */
/* Demangled: NSCam::FaceEffectHal::isParameterValid(char const*) */
int _ZN5NSCam13FaceEffectHal16isParameterValidEPKc(void);

/* Symbol: _ZTVN5NSCam13FaceEffectHalE */
/* Demangled: vtable for NSCam::FaceEffectHal */
extern void* _ZTVN5NSCam13FaceEffectHalE;

/* Symbol: _ZN6halASD14mHalAsdDeciderEPviR35mhal_ASD_DECIDER_UI_SCENE_TYPE_ENUM */
/* Demangled: halASD::mHalAsdDecider(void*, int, mhal_ASD_DECIDER_UI_SCENE_TYPE_ENUM&) */
int _ZN6halASD14mHalAsdDeciderEPviR35mhal_ASD_DECIDER_UI_SCENE_TYPE_ENUM(void);

/* Symbol: _ZTV8halFDTmp */
/* Demangled: vtable for halFDTmp */
extern void* _ZTV8halFDTmp;

/* Symbol: _ZN7halFDVT15halFDGetVersionEv */
/* Demangled: halFDVT::halFDGetVersion() */
int _ZN7halFDVT15halFDGetVersionEv(void);

/* Symbol: _ZN5halHR11getInstanceEv */
/* Demangled: halHR::getInstance() */
int _ZN5halHR11getInstanceEv(void);

/* Symbol: _ZN5NSCam13FaceEffectHal16setParameterImplERN7android7String8ES3_ */
/* Demangled: NSCam::FaceEffectHal::setParameterImpl(android::String8&, android::String8&) */
int _ZN5NSCam13FaceEffectHal16setParameterImplERN7android7String8ES3_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE8do_splatEPvPKvm(void);

/* Symbol: _ZN7halFDVT13doHWAttributeEv */
/* Demangled: halFDVT::doHWAttribute() */
int _ZN7halFDVT13doHWAttributeEv(void);

/* Symbol: _ZN7halFDVTD0Ev */
/* Demangled: halFDVT::~halFDVT() */
int _ZN7halFDVTD0Ev(void);

/* Symbol: _ZN6halASD11getInstanceEv */
/* Demangled: halASD::getInstance() */
int _ZN6halASD11getInstanceEv(void);

/* Symbol: _ZN6halASDD1Ev */
/* Demangled: halASD::~halASD() */
int _ZN6halASDD1Ev(void);

/* Symbol: _ZN5NSCam13FaceEffectHal11releaseImplEv */
/* Demangled: NSCam::FaceEffectHal::releaseImpl() */
int _ZN5NSCam13FaceEffectHal11releaseImplEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN5NSCam13FaceEffectHal9abortImplERNS_15BasicParametersEPKS1_ */
/* Demangled: NSCam::FaceEffectHal::abortImpl(NSCam::BasicParameters&, NSCam::BasicParameters const*) */
int _ZN5NSCam13FaceEffectHal9abortImplERNS_15BasicParametersEPKS1_(void);

/* Symbol: _ZN5halHR9halHRInitEjjPhj */
/* Demangled: halHR::halHRInit(unsigned int, unsigned int, unsigned char*, unsigned int) */
int _ZN5halHR9halHRInitEjjPhj(void);

/* Symbol: _ZN9halFDBase14createInstanceE13HalFDObject_e */
/* Demangled: halFDBase::createInstance(HalFDObject_e) */
int _ZN9halFDBase14createInstanceE13HalFDObject_e(void);

/* Symbol: _Z12FDVTCallbackRN5NSCam8NSIoPipe5NSEgn9EGNParamsINS0_10FDVTConfigEEE */
/* Demangled: FDVTCallback(NSCam::NSIoPipe::NSEgn::EGNParams<NSCam::NSIoPipe::FDVTConfig>&) */
int _Z12FDVTCallbackRN5NSCam8NSIoPipe5NSEgn9EGNParamsINS0_10FDVTConfigEEE(void);

/* Symbol: _ZN6halASDD0Ev */
/* Demangled: halASD::~halASD() */
int _ZN6halASDD0Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE7do_copyEPvPKvm(void);

/* Symbol: _ZN7halFDVT7halFDDoER19FD_Frame_Parameters */
/* Demangled: halFDVT::halFDDo(FD_Frame_Parameters&) */
int _ZN7halFDVT7halFDDoER19FD_Frame_Parameters(void);

/* Symbol: _ZTV9halASDTmp */
/* Demangled: vtable for halASDTmp */
extern void* _ZTV9halASDTmp;

/* Symbol: _ZN6halASD13mHalAsdUnInitEv */
/* Demangled: halASD::mHalAsdUnInit() */
int _ZN6halASD13mHalAsdUnInitEv(void);

/* Symbol: _ZTV6halASD */
/* Demangled: vtable for halASD */
extern void* _ZTV6halASD;

/* Symbol: _ZNK5NSCam13FaceEffectHal25getCaptureRequirementImplEPNS_15BasicParametersERN7android6VectorIS1_EE */
/* Demangled: NSCam::FaceEffectHal::getCaptureRequirementImpl(NSCam::BasicParameters*, android::Vector<NSCam::BasicParameters>&) const */
int _ZNK5NSCam13FaceEffectHal25getCaptureRequirementImplEPNS_15BasicParametersERN7android6VectorIS1_EE(void);

/* Symbol: _ZN7halFDVT16handleFDCallbackERN5NSCam8NSIoPipe5NSEgn9EGNParamsINS1_10FDVTConfigEEE */
/* Demangled: halFDVT::handleFDCallback(NSCam::NSIoPipe::NSEgn::EGNParams<NSCam::NSIoPipe::FDVTConfig>&) */
int _ZN7halFDVT16handleFDCallbackERN5NSCam8NSIoPipe5NSEgn9EGNParamsINS1_10FDVTConfigEEE(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe10FDVTConfigENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::NSIoPipe::FDVTConfig, std::__1::allocator<NSCam::NSIoPipe::FDVTConfig> >::__push_back_slow_path<NSCam::NSIoPipe::FDVTConfig const&>(NSCam::NSIoPipe::FDVTConfig const&) */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe10FDVTConfigENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void);

/* Symbol: _ZTV8halGSTmp */
/* Demangled: vtable for halGSTmp */
extern void* _ZTV8halGSTmp;

/* Symbol: _ZN5NSCam13FaceEffectHal13RunFaceEffectERN7android2spINS_13EffectRequestEEE */
/* Demangled: NSCam::FaceEffectHal::RunFaceEffect(android::sp<NSCam::EffectRequest>&) */
int _ZN5NSCam13FaceEffectHal13RunFaceEffectERN7android2spINS_13EffectRequestEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE12do_constructEPvm(void);

/* Symbol: _ZN8halFDTmp15destroyInstanceEv */
/* Demangled: halFDTmp::destroyInstance() */
int _ZN8halFDTmp15destroyInstanceEv(void);

/* Symbol: _ZN7halFDVT12dumpFDImagesEPhS0_ */
/* Demangled: halFDVT::dumpFDImages(unsigned char*, unsigned char*) */
int _ZN7halFDVT12dumpFDImagesEPhS0_(void);

/* Symbol: _ZN8halGSTmp15destroyInstanceEv */
/* Demangled: halGSTmp::destroyInstance() */
int _ZN8halGSTmp15destroyInstanceEv(void);

/* Symbol: _ZN8halHRTmp11getInstanceEv */
/* Demangled: halHRTmp::getInstance() */
int _ZN8halHRTmp11getInstanceEv(void);

/* Symbol: _ZN5halHRC2Ev */
/* Demangled: halHR::halHR() */
int _ZN5halHRC2Ev(void);

/* Symbol: _ZN9halGSBase14createInstanceE13HalGSObject_e */
/* Demangled: halGSBase::createInstance(HalGSObject_e) */
int _ZN9halGSBase14createInstanceE13HalGSObject_e(void);

/* Symbol: _ZN8halFDTmp11getInstanceEv */
/* Demangled: halFDTmp::getInstance() */
int _ZN8halFDTmp11getInstanceEv(void);

/* Symbol: _ZTV8halHRTmp */
/* Demangled: vtable for halHRTmp */
extern void* _ZTV8halHRTmp;

/* Symbol: _ZN5NSCam13FaceEffectHal12ReturnResultERN7android2spINS_13EffectRequestEEE21MtkCameraFaceMetadataiii */
/* Demangled: NSCam::FaceEffectHal::ReturnResult(android::sp<NSCam::EffectRequest>&, MtkCameraFaceMetadata, int, int, int) */
int _ZN5NSCam13FaceEffectHal12ReturnResultERN7android2spINS_13EffectRequestEEE21MtkCameraFaceMetadataiii(void);

/* Symbol: _ZN5NSCam13FaceEffectHal22allParameterConfiguredEv */
/* Demangled: NSCam::FaceEffectHal::allParameterConfigured() */
int _ZN5NSCam13FaceEffectHal22allParameterConfiguredEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_destroyEPvm(void);

/* Symbol: _ZN7halFDVT15onAttThreadLoopEPv */
/* Demangled: halFDVT::onAttThreadLoop(void*) */
int _ZN7halFDVT15onAttThreadLoopEPv(void);

/* Symbol: _ZN5halHRC1Ev */
/* Demangled: halHR::halHR() */
int _ZN5halHRC1Ev(void);

/* Symbol: _ZNK5NSCam13FaceEffectHal18getNameVersionImplERNS_16EffectHalVersionE */
/* Demangled: NSCam::FaceEffectHal::getNameVersionImpl(NSCam::EffectHalVersion&) const */
int _ZNK5NSCam13FaceEffectHal18getNameVersionImplERNS_16EffectHalVersionE(void);

/* Symbol: _ZN7halFDVT18halGetGammaSettingERPi */
/* Demangled: halFDVT::halGetGammaSetting(int*&) */
int _ZN7halFDVT18halGetGammaSettingERPi(void);

/* Symbol: _ZN9halASDTmp11getInstanceEv */
/* Demangled: halASDTmp::getInstance() */
int _ZN9halASDTmp11getInstanceEv(void);

/* Symbol: _ZN5halHR11halHRUninitEv */
/* Demangled: halHR::halHRUninit() */
int _ZN5halHR11halHRUninitEv(void);

/* Symbol: _ZN5halHRD2Ev */
/* Demangled: halHR::~halHR() */
int _ZN5halHRD2Ev(void);

/* Symbol: mHRCount */
/* Demangled: mHRCount */
extern void* mHRCount;

/* Symbol: _ZN5NSCam13FaceEffectHal9onDequeueERN7android2spINS_13EffectRequestEEE */
/* Demangled: NSCam::FaceEffectHal::onDequeue(android::sp<NSCam::EffectRequest>&) */
int _ZN5NSCam13FaceEffectHal9onDequeueERN7android2spINS_13EffectRequestEEE(void);

/* Symbol: _ZN7halFDVT16halFDGetFaceInfoEP21MtkCameraFaceMetadata */
/* Demangled: halFDVT::halFDGetFaceInfo(MtkCameraFaceMetadata*) */
int _ZN7halFDVT16halFDGetFaceInfoEP21MtkCameraFaceMetadata(void);

/* Symbol: _ZN8halGSTmp11getInstanceEv */
/* Demangled: halGSTmp::getInstance() */
int _ZN8halGSTmp11getInstanceEv(void);

/* Symbol: _ZN6halASD11mHalAsdInitEPvS0_hii */
/* Demangled: halASD::mHalAsdInit(void*, void*, unsigned char, int, int) */
int _ZN6halASD11mHalAsdInitEPvS0_hii(void);

/* Symbol: _ZN6halASD17mHalAsdDoSceneDetEPvtt */
/* Demangled: halASD::mHalAsdDoSceneDet(void*, unsigned short, unsigned short) */
int _ZN6halASD17mHalAsdDoSceneDetEPvtt(void);

/* Symbol: _ZN5NSCam13FaceEffectHal9updateASDEPhiiiR35mhal_ASD_DECIDER_UI_SCENE_TYPE_ENUMPv */
/* Demangled: NSCam::FaceEffectHal::updateASD(unsigned char*, int, int, int, mhal_ASD_DECIDER_UI_SCENE_TYPE_ENUM&, void*) */
int _ZN5NSCam13FaceEffectHal9updateASDEPhiiiR35mhal_ASD_DECIDER_UI_SCENE_TYPE_ENUMPv(void);

/* Symbol: _ZN5halHR7halHRDoEPhimi13MtkCameraFacejj */
/* Demangled: halHR::halHRDo(unsigned char*, int, unsigned long, int, MtkCameraFace, unsigned int, unsigned int) */
int _ZN5halHR7halHRDoEPhimi13MtkCameraFacejj(void);

/* Symbol: _ZN5NSCam13FaceEffectHal11prepareImplEv */
/* Demangled: NSCam::FaceEffectHal::prepareImpl() */
int _ZN5NSCam13FaceEffectHal11prepareImplEv(void);

/* Symbol: _ZN7halFDVTC2Ev */
/* Demangled: halFDVT::halFDVT() */
int _ZN7halFDVTC2Ev(void);

/* Symbol: _ZN5halHRD1Ev */
/* Demangled: halHR::~halHR() */
int _ZN5halHRD1Ev(void);

/* Symbol: _ZN5NSCam13FaceEffectHal9startImplEPm */
/* Demangled: NSCam::FaceEffectHal::startImpl(unsigned long*) */
int _ZN5NSCam13FaceEffectHal9startImplEPm(void);

/* Symbol: _ZN5NSCam13FaceEffectHalD2Ev */
/* Demangled: NSCam::FaceEffectHal::~FaceEffectHal() */
int _ZN5NSCam13FaceEffectHalD2Ev(void);

/* Symbol: _ZN7halFDVT9halFDInitEjjPhjihi */
/* Demangled: halFDVT::halFDInit(unsigned int, unsigned int, unsigned char*, unsigned int, int, unsigned char, int) */
int _ZN7halFDVT9halFDInitEjjPhjihi(void);

/* Symbol: _ZN6halASD15destroyInstanceEv */
/* Demangled: halASD::destroyInstance() */
int _ZN6halASD15destroyInstanceEv(void);

/* Symbol: gASDCount */
/* Demangled: gASDCount */
extern void* gASDCount;

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_compareEPKvS6_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_compareEPKvS6_(void);

/* Symbol: _ZN8halHRTmp15destroyInstanceEv */
/* Demangled: halHRTmp::destroyInstance() */
int _ZN8halHRTmp15destroyInstanceEv(void);

/* Symbol: _ZN10halASDBase14createInstanceE14HalASDObject_s */
/* Demangled: halASDBase::createInstance(HalASDObject_s) */
int _ZN10halASDBase14createInstanceE14HalASDObject_s(void);

/* Symbol: _ZN5NSCam13FaceEffectHal7onFlushEv */
/* Demangled: NSCam::FaceEffectHal::onFlush() */
int _ZN5NSCam13FaceEffectHal7onFlushEv(void);

/* Symbol: _ZN7halFDVT17doHWFaceDetectionEPv */
/* Demangled: halFDVT::doHWFaceDetection(void*) */
int _ZN7halFDVT17doHWFaceDetectionEPv(void);

/* Symbol: _ZN7halFDVTC1Ev */
/* Demangled: halFDVT::halFDVT() */
int _ZN7halFDVTC1Ev(void);

/* Symbol: _ZN9halASDTmp15destroyInstanceEv */
/* Demangled: halASDTmp::destroyInstance() */
int _ZN9halASDTmp15destroyInstanceEv(void);

/* Symbol: _ZN6halASDC2Ev */
/* Demangled: halASD::halASD() */
int _ZN6halASDC2Ev(void);

/* Symbol: _ZN5halHRD0Ev */
/* Demangled: halHR::~halHR() */
int _ZN5halHRD0Ev(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBFEATURE_FACE_H */
