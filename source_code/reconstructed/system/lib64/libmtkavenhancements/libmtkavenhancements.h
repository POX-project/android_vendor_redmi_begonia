/*
 * Reverse-Engineered ABI Specification for: libmtkavenhancements.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libmtkavenhancements.so
 */

#ifndef BEGONIA_RE_LIBMTKAVENHANCEMENTS_H
#define BEGONIA_RE_LIBMTKAVENHANCEMENTS_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN7android14MtkMPEG4WriterD2Ev */
/* Demangled: android::MtkMPEG4Writer::~MtkMPEG4Writer() */
int _ZN7android14MtkMPEG4WriterD2Ev(void);

/* Symbol: _ZN7android12MtkACodecExt18setViLTEParametersERKNS_2spINS_8IOMXNodeEEERKNS1_INS_8AMessageEEEbb */
/* Demangled: android::MtkACodecExt::setViLTEParameters(android::sp<android::IOMXNode> const&, android::sp<android::AMessage> const&, bool, bool) */
int _ZN7android12MtkACodecExt18setViLTEParametersERKNS_2spINS_8IOMXNodeEEERKNS1_INS_8AMessageEEEbb(void);

/* Symbol: _ZTVN7android15MtkImageDecoderE */
/* Demangled: vtable for android::MtkImageDecoder */
extern void* _ZTVN7android15MtkImageDecoderE;

/* Symbol: _ZN7android15MtkAVStageUtilsD0Ev */
/* Demangled: android::MtkAVStageUtils::~MtkAVStageUtils() */
int _ZN7android15MtkAVStageUtilsD0Ev(void);

/* Symbol: _ZN7android8setRoiOnERKNS_2spINS_8IOMXNodeEEERKNS0_INS_8AMessageEEERi */
/* Demangled: android::setRoiOn(android::sp<android::IOMXNode> const&, android::sp<android::AMessage> const&, int&) */
int _ZN7android8setRoiOnERKNS_2spINS_8IOMXNodeEEERKNS0_INS_8AMessageEEERi(void);

/* Symbol: _ZN7android12MtkACodecExt16setThumbnailModeEPKcRKNS_2spINS_8IOMXNodeEEERKNS3_INS_8AMessageEEEb */
/* Demangled: android::MtkACodecExt::setThumbnailMode(char const*, android::sp<android::IOMXNode> const&, android::sp<android::AMessage> const&, bool) */
int _ZN7android12MtkACodecExt16setThumbnailModeEPKcRKNS_2spINS_8IOMXNodeEEERKNS3_INS_8AMessageEEEb(void);

/* Symbol: _ZN7android14InstanceLoaderINS_14AVStageFactoryEE14createInstanceEPKc */
/* Demangled: android::InstanceLoader<android::AVStageFactory>::createInstance(char const*) */
int _ZN7android14InstanceLoaderINS_14AVStageFactoryEE14createInstanceEPKc(void);

/* Symbol: _ZN7android15MtkImageDecoder19extractInternal_extEv */
/* Demangled: android::MtkImageDecoder::extractInternal_ext() */
int _ZN7android15MtkImageDecoder19extractInternal_extEv(void);

/* Symbol: _ZN7android9ACodecExtC1ERKNSt3__110shared_ptrINS_17ACodecExtCallbackEEE */
/* Demangled: android::ACodecExt::ACodecExt(std::__1::shared_ptr<android::ACodecExtCallback> const&) */
int _ZN7android9ACodecExtC1ERKNSt3__110shared_ptrINS_17ACodecExtCallbackEEE(void);

/* Symbol: _ZN7android14InstanceLoaderINS_12AVStageUtilsEE14createInstanceEPKc */
/* Demangled: android::InstanceLoader<android::AVStageUtils>::createInstance(char const*) */
int _ZN7android14InstanceLoaderINS_12AVStageUtilsEE14createInstanceEPKc(void);

/* Symbol: _ZN7android14MtkMPEG4WriterD1Ev */
/* Demangled: android::MtkMPEG4Writer::~MtkMPEG4Writer() */
int _ZN7android14MtkMPEG4WriterD1Ev(void);

