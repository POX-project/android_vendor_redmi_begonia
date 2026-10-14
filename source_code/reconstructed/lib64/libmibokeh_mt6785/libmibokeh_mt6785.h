/*
 * Reverse-Engineered ABI Specification for: libmibokeh_mt6785.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libmibokeh_mt6785.so
 */

#ifndef BEGONIA_RE_LIBMIBOKEH_MT6785_H
#define BEGONIA_RE_LIBMIBOKEH_MT6785_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN5bokeh11MiBokehImpl15DisableClassifyEv */
/* Demangled: bokeh::MiBokehImpl::DisableClassify() */
int _ZN5bokeh11MiBokehImpl15DisableClassifyEv(void);

/* Symbol: _ZN5bokeh11MiBokehImpl24GetFrontCameraGPUContextEv */
/* Demangled: bokeh::MiBokehImpl::GetFrontCameraGPUContext() */
int _ZN5bokeh11MiBokehImpl24GetFrontCameraGPUContextEv(void);

/* Symbol: _ZN5bokeh19destroyVideoMibokehEPPv */
/* Demangled: bokeh::destroyVideoMibokeh(void**) */
int _ZN5bokeh19destroyVideoMibokehEPPv(void);

/* Symbol: _ZN5bokeh11MiBokehImplD0Ev */
/* Demangled: bokeh::MiBokehImpl::~MiBokehImpl() */
int _ZN5bokeh11MiBokehImplD0Ev(void);

/* Symbol: _ZN5bokeh11MiBokehImpl5BlendEPh */
/* Demangled: bokeh::MiBokehImpl::Blend(unsigned char*) */
int _ZN5bokeh11MiBokehImpl5BlendEPh(void);

/* Symbol: _ZN5bokeh11MiBokehImpl16SetSceneCategoryEii */
/* Demangled: bokeh::MiBokehImpl::SetSceneCategory(int, int) */
int _ZN5bokeh11MiBokehImpl16SetSceneCategoryEii(void);

/* Symbol: _ZN5bokeh11MiBokehImpl8BlendRgbEPhS1_ */
/* Demangled: bokeh::MiBokehImpl::BlendRgb(unsigned char*, unsigned char*) */
int _ZN5bokeh11MiBokehImpl8BlendRgbEPhS1_(void);

/* Symbol: _ZN5bokeh11MiBokehImplD1Ev */
/* Demangled: bokeh::MiBokehImpl::~MiBokehImpl() */
int _ZN5bokeh11MiBokehImplD1Ev(void);

/* Symbol: _ZN5bokeh11MiBokehImpl12BlurAndBlendEPh */
/* Demangled: bokeh::MiBokehImpl::BlurAndBlend(unsigned char*) */
int _ZN5bokeh11MiBokehImpl12BlurAndBlendEPh(void);

/* Symbol: _ZN5bokeh11MiBokehImpl8InitCLUTERKNS_9BokehConfE */
/* Demangled: bokeh::MiBokehImpl::InitCLUT(bokeh::BokehConf const&) */
int _ZN5bokeh11MiBokehImpl8InitCLUTERKNS_9BokehConfE(void);

/* Symbol: _ZN5bokeh11MiBokehImpl17BlendNv21InternalERN2cv3MatES3_iiiiPh */
/* Demangled: bokeh::MiBokehImpl::BlendNv21Internal(cv::Mat&, cv::Mat&, int, int, int, int, unsigned char*) */
int _ZN5bokeh11MiBokehImpl17BlendNv21InternalERN2cv3MatES3_iiiiPh(void);

/* Symbol: _ZN5bokeh23GuidedFilterMaskRefiner6RefineERKN2cv3MatEPS2_ */
/* Demangled: bokeh::GuidedFilterMaskRefiner::Refine(cv::Mat const&, cv::Mat*) */
int _ZN5bokeh23GuidedFilterMaskRefiner6RefineERKN2cv3MatEPS2_(void);

/* Symbol: _ZN5bokeh11MiBokehImpl18SyncAiSceneCaptureEl */
/* Demangled: bokeh::MiBokehImpl::SyncAiSceneCapture(long) */
int _ZN5bokeh11MiBokehImpl18SyncAiSceneCaptureEl(void);

