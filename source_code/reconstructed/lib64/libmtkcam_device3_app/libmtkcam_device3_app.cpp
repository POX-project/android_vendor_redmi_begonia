/*
 * Reverse-Engineered Source for: libmtkcam_device3_app.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libmtkcam_device3_app"

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
#include "libmtkcam_device3_app.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: NSCam::v3::Camera3ImageStreamInfo::getDataSpace() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v322Camera3ImageStreamInfo12getDataSpaceEv(void) {
    ALOGD("_ZNK5NSCam2v322Camera3ImageStreamInfo12getDataSpaceEv() called");
    return 0;
}

/* Demangled: android::Vector<android::String8>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::hardware::camera::device::V3_4::CaptureResult, std::__1::allocator<android::hardware::camera::device::V3_4::CaptureResult>&>::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIN7android8hardware6camera6device4V3_413CaptureResultERNS_9allocatorIS6_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferIN7android8hardware6camera6device4V3_413CaptureResultERNS_9allocatorIS6_EEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::Camera3ImageStreamInfo::setMaxBufNum(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v322Camera3ImageStreamInfo12setMaxBufNumEm(void) {
    ALOGD("_ZN5NSCam2v322Camera3ImageStreamInfo12setMaxBufNumEm() called");
    return 0;
}

/* Demangled: NSCam::v3::Camera3ImageStreamInfo::getMaxBufNum() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v322Camera3ImageStreamInfo12getMaxBufNumEv(void) {
    ALOGD("_ZNK5NSCam2v322Camera3ImageStreamInfo12getMaxBufNumEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::v3::AppImageStreamBuffer::~AppImageStreamBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam2v320AppImageStreamBufferD1Ev(void) {
    ALOGD("_ZThn8_N5NSCam2v320AppImageStreamBufferD1Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::FrameHandler(std::__1::shared_ptr<NSCam::v3::AppStreamMgr::CommonInfo>, android::sp<NSCam::v3::AppStreamMgr::BatchHandler>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr12FrameHandlerC1ENSt3__110shared_ptrINS1_10CommonInfoEEEN7android2spINS1_12BatchHandlerEEE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr12FrameHandlerC1ENSt3__110shared_ptrINS1_10CommonInfoEEEN7android2spINS1_12BatchHandlerEEE() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::AppStreamMgr>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v312AppStreamMgrEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam2v312AppStreamMgrEED2Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>, std::__1::allocator<android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN7android8hardware12MessageQueueIhLNS2_8MQFlavorE1EEENS_9allocatorIS5_EEEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::ResultHandler::dequeResult(android::KeyedVector<unsigned int, android::sp<NSCam::v3::AppStreamMgr::ResultItem> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr13ResultHandler11dequeResultERN7android11KeyedVectorIjNS3_2spINS1_10ResultItemEEEEE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr13ResultHandler11dequeResultERN7android11KeyedVectorIjNS3_2spINS1_10ResultItemEEEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::BufferHandleCache::cacheBuffer(unsigned long, native_handle const*, std::__1::shared_ptr<NSCam::v3::AppImageStreamBuffer::AppStreamBufferHandle>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr17BufferHandleCache11cacheBufferEmPK13native_handleNSt3__110shared_ptrINS0_20AppImageStreamBuffer21AppStreamBufferHandleEEE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr17BufferHandleCache11cacheBufferEmPK13native_handleNSt3__110shared_ptrINS0_20AppImageStreamBuffer21AppStreamBufferHandleEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::Camera3ImageStreamInfo::getStreamId() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v322Camera3ImageStreamInfo11getStreamIdEv(void) {
    ALOGD("_ZNK5NSCam2v322Camera3ImageStreamInfo11getStreamIdEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Camera3ImageStreamInfo::getLandscapeSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v322Camera3ImageStreamInfo16getLandscapeSizeEv(void) {
    ALOGD("_ZNK5NSCam2v322Camera3ImageStreamInfo16getLandscapeSizeEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::AppStreamMgr::FrameHandler::MetaConfigItem> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler14MetaConfigItemEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler14MetaConfigItemEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::CallbackHandler::readyToRun() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr15CallbackHandler10readyToRunEv(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr15CallbackHandler10readyToRunEv() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::CallbackHandler::CallbackHandler(std::__1::shared_ptr<NSCam::v3::AppStreamMgr::CommonInfo>, std::__1::shared_ptr<android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr15CallbackHandlerC2ENSt3__110shared_ptrINS1_10CommonInfoEEENS4_IN7android8hardware12MessageQueueIhLNS8_8MQFlavorE1EEEEE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr15CallbackHandlerC2ENSt3__110shared_ptrINS1_10CommonInfoEEENS4_IN7android8hardware12MessageQueueIhLNS8_8MQFlavorE1EEEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::AppMetaStreamBuffer::isRepeating() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v319AppMetaStreamBuffer11isRepeatingEv(void) {
    ALOGD("_ZNK5NSCam2v319AppMetaStreamBuffer11isRepeatingEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::IImageStreamBuffer-in-NSCam::v3::AppImageStreamBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v320AppImageStreamBufferE0_NS0_18IImageStreamBufferE = NULL;

/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::updateResult(android::KeyedVector<unsigned int, android::sp<NSCam::v3::AppStreamMgr::ResultItem> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr12FrameHandler12updateResultERKN7android11KeyedVectorIjNS3_2spINS1_10ResultItemEEEEE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr12FrameHandler12updateResultERKN7android11KeyedVectorIjNS3_2spINS1_10ResultItemEEEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::AppStreamMgr::FrameHandler::MetaConfigItem> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler14MetaConfigItemEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler14MetaConfigItemEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::CallbackHandler::convertErrorToHidl(NSCam::v3::AppStreamMgr::CallbackParcel const&, std::__1::vector<android::hardware::camera::device::V3_2::NotifyMsg, std::__1::allocator<android::hardware::camera::device::V3_2::NotifyMsg> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr15CallbackHandler18convertErrorToHidlERKNS1_14CallbackParcelERNSt3__16vectorIN7android8hardware6camera6device4V3_29NotifyMsgENS6_9allocatorISD_EEEE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr15CallbackHandler18convertErrorToHidlERKNS1_14CallbackParcelERNSt3__16vectorIN7android8hardware6camera6device4V3_29NotifyMsgENS6_9allocatorISD_EEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::AppImageStreamBuffer::~AppImageStreamBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v320AppImageStreamBufferD1Ev(void) {
    ALOGD("_ZN5NSCam2v320AppImageStreamBufferD1Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::AppImageStreamBuffer::getImageBufferHeap() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v320AppImageStreamBuffer18getImageBufferHeapEv(void) {
    ALOGD("_ZNK5NSCam2v320AppImageStreamBuffer18getImageBufferHeapEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamBuffer> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamBuffer> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::ImageItem> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler9ImageItemEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler9ImageItemEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::AppStreamMgr::BufferHandleCache, std::__1::allocator<NSCam::v3::AppStreamMgr::BufferHandleCache> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v312AppStreamMgr17BufferHandleCacheENS_9allocatorIS4_EEEE = NULL;

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::AppStreamMgr::ConfigHandler::ParsedSMVRBatchInfo, std::__1::allocator<NSCam::v3::AppStreamMgr::ConfigHandler::ParsedSMVRBatchInfo> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v312AppStreamMgr13ConfigHandler19ParsedSMVRBatchInfoENS_9allocatorIS5_EEEE = NULL;

/* Exported Object: construction vtable for NSCam::v3::Utils::StreamBufferImp-in-NSCam::v3::AppImageStreamBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v320AppImageStreamBufferE8_NS0_5Utils15StreamBufferImpE = NULL;

/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::isFrameRemovable(android::sp<NSCam::v3::AppStreamMgr::FrameHandler::FrameParcel> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v312AppStreamMgr12FrameHandler16isFrameRemovableERKN7android2spINS2_11FrameParcelEEE(void) {
    ALOGD("_ZNK5NSCam2v312AppStreamMgr12FrameHandler16isFrameRemovableERKN7android2spINS2_11FrameParcelEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::AppStreamMgr::FrameHandler::ImageConfigItem> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler15ImageConfigItemEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler15ImageConfigItemEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<long, std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<long> >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableIlNS_4hashIlEENS_8equal_toIlEENS_9allocatorIlEEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableIlNS_4hashIlEENS_8equal_toIlEENS_9allocatorIlEEE6rehashEm() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::updateItemSet(NSCam::v3::AppStreamMgr::FrameHandler::PhysicMetaItemSet&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr12FrameHandler13updateItemSetERNS2_17PhysicMetaItemSetE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr12FrameHandler13updateItemSetERNS2_17PhysicMetaItemSetE() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::CallbackHandler::endStatistics() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr15CallbackHandler13endStatisticsEv(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr15CallbackHandler13endStatisticsEv() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::BatchHandler::dumpState(android::Printer&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr12BatchHandler9dumpStateERN7android7PrinterERKNSt3__16vectorINS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEENSB_ISD_EEEE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr12BatchHandler9dumpStateERN7android7PrinterERKNSt3__16vectorINS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEENSB_ISD_EEEE() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::IMetaStreamBuffer-in-NSCam::v3::AppMetaStreamBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v319AppMetaStreamBufferE0_NS0_17IMetaStreamBufferE = NULL;

/* Exported Object: vtable for NSCam::v3::AppErrorImageStreamBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v325AppErrorImageStreamBufferE = NULL;

/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::FrameHandler(std::__1::shared_ptr<NSCam::v3::AppStreamMgr::CommonInfo>, android::sp<NSCam::v3::AppStreamMgr::BatchHandler>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr12FrameHandlerC2ENSt3__110shared_ptrINS1_10CommonInfoEEEN7android2spINS1_12BatchHandlerEEE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr12FrameHandlerC2ENSt3__110shared_ptrINS1_10CommonInfoEEEN7android2spINS1_12BatchHandlerEEE() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::v3::AppStreamMgr::BufferHandleCache>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam2v312AppStreamMgr17BufferHandleCacheEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam2v312AppStreamMgr17BufferHandleCacheEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<std::__1::shared_ptr<NSCam::v3::AppStreamMgr::BatchHandler::InFlightBatch>, std::__1::allocator<std::__1::shared_ptr<NSCam::v3::AppStreamMgr::BatchHandler::InFlightBatch> > >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseINS_10shared_ptrIN5NSCam2v312AppStreamMgr12BatchHandler13InFlightBatchEEENS_9allocatorIS7_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseINS_10shared_ptrIN5NSCam2v312AppStreamMgr12BatchHandler13InFlightBatchEEENS_9allocatorIS7_EEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::AppImageStreamBuffer::AppStreamBufferHandle::~AppStreamBufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v320AppImageStreamBuffer21AppStreamBufferHandleD2Ev(void) {
    ALOGD("_ZN5NSCam2v320AppImageStreamBuffer21AppStreamBufferHandleD2Ev() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::AppStreamMgr::CommonInfo, std::__1::allocator<NSCam::v3::AppStreamMgr::CommonInfo> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v312AppStreamMgr10CommonInfoENS_9allocatorIS4_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v312AppStreamMgr10CommonInfoENS_9allocatorIS4_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::flushRequest(android::hardware::hidl_vec<android::hardware::camera::device::V3_4::CaptureRequest> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr12flushRequestERKN7android8hardware8hidl_vecINS3_6camera6device4V3_414CaptureRequestEEE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr12flushRequestERKN7android8hardware8hidl_vecINS3_6camera6device4V3_414CaptureRequestEEE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::AppImageStreamBuffer::AppStreamBufferHandle, std::__1::allocator<NSCam::v3::AppImageStreamBuffer::AppStreamBufferHandle> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v320AppImageStreamBuffer21AppStreamBufferHandleENS_9allocatorIS4_EEEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<android::hardware::camera::device::V3_2::StreamRotation, unsigned long> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_214StreamRotationEmEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_214StreamRotationEmEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::dumpStateLocked(android::Printer&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr15dumpStateLockedERN7android7PrinterERKNSt3__16vectorINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEENSA_ISC_EEEE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr15dumpStateLockedERN7android7PrinterERKNSt3__16vectorINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEENSA_ISC_EEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::IAppStreamManager::create(NSCam::v3::IAppStreamManager::CreationInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317IAppStreamManager6createERKNS1_12CreationInfoE(void) {
    ALOGD("_ZN5NSCam2v317IAppStreamManager6createERKNS1_12CreationInfoE() called");
    return 0;
}

/* Demangled: NSCam::v3::AppErrorImageStreamBuffer::AppErrorImageStreamBuffer(unsigned long, android::sp<NSCam::v3::IImageStreamInfo>, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v325AppErrorImageStreamBufferC1EmN7android2spINS0_16IImageStreamInfoEEEi(void) {
    ALOGD("_ZN5NSCam2v325AppErrorImageStreamBufferC1EmN7android2spINS0_16IImageStreamInfoEEEi() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::registerFrame(NSCam::v3::IAppStreamManager::Request const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr12FrameHandler13registerFrameERKNS0_17IAppStreamManager7RequestE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr12FrameHandler13registerFrameERKNS0_17IAppStreamManager7RequestE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::GrallocStaticInfo::Plane>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE8do_splatEPvPKvm() called");
    return 0;
}

/* Exported Object: typeinfo for std::length_error */
extern "C" __attribute__((visibility("default"))) void* _ZTISt12length_error = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::v3::AppStreamMgr::ResultItem> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v312AppStreamMgr10ResultItemEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v312AppStreamMgr10ResultItemEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::GrallocStaticInfo::Plane>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::v3::Camera3ImageStreamInfo::getStreamName() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v322Camera3ImageStreamInfo13getStreamNameEv(void) {
    ALOGD("_ZNK5NSCam2v322Camera3ImageStreamInfo13getStreamNameEv() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, NSCam::v3::AppStreamMgr::BufferHandleCache::BufferHandle>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long, NSCam::v3::AppStreamMgr::BufferHandleCache::BufferHandle>, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, NSCam::v3::AppStreamMgr::BufferHandleCache::BufferHandle>, std::__1::hash<unsigned long>, true>, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, NSCam::v3::AppStreamMgr::BufferHandleCache::BufferHandle>, std::__1::equal_to<unsigned long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long, NSCam::v3::AppStreamMgr::BufferHandleCache::BufferHandle> > >::__emplace_unique_key_args<unsigned long, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long const&>, std::__1::tuple<> >(unsigned long const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeImN5NSCam2v312AppStreamMgr17BufferHandleCache12BufferHandleEEENS_22__unordered_map_hasherImS7_NS_4hashImEELb1EEENS_21__unordered_map_equalImS7_NS_8equal_toImEELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsImJRKNS_21piecewise_construct_tENS_5tupleIJRKmEEENSN_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS7_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeImN5NSCam2v312AppStreamMgr17BufferHandleCache12BufferHandleEEENS_22__unordered_map_hasherImS7_NS_4hashImEELb1EEENS_21__unordered_map_equalImS7_NS_8equal_toImEELb1EEENS_9allocatorIS7_EEE25__emplace_unique_key_argsImJRKNS_21piecewise_construct_tENS_5tupleIJRKmEEENSN_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS7_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::removeUnusedConfigStream(std::__1::unordered_set<long, std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<long> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr12FrameHandler24removeUnusedConfigStreamERKNSt3__113unordered_setIlNS3_4hashIlEENS3_8equal_toIlEENS3_9allocatorIlEEEE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr12FrameHandler24removeUnusedConfigStreamERKNSt3__113unordered_setIlNS3_4hashIlEENS3_8equal_toIlEENS3_9allocatorIlEEEE() called");
    return 0;
}

/* Demangled: android::sp<NSCam::IMetadataProvider>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam17IMetadataProviderEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam17IMetadataProviderEED2Ev() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::unmapGrantorDescr(void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE17unmapGrantorDescrEPvj(void) {
    ALOGD("_ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE17unmapGrantorDescrEPvj() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::AppStreamMgr::ResultItem>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v312AppStreamMgr10ResultItemEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam2v312AppStreamMgr10ResultItemEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::ConfigHandler::checkStreams(android::hardware::hidl_vec<android::hardware::camera::device::V3_4::Stream> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v312AppStreamMgr13ConfigHandler12checkStreamsERKN7android8hardware8hidl_vecINS4_6camera6device4V3_46StreamEEE(void) {
    ALOGD("_ZNK5NSCam2v312AppStreamMgr13ConfigHandler12checkStreamsERKN7android8hardware8hidl_vecINS4_6camera6device4V3_46StreamEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::BatchHandler::dumpStateLocked(android::Printer&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v312AppStreamMgr12BatchHandler15dumpStateLockedERN7android7PrinterE(void) {
    ALOGD("_ZNK5NSCam2v312AppStreamMgr12BatchHandler15dumpStateLockedERN7android7PrinterE() called");
    return 0;
}

/* Demangled: android::Vector<int>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIiE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Exported Object: NSCam::v3::AppStreamMgr::MyDebuggee::mName */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam2v312AppStreamMgr10MyDebuggee5mNameE = NULL;