/* Symbol: _ZN7android27MEDIA_MIMETYPE_AUDIO_WMAPROE */
/* Demangled: android::MEDIA_MIMETYPE_AUDIO_WMAPRO */
extern void* _ZN7android27MEDIA_MIMETYPE_AUDIO_WMAPROE;

/* Symbol: _ZN7android15MtkImageDecoder16onOutputReceivedERKNS_2spINS_16MediaCodecBufferEEERKNS1_INS_8AMessageEEElPb */
/* Demangled: android::MtkImageDecoder::onOutputReceived(android::sp<android::MediaCodecBuffer> const&, android::sp<android::AMessage> const&, long, bool*) */
int _ZN7android15MtkImageDecoder16onOutputReceivedERKNS_2spINS_16MediaCodecBufferEEERKNS1_INS_8AMessageEEElPb(void);

/* Symbol: _ZTTN7android15MtkImageDecoder12DecodeThreadE */
/* Demangled: VTT for android::MtkImageDecoder::DecodeThread */
extern void* _ZTTN7android15MtkImageDecoder12DecodeThreadE;

/* Symbol: _ZN7android15MtkImageDecoderC2ERKNS_7AStringERKNS_2spINS_8MetaDataEEERKNS4_INS_12IMediaSourceEEEm */
/* Demangled: android::MtkImageDecoder::MtkImageDecoder(android::AString const&, android::sp<android::MetaData> const&, android::sp<android::IMediaSource> const&, unsigned long) */
int _ZN7android15MtkImageDecoderC2ERKNS_7AStringERKNS_2spINS_8MetaDataEEERKNS4_INS_12IMediaSourceEEEm(void);

/* Symbol: _ZN7android15MtkImageDecoder12DecodeThread10threadLoopEv */
/* Demangled: android::MtkImageDecoder::DecodeThread::threadLoop() */
int _ZN7android15MtkImageDecoder12DecodeThread10threadLoopEv(void);

/* Symbol: _ZN7android12MtkACodecExtC2ERKNSt3__110shared_ptrINS_17ACodecExtCallbackEEE */
/* Demangled: android::MtkACodecExt::MtkACodecExt(std::__1::shared_ptr<android::ACodecExtCallback> const&) */
int _ZN7android12MtkACodecExtC2ERKNSt3__110shared_ptrINS_17ACodecExtCallbackEEE(void);

/* Symbol: _ZN7android20getDstColorFormatExtE22android_pixel_format_tP20OMX_COLOR_FORMATTYPEPi */
/* Demangled: android::getDstColorFormatExt(android_pixel_format_t, OMX_COLOR_FORMATTYPE*, int*) */
int _ZN7android20getDstColorFormatExtE22android_pixel_format_tP20OMX_COLOR_FORMATTYPEPi(void);

/* Symbol: _ZN7android14MtkMPEG4WriterD0Ev */
/* Demangled: android::MtkMPEG4Writer::~MtkMPEG4Writer() */
int _ZN7android14MtkMPEG4WriterD0Ev(void);

/* Symbol: _ZTCN7android15MtkImageDecoder12DecodeThreadE0_NS_6ThreadE */
/* Demangled: construction vtable for android::Thread-in-android::MtkImageDecoder::DecodeThread */
extern void* _ZTCN7android15MtkImageDecoder12DecodeThreadE0_NS_6ThreadE;

/* Symbol: _ZN7android26MEDIA_MIMETYPE_VIDEO_MJPEGE */
/* Demangled: android::MEDIA_MIMETYPE_VIDEO_MJPEG */
extern void* _ZN7android26MEDIA_MIMETYPE_VIDEO_MJPEGE;

/* Symbol: _ZN7android12AVStageUtilsC2Ev */
/* Demangled: android::AVStageUtils::AVStageUtils() */
int _ZN7android12AVStageUtilsC2Ev(void);

/* Symbol: _ZN7android19allocHeicVideoFrameERKNS_2spINS_8MetaDataEEEiiiiib */
/* Demangled: android::allocHeicVideoFrame(android::sp<android::MetaData> const&, int, int, int, int, int, bool) */
int _ZN7android19allocHeicVideoFrameERKNS_2spINS_8MetaDataEEEiiiiib(void);

