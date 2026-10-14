/*
 * Reverse-Engineered Source for: libmtkcam_streamutils.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libmtkcam_streamutils"

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
#include "libmtkcam_streamutils.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::v3::Utils::UsersManager::MyUserGraph::UserNode> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils12UsersManager11MyUserGraph8UserNodeEEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils12UsersManager11MyUserGraph8UserNodeEEEE10do_destroyEPvj() called");
    return 0;
}

/* Exported Object: VTT for NSCam::v3::Utils::UsersManager */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam2v35Utils12UsersManagerE = NULL;

/* Demangled: NSCam::v3::Utils::StreamBufferImp::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils15StreamBufferImp5resetEv(void) {
    ALOGD("_ZN5NSCam2v35Utils15StreamBufferImp5resetEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::HalImageStreamBuffer::Allocator::Allocator(NSCam::v3::IImageStreamInfo*, NSCam::IImageBufferAllocator::ImgParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils20HalImageStreamBuffer9AllocatorC1EPNS0_16IImageStreamInfoERKNS_21IImageBufferAllocator8ImgParamE(void) {
    ALOGD("_ZN5NSCam2v35Utils20HalImageStreamBuffer9AllocatorC1EPNS0_16IImageStreamInfoERKNS_21IImageBufferAllocator8ImgParamE() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::Imp::SyncHelper::syncResultCheck(NSCam::v3::Utils::Imp::SyncResultInputParams const&, NSCam::v3::Utils::Imp::SyncResultOutputParams&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils3Imp10SyncHelper15syncResultCheckERKNS2_21SyncResultInputParamsERNS2_22SyncResultOutputParamsE(void) {
    ALOGD("_ZN5NSCam2v35Utils3Imp10SyncHelper15syncResultCheckERKNS2_21SyncResultInputParamsERNS2_22SyncResultOutputParamsE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::Imp::SyncHelper::syncEnqHW(int, int, int, NSCam::IMetadata*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n52_N5NSCam2v35Utils3Imp10SyncHelper9syncEnqHWEiiiPNS_9IMetadataE(void) {
    ALOGD("_ZTv0_n52_N5NSCam2v35Utils3Imp10SyncHelper9syncEnqHWEiiiPNS_9IMetadataE() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::Utils::UsersManager::MyUser>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v35Utils12UsersManager6MyUserEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam2v35Utils12UsersManager6MyUserEED2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::UsersManager::setUserReleaseFence(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n64_N5NSCam2v35Utils12UsersManager19setUserReleaseFenceEii(void) {
    ALOGD("_ZTv0_n64_N5NSCam2v35Utils12UsersManager19setUserReleaseFenceEii() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::StreamBufferImp::getUserStatus(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils15StreamBufferImp13getUserStatusEi(void) {
    ALOGD("_ZNK5NSCam2v35Utils15StreamBufferImp13getUserStatusEi() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferImp::getSubjectName() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_NK5NSCam2v35Utils15StreamBufferImp14getSubjectNameEv(void) {
    ALOGD("_ZTv0_n20_NK5NSCam2v35Utils15StreamBufferImp14getSubjectNameEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::stop(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils3Imp14SyncHelperBase4stopEi(void) {
    ALOGD("_ZN5NSCam2v35Utils3Imp14SyncHelperBase4stopEi() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::Utils::UsersManager::MyUser> > >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v35Utils12UsersManager6MyUserEEEEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v35Utils12UsersManager6MyUserEEEEEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::UsersManager::queryGroupUsage(int) const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n68_NK5NSCam2v35Utils12UsersManager15queryGroupUsageEi(void) {
    ALOGD("_ZTv0_n68_NK5NSCam2v35Utils12UsersManager15queryGroupUsageEi() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::add_frameno_to_map(NSCam::v3::Utils::Imp::SyncParam&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils3Imp14SyncHelperBase18add_frameno_to_mapERNS2_9SyncParamE(void) {
    ALOGD("_ZN5NSCam2v35Utils3Imp14SyncHelperBase18add_frameno_to_mapERNS2_9SyncParamE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<NSCam::v3::Utils::Imp::SyncContext*, std::__1::default_delete<NSCam::v3::Utils::Imp::SyncContext>, std::__1::allocator<NSCam::v3::Utils::Imp::SyncContext> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPN5NSCam2v35Utils3Imp11SyncContextENS_14default_deleteIS5_EENS_9allocatorIS5_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPN5NSCam2v35Utils3Imp11SyncContextENS_14default_deleteIS5_EENS_9allocatorIS5_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::UsersManager::getSubjectName() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils12UsersManager14getSubjectNameEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils12UsersManager14getSubjectNameEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::UsersManager::haveAllUsersReleasedLocked() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils12UsersManager26haveAllUsersReleasedLockedEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils12UsersManager26haveAllUsersReleasedLockedEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::UsersManager::getNumberOfConsumers() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n76_NK5NSCam2v35Utils12UsersManager20getNumberOfConsumersEv(void) {
    ALOGD("_ZTv0_n76_NK5NSCam2v35Utils12UsersManager20getNumberOfConsumersEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::TStreamBufferWithPool<NSCam::v3::Utils::HalMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer>::releaseBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils21TStreamBufferWithPoolINS1_19HalMetaStreamBufferENS0_17IMetaStreamBufferEE13releaseBufferEv(void) {
    ALOGD("_ZN5NSCam2v35Utils21TStreamBufferWithPoolINS1_19HalMetaStreamBufferENS0_17IMetaStreamBufferEE13releaseBufferEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::ImageStreamInfo::getMaxBufNum() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n28_NK5NSCam2v35Utils15ImageStreamInfo12getMaxBufNumEv(void) {
    ALOGD("_ZTv0_n28_NK5NSCam2v35Utils15ImageStreamInfo12getMaxBufNumEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::UsersManager::enqueUserGraph(android::sp<NSCam::v3::IUsersManager::IUserGraph>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils12UsersManager14enqueUserGraphEN7android2spINS0_13IUsersManager10IUserGraphEEE(void) {
    ALOGD("_ZN5NSCam2v35Utils12UsersManager14enqueUserGraphEN7android2spINS0_13IUsersManager10IUserGraphEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::UsersManager::createAcquireFence(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils12UsersManager18createAcquireFenceEi(void) {
    ALOGD("_ZNK5NSCam2v35Utils12UsersManager18createAcquireFenceEi() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::Utils::UsersManager::MyUser> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v35Utils12UsersManager6MyUserEEEEEE10do_compareEPKvSC_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v35Utils12UsersManager6MyUserEEEEEE10do_compareEPKvSC_() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::UsersManager::reset() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n44_N5NSCam2v35Utils12UsersManager5resetEv(void) {
    ALOGD("_ZTv0_n44_N5NSCam2v35Utils12UsersManager5resetEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::result_sync_check(NSCam::v3::Utils::Imp::SyncParam&, std::__1::vector<int, std::__1::allocator<int> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils3Imp14SyncHelperBase17result_sync_checkERNS2_9SyncParamERNSt3__16vectorIiNS6_9allocatorIiEEEE(void) {
    ALOGD("_ZN5NSCam2v35Utils3Imp14SyncHelperBase17result_sync_checkERNS2_9SyncParamERNSt3__16vectorIiNS6_9allocatorIiEEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::uninit(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils3Imp14SyncHelperBase6uninitEi(void) {
    ALOGD("_ZN5NSCam2v35Utils3Imp14SyncHelperBase6uninitEi() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<int, std::__1::shared_ptr<NSCam::v3::Utils::Imp::SyncContext> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNSt3__110shared_ptrIN5NSCam2v35Utils3Imp11SyncContextEEEEEEE = NULL;

/* Demangled: android::Vector<android::sp<NSCam::v3::Utils::UsersManager::MyUserGraph> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v35Utils12UsersManager11MyUserGraphEEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v35Utils12UsersManager11MyUserGraphEEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::v3::Utils::UsersManager::MyUser> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v35Utils12UsersManager6MyUserEEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v35Utils12UsersManager6MyUserEEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::HalImageStreamBuffer::releaseBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils20HalImageStreamBuffer13releaseBufferEv(void) {
    ALOGD("_ZN5NSCam2v35Utils20HalImageStreamBuffer13releaseBufferEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::v3::Utils::Imp::SyncHelperBase::sync_result> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp14SyncHelperBase11sync_resultEEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp14SyncHelperBase11sync_resultEEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, int> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiiEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiiEEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::ImageStreamInfo::getMinInitBufNum() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils15ImageStreamInfo16getMinInitBufNumEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils15ImageStreamInfo16getMinInitBufNumEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::HalImageStreamBuffer::HalImageStreamBuffer(android::sp<NSCam::v3::IImageStreamInfo>, android::wp<NSCam::v3::Utils::IStreamBufferPool<NSCam::v3::IImageStreamBuffer> >, android::sp<NSCam::IImageBufferHeap>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils20HalImageStreamBufferC2EN7android2spINS0_16IImageStreamInfoEEENS3_2wpINS1_17IStreamBufferPoolINS0_18IImageStreamBufferEEEEENS4_INS_16IImageBufferHeapEEE(void) {
    ALOGD("_ZN5NSCam2v35Utils20HalImageStreamBufferC2EN7android2spINS0_16IImageStreamInfoEEENS3_2wpINS1_17IStreamBufferPoolINS0_18IImageStreamBufferEEEEENS4_INS_16IImageBufferHeapEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::flush(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils3Imp14SyncHelperBase5flushEi(void) {
    ALOGD("_ZN5NSCam2v35Utils3Imp14SyncHelperBase5flushEi() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::Imp::SyncHelperBase::~SyncHelperBase() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N5NSCam2v35Utils3Imp14SyncHelperBaseD1Ev(void) {
    ALOGD("_ZTv0_n12_N5NSCam2v35Utils3Imp14SyncHelperBaseD1Ev() called");
    return 0;
}

/* Exported Object: VTT for NSCam::v3::Utils::HalImageStreamBufferProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam2v35Utils28HalImageStreamBufferProviderE = NULL;

/* Demangled: android::Vector<android::sp<NSCam::v3::Utils::UsersManager::MyUser> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v35Utils12UsersManager6MyUserEEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v35Utils12UsersManager6MyUserEEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::TIStreamBuffer<NSCam::v3::IImageStreamInfo, NSCam::IImageBufferHeap>-in-NSCam::v3::Utils::HalImageStreamBufferProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v35Utils28HalImageStreamBufferProviderE0_NS0_14TIStreamBufferINS0_16IImageStreamInfoENS_16IImageBufferHeapEEE = NULL;

/* Demangled: NSCam::v3::Utils::ImageStreamInfo::getSecureInfo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils15ImageStreamInfo13getSecureInfoEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils15ImageStreamInfo13getSecureInfoEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferImp::getSubject() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n16_NK5NSCam2v35Utils15StreamBufferImp10getSubjectEv(void) {
    ALOGD("_ZTv0_n16_NK5NSCam2v35Utils15StreamBufferImp10getSubjectEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::get_timestamp(int, int, long long&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils3Imp14SyncHelperBase13get_timestampEiiRx(void) {
    ALOGD("_ZN5NSCam2v35Utils3Imp14SyncHelperBase13get_timestampEiiRx() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, std::__1::shared_ptr<NSCam::v3::Utils::Imp::SyncContext> > >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__110shared_ptrIN5NSCam2v35Utils3Imp11SyncContextEEEEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__110shared_ptrIN5NSCam2v35Utils3Imp11SyncContextEEEEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::ImageStreamInfoBuilder::ImageStreamInfoBuilder(NSCam::v3::IImageStreamInfo const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils22ImageStreamInfoBuilderC2EPKNS0_16IImageStreamInfoE(void) {
    ALOGD("_ZN5NSCam2v35Utils22ImageStreamInfoBuilderC2EPKNS0_16IImageStreamInfoE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::UsersManager::createAcquireFence(int) const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n80_NK5NSCam2v35Utils12UsersManager18createAcquireFenceEi(void) {
    ALOGD("_ZTv0_n80_NK5NSCam2v35Utils12UsersManager18createAcquireFenceEi() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferImp::haveAllUsersReleasedOrPreReleased(int) const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n96_NK5NSCam2v35Utils15StreamBufferImp33haveAllUsersReleasedOrPreReleasedEi(void) {
    ALOGD("_ZTv0_n96_NK5NSCam2v35Utils15StreamBufferImp33haveAllUsersReleasedOrPreReleasedEi() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::getSyncData(int, int, long long&, bool&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils3Imp14SyncHelperBase11getSyncDataEiiRxRbRi(void) {
    ALOGD("_ZN5NSCam2v35Utils3Imp14SyncHelperBase11getSyncDataEiiRxRbRi() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::process_drop_frame_check(NSCam::v3::Utils::Imp::SyncParam&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils3Imp14SyncHelperBase24process_drop_frame_checkERNS2_9SyncParamE(void) {
    ALOGD("_ZN5NSCam2v35Utils3Imp14SyncHelperBase24process_drop_frame_checkERNS2_9SyncParamE() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::ImageStreamInfo::getPhysicalCameraId() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils15ImageStreamInfo19getPhysicalCameraIdEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils15ImageStreamInfo19getPhysicalCameraIdEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::UsersManager::MyUserGraph::removeEdge(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils12UsersManager11MyUserGraph10removeEdgeEii(void) {
    ALOGD("_ZN5NSCam2v35Utils12UsersManager11MyUserGraph10removeEdgeEii() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::UsersManager::MyUserGraph::addUser(NSCam::v3::IUsersManager::User const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils12UsersManager11MyUserGraph7addUserERKNS0_13IUsersManager4UserE(void) {
    ALOGD("_ZN5NSCam2v35Utils12UsersManager11MyUserGraph7addUserERKNS0_13IUsersManager4UserE() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::HalImageStreamBuffer::castFrom(NSCam::v3::IStreamBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils20HalImageStreamBuffer8castFromEPNS0_13IStreamBufferE(void) {
    ALOGD("_ZN5NSCam2v35Utils20HalImageStreamBuffer8castFromEPNS0_13IStreamBufferE() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::HalMetaStreamBuffer::toString() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils19HalMetaStreamBuffer8toStringEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils19HalMetaStreamBuffer8toStringEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::v3::Utils::Imp::SyncHelperBase::sync_result> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp14SyncHelperBase11sync_resultEEEE10do_compareEPKvSB_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp14SyncHelperBase11sync_resultEEEE10do_compareEPKvSB_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::v3::Utils::Imp::SyncHelperBase::sync_result> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp14SyncHelperBase11sync_resultEEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp14SyncHelperBase11sync_resultEEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::Imp::SyncHelperBase::uninit(int) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N5NSCam2v35Utils3Imp14SyncHelperBase6uninitEi(void) {
    ALOGD("_ZTv0_n32_N5NSCam2v35Utils3Imp14SyncHelperBase6uninitEi() called");
    return 0;
}

/* Demangled: __floatdidf */
extern "C" __attribute__((visibility("default"))) int __floatdidf(void) {
    ALOGD("__floatdidf() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::ImageStreamInfoBuilder::build() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils22ImageStreamInfoBuilder5buildEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils22ImageStreamInfoBuilder5buildEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::StreamBufferImp::waitUserReleaseStatus(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils15StreamBufferImp21waitUserReleaseStatusENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void) {
    ALOGD("_ZN5NSCam2v35Utils15StreamBufferImp21waitUserReleaseStatusENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferImp::markUserStatus(int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n52_N5NSCam2v35Utils15StreamBufferImp14markUserStatusEij(void) {
    ALOGD("_ZTv0_n52_N5NSCam2v35Utils15StreamBufferImp14markUserStatusEij() called");
    return 0;
}

/* Demangled: __divdi3 */
extern "C" __attribute__((visibility("default"))) int __divdi3(void) {
    ALOGD("__divdi3() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::UsersManager::createGraph() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils12UsersManager11createGraphEv(void) {
    ALOGD("_ZN5NSCam2v35Utils12UsersManager11createGraphEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::StreamBufferPoolImpl::uninitPoolImpl(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils20StreamBufferPoolImpl14uninitPoolImplEPKc(void) {
    ALOGD("_ZN5NSCam2v35Utils20StreamBufferPoolImpl14uninitPoolImplEPKc() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::MetaStreamInfo::setMaxBufNum(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N5NSCam2v35Utils14MetaStreamInfo12setMaxBufNumEj(void) {
    ALOGD("_ZTv0_n32_N5NSCam2v35Utils14MetaStreamInfo12setMaxBufNumEj() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::v3::Utils::UsersManager::MyUserGraph> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v35Utils12UsersManager11MyUserGraphEEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v35Utils12UsersManager11MyUserGraphEEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::MetaStreamInfo::setMaxBufNum(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils14MetaStreamInfo12setMaxBufNumEj(void) {
    ALOGD("_ZN5NSCam2v35Utils14MetaStreamInfo12setMaxBufNumEj() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::UsersManager::haveAllProducerUsersReleasedOrPreReleased() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n120_NK5NSCam2v35Utils12UsersManager41haveAllProducerUsersReleasedOrPreReleasedEv(void) {
    ALOGD("_ZTv0_n120_NK5NSCam2v35Utils12UsersManager41haveAllProducerUsersReleasedOrPreReleasedEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferImp::queryGroupUsage(int) const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n68_NK5NSCam2v35Utils15StreamBufferImp15queryGroupUsageEi(void) {
    ALOGD("_ZTv0_n68_NK5NSCam2v35Utils15StreamBufferImp15queryGroupUsageEi() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, std::__1::shared_ptr<NSCam::v3::Utils::Imp::SyncContext> > >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__110shared_ptrIN5NSCam2v35Utils3Imp11SyncContextEEEEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__110shared_ptrIN5NSCam2v35Utils3Imp11SyncContextEEEEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: __aeabi_uidiv */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidiv(void) {
    ALOGD("__aeabi_uidiv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::ImageStreamInfo::getBufPlanes() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils15ImageStreamInfo12getBufPlanesEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils15ImageStreamInfo12getBufPlanesEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::UsersManager::createAcquireFence() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils12UsersManager18createAcquireFenceEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils12UsersManager18createAcquireFenceEv() called");
    return 0;
}

/* Demangled: android::SortedVector<int>::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorIiE10do_compareEPKvS3_(void) {
    ALOGD("_ZNK7android12SortedVectorIiE10do_compareEPKvS3_() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::StreamBufferImp::createReleaseFence(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils15StreamBufferImp18createReleaseFenceEi(void) {
    ALOGD("_ZNK5NSCam2v35Utils15StreamBufferImp18createReleaseFenceEi() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferImp::getNumberOfProducers() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n72_NK5NSCam2v35Utils15StreamBufferImp20getNumberOfProducersEv(void) {
    ALOGD("_ZTv0_n72_NK5NSCam2v35Utils15StreamBufferImp20getNumberOfProducersEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::UsersManager::enqueUserGraph_(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils12UsersManager15enqueUserGraph_Ej(void) {
    ALOGD("_ZN5NSCam2v35Utils12UsersManager15enqueUserGraph_Ej() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<int, NSCam::v3::Utils::UsersManager::MyUserGraph::UserNode> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils12UsersManager11MyUserGraph8UserNodeEEEEE = NULL;

/* Exported Object: VTT for NSCam::v3::Utils::Imp::SyncHelperBase */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam2v35Utils3Imp14SyncHelperBaseE = NULL;

/* Demangled: NSCam::v3::Utils::StreamBufferImp::isActive() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils15StreamBufferImp8isActiveEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils15StreamBufferImp8isActiveEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_pointer<NSCam::v3::Utils::Imp::SyncContext*, std::__1::default_delete<NSCam::v3::Utils::Imp::SyncContext>, std::__1::allocator<NSCam::v3::Utils::Imp::SyncContext> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_pointerIPN5NSCam2v35Utils3Imp11SyncContextENS_14default_deleteIS5_EENS_9allocatorIS5_EEEE = NULL;

/* Demangled: NSCam::v3::Utils::MetaStreamInfo::MetaStreamInfo(char const*, long long, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils14MetaStreamInfoC1EPKcxjjj(void) {
    ALOGD("_ZN5NSCam2v35Utils14MetaStreamInfoC1EPKcxjjj() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::StreamBufferPoolImpl::~StreamBufferPoolImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils20StreamBufferPoolImplD2Ev(void) {
    ALOGD("_ZN5NSCam2v35Utils20StreamBufferPoolImplD2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferPoolImpl::~StreamBufferPoolImpl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N5NSCam2v35Utils20StreamBufferPoolImplD1Ev(void) {
    ALOGD("_ZTv0_n12_N5NSCam2v35Utils20StreamBufferPoolImplD1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::Utils::Imp::ISyncHelperBase-in-NSCam::v3::Utils::Imp::SyncHelper */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v35Utils3Imp10SyncHelperE180_NS2_15ISyncHelperBaseE = NULL;

/* Demangled: NSCam::v3::Utils::ImageStreamInfoBuilder::ImageStreamInfoBuilder(NSCam::v3::IImageStreamInfo const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils22ImageStreamInfoBuilderC1EPKNS0_16IImageStreamInfoE(void) {
    ALOGD("_ZN5NSCam2v35Utils22ImageStreamInfoBuilderC1EPKNS0_16IImageStreamInfoE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::ImageStreamInfo::getMinInitBufNum() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n36_NK5NSCam2v35Utils15ImageStreamInfo16getMinInitBufNumEv(void) {
    ALOGD("_ZTv0_n36_NK5NSCam2v35Utils15ImageStreamInfo16getMinInitBufNumEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::Utils::UsersManager::MyUser> > >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v35Utils12UsersManager6MyUserEEEEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v35Utils12UsersManager6MyUserEEEEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::UsersManager::createGraph() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N5NSCam2v35Utils12UsersManager11createGraphEv(void) {
    ALOGD("_ZTv0_n32_N5NSCam2v35Utils12UsersManager11createGraphEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::Utils::Imp::SyncHelper */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v35Utils3Imp10SyncHelperE = NULL;

/* Demangled: NSCam::v3::Utils::UsersManager::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils12UsersManager5resetEv(void) {
    ALOGD("_ZN5NSCam2v35Utils12UsersManager5resetEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::HalMetaStreamBuffer::Allocator::Allocator(NSCam::v3::IMetaStreamInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils19HalMetaStreamBuffer9AllocatorC2EPNS0_15IMetaStreamInfoE(void) {
    ALOGD("_ZN5NSCam2v35Utils19HalMetaStreamBuffer9AllocatorC2EPNS0_15IMetaStreamInfoE() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::Utils::TStreamBufferWithPool<NSCam::v3::Utils::HalMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer>-in-NSCam::v3::Utils::HalMetaStreamBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v35Utils19HalMetaStreamBufferE0_NS1_21TStreamBufferWithPoolINS1_19HalMetaStreamBufferENS0_17IMetaStreamBufferEEE = NULL;

/* Exported Object: vtable for NSCam::v3::Utils::HalImageStreamBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v35Utils20HalImageStreamBufferE = NULL;

/* Demangled: NSCam::v3::Utils::HalImageStreamBufferProvider::HalImageStreamBufferProvider(android::sp<NSCam::v3::IImageStreamInfo>, android::sp<NSCam::IImageBufferHeap>, android::wp<NSCam::v3::Utils::IStreamBufferProvider>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils28HalImageStreamBufferProviderC1EN7android2spINS0_16IImageStreamInfoEEENS4_INS_16IImageBufferHeapEEENS3_2wpINS1_21IStreamBufferProviderEEE(void) {
    ALOGD("_ZN5NSCam2v35Utils28HalImageStreamBufferProviderC1EN7android2spINS0_16IImageStreamInfoEEENS4_INS_16IImageBufferHeapEEENS3_2wpINS1_21IStreamBufferProviderEEE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::MetaStreamInfo::getStreamName() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n16_NK5NSCam2v35Utils14MetaStreamInfo13getStreamNameEv(void) {
    ALOGD("_ZTv0_n16_NK5NSCam2v35Utils14MetaStreamInfo13getStreamNameEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::ImageStreamInfo::getImgSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils15ImageStreamInfo10getImgSizeEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils15ImageStreamInfo10getImgSizeEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::Utils::ImageStreamInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v35Utils15ImageStreamInfoE = NULL;

/* Demangled: NSCam::v3::Utils::UsersManager::UsersManager(int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils12UsersManagerC1EiPKc(void) {
    ALOGD("_ZN5NSCam2v35Utils12UsersManagerC1EiPKc() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::StreamBufferImp::onTryReadLock(char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils15StreamBufferImp13onTryReadLockEPKcb(void) {
    ALOGD("_ZN5NSCam2v35Utils15StreamBufferImp13onTryReadLockEPKcb() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferImp::createReleaseFence() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n92_NK5NSCam2v35Utils15StreamBufferImp18createReleaseFenceEv(void) {
    ALOGD("_ZTv0_n92_NK5NSCam2v35Utils15StreamBufferImp18createReleaseFenceEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::UsersManager::UsersManager(int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils12UsersManagerC2EiPKc(void) {
    ALOGD("_ZN5NSCam2v35Utils12UsersManagerC2EiPKc() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::v3::Utils::UsersManager::MyUserGraph::UserNode> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils12UsersManager11MyUserGraph8UserNodeEEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils12UsersManager11MyUserGraph8UserNodeEEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::TIStreamBuffer<NSCam::v3::IMetaStreamInfo, NSCam::IMetadata>-in-NSCam::v3::Utils::HalMetaStreamBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v35Utils19HalMetaStreamBufferE0_NS0_14TIStreamBufferINS0_15IMetaStreamInfoENS_9IMetadataEEE = NULL;

/* Demangled: NSCam::v3::Utils::ImageStreamInfo::getUsageForAllocator() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils15ImageStreamInfo20getUsageForAllocatorEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils15ImageStreamInfo20getUsageForAllocatorEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::HalMetaStreamBuffer::HalMetaStreamBuffer(NSCam::IMetadata const&, android::sp<NSCam::v3::IMetaStreamInfo>, android::wp<NSCam::v3::Utils::IStreamBufferPool<NSCam::v3::IMetaStreamBuffer> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils19HalMetaStreamBufferC2ERKNS_9IMetadataEN7android2spINS0_15IMetaStreamInfoEEENS6_2wpINS1_17IStreamBufferPoolINS0_17IMetaStreamBufferEEEEE(void) {
    ALOGD("_ZN5NSCam2v35Utils19HalMetaStreamBufferC2ERKNS_9IMetadataEN7android2spINS0_15IMetaStreamInfoEEENS6_2wpINS1_17IStreamBufferPoolINS0_17IMetaStreamBufferEEEEE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::Imp::SyncHelperBase::~SyncHelperBase() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n16_N5NSCam2v35Utils3Imp14SyncHelperBaseD0Ev(void) {
    ALOGD("_ZTv0_n16_N5NSCam2v35Utils3Imp14SyncHelperBaseD0Ev() called");
    return 0;
}

/* Demangled: __udivsi3 */
extern "C" __attribute__((visibility("default"))) int __udivsi3(void) {
    ALOGD("__udivsi3() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::Utils::MetaStreamInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v35Utils14MetaStreamInfoE = NULL;

/* Demangled: android::SortedVector<int>::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorIiE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorIiE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::UsersManager::getUserCategory(int) const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n60_NK5NSCam2v35Utils12UsersManager15getUserCategoryEi(void) {
    ALOGD("_ZTv0_n60_NK5NSCam2v35Utils12UsersManager15getUserCategoryEi() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::ImageStreamInfo::getUsageForConsumer() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils15ImageStreamInfo19getUsageForConsumerEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils15ImageStreamInfo19getUsageForConsumerEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::ImageStreamInfo::getStreamName() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n16_NK5NSCam2v35Utils15ImageStreamInfo13getStreamNameEv(void) {
    ALOGD("_ZTv0_n16_NK5NSCam2v35Utils15ImageStreamInfo13getStreamNameEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::IStreamBuffer-in-NSCam::v3::Utils::StreamBufferImp */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v35Utils15StreamBufferImpE0_NS0_13IStreamBufferE = NULL;

/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::add_timestamp(int, int, NSCam::v3::Utils::Imp::SyncParam&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils3Imp14SyncHelperBase13add_timestampEiiRNS2_9SyncParamE(void) {
    ALOGD("_ZN5NSCam2v35Utils3Imp14SyncHelperBase13add_timestampEiiRNS2_9SyncParamE() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::Imp::ISyncHelperBase::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils3Imp15ISyncHelperBase14createInstanceEv(void) {
    ALOGD("_ZN5NSCam2v35Utils3Imp15ISyncHelperBase14createInstanceEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::ImageStreamInfo::setMaxBufNum(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils15ImageStreamInfo12setMaxBufNumEj(void) {
    ALOGD("_ZN5NSCam2v35Utils15ImageStreamInfo12setMaxBufNumEj() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::HalMetaStreamBuffer::resetBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils19HalMetaStreamBuffer11resetBufferEv(void) {
    ALOGD("_ZN5NSCam2v35Utils19HalMetaStreamBuffer11resetBufferEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::HalMetaStreamBuffer::Allocator::Allocator(NSCam::v3::IMetaStreamInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils19HalMetaStreamBuffer9AllocatorC1EPNS0_15IMetaStreamInfoE(void) {
    ALOGD("_ZN5NSCam2v35Utils19HalMetaStreamBuffer9AllocatorC1EPNS0_15IMetaStreamInfoE() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::IUsersManager-in-NSCam::v3::Utils::HalMetaStreamBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v35Utils19HalMetaStreamBufferE0_NS0_13IUsersManagerE = NULL;

/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::earse_sync_queue_by_cam_id(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils3Imp14SyncHelperBase26earse_sync_queue_by_cam_idEi(void) {
    ALOGD("_ZN5NSCam2v35Utils3Imp14SyncHelperBase26earse_sync_queue_by_cam_idEi() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::isFlush() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils3Imp14SyncHelperBase7isFlushEv(void) {
    ALOGD("_ZN5NSCam2v35Utils3Imp14SyncHelperBase7isFlushEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::v3::Utils::Imp::SyncContext::syncData> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp11SyncContext8syncDataEEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp11SyncContext8syncDataEEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::MetaStreamInfo::getStreamName() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils14MetaStreamInfo13getStreamNameEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils14MetaStreamInfo13getStreamNameEv() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Sync::IFence>::operator=(android::sp<NSCam::Utils::Sync::IFence>&&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils4Sync6IFenceEEaSEOS5_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils4Sync6IFenceEEaSEOS5_() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::StreamBufferImp::createReleaseFence() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils15StreamBufferImp18createReleaseFenceEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils15StreamBufferImp18createReleaseFenceEv() called");
    return 0;
}

/* Exported Object: VTT for NSCam::v3::Utils::StreamBufferImp */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam2v35Utils15StreamBufferImpE = NULL;

/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::enque_sync_check(NSCam::v3::Utils::Imp::SyncParam&, std::__1::vector<int, std::__1::allocator<int> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils3Imp14SyncHelperBase16enque_sync_checkERNS2_9SyncParamERNSt3__16vectorIiNS6_9allocatorIiEEEE(void) {
    ALOGD("_ZN5NSCam2v35Utils3Imp14SyncHelperBase16enque_sync_checkERNS2_9SyncParamERNSt3__16vectorIiNS6_9allocatorIiEEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::~SyncHelperBase() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils3Imp14SyncHelperBaseD2Ev(void) {
    ALOGD("_ZN5NSCam2v35Utils3Imp14SyncHelperBaseD2Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::MetaStreamInfo::toString() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils14MetaStreamInfo8toStringEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils14MetaStreamInfo8toStringEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::UsersManager::MyUserGraph::outdegree(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils12UsersManager11MyUserGraph9outdegreeEj(void) {
    ALOGD("_ZNK5NSCam2v35Utils12UsersManager11MyUserGraph9outdegreeEj() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferImp::createReleaseFence(int) const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n84_NK5NSCam2v35Utils15StreamBufferImp18createReleaseFenceEi(void) {
    ALOGD("_ZTv0_n84_NK5NSCam2v35Utils15StreamBufferImp18createReleaseFenceEi() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::syncEnqHW(NSCam::v3::Utils::Imp::SyncParam&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils3Imp14SyncHelperBase9syncEnqHWERNS2_9SyncParamE(void) {
    ALOGD("_ZN5NSCam2v35Utils3Imp14SyncHelperBase9syncEnqHWERNS2_9SyncParamE() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::ImageStreamInfo::getStreamType() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils15ImageStreamInfo13getStreamTypeEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils15ImageStreamInfo13getStreamTypeEv() called");
    return 0;
}

/* Demangled: android::SortedVector<int>::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorIiE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorIiE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::BufPlane, std::__1::allocator<NSCam::BufPlane> >::__vallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE11__vallocateEj(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE11__vallocateEj() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::UsersManager::queryUserGraph(NSCam::v3::IUsersManager::IUserGraph*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils12UsersManager14queryUserGraphEPNS0_13IUsersManager10IUserGraphE(void) {
    ALOGD("_ZNK5NSCam2v35Utils12UsersManager14queryUserGraphEPNS0_13IUsersManager10IUserGraphE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::UsersManager::haveAllProducerUsersUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n112_NK5NSCam2v35Utils12UsersManager24haveAllProducerUsersUsedEv(void) {
    ALOGD("_ZTv0_n112_NK5NSCam2v35Utils12UsersManager24haveAllProducerUsersUsedEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferImp::getUserCategory(int) const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n60_NK5NSCam2v35Utils15StreamBufferImp15getUserCategoryEi(void) {
    ALOGD("_ZTv0_n60_NK5NSCam2v35Utils15StreamBufferImp15getUserCategoryEi() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::do_result_wait(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils3Imp14SyncHelperBase14do_result_waitEi(void) {
    ALOGD("_ZN5NSCam2v35Utils3Imp14SyncHelperBase14do_result_waitEi() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::Imp::SyncHelperBase::~SyncHelperBase() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N5NSCam2v35Utils3Imp14SyncHelperBaseD0Ev(void) {
    ALOGD("_ZTv0_n12_N5NSCam2v35Utils3Imp14SyncHelperBaseD0Ev() called");
    return 0;
}

/* Exported Object: vtable for android::List<unsigned int> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android4ListIjEE = NULL;

/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::getSyncContext(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils3Imp14SyncHelperBase14getSyncContextEi(void) {
    ALOGD("_ZN5NSCam2v35Utils3Imp14SyncHelperBase14getSyncContextEi() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::MetaStreamInfo::getMaxBufNum() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils14MetaStreamInfo12getMaxBufNumEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils14MetaStreamInfo12getMaxBufNumEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::UsersManager::MyUserGraph::setCapacity(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils12UsersManager11MyUserGraph11setCapacityEj(void) {
    ALOGD("_ZN5NSCam2v35Utils12UsersManager11MyUserGraph11setCapacityEj() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::Utils::UsersManager::MyUser> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v35Utils12UsersManager6MyUserEEEEEEE = NULL;

/* Demangled: virtual thunk to NSCam::v3::Utils::Imp::SyncHelperBase::init(int) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n28_N5NSCam2v35Utils3Imp14SyncHelperBase4initEi(void) {
    ALOGD("_ZTv0_n28_N5NSCam2v35Utils3Imp14SyncHelperBase4initEi() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::UsersManager::getUserStatus(int) const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n56_NK5NSCam2v35Utils12UsersManager13getUserStatusEi(void) {
    ALOGD("_ZTv0_n56_NK5NSCam2v35Utils12UsersManager13getUserStatusEi() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::Imp::SyncHelperBase::flush(int) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n44_N5NSCam2v35Utils3Imp14SyncHelperBase5flushEi(void) {
    ALOGD("_ZTv0_n44_N5NSCam2v35Utils3Imp14SyncHelperBase5flushEi() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<android::sp<NSCam::v3::Utils::UsersManager::MyUserGraph> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_2spIN5NSCam2v35Utils12UsersManager11MyUserGraphEEEEE = NULL;

/* Demangled: __aeabi_l2d */
extern "C" __attribute__((visibility("default"))) int __aeabi_l2d(void) {
    ALOGD("__aeabi_l2d() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::Utils::Imp::SyncHelperBase-in-NSCam::v3::Utils::Imp::SyncHelper */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v35Utils3Imp10SyncHelperE0_NS2_14SyncHelperBaseE = NULL;

/* Demangled: NSCam::v3::Utils::UsersManager::MyUserGraph::getInUsers(unsigned int, android::Vector<android::sp<NSCam::v3::Utils::UsersManager::MyUser> >&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils12UsersManager11MyUserGraph10getInUsersEjRN7android6VectorINS4_2spINS2_6MyUserEEEEE(void) {
    ALOGD("_ZNK5NSCam2v35Utils12UsersManager11MyUserGraph10getInUsersEjRN7android6VectorINS4_2spINS2_6MyUserEEEEE() called");
    return 0;
}

/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::vector(std::__1::vector<int, std::__1::allocator<int> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEEC2ERKS3_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEEC2ERKS3_() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::MetaStreamInfoBuilder::build() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils21MetaStreamInfoBuilder5buildEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils21MetaStreamInfoBuilder5buildEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::UsersManager::haveAllProducerUsersUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils12UsersManager24haveAllProducerUsersUsedEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils12UsersManager24haveAllProducerUsersUsedEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::UsersManager::getAllUsersStatus() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n104_NK5NSCam2v35Utils12UsersManager17getAllUsersStatusEv(void) {
    ALOGD("_ZTv0_n104_NK5NSCam2v35Utils12UsersManager17getAllUsersStatusEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferImp::haveAllProducerUsersUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n112_NK5NSCam2v35Utils15StreamBufferImp24haveAllProducerUsersUsedEv(void) {
    ALOGD("_ZTv0_n112_NK5NSCam2v35Utils15StreamBufferImp24haveAllProducerUsersUsedEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::ImageStreamInfo::ImageStreamInfo(char const*, long long, unsigned int, unsigned int, unsigned int, unsigned int, int, std::__1::vector<NSCam::BufPlane, std::__1::allocator<NSCam::BufPlane> > const&, unsigned int, unsigned int, NSCam::ImageBufferInfo const&, NSCam::SecureInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils15ImageStreamInfoC1EPKcxjjjjiRKNSt3__16vectorINS_8BufPlaneENS5_9allocatorIS7_EEEEjjRKNS_15ImageBufferInfoERKNS_10SecureInfoE(void) {
    ALOGD("_ZN5NSCam2v35Utils15ImageStreamInfoC1EPKcxjjjjiRKNSt3__16vectorINS_8BufPlaneENS5_9allocatorIS7_EEEEjjRKNS_15ImageBufferInfoERKNS_10SecureInfoE() called");
    return 0;
}

/* Demangled: __aeabi_memmove */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove(void) {
    ALOGD("__aeabi_memmove() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::v3::Utils::UsersManager::MyUserGraph::UserNode> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils12UsersManager11MyUserGraph8UserNodeEEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils12UsersManager11MyUserGraph8UserNodeEEEE12do_constructEPvj() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::IUsersManager::IUserGraph-in-NSCam::v3::Utils::UsersManager::MyUserGraph */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v35Utils12UsersManager11MyUserGraphE0_NS0_13IUsersManager10IUserGraphE = NULL;

/* Demangled: NSCam::v3::Utils::HalImageStreamBuffer::HalImageStreamBuffer(android::sp<NSCam::v3::IImageStreamInfo>, android::wp<NSCam::v3::Utils::IStreamBufferPool<NSCam::v3::IImageStreamBuffer> >, android::sp<NSCam::IImageBufferHeap>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils20HalImageStreamBufferC1EN7android2spINS0_16IImageStreamInfoEEENS3_2wpINS1_17IStreamBufferPoolINS0_18IImageStreamBufferEEEEENS4_INS_16IImageBufferHeapEEE(void) {
    ALOGD("_ZN5NSCam2v35Utils20HalImageStreamBufferC1EN7android2spINS0_16IImageStreamInfoEEENS3_2wpINS1_17IStreamBufferPoolINS0_18IImageStreamBufferEEEEENS4_INS_16IImageBufferHeapEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::HalMetaStreamBuffer::Allocator::operator()(NSCam::IMetadata const&, NSCam::v3::Utils::IStreamBufferPool<NSCam::v3::IMetaStreamBuffer>*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils19HalMetaStreamBuffer9AllocatorclERKNS_9IMetadataEPNS1_17IStreamBufferPoolINS0_17IMetaStreamBufferEEE(void) {
    ALOGD("_ZN5NSCam2v35Utils19HalMetaStreamBuffer9AllocatorclERKNS_9IMetadataEPNS1_17IStreamBufferPoolINS0_17IMetaStreamBufferEEE() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<android::sp<NSCam::v3::Utils::UsersManager::MyUser> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_2spIN5NSCam2v35Utils12UsersManager6MyUserEEEEE = NULL;

/* Demangled: virtual thunk to NSCam::v3::Utils::UsersManager::markUserStatus(int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n52_N5NSCam2v35Utils12UsersManager14markUserStatusEij(void) {
    ALOGD("_ZTv0_n52_N5NSCam2v35Utils12UsersManager14markUserStatusEij() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::Imp::Timer::~Timer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils3Imp5TimerD2Ev(void) {
    ALOGD("_ZN5NSCam2v35Utils3Imp5TimerD2Ev() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::IMetaStreamInfo>::sp(NSCam::v3::IMetaStreamInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v315IMetaStreamInfoEEC2EPS3_(void) {
    ALOGD("_ZN7android2spIN5NSCam2v315IMetaStreamInfoEEC2EPS3_() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::IUsersManager-in-NSCam::v3::Utils::HalImageStreamBufferProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v35Utils28HalImageStreamBufferProviderE0_NS0_13IUsersManagerE = NULL;

/* Demangled: NSCam::v3::Utils::StreamBufferImp::getUserCategory(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils15StreamBufferImp15getUserCategoryEi(void) {
    ALOGD("_ZNK5NSCam2v35Utils15StreamBufferImp15getUserCategoryEi() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::Utils::TStreamBuffer<NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::IImageStreamBuffer>-in-NSCam::v3::Utils::HalImageStreamBufferProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v35Utils28HalImageStreamBufferProviderE0_NS1_13TStreamBufferINS1_20HalImageStreamBufferENS0_18IImageStreamBufferEEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::v3::Utils::Imp::SyncHelperBase::sync_result> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp14SyncHelperBase11sync_resultEEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp14SyncHelperBase11sync_resultEEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::UsersManager::MyUserGraph::getPriorUsers(unsigned int, android::Vector<android::sp<NSCam::v3::Utils::UsersManager::MyUser> >&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils12UsersManager11MyUserGraph13getPriorUsersEjRN7android6VectorINS4_2spINS2_6MyUserEEEEE(void) {
    ALOGD("_ZNK5NSCam2v35Utils12UsersManager11MyUserGraph13getPriorUsersEjRN7android6VectorINS4_2spINS2_6MyUserEEEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::UsersManager::dumpStateLocked(android::Printer&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils12UsersManager15dumpStateLockedERN7android7PrinterE(void) {
    ALOGD("_ZNK5NSCam2v35Utils12UsersManager15dumpStateLockedERN7android7PrinterE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferImp::setUsersManager(android::sp<NSCam::v3::IUsersManager>) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n136_N5NSCam2v35Utils15StreamBufferImp15setUsersManagerEN7android2spINS0_13IUsersManagerEEE(void) {
    ALOGD("_ZTv0_n136_N5NSCam2v35Utils15StreamBufferImp15setUsersManagerEN7android2spINS0_13IUsersManagerEEE() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::Imp::SyncHelperBase::syncEnqHW(NSCam::v3::Utils::Imp::SyncParam&) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n36_N5NSCam2v35Utils3Imp14SyncHelperBase9syncEnqHWERNS2_9SyncParamE(void) {
    ALOGD("_ZTv0_n36_N5NSCam2v35Utils3Imp14SyncHelperBase9syncEnqHWERNS2_9SyncParamE() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::ImageStreamInfo::ImageStreamInfo(char const*, long long, unsigned int, unsigned int, unsigned int, unsigned int, int, NSCam::MSize const&, std::__1::vector<NSCam::BufPlane, std::__1::allocator<NSCam::BufPlane> > const&, unsigned int, unsigned int, NSCam::SecureInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils15ImageStreamInfoC1EPKcxjjjjiRKNS_5MSizeERKNSt3__16vectorINS_8BufPlaneENS8_9allocatorISA_EEEEjjRKNS_10SecureInfoE(void) {
    ALOGD("_ZN5NSCam2v35Utils15ImageStreamInfoC1EPKcxjjjjiRKNS_5MSizeERKNSt3__16vectorINS_8BufPlaneENS8_9allocatorISA_EEEEjjRKNS_10SecureInfoE() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::StreamBufferImp::finishUserSetup() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils15StreamBufferImp15finishUserSetupEv(void) {
    ALOGD("_ZN5NSCam2v35Utils15StreamBufferImp15finishUserSetupEv() called");
    return 0;
}

/* Exported Object: vtable for android::List<NSCam::v3::Utils::StreamBufferImp::RWUser> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android4ListIN5NSCam2v35Utils15StreamBufferImp6RWUserEEE = NULL;

/* Demangled: NSCam::v3::Utils::StreamBufferPoolImpl::~StreamBufferPoolImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils20StreamBufferPoolImplD1Ev(void) {
    ALOGD("_ZN5NSCam2v35Utils20StreamBufferPoolImplD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferPoolImpl::~StreamBufferPoolImpl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N5NSCam2v35Utils20StreamBufferPoolImplD0Ev(void) {
    ALOGD("_ZTv0_n12_N5NSCam2v35Utils20StreamBufferPoolImplD0Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::UsersManager::MyUser::MyUser(NSCam::v3::IUsersManager::User const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils12UsersManager6MyUserC2ERKNS0_13IUsersManager4UserEi(void) {
    ALOGD("_ZN5NSCam2v35Utils12UsersManager6MyUserC2ERKNS0_13IUsersManager4UserEi() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<int> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorIiEE = NULL;

/* Demangled: NSCam::v3::Utils::TStreamBufferWithPool<NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::IImageStreamBuffer>::releaseBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils21TStreamBufferWithPoolINS1_20HalImageStreamBufferENS0_18IImageStreamBufferEE13releaseBufferEv(void) {
    ALOGD("_ZN5NSCam2v35Utils21TStreamBufferWithPoolINS1_20HalImageStreamBufferENS0_18IImageStreamBufferEE13releaseBufferEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, std::__1::shared_ptr<NSCam::v3::Utils::Imp::SyncContext> > >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__110shared_ptrIN5NSCam2v35Utils3Imp11SyncContextEEEEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__110shared_ptrIN5NSCam2v35Utils3Imp11SyncContextEEEEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::Utils::Imp::SyncHelperBase */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v35Utils3Imp14SyncHelperBaseE = NULL;

/* Demangled: virtual thunk to NSCam::v3::Utils::Imp::SyncHelperBase::syncResultCheck(NSCam::v3::Utils::Imp::SyncParam&) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5NSCam2v35Utils3Imp14SyncHelperBase15syncResultCheckERNS2_9SyncParamE(void) {
    ALOGD("_ZTv0_n40_N5NSCam2v35Utils3Imp14SyncHelperBase15syncResultCheckERNS2_9SyncParamE() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::MetaStreamInfo::MetaStreamInfo(char const*, long long, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils14MetaStreamInfoC2EPKcxjjj(void) {
    ALOGD("_ZN5NSCam2v35Utils14MetaStreamInfoC2EPKcxjjj() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::ImageStreamInfo::getTransform() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils15ImageStreamInfo12getTransformEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils15ImageStreamInfo12getTransformEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::IUsersManager-in-NSCam::v3::Utils::UsersManager */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v35Utils12UsersManagerE0_NS0_13IUsersManagerE = NULL;

/* Demangled: NSCam::v3::Utils::HalMetaStreamBuffer::Allocator::operator()(NSCam::v3::Utils::IStreamBufferPool<NSCam::v3::IMetaStreamBuffer>*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils19HalMetaStreamBuffer9AllocatorclEPNS1_17IStreamBufferPoolINS0_17IMetaStreamBufferEEE(void) {
    ALOGD("_ZN5NSCam2v35Utils19HalMetaStreamBuffer9AllocatorclEPNS1_17IStreamBufferPoolINS0_17IMetaStreamBufferEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::StreamBufferImp::getSubjectName() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils15StreamBufferImp14getSubjectNameEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils15StreamBufferImp14getSubjectNameEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::TIStreamBuffer<NSCam::v3::IImageStreamInfo, NSCam::IImageBufferHeap>-in-NSCam::v3::Utils::HalImageStreamBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v35Utils20HalImageStreamBufferE0_NS0_14TIStreamBufferINS0_16IImageStreamInfoENS_16IImageBufferHeapEEE = NULL;

/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::do_sync_wait(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils3Imp14SyncHelperBase12do_sync_waitEi(void) {
    ALOGD("_ZN5NSCam2v35Utils3Imp14SyncHelperBase12do_sync_waitEi() called");
    return 0;
}

/* Demangled: android::SortedVector<int>::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorIiE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorIiE7do_copyEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::Utils::UsersManager */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v35Utils12UsersManagerE = NULL;

/* Demangled: NSCam::v3::Utils::StreamBufferImp::createAcquireFence(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils15StreamBufferImp18createAcquireFenceEi(void) {
    ALOGD("_ZNK5NSCam2v35Utils15StreamBufferImp18createAcquireFenceEi() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::IStreamBuffer-in-NSCam::v3::Utils::HalImageStreamBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v35Utils20HalImageStreamBufferE0_NS0_13IStreamBufferE = NULL;

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::StreamBufferImp::onTryWriteLock(char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils15StreamBufferImp14onTryWriteLockEPKcb(void) {
    ALOGD("_ZN5NSCam2v35Utils15StreamBufferImp14onTryWriteLockEPKcb() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::ImageStreamInfo::getStreamType() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_NK5NSCam2v35Utils15ImageStreamInfo13getStreamTypeEv(void) {
    ALOGD("_ZTv0_n24_NK5NSCam2v35Utils15ImageStreamInfo13getStreamTypeEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::ImageStreamInfo::setMaxBufNum(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N5NSCam2v35Utils15ImageStreamInfo12setMaxBufNumEj(void) {
    ALOGD("_ZTv0_n32_N5NSCam2v35Utils15ImageStreamInfo12setMaxBufNumEj() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferImp::haveAllProducerUsersReleased() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n108_NK5NSCam2v35Utils15StreamBufferImp28haveAllProducerUsersReleasedEv(void) {
    ALOGD("_ZTv0_n108_NK5NSCam2v35Utils15StreamBufferImp28haveAllProducerUsersReleasedEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::HalMetaStreamBuffer::toString() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n168_NK5NSCam2v35Utils19HalMetaStreamBuffer8toStringEv(void) {
    ALOGD("_ZTv0_n168_NK5NSCam2v35Utils19HalMetaStreamBuffer8toStringEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferImp::createAcquireFence(int) const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n80_NK5NSCam2v35Utils15StreamBufferImp18createAcquireFenceEi(void) {
    ALOGD("_ZTv0_n80_NK5NSCam2v35Utils15StreamBufferImp18createAcquireFenceEi() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::remove_timestamp(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils3Imp14SyncHelperBase16remove_timestampEii(void) {
    ALOGD("_ZN5NSCam2v35Utils3Imp14SyncHelperBase16remove_timestampEii() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, int> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiiEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiiEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::HalImageStreamBuffer::Allocator::Allocator(NSCam::v3::IImageStreamInfo*, NSCam::IImageBufferAllocator::ImgParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils20HalImageStreamBuffer9AllocatorC2EPNS0_16IImageStreamInfoERKNS_21IImageBufferAllocator8ImgParamE(void) {
    ALOGD("_ZN5NSCam2v35Utils20HalImageStreamBuffer9AllocatorC2EPNS0_16IImageStreamInfoERKNS_21IImageBufferAllocator8ImgParamE() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::StreamBufferImp::haveAllUsersReleasedOrPreReleased(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils15StreamBufferImp33haveAllUsersReleasedOrPreReleasedEi(void) {
    ALOGD("_ZNK5NSCam2v35Utils15StreamBufferImp33haveAllUsersReleasedOrPreReleasedEi() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::StreamBufferImp::dumpState(android::Printer&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils15StreamBufferImp9dumpStateERN7android7PrinterE(void) {
    ALOGD("_ZNK5NSCam2v35Utils15StreamBufferImp9dumpStateERN7android7PrinterE() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::SyncHelperBase() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils3Imp14SyncHelperBaseC2Ev(void) {
    ALOGD("_ZN5NSCam2v35Utils3Imp14SyncHelperBaseC2Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__vallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE11__vallocateEj(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE11__vallocateEj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::v3::Utils::UsersManager::MyUserGraph::UserNode> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils12UsersManager11MyUserGraph8UserNodeEEEE10do_compareEPKvSB_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils12UsersManager11MyUserGraph8UserNodeEEEE10do_compareEPKvSB_() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::UsersManager::haveAllUsersReleased() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n100_NK5NSCam2v35Utils12UsersManager20haveAllUsersReleasedEv(void) {
    ALOGD("_ZTv0_n100_NK5NSCam2v35Utils12UsersManager20haveAllUsersReleasedEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::HalImageStreamBuffer::replaceStreamInfo(android::sp<NSCam::v3::IImageStreamInfo>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils20HalImageStreamBuffer17replaceStreamInfoEN7android2spINS0_16IImageStreamInfoEEE(void) {
    ALOGD("_ZN5NSCam2v35Utils20HalImageStreamBuffer17replaceStreamInfoEN7android2spINS0_16IImageStreamInfoEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::HalImageStreamBuffer::Allocator::operator()(NSCam::v3::Utils::IStreamBufferPool<NSCam::v3::IImageStreamBuffer>*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils20HalImageStreamBuffer9AllocatorclEPNS1_17IStreamBufferPoolINS0_18IImageStreamBufferEEE(void) {
    ALOGD("_ZN5NSCam2v35Utils20HalImageStreamBuffer9AllocatorclEPNS1_17IStreamBufferPoolINS0_18IImageStreamBufferEEE() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::Utils::TStreamBuffer<NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::IImageStreamBuffer>-in-NSCam::v3::Utils::HalImageStreamBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v35Utils20HalImageStreamBufferE0_NS1_13TStreamBufferINS1_20HalImageStreamBufferENS0_18IImageStreamBufferEEE = NULL;

/* Demangled: __aeabi_ldivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_ldivmod(void) {
    ALOGD("__aeabi_ldivmod() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::start(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils3Imp14SyncHelperBase5startEi(void) {
    ALOGD("_ZN5NSCam2v35Utils3Imp14SyncHelperBase5startEi() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::ImageStreamInfo::getSensorId() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils15ImageStreamInfo11getSensorIdEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils15ImageStreamInfo11getSensorIdEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::UsersManager::MyUserGraph::getGroupIndex() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils12UsersManager11MyUserGraph13getGroupIndexEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils12UsersManager11MyUserGraph13getGroupIndexEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::MetaStreamInfo::getStreamId() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils14MetaStreamInfo11getStreamIdEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils14MetaStreamInfo11getStreamIdEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::StreamBufferImp::dumpState(android::Printer&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils15StreamBufferImp9dumpStateERN7android7PrinterERKNSt3__16vectorINS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEENSB_ISD_EEEE(void) {
    ALOGD("_ZN5NSCam2v35Utils15StreamBufferImp9dumpStateERN7android7PrinterERKNSt3__16vectorINS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEENSB_ISD_EEEE() called");
    return 0;
}

/* Exported Object: VTT for NSCam::v3::Utils::StreamBufferPoolImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam2v35Utils20StreamBufferPoolImplE = NULL;

/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::decideMasterCam(NSCam::v3::Utils::Imp::SyncParam&, int&, long long&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils3Imp14SyncHelperBase15decideMasterCamERNS2_9SyncParamERiRx(void) {
    ALOGD("_ZN5NSCam2v35Utils3Imp14SyncHelperBase15decideMasterCamERNS2_9SyncParamERiRx() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::v3::Utils::Imp::SyncContext::syncData> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp11SyncContext8syncDataEEEE10do_compareEPKvSB_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp11SyncContext8syncDataEEEE10do_compareEPKvSB_() called");
    return 0;
}

/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::__vallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE11__vallocateEj(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE11__vallocateEj() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::~SyncHelperBase() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils3Imp14SyncHelperBaseD1Ev(void) {
    ALOGD("_ZN5NSCam2v35Utils3Imp14SyncHelperBaseD1Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::StreamBufferImp::StreamBufferImp(android::sp<NSCam::v3::IStreamInfo>, void*, NSCam::v3::IUsersManager*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils15StreamBufferImpC2EN7android2spINS0_11IStreamInfoEEEPvPNS0_13IUsersManagerE(void) {
    ALOGD("_ZN5NSCam2v35Utils15StreamBufferImpC2EN7android2spINS0_11IStreamInfoEEEPvPNS0_13IUsersManagerE() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, int> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiiEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiiEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, int> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiiEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiiEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: __udivmodsi4 */
extern "C" __attribute__((visibility("default"))) int __udivmodsi4(void) {
    ALOGD("__udivmodsi4() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::ImageStreamInfo::getAllocImgFormat() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils15ImageStreamInfo17getAllocImgFormatEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils15ImageStreamInfo17getAllocImgFormatEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::Utils::UsersManager::MyUser> > >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v35Utils12UsersManager6MyUserEEEEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v35Utils12UsersManager6MyUserEEEEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::UsersManager::enqueUserGraph(android::sp<NSCam::v3::IUsersManager::IUserGraph>) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n36_N5NSCam2v35Utils12UsersManager14enqueUserGraphEN7android2spINS0_13IUsersManager10IUserGraphEEE(void) {
    ALOGD("_ZTv0_n36_N5NSCam2v35Utils12UsersManager14enqueUserGraphEN7android2spINS0_13IUsersManager10IUserGraphEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::StreamBufferPoolImpl::StreamBufferPoolImpl(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils20StreamBufferPoolImplC2EPKc(void) {
    ALOGD("_ZN5NSCam2v35Utils20StreamBufferPoolImplC2EPKc() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::StreamBufferImp::markUserStatus(int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils15StreamBufferImp14markUserStatusEij(void) {
    ALOGD("_ZN5NSCam2v35Utils15StreamBufferImp14markUserStatusEij() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::MetaStreamInfo::getMinInitBufNum() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils14MetaStreamInfo16getMinInitBufNumEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils14MetaStreamInfo16getMinInitBufNumEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::UsersManager::queryUser_(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils12UsersManager10queryUser_Ei(void) {
    ALOGD("_ZNK5NSCam2v35Utils12UsersManager10queryUser_Ei() called");
    return 0;
}

/* Demangled: android::SortedVector<int>::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorIiE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorIiE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::UsersManager::queryGroupUsage(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils12UsersManager15queryGroupUsageEi(void) {
    ALOGD("_ZNK5NSCam2v35Utils12UsersManager15queryGroupUsageEi() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::UsersManager::dumpState(android::Printer&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n28_N5NSCam2v35Utils12UsersManager9dumpStateERN7android7PrinterERKNSt3__16vectorINS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEENSB_ISD_EEEE(void) {
    ALOGD("_ZTv0_n28_N5NSCam2v35Utils12UsersManager9dumpStateERN7android7PrinterERKNSt3__16vectorINS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEENSB_ISD_EEEE() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::IImageStreamBuffer-in-NSCam::v3::Utils::HalImageStreamBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v35Utils20HalImageStreamBufferE0_NS0_18IImageStreamBufferE = NULL;

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::Utils::MetaStreamInfoBuilder */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v35Utils21MetaStreamInfoBuilderE = NULL;

/* Exported Object: construction vtable for NSCam::v3::IStreamInfo-in-NSCam::v3::Utils::ImageStreamInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v35Utils15ImageStreamInfoE0_NS0_11IStreamInfoE = NULL;

/* Exported Object: construction vtable for NSCam::v3::IImageStreamInfo-in-NSCam::v3::Utils::ImageStreamInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v35Utils15ImageStreamInfoE0_NS0_16IImageStreamInfoE = NULL;

/* Demangled: NSCam::v3::Utils::UsersManager::MyUser::MyUser(NSCam::v3::IUsersManager::User const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils12UsersManager6MyUserC1ERKNS0_13IUsersManager4UserEi(void) {
    ALOGD("_ZN5NSCam2v35Utils12UsersManager6MyUserC1ERKNS0_13IUsersManager4UserEi() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::UsersManager::haveAllProducerUsersReleasedOrPreReleased() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils12UsersManager41haveAllProducerUsersReleasedOrPreReleasedEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils12UsersManager41haveAllProducerUsersReleasedOrPreReleasedEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::v3::Utils::UsersManager::MyUserGraph::UserNode> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils12UsersManager11MyUserGraph8UserNodeEEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils12UsersManager11MyUserGraph8UserNodeEEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::v3::Utils::UsersManager::MyUser> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v35Utils12UsersManager6MyUserEEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v35Utils12UsersManager6MyUserEEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::UsersManager::getNumberOfProducers() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n72_NK5NSCam2v35Utils12UsersManager20getNumberOfProducersEv(void) {
    ALOGD("_ZTv0_n72_NK5NSCam2v35Utils12UsersManager20getNumberOfProducersEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::UsersManager::createAcquireFence() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n88_NK5NSCam2v35Utils12UsersManager18createAcquireFenceEv(void) {
    ALOGD("_ZTv0_n88_NK5NSCam2v35Utils12UsersManager18createAcquireFenceEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::StreamBufferImp::createAcquireFence() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils15StreamBufferImp18createAcquireFenceEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils15StreamBufferImp18createAcquireFenceEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::StreamBufferPoolImpl::releaseToPoolImpl(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils20StreamBufferPoolImpl17releaseToPoolImplEPKcj(void) {
    ALOGD("_ZN5NSCam2v35Utils20StreamBufferPoolImpl17releaseToPoolImplEPKcj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::v3::Utils::Imp::SyncContext::syncData> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp11SyncContext8syncDataEEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp11SyncContext8syncDataEEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Exported Object: VTT for NSCam::v3::Utils::ImageStreamInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam2v35Utils15ImageStreamInfoE = NULL;

/* Demangled: NSCam::v3::Utils::UsersManager::finishUserSetup() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils12UsersManager15finishUserSetupEv(void) {
    ALOGD("_ZN5NSCam2v35Utils12UsersManager15finishUserSetupEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::UsersManager::MyUserGraph::indegree(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils12UsersManager11MyUserGraph8indegreeEj(void) {
    ALOGD("_ZNK5NSCam2v35Utils12UsersManager11MyUserGraph8indegreeEj() called");
    return 0;
}

/* Exported Object: VTT for NSCam::v3::Utils::UsersManager::MyUserGraph */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam2v35Utils12UsersManager11MyUserGraphE = NULL;

/* Demangled: NSCam::v3::Utils::HalMetaStreamBuffer::HalMetaStreamBuffer(android::sp<NSCam::v3::IMetaStreamInfo>, android::wp<NSCam::v3::Utils::IStreamBufferPool<NSCam::v3::IMetaStreamBuffer> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils19HalMetaStreamBufferC2EN7android2spINS0_15IMetaStreamInfoEEENS3_2wpINS1_17IStreamBufferPoolINS0_17IMetaStreamBufferEEEEE(void) {
    ALOGD("_ZN5NSCam2v35Utils19HalMetaStreamBufferC2EN7android2spINS0_15IMetaStreamInfoEEENS3_2wpINS1_17IStreamBufferPoolINS0_17IMetaStreamBufferEEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::Utils::TStreamBuffer<NSCam::v3::Utils::HalMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer>-in-NSCam::v3::Utils::HalMetaStreamBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v35Utils19HalMetaStreamBufferE0_NS1_13TStreamBufferINS1_19HalMetaStreamBufferENS0_17IMetaStreamBufferEEE = NULL;

/* Demangled: virtual thunk to NSCam::v3::Utils::ImageStreamInfo::toString() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_NK5NSCam2v35Utils15ImageStreamInfo8toStringEv(void) {
    ALOGD("_ZTv0_n40_NK5NSCam2v35Utils15ImageStreamInfo8toStringEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::StreamBufferImp::haveAllUsersReleasedOrPreReleased() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils15StreamBufferImp33haveAllUsersReleasedOrPreReleasedEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils15StreamBufferImp33haveAllUsersReleasedOrPreReleasedEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferImp::waitUserReleaseStatus(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n116_N5NSCam2v35Utils15StreamBufferImp21waitUserReleaseStatusENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void) {
    ALOGD("_ZTv0_n116_N5NSCam2v35Utils15StreamBufferImp21waitUserReleaseStatusENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::Imp::Timer::Timer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils3Imp5TimerC2Ev(void) {
    ALOGD("_ZN5NSCam2v35Utils3Imp5TimerC2Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::UsersManager::dumpState(android::Printer&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils12UsersManager9dumpStateERN7android7PrinterE(void) {
    ALOGD("_ZNK5NSCam2v35Utils12UsersManager9dumpStateERN7android7PrinterE() called");
    return 0;
}

/* Demangled: android::SortedVector<int>::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorIiE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorIiE12do_constructEPvj() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::IImageStreamBuffer>::sp<NSCam::v3::Utils::TStreamBufferWithPool<NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::IImageStreamBuffer> >(NSCam::v3::Utils::TStreamBufferWithPool<NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::IImageStreamBuffer>*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v318IImageStreamBufferEEC2INS2_5Utils21TStreamBufferWithPoolINS6_20HalImageStreamBufferES3_EEEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam2v318IImageStreamBufferEEC2INS2_5Utils21TStreamBufferWithPoolINS6_20HalImageStreamBufferES3_EEEEPT_() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::HalImageStreamBuffer::toString() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils20HalImageStreamBuffer8toStringEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils20HalImageStreamBuffer8toStringEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::UsersManager::MyUserGraph::removeUser(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils12UsersManager11MyUserGraph10removeUserEi(void) {
    ALOGD("_ZN5NSCam2v35Utils12UsersManager11MyUserGraph10removeUserEi() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::IMetaStreamInfo>::sp<NSCam::v3::Utils::MetaStreamInfo>(NSCam::v3::Utils::MetaStreamInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v315IMetaStreamInfoEEC2INS2_5Utils14MetaStreamInfoEEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam2v315IMetaStreamInfoEEC2INS2_5Utils14MetaStreamInfoEEEPT_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::Utils::UsersManager::MyUserGroupGraph */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v35Utils12UsersManager16MyUserGroupGraphE = NULL;

/* Demangled: NSCam::v3::Utils::StreamBufferPoolImpl::threadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils20StreamBufferPoolImpl10threadLoopEv(void) {
    ALOGD("_ZN5NSCam2v35Utils20StreamBufferPoolImpl10threadLoopEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::IStreamInfo-in-NSCam::v3::Utils::MetaStreamInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v35Utils14MetaStreamInfoE0_NS0_11IStreamInfoE = NULL;

/* Demangled: NSCam::v3::Utils::Imp::Timer::~Timer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils3Imp5TimerD1Ev(void) {
    ALOGD("_ZN5NSCam2v35Utils3Imp5TimerD1Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::UsersManager::getUserStatus(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils12UsersManager13getUserStatusEi(void) {
    ALOGD("_ZNK5NSCam2v35Utils12UsersManager13getUserStatusEi() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::UsersManager::dumpState(android::Printer&) const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_NK5NSCam2v35Utils12UsersManager9dumpStateERN7android7PrinterE(void) {
    ALOGD("_ZTv0_n24_NK5NSCam2v35Utils12UsersManager9dumpStateERN7android7PrinterE() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::HalMetaStreamBuffer::castFrom(NSCam::v3::IStreamBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils19HalMetaStreamBuffer8castFromEPNS0_13IStreamBufferE(void) {
    ALOGD("_ZN5NSCam2v35Utils19HalMetaStreamBuffer8castFromEPNS0_13IStreamBufferE() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::UsersManager::getNumberOfProducers() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils12UsersManager20getNumberOfProducersEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils12UsersManager20getNumberOfProducersEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::UsersManager::waitUserReleaseStatus(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n116_N5NSCam2v35Utils12UsersManager21waitUserReleaseStatusENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void) {
    ALOGD("_ZTv0_n116_N5NSCam2v35Utils12UsersManager21waitUserReleaseStatusENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: __aeabi_uidivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidivmod(void) {
    ALOGD("__aeabi_uidivmod() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::v3::Utils::UsersManager::MyUserGraph> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v35Utils12UsersManager11MyUserGraphEEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v35Utils12UsersManager11MyUserGraphEEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::UsersManager::createReleaseFence() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n92_NK5NSCam2v35Utils12UsersManager18createReleaseFenceEv(void) {
    ALOGD("_ZTv0_n92_NK5NSCam2v35Utils12UsersManager18createReleaseFenceEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferImp::finishUserSetup() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5NSCam2v35Utils15StreamBufferImp15finishUserSetupEv(void) {
    ALOGD("_ZTv0_n40_N5NSCam2v35Utils15StreamBufferImp15finishUserSetupEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__push_back_slow_path<unsigned int>(unsigned int&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIjEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIjEEvOT_() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::StreamBufferPoolImpl::~StreamBufferPoolImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils20StreamBufferPoolImplD0Ev(void) {
    ALOGD("_ZN5NSCam2v35Utils20StreamBufferPoolImplD0Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, std::__1::shared_ptr<NSCam::v3::Utils::Imp::SyncContext> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__110shared_ptrIN5NSCam2v35Utils3Imp11SyncContextEEEEEE10do_compareEPKvSD_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__110shared_ptrIN5NSCam2v35Utils3Imp11SyncContextEEEEEE10do_compareEPKvSD_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, std::__1::shared_ptr<NSCam::v3::Utils::Imp::SyncContext> > >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__110shared_ptrIN5NSCam2v35Utils3Imp11SyncContextEEEEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__110shared_ptrIN5NSCam2v35Utils3Imp11SyncContextEEEEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::UsersManager::haveAllUsersReleased() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils12UsersManager20haveAllUsersReleasedEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils12UsersManager20haveAllUsersReleasedEv() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::MetaStreamInfo::getStreamId() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_NK5NSCam2v35Utils14MetaStreamInfo11getStreamIdEv(void) {
    ALOGD("_ZTv0_n20_NK5NSCam2v35Utils14MetaStreamInfo11getStreamIdEv() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::vector(std::__1::vector<unsigned int, std::__1::allocator<unsigned int> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEEC2ERKS3_(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEEC2ERKS3_() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::UsersManager::getAllUsersStatus() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils12UsersManager17getAllUsersStatusEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils12UsersManager17getAllUsersStatusEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::HalMetaStreamBuffer::releaseBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils19HalMetaStreamBuffer13releaseBufferEv(void) {
    ALOGD("_ZN5NSCam2v35Utils19HalMetaStreamBuffer13releaseBufferEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::StreamBufferImp::haveAllProducerUsersReleased() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils15StreamBufferImp28haveAllProducerUsersReleasedEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils15StreamBufferImp28haveAllProducerUsersReleasedEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::UsersManager::markUserStatus(int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils12UsersManager14markUserStatusEij(void) {
    ALOGD("_ZN5NSCam2v35Utils12UsersManager14markUserStatusEij() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::IUsersManager-in-NSCam::v3::Utils::StreamBufferImp */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v35Utils15StreamBufferImpE0_NS0_13IUsersManagerE = NULL;

/* Demangled: NSCam::v3::Utils::UsersManager::MyUserGraph::addEdge(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils12UsersManager11MyUserGraph7addEdgeEii(void) {
    ALOGD("_ZN5NSCam2v35Utils12UsersManager11MyUserGraph7addEdgeEii() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::UsersManager::MyUserGraph::DFS(unsigned int, android::Vector<android::sp<NSCam::v3::Utils::UsersManager::MyUser> >&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils12UsersManager11MyUserGraph3DFSEjRN7android6VectorINS4_2spINS2_6MyUserEEEEE(void) {
    ALOGD("_ZNK5NSCam2v35Utils12UsersManager11MyUserGraph3DFSEjRN7android6VectorINS4_2spINS2_6MyUserEEEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::UsersManager::getNumberOfConsumers() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils12UsersManager20getNumberOfConsumersEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils12UsersManager20getNumberOfConsumersEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::HalMetaStreamBuffer::HalMetaStreamBuffer(android::sp<NSCam::v3::IMetaStreamInfo>, android::wp<NSCam::v3::Utils::IStreamBufferPool<NSCam::v3::IMetaStreamBuffer> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils19HalMetaStreamBufferC1EN7android2spINS0_15IMetaStreamInfoEEENS3_2wpINS1_17IStreamBufferPoolINS0_17IMetaStreamBufferEEEEE(void) {
    ALOGD("_ZN5NSCam2v35Utils19HalMetaStreamBufferC1EN7android2spINS0_15IMetaStreamInfoEEENS3_2wpINS1_17IStreamBufferPoolINS0_17IMetaStreamBufferEEEEE() called");
    return 0;
}

/* Exported Object: VTT for NSCam::v3::Utils::HalImageStreamBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam2v35Utils20HalImageStreamBufferE = NULL;

/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::SyncHelperBase() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils3Imp14SyncHelperBaseC1Ev(void) {
    ALOGD("_ZN5NSCam2v35Utils3Imp14SyncHelperBaseC1Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::__swap_out_circular_buffer(std::__1::__split_buffer<int, std::__1::allocator<int>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE26__swap_out_circular_bufferERNS_14__split_bufferIiRS2_EE(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE26__swap_out_circular_bufferERNS_14__split_bufferIiRS2_EE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::ImageStreamInfo::getStreamId() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_NK5NSCam2v35Utils15ImageStreamInfo11getStreamIdEv(void) {
    ALOGD("_ZTv0_n20_NK5NSCam2v35Utils15ImageStreamInfo11getStreamIdEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::Utils::HalImageStreamBufferProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v35Utils28HalImageStreamBufferProviderE = NULL;

/* Demangled: virtual thunk to NSCam::v3::Utils::Imp::SyncHelperBase::stop(int) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam2v35Utils3Imp14SyncHelperBase4stopEi(void) {
    ALOGD("_ZTv0_n24_N5NSCam2v35Utils3Imp14SyncHelperBase4stopEi() called");
    return 0;
}

/* Demangled: android::sp<NSCam::IIonImageBufferHeap>::sp(NSCam::IIonImageBufferHeap*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam19IIonImageBufferHeapEEC2EPS2_(void) {
    ALOGD("_ZN7android2spIN5NSCam19IIonImageBufferHeapEEC2EPS2_() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::StreamBufferImp::getAllUsersStatus() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils15StreamBufferImp17getAllUsersStatusEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils15StreamBufferImp17getAllUsersStatusEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::Utils::HalMetaStreamBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v35Utils19HalMetaStreamBufferE = NULL;

/* Demangled: NSCam::v3::Utils::StreamBufferPoolImpl::acquireFromPoolImpl(char const*, unsigned int&, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils20StreamBufferPoolImpl19acquireFromPoolImplEPKcRjx(void) {
    ALOGD("_ZN5NSCam2v35Utils20StreamBufferPoolImpl19acquireFromPoolImplEPKcRjx() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::do_result_post(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils3Imp14SyncHelperBase14do_result_postEi(void) {
    ALOGD("_ZN5NSCam2v35Utils3Imp14SyncHelperBase14do_result_postEi() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::remove_frameno_from_map(NSCam::v3::Utils::Imp::SyncParam&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils3Imp14SyncHelperBase23remove_frameno_from_mapERNS2_9SyncParamEb(void) {
    ALOGD("_ZN5NSCam2v35Utils3Imp14SyncHelperBase23remove_frameno_from_mapERNS2_9SyncParamEb() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<int, int> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiiEEEE = NULL;

/* Demangled: NSCam::v3::Utils::ImageStreamInfo::getStreamName() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils15ImageStreamInfo13getStreamNameEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils15ImageStreamInfo13getStreamNameEv() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::Utils::HalImageStreamBuffer>::sp<NSCam::v3::Utils::HalImageStreamBufferProvider>(NSCam::v3::Utils::HalImageStreamBufferProvider*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v35Utils20HalImageStreamBufferEEC2INS3_28HalImageStreamBufferProviderEEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam2v35Utils20HalImageStreamBufferEEC2INS3_28HalImageStreamBufferProviderEEEPT_() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::get_timestamp_check_result(int, int, bool&, int&, long long&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils3Imp14SyncHelperBase26get_timestamp_check_resultEiiRbRiRx(void) {
    ALOGD("_ZN5NSCam2v35Utils3Imp14SyncHelperBase26get_timestamp_check_resultEiiRbRiRx() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::HalImageStreamBuffer::toString() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n168_NK5NSCam2v35Utils20HalImageStreamBuffer8toStringEv(void) {
    ALOGD("_ZTv0_n168_NK5NSCam2v35Utils20HalImageStreamBuffer8toStringEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::~SyncHelperBase() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils3Imp14SyncHelperBaseD0Ev(void) {
    ALOGD("_ZN5NSCam2v35Utils3Imp14SyncHelperBaseD0Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, int> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiiEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiiEEE10do_destroyEPvj() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::IMetaStreamBuffer-in-NSCam::v3::Utils::HalMetaStreamBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v35Utils19HalMetaStreamBufferE0_NS0_17IMetaStreamBufferE = NULL;

/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferImp::dumpState(android::Printer&) const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_NK5NSCam2v35Utils15StreamBufferImp9dumpStateERN7android7PrinterE(void) {
    ALOGD("_ZTv0_n24_NK5NSCam2v35Utils15StreamBufferImp9dumpStateERN7android7PrinterE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferImp::enqueUserGraph(android::sp<NSCam::v3::IUsersManager::IUserGraph>) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n36_N5NSCam2v35Utils15StreamBufferImp14enqueUserGraphEN7android2spINS0_13IUsersManager10IUserGraphEEE(void) {
    ALOGD("_ZTv0_n36_N5NSCam2v35Utils15StreamBufferImp14enqueUserGraphEN7android2spINS0_13IUsersManager10IUserGraphEEE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferImp::createAcquireFence() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n88_NK5NSCam2v35Utils15StreamBufferImp18createAcquireFenceEv(void) {
    ALOGD("_ZTv0_n88_NK5NSCam2v35Utils15StreamBufferImp18createAcquireFenceEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, int> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiiEEE10do_compareEPKvS5_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiiEEE10do_compareEPKvS5_() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::ImageStreamInfo::setTransform(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils15ImageStreamInfo12setTransformEj(void) {
    ALOGD("_ZN5NSCam2v35Utils15ImageStreamInfo12setTransformEj() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::UsersManager::haveAllProducerUsersReleased() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n108_NK5NSCam2v35Utils12UsersManager28haveAllProducerUsersReleasedEv(void) {
    ALOGD("_ZTv0_n108_NK5NSCam2v35Utils12UsersManager28haveAllProducerUsersReleasedEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::Utils::StreamBufferImp-in-NSCam::v3::Utils::HalImageStreamBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v35Utils20HalImageStreamBufferE4_NS1_15StreamBufferImpE = NULL;

/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferImp::reset() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n44_N5NSCam2v35Utils15StreamBufferImp5resetEv(void) {
    ALOGD("_ZTv0_n44_N5NSCam2v35Utils15StreamBufferImp5resetEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::Imp::SyncHelperBase::start(int) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_N5NSCam2v35Utils3Imp14SyncHelperBase5startEi(void) {
    ALOGD("_ZTv0_n20_N5NSCam2v35Utils3Imp14SyncHelperBase5startEi() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::v3::Utils::Imp::SyncContext::syncData> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp11SyncContext8syncDataEEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp11SyncContext8syncDataEEEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, std::__1::shared_ptr<NSCam::v3::Utils::Imp::SyncContext> > >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__110shared_ptrIN5NSCam2v35Utils3Imp11SyncContextEEEEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__110shared_ptrIN5NSCam2v35Utils3Imp11SyncContextEEEEEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::UsersManager::MyUserGraph::MyUserGraph(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils12UsersManager11MyUserGraphC2Ej(void) {
    ALOGD("_ZN5NSCam2v35Utils12UsersManager11MyUserGraphC2Ej() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferImp::haveAllUsersReleased() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n100_NK5NSCam2v35Utils15StreamBufferImp20haveAllUsersReleasedEv(void) {
    ALOGD("_ZTv0_n100_NK5NSCam2v35Utils15StreamBufferImp20haveAllUsersReleasedEv() called");
    return 0;
}

/* Demangled: std::__1::__wrap_iter<int*> std::__1::remove<std::__1::__wrap_iter<int*>, int>(std::__1::__wrap_iter<int*>, std::__1::__wrap_iter<int*>, int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16removeINS_11__wrap_iterIPiEEiEET_S4_S4_RKT0_(void) {
    ALOGD("_ZNSt3__16removeINS_11__wrap_iterIPiEEiEET_S4_S4_RKT0_() called");
    return 0;
}

/* Demangled: std::__1::vector<NSCam::BufPlane, std::__1::allocator<NSCam::BufPlane> >::vector(std::__1::vector<NSCam::BufPlane, std::__1::allocator<NSCam::BufPlane> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEEC2ERKS5_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEEC2ERKS5_() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::UsersManager::MyUserGraph::setAcquireFence(unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils12UsersManager11MyUserGraph15setAcquireFenceEji(void) {
    ALOGD("_ZN5NSCam2v35Utils12UsersManager11MyUserGraph15setAcquireFenceEji() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::UsersManager::isActive() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils12UsersManager8isActiveEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils12UsersManager8isActiveEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::Utils::UsersManager::MyUser> > >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v35Utils12UsersManager6MyUserEEEEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v35Utils12UsersManager6MyUserEEEEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::TStreamBufferWithPool<NSCam::v3::Utils::HalMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer>::tryGetBufferPool() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils21TStreamBufferWithPoolINS1_19HalMetaStreamBufferENS0_17IMetaStreamBufferEE16tryGetBufferPoolEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils21TStreamBufferWithPoolINS1_19HalMetaStreamBufferENS0_17IMetaStreamBufferEE16tryGetBufferPoolEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferImp::getNumberOfConsumers() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n76_NK5NSCam2v35Utils15StreamBufferImp20getNumberOfConsumersEv(void) {
    ALOGD("_ZTv0_n76_NK5NSCam2v35Utils15StreamBufferImp20getNumberOfConsumersEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::earse_result_queue_by_cam_id(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils3Imp14SyncHelperBase28earse_result_queue_by_cam_idEi(void) {
    ALOGD("_ZN5NSCam2v35Utils3Imp14SyncHelperBase28earse_result_queue_by_cam_idEi() called");
    return 0;
}

/* Demangled: __aeabi_memmove4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove4(void) {
    ALOGD("__aeabi_memmove4() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::UsersManager::getSubject() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils12UsersManager10getSubjectEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils12UsersManager10getSubjectEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::v3::Utils::UsersManager::MyUserGraph::UserNode> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils12UsersManager11MyUserGraph8UserNodeEEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils12UsersManager11MyUserGraph8UserNodeEEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::v3::Utils::UsersManager::MyUserGraph> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v35Utils12UsersManager11MyUserGraphEEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v35Utils12UsersManager11MyUserGraphEEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::v3::Utils::UsersManager::MyUser> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v35Utils12UsersManager6MyUserEEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v35Utils12UsersManager6MyUserEEEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::StreamBufferImp::setUsersManager(android::sp<NSCam::v3::IUsersManager>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils15StreamBufferImp15setUsersManagerEN7android2spINS0_13IUsersManagerEEE(void) {
    ALOGD("_ZN5NSCam2v35Utils15StreamBufferImp15setUsersManagerEN7android2spINS0_13IUsersManagerEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::v3::Utils::Imp::SyncContext::syncData> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp11SyncContext8syncDataEEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp11SyncContext8syncDataEEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::v3::Utils::Imp::SyncContext::syncData> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp11SyncContext8syncDataEEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp11SyncContext8syncDataEEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: __divmoddi4 */
extern "C" __attribute__((visibility("default"))) int __divmoddi4(void) {
    ALOGD("__divmoddi4() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::UsersManager::getSubject() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n16_NK5NSCam2v35Utils12UsersManager10getSubjectEv(void) {
    ALOGD("_ZTv0_n16_NK5NSCam2v35Utils12UsersManager10getSubjectEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::UsersManager::getSubjectName() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_NK5NSCam2v35Utils12UsersManager14getSubjectNameEv(void) {
    ALOGD("_ZTv0_n20_NK5NSCam2v35Utils12UsersManager14getSubjectNameEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferImp::haveAllUsersReleasedOrPreReleased() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n124_NK5NSCam2v35Utils15StreamBufferImp33haveAllUsersReleasedOrPreReleasedEv(void) {
    ALOGD("_ZTv0_n124_NK5NSCam2v35Utils15StreamBufferImp33haveAllUsersReleasedOrPreReleasedEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, int> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiiEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiiEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: __udivmoddi4 */
extern "C" __attribute__((visibility("default"))) int __udivmoddi4(void) {
    ALOGD("__udivmoddi4() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::UsersManager::MyUserGraph::userAt(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils12UsersManager11MyUserGraph6userAtEj(void) {
    ALOGD("_ZNK5NSCam2v35Utils12UsersManager11MyUserGraph6userAtEj() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::StreamBufferImp::getSubject() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils15StreamBufferImp10getSubjectEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils15StreamBufferImp10getSubjectEv() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::v3::Utils::Imp::SyncContext>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam2v35Utils3Imp11SyncContextEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam2v35Utils3Imp11SyncContextEED2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::IMetaStreamInfo-in-NSCam::v3::Utils::MetaStreamInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v35Utils14MetaStreamInfoE0_NS0_15IMetaStreamInfoE = NULL;

/* Demangled: android::Vector<android::sp<NSCam::v3::Utils::UsersManager::MyUser> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v35Utils12UsersManager6MyUserEEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v35Utils12UsersManager6MyUserEEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::IUsersManager>::operator=(android::sp<NSCam::v3::IUsersManager> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v313IUsersManagerEEaSERKS4_(void) {
    ALOGD("_ZN7android2spIN5NSCam2v313IUsersManagerEEaSERKS4_() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferImp::isActive() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n48_NK5NSCam2v35Utils15StreamBufferImp8isActiveEv(void) {
    ALOGD("_ZTv0_n48_NK5NSCam2v35Utils15StreamBufferImp8isActiveEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::Imp::Timer::Timer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils3Imp5TimerC1Ev(void) {
    ALOGD("_ZN5NSCam2v35Utils3Imp5TimerC1Ev() called");
    return 0;
}

/* Demangled: __aeabi_memmove8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove8(void) {
    ALOGD("__aeabi_memmove8() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::UsersManager::dumpState(android::Printer&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils12UsersManager9dumpStateERN7android7PrinterERKNSt3__16vectorINS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEENSB_ISD_EEEE(void) {
    ALOGD("_ZN5NSCam2v35Utils12UsersManager9dumpStateERN7android7PrinterERKNSt3__16vectorINS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEENSB_ISD_EEEE() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::Utils::UsersManager::MyUser>::operator=(android::sp<NSCam::v3::Utils::UsersManager::MyUser> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v35Utils12UsersManager6MyUserEEaSERKS6_(void) {
    ALOGD("_ZN7android2spIN5NSCam2v35Utils12UsersManager6MyUserEEaSERKS6_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::v3::Utils::UsersManager::MyUserGraph::UserNode> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils12UsersManager11MyUserGraph8UserNodeEEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils12UsersManager11MyUserGraph8UserNodeEEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::TStreamBufferWithPool<NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::IImageStreamBuffer>::tryGetBufferPool() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils21TStreamBufferWithPoolINS1_20HalImageStreamBufferENS0_18IImageStreamBufferEE16tryGetBufferPoolEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils21TStreamBufferWithPoolINS1_20HalImageStreamBufferENS0_18IImageStreamBufferEE16tryGetBufferPoolEv() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::Utils::Imp::ISyncHelperBase>::sp<NSCam::v3::Utils::Imp::SyncHelperBase>(NSCam::v3::Utils::Imp::SyncHelperBase*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v35Utils3Imp15ISyncHelperBaseEEC2INS4_14SyncHelperBaseEEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam2v35Utils3Imp15ISyncHelperBaseEEC2INS4_14SyncHelperBaseEEEPT_() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::ImageStreamInfo::getImgFormat() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils15ImageStreamInfo12getImgFormatEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils15ImageStreamInfo12getImgFormatEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::UsersManager::createReleaseFence(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils12UsersManager18createReleaseFenceEi(void) {
    ALOGD("_ZNK5NSCam2v35Utils12UsersManager18createReleaseFenceEi() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::UsersManager::haveAllProducerUsersReleased() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils12UsersManager28haveAllProducerUsersReleasedEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils12UsersManager28haveAllProducerUsersReleasedEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::UsersManager::finishUserSetup() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5NSCam2v35Utils12UsersManager15finishUserSetupEv(void) {
    ALOGD("_ZTv0_n40_N5NSCam2v35Utils12UsersManager15finishUserSetupEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::remove_timestamp_check_result(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils3Imp14SyncHelperBase29remove_timestamp_check_resultEii(void) {
    ALOGD("_ZN5NSCam2v35Utils3Imp14SyncHelperBase29remove_timestamp_check_resultEii() called");
    return 0;
}

/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__push_back_slow_path<int>(int&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIiEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIiEEvOT_() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::UsersManager::haveAllUsersReleasedOrPreReleased(int) const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n96_NK5NSCam2v35Utils12UsersManager33haveAllUsersReleasedOrPreReleasedEi(void) {
    ALOGD("_ZTv0_n96_NK5NSCam2v35Utils12UsersManager33haveAllUsersReleasedOrPreReleasedEi() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::IImageStreamInfo>::operator=(NSCam::v3::IImageStreamInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v316IImageStreamInfoEEaSEPS3_(void) {
    ALOGD("_ZN7android2spIN5NSCam2v316IImageStreamInfoEEaSEPS3_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::v3::Utils::Imp::SyncHelperBase::sync_result> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp14SyncHelperBase11sync_resultEEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp14SyncHelperBase11sync_resultEEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::MetaStreamInfo::toString() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_NK5NSCam2v35Utils14MetaStreamInfo8toStringEv(void) {
    ALOGD("_ZTv0_n40_NK5NSCam2v35Utils14MetaStreamInfo8toStringEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::UsersManager::haveAllUsersReleasedOrPreReleased() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n124_NK5NSCam2v35Utils12UsersManager33haveAllUsersReleasedOrPreReleasedEv(void) {
    ALOGD("_ZTv0_n124_NK5NSCam2v35Utils12UsersManager33haveAllUsersReleasedOrPreReleasedEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::StreamBufferImp::haveAllProducerUsersReleasedOrPreReleased() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils15StreamBufferImp41haveAllProducerUsersReleasedOrPreReleasedEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils15StreamBufferImp41haveAllProducerUsersReleasedOrPreReleasedEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::Utils::Imp::ISyncHelper-in-NSCam::v3::Utils::Imp::SyncHelper */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v35Utils3Imp10SyncHelperE180_NS2_11ISyncHelperE = NULL;

/* Demangled: NSCam::v3::Utils::HalMetaStreamBuffer::isRepeating() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils19HalMetaStreamBuffer11isRepeatingEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils19HalMetaStreamBuffer11isRepeatingEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::StreamBufferPoolImpl::dumpPoolImpl() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils20StreamBufferPoolImpl12dumpPoolImplEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils20StreamBufferPoolImpl12dumpPoolImplEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::do_sync_post(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils3Imp14SyncHelperBase12do_sync_postEi(void) {
    ALOGD("_ZN5NSCam2v35Utils3Imp14SyncHelperBase12do_sync_postEi() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::UsersManager::MyUserGraph::getCategory(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils12UsersManager11MyUserGraph11getCategoryEj(void) {
    ALOGD("_ZN5NSCam2v35Utils12UsersManager11MyUserGraph11getCategoryEj() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::Utils::TStreamBufferWithPool<NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::IImageStreamBuffer>-in-NSCam::v3::Utils::HalImageStreamBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v35Utils20HalImageStreamBufferE0_NS1_21TStreamBufferWithPoolINS1_20HalImageStreamBufferENS0_18IImageStreamBufferEEE = NULL;

/* Exported Object: construction vtable for NSCam::v3::Utils::HalImageStreamBuffer-in-NSCam::v3::Utils::HalImageStreamBufferProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v35Utils28HalImageStreamBufferProviderE0_NS1_20HalImageStreamBufferE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::v3::Utils::Imp::SyncHelperBase::sync_result> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp14SyncHelperBase11sync_resultEEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp14SyncHelperBase11sync_resultEEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::Imp::SyncHelper::syncEnqHW(int, int, int, NSCam::IMetadata*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils3Imp10SyncHelper9syncEnqHWEiiiPNS_9IMetadataE(void) {
    ALOGD("_ZN5NSCam2v35Utils3Imp10SyncHelper9syncEnqHWEiiiPNS_9IMetadataE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::Utils::ImageStreamInfoBuilder */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v35Utils22ImageStreamInfoBuilderE = NULL;

/* Demangled: NSCam::v3::Utils::UsersManager::haveAllUsersReleasedOrPreReleasedLocked() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils12UsersManager39haveAllUsersReleasedOrPreReleasedLockedEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils12UsersManager39haveAllUsersReleasedOrPreReleasedLockedEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::StreamBufferImp::dumpLocked() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils15StreamBufferImp10dumpLockedEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils15StreamBufferImp10dumpLockedEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::StreamBufferPoolImpl::commitPoolImpl(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils20StreamBufferPoolImpl14commitPoolImplEPKc(void) {
    ALOGD("_ZN5NSCam2v35Utils20StreamBufferPoolImpl14commitPoolImplEPKc() called");
    return 0;
}

/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__push_back_slow_path<int const&>(int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::UsersManager::MyUserGraph::size() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils12UsersManager11MyUserGraph4sizeEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils12UsersManager11MyUserGraph4sizeEv() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::IImageStreamInfo>::sp(NSCam::v3::IImageStreamInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v316IImageStreamInfoEEC2EPS3_(void) {
    ALOGD("_ZN7android2spIN5NSCam2v316IImageStreamInfoEEC2EPS3_() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::IUsersManager-in-NSCam::v3::Utils::HalImageStreamBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v35Utils20HalImageStreamBufferE0_NS0_13IUsersManagerE = NULL;

/* Demangled: std::__1::__shared_ptr_pointer<NSCam::v3::Utils::Imp::SyncContext*, std::__1::default_delete<NSCam::v3::Utils::Imp::SyncContext>, std::__1::allocator<NSCam::v3::Utils::Imp::SyncContext> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPN5NSCam2v35Utils3Imp11SyncContextENS_14default_deleteIS5_EENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPN5NSCam2v35Utils3Imp11SyncContextENS_14default_deleteIS5_EENS_9allocatorIS5_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::Utils::ImageStreamInfo>::sp(NSCam::v3::Utils::ImageStreamInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v35Utils15ImageStreamInfoEEC2EPS4_(void) {
    ALOGD("_ZN7android2spIN5NSCam2v35Utils15ImageStreamInfoEEC2EPS4_() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::IImageStreamInfo>::operator=(android::sp<NSCam::v3::IImageStreamInfo> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v316IImageStreamInfoEEaSERKS4_(void) {
    ALOGD("_ZN7android2spIN5NSCam2v316IImageStreamInfoEEaSERKS4_() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::IStreamBuffer-in-NSCam::v3::Utils::HalMetaStreamBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v35Utils19HalMetaStreamBufferE0_NS0_13IStreamBufferE = NULL;

/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferImp::getUserStatus(int) const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n56_NK5NSCam2v35Utils15StreamBufferImp13getUserStatusEi(void) {
    ALOGD("_ZTv0_n56_NK5NSCam2v35Utils15StreamBufferImp13getUserStatusEi() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::MetaStreamInfo::getStreamType() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils14MetaStreamInfo13getStreamTypeEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils14MetaStreamInfo13getStreamTypeEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::MetaStreamInfo::getStreamType() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_NK5NSCam2v35Utils14MetaStreamInfo13getStreamTypeEv(void) {
    ALOGD("_ZTv0_n24_NK5NSCam2v35Utils14MetaStreamInfo13getStreamTypeEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::MetaStreamInfo::getMaxBufNum() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n28_NK5NSCam2v35Utils14MetaStreamInfo12getMaxBufNumEv(void) {
    ALOGD("_ZTv0_n28_NK5NSCam2v35Utils14MetaStreamInfo12getMaxBufNumEv() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::v3::Utils::UsersManager::MyUserGraph> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v35Utils12UsersManager11MyUserGraphEEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v35Utils12UsersManager11MyUserGraphEEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::v3::Utils::UsersManager::MyUser> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v35Utils12UsersManager6MyUserEEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v35Utils12UsersManager6MyUserEEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Exported Object: construction vtable for android::Thread-in-NSCam::v3::Utils::StreamBufferPoolImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v35Utils20StreamBufferPoolImplE0_N7android6ThreadE = NULL;

/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferImp::dumpState(android::Printer&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n28_N5NSCam2v35Utils15StreamBufferImp9dumpStateERN7android7PrinterERKNSt3__16vectorINS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEENSB_ISD_EEEE(void) {
    ALOGD("_ZTv0_n28_N5NSCam2v35Utils15StreamBufferImp9dumpStateERN7android7PrinterERKNSt3__16vectorINS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEENSB_ISD_EEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::get_timestamp_check_result(long long, long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils3Imp14SyncHelperBase26get_timestamp_check_resultExxx(void) {
    ALOGD("_ZN5NSCam2v35Utils3Imp14SyncHelperBase26get_timestamp_check_resultExxx() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::ImageStreamInfo::ImageStreamInfo(char const*, long long, unsigned int, unsigned int, unsigned int, unsigned int, int, std::__1::vector<NSCam::BufPlane, std::__1::allocator<NSCam::BufPlane> > const&, unsigned int, unsigned int, NSCam::ImageBufferInfo const&, NSCam::SecureInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils15ImageStreamInfoC2EPKcxjjjjiRKNSt3__16vectorINS_8BufPlaneENS5_9allocatorIS7_EEEEjjRKNS_15ImageBufferInfoERKNS_10SecureInfoE(void) {
    ALOGD("_ZN5NSCam2v35Utils15ImageStreamInfoC2EPKcxjjjjiRKNSt3__16vectorINS_8BufPlaneENS5_9allocatorIS7_EEEEjjRKNS_15ImageBufferInfoERKNS_10SecureInfoE() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::ImageStreamInfo::getAllocBufPlanes() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils15ImageStreamInfo17getAllocBufPlanesEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils15ImageStreamInfo17getAllocBufPlanesEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::IImageStreamBuffer-in-NSCam::v3::Utils::HalImageStreamBufferProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v35Utils28HalImageStreamBufferProviderE0_NS0_18IImageStreamBufferE = NULL;

/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::erase(std::__1::__wrap_iter<int const*>, std::__1::__wrap_iter<int const*>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE5eraseENS_11__wrap_iterIPKiEES7_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE5eraseENS_11__wrap_iterIPKiEES7_() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::Imp::ISyncHelper::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils3Imp11ISyncHelper14createInstanceEv(void) {
    ALOGD("_ZN5NSCam2v35Utils3Imp11ISyncHelper14createInstanceEv() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::IMetaStreamBuffer>::sp<NSCam::v3::Utils::TStreamBufferWithPool<NSCam::v3::Utils::HalMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer> >(NSCam::v3::Utils::TStreamBufferWithPool<NSCam::v3::Utils::HalMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer>*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v317IMetaStreamBufferEEC2INS2_5Utils21TStreamBufferWithPoolINS6_19HalMetaStreamBufferES3_EEEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam2v317IMetaStreamBufferEEC2INS2_5Utils21TStreamBufferWithPoolINS6_19HalMetaStreamBufferES3_EEEEPT_() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::Utils::Imp::ISyncHelperBase-in-NSCam::v3::Utils::Imp::SyncHelperBase */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v35Utils3Imp14SyncHelperBaseE0_NS2_15ISyncHelperBaseE = NULL;

/* Exported Object: vtable for NSCam::v3::Utils::BaseStreamInfoImp */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v35Utils17BaseStreamInfoImpE = NULL;

/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__swap_out_circular_buffer(std::__1::__split_buffer<unsigned int, std::__1::allocator<unsigned int>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE26__swap_out_circular_bufferERNS_14__split_bufferIjRS2_EE(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE26__swap_out_circular_bufferERNS_14__split_bufferIjRS2_EE() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::UsersManager::haveAllUsersReleasedOrPreReleased(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils12UsersManager33haveAllUsersReleasedOrPreReleasedEi(void) {
    ALOGD("_ZNK5NSCam2v35Utils12UsersManager33haveAllUsersReleasedOrPreReleasedEi() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::Utils::UsersManager::MyUserGraph */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v35Utils12UsersManager11MyUserGraphE = NULL;

/* Demangled: virtual thunk to NSCam::v3::Utils::UsersManager::isActive() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n48_NK5NSCam2v35Utils12UsersManager8isActiveEv(void) {
    ALOGD("_ZTv0_n48_NK5NSCam2v35Utils12UsersManager8isActiveEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferImp::createGraph() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N5NSCam2v35Utils15StreamBufferImp11createGraphEv(void) {
    ALOGD("_ZTv0_n32_N5NSCam2v35Utils15StreamBufferImp11createGraphEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferImp::setUserReleaseFence(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n64_N5NSCam2v35Utils15StreamBufferImp19setUserReleaseFenceEii(void) {
    ALOGD("_ZTv0_n64_N5NSCam2v35Utils15StreamBufferImp19setUserReleaseFenceEii() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::Imp::Timer::getTimeDiff() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils3Imp5Timer11getTimeDiffEv(void) {
    ALOGD("_ZN5NSCam2v35Utils3Imp5Timer11getTimeDiffEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::ImageStreamInfo::getImageBufferInfo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils15ImageStreamInfo18getImageBufferInfoEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils15ImageStreamInfo18getImageBufferInfoEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::UsersManager::createReleaseFence() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils12UsersManager18createReleaseFenceEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils12UsersManager18createReleaseFenceEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::StreamBufferImp::createGraph() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils15StreamBufferImp11createGraphEv(void) {
    ALOGD("_ZN5NSCam2v35Utils15StreamBufferImp11createGraphEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::HalMetaStreamBuffer::HalMetaStreamBuffer(NSCam::IMetadata const&, android::sp<NSCam::v3::IMetaStreamInfo>, android::wp<NSCam::v3::Utils::IStreamBufferPool<NSCam::v3::IMetaStreamBuffer> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils19HalMetaStreamBufferC1ERKNS_9IMetadataEN7android2spINS0_15IMetaStreamInfoEEENS6_2wpINS1_17IStreamBufferPoolINS0_17IMetaStreamBufferEEEEE(void) {
    ALOGD("_ZN5NSCam2v35Utils19HalMetaStreamBufferC1ERKNS_9IMetadataEN7android2spINS0_15IMetaStreamInfoEEENS6_2wpINS1_17IStreamBufferPoolINS0_17IMetaStreamBufferEEEEE() called");
    return 0;
}

/* Exported Object: VTT for NSCam::v3::Utils::HalMetaStreamBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam2v35Utils19HalMetaStreamBufferE = NULL;

/* Demangled: NSCam::v3::Utils::StreamBufferPoolImpl::signalUserLocked() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils20StreamBufferPoolImpl16signalUserLockedEv(void) {
    ALOGD("_ZN5NSCam2v35Utils20StreamBufferPoolImpl16signalUserLockedEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::HalImageStreamBufferProvider::releaseBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils28HalImageStreamBufferProvider13releaseBufferEv(void) {
    ALOGD("_ZN5NSCam2v35Utils28HalImageStreamBufferProvider13releaseBufferEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::add_timestamp_check_result(int, int, unsigned int, bool, int, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils3Imp14SyncHelperBase26add_timestamp_check_resultEiijbix(void) {
    ALOGD("_ZN5NSCam2v35Utils3Imp14SyncHelperBase26add_timestamp_check_resultEiijbix() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::Utils::Imp::ISyncHelper>::sp<NSCam::v3::Utils::Imp::SyncHelper>(NSCam::v3::Utils::Imp::SyncHelper*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v35Utils3Imp11ISyncHelperEEC2INS4_10SyncHelperEEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam2v35Utils3Imp11ISyncHelperEEC2INS4_10SyncHelperEEEPT_() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::HalImageStreamBuffer::resetBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils20HalImageStreamBuffer11resetBufferEv(void) {
    ALOGD("_ZN5NSCam2v35Utils20HalImageStreamBuffer11resetBufferEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::StreamBufferImp::printLocked(android::Printer&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils15StreamBufferImp11printLockedERN7android7PrinterE(void) {
    ALOGD("_ZNK5NSCam2v35Utils15StreamBufferImp11printLockedERN7android7PrinterE() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::StreamBufferImp::getNumberOfProducers() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils15StreamBufferImp20getNumberOfProducersEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils15StreamBufferImp20getNumberOfProducersEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::Utils::TStreamBufferWithPool<NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::IImageStreamBuffer>-in-NSCam::v3::Utils::HalImageStreamBufferProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v35Utils28HalImageStreamBufferProviderE0_NS1_21TStreamBufferWithPoolINS1_20HalImageStreamBufferENS0_18IImageStreamBufferEEE = NULL;

/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::syncResultCheck(NSCam::v3::Utils::Imp::SyncParam&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils3Imp14SyncHelperBase15syncResultCheckERNS2_9SyncParamE(void) {
    ALOGD("_ZN5NSCam2v35Utils3Imp14SyncHelperBase15syncResultCheckERNS2_9SyncParamE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, std::__1::shared_ptr<NSCam::v3::Utils::Imp::SyncContext> > >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__110shared_ptrIN5NSCam2v35Utils3Imp11SyncContextEEEEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__110shared_ptrIN5NSCam2v35Utils3Imp11SyncContextEEEEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::Utils::UsersManager::MyUser> > >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v35Utils12UsersManager6MyUserEEEEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v35Utils12UsersManager6MyUserEEEEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::StreamBufferImp::setUserReleaseFence(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils15StreamBufferImp19setUserReleaseFenceEii(void) {
    ALOGD("_ZN5NSCam2v35Utils15StreamBufferImp19setUserReleaseFenceEii() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::HalMetaStreamBuffer::setRepeating(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils19HalMetaStreamBuffer12setRepeatingEi(void) {
    ALOGD("_ZN5NSCam2v35Utils19HalMetaStreamBuffer12setRepeatingEi() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::HalImageStreamBufferProvider::HalImageStreamBufferProvider(android::sp<NSCam::v3::IImageStreamInfo>, android::sp<NSCam::IImageBufferHeap>, android::wp<NSCam::v3::Utils::IStreamBufferProvider>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils28HalImageStreamBufferProviderC2EN7android2spINS0_16IImageStreamInfoEEENS4_INS_16IImageBufferHeapEEENS3_2wpINS1_21IStreamBufferProviderEEE(void) {
    ALOGD("_ZN5NSCam2v35Utils28HalImageStreamBufferProviderC2EN7android2spINS0_16IImageStreamInfoEEENS4_INS_16IImageBufferHeapEEENS3_2wpINS1_21IStreamBufferProviderEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::init(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils3Imp14SyncHelperBase4initEi(void) {
    ALOGD("_ZN5NSCam2v35Utils3Imp14SyncHelperBase4initEi() called");
    return 0;
}

/* Exported Object: VTT for NSCam::v3::Utils::Imp::SyncHelper */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam2v35Utils3Imp10SyncHelperE = NULL;

/* Exported Object: VTT for NSCam::v3::Utils::MetaStreamInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam2v35Utils14MetaStreamInfoE = NULL;

/* Demangled: android::sp<NSCam::v3::IUsersManager>::sp(NSCam::v3::IUsersManager*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v313IUsersManagerEEC2EPS3_(void) {
    ALOGD("_ZN7android2spIN5NSCam2v313IUsersManagerEEC2EPS3_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::Utils::StreamBufferImp */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v35Utils15StreamBufferImpE = NULL;

/* Demangled: NSCam::v3::Utils::StreamBufferImp::haveAllUsersReleased() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils15StreamBufferImp20haveAllUsersReleasedEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils15StreamBufferImp20haveAllUsersReleasedEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::StreamBufferImp::haveAllProducerUsersUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils15StreamBufferImp24haveAllProducerUsersUsedEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils15StreamBufferImp24haveAllProducerUsersUsedEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferImp::getAllUsersStatus() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n104_NK5NSCam2v35Utils15StreamBufferImp17getAllUsersStatusEv(void) {
    ALOGD("_ZTv0_n104_NK5NSCam2v35Utils15StreamBufferImp17getAllUsersStatusEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::StreamBufferPoolImpl::initPoolImpl(char const*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils20StreamBufferPoolImpl12initPoolImplEPKcjj(void) {
    ALOGD("_ZN5NSCam2v35Utils20StreamBufferPoolImpl12initPoolImplEPKcjj() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::Utils::StreamBufferImp-in-NSCam::v3::Utils::HalImageStreamBufferProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v35Utils28HalImageStreamBufferProviderE4_NS1_15StreamBufferImpE = NULL;

/* Demangled: virtual thunk to NSCam::v3::Utils::Imp::SyncHelper::syncResultCheck(NSCam::v3::Utils::Imp::SyncResultInputParams const&, NSCam::v3::Utils::Imp::SyncResultOutputParams&) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n56_N5NSCam2v35Utils3Imp10SyncHelper15syncResultCheckERKNS2_21SyncResultInputParamsERNS2_22SyncResultOutputParamsE(void) {
    ALOGD("_ZTv0_n56_N5NSCam2v35Utils3Imp10SyncHelper15syncResultCheckERKNS2_21SyncResultInputParamsERNS2_22SyncResultOutputParamsE() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIjNS_9allocatorIjEEE6assignIPjEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIjNS_9allocatorIjEEE6assignIPjEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void) {
    ALOGD("_ZNSt3__16vectorIjNS_9allocatorIjEEE6assignIPjEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::Utils::UsersManager::MyUserGraph>::operator=(NSCam::v3::Utils::UsersManager::MyUserGraph*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v35Utils12UsersManager11MyUserGraphEEaSEPS5_(void) {
    ALOGD("_ZN7android2spIN5NSCam2v35Utils12UsersManager11MyUserGraphEEaSEPS5_() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::Utils::StreamBufferImp-in-NSCam::v3::Utils::HalMetaStreamBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v35Utils19HalMetaStreamBufferE4_NS1_15StreamBufferImpE = NULL;

/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferImp::haveAllProducerUsersReleasedOrPreReleased() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n120_NK5NSCam2v35Utils15StreamBufferImp41haveAllProducerUsersReleasedOrPreReleasedEv(void) {
    ALOGD("_ZTv0_n120_NK5NSCam2v35Utils15StreamBufferImp41haveAllProducerUsersReleasedOrPreReleasedEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::ImageStreamInfo::getDataSpace() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils15ImageStreamInfo12getDataSpaceEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils15ImageStreamInfo12getDataSpaceEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::UsersManager::MyUserGraph::MyUserGraph(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils12UsersManager11MyUserGraphC1Ej(void) {
    ALOGD("_ZN5NSCam2v35Utils12UsersManager11MyUserGraphC1Ej() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::UsersManager::getUserCategory(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils12UsersManager15getUserCategoryEi(void) {
    ALOGD("_ZNK5NSCam2v35Utils12UsersManager15getUserCategoryEi() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::StreamBufferImp::onUnlock(char const*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils15StreamBufferImp8onUnlockEPKcPv(void) {
    ALOGD("_ZN5NSCam2v35Utils15StreamBufferImp8onUnlockEPKcPv() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<int, NSCam::v3::Utils::Imp::SyncHelperBase::sync_result> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp14SyncHelperBase11sync_resultEEEEE = NULL;

/* Demangled: virtual thunk to NSCam::v3::Utils::MetaStreamInfo::getMinInitBufNum() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n36_NK5NSCam2v35Utils14MetaStreamInfo16getMinInitBufNumEv(void) {
    ALOGD("_ZTv0_n36_NK5NSCam2v35Utils14MetaStreamInfo16getMinInitBufNumEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::ImageStreamInfo::ImageStreamInfo(char const*, long long, unsigned int, unsigned int, unsigned int, unsigned int, int, NSCam::MSize const&, std::__1::vector<NSCam::BufPlane, std::__1::allocator<NSCam::BufPlane> > const&, unsigned int, unsigned int, NSCam::SecureInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils15ImageStreamInfoC2EPKcxjjjjiRKNS_5MSizeERKNSt3__16vectorINS_8BufPlaneENS8_9allocatorISA_EEEEjjRKNS_10SecureInfoE(void) {
    ALOGD("_ZN5NSCam2v35Utils15ImageStreamInfoC2EPKcxjjjjiRKNS_5MSizeERKNSt3__16vectorINS_8BufPlaneENS8_9allocatorISA_EEEEjjRKNS_10SecureInfoE() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::ImageStreamInfo::getMaxBufNum() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils15ImageStreamInfo12getMaxBufNumEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils15ImageStreamInfo12getMaxBufNumEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::ImageStreamInfo::toString() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils15ImageStreamInfo8toStringEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils15ImageStreamInfo8toStringEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::Utils::UsersManager::MyUser> > >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v35Utils12UsersManager6MyUserEEEEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v35Utils12UsersManager6MyUserEEEEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::StreamBufferImp::queryGroupUsage(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils15StreamBufferImp15queryGroupUsageEi(void) {
    ALOGD("_ZNK5NSCam2v35Utils15StreamBufferImp15queryGroupUsageEi() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::v3::Utils::Imp::SyncContext::syncData> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp11SyncContext8syncDataEEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp11SyncContext8syncDataEEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<int, NSCam::v3::Utils::Imp::SyncContext::syncData> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp11SyncContext8syncDataEEEEE = NULL;

/* Demangled: NSCam::v3::Utils::ImageStreamInfo::isSecure() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils15ImageStreamInfo8isSecureEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils15ImageStreamInfo8isSecureEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::UsersManager::setUserReleaseFence(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils12UsersManager19setUserReleaseFenceEii(void) {
    ALOGD("_ZN5NSCam2v35Utils12UsersManager19setUserReleaseFenceEii() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::IStreamBuffer-in-NSCam::v3::Utils::HalImageStreamBufferProvider */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v35Utils28HalImageStreamBufferProviderE0_NS0_13IStreamBufferE = NULL;

/* Demangled: NSCam::v3::Utils::UsersManager::waitUserReleaseStatus(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils12UsersManager21waitUserReleaseStatusENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void) {
    ALOGD("_ZN5NSCam2v35Utils12UsersManager21waitUserReleaseStatusENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::StreamBufferImp::enqueUserGraph(android::sp<NSCam::v3::IUsersManager::IUserGraph>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils15StreamBufferImp14enqueUserGraphEN7android2spINS0_13IUsersManager10IUserGraphEEE(void) {
    ALOGD("_ZN5NSCam2v35Utils15StreamBufferImp14enqueUserGraphEN7android2spINS0_13IUsersManager10IUserGraphEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::StreamBufferImp::getNumberOfConsumers() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils15StreamBufferImp20getNumberOfConsumersEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils15StreamBufferImp20getNumberOfConsumersEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::UsersManager::haveAllUsersReleasedOrPreReleased() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils12UsersManager33haveAllUsersReleasedOrPreReleasedEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils12UsersManager33haveAllUsersReleasedOrPreReleasedEv() called");
    return 0;
}

/* Demangled: android::SortedVector<int>::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorIiE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorIiE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::v3::Utils::UsersManager::MyUserGraph> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v35Utils12UsersManager11MyUserGraphEEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v35Utils12UsersManager11MyUserGraphEEEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::ImageStreamInfo::getStreamId() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils15ImageStreamInfo11getStreamIdEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils15ImageStreamInfo11getStreamIdEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::UsersManager::createReleaseFence(int) const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n84_NK5NSCam2v35Utils12UsersManager18createReleaseFenceEi(void) {
    ALOGD("_ZTv0_n84_NK5NSCam2v35Utils12UsersManager18createReleaseFenceEi() called");
    return 0;
}

/* Exported Object: vtable for android::List<android::Condition*> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android4ListIPNS_9ConditionEEE = NULL;

/* Exported Object: vtable for NSCam::v3::Utils::StreamBufferPoolImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v35Utils20StreamBufferPoolImplE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::v3::Utils::Imp::SyncHelperBase::sync_result> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp14SyncHelperBase11sync_resultEEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp14SyncHelperBase11sync_resultEEEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::Imp::SyncHelperBase::~SyncHelperBase() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n16_N5NSCam2v35Utils3Imp14SyncHelperBaseD1Ev(void) {
    ALOGD("_ZTv0_n16_N5NSCam2v35Utils3Imp14SyncHelperBaseD1Ev() called");
    return 0;
}
