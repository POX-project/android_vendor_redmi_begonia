/*
 * Reverse-Engineered Source for: libmfllcore.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libmfllcore"

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
#include "libmfllcore.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: mfll::MfllFeaturePerf::~MfllFeaturePerf() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllFeaturePerfD2Ev(void) {
    ALOGD("_ZN4mfll15MfllFeaturePerfD2Ev() called");
    return 0;
}

/* Demangled: mfll::MfllFeatureMrp::onEvent(mfll::EventType, mfll::MfllEventStatus&, void*, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll14MfllFeatureMrp7onEventENS_9EventTypeERNS_15MfllEventStatusEPvS4_S4_(void) {
    ALOGD("_ZN4mfll14MfllFeatureMrp7onEventENS_9EventTypeERNS_15MfllEventStatusEPvS4_S4_() called");
    return 0;
}

/* Demangled: mfll::MfllFeatureDump::doneEvent(mfll::EventType, mfll::MfllEventStatus&, void*, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllFeatureDump9doneEventENS_9EventTypeERNS_15MfllEventStatusEPvS4_S4_(void) {
    ALOGD("_ZN4mfll15MfllFeatureDump9doneEventENS_9EventTypeERNS_15MfllEventStatusEPvS4_S4_() called");
    return 0;
}

/* Demangled: mfll::MfllBss::getForceBss(void*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll7MfllBss11getForceBssEPvm(void) {
    ALOGD("_ZN4mfll7MfllBss11getForceBssEPvm() called");
    return 0;
}

/* Demangled: mfll::MfllImageBuffer::getImageFormat() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllImageBuffer14getImageFormatEv(void) {
    ALOGD("_ZN4mfll15MfllImageBuffer14getImageFormatEv() called");
    return 0;
}

/* Demangled: __getf2 */
extern "C" __attribute__((visibility("default"))) int fn___getf2(void) __asm__("__getf2");
int fn___getf2(void) {
    ALOGD("__getf2() called");
    return 0;
}

/* Demangled: mfll::MfllCore::do_EncodeYuvGoldenDownscale(long) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore27do_EncodeYuvGoldenDownscaleEl(void) {
    ALOGD("_ZN4mfll8MfllCore27do_EncodeYuvGoldenDownscaleEl() called");
    return 0;
}

/* Demangled: mfll::MfllFeatureDump::MfllFeatureDump() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllFeatureDumpC2Ev(void) {
    ALOGD("_ZN4mfll15MfllFeatureDumpC2Ev() called");
    return 0;
}

/* Demangled: mfll::MfllCore::getIndexByNewIndex(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore18getIndexByNewIndexERKj(void) {
    ALOGD("_ZN4mfll8MfllCore18getIndexByNewIndexERKj() called");
    return 0;
}

/* Demangled: __lttf2 */
extern "C" __attribute__((visibility("default"))) int fn___lttf2(void) __asm__("__lttf2");
int fn___lttf2(void) {
    ALOGD("__lttf2() called");
    return 0;
}

/* Demangled: mfll::MfllFeatureDump::onEvent(mfll::EventType, mfll::MfllEventStatus&, void*, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllFeatureDump7onEventENS_9EventTypeERNS_15MfllEventStatusEPvS4_S4_(void) {
    ALOGD("_ZN4mfll15MfllFeatureDump7onEventENS_9EventTypeERNS_15MfllEventStatusEPvS4_S4_() called");
    return 0;
}

/* Demangled: mfll::MfllCapturer::setShotMode(mfll::MfllMode const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllCapturer11setShotModeERKNS_8MfllModeE(void) {
    ALOGD("_ZN4mfll12MfllCapturer11setShotModeERKNS_8MfllModeE() called");
    return 0;
}

/* Demangled: mfll::MfllCapturer::~MfllCapturer() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllCapturerD2Ev(void) {
    ALOGD("_ZN4mfll12MfllCapturerD2Ev() called");
    return 0;
}

/* Demangled: mfll::MfllFeaturePerf::MfllFeaturePerf() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllFeaturePerfC1Ev(void) {
    ALOGD("_ZN4mfll15MfllFeaturePerfC1Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<long, std::__1::allocator<long> >::__append(unsigned long, long const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIlNS_9allocatorIlEEE8__appendEmRKl(void) {
    ALOGD("_ZNSt3__16vectorIlNS_9allocatorIlEEE8__appendEmRKl() called");
    return 0;
}

/* Demangled: mfll::MfllYuvCapturer::setShotMode(mfll::MfllMode const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllYuvCapturer11setShotModeERKNS_8MfllModeE(void) {
    ALOGD("_ZN4mfll15MfllYuvCapturer11setShotModeERKNS_8MfllModeE() called");
    return 0;
}

/* Exported Object: typeinfo for std::logic_error */
extern "C" __attribute__((visibility("default"))) void* _ZTISt11logic_error = NULL;

/* Demangled: mfll::MfllCore::do_Mixing(long) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore9do_MixingEl(void) {
    ALOGD("_ZN4mfll8MfllCore9do_MixingEl() called");
    return 0;
}

/* Demangled: mfll::MfllProperty::getProperty(mfll::tagProperty const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllProperty11getPropertyERKNS_11tagPropertyE(void) {
    ALOGD("_ZN4mfll12MfllProperty11getPropertyERKNS_11tagPropertyE() called");
    return 0;
}

/* Exported Object: vtable for mfll::IMfllMemc */
extern "C" __attribute__((visibility("default"))) void* _ZTVN4mfll9IMfllMemcE = NULL;

/* Demangled: mfll::MfllCore::isFullSizeMc() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore12isFullSizeMcEv(void) {
    ALOGD("_ZN4mfll8MfllCore12isFullSizeMcEv() called");
    return 0;
}

/* Demangled: mfll::MfllFeatureFeed::MfllFeatureFeed() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllFeatureFeedC2Ev(void) {
    ALOGD("_ZN4mfll15MfllFeatureFeedC2Ev() called");
    return 0;
}

/* Demangled: mfll::MfllImageBuffer::convertImageBufferFormat(mfll::ImageFormat const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllImageBuffer24convertImageBufferFormatERKNS_11ImageFormatE(void) {
    ALOGD("_ZN4mfll15MfllImageBuffer24convertImageBufferFormatERKNS_11ImageFormatE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NS3Av3::MetaSet_T*, std::__1::allocator<NS3Av3::MetaSet_T*> >::push_back(NS3Av3::MetaSet_T*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN6NS3Av39MetaSet_TENS_9allocatorIS3_EEE9push_backEOS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN6NS3Av39MetaSet_TENS_9allocatorIS3_EEE9push_backEOS3_() called");
    return 0;
}

/* Demangled: __fe_getround */
extern "C" __attribute__((visibility("default"))) int fn___fe_getround(void) __asm__("__fe_getround");
int fn___fe_getround(void) {
    ALOGD("__fe_getround() called");
    return 0;
}

/* Demangled: mfll::MfllFeatureFeed::doneEvent(mfll::EventType, mfll::MfllEventStatus&, void*, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllFeatureFeed9doneEventENS_9EventTypeERNS_15MfllEventStatusEPvS4_S4_(void) {
    ALOGD("_ZN4mfll15MfllFeatureFeed9doneEventENS_9EventTypeERNS_15MfllEventStatusEPvS4_S4_() called");
    return 0;
}

/* Demangled: mfll::MfllCapturer::MfllCapturer() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllCapturerC1Ev(void) {
    ALOGD("_ZN4mfll12MfllCapturerC1Ev() called");
    return 0;
}

/* Demangled: mfll::MfllNvram::chunkMfnr(unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll9MfllNvram9chunkMfnrEPm(void) {
    ALOGD("_ZN4mfll9MfllNvram9chunkMfnrEPm() called");
    return 0;
}

/* Demangled: mfll::MfllCore2p5::MfllCore2p5() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll11MfllCore2p5C1Ev(void) {
    ALOGD("_ZN4mfll11MfllCore2p5C1Ev() called");
    return 0;
}

/* Exported Object: vtable for mfll::MfllCapturer */
extern "C" __attribute__((visibility("default"))) void* _ZTVN4mfll12MfllCapturerE = NULL;

/* Demangled: mfll::MfllMfb::blend(NSCam::IImageBuffer*, NSCam::IImageBuffer*, NSCam::IImageBuffer*, NSCam::IImageBuffer*, NSCam::IImageBuffer*, NSCam::IImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll7MfllMfb5blendEPN5NSCam12IImageBufferES3_S3_S3_S3_S3_(void) {
    ALOGD("_ZN4mfll7MfllMfb5blendEPN5NSCam12IImageBufferES3_S3_S3_S3_S3_() called");
    return 0;
}

/* Demangled: mfll::MfllMfb::getMainMetasetLocked() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4mfll7MfllMfb20getMainMetasetLockedEv(void) {
    ALOGD("_ZNK4mfll7MfllMfb20getMainMetasetLockedEv() called");
    return 0;
}

/* Demangled: __atomic_load_1 */
extern "C" __attribute__((visibility("default"))) int fn___atomic_load_1(void) __asm__("__atomic_load_1");
int fn___atomic_load_1(void) {
    ALOGD("__atomic_load_1() called");
    return 0;
}

/* Demangled: mfll::IMfllCore* mfll::MAKE_MFNR_CORE<2, 5, 0>() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll14MAKE_MFNR_COREILi2ELi5ELi0EEEPNS_9IMfllCoreEv(void) {
    ALOGD("_ZN4mfll14MAKE_MFNR_COREILi2ELi5ELi0EEEPNS_9IMfllCoreEv() called");
    return 0;
}

/* Demangled: mfll::MfllCore::~MfllCore() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCoreD1Ev(void) {
    ALOGD("_ZN4mfll8MfllCoreD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::future<void>*, std::__1::allocator<std::__1::future<void>*>&>::push_front(std::__1::future<void>* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_6futureIvEERNS_9allocatorIS3_EEE10push_frontERKS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_6futureIvEERNS_9allocatorIS3_EEE10push_frontERKS3_() called");
    return 0;
}

/* Demangled: android::sp<mfll::IMfllImageBuffer>::operator=(android::sp<mfll::IMfllImageBuffer>&&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN4mfll16IMfllImageBufferEEaSEOS3_(void) {
    ALOGD("_ZN7android2spIN4mfll16IMfllImageBufferEEaSEOS3_() called");
    return 0;
}

/* Demangled: mfll::MfllMfb::setIsp(int, NS3Av3::MetaSet_T&, NS3Av3::TuningParam*, NS3Av3::MetaSet_T*, NSCam::IImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll7MfllMfb6setIspEiRN6NS3Av39MetaSet_TEPNS1_11TuningParamEPS2_PN5NSCam12IImageBufferE(void) {
    ALOGD("_ZN4mfll7MfllMfb6setIspEiRN6NS3Av39MetaSet_TEPNS1_11TuningParamEPS2_PN5NSCam12IImageBufferE() called");
    return 0;
}

/* Demangled: __atomic_load_2 */
extern "C" __attribute__((visibility("default"))) int fn___atomic_load_2(void) __asm__("__atomic_load_2");
int fn___atomic_load_2(void) {
    ALOGD("__atomic_load_2() called");
    return 0;
}

/* Demangled: mfll::MfllCore::releaseBuffer(mfll::MfllBuffer const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore13releaseBufferERKNS_10MfllBufferEi(void) {
    ALOGD("_ZN4mfll8MfllCore13releaseBufferERKNS_10MfllBufferEi() called");
    return 0;
}

/* Demangled: android::sp<mfll::IMfllImageBuffer>::operator=(mfll::IMfllImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN4mfll16IMfllImageBufferEEaSEPS2_(void) {
    ALOGD("_ZN7android2spIN4mfll16IMfllImageBufferEEaSEPS2_() called");
    return 0;
}

/* Demangled: mfll::MfllYuvCapturer::captureFrames(unsigned int, android::sp<mfll::IMfllImageBuffer>*, android::sp<mfll::IMfllImageBuffer>*, mfll::MfllMotionVector*, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllYuvCapturer13captureFramesEjPN7android2spINS_16IMfllImageBufferEEES5_PNS_16MfllMotionVectorERi(void) {
    ALOGD("_ZN4mfll15MfllYuvCapturer13captureFramesEjPN7android2spINS_16IMfllImageBufferEEES5_PNS_16MfllMotionVectorERi() called");
    return 0;
}

/* Exported Object: vtable for mfll::IMfllExifInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTVN4mfll13IMfllExifInfoE = NULL;

/* Demangled: mfll::MfllCore::getVersion() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore10getVersionEv(void) {
    ALOGD("_ZN4mfll8MfllCore10getVersionEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<mfll::ImageBufferPack*, std::__1::allocator<mfll::ImageBufferPack*> >::push_back(mfll::ImageBufferPack*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN4mfll15ImageBufferPackENS_9allocatorIS3_EEE9push_backEOS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN4mfll15ImageBufferPackENS_9allocatorIS3_EEE9push_backEOS3_() called");
    return 0;
}

/* Demangled: mfll::MfllImageBuffer::initBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllImageBuffer10initBufferEv(void) {
    ALOGD("_ZN4mfll15MfllImageBuffer10initBufferEv() called");
    return 0;
}

/* Demangled: __atomic_load_4 */
extern "C" __attribute__((visibility("default"))) int fn___atomic_load_4(void) __asm__("__atomic_load_4");
int fn___atomic_load_4(void) {
    ALOGD("__atomic_load_4() called");
    return 0;
}

/* Demangled: mfll::MfhrCore2::do_Init(mfll::MfllConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll9MfhrCore27do_InitERKNS_10MfllConfigE(void) {
    ALOGD("_ZN4mfll9MfhrCore27do_InitERKNS_10MfllConfigE() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<mfll::ePLATFORMCFG, long>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<mfll::ePLATFORMCFG, long>, std::__1::__unordered_map_hasher<mfll::ePLATFORMCFG, std::__1::__hash_value_type<mfll::ePLATFORMCFG, long>, std::__1::hash<mfll::ePLATFORMCFG>, true>, std::__1::__unordered_map_equal<mfll::ePLATFORMCFG, std::__1::__hash_value_type<mfll::ePLATFORMCFG, long>, std::__1::equal_to<mfll::ePLATFORMCFG>, true>, std::__1::allocator<std::__1::__hash_value_type<mfll::ePLATFORMCFG, long> > >::__emplace_unique_key_args<mfll::ePLATFORMCFG, std::__1::piecewise_construct_t const&, std::__1::tuple<mfll::ePLATFORMCFG&&>, std::__1::tuple<> >(mfll::ePLATFORMCFG const&, std::__1::piecewise_construct_t const&, std::__1::tuple<mfll::ePLATFORMCFG&&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN4mfll12ePLATFORMCFGElEENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJOS3_EEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN4mfll12ePLATFORMCFGElEENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJOS3_EEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::NSIoPipe::Output> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam8NSIoPipe6OutputEEE = NULL;

/* Demangled: mfll::MfllProperty::~MfllProperty() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllPropertyD1Ev(void) {
    ALOGD("_ZN4mfll12MfllPropertyD1Ev() called");
    return 0;
}

/* Demangled: mfll::MfllFeatureDump::dumpMixStage(mfll::IMfllCore*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllFeatureDump12dumpMixStageEPNS_9IMfllCoreE(void) {
    ALOGD("_ZN4mfll15MfllFeatureDump12dumpMixStageEPNS_9IMfllCoreE() called");
    return 0;
}

/* Demangled: mfll::MfllCapturer::queueGmv(mfll::MfllMotionVector const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllCapturer8queueGmvERKNS_16MfllMotionVectorE(void) {
    ALOGD("_ZN4mfll12MfllCapturer8queueGmvERKNS_16MfllMotionVectorE() called");
    return 0;
}

/* Demangled: mfll::MfllImageBuffer::setResolution(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllImageBuffer13setResolutionEjj(void) {
    ALOGD("_ZN4mfll15MfllImageBuffer13setResolutionEjj() called");
    return 0;
}

/* Demangled: mfll::MfllImageBuffer::tranImageFormat(mfll::ImageFormat const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllImageBuffer15tranImageFormatERKNS_11ImageFormatE(void) {
    ALOGD("_ZN4mfll15MfllImageBuffer15tranImageFormatERKNS_11ImageFormatE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<mfll::EventType, char const*>, std::__1::__map_value_compare<mfll::EventType, std::__1::__value_type<mfll::EventType, char const*>, std::__1::less<mfll::EventType>, true>, std::__1::allocator<std::__1::__value_type<mfll::EventType, char const*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<mfll::EventType, char const*>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIN4mfll9EventTypeEPKcEENS_19__map_value_compareIS3_S6_NS_4lessIS3_EELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIN4mfll9EventTypeEPKcEENS_19__map_value_compareIS3_S6_NS_4lessIS3_EELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE() called");
    return 0;
}

/* Demangled: std::__1::vector<mfll::MfllMotionVector, std::__1::allocator<mfll::MfllMotionVector> >::__append(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN4mfll16MfllMotionVectorENS_9allocatorIS2_EEE8__appendEm(void) {
    ALOGD("_ZNSt3__16vectorIN4mfll16MfllMotionVectorENS_9allocatorIS2_EEE8__appendEm() called");
    return 0;
}

/* Demangled: mfll::MfllCore2::do_Blending(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll9MfllCore211do_BlendingEPv(void) {
    ALOGD("_ZN4mfll9MfllCore211do_BlendingEPv() called");
    return 0;
}

/* Demangled: mfll::MfllCore2::do_MotionEstimation(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll9MfllCore219do_MotionEstimationEPv(void) {
    ALOGD("_ZN4mfll9MfllCore219do_MotionEstimationEPv() called");
    return 0;
}

/* Demangled: mfll::MfllYuvCapturer::~MfllYuvCapturer() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllYuvCapturerD0Ev(void) {
    ALOGD("_ZN4mfll15MfllYuvCapturerD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<mfll::ePLATFORMCFG, long>, std::__1::__unordered_map_hasher<mfll::ePLATFORMCFG, std::__1::__hash_value_type<mfll::ePLATFORMCFG, long>, std::__1::hash<mfll::ePLATFORMCFG>, true>, std::__1::__unordered_map_equal<mfll::ePLATFORMCFG, std::__1::__hash_value_type<mfll::ePLATFORMCFG, long>, std::__1::equal_to<mfll::ePLATFORMCFG>, true>, std::__1::allocator<std::__1::__hash_value_type<mfll::ePLATFORMCFG, long> > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN4mfll12ePLATFORMCFGElEENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN4mfll12ePLATFORMCFGElEENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEE8__rehashEm() called");
    return 0;
}

/* Exported Object: vtable for mfll::IMfllNvram */
extern "C" __attribute__((visibility("default"))) void* _ZTVN4mfll10IMfllNvramE = NULL;

/* Demangled: __atomic_load_8 */
extern "C" __attribute__((visibility("default"))) int fn___atomic_load_8(void) __asm__("__atomic_load_8");
int fn___atomic_load_8(void) {
    ALOGD("__atomic_load_8() called");
    return 0;
}

/* Demangled: mfll::MfllCore::getMfb() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore6getMfbEv(void) {
    ALOGD("_ZN4mfll8MfllCore6getMfbEv() called");
    return 0;
}

/* Demangled: std::__1::vector<mfll::MfllMotionVector*, std::__1::allocator<mfll::MfllMotionVector*> >::__append(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN4mfll16MfllMotionVectorENS_9allocatorIS3_EEE8__appendEm(void) {
    ALOGD("_ZNSt3__16vectorIPN4mfll16MfllMotionVectorENS_9allocatorIS3_EEE8__appendEm() called");
    return 0;
}

/* Exported Object: vtable for mfll::MfllEvents */
extern "C" __attribute__((visibility("default"))) void* _ZTVN4mfll10MfllEventsE = NULL;

