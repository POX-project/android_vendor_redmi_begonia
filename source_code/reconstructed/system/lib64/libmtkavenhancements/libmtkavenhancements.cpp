/*
 * Reverse-Engineered Source for: libmtkavenhancements.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libmtkavenhancements"

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
#include "libmtkavenhancements.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::MtkMPEG4Writer::~MtkMPEG4Writer() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14MtkMPEG4WriterD2Ev(void) {
    ALOGD("_ZN7android14MtkMPEG4WriterD2Ev() called");
    return 0;
}

/* Demangled: android::MtkACodecExt::setViLTEParameters(android::sp<android::IOMXNode> const&, android::sp<android::AMessage> const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12MtkACodecExt18setViLTEParametersERKNS_2spINS_8IOMXNodeEEERKNS1_INS_8AMessageEEEbb(void) {
    ALOGD("_ZN7android12MtkACodecExt18setViLTEParametersERKNS_2spINS_8IOMXNodeEEERKNS1_INS_8AMessageEEEbb() called");
    return 0;
}

/* Exported Object: vtable for android::MtkImageDecoder */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android15MtkImageDecoderE = NULL;

/* Demangled: android::MtkAVStageUtils::~MtkAVStageUtils() */
extern "C" __attribute__((visibility("default"))) int _ZN7android15MtkAVStageUtilsD0Ev(void) {
    ALOGD("_ZN7android15MtkAVStageUtilsD0Ev() called");
    return 0;
}

/* Demangled: android::setRoiOn(android::sp<android::IOMXNode> const&, android::sp<android::AMessage> const&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8setRoiOnERKNS_2spINS_8IOMXNodeEEERKNS0_INS_8AMessageEEERi(void) {
    ALOGD("_ZN7android8setRoiOnERKNS_2spINS_8IOMXNodeEEERKNS0_INS_8AMessageEEERi() called");
    return 0;
}

/* Demangled: android::MtkACodecExt::setThumbnailMode(char const*, android::sp<android::IOMXNode> const&, android::sp<android::AMessage> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12MtkACodecExt16setThumbnailModeEPKcRKNS_2spINS_8IOMXNodeEEERKNS3_INS_8AMessageEEEb(void) {
    ALOGD("_ZN7android12MtkACodecExt16setThumbnailModeEPKcRKNS_2spINS_8IOMXNodeEEERKNS3_INS_8AMessageEEEb() called");
    return 0;
}

/* Demangled: android::InstanceLoader<android::AVStageFactory>::createInstance(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14InstanceLoaderINS_14AVStageFactoryEE14createInstanceEPKc(void) {
    ALOGD("_ZN7android14InstanceLoaderINS_14AVStageFactoryEE14createInstanceEPKc() called");
    return 0;
}

/* Demangled: android::MtkImageDecoder::extractInternal_ext() */
extern "C" __attribute__((visibility("default"))) int _ZN7android15MtkImageDecoder19extractInternal_extEv(void) {
    ALOGD("_ZN7android15MtkImageDecoder19extractInternal_extEv() called");
    return 0;
}

/* Demangled: android::ACodecExt::ACodecExt(std::__1::shared_ptr<android::ACodecExtCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9ACodecExtC1ERKNSt3__110shared_ptrINS_17ACodecExtCallbackEEE(void) {
    ALOGD("_ZN7android9ACodecExtC1ERKNSt3__110shared_ptrINS_17ACodecExtCallbackEEE() called");
    return 0;
}

/* Demangled: android::InstanceLoader<android::AVStageUtils>::createInstance(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14InstanceLoaderINS_12AVStageUtilsEE14createInstanceEPKc(void) {
    ALOGD("_ZN7android14InstanceLoaderINS_12AVStageUtilsEE14createInstanceEPKc() called");
    return 0;
}

/* Demangled: android::MtkMPEG4Writer::~MtkMPEG4Writer() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14MtkMPEG4WriterD1Ev(void) {
    ALOGD("_ZN7android14MtkMPEG4WriterD1Ev() called");
    return 0;
}

/* Exported Object: android::MEDIA_MIMETYPE_AUDIO_WMAPRO */
extern "C" __attribute__((visibility("default"))) void* _ZN7android27MEDIA_MIMETYPE_AUDIO_WMAPROE = NULL;

