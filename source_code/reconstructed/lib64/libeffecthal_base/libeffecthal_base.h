/*
 * Reverse-Engineered ABI Specification for: libeffecthal.base.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libeffecthal.base.so
 */

#ifndef BEGONIA_RE_LIBEFFECTHAL_BASE_H
#define BEGONIA_RE_LIBEFFECTHAL_BASE_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN5NSCam15BasicParameters23KEY_DETECTED_ASD_ENABLEE */
/* Demangled: NSCam::BasicParameters::KEY_DETECTED_ASD_ENABLE */
extern void* _ZN5NSCam15BasicParameters23KEY_DETECTED_ASD_ENABLEE;

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<android::String8, android::String8> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEEE;

/* Symbol: _ZN5NSCam13EffectRequest19getRequestParameterEv */
/* Demangled: NSCam::EffectRequest::getRequestParameter() */
int _ZN5NSCam13EffectRequest19getRequestParameterEv(void);

/* Symbol: _ZN5NSCam15EffectFrameInfo14setFrameResultEN7android2spINS_15BasicParametersEEE */
/* Demangled: NSCam::EffectFrameInfo::setFrameResult(android::sp<NSCam::BasicParameters>) */
int _ZN5NSCam15EffectFrameInfo14setFrameResultEN7android2spINS_15BasicParametersEEE(void);

/* Symbol: _ZN5NSCam15BasicParameters16KEY_JPEG_QUALITYE */
/* Demangled: NSCam::BasicParameters::KEY_JPEG_QUALITY */
extern void* _ZN5NSCam15BasicParameters16KEY_JPEG_QUALITYE;

/* Symbol: _ZN5NSCam15BasicParameters20PIXEL_FORMAT_YUV420PE */
/* Demangled: NSCam::BasicParameters::PIXEL_FORMAT_YUV420P */
extern void* _ZN5NSCam15BasicParameters20PIXEL_FORMAT_YUV420PE;

/* Symbol: _ZN5NSCam15BasicParameters24KEY_DETECTED_ASD_3A_INFOE */
/* Demangled: NSCam::BasicParameters::KEY_DETECTED_ASD_3A_INFO */
extern void* _ZN5NSCam15BasicParameters24KEY_DETECTED_ASD_3A_INFOE;

/* Symbol: _ZN5NSCam15BasicParameters3setEPKcS2_ */
/* Demangled: NSCam::BasicParameters::set(char const*, char const*) */
int _ZN5NSCam15BasicParameters3setEPKcS2_(void);

/* Symbol: _ZTVN7android6VectorINS_7String8EEE */
/* Demangled: vtable for android::Vector<android::String8> */
extern void* _ZTVN7android6VectorINS_7String8EEE;

/* Symbol: _ZN5NSCam15BasicParameters24KEY_DETECTED_FACE_RESULTE */
/* Demangled: NSCam::BasicParameters::KEY_DETECTED_FACE_RESULT */
extern void* _ZN5NSCam15BasicParameters24KEY_DETECTED_FACE_RESULTE;

/* Symbol: _ZN5NSCam15BasicParameters9unflattenEPKvm */
/* Demangled: NSCam::BasicParameters::unflatten(void const*, unsigned long) */
int _ZN5NSCam15BasicParameters9unflattenEPKvm(void);

/* Symbol: _ZN5NSCam15BasicParametersC1Ev */
/* Demangled: NSCam::BasicParameters::BasicParameters() */
int _ZN5NSCam15BasicParametersC1Ev(void);

/* Symbol: _ZNK5NSCam15BasicParameters8getInt64EPKc */
/* Demangled: NSCam::BasicParameters::getInt64(char const*) const */
int _ZNK5NSCam15BasicParameters8getInt64EPKc(void);

/* Symbol: _ZN5NSCam13EffectHalBase9configureEv */
/* Demangled: NSCam::EffectHalBase::configure() */
int _ZN5NSCam13EffectHalBase9configureEv(void);

