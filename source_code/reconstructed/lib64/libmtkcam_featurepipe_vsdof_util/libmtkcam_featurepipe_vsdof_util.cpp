/*
 * Reverse-Engineered Source for: libmtkcam.featurepipe.vsdof_util.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libmtkcam_featurepipe_vsdof_util"

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
#include "libmtkcam_featurepipe_vsdof_util.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::P2Operator::~P2Operator() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10P2OperatorD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10P2OperatorD1Ev() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: VSDOF::util::excuteMDPBayer12(VSDOF::util::sMDP_Config) */
extern "C" __attribute__((visibility("default"))) int _ZN5VSDOF4util16excuteMDPBayer12ENS0_11sMDP_ConfigE(void) {
    ALOGD("_ZN5VSDOF4util16excuteMDPBayer12ENS0_11sMDP_ConfigE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::QParamTemplateFiller::insertTuningBuf(unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe20QParamTemplateFiller15insertTuningBufEjPv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe20QParamTemplateFiller15insertTuningBufEjPv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::QParamTemplateGenerator::addOutput(NSCam::NSIoPipe::PortID, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe23QParamTemplateGenerator9addOutputENS_8NSIoPipe6PortIDEi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe23QParamTemplateGenerator9addOutputENS_8NSIoPipe6PortIDEi() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::P2Operator::enque(NSCam::NSIoPipe::QParams, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10P2Operator5enqueENS_8NSIoPipe7QParamsEPKc(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10P2Operator5enqueENS_8NSIoPipe7QParamsEPKc() called");
    return 0;
}