/* Demangled: android::MtkImageDecoder::onOutputReceived(android::sp<android::MediaCodecBuffer> const&, android::sp<android::AMessage> const&, long, bool*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android15MtkImageDecoder16onOutputReceivedERKNS_2spINS_16MediaCodecBufferEEERKNS1_INS_8AMessageEEElPb(void) {
    ALOGD("_ZN7android15MtkImageDecoder16onOutputReceivedERKNS_2spINS_16MediaCodecBufferEEERKNS1_INS_8AMessageEEElPb() called");
    return 0;
}

/* Exported Object: VTT for android::MtkImageDecoder::DecodeThread */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android15MtkImageDecoder12DecodeThreadE = NULL;

/* Demangled: android::MtkImageDecoder::MtkImageDecoder(android::AString const&, android::sp<android::MetaData> const&, android::sp<android::IMediaSource> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android15MtkImageDecoderC2ERKNS_7AStringERKNS_2spINS_8MetaDataEEERKNS4_INS_12IMediaSourceEEEm(void) {
    ALOGD("_ZN7android15MtkImageDecoderC2ERKNS_7AStringERKNS_2spINS_8MetaDataEEERKNS4_INS_12IMediaSourceEEEm() called");
    return 0;
}

/* Demangled: android::MtkImageDecoder::DecodeThread::threadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN7android15MtkImageDecoder12DecodeThread10threadLoopEv(void) {
    ALOGD("_ZN7android15MtkImageDecoder12DecodeThread10threadLoopEv() called");
    return 0;
}

/* Demangled: android::MtkACodecExt::MtkACodecExt(std::__1::shared_ptr<android::ACodecExtCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12MtkACodecExtC2ERKNSt3__110shared_ptrINS_17ACodecExtCallbackEEE(void) {
    ALOGD("_ZN7android12MtkACodecExtC2ERKNSt3__110shared_ptrINS_17ACodecExtCallbackEEE() called");
    return 0;
}

/* Demangled: android::getDstColorFormatExt(android_pixel_format_t, OMX_COLOR_FORMATTYPE*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android20getDstColorFormatExtE22android_pixel_format_tP20OMX_COLOR_FORMATTYPEPi(void) {
    ALOGD("_ZN7android20getDstColorFormatExtE22android_pixel_format_tP20OMX_COLOR_FORMATTYPEPi() called");
    return 0;
}

/* Demangled: android::MtkMPEG4Writer::~MtkMPEG4Writer() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14MtkMPEG4WriterD0Ev(void) {
    ALOGD("_ZN7android14MtkMPEG4WriterD0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::Thread-in-android::MtkImageDecoder::DecodeThread */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android15MtkImageDecoder12DecodeThreadE0_NS_6ThreadE = NULL;

/* Exported Object: android::MEDIA_MIMETYPE_VIDEO_MJPEG */
extern "C" __attribute__((visibility("default"))) void* _ZN7android26MEDIA_MIMETYPE_VIDEO_MJPEGE = NULL;

/* Demangled: android::AVStageUtils::AVStageUtils() */
extern "C" __attribute__((visibility("default"))) int _ZN7android12AVStageUtilsC2Ev(void) {
    ALOGD("_ZN7android12AVStageUtilsC2Ev() called");
    return 0;
}

/* Demangled: android::allocHeicVideoFrame(android::sp<android::MetaData> const&, int, int, int, int, int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android19allocHeicVideoFrameERKNS_2spINS_8MetaDataEEEiiiiib(void) {
    ALOGD("_ZN7android19allocHeicVideoFrameERKNS_2spINS_8MetaDataEEEiiiiib() called");
    return 0;
}

/* Exported Object: vtable for android::AVStageFactory */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android14AVStageFactoryE = NULL;