/* Symbol: _ZN5NSCam15BasicParameters19KEY_DETECTED_USE_GSE */
/* Demangled: NSCam::BasicParameters::KEY_DETECTED_USE_GS */
extern void* _ZN5NSCam15BasicParameters19KEY_DETECTED_USE_GSE;

/* Symbol: _ZN5NSCam15BasicParameters22KEY_DETECTED_FD_ENABLEE */
/* Demangled: NSCam::BasicParameters::KEY_DETECTED_FD_ENABLE */
extern void* _ZN5NSCam15BasicParameters22KEY_DETECTED_FD_ENABLEE;

/* Symbol: _ZN5NSCam15EffectFrameInfo14getFrameResultEv */
/* Demangled: NSCam::EffectFrameInfo::getFrameResult() */
int _ZN5NSCam15EffectFrameInfo14getFrameResultEv(void);

/* Symbol: _ZN5NSCam13EffectHalBase6uninitEv */
/* Demangled: NSCam::EffectHalBase::uninit() */
int _ZN5NSCam13EffectHalBase6uninitEv(void);

/* Symbol: _ZN5NSCam15BasicParameters18KEY_PICTURE_FORMATE */
/* Demangled: NSCam::BasicParameters::KEY_PICTURE_FORMAT */
extern void* _ZN5NSCam15BasicParameters18KEY_PICTURE_FORMATE;

/* Symbol: _ZN5NSCam13EffectHalBaseD0Ev */
/* Demangled: NSCam::EffectHalBase::~EffectHalBase() */
int _ZN5NSCam13EffectHalBaseD0Ev(void);

/* Symbol: _ZN5NSCam15EffectFrameInfoC1ERKS0_ */
/* Demangled: NSCam::EffectFrameInfo::EffectFrameInfo(NSCam::EffectFrameInfo const&) */
int _ZN5NSCam15EffectFrameInfoC1ERKS0_(void);

/* Symbol: _ZN5NSCam15BasicParameters15KEY_ZOOM_RATIOSE */
/* Demangled: NSCam::BasicParameters::KEY_ZOOM_RATIOS */
extern void* _ZN5NSCam15BasicParameters15KEY_ZOOM_RATIOSE;