/* Symbol: _ZTVN7android14AVStageFactoryE */
/* Demangled: vtable for android::AVStageFactory */
extern void* _ZTVN7android14AVStageFactoryE;

/* Symbol: _ZN7android14MtkMPEG4WriterC2Ei */
/* Demangled: android::MtkMPEG4Writer::MtkMPEG4Writer(int) */
int _ZN7android14MtkMPEG4WriterC2Ei(void);

/* Symbol: _ZN7android12MtkACodecExtD2Ev */
/* Demangled: android::MtkACodecExt::~MtkACodecExt() */
int _ZN7android12MtkACodecExtD2Ev(void);

/* Symbol: _ZN7android17MtkAVStageFactoryC2Ev */
/* Demangled: android::MtkAVStageFactory::MtkAVStageFactory() */
int _ZN7android17MtkAVStageFactoryC2Ev(void);

/* Symbol: _ZN7android12MtkACodecExt20setOmxReadMultiFrameERKNS_2spINS_8IOMXNodeEEERKNS1_INS_8AMessageEEE */
/* Demangled: android::MtkACodecExt::setOmxReadMultiFrame(android::sp<android::IOMXNode> const&, android::sp<android::AMessage> const&) */
int _ZN7android12MtkACodecExt20setOmxReadMultiFrameERKNS_2spINS_8IOMXNodeEEERKNS1_INS_8AMessageEEE(void);

/* Symbol: _ZN7android14AVStageFactory5sInstE */
/* Demangled: android::AVStageFactory::sInst */
extern void* _ZN7android14AVStageFactory5sInstE;

/* Symbol: _ZN7android14AVStageFactoryC2Ev */
/* Demangled: android::AVStageFactory::AVStageFactory() */
int _ZN7android14AVStageFactoryC2Ev(void);

/* Symbol: _ZN7android17MtkAVStageFactory18createImageDecoderERKNS_7AStringERKNS_2spINS_8MetaDataEEERKNS4_INS_12IMediaSourceEEERKm */
/* Demangled: android::MtkAVStageFactory::createImageDecoder(android::AString const&, android::sp<android::MetaData> const&, android::sp<android::IMediaSource> const&, unsigned long const&) */
int _ZN7android17MtkAVStageFactory18createImageDecoderERKNS_7AStringERKNS_2spINS_8MetaDataEEERKNS4_INS_12IMediaSourceEEERKm(void);

/* Symbol: _ZN7android11setRoiLeaseERKNS_2spINS_8IOMXNodeEEERKNS0_INS_8AMessageEEERi */
/* Demangled: android::setRoiLease(android::sp<android::IOMXNode> const&, android::sp<android::AMessage> const&, int&) */
int _ZN7android11setRoiLeaseERKNS_2spINS_8IOMXNodeEEERKNS0_INS_8AMessageEEERi(void);

/* Symbol: _ZN7android15MtkImageDecoderD2Ev */
/* Demangled: android::MtkImageDecoder::~MtkImageDecoder() */
int _ZN7android15MtkImageDecoderD2Ev(void);

/* Symbol: _ZN7android12AVStageUtilsC1Ev */
/* Demangled: android::AVStageUtils::AVStageUtils() */
int _ZN7android12AVStageUtilsC1Ev(void);

/* Symbol: _ZN7android14MtkMPEG4WriterC1Ei */
/* Demangled: android::MtkMPEG4Writer::MtkMPEG4Writer(int) */
int _ZN7android14MtkMPEG4WriterC1Ei(void);

/* Symbol: _ZN7android12MtkACodecExt15setupADPCMCodecERKNS_2spINS_8IOMXNodeEEEPKcRKNS1_INS_8AMessageEEE */
/* Demangled: android::MtkACodecExt::setupADPCMCodec(android::sp<android::IOMXNode> const&, char const*, android::sp<android::AMessage> const&) */
int _ZN7android12MtkACodecExt15setupADPCMCodecERKNS_2spINS_8IOMXNodeEEEPKcRKNS1_INS_8AMessageEEE(void);

/* Symbol: _ZN7android12MtkACodecExtD1Ev */
/* Demangled: android::MtkACodecExt::~MtkACodecExt() */
int _ZN7android12MtkACodecExtD1Ev(void);

