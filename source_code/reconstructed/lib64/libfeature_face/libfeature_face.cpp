/*
 * Reverse-Engineered Source for: libfeature.face.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libfeature_face"

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
#include "libfeature_face.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: NSCam::FaceEffectHal::setParametersImpl(android::sp<NSCam::BasicParameters>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13FaceEffectHal17setParametersImplEN7android2spINS_15BasicParametersEEE(void) {
    ALOGD("_ZN5NSCam13FaceEffectHal17setParametersImplEN7android2spINS_15BasicParametersEEE() called");
    return 0;
}

/* Demangled: NSCam::FaceEffectHal::~FaceEffectHal() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13FaceEffectHalD1Ev(void) {
    ALOGD("_ZN5NSCam13FaceEffectHalD1Ev() called");
    return 0;
}

/* Demangled: halFDVT::halFDGetFaceResult(MtkCameraFaceMetadata*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7halFDVT18halFDGetFaceResultEP21MtkCameraFaceMetadatai(void) {
    ALOGD("_ZN7halFDVT18halFDGetFaceResultEP21MtkCameraFaceMetadatai() called");
    return 0;
}

/* Demangled: halHRBase::createInstance(HalHRObject_e) */
extern "C" __attribute__((visibility("default"))) int _ZN9halHRBase14createInstanceE13HalHRObject_e(void) {
    ALOGD("_ZN9halHRBase14createInstanceE13HalHRObject_e() called");
    return 0;
}

/* Exported Object: vtable for halHR */
extern "C" __attribute__((visibility("default"))) void* _ZTV5halHR = NULL;

/* Demangled: NSCam::FaceEffectHal::getGestureResult(MtkCameraFaceMetadata*, MtkCameraFaceMetadata*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13FaceEffectHal16getGestureResultEP21MtkCameraFaceMetadataS2_i(void) {
    ALOGD("_ZN5NSCam13FaceEffectHal16getGestureResultEP21MtkCameraFaceMetadataS2_i() called");
    return 0;
}

/* Demangled: halFDVT::~halFDVT() */
extern "C" __attribute__((visibility("default"))) int _ZN7halFDVTD2Ev(void) {
    ALOGD("_ZN7halFDVTD2Ev() called");
    return 0;
}

/* Demangled: halASD::dumpASDInputImage(void*, unsigned short, unsigned short, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6halASD17dumpASDInputImageEPvttj(void) {
    ALOGD("_ZN6halASD17dumpASDInputImageEPvttj() called");
    return 0;
}

/* Demangled: halHR::halHRGetResult(HR_RESULT*) */
extern "C" __attribute__((visibility("default"))) int _ZN5halHR14halHRGetResultEP9HR_RESULT(void) {
    ALOGD("_ZN5halHR14halHRGetResultEP9HR_RESULT() called");
    return 0;
}

/* Demangled: NSCam::FaceEffectHal::updateEffectRequestImpl(android::sp<NSCam::EffectRequest>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13FaceEffectHal23updateEffectRequestImplEN7android2spINS_13EffectRequestEEE(void) {
    ALOGD("_ZN5NSCam13FaceEffectHal23updateEffectRequestImplEN7android2spINS_13EffectRequestEEE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::BasicParameters */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam15BasicParametersE = NULL;

/* Demangled: halFDVT::dumpFDParam(MTKFDFTInitInfo&) */
extern "C" __attribute__((visibility("default"))) int _ZN7halFDVT11dumpFDParamER15MTKFDFTInitInfo(void) {
    ALOGD("_ZN7halFDVT11dumpFDParamER15MTKFDFTInitInfo() called");
    return 0;
}

/* Demangled: halFDVT::halFDYUYV2ExtractY(unsigned char*, unsigned char*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7halFDVT18halFDYUYV2ExtractYEPhS0_jj(void) {
    ALOGD("_ZN7halFDVT18halFDYUYV2ExtractYEPhS0_jj() called");
    return 0;
}

/* Exported Object: vtable for halFDVT */
extern "C" __attribute__((visibility("default"))) void* _ZTV7halFDVT = NULL;