/* Symbol: _ZN5bokeh11MiBokehImpl9BlendNv21EiiiiPh */
/* Demangled: bokeh::MiBokehImpl::BlendNv21(int, int, int, int, unsigned char*) */
int _ZN5bokeh11MiBokehImpl9BlendNv21EiiiiPh(void);

/* Symbol: _ZN5bokeh11MiBokehImpl7PrepareEPh */
/* Demangled: bokeh::MiBokehImpl::Prepare(unsigned char*) */
int _ZN5bokeh11MiBokehImpl7PrepareEPh(void);

/* Symbol: _ZN5bokeh11MiBokehImplD2Ev */
/* Demangled: bokeh::MiBokehImpl::~MiBokehImpl() */
int _ZN5bokeh11MiBokehImplD2Ev(void);

/* Symbol: _ZN5bokeh11MiBokehImpl10SegmentRbgEiiPhS1_ */
/* Demangled: bokeh::MiBokehImpl::SegmentRbg(int, int, unsigned char*, unsigned char*) */
int _ZN5bokeh11MiBokehImpl10SegmentRbgEiiPhS1_(void);

/* Symbol: _ZN5bokeh23GuidedFilterMaskRefinerD2Ev */
/* Demangled: bokeh::GuidedFilterMaskRefiner::~GuidedFilterMaskRefiner() */
int _ZN5bokeh23GuidedFilterMaskRefinerD2Ev(void);

/* Symbol: _ZN5bokeh11MiBokehImpl11InitBigCoreEv */
/* Demangled: bokeh::MiBokehImpl::InitBigCore() */
int _ZN5bokeh11MiBokehImpl11InitBigCoreEv(void);

/* Symbol: _ZN5bokeh11MiBokehImpl11ChangeModelENS_15BokehModelShapeERNS_9BokehConfE */
/* Demangled: bokeh::MiBokehImpl::ChangeModel(bokeh::BokehModelShape, bokeh::BokehConf&) */
int _ZN5bokeh11MiBokehImpl11ChangeModelENS_15BokehModelShapeERNS_9BokehConfE(void);

/* Symbol: _ZN5bokeh11MiBokehImpl16GetRawDepthImageEPvb */
/* Demangled: bokeh::MiBokehImpl::GetRawDepthImage(void*, bool) */
int _ZN5bokeh11MiBokehImpl16GetRawDepthImageEPvb(void);

/* Symbol: _ZN5bokeh11MiBokehImpl15GetMiDepthImageEPvb */
/* Demangled: bokeh::MiBokehImpl::GetMiDepthImage(void*, bool) */
int _ZN5bokeh11MiBokehImpl15GetMiDepthImageEPvb(void);

/* Symbol: _ZN5bokeh11MiBokehImpl19GetResizeDepthImageEPvb */
/* Demangled: bokeh::MiBokehImpl::GetResizeDepthImage(void*, bool) */
int _ZN5bokeh11MiBokehImpl19GetResizeDepthImageEPvb(void);

/* Symbol: _ZN5bokeh11MiBokehImpl19UpdateSceneCategoryEv */
/* Demangled: bokeh::MiBokehImpl::UpdateSceneCategory() */
int _ZN5bokeh11MiBokehImpl19UpdateSceneCategoryEv(void);

/* Symbol: _ZN5bokeh11MiBokehImpl15CategoryOutcomeEv */
/* Demangled: bokeh::MiBokehImpl::CategoryOutcome() */
int _ZN5bokeh11MiBokehImpl15CategoryOutcomeEv(void);

/* Symbol: _ZN5bokeh11MiBokehImpl13SegAndEnhanceEPhS1_ */
/* Demangled: bokeh::MiBokehImpl::SegAndEnhance(unsigned char*, unsigned char*) */
int _ZN5bokeh11MiBokehImpl13SegAndEnhanceEPhS1_(void);

/* Symbol: _ZN5bokeh11MiBokehImpl11DisableBlurEv */
/* Demangled: bokeh::MiBokehImpl::DisableBlur() */
int _ZN5bokeh11MiBokehImpl11DisableBlurEv(void);

