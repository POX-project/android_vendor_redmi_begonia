/*
 * Reverse-Engineered Source for: libeffecthal.base.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libeffecthal_base"

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
#include "libeffecthal_base.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: NSCam::BasicParameters::KEY_DETECTED_ASD_ENABLE */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam15BasicParameters23KEY_DETECTED_ASD_ENABLEE = NULL;

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<android::String8, android::String8> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEEE = NULL;

/* Demangled: NSCam::EffectRequest::getRequestParameter() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13EffectRequest19getRequestParameterEv(void) {
    ALOGD("_ZN5NSCam13EffectRequest19getRequestParameterEv() called");
    return 0;
}

/* Demangled: NSCam::EffectFrameInfo::setFrameResult(android::sp<NSCam::BasicParameters>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam15EffectFrameInfo14setFrameResultEN7android2spINS_15BasicParametersEEE(void) {
    ALOGD("_ZN5NSCam15EffectFrameInfo14setFrameResultEN7android2spINS_15BasicParametersEEE() called");
    return 0;
}

/* Exported Object: NSCam::BasicParameters::KEY_JPEG_QUALITY */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam15BasicParameters16KEY_JPEG_QUALITYE = NULL;

/* Exported Object: NSCam::BasicParameters::PIXEL_FORMAT_YUV420P */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam15BasicParameters20PIXEL_FORMAT_YUV420PE = NULL;

/* Exported Object: NSCam::BasicParameters::KEY_DETECTED_ASD_3A_INFO */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam15BasicParameters24KEY_DETECTED_ASD_3A_INFOE = NULL;

/* Demangled: NSCam::BasicParameters::set(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam15BasicParameters3setEPKcS2_(void) {
    ALOGD("_ZN5NSCam15BasicParameters3setEPKcS2_() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<android::String8> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_7String8EEE = NULL;

/* Exported Object: NSCam::BasicParameters::KEY_DETECTED_FACE_RESULT */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam15BasicParameters24KEY_DETECTED_FACE_RESULTE = NULL;

/* Demangled: NSCam::BasicParameters::unflatten(void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam15BasicParameters9unflattenEPKvm(void) {
    ALOGD("_ZN5NSCam15BasicParameters9unflattenEPKvm() called");
    return 0;
}

/* Demangled: NSCam::BasicParameters::BasicParameters() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam15BasicParametersC1Ev(void) {
    ALOGD("_ZN5NSCam15BasicParametersC1Ev() called");
    return 0;
}

/* Demangled: NSCam::BasicParameters::getInt64(char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam15BasicParameters8getInt64EPKc(void) {
    ALOGD("_ZNK5NSCam15BasicParameters8getInt64EPKc() called");
    return 0;
}

/* Demangled: NSCam::EffectHalBase::configure() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13EffectHalBase9configureEv(void) {
    ALOGD("_ZN5NSCam13EffectHalBase9configureEv() called");
    return 0;
}

/* Exported Object: NSCam::BasicParameters::KEY_DETECTED_USE_GS */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam15BasicParameters19KEY_DETECTED_USE_GSE = NULL;

/* Exported Object: NSCam::BasicParameters::KEY_DETECTED_FD_ENABLE */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam15BasicParameters22KEY_DETECTED_FD_ENABLEE = NULL;

/* Demangled: NSCam::EffectFrameInfo::getFrameResult() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam15EffectFrameInfo14getFrameResultEv(void) {
    ALOGD("_ZN5NSCam15EffectFrameInfo14getFrameResultEv() called");
    return 0;
}

/* Demangled: NSCam::EffectHalBase::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13EffectHalBase6uninitEv(void) {
    ALOGD("_ZN5NSCam13EffectHalBase6uninitEv() called");
    return 0;
}

/* Exported Object: NSCam::BasicParameters::KEY_PICTURE_FORMAT */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam15BasicParameters18KEY_PICTURE_FORMATE = NULL;

/* Demangled: NSCam::EffectHalBase::~EffectHalBase() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13EffectHalBaseD0Ev(void) {
    ALOGD("_ZN5NSCam13EffectHalBaseD0Ev() called");
    return 0;
}

/* Demangled: NSCam::EffectFrameInfo::EffectFrameInfo(NSCam::EffectFrameInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam15EffectFrameInfoC1ERKS0_(void) {
    ALOGD("_ZN5NSCam15EffectFrameInfoC1ERKS0_() called");
    return 0;
}

/* Exported Object: NSCam::BasicParameters::KEY_ZOOM_RATIOS */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam15BasicParameters15KEY_ZOOM_RATIOSE = NULL;