/* Demangled: std::__1::shared_ptr<MTKAis>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrI6MTKAisED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrI6MTKAisED2Ev() called");
    return 0;
}

/* Demangled: mfll::MfllCore::syncWaitTrigger(mfll::MfllSyncObj*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore15syncWaitTriggerEPNS_11MfllSyncObjE(void) {
    ALOGD("_ZN4mfll8MfllCore15syncWaitTriggerEPNS_11MfllSyncObjE() called");
    return 0;
}

/* Demangled: mfll::IMfllMemc::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll9IMfllMemc14createInstanceEv(void) {
    ALOGD("_ZN4mfll9IMfllMemc14createInstanceEv() called");
    return 0;
}

/* Demangled: mfll::IMfllMemc::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll9IMfllMemc15destroyInstanceEv(void) {
    ALOGD("_ZN4mfll9IMfllMemc15destroyInstanceEv() called");
    return 0;
}

/* Demangled: mfll::MfllCore2::do_Init(mfll::MfllConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll9MfllCore27do_InitERKNS_10MfllConfigE(void) {
    ALOGD("_ZN4mfll9MfllCore27do_InitERKNS_10MfllConfigE() called");
    return 0;
}

/* Demangled: mfll::MfllYuvCapturer::captureFrames(unsigned int, std::__1::vector<android::sp<mfll::IMfllImageBuffer>*, std::__1::allocator<android::sp<mfll::IMfllImageBuffer>*> >&, std::__1::vector<android::sp<mfll::IMfllImageBuffer>*, std::__1::allocator<android::sp<mfll::IMfllImageBuffer>*> >&, std::__1::vector<android::sp<mfll::IMfllImageBuffer>*, std::__1::allocator<android::sp<mfll::IMfllImageBuffer>*> >&, std::__1::vector<android::sp<mfll::IMfllImageBuffer>*, std::__1::allocator<android::sp<mfll::IMfllImageBuffer>*> >&, std::__1::vector<mfll::MfllMotionVector*, std::__1::allocator<mfll::MfllMotionVector*> >&, std::__1::vector<int, std::__1::allocator<int> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllYuvCapturer13captureFramesEjRNSt3__16vectorIPN7android2spINS_16IMfllImageBufferEEENS1_9allocatorIS7_EEEESB_SB_SB_RNS2_IPNS_16MfllMotionVectorENS8_ISD_EEEERNS2_IiNS8_IiEEEE(void) {
    ALOGD("_ZN4mfll15MfllYuvCapturer13captureFramesEjRNSt3__16vectorIPN7android2spINS_16IMfllImageBufferEEENS1_9allocatorIS7_EEEESB_SB_SB_RNS2_IPNS_16MfllMotionVectorENS8_ISD_EEEERNS2_IiNS8_IiEEEE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: mfll::MfllImageBuffer::~MfllImageBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllImageBufferD1Ev(void) {
    ALOGD("_ZN4mfll15MfllImageBufferD1Ev() called");
    return 0;
}

/* Demangled: mfll::MfllMemc::motionEstimation() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllMemc16motionEstimationEv(void) {
    ALOGD("_ZN4mfll8MfllMemc16motionEstimationEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: mfll::MfllStrategy::queryStrategy(mfll::MfllStrategyConfig const&, mfll::MfllStrategyConfig*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllStrategy13queryStrategyERKNS_18MfllStrategyConfigEPS1_(void) {
    ALOGD("_ZN4mfll12MfllStrategy13queryStrategyERKNS_18MfllStrategyConfigEPS1_() called");
    return 0;
}

/* Demangled: mfll::MfllProperty::getForceGmv(mfll::MfllMotionVector (&) [10]) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllProperty11getForceGmvERA10_NS_16MfllMotionVectorE(void) {
    ALOGD("_ZN4mfll12MfllProperty11getForceGmvERA10_NS_16MfllMotionVectorE() called");
    return 0;
}

/* Demangled: void std::__1::vector<long, std::__1::allocator<long> >::__push_back_slow_path<long const&>(long const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIlNS_9allocatorIlEEE21__push_back_slow_pathIRKlEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIlNS_9allocatorIlEEE21__push_back_slow_pathIRKlEEvOT_() called");
    return 0;
}

/* Demangled: mfll::MfhrCore2::getVersionString() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll9MfhrCore216getVersionStringEv(void) {
    ALOGD("_ZN4mfll9MfhrCore216getVersionStringEv() called");
    return 0;
}

/* Demangled: mfll::MfllEvents::onEvent(mfll::EventType, mfll::MfllEventStatus&, void*, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll10MfllEvents7onEventENS_9EventTypeERNS_15MfllEventStatusEPvS4_S4_(void) {
    ALOGD("_ZN4mfll10MfllEvents7onEventENS_9EventTypeERNS_15MfllEventStatusEPvS4_S4_() called");
    return 0;
}

/* Demangled: mfll::MfllImageBuffer::releaseBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllImageBuffer13releaseBufferEv(void) {
    ALOGD("_ZN4mfll15MfllImageBuffer13releaseBufferEv() called");
    return 0;
}

/* Demangled: __addtf3 */
extern "C" __attribute__((visibility("default"))) int fn___addtf3(void) __asm__("__addtf3");
int fn___addtf3(void) {
    ALOGD("__addtf3() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<char*, std::__1::default_delete<char>, std::__1::allocator<char> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPcNS_14default_deleteIcEENS_9allocatorIcEEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPcNS_14default_deleteIcEENS_9allocatorIcEEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: mfll::MfllFeatureMrp::MfllFeatureMrp() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll14MfllFeatureMrpC2Ev(void) {
    ALOGD("_ZN4mfll14MfllFeatureMrpC2Ev() called");
    return 0;
}

/* Demangled: mfll::MfllYuvCapturer::__captureFrameSingle(unsigned int, android::sp<mfll::IMfllImageBuffer>*, android::sp<mfll::IMfllImageBuffer>*, mfll::MfllMotionVector*, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllYuvCapturer20__captureFrameSingleEjPN7android2spINS_16IMfllImageBufferEEES5_PNS_16MfllMotionVectorERi(void) {
    ALOGD("_ZN4mfll15MfllYuvCapturer20__captureFrameSingleEjPN7android2spINS_16IMfllImageBufferEEES5_PNS_16MfllMotionVectorERi() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<mfll::MfllImageBuffer**, std::__1::allocator<mfll::MfllImageBuffer**> >::push_back(mfll::MfllImageBuffer**&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPPN4mfll15MfllImageBufferENS_9allocatorIS4_EEE9push_backEOS4_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPPN4mfll15MfllImageBufferENS_9allocatorIS4_EEE9push_backEOS4_() called");
    return 0;
}

/* Demangled: mfll::MfllCore::doAllocYuvBase(long) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore14doAllocYuvBaseEl(void) {
    ALOGD("_ZN4mfll8MfllCore14doAllocYuvBaseEl() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv() called");
    return 0;
}

/* Demangled: mfll::MfllMemc::MfllMemc() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllMemcC2Ev(void) {
    ALOGD("_ZN4mfll8MfllMemcC2Ev() called");
    return 0;
}

/* Demangled: mfll::MfllMfb::setPostNrType(mfll::NoiseReductionType const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll7MfllMfb13setPostNrTypeERKNS_18NoiseReductionTypeE(void) {
    ALOGD("_ZN4mfll7MfllMfb13setPostNrTypeERKNS_18NoiseReductionTypeE() called");
    return 0;
}

/* Demangled: mfll::MfllMfb::~MfllMfb() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll7MfllMfbD1Ev(void) {
    ALOGD("_ZN4mfll7MfllMfbD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<mfll::ImageBufferPack*, std::__1::allocator<mfll::ImageBufferPack*> >::push_front(mfll::ImageBufferPack*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN4mfll15ImageBufferPackENS_9allocatorIS3_EEE10push_frontEOS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN4mfll15ImageBufferPackENS_9allocatorIS3_EEE10push_frontEOS3_() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__1::future_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt3__112future_errorE = NULL;

/* Demangled: mfll::MfllYuvCapturer::registerEventDispatcher(android::sp<mfll::IMfllEvents> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllYuvCapturer23registerEventDispatcherERKN7android2spINS_11IMfllEventsEEE(void) {
    ALOGD("_ZN4mfll15MfllYuvCapturer23registerEventDispatcherERKN7android2spINS_11IMfllEventsEEE() called");
    return 0;
}

/* Demangled: mfll::MfllCore::setThumbnailBuffer(android::sp<mfll::IMfllImageBuffer> const&, mfll::MfllRect const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore18setThumbnailBufferERKN7android2spINS_16IMfllImageBufferEEERKNS_8MfllRectE(void) {
    ALOGD("_ZN4mfll8MfllCore18setThumbnailBufferERKN7android2spINS_16IMfllImageBufferEEERKNS_8MfllRectE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::future<void>*, std::__1::allocator<std::__1::future<void>*> >::push_front(std::__1::future<void>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_6futureIvEENS_9allocatorIS3_EEE10push_frontEOS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_6futureIvEENS_9allocatorIS3_EEE10push_frontEOS3_() called");
    return 0;
}

/* Demangled: std::__1::deque<mfll::ImageBufferPack, std::__1::allocator<mfll::ImageBufferPack> >::push_back(mfll::ImageBufferPack const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN4mfll15ImageBufferPackENS_9allocatorIS2_EEE9push_backERKS2_(void) {
    ALOGD("_ZNSt3__15dequeIN4mfll15ImageBufferPackENS_9allocatorIS2_EEE9push_backERKS2_() called");
    return 0;
}

/* Demangled: mfll::MfllCore2::getVersion() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll9MfllCore210getVersionEv(void) {
    ALOGD("_ZN4mfll9MfllCore210getVersionEv() called");
    return 0;
}

/* Demangled: mfll::MfllImageBuffer::setAligned(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllImageBuffer10setAlignedEjj(void) {
    ALOGD("_ZN4mfll15MfllImageBuffer10setAlignedEjj() called");
    return 0;
}

/* Demangled: mfll::MfllImageBuffer::getAlignedWidth() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4mfll15MfllImageBuffer15getAlignedWidthEv(void) {
    ALOGD("_ZNK4mfll15MfllImageBuffer15getAlignedWidthEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: mfll::MfllStrategy::MfllStrategy() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllStrategyC2Ev(void) {
    ALOGD("_ZN4mfll12MfllStrategyC2Ev() called");
    return 0;
}

/* Demangled: mfll::MfllProperty::getForceBssOrder(std::__1::vector<int, std::__1::allocator<int> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllProperty16getForceBssOrderERNSt3__16vectorIiNS1_9allocatorIiEEEE(void) {
    ALOGD("_ZN4mfll12MfllProperty16getForceBssOrderERNSt3__16vectorIiNS1_9allocatorIiEEEE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<NSCam::IMetadata*, std::__1::allocator<NSCam::IMetadata*> >::~__deque_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseIPN5NSCam9IMetadataENS_9allocatorIS3_EEED2Ev(void) {
    ALOGD("_ZNSt3__112__deque_baseIPN5NSCam9IMetadataENS_9allocatorIS3_EEED2Ev() called");
    return 0;
}

/* Exported Object: vtable for mfll::IMfllStrategy */
extern "C" __attribute__((visibility("default"))) void* _ZTVN4mfll13IMfllStrategyE = NULL;

/* Demangled: mfll::MfllCore::removeEventListener(mfll::IMfllEventListener*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore19removeEventListenerEPNS_18IMfllEventListenerE(void) {
    ALOGD("_ZN4mfll8MfllCore19removeEventListenerEPNS_18IMfllEventListenerE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<int*, std::__1::allocator<int*>&>::push_back(int*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPiRNS_9allocatorIS1_EEE9push_backEOS1_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPiRNS_9allocatorIS1_EEE9push_backEOS1_() called");
    return 0;
}

/* Demangled: std::__1::vector<mfll::ImageBufferPack, std::__1::allocator<mfll::ImageBufferPack> >::__append(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN4mfll15ImageBufferPackENS_9allocatorIS2_EEE8__appendEm(void) {
    ALOGD("_ZNSt3__16vectorIN4mfll15ImageBufferPackENS_9allocatorIS2_EEE8__appendEm() called");
    return 0;
}

/* Demangled: mfll::MfllEvents::doneEvent(mfll::EventType, mfll::MfllEventStatus&, void*, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll10MfllEvents9doneEventENS_9EventTypeERNS_15MfllEventStatusEPvS4_S4_(void) {
    ALOGD("_ZN4mfll10MfllEvents9doneEventENS_9EventTypeERNS_15MfllEventStatusEPvS4_S4_() called");
    return 0;
}

/* Demangled: mfll::MfllCapturer::__captureFrames(unsigned int, std::__1::vector<android::sp<mfll::IMfllImageBuffer>*, std::__1::allocator<android::sp<mfll::IMfllImageBuffer>*> >&, std::__1::vector<android::sp<mfll::IMfllImageBuffer>*, std::__1::allocator<android::sp<mfll::IMfllImageBuffer>*> >&, std::__1::vector<android::sp<mfll::IMfllImageBuffer>*, std::__1::allocator<android::sp<mfll::IMfllImageBuffer>*> >&, std::__1::vector<android::sp<mfll::IMfllImageBuffer>*, std::__1::allocator<android::sp<mfll::IMfllImageBuffer>*> >&, std::__1::vector<mfll::MfllMotionVector*, std::__1::allocator<mfll::MfllMotionVector*> >&, std::__1::vector<int, std::__1::allocator<int> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllCapturer15__captureFramesEjRNSt3__16vectorIPN7android2spINS_16IMfllImageBufferEEENS1_9allocatorIS7_EEEESB_SB_SB_RNS2_IPNS_16MfllMotionVectorENS8_ISD_EEEERNS2_IiNS8_IiEEEE(void) {
    ALOGD("_ZN4mfll12MfllCapturer15__captureFramesEjRNSt3__16vectorIPN7android2spINS_16IMfllImageBufferEEENS1_9allocatorIS7_EEEESB_SB_SB_RNS2_IPNS_16MfllMotionVectorENS8_ISD_EEEERNS2_IiNS8_IiEEEE() called");
    return 0;
}

/* Demangled: mfll::IMfllCapturer::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll13IMfllCapturer15destroyInstanceEv(void) {
    ALOGD("_ZN4mfll13IMfllCapturer15destroyInstanceEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<mfll::MfllMfbPortInfo, std::__1::allocator<mfll::MfllMfbPortInfo> >::__push_back_slow_path<mfll::MfllMfbPortInfo>(mfll::MfllMfbPortInfo&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN4mfll15MfllMfbPortInfoENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN4mfll15MfllMfbPortInfoENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_() called");
    return 0;
}

/* Demangled: __gttf2 */
extern "C" __attribute__((visibility("default"))) int fn___gttf2(void) __asm__("__gttf2");
int fn___gttf2(void) {
    ALOGD("__gttf2() called");
    return 0;
}

/* Demangled: mfll::MfllCore::do_AllocWeighting(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore17do_AllocWeightingEPv(void) {
    ALOGD("_ZN4mfll8MfllCore17do_AllocWeightingEPv() called");
    return 0;
}

/* Demangled: mfll::MfllCore::doAllocYuvMcWorking(long) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore19doAllocYuvMcWorkingEl(void) {
    ALOGD("_ZN4mfll8MfllCore19doAllocYuvMcWorkingEl() called");
    return 0;
}

/* Demangled: mfll::MfllFeatureMrp::releaseBaseRawBuffer(mfll::IMfllCore*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll14MfllFeatureMrp20releaseBaseRawBufferEPNS_9IMfllCoreE(void) {
    ALOGD("_ZN4mfll14MfllFeatureMrp20releaseBaseRawBufferEPNS_9IMfllCoreE() called");
    return 0;
}

/* Demangled: std::__1::deque<NSCam::IMetadata*, std::__1::allocator<NSCam::IMetadata*> >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIPN5NSCam9IMetadataENS_9allocatorIS3_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeIPN5NSCam9IMetadataENS_9allocatorIS3_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: mfll::MfllCore::doAllocMemcWorking(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore18doAllocMemcWorkingEPv(void) {
    ALOGD("_ZN4mfll8MfllCore18doAllocMemcWorkingEPv() called");
    return 0;
}

/* Demangled: mfll::IMfllCore::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll9IMfllCore15destroyInstanceEv(void) {
    ALOGD("_ZN4mfll9IMfllCore15destroyInstanceEv() called");
    return 0;
}

/* Demangled: mfll::MfllEvents::MfllEvents() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll10MfllEventsC2Ev(void) {
    ALOGD("_ZN4mfll10MfllEventsC2Ev() called");
    return 0;
}

/* Demangled: mfll::MfllFeatureFeed::getListenedEventTypes() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllFeatureFeed21getListenedEventTypesEv(void) {
    ALOGD("_ZN4mfll15MfllFeatureFeed21getListenedEventTypesEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::deque<NS3Av3::MetaSet_T, std::__1::allocator<NS3Av3::MetaSet_T> >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN6NS3Av39MetaSet_TENS_9allocatorIS2_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeIN6NS3Av39MetaSet_TENS_9allocatorIS2_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: mfll::MfllNvram::getChunkMfnr(unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll9MfllNvram12getChunkMfnrEPm(void) {
    ALOGD("_ZN4mfll9MfllNvram12getChunkMfnrEPm() called");
    return 0;
}

/* Demangled: mfll::MfllCore::do_Bss(long) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore6do_BssEl(void) {
    ALOGD("_ZN4mfll8MfllCore6do_BssEl() called");
    return 0;
}

/* Exported Object: vtable for mfll::MfllFeatureFeed */
extern "C" __attribute__((visibility("default"))) void* _ZTVN4mfll15MfllFeatureFeedE = NULL;

/* Demangled: mfll::MfllExifInfo::getVersion() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllExifInfo10getVersionEv(void) {
    ALOGD("_ZN4mfll12MfllExifInfo10getVersionEv() called");
    return 0;
}

/* Demangled: std::__1::__deque_iterator<mfll::MfllImageBuffer*, mfll::MfllImageBuffer**, mfll::MfllImageBuffer*&, mfll::MfllImageBuffer***, long, 512l> std::__1::move<mfll::MfllImageBuffer*, mfll::MfllImageBuffer**, mfll::MfllImageBuffer*&, mfll::MfllImageBuffer***, long, 512l, mfll::MfllImageBuffer*, mfll::MfllImageBuffer**, mfll::MfllImageBuffer*&, mfll::MfllImageBuffer***, long, 512l>(std::__1::__deque_iterator<mfll::MfllImageBuffer*, mfll::MfllImageBuffer**, mfll::MfllImageBuffer*&, mfll::MfllImageBuffer***, long, 512l>, std::__1::__deque_iterator<mfll::MfllImageBuffer*, mfll::MfllImageBuffer**, mfll::MfllImageBuffer*&, mfll::MfllImageBuffer***, long, 512l>, std::__1::__deque_iterator<mfll::MfllImageBuffer*, mfll::MfllImageBuffer**, mfll::MfllImageBuffer*&, mfll::MfllImageBuffer***, long, 512l>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14moveIPN4mfll15MfllImageBufferEPS3_RS3_PS4_lLl512ES3_S4_S5_S6_lLl512EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS7_IT_T0_T1_T2_T3_XT4_EEESJ_SD_(void) {
    ALOGD("_ZNSt3__14moveIPN4mfll15MfllImageBufferEPS3_RS3_PS4_lLl512ES3_S4_S5_S6_lLl512EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS7_IT_T0_T1_T2_T3_XT4_EEESJ_SD_() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: mfll::MfllCore::getExifContainer() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore16getExifContainerEv(void) {
    ALOGD("_ZN4mfll8MfllCore16getExifContainerEv() called");
    return 0;
}

/* Demangled: std::__1::deque<int, std::__1::allocator<int> >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIiNS_9allocatorIiEEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeIiNS_9allocatorIiEEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: mfll::MfllExifInfo::~MfllExifInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllExifInfoD2Ev(void) {
    ALOGD("_ZN4mfll12MfllExifInfoD2Ev() called");
    return 0;
}

/* Exported Object: vtable for mfll::MfllStrategy */
extern "C" __attribute__((visibility("default"))) void* _ZTVN4mfll12MfllStrategyE = NULL;

/* Demangled: mfll::MfllCore::setBypassOption(mfll::MfllBypassOption const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore15setBypassOptionERKNS_16MfllBypassOptionE(void) {
    ALOGD("_ZN4mfll8MfllCore15setBypassOptionERKNS_16MfllBypassOptionE() called");
    return 0;
}

/* Exported Object: vtable for mfll::MfllFeatureDump */
extern "C" __attribute__((visibility("default"))) void* _ZTVN4mfll15MfllFeatureDumpE = NULL;

/* Demangled: mfll::MfllImageBuffer::mapImageFormat(unsigned int const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllImageBuffer14mapImageFormatERKjb(void) {
    ALOGD("_ZN4mfll15MfllImageBuffer14mapImageFormatERKjb() called");
    return 0;
}

/* Demangled: std::__1::deque<mfll::ImageBufferPack, std::__1::allocator<mfll::ImageBufferPack> >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN4mfll15ImageBufferPackENS_9allocatorIS2_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeIN4mfll15ImageBufferPackENS_9allocatorIS2_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Exported Object: vtable for mfll::MfllCore2p5 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN4mfll11MfllCore2p5E = NULL;

/* Demangled: mfll::MfllCore::setRrzoResolution(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore17setRrzoResolutionEjj(void) {
    ALOGD("_ZN4mfll8MfllCore17setRrzoResolutionEjj() called");
    return 0;
}

/* Demangled: mfll::MfllFeatureDump::dumpCapture(mfll::IMfllCore*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllFeatureDump11dumpCaptureEPNS_9IMfllCoreE(void) {
    ALOGD("_ZN4mfll15MfllFeatureDump11dumpCaptureEPNS_9IMfllCoreE() called");
    return 0;
}

/* Demangled: mfll::MfllMfb::setShotMode(mfll::MfllMode const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll7MfllMfb11setShotModeERKNS_8MfllModeE(void) {
    ALOGD("_ZN4mfll7MfllMfb11setShotModeERKNS_8MfllModeE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<char const**, std::__1::allocator<char const**> >::push_front(char const**&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPPKcNS_9allocatorIS3_EEE10push_frontEOS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPPKcNS_9allocatorIS3_EEE10push_frontEOS3_() called");
    return 0;
}

/* Demangled: mfll::MfllProperty::isDump() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllProperty6isDumpEv(void) {
    ALOGD("_ZN4mfll12MfllProperty6isDumpEv() called");
    return 0;
}

/* Demangled: mfll::MfllCore::do_Init(mfll::MfllConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore7do_InitERKNS_10MfllConfigE(void) {
    ALOGD("_ZN4mfll8MfllCore7do_InitERKNS_10MfllConfigE() called");
    return 0;
}

/* Demangled: mfll::MfllProperty::getBlendNum() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllProperty11getBlendNumEv(void) {
    ALOGD("_ZN4mfll12MfllProperty11getBlendNumEv() called");
    return 0;
}

/* Demangled: mfll::MfllFeatureMrp::releaseReferenceRawBuffers(mfll::IMfllCore*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll14MfllFeatureMrp26releaseReferenceRawBuffersEPNS_9IMfllCoreE(void) {
    ALOGD("_ZN4mfll14MfllFeatureMrp26releaseReferenceRawBuffersEPNS_9IMfllCoreE() called");
    return 0;
}

/* Demangled: mfll::MfllFeatureDump::~MfllFeatureDump() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllFeatureDumpD2Ev(void) {
    ALOGD("_ZN4mfll15MfllFeatureDumpD2Ev() called");
    return 0;
}

/* Demangled: mfll::MfllExifInfo::MfllExifInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllExifInfoC1Ev(void) {
    ALOGD("_ZN4mfll12MfllExifInfoC1Ev() called");
    return 0;
}

/* Exported Object: vtable for mfll::MfllFeaturePerf */
extern "C" __attribute__((visibility("default"))) void* _ZTVN4mfll15MfllFeaturePerfE = NULL;

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<mfll::IMfllImageBuffer_Flag, std::__1::weak_ptr<mfll::IMfllImageBufferQueue> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<mfll::IMfllImageBuffer_Flag, std::__1::weak_ptr<mfll::IMfllImageBufferQueue> >, std::__1::__unordered_map_hasher<mfll::IMfllImageBuffer_Flag, std::__1::__hash_value_type<mfll::IMfllImageBuffer_Flag, std::__1::weak_ptr<mfll::IMfllImageBufferQueue> >, std::__1::hash<mfll::IMfllImageBuffer_Flag>, true>, std::__1::__unordered_map_equal<mfll::IMfllImageBuffer_Flag, std::__1::__hash_value_type<mfll::IMfllImageBuffer_Flag, std::__1::weak_ptr<mfll::IMfllImageBufferQueue> >, std::__1::equal_to<mfll::IMfllImageBuffer_Flag>, true>, std::__1::allocator<std::__1::__hash_value_type<mfll::IMfllImageBuffer_Flag, std::__1::weak_ptr<mfll::IMfllImageBufferQueue> > > >::__emplace_unique_key_args<mfll::IMfllImageBuffer_Flag, std::__1::piecewise_construct_t const&, std::__1::tuple<mfll::IMfllImageBuffer_Flag const&>, std::__1::tuple<> >(mfll::IMfllImageBuffer_Flag const&, std::__1::piecewise_construct_t const&, std::__1::tuple<mfll::IMfllImageBuffer_Flag const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN4mfll21IMfllImageBuffer_FlagENS_8weak_ptrINS2_21IMfllImageBufferQueueEEEEENS_22__unordered_map_hasherIS3_S7_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S7_NS_8equal_toIS3_EELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJRKS3_EEENSN_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS7_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN4mfll21IMfllImageBuffer_FlagENS_8weak_ptrINS2_21IMfllImageBufferQueueEEEEENS_22__unordered_map_hasherIS3_S7_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S7_NS_8equal_toIS3_EELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJRKS3_EEENSN_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS7_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: mfll::MfllExifInfo::updateInfo(mfll::MfllCoreDbgInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllExifInfo10updateInfoERKNS_15MfllCoreDbgInfoE(void) {
    ALOGD("_ZN4mfll12MfllExifInfo10updateInfoERKNS_15MfllCoreDbgInfoE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<char const**, std::__1::allocator<char const**>&>::push_front(char const** const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPPKcRNS_9allocatorIS3_EEE10push_frontERKS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPPKcRNS_9allocatorIS3_EEE10push_frontERKS3_() called");
    return 0;
}

/* Demangled: mfll::MfllCapturer::queueSourceImage(android::sp<mfll::IMfllImageBuffer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllCapturer16queueSourceImageERN7android2spINS_16IMfllImageBufferEEE(void) {
    ALOGD("_ZN4mfll12MfllCapturer16queueSourceImageERN7android2spINS_16IMfllImageBufferEEE() called");
    return 0;
}

/* Demangled: mfll::MfllFeaturePerf::~MfllFeaturePerf() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllFeaturePerfD1Ev(void) {
    ALOGD("_ZN4mfll15MfllFeaturePerfD1Ev() called");
    return 0;
}

/* Demangled: mfll::MfllMfb::setSyncPrivateData(std::__1::deque<void*, std::__1::allocator<void*> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll7MfllMfb18setSyncPrivateDataERKNSt3__15dequeIPvNS1_9allocatorIS3_EEEE(void) {
    ALOGD("_ZN4mfll7MfllMfb18setSyncPrivateDataERKNSt3__15dequeIPvNS1_9allocatorIS3_EEEE() called");
    return 0;
}

/* Demangled: mfll::MfllCore::do_Blending(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore11do_BlendingEPv(void) {
    ALOGD("_ZN4mfll8MfllCore11do_BlendingEPv() called");
    return 0;
}

/* Demangled: mfll::MfllCore::setCapturer(android::sp<mfll::IMfllCapturer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore11setCapturerERKN7android2spINS_13IMfllCapturerEEE(void) {
    ALOGD("_ZN4mfll8MfllCore11setCapturerERKN7android2spINS_13IMfllCapturerEEE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::future<void>*, std::__1::allocator<std::__1::future<void>*> >::push_back(std::__1::future<void>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_6futureIvEENS_9allocatorIS3_EEE9push_backEOS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_6futureIvEENS_9allocatorIS3_EEE9push_backEOS3_() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<int*, std::__1::allocator<int*> >::push_back(int*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPiNS_9allocatorIS1_EEE9push_backEOS1_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPiNS_9allocatorIS1_EEE9push_backEOS1_() called");
    return 0;
}

/* Demangled: std::__1::deque<std::__1::future<void>, std::__1::allocator<std::__1::future<void> > >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeINS_6futureIvEENS_9allocatorIS2_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeINS_6futureIvEENS_9allocatorIS2_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: __atomic_store_1 */
extern "C" __attribute__((visibility("default"))) int fn___atomic_store_1(void) __asm__("__atomic_store_1");
int fn___atomic_store_1(void) {
    ALOGD("__atomic_store_1() called");
    return 0;
}

/* Demangled: mfll::MfllFeatureDump::MfllFeatureDump() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllFeatureDumpC1Ev(void) {
    ALOGD("_ZN4mfll15MfllFeatureDumpC1Ev() called");
    return 0;
}

/* Demangled: mfll::MfllCore::doEncodeYuvGolden(long) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore17doEncodeYuvGoldenEl(void) {
    ALOGD("_ZN4mfll8MfllCore17doEncodeYuvGoldenEl() called");
    return 0;
}

/* Exported Object: vtable for mfll::MfllYuvCapturer */
extern "C" __attribute__((visibility("default"))) void* _ZTVN4mfll15MfllYuvCapturerE = NULL;

/* Demangled: __atomic_store_2 */
extern "C" __attribute__((visibility("default"))) int fn___atomic_store_2(void) __asm__("__atomic_store_2");
int fn___atomic_store_2(void) {
    ALOGD("__atomic_store_2() called");
    return 0;
}

/* Demangled: mfll::MfllCore::setMiddlewareInfo(mfll::MfllMiddlewareInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore17setMiddlewareInfoERKNS_18MfllMiddlewareInfoE(void) {
    ALOGD("_ZN4mfll8MfllCore17setMiddlewareInfoERKNS_18MfllMiddlewareInfoE() called");
    return 0;
}

/* Demangled: android::sp<mfll::IMfllNvram>::operator=(mfll::IMfllNvram*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN4mfll10IMfllNvramEEaSEPS2_(void) {
    ALOGD("_ZN7android2spIN4mfll10IMfllNvramEEaSEPS2_() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<mfll::ImageBufferPack*, std::__1::allocator<mfll::ImageBufferPack*>&>::push_back(mfll::ImageBufferPack*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN4mfll15ImageBufferPackERNS_9allocatorIS3_EEE9push_backEOS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN4mfll15ImageBufferPackERNS_9allocatorIS3_EEE9push_backEOS3_() called");
    return 0;
}

/* Demangled: mfll::MfllCore2::releaseBuffer(mfll::MfllBuffer const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll9MfllCore213releaseBufferERKNS_10MfllBufferEi(void) {
    ALOGD("_ZN4mfll9MfllCore213releaseBufferERKNS_10MfllBufferEi() called");
    return 0;
}

/* Demangled: mfll::MfllCore2::getVersionString() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll9MfllCore216getVersionStringEv(void) {
    ALOGD("_ZN4mfll9MfllCore216getVersionStringEv() called");
    return 0;
}

/* Demangled: mfll::MfhrCore2::getVersion() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll9MfhrCore210getVersionEv(void) {
    ALOGD("_ZN4mfll9MfhrCore210getVersionEv() called");
    return 0;
}

/* Demangled: mfll::MfllFeatureFeed::~MfllFeatureFeed() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllFeatureFeedD2Ev(void) {
    ALOGD("_ZN4mfll15MfllFeatureFeedD2Ev() called");
    return 0;
}

/* Demangled: mfll::MfllExifInfo::getInfo(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllExifInfo7getInfoEj(void) {
    ALOGD("_ZN4mfll12MfllExifInfo7getInfoEj() called");
    return 0;
}

/* Demangled: mfll::MfllFeaturePerf::doneEvent(mfll::EventType, mfll::MfllEventStatus&, void*, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllFeaturePerf9doneEventENS_9EventTypeERNS_15MfllEventStatusEPvS4_S4_(void) {
    ALOGD("_ZN4mfll15MfllFeaturePerf9doneEventENS_9EventTypeERNS_15MfllEventStatusEPvS4_S4_() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: mfll::MfllCore::getCapturer() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore11getCapturerEv(void) {
    ALOGD("_ZN4mfll8MfllCore11getCapturerEv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev() called");
    return 0;
}

/* Demangled: mfll::MfllCapturer::~MfllCapturer() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllCapturerD1Ev(void) {
    ALOGD("_ZN4mfll12MfllCapturerD1Ev() called");
    return 0;
}

/* Demangled: mfll::MfllYuvCapturer::queueSourceImage(android::sp<mfll::IMfllImageBuffer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllYuvCapturer16queueSourceImageERN7android2spINS_16IMfllImageBufferEEE(void) {
    ALOGD("_ZN4mfll15MfllYuvCapturer16queueSourceImageERN7android2spINS_16IMfllImageBufferEEE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<void**, std::__1::allocator<void**>&>::push_front(void** const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPPvRNS_9allocatorIS2_EEE10push_frontERKS2_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPPvRNS_9allocatorIS2_EEE10push_frontERKS2_() called");
    return 0;
}

/* Demangled: mfll::MfllImageBuffer::getImageBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllImageBuffer14getImageBufferEv(void) {
    ALOGD("_ZN4mfll15MfllImageBuffer14getImageBufferEv() called");
    return 0;
}

/* Demangled: __atomic_store_4 */
extern "C" __attribute__((visibility("default"))) int fn___atomic_store_4(void) __asm__("__atomic_store_4");
int fn___atomic_store_4(void) {
    ALOGD("__atomic_store_4() called");
    return 0;
}

/* Demangled: mfll::MfllCore::doBlending(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore10doBlendingEPv(void) {
    ALOGD("_ZN4mfll8MfllCore10doBlendingEPv() called");
    return 0;
}

/* Demangled: android::sp<mfll::IMfllImageBuffer>::operator=(android::sp<mfll::IMfllImageBuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN4mfll16IMfllImageBufferEEaSERKS3_(void) {
    ALOGD("_ZN7android2spIN4mfll16IMfllImageBufferEEaSERKS3_() called");
    return 0;
}

/* Demangled: mfll::MfllImageBuffer::getAligned(unsigned int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllImageBuffer10getAlignedERjS1_(void) {
    ALOGD("_ZN4mfll15MfllImageBuffer10getAlignedERjS1_() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSCam::IMetadata**, std::__1::allocator<NSCam::IMetadata**> >::push_back(NSCam::IMetadata**&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPPN5NSCam9IMetadataENS_9allocatorIS4_EEE9push_backEOS4_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPPN5NSCam9IMetadataENS_9allocatorIS4_EEE9push_backEOS4_() called");
    return 0;
}

/* Demangled: mfll::MfllStrategy::init(android::sp<mfll::IMfllNvram>&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllStrategy4initERN7android2spINS_10IMfllNvramEEE(void) {
    ALOGD("_ZN4mfll12MfllStrategy4initERN7android2spINS_10IMfllNvramEEE() called");
    return 0;
}

/* Demangled: mfll::MfllCore::do_CaptureSingle(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore16do_CaptureSingleEPv(void) {
    ALOGD("_ZN4mfll8MfllCore16do_CaptureSingleEPv() called");
    return 0;
}

/* Demangled: mfll::MfllCore::syncAnnounceDone(mfll::MfllSyncObj*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore16syncAnnounceDoneEPNS_11MfllSyncObjE(void) {
    ALOGD("_ZN4mfll8MfllCore16syncAnnounceDoneEPNS_11MfllSyncObjE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: mfll::MfllFeatureFeed::MfllFeatureFeed() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllFeatureFeedC1Ev(void) {
    ALOGD("_ZN4mfll15MfllFeatureFeedC1Ev() called");
    return 0;
}

/* Demangled: mfll::MfllCore::getInputYuvFmtMemcWorking() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4mfll8MfllCore25getInputYuvFmtMemcWorkingEv(void) {
    ALOGD("_ZNK4mfll8MfllCore25getInputYuvFmtMemcWorkingEv() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m(void) {
    ALOGD("_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NS3Av3::MetaSet_T*, std::__1::allocator<NS3Av3::MetaSet_T*>&>::push_front(NS3Av3::MetaSet_T* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN6NS3Av39MetaSet_TERNS_9allocatorIS3_EEE10push_frontERKS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN6NS3Av39MetaSet_TERNS_9allocatorIS3_EEE10push_frontERKS3_() called");
    return 0;
}

/* Demangled: mfll::MfllCore::do_AllocYuvBase(long) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore15do_AllocYuvBaseEl(void) {
    ALOGD("_ZN4mfll8MfllCore15do_AllocYuvBaseEl() called");
    return 0;
}

/* Demangled: mfll::MfllCore::doAllocRawBuffer(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore16doAllocRawBufferEPv(void) {
    ALOGD("_ZN4mfll8MfllCore16doAllocRawBufferEPv() called");
    return 0;
}

/* Demangled: mfll::MfllCore::do_MotionCompensation(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore21do_MotionCompensationEPv(void) {
    ALOGD("_ZN4mfll8MfllCore21do_MotionCompensationEPv() called");
    return 0;
}

/* Demangled: mfll::MfllExifInfo::init() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllExifInfo4initEv(void) {
    ALOGD("_ZN4mfll12MfllExifInfo4initEv() called");
    return 0;
}

/* Demangled: __atomic_store_8 */
extern "C" __attribute__((visibility("default"))) int fn___atomic_store_8(void) __asm__("__atomic_store_8");
int fn___atomic_store_8(void) {
    ALOGD("__atomic_store_8() called");
    return 0;
}

/* Exported Object: vtable for mfll::MfllCore2 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN4mfll9MfllCore2E = NULL;

/* Demangled: mfll::MfllNvram::MfllNvram() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll9MfllNvramC2Ev(void) {
    ALOGD("_ZN4mfll9MfllNvramC2Ev() called");
    return 0;
}

/* Demangled: mfll::MfllCore::doMotionEstimation(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore18doMotionEstimationEPv(void) {
    ALOGD("_ZN4mfll8MfllCore18doMotionEstimationEPv() called");
    return 0;
}

/* Demangled: mfll::MfllCore::~MfllCore() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCoreD0Ev(void) {
    ALOGD("_ZN4mfll8MfllCoreD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<void**, std::__1::allocator<void**>&>::push_back(void**&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPPvRNS_9allocatorIS2_EEE9push_backEOS2_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPPvRNS_9allocatorIS2_EEE9push_backEOS2_() called");
    return 0;
}

/* Demangled: mfll::MfllCore::setMixingBuffer(mfll::MixYuvBufferType const&, android::sp<mfll::IMfllImageBuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore15setMixingBufferERKNS_16MixYuvBufferTypeERKN7android2spINS_16IMfllImageBufferEEE(void) {
    ALOGD("_ZN4mfll8MfllCore15setMixingBufferERKNS_16MixYuvBufferTypeERKN7android2spINS_16IMfllImageBufferEEE() called");
    return 0;
}

/* Demangled: mfll::MfllFeaturePerf::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllFeaturePerf14createInstanceEv(void) {
    ALOGD("_ZN4mfll15MfllFeaturePerf14createInstanceEv() called");
    return 0;
}

/* Demangled: mfll::MfllImageBuffer::MfllImageBuffer(char const*, mfll::IMfllImageBuffer_Flag) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllImageBufferC2EPKcNS_21IMfllImageBuffer_FlagE(void) {
    ALOGD("_ZN4mfll15MfllImageBufferC2EPKcNS_21IMfllImageBuffer_FlagE() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<mfll::IMfllImageBuffer_Flag, std::__1::weak_ptr<mfll::IMfllImageBufferQueue> >, std::__1::__unordered_map_hasher<mfll::IMfllImageBuffer_Flag, std::__1::__hash_value_type<mfll::IMfllImageBuffer_Flag, std::__1::weak_ptr<mfll::IMfllImageBufferQueue> >, std::__1::hash<mfll::IMfllImageBuffer_Flag>, true>, std::__1::__unordered_map_equal<mfll::IMfllImageBuffer_Flag, std::__1::__hash_value_type<mfll::IMfllImageBuffer_Flag, std::__1::weak_ptr<mfll::IMfllImageBufferQueue> >, std::__1::equal_to<mfll::IMfllImageBuffer_Flag>, true>, std::__1::allocator<std::__1::__hash_value_type<mfll::IMfllImageBuffer_Flag, std::__1::weak_ptr<mfll::IMfllImageBufferQueue> > > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN4mfll21IMfllImageBuffer_FlagENS_8weak_ptrINS2_21IMfllImageBufferQueueEEEEENS_22__unordered_map_hasherIS3_S7_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S7_NS_8equal_toIS3_EELb1EEENS_9allocatorIS7_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN4mfll21IMfllImageBuffer_FlagENS_8weak_ptrINS2_21IMfllImageBufferQueueEEEEENS_22__unordered_map_hasherIS3_S7_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S7_NS_8equal_toIS3_EELb1EEENS_9allocatorIS7_EEE8__rehashEm() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ofstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE0_NS_13basic_ostreamIcS2_EE = NULL;

/* Demangled: std::__1::deque<mfll::MfllImageBuffer*, std::__1::allocator<mfll::MfllImageBuffer*> >::erase(std::__1::__deque_iterator<mfll::MfllImageBuffer*, mfll::MfllImageBuffer* const*, mfll::MfllImageBuffer* const&, mfll::MfllImageBuffer* const* const*, long, 512l>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIPN4mfll15MfllImageBufferENS_9allocatorIS3_EEE5eraseENS_16__deque_iteratorIS3_PKS3_RS8_PKS9_lLl512EEE(void) {
    ALOGD("_ZNSt3__15dequeIPN4mfll15MfllImageBufferENS_9allocatorIS3_EEE5eraseENS_16__deque_iteratorIS3_PKS3_RS8_PKS9_lLl512EEE() called");
    return 0;
}

/* Demangled: mfll::MfllProperty::~MfllProperty() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllPropertyD0Ev(void) {
    ALOGD("_ZN4mfll12MfllPropertyD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NS3Av3::MetaSet_T*, std::__1::allocator<NS3Av3::MetaSet_T*>&>::push_back(NS3Av3::MetaSet_T*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN6NS3Av39MetaSet_TERNS_9allocatorIS3_EEE9push_backEOS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN6NS3Av39MetaSet_TERNS_9allocatorIS3_EEE9push_backEOS3_() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: __cmptf2 */
extern "C" __attribute__((visibility("default"))) int fn___cmptf2(void) __asm__("__cmptf2");
int fn___cmptf2(void) {
    ALOGD("__cmptf2() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: mfll::MfllCore::setPostviewBuffer(android::sp<mfll::IMfllImageBuffer> const&, mfll::MfllRect const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore17setPostviewBufferERKN7android2spINS_16IMfllImageBufferEEERKNS_8MfllRectE(void) {
    ALOGD("_ZN4mfll8MfllCore17setPostviewBufferERKN7android2spINS_16IMfllImageBufferEEERKNS_8MfllRectE() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<mfll::EventType, char const*>, std::__1::__map_value_compare<mfll::EventType, std::__1::__value_type<mfll::EventType, char const*>, std::__1::less<mfll::EventType>, true>, std::__1::allocator<std::__1::__value_type<mfll::EventType, char const*> > >::__find_equal<mfll::EventType>(std::__1::__tree_const_iterator<std::__1::__value_type<mfll::EventType, char const*>, std::__1::__tree_node<std::__1::__value_type<mfll::EventType, char const*>, void*>*, long>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, mfll::EventType const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIN4mfll9EventTypeEPKcEENS_19__map_value_compareIS3_S6_NS_4lessIS3_EELb1EEENS_9allocatorIS6_EEE12__find_equalIS3_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS6_PNS_11__tree_nodeIS6_SG_EElEERPNS_15__tree_end_nodeISI_EESJ_RKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIN4mfll9EventTypeEPKcEENS_19__map_value_compareIS3_S6_NS_4lessIS3_EELb1EEENS_9allocatorIS6_EEE12__find_equalIS3_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS6_PNS_11__tree_nodeIS6_SG_EElEERPNS_15__tree_end_nodeISI_EESJ_RKT_() called");
    return 0;
}

/* Demangled: mfll::MfllBss::bss(std::__1::vector<android::sp<mfll::IMfllImageBuffer>, std::__1::allocator<android::sp<mfll::IMfllImageBuffer> > > const&, std::__1::vector<mfll::MfllMotionVector, std::__1::allocator<mfll::MfllMotionVector> >&, std::__1::vector<long, std::__1::allocator<long> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll7MfllBss3bssERKNSt3__16vectorIN7android2spINS_16IMfllImageBufferEEENS1_9allocatorIS6_EEEERNS2_INS_16MfllMotionVectorENS7_ISC_EEEERNS2_IlNS7_IlEEEE(void) {
    ALOGD("_ZN4mfll7MfllBss3bssERKNSt3__16vectorIN7android2spINS_16IMfllImageBufferEEENS1_9allocatorIS6_EEEERNS2_INS_16MfllMotionVectorENS7_ISC_EEEERNS2_IlNS7_IlEEEE() called");
    return 0;
}

/* Demangled: mfll::MfllBss::init(android::sp<mfll::IMfllNvram>&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll7MfllBss4initERN7android2spINS_10IMfllNvramEEE(void) {
    ALOGD("_ZN4mfll7MfllBss4initERN7android2spINS_10IMfllNvramEEE() called");
    return 0;
}

/* Demangled: mfll::MfllCore::unlockSyncObject(mfll::MfllSyncObj*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore16unlockSyncObjectEPNS_11MfllSyncObjE(void) {
    ALOGD("_ZN4mfll8MfllCore16unlockSyncObjectEPNS_11MfllSyncObjE() called");
    return 0;
}

/* Demangled: mfll::MfllCore2p5::createConfidenceMap(unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll11MfllCore2p519createConfidenceMapEmm(void) {
    ALOGD("_ZN4mfll11MfllCore2p519createConfidenceMapEmm() called");
    return 0;
}

/* Exported Object: getExtFunctionMap()::sExtFunctions */
extern "C" __attribute__((visibility("default"))) void* _ZZ17getExtFunctionMapvE13sExtFunctions = NULL;

/* Demangled: mfll::MfllImageBuffer::getRealBufferSize() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllImageBuffer17getRealBufferSizeEv(void) {
    ALOGD("_ZN4mfll15MfllImageBuffer17getRealBufferSizeEv() called");
    return 0;
}

/* Demangled: mfll::MfllFeatureMrp::~MfllFeatureMrp() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll14MfllFeatureMrpD2Ev(void) {
    ALOGD("_ZN4mfll14MfllFeatureMrpD2Ev() called");
    return 0;
}

/* Demangled: mfll::MfllImageBuffer::syncCache() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllImageBuffer9syncCacheEv(void) {
    ALOGD("_ZN4mfll15MfllImageBuffer9syncCacheEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: mfll::MfllCore::getInputYuvFmtYuvBase() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4mfll8MfllCore21getInputYuvFmtYuvBaseEv(void) {
    ALOGD("_ZNK4mfll8MfllCore21getInputYuvFmtYuvBaseEv() called");
    return 0;
}

/* Demangled: std::__1::vector<android::sp<mfll::IMfllImageBuffer>*, std::__1::allocator<android::sp<mfll::IMfllImageBuffer>*> >::__append(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN7android2spIN4mfll16IMfllImageBufferEEENS_9allocatorIS6_EEE8__appendEm(void) {
    ALOGD("_ZNSt3__16vectorIPN7android2spIN4mfll16IMfllImageBufferEEENS_9allocatorIS6_EEE8__appendEm() called");
    return 0;
}

/* Demangled: mfll::MfllMemc::~MfllMemc() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllMemcD2Ev(void) {
    ALOGD("_ZN4mfll8MfllMemcD2Ev() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<mfll::ePLATFORMCFG, long>, std::__1::__unordered_map_hasher<mfll::ePLATFORMCFG, std::__1::__hash_value_type<mfll::ePLATFORMCFG, long>, std::__1::hash<mfll::ePLATFORMCFG>, true>, std::__1::__unordered_map_equal<mfll::ePLATFORMCFG, std::__1::__hash_value_type<mfll::ePLATFORMCFG, long>, std::__1::equal_to<mfll::ePLATFORMCFG>, true>, std::__1::allocator<std::__1::__hash_value_type<mfll::ePLATFORMCFG, long> > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN4mfll12ePLATFORMCFGElEENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN4mfll12ePLATFORMCFGElEENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEE6rehashEm() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSCam::IImageBuffer**, std::__1::allocator<NSCam::IImageBuffer**> >::push_front(NSCam::IImageBuffer**&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPPN5NSCam12IImageBufferENS_9allocatorIS4_EEE10push_frontEOS4_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPPN5NSCam12IImageBufferENS_9allocatorIS4_EEE10push_frontEOS4_() called");
    return 0;
}

/* Demangled: android::sp<mfll::IMfllMfb>::operator=(mfll::IMfllMfb*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN4mfll8IMfllMfbEEaSEPS2_(void) {
    ALOGD("_ZN7android2spIN4mfll8IMfllMfbEEaSEPS2_() called");
    return 0;
}

/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__push_back_slow_path<int>(int&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIiEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIiEEvOT_() called");
    return 0;
}

/* Demangled: mfll::MfllImageBuffer::~MfllImageBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllImageBufferD0Ev(void) {
    ALOGD("_ZN4mfll15MfllImageBufferD0Ev() called");
    return 0;
}

/* Demangled: mfll::MfllProperty::readProperty(mfll::tagProperty const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllProperty12readPropertyERKNS_11tagPropertyEi(void) {
    ALOGD("_ZN4mfll12MfllProperty12readPropertyERKNS_11tagPropertyEi() called");
    return 0;
}

/* Demangled: mfll::MfllFeatureMrp::MfllFeatureMrp() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll14MfllFeatureMrpC1Ev(void) {
    ALOGD("_ZN4mfll14MfllFeatureMrpC1Ev() called");
    return 0;
}

/* Demangled: mfll::MfllCore::tellsFuturePhase2() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore17tellsFuturePhase2Ev(void) {
    ALOGD("_ZN4mfll8MfllCore17tellsFuturePhase2Ev() called");
    return 0;
}

/* Demangled: mfll::MfllCore::doMotionCompensation(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore20doMotionCompensationEPv(void) {
    ALOGD("_ZN4mfll8MfllCore20doMotionCompensationEPv() called");
    return 0;
}

/* Demangled: android::sp<mfll::IMfllCapturer>::operator=(mfll::IMfllCapturer*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN4mfll13IMfllCapturerEEaSEPS2_(void) {
    ALOGD("_ZN7android2spIN4mfll13IMfllCapturerEEaSEPS2_() called");
    return 0;
}

/* Demangled: mfll::MfllBss::MfllBss() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll7MfllBssC2Ev(void) {
    ALOGD("_ZN4mfll7MfllBssC2Ev() called");
    return 0;
}

/* Demangled: mfll::MfllStrategy::~MfllStrategy() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllStrategyD2Ev(void) {
    ALOGD("_ZN4mfll12MfllStrategyD2Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Demangled: mfll::MfllMemc::MfllMemc() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllMemcC1Ev(void) {
    ALOGD("_ZN4mfll8MfllMemcC1Ev() called");
    return 0;
}

/* Demangled: mfll::MfllMfb::~MfllMfb() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll7MfllMfbD0Ev(void) {
    ALOGD("_ZN4mfll7MfllMfbD0Ev() called");
    return 0;
}

/* Demangled: mfll::MfllNvram::getChunk(unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll9MfllNvram8getChunkEPm(void) {
    ALOGD("_ZN4mfll9MfllNvram8getChunkEPm() called");
    return 0;
}

/* Demangled: mfll::MfllCore2p5::getVersion() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll11MfllCore2p510getVersionEv(void) {
    ALOGD("_ZN4mfll11MfllCore2p510getVersionEv() called");
    return 0;
}

/* Demangled: mfll::MfllYuvCapturer::getCapturedFrameNum() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllYuvCapturer19getCapturedFrameNumEv(void) {
    ALOGD("_ZN4mfll15MfllYuvCapturer19getCapturedFrameNumEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<mfll::MfllImageBuffer**, std::__1::allocator<mfll::MfllImageBuffer**>&>::push_back(mfll::MfllImageBuffer**&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPPN4mfll15MfllImageBufferERNS_9allocatorIS4_EEE9push_backEOS4_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPPN4mfll15MfllImageBufferERNS_9allocatorIS4_EEE9push_backEOS4_() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: mfll::MfllCore::getSensorId() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore11getSensorIdEv(void) {
    ALOGD("_ZN4mfll8MfllCore11getSensorIdEv() called");
    return 0;
}

/* Demangled: mfll::MfllProperty::getMfbP2DirectLink() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllProperty18getMfbP2DirectLinkEv(void) {
    ALOGD("_ZN4mfll12MfllProperty18getMfbP2DirectLinkEv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekpos(std::__1::fpos<mbstate_t>, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj() called");
    return 0;
}

/* Demangled: mfll::MfllCore::do_EncodeYuvGolden(long) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore18do_EncodeYuvGoldenEl(void) {
    ALOGD("_ZN4mfll8MfllCore18do_EncodeYuvGoldenEl() called");
    return 0;
}

/* Demangled: mfll::MfhrCore2::MfhrCore2() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll9MfhrCore2C2Ev(void) {
    ALOGD("_ZN4mfll9MfhrCore2C2Ev() called");
    return 0;
}

/* Demangled: mfll::MfllEvents::~MfllEvents() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll10MfllEventsD2Ev(void) {
    ALOGD("_ZN4mfll10MfllEventsD2Ev() called");
    return 0;
}

/* Demangled: mfll::MfllExifInfo::updateInfo(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllExifInfo10updateInfoEjj(void) {
    ALOGD("_ZN4mfll12MfllExifInfo10updateInfoEjj() called");
    return 0;
}

/* Demangled: std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<mfll::MfllErr (mfll::IMfllExifInfo*, std::__1::deque<void*, std::__1::allocator<void*> > const&)> >, void*>*> std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<mfll::MfllErr (mfll::IMfllExifInfo*, std::__1::deque<void*, std::__1::allocator<void*> > const&)> >, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<mfll::MfllErr (mfll::IMfllExifInfo*, std::__1::deque<void*, std::__1::allocator<void*> > const&)> >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<mfll::MfllErr (mfll::IMfllExifInfo*, std::__1::deque<void*, std::__1::allocator<void*> > const&)> >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<mfll::MfllErr (mfll::IMfllExifInfo*, std::__1::deque<void*, std::__1::allocator<void*> > const&)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN4mfll7MfllErrEPNS9_13IMfllExifInfoERKNS_5dequeIPvNS5_ISE_EEEEEEEEENS_22__unordered_map_hasherIS7_SL_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SL_NS_8equal_toIS7_EELb1EEENS5_ISL_EEE4findIS7_EENS_21__hash_const_iteratorIPNS_11__hash_nodeISL_SE_EEEERKT_(void) {
    ALOGD("_ZNKSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN4mfll7MfllErrEPNS9_13IMfllExifInfoERKNS_5dequeIPvNS5_ISE_EEEEEEEEENS_22__unordered_map_hasherIS7_SL_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SL_NS_8equal_toIS7_EELb1EEENS5_ISL_EEE4findIS7_EENS_21__hash_const_iteratorIPNS_11__hash_nodeISL_SE_EEEERKT_() called");
    return 0;
}

/* Demangled: mfll::MfllImageBuffer::getBufStridesInBytes(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllImageBuffer20getBufStridesInBytesEm(void) {
    ALOGD("_ZN4mfll15MfllImageBuffer20getBufStridesInBytesEm() called");
    return 0;
}

/* Demangled: mfll::MfllStrategy::MfllStrategy() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllStrategyC1Ev(void) {
    ALOGD("_ZN4mfll12MfllStrategyC1Ev() called");
    return 0;
}

/* Demangled: mfll::IMfllCapturer::createInstance(mfll::IMfllCapturer::Type) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll13IMfllCapturer14createInstanceENS0_4TypeE(void) {
    ALOGD("_ZN4mfll13IMfllCapturer14createInstanceENS0_4TypeE() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: std::__1::deque<mfll::MfllOperationSync::JOB, std::__1::allocator<mfll::MfllOperationSync::JOB> >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN4mfll17MfllOperationSync3JOBENS_9allocatorIS3_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeIN4mfll17MfllOperationSync3JOBENS_9allocatorIS3_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: mfll::MfllExifInfo::updateInfo(mfll::IMfllNvram*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllExifInfo10updateInfoEPNS_10IMfllNvramE(void) {
    ALOGD("_ZN4mfll12MfllExifInfo10updateInfoEPNS_10IMfllNvramE() called");
    return 0;
}

/* Demangled: mfll::MfllMemc::fix_mfb_copy_nv12(unsigned char*, unsigned char*, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllMemc17fix_mfb_copy_nv12EPhS1_iiiii(void) {
    ALOGD("_ZN4mfll8MfllMemc17fix_mfb_copy_nv12EPhS1_iiiii() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<mfll::ImageBufferPack, std::__1::allocator<mfll::ImageBufferPack> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseIN4mfll15ImageBufferPackENS_9allocatorIS2_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseIN4mfll15ImageBufferPackENS_9allocatorIS2_EEE5clearEv() called");
    return 0;
}

/* Demangled: mfll::MfllYuvCapturer::MfllYuvCapturer() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllYuvCapturerC2Ev(void) {
    ALOGD("_ZN4mfll15MfllYuvCapturerC2Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: mfll::MfllEvents::MfllEvents() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll10MfllEventsC1Ev(void) {
    ALOGD("_ZN4mfll10MfllEventsC1Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<mfll::EventType, std::__1::allocator<mfll::EventType> >::__push_back_slow_path<mfll::EventType>(mfll::EventType&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN4mfll9EventTypeENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN4mfll9EventTypeENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_() called");
    return 0;
}

/* Demangled: mfll::MfllFeatureFeed::onEvent(mfll::EventType, mfll::MfllEventStatus&, void*, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllFeatureFeed7onEventENS_9EventTypeERNS_15MfllEventStatusEPvS4_S4_(void) {
    ALOGD("_ZN4mfll15MfllFeatureFeed7onEventENS_9EventTypeERNS_15MfllEventStatusEPvS4_S4_() called");
    return 0;
}

/* Demangled: mfll::MfllCapturer::setPostNrType(mfll::NoiseReductionType const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllCapturer13setPostNrTypeERKNS_18NoiseReductionTypeE(void) {
    ALOGD("_ZN4mfll12MfllCapturer13setPostNrTypeERKNS_18NoiseReductionTypeE() called");
    return 0;
}

/* Demangled: mfll::MfllCore::getVersionString() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore16getVersionStringEv(void) {
    ALOGD("_ZN4mfll8MfllCore16getVersionStringEv() called");
    return 0;
}

/* Demangled: mfll::MfllCore::doAllocYuvWorking(long) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore17doAllocYuvWorkingEl(void) {
    ALOGD("_ZN4mfll8MfllCore17doAllocYuvWorkingEl() called");
    return 0;
}

/* Demangled: mfll::MfllCore::setBypassOptionAsSingleFrame() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore28setBypassOptionAsSingleFrameEv(void) {
    ALOGD("_ZN4mfll8MfllCore28setBypassOptionAsSingleFrameEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<int*, std::__1::allocator<int*>&>::push_front(int* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPiRNS_9allocatorIS1_EEE10push_frontERKS1_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPiRNS_9allocatorIS1_EEE10push_frontERKS1_() called");
    return 0;
}

/* Demangled: mfll::MfllMemc::getForceMe(void*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllMemc10getForceMeEPvm(void) {
    ALOGD("_ZN4mfll8MfllMemc10getForceMeEPvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<char const**, std::__1::allocator<char const**> >::push_back(char const**&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPPKcNS_9allocatorIS3_EEE9push_backEOS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPPKcNS_9allocatorIS3_EEE9push_backEOS3_() called");
    return 0;
}

/* Exported Object: vtable for mfll::IMfllEvents */
extern "C" __attribute__((visibility("default"))) void* _ZTVN4mfll11IMfllEventsE = NULL;

/* Demangled: mfll::MfllExifInfo::~MfllExifInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllExifInfoD1Ev(void) {
    ALOGD("_ZN4mfll12MfllExifInfoD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<mfll::MfllImageBuffer**, std::__1::allocator<mfll::MfllImageBuffer**> >::push_front(mfll::MfllImageBuffer**&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPPN4mfll15MfllImageBufferENS_9allocatorIS4_EEE10push_frontEOS4_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPPN4mfll15MfllImageBufferENS_9allocatorIS4_EEE10push_frontEOS4_() called");
    return 0;
}

/* Demangled: mfll::IMfllGyro::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll9IMfllGyro14createInstanceEv(void) {
    ALOGD("_ZN4mfll9IMfllGyro14createInstanceEv() called");
    return 0;
}

/* Demangled: mfll::MfllCore::doCancel() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore8doCancelEv(void) {
    ALOGD("_ZN4mfll8MfllCore8doCancelEv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<mfll::ePLATFORMCFG, long>, std::__1::__unordered_map_hasher<mfll::ePLATFORMCFG, std::__1::__hash_value_type<mfll::ePLATFORMCFG, long>, std::__1::hash<mfll::ePLATFORMCFG>, true>, std::__1::__unordered_map_equal<mfll::ePLATFORMCFG, std::__1::__hash_value_type<mfll::ePLATFORMCFG, long>, std::__1::equal_to<mfll::ePLATFORMCFG>, true>, std::__1::allocator<std::__1::__hash_value_type<mfll::ePLATFORMCFG, long> > >::~__hash_table() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN4mfll12ePLATFORMCFGElEENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEED2Ev(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN4mfll12ePLATFORMCFGElEENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::deque<NSCam::IImageBuffer*, std::__1::allocator<NSCam::IImageBuffer*> >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIPN5NSCam12IImageBufferENS_9allocatorIS3_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeIPN5NSCam12IImageBufferENS_9allocatorIS3_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: mfll::IMfllStrategy::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll13IMfllStrategy15destroyInstanceEv(void) {
    ALOGD("_ZN4mfll13IMfllStrategy15destroyInstanceEv() called");
    return 0;
}

/* Demangled: mfll::MfllCore::setInputYuvFormat(mfll::InputYuvFmt) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore17setInputYuvFormatENS_11InputYuvFmtE(void) {
    ALOGD("_ZN4mfll8MfllCore17setInputYuvFormatENS_11InputYuvFmtE() called");
    return 0;
}

/* Demangled: mfll::MfhrCore2::setMfhrByPassOption() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll9MfhrCore219setMfhrByPassOptionEv(void) {
    ALOGD("_ZN4mfll9MfhrCore219setMfhrByPassOptionEv() called");
    return 0;
}

/* Demangled: std::__1::__deque_iterator<mfll::MfllImageBuffer*, mfll::MfllImageBuffer**, mfll::MfllImageBuffer*&, mfll::MfllImageBuffer***, long, 512l> std::__1::move_backward<mfll::MfllImageBuffer*, mfll::MfllImageBuffer**, mfll::MfllImageBuffer*&, mfll::MfllImageBuffer***, long, 512l, mfll::MfllImageBuffer*, mfll::MfllImageBuffer**, mfll::MfllImageBuffer*&, mfll::MfllImageBuffer***, long, 512l>(std::__1::__deque_iterator<mfll::MfllImageBuffer*, mfll::MfllImageBuffer**, mfll::MfllImageBuffer*&, mfll::MfllImageBuffer***, long, 512l>, std::__1::__deque_iterator<mfll::MfllImageBuffer*, mfll::MfllImageBuffer**, mfll::MfllImageBuffer*&, mfll::MfllImageBuffer***, long, 512l>, std::__1::__deque_iterator<mfll::MfllImageBuffer*, mfll::MfllImageBuffer**, mfll::MfllImageBuffer*&, mfll::MfllImageBuffer***, long, 512l>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113move_backwardIPN4mfll15MfllImageBufferEPS3_RS3_PS4_lLl512ES3_S4_S5_S6_lLl512EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS7_IT_T0_T1_T2_T3_XT4_EEESJ_SD_(void) {
    ALOGD("_ZNSt3__113move_backwardIPN4mfll15MfllImageBufferEPS3_RS3_PS4_lLl512ES3_S4_S5_S6_lLl512EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS7_IT_T0_T1_T2_T3_XT4_EEESJ_SD_() called");
    return 0;
}

/* Demangled: mfll::MfllMemc::getAlgorithmWorkBufferSize(unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllMemc26getAlgorithmWorkBufferSizeEPm(void) {
    ALOGD("_ZN4mfll8MfllMemc26getAlgorithmWorkBufferSizeEPm() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, std::__1::shared_ptr<char> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::shared_ptr<char> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<char> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<char> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::shared_ptr<char> > > >::__emplace_unique_key_args<int, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>, std::__1::tuple<> >(int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIcEEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIcEEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: mfll::MfllCore::doBss(long) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore5doBssEl(void) {
    ALOGD("_ZN4mfll8MfllCore5doBssEl() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<char*, std::__1::default_delete<char>, std::__1::allocator<char> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPcNS_14default_deleteIcEENS_9allocatorIcEEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPcNS_14default_deleteIcEENS_9allocatorIcEEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: mfll::MfllFeatureDump::~MfllFeatureDump() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllFeatureDumpD1Ev(void) {
    ALOGD("_ZN4mfll15MfllFeatureDumpD1Ev() called");
    return 0;
}

/* Demangled: mfll::MfllCore::doAllocRrzoBuffer(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore17doAllocRrzoBufferEPv(void) {
    ALOGD("_ZN4mfll8MfllCore17doAllocRrzoBufferEPv() called");
    return 0;
}

/* Demangled: mfll::MfllFeaturePerf::getListenedEventTypes() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllFeaturePerf21getListenedEventTypesEv(void) {
    ALOGD("_ZN4mfll15MfllFeaturePerf21getListenedEventTypesEv() called");
    return 0;
}

/* Demangled: mfll::MfllMfb::blend(mfll::IMfllImageBuffer*, mfll::IMfllImageBuffer*, mfll::IMfllImageBuffer*, mfll::IMfllImageBuffer*, mfll::IMfllImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll7MfllMfb5blendEPNS_16IMfllImageBufferES2_S2_S2_S2_(void) {
    ALOGD("_ZN4mfll7MfllMfb5blendEPNS_16IMfllImageBufferES2_S2_S2_S2_() called");
    return 0;
}

/* Demangled: std::__1::__deque_iterator<mfll::MfllOperationSync::JOB, mfll::MfllOperationSync::JOB*, mfll::MfllOperationSync::JOB&, mfll::MfllOperationSync::JOB**, long, 1024l> std::__1::move_backward<mfll::MfllOperationSync::JOB, mfll::MfllOperationSync::JOB*, mfll::MfllOperationSync::JOB&, mfll::MfllOperationSync::JOB**, long, 1024l, mfll::MfllOperationSync::JOB, mfll::MfllOperationSync::JOB*, mfll::MfllOperationSync::JOB&, mfll::MfllOperationSync::JOB**, long, 1024l>(std::__1::__deque_iterator<mfll::MfllOperationSync::JOB, mfll::MfllOperationSync::JOB*, mfll::MfllOperationSync::JOB&, mfll::MfllOperationSync::JOB**, long, 1024l>, std::__1::__deque_iterator<mfll::MfllOperationSync::JOB, mfll::MfllOperationSync::JOB*, mfll::MfllOperationSync::JOB&, mfll::MfllOperationSync::JOB**, long, 1024l>, std::__1::__deque_iterator<mfll::MfllOperationSync::JOB, mfll::MfllOperationSync::JOB*, mfll::MfllOperationSync::JOB&, mfll::MfllOperationSync::JOB**, long, 1024l>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113move_backwardIN4mfll17MfllOperationSync3JOBEPS3_RS3_PS4_lLl1024ES3_S4_S5_S6_lLl1024EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS7_IT_T0_T1_T2_T3_XT4_EEESJ_SD_(void) {
    ALOGD("_ZNSt3__113move_backwardIN4mfll17MfllOperationSync3JOBEPS3_RS3_PS4_lLl1024ES3_S4_S5_S6_lLl1024EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS7_IT_T0_T1_T2_T3_XT4_EEESJ_SD_() called");
    return 0;
}

/* Demangled: mfll::MfllProperty::getExposure() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllProperty11getExposureEv(void) {
    ALOGD("_ZN4mfll12MfllProperty11getExposureEv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev() called");
    return 0;
}

/* Demangled: mfll::MfllCapturer::captureFrames(unsigned int, std::__1::vector<android::sp<mfll::IMfllImageBuffer>*, std::__1::allocator<android::sp<mfll::IMfllImageBuffer>*> >&, std::__1::vector<android::sp<mfll::IMfllImageBuffer>*, std::__1::allocator<android::sp<mfll::IMfllImageBuffer>*> >&, std::__1::vector<android::sp<mfll::IMfllImageBuffer>*, std::__1::allocator<android::sp<mfll::IMfllImageBuffer>*> >&, std::__1::vector<mfll::MfllMotionVector*, std::__1::allocator<mfll::MfllMotionVector*> >&, std::__1::vector<int, std::__1::allocator<int> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllCapturer13captureFramesEjRNSt3__16vectorIPN7android2spINS_16IMfllImageBufferEEENS1_9allocatorIS7_EEEESB_SB_RNS2_IPNS_16MfllMotionVectorENS8_ISD_EEEERNS2_IiNS8_IiEEEE(void) {
    ALOGD("_ZN4mfll12MfllCapturer13captureFramesEjRNSt3__16vectorIPN7android2spINS_16IMfllImageBufferEEENS1_9allocatorIS7_EEEESB_SB_RNS2_IPNS_16MfllMotionVectorENS8_ISD_EEEERNS2_IiNS8_IiEEEE() called");
    return 0;
}

/* Demangled: mfll::MfllFeaturePerf::~MfllFeaturePerf() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllFeaturePerfD0Ev(void) {
    ALOGD("_ZN4mfll15MfllFeaturePerfD0Ev() called");
    return 0;
}

/* Demangled: mfll::MfllImageBuffer::loadFile(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllImageBuffer8loadFileEPKc(void) {
    ALOGD("_ZN4mfll15MfllImageBuffer8loadFileEPKc() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::NSIoPipe::ModuleInfo> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEEE = NULL;

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::shared_ptr<char> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<char> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<char> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::shared_ptr<char> > > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIcEEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIcEEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: mfll::MfllProperty::getCaptureNum() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllProperty13getCaptureNumEv(void) {
    ALOGD("_ZN4mfll12MfllProperty13getCaptureNumEv() called");
    return 0;
}

/* Demangled: mfll::MfllYuvCapturer::captureFrames(unsigned int, std::__1::vector<android::sp<mfll::IMfllImageBuffer>*, std::__1::allocator<android::sp<mfll::IMfllImageBuffer>*> >&, std::__1::vector<android::sp<mfll::IMfllImageBuffer>*, std::__1::allocator<android::sp<mfll::IMfllImageBuffer>*> >&, std::__1::vector<android::sp<mfll::IMfllImageBuffer>*, std::__1::allocator<android::sp<mfll::IMfllImageBuffer>*> >&, std::__1::vector<mfll::MfllMotionVector*, std::__1::allocator<mfll::MfllMotionVector*> >&, std::__1::vector<int, std::__1::allocator<int> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllYuvCapturer13captureFramesEjRNSt3__16vectorIPN7android2spINS_16IMfllImageBufferEEENS1_9allocatorIS7_EEEESB_SB_RNS2_IPNS_16MfllMotionVectorENS8_ISD_EEEERNS2_IiNS8_IiEEEE(void) {
    ALOGD("_ZN4mfll15MfllYuvCapturer13captureFramesEjRNSt3__16vectorIPN7android2spINS_16IMfllImageBufferEEENS1_9allocatorIS7_EEEESB_SB_RNS2_IPNS_16MfllMotionVectorENS8_ISD_EEEERNS2_IiNS8_IiEEEE() called");
    return 0;
}

/* Exported Object: vtable for mfll::MfllImageBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTVN4mfll15MfllImageBufferE = NULL;

/* Demangled: mfll::MfllCore2p5::releaseBuffer(mfll::MfllBuffer const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll11MfllCore2p513releaseBufferERKNS_10MfllBufferEi(void) {
    ALOGD("_ZN4mfll11MfllCore2p513releaseBufferERKNS_10MfllBufferEi() called");
    return 0;
}

/* Demangled: mfll::MfllImageBuffer::mapImageFormat(mfll::ImageFormat const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllImageBuffer14mapImageFormatERKNS_11ImageFormatEb(void) {
    ALOGD("_ZN4mfll15MfllImageBuffer14mapImageFormatERKNS_11ImageFormatEb() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<char const**, std::__1::allocator<char const**>&>::push_back(char const**&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPPKcRNS_9allocatorIS3_EEE9push_backEOS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPPKcRNS_9allocatorIS3_EEE9push_backEOS3_() called");
    return 0;
}

/* Demangled: mfll::MfllCore::getMiddlewareInfo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4mfll8MfllCore17getMiddlewareInfoEv(void) {
    ALOGD("_ZNK4mfll8MfllCore17getMiddlewareInfoEv() called");
    return 0;
}

/* Demangled: mfll::MfllProperty::getForceMmdvfsOff() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllProperty17getForceMmdvfsOffEv(void) {
    ALOGD("_ZN4mfll12MfllProperty17getForceMmdvfsOffEv() called");
    return 0;
}

/* Demangled: mfll::MfllFeatureFeed::~MfllFeatureFeed() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllFeatureFeedD1Ev(void) {
    ALOGD("_ZN4mfll15MfllFeatureFeedD1Ev() called");
    return 0;
}

/* Demangled: mfll::MfllImageBuffer::convertImageFormat(mfll::ImageFormat const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllImageBuffer18convertImageFormatERKNS_11ImageFormatE(void) {
    ALOGD("_ZN4mfll15MfllImageBuffer18convertImageFormatERKNS_11ImageFormatE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE8do_splatEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::NSIoPipe::ExtraParam> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam8NSIoPipe10ExtraParamEEE = NULL;

/* Demangled: mfll::MfllCapturer::~MfllCapturer() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllCapturerD0Ev(void) {
    ALOGD("_ZN4mfll12MfllCapturerD0Ev() called");
    return 0;
}

/* Demangled: mfll::MfllCore::getInputYuvFmtYuvFull() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4mfll8MfllCore21getInputYuvFmtYuvFullEv(void) {
    ALOGD("_ZNK4mfll8MfllCore21getInputYuvFmtYuvFullEv() called");
    return 0;
}

/* Demangled: mfll::IMfllEvents::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll11IMfllEvents15destroyInstanceEv(void) {
    ALOGD("_ZN4mfll11IMfllEvents15destroyInstanceEv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::setbuf(char*, long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPcl(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPcl() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_filebuf<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: mfll::MfllExifInfo::getInfoMap() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllExifInfo10getInfoMapEv(void) {
    ALOGD("_ZN4mfll12MfllExifInfo10getInfoMapEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSCam::IImageBuffer**, std::__1::allocator<NSCam::IImageBuffer**>&>::push_back(NSCam::IImageBuffer**&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPPN5NSCam12IImageBufferERNS_9allocatorIS4_EEE9push_backEOS4_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPPN5NSCam12IImageBufferERNS_9allocatorIS4_EEE9push_backEOS4_() called");
    return 0;
}

/* Demangled: mfll::MfllNvram::~MfllNvram() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll9MfllNvramD2Ev(void) {
    ALOGD("_ZN4mfll9MfllNvramD2Ev() called");
    return 0;
}

/* Demangled: mfll::MfllYuvCapturer::dispatchOnEvent(mfll::EventType const&, mfll::MfllEventStatus&, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllYuvCapturer15dispatchOnEventERKNS_9EventTypeERNS_15MfllEventStatusEPvS6_(void) {
    ALOGD("_ZN4mfll15MfllYuvCapturer15dispatchOnEventERKNS_9EventTypeERNS_15MfllEventStatusEPvS6_() called");
    return 0;
}

/* Exported Object: guard variable for getExtFunctionMap()::sExtFunctions */
extern "C" __attribute__((visibility("default"))) void* _ZGVZ17getExtFunctionMapvE13sExtFunctions = NULL;

/* Demangled: mfll::MfllCapturer::queueSourceLcsoImage(android::sp<mfll::IMfllImageBuffer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllCapturer20queueSourceLcsoImageERN7android2spINS_16IMfllImageBufferEEE(void) {
    ALOGD("_ZN4mfll12MfllCapturer20queueSourceLcsoImageERN7android2spINS_16IMfllImageBufferEEE() called");
    return 0;
}

/* Demangled: mfll::MfllImageBuffer::saveFile(char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllImageBuffer8saveFileEPKcb(void) {
    ALOGD("_ZN4mfll15MfllImageBuffer8saveFileEPKcb() called");
    return 0;
}

/* Demangled: mfll::MfllMfb::setMfllCore(mfll::IMfllCore*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll7MfllMfb11setMfllCoreEPNS_9IMfllCoreE(void) {
    ALOGD("_ZN4mfll7MfllMfb11setMfllCoreEPNS_9IMfllCoreE() called");
    return 0;
}

/* Demangled: mfll::MfllNvram::chunkMfnrTh(unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll9MfllNvram11chunkMfnrThEPm(void) {
    ALOGD("_ZN4mfll9MfllNvram11chunkMfnrThEPm() called");
    return 0;
}

/* Demangled: mfll::MfllNvram::chunk(unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll9MfllNvram5chunkEPm(void) {
    ALOGD("_ZN4mfll9MfllNvram5chunkEPm() called");
    return 0;
}

/* Demangled: mfll::MfllCapturer::queueSourceMonoImage(android::sp<mfll::IMfllImageBuffer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllCapturer20queueSourceMonoImageERN7android2spINS_16IMfllImageBufferEEE(void) {
    ALOGD("_ZN4mfll12MfllCapturer20queueSourceMonoImageERN7android2spINS_16IMfllImageBufferEEE() called");
    return 0;
}

/* Exported Object: vtable for mfll::IMfllCapturer */
extern "C" __attribute__((visibility("default"))) void* _ZTVN4mfll13IMfllCapturerE = NULL;

/* Demangled: mfll::MfllCore::tellsFutureMemc() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore15tellsFutureMemcEv(void) {
    ALOGD("_ZN4mfll8MfllCore15tellsFutureMemcEv() called");
    return 0;
}

/* Demangled: mfll::MfllNvram::MfllNvram() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll9MfllNvramC1Ev(void) {
    ALOGD("_ZN4mfll9MfllNvramC1Ev() called");
    return 0;
}

/* Exported Object: vtable for mfll::MfllCore */
extern "C" __attribute__((visibility("default"))) void* _ZTVN4mfll8MfllCoreE = NULL;

/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE8do_splatEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_pointer<char*, std::__1::default_delete<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_pointerIPcNS_14default_deleteIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: mfll::MfllProperty::getFullSizeMc() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllProperty13getFullSizeMcEv(void) {
    ALOGD("_ZN4mfll12MfllProperty13getFullSizeMcEv() called");
    return 0;
}

/* Exported Object: vtable for mfll::MfllFeatureMrp */
extern "C" __attribute__((visibility("default"))) void* _ZTVN4mfll14MfllFeatureMrpE = NULL;

/* Demangled: std::__1::__split_buffer<void**, std::__1::allocator<void**> >::push_front(void**&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPPvNS_9allocatorIS2_EEE10push_frontEOS2_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPPvNS_9allocatorIS2_EEE10push_frontEOS2_() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: mfll::MfllCore::do_EncodeQYuv(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore13do_EncodeQYuvEPv(void) {
    ALOGD("_ZN4mfll8MfllCore13do_EncodeQYuvEPv() called");
    return 0;
}

/* Demangled: mfll::MfllCore::do_EncodeYuvBase(long) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore16do_EncodeYuvBaseEl(void) {
    ALOGD("_ZN4mfll8MfllCore16do_EncodeYuvBaseEl() called");
    return 0;
}

/* Demangled: __floatditf */
extern "C" __attribute__((visibility("default"))) int fn___floatditf(void) __asm__("__floatditf");
int fn___floatditf(void) {
    ALOGD("__floatditf() called");
    return 0;
}

/* Demangled: mfll::MfllYuvCapturer::dispatchDoneEvent(mfll::EventType const&, mfll::MfllEventStatus&, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllYuvCapturer17dispatchDoneEventERKNS_9EventTypeERNS_15MfllEventStatusEPvS6_(void) {
    ALOGD("_ZN4mfll15MfllYuvCapturer17dispatchDoneEventERKNS_9EventTypeERNS_15MfllEventStatusEPvS6_() called");
    return 0;
}

/* Demangled: mfll::MfllExifInfo::sendCommand(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::deque<void*, std::__1::allocator<void*> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllExifInfo11sendCommandERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKNS1_5dequeIPvNS5_ISB_EEEE(void) {
    ALOGD("_ZN4mfll12MfllExifInfo11sendCommandERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKNS1_5dequeIPvNS5_ISB_EEEE() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<mfll::MfllErr (mfll::IMfllExifInfo*, std::__1::deque<void*, std::__1::allocator<void*> > const&)> >, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<mfll::MfllErr (mfll::IMfllExifInfo*, std::__1::deque<void*, std::__1::allocator<void*> > const&)> >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<mfll::MfllErr (mfll::IMfllExifInfo*, std::__1::deque<void*, std::__1::allocator<void*> > const&)> >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<mfll::MfllErr (mfll::IMfllExifInfo*, std::__1::deque<void*, std::__1::allocator<void*> > const&)> > > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN4mfll7MfllErrEPNS9_13IMfllExifInfoERKNS_5dequeIPvNS5_ISE_EEEEEEEEENS_22__unordered_map_hasherIS7_SL_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SL_NS_8equal_toIS7_EELb1EEENS5_ISL_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN4mfll7MfllErrEPNS9_13IMfllExifInfoERKNS_5dequeIPvNS5_ISE_EEEEEEEEENS_22__unordered_map_hasherIS7_SL_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SL_NS_8equal_toIS7_EELb1EEENS5_ISL_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: mfll::IMfllBss::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8IMfllBss14createInstanceEv(void) {
    ALOGD("_ZN4mfll8IMfllBss14createInstanceEv() called");
    return 0;
}

/* Demangled: android::sp<mfll::MfllFeatureFeed>::operator=(mfll::MfllFeatureFeed*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN4mfll15MfllFeatureFeedEEaSEPS2_(void) {
    ALOGD("_ZN7android2spIN4mfll15MfllFeatureFeedEEaSEPS2_() called");
    return 0;
}

/* Demangled: void std::__1::vector<mfll::MfllMotionVector, std::__1::allocator<mfll::MfllMotionVector> >::__push_back_slow_path<mfll::MfllMotionVector const&>(mfll::MfllMotionVector const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN4mfll16MfllMotionVectorENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN4mfll16MfllMotionVectorENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_() called");
    return 0;
}

/* Exported Object: vtable for MfllImageBufferQueue */
extern "C" __attribute__((visibility("default"))) void* _ZTV20MfllImageBufferQueue = NULL;

/* Demangled: mfll::MfllCore::queueYuvCapture(int, android::sp<mfll::IMfllImageBuffer>&, android::sp<mfll::IMfllImageBuffer>&, mfll::MfllMotionVector) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore15queueYuvCaptureEiRN7android2spINS_16IMfllImageBufferEEES5_NS_16MfllMotionVectorE(void) {
    ALOGD("_ZN4mfll8MfllCore15queueYuvCaptureEiRN7android2spINS_16IMfllImageBufferEEES5_NS_16MfllMotionVectorE() called");
    return 0;
}

/* Demangled: mfll::MfllProperty::getIso() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllProperty6getIsoEv(void) {
    ALOGD("_ZN4mfll12MfllProperty6getIsoEv() called");
    return 0;
}

/* Demangled: mfll::MfllCore::do_AllocRawBuffer(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore17do_AllocRawBufferEPv(void) {
    ALOGD("_ZN4mfll8MfllCore17do_AllocRawBufferEPv() called");
    return 0;
}

/* Demangled: mfll::MfllCore::do_AllocMemcWorking(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore19do_AllocMemcWorkingEPv(void) {
    ALOGD("_ZN4mfll8MfllCore19do_AllocMemcWorkingEPv() called");
    return 0;
}

/* Demangled: std::__1::deque<mfll::MfllOperationSync::JOB, std::__1::allocator<mfll::MfllOperationSync::JOB> >::erase(std::__1::__deque_iterator<mfll::MfllOperationSync::JOB, mfll::MfllOperationSync::JOB const*, mfll::MfllOperationSync::JOB const&, mfll::MfllOperationSync::JOB const* const*, long, 1024l>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN4mfll17MfllOperationSync3JOBENS_9allocatorIS3_EEE5eraseENS_16__deque_iteratorIS3_PKS3_RS8_PKS9_lLl1024EEE(void) {
    ALOGD("_ZNSt3__15dequeIN4mfll17MfllOperationSync3JOBENS_9allocatorIS3_EEE5eraseENS_16__deque_iteratorIS3_PKS3_RS8_PKS9_lLl1024EEE() called");
    return 0;
}

/* Demangled: mfll::MfllCore::do_AllocYuvWorking(long) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore18do_AllocYuvWorkingEl(void) {
    ALOGD("_ZN4mfll8MfllCore18do_AllocYuvWorkingEl() called");
    return 0;
}

/* Demangled: mfll::MfllCore::getInputYuvFormat() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4mfll8MfllCore17getInputYuvFormatEv(void) {
    ALOGD("_ZNK4mfll8MfllCore17getInputYuvFormatEv() called");
    return 0;
}

/* Demangled: mfll::MfllProperty::setProperty(mfll::tagProperty const&, int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllProperty11setPropertyERKNS_11tagPropertyERKi(void) {
    ALOGD("_ZN4mfll12MfllProperty11setPropertyERKNS_11tagPropertyERKi() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, unsigned int>, std::__1::__tree_node<std::__1::__value_type<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, unsigned int>, void*>*, long>, bool> std::__1::__tree<std::__1::__value_type<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, unsigned int>, std::__1::__map_value_compare<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__value_type<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, unsigned int>, std::__1::less<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, unsigned int> > >::__emplace_unique_key_args<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>&&>, std::__1::tuple<> >(std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>&&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_5tupleIJNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEEEjEENS_19__map_value_compareIS9_SA_NS_4lessIS9_EELb1EEENS6_ISA_EEE25__emplace_unique_key_argsIS9_JRKNS_21piecewise_construct_tENS2_IJOS9_EEENS2_IJEEEEEENS_4pairINS_15__tree_iteratorISA_PNS_11__tree_nodeISA_PvEElEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_5tupleIJNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEEEjEENS_19__map_value_compareIS9_SA_NS_4lessIS9_EELb1EEENS6_ISA_EEE25__emplace_unique_key_argsIS9_JRKNS_21piecewise_construct_tENS2_IJOS9_EEENS2_IJEEEEEENS_4pairINS_15__tree_iteratorISA_PNS_11__tree_nodeISA_PvEElEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSCam::IImageBuffer**, std::__1::allocator<NSCam::IImageBuffer**> >::push_back(NSCam::IImageBuffer**&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPPN5NSCam12IImageBufferENS_9allocatorIS4_EEE9push_backEOS4_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPPN5NSCam12IImageBufferENS_9allocatorIS4_EEE9push_backEOS4_() called");
    return 0;
}

/* Demangled: android::sp<mfll::IMfllNvram>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN4mfll10IMfllNvramEED2Ev(void) {
    ALOGD("_ZN7android2spIN4mfll10IMfllNvramEED2Ev() called");
    return 0;
}

/* Demangled: mfll::MfllFeatureMrp::~MfllFeatureMrp() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll14MfllFeatureMrpD1Ev(void) {
    ALOGD("_ZN4mfll14MfllFeatureMrpD1Ev() called");
    return 0;
}

/* Demangled: mfll::MfllImageBuffer::setImageFormat(mfll::ImageFormat) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllImageBuffer14setImageFormatENS_11ImageFormatE(void) {
    ALOGD("_ZN4mfll15MfllImageBuffer14setImageFormatENS_11ImageFormatE() called");
    return 0;
}

/* Demangled: mfll::MfllImageBuffer::operator=(mfll::MfllImageBuffer const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllImageBufferaSERKS0_(void) {
    ALOGD("_ZN4mfll15MfllImageBufferaSERKS0_() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSCam::IMetadata**, std::__1::allocator<NSCam::IMetadata**> >::push_front(NSCam::IMetadata**&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPPN5NSCam9IMetadataENS_9allocatorIS4_EEE10push_frontEOS4_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPPN5NSCam9IMetadataENS_9allocatorIS4_EEE10push_frontEOS4_() called");
    return 0;
}

/* Demangled: mfll::MfllCore::doMixing(long) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore8doMixingEl(void) {
    ALOGD("_ZN4mfll8MfllCore8doMixingEl() called");
    return 0;
}

/* Demangled: mfll::MfllFeaturePerf::onEvent(mfll::EventType, mfll::MfllEventStatus&, void*, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllFeaturePerf7onEventENS_9EventTypeERNS_15MfllEventStatusEPvS4_S4_(void) {
    ALOGD("_ZN4mfll15MfllFeaturePerf7onEventENS_9EventTypeERNS_15MfllEventStatusEPvS4_S4_() called");
    return 0;
}

/* Demangled: mfll::MfllImageBuffer::registerEventDispatcher(android::sp<mfll::IMfllEvents> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllImageBuffer23registerEventDispatcherERKN7android2spINS_11IMfllEventsEEE(void) {
    ALOGD("_ZN4mfll15MfllImageBuffer23registerEventDispatcherERKN7android2spINS_11IMfllEventsEEE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<mfll::MfllImageBuffer**, std::__1::allocator<mfll::MfllImageBuffer**>&>::push_front(mfll::MfllImageBuffer** const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPPN4mfll15MfllImageBufferERNS_9allocatorIS4_EEE10push_frontERKS4_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPPN4mfll15MfllImageBufferERNS_9allocatorIS4_EEE10push_frontERKS4_() called");
    return 0;
}

/* Demangled: mfll::MfllMemc::~MfllMemc() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllMemcD1Ev(void) {
    ALOGD("_ZN4mfll8MfllMemcD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSCam::IMetadata**, std::__1::allocator<NSCam::IMetadata**>&>::push_front(NSCam::IMetadata** const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPPN5NSCam9IMetadataERNS_9allocatorIS4_EEE10push_frontERKS4_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPPN5NSCam9IMetadataERNS_9allocatorIS4_EEE10push_frontERKS4_() called");
    return 0;
}

/* Demangled: mfll::IMfllNvram::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll10IMfllNvram15destroyInstanceEv(void) {
    ALOGD("_ZN4mfll10IMfllNvram15destroyInstanceEv() called");
    return 0;
}

/* Demangled: mfll::MfllFeatureMrp::releaseMemcRelatedBuffers(mfll::IMfllCore*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll14MfllFeatureMrp25releaseMemcRelatedBuffersEPNS_9IMfllCoreEj(void) {
    ALOGD("_ZN4mfll14MfllFeatureMrp25releaseMemcRelatedBuffersEPNS_9IMfllCoreEj() called");
    return 0;
}

/* Demangled: mfll::MfllImageBuffer::getVa() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllImageBuffer5getVaEv(void) {
    ALOGD("_ZN4mfll15MfllImageBuffer5getVaEv() called");
    return 0;
}

/* Demangled: mfll::IMfllImageBuffer::createInstance(char const*, mfll::IMfllImageBuffer_Flag const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll16IMfllImageBuffer14createInstanceEPKcRKNS_21IMfllImageBuffer_FlagE(void) {
    ALOGD("_ZN4mfll16IMfllImageBuffer14createInstanceEPKcRKNS_21IMfllImageBuffer_FlagE() called");
    return 0;
}

/* Demangled: mfll::MfllCore2::do_MotionCompensation(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll9MfllCore221do_MotionCompensationEPv(void) {
    ALOGD("_ZN4mfll9MfllCore221do_MotionCompensationEPv() called");
    return 0;
}

/* Exported Object: vtable for mfll::MfllExifInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTVN4mfll12MfllExifInfoE = NULL;

/* Demangled: __eqtf2 */
extern "C" __attribute__((visibility("default"))) int fn___eqtf2(void) __asm__("__eqtf2");
int fn___eqtf2(void) {
    ALOGD("__eqtf2() called");
    return 0;
}

/* Demangled: mfll::MfllCore::tellsFuturePhase1() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore17tellsFuturePhase1Ev(void) {
    ALOGD("_ZN4mfll8MfllCore17tellsFuturePhase1Ev() called");
    return 0;
}

/* Demangled: mfll::MfllCore2::MfllCore2() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll9MfllCore2C2Ev(void) {
    ALOGD("_ZN4mfll9MfllCore2C2Ev() called");
    return 0;
}

/* Demangled: mfll::MfllBss::MfllBss() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll7MfllBssC1Ev(void) {
    ALOGD("_ZN4mfll7MfllBssC1Ev() called");
    return 0;
}

/* Demangled: mfll::MfllStrategy::~MfllStrategy() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllStrategyD1Ev(void) {
    ALOGD("_ZN4mfll12MfllStrategyD1Ev() called");
    return 0;
}

/* Demangled: __atomic_load_16 */
extern "C" __attribute__((visibility("default"))) int fn___atomic_load_16(void) __asm__("__atomic_load_16");
int fn___atomic_load_16(void) {
    ALOGD("__atomic_load_16() called");
    return 0;
}

/* Demangled: mfll::MfllCore::retrieveBuffer(mfll::MfllBuffer const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore14retrieveBufferERKNS_10MfllBufferEi(void) {
    ALOGD("_ZN4mfll8MfllCore14retrieveBufferERKNS_10MfllBufferEi() called");
    return 0;
}

/* Demangled: mfll::MfllCore::MfllCore() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCoreC2Ev(void) {
    ALOGD("_ZN4mfll8MfllCoreC2Ev() called");
    return 0;
}

/* Demangled: mfll::MfllProperty::readProperty(mfll::tagProperty const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllProperty12readPropertyERKNS_11tagPropertyE(void) {
    ALOGD("_ZN4mfll12MfllProperty12readPropertyERKNS_11tagPropertyE() called");
    return 0;
}

/* Demangled: mfll::MfllCore2p5::do_AllocMemcWorking(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll11MfllCore2p519do_AllocMemcWorkingEPv(void) {
    ALOGD("_ZN4mfll11MfllCore2p519do_AllocMemcWorkingEPv() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::vector<android::sp<mfll::IMfllEventListener>, std::__1::allocator<android::sp<mfll::IMfllEventListener> > >, std::__1::allocator<std::__1::vector<android::sp<mfll::IMfllEventListener>, std::__1::allocator<android::sp<mfll::IMfllEventListener> > > > >::__push_back_slow_path<std::__1::vector<android::sp<mfll::IMfllEventListener>, std::__1::allocator<android::sp<mfll::IMfllEventListener> > > >(std::__1::vector<android::sp<mfll::IMfllEventListener>, std::__1::allocator<android::sp<mfll::IMfllEventListener> > >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS0_IN7android2spIN4mfll18IMfllEventListenerEEENS_9allocatorIS5_EEEENS6_IS8_EEE21__push_back_slow_pathIS8_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS0_IN7android2spIN4mfll18IMfllEventListenerEEENS_9allocatorIS5_EEEENS6_IS8_EEE21__push_back_slow_pathIS8_EEvOT_() called");
    return 0;
}

/* Demangled: _ZNSt3__113move_backwardIPPN4mfll15MfllImageBufferES3_S4_RS3_PS4_lLl512EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SE_SD_PNS_9enable_ifIXsr27__is_random_access_iteratorISE_EE5valueEvE4typeE */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113move_backwardIPPN4mfll15MfllImageBufferES3_S4_RS3_PS4_lLl512EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SE_SD_PNS_9enable_ifIXsr27__is_random_access_iteratorISE_EE5valueEvE4typeE(void) {
    ALOGD("_ZNSt3__113move_backwardIPPN4mfll15MfllImageBufferES3_S4_RS3_PS4_lLl512EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SE_SD_PNS_9enable_ifIXsr27__is_random_access_iteratorISE_EE5valueEvE4typeE() called");
    return 0;
}

/* Demangled: mfll::IMfllNvram::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll10IMfllNvram14createInstanceEv(void) {
    ALOGD("_ZN4mfll10IMfllNvram14createInstanceEv() called");
    return 0;
}

/* Demangled: android::sp<mfll::MfllFeatureDump>::operator=(mfll::MfllFeatureDump*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN4mfll15MfllFeatureDumpEEaSEPS2_(void) {
    ALOGD("_ZN7android2spIN4mfll15MfllFeatureDumpEEaSEPS2_() called");
    return 0;
}

/* Demangled: _ZNSt3__113move_backwardIPN4mfll17MfllOperationSync3JOBES3_S4_RS3_PS4_lLl1024EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SE_SD_PNS_9enable_ifIXsr27__is_random_access_iteratorISE_EE5valueEvE4typeE */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113move_backwardIPN4mfll17MfllOperationSync3JOBES3_S4_RS3_PS4_lLl1024EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SE_SD_PNS_9enable_ifIXsr27__is_random_access_iteratorISE_EE5valueEvE4typeE(void) {
    ALOGD("_ZNSt3__113move_backwardIPN4mfll17MfllOperationSync3JOBES3_S4_RS3_PS4_lLl1024EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SE_SD_PNS_9enable_ifIXsr27__is_random_access_iteratorISE_EE5valueEvE4typeE() called");
    return 0;
}

/* Demangled: mfll::MfllYuvCapturer::~MfllYuvCapturer() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllYuvCapturerD2Ev(void) {
    ALOGD("_ZN4mfll15MfllYuvCapturerD2Ev() called");
    return 0;
}

/* Demangled: mfll::MfllImageBuffer::getAlignedHeight() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4mfll15MfllImageBuffer16getAlignedHeightEv(void) {
    ALOGD("_ZNK4mfll15MfllImageBuffer16getAlignedHeightEv() called");
    return 0;
}

/* Demangled: mfll::MfhrCore2::MfhrCore2() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll9MfhrCore2C1Ev(void) {
    ALOGD("_ZN4mfll9MfhrCore2C1Ev() called");
    return 0;
}

/* Demangled: mfll::MfllCore2p5::do_Init(mfll::MfllConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll11MfllCore2p57do_InitERKNS_10MfllConfigE(void) {
    ALOGD("_ZN4mfll11MfllCore2p57do_InitERKNS_10MfllConfigE() called");
    return 0;
}

/* Demangled: mfll::MfllEvents::~MfllEvents() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll10MfllEventsD1Ev(void) {
    ALOGD("_ZN4mfll10MfllEventsD1Ev() called");
    return 0;
}

/* Demangled: mfll::MfllMfb::getMainHalMetaLocked() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4mfll7MfllMfb20getMainHalMetaLockedEv(void) {
    ALOGD("_ZNK4mfll7MfllMfb20getMainHalMetaLockedEv() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* obj___bss_start __asm__("__bss_start") = NULL;

/* Demangled: mfll::MfllProperty::MfllProperty() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllPropertyC2Ev(void) {
    ALOGD("_ZN4mfll12MfllPropertyC2Ev() called");
    return 0;
}

/* Demangled: mfll::MfllMfb::encodeRawToYuv(mfll::IMfllImageBuffer*, mfll::IMfllImageBuffer*, mfll::YuvStage const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll7MfllMfb14encodeRawToYuvEPNS_16IMfllImageBufferES2_RKNS_8YuvStageE(void) {
    ALOGD("_ZN4mfll7MfllMfb14encodeRawToYuvEPNS_16IMfllImageBufferES2_RKNS_8YuvStageE() called");
    return 0;
}

/* Exported Object: vtable for mfll::MfllMfb */
extern "C" __attribute__((visibility("default"))) void* _ZTVN4mfll7MfllMfbE = NULL;

/* Exported Object: typeinfo for std::__1::future_error */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt3__112future_errorE = NULL;

/* Demangled: mfll::IMfllCore::getEventTypeName(mfll::EventType) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll9IMfllCore16getEventTypeNameENS_9EventTypeE(void) {
    ALOGD("_ZN4mfll9IMfllCore16getEventTypeNameENS_9EventTypeE() called");
    return 0;
}

/* Demangled: mfll::MfllCore::getInputYuvFmtWeightingTable() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4mfll8MfllCore28getInputYuvFmtWeightingTableEv(void) {
    ALOGD("_ZNK4mfll8MfllCore28getInputYuvFmtWeightingTableEv() called");
    return 0;
}

/* Demangled: mfll::IMfllImageBuffer::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll16IMfllImageBuffer15destroyInstanceEv(void) {
    ALOGD("_ZN4mfll16IMfllImageBuffer15destroyInstanceEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<mfll::MfllOperationSync::JOB*, std::__1::allocator<mfll::MfllOperationSync::JOB*>&>::push_back(mfll::MfllOperationSync::JOB*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN4mfll17MfllOperationSync3JOBERNS_9allocatorIS4_EEE9push_backEOS4_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN4mfll17MfllOperationSync3JOBERNS_9allocatorIS4_EEE9push_backEOS4_() called");
    return 0;
}

/* Demangled: mfll::MfllCapturer::dequeRrzoRaw() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllCapturer12dequeRrzoRawEv(void) {
    ALOGD("_ZN4mfll12MfllCapturer12dequeRrzoRawEv() called");
    return 0;
}

/* Demangled: mfll::MfllYuvCapturer::MfllYuvCapturer() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllYuvCapturerC1Ev(void) {
    ALOGD("_ZN4mfll15MfllYuvCapturerC1Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, unsigned int>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned int>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, unsigned int> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIjjEENS_19__map_value_compareIjS2_NS_4lessIjEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIjjEENS_19__map_value_compareIjS2_NS_4lessIjEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE() called");
    return 0;
}

/* Demangled: mfll::MfllCore::doEncodeQYuv(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore12doEncodeQYuvEPv(void) {
    ALOGD("_ZN4mfll8MfllCore12doEncodeQYuvEPv() called");
    return 0;
}

/* Demangled: mfll::MfllEvents::registerEventListenerAsFirst(mfll::EventType const&, android::sp<mfll::IMfllEventListener> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll10MfllEvents28registerEventListenerAsFirstERKNS_9EventTypeERKN7android2spINS_18IMfllEventListenerEEE(void) {
    ALOGD("_ZN4mfll10MfllEvents28registerEventListenerAsFirstERKNS_9EventTypeERKN7android2spINS_18IMfllEventListenerEEE() called");
    return 0;
}

/* Demangled: mfll::MfllYuvCapturer::queueSourceLcsoImage(android::sp<mfll::IMfllImageBuffer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllYuvCapturer20queueSourceLcsoImageERN7android2spINS_16IMfllImageBufferEEE(void) {
    ALOGD("_ZN4mfll15MfllYuvCapturer20queueSourceLcsoImageERN7android2spINS_16IMfllImageBufferEEE() called");
    return 0;
}

/* Demangled: mfll::MfllImageBuffer::isInited() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllImageBuffer8isInitedEv(void) {
    ALOGD("_ZN4mfll15MfllImageBuffer8isInitedEv() called");
    return 0;
}

/* Demangled: mfll::IMfllMfb::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8IMfllMfb14createInstanceEv(void) {
    ALOGD("_ZN4mfll8IMfllMfb14createInstanceEv() called");
    return 0;
}

/* Demangled: mfll::MfllCapturer::getCapturedFrameNum() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllCapturer19getCapturedFrameNumEv(void) {
    ALOGD("_ZN4mfll12MfllCapturer19getCapturedFrameNumEv() called");
    return 0;
}

/* Demangled: mfll::MfllYuvCapturer::queueSourceMonoImage(android::sp<mfll::IMfllImageBuffer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllYuvCapturer20queueSourceMonoImageERN7android2spINS_16IMfllImageBufferEEE(void) {
    ALOGD("_ZN4mfll15MfllYuvCapturer20queueSourceMonoImageERN7android2spINS_16IMfllImageBufferEEE() called");
    return 0;
}

/* Demangled: std::__1::deque<void*, std::__1::allocator<void*> >::__add_back_capacity(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIPvNS_9allocatorIS1_EEE19__add_back_capacityEm(void) {
    ALOGD("_ZNSt3__15dequeIPvNS_9allocatorIS1_EEE19__add_back_capacityEm() called");
    return 0;
}

/* Demangled: mfll::MfllCore::syncWaitDone(mfll::MfllSyncObj*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore12syncWaitDoneEPNS_11MfllSyncObjE(void) {
    ALOGD("_ZN4mfll8MfllCore12syncWaitDoneEPNS_11MfllSyncObjE() called");
    return 0;
}

/* Demangled: mfll::MfllCore::getInputYuvFmtYuvGolden() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4mfll8MfllCore23getInputYuvFmtYuvGoldenEv(void) {
    ALOGD("_ZNK4mfll8MfllCore23getInputYuvFmtYuvGoldenEv() called");
    return 0;
}

/* Demangled: mfll::MfllCapturer::captureFrames(unsigned int, std::__1::vector<android::sp<mfll::IMfllImageBuffer>*, std::__1::allocator<android::sp<mfll::IMfllImageBuffer>*> >&, std::__1::vector<android::sp<mfll::IMfllImageBuffer>*, std::__1::allocator<android::sp<mfll::IMfllImageBuffer>*> >&, std::__1::vector<mfll::MfllMotionVector*, std::__1::allocator<mfll::MfllMotionVector*> >&, std::__1::vector<int, std::__1::allocator<int> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllCapturer13captureFramesEjRNSt3__16vectorIPN7android2spINS_16IMfllImageBufferEEENS1_9allocatorIS7_EEEESB_RNS2_IPNS_16MfllMotionVectorENS8_ISD_EEEERNS2_IiNS8_IiEEEE(void) {
    ALOGD("_ZN4mfll12MfllCapturer13captureFramesEjRNSt3__16vectorIPN7android2spINS_16IMfllImageBufferEEENS1_9allocatorIS7_EEEESB_RNS2_IPNS_16MfllMotionVectorENS8_ISD_EEEERNS2_IiNS8_IiEEEE() called");
    return 0;
}

/* Demangled: mfll::MfllExifInfo::~MfllExifInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllExifInfoD0Ev(void) {
    ALOGD("_ZN4mfll12MfllExifInfoD0Ev() called");
    return 0;
}

/* Demangled: mfll::MfllImageBuffer::releaseBufferNoLock() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllImageBuffer19releaseBufferNoLockEv(void) {
    ALOGD("_ZN4mfll15MfllImageBuffer19releaseBufferNoLockEv() called");
    return 0;
}

/* Demangled: mfll::MfllMfb::convertYuvFormatByMdp(mfll::IMfllImageBuffer*, mfll::IMfllImageBuffer*, mfll::IMfllImageBuffer*, mfll::MfllRect const&, mfll::MfllRect const&, mfll::YuvStage) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll7MfllMfb21convertYuvFormatByMdpEPNS_16IMfllImageBufferES2_S2_RKNS_8MfllRectES5_NS_8YuvStageE(void) {
    ALOGD("_ZN4mfll7MfllMfb21convertYuvFormatByMdpEPNS_16IMfllImageBufferES2_S2_RKNS_8MfllRectES5_NS_8YuvStageE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: __atomic_store */
extern "C" __attribute__((visibility("default"))) int fn___atomic_store(void) __asm__("__atomic_store");
int fn___atomic_store(void) {
    ALOGD("__atomic_store() called");
    return 0;
}

/* Demangled: mfll::IMfllImageBufferQueue::tryGetInstance(mfll::IMfllImageBuffer_Flag) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll21IMfllImageBufferQueue14tryGetInstanceENS_21IMfllImageBuffer_FlagE(void) {
    ALOGD("_ZN4mfll21IMfllImageBufferQueue14tryGetInstanceENS_21IMfllImageBuffer_FlagE() called");
    return 0;
}

/* Demangled: mfll::MfllCore::do_MotionEstimation(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore19do_MotionEstimationEPv(void) {
    ALOGD("_ZN4mfll8MfllCore19do_MotionEstimationEPv() called");
    return 0;
}

/* Demangled: mfll::MfllCapturer::dispatchDoneEvent(mfll::EventType const&, mfll::MfllEventStatus&, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllCapturer17dispatchDoneEventERKNS_9EventTypeERNS_15MfllEventStatusEPvS6_(void) {
    ALOGD("_ZN4mfll12MfllCapturer17dispatchDoneEventERKNS_9EventTypeERNS_15MfllEventStatusEPvS6_() called");
    return 0;
}

/* Exported Object: vtable for mfll::IMfllCore */
extern "C" __attribute__((visibility("default"))) void* _ZTVN4mfll9IMfllCoreE = NULL;

/* Exported Object: vtable for mfll::MfllProperty */
extern "C" __attribute__((visibility("default"))) void* _ZTVN4mfll12MfllPropertyE = NULL;

/* Demangled: mfll::MfllCapturer::dequeFullSizeRaw() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllCapturer16dequeFullSizeRawEv(void) {
    ALOGD("_ZN4mfll12MfllCapturer16dequeFullSizeRawEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<mfll::MfllOperationSync::JOB*, std::__1::allocator<mfll::MfllOperationSync::JOB*> >::push_front(mfll::MfllOperationSync::JOB*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN4mfll17MfllOperationSync3JOBENS_9allocatorIS4_EEE10push_frontEOS4_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN4mfll17MfllOperationSync3JOBENS_9allocatorIS4_EEE10push_frontEOS4_() called");
    return 0;
}

/* Demangled: mfll::MfllCore2p5::createMixDebugBuffer(android::sp<mfll::IMfllImageBuffer>) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll11MfllCore2p520createMixDebugBufferEN7android2spINS_16IMfllImageBufferEEE(void) {
    ALOGD("_ZN4mfll11MfllCore2p520createMixDebugBufferEN7android2spINS_16IMfllImageBufferEEE() called");
    return 0;
}

/* Demangled: mfll::MfllFeatureDump::dumpBaseStage(mfll::IMfllCore*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllFeatureDump13dumpBaseStageEPNS_9IMfllCoreE(void) {
    ALOGD("_ZN4mfll15MfllFeatureDump13dumpBaseStageEPNS_9IMfllCoreE() called");
    return 0;
}

/* Demangled: mfll::MfllFeatureDump::~MfllFeatureDump() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllFeatureDumpD0Ev(void) {
    ALOGD("_ZN4mfll15MfllFeatureDumpD0Ev() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<mfll::MfllErr (mfll::IMfllExifInfo*, std::__1::deque<void*, std::__1::allocator<void*> > const&)> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<mfll::MfllErr (mfll::IMfllExifInfo*, std::__1::deque<void*, std::__1::allocator<void*> > const&)> >, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<mfll::MfllErr (mfll::IMfllExifInfo*, std::__1::deque<void*, std::__1::allocator<void*> > const&)> >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<mfll::MfllErr (mfll::IMfllExifInfo*, std::__1::deque<void*, std::__1::allocator<void*> > const&)> >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<mfll::MfllErr (mfll::IMfllExifInfo*, std::__1::deque<void*, std::__1::allocator<void*> > const&)> > > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::function<mfll::MfllErr (mfll::IMfllExifInfo*, std::__1::deque<void*, std::__1::allocator<void*> > const&)> > const&>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::function<mfll::MfllErr (mfll::IMfllExifInfo*, std::__1::deque<void*, std::__1::allocator<void*> > const&)> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN4mfll7MfllErrEPNS9_13IMfllExifInfoERKNS_5dequeIPvNS5_ISE_EEEEEEEEENS_22__unordered_map_hasherIS7_SL_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SL_NS_8equal_toIS7_EELb1EEENS5_ISL_EEE25__emplace_unique_key_argsIS7_JRKNS_4pairIKS7_SK_EEEEENSX_INS_15__hash_iteratorIPNS_11__hash_nodeISL_SE_EEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN4mfll7MfllErrEPNS9_13IMfllExifInfoERKNS_5dequeIPvNS5_ISE_EEEEEEEEENS_22__unordered_map_hasherIS7_SL_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SL_NS_8equal_toIS7_EELb1EEENS5_ISL_EEE25__emplace_unique_key_argsIS7_JRKNS_4pairIKS7_SK_EEEEENSX_INS_15__hash_iteratorIPNS_11__hash_nodeISL_SE_EEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: mfll::MfllMfb::MfllMfb() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll7MfllMfbC2Ev(void) {
    ALOGD("_ZN4mfll7MfllMfbC2Ev() called");
    return 0;
}

/* Demangled: __unordtf2 */
extern "C" __attribute__((visibility("default"))) int fn___unordtf2(void) __asm__("__unordtf2");
int fn___unordtf2(void) {
    ALOGD("__unordtf2() called");
    return 0;
}

/* Demangled: libat_lock_n */
extern "C" __attribute__((visibility("default"))) int libat_lock_n(void) {
    ALOGD("libat_lock_n() called");
    return 0;
}

/* Demangled: mfll::MfllFeatureDump::dump_image(mfll::IMfllImageBuffer*, mfll::MfllFeatureDump::tagDumpStage const&, char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllFeatureDump10dump_imageEPNS_16IMfllImageBufferERKNS0_12tagDumpStageEPKci(void) {
    ALOGD("_ZN4mfll15MfllFeatureDump10dump_imageEPNS_16IMfllImageBufferERKNS0_12tagDumpStageEPKci() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::sync() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<mfll::IMfllImageBuffer_Flag, std::__1::weak_ptr<mfll::IMfllImageBufferQueue> >, std::__1::__unordered_map_hasher<mfll::IMfllImageBuffer_Flag, std::__1::__hash_value_type<mfll::IMfllImageBuffer_Flag, std::__1::weak_ptr<mfll::IMfllImageBufferQueue> >, std::__1::hash<mfll::IMfllImageBuffer_Flag>, true>, std::__1::__unordered_map_equal<mfll::IMfllImageBuffer_Flag, std::__1::__hash_value_type<mfll::IMfllImageBuffer_Flag, std::__1::weak_ptr<mfll::IMfllImageBufferQueue> >, std::__1::equal_to<mfll::IMfllImageBuffer_Flag>, true>, std::__1::allocator<std::__1::__hash_value_type<mfll::IMfllImageBuffer_Flag, std::__1::weak_ptr<mfll::IMfllImageBufferQueue> > > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN4mfll21IMfllImageBuffer_FlagENS_8weak_ptrINS2_21IMfllImageBufferQueueEEEEENS_22__unordered_map_hasherIS3_S7_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S7_NS_8equal_toIS3_EELb1EEENS_9allocatorIS7_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIN4mfll21IMfllImageBuffer_FlagENS_8weak_ptrINS2_21IMfllImageBufferQueueEEEEENS_22__unordered_map_hasherIS3_S7_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S7_NS_8equal_toIS3_EELb1EEENS_9allocatorIS7_EEE6rehashEm() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::shared_ptr<char> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<char> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<char> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::shared_ptr<char> > > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIcEEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIcEEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE6rehashEm() called");
    return 0;
}

/* Demangled: mfll::MfllCore::init(mfll::MfllConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore4initERKNS_10MfllConfigE(void) {
    ALOGD("_ZN4mfll8MfllCore4initERKNS_10MfllConfigE() called");
    return 0;
}

/* Demangled: mfll::MfllCore2::createConfidenceMap(unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll9MfllCore219createConfidenceMapEmm(void) {
    ALOGD("_ZN4mfll9MfllCore219createConfidenceMapEmm() called");
    return 0;
}

/* Demangled: mfll::MfllProperty::getDropNum() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllProperty10getDropNumEv(void) {
    ALOGD("_ZN4mfll12MfllProperty10getDropNumEv() called");
    return 0;
}

/* Demangled: mfll::MfllCore::doAllocYuvGolden(long) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore16doAllocYuvGoldenEl(void) {
    ALOGD("_ZN4mfll8MfllCore16doAllocYuvGoldenEl() called");
    return 0;
}

/* Demangled: mfll::MfllCore::setNvramProvider(android::sp<mfll::IMfllNvram> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore16setNvramProviderERKN7android2spINS_10IMfllNvramEEE(void) {
    ALOGD("_ZN4mfll8MfllCore16setNvramProviderERKN7android2spINS_10IMfllNvramEEE() called");
    return 0;
}

/* Exported Object: vtable for mfll::MfhrCore2 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN4mfll9MfhrCore2E = NULL;

/* Demangled: mfll::MfllCore::setMfb(android::sp<mfll::IMfllMfb> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore6setMfbERKN7android2spINS_8IMfllMfbEEE(void) {
    ALOGD("_ZN4mfll8MfllCore6setMfbERKN7android2spINS_8IMfllMfbEEE() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_ofstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE = NULL;

/* Exported Object: typeinfo name for std::logic_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt11logic_error = NULL;

/* Demangled: mfll::MfllCore::doCapture(long) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore9doCaptureEl(void) {
    ALOGD("_ZN4mfll8MfllCore9doCaptureEl() called");
    return 0;
}

/* Demangled: mfll::MfllFeatureFeed::~MfllFeatureFeed() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllFeatureFeedD0Ev(void) {
    ALOGD("_ZN4mfll15MfllFeatureFeedD0Ev() called");
    return 0;
}

/* Demangled: mfll::MfllCore2p5::do_MotionEstimation(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll11MfllCore2p519do_MotionEstimationEPv(void) {
    ALOGD("_ZN4mfll11MfllCore2p519do_MotionEstimationEPv() called");
    return 0;
}

/* Demangled: mfll::MfhrCore2::setBypassOption(mfll::MfllBypassOption const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll9MfhrCore215setBypassOptionERKNS_16MfllBypassOptionE(void) {
    ALOGD("_ZN4mfll9MfhrCore215setBypassOptionERKNS_16MfllBypassOptionE() called");
    return 0;
}

/* Exported Object: vtable for mfll::MfllBss */
extern "C" __attribute__((visibility("default"))) void* _ZTVN4mfll7MfllBssE = NULL;

/* Demangled: mfll::MfllMemc::motionCompensation() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllMemc18motionCompensationEv(void) {
    ALOGD("_ZN4mfll8MfllMemc18motionCompensationEv() called");
    return 0;
}

/* Demangled: mfll::MfllMfb::getMainAppMetaLocked() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4mfll7MfllMfb20getMainAppMetaLockedEv(void) {
    ALOGD("_ZNK4mfll7MfllMfb20getMainAppMetaLockedEv() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::NSIoPipe::Input> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam8NSIoPipe5InputEEE = NULL;

/* Demangled: android::sp<mfll::IMfllImageBuffer>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN4mfll16IMfllImageBufferEED2Ev(void) {
    ALOGD("_ZN7android2spIN4mfll16IMfllImageBufferEED2Ev() called");
    return 0;
}

/* Exported Object: typeinfo for std::exception */
extern "C" __attribute__((visibility("default"))) void* _ZTISt9exception = NULL;

/* Demangled: __subtf3 */
extern "C" __attribute__((visibility("default"))) int fn___subtf3(void) __asm__("__subtf3");
int fn___subtf3(void) {
    ALOGD("__subtf3() called");
    return 0;
}

/* Demangled: mfll::MfllCore::syncAnnounceTrigger(mfll::MfllSyncObj*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore19syncAnnounceTriggerEPNS_11MfllSyncObjE(void) {
    ALOGD("_ZN4mfll8MfllCore19syncAnnounceTriggerEPNS_11MfllSyncObjE() called");
    return 0;
}

/* Demangled: mfll::MfllCore2p5::do_MotionCompensation(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll11MfllCore2p521do_MotionCompensationEPv(void) {
    ALOGD("_ZN4mfll11MfllCore2p521do_MotionCompensationEPv() called");
    return 0;
}

/* Demangled: mfll::MfllNvram::~MfllNvram() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll9MfllNvramD1Ev(void) {
    ALOGD("_ZN4mfll9MfllNvramD1Ev() called");
    return 0;
}

/* Demangled: mfll::MfllCore::registerEventListenerNoLock(android::sp<mfll::IMfllEventListener> const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore27registerEventListenerNoLockERKN7android2spINS_18IMfllEventListenerEEEi(void) {
    ALOGD("_ZN4mfll8MfllCore27registerEventListenerNoLockERKN7android2spINS_18IMfllEventListenerEEEi() called");
    return 0;
}

/* Demangled: mfll::MfllFeatureMrp::releaseStageMixing(mfll::IMfllCore*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll14MfllFeatureMrp18releaseStageMixingEPNS_9IMfllCoreE(void) {
    ALOGD("_ZN4mfll14MfllFeatureMrp18releaseStageMixingEPNS_9IMfllCoreE() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi() called");
    return 0;
}

/* Demangled: mfll::MfllProperty::isForceMfll() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllProperty11isForceMfllEv(void) {
    ALOGD("_ZN4mfll12MfllProperty11isForceMfllEv() called");
    return 0;
}

/* Demangled: mfll::MfllCore::doMfll() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore6doMfllEv(void) {
    ALOGD("_ZN4mfll8MfllCore6doMfllEv() called");
    return 0;
}

/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::__append(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE8__appendEm(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE8__appendEm() called");
    return 0;
}

/* Demangled: mfll::MfllCore2::retrieveBuffer(mfll::MfllBuffer const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll9MfllCore214retrieveBufferERKNS_10MfllBufferEi(void) {
    ALOGD("_ZN4mfll9MfllCore214retrieveBufferERKNS_10MfllBufferEi() called");
    return 0;
}

/* Demangled: mfll::MfllYuvCapturer::captureFrames(unsigned int, std::__1::vector<android::sp<mfll::IMfllImageBuffer>*, std::__1::allocator<android::sp<mfll::IMfllImageBuffer>*> >&, std::__1::vector<android::sp<mfll::IMfllImageBuffer>*, std::__1::allocator<android::sp<mfll::IMfllImageBuffer>*> >&, std::__1::vector<mfll::MfllMotionVector*, std::__1::allocator<mfll::MfllMotionVector*> >&, std::__1::vector<int, std::__1::allocator<int> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllYuvCapturer13captureFramesEjRNSt3__16vectorIPN7android2spINS_16IMfllImageBufferEEENS1_9allocatorIS7_EEEESB_RNS2_IPNS_16MfllMotionVectorENS8_ISD_EEEERNS2_IiNS8_IiEEEE(void) {
    ALOGD("_ZN4mfll15MfllYuvCapturer13captureFramesEjRNSt3__16vectorIPN7android2spINS_16IMfllImageBufferEEENS1_9allocatorIS7_EEEESB_RNS2_IPNS_16MfllMotionVectorENS8_ISD_EEEERNS2_IiNS8_IiEEEE() called");
    return 0;
}

/* Demangled: mfll::MfllMfb::blend(mfll::IMfllImageBuffer*, mfll::IMfllImageBuffer*, mfll::IMfllImageBuffer*, mfll::IMfllImageBuffer*, mfll::IMfllImageBuffer*, mfll::IMfllImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll7MfllMfb5blendEPNS_16IMfllImageBufferES2_S2_S2_S2_S2_(void) {
    ALOGD("_ZN4mfll7MfllMfb5blendEPNS_16IMfllImageBufferES2_S2_S2_S2_S2_() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSCam::IMetadata**, std::__1::allocator<NSCam::IMetadata**>&>::push_back(NSCam::IMetadata**&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPPN5NSCam9IMetadataERNS_9allocatorIS4_EEE9push_backEOS4_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPPN5NSCam9IMetadataERNS_9allocatorIS4_EEE9push_backEOS4_() called");
    return 0;
}

/* Demangled: mfll::IMfllEvents::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll11IMfllEvents14createInstanceEv(void) {
    ALOGD("_ZN4mfll11IMfllEvents14createInstanceEv() called");
    return 0;
}

/* Demangled: mfll::MfllCore::_isNeedResizedYBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore21_isNeedResizedYBufferEv(void) {
    ALOGD("_ZN4mfll8MfllCore21_isNeedResizedYBufferEv() called");
    return 0;
}

/* Demangled: mfll::MfllCore::updateImageBufferQueueLimit() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore27updateImageBufferQueueLimitEv(void) {
    ALOGD("_ZN4mfll8MfllCore27updateImageBufferQueueLimitEv() called");
    return 0;
}

/* Demangled: mfll::MfllCore::_updateSingeFrameBypassConfigLocked() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore35_updateSingeFrameBypassConfigLockedEv(void) {
    ALOGD("_ZN4mfll8MfllCore35_updateSingeFrameBypassConfigLockedEv() called");
    return 0;
}

/* Demangled: mfll::IMfllGyro::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll9IMfllGyro15destroyInstanceEv(void) {
    ALOGD("_ZN4mfll9IMfllGyro15destroyInstanceEv() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: mfll::MfllCore::lockSyncObject(mfll::MfllSyncObj*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore14lockSyncObjectEPNS_11MfllSyncObjE(void) {
    ALOGD("_ZN4mfll8MfllCore14lockSyncObjectEPNS_11MfllSyncObjE() called");
    return 0;
}

/* Demangled: mfll::MfllNvram::getChunkMfnrTh(unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll9MfllNvram14getChunkMfnrThEPm(void) {
    ALOGD("_ZN4mfll9MfllNvram14getChunkMfnrThEPm() called");
    return 0;
}

/* Demangled: __fe_raise_inexact */
extern "C" __attribute__((visibility("default"))) int fn___fe_raise_inexact(void) __asm__("__fe_raise_inexact");
int fn___fe_raise_inexact(void) {
    ALOGD("__fe_raise_inexact() called");
    return 0;
}

/* Demangled: mfll::MfllFeaturePerf::MfllFeaturePerf() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllFeaturePerfC2Ev(void) {
    ALOGD("_ZN4mfll15MfllFeaturePerfC2Ev() called");
    return 0;
}

/* Demangled: mfll::MfllMemc::init(android::sp<mfll::IMfllNvram>&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllMemc4initERN7android2spINS_10IMfllNvramEEE(void) {
    ALOGD("_ZN4mfll8MfllMemc4initERN7android2spINS_10IMfllNvramEEE() called");
    return 0;
}

/* Demangled: mfll::MfllMfb::encodeRawToYuv(mfll::IMfllImageBuffer*, mfll::IMfllImageBuffer*, mfll::IMfllImageBuffer*, mfll::MfllRect const&, mfll::MfllRect const&, mfll::YuvStage) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll7MfllMfb14encodeRawToYuvEPNS_16IMfllImageBufferES2_S2_RKNS_8MfllRectES5_NS_8YuvStageE(void) {
    ALOGD("_ZN4mfll7MfllMfb14encodeRawToYuvEPNS_16IMfllImageBufferES2_S2_RKNS_8MfllRectES5_NS_8YuvStageE() called");
    return 0;
}

/* Demangled: mfll::MfllMfb::convertYuvFormatByMdp(NSCam::IImageBuffer*, NSCam::IImageBuffer*, NSCam::IImageBuffer*, mfll::MfllRect const&, mfll::MfllRect const&, mfll::YuvStage) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll7MfllMfb21convertYuvFormatByMdpEPN5NSCam12IImageBufferES3_S3_RKNS_8MfllRectES6_NS_8YuvStageE(void) {
    ALOGD("_ZN4mfll7MfllMfb21convertYuvFormatByMdpEPN5NSCam12IImageBufferES3_S3_RKNS_8MfllRectES6_NS_8YuvStageE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE8do_splatEPvPKvm() called");
    return 0;
}

/* Exported Object: typeinfo name for std::exception */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt9exception = NULL;

/* Demangled: __netf2 */
extern "C" __attribute__((visibility("default"))) int fn___netf2(void) __asm__("__netf2");
int fn___netf2(void) {
    ALOGD("__netf2() called");
    return 0;
}

/* Demangled: mfll::MfllProperty::getDebugLevel() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllProperty13getDebugLevelEv(void) {
    ALOGD("_ZN4mfll12MfllProperty13getDebugLevelEv() called");
    return 0;
}

/* Demangled: mfll::MfllCore::setSyncPrivateData(std::__1::deque<void*, std::__1::allocator<void*> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore18setSyncPrivateDataERKNSt3__15dequeIPvNS1_9allocatorIS3_EEEE(void) {
    ALOGD("_ZN4mfll8MfllCore18setSyncPrivateDataERKNSt3__15dequeIPvNS1_9allocatorIS3_EEEE() called");
    return 0;
}

/* Demangled: mfll::MfllEvents::registerEventListener(mfll::EventType const&, android::sp<mfll::IMfllEventListener> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll10MfllEvents21registerEventListenerERKNS_9EventTypeERKN7android2spINS_18IMfllEventListenerEEE(void) {
    ALOGD("_ZN4mfll10MfllEvents21registerEventListenerERKNS_9EventTypeERKN7android2spINS_18IMfllEventListenerEEE() called");
    return 0;
}

/* Demangled: mfll::MfllMfb::setMixDebug(android::sp<mfll::IMfllImageBuffer>) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll7MfllMfb11setMixDebugEN7android2spINS_16IMfllImageBufferEEE(void) {
    ALOGD("_ZN4mfll7MfllMfb11setMixDebugEN7android2spINS_16IMfllImageBufferEEE() called");
    return 0;
}

/* Demangled: __atomic_store_16 */
extern "C" __attribute__((visibility("default"))) int fn___atomic_store_16(void) __asm__("__atomic_store_16");
int fn___atomic_store_16(void) {
    ALOGD("__atomic_store_16() called");
    return 0;
}

/* Demangled: std::__1::vector<android::sp<mfll::IMfllEventListener>, std::__1::allocator<android::sp<mfll::IMfllEventListener> > >::insert(std::__1::__wrap_iter<android::sp<mfll::IMfllEventListener> const*>, android::sp<mfll::IMfllEventListener> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spIN4mfll18IMfllEventListenerEEENS_9allocatorIS5_EEE6insertENS_11__wrap_iterIPKS5_EERSA_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spIN4mfll18IMfllEventListenerEEENS_9allocatorIS5_EEE6insertENS_11__wrap_iterIPKS5_EERSA_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_pointer<mfll::IMfllImageBufferQueue*, std::__1::default_delete<mfll::IMfllImageBufferQueue>, std::__1::allocator<mfll::IMfllImageBufferQueue> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_pointerIPN4mfll21IMfllImageBufferQueueENS_14default_deleteIS2_EENS_9allocatorIS2_EEEE = NULL;

/* Demangled: mfll::MfllMfb::mix(mfll::IMfllImageBuffer*, mfll::IMfllImageBuffer*, mfll::IMfllImageBuffer*, mfll::IMfllImageBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll7MfllMfb3mixEPNS_16IMfllImageBufferES2_S2_S2_(void) {
    ALOGD("_ZN4mfll7MfllMfb3mixEPNS_16IMfllImageBufferES2_S2_S2_() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::NSIoPipe::FrameParams> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam8NSIoPipe11FrameParamsEEE = NULL;

/* Demangled: mfll::MfllCore::setQueueYuvFramesCounts(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore23setQueueYuvFramesCountsEj(void) {
    ALOGD("_ZN4mfll8MfllCore23setQueueYuvFramesCountsEj() called");
    return 0;
}

/* Demangled: __atomic_load */
extern "C" __attribute__((visibility("default"))) int fn___atomic_load(void) __asm__("__atomic_load");
int fn___atomic_load(void) {
    ALOGD("__atomic_load() called");
    return 0;
}

/* Demangled: _ZNSt3__15dequeIPvNS_9allocatorIS1_EEE8__appendINS_16__deque_iteratorIS1_PKS1_RS7_PKS8_lLl512EEEEEvT_SD_PNS_9enable_ifIXsr21__is_forward_iteratorISD_EE5valueEvE4typeE */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIPvNS_9allocatorIS1_EEE8__appendINS_16__deque_iteratorIS1_PKS1_RS7_PKS8_lLl512EEEEEvT_SD_PNS_9enable_ifIXsr21__is_forward_iteratorISD_EE5valueEvE4typeE(void) {
    ALOGD("_ZNSt3__15dequeIPvNS_9allocatorIS1_EEE8__appendINS_16__deque_iteratorIS1_PKS1_RS7_PKS8_lLl512EEEEEvT_SD_PNS_9enable_ifIXsr21__is_forward_iteratorISD_EE5valueEvE4typeE() called");
    return 0;
}

/* Demangled: mfll::MfllImageBuffer::getResolution(unsigned int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllImageBuffer13getResolutionERjS1_(void) {
    ALOGD("_ZN4mfll15MfllImageBuffer13getResolutionERjS1_() called");
    return 0;
}

/* Demangled: mfll::MfllMfb::mix(mfll::IMfllImageBuffer*, mfll::IMfllImageBuffer*, mfll::IMfllImageBuffer*, mfll::IMfllImageBuffer*, mfll::IMfllImageBuffer*, mfll::MfllRect const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll7MfllMfb3mixEPNS_16IMfllImageBufferES2_S2_S2_S2_RKNS_8MfllRectE(void) {
    ALOGD("_ZN4mfll7MfllMfb3mixEPNS_16IMfllImageBufferES2_S2_S2_S2_RKNS_8MfllRectE() called");
    return 0;
}

/* Demangled: mfll::MfllProperty::isFeed() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllProperty6isFeedEv(void) {
    ALOGD("_ZN4mfll12MfllProperty6isFeedEv() called");
    return 0;
}

/* Demangled: mfll::MfllCapturer::MfllCapturer() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllCapturerC2Ev(void) {
    ALOGD("_ZN4mfll12MfllCapturerC2Ev() called");
    return 0;
}

/* Demangled: mfll::MfllMfb::init(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll7MfllMfb4initEi(void) {
    ALOGD("_ZN4mfll7MfllMfb4initEi() called");
    return 0;
}

/* Demangled: mfll::MfllCore::registerEventListener(android::sp<mfll::IMfllEventListener> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore21registerEventListenerERKN7android2spINS_18IMfllEventListenerEEE(void) {
    ALOGD("_ZN4mfll8MfllCore21registerEventListenerERKN7android2spINS_18IMfllEventListenerEEE() called");
    return 0;
}

/* Demangled: mfll::MfllCore::getInputYuvFmtYuvQ() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4mfll8MfllCore18getInputYuvFmtYuvQEv(void) {
    ALOGD("_ZNK4mfll8MfllCore18getInputYuvFmtYuvQEv() called");
    return 0;
}

/* Demangled: mfll::MfllCore2p5::MfllCore2p5() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll11MfllCore2p5C2Ev(void) {
    ALOGD("_ZN4mfll11MfllCore2p5C2Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<mfll::IMfllEventListener>, std::__1::allocator<android::sp<mfll::IMfllEventListener> > >::__push_back_slow_path<android::sp<mfll::IMfllEventListener> const&>(android::sp<mfll::IMfllEventListener> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spIN4mfll18IMfllEventListenerEEENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spIN4mfll18IMfllEventListenerEEENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_() called");
    return 0;
}

/* Demangled: mfll::MfllFeatureMrp::~MfllFeatureMrp() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll14MfllFeatureMrpD0Ev(void) {
    ALOGD("_ZN4mfll14MfllFeatureMrpD0Ev() called");
    return 0;
}

/* Demangled: mfll::MfllCapturer::setMfllCore(mfll::IMfllCore*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllCapturer11setMfllCoreEPNS_9IMfllCoreE(void) {
    ALOGD("_ZN4mfll12MfllCapturer11setMfllCoreEPNS_9IMfllCoreE() called");
    return 0;
}

/* Demangled: mfll::fix_mix_yuy2(unsigned char*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12fix_mix_yuy2EPhii(void) {
    ALOGD("_ZN4mfll12fix_mix_yuy2EPhii() called");
    return 0;
}

/* Demangled: mfll::IMfllMfb::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8IMfllMfb15destroyInstanceEv(void) {
    ALOGD("_ZN4mfll8IMfllMfb15destroyInstanceEv() called");
    return 0;
}

/* Demangled: mfll::MfllCore::~MfllCore() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCoreD2Ev(void) {
    ALOGD("_ZN4mfll8MfllCoreD2Ev() called");
    return 0;
}

/* Demangled: mfll::MfllCore2p5::retrieveBuffer(mfll::MfllBuffer const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll11MfllCore2p514retrieveBufferERKNS_10MfllBufferEi(void) {
    ALOGD("_ZN4mfll11MfllCore2p514retrieveBufferERKNS_10MfllBufferEi() called");
    return 0;
}

/* Demangled: mfll::MfllYuvCapturer::setMfllCore(mfll::IMfllCore*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllYuvCapturer11setMfllCoreEPNS_9IMfllCoreE(void) {
    ALOGD("_ZN4mfll15MfllYuvCapturer11setMfllCoreEPNS_9IMfllCoreE() called");
    return 0;
}

/* Demangled: std::__1::deque<mfll::MfllImageBuffer*, std::__1::allocator<mfll::MfllImageBuffer*> >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIPN4mfll15MfllImageBufferENS_9allocatorIS3_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeIPN4mfll15MfllImageBufferENS_9allocatorIS3_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: mfll::MfllMemc::~MfllMemc() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllMemcD0Ev(void) {
    ALOGD("_ZN4mfll8MfllMemcD0Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: mfll::MfllCapturer::registerEventDispatcher(android::sp<mfll::IMfllEvents> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllCapturer23registerEventDispatcherERKN7android2spINS_11IMfllEventsEEE(void) {
    ALOGD("_ZN4mfll12MfllCapturer23registerEventDispatcherERKN7android2spINS_11IMfllEventsEEE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NS3Av3::MetaSet_T*, std::__1::allocator<NS3Av3::MetaSet_T*> >::push_front(NS3Av3::MetaSet_T*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN6NS3Av39MetaSet_TENS_9allocatorIS3_EEE10push_frontEOS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN6NS3Av39MetaSet_TENS_9allocatorIS3_EEE10push_frontEOS3_() called");
    return 0;
}

/* Demangled: mfll::IMfllCore* mfll::MAKE_MFNR_CORE<2, 5, 1>() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll14MAKE_MFNR_COREILi2ELi5ELi1EEEPNS_9IMfllCoreEv(void) {
    ALOGD("_ZN4mfll14MAKE_MFNR_COREILi2ELi5ELi1EEEPNS_9IMfllCoreEv() called");
    return 0;
}

/* Demangled: mfll::MfllProperty::getBss() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllProperty6getBssEv(void) {
    ALOGD("_ZN4mfll12MfllProperty6getBssEv() called");
    return 0;
}

/* Demangled: mfll::MfllFeatureMrp::releaseStageBlending(mfll::IMfllCore*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll14MfllFeatureMrp20releaseStageBlendingEPNS_9IMfllCoreEj(void) {
    ALOGD("_ZN4mfll14MfllFeatureMrp20releaseStageBlendingEPNS_9IMfllCoreEj() called");
    return 0;
}

/* Demangled: mfll::MfllFeatureMrp::getListenedEventTypes() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll14MfllFeatureMrp21getListenedEventTypesEv(void) {
    ALOGD("_ZN4mfll14MfllFeatureMrp21getListenedEventTypesEv() called");
    return 0;
}

/* Exported Object: vtable for mfll::IMfllMfb */
extern "C" __attribute__((visibility("default"))) void* _ZTVN4mfll8IMfllMfbE = NULL;

/* Exported Object: vtable for android::Vector<NSCam::NSIoPipe::MCrpRsInfo> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEEE = NULL;

/* Exported Object: vtable for mfll::MfllNvram */
extern "C" __attribute__((visibility("default"))) void* _ZTVN4mfll9MfllNvramE = NULL;

/* Demangled: mfll::MfllCore::getMixingBufferType() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore19getMixingBufferTypeEv(void) {
    ALOGD("_ZN4mfll8MfllCore19getMixingBufferTypeEv() called");
    return 0;
}

/* Demangled: mfll::MfllCore2::MfllCore2() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll9MfllCore2C1Ev(void) {
    ALOGD("_ZN4mfll9MfllCore2C1Ev() called");
    return 0;
}

/* Demangled: mfll::MfllYuvCapturer::setPostNrType(mfll::NoiseReductionType const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllYuvCapturer13setPostNrTypeERKNS_18NoiseReductionTypeE(void) {
    ALOGD("_ZN4mfll15MfllYuvCapturer13setPostNrTypeERKNS_18NoiseReductionTypeE() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<mfll::MfllErr (mfll::IMfllExifInfo*, std::__1::deque<void*, std::__1::allocator<void*> > const&)> >, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<mfll::MfllErr (mfll::IMfllExifInfo*, std::__1::deque<void*, std::__1::allocator<void*> > const&)> >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<mfll::MfllErr (mfll::IMfllExifInfo*, std::__1::deque<void*, std::__1::allocator<void*> > const&)> >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<mfll::MfllErr (mfll::IMfllExifInfo*, std::__1::deque<void*, std::__1::allocator<void*> > const&)> > > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN4mfll7MfllErrEPNS9_13IMfllExifInfoERKNS_5dequeIPvNS5_ISE_EEEEEEEEENS_22__unordered_map_hasherIS7_SL_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SL_NS_8equal_toIS7_EELb1EEENS5_ISL_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN4mfll7MfllErrEPNS9_13IMfllExifInfoERKNS_5dequeIPvNS5_ISE_EEEEEEEEENS_22__unordered_map_hasherIS7_SL_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SL_NS_8equal_toIS7_EELb1EEENS5_ISL_EEE6rehashEm() called");
    return 0;
}

/* Demangled: mfll::MfllStrategy::~MfllStrategy() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllStrategyD0Ev(void) {
    ALOGD("_ZN4mfll12MfllStrategyD0Ev() called");
    return 0;
}

/* Demangled: mfll::MfllCore::MfllCore() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCoreC1Ev(void) {
    ALOGD("_ZN4mfll8MfllCoreC1Ev() called");
    return 0;
}

/* Demangled: mfll::MfllCore::getCurrentIso() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4mfll8MfllCore13getCurrentIsoEv(void) {
    ALOGD("_ZNK4mfll8MfllCore13getCurrentIsoEv() called");
    return 0;
}

/* Demangled: mfll::MfllEvents::removeEventListener(mfll::EventType const&, mfll::IMfllEventListener const*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll10MfllEvents19removeEventListenerERKNS_9EventTypeEPKNS_18IMfllEventListenerE(void) {
    ALOGD("_ZN4mfll10MfllEvents19removeEventListenerERKNS_9EventTypeEPKNS_18IMfllEventListenerE() called");
    return 0;
}

/* Demangled: mfll::MfllProperty::~MfllProperty() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllPropertyD2Ev(void) {
    ALOGD("_ZN4mfll12MfllPropertyD2Ev() called");
    return 0;
}

/* Demangled: mfll::MfllFeatureMrp::doneEvent(mfll::EventType, mfll::MfllEventStatus&, void*, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll14MfllFeatureMrp9doneEventENS_9EventTypeERNS_15MfllEventStatusEPvS4_S4_(void) {
    ALOGD("_ZN4mfll14MfllFeatureMrp9doneEventENS_9EventTypeERNS_15MfllEventStatusEPvS4_S4_() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: __letf2 */
extern "C" __attribute__((visibility("default"))) int fn___letf2(void) __asm__("__letf2");
int fn___letf2(void) {
    ALOGD("__letf2() called");
    return 0;
}

/* Demangled: mfll::IMfllCore::createInstance(int, int, mfll::IMfllCore::Type) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll9IMfllCore14createInstanceEiiNS0_4TypeE(void) {
    ALOGD("_ZN4mfll9IMfllCore14createInstanceEiiNS0_4TypeE() called");
    return 0;
}

/* Demangled: mfll::MfllFeatureDump::dumpMfbStage(mfll::IMfllCore*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllFeatureDump12dumpMfbStageEPNS_9IMfllCoreEi(void) {
    ALOGD("_ZN4mfll15MfllFeatureDump12dumpMfbStageEPNS_9IMfllCoreEi() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::deque<char const*, std::__1::allocator<char const*> >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIPKcNS_9allocatorIS2_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeIPKcNS_9allocatorIS2_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: mfll::MfllProperty::getForceGmvZero() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllProperty15getForceGmvZeroEv(void) {
    ALOGD("_ZN4mfll12MfllProperty15getForceGmvZeroEv() called");
    return 0;
}

/* Demangled: mfll::MfllCapturer::dispatchOnEvent(mfll::EventType const&, mfll::MfllEventStatus&, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllCapturer15dispatchOnEventERKNS_9EventTypeERNS_15MfllEventStatusEPvS6_(void) {
    ALOGD("_ZN4mfll12MfllCapturer15dispatchOnEventERKNS_9EventTypeERNS_15MfllEventStatusEPvS6_() called");
    return 0;
}

/* Demangled: mfll::MfllCapturer::dequeGmv() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllCapturer8dequeGmvEv(void) {
    ALOGD("_ZN4mfll12MfllCapturer8dequeGmvEv() called");
    return 0;
}

/* Demangled: mfll::MfllYuvCapturer::~MfllYuvCapturer() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllYuvCapturerD1Ev(void) {
    ALOGD("_ZN4mfll15MfllYuvCapturerD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<void**, std::__1::allocator<void**> >::push_back(void**&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPPvNS_9allocatorIS2_EEE9push_backEOS2_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPPvNS_9allocatorIS2_EEE9push_backEOS2_() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: mfll::MfllEvents::~MfllEvents() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll10MfllEventsD0Ev(void) {
    ALOGD("_ZN4mfll10MfllEventsD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, unsigned int>, std::__1::__map_value_compare<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__value_type<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, unsigned int>, std::__1::less<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, unsigned int> > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, unsigned int>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_5tupleIJNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEEEjEENS_19__map_value_compareIS9_SA_NS_4lessIS9_EELb1EEENS6_ISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_5tupleIJNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEEEjEENS_19__map_value_compareIS9_SA_NS_4lessIS9_EELb1EEENS6_ISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE() called");
    return 0;
}

/* Demangled: mfll::MfllCapturer::dequeLcsoRaw() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllCapturer12dequeLcsoRawEv(void) {
    ALOGD("_ZN4mfll12MfllCapturer12dequeLcsoRawEv() called");
    return 0;
}

/* Demangled: mfll::MfllImageBuffer::MfllImageBuffer(char const*, mfll::IMfllImageBuffer_Flag) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllImageBufferC1EPKcNS_21IMfllImageBuffer_FlagE(void) {
    ALOGD("_ZN4mfll15MfllImageBufferC1EPKcNS_21IMfllImageBuffer_FlagE() called");
    return 0;
}

/* Demangled: mfll::MfllProperty::MfllProperty() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllPropertyC1Ev(void) {
    ALOGD("_ZN4mfll12MfllPropertyC1Ev() called");
    return 0;
}

/* Demangled: mfll::MfllCore::doEncodeYuvBase(long) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore15doEncodeYuvBaseEl(void) {
    ALOGD("_ZN4mfll8MfllCore15doEncodeYuvBaseEl() called");
    return 0;
}

/* Demangled: mfll::MfllCore::isShooted() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore9isShootedEv(void) {
    ALOGD("_ZN4mfll8MfllCore9isShootedEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::future<void>*, std::__1::allocator<std::__1::future<void>*>&>::push_back(std::__1::future<void>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_6futureIvEERNS_9allocatorIS3_EEE9push_backEOS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_6futureIvEERNS_9allocatorIS3_EEE9push_backEOS3_() called");
    return 0;
}

/* Demangled: mfll::IMfllBss::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8IMfllBss15destroyInstanceEv(void) {
    ALOGD("_ZN4mfll8IMfllBss15destroyInstanceEv() called");
    return 0;
}

/* Demangled: mfll::MfllMfb::encodeRawToYuv(NSCam::IImageBuffer*, NSCam::IImageBuffer*, NSCam::IImageBuffer*, NSCam::IImageBuffer*, mfll::MfllRect const&, mfll::MfllRect const&, mfll::MfllRect const&, mfll::YuvStage const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll7MfllMfb14encodeRawToYuvEPN5NSCam12IImageBufferES3_S3_S3_RKNS_8MfllRectES6_S6_RKNS_8YuvStageE(void) {
    ALOGD("_ZN4mfll7MfllMfb14encodeRawToYuvEPN5NSCam12IImageBufferES3_S3_S3_RKNS_8MfllRectES6_S6_RKNS_8YuvStageE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for mfll::MfllMemc */
extern "C" __attribute__((visibility("default"))) void* _ZTVN4mfll8MfllMemcE = NULL;

/* Demangled: mfll::MfllCore::do_AllocYuvGolden(long) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore17do_AllocYuvGoldenEl(void) {
    ALOGD("_ZN4mfll8MfllCore17do_AllocYuvGoldenEl() called");
    return 0;
}

/* Demangled: mfll::MfllCore::tellsFutureAllocateMemory() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore25tellsFutureAllocateMemoryEv(void) {
    ALOGD("_ZN4mfll8MfllCore25tellsFutureAllocateMemoryEv() called");
    return 0;
}

/* Demangled: mfll::MfllCore::getInputYuvFmtYuvMcWorking() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4mfll8MfllCore26getInputYuvFmtYuvMcWorkingEv(void) {
    ALOGD("_ZNK4mfll8MfllCore26getInputYuvFmtYuvMcWorkingEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_ofstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: mfll::MfllImageBuffer::~MfllImageBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllImageBufferD2Ev(void) {
    ALOGD("_ZN4mfll15MfllImageBufferD2Ev() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<NS3Av3::MetaSet_T, std::__1::allocator<NS3Av3::MetaSet_T> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseIN6NS3Av39MetaSet_TENS_9allocatorIS2_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseIN6NS3Av39MetaSet_TENS_9allocatorIS2_EEE5clearEv() called");
    return 0;
}

/* Demangled: mfll::MfllCore::updateExifInfo(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore14updateExifInfoEjj(void) {
    ALOGD("_ZN4mfll8MfllCore14updateExifInfoEjj() called");
    return 0;
}

/* Demangled: mfll::MfllCore::doAllocWeighting(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore16doAllocWeightingEPv(void) {
    ALOGD("_ZN4mfll8MfllCore16doAllocWeightingEPv() called");
    return 0;
}

/* Demangled: mfll::MfllCore::do_AllocRrzoBuffer(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore18do_AllocRrzoBufferEPv(void) {
    ALOGD("_ZN4mfll8MfllCore18do_AllocRrzoBufferEPv() called");
    return 0;
}

/* Demangled: mfll::MfllCore::getCurrentShutter() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4mfll8MfllCore17getCurrentShutterEv(void) {
    ALOGD("_ZNK4mfll8MfllCore17getCurrentShutterEv() called");
    return 0;
}

/* Demangled: void std::__1::lock<std::__1::mutex, std::__1::mutex>(std::__1::mutex&, std::__1::mutex&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14lockINS_5mutexES1_EEvRT_RT0_(void) {
    ALOGD("_ZNSt3__14lockINS_5mutexES1_EEvRT_RT0_() called");
    return 0;
}

/* Demangled: mfll::MfllCore2p5::do_Blending(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll11MfllCore2p511do_BlendingEPv(void) {
    ALOGD("_ZN4mfll11MfllCore2p511do_BlendingEPv() called");
    return 0;
}

/* Demangled: mfll::MfllNvram::init(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll9MfllNvram4initEi(void) {
    ALOGD("_ZN4mfll9MfllNvram4initEi() called");
    return 0;
}

/* Demangled: mfll::IMfllStrategy::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll13IMfllStrategy14createInstanceEv(void) {
    ALOGD("_ZN4mfll13IMfllStrategy14createInstanceEv() called");
    return 0;
}

/* Demangled: mfll::MfllOperationSync::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll17MfllOperationSync11getInstanceEv(void) {
    ALOGD("_ZN4mfll17MfllOperationSync11getInstanceEv() called");
    return 0;
}

/* Demangled: mfll::MfllCore::do_AllocYuvMcWorking(long) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore20do_AllocYuvMcWorkingEl(void) {
    ALOGD("_ZN4mfll8MfllCore20do_AllocYuvMcWorkingEl() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<mfll::ImageBufferPack*, std::__1::allocator<mfll::ImageBufferPack*>&>::push_front(mfll::ImageBufferPack* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN4mfll15ImageBufferPackERNS_9allocatorIS3_EEE10push_frontERKS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN4mfll15ImageBufferPackERNS_9allocatorIS3_EEE10push_frontERKS3_() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<mfll::MfllOperationSync::JOB*, std::__1::allocator<mfll::MfllOperationSync::JOB*> >::push_back(mfll::MfllOperationSync::JOB*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN4mfll17MfllOperationSync3JOBENS_9allocatorIS4_EEE9push_backEOS4_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN4mfll17MfllOperationSync3JOBENS_9allocatorIS4_EEE9push_backEOS4_() called");
    return 0;
}

/* Demangled: mfll::MfllCore2p5::getVersionString() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll11MfllCore2p516getVersionStringEv(void) {
    ALOGD("_ZN4mfll11MfllCore2p516getVersionStringEv() called");
    return 0;
}

/* Demangled: mfll::MfllMfb::~MfllMfb() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll7MfllMfbD2Ev(void) {
    ALOGD("_ZN4mfll7MfllMfbD2Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::NSIoPipe::MFBConfig, std::__1::allocator<NSCam::NSIoPipe::MFBConfig> >::__push_back_slow_path<NSCam::NSIoPipe::MFBConfig const&>(NSCam::NSIoPipe::MFBConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe9MFBConfigENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe9MFBConfigENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_() called");
    return 0;
}

/* Demangled: mfll::MfllNvram::init(mfll::IMfllNvram::ConfigParams&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll9MfllNvram4initERNS_10IMfllNvram12ConfigParamsE(void) {
    ALOGD("_ZN4mfll9MfllNvram4initERNS_10IMfllNvram12ConfigParamsE() called");
    return 0;
}

/* Demangled: mfll::MfllCore::getBlendFrameSize(int&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore17getBlendFrameSizeERiS1_(void) {
    ALOGD("_ZN4mfll8MfllCore17getBlendFrameSizeERiS1_() called");
    return 0;
}

/* Demangled: libat_unlock_n */
extern "C" __attribute__((visibility("default"))) int libat_unlock_n(void) {
    ALOGD("libat_unlock_n() called");
    return 0;
}

/* Demangled: mfll::MfllCore::do_AllocQyuvBuffer(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore18do_AllocQyuvBufferEPv(void) {
    ALOGD("_ZN4mfll8MfllCore18do_AllocQyuvBufferEPv() called");
    return 0;
}

/* Demangled: mfll::MfllCore::getInputYuvFmtYuvWorking() const */
extern "C" __attribute__((visibility("default"))) int _ZNK4mfll8MfllCore24getInputYuvFmtYuvWorkingEv(void) {
    ALOGD("_ZNK4mfll8MfllCore24getInputYuvFmtYuvWorkingEv() called");
    return 0;
}

/* Exported Object: vtable for mfll::IMfllImageBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTVN4mfll16IMfllImageBufferE = NULL;

/* Demangled: mfll::IMfllImageBufferQueue::getInstance(mfll::IMfllImageBuffer_Flag) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll21IMfllImageBufferQueue11getInstanceENS_21IMfllImageBuffer_FlagE(void) {
    ALOGD("_ZN4mfll21IMfllImageBufferQueue11getInstanceENS_21IMfllImageBuffer_FlagE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<mfll::IMfllImageBufferQueue*, std::__1::default_delete<mfll::IMfllImageBufferQueue>, std::__1::allocator<mfll::IMfllImageBufferQueue> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPN4mfll21IMfllImageBufferQueueENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPN4mfll21IMfllImageBufferQueueENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: mfll::MfllCore::setCaptureResolution(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore20setCaptureResolutionEjj(void) {
    ALOGD("_ZN4mfll8MfllCore20setCaptureResolutionEjj() called");
    return 0;
}

/* Demangled: mfll::MfllCapturer::queueSourceRrzoImage(android::sp<mfll::IMfllImageBuffer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllCapturer20queueSourceRrzoImageERN7android2spINS_16IMfllImageBufferEEE(void) {
    ALOGD("_ZN4mfll12MfllCapturer20queueSourceRrzoImageERN7android2spINS_16IMfllImageBufferEEE() called");
    return 0;
}

/* Demangled: mfll::MfllMfb::MfllMfb() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll7MfllMfbC1Ev(void) {
    ALOGD("_ZN4mfll7MfllMfbC1Ev() called");
    return 0;
}

/* Demangled: mfll::MfllImageBuffer::createContinuousImageBuffer(mfll::ImageFormat const&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllImageBuffer27createContinuousImageBufferERKNS_11ImageFormatERj(void) {
    ALOGD("_ZN4mfll15MfllImageBuffer27createContinuousImageBufferERKNS_11ImageFormatERj() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<mfll::MfllOperationSync::JOB*, std::__1::allocator<mfll::MfllOperationSync::JOB*>&>::push_front(mfll::MfllOperationSync::JOB* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN4mfll17MfllOperationSync3JOBERNS_9allocatorIS4_EEE10push_frontERKS4_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN4mfll17MfllOperationSync3JOBERNS_9allocatorIS4_EEE10push_frontERKS4_() called");
    return 0;
}

/* Demangled: mfll::IMfllExifInfo::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll13IMfllExifInfo15destroyInstanceEv(void) {
    ALOGD("_ZN4mfll13IMfllExifInfo15destroyInstanceEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<NSCam::IImageBuffer**, std::__1::allocator<NSCam::IImageBuffer**>&>::push_front(NSCam::IImageBuffer** const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPPN5NSCam12IImageBufferERNS_9allocatorIS4_EEE10push_frontERKS4_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPPN5NSCam12IImageBufferERNS_9allocatorIS4_EEE10push_frontERKS4_() called");
    return 0;
}

/* Demangled: mfll::MfllCapturer::captureFrames(unsigned int, std::__1::vector<android::sp<mfll::IMfllImageBuffer>*, std::__1::allocator<android::sp<mfll::IMfllImageBuffer>*> >&, std::__1::vector<android::sp<mfll::IMfllImageBuffer>*, std::__1::allocator<android::sp<mfll::IMfllImageBuffer>*> >&, std::__1::vector<android::sp<mfll::IMfllImageBuffer>*, std::__1::allocator<android::sp<mfll::IMfllImageBuffer>*> >&, std::__1::vector<android::sp<mfll::IMfllImageBuffer>*, std::__1::allocator<android::sp<mfll::IMfllImageBuffer>*> >&, std::__1::vector<mfll::MfllMotionVector*, std::__1::allocator<mfll::MfllMotionVector*> >&, std::__1::vector<int, std::__1::allocator<int> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllCapturer13captureFramesEjRNSt3__16vectorIPN7android2spINS_16IMfllImageBufferEEENS1_9allocatorIS7_EEEESB_SB_SB_RNS2_IPNS_16MfllMotionVectorENS8_ISD_EEEERNS2_IiNS8_IiEEEE(void) {
    ALOGD("_ZN4mfll12MfllCapturer13captureFramesEjRNSt3__16vectorIPN7android2spINS_16IMfllImageBufferEEENS1_9allocatorIS7_EEEESB_SB_SB_RNS2_IPNS_16MfllMotionVectorENS8_ISD_EEEERNS2_IiNS8_IiEEEE() called");
    return 0;
}

/* Demangled: mfll::MfllImageBuffer::setImageBuffer(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllImageBuffer14setImageBufferEPv(void) {
    ALOGD("_ZN4mfll15MfllImageBuffer14setImageBufferEPv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<mfll::IMfllImageBufferQueue*, std::__1::default_delete<mfll::IMfllImageBufferQueue>, std::__1::allocator<mfll::IMfllImageBufferQueue> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPN4mfll21IMfllImageBufferQueueENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPN4mfll21IMfllImageBufferQueueENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: mfll::MfllCore::do_Capture(long) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore10do_CaptureEl(void) {
    ALOGD("_ZN4mfll8MfllCore10do_CaptureEl() called");
    return 0;
}

/* Demangled: std::__1::__deque_iterator<mfll::MfllOperationSync::JOB, mfll::MfllOperationSync::JOB*, mfll::MfllOperationSync::JOB&, mfll::MfllOperationSync::JOB**, long, 1024l> std::__1::move<mfll::MfllOperationSync::JOB, mfll::MfllOperationSync::JOB*, mfll::MfllOperationSync::JOB&, mfll::MfllOperationSync::JOB**, long, 1024l, mfll::MfllOperationSync::JOB, mfll::MfllOperationSync::JOB*, mfll::MfllOperationSync::JOB&, mfll::MfllOperationSync::JOB**, long, 1024l>(std::__1::__deque_iterator<mfll::MfllOperationSync::JOB, mfll::MfllOperationSync::JOB*, mfll::MfllOperationSync::JOB&, mfll::MfllOperationSync::JOB**, long, 1024l>, std::__1::__deque_iterator<mfll::MfllOperationSync::JOB, mfll::MfllOperationSync::JOB*, mfll::MfllOperationSync::JOB&, mfll::MfllOperationSync::JOB**, long, 1024l>, std::__1::__deque_iterator<mfll::MfllOperationSync::JOB, mfll::MfllOperationSync::JOB*, mfll::MfllOperationSync::JOB&, mfll::MfllOperationSync::JOB**, long, 1024l>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14moveIN4mfll17MfllOperationSync3JOBEPS3_RS3_PS4_lLl1024ES3_S4_S5_S6_lLl1024EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS7_IT_T0_T1_T2_T3_XT4_EEESJ_SD_(void) {
    ALOGD("_ZNSt3__14moveIN4mfll17MfllOperationSync3JOBEPS3_RS3_PS4_lLl1024ES3_S4_S5_S6_lLl1024EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS7_IT_T0_T1_T2_T3_XT4_EEESJ_SD_() called");
    return 0;
}

/* Demangled: mfll::MfllYuvCapturer::queueGmv(mfll::MfllMotionVector const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllYuvCapturer8queueGmvERKNS_16MfllMotionVectorE(void) {
    ALOGD("_ZN4mfll15MfllYuvCapturer8queueGmvERKNS_16MfllMotionVectorE() called");
    return 0;
}

/* Demangled: mfll::MfllImageBuffer::tranImageFormat(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllImageBuffer15tranImageFormatERKj(void) {
    ALOGD("_ZN4mfll15MfllImageBuffer15tranImageFormatERKj() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: mfll::MfllFeatureDump::getListenedEventTypes() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll15MfllFeatureDump21getListenedEventTypesEv(void) {
    ALOGD("_ZN4mfll15MfllFeatureDump21getListenedEventTypesEv() called");
    return 0;
}

/* Demangled: void std::__1::__assoc_state<int>::set_value<int>(int&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__assoc_stateIiE9set_valueIiEEvOT_(void) {
    ALOGD("_ZNSt3__113__assoc_stateIiE9set_valueIiEEvOT_() called");
    return 0;
}

/* Exported Object: vtable for MfllYuvCapturer_1_2_Impl::MyEventListener */
extern "C" __attribute__((visibility("default"))) void* _ZTVN24MfllYuvCapturer_1_2_Impl15MyEventListenerE = NULL;

/* Demangled: mfll::MfllNvram::~MfllNvram() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll9MfllNvramD0Ev(void) {
    ALOGD("_ZN4mfll9MfllNvramD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<int*, std::__1::allocator<int*> >::push_front(int*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPiNS_9allocatorIS1_EEE10push_frontEOS1_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPiNS_9allocatorIS1_EEE10push_frontEOS1_() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<mfll::IMfllImageBuffer>, std::__1::allocator<android::sp<mfll::IMfllImageBuffer> > >::__push_back_slow_path<android::sp<mfll::IMfllImageBuffer> const&>(android::sp<mfll::IMfllImageBuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spIN4mfll16IMfllImageBufferEEENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spIN4mfll16IMfllImageBufferEEENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::imbue(std::__1::locale const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE() called");
    return 0;
}

/* Demangled: std::__1::shared_future<int>::~shared_future() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113shared_futureIiED2Ev(void) {
    ALOGD("_ZNSt3__113shared_futureIiED2Ev() called");
    return 0;
}

/* Demangled: mfll::IMfllExifInfo::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll13IMfllExifInfo14createInstanceEv(void) {
    ALOGD("_ZN4mfll13IMfllExifInfo14createInstanceEv() called");
    return 0;
}

/* Demangled: mfll::MfllCore2::do_AllocMemcWorking(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll9MfllCore219do_AllocMemcWorkingEPv(void) {
    ALOGD("_ZN4mfll9MfllCore219do_AllocMemcWorkingEPv() called");
    return 0;
}

/* Demangled: mfll::MfllCore2p5::do_Mixing(long) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll11MfllCore2p59do_MixingEl(void) {
    ALOGD("_ZN4mfll11MfllCore2p59do_MixingEl() called");
    return 0;
}

/* Demangled: mfll::MfllExifInfo::MfllExifInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll12MfllExifInfoC2Ev(void) {
    ALOGD("_ZN4mfll12MfllExifInfoC2Ev() called");
    return 0;
}

/* Demangled: mfll::MfllMfb::encodeRawToYuv(mfll::IMfllImageBuffer*, mfll::IMfllImageBuffer*, mfll::IMfllImageBuffer*, mfll::IMfllImageBuffer*, mfll::MfllRect const&, mfll::MfllRect const&, mfll::YuvStage) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll7MfllMfb14encodeRawToYuvEPNS_16IMfllImageBufferES2_S2_S2_RKNS_8MfllRectES5_NS_8YuvStageE(void) {
    ALOGD("_ZN4mfll7MfllMfb14encodeRawToYuvEPNS_16IMfllImageBufferES2_S2_S2_RKNS_8MfllRectES5_NS_8YuvStageE() called");
    return 0;
}

/* Demangled: mfll::MfllCore::doAllocQyuvBuffer(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN4mfll8MfllCore17doAllocQyuvBufferEPv(void) {
    ALOGD("_ZN4mfll8MfllCore17doAllocQyuvBufferEPv() called");
    return 0;
}

/* Demangled: __multf3 */
extern "C" __attribute__((visibility("default"))) int fn___multf3(void) __asm__("__multf3");
int fn___multf3(void) {
    ALOGD("__multf3() called");
    return 0;
}