/* Symbol: _ZN7android14InstanceLoaderINS_14AVStageFactoryEE4mLibE */
/* Demangled: android::InstanceLoader<android::AVStageFactory>::mLib */
extern void* _ZN7android14InstanceLoaderINS_14AVStageFactoryEE4mLibE;

/* Symbol: __cfi_check */
/* Demangled: __cfi_check */
int fn___cfi_check(void) __asm__("__cfi_check");

/* Symbol: _ZTVN7android17MtkAVStageFactoryE */
/* Demangled: vtable for android::MtkAVStageFactory */
extern void* _ZTVN7android17MtkAVStageFactoryE;

/* Symbol: _ZN7android17MtkAVStageFactoryC1Ev */
/* Demangled: android::MtkAVStageFactory::MtkAVStageFactory() */
int _ZN7android17MtkAVStageFactoryC1Ev(void);

/* Symbol: _ZN7android12AVStageUtilsD2Ev */
/* Demangled: android::AVStageUtils::~AVStageUtils() */
int _ZN7android12AVStageUtilsD2Ev(void);

/* Symbol: _ZN7android6MtkRoiC2Ev */
/* Demangled: android::MtkRoi::MtkRoi() */
int _ZN7android6MtkRoiC2Ev(void);

/* Symbol: _ZN7android15MtkImageDecoder25onGetFormatAndSeekOptionsEliPNS_10MediaTrack11ReadOptionsEPNS_2spINS_7SurfaceEEE */
/* Demangled: android::MtkImageDecoder::onGetFormatAndSeekOptions(long, int, android::MediaTrack::ReadOptions*, android::sp<android::Surface>*) */
int _ZN7android15MtkImageDecoder25onGetFormatAndSeekOptionsEliPNS_10MediaTrack11ReadOptionsEPNS_2spINS_7SurfaceEEE(void);

/* Symbol: _ZN7android15MtkImageDecoderD1Ev */
/* Demangled: android::MtkImageDecoder::~MtkImageDecoder() */
int _ZN7android15MtkImageDecoderD1Ev(void);

/* Symbol: _ZN7android14AVStageFactoryC1Ev */
/* Demangled: android::AVStageFactory::AVStageFactory() */
int _ZN7android14AVStageFactoryC1Ev(void);

/* Symbol: _ZN7android17MtkAVStageFactoryD2Ev */
/* Demangled: android::MtkAVStageFactory::~MtkAVStageFactory() */
int _ZN7android17MtkAVStageFactoryD2Ev(void);

/* Symbol: _ZTVN7android14MtkMPEG4WriterE */
/* Demangled: vtable for android::MtkMPEG4Writer */
extern void* _ZTVN7android14MtkMPEG4WriterE;

/* Symbol: _ZN7android12MtkACodecExtD0Ev */
/* Demangled: android::MtkACodecExt::~MtkACodecExt() */
int _ZN7android12MtkACodecExtD0Ev(void);

/* Symbol: _ZN7android12MtkACodecExt13setupWMACodecERKNS_2spINS_8IOMXNodeEEEPKcRKNS1_INS_8AMessageEEERbRi */
/* Demangled: android::MtkACodecExt::setupWMACodec(android::sp<android::IOMXNode> const&, char const*, android::sp<android::AMessage> const&, bool&, int&) */
int _ZN7android12MtkACodecExt13setupWMACodecERKNS_2spINS_8IOMXNodeEEEPKcRKNS1_INS_8AMessageEEERbRi(void);

/* Symbol: _ZN7android12MtkACodecExt14setupAlacCodecERKNS_2spINS_8IOMXNodeEEERKNS1_INS_8AMessageEEE */
/* Demangled: android::MtkACodecExt::setupAlacCodec(android::sp<android::IOMXNode> const&, android::sp<android::AMessage> const&) */
int _ZN7android12MtkACodecExt14setupAlacCodecERKNS_2spINS_8IOMXNodeEEERKNS1_INS_8AMessageEEE(void);

/* Symbol: _ZN7android12MtkACodecExt13setAVSyncTimeERKNS_2spINS_8IOMXNodeEEEl */
/* Demangled: android::MtkACodecExt::setAVSyncTime(android::sp<android::IOMXNode> const&, long) */
int _ZN7android12MtkACodecExt13setAVSyncTimeERKNS_2spINS_8IOMXNodeEEEl(void);