/* Symbol: _ZN5bokeh11MiBokehImpl10InitBlurerERNSt6__ndk110unique_ptrINS_6BlurerENS1_14default_deleteIS3_EEEERKNS_8BlurConfE */
/* Demangled: bokeh::MiBokehImpl::InitBlurer(std::__ndk1::unique_ptr<bokeh::Blurer, std::__ndk1::default_delete<bokeh::Blurer> >&, bokeh::BlurConf const&) */
int _ZN5bokeh11MiBokehImpl10InitBlurerERNSt6__ndk110unique_ptrINS_6BlurerENS1_14default_deleteIS3_EEEERKNS_8BlurConfE(void);

/* Symbol: _ZN5bokeh11MiBokehImpl17SetAiScenePreviewEil */
/* Demangled: bokeh::MiBokehImpl::SetAiScenePreview(int, long) */
int _ZN5bokeh11MiBokehImpl17SetAiScenePreviewEil(void);

/* Symbol: _ZN5bokeh11MiBokehImpl14EnableClassifyEv */
/* Demangled: bokeh::MiBokehImpl::EnableClassify() */
int _ZN5bokeh11MiBokehImpl14EnableClassifyEv(void);

/* Symbol: _ZN5bokeh11MiBokehImpl12MaskForBlendEiiPPN2cv3MatEPNS1_5Rect_IiEE */
/* Demangled: bokeh::MiBokehImpl::MaskForBlend(int, int, cv::Mat**, cv::Rect_<int>*) */
int _ZN5bokeh11MiBokehImpl12MaskForBlendEiiPPN2cv3MatEPNS1_5Rect_IiEE(void);

/* Symbol: _ZN5bokeh14MiBokehFactory8LoadConfEv */
/* Demangled: bokeh::MiBokehFactory::LoadConf() */
int _ZN5bokeh14MiBokehFactory8LoadConfEv(void);

/* Symbol: _ZN5bokeh13dumpYuvBufferEPKcS1_Phiiiibib */
/* Demangled: bokeh::dumpYuvBuffer(char const*, char const*, unsigned char*, int, int, int, int, bool, int, bool) */
int _ZN5bokeh13dumpYuvBufferEPKcS1_Phiiiibib(void);

/* Symbol: _ZN5bokeh11MiBokehImpl15setStylizeParamERNS_13stylize_paramE */
/* Demangled: bokeh::MiBokehImpl::setStylizeParam(bokeh::stylize_param&) */
int _ZN5bokeh11MiBokehImpl15setStylizeParamERNS_13stylize_paramE(void);

/* Symbol: _ZN5bokeh11MiBokehImpl15SetExposureTimeEf */
/* Demangled: bokeh::MiBokehImpl::SetExposureTime(float) */
int _ZN5bokeh11MiBokehImpl15SetExposureTimeEf(void);

/* Symbol: _ZN5bokeh11MiBokehImpl5BokehEPhS1_ */
/* Demangled: bokeh::MiBokehImpl::Bokeh(unsigned char*, unsigned char*) */
int _ZN5bokeh11MiBokehImpl5BokehEPhS1_(void);

/* Symbol: _ZN5bokeh11MiBokehImpl16BlurAndBlendNv21EiiiiPh */
/* Demangled: bokeh::MiBokehImpl::BlurAndBlendNv21(int, int, int, int, unsigned char*) */
int _ZN5bokeh11MiBokehImpl16BlurAndBlendNv21EiiiiPh(void);

/* Symbol: _ZN5bokeh7getDataEiiiiPhS0_ */
/* Demangled: bokeh::getData(int, int, int, int, unsigned char*, unsigned char*) */
int _ZN5bokeh7getDataEiiiiPhS0_(void);

/* Symbol: _ZN5bokeh11MiBokehImpl10SegAndBlurEPh */
/* Demangled: bokeh::MiBokehImpl::SegAndBlur(unsigned char*) */
int _ZN5bokeh11MiBokehImpl10SegAndBlurEPh(void);

/* Symbol: _ZN5bokeh11MiBokehImpl13GetDepthImageEPvPhiiiiib */
/* Demangled: bokeh::MiBokehImpl::GetDepthImage(void*, unsigned char*, int, int, int, int, int, bool) */
int _ZN5bokeh11MiBokehImpl13GetDepthImageEPvPhiiiiib(void);

/* Symbol: _ZN5bokeh11MiBokehImpl11EndFunctionEv */
/* Demangled: bokeh::MiBokehImpl::EndFunction() */
int _ZN5bokeh11MiBokehImpl11EndFunctionEv(void);

