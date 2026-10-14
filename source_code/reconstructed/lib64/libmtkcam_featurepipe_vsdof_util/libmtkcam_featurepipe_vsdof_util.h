/*
 * Reverse-Engineered ABI Specification for: libmtkcam.featurepipe.vsdof_util.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libmtkcam.featurepipe.vsdof_util.so
 */

#ifndef BEGONIA_RE_LIBMTKCAM_FEATUREPIPE_VSDOF_UTIL_H
#define BEGONIA_RE_LIBMTKCAM_FEATUREPIPE_VSDOF_UTIL_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10P2OperatorD1Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::P2Operator::~P2Operator() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10P2OperatorD1Ev(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _ZN5VSDOF4util16excuteMDPBayer12ENS0_11sMDP_ConfigE */
/* Demangled: VSDOF::util::excuteMDPBayer12(VSDOF::util::sMDP_Config) */
int _ZN5VSDOF4util16excuteMDPBayer12ENS0_11sMDP_ConfigE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe20QParamTemplateFiller15insertTuningBufEjPv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::QParamTemplateFiller::insertTuningBuf(unsigned int, void*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe20QParamTemplateFiller15insertTuningBufEjPv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe23QParamTemplateGenerator9addOutputENS_8NSIoPipe6PortIDEi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::QParamTemplateGenerator::addOutput(NSCam::NSIoPipe::PortID, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe23QParamTemplateGenerator9addOutputENS_8NSIoPipe6PortIDEi(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10P2Operator5enqueENS_8NSIoPipe7QParamsEPKc */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::P2Operator::enque(NSCam::NSIoPipe::QParams, char const*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10P2Operator5enqueENS_8NSIoPipe7QParamsEPKc(void);

/* Symbol: _ZN5VSDOF4util11MdpOperatorD1Ev */
/* Demangled: VSDOF::util::MdpOperator::~MdpOperator() */
int _ZN5VSDOF4util11MdpOperatorD1Ev(void);

/* Symbol: _ZTv0_n24_N5VSDOF4util11MdpOperatorD0Ev */
/* Demangled: virtual thunk to VSDOF::util::MdpOperator::~MdpOperator() */
int _ZTv0_n24_N5VSDOF4util11MdpOperatorD0Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe23QParamTemplateGeneratorC2EjjNS_8NSIoPipe10NSPostProc16ENormalStreamTagE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::QParamTemplateGenerator::QParamTemplateGenerator(unsigned int, unsigned int, NSCam::NSIoPipe::NSPostProc::ENormalStreamTag) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe23QParamTemplateGeneratorC2EjjNS_8NSIoPipe10NSPostProc16ENormalStreamTagE(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEEE */
/* Demangled: vtable for android::Vector<NSCam::NSIoPipe::MCrpRsInfo> */
extern void* _ZTVN7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEEE;

/* Symbol: _ZN5VSDOF4util11MdpOperator16convertTransformEjRjS2_ */
/* Demangled: VSDOF::util::MdpOperator::convertTransform(unsigned int, unsigned int&, unsigned int&) */
int _ZN5VSDOF4util11MdpOperator16convertTransformEjRjS2_(void);

/* Symbol: _ZN5VSDOF4util11MdpOperator7executeERNS0_9MdpConfigE */
/* Demangled: VSDOF::util::MdpOperator::execute(VSDOF::util::MdpConfig&) */
int _ZN5VSDOF4util11MdpOperator7executeERNS0_9MdpConfigE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe23QParamTemplateGeneratorC1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::QParamTemplateGenerator::QParamTemplateGenerator() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe23QParamTemplateGeneratorC1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe20QParamTemplateFiller14insertInputBufEjNS_8NSIoPipe6PortIDEPNS_12IImageBufferE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::QParamTemplateFiller::insertInputBuf(unsigned int, NSCam::NSIoPipe::PortID, NSCam::IImageBuffer*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe20QParamTemplateFiller14insertInputBufEjNS_8NSIoPipe6PortIDEPNS_12IImageBufferE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe20QParamTemplateFiller15insertOutputBufEjNS_8NSIoPipe6PortIDEPNS_12IImageBufferE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::QParamTemplateFiller::insertOutputBuf(unsigned int, NSCam::NSIoPipe::PortID, NSCam::IImageBuffer*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe20QParamTemplateFiller15insertOutputBufEjNS_8NSIoPipe6PortIDEPNS_12IImageBufferE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe23QParamTemplateGenerator8addInputENS_8NSIoPipe6PortIDE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::QParamTemplateGenerator::addInput(NSCam::NSIoPipe::PortID) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe23QParamTemplateGenerator8addInputENS_8NSIoPipe6PortIDE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe20QParamTemplateFillerC2ERNS_8NSIoPipe7QParamsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::QParamTemplateFiller::QParamTemplateFiller(NSCam::NSIoPipe::QParams&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe20QParamTemplateFillerC2ERNS_8NSIoPipe7QParamsE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE7do_copyEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE7do_copyEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE12do_constructEPvm(void);

/* Symbol: _ZN5VSDOF4util16calcDstImageCropERKN5NSCam5MSizeES4_RS2_RNS1_6MPointE */
/* Demangled: VSDOF::util::calcDstImageCrop(NSCam::MSize const&, NSCam::MSize const&, NSCam::MSize&, NSCam::MPoint&) */
int _ZN5VSDOF4util16calcDstImageCropERKN5NSCam5MSizeES4_RS2_RNS1_6MPointE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe20QParamTemplateFiller14insertInputBufEjNS_8NSIoPipe6PortIDEN7android2spINS_15EffectFrameInfoEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::QParamTemplateFiller::insertInputBuf(unsigned int, NSCam::NSIoPipe::PortID, android::sp<NSCam::EffectFrameInfo>) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe20QParamTemplateFiller14insertInputBufEjNS_8NSIoPipe6PortIDEN7android2spINS_15EffectFrameInfoEEE(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam8NSIoPipe6OutputEEE */
/* Demangled: vtable for android::Vector<NSCam::NSIoPipe::Output> */
extern void* _ZTVN7android6VectorIN5NSCam8NSIoPipe6OutputEEE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10P2OperatorD0Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::P2Operator::~P2Operator() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10P2OperatorD0Ev(void);

/* Symbol: _ZTv0_n40_N5VSDOF4util11MdpOperator15onLastStrongRefEPKv */
/* Demangled: virtual thunk to VSDOF::util::MdpOperator::onLastStrongRef(void const*) */
int _ZTv0_n40_N5VSDOF4util11MdpOperator15onLastStrongRefEPKv(void);

/* Symbol: _ZN5VSDOF4util16getDpColorFormatEi */
/* Demangled: VSDOF::util::getDpColorFormat(int) */
int _ZN5VSDOF4util16getDpColorFormatEi(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe20QParamTemplateFiller13delOutputPortEjNS_8NSIoPipe6PortIDENS1_10eCropGroupE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::QParamTemplateFiller::delOutputPort(unsigned int, NSCam::NSIoPipe::PortID, NSCam::NSCamFeature::NSFeaturePipe::eCropGroup) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe20QParamTemplateFiller13delOutputPortEjNS_8NSIoPipe6PortIDENS1_10eCropGroupE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe23QParamTemplateGenerator7addCropENS1_10eCropGroupENS_6MPointENS_5MSizeES5_b */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::QParamTemplateGenerator::addCrop(NSCam::NSCamFeature::NSFeaturePipe::eCropGroup, NSCam::MPoint, NSCam::MSize, NSCam::MSize, bool) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe23QParamTemplateGenerator7addCropENS1_10eCropGroupENS_6MPointENS_5MSizeES5_b(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam8NSIoPipe10ExtraParamEEE */
/* Demangled: vtable for android::Vector<NSCam::NSIoPipe::ExtraParam> */
extern void* _ZTVN7android6VectorIN5NSCam8NSIoPipe10ExtraParamEEE;

/* Symbol: _ZTVN7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEEE */
/* Demangled: vtable for android::Vector<NSCam::NSIoPipe::ModuleInfo> */
extern void* _ZTVN7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEEE;

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10P2OperatorD2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::P2Operator::~P2Operator() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10P2OperatorD2Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe20QParamTemplateFiller13setCropResizeEjNS1_10eCropGroupENS_5MSizeE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::QParamTemplateFiller::setCropResize(unsigned int, NSCam::NSCamFeature::NSFeaturePipe::eCropGroup, NSCam::MSize) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe20QParamTemplateFiller13setCropResizeEjNS1_10eCropGroupENS_5MSizeE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE12do_constructEPvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN5VSDOF4util11MdpOperator10configPortEjPKN5NSCam12IImageBufferEiiiiNS2_12EImageFormatE */
/* Demangled: VSDOF::util::MdpOperator::configPort(unsigned int, NSCam::IImageBuffer const*, int, int, int, int, NSCam::EImageFormat) */
int _ZN5VSDOF4util11MdpOperator10configPortEjPKN5NSCam12IImageBufferEiiiiNS2_12EImageFormatE(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe20QParamTemplateFiller12delInputPortEjNS_8NSIoPipe6PortIDE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::QParamTemplateFiller::delInputPort(unsigned int, NSCam::NSIoPipe::PortID) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe20QParamTemplateFiller12delInputPortEjNS_8NSIoPipe6PortIDE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE7do_copyEPvPKvm(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam8NSIoPipe5InputEEE */
/* Demangled: vtable for android::Vector<NSCam::NSIoPipe::Input> */
extern void* _ZTVN7android6VectorIN5NSCam8NSIoPipe5InputEEE;

/* Symbol: _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10P2OperatorD0Ev */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::P2Operator::~P2Operator() */
int _ZTv0_n24_N5NSCam12NSCamFeature13NSFeaturePipe10P2OperatorD0Ev(void);

/* Symbol: _ZN5VSDOF4util9excuteMDPENS0_11sMDP_ConfigE */
/* Demangled: VSDOF::util::excuteMDP(VSDOF::util::sMDP_Config) */
int _ZN5VSDOF4util9excuteMDPENS0_11sMDP_ConfigE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE8do_splatEPvPKvm(void);

/* Symbol: _ZTVN5NSCam12NSCamFeature13NSFeaturePipe10P2OperatorE */
/* Demangled: vtable for NSCam::NSCamFeature::NSFeaturePipe::P2Operator */
extern void* _ZTVN5NSCam12NSCamFeature13NSFeaturePipe10P2OperatorE;

/* Symbol: _ZN5VSDOF4util11MdpOperatorD0Ev */
/* Demangled: VSDOF::util::MdpOperator::~MdpOperator() */
int _ZN5VSDOF4util11MdpOperatorD0Ev(void);

/* Symbol: _ZN5VSDOF4util22createEmptyImageBufferEN5NSCam21IImageBufferAllocator8ImgParamEPKci */
/* Demangled: VSDOF::util::createEmptyImageBuffer(NSCam::IImageBufferAllocator::ImgParam, char const*, int) */
int _ZN5VSDOF4util22createEmptyImageBufferEN5NSCam21IImageBufferAllocator8ImgParamEPKci(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe20QParamTemplateFillerC1ERNS_8NSIoPipe7QParamsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::QParamTemplateFiller::QParamTemplateFiller(NSCam::NSIoPipe::QParams&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe20QParamTemplateFillerC1ERNS_8NSIoPipe7QParamsE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe23QParamTemplateGenerator8generateERNS_8NSIoPipe7QParamsE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::QParamTemplateGenerator::generate(NSCam::NSIoPipe::QParams&) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe23QParamTemplateGenerator8generateERNS_8NSIoPipe7QParamsE(void);

/* Symbol: _ZTTN5NSCam12NSCamFeature13NSFeaturePipe10P2OperatorE */
/* Demangled: VTT for NSCam::NSCamFeature::NSFeaturePipe::P2Operator */
extern void* _ZTTN5NSCam12NSCamFeature13NSFeaturePipe10P2OperatorE;

/* Symbol: _ZN5VSDOF4util11MdpOperator11mapDpFormatEN5NSCam12EImageFormatEP13DP_COLOR_ENUM */
/* Demangled: VSDOF::util::MdpOperator::mapDpFormat(NSCam::EImageFormat, DP_COLOR_ENUM*) */
int _ZN5VSDOF4util11MdpOperator11mapDpFormatEN5NSCam12EImageFormatEP13DP_COLOR_ENUM(void);

/* Symbol: _ZN5VSDOF4util11MdpOperatorC2EPKci */
/* Demangled: VSDOF::util::MdpOperator::MdpOperator(char const*, int) */
int _ZN5VSDOF4util11MdpOperatorC2EPKci(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe23QParamTemplateGenerator13addExtraParamENS_8NSIoPipe17EPostProcCmdIndexEPv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::QParamTemplateGenerator::addExtraParam(NSCam::NSIoPipe::EPostProcCmdIndex, void*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe23QParamTemplateGenerator13addExtraParamENS_8NSIoPipe17EPostProcCmdIndexEPv(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE8do_splatEPvPKvm(void);

/* Symbol: _ZN5VSDOF4util11MdpOperatorD2Ev */
/* Demangled: VSDOF::util::MdpOperator::~MdpOperator() */
int _ZN5VSDOF4util11MdpOperatorD2Ev(void);

/* Symbol: _ZTv0_n24_N5VSDOF4util11MdpOperatorD1Ev */
/* Demangled: virtual thunk to VSDOF::util::MdpOperator::~MdpOperator() */
int _ZTv0_n24_N5VSDOF4util11MdpOperatorD1Ev(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe20QParamTemplateFiller15insertOutputBufEjNS_8NSIoPipe6PortIDEN7android2spINS_15EffectFrameInfoEEE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::QParamTemplateFiller::insertOutputBuf(unsigned int, NSCam::NSIoPipe::PortID, android::sp<NSCam::EffectFrameInfo>) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe20QParamTemplateFiller15insertOutputBufEjNS_8NSIoPipe6PortIDEN7android2spINS_15EffectFrameInfoEEE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE8do_splatEPvPKvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10P2OperatorC2EPKci */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::P2Operator::P2Operator(char const*, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10P2OperatorC2EPKci(void);

/* Symbol: _ZTTN5VSDOF4util11MdpOperatorE */
/* Demangled: VTT for VSDOF::util::MdpOperator */
extern void* _ZTTN5VSDOF4util11MdpOperatorE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe20QParamTemplateFiller12setExtOffsetEjNS_8NSIoPipe6PortIDEi */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::QParamTemplateFiller::setExtOffset(unsigned int, NSCam::NSIoPipe::PortID, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe20QParamTemplateFiller12setExtOffsetEjNS_8NSIoPipe6PortIDEi(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe20QParamTemplateFiller8validateEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::QParamTemplateFiller::validate() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe20QParamTemplateFiller8validateEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe23QParamTemplateGeneratorC2Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::QParamTemplateGenerator::QParamTemplateGenerator() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe23QParamTemplateGeneratorC2Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE8do_splatEPvPKvm(void);

/* Symbol: _ZTVN5VSDOF4util11MdpOperatorE */
/* Demangled: vtable for VSDOF::util::MdpOperator */
extern void* _ZTVN5VSDOF4util11MdpOperatorE;

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe23QParamTemplateGeneratorC1EjjNS_8NSIoPipe10NSPostProc16ENormalStreamTagE */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::QParamTemplateGenerator::QParamTemplateGenerator(unsigned int, unsigned int, NSCam::NSIoPipe::NSPostProc::ENormalStreamTag) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe23QParamTemplateGeneratorC1EjjNS_8NSIoPipe10NSPostProc16ENormalStreamTagE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5VSDOF4util11MdpOperator11enqueBufferEjPKN5NSCam12IImageBufferEi */
/* Demangled: VSDOF::util::MdpOperator::enqueBuffer(unsigned int, NSCam::IImageBuffer const*, int) */
int _ZN5VSDOF4util11MdpOperator11enqueBufferEjPKN5NSCam12IImageBufferEi(void);

/* Symbol: _ZN5VSDOF4util11MdpOperator14dequeDstBufferEjPKN5NSCam12IImageBufferEi */
/* Demangled: VSDOF::util::MdpOperator::dequeDstBuffer(unsigned int, NSCam::IImageBuffer const*, int) */
int _ZN5VSDOF4util11MdpOperator14dequeDstBufferEjPKN5NSCam12IImageBufferEi(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE12do_constructEPvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE7do_copyEPvPKvm(void);

/* Symbol: _ZN5VSDOF4util11MdpOperator15setPQParametersEv */
/* Demangled: VSDOF::util::MdpOperator::setPQParameters() */
int _ZN5VSDOF4util11MdpOperator15setPQParametersEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10P2Operator15onLastStrongRefEPKv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::P2Operator::onLastStrongRef(void const*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10P2Operator15onLastStrongRefEPKv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10P2Operator7releaseEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::P2Operator::release() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10P2Operator7releaseEv(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10P2OperatorD1Ev */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::P2Operator::~P2Operator() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10P2OperatorD1Ev(void);

/* Symbol: _ZTv0_n40_N5NSCam12NSCamFeature13NSFeaturePipe10P2Operator15onLastStrongRefEPKv */
/* Demangled: virtual thunk to NSCam::NSCamFeature::NSFeaturePipe::P2Operator::onLastStrongRef(void const*) */
int _ZTv0_n40_N5NSCam12NSCamFeature13NSFeaturePipe10P2Operator15onLastStrongRefEPKv(void);

/* Symbol: _ZN5VSDOF4util11MdpOperator15onLastStrongRefEPKv */
/* Demangled: VSDOF::util::MdpOperator::onLastStrongRef(void const*) */
int _ZN5VSDOF4util11MdpOperator15onLastStrongRefEPKv(void);

/* Symbol: _ZN5VSDOF4util11MdpOperatorC1EPKci */
/* Demangled: VSDOF::util::MdpOperator::MdpOperator(char const*, int) */
int _ZN5VSDOF4util11MdpOperatorC1EPKci(void);

/* Symbol: _ZN5VSDOF4util17excuteMDPWithCropENS0_11sMDP_ConfigE */
/* Demangled: VSDOF::util::excuteMDPWithCrop(VSDOF::util::sMDP_Config) */
int _ZN5VSDOF4util17excuteMDPWithCropENS0_11sMDP_ConfigE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5VSDOF4util19excuteMDPSubProcessENS0_11sMDP_ConfigENS0_14sMDP_extConfigE */
/* Demangled: VSDOF::util::excuteMDPSubProcess(VSDOF::util::sMDP_Config, VSDOF::util::sMDP_extConfig) */
int _ZN5VSDOF4util19excuteMDPSubProcessENS0_11sMDP_ConfigENS0_14sMDP_extConfigE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe20QParamTemplateFiller7setCropEjNS1_10eCropGroupENS_6MPointENS_5MSizeES5_b */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::QParamTemplateFiller::setCrop(unsigned int, NSCam::NSCamFeature::NSFeaturePipe::eCropGroup, NSCam::MPoint, NSCam::MSize, NSCam::MSize, bool) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe20QParamTemplateFiller7setCropEjNS1_10eCropGroupENS_6MPointENS_5MSizeES5_b(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe20QParamTemplateFiller7setInfoEjjjj */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::QParamTemplateFiller::setInfo(unsigned int, unsigned int, unsigned int, unsigned int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe20QParamTemplateFiller7setInfoEjjjj(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe23QParamTemplateGenerator13addModuleInfoEjPv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::QParamTemplateGenerator::addModuleInfo(unsigned int, void*) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe23QParamTemplateGenerator13addModuleInfoEjPv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE7do_copyEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe10P2OperatorC1EPKci */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::P2Operator::P2Operator(char const*, int) */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe10P2OperatorC1EPKci(void);

/* Symbol: _ZN5VSDOF4util17excuteDpIspStreamENS0_12sDpIspConfigE */
/* Demangled: VSDOF::util::excuteDpIspStream(VSDOF::util::sDpIspConfig) */
int _ZN5VSDOF4util17excuteDpIspStreamENS0_12sDpIspConfigE(void);

/* Symbol: _ZN5NSCam12NSCamFeature13NSFeaturePipe23QParamTemplateGenerator10checkValidEv */
/* Demangled: NSCam::NSCamFeature::NSFeaturePipe::QParamTemplateGenerator::checkValid() */
int _ZN5NSCam12NSCamFeature13NSFeaturePipe23QParamTemplateGenerator10checkValidEv(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBMTKCAM_FEATUREPIPE_VSDOF_UTIL_H */