/* Demangled: NSCam::BasicParameters::getInt(char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam15BasicParameters6getIntEPKc(void) {
    ALOGD("_ZNK5NSCam15BasicParameters6getIntEPKc() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::EffectHalBase::start() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13EffectHalBase5startEv(void) {
    ALOGD("_ZN5NSCam13EffectHalBase5startEv() called");
    return 0;
}

/* Demangled: CallbackClientMgr::canSupportBGService() */
extern "C" __attribute__((visibility("default"))) int _ZN17CallbackClientMgr19canSupportBGServiceEv(void) {
    ALOGD("_ZN17CallbackClientMgr19canSupportBGServiceEv() called");
    return 0;
}

/* Demangled: CallbackClientMgr::size() */
extern "C" __attribute__((visibility("default"))) int _ZN17CallbackClientMgr4sizeEv(void) {
    ALOGD("_ZN17CallbackClientMgr4sizeEv() called");
    return 0;
}

/* Demangled: NSCam::BasicParameters::parse_pair(char const*, int*, int*, char, char**) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam15BasicParameters10parse_pairEPKcPiS3_cPPc(void) {
    ALOGD("_ZN5NSCam15BasicParameters10parse_pairEPKcPiS3_cPPc() called");
    return 0;
}

/* Exported Object: NSCam::BasicParameters::PIXEL_FORMAT_YUV422SP */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam15BasicParameters21PIXEL_FORMAT_YUV422SPE = NULL;

/* Demangled: NSCam::BasicParameters::flatten(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam15BasicParameters7flattenEPvm(void) {
    ALOGD("_ZNK5NSCam15BasicParameters7flattenEPvm() called");
    return 0;
}

/* Demangled: CallbackClientMgr::registerBufferCB(bool (*)(long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned char* const*, unsigned int const*, unsigned int const*, unsigned int const*, unsigned int, unsigned int)) */
extern "C" __attribute__((visibility("default"))) int _ZN17CallbackClientMgr16registerBufferCBEPFbljjjjPKPhPKjS4_S4_jjE(void) {
    ALOGD("_ZN17CallbackClientMgr16registerBufferCBEPFbljjjjPKPhPKjS4_S4_jjE() called");
    return 0;
}

/* Demangled: android::Vector<android::String8>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::BasicParameters */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam15BasicParametersE = NULL;

/* Demangled: NSCam::EffectFrameInfo::setFrameBuffer(android::sp<NSCam::IImageBuffer>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam15EffectFrameInfo14setFrameBufferEN7android2spINS_12IImageBufferEEE(void) {
    ALOGD("_ZN5NSCam15EffectFrameInfo14setFrameBufferEN7android2spINS_12IImageBufferEEE() called");
    return 0;
}

/* Exported Object: NSCam::BasicParameters::KEY_PICTURE_SIZE */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam15BasicParameters16KEY_PICTURE_SIZEE = NULL;

/* Exported Object: NSCam::BasicParameters::KEY_DETECTED_USE_FD */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam15BasicParameters19KEY_DETECTED_USE_FDE = NULL;

/* Exported Object: NSCam::BasicParameters::KEY_JPEG_THUMBNAIL_QUALITY */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam15BasicParameters26KEY_JPEG_THUMBNAIL_QUALITYE = NULL;

/* Demangled: NSCam::EffectHalBase::init() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13EffectHalBase4initEv(void) {
    ALOGD("_ZN5NSCam13EffectHalBase4initEv() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Exported Object: NSCam::BasicParameters::KEY_DETECTED_SMILE_RESULT */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam15BasicParameters25KEY_DETECTED_SMILE_RESULTE = NULL;

/* Demangled: NSCam::BasicParameters::dump() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam15BasicParameters4dumpEv(void) {
    ALOGD("_ZN5NSCam15BasicParameters4dumpEv() called");
    return 0;
}

/* Demangled: android::Vector<android::String8>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Exported Object: NSCam::BasicParameters::KEY_ROTATION */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam15BasicParameters12KEY_ROTATIONE = NULL;