/* Demangled: android::MtkMPEG4Writer::MtkMPEG4Writer(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14MtkMPEG4WriterC2Ei(void) {
    ALOGD("_ZN7android14MtkMPEG4WriterC2Ei() called");
    return 0;
}

/* Demangled: android::MtkACodecExt::~MtkACodecExt() */
extern "C" __attribute__((visibility("default"))) int _ZN7android12MtkACodecExtD2Ev(void) {
    ALOGD("_ZN7android12MtkACodecExtD2Ev() called");
    return 0;
}

/* Demangled: android::MtkAVStageFactory::MtkAVStageFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN7android17MtkAVStageFactoryC2Ev(void) {
    ALOGD("_ZN7android17MtkAVStageFactoryC2Ev() called");
    return 0;
}

/* Demangled: android::MtkACodecExt::setOmxReadMultiFrame(android::sp<android::IOMXNode> const&, android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12MtkACodecExt20setOmxReadMultiFrameERKNS_2spINS_8IOMXNodeEEERKNS1_INS_8AMessageEEE(void) {
    ALOGD("_ZN7android12MtkACodecExt20setOmxReadMultiFrameERKNS_2spINS_8IOMXNodeEEERKNS1_INS_8AMessageEEE() called");
    return 0;
}

/* Exported Object: android::AVStageFactory::sInst */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14AVStageFactory5sInstE = NULL;

/* Demangled: android::AVStageFactory::AVStageFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14AVStageFactoryC2Ev(void) {
    ALOGD("_ZN7android14AVStageFactoryC2Ev() called");
    return 0;
}

/* Demangled: android::MtkAVStageFactory::createImageDecoder(android::AString const&, android::sp<android::MetaData> const&, android::sp<android::IMediaSource> const&, unsigned long const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17MtkAVStageFactory18createImageDecoderERKNS_7AStringERKNS_2spINS_8MetaDataEEERKNS4_INS_12IMediaSourceEEERKm(void) {
    ALOGD("_ZN7android17MtkAVStageFactory18createImageDecoderERKNS_7AStringERKNS_2spINS_8MetaDataEEERKNS4_INS_12IMediaSourceEEERKm() called");
    return 0;
}

/* Demangled: android::setRoiLease(android::sp<android::IOMXNode> const&, android::sp<android::AMessage> const&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android11setRoiLeaseERKNS_2spINS_8IOMXNodeEEERKNS0_INS_8AMessageEEERi(void) {
    ALOGD("_ZN7android11setRoiLeaseERKNS_2spINS_8IOMXNodeEEERKNS0_INS_8AMessageEEERi() called");
    return 0;
}

/* Demangled: android::MtkImageDecoder::~MtkImageDecoder() */
extern "C" __attribute__((visibility("default"))) int _ZN7android15MtkImageDecoderD2Ev(void) {
    ALOGD("_ZN7android15MtkImageDecoderD2Ev() called");
    return 0;
}

/* Demangled: android::AVStageUtils::AVStageUtils() */
extern "C" __attribute__((visibility("default"))) int _ZN7android12AVStageUtilsC1Ev(void) {
    ALOGD("_ZN7android12AVStageUtilsC1Ev() called");
    return 0;
}

/* Demangled: android::MtkMPEG4Writer::MtkMPEG4Writer(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14MtkMPEG4WriterC1Ei(void) {
    ALOGD("_ZN7android14MtkMPEG4WriterC1Ei() called");
    return 0;
}

/* Demangled: android::MtkACodecExt::setupADPCMCodec(android::sp<android::IOMXNode> const&, char const*, android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12MtkACodecExt15setupADPCMCodecERKNS_2spINS_8IOMXNodeEEEPKcRKNS1_INS_8AMessageEEE(void) {
    ALOGD("_ZN7android12MtkACodecExt15setupADPCMCodecERKNS_2spINS_8IOMXNodeEEEPKcRKNS1_INS_8AMessageEEE() called");
    return 0;
}

/* Demangled: android::MtkACodecExt::~MtkACodecExt() */
extern "C" __attribute__((visibility("default"))) int _ZN7android12MtkACodecExtD1Ev(void) {
    ALOGD("_ZN7android12MtkACodecExtD1Ev() called");
    return 0;
}