/* Demangled: VSDOF::util::MdpOperator::~MdpOperator() */
extern "C" __attribute__((visibility("default"))) int _ZN5VSDOF4util11MdpOperatorD1Ev(void) {
    ALOGD("_ZN5VSDOF4util11MdpOperatorD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to VSDOF::util::MdpOperator::~MdpOperator() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5VSDOF4util11MdpOperatorD0Ev(void) {
    ALOGD("_ZTv0_n24_N5VSDOF4util11MdpOperatorD0Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::QParamTemplateGenerator::QParamTemplateGenerator(unsigned int, unsigned int, NSCam::NSIoPipe::NSPostProc::ENormalStreamTag) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe23QParamTemplateGeneratorC2EjjNS_8NSIoPipe10NSPostProc16ENormalStreamTagE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe23QParamTemplateGeneratorC2EjjNS_8NSIoPipe10NSPostProc16ENormalStreamTagE() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::NSIoPipe::MCrpRsInfo> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEEE = NULL;

/* Demangled: VSDOF::util::MdpOperator::convertTransform(unsigned int, unsigned int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN5VSDOF4util11MdpOperator16convertTransformEjRjS2_(void) {
    ALOGD("_ZN5VSDOF4util11MdpOperator16convertTransformEjRjS2_() called");
    return 0;
}

/* Demangled: VSDOF::util::MdpOperator::execute(VSDOF::util::MdpConfig&) */
extern "C" __attribute__((visibility("default"))) int _ZN5VSDOF4util11MdpOperator7executeERNS0_9MdpConfigE(void) {
    ALOGD("_ZN5VSDOF4util11MdpOperator7executeERNS0_9MdpConfigE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::QParamTemplateGenerator::QParamTemplateGenerator() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe23QParamTemplateGeneratorC1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe23QParamTemplateGeneratorC1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::QParamTemplateFiller::insertInputBuf(unsigned int, NSCam::NSIoPipe::PortID, NSCam::IImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe20QParamTemplateFiller14insertInputBufEjNS_8NSIoPipe6PortIDEPNS_12IImageBufferE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe20QParamTemplateFiller14insertInputBufEjNS_8NSIoPipe6PortIDEPNS_12IImageBufferE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::QParamTemplateFiller::insertOutputBuf(unsigned int, NSCam::NSIoPipe::PortID, NSCam::IImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe20QParamTemplateFiller15insertOutputBufEjNS_8NSIoPipe6PortIDEPNS_12IImageBufferE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe20QParamTemplateFiller15insertOutputBufEjNS_8NSIoPipe6PortIDEPNS_12IImageBufferE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::QParamTemplateGenerator::addInput(NSCam::NSIoPipe::PortID) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe23QParamTemplateGenerator8addInputENS_8NSIoPipe6PortIDE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe23QParamTemplateGenerator8addInputENS_8NSIoPipe6PortIDE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::QParamTemplateFiller::QParamTemplateFiller(NSCam::NSIoPipe::QParams&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe20QParamTemplateFillerC2ERNS_8NSIoPipe7QParamsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe20QParamTemplateFillerC2ERNS_8NSIoPipe7QParamsE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: VSDOF::util::calcDstImageCrop(NSCam::MSize const&, NSCam::MSize const&, NSCam::MSize&, NSCam::MPoint&) */
extern "C" __attribute__((visibility("default"))) int _ZN5VSDOF4util16calcDstImageCropERKN5NSCam5MSizeES4_RS2_RNS1_6MPointE(void) {
    ALOGD("_ZN5VSDOF4util16calcDstImageCropERKN5NSCam5MSizeES4_RS2_RNS1_6MPointE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::QParamTemplateFiller::insertInputBuf(unsigned int, NSCam::NSIoPipe::PortID, android::sp<NSCam::EffectFrameInfo>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe20QParamTemplateFiller14insertInputBufEjNS_8NSIoPipe6PortIDEN7android2spINS_15EffectFrameInfoEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe20QParamTemplateFiller14insertInputBufEjNS_8NSIoPipe6PortIDEN7android2spINS_15EffectFrameInfoEEE() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::NSIoPipe::Output> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam8NSIoPipe6OutputEEE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::P2Operator::~P2Operator() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10P2OperatorD0Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10P2OperatorD0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to VSDOF::util::MdpOperator::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5VSDOF4util11MdpOperator15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n40_N5VSDOF4util11MdpOperator15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: VSDOF::util::getDpColorFormat(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5VSDOF4util16getDpColorFormatEi(void) {
    ALOGD("_ZN5VSDOF4util16getDpColorFormatEi() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::QParamTemplateFiller::delOutputPort(unsigned int, NSCam::NSIoPipe::PortID, NSCam::NSCamFeature::NSFeaturePipe::eCropGroup) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe20QParamTemplateFiller13delOutputPortEjNS_8NSIoPipe6PortIDENS1_10eCropGroupE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe20QParamTemplateFiller13delOutputPortEjNS_8NSIoPipe6PortIDENS1_10eCropGroupE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::QParamTemplateGenerator::addCrop(NSCam::NSCamFeature::NSFeaturePipe::eCropGroup, NSCam::MPoint, NSCam::MSize, NSCam::MSize, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe23QParamTemplateGenerator7addCropENS1_10eCropGroupENS_6MPointENS_5MSizeES5_b(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe23QParamTemplateGenerator7addCropENS1_10eCropGroupENS_6MPointENS_5MSizeES5_b() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::NSIoPipe::ExtraParam> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam8NSIoPipe10ExtraParamEEE = NULL;

/* Exported Object: vtable for android::Vector<NSCam::NSIoPipe::ModuleInfo> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEEE = NULL;

/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::P2Operator::~P2Operator() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10P2OperatorD2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10P2OperatorD2Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::QParamTemplateFiller::setCropResize(unsigned int, NSCam::NSCamFeature::NSFeaturePipe::eCropGroup, NSCam::MSize) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe20QParamTemplateFiller13setCropResizeEjNS1_10eCropGroupENS_5MSizeE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe20QParamTemplateFiller13setCropResizeEjNS1_10eCropGroupENS_5MSizeE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: VSDOF::util::MdpOperator::configPort(unsigned int, NSCam::IImageBuffer const*, int, int, int, int, NSCam::EImageFormat) */
extern "C" __attribute__((visibility("default"))) int _ZN5VSDOF4util11MdpOperator10configPortEjPKN5NSCam12IImageBufferEiiiiNS2_12EImageFormatE(void) {
    ALOGD("_ZN5VSDOF4util11MdpOperator10configPortEjPKN5NSCam12IImageBufferEiiiiNS2_12EImageFormatE() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::QParamTemplateFiller::delInputPort(unsigned int, NSCam::NSIoPipe::PortID) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe20QParamTemplateFiller12delInputPortEjNS_8NSIoPipe6PortIDE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe20QParamTemplateFiller12delInputPortEjNS_8NSIoPipe6PortIDE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::NSIoPipe::Input> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam8NSIoPipe5InputEEE = NULL;

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::P2Operator::~P2Operator() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10P2OperatorD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10P2OperatorD0Ev() called");
    return 0;
}

/* Demangled: VSDOF::util::excuteMDP(VSDOF::util::sMDP_Config) */
extern "C" __attribute__((visibility("default"))) int _ZN5VSDOF4util9excuteMDPENS0_11sMDP_ConfigE(void) {
    ALOGD("_ZN5VSDOF4util9excuteMDPENS0_11sMDP_ConfigE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE8do_splatEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSCamFeature::NSFeaturePipe::P2Operator */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe10P2OperatorE = NULL;

/* Demangled: VSDOF::util::MdpOperator::~MdpOperator() */
extern "C" __attribute__((visibility("default"))) int _ZN5VSDOF4util11MdpOperatorD0Ev(void) {
    ALOGD("_ZN5VSDOF4util11MdpOperatorD0Ev() called");
    return 0;
}

/* Demangled: VSDOF::util::createEmptyImageBuffer(NSCam::IImageBufferAllocator::ImgParam, char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5VSDOF4util22createEmptyImageBufferEN5NSCam21IImageBufferAllocator8ImgParamEPKci(void) {
    ALOGD("_ZN5VSDOF4util22createEmptyImageBufferEN5NSCam21IImageBufferAllocator8ImgParamEPKci() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::QParamTemplateFiller::QParamTemplateFiller(NSCam::NSIoPipe::QParams&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe20QParamTemplateFillerC1ERNS_8NSIoPipe7QParamsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe20QParamTemplateFillerC1ERNS_8NSIoPipe7QParamsE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::QParamTemplateGenerator::generate(NSCam::NSIoPipe::QParams&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe23QParamTemplateGenerator8generateERNS_8NSIoPipe7QParamsE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe23QParamTemplateGenerator8generateERNS_8NSIoPipe7QParamsE() called");
    return 0;
}

/* Exported Object: VTT for NSCam::NSCamFeature::NSFeaturePipe::P2Operator */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe10P2OperatorE = NULL;

/* Demangled: VSDOF::util::MdpOperator::mapDpFormat(NSCam::EImageFormat, DP_COLOR_ENUM*) */
extern "C" __attribute__((visibility("default"))) int _ZN5VSDOF4util11MdpOperator11mapDpFormatEN5NSCam12EImageFormatEP13DP_COLOR_ENUM(void) {
    ALOGD("_ZN5VSDOF4util11MdpOperator11mapDpFormatEN5NSCam12EImageFormatEP13DP_COLOR_ENUM() called");
    return 0;
}

/* Demangled: VSDOF::util::MdpOperator::MdpOperator(char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5VSDOF4util11MdpOperatorC2EPKci(void) {
    ALOGD("_ZN5VSDOF4util11MdpOperatorC2EPKci() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::QParamTemplateGenerator::addExtraParam(NSCam::NSIoPipe::EPostProcCmdIndex, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe23QParamTemplateGenerator13addExtraParamENS_8NSIoPipe17EPostProcCmdIndexEPv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe23QParamTemplateGenerator13addExtraParamENS_8NSIoPipe17EPostProcCmdIndexEPv() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: VSDOF::util::MdpOperator::~MdpOperator() */
extern "C" __attribute__((visibility("default"))) int _ZN5VSDOF4util11MdpOperatorD2Ev(void) {
    ALOGD("_ZN5VSDOF4util11MdpOperatorD2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to VSDOF::util::MdpOperator::~MdpOperator() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5VSDOF4util11MdpOperatorD1Ev(void) {
    ALOGD("_ZTv0_n24_N5VSDOF4util11MdpOperatorD1Ev() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::QParamTemplateFiller::insertOutputBuf(unsigned int, NSCam::NSIoPipe::PortID, android::sp<NSCam::EffectFrameInfo>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe20QParamTemplateFiller15insertOutputBufEjNS_8NSIoPipe6PortIDEN7android2spINS_15EffectFrameInfoEEE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe20QParamTemplateFiller15insertOutputBufEjNS_8NSIoPipe6PortIDEN7android2spINS_15EffectFrameInfoEEE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::P2Operator::P2Operator(char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10P2OperatorC2EPKci(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10P2OperatorC2EPKci() called");
    return 0;
}

/* Exported Object: VTT for VSDOF::util::MdpOperator */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5VSDOF4util11MdpOperatorE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::QParamTemplateFiller::setExtOffset(unsigned int, NSCam::NSIoPipe::PortID, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe20QParamTemplateFiller12setExtOffsetEjNS_8NSIoPipe6PortIDEi(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe20QParamTemplateFiller12setExtOffsetEjNS_8NSIoPipe6PortIDEi() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::QParamTemplateFiller::validate() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe20QParamTemplateFiller8validateEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe20QParamTemplateFiller8validateEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::QParamTemplateGenerator::QParamTemplateGenerator() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe23QParamTemplateGeneratorC2Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe23QParamTemplateGeneratorC2Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE8do_splatEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for VSDOF::util::MdpOperator */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5VSDOF4util11MdpOperatorE = NULL;

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::QParamTemplateGenerator::QParamTemplateGenerator(unsigned int, unsigned int, NSCam::NSIoPipe::NSPostProc::ENormalStreamTag) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe23QParamTemplateGeneratorC1EjjNS_8NSIoPipe10NSPostProc16ENormalStreamTagE(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe23QParamTemplateGeneratorC1EjjNS_8NSIoPipe10NSPostProc16ENormalStreamTagE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: VSDOF::util::MdpOperator::enqueBuffer(unsigned int, NSCam::IImageBuffer const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5VSDOF4util11MdpOperator11enqueBufferEjPKN5NSCam12IImageBufferEi(void) {
    ALOGD("_ZN5VSDOF4util11MdpOperator11enqueBufferEjPKN5NSCam12IImageBufferEi() called");
    return 0;
}

/* Demangled: VSDOF::util::MdpOperator::dequeDstBuffer(unsigned int, NSCam::IImageBuffer const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5VSDOF4util11MdpOperator14dequeDstBufferEjPKN5NSCam12IImageBufferEi(void) {
    ALOGD("_ZN5VSDOF4util11MdpOperator14dequeDstBufferEjPKN5NSCam12IImageBufferEi() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: VSDOF::util::MdpOperator::setPQParameters() */
extern "C" __attribute__((visibility("default"))) int _ZN5VSDOF4util11MdpOperator15setPQParametersEv(void) {
    ALOGD("_ZN5VSDOF4util11MdpOperator15setPQParametersEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::P2Operator::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10P2Operator15onLastStrongRefEPKv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10P2Operator15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::P2Operator::release() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10P2Operator7releaseEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10P2Operator7releaseEv() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::P2Operator::~P2Operator() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10P2OperatorD1Ev(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10P2OperatorD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::P2Operator::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5NSCam12NSCamFeature13NSFeaturePipe10P2Operator15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n40_N5NSCam12NSCamFeature13NSFeaturePipe10P2Operator15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: VSDOF::util::MdpOperator::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5VSDOF4util11MdpOperator15onLastStrongRefEPKv(void) {
    ALOGD("_ZN5VSDOF4util11MdpOperator15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: VSDOF::util::MdpOperator::MdpOperator(char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5VSDOF4util11MdpOperatorC1EPKci(void) {
    ALOGD("_ZN5VSDOF4util11MdpOperatorC1EPKci() called");
    return 0;
}

/* Demangled: VSDOF::util::excuteMDPWithCrop(VSDOF::util::sMDP_Config) */
extern "C" __attribute__((visibility("default"))) int _ZN5VSDOF4util17excuteMDPWithCropENS0_11sMDP_ConfigE(void) {
    ALOGD("_ZN5VSDOF4util17excuteMDPWithCropENS0_11sMDP_ConfigE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: VSDOF::util::excuteMDPSubProcess(VSDOF::util::sMDP_Config, VSDOF::util::sMDP_extConfig) */
extern "C" __attribute__((visibility("default"))) int _ZN5VSDOF4util19excuteMDPSubProcessENS0_11sMDP_ConfigENS0_14sMDP_extConfigE(void) {
    ALOGD("_ZN5VSDOF4util19excuteMDPSubProcessENS0_11sMDP_ConfigENS0_14sMDP_extConfigE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::QParamTemplateFiller::setCrop(unsigned int, NSCam::NSCamFeature::NSFeaturePipe::eCropGroup, NSCam::MPoint, NSCam::MSize, NSCam::MSize, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe20QParamTemplateFiller7setCropEjNS1_10eCropGroupENS_6MPointENS_5MSizeES5_b(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe20QParamTemplateFiller7setCropEjNS1_10eCropGroupENS_6MPointENS_5MSizeES5_b() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::QParamTemplateFiller::setInfo(unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe20QParamTemplateFiller7setInfoEjjjj(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe20QParamTemplateFiller7setInfoEjjjj() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::QParamTemplateGenerator::addModuleInfo(unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe23QParamTemplateGenerator13addModuleInfoEjPv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe23QParamTemplateGenerator13addModuleInfoEjPv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::P2Operator::P2Operator(char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe10P2OperatorC1EPKci(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe10P2OperatorC1EPKci() called");
    return 0;
}

/* Demangled: VSDOF::util::excuteDpIspStream(VSDOF::util::sDpIspConfig) */
extern "C" __attribute__((visibility("default"))) int _ZN5VSDOF4util17excuteDpIspStreamENS0_12sDpIspConfigE(void) {
    ALOGD("_ZN5VSDOF4util17excuteDpIspStreamENS0_12sDpIspConfigE() called");
    return 0;
}

/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::QParamTemplateGenerator::checkValid() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSCamFeature13NSFeaturePipe23QParamTemplateGenerator10checkValidEv(void) {
    ALOGD("_ZN5NSCam12NSCamFeature13NSFeaturePipe23QParamTemplateGenerator10checkValidEv() called");
    return 0;
}