/* Demangled: NSCam::BasicParameters::BasicParameters() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam15BasicParametersC2Ev(void) {
    ALOGD("_ZN5NSCam15BasicParametersC2Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE8do_splatEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::EffectHalBase */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam13EffectHalBaseE = NULL;

/* Demangled: CallbackClientMgr::registerCB(void (*)(), unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN17CallbackClientMgr10registerCBEPFvvEj(void) {
    ALOGD("_ZN17CallbackClientMgr10registerCBEPFvvEj() called");
    return 0;
}

/* Demangled: CallbackClientMgr::onCB_CompressedImage_packed(long, unsigned int, unsigned char const*, unsigned int, bool, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN17CallbackClientMgr27onCB_CompressedImage_packedEljPKhjbjj(void) {
    ALOGD("_ZN17CallbackClientMgr27onCB_CompressedImage_packedEljPKhjbjj() called");
    return 0;
}

/* Demangled: NSCam::ICallbackClientMgr::getFormatedImageFormat(NSCam::EImageFormat) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam18ICallbackClientMgr22getFormatedImageFormatENS_12EImageFormatE(void) {
    ALOGD("_ZN5NSCam18ICallbackClientMgr22getFormatedImageFormatENS_12EImageFormatE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_compareEPKvS6_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_compareEPKvS6_() called");
    return 0;
}

/* Demangled: android::Vector<android::String8>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE8do_splatEPvPKvm() called");
    return 0;
}

/* Exported Object: NSCam::BasicParameters::PIXEL_FORMAT_YUV420SP */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam15BasicParameters21PIXEL_FORMAT_YUV420SPE = NULL;

/* Demangled: NSCam::BasicParameters::getPtr(char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam15BasicParameters6getPtrEPKc(void) {
    ALOGD("_ZNK5NSCam15BasicParameters6getPtrEPKc() called");
    return 0;
}

/* Demangled: android::Vector<android::String8>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::EffectHalBase::updateEffectRequest(android::sp<NSCam::EffectRequest>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13EffectHalBase19updateEffectRequestEN7android2spINS_13EffectRequestEEE(void) {
    ALOGD("_ZN5NSCam13EffectHalBase19updateEffectRequestEN7android2spINS_13EffectRequestEEE() called");
    return 0;
}

/* Demangled: NSCam::EffectHalBase::release() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13EffectHalBase7releaseEv(void) {
    ALOGD("_ZN5NSCam13EffectHalBase7releaseEv() called");
    return 0;
}

/* Demangled: NSCam::EffectFrameInfo::setFrameNo(long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam15EffectFrameInfo10setFrameNoEl(void) {
    ALOGD("_ZN5NSCam15EffectFrameInfo10setFrameNoEl() called");
    return 0;
}

/* Demangled: NSCam::ICallbackClientMgr::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam18ICallbackClientMgr11getInstanceEv(void) {
    ALOGD("_ZN5NSCam18ICallbackClientMgr11getInstanceEv() called");
    return 0;
}

/* Demangled: NSCam::EffectHalBase::abort(NSCam::BasicParameters const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13EffectHalBase5abortEPKNS_15BasicParametersE(void) {
    ALOGD("_ZN5NSCam13EffectHalBase5abortEPKNS_15BasicParametersE() called");
    return 0;
}

/* Demangled: NSCam::EffectHalBase::~EffectHalBase() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13EffectHalBaseD1Ev(void) {
    ALOGD("_ZN5NSCam13EffectHalBaseD1Ev() called");
    return 0;
}

/* Demangled: NSCam::EffectHalBase::getNameVersion(NSCam::EffectHalVersion&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam13EffectHalBase14getNameVersionERNS_16EffectHalVersionE(void) {
    ALOGD("_ZNK5NSCam13EffectHalBase14getNameVersionERNS_16EffectHalVersionE() called");
    return 0;
}

/* Demangled: NSCam::EffectFrameInfo::EffectFrameInfo(NSCam::EffectFrameInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam15EffectFrameInfoC2ERKS0_(void) {
    ALOGD("_ZN5NSCam15EffectFrameInfoC2ERKS0_() called");
    return 0;
}

/* Demangled: CallbackClientMgr::registerBufferCB(bool (*)(long, unsigned int, unsigned char const*, unsigned int, bool, unsigned int, unsigned int, unsigned int)) */
extern "C" __attribute__((visibility("default"))) int _ZN17CallbackClientMgr16registerBufferCBEPFbljPKhjbjjjE(void) {
    ALOGD("_ZN17CallbackClientMgr16registerBufferCBEPFbljPKhjbjjjE() called");
    return 0;
}