/* Exported Object: android::InstanceLoader<android::AVStageFactory>::mLib */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14InstanceLoaderINS_14AVStageFactoryEE4mLibE = NULL;

/* Demangled: __cfi_check */
extern "C" __attribute__((visibility("default"))) int fn___cfi_check(void) __asm__("__cfi_check");
int fn___cfi_check(void) {
    ALOGD("__cfi_check() called");
    return 0;
}

/* Exported Object: vtable for android::MtkAVStageFactory */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android17MtkAVStageFactoryE = NULL;

/* Demangled: android::MtkAVStageFactory::MtkAVStageFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN7android17MtkAVStageFactoryC1Ev(void) {
    ALOGD("_ZN7android17MtkAVStageFactoryC1Ev() called");
    return 0;
}

/* Demangled: android::AVStageUtils::~AVStageUtils() */
extern "C" __attribute__((visibility("default"))) int _ZN7android12AVStageUtilsD2Ev(void) {
    ALOGD("_ZN7android12AVStageUtilsD2Ev() called");
    return 0;
}

/* Demangled: android::MtkRoi::MtkRoi() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6MtkRoiC2Ev(void) {
    ALOGD("_ZN7android6MtkRoiC2Ev() called");
    return 0;
}

/* Demangled: android::MtkImageDecoder::onGetFormatAndSeekOptions(long, int, android::MediaTrack::ReadOptions*, android::sp<android::Surface>*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android15MtkImageDecoder25onGetFormatAndSeekOptionsEliPNS_10MediaTrack11ReadOptionsEPNS_2spINS_7SurfaceEEE(void) {
    ALOGD("_ZN7android15MtkImageDecoder25onGetFormatAndSeekOptionsEliPNS_10MediaTrack11ReadOptionsEPNS_2spINS_7SurfaceEEE() called");
    return 0;
}

/* Demangled: android::MtkImageDecoder::~MtkImageDecoder() */
extern "C" __attribute__((visibility("default"))) int _ZN7android15MtkImageDecoderD1Ev(void) {
    ALOGD("_ZN7android15MtkImageDecoderD1Ev() called");
    return 0;
}

/* Demangled: android::AVStageFactory::AVStageFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14AVStageFactoryC1Ev(void) {
    ALOGD("_ZN7android14AVStageFactoryC1Ev() called");
    return 0;
}

/* Demangled: android::MtkAVStageFactory::~MtkAVStageFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN7android17MtkAVStageFactoryD2Ev(void) {
    ALOGD("_ZN7android17MtkAVStageFactoryD2Ev() called");
    return 0;
}

/* Exported Object: vtable for android::MtkMPEG4Writer */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android14MtkMPEG4WriterE = NULL;

/* Demangled: android::MtkACodecExt::~MtkACodecExt() */
extern "C" __attribute__((visibility("default"))) int _ZN7android12MtkACodecExtD0Ev(void) {
    ALOGD("_ZN7android12MtkACodecExtD0Ev() called");
    return 0;
}

/* Demangled: android::MtkACodecExt::setupWMACodec(android::sp<android::IOMXNode> const&, char const*, android::sp<android::AMessage> const&, bool&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12MtkACodecExt13setupWMACodecERKNS_2spINS_8IOMXNodeEEEPKcRKNS1_INS_8AMessageEEERbRi(void) {
    ALOGD("_ZN7android12MtkACodecExt13setupWMACodecERKNS_2spINS_8IOMXNodeEEEPKcRKNS1_INS_8AMessageEEERbRi() called");
    return 0;
}

/* Demangled: android::MtkACodecExt::setupAlacCodec(android::sp<android::IOMXNode> const&, android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12MtkACodecExt14setupAlacCodecERKNS_2spINS_8IOMXNodeEEERKNS1_INS_8AMessageEEE(void) {
    ALOGD("_ZN7android12MtkACodecExt14setupAlacCodecERKNS_2spINS_8IOMXNodeEEERKNS1_INS_8AMessageEEE() called");
    return 0;
}

/* Demangled: android::MtkACodecExt::setAVSyncTime(android::sp<android::IOMXNode> const&, long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12MtkACodecExt13setAVSyncTimeERKNS_2spINS_8IOMXNodeEEEl(void) {
    ALOGD("_ZN7android12MtkACodecExt13setAVSyncTimeERKNS_2spINS_8IOMXNodeEEEl() called");
    return 0;
}

/* Exported Object: vtable for android::AVStageUtils */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12AVStageUtilsE = NULL;