/* Symbol: _ZTVN7android12AVStageUtilsE */
/* Demangled: vtable for android::AVStageUtils */
extern void* _ZTVN7android12AVStageUtilsE;

/* Symbol: _ZN7android30MEDIA_MIMETYPE_VIDEO_MSMPEG4V3E */
/* Demangled: android::MEDIA_MIMETYPE_VIDEO_MSMPEG4V3 */
extern void* _ZN7android30MEDIA_MIMETYPE_VIDEO_MSMPEG4V3E;

/* Symbol: _ZN7android14AVStageFactoryD2Ev */
/* Demangled: android::AVStageFactory::~AVStageFactory() */
int _ZN7android14AVStageFactoryD2Ev(void);

/* Symbol: createVendorAVUtils */
/* Demangled: createVendorAVUtils */
int createVendorAVUtils(void);

/* Symbol: _ZN7android6MtkRoiC1Ev */
/* Demangled: android::MtkRoi::MtkRoi() */
int _ZN7android6MtkRoiC1Ev(void);

/* Symbol: _ZN7android9ACodecExtC2ERKNSt3__110shared_ptrINS_17ACodecExtCallbackEEE */
/* Demangled: android::ACodecExt::ACodecExt(std::__1::shared_ptr<android::ACodecExtCallback> const&) */
int _ZN7android9ACodecExtC2ERKNSt3__110shared_ptrINS_17ACodecExtCallbackEEE(void);

/* Symbol: _ZN7android12MtkACodecExt15setupAudioCodecERKNS_2spINS_8IOMXNodeEEEPKcbRKNS1_INS_8AMessageEEERbRi */
/* Demangled: android::MtkACodecExt::setupAudioCodec(android::sp<android::IOMXNode> const&, char const*, bool, android::sp<android::AMessage> const&, bool&, int&) */
int _ZN7android12MtkACodecExt15setupAudioCodecERKNS_2spINS_8IOMXNodeEEEPKcbRKNS1_INS_8AMessageEEERbRi(void);

/* Symbol: _ZN7android14AVStageFactory18createImageDecoderERKNS_7AStringERKNS_2spINS_8MetaDataEEERKNS4_INS_12IMediaSourceEEERKm */
/* Demangled: android::AVStageFactory::createImageDecoder(android::AString const&, android::sp<android::MetaData> const&, android::sp<android::IMediaSource> const&, unsigned long const&) */
int _ZN7android14AVStageFactory18createImageDecoderERKNS_7AStringERKNS_2spINS_8MetaDataEEERKNS4_INS_12IMediaSourceEEERKm(void);

/* Symbol: _ZN7android14AVStageFactory15createACodecExtERKNSt3__110shared_ptrINS_17ACodecExtCallbackEEE */
/* Demangled: android::AVStageFactory::createACodecExt(std::__1::shared_ptr<android::ACodecExtCallback> const&) */
int _ZN7android14AVStageFactory15createACodecExtERKNSt3__110shared_ptrINS_17ACodecExtCallbackEEE(void);

/* Symbol: _ZN7android12AVStageUtilsD1Ev */
/* Demangled: android::AVStageUtils::~AVStageUtils() */
int _ZN7android12AVStageUtilsD1Ev(void);

/* Symbol: _ZN7android24MEDIA_MIMETYPE_VIDEO_FLVE */
/* Demangled: android::MEDIA_MIMETYPE_VIDEO_FLV */
extern void* _ZN7android24MEDIA_MIMETYPE_VIDEO_FLVE;

/* Symbol: _ZN7android15MtkAVStageUtilsC2Ev */
/* Demangled: android::MtkAVStageUtils::MtkAVStageUtils() */
int _ZN7android15MtkAVStageUtilsC2Ev(void);

/* Symbol: _ZN7android9ACodecExtD2Ev */
/* Demangled: android::ACodecExt::~ACodecExt() */
int _ZN7android9ACodecExtD2Ev(void);

/* Symbol: _ZTVN7android12MtkACodecExtE */
/* Demangled: vtable for android::MtkACodecExt */
extern void* _ZTVN7android12MtkACodecExtE;

