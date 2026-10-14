/*
 * Reverse-Engineered ABI Specification for: libmfllcore.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libmfllcore.so
 */

#ifndef BEGONIA_RE_LIBMFLLCORE_H
#define BEGONIA_RE_LIBMFLLCORE_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN4mfll15MfllFeaturePerfD2Ev */
/* Demangled: mfll::MfllFeaturePerf::~MfllFeaturePerf() */
int _ZN4mfll15MfllFeaturePerfD2Ev(void);

/* Symbol: _ZN4mfll14MfllFeatureMrp7onEventENS_9EventTypeERNS_15MfllEventStatusEPvS4_S4_ */
/* Demangled: mfll::MfllFeatureMrp::onEvent(mfll::EventType, mfll::MfllEventStatus&, void*, void*, void*) */
int _ZN4mfll14MfllFeatureMrp7onEventENS_9EventTypeERNS_15MfllEventStatusEPvS4_S4_(void);

/* Symbol: _ZN4mfll15MfllFeatureDump9doneEventENS_9EventTypeERNS_15MfllEventStatusEPvS4_S4_ */
/* Demangled: mfll::MfllFeatureDump::doneEvent(mfll::EventType, mfll::MfllEventStatus&, void*, void*, void*) */
int _ZN4mfll15MfllFeatureDump9doneEventENS_9EventTypeERNS_15MfllEventStatusEPvS4_S4_(void);

/* Symbol: _ZN4mfll7MfllBss11getForceBssEPvm */
/* Demangled: mfll::MfllBss::getForceBss(void*, unsigned long) */
int _ZN4mfll7MfllBss11getForceBssEPvm(void);

/* Symbol: _ZN4mfll15MfllImageBuffer14getImageFormatEv */
/* Demangled: mfll::MfllImageBuffer::getImageFormat() */
int _ZN4mfll15MfllImageBuffer14getImageFormatEv(void);

/* Symbol: __getf2 */
/* Demangled: __getf2 */
int fn___getf2(void) __asm__("__getf2");

/* Symbol: _ZN4mfll8MfllCore27do_EncodeYuvGoldenDownscaleEl */
/* Demangled: mfll::MfllCore::do_EncodeYuvGoldenDownscale(long) */
int _ZN4mfll8MfllCore27do_EncodeYuvGoldenDownscaleEl(void);

/* Symbol: _ZN4mfll15MfllFeatureDumpC2Ev */
/* Demangled: mfll::MfllFeatureDump::MfllFeatureDump() */
int _ZN4mfll15MfllFeatureDumpC2Ev(void);

/* Symbol: _ZN4mfll8MfllCore18getIndexByNewIndexERKj */
/* Demangled: mfll::MfllCore::getIndexByNewIndex(unsigned int const&) */
int _ZN4mfll8MfllCore18getIndexByNewIndexERKj(void);

/* Symbol: __lttf2 */
/* Demangled: __lttf2 */
int fn___lttf2(void) __asm__("__lttf2");

/* Symbol: _ZN4mfll15MfllFeatureDump7onEventENS_9EventTypeERNS_15MfllEventStatusEPvS4_S4_ */
/* Demangled: mfll::MfllFeatureDump::onEvent(mfll::EventType, mfll::MfllEventStatus&, void*, void*, void*) */
int _ZN4mfll15MfllFeatureDump7onEventENS_9EventTypeERNS_15MfllEventStatusEPvS4_S4_(void);

/* Symbol: _ZN4mfll12MfllCapturer11setShotModeERKNS_8MfllModeE */
/* Demangled: mfll::MfllCapturer::setShotMode(mfll::MfllMode const&) */
int _ZN4mfll12MfllCapturer11setShotModeERKNS_8MfllModeE(void);

/* Symbol: _ZN4mfll12MfllCapturerD2Ev */
/* Demangled: mfll::MfllCapturer::~MfllCapturer() */
int _ZN4mfll12MfllCapturerD2Ev(void);

/* Symbol: _ZN4mfll15MfllFeaturePerfC1Ev */
/* Demangled: mfll::MfllFeaturePerf::MfllFeaturePerf() */
int _ZN4mfll15MfllFeaturePerfC1Ev(void);

/* Symbol: _ZNSt3__16vectorIlNS_9allocatorIlEEE8__appendEmRKl */
/* Demangled: std::__1::vector<long, std::__1::allocator<long> >::__append(unsigned long, long const&) */
int _ZNSt3__16vectorIlNS_9allocatorIlEEE8__appendEmRKl(void);

/* Symbol: _ZN4mfll15MfllYuvCapturer11setShotModeERKNS_8MfllModeE */
/* Demangled: mfll::MfllYuvCapturer::setShotMode(mfll::MfllMode const&) */
int _ZN4mfll15MfllYuvCapturer11setShotModeERKNS_8MfllModeE(void);

/* Symbol: _ZTISt11logic_error */
/* Demangled: typeinfo for std::logic_error */
extern void* _ZTISt11logic_error;

/* Symbol: _ZN4mfll8MfllCore9do_MixingEl */
/* Demangled: mfll::MfllCore::do_Mixing(long) */
int _ZN4mfll8MfllCore9do_MixingEl(void);

/* Symbol: _ZN4mfll12MfllProperty11getPropertyERKNS_11tagPropertyE */
/* Demangled: mfll::MfllProperty::getProperty(mfll::tagProperty const&) */
int _ZN4mfll12MfllProperty11getPropertyERKNS_11tagPropertyE(void);

/* Symbol: _ZTVN4mfll9IMfllMemcE */
/* Demangled: vtable for mfll::IMfllMemc */
extern void* _ZTVN4mfll9IMfllMemcE;

/* Symbol: _ZN4mfll8MfllCore12isFullSizeMcEv */
/* Demangled: mfll::MfllCore::isFullSizeMc() */
int _ZN4mfll8MfllCore12isFullSizeMcEv(void);

/* Symbol: _ZN4mfll15MfllFeatureFeedC2Ev */
/* Demangled: mfll::MfllFeatureFeed::MfllFeatureFeed() */
int _ZN4mfll15MfllFeatureFeedC2Ev(void);

/* Symbol: _ZN4mfll15MfllImageBuffer24convertImageBufferFormatERKNS_11ImageFormatE */
/* Demangled: mfll::MfllImageBuffer::convertImageBufferFormat(mfll::ImageFormat const&) */
int _ZN4mfll15MfllImageBuffer24convertImageBufferFormatERKNS_11ImageFormatE(void);

/* Symbol: _ZNSt3__114__split_bufferIPN6NS3Av39MetaSet_TENS_9allocatorIS3_EEE9push_backEOS3_ */
/* Demangled: std::__1::__split_buffer<NS3Av3::MetaSet_T*, std::__1::allocator<NS3Av3::MetaSet_T*> >::push_back(NS3Av3::MetaSet_T*&&) */
int _ZNSt3__114__split_bufferIPN6NS3Av39MetaSet_TENS_9allocatorIS3_EEE9push_backEOS3_(void);

/* Symbol: __fe_getround */
/* Demangled: __fe_getround */
int fn___fe_getround(void) __asm__("__fe_getround");

/* Symbol: _ZN4mfll15MfllFeatureFeed9doneEventENS_9EventTypeERNS_15MfllEventStatusEPvS4_S4_ */
/* Demangled: mfll::MfllFeatureFeed::doneEvent(mfll::EventType, mfll::MfllEventStatus&, void*, void*, void*) */
int _ZN4mfll15MfllFeatureFeed9doneEventENS_9EventTypeERNS_15MfllEventStatusEPvS4_S4_(void);

/* Symbol: _ZN4mfll12MfllCapturerC1Ev */
/* Demangled: mfll::MfllCapturer::MfllCapturer() */
int _ZN4mfll12MfllCapturerC1Ev(void);

/* Symbol: _ZN4mfll9MfllNvram9chunkMfnrEPm */
/* Demangled: mfll::MfllNvram::chunkMfnr(unsigned long*) */
int _ZN4mfll9MfllNvram9chunkMfnrEPm(void);

/* Symbol: _ZN4mfll11MfllCore2p5C1Ev */
/* Demangled: mfll::MfllCore2p5::MfllCore2p5() */
int _ZN4mfll11MfllCore2p5C1Ev(void);

/* Symbol: _ZTVN4mfll12MfllCapturerE */
/* Demangled: vtable for mfll::MfllCapturer */
extern void* _ZTVN4mfll12MfllCapturerE;

/* Symbol: _ZN4mfll7MfllMfb5blendEPN5NSCam12IImageBufferES3_S3_S3_S3_S3_ */
/* Demangled: mfll::MfllMfb::blend(NSCam::IImageBuffer*, NSCam::IImageBuffer*, NSCam::IImageBuffer*, NSCam::IImageBuffer*, NSCam::IImageBuffer*, NSCam::IImageBuffer*) */
int _ZN4mfll7MfllMfb5blendEPN5NSCam12IImageBufferES3_S3_S3_S3_S3_(void);

/* Symbol: _ZNK4mfll7MfllMfb20getMainMetasetLockedEv */
/* Demangled: mfll::MfllMfb::getMainMetasetLocked() const */
int _ZNK4mfll7MfllMfb20getMainMetasetLockedEv(void);

/* Symbol: __atomic_load_1 */
/* Demangled: __atomic_load_1 */
int fn___atomic_load_1(void) __asm__("__atomic_load_1");

/* Symbol: _ZN4mfll14MAKE_MFNR_COREILi2ELi5ELi0EEEPNS_9IMfllCoreEv */
/* Demangled: mfll::IMfllCore* mfll::MAKE_MFNR_CORE<2, 5, 0>() */
int _ZN4mfll14MAKE_MFNR_COREILi2ELi5ELi0EEEPNS_9IMfllCoreEv(void);

/* Symbol: _ZN4mfll8MfllCoreD1Ev */
/* Demangled: mfll::MfllCore::~MfllCore() */
int _ZN4mfll8MfllCoreD1Ev(void);

/* Symbol: _ZNSt3__114__split_bufferIPNS_6futureIvEERNS_9allocatorIS3_EEE10push_frontERKS3_ */
/* Demangled: std::__1::__split_buffer<std::__1::future<void>*, std::__1::allocator<std::__1::future<void>*>&>::push_front(std::__1::future<void>* const&) */
int _ZNSt3__114__split_bufferIPNS_6futureIvEERNS_9allocatorIS3_EEE10push_frontERKS3_(void);

/* Symbol: _ZN7android2spIN4mfll16IMfllImageBufferEEaSEOS3_ */
/* Demangled: android::sp<mfll::IMfllImageBuffer>::operator=(android::sp<mfll::IMfllImageBuffer>&&) */
int _ZN7android2spIN4mfll16IMfllImageBufferEEaSEOS3_(void);

/* Symbol: _ZN4mfll7MfllMfb6setIspEiRN6NS3Av39MetaSet_TEPNS1_11TuningParamEPS2_PN5NSCam12IImageBufferE */
/* Demangled: mfll::MfllMfb::setIsp(int, NS3Av3::MetaSet_T&, NS3Av3::TuningParam*, NS3Av3::MetaSet_T*, NSCam::IImageBuffer*) */
int _ZN4mfll7MfllMfb6setIspEiRN6NS3Av39MetaSet_TEPNS1_11TuningParamEPS2_PN5NSCam12IImageBufferE(void);

/* Symbol: __atomic_load_2 */
/* Demangled: __atomic_load_2 */
int fn___atomic_load_2(void) __asm__("__atomic_load_2");

/* Symbol: _ZN4mfll8MfllCore13releaseBufferERKNS_10MfllBufferEi */
/* Demangled: mfll::MfllCore::releaseBuffer(mfll::MfllBuffer const&, int) */
int _ZN4mfll8MfllCore13releaseBufferERKNS_10MfllBufferEi(void);

/* Symbol: _ZN7android2spIN4mfll16IMfllImageBufferEEaSEPS2_ */
/* Demangled: android::sp<mfll::IMfllImageBuffer>::operator=(mfll::IMfllImageBuffer*) */
int _ZN7android2spIN4mfll16IMfllImageBufferEEaSEPS2_(void);

/* Symbol: _ZN4mfll15MfllYuvCapturer13captureFramesEjPN7android2spINS_16IMfllImageBufferEEES5_PNS_16MfllMotionVectorERi */
/* Demangled: mfll::MfllYuvCapturer::captureFrames(unsigned int, android::sp<mfll::IMfllImageBuffer>*, android::sp<mfll::IMfllImageBuffer>*, mfll::MfllMotionVector*, int&) */
int _ZN4mfll15MfllYuvCapturer13captureFramesEjPN7android2spINS_16IMfllImageBufferEEES5_PNS_16MfllMotionVectorERi(void);

/* Symbol: _ZTVN4mfll13IMfllExifInfoE */
/* Demangled: vtable for mfll::IMfllExifInfo */
extern void* _ZTVN4mfll13IMfllExifInfoE;

/* Symbol: _ZN4mfll8MfllCore10getVersionEv */
/* Demangled: mfll::MfllCore::getVersion() */
int _ZN4mfll8MfllCore10getVersionEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPN4mfll15ImageBufferPackENS_9allocatorIS3_EEE9push_backEOS3_ */
/* Demangled: std::__1::__split_buffer<mfll::ImageBufferPack*, std::__1::allocator<mfll::ImageBufferPack*> >::push_back(mfll::ImageBufferPack*&&) */
int _ZNSt3__114__split_bufferIPN4mfll15ImageBufferPackENS_9allocatorIS3_EEE9push_backEOS3_(void);

/* Symbol: _ZN4mfll15MfllImageBuffer10initBufferEv */
/* Demangled: mfll::MfllImageBuffer::initBuffer() */
int _ZN4mfll15MfllImageBuffer10initBufferEv(void);

/* Symbol: __atomic_load_4 */
/* Demangled: __atomic_load_4 */
int fn___atomic_load_4(void) __asm__("__atomic_load_4");