/* Symbol: _ZN5bokeh15getMibokehValueEv */
/* Demangled: bokeh::getMibokehValue() */
int _ZN5bokeh15getMibokehValueEv(void);

/* Symbol: _ZN5bokeh11MiBokehImpl9InitModelERKNS_9BokehConfE */
/* Demangled: bokeh::MiBokehImpl::InitModel(bokeh::BokehConf const&) */
int _ZN5bokeh11MiBokehImpl9InitModelERKNS_9BokehConfE(void);

/* Symbol: _ZN5bokeh11MiBokehImpl13StartFunctionEv */
/* Demangled: bokeh::MiBokehImpl::StartFunction() */
int _ZN5bokeh11MiBokehImpl13StartFunctionEv(void);

/* Symbol: _ZN5bokeh11MiBokehImpl11InitBlenderERKNS_9BokehConfE */
/* Demangled: bokeh::MiBokehImpl::InitBlender(bokeh::BokehConf const&) */
int _ZN5bokeh11MiBokehImpl11InitBlenderERKNS_9BokehConfE(void);

/* Symbol: _ZN5bokeh11MiBokehImpl8FillConfEiiiifi */
/* Demangled: bokeh::MiBokehImpl::FillConf(int, int, int, int, float, int) */
int _ZN5bokeh11MiBokehImpl8FillConfEiiiifi(void);

/* Symbol: _ZN5bokeh11MiBokehImpl12BlurAndBlendEPhS1_ */
/* Demangled: bokeh::MiBokehImpl::BlurAndBlend(unsigned char*, unsigned char*) */
int _ZN5bokeh11MiBokehImpl12BlurAndBlendEPhS1_(void);

/* Symbol: _ZN5bokeh11MiBokehImpl5BlendEPhS1_ */
/* Demangled: bokeh::MiBokehImpl::Blend(unsigned char*, unsigned char*) */
int _ZN5bokeh11MiBokehImpl5BlendEPhS1_(void);

/* Symbol: _ZN5bokeh11MiBokehImpl11UpdateSceneEl */
/* Demangled: bokeh::MiBokehImpl::UpdateScene(long) */
int _ZN5bokeh11MiBokehImpl11UpdateSceneEl(void);

/* Symbol: _ZN5bokeh14MiBokehFactory8NewBokehEv */
/* Demangled: bokeh::MiBokehFactory::NewBokeh() */
int _ZN5bokeh14MiBokehFactory8NewBokehEv(void);

/* Symbol: _ZN5bokeh11MiBokehImpl7SetModeENS_9VideoModeE */
/* Demangled: bokeh::MiBokehImpl::SetMode(bokeh::VideoMode) */
int _ZN5bokeh11MiBokehImpl7SetModeENS_9VideoModeE(void);

/* Symbol: _ZN5bokeh11MiBokehImpl22AiSceneToSceneCategoryEii */
/* Demangled: bokeh::MiBokehImpl::AiSceneToSceneCategory(int, int) */
int _ZN5bokeh11MiBokehImpl22AiSceneToSceneCategoryEii(void);

/* Symbol: _ZN5bokeh11MiBokehImpl12SmartSegmentEv */
/* Demangled: bokeh::MiBokehImpl::SmartSegment() */
int _ZN5bokeh11MiBokehImpl12SmartSegmentEv(void);

/* Symbol: _ZN5bokeh11MiBokehImpl16GetSceneCategoryEPiS1_ */
/* Demangled: bokeh::MiBokehImpl::GetSceneCategory(int*, int*) */
int _ZN5bokeh11MiBokehImpl16GetSceneCategoryEPiS1_(void);

/* Symbol: _ZN5bokeh16initVideoMibokehEPPv */
/* Demangled: bokeh::initVideoMibokeh(void**) */
int _ZN5bokeh16initVideoMibokehEPPv(void);

/* Symbol: _ZN5bokeh11MiBokehImpl19GetOriginDepthImageEPvb */
/* Demangled: bokeh::MiBokehImpl::GetOriginDepthImage(void*, bool) */
int _ZN5bokeh11MiBokehImpl19GetOriginDepthImageEPvb(void);