/* Symbol: _ZN7android16findHeifGridInfoERKNS_2spINS_8MetaDataEEEPiS5_S5_S5_ */
/* Demangled: android::findHeifGridInfo(android::sp<android::MetaData> const&, int*, int*, int*, int*) */
int _ZN7android16findHeifGridInfoERKNS_2spINS_8MetaDataEEEPiS5_S5_S5_(void);

/* Symbol: _ZN7android15MtkImageDecoderD0Ev */
/* Demangled: android::MtkImageDecoder::~MtkImageDecoder() */
int _ZN7android15MtkImageDecoderD0Ev(void);

/* Symbol: _ZN7android15MtkImageDecoderC1ERKNS_7AStringERKNS_2spINS_8MetaDataEEERKNS4_INS_12IMediaSourceEEEm */
/* Demangled: android::MtkImageDecoder::MtkImageDecoder(android::AString const&, android::sp<android::MetaData> const&, android::sp<android::IMediaSource> const&, unsigned long) */
int _ZN7android15MtkImageDecoderC1ERKNS_7AStringERKNS_2spINS_8MetaDataEEERKNS4_INS_12IMediaSourceEEEm(void);

/* Symbol: _ZN7android17MtkAVStageFactoryD1Ev */
/* Demangled: android::MtkAVStageFactory::~MtkAVStageFactory() */
int _ZN7android17MtkAVStageFactoryD1Ev(void);

/* Symbol: _ZN7android12MtkACodecExtC1ERKNSt3__110shared_ptrINS_17ACodecExtCallbackEEE */
/* Demangled: android::MtkACodecExt::MtkACodecExt(std::__1::shared_ptr<android::ACodecExtCallback> const&) */
int _ZN7android12MtkACodecExtC1ERKNSt3__110shared_ptrINS_17ACodecExtCallbackEEE(void);

/* Symbol: _ZN7android12MtkACodecExt13getPortFormatERKNS_2spINS_8IOMXNodeEEEjRNS1_INS_8AMessageEEE */
/* Demangled: android::MtkACodecExt::getPortFormat(android::sp<android::IOMXNode> const&, unsigned int, android::sp<android::AMessage>&) */
int _ZN7android12MtkACodecExt13getPortFormatERKNS_2spINS_8IOMXNodeEEEjRNS1_INS_8AMessageEEE(void);

/* Symbol: _ZN7android14AVStageFactoryD1Ev */
/* Demangled: android::AVStageFactory::~AVStageFactory() */
int _ZN7android14AVStageFactoryD1Ev(void);

/* Symbol: _ZN7android12AVStageUtilsD0Ev */
/* Demangled: android::AVStageUtils::~AVStageUtils() */
int _ZN7android12AVStageUtilsD0Ev(void);

/* Symbol: _ZN7android17MtkAVStageFactory17createMPEG4WriterEi */
/* Demangled: android::MtkAVStageFactory::createMPEG4Writer(int) */
int _ZN7android17MtkAVStageFactory17createMPEG4WriterEi(void);

/* Symbol: _ZN7android15MtkAVStageUtilsC1Ev */
/* Demangled: android::MtkAVStageUtils::MtkAVStageUtils() */
int _ZN7android15MtkAVStageUtilsC1Ev(void);

/* Symbol: _ZN7android6MtkRoi16setRoiParametersERKNS_2spINS_8IOMXNodeEEERKNS1_INS_8AMessageEEE */
/* Demangled: android::MtkRoi::setRoiParameters(android::sp<android::IOMXNode> const&, android::sp<android::AMessage> const&) */
int _ZN7android6MtkRoi16setRoiParametersERKNS_2spINS_8IOMXNodeEEERKNS1_INS_8AMessageEEE(void);

/* Symbol: _ZN7android24MEDIA_MIMETYPE_VIDEO_WMVE */
/* Demangled: android::MEDIA_MIMETYPE_VIDEO_WMV */
extern void* _ZN7android24MEDIA_MIMETYPE_VIDEO_WMVE;

/* Symbol: _ZN7android24MEDIA_MIMETYPE_VIDEO_VPXE */
/* Demangled: android::MEDIA_MIMETYPE_VIDEO_VPX */
extern void* _ZN7android24MEDIA_MIMETYPE_VIDEO_VPXE;