/* Demangled: CallbackClientMgr::onCB_PostviewClient(long, NSCam::IImageBuffer const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN17CallbackClientMgr19onCB_PostviewClientElPKN5NSCam12IImageBufferEj(void) {
    ALOGD("_ZN17CallbackClientMgr19onCB_PostviewClientElPKN5NSCam12IImageBufferEj() called");
    return 0;
}

/* Demangled: CallbackClientMgr::onCB_PostviewClient(long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned char* const*, unsigned int const*, unsigned int const*, unsigned int const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN17CallbackClientMgr19onCB_PostviewClientEljjjjPKPhPKjS4_S4_j(void) {
    ALOGD("_ZN17CallbackClientMgr19onCB_PostviewClientEljjjjPKPhPKjS4_S4_j() called");
    return 0;
}

/* Exported Object: vtable for CallbackClientMgr */
extern "C" __attribute__((visibility("default"))) void* _ZTV17CallbackClientMgr = NULL;

/* Exported Object: NSCam::BasicParameters::KEY_DETECTED_GESTURE_RESULT */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam15BasicParameters27KEY_DETECTED_GESTURE_RESULTE = NULL;

/* Demangled: NSCam::BasicParameters::BasicParameters(NSCam::BasicParameters const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam15BasicParametersC1ERKS0_(void) {
    ALOGD("_ZN5NSCam15BasicParametersC1ERKS0_() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Exported Object: NSCam::BasicParameters::KEY_IMAGE_HEIGHT */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam15BasicParameters16KEY_IMAGE_HEIGHTE = NULL;

/* Demangled: NSCam::EffectFrameInfo::setFrameReady(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam15EffectFrameInfo13setFrameReadyEb(void) {
    ALOGD("_ZN5NSCam15EffectFrameInfo13setFrameReadyEb() called");
    return 0;
}

/* Demangled: NSCam::EffectFrameInfo::getFrameParameter() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam15EffectFrameInfo17getFrameParameterEv(void) {
    ALOGD("_ZN5NSCam15EffectFrameInfo17getFrameParameterEv() called");
    return 0;
}

/* Exported Object: NSCam::BasicParameters::KEY_DETECTED_USE_ASD */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam15BasicParameters20KEY_DETECTED_USE_ASDE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<android::String8>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::EffectFrameInfo::isFrameBufferReady() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam15EffectFrameInfo18isFrameBufferReadyEv(void) {
    ALOGD("_ZN5NSCam15EffectFrameInfo18isFrameBufferReadyEv() called");
    return 0;
}

/* Demangled: CallbackClientMgr::createCallbackClient(long) */
extern "C" __attribute__((visibility("default"))) int _ZN17CallbackClientMgr20createCallbackClientEl(void) {
    ALOGD("_ZN17CallbackClientMgr20createCallbackClientEl() called");
    return 0;
}