/* Symbol: _ZN4mfll9MfhrCore27do_InitERKNS_10MfllConfigE */
/* Demangled: mfll::MfhrCore2::do_Init(mfll::MfllConfig const&) */
int _ZN4mfll9MfhrCore27do_InitERKNS_10MfllConfigE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN4mfll12ePLATFORMCFGElEENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJOS3_EEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<mfll::ePLATFORMCFG, long>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<mfll::ePLATFORMCFG, long>, std::__1::__unordered_map_hasher<mfll::ePLATFORMCFG, std::__1::__hash_value_type<mfll::ePLATFORMCFG, long>, std::__1::hash<mfll::ePLATFORMCFG>, true>, std::__1::__unordered_map_equal<mfll::ePLATFORMCFG, std::__1::__hash_value_type<mfll::ePLATFORMCFG, long>, std::__1::equal_to<mfll::ePLATFORMCFG>, true>, std::__1::allocator<std::__1::__hash_value_type<mfll::ePLATFORMCFG, long> > >::__emplace_unique_key_args<mfll::ePLATFORMCFG, std::__1::piecewise_construct_t const&, std::__1::tuple<mfll::ePLATFORMCFG&&>, std::__1::tuple<> >(mfll::ePLATFORMCFG const&, std::__1::piecewise_construct_t const&, std::__1::tuple<mfll::ePLATFORMCFG&&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN4mfll12ePLATFORMCFGElEENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJOS3_EEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam8NSIoPipe6OutputEEE */
/* Demangled: vtable for android::Vector<NSCam::NSIoPipe::Output> */
extern void* _ZTVN7android6VectorIN5NSCam8NSIoPipe6OutputEEE;

/* Symbol: _ZN4mfll12MfllPropertyD1Ev */
/* Demangled: mfll::MfllProperty::~MfllProperty() */
int _ZN4mfll12MfllPropertyD1Ev(void);

/* Symbol: _ZN4mfll15MfllFeatureDump12dumpMixStageEPNS_9IMfllCoreE */
/* Demangled: mfll::MfllFeatureDump::dumpMixStage(mfll::IMfllCore*) */
int _ZN4mfll15MfllFeatureDump12dumpMixStageEPNS_9IMfllCoreE(void);

/* Symbol: _ZN4mfll12MfllCapturer8queueGmvERKNS_16MfllMotionVectorE */
/* Demangled: mfll::MfllCapturer::queueGmv(mfll::MfllMotionVector const&) */
int _ZN4mfll12MfllCapturer8queueGmvERKNS_16MfllMotionVectorE(void);

/* Symbol: _ZN4mfll15MfllImageBuffer13setResolutionEjj */
/* Demangled: mfll::MfllImageBuffer::setResolution(unsigned int, unsigned int) */
int _ZN4mfll15MfllImageBuffer13setResolutionEjj(void);

/* Symbol: _ZN4mfll15MfllImageBuffer15tranImageFormatERKNS_11ImageFormatE */
/* Demangled: mfll::MfllImageBuffer::tranImageFormat(mfll::ImageFormat const&) */
int _ZN4mfll15MfllImageBuffer15tranImageFormatERKNS_11ImageFormatE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE7do_copyEPvPKvm(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIN4mfll9EventTypeEPKcEENS_19__map_value_compareIS3_S6_NS_4lessIS3_EELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<mfll::EventType, char const*>, std::__1::__map_value_compare<mfll::EventType, std::__1::__value_type<mfll::EventType, char const*>, std::__1::less<mfll::EventType>, true>, std::__1::allocator<std::__1::__value_type<mfll::EventType, char const*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<mfll::EventType, char const*>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIN4mfll9EventTypeEPKcEENS_19__map_value_compareIS3_S6_NS_4lessIS3_EELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE(void);

/* Symbol: _ZNSt3__16vectorIN4mfll16MfllMotionVectorENS_9allocatorIS2_EEE8__appendEm */
/* Demangled: std::__1::vector<mfll::MfllMotionVector, std::__1::allocator<mfll::MfllMotionVector> >::__append(unsigned long) */
int _ZNSt3__16vectorIN4mfll16MfllMotionVectorENS_9allocatorIS2_EEE8__appendEm(void);

/* Symbol: _ZN4mfll9MfllCore211do_BlendingEPv */
/* Demangled: mfll::MfllCore2::do_Blending(void*) */
int _ZN4mfll9MfllCore211do_BlendingEPv(void);

/* Symbol: _ZN4mfll9MfllCore219do_MotionEstimationEPv */
/* Demangled: mfll::MfllCore2::do_MotionEstimation(void*) */
int _ZN4mfll9MfllCore219do_MotionEstimationEPv(void);

/* Symbol: _ZN4mfll15MfllYuvCapturerD0Ev */
/* Demangled: mfll::MfllYuvCapturer::~MfllYuvCapturer() */
int _ZN4mfll15MfllYuvCapturerD0Ev(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN4mfll12ePLATFORMCFGElEENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<mfll::ePLATFORMCFG, long>, std::__1::__unordered_map_hasher<mfll::ePLATFORMCFG, std::__1::__hash_value_type<mfll::ePLATFORMCFG, long>, std::__1::hash<mfll::ePLATFORMCFG>, true>, std::__1::__unordered_map_equal<mfll::ePLATFORMCFG, std::__1::__hash_value_type<mfll::ePLATFORMCFG, long>, std::__1::equal_to<mfll::ePLATFORMCFG>, true>, std::__1::allocator<std::__1::__hash_value_type<mfll::ePLATFORMCFG, long> > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN4mfll12ePLATFORMCFGElEENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEE8__rehashEm(void);

/* Symbol: _ZTVN4mfll10IMfllNvramE */
/* Demangled: vtable for mfll::IMfllNvram */
extern void* _ZTVN4mfll10IMfllNvramE;

/* Symbol: __atomic_load_8 */
/* Demangled: __atomic_load_8 */
int fn___atomic_load_8(void) __asm__("__atomic_load_8");

/* Symbol: _ZN4mfll8MfllCore6getMfbEv */
/* Demangled: mfll::MfllCore::getMfb() */
int _ZN4mfll8MfllCore6getMfbEv(void);

/* Symbol: _ZNSt3__16vectorIPN4mfll16MfllMotionVectorENS_9allocatorIS3_EEE8__appendEm */
/* Demangled: std::__1::vector<mfll::MfllMotionVector*, std::__1::allocator<mfll::MfllMotionVector*> >::__append(unsigned long) */
int _ZNSt3__16vectorIPN4mfll16MfllMotionVectorENS_9allocatorIS3_EEE8__appendEm(void);

/* Symbol: _ZTVN4mfll10MfllEventsE */
/* Demangled: vtable for mfll::MfllEvents */
extern void* _ZTVN4mfll10MfllEventsE;

/* Symbol: _ZNSt3__110shared_ptrI6MTKAisED2Ev */
/* Demangled: std::__1::shared_ptr<MTKAis>::~shared_ptr() */
int _ZNSt3__110shared_ptrI6MTKAisED2Ev(void);

/* Symbol: _ZN4mfll8MfllCore15syncWaitTriggerEPNS_11MfllSyncObjE */
/* Demangled: mfll::MfllCore::syncWaitTrigger(mfll::MfllSyncObj*) */
int _ZN4mfll8MfllCore15syncWaitTriggerEPNS_11MfllSyncObjE(void);

/* Symbol: _ZN4mfll9IMfllMemc14createInstanceEv */
/* Demangled: mfll::IMfllMemc::createInstance() */
int _ZN4mfll9IMfllMemc14createInstanceEv(void);

/* Symbol: _ZN4mfll9IMfllMemc15destroyInstanceEv */
/* Demangled: mfll::IMfllMemc::destroyInstance() */
int _ZN4mfll9IMfllMemc15destroyInstanceEv(void);

/* Symbol: _ZN4mfll9MfllCore27do_InitERKNS_10MfllConfigE */
/* Demangled: mfll::MfllCore2::do_Init(mfll::MfllConfig const&) */
int _ZN4mfll9MfllCore27do_InitERKNS_10MfllConfigE(void);

/* Symbol: _ZN4mfll15MfllYuvCapturer13captureFramesEjRNSt3__16vectorIPN7android2spINS_16IMfllImageBufferEEENS1_9allocatorIS7_EEEESB_SB_SB_RNS2_IPNS_16MfllMotionVectorENS8_ISD_EEEERNS2_IiNS8_IiEEEE */
/* Demangled: mfll::MfllYuvCapturer::captureFrames(unsigned int, std::__1::vector<android::sp<mfll::IMfllImageBuffer>*, std::__1::allocator<android::sp<mfll::IMfllImageBuffer>*> >&, std::__1::vector<android::sp<mfll::IMfllImageBuffer>*, std::__1::allocator<android::sp<mfll::IMfllImageBuffer>*> >&, std::__1::vector<android::sp<mfll::IMfllImageBuffer>*, std::__1::allocator<android::sp<mfll::IMfllImageBuffer>*> >&, std::__1::vector<android::sp<mfll::IMfllImageBuffer>*, std::__1::allocator<android::sp<mfll::IMfllImageBuffer>*> >&, std::__1::vector<mfll::MfllMotionVector*, std::__1::allocator<mfll::MfllMotionVector*> >&, std::__1::vector<int, std::__1::allocator<int> >&) */
int _ZN4mfll15MfllYuvCapturer13captureFramesEjRNSt3__16vectorIPN7android2spINS_16IMfllImageBufferEEENS1_9allocatorIS7_EEEESB_SB_SB_RNS2_IPNS_16MfllMotionVectorENS8_ISD_EEEERNS2_IiNS8_IiEEEE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE10do_destroyEPvm(void);

/* Symbol: _ZN4mfll15MfllImageBufferD1Ev */
/* Demangled: mfll::MfllImageBuffer::~MfllImageBuffer() */
int _ZN4mfll15MfllImageBufferD1Ev(void);

/* Symbol: _ZN4mfll8MfllMemc16motionEstimationEv */
/* Demangled: mfll::MfllMemc::motionEstimation() */
int _ZN4mfll8MfllMemc16motionEstimationEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN4mfll12MfllStrategy13queryStrategyERKNS_18MfllStrategyConfigEPS1_ */
/* Demangled: mfll::MfllStrategy::queryStrategy(mfll::MfllStrategyConfig const&, mfll::MfllStrategyConfig*) */
int _ZN4mfll12MfllStrategy13queryStrategyERKNS_18MfllStrategyConfigEPS1_(void);

/* Symbol: _ZN4mfll12MfllProperty11getForceGmvERA10_NS_16MfllMotionVectorE */
/* Demangled: mfll::MfllProperty::getForceGmv(mfll::MfllMotionVector (&) [10]) */
int _ZN4mfll12MfllProperty11getForceGmvERA10_NS_16MfllMotionVectorE(void);

/* Symbol: _ZNSt3__16vectorIlNS_9allocatorIlEEE21__push_back_slow_pathIRKlEEvOT_ */
/* Demangled: void std::__1::vector<long, std::__1::allocator<long> >::__push_back_slow_path<long const&>(long const&) */
int _ZNSt3__16vectorIlNS_9allocatorIlEEE21__push_back_slow_pathIRKlEEvOT_(void);

/* Symbol: _ZN4mfll9MfhrCore216getVersionStringEv */
/* Demangled: mfll::MfhrCore2::getVersionString() */
int _ZN4mfll9MfhrCore216getVersionStringEv(void);

/* Symbol: _ZN4mfll10MfllEvents7onEventENS_9EventTypeERNS_15MfllEventStatusEPvS4_S4_ */
/* Demangled: mfll::MfllEvents::onEvent(mfll::EventType, mfll::MfllEventStatus&, void*, void*, void*) */
int _ZN4mfll10MfllEvents7onEventENS_9EventTypeERNS_15MfllEventStatusEPvS4_S4_(void);

/* Symbol: _ZN4mfll15MfllImageBuffer13releaseBufferEv */
/* Demangled: mfll::MfllImageBuffer::releaseBuffer() */
int _ZN4mfll15MfllImageBuffer13releaseBufferEv(void);

/* Symbol: __addtf3 */
/* Demangled: __addtf3 */
int fn___addtf3(void) __asm__("__addtf3");

/* Symbol: _ZNSt3__120__shared_ptr_pointerIPcNS_14default_deleteIcEENS_9allocatorIcEEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_pointer<char*, std::__1::default_delete<char>, std::__1::allocator<char> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_pointerIPcNS_14default_deleteIcEENS_9allocatorIcEEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN4mfll14MfllFeatureMrpC2Ev */
/* Demangled: mfll::MfllFeatureMrp::MfllFeatureMrp() */
int _ZN4mfll14MfllFeatureMrpC2Ev(void);

/* Symbol: _ZN4mfll15MfllYuvCapturer20__captureFrameSingleEjPN7android2spINS_16IMfllImageBufferEEES5_PNS_16MfllMotionVectorERi */
/* Demangled: mfll::MfllYuvCapturer::__captureFrameSingle(unsigned int, android::sp<mfll::IMfllImageBuffer>*, android::sp<mfll::IMfllImageBuffer>*, mfll::MfllMotionVector*, int&) */
int _ZN4mfll15MfllYuvCapturer20__captureFrameSingleEjPN7android2spINS_16IMfllImageBufferEEES5_PNS_16MfllMotionVectorERi(void);

/* Symbol: _ZNSt3__114__split_bufferIPPN4mfll15MfllImageBufferENS_9allocatorIS4_EEE9push_backEOS4_ */
/* Demangled: std::__1::__split_buffer<mfll::MfllImageBuffer**, std::__1::allocator<mfll::MfllImageBuffer**> >::push_back(mfll::MfllImageBuffer**&&) */
int _ZNSt3__114__split_bufferIPPN4mfll15MfllImageBufferENS_9allocatorIS4_EEE9push_backEOS4_(void);

/* Symbol: _ZN4mfll8MfllCore14doAllocYuvBaseEl */
/* Demangled: mfll::MfllCore::doAllocYuvBase(long) */
int _ZN4mfll8MfllCore14doAllocYuvBaseEl(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::underflow() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv(void);

/* Symbol: _ZN4mfll8MfllMemcC2Ev */
/* Demangled: mfll::MfllMemc::MfllMemc() */
int _ZN4mfll8MfllMemcC2Ev(void);

/* Symbol: _ZN4mfll7MfllMfb13setPostNrTypeERKNS_18NoiseReductionTypeE */
/* Demangled: mfll::MfllMfb::setPostNrType(mfll::NoiseReductionType const&) */
int _ZN4mfll7MfllMfb13setPostNrTypeERKNS_18NoiseReductionTypeE(void);

/* Symbol: _ZN4mfll7MfllMfbD1Ev */
/* Demangled: mfll::MfllMfb::~MfllMfb() */
int _ZN4mfll7MfllMfbD1Ev(void);

/* Symbol: _ZNSt3__114__split_bufferIPN4mfll15ImageBufferPackENS_9allocatorIS3_EEE10push_frontEOS3_ */
/* Demangled: std::__1::__split_buffer<mfll::ImageBufferPack*, std::__1::allocator<mfll::ImageBufferPack*> >::push_front(mfll::ImageBufferPack*&&) */
int _ZNSt3__114__split_bufferIPN4mfll15ImageBufferPackENS_9allocatorIS3_EEE10push_frontEOS3_(void);

/* Symbol: _ZTSNSt3__112future_errorE */
/* Demangled: typeinfo name for std::__1::future_error */
extern void* _ZTSNSt3__112future_errorE;

/* Symbol: _ZN4mfll15MfllYuvCapturer23registerEventDispatcherERKN7android2spINS_11IMfllEventsEEE */
/* Demangled: mfll::MfllYuvCapturer::registerEventDispatcher(android::sp<mfll::IMfllEvents> const&) */
int _ZN4mfll15MfllYuvCapturer23registerEventDispatcherERKN7android2spINS_11IMfllEventsEEE(void);

/* Symbol: _ZN4mfll8MfllCore18setThumbnailBufferERKN7android2spINS_16IMfllImageBufferEEERKNS_8MfllRectE */
/* Demangled: mfll::MfllCore::setThumbnailBuffer(android::sp<mfll::IMfllImageBuffer> const&, mfll::MfllRect const&) */
int _ZN4mfll8MfllCore18setThumbnailBufferERKN7android2spINS_16IMfllImageBufferEEERKNS_8MfllRectE(void);

/* Symbol: _ZNSt3__114__split_bufferIPNS_6futureIvEENS_9allocatorIS3_EEE10push_frontEOS3_ */
/* Demangled: std::__1::__split_buffer<std::__1::future<void>*, std::__1::allocator<std::__1::future<void>*> >::push_front(std::__1::future<void>*&&) */
int _ZNSt3__114__split_bufferIPNS_6futureIvEENS_9allocatorIS3_EEE10push_frontEOS3_(void);

/* Symbol: _ZNSt3__15dequeIN4mfll15ImageBufferPackENS_9allocatorIS2_EEE9push_backERKS2_ */
/* Demangled: std::__1::deque<mfll::ImageBufferPack, std::__1::allocator<mfll::ImageBufferPack> >::push_back(mfll::ImageBufferPack const&) */
int _ZNSt3__15dequeIN4mfll15ImageBufferPackENS_9allocatorIS2_EEE9push_backERKS2_(void);

/* Symbol: _ZN4mfll9MfllCore210getVersionEv */
/* Demangled: mfll::MfllCore2::getVersion() */
int _ZN4mfll9MfllCore210getVersionEv(void);

/* Symbol: _ZN4mfll15MfllImageBuffer10setAlignedEjj */
/* Demangled: mfll::MfllImageBuffer::setAligned(unsigned int, unsigned int) */
int _ZN4mfll15MfllImageBuffer10setAlignedEjj(void);

/* Symbol: _ZNK4mfll15MfllImageBuffer15getAlignedWidthEv */
/* Demangled: mfll::MfllImageBuffer::getAlignedWidth() const */
int _ZNK4mfll15MfllImageBuffer15getAlignedWidthEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN4mfll12MfllStrategyC2Ev */
/* Demangled: mfll::MfllStrategy::MfllStrategy() */
int _ZN4mfll12MfllStrategyC2Ev(void);

/* Symbol: _ZN4mfll12MfllProperty16getForceBssOrderERNSt3__16vectorIiNS1_9allocatorIiEEEE */
/* Demangled: mfll::MfllProperty::getForceBssOrder(std::__1::vector<int, std::__1::allocator<int> >&) */
int _ZN4mfll12MfllProperty16getForceBssOrderERNSt3__16vectorIiNS1_9allocatorIiEEEE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE12do_constructEPvm(void);

/* Symbol: _ZNSt3__112__deque_baseIPN5NSCam9IMetadataENS_9allocatorIS3_EEED2Ev */
/* Demangled: std::__1::__deque_base<NSCam::IMetadata*, std::__1::allocator<NSCam::IMetadata*> >::~__deque_base() */
int _ZNSt3__112__deque_baseIPN5NSCam9IMetadataENS_9allocatorIS3_EEED2Ev(void);

/* Symbol: _ZTVN4mfll13IMfllStrategyE */
/* Demangled: vtable for mfll::IMfllStrategy */
extern void* _ZTVN4mfll13IMfllStrategyE;

/* Symbol: _ZN4mfll8MfllCore19removeEventListenerEPNS_18IMfllEventListenerE */
/* Demangled: mfll::MfllCore::removeEventListener(mfll::IMfllEventListener*) */
int _ZN4mfll8MfllCore19removeEventListenerEPNS_18IMfllEventListenerE(void);

/* Symbol: _ZNSt3__114__split_bufferIPiRNS_9allocatorIS1_EEE9push_backEOS1_ */
/* Demangled: std::__1::__split_buffer<int*, std::__1::allocator<int*>&>::push_back(int*&&) */
int _ZNSt3__114__split_bufferIPiRNS_9allocatorIS1_EEE9push_backEOS1_(void);

/* Symbol: _ZNSt3__16vectorIN4mfll15ImageBufferPackENS_9allocatorIS2_EEE8__appendEm */
/* Demangled: std::__1::vector<mfll::ImageBufferPack, std::__1::allocator<mfll::ImageBufferPack> >::__append(unsigned long) */
int _ZNSt3__16vectorIN4mfll15ImageBufferPackENS_9allocatorIS2_EEE8__appendEm(void);

/* Symbol: _ZN4mfll10MfllEvents9doneEventENS_9EventTypeERNS_15MfllEventStatusEPvS4_S4_ */
/* Demangled: mfll::MfllEvents::doneEvent(mfll::EventType, mfll::MfllEventStatus&, void*, void*, void*) */
int _ZN4mfll10MfllEvents9doneEventENS_9EventTypeERNS_15MfllEventStatusEPvS4_S4_(void);

/* Symbol: _ZN4mfll12MfllCapturer15__captureFramesEjRNSt3__16vectorIPN7android2spINS_16IMfllImageBufferEEENS1_9allocatorIS7_EEEESB_SB_SB_RNS2_IPNS_16MfllMotionVectorENS8_ISD_EEEERNS2_IiNS8_IiEEEE */
/* Demangled: mfll::MfllCapturer::__captureFrames(unsigned int, std::__1::vector<android::sp<mfll::IMfllImageBuffer>*, std::__1::allocator<android::sp<mfll::IMfllImageBuffer>*> >&, std::__1::vector<android::sp<mfll::IMfllImageBuffer>*, std::__1::allocator<android::sp<mfll::IMfllImageBuffer>*> >&, std::__1::vector<android::sp<mfll::IMfllImageBuffer>*, std::__1::allocator<android::sp<mfll::IMfllImageBuffer>*> >&, std::__1::vector<android::sp<mfll::IMfllImageBuffer>*, std::__1::allocator<android::sp<mfll::IMfllImageBuffer>*> >&, std::__1::vector<mfll::MfllMotionVector*, std::__1::allocator<mfll::MfllMotionVector*> >&, std::__1::vector<int, std::__1::allocator<int> >&) */
int _ZN4mfll12MfllCapturer15__captureFramesEjRNSt3__16vectorIPN7android2spINS_16IMfllImageBufferEEENS1_9allocatorIS7_EEEESB_SB_SB_RNS2_IPNS_16MfllMotionVectorENS8_ISD_EEEERNS2_IiNS8_IiEEEE(void);

/* Symbol: _ZN4mfll13IMfllCapturer15destroyInstanceEv */
/* Demangled: mfll::IMfllCapturer::destroyInstance() */
int _ZN4mfll13IMfllCapturer15destroyInstanceEv(void);

/* Symbol: _ZNSt3__16vectorIN4mfll15MfllMfbPortInfoENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_ */
/* Demangled: void std::__1::vector<mfll::MfllMfbPortInfo, std::__1::allocator<mfll::MfllMfbPortInfo> >::__push_back_slow_path<mfll::MfllMfbPortInfo>(mfll::MfllMfbPortInfo&&) */
int _ZNSt3__16vectorIN4mfll15MfllMfbPortInfoENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void);

/* Symbol: __gttf2 */
/* Demangled: __gttf2 */
int fn___gttf2(void) __asm__("__gttf2");

/* Symbol: _ZN4mfll8MfllCore17do_AllocWeightingEPv */
/* Demangled: mfll::MfllCore::do_AllocWeighting(void*) */
int _ZN4mfll8MfllCore17do_AllocWeightingEPv(void);

/* Symbol: _ZN4mfll8MfllCore19doAllocYuvMcWorkingEl */
/* Demangled: mfll::MfllCore::doAllocYuvMcWorking(long) */
int _ZN4mfll8MfllCore19doAllocYuvMcWorkingEl(void);

/* Symbol: _ZN4mfll14MfllFeatureMrp20releaseBaseRawBufferEPNS_9IMfllCoreE */
/* Demangled: mfll::MfllFeatureMrp::releaseBaseRawBuffer(mfll::IMfllCore*) */
int _ZN4mfll14MfllFeatureMrp20releaseBaseRawBufferEPNS_9IMfllCoreE(void);

/* Symbol: _ZNSt3__15dequeIPN5NSCam9IMetadataENS_9allocatorIS3_EEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<NSCam::IMetadata*, std::__1::allocator<NSCam::IMetadata*> >::__add_back_capacity() */
int _ZNSt3__15dequeIPN5NSCam9IMetadataENS_9allocatorIS3_EEE19__add_back_capacityEv(void);

/* Symbol: _ZN4mfll8MfllCore18doAllocMemcWorkingEPv */
/* Demangled: mfll::MfllCore::doAllocMemcWorking(void*) */
int _ZN4mfll8MfllCore18doAllocMemcWorkingEPv(void);

/* Symbol: _ZN4mfll9IMfllCore15destroyInstanceEv */
/* Demangled: mfll::IMfllCore::destroyInstance() */
int _ZN4mfll9IMfllCore15destroyInstanceEv(void);

/* Symbol: _ZN4mfll10MfllEventsC2Ev */
/* Demangled: mfll::MfllEvents::MfllEvents() */
int _ZN4mfll10MfllEventsC2Ev(void);

/* Symbol: _ZN4mfll15MfllFeatureFeed21getListenedEventTypesEv */
/* Demangled: mfll::MfllFeatureFeed::getListenedEventTypes() */
int _ZN4mfll15MfllFeatureFeed21getListenedEventTypesEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNSt3__15dequeIN6NS3Av39MetaSet_TENS_9allocatorIS2_EEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<NS3Av3::MetaSet_T, std::__1::allocator<NS3Av3::MetaSet_T> >::__add_back_capacity() */
int _ZNSt3__15dequeIN6NS3Av39MetaSet_TENS_9allocatorIS2_EEE19__add_back_capacityEv(void);

/* Symbol: _ZN4mfll9MfllNvram12getChunkMfnrEPm */
/* Demangled: mfll::MfllNvram::getChunkMfnr(unsigned long*) */
int _ZN4mfll9MfllNvram12getChunkMfnrEPm(void);

/* Symbol: _ZN4mfll8MfllCore6do_BssEl */
/* Demangled: mfll::MfllCore::do_Bss(long) */
int _ZN4mfll8MfllCore6do_BssEl(void);

/* Symbol: _ZTVN4mfll15MfllFeatureFeedE */
/* Demangled: vtable for mfll::MfllFeatureFeed */
extern void* _ZTVN4mfll15MfllFeatureFeedE;

/* Symbol: _ZN4mfll12MfllExifInfo10getVersionEv */
/* Demangled: mfll::MfllExifInfo::getVersion() */
int _ZN4mfll12MfllExifInfo10getVersionEv(void);

/* Symbol: _ZNSt3__14moveIPN4mfll15MfllImageBufferEPS3_RS3_PS4_lLl512ES3_S4_S5_S6_lLl512EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS7_IT_T0_T1_T2_T3_XT4_EEESJ_SD_ */
/* Demangled: std::__1::__deque_iterator<mfll::MfllImageBuffer*, mfll::MfllImageBuffer**, mfll::MfllImageBuffer*&, mfll::MfllImageBuffer***, long, 512l> std::__1::move<mfll::MfllImageBuffer*, mfll::MfllImageBuffer**, mfll::MfllImageBuffer*&, mfll::MfllImageBuffer***, long, 512l, mfll::MfllImageBuffer*, mfll::MfllImageBuffer**, mfll::MfllImageBuffer*&, mfll::MfllImageBuffer***, long, 512l>(std::__1::__deque_iterator<mfll::MfllImageBuffer*, mfll::MfllImageBuffer**, mfll::MfllImageBuffer*&, mfll::MfllImageBuffer***, long, 512l>, std::__1::__deque_iterator<mfll::MfllImageBuffer*, mfll::MfllImageBuffer**, mfll::MfllImageBuffer*&, mfll::MfllImageBuffer***, long, 512l>, std::__1::__deque_iterator<mfll::MfllImageBuffer*, mfll::MfllImageBuffer**, mfll::MfllImageBuffer*&, mfll::MfllImageBuffer***, long, 512l>) */
int _ZNSt3__14moveIPN4mfll15MfllImageBufferEPS3_RS3_PS4_lLl512ES3_S4_S5_S6_lLl512EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS7_IT_T0_T1_T2_T3_XT4_EEESJ_SD_(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE10do_destroyEPvm(void);

/* Symbol: _ZN4mfll8MfllCore16getExifContainerEv */
/* Demangled: mfll::MfllCore::getExifContainer() */
int _ZN4mfll8MfllCore16getExifContainerEv(void);

/* Symbol: _ZNSt3__15dequeIiNS_9allocatorIiEEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<int, std::__1::allocator<int> >::__add_back_capacity() */
int _ZNSt3__15dequeIiNS_9allocatorIiEEE19__add_back_capacityEv(void);

/* Symbol: _ZN4mfll12MfllExifInfoD2Ev */
/* Demangled: mfll::MfllExifInfo::~MfllExifInfo() */
int _ZN4mfll12MfllExifInfoD2Ev(void);

/* Symbol: _ZTVN4mfll12MfllStrategyE */
/* Demangled: vtable for mfll::MfllStrategy */
extern void* _ZTVN4mfll12MfllStrategyE;

/* Symbol: _ZN4mfll8MfllCore15setBypassOptionERKNS_16MfllBypassOptionE */
/* Demangled: mfll::MfllCore::setBypassOption(mfll::MfllBypassOption const&) */
int _ZN4mfll8MfllCore15setBypassOptionERKNS_16MfllBypassOptionE(void);

/* Symbol: _ZTVN4mfll15MfllFeatureDumpE */
/* Demangled: vtable for mfll::MfllFeatureDump */
extern void* _ZTVN4mfll15MfllFeatureDumpE;

/* Symbol: _ZN4mfll15MfllImageBuffer14mapImageFormatERKjb */
/* Demangled: mfll::MfllImageBuffer::mapImageFormat(unsigned int const&, bool) */
int _ZN4mfll15MfllImageBuffer14mapImageFormatERKjb(void);

/* Symbol: _ZNSt3__15dequeIN4mfll15ImageBufferPackENS_9allocatorIS2_EEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<mfll::ImageBufferPack, std::__1::allocator<mfll::ImageBufferPack> >::__add_back_capacity() */
int _ZNSt3__15dequeIN4mfll15ImageBufferPackENS_9allocatorIS2_EEE19__add_back_capacityEv(void);

/* Symbol: _ZTVN4mfll11MfllCore2p5E */
/* Demangled: vtable for mfll::MfllCore2p5 */
extern void* _ZTVN4mfll11MfllCore2p5E;

/* Symbol: _ZN4mfll8MfllCore17setRrzoResolutionEjj */
/* Demangled: mfll::MfllCore::setRrzoResolution(unsigned int, unsigned int) */
int _ZN4mfll8MfllCore17setRrzoResolutionEjj(void);

/* Symbol: _ZN4mfll15MfllFeatureDump11dumpCaptureEPNS_9IMfllCoreE */
/* Demangled: mfll::MfllFeatureDump::dumpCapture(mfll::IMfllCore*) */
int _ZN4mfll15MfllFeatureDump11dumpCaptureEPNS_9IMfllCoreE(void);

/* Symbol: _ZN4mfll7MfllMfb11setShotModeERKNS_8MfllModeE */
/* Demangled: mfll::MfllMfb::setShotMode(mfll::MfllMode const&) */
int _ZN4mfll7MfllMfb11setShotModeERKNS_8MfllModeE(void);

/* Symbol: _ZNSt3__114__split_bufferIPPKcNS_9allocatorIS3_EEE10push_frontEOS3_ */
/* Demangled: std::__1::__split_buffer<char const**, std::__1::allocator<char const**> >::push_front(char const**&&) */
int _ZNSt3__114__split_bufferIPPKcNS_9allocatorIS3_EEE10push_frontEOS3_(void);

/* Symbol: _ZN4mfll12MfllProperty6isDumpEv */
/* Demangled: mfll::MfllProperty::isDump() */
int _ZN4mfll12MfllProperty6isDumpEv(void);

/* Symbol: _ZN4mfll8MfllCore7do_InitERKNS_10MfllConfigE */
/* Demangled: mfll::MfllCore::do_Init(mfll::MfllConfig const&) */
int _ZN4mfll8MfllCore7do_InitERKNS_10MfllConfigE(void);

/* Symbol: _ZN4mfll12MfllProperty11getBlendNumEv */
/* Demangled: mfll::MfllProperty::getBlendNum() */
int _ZN4mfll12MfllProperty11getBlendNumEv(void);

/* Symbol: _ZN4mfll14MfllFeatureMrp26releaseReferenceRawBuffersEPNS_9IMfllCoreE */
/* Demangled: mfll::MfllFeatureMrp::releaseReferenceRawBuffers(mfll::IMfllCore*) */
int _ZN4mfll14MfllFeatureMrp26releaseReferenceRawBuffersEPNS_9IMfllCoreE(void);

/* Symbol: _ZN4mfll15MfllFeatureDumpD2Ev */
/* Demangled: mfll::MfllFeatureDump::~MfllFeatureDump() */
int _ZN4mfll15MfllFeatureDumpD2Ev(void);

/* Symbol: _ZN4mfll12MfllExifInfoC1Ev */
/* Demangled: mfll::MfllExifInfo::MfllExifInfo() */
int _ZN4mfll12MfllExifInfoC1Ev(void);

/* Symbol: _ZTVN4mfll15MfllFeaturePerfE */
/* Demangled: vtable for mfll::MfllFeaturePerf */
extern void* _ZTVN4mfll15MfllFeaturePerfE;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN4mfll21IMfllImageBuffer_FlagENS_8weak_ptrINS2_21IMfllImageBufferQueueEEEEENS_22__unordered_map_hasherIS3_S7_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S7_NS_8equal_toIS3_EELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJRKS3_EEENSN_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS7_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<mfll::IMfllImageBuffer_Flag, std::__1::weak_ptr<mfll::IMfllImageBufferQueue> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<mfll::IMfllImageBuffer_Flag, std::__1::weak_ptr<mfll::IMfllImageBufferQueue> >, std::__1::__unordered_map_hasher<mfll::IMfllImageBuffer_Flag, std::__1::__hash_value_type<mfll::IMfllImageBuffer_Flag, std::__1::weak_ptr<mfll::IMfllImageBufferQueue> >, std::__1::hash<mfll::IMfllImageBuffer_Flag>, true>, std::__1::__unordered_map_equal<mfll::IMfllImageBuffer_Flag, std::__1::__hash_value_type<mfll::IMfllImageBuffer_Flag, std::__1::weak_ptr<mfll::IMfllImageBufferQueue> >, std::__1::equal_to<mfll::IMfllImageBuffer_Flag>, true>, std::__1::allocator<std::__1::__hash_value_type<mfll::IMfllImageBuffer_Flag, std::__1::weak_ptr<mfll::IMfllImageBufferQueue> > > >::__emplace_unique_key_args<mfll::IMfllImageBuffer_Flag, std::__1::piecewise_construct_t const&, std::__1::tuple<mfll::IMfllImageBuffer_Flag const&>, std::__1::tuple<> >(mfll::IMfllImageBuffer_Flag const&, std::__1::piecewise_construct_t const&, std::__1::tuple<mfll::IMfllImageBuffer_Flag const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN4mfll21IMfllImageBuffer_FlagENS_8weak_ptrINS2_21IMfllImageBufferQueueEEEEENS_22__unordered_map_hasherIS3_S7_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S7_NS_8equal_toIS3_EELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJRKS3_EEENSN_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS7_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN4mfll12MfllExifInfo10updateInfoERKNS_15MfllCoreDbgInfoE */
/* Demangled: mfll::MfllExifInfo::updateInfo(mfll::MfllCoreDbgInfo const&) */
int _ZN4mfll12MfllExifInfo10updateInfoERKNS_15MfllCoreDbgInfoE(void);

/* Symbol: _ZNSt3__114__split_bufferIPPKcRNS_9allocatorIS3_EEE10push_frontERKS3_ */
/* Demangled: std::__1::__split_buffer<char const**, std::__1::allocator<char const**>&>::push_front(char const** const&) */
int _ZNSt3__114__split_bufferIPPKcRNS_9allocatorIS3_EEE10push_frontERKS3_(void);

/* Symbol: _ZN4mfll12MfllCapturer16queueSourceImageERN7android2spINS_16IMfllImageBufferEEE */
/* Demangled: mfll::MfllCapturer::queueSourceImage(android::sp<mfll::IMfllImageBuffer>&) */
int _ZN4mfll12MfllCapturer16queueSourceImageERN7android2spINS_16IMfllImageBufferEEE(void);

/* Symbol: _ZN4mfll15MfllFeaturePerfD1Ev */
/* Demangled: mfll::MfllFeaturePerf::~MfllFeaturePerf() */
int _ZN4mfll15MfllFeaturePerfD1Ev(void);

/* Symbol: _ZN4mfll7MfllMfb18setSyncPrivateDataERKNSt3__15dequeIPvNS1_9allocatorIS3_EEEE */
/* Demangled: mfll::MfllMfb::setSyncPrivateData(std::__1::deque<void*, std::__1::allocator<void*> > const&) */
int _ZN4mfll7MfllMfb18setSyncPrivateDataERKNSt3__15dequeIPvNS1_9allocatorIS3_EEEE(void);

/* Symbol: _ZN4mfll8MfllCore11do_BlendingEPv */
/* Demangled: mfll::MfllCore::do_Blending(void*) */
int _ZN4mfll8MfllCore11do_BlendingEPv(void);

/* Symbol: _ZN4mfll8MfllCore11setCapturerERKN7android2spINS_13IMfllCapturerEEE */
/* Demangled: mfll::MfllCore::setCapturer(android::sp<mfll::IMfllCapturer> const&) */
int _ZN4mfll8MfllCore11setCapturerERKN7android2spINS_13IMfllCapturerEEE(void);

/* Symbol: _ZNSt3__114__split_bufferIPNS_6futureIvEENS_9allocatorIS3_EEE9push_backEOS3_ */
/* Demangled: std::__1::__split_buffer<std::__1::future<void>*, std::__1::allocator<std::__1::future<void>*> >::push_back(std::__1::future<void>*&&) */
int _ZNSt3__114__split_bufferIPNS_6futureIvEENS_9allocatorIS3_EEE9push_backEOS3_(void);

/* Symbol: _ZNSt3__114__split_bufferIPiNS_9allocatorIS1_EEE9push_backEOS1_ */
/* Demangled: std::__1::__split_buffer<int*, std::__1::allocator<int*> >::push_back(int*&&) */
int _ZNSt3__114__split_bufferIPiNS_9allocatorIS1_EEE9push_backEOS1_(void);

/* Symbol: _ZNSt3__15dequeINS_6futureIvEENS_9allocatorIS2_EEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<std::__1::future<void>, std::__1::allocator<std::__1::future<void> > >::__add_back_capacity() */
int _ZNSt3__15dequeINS_6futureIvEENS_9allocatorIS2_EEE19__add_back_capacityEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE12do_constructEPvm(void);

/* Symbol: __atomic_store_1 */
/* Demangled: __atomic_store_1 */
int fn___atomic_store_1(void) __asm__("__atomic_store_1");

/* Symbol: _ZN4mfll15MfllFeatureDumpC1Ev */
/* Demangled: mfll::MfllFeatureDump::MfllFeatureDump() */
int _ZN4mfll15MfllFeatureDumpC1Ev(void);

/* Symbol: _ZN4mfll8MfllCore17doEncodeYuvGoldenEl */
/* Demangled: mfll::MfllCore::doEncodeYuvGolden(long) */
int _ZN4mfll8MfllCore17doEncodeYuvGoldenEl(void);

/* Symbol: _ZTVN4mfll15MfllYuvCapturerE */
/* Demangled: vtable for mfll::MfllYuvCapturer */
extern void* _ZTVN4mfll15MfllYuvCapturerE;

/* Symbol: __atomic_store_2 */
/* Demangled: __atomic_store_2 */
int fn___atomic_store_2(void) __asm__("__atomic_store_2");

/* Symbol: _ZN4mfll8MfllCore17setMiddlewareInfoERKNS_18MfllMiddlewareInfoE */
/* Demangled: mfll::MfllCore::setMiddlewareInfo(mfll::MfllMiddlewareInfo const&) */
int _ZN4mfll8MfllCore17setMiddlewareInfoERKNS_18MfllMiddlewareInfoE(void);

/* Symbol: _ZN7android2spIN4mfll10IMfllNvramEEaSEPS2_ */
/* Demangled: android::sp<mfll::IMfllNvram>::operator=(mfll::IMfllNvram*) */
int _ZN7android2spIN4mfll10IMfllNvramEEaSEPS2_(void);

/* Symbol: _ZNSt3__114__split_bufferIPN4mfll15ImageBufferPackERNS_9allocatorIS3_EEE9push_backEOS3_ */
/* Demangled: std::__1::__split_buffer<mfll::ImageBufferPack*, std::__1::allocator<mfll::ImageBufferPack*>&>::push_back(mfll::ImageBufferPack*&&) */
int _ZNSt3__114__split_bufferIPN4mfll15ImageBufferPackERNS_9allocatorIS3_EEE9push_backEOS3_(void);

/* Symbol: _ZN4mfll9MfllCore213releaseBufferERKNS_10MfllBufferEi */
/* Demangled: mfll::MfllCore2::releaseBuffer(mfll::MfllBuffer const&, int) */
int _ZN4mfll9MfllCore213releaseBufferERKNS_10MfllBufferEi(void);

/* Symbol: _ZN4mfll9MfllCore216getVersionStringEv */
/* Demangled: mfll::MfllCore2::getVersionString() */
int _ZN4mfll9MfllCore216getVersionStringEv(void);

/* Symbol: _ZN4mfll9MfhrCore210getVersionEv */
/* Demangled: mfll::MfhrCore2::getVersion() */
int _ZN4mfll9MfhrCore210getVersionEv(void);

/* Symbol: _ZN4mfll15MfllFeatureFeedD2Ev */
/* Demangled: mfll::MfllFeatureFeed::~MfllFeatureFeed() */
int _ZN4mfll15MfllFeatureFeedD2Ev(void);

/* Symbol: _ZN4mfll12MfllExifInfo7getInfoEj */
/* Demangled: mfll::MfllExifInfo::getInfo(unsigned int) */
int _ZN4mfll12MfllExifInfo7getInfoEj(void);

/* Symbol: _ZN4mfll15MfllFeaturePerf9doneEventENS_9EventTypeERNS_15MfllEventStatusEPvS4_S4_ */
/* Demangled: mfll::MfllFeaturePerf::doneEvent(mfll::EventType, mfll::MfllEventStatus&, void*, void*, void*) */
int _ZN4mfll15MfllFeaturePerf9doneEventENS_9EventTypeERNS_15MfllEventStatusEPvS4_S4_(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE7do_copyEPvPKvm(void);

/* Symbol: _ZN4mfll8MfllCore11getCapturerEv */
/* Demangled: mfll::MfllCore::getCapturer() */
int _ZN4mfll8MfllCore11getCapturerEv(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev(void);

/* Symbol: _ZN4mfll12MfllCapturerD1Ev */
/* Demangled: mfll::MfllCapturer::~MfllCapturer() */
int _ZN4mfll12MfllCapturerD1Ev(void);

/* Symbol: _ZN4mfll15MfllYuvCapturer16queueSourceImageERN7android2spINS_16IMfllImageBufferEEE */
/* Demangled: mfll::MfllYuvCapturer::queueSourceImage(android::sp<mfll::IMfllImageBuffer>&) */
int _ZN4mfll15MfllYuvCapturer16queueSourceImageERN7android2spINS_16IMfllImageBufferEEE(void);

/* Symbol: _ZNSt3__114__split_bufferIPPvRNS_9allocatorIS2_EEE10push_frontERKS2_ */
/* Demangled: std::__1::__split_buffer<void**, std::__1::allocator<void**>&>::push_front(void** const&) */
int _ZNSt3__114__split_bufferIPPvRNS_9allocatorIS2_EEE10push_frontERKS2_(void);

/* Symbol: _ZN4mfll15MfllImageBuffer14getImageBufferEv */
/* Demangled: mfll::MfllImageBuffer::getImageBuffer() */
int _ZN4mfll15MfllImageBuffer14getImageBufferEv(void);

/* Symbol: __atomic_store_4 */
/* Demangled: __atomic_store_4 */
int fn___atomic_store_4(void) __asm__("__atomic_store_4");

/* Symbol: _ZN4mfll8MfllCore10doBlendingEPv */
/* Demangled: mfll::MfllCore::doBlending(void*) */
int _ZN4mfll8MfllCore10doBlendingEPv(void);

/* Symbol: _ZN7android2spIN4mfll16IMfllImageBufferEEaSERKS3_ */
/* Demangled: android::sp<mfll::IMfllImageBuffer>::operator=(android::sp<mfll::IMfllImageBuffer> const&) */
int _ZN7android2spIN4mfll16IMfllImageBufferEEaSERKS3_(void);

/* Symbol: _ZN4mfll15MfllImageBuffer10getAlignedERjS1_ */
/* Demangled: mfll::MfllImageBuffer::getAligned(unsigned int&, unsigned int&) */
int _ZN4mfll15MfllImageBuffer10getAlignedERjS1_(void);

/* Symbol: _ZNSt3__114__split_bufferIPPN5NSCam9IMetadataENS_9allocatorIS4_EEE9push_backEOS4_ */
/* Demangled: std::__1::__split_buffer<NSCam::IMetadata**, std::__1::allocator<NSCam::IMetadata**> >::push_back(NSCam::IMetadata**&&) */
int _ZNSt3__114__split_bufferIPPN5NSCam9IMetadataENS_9allocatorIS4_EEE9push_backEOS4_(void);

/* Symbol: _ZN4mfll12MfllStrategy4initERN7android2spINS_10IMfllNvramEEE */
/* Demangled: mfll::MfllStrategy::init(android::sp<mfll::IMfllNvram>&) */
int _ZN4mfll12MfllStrategy4initERN7android2spINS_10IMfllNvramEEE(void);

/* Symbol: _ZN4mfll8MfllCore16do_CaptureSingleEPv */
/* Demangled: mfll::MfllCore::do_CaptureSingle(void*) */
int _ZN4mfll8MfllCore16do_CaptureSingleEPv(void);

/* Symbol: _ZN4mfll8MfllCore16syncAnnounceDoneEPNS_11MfllSyncObjE */
/* Demangled: mfll::MfllCore::syncAnnounceDone(mfll::MfllSyncObj*) */
int _ZN4mfll8MfllCore16syncAnnounceDoneEPNS_11MfllSyncObjE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE12do_constructEPvm(void);

/* Symbol: _ZN4mfll15MfllFeatureFeedC1Ev */
/* Demangled: mfll::MfllFeatureFeed::MfllFeatureFeed() */
int _ZN4mfll15MfllFeatureFeedC1Ev(void);

/* Symbol: _ZNK4mfll8MfllCore25getInputYuvFmtMemcWorkingEv */
/* Demangled: mfll::MfllCore::getInputYuvFmtMemcWorking() const */
int _ZNK4mfll8MfllCore25getInputYuvFmtMemcWorkingEv(void);

/* Symbol: _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m */
/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned long) */
int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m(void);

/* Symbol: _ZNSt3__114__split_bufferIPN6NS3Av39MetaSet_TERNS_9allocatorIS3_EEE10push_frontERKS3_ */
/* Demangled: std::__1::__split_buffer<NS3Av3::MetaSet_T*, std::__1::allocator<NS3Av3::MetaSet_T*>&>::push_front(NS3Av3::MetaSet_T* const&) */
int _ZNSt3__114__split_bufferIPN6NS3Av39MetaSet_TERNS_9allocatorIS3_EEE10push_frontERKS3_(void);

/* Symbol: _ZN4mfll8MfllCore15do_AllocYuvBaseEl */
/* Demangled: mfll::MfllCore::do_AllocYuvBase(long) */
int _ZN4mfll8MfllCore15do_AllocYuvBaseEl(void);

/* Symbol: _ZN4mfll8MfllCore16doAllocRawBufferEPv */
/* Demangled: mfll::MfllCore::doAllocRawBuffer(void*) */
int _ZN4mfll8MfllCore16doAllocRawBufferEPv(void);

/* Symbol: _ZN4mfll8MfllCore21do_MotionCompensationEPv */
/* Demangled: mfll::MfllCore::do_MotionCompensation(void*) */
int _ZN4mfll8MfllCore21do_MotionCompensationEPv(void);

/* Symbol: _ZN4mfll12MfllExifInfo4initEv */
/* Demangled: mfll::MfllExifInfo::init() */
int _ZN4mfll12MfllExifInfo4initEv(void);

/* Symbol: __atomic_store_8 */
/* Demangled: __atomic_store_8 */
int fn___atomic_store_8(void) __asm__("__atomic_store_8");

/* Symbol: _ZTVN4mfll9MfllCore2E */
/* Demangled: vtable for mfll::MfllCore2 */
extern void* _ZTVN4mfll9MfllCore2E;

/* Symbol: _ZN4mfll9MfllNvramC2Ev */
/* Demangled: mfll::MfllNvram::MfllNvram() */
int _ZN4mfll9MfllNvramC2Ev(void);

/* Symbol: _ZN4mfll8MfllCore18doMotionEstimationEPv */
/* Demangled: mfll::MfllCore::doMotionEstimation(void*) */
int _ZN4mfll8MfllCore18doMotionEstimationEPv(void);

/* Symbol: _ZN4mfll8MfllCoreD0Ev */
/* Demangled: mfll::MfllCore::~MfllCore() */
int _ZN4mfll8MfllCoreD0Ev(void);

/* Symbol: _ZNSt3__114__split_bufferIPPvRNS_9allocatorIS2_EEE9push_backEOS2_ */
/* Demangled: std::__1::__split_buffer<void**, std::__1::allocator<void**>&>::push_back(void**&&) */
int _ZNSt3__114__split_bufferIPPvRNS_9allocatorIS2_EEE9push_backEOS2_(void);

/* Symbol: _ZN4mfll8MfllCore15setMixingBufferERKNS_16MixYuvBufferTypeERKN7android2spINS_16IMfllImageBufferEEE */
/* Demangled: mfll::MfllCore::setMixingBuffer(mfll::MixYuvBufferType const&, android::sp<mfll::IMfllImageBuffer> const&) */
int _ZN4mfll8MfllCore15setMixingBufferERKNS_16MixYuvBufferTypeERKN7android2spINS_16IMfllImageBufferEEE(void);

/* Symbol: _ZN4mfll15MfllFeaturePerf14createInstanceEv */
/* Demangled: mfll::MfllFeaturePerf::createInstance() */
int _ZN4mfll15MfllFeaturePerf14createInstanceEv(void);

/* Symbol: _ZN4mfll15MfllImageBufferC2EPKcNS_21IMfllImageBuffer_FlagE */
/* Demangled: mfll::MfllImageBuffer::MfllImageBuffer(char const*, mfll::IMfllImageBuffer_Flag) */
int _ZN4mfll15MfllImageBufferC2EPKcNS_21IMfllImageBuffer_FlagE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN4mfll21IMfllImageBuffer_FlagENS_8weak_ptrINS2_21IMfllImageBufferQueueEEEEENS_22__unordered_map_hasherIS3_S7_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S7_NS_8equal_toIS3_EELb1EEENS_9allocatorIS7_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<mfll::IMfllImageBuffer_Flag, std::__1::weak_ptr<mfll::IMfllImageBufferQueue> >, std::__1::__unordered_map_hasher<mfll::IMfllImageBuffer_Flag, std::__1::__hash_value_type<mfll::IMfllImageBuffer_Flag, std::__1::weak_ptr<mfll::IMfllImageBufferQueue> >, std::__1::hash<mfll::IMfllImageBuffer_Flag>, true>, std::__1::__unordered_map_equal<mfll::IMfllImageBuffer_Flag, std::__1::__hash_value_type<mfll::IMfllImageBuffer_Flag, std::__1::weak_ptr<mfll::IMfllImageBufferQueue> >, std::__1::equal_to<mfll::IMfllImageBuffer_Flag>, true>, std::__1::allocator<std::__1::__hash_value_type<mfll::IMfllImageBuffer_Flag, std::__1::weak_ptr<mfll::IMfllImageBufferQueue> > > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN4mfll21IMfllImageBuffer_FlagENS_8weak_ptrINS2_21IMfllImageBufferQueueEEEEENS_22__unordered_map_hasherIS3_S7_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S7_NS_8equal_toIS3_EELb1EEENS_9allocatorIS7_EEE8__rehashEm(void);

/* Symbol: _ZTCNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE0_NS_13basic_ostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ofstream<char, std::__1::char_traits<char> > */
extern void* _ZTCNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE0_NS_13basic_ostreamIcS2_EE;

/* Symbol: _ZNSt3__15dequeIPN4mfll15MfllImageBufferENS_9allocatorIS3_EEE5eraseENS_16__deque_iteratorIS3_PKS3_RS8_PKS9_lLl512EEE */
/* Demangled: std::__1::deque<mfll::MfllImageBuffer*, std::__1::allocator<mfll::MfllImageBuffer*> >::erase(std::__1::__deque_iterator<mfll::MfllImageBuffer*, mfll::MfllImageBuffer* const*, mfll::MfllImageBuffer* const&, mfll::MfllImageBuffer* const* const*, long, 512l>) */
int _ZNSt3__15dequeIPN4mfll15MfllImageBufferENS_9allocatorIS3_EEE5eraseENS_16__deque_iteratorIS3_PKS3_RS8_PKS9_lLl512EEE(void);

/* Symbol: _ZN4mfll12MfllPropertyD0Ev */
/* Demangled: mfll::MfllProperty::~MfllProperty() */
int _ZN4mfll12MfllPropertyD0Ev(void);

/* Symbol: _ZNSt3__114__split_bufferIPN6NS3Av39MetaSet_TERNS_9allocatorIS3_EEE9push_backEOS3_ */
/* Demangled: std::__1::__split_buffer<NS3Av3::MetaSet_T*, std::__1::allocator<NS3Av3::MetaSet_T*>&>::push_back(NS3Av3::MetaSet_T*&&) */
int _ZNSt3__114__split_bufferIPN6NS3Av39MetaSet_TERNS_9allocatorIS3_EEE9push_backEOS3_(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE15do_move_forwardEPvPKvm(void);

/* Symbol: __cmptf2 */
/* Demangled: __cmptf2 */
int fn___cmptf2(void) __asm__("__cmptf2");

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _ZN4mfll8MfllCore17setPostviewBufferERKN7android2spINS_16IMfllImageBufferEEERKNS_8MfllRectE */
/* Demangled: mfll::MfllCore::setPostviewBuffer(android::sp<mfll::IMfllImageBuffer> const&, mfll::MfllRect const&) */
int _ZN4mfll8MfllCore17setPostviewBufferERKN7android2spINS_16IMfllImageBufferEEERKNS_8MfllRectE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIN4mfll9EventTypeEPKcEENS_19__map_value_compareIS3_S6_NS_4lessIS3_EELb1EEENS_9allocatorIS6_EEE12__find_equalIS3_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS6_PNS_11__tree_nodeIS6_SG_EElEERPNS_15__tree_end_nodeISI_EESJ_RKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<mfll::EventType, char const*>, std::__1::__map_value_compare<mfll::EventType, std::__1::__value_type<mfll::EventType, char const*>, std::__1::less<mfll::EventType>, true>, std::__1::allocator<std::__1::__value_type<mfll::EventType, char const*> > >::__find_equal<mfll::EventType>(std::__1::__tree_const_iterator<std::__1::__value_type<mfll::EventType, char const*>, std::__1::__tree_node<std::__1::__value_type<mfll::EventType, char const*>, void*>*, long>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, mfll::EventType const&) */
int _ZNSt3__16__treeINS_12__value_typeIN4mfll9EventTypeEPKcEENS_19__map_value_compareIS3_S6_NS_4lessIS3_EELb1EEENS_9allocatorIS6_EEE12__find_equalIS3_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS6_PNS_11__tree_nodeIS6_SG_EElEERPNS_15__tree_end_nodeISI_EESJ_RKT_(void);

/* Symbol: _ZN4mfll7MfllBss3bssERKNSt3__16vectorIN7android2spINS_16IMfllImageBufferEEENS1_9allocatorIS6_EEEERNS2_INS_16MfllMotionVectorENS7_ISC_EEEERNS2_IlNS7_IlEEEE */
/* Demangled: mfll::MfllBss::bss(std::__1::vector<android::sp<mfll::IMfllImageBuffer>, std::__1::allocator<android::sp<mfll::IMfllImageBuffer> > > const&, std::__1::vector<mfll::MfllMotionVector, std::__1::allocator<mfll::MfllMotionVector> >&, std::__1::vector<long, std::__1::allocator<long> >&) */
int _ZN4mfll7MfllBss3bssERKNSt3__16vectorIN7android2spINS_16IMfllImageBufferEEENS1_9allocatorIS6_EEEERNS2_INS_16MfllMotionVectorENS7_ISC_EEEERNS2_IlNS7_IlEEEE(void);

/* Symbol: _ZN4mfll7MfllBss4initERN7android2spINS_10IMfllNvramEEE */
/* Demangled: mfll::MfllBss::init(android::sp<mfll::IMfllNvram>&) */
int _ZN4mfll7MfllBss4initERN7android2spINS_10IMfllNvramEEE(void);

/* Symbol: _ZN4mfll8MfllCore16unlockSyncObjectEPNS_11MfllSyncObjE */
/* Demangled: mfll::MfllCore::unlockSyncObject(mfll::MfllSyncObj*) */
int _ZN4mfll8MfllCore16unlockSyncObjectEPNS_11MfllSyncObjE(void);

/* Symbol: _ZN4mfll11MfllCore2p519createConfidenceMapEmm */
/* Demangled: mfll::MfllCore2p5::createConfidenceMap(unsigned long, unsigned long) */
int _ZN4mfll11MfllCore2p519createConfidenceMapEmm(void);

/* Symbol: _ZZ17getExtFunctionMapvE13sExtFunctions */
/* Demangled: getExtFunctionMap()::sExtFunctions */
extern void* _ZZ17getExtFunctionMapvE13sExtFunctions;

/* Symbol: _ZN4mfll15MfllImageBuffer17getRealBufferSizeEv */
/* Demangled: mfll::MfllImageBuffer::getRealBufferSize() */
int _ZN4mfll15MfllImageBuffer17getRealBufferSizeEv(void);

/* Symbol: _ZN4mfll14MfllFeatureMrpD2Ev */
/* Demangled: mfll::MfllFeatureMrp::~MfllFeatureMrp() */
int _ZN4mfll14MfllFeatureMrpD2Ev(void);

/* Symbol: _ZN4mfll15MfllImageBuffer9syncCacheEv */
/* Demangled: mfll::MfllImageBuffer::syncCache() */
int _ZN4mfll15MfllImageBuffer9syncCacheEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE12do_constructEPvm(void);

/* Symbol: _ZNK4mfll8MfllCore21getInputYuvFmtYuvBaseEv */
/* Demangled: mfll::MfllCore::getInputYuvFmtYuvBase() const */
int _ZNK4mfll8MfllCore21getInputYuvFmtYuvBaseEv(void);

/* Symbol: _ZNSt3__16vectorIPN7android2spIN4mfll16IMfllImageBufferEEENS_9allocatorIS6_EEE8__appendEm */
/* Demangled: std::__1::vector<android::sp<mfll::IMfllImageBuffer>*, std::__1::allocator<android::sp<mfll::IMfllImageBuffer>*> >::__append(unsigned long) */
int _ZNSt3__16vectorIPN7android2spIN4mfll16IMfllImageBufferEEENS_9allocatorIS6_EEE8__appendEm(void);

/* Symbol: _ZN4mfll8MfllMemcD2Ev */
/* Demangled: mfll::MfllMemc::~MfllMemc() */
int _ZN4mfll8MfllMemcD2Ev(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN4mfll12ePLATFORMCFGElEENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<mfll::ePLATFORMCFG, long>, std::__1::__unordered_map_hasher<mfll::ePLATFORMCFG, std::__1::__hash_value_type<mfll::ePLATFORMCFG, long>, std::__1::hash<mfll::ePLATFORMCFG>, true>, std::__1::__unordered_map_equal<mfll::ePLATFORMCFG, std::__1::__hash_value_type<mfll::ePLATFORMCFG, long>, std::__1::equal_to<mfll::ePLATFORMCFG>, true>, std::__1::allocator<std::__1::__hash_value_type<mfll::ePLATFORMCFG, long> > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN4mfll12ePLATFORMCFGElEENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEE6rehashEm(void);

/* Symbol: _ZNSt3__114__split_bufferIPPN5NSCam12IImageBufferENS_9allocatorIS4_EEE10push_frontEOS4_ */
/* Demangled: std::__1::__split_buffer<NSCam::IImageBuffer**, std::__1::allocator<NSCam::IImageBuffer**> >::push_front(NSCam::IImageBuffer**&&) */
int _ZNSt3__114__split_bufferIPPN5NSCam12IImageBufferENS_9allocatorIS4_EEE10push_frontEOS4_(void);

/* Symbol: _ZN7android2spIN4mfll8IMfllMfbEEaSEPS2_ */
/* Demangled: android::sp<mfll::IMfllMfb>::operator=(mfll::IMfllMfb*) */
int _ZN7android2spIN4mfll8IMfllMfbEEaSEPS2_(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIiEEvOT_ */
/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__push_back_slow_path<int>(int&&) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIiEEvOT_(void);

/* Symbol: _ZN4mfll15MfllImageBufferD0Ev */
/* Demangled: mfll::MfllImageBuffer::~MfllImageBuffer() */
int _ZN4mfll15MfllImageBufferD0Ev(void);

/* Symbol: _ZN4mfll12MfllProperty12readPropertyERKNS_11tagPropertyEi */
/* Demangled: mfll::MfllProperty::readProperty(mfll::tagProperty const&, int) */
int _ZN4mfll12MfllProperty12readPropertyERKNS_11tagPropertyEi(void);

/* Symbol: _ZN4mfll14MfllFeatureMrpC1Ev */
/* Demangled: mfll::MfllFeatureMrp::MfllFeatureMrp() */
int _ZN4mfll14MfllFeatureMrpC1Ev(void);

/* Symbol: _ZN4mfll8MfllCore17tellsFuturePhase2Ev */
/* Demangled: mfll::MfllCore::tellsFuturePhase2() */
int _ZN4mfll8MfllCore17tellsFuturePhase2Ev(void);

/* Symbol: _ZN4mfll8MfllCore20doMotionCompensationEPv */
/* Demangled: mfll::MfllCore::doMotionCompensation(void*) */
int _ZN4mfll8MfllCore20doMotionCompensationEPv(void);

/* Symbol: _ZN7android2spIN4mfll13IMfllCapturerEEaSEPS2_ */
/* Demangled: android::sp<mfll::IMfllCapturer>::operator=(mfll::IMfllCapturer*) */
int _ZN7android2spIN4mfll13IMfllCapturerEEaSEPS2_(void);

/* Symbol: _ZN4mfll7MfllBssC2Ev */
/* Demangled: mfll::MfllBss::MfllBss() */
int _ZN4mfll7MfllBssC2Ev(void);

/* Symbol: _ZN4mfll12MfllStrategyD2Ev */
/* Demangled: mfll::MfllStrategy::~MfllStrategy() */
int _ZN4mfll12MfllStrategyD2Ev(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj(void);

/* Symbol: _ZN4mfll8MfllMemcC1Ev */
/* Demangled: mfll::MfllMemc::MfllMemc() */
int _ZN4mfll8MfllMemcC1Ev(void);

/* Symbol: _ZN4mfll7MfllMfbD0Ev */
/* Demangled: mfll::MfllMfb::~MfllMfb() */
int _ZN4mfll7MfllMfbD0Ev(void);

/* Symbol: _ZN4mfll9MfllNvram8getChunkEPm */
/* Demangled: mfll::MfllNvram::getChunk(unsigned long*) */
int _ZN4mfll9MfllNvram8getChunkEPm(void);

/* Symbol: _ZN4mfll11MfllCore2p510getVersionEv */
/* Demangled: mfll::MfllCore2p5::getVersion() */
int _ZN4mfll11MfllCore2p510getVersionEv(void);

/* Symbol: _ZN4mfll15MfllYuvCapturer19getCapturedFrameNumEv */
/* Demangled: mfll::MfllYuvCapturer::getCapturedFrameNum() */
int _ZN4mfll15MfllYuvCapturer19getCapturedFrameNumEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPPN4mfll15MfllImageBufferERNS_9allocatorIS4_EEE9push_backEOS4_ */
/* Demangled: std::__1::__split_buffer<mfll::MfllImageBuffer**, std::__1::allocator<mfll::MfllImageBuffer**>&>::push_back(mfll::MfllImageBuffer**&&) */
int _ZNSt3__114__split_bufferIPPN4mfll15MfllImageBufferERNS_9allocatorIS4_EEE9push_backEOS4_(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE7do_copyEPvPKvm(void);

/* Symbol: _ZN4mfll8MfllCore11getSensorIdEv */
/* Demangled: mfll::MfllCore::getSensorId() */
int _ZN4mfll8MfllCore11getSensorIdEv(void);

/* Symbol: _ZN4mfll12MfllProperty18getMfbP2DirectLinkEv */
/* Demangled: mfll::MfllProperty::getMfbP2DirectLink() */
int _ZN4mfll12MfllProperty18getMfbP2DirectLinkEv(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekpos(std::__1::fpos<mbstate_t>, unsigned int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj(void);

/* Symbol: _ZN4mfll8MfllCore18do_EncodeYuvGoldenEl */
/* Demangled: mfll::MfllCore::do_EncodeYuvGolden(long) */
int _ZN4mfll8MfllCore18do_EncodeYuvGoldenEl(void);

/* Symbol: _ZN4mfll9MfhrCore2C2Ev */
/* Demangled: mfll::MfhrCore2::MfhrCore2() */
int _ZN4mfll9MfhrCore2C2Ev(void);

/* Symbol: _ZN4mfll10MfllEventsD2Ev */
/* Demangled: mfll::MfllEvents::~MfllEvents() */
int _ZN4mfll10MfllEventsD2Ev(void);

/* Symbol: _ZN4mfll12MfllExifInfo10updateInfoEjj */
/* Demangled: mfll::MfllExifInfo::updateInfo(unsigned int, unsigned int) */
int _ZN4mfll12MfllExifInfo10updateInfoEjj(void);

/* Symbol: _ZNKSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN4mfll7MfllErrEPNS9_13IMfllExifInfoERKNS_5dequeIPvNS5_ISE_EEEEEEEEENS_22__unordered_map_hasherIS7_SL_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SL_NS_8equal_toIS7_EELb1EEENS5_ISL_EEE4findIS7_EENS_21__hash_const_iteratorIPNS_11__hash_nodeISL_SE_EEEERKT_ */
/* Demangled: std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<mfll::MfllErr (mfll::IMfllExifInfo*, std::__1::deque<void*, std::__1::allocator<void*> > const&)> >, void*>*> std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<mfll::MfllErr (mfll::IMfllExifInfo*, std::__1::deque<void*, std::__1::allocator<void*> > const&)> >, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<mfll::MfllErr (mfll::IMfllExifInfo*, std::__1::deque<void*, std::__1::allocator<void*> > const&)> >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<mfll::MfllErr (mfll::IMfllExifInfo*, std::__1::deque<void*, std::__1::allocator<void*> > const&)> >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<mfll::MfllErr (mfll::IMfllExifInfo*, std::__1::deque<void*, std::__1::allocator<void*> > const&)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) const */
int _ZNKSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN4mfll7MfllErrEPNS9_13IMfllExifInfoERKNS_5dequeIPvNS5_ISE_EEEEEEEEENS_22__unordered_map_hasherIS7_SL_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SL_NS_8equal_toIS7_EELb1EEENS5_ISL_EEE4findIS7_EENS_21__hash_const_iteratorIPNS_11__hash_nodeISL_SE_EEEERKT_(void);

/* Symbol: _ZN4mfll15MfllImageBuffer20getBufStridesInBytesEm */
/* Demangled: mfll::MfllImageBuffer::getBufStridesInBytes(unsigned long) */
int _ZN4mfll15MfllImageBuffer20getBufStridesInBytesEm(void);

/* Symbol: _ZN4mfll12MfllStrategyC1Ev */
/* Demangled: mfll::MfllStrategy::MfllStrategy() */
int _ZN4mfll12MfllStrategyC1Ev(void);

/* Symbol: _ZN4mfll13IMfllCapturer14createInstanceENS0_4TypeE */
/* Demangled: mfll::IMfllCapturer::createInstance(mfll::IMfllCapturer::Type) */
int _ZN4mfll13IMfllCapturer14createInstanceENS0_4TypeE(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZNSt3__15dequeIN4mfll17MfllOperationSync3JOBENS_9allocatorIS3_EEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<mfll::MfllOperationSync::JOB, std::__1::allocator<mfll::MfllOperationSync::JOB> >::__add_back_capacity() */
int _ZNSt3__15dequeIN4mfll17MfllOperationSync3JOBENS_9allocatorIS3_EEE19__add_back_capacityEv(void);

/* Symbol: _ZN4mfll12MfllExifInfo10updateInfoEPNS_10IMfllNvramE */
/* Demangled: mfll::MfllExifInfo::updateInfo(mfll::IMfllNvram*) */
int _ZN4mfll12MfllExifInfo10updateInfoEPNS_10IMfllNvramE(void);

/* Symbol: _ZN4mfll8MfllMemc17fix_mfb_copy_nv12EPhS1_iiiii */
/* Demangled: mfll::MfllMemc::fix_mfb_copy_nv12(unsigned char*, unsigned char*, int, int, int, int, int) */
int _ZN4mfll8MfllMemc17fix_mfb_copy_nv12EPhS1_iiiii(void);

/* Symbol: _ZNSt3__112__deque_baseIN4mfll15ImageBufferPackENS_9allocatorIS2_EEE5clearEv */
/* Demangled: std::__1::__deque_base<mfll::ImageBufferPack, std::__1::allocator<mfll::ImageBufferPack> >::clear() */
int _ZNSt3__112__deque_baseIN4mfll15ImageBufferPackENS_9allocatorIS2_EEE5clearEv(void);

/* Symbol: _ZN4mfll15MfllYuvCapturerC2Ev */
/* Demangled: mfll::MfllYuvCapturer::MfllYuvCapturer() */
int _ZN4mfll15MfllYuvCapturerC2Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN4mfll10MfllEventsC1Ev */
/* Demangled: mfll::MfllEvents::MfllEvents() */
int _ZN4mfll10MfllEventsC1Ev(void);

/* Symbol: _ZNSt3__16vectorIN4mfll9EventTypeENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_ */
/* Demangled: void std::__1::vector<mfll::EventType, std::__1::allocator<mfll::EventType> >::__push_back_slow_path<mfll::EventType>(mfll::EventType&&) */
int _ZNSt3__16vectorIN4mfll9EventTypeENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void);

/* Symbol: _ZN4mfll15MfllFeatureFeed7onEventENS_9EventTypeERNS_15MfllEventStatusEPvS4_S4_ */
/* Demangled: mfll::MfllFeatureFeed::onEvent(mfll::EventType, mfll::MfllEventStatus&, void*, void*, void*) */
int _ZN4mfll15MfllFeatureFeed7onEventENS_9EventTypeERNS_15MfllEventStatusEPvS4_S4_(void);

/* Symbol: _ZN4mfll12MfllCapturer13setPostNrTypeERKNS_18NoiseReductionTypeE */
/* Demangled: mfll::MfllCapturer::setPostNrType(mfll::NoiseReductionType const&) */
int _ZN4mfll12MfllCapturer13setPostNrTypeERKNS_18NoiseReductionTypeE(void);

/* Symbol: _ZN4mfll8MfllCore16getVersionStringEv */
/* Demangled: mfll::MfllCore::getVersionString() */
int _ZN4mfll8MfllCore16getVersionStringEv(void);

/* Symbol: _ZN4mfll8MfllCore17doAllocYuvWorkingEl */
/* Demangled: mfll::MfllCore::doAllocYuvWorking(long) */
int _ZN4mfll8MfllCore17doAllocYuvWorkingEl(void);

/* Symbol: _ZN4mfll8MfllCore28setBypassOptionAsSingleFrameEv */
/* Demangled: mfll::MfllCore::setBypassOptionAsSingleFrame() */
int _ZN4mfll8MfllCore28setBypassOptionAsSingleFrameEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPiRNS_9allocatorIS1_EEE10push_frontERKS1_ */
/* Demangled: std::__1::__split_buffer<int*, std::__1::allocator<int*>&>::push_front(int* const&) */
int _ZNSt3__114__split_bufferIPiRNS_9allocatorIS1_EEE10push_frontERKS1_(void);

/* Symbol: _ZN4mfll8MfllMemc10getForceMeEPvm */
/* Demangled: mfll::MfllMemc::getForceMe(void*, unsigned long) */
int _ZN4mfll8MfllMemc10getForceMeEPvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNSt3__114__split_bufferIPPKcNS_9allocatorIS3_EEE9push_backEOS3_ */
/* Demangled: std::__1::__split_buffer<char const**, std::__1::allocator<char const**> >::push_back(char const**&&) */
int _ZNSt3__114__split_bufferIPPKcNS_9allocatorIS3_EEE9push_backEOS3_(void);

/* Symbol: _ZTVN4mfll11IMfllEventsE */
/* Demangled: vtable for mfll::IMfllEvents */
extern void* _ZTVN4mfll11IMfllEventsE;

/* Symbol: _ZN4mfll12MfllExifInfoD1Ev */
/* Demangled: mfll::MfllExifInfo::~MfllExifInfo() */
int _ZN4mfll12MfllExifInfoD1Ev(void);

/* Symbol: _ZNSt3__114__split_bufferIPPN4mfll15MfllImageBufferENS_9allocatorIS4_EEE10push_frontEOS4_ */
/* Demangled: std::__1::__split_buffer<mfll::MfllImageBuffer**, std::__1::allocator<mfll::MfllImageBuffer**> >::push_front(mfll::MfllImageBuffer**&&) */
int _ZNSt3__114__split_bufferIPPN4mfll15MfllImageBufferENS_9allocatorIS4_EEE10push_frontEOS4_(void);

/* Symbol: _ZN4mfll9IMfllGyro14createInstanceEv */
/* Demangled: mfll::IMfllGyro::createInstance() */
int _ZN4mfll9IMfllGyro14createInstanceEv(void);

/* Symbol: _ZN4mfll8MfllCore8doCancelEv */
/* Demangled: mfll::MfllCore::doCancel() */
int _ZN4mfll8MfllCore8doCancelEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN4mfll12ePLATFORMCFGElEENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEED2Ev */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<mfll::ePLATFORMCFG, long>, std::__1::__unordered_map_hasher<mfll::ePLATFORMCFG, std::__1::__hash_value_type<mfll::ePLATFORMCFG, long>, std::__1::hash<mfll::ePLATFORMCFG>, true>, std::__1::__unordered_map_equal<mfll::ePLATFORMCFG, std::__1::__hash_value_type<mfll::ePLATFORMCFG, long>, std::__1::equal_to<mfll::ePLATFORMCFG>, true>, std::__1::allocator<std::__1::__hash_value_type<mfll::ePLATFORMCFG, long> > >::~__hash_table() */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN4mfll12ePLATFORMCFGElEENS_22__unordered_map_hasherIS3_S4_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S4_NS_8equal_toIS3_EELb1EEENS_9allocatorIS4_EEED2Ev(void);

/* Symbol: _ZNSt3__15dequeIPN5NSCam12IImageBufferENS_9allocatorIS3_EEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<NSCam::IImageBuffer*, std::__1::allocator<NSCam::IImageBuffer*> >::__add_back_capacity() */
int _ZNSt3__15dequeIPN5NSCam12IImageBufferENS_9allocatorIS3_EEE19__add_back_capacityEv(void);

/* Symbol: _ZN4mfll13IMfllStrategy15destroyInstanceEv */
/* Demangled: mfll::IMfllStrategy::destroyInstance() */
int _ZN4mfll13IMfllStrategy15destroyInstanceEv(void);

/* Symbol: _ZN4mfll8MfllCore17setInputYuvFormatENS_11InputYuvFmtE */
/* Demangled: mfll::MfllCore::setInputYuvFormat(mfll::InputYuvFmt) */
int _ZN4mfll8MfllCore17setInputYuvFormatENS_11InputYuvFmtE(void);

/* Symbol: _ZN4mfll9MfhrCore219setMfhrByPassOptionEv */
/* Demangled: mfll::MfhrCore2::setMfhrByPassOption() */
int _ZN4mfll9MfhrCore219setMfhrByPassOptionEv(void);

/* Symbol: _ZNSt3__113move_backwardIPN4mfll15MfllImageBufferEPS3_RS3_PS4_lLl512ES3_S4_S5_S6_lLl512EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS7_IT_T0_T1_T2_T3_XT4_EEESJ_SD_ */
/* Demangled: std::__1::__deque_iterator<mfll::MfllImageBuffer*, mfll::MfllImageBuffer**, mfll::MfllImageBuffer*&, mfll::MfllImageBuffer***, long, 512l> std::__1::move_backward<mfll::MfllImageBuffer*, mfll::MfllImageBuffer**, mfll::MfllImageBuffer*&, mfll::MfllImageBuffer***, long, 512l, mfll::MfllImageBuffer*, mfll::MfllImageBuffer**, mfll::MfllImageBuffer*&, mfll::MfllImageBuffer***, long, 512l>(std::__1::__deque_iterator<mfll::MfllImageBuffer*, mfll::MfllImageBuffer**, mfll::MfllImageBuffer*&, mfll::MfllImageBuffer***, long, 512l>, std::__1::__deque_iterator<mfll::MfllImageBuffer*, mfll::MfllImageBuffer**, mfll::MfllImageBuffer*&, mfll::MfllImageBuffer***, long, 512l>, std::__1::__deque_iterator<mfll::MfllImageBuffer*, mfll::MfllImageBuffer**, mfll::MfllImageBuffer*&, mfll::MfllImageBuffer***, long, 512l>) */
int _ZNSt3__113move_backwardIPN4mfll15MfllImageBufferEPS3_RS3_PS4_lLl512ES3_S4_S5_S6_lLl512EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS7_IT_T0_T1_T2_T3_XT4_EEESJ_SD_(void);

/* Symbol: _ZN4mfll8MfllMemc26getAlgorithmWorkBufferSizeEPm */
/* Demangled: mfll::MfllMemc::getAlgorithmWorkBufferSize(unsigned long*) */
int _ZN4mfll8MfllMemc26getAlgorithmWorkBufferSizeEPm(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIcEEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, std::__1::shared_ptr<char> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::shared_ptr<char> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<char> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<char> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::shared_ptr<char> > > >::__emplace_unique_key_args<int, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>, std::__1::tuple<> >(int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIcEEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSK_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS4_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN4mfll8MfllCore5doBssEl */
/* Demangled: mfll::MfllCore::doBss(long) */
int _ZN4mfll8MfllCore5doBssEl(void);

/* Symbol: _ZNSt3__120__shared_ptr_pointerIPcNS_14default_deleteIcEENS_9allocatorIcEEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_pointer<char*, std::__1::default_delete<char>, std::__1::allocator<char> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_pointerIPcNS_14default_deleteIcEENS_9allocatorIcEEE16__on_zero_sharedEv(void);

/* Symbol: _ZN4mfll15MfllFeatureDumpD1Ev */
/* Demangled: mfll::MfllFeatureDump::~MfllFeatureDump() */
int _ZN4mfll15MfllFeatureDumpD1Ev(void);

/* Symbol: _ZN4mfll8MfllCore17doAllocRrzoBufferEPv */
/* Demangled: mfll::MfllCore::doAllocRrzoBuffer(void*) */
int _ZN4mfll8MfllCore17doAllocRrzoBufferEPv(void);

/* Symbol: _ZN4mfll15MfllFeaturePerf21getListenedEventTypesEv */
/* Demangled: mfll::MfllFeaturePerf::getListenedEventTypes() */
int _ZN4mfll15MfllFeaturePerf21getListenedEventTypesEv(void);

/* Symbol: _ZN4mfll7MfllMfb5blendEPNS_16IMfllImageBufferES2_S2_S2_S2_ */
/* Demangled: mfll::MfllMfb::blend(mfll::IMfllImageBuffer*, mfll::IMfllImageBuffer*, mfll::IMfllImageBuffer*, mfll::IMfllImageBuffer*, mfll::IMfllImageBuffer*) */
int _ZN4mfll7MfllMfb5blendEPNS_16IMfllImageBufferES2_S2_S2_S2_(void);

/* Symbol: _ZNSt3__113move_backwardIN4mfll17MfllOperationSync3JOBEPS3_RS3_PS4_lLl1024ES3_S4_S5_S6_lLl1024EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS7_IT_T0_T1_T2_T3_XT4_EEESJ_SD_ */
/* Demangled: std::__1::__deque_iterator<mfll::MfllOperationSync::JOB, mfll::MfllOperationSync::JOB*, mfll::MfllOperationSync::JOB&, mfll::MfllOperationSync::JOB**, long, 1024l> std::__1::move_backward<mfll::MfllOperationSync::JOB, mfll::MfllOperationSync::JOB*, mfll::MfllOperationSync::JOB&, mfll::MfllOperationSync::JOB**, long, 1024l, mfll::MfllOperationSync::JOB, mfll::MfllOperationSync::JOB*, mfll::MfllOperationSync::JOB&, mfll::MfllOperationSync::JOB**, long, 1024l>(std::__1::__deque_iterator<mfll::MfllOperationSync::JOB, mfll::MfllOperationSync::JOB*, mfll::MfllOperationSync::JOB&, mfll::MfllOperationSync::JOB**, long, 1024l>, std::__1::__deque_iterator<mfll::MfllOperationSync::JOB, mfll::MfllOperationSync::JOB*, mfll::MfllOperationSync::JOB&, mfll::MfllOperationSync::JOB**, long, 1024l>, std::__1::__deque_iterator<mfll::MfllOperationSync::JOB, mfll::MfllOperationSync::JOB*, mfll::MfllOperationSync::JOB&, mfll::MfllOperationSync::JOB**, long, 1024l>) */
int _ZNSt3__113move_backwardIN4mfll17MfllOperationSync3JOBEPS3_RS3_PS4_lLl1024ES3_S4_S5_S6_lLl1024EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS7_IT_T0_T1_T2_T3_XT4_EEESJ_SD_(void);

/* Symbol: _ZN4mfll12MfllProperty11getExposureEv */
/* Demangled: mfll::MfllProperty::getExposure() */
int _ZN4mfll12MfllProperty11getExposureEv(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev(void);

/* Symbol: _ZN4mfll12MfllCapturer13captureFramesEjRNSt3__16vectorIPN7android2spINS_16IMfllImageBufferEEENS1_9allocatorIS7_EEEESB_SB_RNS2_IPNS_16MfllMotionVectorENS8_ISD_EEEERNS2_IiNS8_IiEEEE */
/* Demangled: mfll::MfllCapturer::captureFrames(unsigned int, std::__1::vector<android::sp<mfll::IMfllImageBuffer>*, std::__1::allocator<android::sp<mfll::IMfllImageBuffer>*> >&, std::__1::vector<android::sp<mfll::IMfllImageBuffer>*, std::__1::allocator<android::sp<mfll::IMfllImageBuffer>*> >&, std::__1::vector<android::sp<mfll::IMfllImageBuffer>*, std::__1::allocator<android::sp<mfll::IMfllImageBuffer>*> >&, std::__1::vector<mfll::MfllMotionVector*, std::__1::allocator<mfll::MfllMotionVector*> >&, std::__1::vector<int, std::__1::allocator<int> >&) */
int _ZN4mfll12MfllCapturer13captureFramesEjRNSt3__16vectorIPN7android2spINS_16IMfllImageBufferEEENS1_9allocatorIS7_EEEESB_SB_RNS2_IPNS_16MfllMotionVectorENS8_ISD_EEEERNS2_IiNS8_IiEEEE(void);

/* Symbol: _ZN4mfll15MfllFeaturePerfD0Ev */
/* Demangled: mfll::MfllFeaturePerf::~MfllFeaturePerf() */
int _ZN4mfll15MfllFeaturePerfD0Ev(void);

/* Symbol: _ZN4mfll15MfllImageBuffer8loadFileEPKc */
/* Demangled: mfll::MfllImageBuffer::loadFile(char const*) */
int _ZN4mfll15MfllImageBuffer8loadFileEPKc(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEEE */
/* Demangled: vtable for android::Vector<NSCam::NSIoPipe::ModuleInfo> */
extern void* _ZTVN7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEEE;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIcEEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::shared_ptr<char> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<char> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<char> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::shared_ptr<char> > > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIcEEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE8__rehashEm(void);

/* Symbol: _ZN4mfll12MfllProperty13getCaptureNumEv */
/* Demangled: mfll::MfllProperty::getCaptureNum() */
int _ZN4mfll12MfllProperty13getCaptureNumEv(void);

/* Symbol: _ZN4mfll15MfllYuvCapturer13captureFramesEjRNSt3__16vectorIPN7android2spINS_16IMfllImageBufferEEENS1_9allocatorIS7_EEEESB_SB_RNS2_IPNS_16MfllMotionVectorENS8_ISD_EEEERNS2_IiNS8_IiEEEE */
/* Demangled: mfll::MfllYuvCapturer::captureFrames(unsigned int, std::__1::vector<android::sp<mfll::IMfllImageBuffer>*, std::__1::allocator<android::sp<mfll::IMfllImageBuffer>*> >&, std::__1::vector<android::sp<mfll::IMfllImageBuffer>*, std::__1::allocator<android::sp<mfll::IMfllImageBuffer>*> >&, std::__1::vector<android::sp<mfll::IMfllImageBuffer>*, std::__1::allocator<android::sp<mfll::IMfllImageBuffer>*> >&, std::__1::vector<mfll::MfllMotionVector*, std::__1::allocator<mfll::MfllMotionVector*> >&, std::__1::vector<int, std::__1::allocator<int> >&) */
int _ZN4mfll15MfllYuvCapturer13captureFramesEjRNSt3__16vectorIPN7android2spINS_16IMfllImageBufferEEENS1_9allocatorIS7_EEEESB_SB_RNS2_IPNS_16MfllMotionVectorENS8_ISD_EEEERNS2_IiNS8_IiEEEE(void);

/* Symbol: _ZTVN4mfll15MfllImageBufferE */
/* Demangled: vtable for mfll::MfllImageBuffer */
extern void* _ZTVN4mfll15MfllImageBufferE;

/* Symbol: _ZN4mfll11MfllCore2p513releaseBufferERKNS_10MfllBufferEi */
/* Demangled: mfll::MfllCore2p5::releaseBuffer(mfll::MfllBuffer const&, int) */
int _ZN4mfll11MfllCore2p513releaseBufferERKNS_10MfllBufferEi(void);

/* Symbol: _ZN4mfll15MfllImageBuffer14mapImageFormatERKNS_11ImageFormatEb */
/* Demangled: mfll::MfllImageBuffer::mapImageFormat(mfll::ImageFormat const&, bool) */
int _ZN4mfll15MfllImageBuffer14mapImageFormatERKNS_11ImageFormatEb(void);

/* Symbol: _ZNSt3__114__split_bufferIPPKcRNS_9allocatorIS3_EEE9push_backEOS3_ */
/* Demangled: std::__1::__split_buffer<char const**, std::__1::allocator<char const**>&>::push_back(char const**&&) */
int _ZNSt3__114__split_bufferIPPKcRNS_9allocatorIS3_EEE9push_backEOS3_(void);

/* Symbol: _ZNK4mfll8MfllCore17getMiddlewareInfoEv */
/* Demangled: mfll::MfllCore::getMiddlewareInfo() const */
int _ZNK4mfll8MfllCore17getMiddlewareInfoEv(void);

/* Symbol: _ZN4mfll12MfllProperty17getForceMmdvfsOffEv */
/* Demangled: mfll::MfllProperty::getForceMmdvfsOff() */
int _ZN4mfll12MfllProperty17getForceMmdvfsOffEv(void);

/* Symbol: _ZN4mfll15MfllFeatureFeedD1Ev */
/* Demangled: mfll::MfllFeatureFeed::~MfllFeatureFeed() */
int _ZN4mfll15MfllFeatureFeedD1Ev(void);

/* Symbol: _ZN4mfll15MfllImageBuffer18convertImageFormatERKNS_11ImageFormatE */
/* Demangled: mfll::MfllImageBuffer::convertImageFormat(mfll::ImageFormat const&) */
int _ZN4mfll15MfllImageBuffer18convertImageFormatERKNS_11ImageFormatE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE12do_constructEPvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE8do_splatEPvPKvm(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam8NSIoPipe10ExtraParamEEE */
/* Demangled: vtable for android::Vector<NSCam::NSIoPipe::ExtraParam> */
extern void* _ZTVN7android6VectorIN5NSCam8NSIoPipe10ExtraParamEEE;

/* Symbol: _ZN4mfll12MfllCapturerD0Ev */
/* Demangled: mfll::MfllCapturer::~MfllCapturer() */
int _ZN4mfll12MfllCapturerD0Ev(void);

/* Symbol: _ZNK4mfll8MfllCore21getInputYuvFmtYuvFullEv */
/* Demangled: mfll::MfllCore::getInputYuvFmtYuvFull() const */
int _ZNK4mfll8MfllCore21getInputYuvFmtYuvFullEv(void);

/* Symbol: _ZN4mfll11IMfllEvents15destroyInstanceEv */
/* Demangled: mfll::IMfllEvents::destroyInstance() */
int _ZN4mfll11IMfllEvents15destroyInstanceEv(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPcl */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::setbuf(char*, long) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPcl(void);

/* Symbol: _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE */
/* Demangled: vtable for std::__1::basic_filebuf<char, std::__1::char_traits<char> > */
extern void* _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE;

/* Symbol: _ZN4mfll12MfllExifInfo10getInfoMapEv */
/* Demangled: mfll::MfllExifInfo::getInfoMap() */
int _ZN4mfll12MfllExifInfo10getInfoMapEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPPN5NSCam12IImageBufferERNS_9allocatorIS4_EEE9push_backEOS4_ */
/* Demangled: std::__1::__split_buffer<NSCam::IImageBuffer**, std::__1::allocator<NSCam::IImageBuffer**>&>::push_back(NSCam::IImageBuffer**&&) */
int _ZNSt3__114__split_bufferIPPN5NSCam12IImageBufferERNS_9allocatorIS4_EEE9push_backEOS4_(void);

/* Symbol: _ZN4mfll9MfllNvramD2Ev */
/* Demangled: mfll::MfllNvram::~MfllNvram() */
int _ZN4mfll9MfllNvramD2Ev(void);

/* Symbol: _ZN4mfll15MfllYuvCapturer15dispatchOnEventERKNS_9EventTypeERNS_15MfllEventStatusEPvS6_ */
/* Demangled: mfll::MfllYuvCapturer::dispatchOnEvent(mfll::EventType const&, mfll::MfllEventStatus&, void*, void*) */
int _ZN4mfll15MfllYuvCapturer15dispatchOnEventERKNS_9EventTypeERNS_15MfllEventStatusEPvS6_(void);

/* Symbol: _ZGVZ17getExtFunctionMapvE13sExtFunctions */
/* Demangled: guard variable for getExtFunctionMap()::sExtFunctions */
extern void* _ZGVZ17getExtFunctionMapvE13sExtFunctions;

/* Symbol: _ZN4mfll12MfllCapturer20queueSourceLcsoImageERN7android2spINS_16IMfllImageBufferEEE */
/* Demangled: mfll::MfllCapturer::queueSourceLcsoImage(android::sp<mfll::IMfllImageBuffer>&) */
int _ZN4mfll12MfllCapturer20queueSourceLcsoImageERN7android2spINS_16IMfllImageBufferEEE(void);

/* Symbol: _ZN4mfll15MfllImageBuffer8saveFileEPKcb */
/* Demangled: mfll::MfllImageBuffer::saveFile(char const*, bool) */
int _ZN4mfll15MfllImageBuffer8saveFileEPKcb(void);

/* Symbol: _ZN4mfll7MfllMfb11setMfllCoreEPNS_9IMfllCoreE */
/* Demangled: mfll::MfllMfb::setMfllCore(mfll::IMfllCore*) */
int _ZN4mfll7MfllMfb11setMfllCoreEPNS_9IMfllCoreE(void);

/* Symbol: _ZN4mfll9MfllNvram11chunkMfnrThEPm */
/* Demangled: mfll::MfllNvram::chunkMfnrTh(unsigned long*) */
int _ZN4mfll9MfllNvram11chunkMfnrThEPm(void);

/* Symbol: _ZN4mfll9MfllNvram5chunkEPm */
/* Demangled: mfll::MfllNvram::chunk(unsigned long*) */
int _ZN4mfll9MfllNvram5chunkEPm(void);

/* Symbol: _ZN4mfll12MfllCapturer20queueSourceMonoImageERN7android2spINS_16IMfllImageBufferEEE */
/* Demangled: mfll::MfllCapturer::queueSourceMonoImage(android::sp<mfll::IMfllImageBuffer>&) */
int _ZN4mfll12MfllCapturer20queueSourceMonoImageERN7android2spINS_16IMfllImageBufferEEE(void);

/* Symbol: _ZTVN4mfll13IMfllCapturerE */
/* Demangled: vtable for mfll::IMfllCapturer */
extern void* _ZTVN4mfll13IMfllCapturerE;

/* Symbol: _ZN4mfll8MfllCore15tellsFutureMemcEv */
/* Demangled: mfll::MfllCore::tellsFutureMemc() */
int _ZN4mfll8MfllCore15tellsFutureMemcEv(void);

/* Symbol: _ZN4mfll9MfllNvramC1Ev */
/* Demangled: mfll::MfllNvram::MfllNvram() */
int _ZN4mfll9MfllNvramC1Ev(void);

/* Symbol: _ZTVN4mfll8MfllCoreE */
/* Demangled: vtable for mfll::MfllCore */
extern void* _ZTVN4mfll8MfllCoreE;

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE8do_splatEPvPKvm(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_pointerIPcNS_14default_deleteIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::__shared_ptr_pointer<char*, std::__1::default_delete<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__120__shared_ptr_pointerIPcNS_14default_deleteIcEENS_9allocatorIcEEEE;

/* Symbol: _ZN4mfll12MfllProperty13getFullSizeMcEv */
/* Demangled: mfll::MfllProperty::getFullSizeMc() */
int _ZN4mfll12MfllProperty13getFullSizeMcEv(void);

/* Symbol: _ZTVN4mfll14MfllFeatureMrpE */
/* Demangled: vtable for mfll::MfllFeatureMrp */
extern void* _ZTVN4mfll14MfllFeatureMrpE;

/* Symbol: _ZNSt3__114__split_bufferIPPvNS_9allocatorIS2_EEE10push_frontEOS2_ */
/* Demangled: std::__1::__split_buffer<void**, std::__1::allocator<void**> >::push_front(void**&&) */
int _ZNSt3__114__split_bufferIPPvNS_9allocatorIS2_EEE10push_frontEOS2_(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE7do_copyEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE12do_constructEPvm(void);

/* Symbol: _ZN4mfll8MfllCore13do_EncodeQYuvEPv */
/* Demangled: mfll::MfllCore::do_EncodeQYuv(void*) */
int _ZN4mfll8MfllCore13do_EncodeQYuvEPv(void);

/* Symbol: _ZN4mfll8MfllCore16do_EncodeYuvBaseEl */
/* Demangled: mfll::MfllCore::do_EncodeYuvBase(long) */
int _ZN4mfll8MfllCore16do_EncodeYuvBaseEl(void);

/* Symbol: __floatditf */
/* Demangled: __floatditf */
int fn___floatditf(void) __asm__("__floatditf");

/* Symbol: _ZN4mfll15MfllYuvCapturer17dispatchDoneEventERKNS_9EventTypeERNS_15MfllEventStatusEPvS6_ */
/* Demangled: mfll::MfllYuvCapturer::dispatchDoneEvent(mfll::EventType const&, mfll::MfllEventStatus&, void*, void*) */
int _ZN4mfll15MfllYuvCapturer17dispatchDoneEventERKNS_9EventTypeERNS_15MfllEventStatusEPvS6_(void);

/* Symbol: _ZN4mfll12MfllExifInfo11sendCommandERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKNS1_5dequeIPvNS5_ISB_EEEE */
/* Demangled: mfll::MfllExifInfo::sendCommand(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::deque<void*, std::__1::allocator<void*> > const&) */
int _ZN4mfll12MfllExifInfo11sendCommandERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKNS1_5dequeIPvNS5_ISB_EEEE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN4mfll7MfllErrEPNS9_13IMfllExifInfoERKNS_5dequeIPvNS5_ISE_EEEEEEEEENS_22__unordered_map_hasherIS7_SL_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SL_NS_8equal_toIS7_EELb1EEENS5_ISL_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<mfll::MfllErr (mfll::IMfllExifInfo*, std::__1::deque<void*, std::__1::allocator<void*> > const&)> >, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<mfll::MfllErr (mfll::IMfllExifInfo*, std::__1::deque<void*, std::__1::allocator<void*> > const&)> >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<mfll::MfllErr (mfll::IMfllExifInfo*, std::__1::deque<void*, std::__1::allocator<void*> > const&)> >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<mfll::MfllErr (mfll::IMfllExifInfo*, std::__1::deque<void*, std::__1::allocator<void*> > const&)> > > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN4mfll7MfllErrEPNS9_13IMfllExifInfoERKNS_5dequeIPvNS5_ISE_EEEEEEEEENS_22__unordered_map_hasherIS7_SL_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SL_NS_8equal_toIS7_EELb1EEENS5_ISL_EEE8__rehashEm(void);

/* Symbol: _ZN4mfll8IMfllBss14createInstanceEv */
/* Demangled: mfll::IMfllBss::createInstance() */
int _ZN4mfll8IMfllBss14createInstanceEv(void);

/* Symbol: _ZN7android2spIN4mfll15MfllFeatureFeedEEaSEPS2_ */
/* Demangled: android::sp<mfll::MfllFeatureFeed>::operator=(mfll::MfllFeatureFeed*) */
int _ZN7android2spIN4mfll15MfllFeatureFeedEEaSEPS2_(void);

/* Symbol: _ZNSt3__16vectorIN4mfll16MfllMotionVectorENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_ */
/* Demangled: void std::__1::vector<mfll::MfllMotionVector, std::__1::allocator<mfll::MfllMotionVector> >::__push_back_slow_path<mfll::MfllMotionVector const&>(mfll::MfllMotionVector const&) */
int _ZNSt3__16vectorIN4mfll16MfllMotionVectorENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void);

/* Symbol: _ZTV20MfllImageBufferQueue */
/* Demangled: vtable for MfllImageBufferQueue */
extern void* _ZTV20MfllImageBufferQueue;

/* Symbol: _ZN4mfll8MfllCore15queueYuvCaptureEiRN7android2spINS_16IMfllImageBufferEEES5_NS_16MfllMotionVectorE */
/* Demangled: mfll::MfllCore::queueYuvCapture(int, android::sp<mfll::IMfllImageBuffer>&, android::sp<mfll::IMfllImageBuffer>&, mfll::MfllMotionVector) */
int _ZN4mfll8MfllCore15queueYuvCaptureEiRN7android2spINS_16IMfllImageBufferEEES5_NS_16MfllMotionVectorE(void);

/* Symbol: _ZN4mfll12MfllProperty6getIsoEv */
/* Demangled: mfll::MfllProperty::getIso() */
int _ZN4mfll12MfllProperty6getIsoEv(void);

/* Symbol: _ZN4mfll8MfllCore17do_AllocRawBufferEPv */
/* Demangled: mfll::MfllCore::do_AllocRawBuffer(void*) */
int _ZN4mfll8MfllCore17do_AllocRawBufferEPv(void);

/* Symbol: _ZN4mfll8MfllCore19do_AllocMemcWorkingEPv */
/* Demangled: mfll::MfllCore::do_AllocMemcWorking(void*) */
int _ZN4mfll8MfllCore19do_AllocMemcWorkingEPv(void);

/* Symbol: _ZNSt3__15dequeIN4mfll17MfllOperationSync3JOBENS_9allocatorIS3_EEE5eraseENS_16__deque_iteratorIS3_PKS3_RS8_PKS9_lLl1024EEE */
/* Demangled: std::__1::deque<mfll::MfllOperationSync::JOB, std::__1::allocator<mfll::MfllOperationSync::JOB> >::erase(std::__1::__deque_iterator<mfll::MfllOperationSync::JOB, mfll::MfllOperationSync::JOB const*, mfll::MfllOperationSync::JOB const&, mfll::MfllOperationSync::JOB const* const*, long, 1024l>) */
int _ZNSt3__15dequeIN4mfll17MfllOperationSync3JOBENS_9allocatorIS3_EEE5eraseENS_16__deque_iteratorIS3_PKS3_RS8_PKS9_lLl1024EEE(void);

/* Symbol: _ZN4mfll8MfllCore18do_AllocYuvWorkingEl */
/* Demangled: mfll::MfllCore::do_AllocYuvWorking(long) */
int _ZN4mfll8MfllCore18do_AllocYuvWorkingEl(void);

/* Symbol: _ZNK4mfll8MfllCore17getInputYuvFormatEv */
/* Demangled: mfll::MfllCore::getInputYuvFormat() const */
int _ZNK4mfll8MfllCore17getInputYuvFormatEv(void);

/* Symbol: _ZN4mfll12MfllProperty11setPropertyERKNS_11tagPropertyERKi */
/* Demangled: mfll::MfllProperty::setProperty(mfll::tagProperty const&, int const&) */
int _ZN4mfll12MfllProperty11setPropertyERKNS_11tagPropertyERKi(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_5tupleIJNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEEEjEENS_19__map_value_compareIS9_SA_NS_4lessIS9_EELb1EEENS6_ISA_EEE25__emplace_unique_key_argsIS9_JRKNS_21piecewise_construct_tENS2_IJOS9_EEENS2_IJEEEEEENS_4pairINS_15__tree_iteratorISA_PNS_11__tree_nodeISA_PvEElEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__tree_iterator<std::__1::__value_type<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, unsigned int>, std::__1::__tree_node<std::__1::__value_type<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, unsigned int>, void*>*, long>, bool> std::__1::__tree<std::__1::__value_type<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, unsigned int>, std::__1::__map_value_compare<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__value_type<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, unsigned int>, std::__1::less<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, unsigned int> > >::__emplace_unique_key_args<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>&&>, std::__1::tuple<> >(std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> const&, std::__1::piecewise_construct_t const&, std::__1::tuple<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>&&>&&, std::__1::tuple<>&&) */
int _ZNSt3__16__treeINS_12__value_typeINS_5tupleIJNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEEEjEENS_19__map_value_compareIS9_SA_NS_4lessIS9_EELb1EEENS6_ISA_EEE25__emplace_unique_key_argsIS9_JRKNS_21piecewise_construct_tENS2_IJOS9_EEENS2_IJEEEEEENS_4pairINS_15__tree_iteratorISA_PNS_11__tree_nodeISA_PvEElEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__114__split_bufferIPPN5NSCam12IImageBufferENS_9allocatorIS4_EEE9push_backEOS4_ */
/* Demangled: std::__1::__split_buffer<NSCam::IImageBuffer**, std::__1::allocator<NSCam::IImageBuffer**> >::push_back(NSCam::IImageBuffer**&&) */
int _ZNSt3__114__split_bufferIPPN5NSCam12IImageBufferENS_9allocatorIS4_EEE9push_backEOS4_(void);

/* Symbol: _ZN7android2spIN4mfll10IMfllNvramEED2Ev */
/* Demangled: android::sp<mfll::IMfllNvram>::~sp() */
int _ZN7android2spIN4mfll10IMfllNvramEED2Ev(void);

/* Symbol: _ZN4mfll14MfllFeatureMrpD1Ev */
/* Demangled: mfll::MfllFeatureMrp::~MfllFeatureMrp() */
int _ZN4mfll14MfllFeatureMrpD1Ev(void);

/* Symbol: _ZN4mfll15MfllImageBuffer14setImageFormatENS_11ImageFormatE */
/* Demangled: mfll::MfllImageBuffer::setImageFormat(mfll::ImageFormat) */
int _ZN4mfll15MfllImageBuffer14setImageFormatENS_11ImageFormatE(void);

/* Symbol: _ZN4mfll15MfllImageBufferaSERKS0_ */
/* Demangled: mfll::MfllImageBuffer::operator=(mfll::MfllImageBuffer const&) */
int _ZN4mfll15MfllImageBufferaSERKS0_(void);

/* Symbol: _ZNSt3__114__split_bufferIPPN5NSCam9IMetadataENS_9allocatorIS4_EEE10push_frontEOS4_ */
/* Demangled: std::__1::__split_buffer<NSCam::IMetadata**, std::__1::allocator<NSCam::IMetadata**> >::push_front(NSCam::IMetadata**&&) */
int _ZNSt3__114__split_bufferIPPN5NSCam9IMetadataENS_9allocatorIS4_EEE10push_frontEOS4_(void);

/* Symbol: _ZN4mfll8MfllCore8doMixingEl */
/* Demangled: mfll::MfllCore::doMixing(long) */
int _ZN4mfll8MfllCore8doMixingEl(void);

/* Symbol: _ZN4mfll15MfllFeaturePerf7onEventENS_9EventTypeERNS_15MfllEventStatusEPvS4_S4_ */
/* Demangled: mfll::MfllFeaturePerf::onEvent(mfll::EventType, mfll::MfllEventStatus&, void*, void*, void*) */
int _ZN4mfll15MfllFeaturePerf7onEventENS_9EventTypeERNS_15MfllEventStatusEPvS4_S4_(void);

/* Symbol: _ZN4mfll15MfllImageBuffer23registerEventDispatcherERKN7android2spINS_11IMfllEventsEEE */
/* Demangled: mfll::MfllImageBuffer::registerEventDispatcher(android::sp<mfll::IMfllEvents> const&) */
int _ZN4mfll15MfllImageBuffer23registerEventDispatcherERKN7android2spINS_11IMfllEventsEEE(void);

/* Symbol: _ZNSt3__114__split_bufferIPPN4mfll15MfllImageBufferERNS_9allocatorIS4_EEE10push_frontERKS4_ */
/* Demangled: std::__1::__split_buffer<mfll::MfllImageBuffer**, std::__1::allocator<mfll::MfllImageBuffer**>&>::push_front(mfll::MfllImageBuffer** const&) */
int _ZNSt3__114__split_bufferIPPN4mfll15MfllImageBufferERNS_9allocatorIS4_EEE10push_frontERKS4_(void);

/* Symbol: _ZN4mfll8MfllMemcD1Ev */
/* Demangled: mfll::MfllMemc::~MfllMemc() */
int _ZN4mfll8MfllMemcD1Ev(void);

/* Symbol: _ZNSt3__114__split_bufferIPPN5NSCam9IMetadataERNS_9allocatorIS4_EEE10push_frontERKS4_ */
/* Demangled: std::__1::__split_buffer<NSCam::IMetadata**, std::__1::allocator<NSCam::IMetadata**>&>::push_front(NSCam::IMetadata** const&) */
int _ZNSt3__114__split_bufferIPPN5NSCam9IMetadataERNS_9allocatorIS4_EEE10push_frontERKS4_(void);

/* Symbol: _ZN4mfll10IMfllNvram15destroyInstanceEv */
/* Demangled: mfll::IMfllNvram::destroyInstance() */
int _ZN4mfll10IMfllNvram15destroyInstanceEv(void);

/* Symbol: _ZN4mfll14MfllFeatureMrp25releaseMemcRelatedBuffersEPNS_9IMfllCoreEj */
/* Demangled: mfll::MfllFeatureMrp::releaseMemcRelatedBuffers(mfll::IMfllCore*, unsigned int) */
int _ZN4mfll14MfllFeatureMrp25releaseMemcRelatedBuffersEPNS_9IMfllCoreEj(void);

/* Symbol: _ZN4mfll15MfllImageBuffer5getVaEv */
/* Demangled: mfll::MfllImageBuffer::getVa() */
int _ZN4mfll15MfllImageBuffer5getVaEv(void);

/* Symbol: _ZN4mfll16IMfllImageBuffer14createInstanceEPKcRKNS_21IMfllImageBuffer_FlagE */
/* Demangled: mfll::IMfllImageBuffer::createInstance(char const*, mfll::IMfllImageBuffer_Flag const&) */
int _ZN4mfll16IMfllImageBuffer14createInstanceEPKcRKNS_21IMfllImageBuffer_FlagE(void);

/* Symbol: _ZN4mfll9MfllCore221do_MotionCompensationEPv */
/* Demangled: mfll::MfllCore2::do_MotionCompensation(void*) */
int _ZN4mfll9MfllCore221do_MotionCompensationEPv(void);

/* Symbol: _ZTVN4mfll12MfllExifInfoE */
/* Demangled: vtable for mfll::MfllExifInfo */
extern void* _ZTVN4mfll12MfllExifInfoE;

/* Symbol: __eqtf2 */
/* Demangled: __eqtf2 */
int fn___eqtf2(void) __asm__("__eqtf2");

/* Symbol: _ZN4mfll8MfllCore17tellsFuturePhase1Ev */
/* Demangled: mfll::MfllCore::tellsFuturePhase1() */
int _ZN4mfll8MfllCore17tellsFuturePhase1Ev(void);

/* Symbol: _ZN4mfll9MfllCore2C2Ev */
/* Demangled: mfll::MfllCore2::MfllCore2() */
int _ZN4mfll9MfllCore2C2Ev(void);

/* Symbol: _ZN4mfll7MfllBssC1Ev */
/* Demangled: mfll::MfllBss::MfllBss() */
int _ZN4mfll7MfllBssC1Ev(void);

/* Symbol: _ZN4mfll12MfllStrategyD1Ev */
/* Demangled: mfll::MfllStrategy::~MfllStrategy() */
int _ZN4mfll12MfllStrategyD1Ev(void);

/* Symbol: __atomic_load_16 */
/* Demangled: __atomic_load_16 */
int fn___atomic_load_16(void) __asm__("__atomic_load_16");

/* Symbol: _ZN4mfll8MfllCore14retrieveBufferERKNS_10MfllBufferEi */
/* Demangled: mfll::MfllCore::retrieveBuffer(mfll::MfllBuffer const&, int) */
int _ZN4mfll8MfllCore14retrieveBufferERKNS_10MfllBufferEi(void);

/* Symbol: _ZN4mfll8MfllCoreC2Ev */
/* Demangled: mfll::MfllCore::MfllCore() */
int _ZN4mfll8MfllCoreC2Ev(void);

/* Symbol: _ZN4mfll12MfllProperty12readPropertyERKNS_11tagPropertyE */
/* Demangled: mfll::MfllProperty::readProperty(mfll::tagProperty const&) */
int _ZN4mfll12MfllProperty12readPropertyERKNS_11tagPropertyE(void);

/* Symbol: _ZN4mfll11MfllCore2p519do_AllocMemcWorkingEPv */
/* Demangled: mfll::MfllCore2p5::do_AllocMemcWorking(void*) */
int _ZN4mfll11MfllCore2p519do_AllocMemcWorkingEPv(void);

/* Symbol: _ZNSt3__16vectorINS0_IN7android2spIN4mfll18IMfllEventListenerEEENS_9allocatorIS5_EEEENS6_IS8_EEE21__push_back_slow_pathIS8_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::vector<android::sp<mfll::IMfllEventListener>, std::__1::allocator<android::sp<mfll::IMfllEventListener> > >, std::__1::allocator<std::__1::vector<android::sp<mfll::IMfllEventListener>, std::__1::allocator<android::sp<mfll::IMfllEventListener> > > > >::__push_back_slow_path<std::__1::vector<android::sp<mfll::IMfllEventListener>, std::__1::allocator<android::sp<mfll::IMfllEventListener> > > >(std::__1::vector<android::sp<mfll::IMfllEventListener>, std::__1::allocator<android::sp<mfll::IMfllEventListener> > >&&) */
int _ZNSt3__16vectorINS0_IN7android2spIN4mfll18IMfllEventListenerEEENS_9allocatorIS5_EEEENS6_IS8_EEE21__push_back_slow_pathIS8_EEvOT_(void);

/* Symbol: _ZNSt3__113move_backwardIPPN4mfll15MfllImageBufferES3_S4_RS3_PS4_lLl512EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SE_SD_PNS_9enable_ifIXsr27__is_random_access_iteratorISE_EE5valueEvE4typeE */
/* Demangled: _ZNSt3__113move_backwardIPPN4mfll15MfllImageBufferES3_S4_RS3_PS4_lLl512EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SE_SD_PNS_9enable_ifIXsr27__is_random_access_iteratorISE_EE5valueEvE4typeE */
int _ZNSt3__113move_backwardIPPN4mfll15MfllImageBufferES3_S4_RS3_PS4_lLl512EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SE_SD_PNS_9enable_ifIXsr27__is_random_access_iteratorISE_EE5valueEvE4typeE(void);

/* Symbol: _ZN4mfll10IMfllNvram14createInstanceEv */
/* Demangled: mfll::IMfllNvram::createInstance() */
int _ZN4mfll10IMfllNvram14createInstanceEv(void);

/* Symbol: _ZN7android2spIN4mfll15MfllFeatureDumpEEaSEPS2_ */
/* Demangled: android::sp<mfll::MfllFeatureDump>::operator=(mfll::MfllFeatureDump*) */
int _ZN7android2spIN4mfll15MfllFeatureDumpEEaSEPS2_(void);

/* Symbol: _ZNSt3__113move_backwardIPN4mfll17MfllOperationSync3JOBES3_S4_RS3_PS4_lLl1024EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SE_SD_PNS_9enable_ifIXsr27__is_random_access_iteratorISE_EE5valueEvE4typeE */
/* Demangled: _ZNSt3__113move_backwardIPN4mfll17MfllOperationSync3JOBES3_S4_RS3_PS4_lLl1024EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SE_SD_PNS_9enable_ifIXsr27__is_random_access_iteratorISE_EE5valueEvE4typeE */
int _ZNSt3__113move_backwardIPN4mfll17MfllOperationSync3JOBES3_S4_RS3_PS4_lLl1024EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SE_SD_PNS_9enable_ifIXsr27__is_random_access_iteratorISE_EE5valueEvE4typeE(void);

/* Symbol: _ZN4mfll15MfllYuvCapturerD2Ev */
/* Demangled: mfll::MfllYuvCapturer::~MfllYuvCapturer() */
int _ZN4mfll15MfllYuvCapturerD2Ev(void);

/* Symbol: _ZNK4mfll15MfllImageBuffer16getAlignedHeightEv */
/* Demangled: mfll::MfllImageBuffer::getAlignedHeight() const */
int _ZNK4mfll15MfllImageBuffer16getAlignedHeightEv(void);

/* Symbol: _ZN4mfll9MfhrCore2C1Ev */
/* Demangled: mfll::MfhrCore2::MfhrCore2() */
int _ZN4mfll9MfhrCore2C1Ev(void);

/* Symbol: _ZN4mfll11MfllCore2p57do_InitERKNS_10MfllConfigE */
/* Demangled: mfll::MfllCore2p5::do_Init(mfll::MfllConfig const&) */
int _ZN4mfll11MfllCore2p57do_InitERKNS_10MfllConfigE(void);

/* Symbol: _ZN4mfll10MfllEventsD1Ev */
/* Demangled: mfll::MfllEvents::~MfllEvents() */
int _ZN4mfll10MfllEventsD1Ev(void);

/* Symbol: _ZNK4mfll7MfllMfb20getMainHalMetaLockedEv */
/* Demangled: mfll::MfllMfb::getMainHalMetaLocked() const */
int _ZNK4mfll7MfllMfb20getMainHalMetaLockedEv(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* obj___bss_start __asm__("__bss_start");

/* Symbol: _ZN4mfll12MfllPropertyC2Ev */
/* Demangled: mfll::MfllProperty::MfllProperty() */
int _ZN4mfll12MfllPropertyC2Ev(void);

/* Symbol: _ZN4mfll7MfllMfb14encodeRawToYuvEPNS_16IMfllImageBufferES2_RKNS_8YuvStageE */
/* Demangled: mfll::MfllMfb::encodeRawToYuv(mfll::IMfllImageBuffer*, mfll::IMfllImageBuffer*, mfll::YuvStage const&) */
int _ZN4mfll7MfllMfb14encodeRawToYuvEPNS_16IMfllImageBufferES2_RKNS_8YuvStageE(void);

/* Symbol: _ZTVN4mfll7MfllMfbE */
/* Demangled: vtable for mfll::MfllMfb */
extern void* _ZTVN4mfll7MfllMfbE;

/* Symbol: _ZTINSt3__112future_errorE */
/* Demangled: typeinfo for std::__1::future_error */
extern void* _ZTINSt3__112future_errorE;

/* Symbol: _ZN4mfll9IMfllCore16getEventTypeNameENS_9EventTypeE */
/* Demangled: mfll::IMfllCore::getEventTypeName(mfll::EventType) */
int _ZN4mfll9IMfllCore16getEventTypeNameENS_9EventTypeE(void);

/* Symbol: _ZNK4mfll8MfllCore28getInputYuvFmtWeightingTableEv */
/* Demangled: mfll::MfllCore::getInputYuvFmtWeightingTable() const */
int _ZNK4mfll8MfllCore28getInputYuvFmtWeightingTableEv(void);

/* Symbol: _ZN4mfll16IMfllImageBuffer15destroyInstanceEv */
/* Demangled: mfll::IMfllImageBuffer::destroyInstance() */
int _ZN4mfll16IMfllImageBuffer15destroyInstanceEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE10do_destroyEPvm(void);

/* Symbol: _ZNSt3__114__split_bufferIPN4mfll17MfllOperationSync3JOBERNS_9allocatorIS4_EEE9push_backEOS4_ */
/* Demangled: std::__1::__split_buffer<mfll::MfllOperationSync::JOB*, std::__1::allocator<mfll::MfllOperationSync::JOB*>&>::push_back(mfll::MfllOperationSync::JOB*&&) */
int _ZNSt3__114__split_bufferIPN4mfll17MfllOperationSync3JOBERNS_9allocatorIS4_EEE9push_backEOS4_(void);

/* Symbol: _ZN4mfll12MfllCapturer12dequeRrzoRawEv */
/* Demangled: mfll::MfllCapturer::dequeRrzoRaw() */
int _ZN4mfll12MfllCapturer12dequeRrzoRawEv(void);

/* Symbol: _ZN4mfll15MfllYuvCapturerC1Ev */
/* Demangled: mfll::MfllYuvCapturer::MfllYuvCapturer() */
int _ZN4mfll15MfllYuvCapturerC1Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIjjEENS_19__map_value_compareIjS2_NS_4lessIjEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned int, unsigned int>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned int>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, unsigned int> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIjjEENS_19__map_value_compareIjS2_NS_4lessIjEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE(void);

/* Symbol: _ZN4mfll8MfllCore12doEncodeQYuvEPv */
/* Demangled: mfll::MfllCore::doEncodeQYuv(void*) */
int _ZN4mfll8MfllCore12doEncodeQYuvEPv(void);

/* Symbol: _ZN4mfll10MfllEvents28registerEventListenerAsFirstERKNS_9EventTypeERKN7android2spINS_18IMfllEventListenerEEE */
/* Demangled: mfll::MfllEvents::registerEventListenerAsFirst(mfll::EventType const&, android::sp<mfll::IMfllEventListener> const&) */
int _ZN4mfll10MfllEvents28registerEventListenerAsFirstERKNS_9EventTypeERKN7android2spINS_18IMfllEventListenerEEE(void);

/* Symbol: _ZN4mfll15MfllYuvCapturer20queueSourceLcsoImageERN7android2spINS_16IMfllImageBufferEEE */
/* Demangled: mfll::MfllYuvCapturer::queueSourceLcsoImage(android::sp<mfll::IMfllImageBuffer>&) */
int _ZN4mfll15MfllYuvCapturer20queueSourceLcsoImageERN7android2spINS_16IMfllImageBufferEEE(void);

/* Symbol: _ZN4mfll15MfllImageBuffer8isInitedEv */
/* Demangled: mfll::MfllImageBuffer::isInited() */
int _ZN4mfll15MfllImageBuffer8isInitedEv(void);

/* Symbol: _ZN4mfll8IMfllMfb14createInstanceEv */
/* Demangled: mfll::IMfllMfb::createInstance() */
int _ZN4mfll8IMfllMfb14createInstanceEv(void);

/* Symbol: _ZN4mfll12MfllCapturer19getCapturedFrameNumEv */
/* Demangled: mfll::MfllCapturer::getCapturedFrameNum() */
int _ZN4mfll12MfllCapturer19getCapturedFrameNumEv(void);

/* Symbol: _ZN4mfll15MfllYuvCapturer20queueSourceMonoImageERN7android2spINS_16IMfllImageBufferEEE */
/* Demangled: mfll::MfllYuvCapturer::queueSourceMonoImage(android::sp<mfll::IMfllImageBuffer>&) */
int _ZN4mfll15MfllYuvCapturer20queueSourceMonoImageERN7android2spINS_16IMfllImageBufferEEE(void);

/* Symbol: _ZNSt3__15dequeIPvNS_9allocatorIS1_EEE19__add_back_capacityEm */
/* Demangled: std::__1::deque<void*, std::__1::allocator<void*> >::__add_back_capacity(unsigned long) */
int _ZNSt3__15dequeIPvNS_9allocatorIS1_EEE19__add_back_capacityEm(void);

/* Symbol: _ZN4mfll8MfllCore12syncWaitDoneEPNS_11MfllSyncObjE */
/* Demangled: mfll::MfllCore::syncWaitDone(mfll::MfllSyncObj*) */
int _ZN4mfll8MfllCore12syncWaitDoneEPNS_11MfllSyncObjE(void);

/* Symbol: _ZNK4mfll8MfllCore23getInputYuvFmtYuvGoldenEv */
/* Demangled: mfll::MfllCore::getInputYuvFmtYuvGolden() const */
int _ZNK4mfll8MfllCore23getInputYuvFmtYuvGoldenEv(void);

/* Symbol: _ZN4mfll12MfllCapturer13captureFramesEjRNSt3__16vectorIPN7android2spINS_16IMfllImageBufferEEENS1_9allocatorIS7_EEEESB_RNS2_IPNS_16MfllMotionVectorENS8_ISD_EEEERNS2_IiNS8_IiEEEE */
/* Demangled: mfll::MfllCapturer::captureFrames(unsigned int, std::__1::vector<android::sp<mfll::IMfllImageBuffer>*, std::__1::allocator<android::sp<mfll::IMfllImageBuffer>*> >&, std::__1::vector<android::sp<mfll::IMfllImageBuffer>*, std::__1::allocator<android::sp<mfll::IMfllImageBuffer>*> >&, std::__1::vector<mfll::MfllMotionVector*, std::__1::allocator<mfll::MfllMotionVector*> >&, std::__1::vector<int, std::__1::allocator<int> >&) */
int _ZN4mfll12MfllCapturer13captureFramesEjRNSt3__16vectorIPN7android2spINS_16IMfllImageBufferEEENS1_9allocatorIS7_EEEESB_RNS2_IPNS_16MfllMotionVectorENS8_ISD_EEEERNS2_IiNS8_IiEEEE(void);

/* Symbol: _ZN4mfll12MfllExifInfoD0Ev */
/* Demangled: mfll::MfllExifInfo::~MfllExifInfo() */
int _ZN4mfll12MfllExifInfoD0Ev(void);

/* Symbol: _ZN4mfll15MfllImageBuffer19releaseBufferNoLockEv */
/* Demangled: mfll::MfllImageBuffer::releaseBufferNoLock() */
int _ZN4mfll15MfllImageBuffer19releaseBufferNoLockEv(void);

/* Symbol: _ZN4mfll7MfllMfb21convertYuvFormatByMdpEPNS_16IMfllImageBufferES2_S2_RKNS_8MfllRectES5_NS_8YuvStageE */
/* Demangled: mfll::MfllMfb::convertYuvFormatByMdp(mfll::IMfllImageBuffer*, mfll::IMfllImageBuffer*, mfll::IMfllImageBuffer*, mfll::MfllRect const&, mfll::MfllRect const&, mfll::YuvStage) */
int _ZN4mfll7MfllMfb21convertYuvFormatByMdpEPNS_16IMfllImageBufferES2_S2_RKNS_8MfllRectES5_NS_8YuvStageE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE8do_splatEPvPKvm(void);

/* Symbol: __atomic_store */
/* Demangled: __atomic_store */
int fn___atomic_store(void) __asm__("__atomic_store");

/* Symbol: _ZN4mfll21IMfllImageBufferQueue14tryGetInstanceENS_21IMfllImageBuffer_FlagE */
/* Demangled: mfll::IMfllImageBufferQueue::tryGetInstance(mfll::IMfllImageBuffer_Flag) */
int _ZN4mfll21IMfllImageBufferQueue14tryGetInstanceENS_21IMfllImageBuffer_FlagE(void);

/* Symbol: _ZN4mfll8MfllCore19do_MotionEstimationEPv */
/* Demangled: mfll::MfllCore::do_MotionEstimation(void*) */
int _ZN4mfll8MfllCore19do_MotionEstimationEPv(void);

/* Symbol: _ZN4mfll12MfllCapturer17dispatchDoneEventERKNS_9EventTypeERNS_15MfllEventStatusEPvS6_ */
/* Demangled: mfll::MfllCapturer::dispatchDoneEvent(mfll::EventType const&, mfll::MfllEventStatus&, void*, void*) */
int _ZN4mfll12MfllCapturer17dispatchDoneEventERKNS_9EventTypeERNS_15MfllEventStatusEPvS6_(void);

/* Symbol: _ZTVN4mfll9IMfllCoreE */
/* Demangled: vtable for mfll::IMfllCore */
extern void* _ZTVN4mfll9IMfllCoreE;

/* Symbol: _ZTVN4mfll12MfllPropertyE */
/* Demangled: vtable for mfll::MfllProperty */
extern void* _ZTVN4mfll12MfllPropertyE;

/* Symbol: _ZN4mfll12MfllCapturer16dequeFullSizeRawEv */
/* Demangled: mfll::MfllCapturer::dequeFullSizeRaw() */
int _ZN4mfll12MfllCapturer16dequeFullSizeRawEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPN4mfll17MfllOperationSync3JOBENS_9allocatorIS4_EEE10push_frontEOS4_ */
/* Demangled: std::__1::__split_buffer<mfll::MfllOperationSync::JOB*, std::__1::allocator<mfll::MfllOperationSync::JOB*> >::push_front(mfll::MfllOperationSync::JOB*&&) */
int _ZNSt3__114__split_bufferIPN4mfll17MfllOperationSync3JOBENS_9allocatorIS4_EEE10push_frontEOS4_(void);

/* Symbol: _ZN4mfll11MfllCore2p520createMixDebugBufferEN7android2spINS_16IMfllImageBufferEEE */
/* Demangled: mfll::MfllCore2p5::createMixDebugBuffer(android::sp<mfll::IMfllImageBuffer>) */
int _ZN4mfll11MfllCore2p520createMixDebugBufferEN7android2spINS_16IMfllImageBufferEEE(void);

/* Symbol: _ZN4mfll15MfllFeatureDump13dumpBaseStageEPNS_9IMfllCoreE */
/* Demangled: mfll::MfllFeatureDump::dumpBaseStage(mfll::IMfllCore*) */
int _ZN4mfll15MfllFeatureDump13dumpBaseStageEPNS_9IMfllCoreE(void);

/* Symbol: _ZN4mfll15MfllFeatureDumpD0Ev */
/* Demangled: mfll::MfllFeatureDump::~MfllFeatureDump() */
int _ZN4mfll15MfllFeatureDumpD0Ev(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN4mfll7MfllErrEPNS9_13IMfllExifInfoERKNS_5dequeIPvNS5_ISE_EEEEEEEEENS_22__unordered_map_hasherIS7_SL_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SL_NS_8equal_toIS7_EELb1EEENS5_ISL_EEE25__emplace_unique_key_argsIS7_JRKNS_4pairIKS7_SK_EEEEENSX_INS_15__hash_iteratorIPNS_11__hash_nodeISL_SE_EEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<mfll::MfllErr (mfll::IMfllExifInfo*, std::__1::deque<void*, std::__1::allocator<void*> > const&)> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<mfll::MfllErr (mfll::IMfllExifInfo*, std::__1::deque<void*, std::__1::allocator<void*> > const&)> >, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<mfll::MfllErr (mfll::IMfllExifInfo*, std::__1::deque<void*, std::__1::allocator<void*> > const&)> >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<mfll::MfllErr (mfll::IMfllExifInfo*, std::__1::deque<void*, std::__1::allocator<void*> > const&)> >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<mfll::MfllErr (mfll::IMfllExifInfo*, std::__1::deque<void*, std::__1::allocator<void*> > const&)> > > >::__emplace_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::function<mfll::MfllErr (mfll::IMfllExifInfo*, std::__1::deque<void*, std::__1::allocator<void*> > const&)> > const&>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::function<mfll::MfllErr (mfll::IMfllExifInfo*, std::__1::deque<void*, std::__1::allocator<void*> > const&)> > const&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN4mfll7MfllErrEPNS9_13IMfllExifInfoERKNS_5dequeIPvNS5_ISE_EEEEEEEEENS_22__unordered_map_hasherIS7_SL_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SL_NS_8equal_toIS7_EELb1EEENS5_ISL_EEE25__emplace_unique_key_argsIS7_JRKNS_4pairIKS7_SK_EEEEENSX_INS_15__hash_iteratorIPNS_11__hash_nodeISL_SE_EEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN4mfll7MfllMfbC2Ev */
/* Demangled: mfll::MfllMfb::MfllMfb() */
int _ZN4mfll7MfllMfbC2Ev(void);

/* Symbol: __unordtf2 */
/* Demangled: __unordtf2 */
int fn___unordtf2(void) __asm__("__unordtf2");

/* Symbol: libat_lock_n */
/* Demangled: libat_lock_n */
int libat_lock_n(void);

/* Symbol: _ZN4mfll15MfllFeatureDump10dump_imageEPNS_16IMfllImageBufferERKNS0_12tagDumpStageEPKci */
/* Demangled: mfll::MfllFeatureDump::dump_image(mfll::IMfllImageBuffer*, mfll::MfllFeatureDump::tagDumpStage const&, char const*, int) */
int _ZN4mfll15MfllFeatureDump10dump_imageEPNS_16IMfllImageBufferERKNS0_12tagDumpStageEPKci(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::sync() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::pbackfail(int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIN4mfll21IMfllImageBuffer_FlagENS_8weak_ptrINS2_21IMfllImageBufferQueueEEEEENS_22__unordered_map_hasherIS3_S7_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S7_NS_8equal_toIS3_EELb1EEENS_9allocatorIS7_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<mfll::IMfllImageBuffer_Flag, std::__1::weak_ptr<mfll::IMfllImageBufferQueue> >, std::__1::__unordered_map_hasher<mfll::IMfllImageBuffer_Flag, std::__1::__hash_value_type<mfll::IMfllImageBuffer_Flag, std::__1::weak_ptr<mfll::IMfllImageBufferQueue> >, std::__1::hash<mfll::IMfllImageBuffer_Flag>, true>, std::__1::__unordered_map_equal<mfll::IMfllImageBuffer_Flag, std::__1::__hash_value_type<mfll::IMfllImageBuffer_Flag, std::__1::weak_ptr<mfll::IMfllImageBufferQueue> >, std::__1::equal_to<mfll::IMfllImageBuffer_Flag>, true>, std::__1::allocator<std::__1::__hash_value_type<mfll::IMfllImageBuffer_Flag, std::__1::weak_ptr<mfll::IMfllImageBufferQueue> > > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIN4mfll21IMfllImageBuffer_FlagENS_8weak_ptrINS2_21IMfllImageBufferQueueEEEEENS_22__unordered_map_hasherIS3_S7_NS_4hashIS3_EELb1EEENS_21__unordered_map_equalIS3_S7_NS_8equal_toIS3_EELb1EEENS_9allocatorIS7_EEE6rehashEm(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIcEEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, std::__1::shared_ptr<char> >, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<char> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, std::__1::shared_ptr<char> >, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, std::__1::shared_ptr<char> > > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIiNS_10shared_ptrIcEEEENS_22__unordered_map_hasherIiS4_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS4_NS_8equal_toIiEELb1EEENS_9allocatorIS4_EEE6rehashEm(void);

/* Symbol: _ZN4mfll8MfllCore4initERKNS_10MfllConfigE */
/* Demangled: mfll::MfllCore::init(mfll::MfllConfig const&) */
int _ZN4mfll8MfllCore4initERKNS_10MfllConfigE(void);

/* Symbol: _ZN4mfll9MfllCore219createConfidenceMapEmm */
/* Demangled: mfll::MfllCore2::createConfidenceMap(unsigned long, unsigned long) */
int _ZN4mfll9MfllCore219createConfidenceMapEmm(void);

/* Symbol: _ZN4mfll12MfllProperty10getDropNumEv */
/* Demangled: mfll::MfllProperty::getDropNum() */
int _ZN4mfll12MfllProperty10getDropNumEv(void);

/* Symbol: _ZN4mfll8MfllCore16doAllocYuvGoldenEl */
/* Demangled: mfll::MfllCore::doAllocYuvGolden(long) */
int _ZN4mfll8MfllCore16doAllocYuvGoldenEl(void);

/* Symbol: _ZN4mfll8MfllCore16setNvramProviderERKN7android2spINS_10IMfllNvramEEE */
/* Demangled: mfll::MfllCore::setNvramProvider(android::sp<mfll::IMfllNvram> const&) */
int _ZN4mfll8MfllCore16setNvramProviderERKN7android2spINS_10IMfllNvramEEE(void);

/* Symbol: _ZTVN4mfll9MfhrCore2E */
/* Demangled: vtable for mfll::MfhrCore2 */
extern void* _ZTVN4mfll9MfhrCore2E;

/* Symbol: _ZN4mfll8MfllCore6setMfbERKN7android2spINS_8IMfllMfbEEE */
/* Demangled: mfll::MfllCore::setMfb(android::sp<mfll::IMfllMfb> const&) */
int _ZN4mfll8MfllCore6setMfbERKN7android2spINS_8IMfllMfbEEE(void);

/* Symbol: _ZTTNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE */
/* Demangled: VTT for std::__1::basic_ofstream<char, std::__1::char_traits<char> > */
extern void* _ZTTNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE;

/* Symbol: _ZTSSt11logic_error */
/* Demangled: typeinfo name for std::logic_error */
extern void* _ZTSSt11logic_error;

/* Symbol: _ZN4mfll8MfllCore9doCaptureEl */
/* Demangled: mfll::MfllCore::doCapture(long) */
int _ZN4mfll8MfllCore9doCaptureEl(void);

/* Symbol: _ZN4mfll15MfllFeatureFeedD0Ev */
/* Demangled: mfll::MfllFeatureFeed::~MfllFeatureFeed() */
int _ZN4mfll15MfllFeatureFeedD0Ev(void);

/* Symbol: _ZN4mfll11MfllCore2p519do_MotionEstimationEPv */
/* Demangled: mfll::MfllCore2p5::do_MotionEstimation(void*) */
int _ZN4mfll11MfllCore2p519do_MotionEstimationEPv(void);

/* Symbol: _ZN4mfll9MfhrCore215setBypassOptionERKNS_16MfllBypassOptionE */
/* Demangled: mfll::MfhrCore2::setBypassOption(mfll::MfllBypassOption const&) */
int _ZN4mfll9MfhrCore215setBypassOptionERKNS_16MfllBypassOptionE(void);

/* Symbol: _ZTVN4mfll7MfllBssE */
/* Demangled: vtable for mfll::MfllBss */
extern void* _ZTVN4mfll7MfllBssE;

/* Symbol: _ZN4mfll8MfllMemc18motionCompensationEv */
/* Demangled: mfll::MfllMemc::motionCompensation() */
int _ZN4mfll8MfllMemc18motionCompensationEv(void);

/* Symbol: _ZNK4mfll7MfllMfb20getMainAppMetaLockedEv */
/* Demangled: mfll::MfllMfb::getMainAppMetaLocked() const */
int _ZNK4mfll7MfllMfb20getMainAppMetaLockedEv(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam8NSIoPipe5InputEEE */
/* Demangled: vtable for android::Vector<NSCam::NSIoPipe::Input> */
extern void* _ZTVN7android6VectorIN5NSCam8NSIoPipe5InputEEE;

/* Symbol: _ZN7android2spIN4mfll16IMfllImageBufferEED2Ev */
/* Demangled: android::sp<mfll::IMfllImageBuffer>::~sp() */
int _ZN7android2spIN4mfll16IMfllImageBufferEED2Ev(void);

/* Symbol: _ZTISt9exception */
/* Demangled: typeinfo for std::exception */
extern void* _ZTISt9exception;

/* Symbol: __subtf3 */
/* Demangled: __subtf3 */
int fn___subtf3(void) __asm__("__subtf3");

/* Symbol: _ZN4mfll8MfllCore19syncAnnounceTriggerEPNS_11MfllSyncObjE */
/* Demangled: mfll::MfllCore::syncAnnounceTrigger(mfll::MfllSyncObj*) */
int _ZN4mfll8MfllCore19syncAnnounceTriggerEPNS_11MfllSyncObjE(void);

/* Symbol: _ZN4mfll11MfllCore2p521do_MotionCompensationEPv */
/* Demangled: mfll::MfllCore2p5::do_MotionCompensation(void*) */
int _ZN4mfll11MfllCore2p521do_MotionCompensationEPv(void);

/* Symbol: _ZN4mfll9MfllNvramD1Ev */
/* Demangled: mfll::MfllNvram::~MfllNvram() */
int _ZN4mfll9MfllNvramD1Ev(void);

/* Symbol: _ZN4mfll8MfllCore27registerEventListenerNoLockERKN7android2spINS_18IMfllEventListenerEEEi */
/* Demangled: mfll::MfllCore::registerEventListenerNoLock(android::sp<mfll::IMfllEventListener> const&, int) */
int _ZN4mfll8MfllCore27registerEventListenerNoLockERKN7android2spINS_18IMfllEventListenerEEEi(void);

/* Symbol: _ZN4mfll14MfllFeatureMrp18releaseStageMixingEPNS_9IMfllCoreE */
/* Demangled: mfll::MfllFeatureMrp::releaseStageMixing(mfll::IMfllCore*) */
int _ZN4mfll14MfllFeatureMrp18releaseStageMixingEPNS_9IMfllCoreE(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::overflow(int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi(void);

/* Symbol: _ZN4mfll12MfllProperty11isForceMfllEv */
/* Demangled: mfll::MfllProperty::isForceMfll() */
int _ZN4mfll12MfllProperty11isForceMfllEv(void);

/* Symbol: _ZN4mfll8MfllCore6doMfllEv */
/* Demangled: mfll::MfllCore::doMfll() */
int _ZN4mfll8MfllCore6doMfllEv(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE8__appendEm */
/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::__append(unsigned long) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE8__appendEm(void);

/* Symbol: _ZN4mfll9MfllCore214retrieveBufferERKNS_10MfllBufferEi */
/* Demangled: mfll::MfllCore2::retrieveBuffer(mfll::MfllBuffer const&, int) */
int _ZN4mfll9MfllCore214retrieveBufferERKNS_10MfllBufferEi(void);

/* Symbol: _ZN4mfll15MfllYuvCapturer13captureFramesEjRNSt3__16vectorIPN7android2spINS_16IMfllImageBufferEEENS1_9allocatorIS7_EEEESB_RNS2_IPNS_16MfllMotionVectorENS8_ISD_EEEERNS2_IiNS8_IiEEEE */
/* Demangled: mfll::MfllYuvCapturer::captureFrames(unsigned int, std::__1::vector<android::sp<mfll::IMfllImageBuffer>*, std::__1::allocator<android::sp<mfll::IMfllImageBuffer>*> >&, std::__1::vector<android::sp<mfll::IMfllImageBuffer>*, std::__1::allocator<android::sp<mfll::IMfllImageBuffer>*> >&, std::__1::vector<mfll::MfllMotionVector*, std::__1::allocator<mfll::MfllMotionVector*> >&, std::__1::vector<int, std::__1::allocator<int> >&) */
int _ZN4mfll15MfllYuvCapturer13captureFramesEjRNSt3__16vectorIPN7android2spINS_16IMfllImageBufferEEENS1_9allocatorIS7_EEEESB_RNS2_IPNS_16MfllMotionVectorENS8_ISD_EEEERNS2_IiNS8_IiEEEE(void);

/* Symbol: _ZN4mfll7MfllMfb5blendEPNS_16IMfllImageBufferES2_S2_S2_S2_S2_ */
/* Demangled: mfll::MfllMfb::blend(mfll::IMfllImageBuffer*, mfll::IMfllImageBuffer*, mfll::IMfllImageBuffer*, mfll::IMfllImageBuffer*, mfll::IMfllImageBuffer*, mfll::IMfllImageBuffer*) */
int _ZN4mfll7MfllMfb5blendEPNS_16IMfllImageBufferES2_S2_S2_S2_S2_(void);

/* Symbol: _ZNSt3__114__split_bufferIPPN5NSCam9IMetadataERNS_9allocatorIS4_EEE9push_backEOS4_ */
/* Demangled: std::__1::__split_buffer<NSCam::IMetadata**, std::__1::allocator<NSCam::IMetadata**>&>::push_back(NSCam::IMetadata**&&) */
int _ZNSt3__114__split_bufferIPPN5NSCam9IMetadataERNS_9allocatorIS4_EEE9push_backEOS4_(void);

/* Symbol: _ZN4mfll11IMfllEvents14createInstanceEv */
/* Demangled: mfll::IMfllEvents::createInstance() */
int _ZN4mfll11IMfllEvents14createInstanceEv(void);

/* Symbol: _ZN4mfll8MfllCore21_isNeedResizedYBufferEv */
/* Demangled: mfll::MfllCore::_isNeedResizedYBuffer() */
int _ZN4mfll8MfllCore21_isNeedResizedYBufferEv(void);

/* Symbol: _ZN4mfll8MfllCore27updateImageBufferQueueLimitEv */
/* Demangled: mfll::MfllCore::updateImageBufferQueueLimit() */
int _ZN4mfll8MfllCore27updateImageBufferQueueLimitEv(void);

/* Symbol: _ZN4mfll8MfllCore35_updateSingeFrameBypassConfigLockedEv */
/* Demangled: mfll::MfllCore::_updateSingeFrameBypassConfigLocked() */
int _ZN4mfll8MfllCore35_updateSingeFrameBypassConfigLockedEv(void);

/* Symbol: _ZN4mfll9IMfllGyro15destroyInstanceEv */
/* Demangled: mfll::IMfllGyro::destroyInstance() */
int _ZN4mfll9IMfllGyro15destroyInstanceEv(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _ZN4mfll8MfllCore14lockSyncObjectEPNS_11MfllSyncObjE */
/* Demangled: mfll::MfllCore::lockSyncObject(mfll::MfllSyncObj*) */
int _ZN4mfll8MfllCore14lockSyncObjectEPNS_11MfllSyncObjE(void);

/* Symbol: _ZN4mfll9MfllNvram14getChunkMfnrThEPm */
/* Demangled: mfll::MfllNvram::getChunkMfnrTh(unsigned long*) */
int _ZN4mfll9MfllNvram14getChunkMfnrThEPm(void);

/* Symbol: __fe_raise_inexact */
/* Demangled: __fe_raise_inexact */
int fn___fe_raise_inexact(void) __asm__("__fe_raise_inexact");

/* Symbol: _ZN4mfll15MfllFeaturePerfC2Ev */
/* Demangled: mfll::MfllFeaturePerf::MfllFeaturePerf() */
int _ZN4mfll15MfllFeaturePerfC2Ev(void);

/* Symbol: _ZN4mfll8MfllMemc4initERN7android2spINS_10IMfllNvramEEE */
/* Demangled: mfll::MfllMemc::init(android::sp<mfll::IMfllNvram>&) */
int _ZN4mfll8MfllMemc4initERN7android2spINS_10IMfllNvramEEE(void);

/* Symbol: _ZN4mfll7MfllMfb14encodeRawToYuvEPNS_16IMfllImageBufferES2_S2_RKNS_8MfllRectES5_NS_8YuvStageE */
/* Demangled: mfll::MfllMfb::encodeRawToYuv(mfll::IMfllImageBuffer*, mfll::IMfllImageBuffer*, mfll::IMfllImageBuffer*, mfll::MfllRect const&, mfll::MfllRect const&, mfll::YuvStage) */
int _ZN4mfll7MfllMfb14encodeRawToYuvEPNS_16IMfllImageBufferES2_S2_RKNS_8MfllRectES5_NS_8YuvStageE(void);

/* Symbol: _ZN4mfll7MfllMfb21convertYuvFormatByMdpEPN5NSCam12IImageBufferES3_S3_RKNS_8MfllRectES6_NS_8YuvStageE */
/* Demangled: mfll::MfllMfb::convertYuvFormatByMdp(NSCam::IImageBuffer*, NSCam::IImageBuffer*, NSCam::IImageBuffer*, mfll::MfllRect const&, mfll::MfllRect const&, mfll::YuvStage) */
int _ZN4mfll7MfllMfb21convertYuvFormatByMdpEPN5NSCam12IImageBufferES3_S3_RKNS_8MfllRectES6_NS_8YuvStageE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE8do_splatEPvPKvm(void);

/* Symbol: _ZTSSt9exception */
/* Demangled: typeinfo name for std::exception */
extern void* _ZTSSt9exception;

/* Symbol: __netf2 */
/* Demangled: __netf2 */
int fn___netf2(void) __asm__("__netf2");

/* Symbol: _ZN4mfll12MfllProperty13getDebugLevelEv */
/* Demangled: mfll::MfllProperty::getDebugLevel() */
int _ZN4mfll12MfllProperty13getDebugLevelEv(void);

/* Symbol: _ZN4mfll8MfllCore18setSyncPrivateDataERKNSt3__15dequeIPvNS1_9allocatorIS3_EEEE */
/* Demangled: mfll::MfllCore::setSyncPrivateData(std::__1::deque<void*, std::__1::allocator<void*> > const&) */
int _ZN4mfll8MfllCore18setSyncPrivateDataERKNSt3__15dequeIPvNS1_9allocatorIS3_EEEE(void);

/* Symbol: _ZN4mfll10MfllEvents21registerEventListenerERKNS_9EventTypeERKN7android2spINS_18IMfllEventListenerEEE */
/* Demangled: mfll::MfllEvents::registerEventListener(mfll::EventType const&, android::sp<mfll::IMfllEventListener> const&) */
int _ZN4mfll10MfllEvents21registerEventListenerERKNS_9EventTypeERKN7android2spINS_18IMfllEventListenerEEE(void);

/* Symbol: _ZN4mfll7MfllMfb11setMixDebugEN7android2spINS_16IMfllImageBufferEEE */
/* Demangled: mfll::MfllMfb::setMixDebug(android::sp<mfll::IMfllImageBuffer>) */
int _ZN4mfll7MfllMfb11setMixDebugEN7android2spINS_16IMfllImageBufferEEE(void);

/* Symbol: __atomic_store_16 */
/* Demangled: __atomic_store_16 */
int fn___atomic_store_16(void) __asm__("__atomic_store_16");

/* Symbol: _ZNSt3__16vectorIN7android2spIN4mfll18IMfllEventListenerEEENS_9allocatorIS5_EEE6insertENS_11__wrap_iterIPKS5_EERSA_ */
/* Demangled: std::__1::vector<android::sp<mfll::IMfllEventListener>, std::__1::allocator<android::sp<mfll::IMfllEventListener> > >::insert(std::__1::__wrap_iter<android::sp<mfll::IMfllEventListener> const*>, android::sp<mfll::IMfllEventListener> const&) */
int _ZNSt3__16vectorIN7android2spIN4mfll18IMfllEventListenerEEENS_9allocatorIS5_EEE6insertENS_11__wrap_iterIPKS5_EERSA_(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_pointerIPN4mfll21IMfllImageBufferQueueENS_14default_deleteIS2_EENS_9allocatorIS2_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_pointer<mfll::IMfllImageBufferQueue*, std::__1::default_delete<mfll::IMfllImageBufferQueue>, std::__1::allocator<mfll::IMfllImageBufferQueue> > */
extern void* _ZTVNSt3__120__shared_ptr_pointerIPN4mfll21IMfllImageBufferQueueENS_14default_deleteIS2_EENS_9allocatorIS2_EEEE;

/* Symbol: _ZN4mfll7MfllMfb3mixEPNS_16IMfllImageBufferES2_S2_S2_ */
/* Demangled: mfll::MfllMfb::mix(mfll::IMfllImageBuffer*, mfll::IMfllImageBuffer*, mfll::IMfllImageBuffer*, mfll::IMfllImageBuffer*) */
int _ZN4mfll7MfllMfb3mixEPNS_16IMfllImageBufferES2_S2_S2_(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam8NSIoPipe11FrameParamsEEE */
/* Demangled: vtable for android::Vector<NSCam::NSIoPipe::FrameParams> */
extern void* _ZTVN7android6VectorIN5NSCam8NSIoPipe11FrameParamsEEE;

/* Symbol: _ZN4mfll8MfllCore23setQueueYuvFramesCountsEj */
/* Demangled: mfll::MfllCore::setQueueYuvFramesCounts(unsigned int) */
int _ZN4mfll8MfllCore23setQueueYuvFramesCountsEj(void);

/* Symbol: __atomic_load */
/* Demangled: __atomic_load */
int fn___atomic_load(void) __asm__("__atomic_load");

/* Symbol: _ZNSt3__15dequeIPvNS_9allocatorIS1_EEE8__appendINS_16__deque_iteratorIS1_PKS1_RS7_PKS8_lLl512EEEEEvT_SD_PNS_9enable_ifIXsr21__is_forward_iteratorISD_EE5valueEvE4typeE */
/* Demangled: _ZNSt3__15dequeIPvNS_9allocatorIS1_EEE8__appendINS_16__deque_iteratorIS1_PKS1_RS7_PKS8_lLl512EEEEEvT_SD_PNS_9enable_ifIXsr21__is_forward_iteratorISD_EE5valueEvE4typeE */
int _ZNSt3__15dequeIPvNS_9allocatorIS1_EEE8__appendINS_16__deque_iteratorIS1_PKS1_RS7_PKS8_lLl512EEEEEvT_SD_PNS_9enable_ifIXsr21__is_forward_iteratorISD_EE5valueEvE4typeE(void);

/* Symbol: _ZN4mfll15MfllImageBuffer13getResolutionERjS1_ */
/* Demangled: mfll::MfllImageBuffer::getResolution(unsigned int&, unsigned int&) */
int _ZN4mfll15MfllImageBuffer13getResolutionERjS1_(void);

/* Symbol: _ZN4mfll7MfllMfb3mixEPNS_16IMfllImageBufferES2_S2_S2_S2_RKNS_8MfllRectE */
/* Demangled: mfll::MfllMfb::mix(mfll::IMfllImageBuffer*, mfll::IMfllImageBuffer*, mfll::IMfllImageBuffer*, mfll::IMfllImageBuffer*, mfll::IMfllImageBuffer*, mfll::MfllRect const&) */
int _ZN4mfll7MfllMfb3mixEPNS_16IMfllImageBufferES2_S2_S2_S2_RKNS_8MfllRectE(void);

/* Symbol: _ZN4mfll12MfllProperty6isFeedEv */
/* Demangled: mfll::MfllProperty::isFeed() */
int _ZN4mfll12MfllProperty6isFeedEv(void);

/* Symbol: _ZN4mfll12MfllCapturerC2Ev */
/* Demangled: mfll::MfllCapturer::MfllCapturer() */
int _ZN4mfll12MfllCapturerC2Ev(void);

/* Symbol: _ZN4mfll7MfllMfb4initEi */
/* Demangled: mfll::MfllMfb::init(int) */
int _ZN4mfll7MfllMfb4initEi(void);

/* Symbol: _ZN4mfll8MfllCore21registerEventListenerERKN7android2spINS_18IMfllEventListenerEEE */
/* Demangled: mfll::MfllCore::registerEventListener(android::sp<mfll::IMfllEventListener> const&) */
int _ZN4mfll8MfllCore21registerEventListenerERKN7android2spINS_18IMfllEventListenerEEE(void);

/* Symbol: _ZNK4mfll8MfllCore18getInputYuvFmtYuvQEv */
/* Demangled: mfll::MfllCore::getInputYuvFmtYuvQ() const */
int _ZNK4mfll8MfllCore18getInputYuvFmtYuvQEv(void);

/* Symbol: _ZN4mfll11MfllCore2p5C2Ev */
/* Demangled: mfll::MfllCore2p5::MfllCore2p5() */
int _ZN4mfll11MfllCore2p5C2Ev(void);

/* Symbol: _ZNSt3__16vectorIN7android2spIN4mfll18IMfllEventListenerEEENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<mfll::IMfllEventListener>, std::__1::allocator<android::sp<mfll::IMfllEventListener> > >::__push_back_slow_path<android::sp<mfll::IMfllEventListener> const&>(android::sp<mfll::IMfllEventListener> const&) */
int _ZNSt3__16vectorIN7android2spIN4mfll18IMfllEventListenerEEENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_(void);

/* Symbol: _ZN4mfll14MfllFeatureMrpD0Ev */
/* Demangled: mfll::MfllFeatureMrp::~MfllFeatureMrp() */
int _ZN4mfll14MfllFeatureMrpD0Ev(void);

/* Symbol: _ZN4mfll12MfllCapturer11setMfllCoreEPNS_9IMfllCoreE */
/* Demangled: mfll::MfllCapturer::setMfllCore(mfll::IMfllCore*) */
int _ZN4mfll12MfllCapturer11setMfllCoreEPNS_9IMfllCoreE(void);

/* Symbol: _ZN4mfll12fix_mix_yuy2EPhii */
/* Demangled: mfll::fix_mix_yuy2(unsigned char*, int, int) */
int _ZN4mfll12fix_mix_yuy2EPhii(void);

/* Symbol: _ZN4mfll8IMfllMfb15destroyInstanceEv */
/* Demangled: mfll::IMfllMfb::destroyInstance() */
int _ZN4mfll8IMfllMfb15destroyInstanceEv(void);

/* Symbol: _ZN4mfll8MfllCoreD2Ev */
/* Demangled: mfll::MfllCore::~MfllCore() */
int _ZN4mfll8MfllCoreD2Ev(void);

/* Symbol: _ZN4mfll11MfllCore2p514retrieveBufferERKNS_10MfllBufferEi */
/* Demangled: mfll::MfllCore2p5::retrieveBuffer(mfll::MfllBuffer const&, int) */
int _ZN4mfll11MfllCore2p514retrieveBufferERKNS_10MfllBufferEi(void);

/* Symbol: _ZN4mfll15MfllYuvCapturer11setMfllCoreEPNS_9IMfllCoreE */
/* Demangled: mfll::MfllYuvCapturer::setMfllCore(mfll::IMfllCore*) */
int _ZN4mfll15MfllYuvCapturer11setMfllCoreEPNS_9IMfllCoreE(void);

/* Symbol: _ZNSt3__15dequeIPN4mfll15MfllImageBufferENS_9allocatorIS3_EEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<mfll::MfllImageBuffer*, std::__1::allocator<mfll::MfllImageBuffer*> >::__add_back_capacity() */
int _ZNSt3__15dequeIPN4mfll15MfllImageBufferENS_9allocatorIS3_EEE19__add_back_capacityEv(void);

/* Symbol: _ZN4mfll8MfllMemcD0Ev */
/* Demangled: mfll::MfllMemc::~MfllMemc() */
int _ZN4mfll8MfllMemcD0Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE7do_copyEPvPKvm(void);

/* Symbol: _ZN4mfll12MfllCapturer23registerEventDispatcherERKN7android2spINS_11IMfllEventsEEE */
/* Demangled: mfll::MfllCapturer::registerEventDispatcher(android::sp<mfll::IMfllEvents> const&) */
int _ZN4mfll12MfllCapturer23registerEventDispatcherERKN7android2spINS_11IMfllEventsEEE(void);

/* Symbol: _ZNSt3__114__split_bufferIPN6NS3Av39MetaSet_TENS_9allocatorIS3_EEE10push_frontEOS3_ */
/* Demangled: std::__1::__split_buffer<NS3Av3::MetaSet_T*, std::__1::allocator<NS3Av3::MetaSet_T*> >::push_front(NS3Av3::MetaSet_T*&&) */
int _ZNSt3__114__split_bufferIPN6NS3Av39MetaSet_TENS_9allocatorIS3_EEE10push_frontEOS3_(void);

/* Symbol: _ZN4mfll14MAKE_MFNR_COREILi2ELi5ELi1EEEPNS_9IMfllCoreEv */
/* Demangled: mfll::IMfllCore* mfll::MAKE_MFNR_CORE<2, 5, 1>() */
int _ZN4mfll14MAKE_MFNR_COREILi2ELi5ELi1EEEPNS_9IMfllCoreEv(void);

/* Symbol: _ZN4mfll12MfllProperty6getBssEv */
/* Demangled: mfll::MfllProperty::getBss() */
int _ZN4mfll12MfllProperty6getBssEv(void);

/* Symbol: _ZN4mfll14MfllFeatureMrp20releaseStageBlendingEPNS_9IMfllCoreEj */
/* Demangled: mfll::MfllFeatureMrp::releaseStageBlending(mfll::IMfllCore*, unsigned int) */
int _ZN4mfll14MfllFeatureMrp20releaseStageBlendingEPNS_9IMfllCoreEj(void);

/* Symbol: _ZN4mfll14MfllFeatureMrp21getListenedEventTypesEv */
/* Demangled: mfll::MfllFeatureMrp::getListenedEventTypes() */
int _ZN4mfll14MfllFeatureMrp21getListenedEventTypesEv(void);

/* Symbol: _ZTVN4mfll8IMfllMfbE */
/* Demangled: vtable for mfll::IMfllMfb */
extern void* _ZTVN4mfll8IMfllMfbE;

/* Symbol: _ZTVN7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEEE */
/* Demangled: vtable for android::Vector<NSCam::NSIoPipe::MCrpRsInfo> */
extern void* _ZTVN7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEEE;

/* Symbol: _ZTVN4mfll9MfllNvramE */
/* Demangled: vtable for mfll::MfllNvram */
extern void* _ZTVN4mfll9MfllNvramE;

/* Symbol: _ZN4mfll8MfllCore19getMixingBufferTypeEv */
/* Demangled: mfll::MfllCore::getMixingBufferType() */
int _ZN4mfll8MfllCore19getMixingBufferTypeEv(void);

/* Symbol: _ZN4mfll9MfllCore2C1Ev */
/* Demangled: mfll::MfllCore2::MfllCore2() */
int _ZN4mfll9MfllCore2C1Ev(void);

/* Symbol: _ZN4mfll15MfllYuvCapturer13setPostNrTypeERKNS_18NoiseReductionTypeE */
/* Demangled: mfll::MfllYuvCapturer::setPostNrType(mfll::NoiseReductionType const&) */
int _ZN4mfll15MfllYuvCapturer13setPostNrTypeERKNS_18NoiseReductionTypeE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN4mfll7MfllErrEPNS9_13IMfllExifInfoERKNS_5dequeIPvNS5_ISE_EEEEEEEEENS_22__unordered_map_hasherIS7_SL_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SL_NS_8equal_toIS7_EELb1EEENS5_ISL_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<mfll::MfllErr (mfll::IMfllExifInfo*, std::__1::deque<void*, std::__1::allocator<void*> > const&)> >, std::__1::__unordered_map_hasher<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<mfll::MfllErr (mfll::IMfllExifInfo*, std::__1::deque<void*, std::__1::allocator<void*> > const&)> >, std::__1::hash<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<mfll::MfllErr (mfll::IMfllExifInfo*, std::__1::deque<void*, std::__1::allocator<void*> > const&)> >, std::__1::equal_to<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<mfll::MfllErr (mfll::IMfllExifInfo*, std::__1::deque<void*, std::__1::allocator<void*> > const&)> > > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN4mfll7MfllErrEPNS9_13IMfllExifInfoERKNS_5dequeIPvNS5_ISE_EEEEEEEEENS_22__unordered_map_hasherIS7_SL_NS_4hashIS7_EELb1EEENS_21__unordered_map_equalIS7_SL_NS_8equal_toIS7_EELb1EEENS5_ISL_EEE6rehashEm(void);

/* Symbol: _ZN4mfll12MfllStrategyD0Ev */
/* Demangled: mfll::MfllStrategy::~MfllStrategy() */
int _ZN4mfll12MfllStrategyD0Ev(void);

/* Symbol: _ZN4mfll8MfllCoreC1Ev */
/* Demangled: mfll::MfllCore::MfllCore() */
int _ZN4mfll8MfllCoreC1Ev(void);

/* Symbol: _ZNK4mfll8MfllCore13getCurrentIsoEv */
/* Demangled: mfll::MfllCore::getCurrentIso() const */
int _ZNK4mfll8MfllCore13getCurrentIsoEv(void);

/* Symbol: _ZN4mfll10MfllEvents19removeEventListenerERKNS_9EventTypeEPKNS_18IMfllEventListenerE */
/* Demangled: mfll::MfllEvents::removeEventListener(mfll::EventType const&, mfll::IMfllEventListener const*) */
int _ZN4mfll10MfllEvents19removeEventListenerERKNS_9EventTypeEPKNS_18IMfllEventListenerE(void);

/* Symbol: _ZN4mfll12MfllPropertyD2Ev */
/* Demangled: mfll::MfllProperty::~MfllProperty() */
int _ZN4mfll12MfllPropertyD2Ev(void);

/* Symbol: _ZN4mfll14MfllFeatureMrp9doneEventENS_9EventTypeERNS_15MfllEventStatusEPvS4_S4_ */
/* Demangled: mfll::MfllFeatureMrp::doneEvent(mfll::EventType, mfll::MfllEventStatus&, void*, void*, void*) */
int _ZN4mfll14MfllFeatureMrp9doneEventENS_9EventTypeERNS_15MfllEventStatusEPvS4_S4_(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE15do_move_forwardEPvPKvm(void);

/* Symbol: __letf2 */
/* Demangled: __letf2 */
int fn___letf2(void) __asm__("__letf2");

/* Symbol: _ZN4mfll9IMfllCore14createInstanceEiiNS0_4TypeE */
/* Demangled: mfll::IMfllCore::createInstance(int, int, mfll::IMfllCore::Type) */
int _ZN4mfll9IMfllCore14createInstanceEiiNS0_4TypeE(void);

/* Symbol: _ZN4mfll15MfllFeatureDump12dumpMfbStageEPNS_9IMfllCoreEi */
/* Demangled: mfll::MfllFeatureDump::dumpMfbStage(mfll::IMfllCore*, int) */
int _ZN4mfll15MfllFeatureDump12dumpMfbStageEPNS_9IMfllCoreEi(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNSt3__15dequeIPKcNS_9allocatorIS2_EEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<char const*, std::__1::allocator<char const*> >::__add_back_capacity() */
int _ZNSt3__15dequeIPKcNS_9allocatorIS2_EEE19__add_back_capacityEv(void);

/* Symbol: _ZN4mfll12MfllProperty15getForceGmvZeroEv */
/* Demangled: mfll::MfllProperty::getForceGmvZero() */
int _ZN4mfll12MfllProperty15getForceGmvZeroEv(void);

/* Symbol: _ZN4mfll12MfllCapturer15dispatchOnEventERKNS_9EventTypeERNS_15MfllEventStatusEPvS6_ */
/* Demangled: mfll::MfllCapturer::dispatchOnEvent(mfll::EventType const&, mfll::MfllEventStatus&, void*, void*) */
int _ZN4mfll12MfllCapturer15dispatchOnEventERKNS_9EventTypeERNS_15MfllEventStatusEPvS6_(void);

/* Symbol: _ZN4mfll12MfllCapturer8dequeGmvEv */
/* Demangled: mfll::MfllCapturer::dequeGmv() */
int _ZN4mfll12MfllCapturer8dequeGmvEv(void);

/* Symbol: _ZN4mfll15MfllYuvCapturerD1Ev */
/* Demangled: mfll::MfllYuvCapturer::~MfllYuvCapturer() */
int _ZN4mfll15MfllYuvCapturerD1Ev(void);

/* Symbol: _ZNSt3__114__split_bufferIPPvNS_9allocatorIS2_EEE9push_backEOS2_ */
/* Demangled: std::__1::__split_buffer<void**, std::__1::allocator<void**> >::push_back(void**&&) */
int _ZNSt3__114__split_bufferIPPvNS_9allocatorIS2_EEE9push_backEOS2_(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN4mfll10MfllEventsD0Ev */
/* Demangled: mfll::MfllEvents::~MfllEvents() */
int _ZN4mfll10MfllEventsD0Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_5tupleIJNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEEEjEENS_19__map_value_compareIS9_SA_NS_4lessIS9_EELb1EEENS6_ISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, unsigned int>, std::__1::__map_value_compare<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, std::__1::__value_type<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, unsigned int>, std::__1::less<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, unsigned int> > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::tuple<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>, unsigned int>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeINS_5tupleIJNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEiEEEjEENS_19__map_value_compareIS9_SA_NS_4lessIS9_EELb1EEENS6_ISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE(void);

/* Symbol: _ZN4mfll12MfllCapturer12dequeLcsoRawEv */
/* Demangled: mfll::MfllCapturer::dequeLcsoRaw() */
int _ZN4mfll12MfllCapturer12dequeLcsoRawEv(void);

/* Symbol: _ZN4mfll15MfllImageBufferC1EPKcNS_21IMfllImageBuffer_FlagE */
/* Demangled: mfll::MfllImageBuffer::MfllImageBuffer(char const*, mfll::IMfllImageBuffer_Flag) */
int _ZN4mfll15MfllImageBufferC1EPKcNS_21IMfllImageBuffer_FlagE(void);

/* Symbol: _ZN4mfll12MfllPropertyC1Ev */
/* Demangled: mfll::MfllProperty::MfllProperty() */
int _ZN4mfll12MfllPropertyC1Ev(void);

/* Symbol: _ZN4mfll8MfllCore15doEncodeYuvBaseEl */
/* Demangled: mfll::MfllCore::doEncodeYuvBase(long) */
int _ZN4mfll8MfllCore15doEncodeYuvBaseEl(void);

/* Symbol: _ZN4mfll8MfllCore9isShootedEv */
/* Demangled: mfll::MfllCore::isShooted() */
int _ZN4mfll8MfllCore9isShootedEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPNS_6futureIvEERNS_9allocatorIS3_EEE9push_backEOS3_ */
/* Demangled: std::__1::__split_buffer<std::__1::future<void>*, std::__1::allocator<std::__1::future<void>*>&>::push_back(std::__1::future<void>*&&) */
int _ZNSt3__114__split_bufferIPNS_6futureIvEERNS_9allocatorIS3_EEE9push_backEOS3_(void);

/* Symbol: _ZN4mfll8IMfllBss15destroyInstanceEv */
/* Demangled: mfll::IMfllBss::destroyInstance() */
int _ZN4mfll8IMfllBss15destroyInstanceEv(void);

/* Symbol: _ZN4mfll7MfllMfb14encodeRawToYuvEPN5NSCam12IImageBufferES3_S3_S3_RKNS_8MfllRectES6_S6_RKNS_8YuvStageE */
/* Demangled: mfll::MfllMfb::encodeRawToYuv(NSCam::IImageBuffer*, NSCam::IImageBuffer*, NSCam::IImageBuffer*, NSCam::IImageBuffer*, mfll::MfllRect const&, mfll::MfllRect const&, mfll::MfllRect const&, mfll::YuvStage const&) */
int _ZN4mfll7MfllMfb14encodeRawToYuvEPN5NSCam12IImageBufferES3_S3_S3_RKNS_8MfllRectES6_S6_RKNS_8YuvStageE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE7do_copyEPvPKvm(void);

/* Symbol: _ZTVN4mfll8MfllMemcE */
/* Demangled: vtable for mfll::MfllMemc */
extern void* _ZTVN4mfll8MfllMemcE;

/* Symbol: _ZN4mfll8MfllCore17do_AllocYuvGoldenEl */
/* Demangled: mfll::MfllCore::do_AllocYuvGolden(long) */
int _ZN4mfll8MfllCore17do_AllocYuvGoldenEl(void);

/* Symbol: _ZN4mfll8MfllCore25tellsFutureAllocateMemoryEv */
/* Demangled: mfll::MfllCore::tellsFutureAllocateMemory() */
int _ZN4mfll8MfllCore25tellsFutureAllocateMemoryEv(void);

/* Symbol: _ZNK4mfll8MfllCore26getInputYuvFmtYuvMcWorkingEv */
/* Demangled: mfll::MfllCore::getInputYuvFmtYuvMcWorking() const */
int _ZNK4mfll8MfllCore26getInputYuvFmtYuvMcWorkingEv(void);

/* Symbol: _ZTVNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE */
/* Demangled: vtable for std::__1::basic_ofstream<char, std::__1::char_traits<char> > */
extern void* _ZTVNSt3__114basic_ofstreamIcNS_11char_traitsIcEEEE;

/* Symbol: _ZN4mfll15MfllImageBufferD2Ev */
/* Demangled: mfll::MfllImageBuffer::~MfllImageBuffer() */
int _ZN4mfll15MfllImageBufferD2Ev(void);

/* Symbol: _ZNSt3__112__deque_baseIN6NS3Av39MetaSet_TENS_9allocatorIS2_EEE5clearEv */
/* Demangled: std::__1::__deque_base<NS3Av3::MetaSet_T, std::__1::allocator<NS3Av3::MetaSet_T> >::clear() */
int _ZNSt3__112__deque_baseIN6NS3Av39MetaSet_TENS_9allocatorIS2_EEE5clearEv(void);

/* Symbol: _ZN4mfll8MfllCore14updateExifInfoEjj */
/* Demangled: mfll::MfllCore::updateExifInfo(unsigned int, unsigned int) */
int _ZN4mfll8MfllCore14updateExifInfoEjj(void);

/* Symbol: _ZN4mfll8MfllCore16doAllocWeightingEPv */
/* Demangled: mfll::MfllCore::doAllocWeighting(void*) */
int _ZN4mfll8MfllCore16doAllocWeightingEPv(void);

/* Symbol: _ZN4mfll8MfllCore18do_AllocRrzoBufferEPv */
/* Demangled: mfll::MfllCore::do_AllocRrzoBuffer(void*) */
int _ZN4mfll8MfllCore18do_AllocRrzoBufferEPv(void);

/* Symbol: _ZNK4mfll8MfllCore17getCurrentShutterEv */
/* Demangled: mfll::MfllCore::getCurrentShutter() const */
int _ZNK4mfll8MfllCore17getCurrentShutterEv(void);

/* Symbol: _ZNSt3__14lockINS_5mutexES1_EEvRT_RT0_ */
/* Demangled: void std::__1::lock<std::__1::mutex, std::__1::mutex>(std::__1::mutex&, std::__1::mutex&) */
int _ZNSt3__14lockINS_5mutexES1_EEvRT_RT0_(void);

/* Symbol: _ZN4mfll11MfllCore2p511do_BlendingEPv */
/* Demangled: mfll::MfllCore2p5::do_Blending(void*) */
int _ZN4mfll11MfllCore2p511do_BlendingEPv(void);

/* Symbol: _ZN4mfll9MfllNvram4initEi */
/* Demangled: mfll::MfllNvram::init(int) */
int _ZN4mfll9MfllNvram4initEi(void);

/* Symbol: _ZN4mfll13IMfllStrategy14createInstanceEv */
/* Demangled: mfll::IMfllStrategy::createInstance() */
int _ZN4mfll13IMfllStrategy14createInstanceEv(void);

/* Symbol: _ZN4mfll17MfllOperationSync11getInstanceEv */
/* Demangled: mfll::MfllOperationSync::getInstance() */
int _ZN4mfll17MfllOperationSync11getInstanceEv(void);

/* Symbol: _ZN4mfll8MfllCore20do_AllocYuvMcWorkingEl */
/* Demangled: mfll::MfllCore::do_AllocYuvMcWorking(long) */
int _ZN4mfll8MfllCore20do_AllocYuvMcWorkingEl(void);

/* Symbol: _ZNSt3__114__split_bufferIPN4mfll15ImageBufferPackERNS_9allocatorIS3_EEE10push_frontERKS3_ */
/* Demangled: std::__1::__split_buffer<mfll::ImageBufferPack*, std::__1::allocator<mfll::ImageBufferPack*>&>::push_front(mfll::ImageBufferPack* const&) */
int _ZNSt3__114__split_bufferIPN4mfll15ImageBufferPackERNS_9allocatorIS3_EEE10push_frontERKS3_(void);

/* Symbol: _ZNSt3__114__split_bufferIPN4mfll17MfllOperationSync3JOBENS_9allocatorIS4_EEE9push_backEOS4_ */
/* Demangled: std::__1::__split_buffer<mfll::MfllOperationSync::JOB*, std::__1::allocator<mfll::MfllOperationSync::JOB*> >::push_back(mfll::MfllOperationSync::JOB*&&) */
int _ZNSt3__114__split_bufferIPN4mfll17MfllOperationSync3JOBENS_9allocatorIS4_EEE9push_backEOS4_(void);

/* Symbol: _ZN4mfll11MfllCore2p516getVersionStringEv */
/* Demangled: mfll::MfllCore2p5::getVersionString() */
int _ZN4mfll11MfllCore2p516getVersionStringEv(void);

/* Symbol: _ZN4mfll7MfllMfbD2Ev */
/* Demangled: mfll::MfllMfb::~MfllMfb() */
int _ZN4mfll7MfllMfbD2Ev(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8NSIoPipe9MFBConfigENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::NSIoPipe::MFBConfig, std::__1::allocator<NSCam::NSIoPipe::MFBConfig> >::__push_back_slow_path<NSCam::NSIoPipe::MFBConfig const&>(NSCam::NSIoPipe::MFBConfig const&) */
int _ZNSt3__16vectorIN5NSCam8NSIoPipe9MFBConfigENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void);

/* Symbol: _ZN4mfll9MfllNvram4initERNS_10IMfllNvram12ConfigParamsE */
/* Demangled: mfll::MfllNvram::init(mfll::IMfllNvram::ConfigParams&) */
int _ZN4mfll9MfllNvram4initERNS_10IMfllNvram12ConfigParamsE(void);

/* Symbol: _ZN4mfll8MfllCore17getBlendFrameSizeERiS1_ */
/* Demangled: mfll::MfllCore::getBlendFrameSize(int&, int&) */
int _ZN4mfll8MfllCore17getBlendFrameSizeERiS1_(void);

/* Symbol: libat_unlock_n */
/* Demangled: libat_unlock_n */
int libat_unlock_n(void);

/* Symbol: _ZN4mfll8MfllCore18do_AllocQyuvBufferEPv */
/* Demangled: mfll::MfllCore::do_AllocQyuvBuffer(void*) */
int _ZN4mfll8MfllCore18do_AllocQyuvBufferEPv(void);

/* Symbol: _ZNK4mfll8MfllCore24getInputYuvFmtYuvWorkingEv */
/* Demangled: mfll::MfllCore::getInputYuvFmtYuvWorking() const */
int _ZNK4mfll8MfllCore24getInputYuvFmtYuvWorkingEv(void);

/* Symbol: _ZTVN4mfll16IMfllImageBufferE */
/* Demangled: vtable for mfll::IMfllImageBuffer */
extern void* _ZTVN4mfll16IMfllImageBufferE;

/* Symbol: _ZN4mfll21IMfllImageBufferQueue11getInstanceENS_21IMfllImageBuffer_FlagE */
/* Demangled: mfll::IMfllImageBufferQueue::getInstance(mfll::IMfllImageBuffer_Flag) */
int _ZN4mfll21IMfllImageBufferQueue11getInstanceENS_21IMfllImageBuffer_FlagE(void);

/* Symbol: _ZNSt3__120__shared_ptr_pointerIPN4mfll21IMfllImageBufferQueueENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_pointer<mfll::IMfllImageBufferQueue*, std::__1::default_delete<mfll::IMfllImageBufferQueue>, std::__1::allocator<mfll::IMfllImageBufferQueue> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_pointerIPN4mfll21IMfllImageBufferQueueENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN4mfll8MfllCore20setCaptureResolutionEjj */
/* Demangled: mfll::MfllCore::setCaptureResolution(unsigned int, unsigned int) */
int _ZN4mfll8MfllCore20setCaptureResolutionEjj(void);

/* Symbol: _ZN4mfll12MfllCapturer20queueSourceRrzoImageERN7android2spINS_16IMfllImageBufferEEE */
/* Demangled: mfll::MfllCapturer::queueSourceRrzoImage(android::sp<mfll::IMfllImageBuffer>&) */
int _ZN4mfll12MfllCapturer20queueSourceRrzoImageERN7android2spINS_16IMfllImageBufferEEE(void);

/* Symbol: _ZN4mfll7MfllMfbC1Ev */
/* Demangled: mfll::MfllMfb::MfllMfb() */
int _ZN4mfll7MfllMfbC1Ev(void);

/* Symbol: _ZN4mfll15MfllImageBuffer27createContinuousImageBufferERKNS_11ImageFormatERj */
/* Demangled: mfll::MfllImageBuffer::createContinuousImageBuffer(mfll::ImageFormat const&, unsigned int&) */
int _ZN4mfll15MfllImageBuffer27createContinuousImageBufferERKNS_11ImageFormatERj(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE10do_destroyEPvm(void);

/* Symbol: _ZNSt3__114__split_bufferIPN4mfll17MfllOperationSync3JOBERNS_9allocatorIS4_EEE10push_frontERKS4_ */
/* Demangled: std::__1::__split_buffer<mfll::MfllOperationSync::JOB*, std::__1::allocator<mfll::MfllOperationSync::JOB*>&>::push_front(mfll::MfllOperationSync::JOB* const&) */
int _ZNSt3__114__split_bufferIPN4mfll17MfllOperationSync3JOBERNS_9allocatorIS4_EEE10push_frontERKS4_(void);

/* Symbol: _ZN4mfll13IMfllExifInfo15destroyInstanceEv */
/* Demangled: mfll::IMfllExifInfo::destroyInstance() */
int _ZN4mfll13IMfllExifInfo15destroyInstanceEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPPN5NSCam12IImageBufferERNS_9allocatorIS4_EEE10push_frontERKS4_ */
/* Demangled: std::__1::__split_buffer<NSCam::IImageBuffer**, std::__1::allocator<NSCam::IImageBuffer**>&>::push_front(NSCam::IImageBuffer** const&) */
int _ZNSt3__114__split_bufferIPPN5NSCam12IImageBufferERNS_9allocatorIS4_EEE10push_frontERKS4_(void);

/* Symbol: _ZN4mfll12MfllCapturer13captureFramesEjRNSt3__16vectorIPN7android2spINS_16IMfllImageBufferEEENS1_9allocatorIS7_EEEESB_SB_SB_RNS2_IPNS_16MfllMotionVectorENS8_ISD_EEEERNS2_IiNS8_IiEEEE */
/* Demangled: mfll::MfllCapturer::captureFrames(unsigned int, std::__1::vector<android::sp<mfll::IMfllImageBuffer>*, std::__1::allocator<android::sp<mfll::IMfllImageBuffer>*> >&, std::__1::vector<android::sp<mfll::IMfllImageBuffer>*, std::__1::allocator<android::sp<mfll::IMfllImageBuffer>*> >&, std::__1::vector<android::sp<mfll::IMfllImageBuffer>*, std::__1::allocator<android::sp<mfll::IMfllImageBuffer>*> >&, std::__1::vector<android::sp<mfll::IMfllImageBuffer>*, std::__1::allocator<android::sp<mfll::IMfllImageBuffer>*> >&, std::__1::vector<mfll::MfllMotionVector*, std::__1::allocator<mfll::MfllMotionVector*> >&, std::__1::vector<int, std::__1::allocator<int> >&) */
int _ZN4mfll12MfllCapturer13captureFramesEjRNSt3__16vectorIPN7android2spINS_16IMfllImageBufferEEENS1_9allocatorIS7_EEEESB_SB_SB_RNS2_IPNS_16MfllMotionVectorENS8_ISD_EEEERNS2_IiNS8_IiEEEE(void);

/* Symbol: _ZN4mfll15MfllImageBuffer14setImageBufferEPv */
/* Demangled: mfll::MfllImageBuffer::setImageBuffer(void*) */
int _ZN4mfll15MfllImageBuffer14setImageBufferEPv(void);

/* Symbol: _ZNSt3__120__shared_ptr_pointerIPN4mfll21IMfllImageBufferQueueENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_pointer<mfll::IMfllImageBufferQueue*, std::__1::default_delete<mfll::IMfllImageBufferQueue>, std::__1::allocator<mfll::IMfllImageBufferQueue> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_pointerIPN4mfll21IMfllImageBufferQueueENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN4mfll8MfllCore10do_CaptureEl */
/* Demangled: mfll::MfllCore::do_Capture(long) */
int _ZN4mfll8MfllCore10do_CaptureEl(void);

/* Symbol: _ZNSt3__14moveIN4mfll17MfllOperationSync3JOBEPS3_RS3_PS4_lLl1024ES3_S4_S5_S6_lLl1024EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS7_IT_T0_T1_T2_T3_XT4_EEESJ_SD_ */
/* Demangled: std::__1::__deque_iterator<mfll::MfllOperationSync::JOB, mfll::MfllOperationSync::JOB*, mfll::MfllOperationSync::JOB&, mfll::MfllOperationSync::JOB**, long, 1024l> std::__1::move<mfll::MfllOperationSync::JOB, mfll::MfllOperationSync::JOB*, mfll::MfllOperationSync::JOB&, mfll::MfllOperationSync::JOB**, long, 1024l, mfll::MfllOperationSync::JOB, mfll::MfllOperationSync::JOB*, mfll::MfllOperationSync::JOB&, mfll::MfllOperationSync::JOB**, long, 1024l>(std::__1::__deque_iterator<mfll::MfllOperationSync::JOB, mfll::MfllOperationSync::JOB*, mfll::MfllOperationSync::JOB&, mfll::MfllOperationSync::JOB**, long, 1024l>, std::__1::__deque_iterator<mfll::MfllOperationSync::JOB, mfll::MfllOperationSync::JOB*, mfll::MfllOperationSync::JOB&, mfll::MfllOperationSync::JOB**, long, 1024l>, std::__1::__deque_iterator<mfll::MfllOperationSync::JOB, mfll::MfllOperationSync::JOB*, mfll::MfllOperationSync::JOB&, mfll::MfllOperationSync::JOB**, long, 1024l>) */
int _ZNSt3__14moveIN4mfll17MfllOperationSync3JOBEPS3_RS3_PS4_lLl1024ES3_S4_S5_S6_lLl1024EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS7_IT_T0_T1_T2_T3_XT4_EEESJ_SD_(void);

/* Symbol: _ZN4mfll15MfllYuvCapturer8queueGmvERKNS_16MfllMotionVectorE */
/* Demangled: mfll::MfllYuvCapturer::queueGmv(mfll::MfllMotionVector const&) */
int _ZN4mfll15MfllYuvCapturer8queueGmvERKNS_16MfllMotionVectorE(void);

/* Symbol: _ZN4mfll15MfllImageBuffer15tranImageFormatERKj */
/* Demangled: mfll::MfllImageBuffer::tranImageFormat(unsigned int const&) */
int _ZN4mfll15MfllImageBuffer15tranImageFormatERKj(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN4mfll15MfllFeatureDump21getListenedEventTypesEv */
/* Demangled: mfll::MfllFeatureDump::getListenedEventTypes() */
int _ZN4mfll15MfllFeatureDump21getListenedEventTypesEv(void);

/* Symbol: _ZNSt3__113__assoc_stateIiE9set_valueIiEEvOT_ */
/* Demangled: void std::__1::__assoc_state<int>::set_value<int>(int&&) */
int _ZNSt3__113__assoc_stateIiE9set_valueIiEEvOT_(void);

/* Symbol: _ZTVN24MfllYuvCapturer_1_2_Impl15MyEventListenerE */
/* Demangled: vtable for MfllYuvCapturer_1_2_Impl::MyEventListener */
extern void* _ZTVN24MfllYuvCapturer_1_2_Impl15MyEventListenerE;

/* Symbol: _ZN4mfll9MfllNvramD0Ev */
/* Demangled: mfll::MfllNvram::~MfllNvram() */
int _ZN4mfll9MfllNvramD0Ev(void);

/* Symbol: _ZNSt3__114__split_bufferIPiNS_9allocatorIS1_EEE10push_frontEOS1_ */
/* Demangled: std::__1::__split_buffer<int*, std::__1::allocator<int*> >::push_front(int*&&) */
int _ZNSt3__114__split_bufferIPiNS_9allocatorIS1_EEE10push_frontEOS1_(void);

/* Symbol: _ZNSt3__16vectorIN7android2spIN4mfll16IMfllImageBufferEEENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<mfll::IMfllImageBuffer>, std::__1::allocator<android::sp<mfll::IMfllImageBuffer> > >::__push_back_slow_path<android::sp<mfll::IMfllImageBuffer> const&>(android::sp<mfll::IMfllImageBuffer> const&) */
int _ZNSt3__16vectorIN7android2spIN4mfll16IMfllImageBufferEEENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::imbue(std::__1::locale const&) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE(void);

/* Symbol: _ZNSt3__113shared_futureIiED2Ev */
/* Demangled: std::__1::shared_future<int>::~shared_future() */
int _ZNSt3__113shared_futureIiED2Ev(void);

/* Symbol: _ZN4mfll13IMfllExifInfo14createInstanceEv */
/* Demangled: mfll::IMfllExifInfo::createInstance() */
int _ZN4mfll13IMfllExifInfo14createInstanceEv(void);

/* Symbol: _ZN4mfll9MfllCore219do_AllocMemcWorkingEPv */
/* Demangled: mfll::MfllCore2::do_AllocMemcWorking(void*) */
int _ZN4mfll9MfllCore219do_AllocMemcWorkingEPv(void);

/* Symbol: _ZN4mfll11MfllCore2p59do_MixingEl */
/* Demangled: mfll::MfllCore2p5::do_Mixing(long) */
int _ZN4mfll11MfllCore2p59do_MixingEl(void);

/* Symbol: _ZN4mfll12MfllExifInfoC2Ev */
/* Demangled: mfll::MfllExifInfo::MfllExifInfo() */
int _ZN4mfll12MfllExifInfoC2Ev(void);

/* Symbol: _ZN4mfll7MfllMfb14encodeRawToYuvEPNS_16IMfllImageBufferES2_S2_S2_RKNS_8MfllRectES5_NS_8YuvStageE */
/* Demangled: mfll::MfllMfb::encodeRawToYuv(mfll::IMfllImageBuffer*, mfll::IMfllImageBuffer*, mfll::IMfllImageBuffer*, mfll::IMfllImageBuffer*, mfll::MfllRect const&, mfll::MfllRect const&, mfll::YuvStage) */
int _ZN4mfll7MfllMfb14encodeRawToYuvEPNS_16IMfllImageBufferES2_S2_S2_RKNS_8MfllRectES5_NS_8YuvStageE(void);

/* Symbol: _ZN4mfll8MfllCore17doAllocQyuvBufferEPv */
/* Demangled: mfll::MfllCore::doAllocQyuvBuffer(void*) */
int _ZN4mfll8MfllCore17doAllocQyuvBufferEPv(void);

/* Symbol: __multf3 */
/* Demangled: __multf3 */
int fn___multf3(void) __asm__("__multf3");

__END_DECLS

#endif /* BEGONIA_RE_LIBMFLLCORE_H */
