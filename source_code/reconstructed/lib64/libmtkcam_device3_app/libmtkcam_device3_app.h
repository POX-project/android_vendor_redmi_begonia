/*
 * Reverse-Engineered ABI Specification for: libmtkcam_device3_app.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libmtkcam_device3_app.so
 */

#ifndef BEGONIA_RE_LIBMTKCAM_DEVICE3_APP_H
#define BEGONIA_RE_LIBMTKCAM_DEVICE3_APP_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZNK5NSCam2v322Camera3ImageStreamInfo12getDataSpaceEv */
/* Demangled: NSCam::v3::Camera3ImageStreamInfo::getDataSpace() const */
int _ZNK5NSCam2v322Camera3ImageStreamInfo12getDataSpaceEv(void);

/* Symbol: _ZNK7android6VectorINS_7String8EE8do_splatEPvPKvm */
/* Demangled: android::Vector<android::String8>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_7String8EE8do_splatEPvPKvm(void);

/* Symbol: _ZNSt3__114__split_bufferIN7android8hardware6camera6device4V3_413CaptureResultERNS_9allocatorIS6_EEED2Ev */
/* Demangled: std::__1::__split_buffer<android::hardware::camera::device::V3_4::CaptureResult, std::__1::allocator<android::hardware::camera::device::V3_4::CaptureResult>&>::~__split_buffer() */
int _ZNSt3__114__split_bufferIN7android8hardware6camera6device4V3_413CaptureResultERNS_9allocatorIS6_EEED2Ev(void);

/* Symbol: _ZN5NSCam2v322Camera3ImageStreamInfo12setMaxBufNumEm */
/* Demangled: NSCam::v3::Camera3ImageStreamInfo::setMaxBufNum(unsigned long) */
int _ZN5NSCam2v322Camera3ImageStreamInfo12setMaxBufNumEm(void);

/* Symbol: _ZNK5NSCam2v322Camera3ImageStreamInfo12getMaxBufNumEv */
/* Demangled: NSCam::v3::Camera3ImageStreamInfo::getMaxBufNum() const */
int _ZNK5NSCam2v322Camera3ImageStreamInfo12getMaxBufNumEv(void);