/* Symbol: _ZN5bokeh11MiBokehImpl13UpdateEnhanceEfPhS1_ */
/* Demangled: bokeh::MiBokehImpl::UpdateEnhance(float, unsigned char*, unsigned char*) */
int _ZN5bokeh11MiBokehImpl13UpdateEnhanceEfPhS1_(void);

/* Symbol: _ZN5bokeh11MiBokehImpl12StylizeBokehEPhS1_ */
/* Demangled: bokeh::MiBokehImpl::StylizeBokeh(unsigned char*, unsigned char*) */
int _ZN5bokeh11MiBokehImpl12StylizeBokehEPhS1_(void);

/* Symbol: _ZN5bokeh11MiBokehImpl12SetSoftBlendEif */
/* Demangled: bokeh::MiBokehImpl::SetSoftBlend(int, float) */
int _ZN5bokeh11MiBokehImpl12SetSoftBlendEif(void);

/* Symbol: _ZN5bokeh23GuidedFilterMaskRefinerD0Ev */
/* Demangled: bokeh::GuidedFilterMaskRefiner::~GuidedFilterMaskRefiner() */
int _ZN5bokeh23GuidedFilterMaskRefinerD0Ev(void);

/* Symbol: _ZN5bokeh11MiBokehImplC1Ev */
/* Demangled: bokeh::MiBokehImpl::MiBokehImpl() */
int _ZN5bokeh11MiBokehImplC1Ev(void);

/* Symbol: _ZN5bokeh11MiBokehImpl16GetGPUAvgContextEv */
/* Demangled: bokeh::MiBokehImpl::GetGPUAvgContext() */
int _ZN5bokeh11MiBokehImpl16GetGPUAvgContextEv(void);

/* Symbol: _ZNK5bokeh9BokehConf8ToStringEv */
/* Demangled: bokeh::BokehConf::ToString() const */
int _ZNK5bokeh9BokehConf8ToStringEv(void);

/* Symbol: _ZN5bokeh11MiBokehImpl10InitBlurerERKNS_9BokehConfE */
/* Demangled: bokeh::MiBokehImpl::InitBlurer(bokeh::BokehConf const&) */
int _ZN5bokeh11MiBokehImpl10InitBlurerERKNS_9BokehConfE(void);

/* Symbol: _ZN5bokeh11MiBokehImpl11EnhanceNv21EiiiiPh */
/* Demangled: bokeh::MiBokehImpl::EnhanceNv21(int, int, int, int, unsigned char*) */
int _ZN5bokeh11MiBokehImpl11EnhanceNv21EiiiiPh(void);

/* Symbol: _ZN5bokeh15setMibokehValueEi */
/* Demangled: bokeh::setMibokehValue(int) */
int _ZN5bokeh15setMibokehValueEi(void);

/* Symbol: _ZN5bokeh11MiBokehImpl11InitContextERKNS_9BokehConfE */
/* Demangled: bokeh::MiBokehImpl::InitContext(bokeh::BokehConf const&) */
int _ZN5bokeh11MiBokehImpl11InitContextERKNS_9BokehConfE(void);

/* Symbol: _ZN5bokeh11MiBokehImpl10UpdateFlipEi */
/* Demangled: bokeh::MiBokehImpl::UpdateFlip(int) */
int _ZN5bokeh11MiBokehImpl10UpdateFlipEi(void);

/* Symbol: _ZN5bokeh23GuidedFilterMaskRefiner4InitERKNS_11SegmentConfE */
/* Demangled: bokeh::GuidedFilterMaskRefiner::Init(bokeh::SegmentConf const&) */
int _ZN5bokeh23GuidedFilterMaskRefiner4InitERKNS_11SegmentConfE(void);

/* Symbol: _ZN5bokeh11MiBokehImpl4InitERKNS_9BokehConfEPKc */
/* Demangled: bokeh::MiBokehImpl::Init(bokeh::BokehConf const&, char const*) */
int _ZN5bokeh11MiBokehImpl4InitERKNS_9BokehConfEPKc(void);

/* Symbol: _ZN5bokeh11MiBokehImpl13InitSegmenterERKNS_9BokehConfEPKc */
/* Demangled: bokeh::MiBokehImpl::InitSegmenter(bokeh::BokehConf const&, char const*) */
int _ZN5bokeh11MiBokehImpl13InitSegmenterERKNS_9BokehConfEPKc(void);