/* Symbol: _ZN7android9ACodecExtD1Ev */
/* Demangled: android::ACodecExt::~ACodecExt() */
int _ZN7android9ACodecExtD1Ev(void);

/* Symbol: _ZN7android17MtkAVStageFactoryD0Ev */
/* Demangled: android::MtkAVStageFactory::~MtkAVStageFactory() */
int _ZN7android17MtkAVStageFactoryD0Ev(void);

/* Symbol: _ZN7android2spINS_20IMediaRecorderClientEEaSERKS2_ */
/* Demangled: android::sp<android::IMediaRecorderClient>::operator=(android::sp<android::IMediaRecorderClient> const&) */
int _ZN7android2spINS_20IMediaRecorderClientEEaSERKS2_(void);

/* Symbol: _ZN7android12MtkACodecExt13setupApeCodecERKNS_2spINS_8IOMXNodeEEERKNS1_INS_8AMessageEEE */
/* Demangled: android::MtkACodecExt::setupApeCodec(android::sp<android::IOMXNode> const&, android::sp<android::AMessage> const&) */
int _ZN7android12MtkACodecExt13setupApeCodecERKNS_2spINS_8IOMXNodeEEERKNS1_INS_8AMessageEEE(void);

/* Symbol: _ZN7android24MEDIA_MIMETYPE_AUDIO_APEE */
/* Demangled: android::MEDIA_MIMETYPE_AUDIO_APE */
extern void* _ZN7android24MEDIA_MIMETYPE_AUDIO_APEE;

/* Symbol: _ZN7android16findHeiftestInfoERKNS_2spINS_8MetaDataEEEPiS5_PjPPKvPm */
/* Demangled: android::findHeiftestInfo(android::sp<android::MetaData> const&, int*, int*, unsigned int*, void const**, unsigned long*) */
int _ZN7android16findHeiftestInfoERKNS_2spINS_8MetaDataEEEPiS5_PjPPKvPm(void);

/* Symbol: _ZN7android15MtkImageDecoder22receiveheifouputbufferEv */
/* Demangled: android::MtkImageDecoder::receiveheifouputbuffer() */
int _ZN7android15MtkImageDecoder22receiveheifouputbufferEv(void);

/* Symbol: _ZN7android15MtkImageDecoder8init_extElii */
/* Demangled: android::MtkImageDecoder::init_ext(long, int, int) */
int _ZN7android15MtkImageDecoder8init_extElii(void);

/* Symbol: _ZN7android24MEDIA_MIMETYPE_AUDIO_FLVE */
/* Demangled: android::MEDIA_MIMETYPE_AUDIO_FLV */
extern void* _ZN7android24MEDIA_MIMETYPE_AUDIO_FLVE;

/* Symbol: _ZN7android35MEDIA_MIMETYPE_VIDEO_SORENSON_SPARKE */
/* Demangled: android::MEDIA_MIMETYPE_VIDEO_SORENSON_SPARK */
extern void* _ZN7android35MEDIA_MIMETYPE_VIDEO_SORENSON_SPARKE;

/* Symbol: _ZTVN7android9ACodecExtE */
/* Demangled: vtable for android::ACodecExt */
extern void* _ZTVN7android9ACodecExtE;

/* Symbol: _ZN7android15MtkAVStageUtilsD2Ev */
/* Demangled: android::MtkAVStageUtils::~MtkAVStageUtils() */
int _ZN7android15MtkAVStageUtilsD2Ev(void);

/* Symbol: _ZN7android12MtkACodecExt13setAVSyncTimeEPKcNS_2spINS_8AMessageEEERKNS3_INS_8IOMXNodeEEERKS5_ */
/* Demangled: android::MtkACodecExt::setAVSyncTime(char const*, android::sp<android::AMessage>, android::sp<android::IOMXNode> const&, android::sp<android::AMessage> const&) */
int _ZN7android12MtkACodecExt13setAVSyncTimeEPKcNS_2spINS_8AMessageEEERKNS3_INS_8IOMXNodeEEERKS5_(void);