/* Symbol: _ZNK5NSCam15BasicParameters6getIntEPKc */
/* Demangled: NSCam::BasicParameters::getInt(char const*) const */
int _ZNK5NSCam15BasicParameters6getIntEPKc(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam13EffectHalBase5startEv */
/* Demangled: NSCam::EffectHalBase::start() */
int _ZN5NSCam13EffectHalBase5startEv(void);

/* Symbol: _ZN17CallbackClientMgr19canSupportBGServiceEv */
/* Demangled: CallbackClientMgr::canSupportBGService() */
int _ZN17CallbackClientMgr19canSupportBGServiceEv(void);

/* Symbol: _ZN17CallbackClientMgr4sizeEv */
/* Demangled: CallbackClientMgr::size() */
int _ZN17CallbackClientMgr4sizeEv(void);

/* Symbol: _ZN5NSCam15BasicParameters10parse_pairEPKcPiS3_cPPc */
/* Demangled: NSCam::BasicParameters::parse_pair(char const*, int*, int*, char, char**) */
int _ZN5NSCam15BasicParameters10parse_pairEPKcPiS3_cPPc(void);

/* Symbol: _ZN5NSCam15BasicParameters21PIXEL_FORMAT_YUV422SPE */
/* Demangled: NSCam::BasicParameters::PIXEL_FORMAT_YUV422SP */
extern void* _ZN5NSCam15BasicParameters21PIXEL_FORMAT_YUV422SPE;

/* Symbol: _ZNK5NSCam15BasicParameters7flattenEPvm */
/* Demangled: NSCam::BasicParameters::flatten(void*, unsigned long) const */
int _ZNK5NSCam15BasicParameters7flattenEPvm(void);

/* Symbol: _ZN17CallbackClientMgr16registerBufferCBEPFbljjjjPKPhPKjS4_S4_jjE */
/* Demangled: CallbackClientMgr::registerBufferCB(bool (*)(long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned char* const*, unsigned int const*, unsigned int const*, unsigned int const*, unsigned int, unsigned int)) */
int _ZN17CallbackClientMgr16registerBufferCBEPFbljjjjPKPhPKjS4_S4_jjE(void);

/* Symbol: _ZNK7android6VectorINS_7String8EE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<android::String8>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_7String8EE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZTVN5NSCam15BasicParametersE */
/* Demangled: vtable for NSCam::BasicParameters */
extern void* _ZTVN5NSCam15BasicParametersE;

/* Symbol: _ZN5NSCam15EffectFrameInfo14setFrameBufferEN7android2spINS_12IImageBufferEEE */
/* Demangled: NSCam::EffectFrameInfo::setFrameBuffer(android::sp<NSCam::IImageBuffer>) */
int _ZN5NSCam15EffectFrameInfo14setFrameBufferEN7android2spINS_12IImageBufferEEE(void);

/* Symbol: _ZN5NSCam15BasicParameters16KEY_PICTURE_SIZEE */
/* Demangled: NSCam::BasicParameters::KEY_PICTURE_SIZE */
extern void* _ZN5NSCam15BasicParameters16KEY_PICTURE_SIZEE;

/* Symbol: _ZN5NSCam15BasicParameters19KEY_DETECTED_USE_FDE */
/* Demangled: NSCam::BasicParameters::KEY_DETECTED_USE_FD */
extern void* _ZN5NSCam15BasicParameters19KEY_DETECTED_USE_FDE;

/* Symbol: _ZN5NSCam15BasicParameters26KEY_JPEG_THUMBNAIL_QUALITYE */
/* Demangled: NSCam::BasicParameters::KEY_JPEG_THUMBNAIL_QUALITY */
extern void* _ZN5NSCam15BasicParameters26KEY_JPEG_THUMBNAIL_QUALITYE;

/* Symbol: _ZN5NSCam13EffectHalBase4initEv */
/* Demangled: NSCam::EffectHalBase::init() */
int _ZN5NSCam13EffectHalBase4initEv(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _ZN5NSCam15BasicParameters25KEY_DETECTED_SMILE_RESULTE */
/* Demangled: NSCam::BasicParameters::KEY_DETECTED_SMILE_RESULT */
extern void* _ZN5NSCam15BasicParameters25KEY_DETECTED_SMILE_RESULTE;

/* Symbol: _ZN5NSCam15BasicParameters4dumpEv */
/* Demangled: NSCam::BasicParameters::dump() */
int _ZN5NSCam15BasicParameters4dumpEv(void);

/* Symbol: _ZNK7android6VectorINS_7String8EE7do_copyEPvPKvm */
/* Demangled: android::Vector<android::String8>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_7String8EE7do_copyEPvPKvm(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _ZN5NSCam15BasicParameters12KEY_ROTATIONE */
/* Demangled: NSCam::BasicParameters::KEY_ROTATION */
extern void* _ZN5NSCam15BasicParameters12KEY_ROTATIONE;

/* Symbol: _ZN5NSCam15BasicParametersC2Ev */
/* Demangled: NSCam::BasicParameters::BasicParameters() */
int _ZN5NSCam15BasicParametersC2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE8do_splatEPvPKvm(void);

/* Symbol: _ZTVN5NSCam13EffectHalBaseE */
/* Demangled: vtable for NSCam::EffectHalBase */
extern void* _ZTVN5NSCam13EffectHalBaseE;

/* Symbol: _ZN17CallbackClientMgr10registerCBEPFvvEj */
/* Demangled: CallbackClientMgr::registerCB(void (*)(), unsigned int) */
int _ZN17CallbackClientMgr10registerCBEPFvvEj(void);

/* Symbol: _ZN17CallbackClientMgr27onCB_CompressedImage_packedEljPKhjbjj */
/* Demangled: CallbackClientMgr::onCB_CompressedImage_packed(long, unsigned int, unsigned char const*, unsigned int, bool, unsigned int, unsigned int) */
int _ZN17CallbackClientMgr27onCB_CompressedImage_packedEljPKhjbjj(void);

/* Symbol: _ZN5NSCam18ICallbackClientMgr22getFormatedImageFormatENS_12EImageFormatE */
/* Demangled: NSCam::ICallbackClientMgr::getFormatedImageFormat(NSCam::EImageFormat) */
int _ZN5NSCam18ICallbackClientMgr22getFormatedImageFormatENS_12EImageFormatE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_compareEPKvS6_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_compareEPKvS6_(void);

/* Symbol: _ZNK7android6VectorINS_7String8EE8do_splatEPvPKvm */
/* Demangled: android::Vector<android::String8>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_7String8EE8do_splatEPvPKvm(void);

/* Symbol: _ZN5NSCam15BasicParameters21PIXEL_FORMAT_YUV420SPE */
/* Demangled: NSCam::BasicParameters::PIXEL_FORMAT_YUV420SP */
extern void* _ZN5NSCam15BasicParameters21PIXEL_FORMAT_YUV420SPE;

/* Symbol: _ZNK5NSCam15BasicParameters6getPtrEPKc */
/* Demangled: NSCam::BasicParameters::getPtr(char const*) const */
int _ZNK5NSCam15BasicParameters6getPtrEPKc(void);

/* Symbol: _ZNK7android6VectorINS_7String8EE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<android::String8>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_7String8EE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN5NSCam13EffectHalBase19updateEffectRequestEN7android2spINS_13EffectRequestEEE */
/* Demangled: NSCam::EffectHalBase::updateEffectRequest(android::sp<NSCam::EffectRequest>) */
int _ZN5NSCam13EffectHalBase19updateEffectRequestEN7android2spINS_13EffectRequestEEE(void);

/* Symbol: _ZN5NSCam13EffectHalBase7releaseEv */
/* Demangled: NSCam::EffectHalBase::release() */
int _ZN5NSCam13EffectHalBase7releaseEv(void);

/* Symbol: _ZN5NSCam15EffectFrameInfo10setFrameNoEl */
/* Demangled: NSCam::EffectFrameInfo::setFrameNo(long) */
int _ZN5NSCam15EffectFrameInfo10setFrameNoEl(void);

/* Symbol: _ZN5NSCam18ICallbackClientMgr11getInstanceEv */
/* Demangled: NSCam::ICallbackClientMgr::getInstance() */
int _ZN5NSCam18ICallbackClientMgr11getInstanceEv(void);

/* Symbol: _ZN5NSCam13EffectHalBase5abortEPKNS_15BasicParametersE */
/* Demangled: NSCam::EffectHalBase::abort(NSCam::BasicParameters const*) */
int _ZN5NSCam13EffectHalBase5abortEPKNS_15BasicParametersE(void);

/* Symbol: _ZN5NSCam13EffectHalBaseD1Ev */
/* Demangled: NSCam::EffectHalBase::~EffectHalBase() */
int _ZN5NSCam13EffectHalBaseD1Ev(void);

/* Symbol: _ZNK5NSCam13EffectHalBase14getNameVersionERNS_16EffectHalVersionE */
/* Demangled: NSCam::EffectHalBase::getNameVersion(NSCam::EffectHalVersion&) const */
int _ZNK5NSCam13EffectHalBase14getNameVersionERNS_16EffectHalVersionE(void);

/* Symbol: _ZN5NSCam15EffectFrameInfoC2ERKS0_ */
/* Demangled: NSCam::EffectFrameInfo::EffectFrameInfo(NSCam::EffectFrameInfo const&) */
int _ZN5NSCam15EffectFrameInfoC2ERKS0_(void);

/* Symbol: _ZN17CallbackClientMgr16registerBufferCBEPFbljPKhjbjjjE */
/* Demangled: CallbackClientMgr::registerBufferCB(bool (*)(long, unsigned int, unsigned char const*, unsigned int, bool, unsigned int, unsigned int, unsigned int)) */
int _ZN17CallbackClientMgr16registerBufferCBEPFbljPKhjbjjjE(void);

/* Symbol: _ZN17CallbackClientMgr19onCB_PostviewClientElPKN5NSCam12IImageBufferEj */
/* Demangled: CallbackClientMgr::onCB_PostviewClient(long, NSCam::IImageBuffer const*, unsigned int) */
int _ZN17CallbackClientMgr19onCB_PostviewClientElPKN5NSCam12IImageBufferEj(void);

/* Symbol: _ZN17CallbackClientMgr19onCB_PostviewClientEljjjjPKPhPKjS4_S4_j */
/* Demangled: CallbackClientMgr::onCB_PostviewClient(long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned char* const*, unsigned int const*, unsigned int const*, unsigned int const*, unsigned int) */
int _ZN17CallbackClientMgr19onCB_PostviewClientEljjjjPKPhPKjS4_S4_j(void);

/* Symbol: _ZTV17CallbackClientMgr */
/* Demangled: vtable for CallbackClientMgr */
extern void* _ZTV17CallbackClientMgr;

/* Symbol: _ZN5NSCam15BasicParameters27KEY_DETECTED_GESTURE_RESULTE */
/* Demangled: NSCam::BasicParameters::KEY_DETECTED_GESTURE_RESULT */
extern void* _ZN5NSCam15BasicParameters27KEY_DETECTED_GESTURE_RESULTE;

/* Symbol: _ZN5NSCam15BasicParametersC1ERKS0_ */
/* Demangled: NSCam::BasicParameters::BasicParameters(NSCam::BasicParameters const&) */
int _ZN5NSCam15BasicParametersC1ERKS0_(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _ZN5NSCam15BasicParameters16KEY_IMAGE_HEIGHTE */
/* Demangled: NSCam::BasicParameters::KEY_IMAGE_HEIGHT */
extern void* _ZN5NSCam15BasicParameters16KEY_IMAGE_HEIGHTE;

/* Symbol: _ZN5NSCam15EffectFrameInfo13setFrameReadyEb */
/* Demangled: NSCam::EffectFrameInfo::setFrameReady(bool) */
int _ZN5NSCam15EffectFrameInfo13setFrameReadyEb(void);

/* Symbol: _ZN5NSCam15EffectFrameInfo17getFrameParameterEv */
/* Demangled: NSCam::EffectFrameInfo::getFrameParameter() */
int _ZN5NSCam15EffectFrameInfo17getFrameParameterEv(void);

/* Symbol: _ZN5NSCam15BasicParameters20KEY_DETECTED_USE_ASDE */
/* Demangled: NSCam::BasicParameters::KEY_DETECTED_USE_ASD */
extern void* _ZN5NSCam15BasicParameters20KEY_DETECTED_USE_ASDE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE7do_copyEPvPKvm(void);

/* Symbol: _ZNK7android6VectorINS_7String8EE12do_constructEPvm */
/* Demangled: android::Vector<android::String8>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorINS_7String8EE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam15EffectFrameInfo18isFrameBufferReadyEv */
/* Demangled: NSCam::EffectFrameInfo::isFrameBufferReady() */
int _ZN5NSCam15EffectFrameInfo18isFrameBufferReadyEv(void);

/* Symbol: _ZN17CallbackClientMgr20createCallbackClientEl */
/* Demangled: CallbackClientMgr::createCallbackClient(long) */
int _ZN17CallbackClientMgr20createCallbackClientEl(void);

/* Symbol: _ZN5NSCam15BasicParameters6removeEPKc */
/* Demangled: NSCam::BasicParameters::remove(char const*) */
int _ZN5NSCam15BasicParameters6removeEPKc(void);

/* Symbol: _ZN17CallbackClientMgr20removeCallbackClientElij */
/* Demangled: CallbackClientMgr::removeCallbackClient(long, int, unsigned int) */
int _ZN17CallbackClientMgr20removeCallbackClientElij(void);

/* Symbol: _ZN5NSCam13EffectRequest16getRequestResultEv */
/* Demangled: NSCam::EffectRequest::getRequestResult() */
int _ZN5NSCam13EffectRequest16getRequestResultEv(void);

/* Symbol: _ZN5NSCam13EffectRequest19setRequestParameterEN7android2spINS_15BasicParametersEEE */
/* Demangled: NSCam::EffectRequest::setRequestParameter(android::sp<NSCam::BasicParameters>) */
int _ZN5NSCam13EffectRequest19setRequestParameterEN7android2spINS_15BasicParametersEEE(void);

/* Symbol: _ZNK5NSCam15BasicParameters16getFlattenedSizeEv */
/* Demangled: NSCam::BasicParameters::getFlattenedSize() const */
int _ZNK5NSCam15BasicParameters16getFlattenedSizeEv(void);

/* Symbol: _ZNK5NSCam13EffectHalBase21getCaptureRequirementEPNS_15BasicParametersERN7android6VectorIS1_EE */
/* Demangled: NSCam::EffectHalBase::getCaptureRequirement(NSCam::BasicParameters*, android::Vector<NSCam::BasicParameters>&) const */
int _ZNK5NSCam13EffectHalBase21getCaptureRequirementEPNS_15BasicParametersERN7android6VectorIS1_EE(void);

/* Symbol: _ZN5NSCam15BasicParameters7getKeysEv */
/* Demangled: NSCam::BasicParameters::getKeys() */
int _ZN5NSCam15BasicParameters7getKeysEv(void);

/* Symbol: _ZN5NSCam15BasicParameters8setInt64EPKcl */
/* Demangled: NSCam::BasicParameters::setInt64(char const*, long) */
int _ZN5NSCam15BasicParameters8setInt64EPKcl(void);

/* Symbol: _ZNK5NSCam15BasicParameters8getFloatEPKc */
/* Demangled: NSCam::BasicParameters::getFloat(char const*) const */
int _ZNK5NSCam15BasicParameters8getFloatEPKc(void);

/* Symbol: _ZN5NSCam15BasicParameters24KEY_JPEG_THUMBNAIL_SIZESE */
/* Demangled: NSCam::BasicParameters::KEY_JPEG_THUMBNAIL_SIZES */
extern void* _ZN5NSCam15BasicParameters24KEY_JPEG_THUMBNAIL_SIZESE;

/* Symbol: _ZN5NSCam15BasicParameters8setFloatEPKcf */
/* Demangled: NSCam::BasicParameters::setFloat(char const*, float) */
int _ZN5NSCam15BasicParameters8setFloatEPKcf(void);

/* Symbol: _ZN5NSCam13EffectHalBase11unconfigureEv */
/* Demangled: NSCam::EffectHalBase::unconfigure() */
int _ZN5NSCam13EffectHalBase11unconfigureEv(void);

/* Symbol: _ZN5NSCam13EffectHalBase13setParametersEN7android2spINS_15BasicParametersEEE */
/* Demangled: NSCam::EffectHalBase::setParameters(android::sp<NSCam::BasicParameters>) */
int _ZN5NSCam13EffectHalBase13setParametersEN7android2spINS_15BasicParametersEEE(void);

/* Symbol: _ZN5NSCam15BasicParameters22KEY_DETECTED_GS_ENABLEE */
/* Demangled: NSCam::BasicParameters::KEY_DETECTED_GS_ENABLE */
extern void* _ZN5NSCam15BasicParameters22KEY_DETECTED_GS_ENABLEE;

/* Symbol: _ZN5NSCam13EffectHalBaseD2Ev */
/* Demangled: NSCam::EffectHalBase::~EffectHalBase() */
int _ZN5NSCam13EffectHalBaseD2Ev(void);

/* Symbol: _ZN5NSCam18ICallbackClientMgr17generateTimestampEv */
/* Demangled: NSCam::ICallbackClientMgr::generateTimestamp() */
int _ZN5NSCam18ICallbackClientMgr17generateTimestampEv(void);

/* Symbol: _ZN5NSCam18ICallbackClientMgr22getCustomizedBufOffsetEj */
/* Demangled: NSCam::ICallbackClientMgr::getCustomizedBufOffset(unsigned int) */
int _ZN5NSCam18ICallbackClientMgr22getCustomizedBufOffsetEj(void);

/* Symbol: _ZN5NSCam15BasicParameters18KEY_DETECTED_SCENEE */
/* Demangled: NSCam::BasicParameters::KEY_DETECTED_SCENE */
extern void* _ZN5NSCam15BasicParameters18KEY_DETECTED_SCENEE;

/* Symbol: _ZN5NSCam15BasicParameters21KEY_DETECTED_FACE_NUME */
/* Demangled: NSCam::BasicParameters::KEY_DETECTED_FACE_NUM */
extern void* _ZN5NSCam15BasicParameters21KEY_DETECTED_FACE_NUME;

/* Symbol: _ZN5NSCam15BasicParameters22KEY_DETECTED_SD_ENABLEE */
/* Demangled: NSCam::BasicParameters::KEY_DETECTED_SD_ENABLE */
extern void* _ZN5NSCam15BasicParameters22KEY_DETECTED_SD_ENABLEE;

/* Symbol: _ZN5NSCam15BasicParametersC2ERKS0_ */
/* Demangled: NSCam::BasicParameters::BasicParameters(NSCam::BasicParameters const&) */
int _ZN5NSCam15BasicParametersC2ERKS0_(void);

/* Symbol: _ZN5NSCam13EffectHalBase17setEffectListenerERKN7android2wpINS_15IEffectListenerEEE */
/* Demangled: NSCam::EffectHalBase::setEffectListener(android::wp<NSCam::IEffectListener> const&) */
int _ZN5NSCam13EffectHalBase17setEffectListenerERKN7android2wpINS_15IEffectListenerEEE(void);

/* Symbol: _ZN5NSCam15EffectFrameInfo14getFrameBufferERN7android2spINS_12IImageBufferEEE */
/* Demangled: NSCam::EffectFrameInfo::getFrameBuffer(android::sp<NSCam::IImageBuffer>&) */
int _ZN5NSCam15EffectFrameInfo14getFrameBufferERN7android2spINS_12IImageBufferEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam15BasicParameters19PIXEL_FORMAT_RGB565E */
/* Demangled: NSCam::BasicParameters::PIXEL_FORMAT_RGB565 */
extern void* _ZN5NSCam15BasicParameters19PIXEL_FORMAT_RGB565E;

/* Symbol: _ZN5NSCam15BasicParameters21PIXEL_FORMAT_RGBA8888E */
/* Demangled: NSCam::BasicParameters::PIXEL_FORMAT_RGBA8888 */
extern void* _ZN5NSCam15BasicParameters21PIXEL_FORMAT_RGBA8888E;

/* Symbol: _ZN5NSCam15BasicParameters9unflattenERKN7android7String8E */
/* Demangled: NSCam::BasicParameters::unflatten(android::String8 const&) */
int _ZN5NSCam15BasicParameters9unflattenERKN7android7String8E(void);

/* Symbol: _ZNK5NSCam15BasicParameters3getEPKc */
/* Demangled: NSCam::BasicParameters::get(char const*) const */
int _ZNK5NSCam15BasicParameters3getEPKc(void);

/* Symbol: _ZNK5NSCam15BasicParameters7flattenEv */
/* Demangled: NSCam::BasicParameters::flatten() const */
int _ZNK5NSCam15BasicParameters7flattenEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorINS_7String8EE10do_destroyEPvm */
/* Demangled: android::Vector<android::String8>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorINS_7String8EE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam13EffectHalBaseC2Ev */
/* Demangled: NSCam::EffectHalBase::EffectHalBase() */
int _ZN5NSCam13EffectHalBaseC2Ev(void);

/* Symbol: _ZN5NSCam13EffectRequest16setRequestResultEN7android2spINS_15BasicParametersEEE */
/* Demangled: NSCam::EffectRequest::setRequestResult(android::sp<NSCam::BasicParameters>) */
int _ZN5NSCam13EffectRequest16setRequestResultEN7android2spINS_15BasicParametersEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5NSCam13EffectHalBase11prepareDoneERKNS_15BasicParametersEi */
/* Demangled: NSCam::EffectHalBase::prepareDone(NSCam::BasicParameters const&, int) */
int _ZN5NSCam13EffectHalBase11prepareDoneERKNS_15BasicParametersEi(void);

/* Symbol: _ZN5NSCam13EffectHalBase12setParameterERN7android7String8ES3_ */
/* Demangled: NSCam::EffectHalBase::setParameter(android::String8&, android::String8&) */
int _ZN5NSCam13EffectHalBase12setParameterERN7android7String8ES3_(void);

/* Symbol: _ZN5NSCam13EffectHalBase7prepareEv */
/* Demangled: NSCam::EffectHalBase::prepare() */
int _ZN5NSCam13EffectHalBase7prepareEv(void);

/* Symbol: _ZN5NSCam15EffectFrameInfo17setFrameParameterEN7android2spINS_15BasicParametersEEE */
/* Demangled: NSCam::EffectFrameInfo::setFrameParameter(android::sp<NSCam::BasicParameters>) */
int _ZN5NSCam15EffectFrameInfo17setFrameParameterEN7android2spINS_15BasicParametersEEE(void);

/* Symbol: _ZN5NSCam15BasicParameters15KEY_IMAGE_WIDTHE */
/* Demangled: NSCam::BasicParameters::KEY_IMAGE_WIDTH */
extern void* _ZN5NSCam15BasicParameters15KEY_IMAGE_WIDTHE;

/* Symbol: _ZN5NSCam15BasicParameters20PIXEL_FORMAT_YUV422IE */
/* Demangled: NSCam::BasicParameters::PIXEL_FORMAT_YUV422I */
extern void* _ZN5NSCam15BasicParameters20PIXEL_FORMAT_YUV422IE;

/* Symbol: _ZN5NSCam15BasicParameters3setEPKci */
/* Demangled: NSCam::BasicParameters::set(char const*, int) */
int _ZN5NSCam15BasicParameters3setEPKci(void);

/* Symbol: _ZN5NSCam15BasicParameters6setPtrEPKcPv */
/* Demangled: NSCam::BasicParameters::setPtr(char const*, void*) */
int _ZN5NSCam15BasicParameters6setPtrEPKcPv(void);

/* Symbol: _ZN5NSCam15BasicParameters17PIXEL_FORMAT_JPEGE */
/* Demangled: NSCam::BasicParameters::PIXEL_FORMAT_JPEG */
extern void* _ZN5NSCam15BasicParameters17PIXEL_FORMAT_JPEGE;

__END_DECLS

#endif /* BEGONIA_RE_LIBEFFECTHAL_BASE_H */