/* Symbol: _ZN5bokeh11MiBokehImpl19UpdateDecoAperatureEf */
/* Demangled: bokeh::MiBokehImpl::UpdateDecoAperature(float) */
int _ZN5bokeh11MiBokehImpl19UpdateDecoAperatureEf(void);

/* Symbol: _ZN5bokeh8pushDataEiiiiibPh */
/* Demangled: bokeh::pushData(int, int, int, int, int, bool, unsigned char*) */
int _ZN5bokeh8pushDataEiiiiibPh(void);

/* Symbol: _ZN5bokeh14MiBokehFactory8LoadConfEPKc */
/* Demangled: bokeh::MiBokehFactory::LoadConf(char const*) */
int _ZN5bokeh14MiBokehFactory8LoadConfEPKc(void);

/* Symbol: _ZN5bokeh11MiBokehImpl11SegAndBlendEiiPhS1_ */
/* Demangled: bokeh::MiBokehImpl::SegAndBlend(int, int, unsigned char*, unsigned char*) */
int _ZN5bokeh11MiBokehImpl11SegAndBlendEiiPhS1_(void);

/* Symbol: _ZN5bokeh11MiBokehImpl13GetDepthImageEPvb */
/* Demangled: bokeh::MiBokehImpl::GetDepthImage(void*, bool) */
int _ZN5bokeh11MiBokehImpl13GetDepthImageEPvb(void);

/* Symbol: MIBOCKEH_1.0 */
/* Demangled: MIBOCKEH_1.0 */
extern void* obj_MIBOCKEH_1_0 __asm__("MIBOCKEH_1.0");

/* Symbol: _ZN5bokeh11MiBokehImplC2Ev */
/* Demangled: bokeh::MiBokehImpl::MiBokehImpl() */
int _ZN5bokeh11MiBokehImplC2Ev(void);

/* Symbol: _ZN5bokeh11MiBokehImpl12UpdateSizeInEiiiiib */
/* Demangled: bokeh::MiBokehImpl::UpdateSizeIn(int, int, int, int, int, bool) */
int _ZN5bokeh11MiBokehImpl12UpdateSizeInEiiiiib(void);

/* Symbol: _ZN5bokeh11MiBokehImpl15UpdateAperatureEf */
/* Demangled: bokeh::MiBokehImpl::UpdateAperature(float) */
int _ZN5bokeh11MiBokehImpl15UpdateAperatureEf(void);

/* Symbol: _ZN5bokeh11MiBokehImpl7SegmentEv */
/* Demangled: bokeh::MiBokehImpl::Segment() */
int _ZN5bokeh11MiBokehImpl7SegmentEv(void);

/* Symbol: _ZN5bokeh11MiBokehImpl5BokehEPvPNS_9_MIBUFFEREfiS3_ */
/* Demangled: bokeh::MiBokehImpl::Bokeh(void*, bokeh::_MIBUFFER*, float, int, bokeh::_MIBUFFER*) */
int _ZN5bokeh11MiBokehImpl5BokehEPvPNS_9_MIBUFFEREfiS3_(void);

/* Symbol: _ZN5bokeh11MiBokehImpl9AdaptConfERKNS_9BokehConfE */
/* Demangled: bokeh::MiBokehImpl::AdaptConf(bokeh::BokehConf const&) */
int _ZN5bokeh11MiBokehImpl9AdaptConfERKNS_9BokehConfE(void);

/* Symbol: _ZN5bokeh11MiBokehImpl10EnableBlurEv */
/* Demangled: bokeh::MiBokehImpl::EnableBlur() */
int _ZN5bokeh11MiBokehImpl10EnableBlurEv(void);

/* Symbol: _ZN5bokeh13dumpYuvBufferEPKcPhiiiibib */
/* Demangled: bokeh::dumpYuvBuffer(char const*, unsigned char*, int, int, int, int, bool, int, bool) */
int _ZN5bokeh13dumpYuvBufferEPKcPhiiiibib(void);

/* Symbol: _ZN5bokeh11MiBokehImpl10SegAndBlurEv */
/* Demangled: bokeh::MiBokehImpl::SegAndBlur() */
int _ZN5bokeh11MiBokehImpl10SegAndBlurEv(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBMIBOKEH_MT6785_H */