/* Demangled: NSCam::BasicParameters::remove(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam15BasicParameters6removeEPKc(void) {
    ALOGD("_ZN5NSCam15BasicParameters6removeEPKc() called");
    return 0;
}

/* Demangled: CallbackClientMgr::removeCallbackClient(long, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN17CallbackClientMgr20removeCallbackClientElij(void) {
    ALOGD("_ZN17CallbackClientMgr20removeCallbackClientElij() called");
    return 0;
}

/* Demangled: NSCam::EffectRequest::getRequestResult() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13EffectRequest16getRequestResultEv(void) {
    ALOGD("_ZN5NSCam13EffectRequest16getRequestResultEv() called");
    return 0;
}

/* Demangled: NSCam::EffectRequest::setRequestParameter(android::sp<NSCam::BasicParameters>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13EffectRequest19setRequestParameterEN7android2spINS_15BasicParametersEEE(void) {
    ALOGD("_ZN5NSCam13EffectRequest19setRequestParameterEN7android2spINS_15BasicParametersEEE() called");
    return 0;
}

/* Demangled: NSCam::BasicParameters::getFlattenedSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam15BasicParameters16getFlattenedSizeEv(void) {
    ALOGD("_ZNK5NSCam15BasicParameters16getFlattenedSizeEv() called");
    return 0;
}

/* Demangled: NSCam::EffectHalBase::getCaptureRequirement(NSCam::BasicParameters*, android::Vector<NSCam::BasicParameters>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam13EffectHalBase21getCaptureRequirementEPNS_15BasicParametersERN7android6VectorIS1_EE(void) {
    ALOGD("_ZNK5NSCam13EffectHalBase21getCaptureRequirementEPNS_15BasicParametersERN7android6VectorIS1_EE() called");
    return 0;
}

/* Demangled: NSCam::BasicParameters::getKeys() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam15BasicParameters7getKeysEv(void) {
    ALOGD("_ZN5NSCam15BasicParameters7getKeysEv() called");
    return 0;
}

/* Demangled: NSCam::BasicParameters::setInt64(char const*, long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam15BasicParameters8setInt64EPKcl(void) {
    ALOGD("_ZN5NSCam15BasicParameters8setInt64EPKcl() called");
    return 0;
}

/* Demangled: NSCam::BasicParameters::getFloat(char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam15BasicParameters8getFloatEPKc(void) {
    ALOGD("_ZNK5NSCam15BasicParameters8getFloatEPKc() called");
    return 0;
}

/* Exported Object: NSCam::BasicParameters::KEY_JPEG_THUMBNAIL_SIZES */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam15BasicParameters24KEY_JPEG_THUMBNAIL_SIZESE = NULL;

/* Demangled: NSCam::BasicParameters::setFloat(char const*, float) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam15BasicParameters8setFloatEPKcf(void) {
    ALOGD("_ZN5NSCam15BasicParameters8setFloatEPKcf() called");
    return 0;
}

/* Demangled: NSCam::EffectHalBase::unconfigure() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13EffectHalBase11unconfigureEv(void) {
    ALOGD("_ZN5NSCam13EffectHalBase11unconfigureEv() called");
    return 0;
}

/* Demangled: NSCam::EffectHalBase::setParameters(android::sp<NSCam::BasicParameters>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13EffectHalBase13setParametersEN7android2spINS_15BasicParametersEEE(void) {
    ALOGD("_ZN5NSCam13EffectHalBase13setParametersEN7android2spINS_15BasicParametersEEE() called");
    return 0;
}

/* Exported Object: NSCam::BasicParameters::KEY_DETECTED_GS_ENABLE */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam15BasicParameters22KEY_DETECTED_GS_ENABLEE = NULL;

/* Demangled: NSCam::EffectHalBase::~EffectHalBase() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13EffectHalBaseD2Ev(void) {
    ALOGD("_ZN5NSCam13EffectHalBaseD2Ev() called");
    return 0;
}

/* Demangled: NSCam::ICallbackClientMgr::generateTimestamp() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam18ICallbackClientMgr17generateTimestampEv(void) {
    ALOGD("_ZN5NSCam18ICallbackClientMgr17generateTimestampEv() called");
    return 0;
}

/* Demangled: NSCam::ICallbackClientMgr::getCustomizedBufOffset(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam18ICallbackClientMgr22getCustomizedBufOffsetEj(void) {
    ALOGD("_ZN5NSCam18ICallbackClientMgr22getCustomizedBufOffsetEj() called");
    return 0;
}

/* Exported Object: NSCam::BasicParameters::KEY_DETECTED_SCENE */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam15BasicParameters18KEY_DETECTED_SCENEE = NULL;

/* Exported Object: NSCam::BasicParameters::KEY_DETECTED_FACE_NUM */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam15BasicParameters21KEY_DETECTED_FACE_NUME = NULL;

/* Exported Object: NSCam::BasicParameters::KEY_DETECTED_SD_ENABLE */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam15BasicParameters22KEY_DETECTED_SD_ENABLEE = NULL;