/* Exported Object: android::MEDIA_MIMETYPE_VIDEO_MSMPEG4V3 */
extern "C" __attribute__((visibility("default"))) void* _ZN7android30MEDIA_MIMETYPE_VIDEO_MSMPEG4V3E = NULL;

/* Demangled: android::AVStageFactory::~AVStageFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14AVStageFactoryD2Ev(void) {
    ALOGD("_ZN7android14AVStageFactoryD2Ev() called");
    return 0;
}

/* Demangled: createVendorAVUtils */
extern "C" __attribute__((visibility("default"))) int createVendorAVUtils(void) {
    ALOGD("createVendorAVUtils() called");
    return 0;
}

/* Demangled: android::MtkRoi::MtkRoi() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6MtkRoiC1Ev(void) {
    ALOGD("_ZN7android6MtkRoiC1Ev() called");
    return 0;
}

/* Demangled: android::ACodecExt::ACodecExt(std::__1::shared_ptr<android::ACodecExtCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9ACodecExtC2ERKNSt3__110shared_ptrINS_17ACodecExtCallbackEEE(void) {
    ALOGD("_ZN7android9ACodecExtC2ERKNSt3__110shared_ptrINS_17ACodecExtCallbackEEE() called");
    return 0;
}

/* Demangled: android::MtkACodecExt::setupAudioCodec(android::sp<android::IOMXNode> const&, char const*, bool, android::sp<android::AMessage> const&, bool&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12MtkACodecExt15setupAudioCodecERKNS_2spINS_8IOMXNodeEEEPKcbRKNS1_INS_8AMessageEEERbRi(void) {
    ALOGD("_ZN7android12MtkACodecExt15setupAudioCodecERKNS_2spINS_8IOMXNodeEEEPKcbRKNS1_INS_8AMessageEEERbRi() called");
    return 0;
}

/* Demangled: android::AVStageFactory::createImageDecoder(android::AString const&, android::sp<android::MetaData> const&, android::sp<android::IMediaSource> const&, unsigned long const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14AVStageFactory18createImageDecoderERKNS_7AStringERKNS_2spINS_8MetaDataEEERKNS4_INS_12IMediaSourceEEERKm(void) {
    ALOGD("_ZN7android14AVStageFactory18createImageDecoderERKNS_7AStringERKNS_2spINS_8MetaDataEEERKNS4_INS_12IMediaSourceEEERKm() called");
    return 0;
}

/* Demangled: android::AVStageFactory::createACodecExt(std::__1::shared_ptr<android::ACodecExtCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14AVStageFactory15createACodecExtERKNSt3__110shared_ptrINS_17ACodecExtCallbackEEE(void) {
    ALOGD("_ZN7android14AVStageFactory15createACodecExtERKNSt3__110shared_ptrINS_17ACodecExtCallbackEEE() called");
    return 0;
}

/* Demangled: android::AVStageUtils::~AVStageUtils() */
extern "C" __attribute__((visibility("default"))) int _ZN7android12AVStageUtilsD1Ev(void) {
    ALOGD("_ZN7android12AVStageUtilsD1Ev() called");
    return 0;
}

/* Exported Object: android::MEDIA_MIMETYPE_VIDEO_FLV */
extern "C" __attribute__((visibility("default"))) void* _ZN7android24MEDIA_MIMETYPE_VIDEO_FLVE = NULL;

/* Demangled: android::MtkAVStageUtils::MtkAVStageUtils() */
extern "C" __attribute__((visibility("default"))) int _ZN7android15MtkAVStageUtilsC2Ev(void) {
    ALOGD("_ZN7android15MtkAVStageUtilsC2Ev() called");
    return 0;
}