/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::mapGrantorDescr(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE15mapGrantorDescrEj(void) {
    ALOGD("_ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE15mapGrantorDescrEj() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::AppStreamMgr::CallbackParcel::MetaItem>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel8MetaItemEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel8MetaItemEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::AppMetaStreamBuffer>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v319AppMetaStreamBufferEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam2v319AppMetaStreamBufferEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::BufferHandleCache::markBufferFreeByOthers(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr17BufferHandleCache22markBufferFreeByOthersEm(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr17BufferHandleCache22markBufferFreeByOthersEm() called");
    return 0;
}

/* Demangled: NSCam::v3::Camera3ImageStreamInfo::getAllocImgFormat() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v322Camera3ImageStreamInfo17getAllocImgFormatEv(void) {
    ALOGD("_ZNK5NSCam2v322Camera3ImageStreamInfo17getAllocImgFormatEv() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::CallbackHandler::dumpState(android::Printer&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr15CallbackHandler9dumpStateERN7android7PrinterERKNSt3__16vectorINS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEENSB_ISD_EEEE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr15CallbackHandler9dumpStateERN7android7PrinterERKNSt3__16vectorINS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEENSB_ISD_EEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::hardware::camera::device::V3_2::StreamRotation, unsigned long> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_214StreamRotationEmEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_214StreamRotationEmEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: void std::__1::vector<unsigned long, std::__1::allocator<unsigned long> >::__push_back_slow_path<unsigned long>(unsigned long&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorImNS_9allocatorImEEE21__push_back_slow_pathImEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorImNS_9allocatorImEEE21__push_back_slow_pathImEEvOT_() called");
    return 0;
}

/* Demangled: NSCam::v3::Camera3ImageStreamInfo::getUsageForConsumer() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v322Camera3ImageStreamInfo19getUsageForConsumerEv(void) {
    ALOGD("_ZNK5NSCam2v322Camera3ImageStreamInfo19getUsageForConsumerEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::AppStreamMgr::CallbackParcel::Error>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel5ErrorEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel5ErrorEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::IImageStreamInfo-in-NSCam::v3::Camera3ImageStreamInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v322Camera3ImageStreamInfoE0_NS0_16IImageStreamInfoE = NULL;

/* Demangled: NSCam::v3::AppStreamMgr::RequestHandler::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr14RequestHandler7destroyEv(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr14RequestHandler7destroyEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::AppStreamMgr::ConfigHandler::ParsedSMVRBatchInfo, std::__1::allocator<NSCam::v3::AppStreamMgr::ConfigHandler::ParsedSMVRBatchInfo> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v312AppStreamMgr13ConfigHandler19ParsedSMVRBatchInfoENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v312AppStreamMgr13ConfigHandler19ParsedSMVRBatchInfoENS_9allocatorIS5_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Camera3ImageStreamInfo::toString() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n80_NK5NSCam2v322Camera3ImageStreamInfo8toStringEv(void) {
    ALOGD("_ZTv0_n80_NK5NSCam2v322Camera3ImageStreamInfo8toStringEv() called");
    return 0;
}

/* Demangled: android::sp<NSCam::IMetadataConverter>::operator=(android::sp<NSCam::IMetadataConverter> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam18IMetadataConverterEEaSERKS3_(void) {
    ALOGD("_ZN7android2spIN5NSCam18IMetadataConverterEEaSERKS3_() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::initMemory(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE10initMemoryEb(void) {
    ALOGD("_ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE10initMemoryEb() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::ConfigHandler::ConfigHandler(std::__1::shared_ptr<NSCam::v3::AppStreamMgr::CommonInfo>, android::sp<NSCam::v3::AppStreamMgr::FrameHandler>, android::sp<NSCam::v3::AppStreamMgr::BatchHandler>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr13ConfigHandlerC2ENSt3__110shared_ptrINS1_10CommonInfoEEEN7android2spINS1_12FrameHandlerEEENS8_INS1_12BatchHandlerEEE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr13ConfigHandlerC2ENSt3__110shared_ptrINS1_10CommonInfoEEEN7android2spINS1_12FrameHandlerEEENS8_INS1_12BatchHandlerEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::v3::AppImageStreamBuffer::enqueUserGraph(android::sp<NSCam::v3::IUsersManager::IUserGraph>) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam2v320AppImageStreamBuffer14enqueUserGraphEN7android2spINS0_13IUsersManager10IUserGraphEEE(void) {
    ALOGD("_ZThn8_N5NSCam2v320AppImageStreamBuffer14enqueUserGraphEN7android2spINS0_13IUsersManager10IUserGraphEEE() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::wp<NSCam::v3::AppStreamMgr::FrameHandler::FrameParcel> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2wpIN5NSCam2v312AppStreamMgr12FrameHandler11FrameParcelEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2wpIN5NSCam2v312AppStreamMgr12FrameHandler11FrameParcelEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::AppErrorImageStreamBuffer::setReleaseFence(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v325AppErrorImageStreamBuffer15setReleaseFenceEi(void) {
    ALOGD("_ZN5NSCam2v325AppErrorImageStreamBuffer15setReleaseFenceEi() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::getCaptureRequestMetadataQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr30getCaptureRequestMetadataQueueEv(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr30getCaptureRequestMetadataQueueEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::AppStreamMgr::CallbackParcel::PhysicMetaItem>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel14PhysicMetaItemEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel14PhysicMetaItemEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::MetaItem> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler8MetaItemEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler8MetaItemEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::BatchHandler::BatchHandler(std::__1::shared_ptr<NSCam::v3::AppStreamMgr::CommonInfo>, android::sp<NSCam::v3::AppStreamMgr::CallbackHandler>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr12BatchHandlerC2ENSt3__110shared_ptrINS1_10CommonInfoEEEN7android2spINS1_15CallbackHandlerEEE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr12BatchHandlerC2ENSt3__110shared_ptrINS1_10CommonInfoEEEN7android2spINS1_15CallbackHandlerEEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::shared_ptr<NSCam::v3::AppStreamMgr::BatchHandler::InFlightBatch>, std::__1::allocator<std::__1::shared_ptr<NSCam::v3::AppStreamMgr::BatchHandler::InFlightBatch> > >::__push_back_slow_path<std::__1::shared_ptr<NSCam::v3::AppStreamMgr::BatchHandler::InFlightBatch> const&>(std::__1::shared_ptr<NSCam::v3::AppStreamMgr::BatchHandler::InFlightBatch> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_10shared_ptrIN5NSCam2v312AppStreamMgr12BatchHandler13InFlightBatchEEENS_9allocatorIS7_EEE21__push_back_slow_pathIRKS7_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_10shared_ptrIN5NSCam2v312AppStreamMgr12BatchHandler13InFlightBatchEEENS_9allocatorIS7_EEE21__push_back_slow_pathIRKS7_EEvOT_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::v3::AppStreamMgr::ResultItem> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v312AppStreamMgr10ResultItemEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v312AppStreamMgr10ResultItemEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::BufferHandleCache::importBuffer(unsigned long, native_handle const*&, std::__1::shared_ptr<NSCam::v3::AppImageStreamBuffer::AppStreamBufferHandle>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v312AppStreamMgr17BufferHandleCache12importBufferEmRPK13native_handleRNSt3__110shared_ptrINS0_20AppImageStreamBuffer21AppStreamBufferHandleEEE(void) {
    ALOGD("_ZNK5NSCam2v312AppStreamMgr17BufferHandleCache12importBufferEmRPK13native_handleRNSt3__110shared_ptrINS0_20AppImageStreamBuffer21AppStreamBufferHandleEEE() called");
    return 0;
}

/* Exported Object: VTT for NSCam::v3::AppStreamMgr::CallbackHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam2v312AppStreamMgr15CallbackHandlerE = NULL;

/* Demangled: NSCam::v3::AppImageStreamBuffer::AppStreamBufferHandle::AppStreamBufferHandle(native_handle const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v320AppImageStreamBuffer21AppStreamBufferHandleC2EPK13native_handle(void) {
    ALOGD("_ZN5NSCam2v320AppImageStreamBuffer21AppStreamBufferHandleC2EPK13native_handle() called");
    return 0;
}

/* Demangled: NSCam::v3::AppImageStreamBuffer::Allocator::operator()(unsigned long, NSCam::IGraphicImageBufferHeap*, native_handle const*, std::__1::shared_ptr<NSCam::v3::AppImageStreamBuffer::AppStreamBufferHandle>, NSCam::v3::IImageStreamInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v320AppImageStreamBuffer9AllocatorclEmPNS_23IGraphicImageBufferHeapEPK13native_handleNSt3__110shared_ptrINS1_21AppStreamBufferHandleEEEPNS0_16IImageStreamInfoE(void) {
    ALOGD("_ZN5NSCam2v320AppImageStreamBuffer9AllocatorclEmPNS_23IGraphicImageBufferHeapEPK13native_handleNSt3__110shared_ptrINS1_21AppStreamBufferHandleEEEPNS0_16IImageStreamInfoE() called");
    return 0;
}

/* Exported Object: VTT for NSCam::v3::AppImageStreamBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam2v320AppImageStreamBufferE = NULL;

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::AppStreamMgr::ConfigHandler::ParsedSMVRBatchInfo, std::__1::allocator<NSCam::v3::AppStreamMgr::ConfigHandler::ParsedSMVRBatchInfo> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v312AppStreamMgr13ConfigHandler19ParsedSMVRBatchInfoENS_9allocatorIS5_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v312AppStreamMgr13ConfigHandler19ParsedSMVRBatchInfoENS_9allocatorIS5_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::BatchHandler::BatchHandler(std::__1::shared_ptr<NSCam::v3::AppStreamMgr::CommonInfo>, android::sp<NSCam::v3::AppStreamMgr::CallbackHandler>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr12BatchHandlerC1ENSt3__110shared_ptrINS1_10CommonInfoEEEN7android2spINS1_15CallbackHandlerEEE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr12BatchHandlerC1ENSt3__110shared_ptrINS1_10CommonInfoEEEN7android2spINS1_15CallbackHandlerEEE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::AppStreamMgr::CallbackParcel::MetaItem>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel8MetaItemEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel8MetaItemEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE = NULL;

/* Demangled: __atomic_load_1 */
extern "C" __attribute__((visibility("default"))) int fn___atomic_load_1(void) __asm__("__atomic_load_1");
int fn___atomic_load_1(void) {
    ALOGD("__atomic_load_1() called");
    return 0;
}

/* Demangled: NSCam::v3::Camera3ImageStreamInfo::Camera3ImageStreamInfo(NSCam::v3::Camera3ImageStreamInfo::CreationInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v322Camera3ImageStreamInfoC2ERKNS1_12CreationInfoE(void) {
    ALOGD("_ZN5NSCam2v322Camera3ImageStreamInfoC2ERKNS1_12CreationInfoE() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::MyDebuggee::debug(android::Printer&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr10MyDebuggee5debugERN7android7PrinterERKNSt3__16vectorINS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEENSB_ISD_EEEE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr10MyDebuggee5debugERN7android7PrinterERKNSt3__16vectorINS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEENSB_ISD_EEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> > > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: __atomic_load_2 */
extern "C" __attribute__((visibility("default"))) int fn___atomic_load_2(void) __asm__("__atomic_load_2");
int fn___atomic_load_2(void) {
    ALOGD("__atomic_load_2() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::AppMetaStreamBuffer::Allocator */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v319AppMetaStreamBuffer9AllocatorE = NULL;

/* Demangled: NSCam::v3::AppMetaStreamBuffer::Allocator::operator()() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v319AppMetaStreamBuffer9AllocatorclEv(void) {
    ALOGD("_ZN5NSCam2v319AppMetaStreamBuffer9AllocatorclEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::AppImageStreamBuffer::~AppImageStreamBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n256_N5NSCam2v320AppImageStreamBufferD0Ev(void) {
    ALOGD("_ZTv0_n256_N5NSCam2v320AppImageStreamBufferD0Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::AppStreamMgr::CallbackParcel::Error>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel5ErrorEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel5ErrorEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::prepareReturnImage(NSCam::v3::AppStreamMgr::CallbackParcel&, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::ImageItem> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr12FrameHandler18prepareReturnImageERNS1_14CallbackParcelERKN7android2spINS2_9ImageItemEEE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr12FrameHandler18prepareReturnImageERNS1_14CallbackParcelERKN7android2spINS2_9ImageItemEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::prepareShutterNotificationIfPossible(NSCam::v3::AppStreamMgr::CallbackParcel&, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::MetaItem> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr12FrameHandler36prepareShutterNotificationIfPossibleERNS1_14CallbackParcelERKN7android2spINS2_8MetaItemEEE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr12FrameHandler36prepareShutterNotificationIfPossibleERNS1_14CallbackParcelERKN7android2spINS2_8MetaItemEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::CallbackHandler::convertMetaToHidl(NSCam::v3::AppStreamMgr::CallbackParcel const&, std::__1::vector<android::hardware::camera::device::V3_4::CaptureResult, std::__1::allocator<android::hardware::camera::device::V3_4::CaptureResult> >&, std::__1::vector<camera_metadata*, std::__1::allocator<camera_metadata*> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr15CallbackHandler17convertMetaToHidlERKNS1_14CallbackParcelERNSt3__16vectorIN7android8hardware6camera6device4V3_413CaptureResultENS6_9allocatorISD_EEEERNS7_IP15camera_metadataNSE_ISJ_EEEE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr15CallbackHandler17convertMetaToHidlERKNS1_14CallbackParcelERNSt3__16vectorIN7android8hardware6camera6device4V3_413CaptureResultENS6_9allocatorISD_EEEERNS7_IP15camera_metadataNSE_ISJ_EEEE() called");
    return 0;
}

/* Demangled: __atomic_load_4 */
extern "C" __attribute__((visibility("default"))) int fn___atomic_load_4(void) __asm__("__atomic_load_4");
int fn___atomic_load_4(void) {
    ALOGD("__atomic_load_4() called");
    return 0;
}

/* Demangled: NSCam::v3::Camera3ImageStreamInfo::setTransform(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v322Camera3ImageStreamInfo12setTransformEj(void) {
    ALOGD("_ZN5NSCam2v322Camera3ImageStreamInfo12setTransformEj() called");
    return 0;
}

/* Demangled: NSCam::v3::Camera3ImageStreamInfo::getMinInitBufNum() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v322Camera3ImageStreamInfo16getMinInitBufNumEv(void) {
    ALOGD("_ZNK5NSCam2v322Camera3ImageStreamInfo16getMinInitBufNumEv() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::AppStreamMgr::FrameHandler>::operator=(NSCam::v3::AppStreamMgr::FrameHandler*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v312AppStreamMgr12FrameHandlerEEaSEPS4_(void) {
    ALOGD("_ZN7android2spIN5NSCam2v312AppStreamMgr12FrameHandlerEEaSEPS4_() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::AppStreamMgr::CallbackParcel::Error>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel5ErrorEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel5ErrorEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::AppStreamMgr::BatchHandler::InFlightBatch, std::__1::allocator<NSCam::v3::AppStreamMgr::BatchHandler::InFlightBatch> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v312AppStreamMgr12BatchHandler13InFlightBatchENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v312AppStreamMgr12BatchHandler13InFlightBatchENS_9allocatorIS5_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::AppStreamMgr::FrameHandler::MetaConfigItem> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler14MetaConfigItemEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler14MetaConfigItemEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::v3::AppImageStreamBuffer::enqueUserGraph(android::sp<NSCam::v3::IUsersManager::IUserGraph>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v320AppImageStreamBuffer14enqueUserGraphEN7android2spINS0_13IUsersManager10IUserGraphEEE(void) {
    ALOGD("_ZN5NSCam2v320AppImageStreamBuffer14enqueUserGraphEN7android2spINS0_13IUsersManager10IUserGraphEEE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::AppImageStreamBuffer::AppStreamBufferHandle, std::__1::allocator<NSCam::v3::AppImageStreamBuffer::AppStreamBufferHandle> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v320AppImageStreamBuffer21AppStreamBufferHandleENS_9allocatorIS4_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v320AppImageStreamBuffer21AppStreamBufferHandleENS_9allocatorIS4_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::ResultHandler::threadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr13ResultHandler10threadLoopEv(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr13ResultHandler10threadLoopEv() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::BatchHandler::getBatchLocked(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr12BatchHandler14getBatchLockedEj(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr12BatchHandler14getBatchLockedEj() called");
    return 0;
}

/* Demangled: libat_unlock_n */
extern "C" __attribute__((visibility("default"))) int libat_unlock_n(void) {
    ALOGD("libat_unlock_n() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: std::__1::shared_ptr<android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1> >::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN7android8hardware12MessageQueueIhLNS2_8MQFlavorE1EEEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN7android8hardware12MessageQueueIhLNS2_8MQFlavorE1EEEED2Ev() called");
    return 0;
}

/* Demangled: __atomic_load_8 */
extern "C" __attribute__((visibility("default"))) int fn___atomic_load_8(void) __asm__("__atomic_load_8");
int fn___atomic_load_8(void) {
    ALOGD("__atomic_load_8() called");
    return 0;
}

/* Demangled: NSCam::v3::Camera3ImageStreamInfo::Camera3ImageStreamInfo(NSCam::v3::Camera3ImageStreamInfo::CreationInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v322Camera3ImageStreamInfoC1ERKNS1_12CreationInfoE(void) {
    ALOGD("_ZN5NSCam2v322Camera3ImageStreamInfoC1ERKNS1_12CreationInfoE() called");
    return 0;
}

/* Demangled: NSCam::v3::AppErrorImageStreamBuffer::Allocator::operator()(unsigned long, NSCam::v3::IImageStreamInfo*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v325AppErrorImageStreamBuffer9AllocatorclEmPNS0_16IImageStreamInfoEi(void) {
    ALOGD("_ZN5NSCam2v325AppErrorImageStreamBuffer9AllocatorclEmPNS0_16IImageStreamInfoEi() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::submitRequest(android::hardware::hidl_vec<android::hardware::camera::device::V3_4::CaptureRequest> const&, android::Vector<NSCam::v3::IAppStreamManager::Request>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr13submitRequestERKN7android8hardware8hidl_vecINS3_6camera6device4V3_414CaptureRequestEEERNS2_6VectorINS0_17IAppStreamManager7RequestEEE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr13submitRequestERKN7android8hardware8hidl_vecINS3_6camera6device4V3_414CaptureRequestEEERNS2_6VectorINS0_17IAppStreamManager7RequestEEE() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::prepareCallbackIfPossible(NSCam::v3::AppStreamMgr::CallbackParcel&, NSCam::v3::AppStreamMgr::FrameHandler::ImageItemSet&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr12FrameHandler25prepareCallbackIfPossibleERNS1_14CallbackParcelERNS2_12ImageItemSetE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr12FrameHandler25prepareCallbackIfPossibleERNS1_14CallbackParcelERNS2_12ImageItemSetE() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::CallbackHandler::waitUntilDrained(long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr15CallbackHandler16waitUntilDrainedEl(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr15CallbackHandler16waitUntilDrainedEl() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::AppErrorImageStreamBuffer::Allocator */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v325AppErrorImageStreamBuffer9AllocatorE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamBuffer> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE10do_compareEPKvSA_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE10do_compareEPKvSA_() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::CallbackHandler::push(std::__1::list<NSCam::v3::AppStreamMgr::CallbackParcel, std::__1::allocator<NSCam::v3::AppStreamMgr::CallbackParcel> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr15CallbackHandler4pushERNSt3__14listINS1_14CallbackParcelENS3_9allocatorIS5_EEEE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr15CallbackHandler4pushERNSt3__14listINS1_14CallbackParcelENS3_9allocatorIS5_EEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::RequestHandler::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr14RequestHandler5resetEv(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr14RequestHandler5resetEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::IAppStreamManager::Request>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317IAppStreamManager7RequestEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317IAppStreamManager7RequestEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> > > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::BufferHandleCache::uncacheBuffer(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr17BufferHandleCache13uncacheBufferEm(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr17BufferHandleCache13uncacheBufferEm() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::AppStreamMgr::MyDebuggee, std::__1::allocator<NSCam::v3::AppStreamMgr::MyDebuggee> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v312AppStreamMgr10MyDebuggeeENS_9allocatorIS4_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v312AppStreamMgr10MyDebuggeeENS_9allocatorIS4_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1>::MQDescriptor(unsigned long, native_handle*, unsigned long, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEC2EmP13native_handlemb(void) {
    ALOGD("_ZN7android8hardware12MQDescriptorIhLNS0_8MQFlavorE1EEC2EmP13native_handlemb() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::IAppStreamManager::Request>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317IAppStreamManager7RequestEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317IAppStreamManager7RequestEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::AppStreamMgr::FrameHandler::MetaItem */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v312AppStreamMgr12FrameHandler8MetaItemE = NULL;

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long, NSCam::v3::AppStreamMgr::BufferHandleCache::BufferHandle>, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, NSCam::v3::AppStreamMgr::BufferHandleCache::BufferHandle>, std::__1::hash<unsigned long>, true>, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, NSCam::v3::AppStreamMgr::BufferHandleCache::BufferHandle>, std::__1::equal_to<unsigned long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long, NSCam::v3::AppStreamMgr::BufferHandleCache::BufferHandle> > >::~__hash_table() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeImN5NSCam2v312AppStreamMgr17BufferHandleCache12BufferHandleEEENS_22__unordered_map_hasherImS7_NS_4hashImEELb1EEENS_21__unordered_map_equalImS7_NS_8equal_toImEELb1EEENS_9allocatorIS7_EEED2Ev(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeImN5NSCam2v312AppStreamMgr17BufferHandleCache12BufferHandleEEENS_22__unordered_map_hasherImS7_NS_4hashImEELb1EEENS_21__unordered_map_equalImS7_NS_8equal_toImEELb1EEENS_9allocatorIS7_EEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::RequestHandler::importStreamBuffer(android::hardware::camera::device::V3_2::StreamBuffer const&, native_handle const*&, std::__1::shared_ptr<NSCam::v3::AppImageStreamBuffer::AppStreamBufferHandle>&, int&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v312AppStreamMgr14RequestHandler18importStreamBufferERKN7android8hardware6camera6device4V3_212StreamBufferERPK13native_handleRNSt3__110shared_ptrINS0_20AppImageStreamBuffer21AppStreamBufferHandleEEERi(void) {
    ALOGD("_ZNK5NSCam2v312AppStreamMgr14RequestHandler18importStreamBufferERKN7android8hardware6camera6device4V3_212StreamBufferERPK13native_handleRNSt3__110shared_ptrINS0_20AppImageStreamBuffer21AppStreamBufferHandleEEERi() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> > > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEEEEEE10do_compareEPKvSJ_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEEEEEE10do_compareEPKvSJ_() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::updateShutterTimeIfPossible(android::sp<NSCam::v3::AppStreamMgr::FrameHandler::MetaItem>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr12FrameHandler27updateShutterTimeIfPossibleERN7android2spINS2_8MetaItemEEE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr12FrameHandler27updateShutterTimeIfPossibleERN7android2spINS2_8MetaItemEEE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::AppStreamMgr::CallbackParcel::ImageItem>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel9ImageItemEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel9ImageItemEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::RequestHandler::submitRequest(android::hardware::hidl_vec<android::hardware::camera::device::V3_4::CaptureRequest> const&, android::Vector<NSCam::v3::IAppStreamManager::Request>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr14RequestHandler13submitRequestERKN7android8hardware8hidl_vecINS4_6camera6device4V3_414CaptureRequestEEERNS3_6VectorINS0_17IAppStreamManager7RequestEEE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr14RequestHandler13submitRequestERKN7android8hardware8hidl_vecINS4_6camera6device4V3_414CaptureRequestEEERNS3_6VectorINS0_17IAppStreamManager7RequestEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::registerStreamBuffers(android::KeyedVector<long, android::sp<NSCam::v3::IMetaStreamBuffer> > const&, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::FrameParcel>, NSCam::v3::AppStreamMgr::FrameHandler::MetaItemSet*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr12FrameHandler21registerStreamBuffersERKN7android11KeyedVectorIlNS3_2spINS0_17IMetaStreamBufferEEEEENS5_INS2_11FrameParcelEEEPNS2_11MetaItemSetE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr12FrameHandler21registerStreamBuffersERKN7android11KeyedVectorIlNS3_2spINS0_17IMetaStreamBufferEEEEENS5_INS2_11FrameParcelEEEPNS2_11MetaItemSetE() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::isShutterReturnable(android::sp<NSCam::v3::AppStreamMgr::FrameHandler::MetaItem> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v312AppStreamMgr12FrameHandler19isShutterReturnableERKN7android2spINS2_8MetaItemEEE(void) {
    ALOGD("_ZNK5NSCam2v312AppStreamMgr12FrameHandler19isShutterReturnableERKN7android2spINS2_8MetaItemEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::wp<NSCam::v3::AppStreamMgr::FrameHandler::FrameParcel> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2wpIN5NSCam2v312AppStreamMgr12FrameHandler11FrameParcelEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2wpIN5NSCam2v312AppStreamMgr12FrameHandler11FrameParcelEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::CallbackHandler::convertShutterToHidl(NSCam::v3::AppStreamMgr::CallbackParcel const&, std::__1::vector<android::hardware::camera::device::V3_2::NotifyMsg, std::__1::allocator<android::hardware::camera::device::V3_2::NotifyMsg> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr15CallbackHandler20convertShutterToHidlERKNS1_14CallbackParcelERNSt3__16vectorIN7android8hardware6camera6device4V3_29NotifyMsgENS6_9allocatorISD_EEEE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr15CallbackHandler20convertShutterToHidlERKNS1_14CallbackParcelERNSt3__16vectorIN7android8hardware6camera6device4V3_29NotifyMsgENS6_9allocatorISD_EEEE() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::AppStreamMgr::ResultHandler>::operator=(NSCam::v3::AppStreamMgr::ResultHandler*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v312AppStreamMgr13ResultHandlerEEaSEPS4_(void) {
    ALOGD("_ZN7android2spIN5NSCam2v312AppStreamMgr13ResultHandlerEEaSEPS4_() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::ResultHandler::ResultHandler(std::__1::shared_ptr<NSCam::v3::AppStreamMgr::CommonInfo>, android::sp<NSCam::v3::AppStreamMgr::FrameHandler>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr13ResultHandlerC1ENSt3__110shared_ptrINS1_10CommonInfoEEEN7android2spINS1_12FrameHandlerEEE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr13ResultHandlerC1ENSt3__110shared_ptrINS1_10CommonInfoEEEN7android2spINS1_12FrameHandlerEEE() called");
    return 0;
}

/* Demangled: std::__1::__list_imp<NSCam::v3::AppStreamMgr::CallbackParcel, std::__1::allocator<NSCam::v3::AppStreamMgr::CallbackParcel> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impIN5NSCam2v312AppStreamMgr14CallbackParcelENS_9allocatorIS4_EEE5clearEv(void) {
    ALOGD("_ZNSt3__110__list_impIN5NSCam2v312AppStreamMgr14CallbackParcelENS_9allocatorIS4_EEE5clearEv() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<long, NSCam::v3::AppStreamMgr::FrameHandler::MetaConfigItem> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler14MetaConfigItemEEEEE = NULL;

/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::write(unsigned char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE5writeEPKhm(void) {
    ALOGD("_ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE5writeEPKhm() called");
    return 0;
}

/* Demangled: NSCam::v3::Camera3ImageStreamInfo::getBufPlanes() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v322Camera3ImageStreamInfo12getBufPlanesEv(void) {
    ALOGD("_ZNK5NSCam2v322Camera3ImageStreamInfo12getBufPlanesEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::v3::AppImageStreamBuffer::~AppImageStreamBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam2v320AppImageStreamBufferD0Ev(void) {
    ALOGD("_ZThn8_N5NSCam2v320AppImageStreamBufferD0Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::AppStreamMgr::CallbackParcel::ImageItem>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel9ImageItemEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel9ImageItemEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamBuffer> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::MetaItem> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler8MetaItemEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler8MetaItemEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::AppStreamMgr::FrameHandler::ImageItem */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v312AppStreamMgr12FrameHandler9ImageItemE = NULL;

/* Demangled: void std::__1::vector<android::hardware::camera::device::V3_4::CaptureResult, std::__1::allocator<android::hardware::camera::device::V3_4::CaptureResult> >::__push_back_slow_path<android::hardware::camera::device::V3_4::CaptureResult>(android::hardware::camera::device::V3_4::CaptureResult&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android8hardware6camera6device4V3_413CaptureResultENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android8hardware6camera6device4V3_413CaptureResultENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_() called");
    return 0;
}

/* Demangled: NSCam::v3::AppMetaStreamBuffer::AppMetaStreamBuffer(android::sp<NSCam::v3::IMetaStreamInfo>, NSCam::v3::IUsersManager*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v319AppMetaStreamBufferC1EN7android2spINS0_15IMetaStreamInfoEEEPNS0_13IUsersManagerE(void) {
    ALOGD("_ZN5NSCam2v319AppMetaStreamBufferC1EN7android2spINS0_15IMetaStreamInfoEEEPNS0_13IUsersManagerE() called");
    return 0;
}

/* Exported Object: typeinfo name for std::logic_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt11logic_error = NULL;

/* Demangled: NSCam::v3::AppStreamMgr::ConfigHandler::createImageStreamInfo(android::hardware::camera::device::V3_4::Stream const&, android::hardware::camera::device::V3_4::HalStream&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v312AppStreamMgr13ConfigHandler21createImageStreamInfoERKN7android8hardware6camera6device4V3_46StreamERNS7_9HalStreamE(void) {
    ALOGD("_ZNK5NSCam2v312AppStreamMgr13ConfigHandler21createImageStreamInfoERKN7android8hardware6camera6device4V3_46StreamERNS7_9HalStreamE() called");
    return 0;
}

/* Demangled: android::Vector<int>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIiE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::Vector<int>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIiE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::Utils::TStreamBuffer<NSCam::v3::AppMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer>-in-NSCam::v3::AppMetaStreamBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v319AppMetaStreamBufferE0_NS0_5Utils13TStreamBufferINS0_19AppMetaStreamBufferENS0_17IMetaStreamBufferEEE = NULL;

/* Demangled: NSCam::v3::AppStreamMgr::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr7destroyEv(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr7destroyEv() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::AppStreamMgr::CallbackHandler>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v312AppStreamMgr15CallbackHandlerEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam2v312AppStreamMgr15CallbackHandlerEED2Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::AppStreamMgr::CallbackParcel::PhysicMetaItem>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel14PhysicMetaItemEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel14PhysicMetaItemEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: typeinfo name for std::length_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt12length_error = NULL;

/* Demangled: std::__1::vector<NSCam::BufPlane, std::__1::allocator<NSCam::BufPlane> >::__append(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE8__appendEm(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE8__appendEm() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::BufferHandleCache::~BufferHandleCache() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr17BufferHandleCacheD2Ev(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr17BufferHandleCacheD2Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::AppImageStreamBuffer::AppStreamBufferHandle::AppStreamBufferHandle(native_handle const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v320AppImageStreamBuffer21AppStreamBufferHandleC1EPK13native_handle(void) {
    ALOGD("_ZN5NSCam2v320AppImageStreamBuffer21AppStreamBufferHandleC1EPK13native_handle() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::AppStreamMgr::CallbackParcel::MetaItem>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel8MetaItemEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel8MetaItemEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::RequestHandler::checkOneRequest(android::hardware::camera::device::V3_4::CaptureRequest const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v312AppStreamMgr14RequestHandler15checkOneRequestERKN7android8hardware6camera6device4V3_414CaptureRequestE(void) {
    ALOGD("_ZNK5NSCam2v312AppStreamMgr14RequestHandler15checkOneRequestERKN7android8hardware6camera6device4V3_414CaptureRequestE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::AppStreamMgr::FrameHandler::MetaConfigItem> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler14MetaConfigItemEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler14MetaConfigItemEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::AppStreamMgr::CallbackHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v312AppStreamMgr15CallbackHandlerE = NULL;

/* Demangled: NSCam::v3::AppImageStreamBuffer::~AppImageStreamBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v320AppImageStreamBufferD0Ev(void) {
    ALOGD("_ZN5NSCam2v320AppImageStreamBufferD0Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void) {
    ALOGD("_ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::AppStreamMgr::FrameHandler::ImageConfigItem> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler15ImageConfigItemEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler15ImageConfigItemEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__push_back_slow_path<int const&>(int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_() called");
    return 0;
}

/* Demangled: NSCam::v3::Camera3ImageStreamInfo::getUsageForAllocator() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v322Camera3ImageStreamInfo20getUsageForAllocatorEv(void) {
    ALOGD("_ZNK5NSCam2v322Camera3ImageStreamInfo20getUsageForAllocatorEv() called");
    return 0;
}

/* Exported Object: vtable for android::List<NSCam::v3::Utils::StreamBufferImp::RWUser> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android4ListIN5NSCam2v35Utils15StreamBufferImp6RWUserEEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::AppStreamMgr::FrameHandler::ImageConfigItem> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler15ImageConfigItemEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler15ImageConfigItemEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::GrallocStaticInfo::Plane>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::AppStreamMgr::BufferHandleCache, std::__1::allocator<NSCam::v3::AppStreamMgr::BufferHandleCache> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v312AppStreamMgr17BufferHandleCacheENS_9allocatorIS4_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v312AppStreamMgr17BufferHandleCacheENS_9allocatorIS4_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Camera3ImageStreamInfo::getImageBufferInfo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v322Camera3ImageStreamInfo18getImageBufferInfoEv(void) {
    ALOGD("_ZNK5NSCam2v322Camera3ImageStreamInfo18getImageBufferInfoEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::AppStreamMgr::RequestHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v312AppStreamMgr14RequestHandlerE = NULL;

/* Exported Object: construction vtable for NSCam::v3::Utils::TStreamBuffer<NSCam::v3::AppImageStreamBuffer, NSCam::v3::IImageStreamBuffer>-in-NSCam::v3::AppErrorImageStreamBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v325AppErrorImageStreamBufferE0_NS0_5Utils13TStreamBufferINS0_20AppImageStreamBufferENS0_18IImageStreamBufferEEE = NULL;

/* Demangled: android::Vector<NSCam::GrallocStaticInfo::Plane>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::List<android::sp<NSCam::v3::AppStreamMgr::FrameHandler::FrameParcel> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android4ListINS_2spIN5NSCam2v312AppStreamMgr12FrameHandler11FrameParcelEEEEE = NULL;

/* Demangled: NSCam::v3::AppStreamMgr::CallbackHandler::performCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr15CallbackHandler15performCallbackEv(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr15CallbackHandler15performCallbackEv() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::ConfigHandler::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr13ConfigHandler7destroyEv(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr13ConfigHandler7destroyEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Camera3ImageStreamInfo::getOriImgFormat() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v322Camera3ImageStreamInfo15getOriImgFormatEv(void) {
    ALOGD("_ZNK5NSCam2v322Camera3ImageStreamInfo15getOriImgFormatEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::Utils::StreamBufferImp-in-NSCam::v3::AppErrorImageStreamBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v325AppErrorImageStreamBufferE8_NS0_5Utils15StreamBufferImpE = NULL;

/* Demangled: android::Vector<NSCam::v3::IAppStreamManager::Request>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317IAppStreamManager7RequestEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317IAppStreamManager7RequestEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::wp<NSCam::v3::AppStreamMgr::FrameHandler::FrameParcel> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2wpIN5NSCam2v312AppStreamMgr12FrameHandler11FrameParcelEEEEEE10do_compareEPKvSC_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2wpIN5NSCam2v312AppStreamMgr12FrameHandler11FrameParcelEEEEEE10do_compareEPKvSC_() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::PhysicMetaItem> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler14PhysicMetaItemEEEEEEE = NULL;

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::AppStreamMgr::CommonInfo, std::__1::allocator<NSCam::v3::AppStreamMgr::CommonInfo> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v312AppStreamMgr10CommonInfoENS_9allocatorIS4_EEEE = NULL;

/* Demangled: NSCam::v3::AppStreamMgr::ConfigHandler::endConfigureStreams(android::hardware::camera::device::V3_4::HalStreamConfiguration&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr13ConfigHandler19endConfigureStreamsERN7android8hardware6camera6device4V3_422HalStreamConfigurationE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr13ConfigHandler19endConfigureStreamsERN7android8hardware6camera6device4V3_422HalStreamConfigurationE() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::v3::AppStreamMgr::CommonInfo>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam2v312AppStreamMgr10CommonInfoEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam2v312AppStreamMgr10CommonInfoEED2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Camera3ImageStreamInfo::getStreamType() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n48_NK5NSCam2v322Camera3ImageStreamInfo13getStreamTypeEv(void) {
    ALOGD("_ZTv0_n48_NK5NSCam2v322Camera3ImageStreamInfo13getStreamTypeEv() called");
    return 0;
}

/* Demangled: NSCam::v3::AppImageStreamBuffer::getAcquireFence() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v320AppImageStreamBuffer15getAcquireFenceEv(void) {
    ALOGD("_ZNK5NSCam2v320AppImageStreamBuffer15getAcquireFenceEv() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::RequestHandler::RequestHandler(std::__1::shared_ptr<NSCam::v3::AppStreamMgr::CommonInfo>, std::__1::shared_ptr<android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1> >, android::sp<NSCam::v3::AppStreamMgr::FrameHandler>, android::sp<NSCam::v3::AppStreamMgr::BatchHandler>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr14RequestHandlerC1ENSt3__110shared_ptrINS1_10CommonInfoEEENS4_IN7android8hardware12MessageQueueIhLNS8_8MQFlavorE1EEEEENS7_2spINS1_12FrameHandlerEEENSD_INS1_12BatchHandlerEEE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr14RequestHandlerC1ENSt3__110shared_ptrINS1_10CommonInfoEEENS4_IN7android8hardware12MessageQueueIhLNS8_8MQFlavorE1EEEEENS7_2spINS1_12FrameHandlerEEENSD_INS1_12BatchHandlerEEE() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::MessageQueue(unsigned long, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EEC2Emb(void) {
    ALOGD("_ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EEC2Emb() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::AppStreamMgr::BufferHandleCache, std::__1::allocator<NSCam::v3::AppStreamMgr::BufferHandleCache> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v312AppStreamMgr17BufferHandleCacheENS_9allocatorIS4_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v312AppStreamMgr17BufferHandleCacheENS_9allocatorIS4_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::ConfigHandler::extractSMVRBatchInfo(android::hardware::camera::device::V3_4::StreamConfiguration const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr13ConfigHandler20extractSMVRBatchInfoERKN7android8hardware6camera6device4V3_419StreamConfigurationE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr13ConfigHandler20extractSMVRBatchInfoERKN7android8hardware6camera6device4V3_419StreamConfigurationE() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long, NSCam::v3::AppStreamMgr::BufferHandleCache::BufferHandle>, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, NSCam::v3::AppStreamMgr::BufferHandleCache::BufferHandle>, std::__1::hash<unsigned long>, true>, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, NSCam::v3::AppStreamMgr::BufferHandleCache::BufferHandle>, std::__1::equal_to<unsigned long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long, NSCam::v3::AppStreamMgr::BufferHandleCache::BufferHandle> > >::remove(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, NSCam::v3::AppStreamMgr::BufferHandleCache::BufferHandle>, void*>*>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeImN5NSCam2v312AppStreamMgr17BufferHandleCache12BufferHandleEEENS_22__unordered_map_hasherImS7_NS_4hashImEELb1EEENS_21__unordered_map_equalImS7_NS_8equal_toImEELb1EEENS_9allocatorIS7_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS7_PvEEEE(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeImN5NSCam2v312AppStreamMgr17BufferHandleCache12BufferHandleEEENS_22__unordered_map_hasherImS7_NS_4hashImEELb1EEENS_21__unordered_map_equalImS7_NS_8equal_toImEELb1EEENS_9allocatorIS7_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS7_PvEEEE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Camera3ImageStreamInfo::getMaxBufNum() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n56_NK5NSCam2v322Camera3ImageStreamInfo12getMaxBufNumEv(void) {
    ALOGD("_ZTv0_n56_NK5NSCam2v322Camera3ImageStreamInfo12getMaxBufNumEv() called");
    return 0;
}

/* Demangled: NSCam::v3::AppImageStreamBuffer::AppStreamBufferHandle::~AppStreamBufferHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v320AppImageStreamBuffer21AppStreamBufferHandleD1Ev(void) {
    ALOGD("_ZN5NSCam2v320AppImageStreamBuffer21AppStreamBufferHandleD1Ev() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::IImageStreamBuffer>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v318IImageStreamBufferEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam2v318IImageStreamBufferEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::checkRequestError(NSCam::v3::AppStreamMgr::FrameHandler::FrameParcel const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr12FrameHandler17checkRequestErrorERKNS2_11FrameParcelE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr12FrameHandler17checkRequestErrorERKNS2_11FrameParcelE() called");
    return 0;
}

/* Demangled: libat_lock_n */
extern "C" __attribute__((visibility("default"))) int libat_lock_n(void) {
    ALOGD("libat_lock_n() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::CallbackHandler::convertMetaToHidlWithMergeEnabled(NSCam::v3::AppStreamMgr::CallbackParcel const&, std::__1::vector<android::hardware::camera::device::V3_4::CaptureResult, std::__1::allocator<android::hardware::camera::device::V3_4::CaptureResult> >&, std::__1::vector<camera_metadata*, std::__1::allocator<camera_metadata*> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr15CallbackHandler33convertMetaToHidlWithMergeEnabledERKNS1_14CallbackParcelERNSt3__16vectorIN7android8hardware6camera6device4V3_413CaptureResultENS6_9allocatorISD_EEEERNS7_IP15camera_metadataNSE_ISJ_EEEE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr15CallbackHandler33convertMetaToHidlWithMergeEnabledERKNS1_14CallbackParcelERNSt3__16vectorIN7android8hardware6camera6device4V3_413CaptureResultENS6_9allocatorISD_EEEERNS7_IP15camera_metadataNSE_ISJ_EEEE() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<android::hardware::camera::device::V3_4::CaptureResult, std::__1::allocator<android::hardware::camera::device::V3_4::CaptureResult> >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseIN7android8hardware6camera6device4V3_413CaptureResultENS_9allocatorIS6_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseIN7android8hardware6camera6device4V3_413CaptureResultENS_9allocatorIS6_EEED2Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::hardware::camera::device::V3_2::StreamRotation, unsigned long> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_214StreamRotationEmEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_214StreamRotationEmEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::IImageStreamInfo>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v316IImageStreamInfoEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam2v316IImageStreamInfoEED2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::AppImageStreamBuffer::enqueUserGraph(android::sp<NSCam::v3::IUsersManager::IUserGraph>) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n72_N5NSCam2v320AppImageStreamBuffer14enqueUserGraphEN7android2spINS0_13IUsersManager10IUserGraphEEE(void) {
    ALOGD("_ZTv0_n72_N5NSCam2v320AppImageStreamBuffer14enqueUserGraphEN7android2spINS0_13IUsersManager10IUserGraphEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::prepareCallbackIfPossible(NSCam::v3::AppStreamMgr::CallbackParcel&, NSCam::v3::AppStreamMgr::FrameHandler::MetaItemSet&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr12FrameHandler25prepareCallbackIfPossibleERNS1_14CallbackParcelERNS2_11MetaItemSetE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr12FrameHandler25prepareCallbackIfPossibleERNS1_14CallbackParcelERNS2_11MetaItemSetE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::hardware::camera::device::V3_2::StreamType, unsigned long> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_210StreamTypeEmEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_210StreamTypeEmEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::AppStreamMgr::BatchHandler>::operator=(NSCam::v3::AppStreamMgr::BatchHandler*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v312AppStreamMgr12BatchHandlerEEaSEPS4_(void) {
    ALOGD("_ZN7android2spIN5NSCam2v312AppStreamMgr12BatchHandlerEEaSEPS4_() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEEE = NULL;

/* Demangled: NSCam::v3::AppImageStreamBuffer::Allocator::Allocator(NSCam::v3::IImageStreamInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v320AppImageStreamBuffer9AllocatorC2EPNS0_16IImageStreamInfoE(void) {
    ALOGD("_ZN5NSCam2v320AppImageStreamBuffer9AllocatorC2EPNS0_16IImageStreamInfoE() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::dumpState(android::Printer&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr9dumpStateERN7android7PrinterERKNSt3__16vectorINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEENSA_ISC_EEEE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr9dumpStateERN7android7PrinterERKNSt3__16vectorINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEENSA_ISC_EEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::RequestHandler::createImageStreamBuffer(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::hardware::camera::device::V3_2::StreamBuffer const&, native_handle const*, std::__1::shared_ptr<NSCam::v3::AppImageStreamBuffer::AppStreamBufferHandle>, int, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v312AppStreamMgr14RequestHandler23createImageStreamBufferERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERKN7android8hardware6camera6device4V3_212StreamBufferEPK13native_handleNS3_10shared_ptrINS0_20AppImageStreamBuffer21AppStreamBufferHandleEEEii(void) {
    ALOGD("_ZNK5NSCam2v312AppStreamMgr14RequestHandler23createImageStreamBufferERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERKN7android8hardware6camera6device4V3_212StreamBufferEPK13native_handleNS3_10shared_ptrINS0_20AppImageStreamBuffer21AppStreamBufferHandleEEEii() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::addConfigStream(NSCam::v3::Camera3ImageStreamInfo*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr12FrameHandler15addConfigStreamEPNS0_22Camera3ImageStreamInfoEb(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr12FrameHandler15addConfigStreamEPNS0_22Camera3ImageStreamInfoEb() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::AppImageStreamBuffer-in-NSCam::v3::AppErrorImageStreamBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v325AppErrorImageStreamBufferE0_NS0_20AppImageStreamBufferE = NULL;

/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > android::hardware::details::arrayToString<android::hardware::hidl_vec<android::hardware::camera::device::V3_4::Stream> >(android::hardware::hidl_vec<android::hardware::camera::device::V3_4::Stream> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13arrayToStringINS0_8hidl_vecINS0_6camera6device4V3_46StreamEEEEENSt3__112basic_stringIcNS9_11char_traitsIcEENS9_9allocatorIcEEEERKT_m(void) {
    ALOGD("_ZN7android8hardware7details13arrayToStringINS0_8hidl_vecINS0_6camera6device4V3_46StreamEEEEENSt3__112basic_stringIcNS9_11char_traitsIcEENS9_9allocatorIcEEEERKT_m() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::v3::AppStreamMgr::CallbackParcel::PhysicMetaItem> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel14PhysicMetaItemEEE = NULL;

/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::importBuffer(long, unsigned long, native_handle const*&, std::__1::shared_ptr<NSCam::v3::AppImageStreamBuffer::AppStreamBufferHandle>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr12FrameHandler12importBufferElmRPK13native_handleRNSt3__110shared_ptrINS0_20AppImageStreamBuffer21AppStreamBufferHandleEEE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr12FrameHandler12importBufferElmRPK13native_handleRNSt3__110shared_ptrINS0_20AppImageStreamBuffer21AppStreamBufferHandleEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::CallbackHandler::traceDisplayIf(unsigned int, unsigned long, NSCam::v3::AppStreamMgr::CallbackParcel::ImageItem const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr15CallbackHandler14traceDisplayIfEjmRKNS1_14CallbackParcel9ImageItemE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr15CallbackHandler14traceDisplayIfEjmRKNS1_14CallbackParcel9ImageItemE() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::BatchHandler::waitUntilDrained(long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr12BatchHandler16waitUntilDrainedEl(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr12BatchHandler16waitUntilDrainedEl() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<int> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIiEE = NULL;

/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > android::hardware::toString<android::hardware::camera::device::V3_4::Stream>(android::hardware::hidl_vec<android::hardware::camera::device::V3_4::Stream> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8toStringINS0_6camera6device4V3_46StreamEEENSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKNS0_8hidl_vecIT_EE(void) {
    ALOGD("_ZN7android8hardware8toStringINS0_6camera6device4V3_46StreamEEENSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKNS0_8hidl_vecIT_EE() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> > > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEEEEEEE = NULL;

/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::prepareErrorFrame(NSCam::v3::AppStreamMgr::CallbackParcel&, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::FrameParcel> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr12FrameHandler17prepareErrorFrameERNS1_14CallbackParcelERKN7android2spINS2_11FrameParcelEEE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr12FrameHandler17prepareErrorFrameERNS1_14CallbackParcelERKN7android2spINS2_11FrameParcelEEE() called");
    return 0;
}

/* Exported Object: typeinfo for std::exception */
extern "C" __attribute__((visibility("default"))) void* _ZTISt9exception = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<android::hardware::camera::device::V3_2::StreamType, unsigned long> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_210StreamTypeEmEEE10do_compareEPKvSA_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_210StreamTypeEmEEE10do_compareEPKvSA_() called");
    return 0;
}

/* Demangled: NSCam::v3::AppErrorImageStreamBuffer::AppErrorImageStreamBuffer(unsigned long, android::sp<NSCam::v3::IImageStreamInfo>, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v325AppErrorImageStreamBufferC2EmN7android2spINS0_16IImageStreamInfoEEEi(void) {
    ALOGD("_ZN5NSCam2v325AppErrorImageStreamBufferC2EmN7android2spINS0_16IImageStreamInfoEEEi() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::RequestHandler::createMetaStreamBuffer(android::sp<NSCam::v3::IMetaStreamInfo>, NSCam::IMetadata const&, bool) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v312AppStreamMgr14RequestHandler22createMetaStreamBufferEN7android2spINS0_15IMetaStreamInfoEEERKNS_9IMetadataEb(void) {
    ALOGD("_ZNK5NSCam2v312AppStreamMgr14RequestHandler22createMetaStreamBufferEN7android2spINS0_15IMetaStreamInfoEEERKNS_9IMetadataEb() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::AppStreamMgr::FrameHandler::ImageConfigItem> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler15ImageConfigItemEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler15ImageConfigItemEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::PhysicMetaItem> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler14PhysicMetaItemEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler14PhysicMetaItemEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::CallbackHandler::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr15CallbackHandler7destroyEv(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr15CallbackHandler7destroyEv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<long, std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<long> >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableIlNS_4hashIlEENS_8equal_toIlEENS_9allocatorIlEEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableIlNS_4hashIlEENS_8equal_toIlEENS_9allocatorIlEEE8__rehashEm() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<long, std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<long> >::~__hash_table() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableIlNS_4hashIlEENS_8equal_toIlEENS_9allocatorIlEEED2Ev(void) {
    ALOGD("_ZNSt3__112__hash_tableIlNS_4hashIlEENS_8equal_toIlEENS_9allocatorIlEEED2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Camera3ImageStreamInfo::getMinInitBufNum() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n72_NK5NSCam2v322Camera3ImageStreamInfo16getMinInitBufNumEv(void) {
    ALOGD("_ZTv0_n72_NK5NSCam2v322Camera3ImageStreamInfo16getMinInitBufNumEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::AppImageStreamBuffer::~AppImageStreamBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam2v320AppImageStreamBufferD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam2v320AppImageStreamBufferD1Ev() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::AppStreamMgr::BatchHandler>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v312AppStreamMgr12BatchHandlerEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam2v312AppStreamMgr12BatchHandlerEED2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::IStreamBuffer-in-NSCam::v3::AppMetaStreamBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v319AppMetaStreamBufferE0_NS0_13IStreamBufferE = NULL;

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi() called");
    return 0;
}

/* Exported Object: construction vtable for android::Thread-in-NSCam::v3::AppStreamMgr::ResultHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v312AppStreamMgr13ResultHandlerE0_N7android6ThreadE = NULL;

/* Demangled: NSCam::v3::AppStreamMgr::BatchHandler::registerBatch(android::Vector<NSCam::v3::IAppStreamManager::Request>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr12BatchHandler13registerBatchEN7android6VectorINS0_17IAppStreamManager7RequestEEE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr12BatchHandler13registerBatchEN7android6VectorINS0_17IAppStreamManager7RequestEEE() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long, NSCam::v3::AppStreamMgr::BufferHandleCache::BufferHandle>, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, NSCam::v3::AppStreamMgr::BufferHandleCache::BufferHandle>, std::__1::hash<unsigned long>, true>, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, NSCam::v3::AppStreamMgr::BufferHandleCache::BufferHandle>, std::__1::equal_to<unsigned long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long, NSCam::v3::AppStreamMgr::BufferHandleCache::BufferHandle> > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeImN5NSCam2v312AppStreamMgr17BufferHandleCache12BufferHandleEEENS_22__unordered_map_hasherImS7_NS_4hashImEELb1EEENS_21__unordered_map_equalImS7_NS_8equal_toImEELb1EEENS_9allocatorIS7_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeImN5NSCam2v312AppStreamMgr17BufferHandleCache12BufferHandleEEENS_22__unordered_map_hasherImS7_NS_4hashImEELb1EEENS_21__unordered_map_equalImS7_NS_8equal_toImEELb1EEENS_9allocatorIS7_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::AppMetaStreamBuffer::toString() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n336_NK5NSCam2v319AppMetaStreamBuffer8toStringEv(void) {
    ALOGD("_ZTv0_n336_NK5NSCam2v319AppMetaStreamBuffer8toStringEv() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::waitUntilDrained(long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr12FrameHandler16waitUntilDrainedEl(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr12FrameHandler16waitUntilDrainedEl() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::dump() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v312AppStreamMgr12FrameHandler4dumpEv(void) {
    ALOGD("_ZNK5NSCam2v312AppStreamMgr12FrameHandler4dumpEv() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::ConfigHandler::beginConfigureStreams(android::hardware::camera::device::V3_4::StreamConfiguration const&, android::hardware::camera::device::V3_4::HalStreamConfiguration&, NSCam::v3::IAppStreamManager::ConfigAppStreams&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr13ConfigHandler21beginConfigureStreamsERKN7android8hardware6camera6device4V3_419StreamConfigurationERNS7_22HalStreamConfigurationERNS0_17IAppStreamManager16ConfigAppStreamsE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr13ConfigHandler21beginConfigureStreamsERKN7android8hardware6camera6device4V3_419StreamConfigurationERNS7_22HalStreamConfigurationERNS0_17IAppStreamManager16ConfigAppStreamsE() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::ConfigHandler::checkStream(android::hardware::camera::device::V3_4::Stream const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v312AppStreamMgr13ConfigHandler11checkStreamERKN7android8hardware6camera6device4V3_46StreamE(void) {
    ALOGD("_ZNK5NSCam2v312AppStreamMgr13ConfigHandler11checkStreamERKN7android8hardware6camera6device4V3_46StreamE() called");
    return 0;
}

/* Demangled: NSCam::v3::AppErrorImageStreamBuffer::getAcquireFence() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v325AppErrorImageStreamBuffer15getAcquireFenceEv(void) {
    ALOGD("_ZNK5NSCam2v325AppErrorImageStreamBuffer15getAcquireFenceEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::AppStreamMgr::FrameHandler::FrameParcel */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v312AppStreamMgr12FrameHandler11FrameParcelE = NULL;

/* Exported Object: vtable for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: NSCam::v3::AppStreamMgr::CallbackHandler::convertPhysicMetaToHidl(NSCam::v3::AppStreamMgr::CallbackParcel const&, android::hardware::camera::device::V3_4::CaptureResult&, std::__1::vector<camera_metadata*, std::__1::allocator<camera_metadata*> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr15CallbackHandler23convertPhysicMetaToHidlERKNS1_14CallbackParcelERN7android8hardware6camera6device4V3_413CaptureResultERNSt3__16vectorIP15camera_metadataNSD_9allocatorISG_EEEE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr15CallbackHandler23convertPhysicMetaToHidlERKNS1_14CallbackParcelERN7android8hardware6camera6device4V3_413CaptureResultERNSt3__16vectorIP15camera_metadataNSD_9allocatorISG_EEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::BatchHandler::removeBatchLocked(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr12BatchHandler17removeBatchLockedEj(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr12BatchHandler17removeBatchLockedEj() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* obj___bss_start __asm__("__bss_start") = NULL;

/* Demangled: android::sp<NSCam::v3::AppStreamMgr::RequestHandler>::operator=(NSCam::v3::AppStreamMgr::RequestHandler*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v312AppStreamMgr14RequestHandlerEEaSEPS4_(void) {
    ALOGD("_ZN7android2spIN5NSCam2v312AppStreamMgr14RequestHandlerEEaSEPS4_() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::v3::AppStreamMgr::CallbackParcel::ImageItem> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel9ImageItemEEE = NULL;

/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::uncacheBuffer(long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr12FrameHandler13uncacheBufferElm(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr12FrameHandler13uncacheBufferElm() called");
    return 0;
}

/* Demangled: android::wp<NSCam::v3::AppStreamMgr::FrameHandler::FrameParcel>::~wp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2wpIN5NSCam2v312AppStreamMgr12FrameHandler11FrameParcelEED2Ev(void) {
    ALOGD("_ZN7android2wpIN5NSCam2v312AppStreamMgr12FrameHandler11FrameParcelEED2Ev() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<android::hardware::camera::device::V3_2::StreamType, unsigned long> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_210StreamTypeEmEEEE = NULL;

/* Demangled: android::sp<NSCam::v3::IStreamInfo>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v311IStreamInfoEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam2v311IStreamInfoEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::RequestHandler::registerRequests(android::Vector<NSCam::v3::IAppStreamManager::Request> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr14RequestHandler16registerRequestsERKN7android6VectorINS0_17IAppStreamManager7RequestEEE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr14RequestHandler16registerRequestsERKN7android6VectorINS0_17IAppStreamManager7RequestEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::PhysicMetaItem> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler14PhysicMetaItemEEEEEE10do_compareEPKvSC_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler14PhysicMetaItemEEEEEE10do_compareEPKvSC_() called");
    return 0;
}

/* Demangled: android::Vector<int>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIiE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::ImageItem> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler9ImageItemEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler9ImageItemEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::AppImageStreamBuffer::toString() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v320AppImageStreamBuffer8toStringEv(void) {
    ALOGD("_ZNK5NSCam2v320AppImageStreamBuffer8toStringEv() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::RequestHandler::createOneRequest(android::hardware::camera::device::V3_4::CaptureRequest const&, NSCam::v3::IAppStreamManager::Request&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr14RequestHandler16createOneRequestERKN7android8hardware6camera6device4V3_414CaptureRequestERNS0_17IAppStreamManager7RequestE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr14RequestHandler16createOneRequestERKN7android8hardware6camera6device4V3_414CaptureRequestERNS0_17IAppStreamManager7RequestE() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::wp<NSCam::v3::AppStreamMgr::FrameHandler::FrameParcel> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2wpIN5NSCam2v312AppStreamMgr12FrameHandler11FrameParcelEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2wpIN5NSCam2v312AppStreamMgr12FrameHandler11FrameParcelEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::AppStreamMgr::FrameHandler::MetaConfigItem> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler14MetaConfigItemEEEE10do_compareEPKvSA_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler14MetaConfigItemEEEE10do_compareEPKvSA_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::PhysicMetaItem> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler14PhysicMetaItemEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler14PhysicMetaItemEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::GrallocStaticInfo::Plane>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::IDebuggee>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam9IDebuggeeEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam9IDebuggeeEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::prepareErrorImage(NSCam::v3::AppStreamMgr::CallbackParcel&, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::ImageItem> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr12FrameHandler17prepareErrorImageERNS1_14CallbackParcelERKN7android2spINS2_9ImageItemEEE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr12FrameHandler17prepareErrorImageERNS1_14CallbackParcelERKN7android2spINS2_9ImageItemEEE() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::TIStreamBuffer<NSCam::v3::IImageStreamInfo, NSCam::IImageBufferHeap>-in-NSCam::v3::AppImageStreamBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v320AppImageStreamBufferE0_NS0_14TIStreamBufferINS0_16IImageStreamInfoENS_16IImageBufferHeapEEE = NULL;

/* Demangled: android::sp<NSCam::v3::AppStreamMgr::ResultHandler>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v312AppStreamMgr13ResultHandlerEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam2v312AppStreamMgr13ResultHandlerEED2Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::v3::AppStreamMgr::ResultItem> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v312AppStreamMgr10ResultItemEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v312AppStreamMgr10ResultItemEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::AppStreamMgr::FrameHandler::PhysicMetaItem>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v312AppStreamMgr12FrameHandler14PhysicMetaItemEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam2v312AppStreamMgr12FrameHandler14PhysicMetaItemEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::CallbackHandler::waitUntilQueue1NotEmpty() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr15CallbackHandler23waitUntilQueue1NotEmptyEv(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr15CallbackHandler23waitUntilQueue1NotEmptyEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Camera3ImageStreamInfo::getStreamName() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_NK5NSCam2v322Camera3ImageStreamInfo13getStreamNameEv(void) {
    ALOGD("_ZTv0_n32_NK5NSCam2v322Camera3ImageStreamInfo13getStreamNameEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::Utils::TStreamBuffer<NSCam::v3::AppImageStreamBuffer, NSCam::v3::IImageStreamBuffer>-in-NSCam::v3::AppImageStreamBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v320AppImageStreamBufferE0_NS0_5Utils13TStreamBufferINS0_20AppImageStreamBufferENS0_18IImageStreamBufferEEE = NULL;

/* Demangled: android::sp<NSCam::v3::AppStreamMgr::RequestHandler>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v312AppStreamMgr14RequestHandlerEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam2v312AppStreamMgr14RequestHandlerEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::update(android::KeyedVector<unsigned int, android::sp<NSCam::v3::AppStreamMgr::ResultItem> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr12FrameHandler6updateERKN7android11KeyedVectorIjNS3_2spINS1_10ResultItemEEEEE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr12FrameHandler6updateERKN7android11KeyedVectorIjNS3_2spINS1_10ResultItemEEEEE() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::Utils::MetaStreamInfo>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v35Utils14MetaStreamInfoEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam2v35Utils14MetaStreamInfoEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::dumpLocked() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v312AppStreamMgr12FrameHandler10dumpLockedEv(void) {
    ALOGD("_ZNK5NSCam2v312AppStreamMgr12FrameHandler10dumpLockedEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::Camera3ImageStreamInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v322Camera3ImageStreamInfoE = NULL;

/* Demangled: NSCam::v3::AppImageStreamBuffer::AppImageStreamBuffer(unsigned long, android::sp<NSCam::v3::IImageStreamInfo>, android::sp<NSCam::IGraphicImageBufferHeap>, native_handle const*, std::__1::shared_ptr<NSCam::v3::AppImageStreamBuffer::AppStreamBufferHandle>, NSCam::v3::IUsersManager*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v320AppImageStreamBufferC2EmN7android2spINS0_16IImageStreamInfoEEENS3_INS_23IGraphicImageBufferHeapEEEPK13native_handleNSt3__110shared_ptrINS1_21AppStreamBufferHandleEEEPNS0_13IUsersManagerE(void) {
    ALOGD("_ZN5NSCam2v320AppImageStreamBufferC2EmN7android2spINS0_16IImageStreamInfoEEENS3_INS_23IGraphicImageBufferHeapEEEPK13native_handleNSt3__110shared_ptrINS1_21AppStreamBufferHandleEEEPNS0_13IUsersManagerE() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::IUsersManager::IUserGraph>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v313IUsersManager10IUserGraphEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam2v313IUsersManager10IUserGraphEED2Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::AppStreamMgr::CallbackParcel::PhysicMetaItem>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel14PhysicMetaItemEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel14PhysicMetaItemEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::AppStreamMgr::CallbackParcel::PhysicMetaItem>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel14PhysicMetaItemEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel14PhysicMetaItemEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::BufferHandleCache::dumpState(android::Printer&, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v312AppStreamMgr17BufferHandleCache9dumpStateERN7android7PrinterEj(void) {
    ALOGD("_ZNK5NSCam2v312AppStreamMgr17BufferHandleCache9dumpStateERN7android7PrinterEj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::AppStreamMgr::FrameHandler::MetaConfigItem> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler14MetaConfigItemEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler14MetaConfigItemEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::AppStreamMgr::FrameHandler::PhysicMetaItem */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v312AppStreamMgr12FrameHandler14PhysicMetaItemE = NULL;

/* Demangled: NSCam::v3::AppImageStreamBuffer::getBufferId() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v320AppImageStreamBuffer11getBufferIdEv(void) {
    ALOGD("_ZNK5NSCam2v320AppImageStreamBuffer11getBufferIdEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::AppStreamMgr::CallbackParcel::MetaItem>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel8MetaItemEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel8MetaItemEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::v3::AppStreamMgr::ResultItem> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v312AppStreamMgr10ResultItemEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v312AppStreamMgr10ResultItemEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::ImageItem> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler9ImageItemEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler9ImageItemEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::v3::AppStreamMgr::MyDebuggee> std::__1::shared_ptr<NSCam::v3::AppStreamMgr::MyDebuggee>::make_shared<NSCam::v3::AppStreamMgr*>(NSCam::v3::AppStreamMgr*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam2v312AppStreamMgr10MyDebuggeeEE11make_sharedIJPS3_EEES5_DpOT_(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam2v312AppStreamMgr10MyDebuggeeEE11make_sharedIJPS3_EEES5_DpOT_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::v3::AppStreamMgr::ResultItem> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v312AppStreamMgr10ResultItemEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v312AppStreamMgr10ResultItemEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::CallbackHandler::convertImageToHidl(NSCam::v3::AppStreamMgr::CallbackParcel const&, std::__1::vector<android::hardware::camera::device::V3_4::CaptureResult, std::__1::allocator<android::hardware::camera::device::V3_4::CaptureResult> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr15CallbackHandler18convertImageToHidlERKNS1_14CallbackParcelERNSt3__16vectorIN7android8hardware6camera6device4V3_413CaptureResultENS6_9allocatorISD_EEEE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr15CallbackHandler18convertImageToHidlERKNS1_14CallbackParcelERNSt3__16vectorIN7android8hardware6camera6device4V3_413CaptureResultENS6_9allocatorISD_EEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::hardware::camera::device::V3_2::StreamRotation, unsigned long> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_214StreamRotationEmEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_214StreamRotationEmEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::v3::AppImageStreamBuffer::Allocator::Allocator(NSCam::v3::IImageStreamInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v320AppImageStreamBuffer9AllocatorC1EPNS0_16IImageStreamInfoE(void) {
    ALOGD("_ZN5NSCam2v320AppImageStreamBuffer9AllocatorC1EPNS0_16IImageStreamInfoE() called");
    return 0;
}

/* Demangled: NSCam::v3::AppImageStreamBuffer::AppImageStreamBuffer(unsigned long, android::sp<NSCam::v3::IImageStreamInfo>, android::sp<NSCam::IGraphicImageBufferHeap>, native_handle const*, std::__1::shared_ptr<NSCam::v3::AppImageStreamBuffer::AppStreamBufferHandle>, NSCam::v3::IUsersManager*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v320AppImageStreamBufferC1EmN7android2spINS0_16IImageStreamInfoEEENS3_INS_23IGraphicImageBufferHeapEEEPK13native_handleNSt3__110shared_ptrINS1_21AppStreamBufferHandleEEEPNS0_13IUsersManagerE(void) {
    ALOGD("_ZN5NSCam2v320AppImageStreamBufferC1EmN7android2spINS0_16IImageStreamInfoEEENS3_INS_23IGraphicImageBufferHeapEEEPK13native_handleNSt3__110shared_ptrINS1_21AppStreamBufferHandleEEEPNS0_13IUsersManagerE() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::AppStreamMgr(NSCam::v3::IAppStreamManager::CreationInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgrC2ERKNS0_17IAppStreamManager12CreationInfoE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgrC2ERKNS0_17IAppStreamManager12CreationInfoE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::AppStreamMgr::CallbackParcel::PhysicMetaItem>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel14PhysicMetaItemEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel14PhysicMetaItemEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::AppStreamMgr::MyDebuggee, std::__1::allocator<NSCam::v3::AppStreamMgr::MyDebuggee> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v312AppStreamMgr10MyDebuggeeENS_9allocatorIS4_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v312AppStreamMgr10MyDebuggeeENS_9allocatorIS4_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>, std::__1::allocator<android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1> > >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN7android8hardware12MessageQueueIhLNS2_8MQFlavorE1EEENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN7android8hardware12MessageQueueIhLNS2_8MQFlavorE1EEENS_9allocatorIS5_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::AppStreamMgr::FrameHandler::FrameParcel>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v312AppStreamMgr12FrameHandler11FrameParcelEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam2v312AppStreamMgr12FrameHandler11FrameParcelEED2Ev() called");
    return 0;
}

/* Exported Object: vtable for android::List<android::sp<NSCam::v3::AppStreamMgr::FrameHandler::ImageItem> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android4ListINS_2spIN5NSCam2v312AppStreamMgr12FrameHandler9ImageItemEEEEE = NULL;

/* Demangled: NSCam::v3::AppStreamMgr::CallbackHandler::updateStatistics_shutter(unsigned long, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr15CallbackHandler24updateStatistics_shutterEmj(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr15CallbackHandler24updateStatistics_shutterEmj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::hardware::camera::device::V3_2::StreamType, unsigned long> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_210StreamTypeEmEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_210StreamTypeEmEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::v3::Camera3ImageStreamInfo::getSensorId() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v322Camera3ImageStreamInfo11getSensorIdEv(void) {
    ALOGD("_ZNK5NSCam2v322Camera3ImageStreamInfo11getSensorIdEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Camera3ImageStreamInfo::getStream() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v322Camera3ImageStreamInfo9getStreamEv(void) {
    ALOGD("_ZNK5NSCam2v322Camera3ImageStreamInfo9getStreamEv() called");
    return 0;
}

/* Demangled: NSCam::v3::AppImageStreamBuffer::setReleaseFence(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v320AppImageStreamBuffer15setReleaseFenceEi(void) {
    ALOGD("_ZN5NSCam2v320AppImageStreamBuffer15setReleaseFenceEi() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::waitUntilDrained(long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr16waitUntilDrainedEl(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr16waitUntilDrainedEl() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::prepareReturnMeta(NSCam::v3::AppStreamMgr::CallbackParcel&, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::MetaItem> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr12FrameHandler17prepareReturnMetaERNS1_14CallbackParcelERKN7android2spINS2_8MetaItemEEE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr12FrameHandler17prepareReturnMetaERNS1_14CallbackParcelERKN7android2spINS2_8MetaItemEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::ImageItem> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler9ImageItemEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler9ImageItemEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::AppImageStreamBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v320AppImageStreamBufferE = NULL;

/* Exported Object: vtable for NSCam::v3::AppStreamMgr */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v312AppStreamMgrE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::MetaItem> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler8MetaItemEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler8MetaItemEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::CallbackHandler::threadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr15CallbackHandler10threadLoopEv(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr15CallbackHandler10threadLoopEv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<unsigned long, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<unsigned long> >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableImNS_4hashImEENS_8equal_toImEENS_9allocatorImEEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableImNS_4hashImEENS_8equal_toImEENS_9allocatorImEEE8__rehashEm() called");
    return 0;
}

/* Demangled: __atomic_load_16 */
extern "C" __attribute__((visibility("default"))) int fn___atomic_load_16(void) __asm__("__atomic_load_16");
int fn___atomic_load_16(void) {
    ALOGD("__atomic_load_16() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::AppStreamMgr::CallbackParcel::Error>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel5ErrorEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel5ErrorEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::AppStreamMgr::CallbackParcel::Error>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel5ErrorEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel5ErrorEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::IAppStreamManager::Request>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317IAppStreamManager7RequestEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317IAppStreamManager7RequestEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::prepareErrorMetaIfPossible(NSCam::v3::AppStreamMgr::CallbackParcel&, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::MetaItem> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr12FrameHandler26prepareErrorMetaIfPossibleERNS1_14CallbackParcelERKN7android2spINS2_8MetaItemEEE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr12FrameHandler26prepareErrorMetaIfPossibleERNS1_14CallbackParcelERKN7android2spINS2_8MetaItemEEE() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, android::wp<NSCam::v3::AppStreamMgr::FrameHandler::FrameParcel> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjNS_2wpIN5NSCam2v312AppStreamMgr12FrameHandler11FrameParcelEEEEEEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<android::hardware::camera::device::V3_2::StreamRotation, unsigned long> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_214StreamRotationEmEEE10do_compareEPKvSA_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_214StreamRotationEmEEE10do_compareEPKvSA_() called");
    return 0;
}

/* Demangled: android::sp<NSCam::IMetadataProvider>::operator=(android::sp<NSCam::IMetadataProvider> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam17IMetadataProviderEEaSERKS3_(void) {
    ALOGD("_ZN7android2spIN5NSCam17IMetadataProviderEEaSERKS3_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::AppStreamMgr::FrameHandler::ImageConfigItem> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler15ImageConfigItemEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler15ImageConfigItemEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::ConfigHandler::createMetaStreamInfo(long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v312AppStreamMgr13ConfigHandler20createMetaStreamInfoEl(void) {
    ALOGD("_ZNK5NSCam2v312AppStreamMgr13ConfigHandler20createMetaStreamInfoEl() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::AppStreamMgr::BatchHandler::InFlightBatch, std::__1::allocator<NSCam::v3::AppStreamMgr::BatchHandler::InFlightBatch> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v312AppStreamMgr12BatchHandler13InFlightBatchENS_9allocatorIS5_EEEE = NULL;

/* Demangled: NSCam::v3::Camera3ImageStreamInfo::getImgFormat() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v322Camera3ImageStreamInfo12getImgFormatEv(void) {
    ALOGD("_ZNK5NSCam2v322Camera3ImageStreamInfo12getImgFormatEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Camera3ImageStreamInfo::isSecure() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v322Camera3ImageStreamInfo8isSecureEv(void) {
    ALOGD("_ZNK5NSCam2v322Camera3ImageStreamInfo8isSecureEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::AppStreamMgr::CommonInfo, std::__1::allocator<NSCam::v3::AppStreamMgr::CommonInfo> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v312AppStreamMgr10CommonInfoENS_9allocatorIS4_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v312AppStreamMgr10CommonInfoENS_9allocatorIS4_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamBuffer> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::AppStreamMgr::FrameHandler::ImageItem>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v312AppStreamMgr12FrameHandler9ImageItemEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam2v312AppStreamMgr12FrameHandler9ImageItemEED2Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::hardware::camera::device::V3_2::NotifyMsg, std::__1::allocator<android::hardware::camera::device::V3_2::NotifyMsg> >::__push_back_slow_path<android::hardware::camera::device::V3_2::NotifyMsg>(android::hardware::camera::device::V3_2::NotifyMsg&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android8hardware6camera6device4V3_29NotifyMsgENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android8hardware6camera6device4V3_29NotifyMsgENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::IUsersManager-in-NSCam::v3::AppErrorImageStreamBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v325AppErrorImageStreamBufferE0_NS0_13IUsersManagerE = NULL;

/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > android::hardware::details::arrayToString<android::hardware::hidl_vec<unsigned char> >(android::hardware::hidl_vec<unsigned char> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13arrayToStringINS0_8hidl_vecIhEEEENSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKT_m(void) {
    ALOGD("_ZN7android8hardware7details13arrayToStringINS0_8hidl_vecIhEEEENSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKT_m() called");
    return 0;
}

/* Demangled: NSCam::v3::Camera3ImageStreamInfo::getPhysicalCameraId() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v322Camera3ImageStreamInfo19getPhysicalCameraIdEv(void) {
    ALOGD("_ZNK5NSCam2v322Camera3ImageStreamInfo19getPhysicalCameraIdEv() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::ResultHandler::readyToRun() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr13ResultHandler10readyToRunEv(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr13ResultHandler10readyToRunEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::MetaItem> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler8MetaItemEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler8MetaItemEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::hardware::camera::device::V3_2::StreamType, unsigned long> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_210StreamTypeEmEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_210StreamTypeEmEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::v3::AppStreamMgr::BatchHandler::InFlightBatch>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam2v312AppStreamMgr12BatchHandler13InFlightBatchEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam2v312AppStreamMgr12BatchHandler13InFlightBatchEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::RequestHandler::createRequests(android::hardware::hidl_vec<android::hardware::camera::device::V3_4::CaptureRequest> const&, android::Vector<NSCam::v3::IAppStreamManager::Request>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr14RequestHandler14createRequestsERKN7android8hardware8hidl_vecINS4_6camera6device4V3_414CaptureRequestEEERNS3_6VectorINS0_17IAppStreamManager7RequestEEE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr14RequestHandler14createRequestsERKN7android8hardware8hidl_vecINS4_6camera6device4V3_414CaptureRequestEEERNS3_6VectorINS0_17IAppStreamManager7RequestEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::cacheBuffer(long, unsigned long, native_handle const*&, std::__1::shared_ptr<NSCam::v3::AppImageStreamBuffer::AppStreamBufferHandle>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr12FrameHandler11cacheBufferElmRPK13native_handleNSt3__110shared_ptrINS0_20AppImageStreamBuffer21AppStreamBufferHandleEEE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr12FrameHandler11cacheBufferElmRPK13native_handleNSt3__110shared_ptrINS0_20AppImageStreamBuffer21AppStreamBufferHandleEEE() called");
    return 0;
}

/* Demangled: android::Vector<android::String8>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE12do_constructEPvm() called");
    return 0;
}

/* Demangled: __atomic_load */
extern "C" __attribute__((visibility("default"))) int fn___atomic_load(void) __asm__("__atomic_load");
int fn___atomic_load(void) {
    ALOGD("__atomic_load() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::ConfigHandler::ConfigHandler(std::__1::shared_ptr<NSCam::v3::AppStreamMgr::CommonInfo>, android::sp<NSCam::v3::AppStreamMgr::FrameHandler>, android::sp<NSCam::v3::AppStreamMgr::BatchHandler>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr13ConfigHandlerC1ENSt3__110shared_ptrINS1_10CommonInfoEEEN7android2spINS1_12FrameHandlerEEENS8_INS1_12BatchHandlerEEE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr13ConfigHandlerC1ENSt3__110shared_ptrINS1_10CommonInfoEEEN7android2spINS1_12FrameHandlerEEENS8_INS1_12BatchHandlerEEE() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::updateItemSet(NSCam::v3::AppStreamMgr::FrameHandler::MetaItemSet&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr12FrameHandler13updateItemSetERNS2_11MetaItemSetE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr12FrameHandler13updateItemSetERNS2_11MetaItemSetE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::AppStreamMgr::FrameHandler::ImageConfigItem> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler15ImageConfigItemEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler15ImageConfigItemEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: __atomic_store_16 */
extern "C" __attribute__((visibility("default"))) int fn___atomic_store_16(void) __asm__("__atomic_store_16");
int fn___atomic_store_16(void) {
    ALOGD("__atomic_store_16() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::AppStreamMgr::CallbackParcel::MetaItem>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel8MetaItemEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel8MetaItemEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamBuffer> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::ResultHandler::requestExit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr13ResultHandler11requestExitEv(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr13ResultHandler11requestExitEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::wp<NSCam::v3::AppStreamMgr::FrameHandler::FrameParcel> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2wpIN5NSCam2v312AppStreamMgr12FrameHandler11FrameParcelEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2wpIN5NSCam2v312AppStreamMgr12FrameHandler11FrameParcelEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Camera3ImageStreamInfo::getStreamId() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_NK5NSCam2v322Camera3ImageStreamInfo11getStreamIdEv(void) {
    ALOGD("_ZTv0_n40_NK5NSCam2v322Camera3ImageStreamInfo11getStreamIdEv() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::BufferHandleCache::~BufferHandleCache() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr17BufferHandleCacheD1Ev(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr17BufferHandleCacheD1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::PhysicMetaItem> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler14PhysicMetaItemEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler14PhysicMetaItemEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::ImageItem> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler9ImageItemEEEEEE10do_compareEPKvSC_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler9ImageItemEEEEEE10do_compareEPKvSC_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::AppStreamMgr::FrameHandler::FrameQueue */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v312AppStreamMgr12FrameHandler10FrameQueueE = NULL;

/* Demangled: __atomic_store */
extern "C" __attribute__((visibility("default"))) int fn___atomic_store(void) __asm__("__atomic_store");
int fn___atomic_store(void) {
    ALOGD("__atomic_store() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::hardware::camera::device::V3_2::StreamRotation, unsigned long> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_214StreamRotationEmEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_214StreamRotationEmEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::TIStreamBuffer<NSCam::v3::IImageStreamInfo, NSCam::IImageBufferHeap>-in-NSCam::v3::AppErrorImageStreamBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v325AppErrorImageStreamBufferE0_NS0_14TIStreamBufferINS0_16IImageStreamInfoENS_16IImageBufferHeapEEE = NULL;

/* Exported Object: vtable for NSCam::v3::AppMetaStreamBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v319AppMetaStreamBufferE = NULL;

/* Demangled: android::Vector<NSCam::v3::AppStreamMgr::CallbackParcel::MetaItem>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel8MetaItemEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel8MetaItemEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::v3::AppStreamMgr::CallbackParcel::Error> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel5ErrorEEE = NULL;

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::v3::AppStreamMgr::ResultItem> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v312AppStreamMgr10ResultItemEEEEEEE = NULL;

/* Exported Object: construction vtable for NSCam::v3::IStreamInfo-in-NSCam::v3::Camera3ImageStreamInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v322Camera3ImageStreamInfoE0_NS0_11IStreamInfoE = NULL;

/* Demangled: NSCam::v3::AppImageStreamBuffer::getReleaseFence() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v320AppImageStreamBuffer15getReleaseFenceEv(void) {
    ALOGD("_ZNK5NSCam2v320AppImageStreamBuffer15getReleaseFenceEv() called");
    return 0;
}

/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > android::hardware::toString<android::hardware::camera::device::V3_4::HalStream>(android::hardware::hidl_vec<android::hardware::camera::device::V3_4::HalStream> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8toStringINS0_6camera6device4V3_49HalStreamEEENSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKNS0_8hidl_vecIT_EE(void) {
    ALOGD("_ZN7android8hardware8toStringINS0_6camera6device4V3_49HalStreamEEENSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKNS0_8hidl_vecIT_EE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::AppStreamMgr::CallbackParcel::PhysicMetaItem>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel14PhysicMetaItemEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel14PhysicMetaItemEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>, std::__1::allocator<android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1> > >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN7android8hardware12MessageQueueIhLNS2_8MQFlavorE1EEENS_9allocatorIS5_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN7android8hardware12MessageQueueIhLNS2_8MQFlavorE1EEENS_9allocatorIS5_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: NSCam::v3::AppImageStreamBuffer::~AppImageStreamBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v320AppImageStreamBufferD2Ev(void) {
    ALOGD("_ZN5NSCam2v320AppImageStreamBufferD2Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::v3::AppMetaStreamBuffer::AppMetaStreamBuffer(android::sp<NSCam::v3::IMetaStreamInfo>, NSCam::v3::IUsersManager*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v319AppMetaStreamBufferC2EN7android2spINS0_15IMetaStreamInfoEEEPNS0_13IUsersManagerE(void) {
    ALOGD("_ZN5NSCam2v319AppMetaStreamBufferC2EN7android2spINS0_15IMetaStreamInfoEEEPNS0_13IUsersManagerE() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::updateResult(NSCam::v3::IAppStreamManager::UpdateResultParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr12updateResultERKNS0_17IAppStreamManager18UpdateResultParamsE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr12updateResultERKNS0_17IAppStreamManager18UpdateResultParamsE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::v3::AppStreamMgr::ResultItem> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v312AppStreamMgr10ResultItemEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v312AppStreamMgr10ResultItemEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::AppMetaStreamBuffer::Allocator::operator()(NSCam::IMetadata const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v319AppMetaStreamBuffer9AllocatorclERKNS_9IMetadataE(void) {
    ALOGD("_ZN5NSCam2v319AppMetaStreamBuffer9AllocatorclERKNS_9IMetadataE() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::GrallocStaticInfo::Plane> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEEE = NULL;

/* Demangled: NSCam::v3::AppStreamMgr::BatchHandler::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr12BatchHandler7destroyEv(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr12BatchHandler7destroyEv() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::removeBufferCache(android::hardware::hidl_vec<android::hardware::camera::device::V3_2::BufferCache> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr17removeBufferCacheERKN7android8hardware8hidl_vecINS3_6camera6device4V3_211BufferCacheEEE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr17removeBufferCacheERKN7android8hardware8hidl_vecINS3_6camera6device4V3_211BufferCacheEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::ImageItem> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler9ImageItemEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler9ImageItemEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<int>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIiE10do_destroyEPvm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::AppImageStreamBuffer::Allocator */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v320AppImageStreamBuffer9AllocatorE = NULL;

/* Demangled: android::sp<NSCam::v3::IAppStreamManager::PhysicalResult>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v317IAppStreamManager14PhysicalResultEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam2v317IAppStreamManager14PhysicalResultEED2Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::MetaItem> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler8MetaItemEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler8MetaItemEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Exported Object: VTT for NSCam::v3::Camera3ImageStreamInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam2v322Camera3ImageStreamInfoE = NULL;

/* Exported Object: construction vtable for NSCam::v3::IStreamBuffer-in-NSCam::v3::AppErrorImageStreamBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v325AppErrorImageStreamBufferE0_NS0_13IStreamBufferE = NULL;

/* Demangled: android::Vector<NSCam::v3::AppStreamMgr::CallbackParcel::Error>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel5ErrorEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel5ErrorEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::AppStreamMgr::CallbackParcel::ImageItem>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel9ImageItemEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel9ImageItemEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::sp<NSCam::IGraphicImageBufferHeap>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam23IGraphicImageBufferHeapEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam23IGraphicImageBufferHeapEED2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::IAppStreamManager-in-NSCam::v3::AppStreamMgr */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v312AppStreamMgrE0_NS0_17IAppStreamManagerE = NULL;

/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::updateItemSet(NSCam::v3::AppStreamMgr::FrameHandler::ImageItemSet&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr12FrameHandler13updateItemSetERNS2_12ImageItemSetE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr12FrameHandler13updateItemSetERNS2_12ImageItemSetE() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::AppStreamMgr::FrameHandler::MetaItem>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v312AppStreamMgr12FrameHandler8MetaItemEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam2v312AppStreamMgr12FrameHandler8MetaItemEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::CallbackHandler::updateStatistics_finalPartialMetadata(bool, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr15CallbackHandler37updateStatistics_finalPartialMetadataEbj(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr15CallbackHandler37updateStatistics_finalPartialMetadataEbj() called");
    return 0;
}

/* Demangled: NSCam::v3::Camera3ImageStreamInfo::getSecureInfo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v322Camera3ImageStreamInfo13getSecureInfoEv(void) {
    ALOGD("_ZNK5NSCam2v322Camera3ImageStreamInfo13getSecureInfoEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::Utils::StreamBufferImp-in-NSCam::v3::AppMetaStreamBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v319AppMetaStreamBufferE8_NS0_5Utils15StreamBufferImpE = NULL;

/* Demangled: virtual thunk to NSCam::v3::AppImageStreamBuffer::toString() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n336_NK5NSCam2v320AppImageStreamBuffer8toStringEv(void) {
    ALOGD("_ZTv0_n336_NK5NSCam2v320AppImageStreamBuffer8toStringEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamBuffer> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Exported Object: VTT for NSCam::v3::AppStreamMgr::ResultHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam2v312AppStreamMgr13ResultHandlerE = NULL;

/* Exported Object: vtable for NSCam::v3::AppStreamMgr::ResultHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v312AppStreamMgr13ResultHandlerE = NULL;

/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::updateCallback(std::__1::list<NSCam::v3::AppStreamMgr::CallbackParcel, std::__1::allocator<NSCam::v3::AppStreamMgr::CallbackParcel> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr12FrameHandler14updateCallbackERNSt3__14listINS1_14CallbackParcelENS3_9allocatorIS5_EEEE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr12FrameHandler14updateCallbackERNSt3__14listINS1_14CallbackParcelENS3_9allocatorIS5_EEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::setOperationMode(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr12FrameHandler16setOperationModeEj(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr12FrameHandler16setOperationModeEj() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<long, NSCam::v3::AppStreamMgr::FrameHandler::ImageConfigItem> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler15ImageConfigItemEEEEE = NULL;

/* Demangled: android::Vector<android::String8>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::AppImageStreamBuffer::setAcquireFence(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v320AppImageStreamBuffer15setAcquireFenceEi(void) {
    ALOGD("_ZN5NSCam2v320AppImageStreamBuffer15setAcquireFenceEi() called");
    return 0;
}

/* Exported Object: VTT for NSCam::v3::AppMetaStreamBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam2v319AppMetaStreamBufferE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::AppStreamMgr::FrameHandler::ImageConfigItem> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler15ImageConfigItemEEEE10do_compareEPKvSA_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler15ImageConfigItemEEEE10do_compareEPKvSA_() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::BufferHandleCache::BufferHandleCache(std::__1::shared_ptr<NSCam::v3::AppStreamMgr::CommonInfo>, long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr17BufferHandleCacheC2ENSt3__110shared_ptrINS1_10CommonInfoEEEl(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr17BufferHandleCacheC2ENSt3__110shared_ptrINS1_10CommonInfoEEEl() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::read(unsigned char*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE4readEPhm(void) {
    ALOGD("_ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EE4readEPhm() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::getConfigMetaStream(unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v312AppStreamMgr12FrameHandler19getConfigMetaStreamEm(void) {
    ALOGD("_ZNK5NSCam2v312AppStreamMgr12FrameHandler19getConfigMetaStreamEm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::hardware::camera::device::V3_2::StreamType, unsigned long> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_210StreamTypeEmEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_210StreamTypeEmEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::AppStreamMgr::ConfigHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v312AppStreamMgr13ConfigHandlerE = NULL;

/* Demangled: android::Vector<NSCam::v3::AppStreamMgr::CallbackParcel::ImageItem>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel9ImageItemEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel9ImageItemEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::AppMetaStreamBuffer::Allocator::Allocator(NSCam::v3::IMetaStreamInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v319AppMetaStreamBuffer9AllocatorC2EPNS0_15IMetaStreamInfoE(void) {
    ALOGD("_ZN5NSCam2v319AppMetaStreamBuffer9AllocatorC2EPNS0_15IMetaStreamInfoE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::wp<NSCam::v3::AppStreamMgr::FrameHandler::FrameParcel> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2wpIN5NSCam2v312AppStreamMgr12FrameHandler11FrameParcelEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2wpIN5NSCam2v312AppStreamMgr12FrameHandler11FrameParcelEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::hardware::camera::device::V3_4::CaptureResult, std::__1::allocator<android::hardware::camera::device::V3_4::CaptureResult> >::__push_back_slow_path<android::hardware::camera::device::V3_4::CaptureResult const&>(android::hardware::camera::device::V3_4::CaptureResult const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android8hardware6camera6device4V3_413CaptureResultENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android8hardware6camera6device4V3_413CaptureResultENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::v3::AppImageStreamBuffer::AppStreamBufferHandle>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam2v320AppImageStreamBuffer21AppStreamBufferHandleEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam2v320AppImageStreamBuffer21AppStreamBufferHandleEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::AppStreamMgr(NSCam::v3::IAppStreamManager::CreationInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgrC1ERKNS0_17IAppStreamManager12CreationInfoE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgrC1ERKNS0_17IAppStreamManager12CreationInfoE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::PhysicMetaItem> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler14PhysicMetaItemEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler14PhysicMetaItemEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::hardware::camera::device::V3_2::StreamType, unsigned long> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_210StreamTypeEmEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_210StreamTypeEmEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: __atomic_store_1 */
extern "C" __attribute__((visibility("default"))) int fn___atomic_store_1(void) __asm__("__atomic_store_1");
int fn___atomic_store_1(void) {
    ALOGD("__atomic_store_1() called");
    return 0;
}

/* Demangled: NSCam::v3::AppErrorImageStreamBuffer::getReleaseFence() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v325AppErrorImageStreamBuffer15getReleaseFenceEv(void) {
    ALOGD("_ZNK5NSCam2v325AppErrorImageStreamBuffer15getReleaseFenceEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::TIStreamBuffer<NSCam::v3::IMetaStreamInfo, NSCam::IMetadata>-in-NSCam::v3::AppMetaStreamBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v319AppMetaStreamBufferE0_NS0_14TIStreamBufferINS0_15IMetaStreamInfoENS_9IMetadataEEE = NULL;

/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::isReturnable(android::sp<NSCam::v3::AppStreamMgr::FrameHandler::MetaItem> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v312AppStreamMgr12FrameHandler12isReturnableERKN7android2spINS2_8MetaItemEEE(void) {
    ALOGD("_ZNK5NSCam2v312AppStreamMgr12FrameHandler12isReturnableERKN7android2spINS2_8MetaItemEEE() called");
    return 0;
}

/* Exported Object: typeinfo for std::logic_error */
extern "C" __attribute__((visibility("default"))) void* _ZTISt11logic_error = NULL;

/* Demangled: NSCam::v3::AppStreamMgr::BatchHandler::updateCallback(std::__1::list<NSCam::v3::AppStreamMgr::CallbackParcel, std::__1::allocator<NSCam::v3::AppStreamMgr::CallbackParcel> >, std::__1::list<NSCam::v3::AppStreamMgr::CallbackParcel, std::__1::allocator<NSCam::v3::AppStreamMgr::CallbackParcel> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr12BatchHandler14updateCallbackENSt3__14listINS1_14CallbackParcelENS3_9allocatorIS5_EEEERS8_(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr12BatchHandler14updateCallbackENSt3__14listINS1_14CallbackParcelENS3_9allocatorIS5_EEEERS8_() called");
    return 0;
}

/* Demangled: __atomic_store_2 */
extern "C" __attribute__((visibility("default"))) int fn___atomic_store_2(void) __asm__("__atomic_store_2");
int fn___atomic_store_2(void) {
    ALOGD("__atomic_store_2() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::AppStreamMgr::MyDebuggee */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v312AppStreamMgr10MyDebuggeeE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::ImageItem> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler9ImageItemEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler9ImageItemEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::AppImageStreamBuffer::~AppImageStreamBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam2v320AppImageStreamBufferD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam2v320AppImageStreamBufferD0Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::getCaptureResultMetadataQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr29getCaptureResultMetadataQueueEv(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr29getCaptureResultMetadataQueueEv() called");
    return 0;
}

/* Demangled: android::sp<android::hardware::camera::device::V3_4::ICameraDeviceCallback>::operator=(android::sp<android::hardware::camera::device::V3_4::ICameraDeviceCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_8hardware6camera6device4V3_421ICameraDeviceCallbackEEaSERKS6_(void) {
    ALOGD("_ZN7android2spINS_8hardware6camera6device4V3_421ICameraDeviceCallbackEEaSERKS6_() called");
    return 0;
}

/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > android::hardware::details::arrayToString<android::hardware::hidl_vec<android::hardware::camera::device::V3_4::HalStream> >(android::hardware::hidl_vec<android::hardware::camera::device::V3_4::HalStream> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13arrayToStringINS0_8hidl_vecINS0_6camera6device4V3_49HalStreamEEEEENSt3__112basic_stringIcNS9_11char_traitsIcEENS9_9allocatorIcEEEERKT_m(void) {
    ALOGD("_ZN7android8hardware7details13arrayToStringINS0_8hidl_vecINS0_6camera6device4V3_49HalStreamEEEEENSt3__112basic_stringIcNS9_11char_traitsIcEENS9_9allocatorIcEEEERKT_m() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::AppStreamMgr::MyDebuggee, std::__1::allocator<NSCam::v3::AppStreamMgr::MyDebuggee> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v312AppStreamMgr10MyDebuggeeENS_9allocatorIS4_EEEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::IAppStreamManager::Request>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317IAppStreamManager7RequestEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317IAppStreamManager7RequestEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::ResultHandler::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr13ResultHandler7destroyEv(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr13ResultHandler7destroyEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::MetaItem> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler8MetaItemEEEEEE10do_compareEPKvSC_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler8MetaItemEEEEEE10do_compareEPKvSC_() called");
    return 0;
}

/* Demangled: __atomic_store_4 */
extern "C" __attribute__((visibility("default"))) int fn___atomic_store_4(void) __asm__("__atomic_store_4");
int fn___atomic_store_4(void) {
    ALOGD("__atomic_store_4() called");
    return 0;
}

/* Demangled: NSCam::v3::Camera3ImageStreamInfo::getTransform() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v322Camera3ImageStreamInfo12getTransformEv(void) {
    ALOGD("_ZNK5NSCam2v322Camera3ImageStreamInfo12getTransformEv() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::RequestHandler::convertStreamBuffer(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::hardware::camera::device::V3_2::StreamBuffer const&, android::sp<NSCam::v3::AppImageStreamBuffer>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v312AppStreamMgr14RequestHandler19convertStreamBufferERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERKN7android8hardware6camera6device4V3_212StreamBufferERNSC_2spINS0_20AppImageStreamBufferEEE(void) {
    ALOGD("_ZNK5NSCam2v312AppStreamMgr14RequestHandler19convertStreamBufferERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERKN7android8hardware6camera6device4V3_212StreamBufferERNSC_2spINS0_20AppImageStreamBufferEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> > > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::MetaItem> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler8MetaItemEEEEEEE = NULL;

/* Demangled: std::__1::vector<unsigned long, std::__1::allocator<unsigned long> >::vector(std::__1::vector<unsigned long, std::__1::allocator<unsigned long> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorImNS_9allocatorImEEEC2ERKS3_(void) {
    ALOGD("_ZNSt3__16vectorImNS_9allocatorImEEEC2ERKS3_() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamBuffer> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> > > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::v3::AppStreamMgr::ResultItem> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v312AppStreamMgr10ResultItemEEEEEE10do_compareEPKvSB_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v312AppStreamMgr10ResultItemEEEEEE10do_compareEPKvSB_() called");
    return 0;
}

/* Demangled: android::Vector<android::String8>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long, NSCam::v3::AppStreamMgr::BufferHandleCache::BufferHandle>, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, NSCam::v3::AppStreamMgr::BufferHandleCache::BufferHandle>, std::__1::hash<unsigned long>, true>, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, NSCam::v3::AppStreamMgr::BufferHandleCache::BufferHandle>, std::__1::equal_to<unsigned long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long, NSCam::v3::AppStreamMgr::BufferHandleCache::BufferHandle> > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeImN5NSCam2v312AppStreamMgr17BufferHandleCache12BufferHandleEEENS_22__unordered_map_hasherImS7_NS_4hashImEELb1EEENS_21__unordered_map_equalImS7_NS_8equal_toImEELb1EEENS_9allocatorIS7_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeImN5NSCam2v312AppStreamMgr17BufferHandleCache12BufferHandleEEENS_22__unordered_map_hasherImS7_NS_4hashImEELb1EEENS_21__unordered_map_equalImS7_NS_8equal_toImEELb1EEENS_9allocatorIS7_EEE6rehashEm() called");
    return 0;
}

/* Demangled: NSCam::v3::Camera3ImageStreamInfo::getAllocBufPlanes() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v322Camera3ImageStreamInfo17getAllocBufPlanesEv(void) {
    ALOGD("_ZNK5NSCam2v322Camera3ImageStreamInfo17getAllocBufPlanesEv() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::v3::IAppStreamManager::Request> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam2v317IAppStreamManager7RequestEEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::PhysicMetaItem> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler14PhysicMetaItemEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler14PhysicMetaItemEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::BatchHandler::push(std::__1::list<NSCam::v3::AppStreamMgr::CallbackParcel, std::__1::allocator<NSCam::v3::AppStreamMgr::CallbackParcel> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr12BatchHandler4pushERNSt3__14listINS1_14CallbackParcelENS3_9allocatorIS5_EEEE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr12BatchHandler4pushERNSt3__14listINS1_14CallbackParcelENS3_9allocatorIS5_EEEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__push_back_slow_path<unsigned int const&>(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIRKjEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIRKjEEvOT_() called");
    return 0;
}

/* Demangled: android::Vector<int>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIiE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::dumpState(android::Printer&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr12FrameHandler9dumpStateERN7android7PrinterERKNSt3__16vectorINS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEENSB_ISD_EEEE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr12FrameHandler9dumpStateERN7android7PrinterERKNSt3__16vectorINS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEENSB_ISD_EEEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<camera_metadata*, std::__1::allocator<camera_metadata*> >::__push_back_slow_path<camera_metadata* const&>(camera_metadata* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIP15camera_metadataNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIP15camera_metadataNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_() called");
    return 0;
}

/* Demangled: void std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__push_back_slow_path<unsigned int>(unsigned int&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIjEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIjEEvOT_() called");
    return 0;
}

/* Demangled: __atomic_store_8 */
extern "C" __attribute__((visibility("default"))) int fn___atomic_store_8(void) __asm__("__atomic_store_8");
int fn___atomic_store_8(void) {
    ALOGD("__atomic_store_8() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::initialize() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr10initializeEv(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr10initializeEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::AppStreamMgr::CallbackParcel::ImageItem>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel9ImageItemEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel9ImageItemEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::isReturnable(android::sp<NSCam::v3::AppStreamMgr::FrameHandler::ImageItem> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v312AppStreamMgr12FrameHandler12isReturnableERKN7android2spINS2_9ImageItemEEE(void) {
    ALOGD("_ZNK5NSCam2v312AppStreamMgr12FrameHandler12isReturnableERKN7android2spINS2_9ImageItemEEE() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<long, void*>*>, bool> std::__1::__hash_table<long, std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<long> >::__emplace_unique_key_args<long, long const&>(long const&, long const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableIlNS_4hashIlEENS_8equal_toIlEENS_9allocatorIlEEE25__emplace_unique_key_argsIlJRKlEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIlPvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableIlNS_4hashIlEENS_8equal_toIlEENS_9allocatorIlEEE25__emplace_unique_key_argsIlJRKlEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIlPvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: NSCam::v3::Camera3ImageStreamInfo::getStreamType() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v322Camera3ImageStreamInfo13getStreamTypeEv(void) {
    ALOGD("_ZNK5NSCam2v322Camera3ImageStreamInfo13getStreamTypeEv() called");
    return 0;
}

/* Demangled: NSCam::v3::AppMetaStreamBuffer::AppMetaStreamBuffer(android::sp<NSCam::v3::IMetaStreamInfo>, NSCam::IMetadata const&, NSCam::v3::IUsersManager*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v319AppMetaStreamBufferC2EN7android2spINS0_15IMetaStreamInfoEEERKNS_9IMetadataEPNS0_13IUsersManagerE(void) {
    ALOGD("_ZN5NSCam2v319AppMetaStreamBufferC2EN7android2spINS0_15IMetaStreamInfoEEERKNS_9IMetadataEPNS0_13IUsersManagerE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::wp<NSCam::v3::AppStreamMgr::FrameHandler::FrameParcel> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2wpIN5NSCam2v312AppStreamMgr12FrameHandler11FrameParcelEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2wpIN5NSCam2v312AppStreamMgr12FrameHandler11FrameParcelEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::IUsersManager-in-NSCam::v3::AppImageStreamBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v320AppImageStreamBufferE0_NS0_13IUsersManagerE = NULL;

/* Demangled: NSCam::v3::AppStreamMgr::beginConfigureStreams(android::hardware::camera::device::V3_4::StreamConfiguration const&, android::hardware::camera::device::V3_4::HalStreamConfiguration&, NSCam::v3::IAppStreamManager::ConfigAppStreams&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr21beginConfigureStreamsERKN7android8hardware6camera6device4V3_419StreamConfigurationERNS6_22HalStreamConfigurationERNS0_17IAppStreamManager16ConfigAppStreamsE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr21beginConfigureStreamsERKN7android8hardware6camera6device4V3_419StreamConfigurationERNS6_22HalStreamConfigurationERNS0_17IAppStreamManager16ConfigAppStreamsE() called");
    return 0;
}

/* Exported Object: typeinfo name for std::exception */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt9exception = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE10do_compareEPKvSA_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE10do_compareEPKvSA_() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::Camera3ImageStreamInfo>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v322Camera3ImageStreamInfoEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam2v322Camera3ImageStreamInfoEED2Ev() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::v3::AppStreamMgr::CallbackParcel::MetaItem> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel8MetaItemEEE = NULL;

/* Demangled: android::Vector<NSCam::v3::IAppStreamManager::Request>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317IAppStreamManager7RequestEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317IAppStreamManager7RequestEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<android::String8>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1>::~MessageQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EED2Ev(void) {
    ALOGD("_ZN7android8hardware12MessageQueueIhLNS0_8MQFlavorE1EED2Ev() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::IMetaStreamBuffer>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v317IMetaStreamBufferEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam2v317IMetaStreamBufferEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::registerStreamBuffers(android::KeyedVector<long, android::sp<NSCam::v3::IImageStreamBuffer> > const&, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::FrameParcel>, NSCam::v3::AppStreamMgr::FrameHandler::ImageItemSet*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr12FrameHandler21registerStreamBuffersERKN7android11KeyedVectorIlNS3_2spINS0_18IImageStreamBufferEEEEENS5_INS2_11FrameParcelEEEPNS2_12ImageItemSetE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr12FrameHandler21registerStreamBuffersERKN7android11KeyedVectorIlNS3_2spINS0_18IImageStreamBufferEEEEENS5_INS2_11FrameParcelEEEPNS2_12ImageItemSetE() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::getConfigImageStream(long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v312AppStreamMgr12FrameHandler20getConfigImageStreamEl(void) {
    ALOGD("_ZNK5NSCam2v312AppStreamMgr12FrameHandler20getConfigImageStreamEl() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::AppStreamMgr::FrameHandler::MetaConfigItem> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler14MetaConfigItemEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v312AppStreamMgr12FrameHandler14MetaConfigItemEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<android::String8> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_7String8EEE = NULL;

/* Demangled: NSCam::v3::AppStreamMgr::BatchHandler::resetBatchStreamId() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr12BatchHandler18resetBatchStreamIdEv(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr12BatchHandler18resetBatchStreamIdEv() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::BatchHandler::checkStreamUsageforBatchMode(android::sp<NSCam::v3::Camera3ImageStreamInfo>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr12BatchHandler28checkStreamUsageforBatchModeEN7android2spINS0_22Camera3ImageStreamInfoEEE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr12BatchHandler28checkStreamUsageforBatchModeEN7android2spINS0_22Camera3ImageStreamInfoEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::AppErrorImageStreamBuffer::setAcquireFence(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v325AppErrorImageStreamBuffer15setAcquireFenceEi(void) {
    ALOGD("_ZN5NSCam2v325AppErrorImageStreamBuffer15setAcquireFenceEi() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::AppImageStreamBuffer::AppStreamBufferHandle, std::__1::allocator<NSCam::v3::AppImageStreamBuffer::AppStreamBufferHandle> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v320AppImageStreamBuffer21AppStreamBufferHandleENS_9allocatorIS4_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v320AppImageStreamBuffer21AppStreamBufferHandleENS_9allocatorIS4_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::AppImageStreamBuffer::~AppImageStreamBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n256_N5NSCam2v320AppImageStreamBufferD1Ev(void) {
    ALOGD("_ZTv0_n256_N5NSCam2v320AppImageStreamBufferD1Ev() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::AppStreamMgr::ConfigHandler>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v312AppStreamMgr13ConfigHandlerEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam2v312AppStreamMgr13ConfigHandlerEED2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::Thread-in-NSCam::v3::AppStreamMgr::CallbackHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v312AppStreamMgr15CallbackHandlerE0_N7android6ThreadE = NULL;

/* Demangled: NSCam::v3::Camera3ImageStreamInfo::getImgSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v322Camera3ImageStreamInfo10getImgSizeEv(void) {
    ALOGD("_ZNK5NSCam2v322Camera3ImageStreamInfo10getImgSizeEv() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::BufPlane, std::__1::allocator<NSCam::BufPlane> >::vector(std::__1::vector<NSCam::BufPlane, std::__1::allocator<NSCam::BufPlane> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEEC2ERKS5_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEEC2ERKS5_() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::IImageStreamBuffer-in-NSCam::v3::AppErrorImageStreamBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v325AppErrorImageStreamBufferE0_NS0_18IImageStreamBufferE = NULL;

/* Exported Object: VTT for NSCam::v3::AppErrorImageStreamBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam2v325AppErrorImageStreamBufferE = NULL;

/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > android::hardware::toString<unsigned char>(android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware8toStringIhEENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEERKNS0_8hidl_vecIT_EE(void) {
    ALOGD("_ZN7android8hardware8toStringIhEENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEERKNS0_8hidl_vecIT_EE() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::RequestHandler::RequestHandler(std::__1::shared_ptr<NSCam::v3::AppStreamMgr::CommonInfo>, std::__1::shared_ptr<android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1> >, android::sp<NSCam::v3::AppStreamMgr::FrameHandler>, android::sp<NSCam::v3::AppStreamMgr::BatchHandler>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr14RequestHandlerC2ENSt3__110shared_ptrINS1_10CommonInfoEEENS4_IN7android8hardware12MessageQueueIhLNS8_8MQFlavorE1EEEEENS7_2spINS1_12FrameHandlerEEENSD_INS1_12BatchHandlerEEE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr14RequestHandlerC2ENSt3__110shared_ptrINS1_10CommonInfoEEENS4_IN7android8hardware12MessageQueueIhLNS8_8MQFlavorE1EEEEENS7_2spINS1_12FrameHandlerEEENSD_INS1_12BatchHandlerEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr12FrameHandler7destroyEv(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr12FrameHandler7destroyEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Camera3ImageStreamInfo::toString() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v322Camera3ImageStreamInfo8toStringEv(void) {
    ALOGD("_ZNK5NSCam2v322Camera3ImageStreamInfo8toStringEv() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::IMetaStreamInfo>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v315IMetaStreamInfoEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam2v315IMetaStreamInfoEED2Ev() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Sync::IFence>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils4Sync6IFenceEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils4Sync6IFenceEED2Ev() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::AppStreamMgr::ConfigHandler>::operator=(NSCam::v3::AppStreamMgr::ConfigHandler*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v312AppStreamMgr13ConfigHandlerEEaSEPS4_(void) {
    ALOGD("_ZN7android2spIN5NSCam2v312AppStreamMgr13ConfigHandlerEEaSEPS4_() called");
    return 0;
}

/* Exported Object: VTT for NSCam::v3::AppStreamMgr */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam2v312AppStreamMgrE = NULL;

/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::preparePhysicReturnMeta(NSCam::v3::AppStreamMgr::CallbackParcel&, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::FrameParcel> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr12FrameHandler23preparePhysicReturnMetaERNS1_14CallbackParcelERKN7android2spINS2_11FrameParcelEEE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr12FrameHandler23preparePhysicReturnMetaERNS1_14CallbackParcelERKN7android2spINS2_11FrameParcelEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::dumpStateLocked(android::Printer&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v312AppStreamMgr12FrameHandler15dumpStateLockedERN7android7PrinterE(void) {
    ALOGD("_ZNK5NSCam2v312AppStreamMgr12FrameHandler15dumpStateLockedERN7android7PrinterE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::MetaItem> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler8MetaItemEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler8MetaItemEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::ImageItem> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler9ImageItemEEEEEEE = NULL;

/* Demangled: NSCam::v3::AppStreamMgr::endConfigureStreams(android::hardware::camera::device::V3_4::HalStreamConfiguration&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr19endConfigureStreamsERN7android8hardware6camera6device4V3_422HalStreamConfigurationE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr19endConfigureStreamsERN7android8hardware6camera6device4V3_422HalStreamConfigurationE() called");
    return 0;
}

/* Demangled: android::Vector<android::String8>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::BatchHandler::appendParcel(NSCam::v3::AppStreamMgr::CallbackParcel, NSCam::v3::AppStreamMgr::CallbackParcel&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr12BatchHandler12appendParcelENS1_14CallbackParcelERS3_(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr12BatchHandler12appendParcelENS1_14CallbackParcelERS3_() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::AppStreamMgr::FrameHandler>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v312AppStreamMgr12FrameHandlerEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam2v312AppStreamMgr12FrameHandlerEED2Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> > > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::BufferHandleCache::clear() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr17BufferHandleCache5clearEv(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr17BufferHandleCache5clearEv() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::AppImageStreamBuffer>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v320AppImageStreamBufferEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam2v320AppImageStreamBufferEED2Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::FrameHandler::addConfigStream(NSCam::v3::Utils::MetaStreamInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr12FrameHandler15addConfigStreamEPNS0_5Utils14MetaStreamInfoE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr12FrameHandler15addConfigStreamEPNS0_5Utils14MetaStreamInfoE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::AppStreamMgr::FrameHandler::PhysicMetaItem> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler14PhysicMetaItemEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v312AppStreamMgr12FrameHandler14PhysicMetaItemEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::GrallocStaticInfo::Plane>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam17GrallocStaticInfo5PlaneEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::AppStreamMgr::FrameHandler::ImageItemFrameQueue */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v312AppStreamMgr12FrameHandler19ImageItemFrameQueueE = NULL;

/* Exported Object: vtable for NSCam::v3::AppStreamMgr::FrameHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v312AppStreamMgr12FrameHandlerE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<android::hardware::camera::device::V3_2::StreamType, unsigned long> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_210StreamTypeEmEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_210StreamTypeEmEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::hardware::camera::device::V3_2::StreamRotation, unsigned long> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_214StreamRotationEmEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_214StreamRotationEmEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<android::hardware::camera::device::V3_2::StreamRotation, unsigned long> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_8hardware6camera6device4V3_214StreamRotationEmEEEE = NULL;

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<unsigned long, void*>*>, bool> std::__1::__hash_table<unsigned long, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<unsigned long> >::__emplace_unique_key_args<unsigned long, unsigned long const&>(unsigned long const&, unsigned long const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableImNS_4hashImEENS_8equal_toImEENS_9allocatorImEEE25__emplace_unique_key_argsImJRKmEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeImPvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableImNS_4hashImEENS_8equal_toImEENS_9allocatorImEEE25__emplace_unique_key_argsImJRKmEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeImPvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<unsigned long, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<unsigned long> >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableImNS_4hashImEENS_8equal_toImEENS_9allocatorImEEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableImNS_4hashImEENS_8equal_toImEENS_9allocatorImEEE6rehashEm() called");
    return 0;
}

/* Demangled: NSCam::v3::AppMetaStreamBuffer::Allocator::Allocator(NSCam::v3::IMetaStreamInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v319AppMetaStreamBuffer9AllocatorC1EPNS0_15IMetaStreamInfoE(void) {
    ALOGD("_ZN5NSCam2v319AppMetaStreamBuffer9AllocatorC1EPNS0_15IMetaStreamInfoE() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::BufferHandleCache::BufferHandleCache(std::__1::shared_ptr<NSCam::v3::AppStreamMgr::CommonInfo>, long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr17BufferHandleCacheC1ENSt3__110shared_ptrINS1_10CommonInfoEEEl(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr17BufferHandleCacheC1ENSt3__110shared_ptrINS1_10CommonInfoEEEl() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::IStreamBuffer-in-NSCam::v3::AppImageStreamBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v320AppImageStreamBufferE0_NS0_13IStreamBufferE = NULL;

/* Demangled: NSCam::v3::AppStreamMgr::CallbackHandler::CallbackHandler(std::__1::shared_ptr<NSCam::v3::AppStreamMgr::CommonInfo>, std::__1::shared_ptr<android::hardware::MessageQueue<unsigned char, (android::hardware::MQFlavor)1> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr15CallbackHandlerC1ENSt3__110shared_ptrINS1_10CommonInfoEEENS4_IN7android8hardware12MessageQueueIhLNS8_8MQFlavorE1EEEEE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr15CallbackHandlerC1ENSt3__110shared_ptrINS1_10CommonInfoEEENS4_IN7android8hardware12MessageQueueIhLNS8_8MQFlavorE1EEEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamBuffer> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::CallbackHandler::requestExit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr15CallbackHandler11requestExitEv(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr15CallbackHandler11requestExitEv() called");
    return 0;
}

/* Demangled: NSCam::v3::AppMetaStreamBuffer::setRepeating(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v319AppMetaStreamBuffer12setRepeatingEi(void) {
    ALOGD("_ZN5NSCam2v319AppMetaStreamBuffer12setRepeatingEi() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::IUsersManager-in-NSCam::v3::AppMetaStreamBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v319AppMetaStreamBufferE0_NS0_13IUsersManagerE = NULL;

/* Demangled: NSCam::v3::AppStreamMgr::ResultHandler::ResultHandler(std::__1::shared_ptr<NSCam::v3::AppStreamMgr::CommonInfo>, android::sp<NSCam::v3::AppStreamMgr::FrameHandler>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr13ResultHandlerC2ENSt3__110shared_ptrINS1_10CommonInfoEEEN7android2spINS1_12FrameHandlerEEE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr13ResultHandlerC2ENSt3__110shared_ptrINS1_10CommonInfoEEEN7android2spINS1_12FrameHandlerEEE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::AppStreamMgr::BatchHandler::InFlightBatch, std::__1::allocator<NSCam::v3::AppStreamMgr::BatchHandler::InFlightBatch> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v312AppStreamMgr12BatchHandler13InFlightBatchENS_9allocatorIS5_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v312AppStreamMgr12BatchHandler13InFlightBatchENS_9allocatorIS5_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: NSCam::v3::AppStreamMgr::ResultHandler::enqueResult(NSCam::v3::IAppStreamManager::UpdateResultParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312AppStreamMgr13ResultHandler11enqueResultERKNS0_17IAppStreamManager18UpdateResultParamsE(void) {
    ALOGD("_ZN5NSCam2v312AppStreamMgr13ResultHandler11enqueResultERKNS0_17IAppStreamManager18UpdateResultParamsE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> > > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS_6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::AppMetaStreamBuffer::AppMetaStreamBuffer(android::sp<NSCam::v3::IMetaStreamInfo>, NSCam::IMetadata const&, NSCam::v3::IUsersManager*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v319AppMetaStreamBufferC1EN7android2spINS0_15IMetaStreamInfoEEERKNS_9IMetadataEPNS0_13IUsersManagerE(void) {
    ALOGD("_ZN5NSCam2v319AppMetaStreamBufferC1EN7android2spINS0_15IMetaStreamInfoEEERKNS_9IMetadataEPNS0_13IUsersManagerE() called");
    return 0;
}

/* Demangled: NSCam::v3::AppMetaStreamBuffer::toString() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v319AppMetaStreamBuffer8toStringEv(void) {
    ALOGD("_ZNK5NSCam2v319AppMetaStreamBuffer8toStringEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::AppStreamMgr::BatchHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v312AppStreamMgr12BatchHandlerE = NULL;

/* Demangled: NSCam::v3::Camera3ImageStreamInfo::dumpState(android::Printer&, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v322Camera3ImageStreamInfo9dumpStateERN7android7PrinterEj(void) {
    ALOGD("_ZNK5NSCam2v322Camera3ImageStreamInfo9dumpStateERN7android7PrinterEj() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Camera3ImageStreamInfo::setMaxBufNum(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n64_N5NSCam2v322Camera3ImageStreamInfo12setMaxBufNumEm(void) {
    ALOGD("_ZTv0_n64_N5NSCam2v322Camera3ImageStreamInfo12setMaxBufNumEm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::AppStreamMgr::CallbackParcel::ImageItem>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel9ImageItemEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v312AppStreamMgr14CallbackParcel9ImageItemEE15do_move_forwardEPvPKvm() called");
    return 0;
}