/* Demangled: NSCam::BasicParameters::BasicParameters(NSCam::BasicParameters const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam15BasicParametersC2ERKS0_(void) {
    ALOGD("_ZN5NSCam15BasicParametersC2ERKS0_() called");
    return 0;
}

/* Demangled: NSCam::EffectHalBase::setEffectListener(android::wp<NSCam::IEffectListener> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13EffectHalBase17setEffectListenerERKN7android2wpINS_15IEffectListenerEEE(void) {
    ALOGD("_ZN5NSCam13EffectHalBase17setEffectListenerERKN7android2wpINS_15IEffectListenerEEE() called");
    return 0;
}

/* Demangled: NSCam::EffectFrameInfo::getFrameBuffer(android::sp<NSCam::IImageBuffer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam15EffectFrameInfo14getFrameBufferERN7android2spINS_12IImageBufferEEE(void) {
    ALOGD("_ZN5NSCam15EffectFrameInfo14getFrameBufferERN7android2spINS_12IImageBufferEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_destroyEPvm() called");
    return 0;
}

/* Exported Object: NSCam::BasicParameters::PIXEL_FORMAT_RGB565 */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam15BasicParameters19PIXEL_FORMAT_RGB565E = NULL;

/* Exported Object: NSCam::BasicParameters::PIXEL_FORMAT_RGBA8888 */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam15BasicParameters21PIXEL_FORMAT_RGBA8888E = NULL;

/* Demangled: NSCam::BasicParameters::unflatten(android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam15BasicParameters9unflattenERKN7android7String8E(void) {
    ALOGD("_ZN5NSCam15BasicParameters9unflattenERKN7android7String8E() called");
    return 0;
}

/* Demangled: NSCam::BasicParameters::get(char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam15BasicParameters3getEPKc(void) {
    ALOGD("_ZNK5NSCam15BasicParameters3getEPKc() called");
    return 0;
}

/* Demangled: NSCam::BasicParameters::flatten() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam15BasicParameters7flattenEv(void) {
    ALOGD("_ZNK5NSCam15BasicParameters7flattenEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<android::String8>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::EffectHalBase::EffectHalBase() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13EffectHalBaseC2Ev(void) {
    ALOGD("_ZN5NSCam13EffectHalBaseC2Ev() called");
    return 0;
}

/* Demangled: NSCam::EffectRequest::setRequestResult(android::sp<NSCam::BasicParameters>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13EffectRequest16setRequestResultEN7android2spINS_15BasicParametersEEE(void) {
    ALOGD("_ZN5NSCam13EffectRequest16setRequestResultEN7android2spINS_15BasicParametersEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::EffectHalBase::prepareDone(NSCam::BasicParameters const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13EffectHalBase11prepareDoneERKNS_15BasicParametersEi(void) {
    ALOGD("_ZN5NSCam13EffectHalBase11prepareDoneERKNS_15BasicParametersEi() called");
    return 0;
}

/* Demangled: NSCam::EffectHalBase::setParameter(android::String8&, android::String8&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13EffectHalBase12setParameterERN7android7String8ES3_(void) {
    ALOGD("_ZN5NSCam13EffectHalBase12setParameterERN7android7String8ES3_() called");
    return 0;
}

/* Demangled: NSCam::EffectHalBase::prepare() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam13EffectHalBase7prepareEv(void) {
    ALOGD("_ZN5NSCam13EffectHalBase7prepareEv() called");
    return 0;
}

/* Demangled: NSCam::EffectFrameInfo::setFrameParameter(android::sp<NSCam::BasicParameters>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam15EffectFrameInfo17setFrameParameterEN7android2spINS_15BasicParametersEEE(void) {
    ALOGD("_ZN5NSCam15EffectFrameInfo17setFrameParameterEN7android2spINS_15BasicParametersEEE() called");
    return 0;
}

/* Exported Object: NSCam::BasicParameters::KEY_IMAGE_WIDTH */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam15BasicParameters15KEY_IMAGE_WIDTHE = NULL;

/* Exported Object: NSCam::BasicParameters::PIXEL_FORMAT_YUV422I */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam15BasicParameters20PIXEL_FORMAT_YUV422IE = NULL;

/* Demangled: NSCam::BasicParameters::set(char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam15BasicParameters3setEPKci(void) {
    ALOGD("_ZN5NSCam15BasicParameters3setEPKci() called");
    return 0;
}

/* Demangled: NSCam::BasicParameters::setPtr(char const*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam15BasicParameters6setPtrEPKcPv(void) {
    ALOGD("_ZN5NSCam15BasicParameters6setPtrEPKcPv() called");
    return 0;
}

/* Exported Object: NSCam::BasicParameters::PIXEL_FORMAT_JPEG */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam15BasicParameters17PIXEL_FORMAT_JPEGE = NULL;