/* Demangled: android::ACodecExt::~ACodecExt() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9ACodecExtD2Ev(void) {
    ALOGD("_ZN7android9ACodecExtD2Ev() called");
    return 0;
}

/* Exported Object: vtable for android::MtkACodecExt */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12MtkACodecExtE = NULL;

/* Demangled: android::findHeifGridInfo(android::sp<android::MetaData> const&, int*, int*, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16findHeifGridInfoERKNS_2spINS_8MetaDataEEEPiS5_S5_S5_(void) {
    ALOGD("_ZN7android16findHeifGridInfoERKNS_2spINS_8MetaDataEEEPiS5_S5_S5_() called");
    return 0;
}

/* Demangled: android::MtkImageDecoder::~MtkImageDecoder() */
extern "C" __attribute__((visibility("default"))) int _ZN7android15MtkImageDecoderD0Ev(void) {
    ALOGD("_ZN7android15MtkImageDecoderD0Ev() called");
    return 0;
}

/* Demangled: android::MtkImageDecoder::MtkImageDecoder(android::AString const&, android::sp<android::MetaData> const&, android::sp<android::IMediaSource> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android15MtkImageDecoderC1ERKNS_7AStringERKNS_2spINS_8MetaDataEEERKNS4_INS_12IMediaSourceEEEm(void) {
    ALOGD("_ZN7android15MtkImageDecoderC1ERKNS_7AStringERKNS_2spINS_8MetaDataEEERKNS4_INS_12IMediaSourceEEEm() called");
    return 0;
}

/* Demangled: android::MtkAVStageFactory::~MtkAVStageFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN7android17MtkAVStageFactoryD1Ev(void) {
    ALOGD("_ZN7android17MtkAVStageFactoryD1Ev() called");
    return 0;
}

/* Demangled: android::MtkACodecExt::MtkACodecExt(std::__1::shared_ptr<android::ACodecExtCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12MtkACodecExtC1ERKNSt3__110shared_ptrINS_17ACodecExtCallbackEEE(void) {
    ALOGD("_ZN7android12MtkACodecExtC1ERKNSt3__110shared_ptrINS_17ACodecExtCallbackEEE() called");
    return 0;
}

/* Demangled: android::MtkACodecExt::getPortFormat(android::sp<android::IOMXNode> const&, unsigned int, android::sp<android::AMessage>&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12MtkACodecExt13getPortFormatERKNS_2spINS_8IOMXNodeEEEjRNS1_INS_8AMessageEEE(void) {
    ALOGD("_ZN7android12MtkACodecExt13getPortFormatERKNS_2spINS_8IOMXNodeEEEjRNS1_INS_8AMessageEEE() called");
    return 0;
}

/* Demangled: android::AVStageFactory::~AVStageFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14AVStageFactoryD1Ev(void) {
    ALOGD("_ZN7android14AVStageFactoryD1Ev() called");
    return 0;
}

/* Demangled: android::AVStageUtils::~AVStageUtils() */
extern "C" __attribute__((visibility("default"))) int _ZN7android12AVStageUtilsD0Ev(void) {
    ALOGD("_ZN7android12AVStageUtilsD0Ev() called");
    return 0;
}

/* Demangled: android::MtkAVStageFactory::createMPEG4Writer(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17MtkAVStageFactory17createMPEG4WriterEi(void) {
    ALOGD("_ZN7android17MtkAVStageFactory17createMPEG4WriterEi() called");
    return 0;
}

/* Demangled: android::MtkAVStageUtils::MtkAVStageUtils() */
extern "C" __attribute__((visibility("default"))) int _ZN7android15MtkAVStageUtilsC1Ev(void) {
    ALOGD("_ZN7android15MtkAVStageUtilsC1Ev() called");
    return 0;
}

/* Demangled: android::MtkRoi::setRoiParameters(android::sp<android::IOMXNode> const&, android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6MtkRoi16setRoiParametersERKNS_2spINS_8IOMXNodeEEERKNS1_INS_8AMessageEEE(void) {
    ALOGD("_ZN7android6MtkRoi16setRoiParametersERKNS_2spINS_8IOMXNodeEEERKNS1_INS_8AMessageEEE() called");
    return 0;
}

/* Exported Object: android::MEDIA_MIMETYPE_VIDEO_WMV */
extern "C" __attribute__((visibility("default"))) void* _ZN7android24MEDIA_MIMETYPE_VIDEO_WMVE = NULL;