/* Symbol: _ZN7android15MtkImageDecoder13onExtractRectEPNS_9FrameRectE */
/* Demangled: android::MtkImageDecoder::onExtractRect(android::FrameRect*) */
int _ZN7android15MtkImageDecoder13onExtractRectEPNS_9FrameRectE(void);

/* Symbol: _ZN7android14AVStageFactoryD0Ev */
/* Demangled: android::AVStageFactory::~AVStageFactory() */
int _ZN7android14AVStageFactoryD0Ev(void);

/* Symbol: _ZN7android28MEDIA_MIMETYPE_CONTAINER_ASFE */
/* Demangled: android::MEDIA_MIMETYPE_CONTAINER_ASF */
extern void* _ZN7android28MEDIA_MIMETYPE_CONTAINER_ASFE;

/* Symbol: _ZN7android14AVStageFactory17createMPEG4WriterEi */
/* Demangled: android::AVStageFactory::createMPEG4Writer(int) */
int _ZN7android14AVStageFactory17createMPEG4WriterEi(void);

/* Symbol: _ZN7android14InstanceLoaderINS_12AVStageUtilsEE4mLibE */
/* Demangled: android::InstanceLoader<android::AVStageUtils>::mLib */
extern void* _ZN7android14InstanceLoaderINS_12AVStageUtilsEE4mLibE;

/* Symbol: _ZN7android9ACodecExtD0Ev */
/* Demangled: android::ACodecExt::~ACodecExt() */
int _ZN7android9ACodecExtD0Ev(void);

/* Symbol: _ZN7android10setRoiInfoERKNS_2spINS_8IOMXNodeEEERKNS0_INS_8AMessageEEERi */
/* Demangled: android::setRoiInfo(android::sp<android::IOMXNode> const&, android::sp<android::AMessage> const&, int&) */
int _ZN7android10setRoiInfoERKNS_2spINS_8IOMXNodeEEERKNS0_INS_8AMessageEEERi(void);

/* Symbol: _ZN7android28MEDIA_MIMETYPE_CONTAINER_FLVE */
/* Demangled: android::MEDIA_MIMETYPE_CONTAINER_FLV */
extern void* _ZN7android28MEDIA_MIMETYPE_CONTAINER_FLVE;

/* Symbol: createVendorAVFactory */
/* Demangled: createVendorAVFactory */
int createVendorAVFactory(void);

/* Symbol: _ZN7android17MtkAVStageFactory15createACodecExtERKNSt3__110shared_ptrINS_17ACodecExtCallbackEEE */
/* Demangled: android::MtkAVStageFactory::createACodecExt(std::__1::shared_ptr<android::ACodecExtCallback> const&) */
int _ZN7android17MtkAVStageFactory15createACodecExtERKNSt3__110shared_ptrINS_17ACodecExtCallbackEEE(void);

/* Symbol: _ZN7android15MtkAVStageUtilsD1Ev */
/* Demangled: android::MtkAVStageUtils::~MtkAVStageUtils() */
int _ZN7android15MtkAVStageUtilsD1Ev(void);

/* Symbol: _ZN7android12AVStageUtils5sInstE */
/* Demangled: android::AVStageUtils::sInst */
extern void* _ZN7android12AVStageUtils5sInstE;

/* Symbol: _ZTVN7android15MtkAVStageUtilsE */
/* Demangled: vtable for android::MtkAVStageUtils */
extern void* _ZTVN7android15MtkAVStageUtilsE;

/* Symbol: _ZN7android12MtkACodecExt13setParametersERKNS_2spINS_8IOMXNodeEEERKNS1_INS_8AMessageEEEb */
/* Demangled: android::MtkACodecExt::setParameters(android::sp<android::IOMXNode> const&, android::sp<android::AMessage> const&, bool) */
int _ZN7android12MtkACodecExt13setParametersERKNS_2spINS_8IOMXNodeEEERKNS1_INS_8AMessageEEEb(void);

/* Symbol: _ZTVN7android15MtkImageDecoder12DecodeThreadE */
/* Demangled: vtable for android::MtkImageDecoder::DecodeThread */
extern void* _ZTVN7android15MtkImageDecoder12DecodeThreadE;

__END_DECLS

#endif /* BEGONIA_RE_LIBMTKAVENHANCEMENTS_H */