/* Demangled: halASD::halASD() */
extern "C" __attribute__((visibility("default"))) int _ZN6halASDC1Ev(void) {
    ALOGD("_ZN6halASDC1Ev() called");
    return 0;
}

/* Demangled: halHR::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN5halHR15destroyInstanceEv(void) {
    ALOGD("_ZN5halHR15destroyInstanceEv() called");
    return 0;
}

/* Demangled: NSCam::FaceEffectHal::uninitImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13FaceEffectHal10uninitImplEv(void) {
    ALOGD("_ZN5NSCam13FaceEffectHal10uninitImplEv() called");
    return 0;
}

/* Demangled: NSCam::FaceEffectHal::initImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13FaceEffectHal8initImplEv(void) {
    ALOGD("_ZN5NSCam13FaceEffectHal8initImplEv() called");
    return 0;
}

/* Demangled: NSCam::FaceEffectHal::~FaceEffectHal() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13FaceEffectHalD0Ev(void) {
    ALOGD("_ZN5NSCam13FaceEffectHalD0Ev() called");
    return 0;
}

/* Exported Object: vtable for android::List<android::sp<NSCam::EffectRequest> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android4ListINS_2spIN5NSCam13EffectRequestEEEEE = NULL;

/* Demangled: halFDVT::halFDUninit() */
extern "C" __attribute__((visibility("default"))) int _ZN7halFDVT11halFDUninitEv(void) {
    ALOGD("_ZN7halFDVT11halFDUninitEv() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<android::String8, android::String8> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEEE = NULL;

/* Demangled: halFDVT::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7halFDVT11getInstanceEv(void) {
    ALOGD("_ZN7halFDVT11getInstanceEv() called");
    return 0;
}

/* Demangled: halFDVT::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7halFDVT15destroyInstanceEv(void) {
    ALOGD("_ZN7halFDVT15destroyInstanceEv() called");
    return 0;
}

/* Demangled: halFDVT::~halFDVT() */
extern "C" __attribute__((visibility("default"))) int _ZN7halFDVTD1Ev(void) {
    ALOGD("_ZN7halFDVTD1Ev() called");
    return 0;
}

/* Demangled: halASD::~halASD() */
extern "C" __attribute__((visibility("default"))) int _ZN6halASDD2Ev(void) {
    ALOGD("_ZN6halASDD2Ev() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: NSCam::FaceEffectHal::onThreadLoop(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13FaceEffectHal12onThreadLoopEPv(void) {
    ALOGD("_ZN5NSCam13FaceEffectHal12onThreadLoopEPv() called");
    return 0;
}

/* Demangled: NSCam::FaceEffectHal::isParameterValid(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13FaceEffectHal16isParameterValidEPKc(void) {
    ALOGD("_ZN5NSCam13FaceEffectHal16isParameterValidEPKc() called");
    return 0;
}

/* Exported Object: vtable for NSCam::FaceEffectHal */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam13FaceEffectHalE = NULL;

/* Demangled: halASD::mHalAsdDecider(void*, int, mhal_ASD_DECIDER_UI_SCENE_TYPE_ENUM&) */
extern "C" __attribute__((visibility("default"))) int _ZN6halASD14mHalAsdDeciderEPviR35mhal_ASD_DECIDER_UI_SCENE_TYPE_ENUM(void) {
    ALOGD("_ZN6halASD14mHalAsdDeciderEPviR35mhal_ASD_DECIDER_UI_SCENE_TYPE_ENUM() called");
    return 0;
}

/* Exported Object: vtable for halFDTmp */
extern "C" __attribute__((visibility("default"))) void* _ZTV8halFDTmp = NULL;

/* Demangled: halFDVT::halFDGetVersion() */
extern "C" __attribute__((visibility("default"))) int _ZN7halFDVT15halFDGetVersionEv(void) {
    ALOGD("_ZN7halFDVT15halFDGetVersionEv() called");
    return 0;
}

/* Demangled: halHR::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN5halHR11getInstanceEv(void) {
    ALOGD("_ZN5halHR11getInstanceEv() called");
    return 0;
}

/* Demangled: NSCam::FaceEffectHal::setParameterImpl(android::String8&, android::String8&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13FaceEffectHal16setParameterImplERN7android7String8ES3_(void) {
    ALOGD("_ZN5NSCam13FaceEffectHal16setParameterImplERN7android7String8ES3_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: halFDVT::doHWAttribute() */
extern "C" __attribute__((visibility("default"))) int _ZN7halFDVT13doHWAttributeEv(void) {
    ALOGD("_ZN7halFDVT13doHWAttributeEv() called");
    return 0;
}

/* Demangled: halFDVT::~halFDVT() */
extern "C" __attribute__((visibility("default"))) int _ZN7halFDVTD0Ev(void) {
    ALOGD("_ZN7halFDVTD0Ev() called");
    return 0;
}

/* Demangled: halASD::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6halASD11getInstanceEv(void) {
    ALOGD("_ZN6halASD11getInstanceEv() called");
    return 0;
}

/* Demangled: halASD::~halASD() */
extern "C" __attribute__((visibility("default"))) int _ZN6halASDD1Ev(void) {
    ALOGD("_ZN6halASDD1Ev() called");
    return 0;
}

/* Demangled: NSCam::FaceEffectHal::releaseImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13FaceEffectHal11releaseImplEv(void) {
    ALOGD("_ZN5NSCam13FaceEffectHal11releaseImplEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::FaceEffectHal::abortImpl(NSCam::BasicParameters&, NSCam::BasicParameters const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13FaceEffectHal9abortImplERNS_15BasicParametersEPKS1_(void) {
    ALOGD("_ZN5NSCam13FaceEffectHal9abortImplERNS_15BasicParametersEPKS1_() called");
    return 0;
}

/* Demangled: halHR::halHRInit(unsigned int, unsigned int, unsigned char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5halHR9halHRInitEjjPhj(void) {
    ALOGD("_ZN5halHR9halHRInitEjjPhj() called");
    return 0;
}

/* Demangled: halFDBase::createInstance(HalFDObject_e) */
extern "C" __attribute__((visibility("default"))) int _ZN9halFDBase14createInstanceE13HalFDObject_e(void) {
    ALOGD("_ZN9halFDBase14createInstanceE13HalFDObject_e() called");
    return 0;
}

/* Demangled: FDVTCallback(NSCam::NSIoPipe::NSEgn::EGNParams<NSCam::NSIoPipe::FDVTConfig>&) */
extern "C" __attribute__((visibility("default"))) int _Z12FDVTCallbackRN5NSCam8NSIoPipe5NSEgn9EGNParamsINS0_10FDVTConfigEEE(void) {
    ALOGD("_Z12FDVTCallbackRN5NSCam8NSIoPipe5NSEgn9EGNParamsINS0_10FDVTConfigEEE() called");
    return 0;
}

/* Demangled: halASD::~halASD() */
extern "C" __attribute__((visibility("default"))) int _ZN6halASDD0Ev(void) {
    ALOGD("_ZN6halASDD0Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: halFDVT::halFDDo(FD_Frame_Parameters&) */
extern "C" __attribute__((visibility("default"))) int _ZN7halFDVT7halFDDoER19FD_Frame_Parameters(void) {
    ALOGD("_ZN7halFDVT7halFDDoER19FD_Frame_Parameters() called");
    return 0;
}

/* Exported Object: vtable for halASDTmp */
extern "C" __attribute__((visibility("default"))) void* _ZTV9halASDTmp = NULL;

/* Demangled: halASD::mHalAsdUnInit() */
extern "C" __attribute__((visibility("default"))) int _ZN6halASD13mHalAsdUnInitEv(void) {
    ALOGD("_ZN6halASD13mHalAsdUnInitEv() called");
    return 0;
}

/* Exported Object: vtable for halASD */
extern "C" __attribute__((visibility("default"))) void* _ZTV6halASD = NULL;

/* Demangled: NSCam::FaceEffectHal::getCaptureRequirementImpl(NSCam::BasicParameters*, android::Vector<NSCam::BasicParameters>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam13FaceEffectHal25getCaptureRequirementImplEPNS_15BasicParametersERN7android6VectorIS1_EE(void) {
    ALOGD("_ZNK5NSCam13FaceEffectHal25getCaptureRequirementImplEPNS_15BasicParametersERN7android6VectorIS1_EE() called");
    return 0;
}

/* Demangled: halFDVT::handleFDCallback(NSCam::NSIoPipe::NSEgn::EGNParams<NSCam::NSIoPipe::FDVTConfig>&) */
extern "C" __attribute__((visibility("default"))) int _ZN7halFDVT16handleFDCallbackERN5NSCam8NSIoPipe5NSEgn9EGNParamsINS1_10FDVTConfigEEE(void) {
    ALOGD("_ZN7halFDVT16handleFDCallbackERN5NSCam8NSIoPipe5NSEgn9EGNParamsINS1_10FDVTConfigEEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::NSIoPipe::FDVTConfig, std::__1::allocator<NSCam::NSIoPipe::FDVTConfig> >::__push_back_slow_path<NSCam::NSIoPipe::FDVTConfig const&>(NSCam::NSIoPipe::FDVTConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe10FDVTConfigENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe10FDVTConfigENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_() called");
    return 0;
}

/* Exported Object: vtable for halGSTmp */
extern "C" __attribute__((visibility("default"))) void* _ZTV8halGSTmp = NULL;

/* Demangled: NSCam::FaceEffectHal::RunFaceEffect(android::sp<NSCam::EffectRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13FaceEffectHal13RunFaceEffectERN7android2spINS_13EffectRequestEEE(void) {
    ALOGD("_ZN5NSCam13FaceEffectHal13RunFaceEffectERN7android2spINS_13EffectRequestEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: halFDTmp::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN8halFDTmp15destroyInstanceEv(void) {
    ALOGD("_ZN8halFDTmp15destroyInstanceEv() called");
    return 0;
}

/* Demangled: halFDVT::dumpFDImages(unsigned char*, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7halFDVT12dumpFDImagesEPhS0_(void) {
    ALOGD("_ZN7halFDVT12dumpFDImagesEPhS0_() called");
    return 0;
}

/* Demangled: halGSTmp::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN8halGSTmp15destroyInstanceEv(void) {
    ALOGD("_ZN8halGSTmp15destroyInstanceEv() called");
    return 0;
}

/* Demangled: halHRTmp::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN8halHRTmp11getInstanceEv(void) {
    ALOGD("_ZN8halHRTmp11getInstanceEv() called");
    return 0;
}

/* Demangled: halHR::halHR() */
extern "C" __attribute__((visibility("default"))) int _ZN5halHRC2Ev(void) {
    ALOGD("_ZN5halHRC2Ev() called");
    return 0;
}

/* Demangled: halGSBase::createInstance(HalGSObject_e) */
extern "C" __attribute__((visibility("default"))) int _ZN9halGSBase14createInstanceE13HalGSObject_e(void) {
    ALOGD("_ZN9halGSBase14createInstanceE13HalGSObject_e() called");
    return 0;
}

/* Demangled: halFDTmp::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN8halFDTmp11getInstanceEv(void) {
    ALOGD("_ZN8halFDTmp11getInstanceEv() called");
    return 0;
}

/* Exported Object: vtable for halHRTmp */
extern "C" __attribute__((visibility("default"))) void* _ZTV8halHRTmp = NULL;

/* Demangled: NSCam::FaceEffectHal::ReturnResult(android::sp<NSCam::EffectRequest>&, MtkCameraFaceMetadata, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13FaceEffectHal12ReturnResultERN7android2spINS_13EffectRequestEEE21MtkCameraFaceMetadataiii(void) {
    ALOGD("_ZN5NSCam13FaceEffectHal12ReturnResultERN7android2spINS_13EffectRequestEEE21MtkCameraFaceMetadataiii() called");
    return 0;
}

/* Demangled: NSCam::FaceEffectHal::allParameterConfigured() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13FaceEffectHal22allParameterConfiguredEv(void) {
    ALOGD("_ZN5NSCam13FaceEffectHal22allParameterConfiguredEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: halFDVT::onAttThreadLoop(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7halFDVT15onAttThreadLoopEPv(void) {
    ALOGD("_ZN7halFDVT15onAttThreadLoopEPv() called");
    return 0;
}

/* Demangled: halHR::halHR() */
extern "C" __attribute__((visibility("default"))) int _ZN5halHRC1Ev(void) {
    ALOGD("_ZN5halHRC1Ev() called");
    return 0;
}

/* Demangled: NSCam::FaceEffectHal::getNameVersionImpl(NSCam::EffectHalVersion&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam13FaceEffectHal18getNameVersionImplERNS_16EffectHalVersionE(void) {
    ALOGD("_ZNK5NSCam13FaceEffectHal18getNameVersionImplERNS_16EffectHalVersionE() called");
    return 0;
}

/* Demangled: halFDVT::halGetGammaSetting(int*&) */
extern "C" __attribute__((visibility("default"))) int _ZN7halFDVT18halGetGammaSettingERPi(void) {
    ALOGD("_ZN7halFDVT18halGetGammaSettingERPi() called");
    return 0;
}

/* Demangled: halASDTmp::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9halASDTmp11getInstanceEv(void) {
    ALOGD("_ZN9halASDTmp11getInstanceEv() called");
    return 0;
}

/* Demangled: halHR::halHRUninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5halHR11halHRUninitEv(void) {
    ALOGD("_ZN5halHR11halHRUninitEv() called");
    return 0;
}

/* Demangled: halHR::~halHR() */
extern "C" __attribute__((visibility("default"))) int _ZN5halHRD2Ev(void) {
    ALOGD("_ZN5halHRD2Ev() called");
    return 0;
}

/* Exported Object: mHRCount */
extern "C" __attribute__((visibility("default"))) void* mHRCount = NULL;

/* Demangled: NSCam::FaceEffectHal::onDequeue(android::sp<NSCam::EffectRequest>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13FaceEffectHal9onDequeueERN7android2spINS_13EffectRequestEEE(void) {
    ALOGD("_ZN5NSCam13FaceEffectHal9onDequeueERN7android2spINS_13EffectRequestEEE() called");
    return 0;
}

/* Demangled: halFDVT::halFDGetFaceInfo(MtkCameraFaceMetadata*) */
extern "C" __attribute__((visibility("default"))) int _ZN7halFDVT16halFDGetFaceInfoEP21MtkCameraFaceMetadata(void) {
    ALOGD("_ZN7halFDVT16halFDGetFaceInfoEP21MtkCameraFaceMetadata() called");
    return 0;
}

/* Demangled: halGSTmp::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN8halGSTmp11getInstanceEv(void) {
    ALOGD("_ZN8halGSTmp11getInstanceEv() called");
    return 0;
}

/* Demangled: halASD::mHalAsdInit(void*, void*, unsigned char, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6halASD11mHalAsdInitEPvS0_hii(void) {
    ALOGD("_ZN6halASD11mHalAsdInitEPvS0_hii() called");
    return 0;
}

/* Demangled: halASD::mHalAsdDoSceneDet(void*, unsigned short, unsigned short) */
extern "C" __attribute__((visibility("default"))) int _ZN6halASD17mHalAsdDoSceneDetEPvtt(void) {
    ALOGD("_ZN6halASD17mHalAsdDoSceneDetEPvtt() called");
    return 0;
}

/* Demangled: NSCam::FaceEffectHal::updateASD(unsigned char*, int, int, int, mhal_ASD_DECIDER_UI_SCENE_TYPE_ENUM&, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13FaceEffectHal9updateASDEPhiiiR35mhal_ASD_DECIDER_UI_SCENE_TYPE_ENUMPv(void) {
    ALOGD("_ZN5NSCam13FaceEffectHal9updateASDEPhiiiR35mhal_ASD_DECIDER_UI_SCENE_TYPE_ENUMPv() called");
    return 0;
}

/* Demangled: halHR::halHRDo(unsigned char*, int, unsigned long, int, MtkCameraFace, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5halHR7halHRDoEPhimi13MtkCameraFacejj(void) {
    ALOGD("_ZN5halHR7halHRDoEPhimi13MtkCameraFacejj() called");
    return 0;
}

/* Demangled: NSCam::FaceEffectHal::prepareImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13FaceEffectHal11prepareImplEv(void) {
    ALOGD("_ZN5NSCam13FaceEffectHal11prepareImplEv() called");
    return 0;
}

/* Demangled: halFDVT::halFDVT() */
extern "C" __attribute__((visibility("default"))) int _ZN7halFDVTC2Ev(void) {
    ALOGD("_ZN7halFDVTC2Ev() called");
    return 0;
}

/* Demangled: halHR::~halHR() */
extern "C" __attribute__((visibility("default"))) int _ZN5halHRD1Ev(void) {
    ALOGD("_ZN5halHRD1Ev() called");
    return 0;
}

/* Demangled: NSCam::FaceEffectHal::startImpl(unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13FaceEffectHal9startImplEPm(void) {
    ALOGD("_ZN5NSCam13FaceEffectHal9startImplEPm() called");
    return 0;
}

/* Demangled: NSCam::FaceEffectHal::~FaceEffectHal() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13FaceEffectHalD2Ev(void) {
    ALOGD("_ZN5NSCam13FaceEffectHalD2Ev() called");
    return 0;
}

/* Demangled: halFDVT::halFDInit(unsigned int, unsigned int, unsigned char*, unsigned int, int, unsigned char, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7halFDVT9halFDInitEjjPhjihi(void) {
    ALOGD("_ZN7halFDVT9halFDInitEjjPhjihi() called");
    return 0;
}

/* Demangled: halASD::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6halASD15destroyInstanceEv(void) {
    ALOGD("_ZN6halASD15destroyInstanceEv() called");
    return 0;
}

/* Exported Object: gASDCount */
extern "C" __attribute__((visibility("default"))) void* gASDCount = NULL;

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_compareEPKvS6_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_compareEPKvS6_() called");
    return 0;
}

/* Demangled: halHRTmp::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN8halHRTmp15destroyInstanceEv(void) {
    ALOGD("_ZN8halHRTmp15destroyInstanceEv() called");
    return 0;
}

/* Demangled: halASDBase::createInstance(HalASDObject_s) */
extern "C" __attribute__((visibility("default"))) int _ZN10halASDBase14createInstanceE14HalASDObject_s(void) {
    ALOGD("_ZN10halASDBase14createInstanceE14HalASDObject_s() called");
    return 0;
}

/* Demangled: NSCam::FaceEffectHal::onFlush() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13FaceEffectHal7onFlushEv(void) {
    ALOGD("_ZN5NSCam13FaceEffectHal7onFlushEv() called");
    return 0;
}

/* Demangled: halFDVT::doHWFaceDetection(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7halFDVT17doHWFaceDetectionEPv(void) {
    ALOGD("_ZN7halFDVT17doHWFaceDetectionEPv() called");
    return 0;
}

/* Demangled: halFDVT::halFDVT() */
extern "C" __attribute__((visibility("default"))) int _ZN7halFDVTC1Ev(void) {
    ALOGD("_ZN7halFDVTC1Ev() called");
    return 0;
}

/* Demangled: halASDTmp::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9halASDTmp15destroyInstanceEv(void) {
    ALOGD("_ZN9halASDTmp15destroyInstanceEv() called");
    return 0;
}

/* Demangled: halASD::halASD() */
extern "C" __attribute__((visibility("default"))) int _ZN6halASDC2Ev(void) {
    ALOGD("_ZN6halASDC2Ev() called");
    return 0;
}

/* Demangled: halHR::~halHR() */
extern "C" __attribute__((visibility("default"))) int _ZN5halHRD0Ev(void) {
    ALOGD("_ZN5halHRD0Ev() called");
    return 0;
}