/* Exported Object: android::MEDIA_MIMETYPE_VIDEO_VPX */
extern "C" __attribute__((visibility("default"))) void* _ZN7android24MEDIA_MIMETYPE_VIDEO_VPXE = NULL;

/* Demangled: android::ACodecExt::~ACodecExt() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9ACodecExtD1Ev(void) {
    ALOGD("_ZN7android9ACodecExtD1Ev() called");
    return 0;
}

/* Demangled: android::MtkAVStageFactory::~MtkAVStageFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN7android17MtkAVStageFactoryD0Ev(void) {
    ALOGD("_ZN7android17MtkAVStageFactoryD0Ev() called");
    return 0;
}

/* Demangled: android::sp<android::IMediaRecorderClient>::operator=(android::sp<android::IMediaRecorderClient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_20IMediaRecorderClientEEaSERKS2_(void) {
    ALOGD("_ZN7android2spINS_20IMediaRecorderClientEEaSERKS2_() called");
    return 0;
}

/* Demangled: android::MtkACodecExt::setupApeCodec(android::sp<android::IOMXNode> const&, android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12MtkACodecExt13setupApeCodecERKNS_2spINS_8IOMXNodeEEERKNS1_INS_8AMessageEEE(void) {
    ALOGD("_ZN7android12MtkACodecExt13setupApeCodecERKNS_2spINS_8IOMXNodeEEERKNS1_INS_8AMessageEEE() called");
    return 0;
}

/* Exported Object: android::MEDIA_MIMETYPE_AUDIO_APE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android24MEDIA_MIMETYPE_AUDIO_APEE = NULL;

/* Demangled: android::findHeiftestInfo(android::sp<android::MetaData> const&, int*, int*, unsigned int*, void const**, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16findHeiftestInfoERKNS_2spINS_8MetaDataEEEPiS5_PjPPKvPm(void) {
    ALOGD("_ZN7android16findHeiftestInfoERKNS_2spINS_8MetaDataEEEPiS5_PjPPKvPm() called");
    return 0;
}

/* Demangled: android::MtkImageDecoder::receiveheifouputbuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN7android15MtkImageDecoder22receiveheifouputbufferEv(void) {
    ALOGD("_ZN7android15MtkImageDecoder22receiveheifouputbufferEv() called");
    return 0;
}

/* Demangled: android::MtkImageDecoder::init_ext(long, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android15MtkImageDecoder8init_extElii(void) {
    ALOGD("_ZN7android15MtkImageDecoder8init_extElii() called");
    return 0;
}

/* Exported Object: android::MEDIA_MIMETYPE_AUDIO_FLV */
extern "C" __attribute__((visibility("default"))) void* _ZN7android24MEDIA_MIMETYPE_AUDIO_FLVE = NULL;

/* Exported Object: android::MEDIA_MIMETYPE_VIDEO_SORENSON_SPARK */
extern "C" __attribute__((visibility("default"))) void* _ZN7android35MEDIA_MIMETYPE_VIDEO_SORENSON_SPARKE = NULL;

/* Exported Object: vtable for android::ACodecExt */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android9ACodecExtE = NULL;

/* Demangled: android::MtkAVStageUtils::~MtkAVStageUtils() */
extern "C" __attribute__((visibility("default"))) int _ZN7android15MtkAVStageUtilsD2Ev(void) {
    ALOGD("_ZN7android15MtkAVStageUtilsD2Ev() called");
    return 0;
}