/* Symbol: _ZThn8_N5NSCam2v320AppImageStreamBufferD1Ev */
/* Demangled: non-virtual thunk to NSCam::v3::AppImageStreamBuffer::~AppImageStreamBuffer() */
int _ZThn8_N5NSCam2v320AppImageStreamBufferD1Ev(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr12FrameHandlerC1ENSt3__110shared_ptrINS1_10CommonInfoEEEN7android2spINS1_12BatchHandlerEEE */
/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::FrameHandler(std::__1::shared_ptr<NSCam::v3::AppStreamMgr::CommonInfo>, android::sp<NSCam::v3::AppStreamMgr::BatchHandler>) */
int _ZN5NSCam2v312AppStreamMgr12FrameHandlerC1ENSt3__110shared_ptrINS1_10CommonInfoEEEN7android2spINS1_12BatchHandlerEEE(void);

/* Symbol: _ZN7android2spIN5NSCam2v312AppStreamMgrEED2Ev */
/* Demangled: android::sp<NSCam::v3::AppStreamMgr>::~sp() */
int _ZN7android2spIN5NSCam2v312AppStreamMgrEED2Ev(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN7android8hardware12MessageQueueIhLNS2_8MQFlavorE1EEENS_9allocatorIS5_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>, std::__1::allocator<android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1> > > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN7android8hardware12MessageQueueIhLNS2_8MQFlavorE1EEENS_9allocatorIS5_EEEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr13ResultHandler11dequeResultERN7android11KeyedVectorIjNS3_2spINS1_10ResultItemEEEEE */
/* Demangled: NSCam::v3::AppStreamMgr::ResultHandler::dequeResult(android::KeyedVector<unsigned int, android::sp<NSCam::v3::AppStreamMgr::ResultItem> >&) */
int _ZN5NSCam2v312AppStreamMgr13ResultHandler11dequeResultERN7android11KeyedVectorIjNS3_2spINS1_10ResultItemEEEEE(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr17BufferHandleCache11cacheBufferEmPK13native_handleNSt3__110shared_ptrINS0_20AppImageStreamBuffer21AppStreamBufferHandleEEE */
/* Demangled: NSCam::v3::AppStreamMgr::BufferHandleCache::cacheBuffer(unsigned long, native_handle const*, std::__1::shared_ptr<NSCam::v3::AppImageStreamBuffer::AppStreamBufferHandle>) */
int _ZN5NSCam2v312AppStreamMgr17BufferHandleCache11cacheBufferEmPK13native_handleNSt3__110shared_ptrINS0_20AppImageStreamBuffer21AppStreamBufferHandleEEE(void);

/* Symbol: _ZNK5NSCam2v322Camera3ImageStreamInfo11getStreamIdEv */
/* Demangled: NSCam::v3::Camera3ImageStreamInfo::getStreamId() const */
int _ZNK5NSCam2v322Camera3ImageStreamInfo11getStreamIdEv(void);

/* Symbol: _ZNK5NSCam2v322Camera3ImageStreamInfo16getLandscapeSizeEv */
/* Demangled: NSCam::v3::Camera3ImageStreamInfo::getLandscapeSize() const */
int _ZNK5NSCam2v322Camera3ImageStreamInfo16getLandscapeSizeEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler14MetaConfigItemEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::AppStreamMgr::FrameHandler::MetaConfigItem> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler14MetaConfigItemEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr15CallbackHandler10readyToRunEv */
/* Demangled: NSCam::v3::AppStreamMgr::CallbackHandler::readyToRun() */
int _ZN5NSCam2v312AppStreamMgr15CallbackHandler10readyToRunEv(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr15CallbackHandlerC2ENSt3__110shared_ptrINS1_10CommonInfoEEENS4_IN7android8hardware12MessageQueueIhLNS8_8MQFlavorE1EEEEE */
/* Demangled: NSCam::v3::AppStreamMgr::CallbackHandler::CallbackHandler(std::__1::shared_ptr<NSCam::v3::AppStreamMgr::CommonInfo>, std::__1::shared_ptr<android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1> >) */
int _ZN5NSCam2v312AppStreamMgr15CallbackHandlerC2ENSt3__110shared_ptrINS1_10CommonInfoEEENS4_IN7android8hardware12MessageQueueIhLNS8_8MQFlavorE1EEEEE(void);

/* Symbol: _ZNK5NSCam2v319AppMetaStreamBuffer11isRepeatingEv */
/* Demangled: NSCam::v3::AppMetaStreamBuffer::isRepeating() const */
int _ZNK5NSCam2v319AppMetaStreamBuffer11isRepeatingEv(void);

/* Symbol: _ZTCN5NSCam2v320AppImageStreamBufferE0_NS0_18IImageStreamBufferE */
/* Demangled: construction vtable for NSCam::v3::IImageStreamBuffer-in-NSCam::v3::AppImageStreamBuffer */
extern void* _ZTCN5NSCam2v320AppImageStreamBufferE0_NS0_18IImageStreamBufferE;

/* Symbol: _ZN5NSCam2v312AppStreamMgr12FrameHandler12updateResultERKN7android11KeyedVectorIjNS3_2spINS1_10ResultItemEEEEE */
/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::updateResult(android::KeyedVector<unsigned int, android::sp<NSCam::v3::AppStreamMgr::ResultItem> > const&) */
int _ZN5NSCam2v312AppStreamMgr12FrameHandler12updateResultERKN7android11KeyedVectorIjNS3_2spINS1_10ResultItemEEEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler14MetaConfigItemEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::AppStreamMgr::FrameHandler::MetaConfigItem> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler14MetaConfigItemEEEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr15CallbackHandler18convertErrorToHidlERKNS1_14CallbackParcelERNSt3__16vectorIN7android8hardware6camera6device4V3_29NotifyMsgENS6_9allocatorISD_EEEE */
/* Demangled: NSCam::v3::AppStreamMgr::CallbackHandler::convertErrorToHidl(NSCam::v3::AppStreamMgr::CallbackParcel const&, std::__1::vector<android::hardware::camera::device::V3_2::NotifyMsg, std::__1::allocator<android::hardware::camera::device::V3_2::NotifyMsg> >&) */
int _ZN5NSCam2v312AppStreamMgr15CallbackHandler18convertErrorToHidlERKNS1_14CallbackParcelERNSt3__16vectorIN7android8hardware6camera6device4V3_29NotifyMsgENS6_9allocatorISD_EEEE(void);

/* Symbol: _ZN5NSCam2v320AppImageStreamBufferD1Ev */
/* Demangled: NSCam::v3::AppImageStreamBuffer::~AppImageStreamBuffer() */
int _ZN5NSCam2v320AppImageStreamBufferD1Ev(void);

/* Symbol: _ZNK5NSCam2v320AppImageStreamBuffer18getImageBufferHeapEv */
/* Demangled: NSCam::v3::AppImageStreamBuffer::getImageBufferHeap() const */
int _ZNK5NSCam2v320AppImageStreamBuffer18getImageBufferHeapEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamBuffer> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamBuffer> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler9ImageItemEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::ImageItem> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler9ImageItemEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v312AppStreamMgr17BufferHandleCacheENS_9allocatorIS4_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::AppStreamMgr::BufferHandleCache, std::__1::allocator<NSCam::v3::AppStreamMgr::BufferHandleCache> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v312AppStreamMgr17BufferHandleCacheENS_9allocatorIS4_EEEE;

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v312AppStreamMgr13ConfigHandler19ParsedSMVRBatchInfoENS_9allocatorIS5_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::AppStreamMgr::ConfigHandler::ParsedSMVRBatchInfo, std::__1::allocator<NSCam::v3::AppStreamMgr::ConfigHandler::ParsedSMVRBatchInfo> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v312AppStreamMgr13ConfigHandler19ParsedSMVRBatchInfoENS_9allocatorIS5_EEEE;

/* Symbol: _ZTCN5NSCam2v320AppImageStreamBufferE8_NS0_5Utils15StreamBufferImpE */
/* Demangled: construction vtable for NSCam::v3::Utils::StreamBufferImp-in-NSCam::v3::AppImageStreamBuffer */
extern void* _ZTCN5NSCam2v320AppImageStreamBufferE8_NS0_5Utils15StreamBufferImpE;

/* Symbol: _ZNK5NSCam2v312AppStreamMgr12FrameHandler16isFrameRemovableERKN7android2spINS2_11FrameParcelEEE */
/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::isFrameRemovable(android::sp<NSCam::v3::AppStreamMgr::FrameHandler::FrameParcel> const&) const */
int _ZNK5NSCam2v312AppStreamMgr12FrameHandler16isFrameRemovableERKN7android2spINS2_11FrameParcelEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler15ImageConfigItemEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::AppStreamMgr::FrameHandler::ImageConfigItem> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler15ImageConfigItemEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZNSt3__112__hash_tableIlNS_4hashIlEENS_8equal_toIlEENS_9allocatorIlEEE6rehashEm */
/* Demangled: std::__1::__hash_table<long, std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<long> >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableIlNS_4hashIlEENS_8equal_toIlEENS_9allocatorIlEEE6rehashEm(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr12FrameHandler13updateItemSetERNS2_17PhysicMetaItemSetE */
/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::updateItemSet(NSCam::v3::AppStreamMgr::FrameHandler::PhysicMetaItemSet&) */
int _ZN5NSCam2v312AppStreamMgr12FrameHandler13updateItemSetERNS2_17PhysicMetaItemSetE(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr15CallbackHandler13endStatisticsEv */
/* Demangled: NSCam::v3::AppStreamMgr::CallbackHandler::endStatistics() */
int _ZN5NSCam2v312AppStreamMgr15CallbackHandler13endStatisticsEv(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr12BatchHandler9dumpStateERN7android7PrinterERKNSt3__16vectorINS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEENSB_ISD_EEEE */
/* Demangled: NSCam::v3::AppStreamMgr::BatchHandler::dumpState(android::Printer&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
int _ZN5NSCam2v312AppStreamMgr12BatchHandler9dumpStateERN7android7PrinterERKNSt3__16vectorINS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEENSB_ISD_EEEE(void);

/* Symbol: _ZTCN5NSCam2v319AppMetaStreamBufferE0_NS0_17IMetaStreamBufferE */
/* Demangled: construction vtable for NSCam::v3::IMetaStreamBuffer-in-NSCam::v3::AppMetaStreamBuffer */
extern void* _ZTCN5NSCam2v319AppMetaStreamBufferE0_NS0_17IMetaStreamBufferE;

/* Symbol: _ZTVN5NSCam2v325AppErrorImageStreamBufferE */
/* Demangled: vtable for NSCam::v3::AppErrorImageStreamBuffer */
extern void* _ZTVN5NSCam2v325AppErrorImageStreamBufferE;

/* Symbol: _ZN5NSCam2v312AppStreamMgr12FrameHandlerC2ENSt3__110shared_ptrINS1_10CommonInfoEEEN7android2spINS1_12BatchHandlerEEE */
/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::FrameHandler(std::__1::shared_ptr<NSCam::v3::AppStreamMgr::CommonInfo>, android::sp<NSCam::v3::AppStreamMgr::BatchHandler>) */
int _ZN5NSCam2v312AppStreamMgr12FrameHandlerC2ENSt3__110shared_ptrINS1_10CommonInfoEEEN7android2spINS1_12BatchHandlerEEE(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam2v312AppStreamMgr17BufferHandleCacheEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::v3::AppStreamMgr::BufferHandleCache>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam2v312AppStreamMgr17BufferHandleCacheEED2Ev(void);

/* Symbol: _ZNSt3__113__vector_baseINS_10shared_ptrIN5NSCam2v312AppStreamMgr12BatchHandler13InFlightBatchEEENS_9allocatorIS7_EEED2Ev */
/* Demangled: std::__1::__vector_base<std::__1::shared_ptr<NSCam::v3::AppStreamMgr::BatchHandler::InFlightBatch>, std::__1::allocator<std::__1::shared_ptr<NSCam::v3::AppStreamMgr::BatchHandler::InFlightBatch> > >::~__vector_base() */
int _ZNSt3__113__vector_baseINS_10shared_ptrIN5NSCam2v312AppStreamMgr12BatchHandler13InFlightBatchEEENS_9allocatorIS7_EEED2Ev(void);

/* Symbol: _ZN5NSCam2v320AppImageStreamBuffer21AppStreamBufferHandleD2Ev */
/* Demangled: NSCam::v3::AppImageStreamBuffer::AppStreamBufferHandle::~AppStreamBufferHandle() */
int _ZN5NSCam2v320AppImageStreamBuffer21AppStreamBufferHandleD2Ev(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v312AppStreamMgr10CommonInfoENS_9allocatorIS4_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::AppStreamMgr::CommonInfo, std::__1::allocator<NSCam::v3::AppStreamMgr::CommonInfo> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v312AppStreamMgr10CommonInfoENS_9allocatorIS4_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr12flushRequestERKN7android8hardware8hidl_vecINS3_6camera6device4V3_414CaptureRequestEEE */
/* Demangled: NSCam::v3::AppStreamMgr::flushRequest(android::hardware::hidl_vec<android::hardware::camera::device::V3_4::CaptureRequest> const&) */
int _ZN5NSCam2v312AppStreamMgr12flushRequestERKN7android8hardware8hidl_vecINS3_6camera6device4V3_414CaptureRequestEEE(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v320AppImageStreamBuffer21AppStreamBufferHandleENS_9allocatorIS4_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::AppImageStreamBuffer::AppStreamBufferHandle, std::__1::allocator<NSCam::v3::AppImageStreamBuffer::AppStreamBufferHandle> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v320AppImageStreamBuffer21AppStreamBufferHandleENS_9allocatorIS4_EEEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_214StreamRotationEmEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::hardware::camera::device::V3_2::StreamRotation, unsigned long> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_214StreamRotationEmEEE7do_copyEPvPKvm(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_ */
/* Demangled: _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_ */
int _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr15dumpStateLockedERN7android7PrinterERKNSt3__16vectorINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEENSA_ISC_EEEE */
/* Demangled: NSCam::v3::AppStreamMgr::dumpStateLocked(android::Printer&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
int _ZN5NSCam2v312AppStreamMgr15dumpStateLockedERN7android7PrinterERKNSt3__16vectorINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEENSA_ISC_EEEE(void);

/* Symbol: _ZN5NSCam2v317IAppStreamManager6createERKNS1_12CreationInfoE */
/* Demangled: NSCam::v3::IAppStreamManager::create(NSCam::v3::IAppStreamManager::CreationInfo const&) */
int _ZN5NSCam2v317IAppStreamManager6createERKNS1_12CreationInfoE(void);

/* Symbol: _ZN5NSCam2v325AppErrorImageStreamBufferC1EmN7android2spINS0_16IImageStreamInfoEEEi */
/* Demangled: NSCam::v3::AppErrorImageStreamBuffer::AppErrorImageStreamBuffer(unsigned long, android::sp<NSCam::v3::IImageStreamInfo>, int) */
int _ZN5NSCam2v325AppErrorImageStreamBufferC1EmN7android2spINS0_16IImageStreamInfoEEEi(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr12FrameHandler13registerFrameERKNS0_17IAppStreamManager7RequestE */
/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::registerFrame(NSCam::v3::IAppStreamManager::Request const&) */
int _ZN5NSCam2v312AppStreamMgr12FrameHandler13registerFrameERKNS0_17IAppStreamManager7RequestE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::GrallocStaticInfo::Plane>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE8do_splatEPvPKvm(void);

/* Symbol: _ZTISt12length_error */
/* Demangled: typeinfo for std::length_error */
extern void* _ZTISt12length_error;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v312AppStreamMgr10ResultItemEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::v3::AppStreamMgr::ResultItem> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v312AppStreamMgr10ResultItemEEEEEE12do_constructEPvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::GrallocStaticInfo::Plane>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE12do_constructEPvm(void);

/* Symbol: _ZNK5NSCam2v322Camera3ImageStreamInfo13getStreamNameEv */
/* Demangled: NSCam::v3::Camera3ImageStreamInfo::getStreamName() const */
int _ZNK5NSCam2v322Camera3ImageStreamInfo13getStreamNameEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeImN5NSCam2v312AppStreamMgr17BufferHandleCache12BufferHandleEEENS_22__unordered_map_hasherImS7_NS_4hashImEELb1EEENS_21__unordered_map_equalImS7_NS_8equal_toImEELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsImJRKNS_21piecewise_construct_tENS_5tupleIJRKmEEENSN_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS7_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, NSCam::v3::AppStreamMgr::BufferHandleCache::BufferHandle>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long, NSCam::v3::AppStreamMgr::BufferHandleCache::BufferHandle>, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, NSCam::v3::AppStreamMgr::BufferHandleCache::BufferHandle>, std::__1::hash<unsigned long>, true>, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, NSCam::v3::AppStreamMgr::BufferHandleCache::BufferHandle>, std::__1::equal_to<unsigned long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long, NSCam::v3::AppStreamMgr::BufferHandleCache::BufferHandle> > >::__emplace_unique_key_args<unsigned long, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long const&>, std::__1::tuple<> >(unsigned long const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeImN5NSCam2v312AppStreamMgr17BufferHandleCache12BufferHandleEEENS_22__unordered_map_hasherImS7_NS_4hashImEELb1EEENS_21__unordered_map_equalImS7_NS_8equal_toImEELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsImJRKNS_21piecewise_construct_tENS_5tupleIJRKmEEENSN_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS7_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr12FrameHandler24removeUnusedConfigStreamERKNSt3__113unordered_setIlNS3_4hashIlEENS3_8equal_toIlEENS3_9allocatorIlEEEE */
/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::removeUnusedConfigStream(std::__1::unordered_set<long, std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<long> > const&) */
int _ZN5NSCam2v312AppStreamMgr12FrameHandler24removeUnusedConfigStreamERKNSt3__113unordered_setIlNS3_4hashIlEENS3_8equal_toIlEENS3_9allocatorIlEEEE(void);

/* Symbol: _ZN7android2spIN5NSCam17IMetadataProviderEED2Ev */
/* Demangled: android::sp<NSCam::IMetadataProvider>::~sp() */
int _ZN7android2spIN5NSCam17IMetadataProviderEED2Ev(void);

/* Symbol: _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE17unmapGrantorDescrEPvj */
/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::unmapGrantorDescr(void*, unsigned int) */
int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE17unmapGrantorDescrEPvj(void);

/* Symbol: _ZN7android2spIN5NSCam2v312AppStreamMgr10ResultItemEED2Ev */
/* Demangled: android::sp<NSCam::v3::AppStreamMgr::ResultItem>::~sp() */
int _ZN7android2spIN5NSCam2v312AppStreamMgr10ResultItemEED2Ev(void);

/* Symbol: _ZNK5NSCam2v312AppStreamMgr13ConfigHandler12checkStreamsERKN7android8hardware8hidl_vecINS4_6camera6device4V3_46StreamEEE */
/* Demangled: NSCam::v3::AppStreamMgr::ConfigHandler::checkStreams(android::hardware::hidl_vec<android::hardware::camera::device::V3_4::Stream> const&) const */
int _ZNK5NSCam2v312AppStreamMgr13ConfigHandler12checkStreamsERKN7android8hardware8hidl_vecINS4_6camera6device4V3_46StreamEEE(void);

/* Symbol: _ZNK5NSCam2v312AppStreamMgr12BatchHandler15dumpStateLockedERN7android7PrinterE */
/* Demangled: NSCam::v3::AppStreamMgr::BatchHandler::dumpStateLocked(android::Printer&) const */
int _ZNK5NSCam2v312AppStreamMgr12BatchHandler15dumpStateLockedERN7android7PrinterE(void);

/* Symbol: _ZNK7android6VectorIiE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<int>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIiE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr10MyDebuggee5mNameE */
/* Demangled: NSCam::v3::AppStreamMgr::MyDebuggee::mName */
extern void* _ZN5NSCam2v312AppStreamMgr10MyDebuggee5mNameE;

/* Symbol: _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE15mapGrantorDescrEj */
/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::mapGrantorDescr(unsigned int) */
int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE15mapGrantorDescrEj(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel8MetaItemEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::AppStreamMgr::CallbackParcel::MetaItem>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel8MetaItemEE8do_splatEPvPKvm(void);

/* Symbol: _ZN7android2spIN5NSCam2v319AppMetaStreamBufferEED2Ev */
/* Demangled: android::sp<NSCam::v3::AppMetaStreamBuffer>::~sp() */
int _ZN7android2spIN5NSCam2v319AppMetaStreamBufferEED2Ev(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr17BufferHandleCache22markBufferFreeByOthersEm */
/* Demangled: NSCam::v3::AppStreamMgr::BufferHandleCache::markBufferFreeByOthers(unsigned long) */
int _ZN5NSCam2v312AppStreamMgr17BufferHandleCache22markBufferFreeByOthersEm(void);

/* Symbol: _ZNK5NSCam2v322Camera3ImageStreamInfo17getAllocImgFormatEv */
/* Demangled: NSCam::v3::Camera3ImageStreamInfo::getAllocImgFormat() const */
int _ZNK5NSCam2v322Camera3ImageStreamInfo17getAllocImgFormatEv(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr15CallbackHandler9dumpStateERN7android7PrinterERKNSt3__16vectorINS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEENSB_ISD_EEEE */
/* Demangled: NSCam::v3::AppStreamMgr::CallbackHandler::dumpState(android::Printer&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
int _ZN5NSCam2v312AppStreamMgr15CallbackHandler9dumpStateERN7android7PrinterERKNSt3__16vectorINS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEENSB_ISD_EEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_214StreamRotationEmEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::hardware::camera::device::V3_2::StreamRotation, unsigned long> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_214StreamRotationEmEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNSt3__16vectorImNS_9allocatorImEEE21__push_back_slow_pathImEEvOT_ */
/* Demangled: void std::__1::vector<unsigned long, std::__1::allocator<unsigned long> >::__push_back_slow_path<unsigned long>(unsigned long&&) */
int _ZNSt3__16vectorImNS_9allocatorImEEE21__push_back_slow_pathImEEvOT_(void);

/* Symbol: _ZNK5NSCam2v322Camera3ImageStreamInfo19getUsageForConsumerEv */
/* Demangled: NSCam::v3::Camera3ImageStreamInfo::getUsageForConsumer() const */
int _ZNK5NSCam2v322Camera3ImageStreamInfo19getUsageForConsumerEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel5ErrorEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::AppStreamMgr::CallbackParcel::Error>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel5ErrorEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZTCN5NSCam2v322Camera3ImageStreamInfoE0_NS0_16IImageStreamInfoE */
/* Demangled: construction vtable for NSCam::v3::IImageStreamInfo-in-NSCam::v3::Camera3ImageStreamInfo */
extern void* _ZTCN5NSCam2v322Camera3ImageStreamInfoE0_NS0_16IImageStreamInfoE;

/* Symbol: _ZN5NSCam2v312AppStreamMgr14RequestHandler7destroyEv */
/* Demangled: NSCam::v3::AppStreamMgr::RequestHandler::destroy() */
int _ZN5NSCam2v312AppStreamMgr14RequestHandler7destroyEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v312AppStreamMgr13ConfigHandler19ParsedSMVRBatchInfoENS_9allocatorIS5_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::AppStreamMgr::ConfigHandler::ParsedSMVRBatchInfo, std::__1::allocator<NSCam::v3::AppStreamMgr::ConfigHandler::ParsedSMVRBatchInfo> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v312AppStreamMgr13ConfigHandler19ParsedSMVRBatchInfoENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZTv0_n80_NK5NSCam2v322Camera3ImageStreamInfo8toStringEv */
/* Demangled: virtual thunk to NSCam::v3::Camera3ImageStreamInfo::toString() const */
int _ZTv0_n80_NK5NSCam2v322Camera3ImageStreamInfo8toStringEv(void);

/* Symbol: _ZN7android2spIN5NSCam18IMetadataConverterEEaSERKS3_ */
/* Demangled: android::sp<NSCam::IMetadataConverter>::operator=(android::sp<NSCam::IMetadataConverter> const&) */
int _ZN7android2spIN5NSCam18IMetadataConverterEEaSERKS3_(void);

/* Symbol: _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE10initMemoryEb */
/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::initMemory(bool) */
int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE10initMemoryEb(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr13ConfigHandlerC2ENSt3__110shared_ptrINS1_10CommonInfoEEEN7android2spINS1_12FrameHandlerEEENS8_INS1_12BatchHandlerEEE */
/* Demangled: NSCam::v3::AppStreamMgr::ConfigHandler::ConfigHandler(std::__1::shared_ptr<NSCam::v3::AppStreamMgr::CommonInfo>, android::sp<NSCam::v3::AppStreamMgr::FrameHandler>, android::sp<NSCam::v3::AppStreamMgr::BatchHandler>) */
int _ZN5NSCam2v312AppStreamMgr13ConfigHandlerC2ENSt3__110shared_ptrINS1_10CommonInfoEEEN7android2spINS1_12FrameHandlerEEENS8_INS1_12BatchHandlerEEE(void);

/* Symbol: _ZThn8_N5NSCam2v320AppImageStreamBuffer14enqueUserGraphEN7android2spINS0_13IUsersManager10IUserGraphEEE */
/* Demangled: non-virtual thunk to NSCam::v3::AppImageStreamBuffer::enqueUserGraph(android::sp<NSCam::v3::IUsersManager::IUserGraph>) */
int _ZThn8_N5NSCam2v320AppImageStreamBuffer14enqueUserGraphEN7android2spINS0_13IUsersManager10IUserGraphEEE(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE8do_splatEPvPKvm */
/* Demangled: android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2wpIN5NSCam2v312AppStreamMgr12FrameHandler11FrameParcelEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::wp<NSCam::v3::AppStreamMgr::FrameHandler::FrameParcel> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2wpIN5NSCam2v312AppStreamMgr12FrameHandler11FrameParcelEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN5NSCam2v325AppErrorImageStreamBuffer15setReleaseFenceEi */
/* Demangled: NSCam::v3::AppErrorImageStreamBuffer::setReleaseFence(int) */
int _ZN5NSCam2v325AppErrorImageStreamBuffer15setReleaseFenceEi(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr30getCaptureRequestMetadataQueueEv */
/* Demangled: NSCam::v3::AppStreamMgr::getCaptureRequestMetadataQueue() */
int _ZN5NSCam2v312AppStreamMgr30getCaptureRequestMetadataQueueEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel14PhysicMetaItemEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::AppStreamMgr::CallbackParcel::PhysicMetaItem>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel14PhysicMetaItemEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler8MetaItemEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::MetaItem> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler8MetaItemEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr12BatchHandlerC2ENSt3__110shared_ptrINS1_10CommonInfoEEEN7android2spINS1_15CallbackHandlerEEE */
/* Demangled: NSCam::v3::AppStreamMgr::BatchHandler::BatchHandler(std::__1::shared_ptr<NSCam::v3::AppStreamMgr::CommonInfo>, android::sp<NSCam::v3::AppStreamMgr::CallbackHandler>) */
int _ZN5NSCam2v312AppStreamMgr12BatchHandlerC2ENSt3__110shared_ptrINS1_10CommonInfoEEEN7android2spINS1_15CallbackHandlerEEE(void);

/* Symbol: _ZNSt3__16vectorINS_10shared_ptrIN5NSCam2v312AppStreamMgr12BatchHandler13InFlightBatchEEENS_9allocatorIS7_EEE21__push_back_slow_pathIRKS7_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::shared_ptr<NSCam::v3::AppStreamMgr::BatchHandler::InFlightBatch>, std::__1::allocator<std::__1::shared_ptr<NSCam::v3::AppStreamMgr::BatchHandler::InFlightBatch> > >::__push_back_slow_path<std::__1::shared_ptr<NSCam::v3::AppStreamMgr::BatchHandler::InFlightBatch> const&>(std::__1::shared_ptr<NSCam::v3::AppStreamMgr::BatchHandler::InFlightBatch> const&) */
int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam2v312AppStreamMgr12BatchHandler13InFlightBatchEEENS_9allocatorIS7_EEE21__push_back_slow_pathIRKS7_EEvOT_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v312AppStreamMgr10ResultItemEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::v3::AppStreamMgr::ResultItem> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v312AppStreamMgr10ResultItemEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK5NSCam2v312AppStreamMgr17BufferHandleCache12importBufferEmRPK13native_handleRNSt3__110shared_ptrINS0_20AppImageStreamBuffer21AppStreamBufferHandleEEE */
/* Demangled: NSCam::v3::AppStreamMgr::BufferHandleCache::importBuffer(unsigned long, native_handle const*&, std::__1::shared_ptr<NSCam::v3::AppImageStreamBuffer::AppStreamBufferHandle>&) const */
int _ZNK5NSCam2v312AppStreamMgr17BufferHandleCache12importBufferEmRPK13native_handleRNSt3__110shared_ptrINS0_20AppImageStreamBuffer21AppStreamBufferHandleEEE(void);

/* Symbol: _ZTTN5NSCam2v312AppStreamMgr15CallbackHandlerE */
/* Demangled: VTT for NSCam::v3::AppStreamMgr::CallbackHandler */
extern void* _ZTTN5NSCam2v312AppStreamMgr15CallbackHandlerE;

/* Symbol: _ZN5NSCam2v320AppImageStreamBuffer21AppStreamBufferHandleC2EPK13native_handle */
/* Demangled: NSCam::v3::AppImageStreamBuffer::AppStreamBufferHandle::AppStreamBufferHandle(native_handle const*) */
int _ZN5NSCam2v320AppImageStreamBuffer21AppStreamBufferHandleC2EPK13native_handle(void);

/* Symbol: _ZN5NSCam2v320AppImageStreamBuffer9AllocatorclEmPNS_23IGraphicImageBufferHeapEPK13native_handleNSt3__110shared_ptrINS1_21AppStreamBufferHandleEEEPNS0_16IImageStreamInfoE */
/* Demangled: NSCam::v3::AppImageStreamBuffer::Allocator::operator()(unsigned long, NSCam::IGraphicImageBufferHeap*, native_handle const*, std::__1::shared_ptr<NSCam::v3::AppImageStreamBuffer::AppStreamBufferHandle>, NSCam::v3::IImageStreamInfo*) */
int _ZN5NSCam2v320AppImageStreamBuffer9AllocatorclEmPNS_23IGraphicImageBufferHeapEPK13native_handleNSt3__110shared_ptrINS1_21AppStreamBufferHandleEEEPNS0_16IImageStreamInfoE(void);

/* Symbol: _ZTTN5NSCam2v320AppImageStreamBufferE */
/* Demangled: VTT for NSCam::v3::AppImageStreamBuffer */
extern void* _ZTTN5NSCam2v320AppImageStreamBufferE;

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v312AppStreamMgr13ConfigHandler19ParsedSMVRBatchInfoENS_9allocatorIS5_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::AppStreamMgr::ConfigHandler::ParsedSMVRBatchInfo, std::__1::allocator<NSCam::v3::AppStreamMgr::ConfigHandler::ParsedSMVRBatchInfo> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v312AppStreamMgr13ConfigHandler19ParsedSMVRBatchInfoENS_9allocatorIS5_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr12BatchHandlerC1ENSt3__110shared_ptrINS1_10CommonInfoEEEN7android2spINS1_15CallbackHandlerEEE */
/* Demangled: NSCam::v3::AppStreamMgr::BatchHandler::BatchHandler(std::__1::shared_ptr<NSCam::v3::AppStreamMgr::CommonInfo>, android::sp<NSCam::v3::AppStreamMgr::CallbackHandler>) */
int _ZN5NSCam2v312AppStreamMgr12BatchHandlerC1ENSt3__110shared_ptrINS1_10CommonInfoEEEN7android2spINS1_15CallbackHandlerEEE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel8MetaItemEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::AppStreamMgr::CallbackParcel::MetaItem>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel8MetaItemEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE;

/* Symbol: __atomic_load_1 */
/* Demangled: __atomic_load_1 */
int fn___atomic_load_1(void) __asm__("__atomic_load_1");

/* Symbol: _ZN5NSCam2v322Camera3ImageStreamInfoC2ERKNS1_12CreationInfoE */
/* Demangled: NSCam::v3::Camera3ImageStreamInfo::Camera3ImageStreamInfo(NSCam::v3::Camera3ImageStreamInfo::CreationInfo const&) */
int _ZN5NSCam2v322Camera3ImageStreamInfoC2ERKNS1_12CreationInfoE(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr10MyDebuggee5debugERN7android7PrinterERKNSt3__16vectorINS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEENSB_ISD_EEEE */
/* Demangled: NSCam::v3::AppStreamMgr::MyDebuggee::debug(android::Printer&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
int _ZN5NSCam2v312AppStreamMgr10MyDebuggee5debugERN7android7PrinterERKNSt3__16vectorINS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEENSB_ISD_EEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> > > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEEEEEE12do_constructEPvm(void);

/* Symbol: __atomic_load_2 */
/* Demangled: __atomic_load_2 */
int fn___atomic_load_2(void) __asm__("__atomic_load_2");

/* Symbol: _ZTVN5NSCam2v319AppMetaStreamBuffer9AllocatorE */
/* Demangled: vtable for NSCam::v3::AppMetaStreamBuffer::Allocator */
extern void* _ZTVN5NSCam2v319AppMetaStreamBuffer9AllocatorE;

/* Symbol: _ZN5NSCam2v319AppMetaStreamBuffer9AllocatorclEv */
/* Demangled: NSCam::v3::AppMetaStreamBuffer::Allocator::operator()() */
int _ZN5NSCam2v319AppMetaStreamBuffer9AllocatorclEv(void);

/* Symbol: _ZTv0_n256_N5NSCam2v320AppImageStreamBufferD0Ev */
/* Demangled: virtual thunk to NSCam::v3::AppImageStreamBuffer::~AppImageStreamBuffer() */
int _ZTv0_n256_N5NSCam2v320AppImageStreamBufferD0Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel5ErrorEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::AppStreamMgr::CallbackParcel::Error>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel5ErrorEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr12FrameHandler18prepareReturnImageERNS1_14CallbackParcelERKN7android2spINS2_9ImageItemEEE */
/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::prepareReturnImage(NSCam::v3::AppStreamMgr::CallbackParcel&, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::ImageItem> const&) */
int _ZN5NSCam2v312AppStreamMgr12FrameHandler18prepareReturnImageERNS1_14CallbackParcelERKN7android2spINS2_9ImageItemEEE(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr12FrameHandler36prepareShutterNotificationIfPossibleERNS1_14CallbackParcelERKN7android2spINS2_8MetaItemEEE */
/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::prepareShutterNotificationIfPossible(NSCam::v3::AppStreamMgr::CallbackParcel&, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::MetaItem> const&) */
int _ZN5NSCam2v312AppStreamMgr12FrameHandler36prepareShutterNotificationIfPossibleERNS1_14CallbackParcelERKN7android2spINS2_8MetaItemEEE(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr15CallbackHandler17convertMetaToHidlERKNS1_14CallbackParcelERNSt3__16vectorIN7android8hardware6camera6device4V3_413CaptureResultENS6_9allocatorISD_EEEERNS7_IP15camera_metadataNSE_ISJ_EEEE */
/* Demangled: NSCam::v3::AppStreamMgr::CallbackHandler::convertMetaToHidl(NSCam::v3::AppStreamMgr::CallbackParcel const&, std::__1::vector<android::hardware::camera::device::V3_4::CaptureResult, std::__1::allocator<android::hardware::camera::device::V3_4::CaptureResult> >&, std::__1::vector<camera_metadata*, std::__1::allocator<camera_metadata*> >&) */
int _ZN5NSCam2v312AppStreamMgr15CallbackHandler17convertMetaToHidlERKNS1_14CallbackParcelERNSt3__16vectorIN7android8hardware6camera6device4V3_413CaptureResultENS6_9allocatorISD_EEEERNS7_IP15camera_metadataNSE_ISJ_EEEE(void);

/* Symbol: __atomic_load_4 */
/* Demangled: __atomic_load_4 */
int fn___atomic_load_4(void) __asm__("__atomic_load_4");

/* Symbol: _ZN5NSCam2v322Camera3ImageStreamInfo12setTransformEj */
/* Demangled: NSCam::v3::Camera3ImageStreamInfo::setTransform(unsigned int) */
int _ZN5NSCam2v322Camera3ImageStreamInfo12setTransformEj(void);

/* Symbol: _ZNK5NSCam2v322Camera3ImageStreamInfo16getMinInitBufNumEv */
/* Demangled: NSCam::v3::Camera3ImageStreamInfo::getMinInitBufNum() const */
int _ZNK5NSCam2v322Camera3ImageStreamInfo16getMinInitBufNumEv(void);

/* Symbol: _ZN7android2spIN5NSCam2v312AppStreamMgr12FrameHandlerEEaSEPS4_ */
/* Demangled: android::sp<NSCam::v3::AppStreamMgr::FrameHandler>::operator=(NSCam::v3::AppStreamMgr::FrameHandler*) */
int _ZN7android2spIN5NSCam2v312AppStreamMgr12FrameHandlerEEaSEPS4_(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel5ErrorEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::v3::AppStreamMgr::CallbackParcel::Error>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel5ErrorEE12do_constructEPvm(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v312AppStreamMgr12BatchHandler13InFlightBatchENS_9allocatorIS5_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::AppStreamMgr::BatchHandler::InFlightBatch, std::__1::allocator<NSCam::v3::AppStreamMgr::BatchHandler::InFlightBatch> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v312AppStreamMgr12BatchHandler13InFlightBatchENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler14MetaConfigItemEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::AppStreamMgr::FrameHandler::MetaConfigItem> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler14MetaConfigItemEEEE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam2v320AppImageStreamBuffer14enqueUserGraphEN7android2spINS0_13IUsersManager10IUserGraphEEE */
/* Demangled: NSCam::v3::AppImageStreamBuffer::enqueUserGraph(android::sp<NSCam::v3::IUsersManager::IUserGraph>) */
int _ZN5NSCam2v320AppImageStreamBuffer14enqueUserGraphEN7android2spINS0_13IUsersManager10IUserGraphEEE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v320AppImageStreamBuffer21AppStreamBufferHandleENS_9allocatorIS4_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::AppImageStreamBuffer::AppStreamBufferHandle, std::__1::allocator<NSCam::v3::AppImageStreamBuffer::AppStreamBufferHandle> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v320AppImageStreamBuffer21AppStreamBufferHandleENS_9allocatorIS4_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr13ResultHandler10threadLoopEv */
/* Demangled: NSCam::v3::AppStreamMgr::ResultHandler::threadLoop() */
int _ZN5NSCam2v312AppStreamMgr13ResultHandler10threadLoopEv(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr12BatchHandler14getBatchLockedEj */
/* Demangled: NSCam::v3::AppStreamMgr::BatchHandler::getBatchLocked(unsigned int) */
int _ZN5NSCam2v312AppStreamMgr12BatchHandler14getBatchLockedEj(void);

/* Symbol: libat_unlock_n */
/* Demangled: libat_unlock_n */
int libat_unlock_n(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _ZNSt3__110shared_ptrIN7android8hardware12MessageQueueIhLNS2_8MQFlavorE1EEEED2Ev */
/* Demangled: std::__1::shared_ptr<android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1> >::~shared_ptr() */
int _ZNSt3__110shared_ptrIN7android8hardware12MessageQueueIhLNS2_8MQFlavorE1EEEED2Ev(void);

/* Symbol: __atomic_load_8 */
/* Demangled: __atomic_load_8 */
int fn___atomic_load_8(void) __asm__("__atomic_load_8");

/* Symbol: _ZN5NSCam2v322Camera3ImageStreamInfoC1ERKNS1_12CreationInfoE */
/* Demangled: NSCam::v3::Camera3ImageStreamInfo::Camera3ImageStreamInfo(NSCam::v3::Camera3ImageStreamInfo::CreationInfo const&) */
int _ZN5NSCam2v322Camera3ImageStreamInfoC1ERKNS1_12CreationInfoE(void);

/* Symbol: _ZN5NSCam2v325AppErrorImageStreamBuffer9AllocatorclEmPNS0_16IImageStreamInfoEi */
/* Demangled: NSCam::v3::AppErrorImageStreamBuffer::Allocator::operator()(unsigned long, NSCam::v3::IImageStreamInfo*, int) */
int _ZN5NSCam2v325AppErrorImageStreamBuffer9AllocatorclEmPNS0_16IImageStreamInfoEi(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr13submitRequestERKN7android8hardware8hidl_vecINS3_6camera6device4V3_414CaptureRequestEEERNS2_6VectorINS0_17IAppStreamManager7RequestEEE */
/* Demangled: NSCam::v3::AppStreamMgr::submitRequest(android::hardware::hidl_vec<android::hardware::camera::device::V3_4::CaptureRequest> const&, android::Vector<NSCam::v3::IAppStreamManager::Request>&) */
int _ZN5NSCam2v312AppStreamMgr13submitRequestERKN7android8hardware8hidl_vecINS3_6camera6device4V3_414CaptureRequestEEERNS2_6VectorINS0_17IAppStreamManager7RequestEEE(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr12FrameHandler25prepareCallbackIfPossibleERNS1_14CallbackParcelERNS2_12ImageItemSetE */
/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::prepareCallbackIfPossible(NSCam::v3::AppStreamMgr::CallbackParcel&, NSCam::v3::AppStreamMgr::FrameHandler::ImageItemSet&) */
int _ZN5NSCam2v312AppStreamMgr12FrameHandler25prepareCallbackIfPossibleERNS1_14CallbackParcelERNS2_12ImageItemSetE(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr15CallbackHandler16waitUntilDrainedEl */
/* Demangled: NSCam::v3::AppStreamMgr::CallbackHandler::waitUntilDrained(long) */
int _ZN5NSCam2v312AppStreamMgr15CallbackHandler16waitUntilDrainedEl(void);

/* Symbol: _ZTVN5NSCam2v325AppErrorImageStreamBuffer9AllocatorE */
/* Demangled: vtable for NSCam::v3::AppErrorImageStreamBuffer::Allocator */
extern void* _ZTVN5NSCam2v325AppErrorImageStreamBuffer9AllocatorE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE10do_compareEPKvSA_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamBuffer> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE10do_compareEPKvSA_(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr15CallbackHandler4pushERNSt3__14listINS1_14CallbackParcelENS3_9allocatorIS5_EEEE */
/* Demangled: NSCam::v3::AppStreamMgr::CallbackHandler::push(std::__1::list<NSCam::v3::AppStreamMgr::CallbackParcel, std::__1::allocator<NSCam::v3::AppStreamMgr::CallbackParcel> >&) */
int _ZN5NSCam2v312AppStreamMgr15CallbackHandler4pushERNSt3__14listINS1_14CallbackParcelENS3_9allocatorIS5_EEEE(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr14RequestHandler5resetEv */
/* Demangled: NSCam::v3::AppStreamMgr::RequestHandler::reset() */
int _ZN5NSCam2v312AppStreamMgr14RequestHandler5resetEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v317IAppStreamManager7RequestEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::v3::IAppStreamManager::Request>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317IAppStreamManager7RequestEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> > > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr17BufferHandleCache13uncacheBufferEm */
/* Demangled: NSCam::v3::AppStreamMgr::BufferHandleCache::uncacheBuffer(unsigned long) */
int _ZN5NSCam2v312AppStreamMgr17BufferHandleCache13uncacheBufferEm(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v312AppStreamMgr10MyDebuggeeENS_9allocatorIS4_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::AppStreamMgr::MyDebuggee, std::__1::allocator<NSCam::v3::AppStreamMgr::MyDebuggee> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v312AppStreamMgr10MyDebuggeeENS_9allocatorIS4_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEC2EmP13native_handlemb */
/* Demangled: android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1>::MQDescriptor(unsigned long, native_handle*, unsigned long, bool) */
int _ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEC2EmP13native_handlemb(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v317IAppStreamManager7RequestEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::IAppStreamManager::Request>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317IAppStreamManager7RequestEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZTVN5NSCam2v312AppStreamMgr12FrameHandler8MetaItemE */
/* Demangled: vtable for NSCam::v3::AppStreamMgr::FrameHandler::MetaItem */
extern void* _ZTVN5NSCam2v312AppStreamMgr12FrameHandler8MetaItemE;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeImN5NSCam2v312AppStreamMgr17BufferHandleCache12BufferHandleEEENS_22__unordered_map_hasherImS7_NS_4hashImEELb1EEENS_21__unordered_map_equalImS7_NS_8equal_toImEELb1EEENS_9allocatorIS7_EEED2Ev */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long, NSCam::v3::AppStreamMgr::BufferHandleCache::BufferHandle>, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, NSCam::v3::AppStreamMgr::BufferHandleCache::BufferHandle>, std::__1::hash<unsigned long>, true>, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, NSCam::v3::AppStreamMgr::BufferHandleCache::BufferHandle>, std::__1::equal_to<unsigned long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long, NSCam::v3::AppStreamMgr::BufferHandleCache::BufferHandle> > >::~__hash_table() */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeImN5NSCam2v312AppStreamMgr17BufferHandleCache12BufferHandleEEENS_22__unordered_map_hasherImS7_NS_4hashImEELb1EEENS_21__unordered_map_equalImS7_NS_8equal_toImEELb1EEENS_9allocatorIS7_EEED2Ev(void);

/* Symbol: _ZNK5NSCam2v312AppStreamMgr14RequestHandler18importStreamBufferERKN7android8hardware6camera6device4V3_212StreamBufferERPK13native_handleRNSt3__110shared_ptrINS0_20AppImageStreamBuffer21AppStreamBufferHandleEEERi */
/* Demangled: NSCam::v3::AppStreamMgr::RequestHandler::importStreamBuffer(android::hardware::camera::device::V3_2::StreamBuffer const&, native_handle const*&, std::__1::shared_ptr<NSCam::v3::AppImageStreamBuffer::AppStreamBufferHandle>&, int&) const */
int _ZNK5NSCam2v312AppStreamMgr14RequestHandler18importStreamBufferERKN7android8hardware6camera6device4V3_212StreamBufferERPK13native_handleRNSt3__110shared_ptrINS0_20AppImageStreamBuffer21AppStreamBufferHandleEEERi(void);

/* Symbol: _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEEEEEE10do_compareEPKvSJ_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> > > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEEEEEE10do_compareEPKvSJ_(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr12FrameHandler27updateShutterTimeIfPossibleERN7android2spINS2_8MetaItemEEE */
/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::updateShutterTimeIfPossible(android::sp<NSCam::v3::AppStreamMgr::FrameHandler::MetaItem>&) */
int _ZN5NSCam2v312AppStreamMgr12FrameHandler27updateShutterTimeIfPossibleERN7android2spINS2_8MetaItemEEE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel9ImageItemEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::v3::AppStreamMgr::CallbackParcel::ImageItem>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel9ImageItemEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr14RequestHandler13submitRequestERKN7android8hardware8hidl_vecINS4_6camera6device4V3_414CaptureRequestEEERNS3_6VectorINS0_17IAppStreamManager7RequestEEE */
/* Demangled: NSCam::v3::AppStreamMgr::RequestHandler::submitRequest(android::hardware::hidl_vec<android::hardware::camera::device::V3_4::CaptureRequest> const&, android::Vector<NSCam::v3::IAppStreamManager::Request>&) */
int _ZN5NSCam2v312AppStreamMgr14RequestHandler13submitRequestERKN7android8hardware8hidl_vecINS4_6camera6device4V3_414CaptureRequestEEERNS3_6VectorINS0_17IAppStreamManager7RequestEEE(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr12FrameHandler21registerStreamBuffersERKN7android11KeyedVectorIlNS3_2spINS0_17IMetaStreamBufferEEEEENS5_INS2_11FrameParcelEEEPNS2_11MetaItemSetE */
/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::registerStreamBuffers(android::KeyedVector<long, android::sp<NSCam::v3::IMetaStreamBuffer> > const&, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::FrameParcel>, NSCam::v3::AppStreamMgr::FrameHandler::MetaItemSet*) */
int _ZN5NSCam2v312AppStreamMgr12FrameHandler21registerStreamBuffersERKN7android11KeyedVectorIlNS3_2spINS0_17IMetaStreamBufferEEEEENS5_INS2_11FrameParcelEEEPNS2_11MetaItemSetE(void);

/* Symbol: _ZNK5NSCam2v312AppStreamMgr12FrameHandler19isShutterReturnableERKN7android2spINS2_8MetaItemEEE */
/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::isShutterReturnable(android::sp<NSCam::v3::AppStreamMgr::FrameHandler::MetaItem> const&) const */
int _ZNK5NSCam2v312AppStreamMgr12FrameHandler19isShutterReturnableERKN7android2spINS2_8MetaItemEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2wpIN5NSCam2v312AppStreamMgr12FrameHandler11FrameParcelEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::wp<NSCam::v3::AppStreamMgr::FrameHandler::FrameParcel> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2wpIN5NSCam2v312AppStreamMgr12FrameHandler11FrameParcelEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr15CallbackHandler20convertShutterToHidlERKNS1_14CallbackParcelERNSt3__16vectorIN7android8hardware6camera6device4V3_29NotifyMsgENS6_9allocatorISD_EEEE */
/* Demangled: NSCam::v3::AppStreamMgr::CallbackHandler::convertShutterToHidl(NSCam::v3::AppStreamMgr::CallbackParcel const&, std::__1::vector<android::hardware::camera::device::V3_2::NotifyMsg, std::__1::allocator<android::hardware::camera::device::V3_2::NotifyMsg> >&) */
int _ZN5NSCam2v312AppStreamMgr15CallbackHandler20convertShutterToHidlERKNS1_14CallbackParcelERNSt3__16vectorIN7android8hardware6camera6device4V3_29NotifyMsgENS6_9allocatorISD_EEEE(void);

/* Symbol: _ZN7android2spIN5NSCam2v312AppStreamMgr13ResultHandlerEEaSEPS4_ */
/* Demangled: android::sp<NSCam::v3::AppStreamMgr::ResultHandler>::operator=(NSCam::v3::AppStreamMgr::ResultHandler*) */
int _ZN7android2spIN5NSCam2v312AppStreamMgr13ResultHandlerEEaSEPS4_(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr13ResultHandlerC1ENSt3__110shared_ptrINS1_10CommonInfoEEEN7android2spINS1_12FrameHandlerEEE */
/* Demangled: NSCam::v3::AppStreamMgr::ResultHandler::ResultHandler(std::__1::shared_ptr<NSCam::v3::AppStreamMgr::CommonInfo>, android::sp<NSCam::v3::AppStreamMgr::FrameHandler>) */
int _ZN5NSCam2v312AppStreamMgr13ResultHandlerC1ENSt3__110shared_ptrINS1_10CommonInfoEEEN7android2spINS1_12FrameHandlerEEE(void);

/* Symbol: _ZNSt3__110__list_impIN5NSCam2v312AppStreamMgr14CallbackParcelENS_9allocatorIS4_EEE5clearEv */
/* Demangled: std::__1::__list_imp<NSCam::v3::AppStreamMgr::CallbackParcel, std::__1::allocator<NSCam::v3::AppStreamMgr::CallbackParcel> >::clear() */
int _ZNSt3__110__list_impIN5NSCam2v312AppStreamMgr14CallbackParcelENS_9allocatorIS4_EEE5clearEv(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler14MetaConfigItemEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<long, NSCam::v3::AppStreamMgr::FrameHandler::MetaConfigItem> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler14MetaConfigItemEEEEE;

/* Symbol: _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE5writeEPKhm */
/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::write(unsigned char const*, unsigned long) */
int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE5writeEPKhm(void);

/* Symbol: _ZNK5NSCam2v322Camera3ImageStreamInfo12getBufPlanesEv */
/* Demangled: NSCam::v3::Camera3ImageStreamInfo::getBufPlanes() const */
int _ZNK5NSCam2v322Camera3ImageStreamInfo12getBufPlanesEv(void);

/* Symbol: _ZThn8_N5NSCam2v320AppImageStreamBufferD0Ev */
/* Demangled: non-virtual thunk to NSCam::v3::AppImageStreamBuffer::~AppImageStreamBuffer() */
int _ZThn8_N5NSCam2v320AppImageStreamBufferD0Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel9ImageItemEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::AppStreamMgr::CallbackParcel::ImageItem>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel9ImageItemEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamBuffer> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler8MetaItemEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::MetaItem> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler8MetaItemEEEEEE12do_constructEPvm(void);

/* Symbol: _ZTVN5NSCam2v312AppStreamMgr12FrameHandler9ImageItemE */
/* Demangled: vtable for NSCam::v3::AppStreamMgr::FrameHandler::ImageItem */
extern void* _ZTVN5NSCam2v312AppStreamMgr12FrameHandler9ImageItemE;

/* Symbol: _ZNSt3__16vectorIN7android8hardware6camera6device4V3_413CaptureResultENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_ */
/* Demangled: void std::__1::vector<android::hardware::camera::device::V3_4::CaptureResult, std::__1::allocator<android::hardware::camera::device::V3_4::CaptureResult> >::__push_back_slow_path<android::hardware::camera::device::V3_4::CaptureResult>(android::hardware::camera::device::V3_4::CaptureResult&&) */
int _ZNSt3__16vectorIN7android8hardware6camera6device4V3_413CaptureResultENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_(void);

/* Symbol: _ZN5NSCam2v319AppMetaStreamBufferC1EN7android2spINS0_15IMetaStreamInfoEEEPNS0_13IUsersManagerE */
/* Demangled: NSCam::v3::AppMetaStreamBuffer::AppMetaStreamBuffer(android::sp<NSCam::v3::IMetaStreamInfo>, NSCam::v3::IUsersManager*) */
int _ZN5NSCam2v319AppMetaStreamBufferC1EN7android2spINS0_15IMetaStreamInfoEEEPNS0_13IUsersManagerE(void);

/* Symbol: _ZTSSt11logic_error */
/* Demangled: typeinfo name for std::logic_error */
extern void* _ZTSSt11logic_error;

/* Symbol: _ZNK5NSCam2v312AppStreamMgr13ConfigHandler21createImageStreamInfoERKN7android8hardware6camera6device4V3_46StreamERNS7_9HalStreamE */
/* Demangled: NSCam::v3::AppStreamMgr::ConfigHandler::createImageStreamInfo(android::hardware::camera::device::V3_4::Stream const&, android::hardware::camera::device::V3_4::HalStream&) const */
int _ZNK5NSCam2v312AppStreamMgr13ConfigHandler21createImageStreamInfoERKN7android8hardware6camera6device4V3_46StreamERNS7_9HalStreamE(void);

/* Symbol: _ZNK7android6VectorIiE12do_constructEPvm */
/* Demangled: android::Vector<int>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIiE12do_constructEPvm(void);

/* Symbol: _ZNK7android6VectorIiE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<int>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIiE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZTCN5NSCam2v319AppMetaStreamBufferE0_NS0_5Utils13TStreamBufferINS0_19AppMetaStreamBufferENS0_17IMetaStreamBufferEEE */
/* Demangled: construction vtable for NSCam::v3::Utils::TStreamBuffer<NSCam::v3::AppMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer>-in-NSCam::v3::AppMetaStreamBuffer */
extern void* _ZTCN5NSCam2v319AppMetaStreamBufferE0_NS0_5Utils13TStreamBufferINS0_19AppMetaStreamBufferENS0_17IMetaStreamBufferEEE;

/* Symbol: _ZN5NSCam2v312AppStreamMgr7destroyEv */
/* Demangled: NSCam::v3::AppStreamMgr::destroy() */
int _ZN5NSCam2v312AppStreamMgr7destroyEv(void);

/* Symbol: _ZN7android2spIN5NSCam2v312AppStreamMgr15CallbackHandlerEED2Ev */
/* Demangled: android::sp<NSCam::v3::AppStreamMgr::CallbackHandler>::~sp() */
int _ZN7android2spIN5NSCam2v312AppStreamMgr15CallbackHandlerEED2Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel14PhysicMetaItemEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::AppStreamMgr::CallbackParcel::PhysicMetaItem>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel14PhysicMetaItemEE7do_copyEPvPKvm(void);

/* Symbol: _ZTSSt12length_error */
/* Demangled: typeinfo name for std::length_error */
extern void* _ZTSSt12length_error;

/* Symbol: _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE8__appendEm */
/* Demangled: std::__1::vector<NSCam::BufPlane, std::__1::allocator<NSCam::BufPlane> >::__append(unsigned long) */
int _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE8__appendEm(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE12do_constructEPvm */
/* Demangled: android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr17BufferHandleCacheD2Ev */
/* Demangled: NSCam::v3::AppStreamMgr::BufferHandleCache::~BufferHandleCache() */
int _ZN5NSCam2v312AppStreamMgr17BufferHandleCacheD2Ev(void);

/* Symbol: _ZN5NSCam2v320AppImageStreamBuffer21AppStreamBufferHandleC1EPK13native_handle */
/* Demangled: NSCam::v3::AppImageStreamBuffer::AppStreamBufferHandle::AppStreamBufferHandle(native_handle const*) */
int _ZN5NSCam2v320AppImageStreamBuffer21AppStreamBufferHandleC1EPK13native_handle(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel8MetaItemEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::v3::AppStreamMgr::CallbackParcel::MetaItem>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel8MetaItemEE12do_constructEPvm(void);

/* Symbol: _ZNK5NSCam2v312AppStreamMgr14RequestHandler15checkOneRequestERKN7android8hardware6camera6device4V3_414CaptureRequestE */
/* Demangled: NSCam::v3::AppStreamMgr::RequestHandler::checkOneRequest(android::hardware::camera::device::V3_4::CaptureRequest const&) const */
int _ZNK5NSCam2v312AppStreamMgr14RequestHandler15checkOneRequestERKN7android8hardware6camera6device4V3_414CaptureRequestE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler14MetaConfigItemEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::AppStreamMgr::FrameHandler::MetaConfigItem> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler14MetaConfigItemEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZTVN5NSCam2v312AppStreamMgr15CallbackHandlerE */
/* Demangled: vtable for NSCam::v3::AppStreamMgr::CallbackHandler */
extern void* _ZTVN5NSCam2v312AppStreamMgr15CallbackHandlerE;

/* Symbol: _ZN5NSCam2v320AppImageStreamBufferD0Ev */
/* Demangled: NSCam::v3::AppImageStreamBuffer::~AppImageStreamBuffer() */
int _ZN5NSCam2v320AppImageStreamBufferD0Ev(void);

/* Symbol: _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler15ImageConfigItemEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::AppStreamMgr::FrameHandler::ImageConfigItem> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler15ImageConfigItemEEEE10do_destroyEPvm(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_ */
/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__push_back_slow_path<int const&>(int const&) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_(void);

/* Symbol: _ZNK5NSCam2v322Camera3ImageStreamInfo20getUsageForAllocatorEv */
/* Demangled: NSCam::v3::Camera3ImageStreamInfo::getUsageForAllocator() const */
int _ZNK5NSCam2v322Camera3ImageStreamInfo20getUsageForAllocatorEv(void);

/* Symbol: _ZTVN7android4ListIN5NSCam2v35Utils15StreamBufferImp6RWUserEEE */
/* Demangled: vtable for android::List<NSCam::v3::Utils::StreamBufferImp::RWUser> */
extern void* _ZTVN7android4ListIN5NSCam2v35Utils15StreamBufferImp6RWUserEEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler15ImageConfigItemEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::AppStreamMgr::FrameHandler::ImageConfigItem> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler15ImageConfigItemEEEE12do_constructEPvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::GrallocStaticInfo::Plane>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v312AppStreamMgr17BufferHandleCacheENS_9allocatorIS4_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::AppStreamMgr::BufferHandleCache, std::__1::allocator<NSCam::v3::AppStreamMgr::BufferHandleCache> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v312AppStreamMgr17BufferHandleCacheENS_9allocatorIS4_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZNK5NSCam2v322Camera3ImageStreamInfo18getImageBufferInfoEv */
/* Demangled: NSCam::v3::Camera3ImageStreamInfo::getImageBufferInfo() const */
int _ZNK5NSCam2v322Camera3ImageStreamInfo18getImageBufferInfoEv(void);

/* Symbol: _ZTVN5NSCam2v312AppStreamMgr14RequestHandlerE */
/* Demangled: vtable for NSCam::v3::AppStreamMgr::RequestHandler */
extern void* _ZTVN5NSCam2v312AppStreamMgr14RequestHandlerE;

/* Symbol: _ZTCN5NSCam2v325AppErrorImageStreamBufferE0_NS0_5Utils13TStreamBufferINS0_20AppImageStreamBufferENS0_18IImageStreamBufferEEE */
/* Demangled: construction vtable for NSCam::v3::Utils::TStreamBuffer<NSCam::v3::AppImageStreamBuffer, NSCam::v3::IImageStreamBuffer>-in-NSCam::v3::AppErrorImageStreamBuffer */
extern void* _ZTCN5NSCam2v325AppErrorImageStreamBufferE0_NS0_5Utils13TStreamBufferINS0_20AppImageStreamBufferENS0_18IImageStreamBufferEEE;

/* Symbol: _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::GrallocStaticInfo::Plane>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE7do_copyEPvPKvm(void);

/* Symbol: _ZTVN7android4ListINS_2spIN5NSCam2v312AppStreamMgr12FrameHandler11FrameParcelEEEEE */
/* Demangled: vtable for android::List<android::sp<NSCam::v3::AppStreamMgr::FrameHandler::FrameParcel> > */
extern void* _ZTVN7android4ListINS_2spIN5NSCam2v312AppStreamMgr12FrameHandler11FrameParcelEEEEE;

/* Symbol: _ZN5NSCam2v312AppStreamMgr15CallbackHandler15performCallbackEv */
/* Demangled: NSCam::v3::AppStreamMgr::CallbackHandler::performCallback() */
int _ZN5NSCam2v312AppStreamMgr15CallbackHandler15performCallbackEv(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr13ConfigHandler7destroyEv */
/* Demangled: NSCam::v3::AppStreamMgr::ConfigHandler::destroy() */
int _ZN5NSCam2v312AppStreamMgr13ConfigHandler7destroyEv(void);

/* Symbol: _ZNK5NSCam2v322Camera3ImageStreamInfo15getOriImgFormatEv */
/* Demangled: NSCam::v3::Camera3ImageStreamInfo::getOriImgFormat() const */
int _ZNK5NSCam2v322Camera3ImageStreamInfo15getOriImgFormatEv(void);

/* Symbol: _ZTCN5NSCam2v325AppErrorImageStreamBufferE8_NS0_5Utils15StreamBufferImpE */
/* Demangled: construction vtable for NSCam::v3::Utils::StreamBufferImp-in-NSCam::v3::AppErrorImageStreamBuffer */
extern void* _ZTCN5NSCam2v325AppErrorImageStreamBufferE8_NS0_5Utils15StreamBufferImpE;

/* Symbol: _ZNK7android6VectorIN5NSCam2v317IAppStreamManager7RequestEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::IAppStreamManager::Request>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317IAppStreamManager7RequestEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2wpIN5NSCam2v312AppStreamMgr12FrameHandler11FrameParcelEEEEEE10do_compareEPKvSC_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::wp<NSCam::v3::AppStreamMgr::FrameHandler::FrameParcel> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2wpIN5NSCam2v312AppStreamMgr12FrameHandler11FrameParcelEEEEEE10do_compareEPKvSC_(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler14PhysicMetaItemEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::PhysicMetaItem> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler14PhysicMetaItemEEEEEEE;

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v312AppStreamMgr10CommonInfoENS_9allocatorIS4_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::AppStreamMgr::CommonInfo, std::__1::allocator<NSCam::v3::AppStreamMgr::CommonInfo> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v312AppStreamMgr10CommonInfoENS_9allocatorIS4_EEEE;

/* Symbol: _ZN5NSCam2v312AppStreamMgr13ConfigHandler19endConfigureStreamsERN7android8hardware6camera6device4V3_422HalStreamConfigurationE */
/* Demangled: NSCam::v3::AppStreamMgr::ConfigHandler::endConfigureStreams(android::hardware::camera::device::V3_4::HalStreamConfiguration&) */
int _ZN5NSCam2v312AppStreamMgr13ConfigHandler19endConfigureStreamsERN7android8hardware6camera6device4V3_422HalStreamConfigurationE(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam2v312AppStreamMgr10CommonInfoEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::v3::AppStreamMgr::CommonInfo>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam2v312AppStreamMgr10CommonInfoEED2Ev(void);

/* Symbol: _ZTv0_n48_NK5NSCam2v322Camera3ImageStreamInfo13getStreamTypeEv */
/* Demangled: virtual thunk to NSCam::v3::Camera3ImageStreamInfo::getStreamType() const */
int _ZTv0_n48_NK5NSCam2v322Camera3ImageStreamInfo13getStreamTypeEv(void);

/* Symbol: _ZNK5NSCam2v320AppImageStreamBuffer15getAcquireFenceEv */
/* Demangled: NSCam::v3::AppImageStreamBuffer::getAcquireFence() const */
int _ZNK5NSCam2v320AppImageStreamBuffer15getAcquireFenceEv(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr14RequestHandlerC1ENSt3__110shared_ptrINS1_10CommonInfoEEENS4_IN7android8hardware12MessageQueueIhLNS8_8MQFlavorE1EEEEENS7_2spINS1_12FrameHandlerEEENSD_INS1_12BatchHandlerEEE */
/* Demangled: NSCam::v3::AppStreamMgr::RequestHandler::RequestHandler(std::__1::shared_ptr<NSCam::v3::AppStreamMgr::CommonInfo>, std::__1::shared_ptr<android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1> >, android::sp<NSCam::v3::AppStreamMgr::FrameHandler>, android::sp<NSCam::v3::AppStreamMgr::BatchHandler>) */
int _ZN5NSCam2v312AppStreamMgr14RequestHandlerC1ENSt3__110shared_ptrINS1_10CommonInfoEEENS4_IN7android8hardware12MessageQueueIhLNS8_8MQFlavorE1EEEEENS7_2spINS1_12FrameHandlerEEENSD_INS1_12BatchHandlerEEE(void);

/* Symbol: _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EEC2Emb */
/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::MessageQueue(unsigned long, bool) */
int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EEC2Emb(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v312AppStreamMgr17BufferHandleCacheENS_9allocatorIS4_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::AppStreamMgr::BufferHandleCache, std::__1::allocator<NSCam::v3::AppStreamMgr::BufferHandleCache> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v312AppStreamMgr17BufferHandleCacheENS_9allocatorIS4_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr13ConfigHandler20extractSMVRBatchInfoERKN7android8hardware6camera6device4V3_419StreamConfigurationE */
/* Demangled: NSCam::v3::AppStreamMgr::ConfigHandler::extractSMVRBatchInfo(android::hardware::camera::device::V3_4::StreamConfiguration const&) */
int _ZN5NSCam2v312AppStreamMgr13ConfigHandler20extractSMVRBatchInfoERKN7android8hardware6camera6device4V3_419StreamConfigurationE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeImN5NSCam2v312AppStreamMgr17BufferHandleCache12BufferHandleEEENS_22__unordered_map_hasherImS7_NS_4hashImEELb1EEENS_21__unordered_map_equalImS7_NS_8equal_toImEELb1EEENS_9allocatorIS7_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS7_PvEEEE */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long, NSCam::v3::AppStreamMgr::BufferHandleCache::BufferHandle>, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, NSCam::v3::AppStreamMgr::BufferHandleCache::BufferHandle>, std::__1::hash<unsigned long>, true>, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, NSCam::v3::AppStreamMgr::BufferHandleCache::BufferHandle>, std::__1::equal_to<unsigned long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long, NSCam::v3::AppStreamMgr::BufferHandleCache::BufferHandle> > >::remove(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, NSCam::v3::AppStreamMgr::BufferHandleCache::BufferHandle>, void*>*>) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeImN5NSCam2v312AppStreamMgr17BufferHandleCache12BufferHandleEEENS_22__unordered_map_hasherImS7_NS_4hashImEELb1EEENS_21__unordered_map_equalImS7_NS_8equal_toImEELb1EEENS_9allocatorIS7_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS7_PvEEEE(void);

/* Symbol: _ZTv0_n56_NK5NSCam2v322Camera3ImageStreamInfo12getMaxBufNumEv */
/* Demangled: virtual thunk to NSCam::v3::Camera3ImageStreamInfo::getMaxBufNum() const */
int _ZTv0_n56_NK5NSCam2v322Camera3ImageStreamInfo12getMaxBufNumEv(void);

/* Symbol: _ZN5NSCam2v320AppImageStreamBuffer21AppStreamBufferHandleD1Ev */
/* Demangled: NSCam::v3::AppImageStreamBuffer::AppStreamBufferHandle::~AppStreamBufferHandle() */
int _ZN5NSCam2v320AppImageStreamBuffer21AppStreamBufferHandleD1Ev(void);

/* Symbol: _ZN7android2spIN5NSCam2v318IImageStreamBufferEED2Ev */
/* Demangled: android::sp<NSCam::v3::IImageStreamBuffer>::~sp() */
int _ZN7android2spIN5NSCam2v318IImageStreamBufferEED2Ev(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr12FrameHandler17checkRequestErrorERKNS2_11FrameParcelE */
/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::checkRequestError(NSCam::v3::AppStreamMgr::FrameHandler::FrameParcel const&) */
int _ZN5NSCam2v312AppStreamMgr12FrameHandler17checkRequestErrorERKNS2_11FrameParcelE(void);

/* Symbol: libat_lock_n */
/* Demangled: libat_lock_n */
int libat_lock_n(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr15CallbackHandler33convertMetaToHidlWithMergeEnabledERKNS1_14CallbackParcelERNSt3__16vectorIN7android8hardware6camera6device4V3_413CaptureResultENS6_9allocatorISD_EEEERNS7_IP15camera_metadataNSE_ISJ_EEEE */
/* Demangled: NSCam::v3::AppStreamMgr::CallbackHandler::convertMetaToHidlWithMergeEnabled(NSCam::v3::AppStreamMgr::CallbackParcel const&, std::__1::vector<android::hardware::camera::device::V3_4::CaptureResult, std::__1::allocator<android::hardware::camera::device::V3_4::CaptureResult> >&, std::__1::vector<camera_metadata*, std::__1::allocator<camera_metadata*> >&) */
int _ZN5NSCam2v312AppStreamMgr15CallbackHandler33convertMetaToHidlWithMergeEnabledERKNS1_14CallbackParcelERNSt3__16vectorIN7android8hardware6camera6device4V3_413CaptureResultENS6_9allocatorISD_EEEERNS7_IP15camera_metadataNSE_ISJ_EEEE(void);

/* Symbol: _ZNSt3__113__vector_baseIN7android8hardware6camera6device4V3_413CaptureResultENS_9allocatorIS6_EEED2Ev */
/* Demangled: std::__1::__vector_base<android::hardware::camera::device::V3_4::CaptureResult, std::__1::allocator<android::hardware::camera::device::V3_4::CaptureResult> >::~__vector_base() */
int _ZNSt3__113__vector_baseIN7android8hardware6camera6device4V3_413CaptureResultENS_9allocatorIS6_EEED2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_214StreamRotationEmEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::hardware::camera::device::V3_2::StreamRotation, unsigned long> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_214StreamRotationEmEEE12do_constructEPvm(void);

/* Symbol: _ZN7android2spIN5NSCam2v316IImageStreamInfoEED2Ev */
/* Demangled: android::sp<NSCam::v3::IImageStreamInfo>::~sp() */
int _ZN7android2spIN5NSCam2v316IImageStreamInfoEED2Ev(void);

/* Symbol: _ZTv0_n72_N5NSCam2v320AppImageStreamBuffer14enqueUserGraphEN7android2spINS0_13IUsersManager10IUserGraphEEE */
/* Demangled: virtual thunk to NSCam::v3::AppImageStreamBuffer::enqueUserGraph(android::sp<NSCam::v3::IUsersManager::IUserGraph>) */
int _ZTv0_n72_N5NSCam2v320AppImageStreamBuffer14enqueUserGraphEN7android2spINS0_13IUsersManager10IUserGraphEEE(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr12FrameHandler25prepareCallbackIfPossibleERNS1_14CallbackParcelERNS2_11MetaItemSetE */
/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::prepareCallbackIfPossible(NSCam::v3::AppStreamMgr::CallbackParcel&, NSCam::v3::AppStreamMgr::FrameHandler::MetaItemSet&) */
int _ZN5NSCam2v312AppStreamMgr12FrameHandler25prepareCallbackIfPossibleERNS1_14CallbackParcelERNS2_11MetaItemSetE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_210StreamTypeEmEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::hardware::camera::device::V3_2::StreamType, unsigned long> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_210StreamTypeEmEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN7android2spIN5NSCam2v312AppStreamMgr12BatchHandlerEEaSEPS4_ */
/* Demangled: android::sp<NSCam::v3::AppStreamMgr::BatchHandler>::operator=(NSCam::v3::AppStreamMgr::BatchHandler*) */
int _ZN7android2spIN5NSCam2v312AppStreamMgr12BatchHandlerEEaSEPS4_(void);

/* Symbol: _ZTVN7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEEE */
/* Demangled: vtable for android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> > */
extern void* _ZTVN7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEEE;

/* Symbol: _ZN5NSCam2v320AppImageStreamBuffer9AllocatorC2EPNS0_16IImageStreamInfoE */
/* Demangled: NSCam::v3::AppImageStreamBuffer::Allocator::Allocator(NSCam::v3::IImageStreamInfo*) */
int _ZN5NSCam2v320AppImageStreamBuffer9AllocatorC2EPNS0_16IImageStreamInfoE(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr9dumpStateERN7android7PrinterERKNSt3__16vectorINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEENSA_ISC_EEEE */
/* Demangled: NSCam::v3::AppStreamMgr::dumpState(android::Printer&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
int _ZN5NSCam2v312AppStreamMgr9dumpStateERN7android7PrinterERKNSt3__16vectorINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEENSA_ISC_EEEE(void);

/* Symbol: _ZNK5NSCam2v312AppStreamMgr14RequestHandler23createImageStreamBufferERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERKN7android8hardware6camera6device4V3_212StreamBufferEPK13native_handleNS3_10shared_ptrINS0_20AppImageStreamBuffer21AppStreamBufferHandleEEEii */
/* Demangled: NSCam::v3::AppStreamMgr::RequestHandler::createImageStreamBuffer(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::hardware::camera::device::V3_2::StreamBuffer const&, native_handle const*, std::__1::shared_ptr<NSCam::v3::AppImageStreamBuffer::AppStreamBufferHandle>, int, int) const */
int _ZNK5NSCam2v312AppStreamMgr14RequestHandler23createImageStreamBufferERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERKN7android8hardware6camera6device4V3_212StreamBufferEPK13native_handleNS3_10shared_ptrINS0_20AppImageStreamBuffer21AppStreamBufferHandleEEEii(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr12FrameHandler15addConfigStreamEPNS0_22Camera3ImageStreamInfoEb */
/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::addConfigStream(NSCam::v3::Camera3ImageStreamInfo*, bool) */
int _ZN5NSCam2v312AppStreamMgr12FrameHandler15addConfigStreamEPNS0_22Camera3ImageStreamInfoEb(void);

/* Symbol: _ZTCN5NSCam2v325AppErrorImageStreamBufferE0_NS0_20AppImageStreamBufferE */
/* Demangled: construction vtable for NSCam::v3::AppImageStreamBuffer-in-NSCam::v3::AppErrorImageStreamBuffer */
extern void* _ZTCN5NSCam2v325AppErrorImageStreamBufferE0_NS0_20AppImageStreamBufferE;

/* Symbol: _ZN7android8hardware7details13arrayToStringINS0_8hidl_vecINS0_6camera6device4V3_46StreamEEEEENSt3__112basic_stringIcNS9_11char_traitsIcEENS9_9allocatorIcEEEERKT_m */
/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > android::hardware::details::arrayToString<android::hardware::hidl_vec<android::hardware::camera::device::V3_4::Stream> >(android::hardware::hidl_vec<android::hardware::camera::device::V3_4::Stream> const&, unsigned long) */
int _ZN7android8hardware7details13arrayToStringINS0_8hidl_vecINS0_6camera6device4V3_46StreamEEEEENSt3__112basic_stringIcNS9_11char_traitsIcEENS9_9allocatorIcEEEERKT_m(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel14PhysicMetaItemEEE */
/* Demangled: vtable for android::Vector<NSCam::v3::AppStreamMgr::CallbackParcel::PhysicMetaItem> */
extern void* _ZTVN7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel14PhysicMetaItemEEE;

/* Symbol: _ZN5NSCam2v312AppStreamMgr12FrameHandler12importBufferElmRPK13native_handleRNSt3__110shared_ptrINS0_20AppImageStreamBuffer21AppStreamBufferHandleEEE */
/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::importBuffer(long, unsigned long, native_handle const*&, std::__1::shared_ptr<NSCam::v3::AppImageStreamBuffer::AppStreamBufferHandle>&) */
int _ZN5NSCam2v312AppStreamMgr12FrameHandler12importBufferElmRPK13native_handleRNSt3__110shared_ptrINS0_20AppImageStreamBuffer21AppStreamBufferHandleEEE(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr15CallbackHandler14traceDisplayIfEjmRKNS1_14CallbackParcel9ImageItemE */
/* Demangled: NSCam::v3::AppStreamMgr::CallbackHandler::traceDisplayIf(unsigned int, unsigned long, NSCam::v3::AppStreamMgr::CallbackParcel::ImageItem const&) */
int _ZN5NSCam2v312AppStreamMgr15CallbackHandler14traceDisplayIfEjmRKNS1_14CallbackParcel9ImageItemE(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr12BatchHandler16waitUntilDrainedEl */
/* Demangled: NSCam::v3::AppStreamMgr::BatchHandler::waitUntilDrained(long) */
int _ZN5NSCam2v312AppStreamMgr12BatchHandler16waitUntilDrainedEl(void);

/* Symbol: _ZTVN7android6VectorIiEE */
/* Demangled: vtable for android::Vector<int> */
extern void* _ZTVN7android6VectorIiEE;

/* Symbol: _ZN7android8hardware8toStringINS0_6camera6device4V3_46StreamEEENSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKNS0_8hidl_vecIT_EE */
/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > android::hardware::toString<android::hardware::camera::device::V3_4::Stream>(android::hardware::hidl_vec<android::hardware::camera::device::V3_4::Stream> const&) */
int _ZN7android8hardware8toStringINS0_6camera6device4V3_46StreamEEENSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKNS0_8hidl_vecIT_EE(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> > > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEEEEEEE;

/* Symbol: _ZN5NSCam2v312AppStreamMgr12FrameHandler17prepareErrorFrameERNS1_14CallbackParcelERKN7android2spINS2_11FrameParcelEEE */
/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::prepareErrorFrame(NSCam::v3::AppStreamMgr::CallbackParcel&, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::FrameParcel> const&) */
int _ZN5NSCam2v312AppStreamMgr12FrameHandler17prepareErrorFrameERNS1_14CallbackParcelERKN7android2spINS2_11FrameParcelEEE(void);

/* Symbol: _ZTISt9exception */
/* Demangled: typeinfo for std::exception */
extern void* _ZTISt9exception;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_210StreamTypeEmEEE10do_compareEPKvSA_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::hardware::camera::device::V3_2::StreamType, unsigned long> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_210StreamTypeEmEEE10do_compareEPKvSA_(void);

/* Symbol: _ZN5NSCam2v325AppErrorImageStreamBufferC2EmN7android2spINS0_16IImageStreamInfoEEEi */
/* Demangled: NSCam::v3::AppErrorImageStreamBuffer::AppErrorImageStreamBuffer(unsigned long, android::sp<NSCam::v3::IImageStreamInfo>, int) */
int _ZN5NSCam2v325AppErrorImageStreamBufferC2EmN7android2spINS0_16IImageStreamInfoEEEi(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void);

/* Symbol: _ZNK5NSCam2v312AppStreamMgr14RequestHandler22createMetaStreamBufferEN7android2spINS0_15IMetaStreamInfoEEERKNS_9IMetadataEb */
/* Demangled: NSCam::v3::AppStreamMgr::RequestHandler::createMetaStreamBuffer(android::sp<NSCam::v3::IMetaStreamInfo>, NSCam::IMetadata const&, bool) const */
int _ZNK5NSCam2v312AppStreamMgr14RequestHandler22createMetaStreamBufferEN7android2spINS0_15IMetaStreamInfoEEERKNS_9IMetadataEb(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler15ImageConfigItemEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::AppStreamMgr::FrameHandler::ImageConfigItem> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler15ImageConfigItemEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler14PhysicMetaItemEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::PhysicMetaItem> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler14PhysicMetaItemEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr15CallbackHandler7destroyEv */
/* Demangled: NSCam::v3::AppStreamMgr::CallbackHandler::destroy() */
int _ZN5NSCam2v312AppStreamMgr15CallbackHandler7destroyEv(void);

/* Symbol: _ZNSt3__112__hash_tableIlNS_4hashIlEENS_8equal_toIlEENS_9allocatorIlEEE8__rehashEm */
/* Demangled: std::__1::__hash_table<long, std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<long> >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableIlNS_4hashIlEENS_8equal_toIlEENS_9allocatorIlEEE8__rehashEm(void);

/* Symbol: _ZNSt3__112__hash_tableIlNS_4hashIlEENS_8equal_toIlEENS_9allocatorIlEEED2Ev */
/* Demangled: std::__1::__hash_table<long, std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<long> >::~__hash_table() */
int _ZNSt3__112__hash_tableIlNS_4hashIlEENS_8equal_toIlEENS_9allocatorIlEEED2Ev(void);

/* Symbol: _ZTv0_n72_NK5NSCam2v322Camera3ImageStreamInfo16getMinInitBufNumEv */
/* Demangled: virtual thunk to NSCam::v3::Camera3ImageStreamInfo::getMinInitBufNum() const */
int _ZTv0_n72_NK5NSCam2v322Camera3ImageStreamInfo16getMinInitBufNumEv(void);

/* Symbol: _ZTv0_n24_N5NSCam2v320AppImageStreamBufferD1Ev */
/* Demangled: virtual thunk to NSCam::v3::AppImageStreamBuffer::~AppImageStreamBuffer() */
int _ZTv0_n24_N5NSCam2v320AppImageStreamBufferD1Ev(void);

/* Symbol: _ZN7android2spIN5NSCam2v312AppStreamMgr12BatchHandlerEED2Ev */
/* Demangled: android::sp<NSCam::v3::AppStreamMgr::BatchHandler>::~sp() */
int _ZN7android2spIN5NSCam2v312AppStreamMgr12BatchHandlerEED2Ev(void);

/* Symbol: _ZTCN5NSCam2v319AppMetaStreamBufferE0_NS0_13IStreamBufferE */
/* Demangled: construction vtable for NSCam::v3::IStreamBuffer-in-NSCam::v3::AppMetaStreamBuffer */
extern void* _ZTCN5NSCam2v319AppMetaStreamBufferE0_NS0_13IStreamBufferE;

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void);

/* Symbol: _ZTCN5NSCam2v312AppStreamMgr13ResultHandlerE0_N7android6ThreadE */
/* Demangled: construction vtable for android::Thread-in-NSCam::v3::AppStreamMgr::ResultHandler */
extern void* _ZTCN5NSCam2v312AppStreamMgr13ResultHandlerE0_N7android6ThreadE;

/* Symbol: _ZN5NSCam2v312AppStreamMgr12BatchHandler13registerBatchEN7android6VectorINS0_17IAppStreamManager7RequestEEE */
/* Demangled: NSCam::v3::AppStreamMgr::BatchHandler::registerBatch(android::Vector<NSCam::v3::IAppStreamManager::Request>) */
int _ZN5NSCam2v312AppStreamMgr12BatchHandler13registerBatchEN7android6VectorINS0_17IAppStreamManager7RequestEEE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeImN5NSCam2v312AppStreamMgr17BufferHandleCache12BufferHandleEEENS_22__unordered_map_hasherImS7_NS_4hashImEELb1EEENS_21__unordered_map_equalImS7_NS_8equal_toImEELb1EEENS_9allocatorIS7_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long, NSCam::v3::AppStreamMgr::BufferHandleCache::BufferHandle>, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, NSCam::v3::AppStreamMgr::BufferHandleCache::BufferHandle>, std::__1::hash<unsigned long>, true>, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, NSCam::v3::AppStreamMgr::BufferHandleCache::BufferHandle>, std::__1::equal_to<unsigned long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long, NSCam::v3::AppStreamMgr::BufferHandleCache::BufferHandle> > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeImN5NSCam2v312AppStreamMgr17BufferHandleCache12BufferHandleEEENS_22__unordered_map_hasherImS7_NS_4hashImEELb1EEENS_21__unordered_map_equalImS7_NS_8equal_toImEELb1EEENS_9allocatorIS7_EEE8__rehashEm(void);

/* Symbol: _ZTv0_n336_NK5NSCam2v319AppMetaStreamBuffer8toStringEv */
/* Demangled: virtual thunk to NSCam::v3::AppMetaStreamBuffer::toString() const */
int _ZTv0_n336_NK5NSCam2v319AppMetaStreamBuffer8toStringEv(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr12FrameHandler16waitUntilDrainedEl */
/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::waitUntilDrained(long) */
int _ZN5NSCam2v312AppStreamMgr12FrameHandler16waitUntilDrainedEl(void);

/* Symbol: _ZNK5NSCam2v312AppStreamMgr12FrameHandler4dumpEv */
/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::dump() const */
int _ZNK5NSCam2v312AppStreamMgr12FrameHandler4dumpEv(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr13ConfigHandler21beginConfigureStreamsERKN7android8hardware6camera6device4V3_419StreamConfigurationERNS7_22HalStreamConfigurationERNS0_17IAppStreamManager16ConfigAppStreamsE */
/* Demangled: NSCam::v3::AppStreamMgr::ConfigHandler::beginConfigureStreams(android::hardware::camera::device::V3_4::StreamConfiguration const&, android::hardware::camera::device::V3_4::HalStreamConfiguration&, NSCam::v3::IAppStreamManager::ConfigAppStreams&) */
int _ZN5NSCam2v312AppStreamMgr13ConfigHandler21beginConfigureStreamsERKN7android8hardware6camera6device4V3_419StreamConfigurationERNS7_22HalStreamConfigurationERNS0_17IAppStreamManager16ConfigAppStreamsE(void);

/* Symbol: _ZNK5NSCam2v312AppStreamMgr13ConfigHandler11checkStreamERKN7android8hardware6camera6device4V3_46StreamE */
/* Demangled: NSCam::v3::AppStreamMgr::ConfigHandler::checkStream(android::hardware::camera::device::V3_4::Stream const&) const */
int _ZNK5NSCam2v312AppStreamMgr13ConfigHandler11checkStreamERKN7android8hardware6camera6device4V3_46StreamE(void);

/* Symbol: _ZNK5NSCam2v325AppErrorImageStreamBuffer15getAcquireFenceEv */
/* Demangled: NSCam::v3::AppErrorImageStreamBuffer::getAcquireFence() const */
int _ZNK5NSCam2v325AppErrorImageStreamBuffer15getAcquireFenceEv(void);

/* Symbol: _ZTVN5NSCam2v312AppStreamMgr12FrameHandler11FrameParcelE */
/* Demangled: vtable for NSCam::v3::AppStreamMgr::FrameHandler::FrameParcel */
extern void* _ZTVN5NSCam2v312AppStreamMgr12FrameHandler11FrameParcelE;

/* Symbol: _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZN5NSCam2v312AppStreamMgr15CallbackHandler23convertPhysicMetaToHidlERKNS1_14CallbackParcelERN7android8hardware6camera6device4V3_413CaptureResultERNSt3__16vectorIP15camera_metadataNSD_9allocatorISG_EEEE */
/* Demangled: NSCam::v3::AppStreamMgr::CallbackHandler::convertPhysicMetaToHidl(NSCam::v3::AppStreamMgr::CallbackParcel const&, android::hardware::camera::device::V3_4::CaptureResult&, std::__1::vector<camera_metadata*, std::__1::allocator<camera_metadata*> >&) */
int _ZN5NSCam2v312AppStreamMgr15CallbackHandler23convertPhysicMetaToHidlERKNS1_14CallbackParcelERN7android8hardware6camera6device4V3_413CaptureResultERNSt3__16vectorIP15camera_metadataNSD_9allocatorISG_EEEE(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr12BatchHandler17removeBatchLockedEj */
/* Demangled: NSCam::v3::AppStreamMgr::BatchHandler::removeBatchLocked(unsigned int) */
int _ZN5NSCam2v312AppStreamMgr12BatchHandler17removeBatchLockedEj(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* obj___bss_start __asm__("__bss_start");

/* Symbol: _ZN7android2spIN5NSCam2v312AppStreamMgr14RequestHandlerEEaSEPS4_ */
/* Demangled: android::sp<NSCam::v3::AppStreamMgr::RequestHandler>::operator=(NSCam::v3::AppStreamMgr::RequestHandler*) */
int _ZN7android2spIN5NSCam2v312AppStreamMgr14RequestHandlerEEaSEPS4_(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel9ImageItemEEE */
/* Demangled: vtable for android::Vector<NSCam::v3::AppStreamMgr::CallbackParcel::ImageItem> */
extern void* _ZTVN7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel9ImageItemEEE;

/* Symbol: _ZN5NSCam2v312AppStreamMgr12FrameHandler13uncacheBufferElm */
/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::uncacheBuffer(long, unsigned long) */
int _ZN5NSCam2v312AppStreamMgr12FrameHandler13uncacheBufferElm(void);

/* Symbol: _ZN7android2wpIN5NSCam2v312AppStreamMgr12FrameHandler11FrameParcelEED2Ev */
/* Demangled: android::wp<NSCam::v3::AppStreamMgr::FrameHandler::FrameParcel>::~wp() */
int _ZN7android2wpIN5NSCam2v312AppStreamMgr12FrameHandler11FrameParcelEED2Ev(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_210StreamTypeEmEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<android::hardware::camera::device::V3_2::StreamType, unsigned long> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_210StreamTypeEmEEEE;

/* Symbol: _ZN7android2spIN5NSCam2v311IStreamInfoEED2Ev */
/* Demangled: android::sp<NSCam::v3::IStreamInfo>::~sp() */
int _ZN7android2spIN5NSCam2v311IStreamInfoEED2Ev(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr14RequestHandler16registerRequestsERKN7android6VectorINS0_17IAppStreamManager7RequestEEE */
/* Demangled: NSCam::v3::AppStreamMgr::RequestHandler::registerRequests(android::Vector<NSCam::v3::IAppStreamManager::Request> const&) */
int _ZN5NSCam2v312AppStreamMgr14RequestHandler16registerRequestsERKN7android6VectorINS0_17IAppStreamManager7RequestEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler14PhysicMetaItemEEEEEE10do_compareEPKvSC_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::PhysicMetaItem> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler14PhysicMetaItemEEEEEE10do_compareEPKvSC_(void);

/* Symbol: _ZNK7android6VectorIiE7do_copyEPvPKvm */
/* Demangled: android::Vector<int>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIiE7do_copyEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler9ImageItemEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::ImageItem> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler9ImageItemEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK5NSCam2v320AppImageStreamBuffer8toStringEv */
/* Demangled: NSCam::v3::AppImageStreamBuffer::toString() const */
int _ZNK5NSCam2v320AppImageStreamBuffer8toStringEv(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr14RequestHandler16createOneRequestERKN7android8hardware6camera6device4V3_414CaptureRequestERNS0_17IAppStreamManager7RequestE */
/* Demangled: NSCam::v3::AppStreamMgr::RequestHandler::createOneRequest(android::hardware::camera::device::V3_4::CaptureRequest const&, NSCam::v3::IAppStreamManager::Request&) */
int _ZN5NSCam2v312AppStreamMgr14RequestHandler16createOneRequestERKN7android8hardware6camera6device4V3_414CaptureRequestERNS0_17IAppStreamManager7RequestE(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2wpIN5NSCam2v312AppStreamMgr12FrameHandler11FrameParcelEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::wp<NSCam::v3::AppStreamMgr::FrameHandler::FrameParcel> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2wpIN5NSCam2v312AppStreamMgr12FrameHandler11FrameParcelEEEEEE12do_constructEPvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler14MetaConfigItemEEEE10do_compareEPKvSA_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::AppStreamMgr::FrameHandler::MetaConfigItem> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler14MetaConfigItemEEEE10do_compareEPKvSA_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler14PhysicMetaItemEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::PhysicMetaItem> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler14PhysicMetaItemEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::GrallocStaticInfo::Plane>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE10do_destroyEPvm(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam9IDebuggeeEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::IDebuggee>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam9IDebuggeeEED2Ev(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr12FrameHandler17prepareErrorImageERNS1_14CallbackParcelERKN7android2spINS2_9ImageItemEEE */
/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::prepareErrorImage(NSCam::v3::AppStreamMgr::CallbackParcel&, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::ImageItem> const&) */
int _ZN5NSCam2v312AppStreamMgr12FrameHandler17prepareErrorImageERNS1_14CallbackParcelERKN7android2spINS2_9ImageItemEEE(void);

/* Symbol: _ZTCN5NSCam2v320AppImageStreamBufferE0_NS0_14TIStreamBufferINS0_16IImageStreamInfoENS_16IImageBufferHeapEEE */
/* Demangled: construction vtable for NSCam::v3::TIStreamBuffer<NSCam::v3::IImageStreamInfo, NSCam::IImageBufferHeap>-in-NSCam::v3::AppImageStreamBuffer */
extern void* _ZTCN5NSCam2v320AppImageStreamBufferE0_NS0_14TIStreamBufferINS0_16IImageStreamInfoENS_16IImageBufferHeapEEE;

/* Symbol: _ZN7android2spIN5NSCam2v312AppStreamMgr13ResultHandlerEED2Ev */
/* Demangled: android::sp<NSCam::v3::AppStreamMgr::ResultHandler>::~sp() */
int _ZN7android2spIN5NSCam2v312AppStreamMgr13ResultHandlerEED2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v312AppStreamMgr10ResultItemEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::v3::AppStreamMgr::ResultItem> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v312AppStreamMgr10ResultItemEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN7android2spIN5NSCam2v312AppStreamMgr12FrameHandler14PhysicMetaItemEED2Ev */
/* Demangled: android::sp<NSCam::v3::AppStreamMgr::FrameHandler::PhysicMetaItem>::~sp() */
int _ZN7android2spIN5NSCam2v312AppStreamMgr12FrameHandler14PhysicMetaItemEED2Ev(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr15CallbackHandler23waitUntilQueue1NotEmptyEv */
/* Demangled: NSCam::v3::AppStreamMgr::CallbackHandler::waitUntilQueue1NotEmpty() */
int _ZN5NSCam2v312AppStreamMgr15CallbackHandler23waitUntilQueue1NotEmptyEv(void);

/* Symbol: _ZTv0_n32_NK5NSCam2v322Camera3ImageStreamInfo13getStreamNameEv */
/* Demangled: virtual thunk to NSCam::v3::Camera3ImageStreamInfo::getStreamName() const */
int _ZTv0_n32_NK5NSCam2v322Camera3ImageStreamInfo13getStreamNameEv(void);

/* Symbol: _ZTCN5NSCam2v320AppImageStreamBufferE0_NS0_5Utils13TStreamBufferINS0_20AppImageStreamBufferENS0_18IImageStreamBufferEEE */
/* Demangled: construction vtable for NSCam::v3::Utils::TStreamBuffer<NSCam::v3::AppImageStreamBuffer, NSCam::v3::IImageStreamBuffer>-in-NSCam::v3::AppImageStreamBuffer */
extern void* _ZTCN5NSCam2v320AppImageStreamBufferE0_NS0_5Utils13TStreamBufferINS0_20AppImageStreamBufferENS0_18IImageStreamBufferEEE;

/* Symbol: _ZN7android2spIN5NSCam2v312AppStreamMgr14RequestHandlerEED2Ev */
/* Demangled: android::sp<NSCam::v3::AppStreamMgr::RequestHandler>::~sp() */
int _ZN7android2spIN5NSCam2v312AppStreamMgr14RequestHandlerEED2Ev(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr12FrameHandler6updateERKN7android11KeyedVectorIjNS3_2spINS1_10ResultItemEEEEE */
/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::update(android::KeyedVector<unsigned int, android::sp<NSCam::v3::AppStreamMgr::ResultItem> > const&) */
int _ZN5NSCam2v312AppStreamMgr12FrameHandler6updateERKN7android11KeyedVectorIjNS3_2spINS1_10ResultItemEEEEE(void);

/* Symbol: _ZN7android2spIN5NSCam2v35Utils14MetaStreamInfoEED2Ev */
/* Demangled: android::sp<NSCam::v3::Utils::MetaStreamInfo>::~sp() */
int _ZN7android2spIN5NSCam2v35Utils14MetaStreamInfoEED2Ev(void);

/* Symbol: _ZNK5NSCam2v312AppStreamMgr12FrameHandler10dumpLockedEv */
/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::dumpLocked() const */
int _ZNK5NSCam2v312AppStreamMgr12FrameHandler10dumpLockedEv(void);

/* Symbol: _ZTVN5NSCam2v322Camera3ImageStreamInfoE */
/* Demangled: vtable for NSCam::v3::Camera3ImageStreamInfo */
extern void* _ZTVN5NSCam2v322Camera3ImageStreamInfoE;

/* Symbol: _ZN5NSCam2v320AppImageStreamBufferC2EmN7android2spINS0_16IImageStreamInfoEEENS3_INS_23IGraphicImageBufferHeapEEEPK13native_handleNSt3__110shared_ptrINS1_21AppStreamBufferHandleEEEPNS0_13IUsersManagerE */
/* Demangled: NSCam::v3::AppImageStreamBuffer::AppImageStreamBuffer(unsigned long, android::sp<NSCam::v3::IImageStreamInfo>, android::sp<NSCam::IGraphicImageBufferHeap>, native_handle const*, std::__1::shared_ptr<NSCam::v3::AppImageStreamBuffer::AppStreamBufferHandle>, NSCam::v3::IUsersManager*) */
int _ZN5NSCam2v320AppImageStreamBufferC2EmN7android2spINS0_16IImageStreamInfoEEENS3_INS_23IGraphicImageBufferHeapEEEPK13native_handleNSt3__110shared_ptrINS1_21AppStreamBufferHandleEEEPNS0_13IUsersManagerE(void);

/* Symbol: _ZN7android2spIN5NSCam2v313IUsersManager10IUserGraphEED2Ev */
/* Demangled: android::sp<NSCam::v3::IUsersManager::IUserGraph>::~sp() */
int _ZN7android2spIN5NSCam2v313IUsersManager10IUserGraphEED2Ev(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel14PhysicMetaItemEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::v3::AppStreamMgr::CallbackParcel::PhysicMetaItem>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel14PhysicMetaItemEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel14PhysicMetaItemEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::AppStreamMgr::CallbackParcel::PhysicMetaItem>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel14PhysicMetaItemEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK5NSCam2v312AppStreamMgr17BufferHandleCache9dumpStateERN7android7PrinterEj */
/* Demangled: NSCam::v3::AppStreamMgr::BufferHandleCache::dumpState(android::Printer&, unsigned int) const */
int _ZNK5NSCam2v312AppStreamMgr17BufferHandleCache9dumpStateERN7android7PrinterEj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler14MetaConfigItemEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::AppStreamMgr::FrameHandler::MetaConfigItem> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler14MetaConfigItemEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZTVN5NSCam2v312AppStreamMgr12FrameHandler14PhysicMetaItemE */
/* Demangled: vtable for NSCam::v3::AppStreamMgr::FrameHandler::PhysicMetaItem */
extern void* _ZTVN5NSCam2v312AppStreamMgr12FrameHandler14PhysicMetaItemE;

/* Symbol: _ZNK5NSCam2v320AppImageStreamBuffer11getBufferIdEv */
/* Demangled: NSCam::v3::AppImageStreamBuffer::getBufferId() const */
int _ZNK5NSCam2v320AppImageStreamBuffer11getBufferIdEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel8MetaItemEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::v3::AppStreamMgr::CallbackParcel::MetaItem>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel8MetaItemEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v312AppStreamMgr10ResultItemEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::v3::AppStreamMgr::ResultItem> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v312AppStreamMgr10ResultItemEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler9ImageItemEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::ImageItem> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler9ImageItemEEEEEE12do_constructEPvm(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam2v312AppStreamMgr10MyDebuggeeEE11make_sharedIJPS3_EEES5_DpOT_ */
/* Demangled: std::__1::shared_ptr<NSCam::v3::AppStreamMgr::MyDebuggee> std::__1::shared_ptr<NSCam::v3::AppStreamMgr::MyDebuggee>::make_shared<NSCam::v3::AppStreamMgr*>(NSCam::v3::AppStreamMgr*&&) */
int _ZNSt3__110shared_ptrIN5NSCam2v312AppStreamMgr10MyDebuggeeEE11make_sharedIJPS3_EEES5_DpOT_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE12do_constructEPvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v312AppStreamMgr10ResultItemEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::v3::AppStreamMgr::ResultItem> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v312AppStreamMgr10ResultItemEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr15CallbackHandler18convertImageToHidlERKNS1_14CallbackParcelERNSt3__16vectorIN7android8hardware6camera6device4V3_413CaptureResultENS6_9allocatorISD_EEEE */
/* Demangled: NSCam::v3::AppStreamMgr::CallbackHandler::convertImageToHidl(NSCam::v3::AppStreamMgr::CallbackParcel const&, std::__1::vector<android::hardware::camera::device::V3_4::CaptureResult, std::__1::allocator<android::hardware::camera::device::V3_4::CaptureResult> >&) */
int _ZN5NSCam2v312AppStreamMgr15CallbackHandler18convertImageToHidlERKNS1_14CallbackParcelERNSt3__16vectorIN7android8hardware6camera6device4V3_413CaptureResultENS6_9allocatorISD_EEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_214StreamRotationEmEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::hardware::camera::device::V3_2::StreamRotation, unsigned long> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_214StreamRotationEmEEE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam2v320AppImageStreamBuffer9AllocatorC1EPNS0_16IImageStreamInfoE */
/* Demangled: NSCam::v3::AppImageStreamBuffer::Allocator::Allocator(NSCam::v3::IImageStreamInfo*) */
int _ZN5NSCam2v320AppImageStreamBuffer9AllocatorC1EPNS0_16IImageStreamInfoE(void);

/* Symbol: _ZN5NSCam2v320AppImageStreamBufferC1EmN7android2spINS0_16IImageStreamInfoEEENS3_INS_23IGraphicImageBufferHeapEEEPK13native_handleNSt3__110shared_ptrINS1_21AppStreamBufferHandleEEEPNS0_13IUsersManagerE */
/* Demangled: NSCam::v3::AppImageStreamBuffer::AppImageStreamBuffer(unsigned long, android::sp<NSCam::v3::IImageStreamInfo>, android::sp<NSCam::IGraphicImageBufferHeap>, native_handle const*, std::__1::shared_ptr<NSCam::v3::AppImageStreamBuffer::AppStreamBufferHandle>, NSCam::v3::IUsersManager*) */
int _ZN5NSCam2v320AppImageStreamBufferC1EmN7android2spINS0_16IImageStreamInfoEEENS3_INS_23IGraphicImageBufferHeapEEEPK13native_handleNSt3__110shared_ptrINS1_21AppStreamBufferHandleEEEPNS0_13IUsersManagerE(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgrC2ERKNS0_17IAppStreamManager12CreationInfoE */
/* Demangled: NSCam::v3::AppStreamMgr::AppStreamMgr(NSCam::v3::IAppStreamManager::CreationInfo const&) */
int _ZN5NSCam2v312AppStreamMgrC2ERKNS0_17IAppStreamManager12CreationInfoE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel14PhysicMetaItemEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::v3::AppStreamMgr::CallbackParcel::PhysicMetaItem>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel14PhysicMetaItemEE12do_constructEPvm(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v312AppStreamMgr10MyDebuggeeENS_9allocatorIS4_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::AppStreamMgr::MyDebuggee, std::__1::allocator<NSCam::v3::AppStreamMgr::MyDebuggee> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v312AppStreamMgr10MyDebuggeeENS_9allocatorIS4_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN7android8hardware12MessageQueueIhLNS2_8MQFlavorE1EEENS_9allocatorIS5_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>, std::__1::allocator<android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1> > >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN7android8hardware12MessageQueueIhLNS2_8MQFlavorE1EEENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN7android2spIN5NSCam2v312AppStreamMgr12FrameHandler11FrameParcelEED2Ev */
/* Demangled: android::sp<NSCam::v3::AppStreamMgr::FrameHandler::FrameParcel>::~sp() */
int _ZN7android2spIN5NSCam2v312AppStreamMgr12FrameHandler11FrameParcelEED2Ev(void);

/* Symbol: _ZTVN7android4ListINS_2spIN5NSCam2v312AppStreamMgr12FrameHandler9ImageItemEEEEE */
/* Demangled: vtable for android::List<android::sp<NSCam::v3::AppStreamMgr::FrameHandler::ImageItem> > */
extern void* _ZTVN7android4ListINS_2spIN5NSCam2v312AppStreamMgr12FrameHandler9ImageItemEEEEE;

/* Symbol: _ZN5NSCam2v312AppStreamMgr15CallbackHandler24updateStatistics_shutterEmj */
/* Demangled: NSCam::v3::AppStreamMgr::CallbackHandler::updateStatistics_shutter(unsigned long, unsigned int) */
int _ZN5NSCam2v312AppStreamMgr15CallbackHandler24updateStatistics_shutterEmj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_210StreamTypeEmEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::hardware::camera::device::V3_2::StreamType, unsigned long> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_210StreamTypeEmEEE12do_constructEPvm(void);

/* Symbol: _ZNK5NSCam2v322Camera3ImageStreamInfo11getSensorIdEv */
/* Demangled: NSCam::v3::Camera3ImageStreamInfo::getSensorId() const */
int _ZNK5NSCam2v322Camera3ImageStreamInfo11getSensorIdEv(void);

/* Symbol: _ZNK5NSCam2v322Camera3ImageStreamInfo9getStreamEv */
/* Demangled: NSCam::v3::Camera3ImageStreamInfo::getStream() const */
int _ZNK5NSCam2v322Camera3ImageStreamInfo9getStreamEv(void);

/* Symbol: _ZN5NSCam2v320AppImageStreamBuffer15setReleaseFenceEi */
/* Demangled: NSCam::v3::AppImageStreamBuffer::setReleaseFence(int) */
int _ZN5NSCam2v320AppImageStreamBuffer15setReleaseFenceEi(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr16waitUntilDrainedEl */
/* Demangled: NSCam::v3::AppStreamMgr::waitUntilDrained(long) */
int _ZN5NSCam2v312AppStreamMgr16waitUntilDrainedEl(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr12FrameHandler17prepareReturnMetaERNS1_14CallbackParcelERKN7android2spINS2_8MetaItemEEE */
/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::prepareReturnMeta(NSCam::v3::AppStreamMgr::CallbackParcel&, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::MetaItem> const&) */
int _ZN5NSCam2v312AppStreamMgr12FrameHandler17prepareReturnMetaERNS1_14CallbackParcelERKN7android2spINS2_8MetaItemEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler9ImageItemEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::ImageItem> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler9ImageItemEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZTVN5NSCam2v320AppImageStreamBufferE */
/* Demangled: vtable for NSCam::v3::AppImageStreamBuffer */
extern void* _ZTVN5NSCam2v320AppImageStreamBufferE;

/* Symbol: _ZTVN5NSCam2v312AppStreamMgrE */
/* Demangled: vtable for NSCam::v3::AppStreamMgr */
extern void* _ZTVN5NSCam2v312AppStreamMgrE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler8MetaItemEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::MetaItem> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler8MetaItemEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr15CallbackHandler10threadLoopEv */
/* Demangled: NSCam::v3::AppStreamMgr::CallbackHandler::threadLoop() */
int _ZN5NSCam2v312AppStreamMgr15CallbackHandler10threadLoopEv(void);

/* Symbol: _ZNSt3__112__hash_tableImNS_4hashImEENS_8equal_toImEENS_9allocatorImEEE8__rehashEm */
/* Demangled: std::__1::__hash_table<unsigned long, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<unsigned long> >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableImNS_4hashImEENS_8equal_toImEENS_9allocatorImEEE8__rehashEm(void);

/* Symbol: __atomic_load_16 */
/* Demangled: __atomic_load_16 */
int fn___atomic_load_16(void) __asm__("__atomic_load_16");

/* Symbol: _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel5ErrorEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::v3::AppStreamMgr::CallbackParcel::Error>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel5ErrorEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel5ErrorEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::AppStreamMgr::CallbackParcel::Error>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel5ErrorEE7do_copyEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v317IAppStreamManager7RequestEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::v3::IAppStreamManager::Request>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317IAppStreamManager7RequestEE12do_constructEPvm(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE10do_destroyEPvm */
/* Demangled: android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr12FrameHandler26prepareErrorMetaIfPossibleERNS1_14CallbackParcelERKN7android2spINS2_8MetaItemEEE */
/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::prepareErrorMetaIfPossible(NSCam::v3::AppStreamMgr::CallbackParcel&, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::MetaItem> const&) */
int _ZN5NSCam2v312AppStreamMgr12FrameHandler26prepareErrorMetaIfPossibleERNS1_14CallbackParcelERKN7android2spINS2_8MetaItemEEE(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIjNS_2wpIN5NSCam2v312AppStreamMgr12FrameHandler11FrameParcelEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, android::wp<NSCam::v3::AppStreamMgr::FrameHandler::FrameParcel> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjNS_2wpIN5NSCam2v312AppStreamMgr12FrameHandler11FrameParcelEEEEEEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_214StreamRotationEmEEE10do_compareEPKvSA_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::hardware::camera::device::V3_2::StreamRotation, unsigned long> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_214StreamRotationEmEEE10do_compareEPKvSA_(void);

/* Symbol: _ZN7android2spIN5NSCam17IMetadataProviderEEaSERKS3_ */
/* Demangled: android::sp<NSCam::IMetadataProvider>::operator=(android::sp<NSCam::IMetadataProvider> const&) */
int _ZN7android2spIN5NSCam17IMetadataProviderEEaSERKS3_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler15ImageConfigItemEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::AppStreamMgr::FrameHandler::ImageConfigItem> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler15ImageConfigItemEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK5NSCam2v312AppStreamMgr13ConfigHandler20createMetaStreamInfoEl */
/* Demangled: NSCam::v3::AppStreamMgr::ConfigHandler::createMetaStreamInfo(long) const */
int _ZNK5NSCam2v312AppStreamMgr13ConfigHandler20createMetaStreamInfoEl(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v312AppStreamMgr12BatchHandler13InFlightBatchENS_9allocatorIS5_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::AppStreamMgr::BatchHandler::InFlightBatch, std::__1::allocator<NSCam::v3::AppStreamMgr::BatchHandler::InFlightBatch> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v312AppStreamMgr12BatchHandler13InFlightBatchENS_9allocatorIS5_EEEE;

/* Symbol: _ZNK5NSCam2v322Camera3ImageStreamInfo12getImgFormatEv */
/* Demangled: NSCam::v3::Camera3ImageStreamInfo::getImgFormat() const */
int _ZNK5NSCam2v322Camera3ImageStreamInfo12getImgFormatEv(void);

/* Symbol: _ZNK5NSCam2v322Camera3ImageStreamInfo8isSecureEv */
/* Demangled: NSCam::v3::Camera3ImageStreamInfo::isSecure() const */
int _ZNK5NSCam2v322Camera3ImageStreamInfo8isSecureEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v312AppStreamMgr10CommonInfoENS_9allocatorIS4_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::AppStreamMgr::CommonInfo, std::__1::allocator<NSCam::v3::AppStreamMgr::CommonInfo> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v312AppStreamMgr10CommonInfoENS_9allocatorIS4_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamBuffer> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZN7android2spIN5NSCam2v312AppStreamMgr12FrameHandler9ImageItemEED2Ev */
/* Demangled: android::sp<NSCam::v3::AppStreamMgr::FrameHandler::ImageItem>::~sp() */
int _ZN7android2spIN5NSCam2v312AppStreamMgr12FrameHandler9ImageItemEED2Ev(void);

/* Symbol: _ZNSt3__16vectorIN7android8hardware6camera6device4V3_29NotifyMsgENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_ */
/* Demangled: void std::__1::vector<android::hardware::camera::device::V3_2::NotifyMsg, std::__1::allocator<android::hardware::camera::device::V3_2::NotifyMsg> >::__push_back_slow_path<android::hardware::camera::device::V3_2::NotifyMsg>(android::hardware::camera::device::V3_2::NotifyMsg&&) */
int _ZNSt3__16vectorIN7android8hardware6camera6device4V3_29NotifyMsgENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_(void);

/* Symbol: _ZTCN5NSCam2v325AppErrorImageStreamBufferE0_NS0_13IUsersManagerE */
/* Demangled: construction vtable for NSCam::v3::IUsersManager-in-NSCam::v3::AppErrorImageStreamBuffer */
extern void* _ZTCN5NSCam2v325AppErrorImageStreamBufferE0_NS0_13IUsersManagerE;

/* Symbol: _ZN7android8hardware7details13arrayToStringINS0_8hidl_vecIhEEEENSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKT_m */
/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > android::hardware::details::arrayToString<android::hardware::hidl_vec<unsigned char> >(android::hardware::hidl_vec<unsigned char> const&, unsigned long) */
int _ZN7android8hardware7details13arrayToStringINS0_8hidl_vecIhEEEENSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKT_m(void);

/* Symbol: _ZNK5NSCam2v322Camera3ImageStreamInfo19getPhysicalCameraIdEv */
/* Demangled: NSCam::v3::Camera3ImageStreamInfo::getPhysicalCameraId() const */
int _ZNK5NSCam2v322Camera3ImageStreamInfo19getPhysicalCameraIdEv(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr13ResultHandler10readyToRunEv */
/* Demangled: NSCam::v3::AppStreamMgr::ResultHandler::readyToRun() */
int _ZN5NSCam2v312AppStreamMgr13ResultHandler10readyToRunEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler8MetaItemEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::MetaItem> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler8MetaItemEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_210StreamTypeEmEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::hardware::camera::device::V3_2::StreamType, unsigned long> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_210StreamTypeEmEEE10do_destroyEPvm(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam2v312AppStreamMgr12BatchHandler13InFlightBatchEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::v3::AppStreamMgr::BatchHandler::InFlightBatch>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam2v312AppStreamMgr12BatchHandler13InFlightBatchEED2Ev(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr14RequestHandler14createRequestsERKN7android8hardware8hidl_vecINS4_6camera6device4V3_414CaptureRequestEEERNS3_6VectorINS0_17IAppStreamManager7RequestEEE */
/* Demangled: NSCam::v3::AppStreamMgr::RequestHandler::createRequests(android::hardware::hidl_vec<android::hardware::camera::device::V3_4::CaptureRequest> const&, android::Vector<NSCam::v3::IAppStreamManager::Request>&) */
int _ZN5NSCam2v312AppStreamMgr14RequestHandler14createRequestsERKN7android8hardware8hidl_vecINS4_6camera6device4V3_414CaptureRequestEEERNS3_6VectorINS0_17IAppStreamManager7RequestEEE(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr12FrameHandler11cacheBufferElmRPK13native_handleNSt3__110shared_ptrINS0_20AppImageStreamBuffer21AppStreamBufferHandleEEE */
/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::cacheBuffer(long, unsigned long, native_handle const*&, std::__1::shared_ptr<NSCam::v3::AppImageStreamBuffer::AppStreamBufferHandle>) */
int _ZN5NSCam2v312AppStreamMgr12FrameHandler11cacheBufferElmRPK13native_handleNSt3__110shared_ptrINS0_20AppImageStreamBuffer21AppStreamBufferHandleEEE(void);

/* Symbol: _ZNK7android6VectorINS_7String8EE12do_constructEPvm */
/* Demangled: android::Vector<android::String8>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorINS_7String8EE12do_constructEPvm(void);

/* Symbol: __atomic_load */
/* Demangled: __atomic_load */
int fn___atomic_load(void) __asm__("__atomic_load");

/* Symbol: _ZN5NSCam2v312AppStreamMgr13ConfigHandlerC1ENSt3__110shared_ptrINS1_10CommonInfoEEEN7android2spINS1_12FrameHandlerEEENS8_INS1_12BatchHandlerEEE */
/* Demangled: NSCam::v3::AppStreamMgr::ConfigHandler::ConfigHandler(std::__1::shared_ptr<NSCam::v3::AppStreamMgr::CommonInfo>, android::sp<NSCam::v3::AppStreamMgr::FrameHandler>, android::sp<NSCam::v3::AppStreamMgr::BatchHandler>) */
int _ZN5NSCam2v312AppStreamMgr13ConfigHandlerC1ENSt3__110shared_ptrINS1_10CommonInfoEEEN7android2spINS1_12FrameHandlerEEENS8_INS1_12BatchHandlerEEE(void);

/* Symbol: _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: VTT for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZN5NSCam2v312AppStreamMgr12FrameHandler13updateItemSetERNS2_11MetaItemSetE */
/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::updateItemSet(NSCam::v3::AppStreamMgr::FrameHandler::MetaItemSet&) */
int _ZN5NSCam2v312AppStreamMgr12FrameHandler13updateItemSetERNS2_11MetaItemSetE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler15ImageConfigItemEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::AppStreamMgr::FrameHandler::ImageConfigItem> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler15ImageConfigItemEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: __atomic_store_16 */
/* Demangled: __atomic_store_16 */
int fn___atomic_store_16(void) __asm__("__atomic_store_16");

/* Symbol: _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel8MetaItemEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::AppStreamMgr::CallbackParcel::MetaItem>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel8MetaItemEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamBuffer> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr13ResultHandler11requestExitEv */
/* Demangled: NSCam::v3::AppStreamMgr::ResultHandler::requestExit() */
int _ZN5NSCam2v312AppStreamMgr13ResultHandler11requestExitEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2wpIN5NSCam2v312AppStreamMgr12FrameHandler11FrameParcelEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::wp<NSCam::v3::AppStreamMgr::FrameHandler::FrameParcel> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2wpIN5NSCam2v312AppStreamMgr12FrameHandler11FrameParcelEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZTv0_n40_NK5NSCam2v322Camera3ImageStreamInfo11getStreamIdEv */
/* Demangled: virtual thunk to NSCam::v3::Camera3ImageStreamInfo::getStreamId() const */
int _ZTv0_n40_NK5NSCam2v322Camera3ImageStreamInfo11getStreamIdEv(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr17BufferHandleCacheD1Ev */
/* Demangled: NSCam::v3::AppStreamMgr::BufferHandleCache::~BufferHandleCache() */
int _ZN5NSCam2v312AppStreamMgr17BufferHandleCacheD1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler14PhysicMetaItemEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::PhysicMetaItem> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler14PhysicMetaItemEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler9ImageItemEEEEEE10do_compareEPKvSC_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::ImageItem> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler9ImageItemEEEEEE10do_compareEPKvSC_(void);

/* Symbol: _ZTVN5NSCam2v312AppStreamMgr12FrameHandler10FrameQueueE */
/* Demangled: vtable for NSCam::v3::AppStreamMgr::FrameHandler::FrameQueue */
extern void* _ZTVN5NSCam2v312AppStreamMgr12FrameHandler10FrameQueueE;

/* Symbol: __atomic_store */
/* Demangled: __atomic_store */
int fn___atomic_store(void) __asm__("__atomic_store");

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_214StreamRotationEmEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::hardware::camera::device::V3_2::StreamRotation, unsigned long> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_214StreamRotationEmEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZTCN5NSCam2v325AppErrorImageStreamBufferE0_NS0_14TIStreamBufferINS0_16IImageStreamInfoENS_16IImageBufferHeapEEE */
/* Demangled: construction vtable for NSCam::v3::TIStreamBuffer<NSCam::v3::IImageStreamInfo, NSCam::IImageBufferHeap>-in-NSCam::v3::AppErrorImageStreamBuffer */
extern void* _ZTCN5NSCam2v325AppErrorImageStreamBufferE0_NS0_14TIStreamBufferINS0_16IImageStreamInfoENS_16IImageBufferHeapEEE;

/* Symbol: _ZTVN5NSCam2v319AppMetaStreamBufferE */
/* Demangled: vtable for NSCam::v3::AppMetaStreamBuffer */
extern void* _ZTVN5NSCam2v319AppMetaStreamBufferE;

/* Symbol: _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel8MetaItemEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::AppStreamMgr::CallbackParcel::MetaItem>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel8MetaItemEE7do_copyEPvPKvm(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel5ErrorEEE */
/* Demangled: vtable for android::Vector<NSCam::v3::AppStreamMgr::CallbackParcel::Error> */
extern void* _ZTVN7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel5ErrorEEE;

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v312AppStreamMgr10ResultItemEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::v3::AppStreamMgr::ResultItem> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v312AppStreamMgr10ResultItemEEEEEEE;

/* Symbol: _ZTCN5NSCam2v322Camera3ImageStreamInfoE0_NS0_11IStreamInfoE */
/* Demangled: construction vtable for NSCam::v3::IStreamInfo-in-NSCam::v3::Camera3ImageStreamInfo */
extern void* _ZTCN5NSCam2v322Camera3ImageStreamInfoE0_NS0_11IStreamInfoE;

/* Symbol: _ZNK5NSCam2v320AppImageStreamBuffer15getReleaseFenceEv */
/* Demangled: NSCam::v3::AppImageStreamBuffer::getReleaseFence() const */
int _ZNK5NSCam2v320AppImageStreamBuffer15getReleaseFenceEv(void);

/* Symbol: _ZN7android8hardware8toStringINS0_6camera6device4V3_49HalStreamEEENSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKNS0_8hidl_vecIT_EE */
/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > android::hardware::toString<android::hardware::camera::device::V3_4::HalStream>(android::hardware::hidl_vec<android::hardware::camera::device::V3_4::HalStream> const&) */
int _ZN7android8hardware8toStringINS0_6camera6device4V3_49HalStreamEEENSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKNS0_8hidl_vecIT_EE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel14PhysicMetaItemEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::AppStreamMgr::CallbackParcel::PhysicMetaItem>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel14PhysicMetaItemEE8do_splatEPvPKvm(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN7android8hardware12MessageQueueIhLNS2_8MQFlavorE1EEENS_9allocatorIS5_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>, std::__1::allocator<android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1> > >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN7android8hardware12MessageQueueIhLNS2_8MQFlavorE1EEENS_9allocatorIS5_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN5NSCam2v320AppImageStreamBufferD2Ev */
/* Demangled: NSCam::v3::AppImageStreamBuffer::~AppImageStreamBuffer() */
int _ZN5NSCam2v320AppImageStreamBufferD2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam2v319AppMetaStreamBufferC2EN7android2spINS0_15IMetaStreamInfoEEEPNS0_13IUsersManagerE */
/* Demangled: NSCam::v3::AppMetaStreamBuffer::AppMetaStreamBuffer(android::sp<NSCam::v3::IMetaStreamInfo>, NSCam::v3::IUsersManager*) */
int _ZN5NSCam2v319AppMetaStreamBufferC2EN7android2spINS0_15IMetaStreamInfoEEEPNS0_13IUsersManagerE(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr12updateResultERKNS0_17IAppStreamManager18UpdateResultParamsE */
/* Demangled: NSCam::v3::AppStreamMgr::updateResult(NSCam::v3::IAppStreamManager::UpdateResultParams const&) */
int _ZN5NSCam2v312AppStreamMgr12updateResultERKNS0_17IAppStreamManager18UpdateResultParamsE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v312AppStreamMgr10ResultItemEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::v3::AppStreamMgr::ResultItem> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v312AppStreamMgr10ResultItemEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE7do_copyEPvPKvm */
/* Demangled: android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN5NSCam2v319AppMetaStreamBuffer9AllocatorclERKNS_9IMetadataE */
/* Demangled: NSCam::v3::AppMetaStreamBuffer::Allocator::operator()(NSCam::IMetadata const&) */
int _ZN5NSCam2v319AppMetaStreamBuffer9AllocatorclERKNS_9IMetadataE(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEEE */
/* Demangled: vtable for android::Vector<NSCam::GrallocStaticInfo::Plane> */
extern void* _ZTVN7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEEE;

/* Symbol: _ZN5NSCam2v312AppStreamMgr12BatchHandler7destroyEv */
/* Demangled: NSCam::v3::AppStreamMgr::BatchHandler::destroy() */
int _ZN5NSCam2v312AppStreamMgr12BatchHandler7destroyEv(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr17removeBufferCacheERKN7android8hardware8hidl_vecINS3_6camera6device4V3_211BufferCacheEEE */
/* Demangled: NSCam::v3::AppStreamMgr::removeBufferCache(android::hardware::hidl_vec<android::hardware::camera::device::V3_2::BufferCache> const&) */
int _ZN5NSCam2v312AppStreamMgr17removeBufferCacheERKN7android8hardware8hidl_vecINS3_6camera6device4V3_211BufferCacheEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler9ImageItemEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::ImageItem> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler9ImageItemEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIiE10do_destroyEPvm */
/* Demangled: android::Vector<int>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIiE10do_destroyEPvm(void);

/* Symbol: _ZTVN5NSCam2v320AppImageStreamBuffer9AllocatorE */
/* Demangled: vtable for NSCam::v3::AppImageStreamBuffer::Allocator */
extern void* _ZTVN5NSCam2v320AppImageStreamBuffer9AllocatorE;

/* Symbol: _ZN7android2spIN5NSCam2v317IAppStreamManager14PhysicalResultEED2Ev */
/* Demangled: android::sp<NSCam::v3::IAppStreamManager::PhysicalResult>::~sp() */
int _ZN7android2spIN5NSCam2v317IAppStreamManager14PhysicalResultEED2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler8MetaItemEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::MetaItem> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler8MetaItemEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZTTN5NSCam2v322Camera3ImageStreamInfoE */
/* Demangled: VTT for NSCam::v3::Camera3ImageStreamInfo */
extern void* _ZTTN5NSCam2v322Camera3ImageStreamInfoE;

/* Symbol: _ZTCN5NSCam2v325AppErrorImageStreamBufferE0_NS0_13IStreamBufferE */
/* Demangled: construction vtable for NSCam::v3::IStreamBuffer-in-NSCam::v3::AppErrorImageStreamBuffer */
extern void* _ZTCN5NSCam2v325AppErrorImageStreamBufferE0_NS0_13IStreamBufferE;

/* Symbol: _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel5ErrorEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::AppStreamMgr::CallbackParcel::Error>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel5ErrorEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel9ImageItemEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::v3::AppStreamMgr::CallbackParcel::ImageItem>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel9ImageItemEE10do_destroyEPvm(void);

/* Symbol: _ZN7android2spIN5NSCam23IGraphicImageBufferHeapEED2Ev */
/* Demangled: android::sp<NSCam::IGraphicImageBufferHeap>::~sp() */
int _ZN7android2spIN5NSCam23IGraphicImageBufferHeapEED2Ev(void);

/* Symbol: _ZTCN5NSCam2v312AppStreamMgrE0_NS0_17IAppStreamManagerE */
/* Demangled: construction vtable for NSCam::v3::IAppStreamManager-in-NSCam::v3::AppStreamMgr */
extern void* _ZTCN5NSCam2v312AppStreamMgrE0_NS0_17IAppStreamManagerE;

/* Symbol: _ZN5NSCam2v312AppStreamMgr12FrameHandler13updateItemSetERNS2_12ImageItemSetE */
/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::updateItemSet(NSCam::v3::AppStreamMgr::FrameHandler::ImageItemSet&) */
int _ZN5NSCam2v312AppStreamMgr12FrameHandler13updateItemSetERNS2_12ImageItemSetE(void);

/* Symbol: _ZN7android2spIN5NSCam2v312AppStreamMgr12FrameHandler8MetaItemEED2Ev */
/* Demangled: android::sp<NSCam::v3::AppStreamMgr::FrameHandler::MetaItem>::~sp() */
int _ZN7android2spIN5NSCam2v312AppStreamMgr12FrameHandler8MetaItemEED2Ev(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr15CallbackHandler37updateStatistics_finalPartialMetadataEbj */
/* Demangled: NSCam::v3::AppStreamMgr::CallbackHandler::updateStatistics_finalPartialMetadata(bool, unsigned int) */
int _ZN5NSCam2v312AppStreamMgr15CallbackHandler37updateStatistics_finalPartialMetadataEbj(void);

/* Symbol: _ZNK5NSCam2v322Camera3ImageStreamInfo13getSecureInfoEv */
/* Demangled: NSCam::v3::Camera3ImageStreamInfo::getSecureInfo() const */
int _ZNK5NSCam2v322Camera3ImageStreamInfo13getSecureInfoEv(void);

/* Symbol: _ZTCN5NSCam2v319AppMetaStreamBufferE8_NS0_5Utils15StreamBufferImpE */
/* Demangled: construction vtable for NSCam::v3::Utils::StreamBufferImp-in-NSCam::v3::AppMetaStreamBuffer */
extern void* _ZTCN5NSCam2v319AppMetaStreamBufferE8_NS0_5Utils15StreamBufferImpE;

/* Symbol: _ZTv0_n336_NK5NSCam2v320AppImageStreamBuffer8toStringEv */
/* Demangled: virtual thunk to NSCam::v3::AppImageStreamBuffer::toString() const */
int _ZTv0_n336_NK5NSCam2v320AppImageStreamBuffer8toStringEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamBuffer> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZTTN5NSCam2v312AppStreamMgr13ResultHandlerE */
/* Demangled: VTT for NSCam::v3::AppStreamMgr::ResultHandler */
extern void* _ZTTN5NSCam2v312AppStreamMgr13ResultHandlerE;

/* Symbol: _ZTVN5NSCam2v312AppStreamMgr13ResultHandlerE */
/* Demangled: vtable for NSCam::v3::AppStreamMgr::ResultHandler */
extern void* _ZTVN5NSCam2v312AppStreamMgr13ResultHandlerE;

/* Symbol: _ZN5NSCam2v312AppStreamMgr12FrameHandler14updateCallbackERNSt3__14listINS1_14CallbackParcelENS3_9allocatorIS5_EEEE */
/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::updateCallback(std::__1::list<NSCam::v3::AppStreamMgr::CallbackParcel, std::__1::allocator<NSCam::v3::AppStreamMgr::CallbackParcel> >&) */
int _ZN5NSCam2v312AppStreamMgr12FrameHandler14updateCallbackERNSt3__14listINS1_14CallbackParcelENS3_9allocatorIS5_EEEE(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr12FrameHandler16setOperationModeEj */
/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::setOperationMode(unsigned int) */
int _ZN5NSCam2v312AppStreamMgr12FrameHandler16setOperationModeEj(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler15ImageConfigItemEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<long, NSCam::v3::AppStreamMgr::FrameHandler::ImageConfigItem> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler15ImageConfigItemEEEEE;

/* Symbol: _ZNK7android6VectorINS_7String8EE7do_copyEPvPKvm */
/* Demangled: android::Vector<android::String8>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_7String8EE7do_copyEPvPKvm(void);

/* Symbol: _ZN5NSCam2v320AppImageStreamBuffer15setAcquireFenceEi */
/* Demangled: NSCam::v3::AppImageStreamBuffer::setAcquireFence(int) */
int _ZN5NSCam2v320AppImageStreamBuffer15setAcquireFenceEi(void);

/* Symbol: _ZTTN5NSCam2v319AppMetaStreamBufferE */
/* Demangled: VTT for NSCam::v3::AppMetaStreamBuffer */
extern void* _ZTTN5NSCam2v319AppMetaStreamBufferE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler15ImageConfigItemEEEE10do_compareEPKvSA_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::AppStreamMgr::FrameHandler::ImageConfigItem> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler15ImageConfigItemEEEE10do_compareEPKvSA_(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr17BufferHandleCacheC2ENSt3__110shared_ptrINS1_10CommonInfoEEEl */
/* Demangled: NSCam::v3::AppStreamMgr::BufferHandleCache::BufferHandleCache(std::__1::shared_ptr<NSCam::v3::AppStreamMgr::CommonInfo>, long) */
int _ZN5NSCam2v312AppStreamMgr17BufferHandleCacheC2ENSt3__110shared_ptrINS1_10CommonInfoEEEl(void);

/* Symbol: _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE4readEPhm */
/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::read(unsigned char*, unsigned long) */
int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE4readEPhm(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void);

/* Symbol: _ZNK5NSCam2v312AppStreamMgr12FrameHandler19getConfigMetaStreamEm */
/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::getConfigMetaStream(unsigned long) const */
int _ZNK5NSCam2v312AppStreamMgr12FrameHandler19getConfigMetaStreamEm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_210StreamTypeEmEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::hardware::camera::device::V3_2::StreamType, unsigned long> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_210StreamTypeEmEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZTVN5NSCam2v312AppStreamMgr13ConfigHandlerE */
/* Demangled: vtable for NSCam::v3::AppStreamMgr::ConfigHandler */
extern void* _ZTVN5NSCam2v312AppStreamMgr13ConfigHandlerE;

/* Symbol: _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel9ImageItemEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::AppStreamMgr::CallbackParcel::ImageItem>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel9ImageItemEE7do_copyEPvPKvm(void);

/* Symbol: _ZN5NSCam2v319AppMetaStreamBuffer9AllocatorC2EPNS0_15IMetaStreamInfoE */
/* Demangled: NSCam::v3::AppMetaStreamBuffer::Allocator::Allocator(NSCam::v3::IMetaStreamInfo*) */
int _ZN5NSCam2v319AppMetaStreamBuffer9AllocatorC2EPNS0_15IMetaStreamInfoE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2wpIN5NSCam2v312AppStreamMgr12FrameHandler11FrameParcelEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::wp<NSCam::v3::AppStreamMgr::FrameHandler::FrameParcel> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2wpIN5NSCam2v312AppStreamMgr12FrameHandler11FrameParcelEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNSt3__16vectorIN7android8hardware6camera6device4V3_413CaptureResultENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_ */
/* Demangled: void std::__1::vector<android::hardware::camera::device::V3_4::CaptureResult, std::__1::allocator<android::hardware::camera::device::V3_4::CaptureResult> >::__push_back_slow_path<android::hardware::camera::device::V3_4::CaptureResult const&>(android::hardware::camera::device::V3_4::CaptureResult const&) */
int _ZNSt3__16vectorIN7android8hardware6camera6device4V3_413CaptureResultENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam2v320AppImageStreamBuffer21AppStreamBufferHandleEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::v3::AppImageStreamBuffer::AppStreamBufferHandle>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam2v320AppImageStreamBuffer21AppStreamBufferHandleEED2Ev(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgrC1ERKNS0_17IAppStreamManager12CreationInfoE */
/* Demangled: NSCam::v3::AppStreamMgr::AppStreamMgr(NSCam::v3::IAppStreamManager::CreationInfo const&) */
int _ZN5NSCam2v312AppStreamMgrC1ERKNS0_17IAppStreamManager12CreationInfoE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler14PhysicMetaItemEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::PhysicMetaItem> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler14PhysicMetaItemEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_210StreamTypeEmEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::hardware::camera::device::V3_2::StreamType, unsigned long> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_210StreamTypeEmEEE7do_copyEPvPKvm(void);

/* Symbol: __atomic_store_1 */
/* Demangled: __atomic_store_1 */
int fn___atomic_store_1(void) __asm__("__atomic_store_1");

/* Symbol: _ZNK5NSCam2v325AppErrorImageStreamBuffer15getReleaseFenceEv */
/* Demangled: NSCam::v3::AppErrorImageStreamBuffer::getReleaseFence() const */
int _ZNK5NSCam2v325AppErrorImageStreamBuffer15getReleaseFenceEv(void);

/* Symbol: _ZTCN5NSCam2v319AppMetaStreamBufferE0_NS0_14TIStreamBufferINS0_15IMetaStreamInfoENS_9IMetadataEEE */
/* Demangled: construction vtable for NSCam::v3::TIStreamBuffer<NSCam::v3::IMetaStreamInfo, NSCam::IMetadata>-in-NSCam::v3::AppMetaStreamBuffer */
extern void* _ZTCN5NSCam2v319AppMetaStreamBufferE0_NS0_14TIStreamBufferINS0_15IMetaStreamInfoENS_9IMetadataEEE;

/* Symbol: _ZNK5NSCam2v312AppStreamMgr12FrameHandler12isReturnableERKN7android2spINS2_8MetaItemEEE */
/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::isReturnable(android::sp<NSCam::v3::AppStreamMgr::FrameHandler::MetaItem> const&) const */
int _ZNK5NSCam2v312AppStreamMgr12FrameHandler12isReturnableERKN7android2spINS2_8MetaItemEEE(void);

/* Symbol: _ZTISt11logic_error */
/* Demangled: typeinfo for std::logic_error */
extern void* _ZTISt11logic_error;

/* Symbol: _ZN5NSCam2v312AppStreamMgr12BatchHandler14updateCallbackENSt3__14listINS1_14CallbackParcelENS3_9allocatorIS5_EEEERS8_ */
/* Demangled: NSCam::v3::AppStreamMgr::BatchHandler::updateCallback(std::__1::list<NSCam::v3::AppStreamMgr::CallbackParcel, std::__1::allocator<NSCam::v3::AppStreamMgr::CallbackParcel> >, std::__1::list<NSCam::v3::AppStreamMgr::CallbackParcel, std::__1::allocator<NSCam::v3::AppStreamMgr::CallbackParcel> >&) */
int _ZN5NSCam2v312AppStreamMgr12BatchHandler14updateCallbackENSt3__14listINS1_14CallbackParcelENS3_9allocatorIS5_EEEERS8_(void);

/* Symbol: __atomic_store_2 */
/* Demangled: __atomic_store_2 */
int fn___atomic_store_2(void) __asm__("__atomic_store_2");

/* Symbol: _ZTVN5NSCam2v312AppStreamMgr10MyDebuggeeE */
/* Demangled: vtable for NSCam::v3::AppStreamMgr::MyDebuggee */
extern void* _ZTVN5NSCam2v312AppStreamMgr10MyDebuggeeE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler9ImageItemEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::ImageItem> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler9ImageItemEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZTv0_n24_N5NSCam2v320AppImageStreamBufferD0Ev */
/* Demangled: virtual thunk to NSCam::v3::AppImageStreamBuffer::~AppImageStreamBuffer() */
int _ZTv0_n24_N5NSCam2v320AppImageStreamBufferD0Ev(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr29getCaptureResultMetadataQueueEv */
/* Demangled: NSCam::v3::AppStreamMgr::getCaptureResultMetadataQueue() */
int _ZN5NSCam2v312AppStreamMgr29getCaptureResultMetadataQueueEv(void);

/* Symbol: _ZN7android2spINS_8hardware6camera6device4V3_421ICameraDeviceCallbackEEaSERKS6_ */
/* Demangled: android::sp<android::hardware::camera::device::V3_4::ICameraDeviceCallback>::operator=(android::sp<android::hardware::camera::device::V3_4::ICameraDeviceCallback> const&) */
int _ZN7android2spINS_8hardware6camera6device4V3_421ICameraDeviceCallbackEEaSERKS6_(void);

/* Symbol: _ZN7android8hardware7details13arrayToStringINS0_8hidl_vecINS0_6camera6device4V3_49HalStreamEEEEENSt3__112basic_stringIcNS9_11char_traitsIcEENS9_9allocatorIcEEEERKT_m */
/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > android::hardware::details::arrayToString<android::hardware::hidl_vec<android::hardware::camera::device::V3_4::HalStream> >(android::hardware::hidl_vec<android::hardware::camera::device::V3_4::HalStream> const&, unsigned long) */
int _ZN7android8hardware7details13arrayToStringINS0_8hidl_vecINS0_6camera6device4V3_49HalStreamEEEEENSt3__112basic_stringIcNS9_11char_traitsIcEENS9_9allocatorIcEEEERKT_m(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v312AppStreamMgr10MyDebuggeeENS_9allocatorIS4_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::AppStreamMgr::MyDebuggee, std::__1::allocator<NSCam::v3::AppStreamMgr::MyDebuggee> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v312AppStreamMgr10MyDebuggeeENS_9allocatorIS4_EEEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v317IAppStreamManager7RequestEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::IAppStreamManager::Request>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317IAppStreamManager7RequestEE7do_copyEPvPKvm(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr13ResultHandler7destroyEv */
/* Demangled: NSCam::v3::AppStreamMgr::ResultHandler::destroy() */
int _ZN5NSCam2v312AppStreamMgr13ResultHandler7destroyEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler8MetaItemEEEEEE10do_compareEPKvSC_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::MetaItem> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler8MetaItemEEEEEE10do_compareEPKvSC_(void);

/* Symbol: __atomic_store_4 */
/* Demangled: __atomic_store_4 */
int fn___atomic_store_4(void) __asm__("__atomic_store_4");

/* Symbol: _ZNK5NSCam2v322Camera3ImageStreamInfo12getTransformEv */
/* Demangled: NSCam::v3::Camera3ImageStreamInfo::getTransform() const */
int _ZNK5NSCam2v322Camera3ImageStreamInfo12getTransformEv(void);

/* Symbol: _ZNK5NSCam2v312AppStreamMgr14RequestHandler19convertStreamBufferERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERKN7android8hardware6camera6device4V3_212StreamBufferERNSC_2spINS0_20AppImageStreamBufferEEE */
/* Demangled: NSCam::v3::AppStreamMgr::RequestHandler::convertStreamBuffer(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::hardware::camera::device::V3_2::StreamBuffer const&, android::sp<NSCam::v3::AppImageStreamBuffer>&) const */
int _ZNK5NSCam2v312AppStreamMgr14RequestHandler19convertStreamBufferERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERKN7android8hardware6camera6device4V3_212StreamBufferERNSC_2spINS0_20AppImageStreamBufferEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> > > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler8MetaItemEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::MetaItem> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler8MetaItemEEEEEEE;

/* Symbol: _ZNSt3__16vectorImNS_9allocatorImEEEC2ERKS3_ */
/* Demangled: std::__1::vector<unsigned long, std::__1::allocator<unsigned long> >::vector(std::__1::vector<unsigned long, std::__1::allocator<unsigned long> > const&) */
int _ZNSt3__16vectorImNS_9allocatorImEEEC2ERKS3_(void);

/* Symbol: _ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev */
/* Demangled: std::__1::__vector_base<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::~__vector_base() */
int _ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamBuffer> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> > > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v312AppStreamMgr10ResultItemEEEEEE10do_compareEPKvSB_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::v3::AppStreamMgr::ResultItem> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v312AppStreamMgr10ResultItemEEEEEE10do_compareEPKvSB_(void);

/* Symbol: _ZNK7android6VectorINS_7String8EE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<android::String8>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_7String8EE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeImN5NSCam2v312AppStreamMgr17BufferHandleCache12BufferHandleEEENS_22__unordered_map_hasherImS7_NS_4hashImEELb1EEENS_21__unordered_map_equalImS7_NS_8equal_toImEELb1EEENS_9allocatorIS7_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long, NSCam::v3::AppStreamMgr::BufferHandleCache::BufferHandle>, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, NSCam::v3::AppStreamMgr::BufferHandleCache::BufferHandle>, std::__1::hash<unsigned long>, true>, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, NSCam::v3::AppStreamMgr::BufferHandleCache::BufferHandle>, std::__1::equal_to<unsigned long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long, NSCam::v3::AppStreamMgr::BufferHandleCache::BufferHandle> > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeImN5NSCam2v312AppStreamMgr17BufferHandleCache12BufferHandleEEENS_22__unordered_map_hasherImS7_NS_4hashImEELb1EEENS_21__unordered_map_equalImS7_NS_8equal_toImEELb1EEENS_9allocatorIS7_EEE6rehashEm(void);

/* Symbol: _ZNK5NSCam2v322Camera3ImageStreamInfo17getAllocBufPlanesEv */
/* Demangled: NSCam::v3::Camera3ImageStreamInfo::getAllocBufPlanes() const */
int _ZNK5NSCam2v322Camera3ImageStreamInfo17getAllocBufPlanesEv(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam2v317IAppStreamManager7RequestEEE */
/* Demangled: vtable for android::Vector<NSCam::v3::IAppStreamManager::Request> */
extern void* _ZTVN7android6VectorIN5NSCam2v317IAppStreamManager7RequestEEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler14PhysicMetaItemEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::PhysicMetaItem> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler14PhysicMetaItemEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr12BatchHandler4pushERNSt3__14listINS1_14CallbackParcelENS3_9allocatorIS5_EEEE */
/* Demangled: NSCam::v3::AppStreamMgr::BatchHandler::push(std::__1::list<NSCam::v3::AppStreamMgr::CallbackParcel, std::__1::allocator<NSCam::v3::AppStreamMgr::CallbackParcel> >&) */
int _ZN5NSCam2v312AppStreamMgr12BatchHandler4pushERNSt3__14listINS1_14CallbackParcelENS3_9allocatorIS5_EEEE(void);

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIRKjEEvOT_ */
/* Demangled: void std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__push_back_slow_path<unsigned int const&>(unsigned int const&) */
int _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIRKjEEvOT_(void);

/* Symbol: _ZNK7android6VectorIiE8do_splatEPvPKvm */
/* Demangled: android::Vector<int>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIiE8do_splatEPvPKvm(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr12FrameHandler9dumpStateERN7android7PrinterERKNSt3__16vectorINS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEENSB_ISD_EEEE */
/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::dumpState(android::Printer&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
int _ZN5NSCam2v312AppStreamMgr12FrameHandler9dumpStateERN7android7PrinterERKNSt3__16vectorINS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEENSB_ISD_EEEE(void);

/* Symbol: _ZNSt3__16vectorIP15camera_metadataNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_ */
/* Demangled: void std::__1::vector<camera_metadata*, std::__1::allocator<camera_metadata*> >::__push_back_slow_path<camera_metadata* const&>(camera_metadata* const&) */
int _ZNSt3__16vectorIP15camera_metadataNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void);

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIjEEvOT_ */
/* Demangled: void std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__push_back_slow_path<unsigned int>(unsigned int&&) */
int _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIjEEvOT_(void);

/* Symbol: __atomic_store_8 */
/* Demangled: __atomic_store_8 */
int fn___atomic_store_8(void) __asm__("__atomic_store_8");

/* Symbol: _ZN5NSCam2v312AppStreamMgr10initializeEv */
/* Demangled: NSCam::v3::AppStreamMgr::initialize() */
int _ZN5NSCam2v312AppStreamMgr10initializeEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel9ImageItemEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::AppStreamMgr::CallbackParcel::ImageItem>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel9ImageItemEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK5NSCam2v312AppStreamMgr12FrameHandler12isReturnableERKN7android2spINS2_9ImageItemEEE */
/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::isReturnable(android::sp<NSCam::v3::AppStreamMgr::FrameHandler::ImageItem> const&) const */
int _ZNK5NSCam2v312AppStreamMgr12FrameHandler12isReturnableERKN7android2spINS2_9ImageItemEEE(void);

/* Symbol: _ZNSt3__112__hash_tableIlNS_4hashIlEENS_8equal_toIlEENS_9allocatorIlEEE25__emplace_unique_key_argsIlJRKlEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIlPvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<long, void*>*>, bool> std::__1::__hash_table<long, std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<long> >::__emplace_unique_key_args<long, long const&>(long const&, long const&) */
int _ZNSt3__112__hash_tableIlNS_4hashIlEENS_8equal_toIlEENS_9allocatorIlEEE25__emplace_unique_key_argsIlJRKlEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIlPvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZNK5NSCam2v322Camera3ImageStreamInfo13getStreamTypeEv */
/* Demangled: NSCam::v3::Camera3ImageStreamInfo::getStreamType() const */
int _ZNK5NSCam2v322Camera3ImageStreamInfo13getStreamTypeEv(void);

/* Symbol: _ZN5NSCam2v319AppMetaStreamBufferC2EN7android2spINS0_15IMetaStreamInfoEEERKNS_9IMetadataEPNS0_13IUsersManagerE */
/* Demangled: NSCam::v3::AppMetaStreamBuffer::AppMetaStreamBuffer(android::sp<NSCam::v3::IMetaStreamInfo>, NSCam::IMetadata const&, NSCam::v3::IUsersManager*) */
int _ZN5NSCam2v319AppMetaStreamBufferC2EN7android2spINS0_15IMetaStreamInfoEEERKNS_9IMetadataEPNS0_13IUsersManagerE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2wpIN5NSCam2v312AppStreamMgr12FrameHandler11FrameParcelEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::wp<NSCam::v3::AppStreamMgr::FrameHandler::FrameParcel> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2wpIN5NSCam2v312AppStreamMgr12FrameHandler11FrameParcelEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZTCN5NSCam2v320AppImageStreamBufferE0_NS0_13IUsersManagerE */
/* Demangled: construction vtable for NSCam::v3::IUsersManager-in-NSCam::v3::AppImageStreamBuffer */
extern void* _ZTCN5NSCam2v320AppImageStreamBufferE0_NS0_13IUsersManagerE;

/* Symbol: _ZN5NSCam2v312AppStreamMgr21beginConfigureStreamsERKN7android8hardware6camera6device4V3_419StreamConfigurationERNS6_22HalStreamConfigurationERNS0_17IAppStreamManager16ConfigAppStreamsE */
/* Demangled: NSCam::v3::AppStreamMgr::beginConfigureStreams(android::hardware::camera::device::V3_4::StreamConfiguration const&, android::hardware::camera::device::V3_4::HalStreamConfiguration&, NSCam::v3::IAppStreamManager::ConfigAppStreams&) */
int _ZN5NSCam2v312AppStreamMgr21beginConfigureStreamsERKN7android8hardware6camera6device4V3_419StreamConfigurationERNS6_22HalStreamConfigurationERNS0_17IAppStreamManager16ConfigAppStreamsE(void);

/* Symbol: _ZTSSt9exception */
/* Demangled: typeinfo name for std::exception */
extern void* _ZTSSt9exception;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE10do_compareEPKvSA_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE10do_compareEPKvSA_(void);

/* Symbol: _ZN7android2spIN5NSCam2v322Camera3ImageStreamInfoEED2Ev */
/* Demangled: android::sp<NSCam::v3::Camera3ImageStreamInfo>::~sp() */
int _ZN7android2spIN5NSCam2v322Camera3ImageStreamInfoEED2Ev(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel8MetaItemEEE */
/* Demangled: vtable for android::Vector<NSCam::v3::AppStreamMgr::CallbackParcel::MetaItem> */
extern void* _ZTVN7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel8MetaItemEEE;

/* Symbol: _ZNK7android6VectorIN5NSCam2v317IAppStreamManager7RequestEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::IAppStreamManager::Request>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317IAppStreamManager7RequestEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorINS_7String8EE10do_destroyEPvm */
/* Demangled: android::Vector<android::String8>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorINS_7String8EE10do_destroyEPvm(void);

/* Symbol: _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EED2Ev */
/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::~MessageQueue() */
int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EED2Ev(void);

/* Symbol: _ZN7android2spIN5NSCam2v317IMetaStreamBufferEED2Ev */
/* Demangled: android::sp<NSCam::v3::IMetaStreamBuffer>::~sp() */
int _ZN7android2spIN5NSCam2v317IMetaStreamBufferEED2Ev(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr12FrameHandler21registerStreamBuffersERKN7android11KeyedVectorIlNS3_2spINS0_18IImageStreamBufferEEEEENS5_INS2_11FrameParcelEEEPNS2_12ImageItemSetE */
/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::registerStreamBuffers(android::KeyedVector<long, android::sp<NSCam::v3::IImageStreamBuffer> > const&, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::FrameParcel>, NSCam::v3::AppStreamMgr::FrameHandler::ImageItemSet*) */
int _ZN5NSCam2v312AppStreamMgr12FrameHandler21registerStreamBuffersERKN7android11KeyedVectorIlNS3_2spINS0_18IImageStreamBufferEEEEENS5_INS2_11FrameParcelEEEPNS2_12ImageItemSetE(void);

/* Symbol: _ZNK5NSCam2v312AppStreamMgr12FrameHandler20getConfigImageStreamEl */
/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::getConfigImageStream(long) const */
int _ZNK5NSCam2v312AppStreamMgr12FrameHandler20getConfigImageStreamEl(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler14MetaConfigItemEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::AppStreamMgr::FrameHandler::MetaConfigItem> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler14MetaConfigItemEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZTVN7android6VectorINS_7String8EEE */
/* Demangled: vtable for android::Vector<android::String8> */
extern void* _ZTVN7android6VectorINS_7String8EEE;

/* Symbol: _ZN5NSCam2v312AppStreamMgr12BatchHandler18resetBatchStreamIdEv */
/* Demangled: NSCam::v3::AppStreamMgr::BatchHandler::resetBatchStreamId() */
int _ZN5NSCam2v312AppStreamMgr12BatchHandler18resetBatchStreamIdEv(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr12BatchHandler28checkStreamUsageforBatchModeEN7android2spINS0_22Camera3ImageStreamInfoEEE */
/* Demangled: NSCam::v3::AppStreamMgr::BatchHandler::checkStreamUsageforBatchMode(android::sp<NSCam::v3::Camera3ImageStreamInfo>) */
int _ZN5NSCam2v312AppStreamMgr12BatchHandler28checkStreamUsageforBatchModeEN7android2spINS0_22Camera3ImageStreamInfoEEE(void);

/* Symbol: _ZN5NSCam2v325AppErrorImageStreamBuffer15setAcquireFenceEi */
/* Demangled: NSCam::v3::AppErrorImageStreamBuffer::setAcquireFence(int) */
int _ZN5NSCam2v325AppErrorImageStreamBuffer15setAcquireFenceEi(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v320AppImageStreamBuffer21AppStreamBufferHandleENS_9allocatorIS4_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::AppImageStreamBuffer::AppStreamBufferHandle, std::__1::allocator<NSCam::v3::AppImageStreamBuffer::AppStreamBufferHandle> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v320AppImageStreamBuffer21AppStreamBufferHandleENS_9allocatorIS4_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZTv0_n256_N5NSCam2v320AppImageStreamBufferD1Ev */
/* Demangled: virtual thunk to NSCam::v3::AppImageStreamBuffer::~AppImageStreamBuffer() */
int _ZTv0_n256_N5NSCam2v320AppImageStreamBufferD1Ev(void);

/* Symbol: _ZN7android2spIN5NSCam2v312AppStreamMgr13ConfigHandlerEED2Ev */
/* Demangled: android::sp<NSCam::v3::AppStreamMgr::ConfigHandler>::~sp() */
int _ZN7android2spIN5NSCam2v312AppStreamMgr13ConfigHandlerEED2Ev(void);

/* Symbol: _ZTCN5NSCam2v312AppStreamMgr15CallbackHandlerE0_N7android6ThreadE */
/* Demangled: construction vtable for android::Thread-in-NSCam::v3::AppStreamMgr::CallbackHandler */
extern void* _ZTCN5NSCam2v312AppStreamMgr15CallbackHandlerE0_N7android6ThreadE;

/* Symbol: _ZNK5NSCam2v322Camera3ImageStreamInfo10getImgSizeEv */
/* Demangled: NSCam::v3::Camera3ImageStreamInfo::getImgSize() const */
int _ZNK5NSCam2v322Camera3ImageStreamInfo10getImgSizeEv(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEEC2ERKS5_ */
/* Demangled: std::__1::vector<NSCam::BufPlane, std::__1::allocator<NSCam::BufPlane> >::vector(std::__1::vector<NSCam::BufPlane, std::__1::allocator<NSCam::BufPlane> > const&) */
int _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEEC2ERKS5_(void);

/* Symbol: _ZTCN5NSCam2v325AppErrorImageStreamBufferE0_NS0_18IImageStreamBufferE */
/* Demangled: construction vtable for NSCam::v3::IImageStreamBuffer-in-NSCam::v3::AppErrorImageStreamBuffer */
extern void* _ZTCN5NSCam2v325AppErrorImageStreamBufferE0_NS0_18IImageStreamBufferE;

/* Symbol: _ZTTN5NSCam2v325AppErrorImageStreamBufferE */
/* Demangled: VTT for NSCam::v3::AppErrorImageStreamBuffer */
extern void* _ZTTN5NSCam2v325AppErrorImageStreamBufferE;

/* Symbol: _ZN7android8hardware8toStringIhEENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEERKNS0_8hidl_vecIT_EE */
/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > android::hardware::toString<unsigned char>(android::hardware::hidl_vec<unsigned char> const&) */
int _ZN7android8hardware8toStringIhEENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEERKNS0_8hidl_vecIT_EE(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr14RequestHandlerC2ENSt3__110shared_ptrINS1_10CommonInfoEEENS4_IN7android8hardware12MessageQueueIhLNS8_8MQFlavorE1EEEEENS7_2spINS1_12FrameHandlerEEENSD_INS1_12BatchHandlerEEE */
/* Demangled: NSCam::v3::AppStreamMgr::RequestHandler::RequestHandler(std::__1::shared_ptr<NSCam::v3::AppStreamMgr::CommonInfo>, std::__1::shared_ptr<android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1> >, android::sp<NSCam::v3::AppStreamMgr::FrameHandler>, android::sp<NSCam::v3::AppStreamMgr::BatchHandler>) */
int _ZN5NSCam2v312AppStreamMgr14RequestHandlerC2ENSt3__110shared_ptrINS1_10CommonInfoEEENS4_IN7android8hardware12MessageQueueIhLNS8_8MQFlavorE1EEEEENS7_2spINS1_12FrameHandlerEEENSD_INS1_12BatchHandlerEEE(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr12FrameHandler7destroyEv */
/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::destroy() */
int _ZN5NSCam2v312AppStreamMgr12FrameHandler7destroyEv(void);

/* Symbol: _ZNK5NSCam2v322Camera3ImageStreamInfo8toStringEv */
/* Demangled: NSCam::v3::Camera3ImageStreamInfo::toString() const */
int _ZNK5NSCam2v322Camera3ImageStreamInfo8toStringEv(void);

/* Symbol: _ZN7android2spIN5NSCam2v315IMetaStreamInfoEED2Ev */
/* Demangled: android::sp<NSCam::v3::IMetaStreamInfo>::~sp() */
int _ZN7android2spIN5NSCam2v315IMetaStreamInfoEED2Ev(void);

/* Symbol: _ZN7android2spIN5NSCam5Utils4Sync6IFenceEED2Ev */
/* Demangled: android::sp<NSCam::Utils::Sync::IFence>::~sp() */
int _ZN7android2spIN5NSCam5Utils4Sync6IFenceEED2Ev(void);

/* Symbol: _ZN7android2spIN5NSCam2v312AppStreamMgr13ConfigHandlerEEaSEPS4_ */
/* Demangled: android::sp<NSCam::v3::AppStreamMgr::ConfigHandler>::operator=(NSCam::v3::AppStreamMgr::ConfigHandler*) */
int _ZN7android2spIN5NSCam2v312AppStreamMgr13ConfigHandlerEEaSEPS4_(void);

/* Symbol: _ZTTN5NSCam2v312AppStreamMgrE */
/* Demangled: VTT for NSCam::v3::AppStreamMgr */
extern void* _ZTTN5NSCam2v312AppStreamMgrE;

/* Symbol: _ZN5NSCam2v312AppStreamMgr12FrameHandler23preparePhysicReturnMetaERNS1_14CallbackParcelERKN7android2spINS2_11FrameParcelEEE */
/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::preparePhysicReturnMeta(NSCam::v3::AppStreamMgr::CallbackParcel&, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::FrameParcel> const&) */
int _ZN5NSCam2v312AppStreamMgr12FrameHandler23preparePhysicReturnMetaERNS1_14CallbackParcelERKN7android2spINS2_11FrameParcelEEE(void);

/* Symbol: _ZNK5NSCam2v312AppStreamMgr12FrameHandler15dumpStateLockedERN7android7PrinterE */
/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::dumpStateLocked(android::Printer&) const */
int _ZNK5NSCam2v312AppStreamMgr12FrameHandler15dumpStateLockedERN7android7PrinterE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler8MetaItemEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::MetaItem> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler8MetaItemEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler9ImageItemEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::ImageItem> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler9ImageItemEEEEEEE;

/* Symbol: _ZN5NSCam2v312AppStreamMgr19endConfigureStreamsERN7android8hardware6camera6device4V3_422HalStreamConfigurationE */
/* Demangled: NSCam::v3::AppStreamMgr::endConfigureStreams(android::hardware::camera::device::V3_4::HalStreamConfiguration&) */
int _ZN5NSCam2v312AppStreamMgr19endConfigureStreamsERN7android8hardware6camera6device4V3_422HalStreamConfigurationE(void);

/* Symbol: _ZNK7android6VectorINS_7String8EE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<android::String8>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_7String8EE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr12BatchHandler12appendParcelENS1_14CallbackParcelERS3_ */
/* Demangled: NSCam::v3::AppStreamMgr::BatchHandler::appendParcel(NSCam::v3::AppStreamMgr::CallbackParcel, NSCam::v3::AppStreamMgr::CallbackParcel&) */
int _ZN5NSCam2v312AppStreamMgr12BatchHandler12appendParcelENS1_14CallbackParcelERS3_(void);

/* Symbol: _ZN7android2spIN5NSCam2v312AppStreamMgr12FrameHandlerEED2Ev */
/* Demangled: android::sp<NSCam::v3::AppStreamMgr::FrameHandler>::~sp() */
int _ZN7android2spIN5NSCam2v312AppStreamMgr12FrameHandlerEED2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> > > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr17BufferHandleCache5clearEv */
/* Demangled: NSCam::v3::AppStreamMgr::BufferHandleCache::clear() */
int _ZN5NSCam2v312AppStreamMgr17BufferHandleCache5clearEv(void);

/* Symbol: _ZN7android2spIN5NSCam2v320AppImageStreamBufferEED2Ev */
/* Demangled: android::sp<NSCam::v3::AppImageStreamBuffer>::~sp() */
int _ZN7android2spIN5NSCam2v320AppImageStreamBufferEED2Ev(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr12FrameHandler15addConfigStreamEPNS0_5Utils14MetaStreamInfoE */
/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::addConfigStream(NSCam::v3::Utils::MetaStreamInfo*) */
int _ZN5NSCam2v312AppStreamMgr12FrameHandler15addConfigStreamEPNS0_5Utils14MetaStreamInfoE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler14PhysicMetaItemEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::PhysicMetaItem> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler14PhysicMetaItemEEEEEE12do_constructEPvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::GrallocStaticInfo::Plane>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZTVN5NSCam2v312AppStreamMgr12FrameHandler19ImageItemFrameQueueE */
/* Demangled: vtable for NSCam::v3::AppStreamMgr::FrameHandler::ImageItemFrameQueue */
extern void* _ZTVN5NSCam2v312AppStreamMgr12FrameHandler19ImageItemFrameQueueE;

/* Symbol: _ZTVN5NSCam2v312AppStreamMgr12FrameHandlerE */
/* Demangled: vtable for NSCam::v3::AppStreamMgr::FrameHandler */
extern void* _ZTVN5NSCam2v312AppStreamMgr12FrameHandlerE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_210StreamTypeEmEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::hardware::camera::device::V3_2::StreamType, unsigned long> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_210StreamTypeEmEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_214StreamRotationEmEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::hardware::camera::device::V3_2::StreamRotation, unsigned long> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_214StreamRotationEmEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_214StreamRotationEmEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<android::hardware::camera::device::V3_2::StreamRotation, unsigned long> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_214StreamRotationEmEEEE;

/* Symbol: _ZNSt3__112__hash_tableImNS_4hashImEENS_8equal_toImEENS_9allocatorImEEE25__emplace_unique_key_argsImJRKmEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeImPvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<unsigned long, void*>*>, bool> std::__1::__hash_table<unsigned long, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<unsigned long> >::__emplace_unique_key_args<unsigned long, unsigned long const&>(unsigned long const&, unsigned long const&) */
int _ZNSt3__112__hash_tableImNS_4hashImEENS_8equal_toImEENS_9allocatorImEEE25__emplace_unique_key_argsImJRKmEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeImPvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__112__hash_tableImNS_4hashImEENS_8equal_toImEENS_9allocatorImEEE6rehashEm */
/* Demangled: std::__1::__hash_table<unsigned long, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<unsigned long> >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableImNS_4hashImEENS_8equal_toImEENS_9allocatorImEEE6rehashEm(void);

/* Symbol: _ZN5NSCam2v319AppMetaStreamBuffer9AllocatorC1EPNS0_15IMetaStreamInfoE */
/* Demangled: NSCam::v3::AppMetaStreamBuffer::Allocator::Allocator(NSCam::v3::IMetaStreamInfo*) */
int _ZN5NSCam2v319AppMetaStreamBuffer9AllocatorC1EPNS0_15IMetaStreamInfoE(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr17BufferHandleCacheC1ENSt3__110shared_ptrINS1_10CommonInfoEEEl */
/* Demangled: NSCam::v3::AppStreamMgr::BufferHandleCache::BufferHandleCache(std::__1::shared_ptr<NSCam::v3::AppStreamMgr::CommonInfo>, long) */
int _ZN5NSCam2v312AppStreamMgr17BufferHandleCacheC1ENSt3__110shared_ptrINS1_10CommonInfoEEEl(void);

/* Symbol: _ZTCN5NSCam2v320AppImageStreamBufferE0_NS0_13IStreamBufferE */
/* Demangled: construction vtable for NSCam::v3::IStreamBuffer-in-NSCam::v3::AppImageStreamBuffer */
extern void* _ZTCN5NSCam2v320AppImageStreamBufferE0_NS0_13IStreamBufferE;

/* Symbol: _ZN5NSCam2v312AppStreamMgr15CallbackHandlerC1ENSt3__110shared_ptrINS1_10CommonInfoEEENS4_IN7android8hardware12MessageQueueIhLNS8_8MQFlavorE1EEEEE */
/* Demangled: NSCam::v3::AppStreamMgr::CallbackHandler::CallbackHandler(std::__1::shared_ptr<NSCam::v3::AppStreamMgr::CommonInfo>, std::__1::shared_ptr<android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1> >) */
int _ZN5NSCam2v312AppStreamMgr15CallbackHandlerC1ENSt3__110shared_ptrINS1_10CommonInfoEEENS4_IN7android8hardware12MessageQueueIhLNS8_8MQFlavorE1EEEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamBuffer> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr15CallbackHandler11requestExitEv */
/* Demangled: NSCam::v3::AppStreamMgr::CallbackHandler::requestExit() */
int _ZN5NSCam2v312AppStreamMgr15CallbackHandler11requestExitEv(void);

/* Symbol: _ZN5NSCam2v319AppMetaStreamBuffer12setRepeatingEi */
/* Demangled: NSCam::v3::AppMetaStreamBuffer::setRepeating(int) */
int _ZN5NSCam2v319AppMetaStreamBuffer12setRepeatingEi(void);

/* Symbol: _ZTCN5NSCam2v319AppMetaStreamBufferE0_NS0_13IUsersManagerE */
/* Demangled: construction vtable for NSCam::v3::IUsersManager-in-NSCam::v3::AppMetaStreamBuffer */
extern void* _ZTCN5NSCam2v319AppMetaStreamBufferE0_NS0_13IUsersManagerE;

/* Symbol: _ZN5NSCam2v312AppStreamMgr13ResultHandlerC2ENSt3__110shared_ptrINS1_10CommonInfoEEEN7android2spINS1_12FrameHandlerEEE */
/* Demangled: NSCam::v3::AppStreamMgr::ResultHandler::ResultHandler(std::__1::shared_ptr<NSCam::v3::AppStreamMgr::CommonInfo>, android::sp<NSCam::v3::AppStreamMgr::FrameHandler>) */
int _ZN5NSCam2v312AppStreamMgr13ResultHandlerC2ENSt3__110shared_ptrINS1_10CommonInfoEEEN7android2spINS1_12FrameHandlerEEE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v312AppStreamMgr12BatchHandler13InFlightBatchENS_9allocatorIS5_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::AppStreamMgr::BatchHandler::InFlightBatch, std::__1::allocator<NSCam::v3::AppStreamMgr::BatchHandler::InFlightBatch> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v312AppStreamMgr12BatchHandler13InFlightBatchENS_9allocatorIS5_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN5NSCam2v312AppStreamMgr13ResultHandler11enqueResultERKNS0_17IAppStreamManager18UpdateResultParamsE */
/* Demangled: NSCam::v3::AppStreamMgr::ResultHandler::enqueResult(NSCam::v3::IAppStreamManager::UpdateResultParams const&) */
int _ZN5NSCam2v312AppStreamMgr13ResultHandler11enqueResultERKNS0_17IAppStreamManager18UpdateResultParamsE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> > > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN5NSCam2v319AppMetaStreamBufferC1EN7android2spINS0_15IMetaStreamInfoEEERKNS_9IMetadataEPNS0_13IUsersManagerE */
/* Demangled: NSCam::v3::AppMetaStreamBuffer::AppMetaStreamBuffer(android::sp<NSCam::v3::IMetaStreamInfo>, NSCam::IMetadata const&, NSCam::v3::IUsersManager*) */
int _ZN5NSCam2v319AppMetaStreamBufferC1EN7android2spINS0_15IMetaStreamInfoEEERKNS_9IMetadataEPNS0_13IUsersManagerE(void);

/* Symbol: _ZNK5NSCam2v319AppMetaStreamBuffer8toStringEv */
/* Demangled: NSCam::v3::AppMetaStreamBuffer::toString() const */
int _ZNK5NSCam2v319AppMetaStreamBuffer8toStringEv(void);

/* Symbol: _ZTVN5NSCam2v312AppStreamMgr12BatchHandlerE */
/* Demangled: vtable for NSCam::v3::AppStreamMgr::BatchHandler */
extern void* _ZTVN5NSCam2v312AppStreamMgr12BatchHandlerE;

/* Symbol: _ZNK5NSCam2v322Camera3ImageStreamInfo9dumpStateERN7android7PrinterEj */
/* Demangled: NSCam::v3::Camera3ImageStreamInfo::dumpState(android::Printer&, unsigned int) const */
int _ZNK5NSCam2v322Camera3ImageStreamInfo9dumpStateERN7android7PrinterEj(void);

/* Symbol: _ZTv0_n64_N5NSCam2v322Camera3ImageStreamInfo12setMaxBufNumEm */
/* Demangled: virtual thunk to NSCam::v3::Camera3ImageStreamInfo::setMaxBufNum(unsigned long) */
int _ZTv0_n64_N5NSCam2v322Camera3ImageStreamInfo12setMaxBufNumEm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel9ImageItemEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::AppStreamMgr::CallbackParcel::ImageItem>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel9ImageItemEE15do_move_forwardEPvPKvm(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBMTKCAM_DEVICE3_APP_H */