/* Demangled: android::MtkACodecExt::setAVSyncTime(char const*, android::sp<android::AMessage>, android::sp<android::IOMXNode> const&, android::sp<android::AMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12MtkACodecExt13setAVSyncTimeEPKcNS_2spINS_8AMessageEEERKNS3_INS_8IOMXNodeEEERKS5_(void) {
    ALOGD("_ZN7android12MtkACodecExt13setAVSyncTimeEPKcNS_2spINS_8AMessageEEERKNS3_INS_8IOMXNodeEEERKS5_() called");
    return 0;
}

/* Demangled: android::MtkImageDecoder::onExtractRect(android::FrameRect*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android15MtkImageDecoder13onExtractRectEPNS_9FrameRectE(void) {
    ALOGD("_ZN7android15MtkImageDecoder13onExtractRectEPNS_9FrameRectE() called");
    return 0;
}

/* Demangled: android::AVStageFactory::~AVStageFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN7android14AVStageFactoryD0Ev(void) {
    ALOGD("_ZN7android14AVStageFactoryD0Ev() called");
    return 0;
}

/* Exported Object: android::MEDIA_MIMETYPE_CONTAINER_ASF */
extern "C" __attribute__((visibility("default"))) void* _ZN7android28MEDIA_MIMETYPE_CONTAINER_ASFE = NULL;

/* Demangled: android::AVStageFactory::createMPEG4Writer(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android14AVStageFactory17createMPEG4WriterEi(void) {
    ALOGD("_ZN7android14AVStageFactory17createMPEG4WriterEi() called");
    return 0;
}

/* Exported Object: android::InstanceLoader<android::AVStageUtils>::mLib */
extern "C" __attribute__((visibility("default"))) void* _ZN7android14InstanceLoaderINS_12AVStageUtilsEE4mLibE = NULL;

/* Demangled: android::ACodecExt::~ACodecExt() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9ACodecExtD0Ev(void) {
    ALOGD("_ZN7android9ACodecExtD0Ev() called");
    return 0;
}

/* Demangled: android::setRoiInfo(android::sp<android::IOMXNode> const&, android::sp<android::AMessage> const&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10setRoiInfoERKNS_2spINS_8IOMXNodeEEERKNS0_INS_8AMessageEEERi(void) {
    ALOGD("_ZN7android10setRoiInfoERKNS_2spINS_8IOMXNodeEEERKNS0_INS_8AMessageEEERi() called");
    return 0;
}

/* Exported Object: android::MEDIA_MIMETYPE_CONTAINER_FLV */
extern "C" __attribute__((visibility("default"))) void* _ZN7android28MEDIA_MIMETYPE_CONTAINER_FLVE = NULL;

/* Demangled: createVendorAVFactory */
extern "C" __attribute__((visibility("default"))) int createVendorAVFactory(void) {
    ALOGD("createVendorAVFactory() called");
    return 0;
}

/* Demangled: android::MtkAVStageFactory::createACodecExt(std::__1::shared_ptr<android::ACodecExtCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17MtkAVStageFactory15createACodecExtERKNSt3__110shared_ptrINS_17ACodecExtCallbackEEE(void) {
    ALOGD("_ZN7android17MtkAVStageFactory15createACodecExtERKNSt3__110shared_ptrINS_17ACodecExtCallbackEEE() called");
    return 0;
}

/* Demangled: android::MtkAVStageUtils::~MtkAVStageUtils() */
extern "C" __attribute__((visibility("default"))) int _ZN7android15MtkAVStageUtilsD1Ev(void) {
    ALOGD("_ZN7android15MtkAVStageUtilsD1Ev() called");
    return 0;
}

/* Exported Object: android::AVStageUtils::sInst */
extern "C" __attribute__((visibility("default"))) void* _ZN7android12AVStageUtils5sInstE = NULL;

/* Exported Object: vtable for android::MtkAVStageUtils */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android15MtkAVStageUtilsE = NULL;

/* Demangled: android::MtkACodecExt::setParameters(android::sp<android::IOMXNode> const&, android::sp<android::AMessage> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android12MtkACodecExt13setParametersERKNS_2spINS_8IOMXNodeEEERKNS1_INS_8AMessageEEEb(void) {
    ALOGD("_ZN7android12MtkACodecExt13setParametersERKNS_2spINS_8IOMXNodeEEERKNS1_INS_8AMessageEEEb() called");
    return 0;
}

/* Exported Object: vtable for android::MtkImageDecoder::DecodeThread */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android15MtkImageDecoder12DecodeThreadE = NULL;
