/*
 * Reverse-Engineered ABI Specification for: libmtkcam_streamutils.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libmtkcam_streamutils.so
 */

#ifndef BEGONIA_RE_LIBMTKCAM_STREAMUTILS_H
#define BEGONIA_RE_LIBMTKCAM_STREAMUTILS_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils12UsersManager11MyUserGraph8UserNodeEEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::v3::Utils::UsersManager::MyUserGraph::UserNode> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils12UsersManager11MyUserGraph8UserNodeEEEE10do_destroyEPvj(void);

/* Symbol: _ZTTN5NSCam2v35Utils12UsersManagerE */
/* Demangled: VTT for NSCam::v3::Utils::UsersManager */
extern void* _ZTTN5NSCam2v35Utils12UsersManagerE;

/* Symbol: _ZN5NSCam2v35Utils15StreamBufferImp5resetEv */
/* Demangled: NSCam::v3::Utils::StreamBufferImp::reset() */
int _ZN5NSCam2v35Utils15StreamBufferImp5resetEv(void);

/* Symbol: _ZN5NSCam2v35Utils20HalImageStreamBuffer9AllocatorC1EPNS0_16IImageStreamInfoERKNS_21IImageBufferAllocator8ImgParamE */
/* Demangled: NSCam::v3::Utils::HalImageStreamBuffer::Allocator::Allocator(NSCam::v3::IImageStreamInfo*, NSCam::IImageBufferAllocator::ImgParam const&) */
int _ZN5NSCam2v35Utils20HalImageStreamBuffer9AllocatorC1EPNS0_16IImageStreamInfoERKNS_21IImageBufferAllocator8ImgParamE(void);

/* Symbol: _ZN5NSCam2v35Utils3Imp10SyncHelper15syncResultCheckERKNS2_21SyncResultInputParamsERNS2_22SyncResultOutputParamsE */
/* Demangled: NSCam::v3::Utils::Imp::SyncHelper::syncResultCheck(NSCam::v3::Utils::Imp::SyncResultInputParams const&, NSCam::v3::Utils::Imp::SyncResultOutputParams&) */
int _ZN5NSCam2v35Utils3Imp10SyncHelper15syncResultCheckERKNS2_21SyncResultInputParamsERNS2_22SyncResultOutputParamsE(void);

/* Symbol: _ZTv0_n52_N5NSCam2v35Utils3Imp10SyncHelper9syncEnqHWEiiiPNS_9IMetadataE */
/* Demangled: virtual thunk to NSCam::v3::Utils::Imp::SyncHelper::syncEnqHW(int, int, int, NSCam::IMetadata*) */
int _ZTv0_n52_N5NSCam2v35Utils3Imp10SyncHelper9syncEnqHWEiiiPNS_9IMetadataE(void);

/* Symbol: _ZN7android2spIN5NSCam2v35Utils12UsersManager6MyUserEED2Ev */
/* Demangled: android::sp<NSCam::v3::Utils::UsersManager::MyUser>::~sp() */
int _ZN7android2spIN5NSCam2v35Utils12UsersManager6MyUserEED2Ev(void);

/* Symbol: _ZTv0_n64_N5NSCam2v35Utils12UsersManager19setUserReleaseFenceEii */
/* Demangled: virtual thunk to NSCam::v3::Utils::UsersManager::setUserReleaseFence(int, int) */
int _ZTv0_n64_N5NSCam2v35Utils12UsersManager19setUserReleaseFenceEii(void);

/* Symbol: _ZNK5NSCam2v35Utils15StreamBufferImp13getUserStatusEi */
/* Demangled: NSCam::v3::Utils::StreamBufferImp::getUserStatus(int) const */
int _ZNK5NSCam2v35Utils15StreamBufferImp13getUserStatusEi(void);

/* Symbol: _ZTv0_n20_NK5NSCam2v35Utils15StreamBufferImp14getSubjectNameEv */
/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferImp::getSubjectName() const */
int _ZTv0_n20_NK5NSCam2v35Utils15StreamBufferImp14getSubjectNameEv(void);

/* Symbol: _ZN5NSCam2v35Utils3Imp14SyncHelperBase4stopEi */
/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::stop(int) */
int _ZN5NSCam2v35Utils3Imp14SyncHelperBase4stopEi(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v35Utils12UsersManager6MyUserEEEEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::Utils::UsersManager::MyUser> > >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v35Utils12UsersManager6MyUserEEEEEE12do_constructEPvj(void);

/* Symbol: _ZTv0_n68_NK5NSCam2v35Utils12UsersManager15queryGroupUsageEi */
/* Demangled: virtual thunk to NSCam::v3::Utils::UsersManager::queryGroupUsage(int) const */
int _ZTv0_n68_NK5NSCam2v35Utils12UsersManager15queryGroupUsageEi(void);

/* Symbol: _ZN5NSCam2v35Utils3Imp14SyncHelperBase18add_frameno_to_mapERNS2_9SyncParamE */
/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::add_frameno_to_map(NSCam::v3::Utils::Imp::SyncParam&) */
int _ZN5NSCam2v35Utils3Imp14SyncHelperBase18add_frameno_to_mapERNS2_9SyncParamE(void);

/* Symbol: _ZNSt3__120__shared_ptr_pointerIPN5NSCam2v35Utils3Imp11SyncContextENS_14default_deleteIS5_EENS_9allocatorIS5_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_pointer<NSCam::v3::Utils::Imp::SyncContext*, std::__1::default_delete<NSCam::v3::Utils::Imp::SyncContext>, std::__1::allocator<NSCam::v3::Utils::Imp::SyncContext> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_pointerIPN5NSCam2v35Utils3Imp11SyncContextENS_14default_deleteIS5_EENS_9allocatorIS5_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNK5NSCam2v35Utils12UsersManager14getSubjectNameEv */
/* Demangled: NSCam::v3::Utils::UsersManager::getSubjectName() const */
int _ZNK5NSCam2v35Utils12UsersManager14getSubjectNameEv(void);

/* Symbol: _ZNK5NSCam2v35Utils12UsersManager26haveAllUsersReleasedLockedEv */
/* Demangled: NSCam::v3::Utils::UsersManager::haveAllUsersReleasedLocked() const */
int _ZNK5NSCam2v35Utils12UsersManager26haveAllUsersReleasedLockedEv(void);

/* Symbol: _ZTv0_n76_NK5NSCam2v35Utils12UsersManager20getNumberOfConsumersEv */
/* Demangled: virtual thunk to NSCam::v3::Utils::UsersManager::getNumberOfConsumers() const */
int _ZTv0_n76_NK5NSCam2v35Utils12UsersManager20getNumberOfConsumersEv(void);

/* Symbol: _ZN5NSCam2v35Utils21TStreamBufferWithPoolINS1_19HalMetaStreamBufferENS0_17IMetaStreamBufferEE13releaseBufferEv */
/* Demangled: NSCam::v3::Utils::TStreamBufferWithPool<NSCam::v3::Utils::HalMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer>::releaseBuffer() */
int _ZN5NSCam2v35Utils21TStreamBufferWithPoolINS1_19HalMetaStreamBufferENS0_17IMetaStreamBufferEE13releaseBufferEv(void);

/* Symbol: _ZTv0_n28_NK5NSCam2v35Utils15ImageStreamInfo12getMaxBufNumEv */
/* Demangled: virtual thunk to NSCam::v3::Utils::ImageStreamInfo::getMaxBufNum() const */
int _ZTv0_n28_NK5NSCam2v35Utils15ImageStreamInfo12getMaxBufNumEv(void);

/* Symbol: _ZN5NSCam2v35Utils12UsersManager14enqueUserGraphEN7android2spINS0_13IUsersManager10IUserGraphEEE */
/* Demangled: NSCam::v3::Utils::UsersManager::enqueUserGraph(android::sp<NSCam::v3::IUsersManager::IUserGraph>) */
int _ZN5NSCam2v35Utils12UsersManager14enqueUserGraphEN7android2spINS0_13IUsersManager10IUserGraphEEE(void);

/* Symbol: _ZNK5NSCam2v35Utils12UsersManager18createAcquireFenceEi */
/* Demangled: NSCam::v3::Utils::UsersManager::createAcquireFence(int) const */
int _ZNK5NSCam2v35Utils12UsersManager18createAcquireFenceEi(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v35Utils12UsersManager6MyUserEEEEEE10do_compareEPKvSC_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::Utils::UsersManager::MyUser> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v35Utils12UsersManager6MyUserEEEEEE10do_compareEPKvSC_(void);

/* Symbol: _ZTv0_n44_N5NSCam2v35Utils12UsersManager5resetEv */
/* Demangled: virtual thunk to NSCam::v3::Utils::UsersManager::reset() */
int _ZTv0_n44_N5NSCam2v35Utils12UsersManager5resetEv(void);

/* Symbol: _ZN5NSCam2v35Utils3Imp14SyncHelperBase17result_sync_checkERNS2_9SyncParamERNSt3__16vectorIiNS6_9allocatorIiEEEE */
/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::result_sync_check(NSCam::v3::Utils::Imp::SyncParam&, std::__1::vector<int, std::__1::allocator<int> >&) */
int _ZN5NSCam2v35Utils3Imp14SyncHelperBase17result_sync_checkERNS2_9SyncParamERNSt3__16vectorIiNS6_9allocatorIiEEEE(void);

/* Symbol: _ZN5NSCam2v35Utils3Imp14SyncHelperBase6uninitEi */
/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::uninit(int) */
int _ZN5NSCam2v35Utils3Imp14SyncHelperBase6uninitEi(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNSt3__110shared_ptrIN5NSCam2v35Utils3Imp11SyncContextEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<int, std::__1::shared_ptr<NSCam::v3::Utils::Imp::SyncContext> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNSt3__110shared_ptrIN5NSCam2v35Utils3Imp11SyncContextEEEEEEE;

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v35Utils12UsersManager11MyUserGraphEEEE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<android::sp<NSCam::v3::Utils::UsersManager::MyUserGraph> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v35Utils12UsersManager11MyUserGraphEEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v35Utils12UsersManager6MyUserEEEE10do_destroyEPvj */
/* Demangled: android::Vector<android::sp<NSCam::v3::Utils::UsersManager::MyUser> >::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v35Utils12UsersManager6MyUserEEEE10do_destroyEPvj(void);

/* Symbol: _ZN5NSCam2v35Utils20HalImageStreamBuffer13releaseBufferEv */
/* Demangled: NSCam::v3::Utils::HalImageStreamBuffer::releaseBuffer() */
int _ZN5NSCam2v35Utils20HalImageStreamBuffer13releaseBufferEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp14SyncHelperBase11sync_resultEEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::v3::Utils::Imp::SyncHelperBase::sync_result> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp14SyncHelperBase11sync_resultEEEE10do_destroyEPvj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiiEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, int> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiiEEE12do_constructEPvj(void);

/* Symbol: _ZNK5NSCam2v35Utils15ImageStreamInfo16getMinInitBufNumEv */
/* Demangled: NSCam::v3::Utils::ImageStreamInfo::getMinInitBufNum() const */
int _ZNK5NSCam2v35Utils15ImageStreamInfo16getMinInitBufNumEv(void);

/* Symbol: _ZN5NSCam2v35Utils20HalImageStreamBufferC2EN7android2spINS0_16IImageStreamInfoEEENS3_2wpINS1_17IStreamBufferPoolINS0_18IImageStreamBufferEEEEENS4_INS_16IImageBufferHeapEEE */
/* Demangled: NSCam::v3::Utils::HalImageStreamBuffer::HalImageStreamBuffer(android::sp<NSCam::v3::IImageStreamInfo>, android::wp<NSCam::v3::Utils::IStreamBufferPool<NSCam::v3::IImageStreamBuffer> >, android::sp<NSCam::IImageBufferHeap>) */
int _ZN5NSCam2v35Utils20HalImageStreamBufferC2EN7android2spINS0_16IImageStreamInfoEEENS3_2wpINS1_17IStreamBufferPoolINS0_18IImageStreamBufferEEEEENS4_INS_16IImageBufferHeapEEE(void);

/* Symbol: _ZN5NSCam2v35Utils3Imp14SyncHelperBase5flushEi */
/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::flush(int) */
int _ZN5NSCam2v35Utils3Imp14SyncHelperBase5flushEi(void);

/* Symbol: _ZTv0_n12_N5NSCam2v35Utils3Imp14SyncHelperBaseD1Ev */
/* Demangled: virtual thunk to NSCam::v3::Utils::Imp::SyncHelperBase::~SyncHelperBase() */
int _ZTv0_n12_N5NSCam2v35Utils3Imp14SyncHelperBaseD1Ev(void);

/* Symbol: _ZTTN5NSCam2v35Utils28HalImageStreamBufferProviderE */
/* Demangled: VTT for NSCam::v3::Utils::HalImageStreamBufferProvider */
extern void* _ZTTN5NSCam2v35Utils28HalImageStreamBufferProviderE;

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v35Utils12UsersManager6MyUserEEEE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<android::sp<NSCam::v3::Utils::UsersManager::MyUser> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v35Utils12UsersManager6MyUserEEEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZTCN5NSCam2v35Utils28HalImageStreamBufferProviderE0_NS0_14TIStreamBufferINS0_16IImageStreamInfoENS_16IImageBufferHeapEEE */
/* Demangled: construction vtable for NSCam::v3::TIStreamBuffer<NSCam::v3::IImageStreamInfo, NSCam::IImageBufferHeap>-in-NSCam::v3::Utils::HalImageStreamBufferProvider */
extern void* _ZTCN5NSCam2v35Utils28HalImageStreamBufferProviderE0_NS0_14TIStreamBufferINS0_16IImageStreamInfoENS_16IImageBufferHeapEEE;

/* Symbol: _ZNK5NSCam2v35Utils15ImageStreamInfo13getSecureInfoEv */
/* Demangled: NSCam::v3::Utils::ImageStreamInfo::getSecureInfo() const */
int _ZNK5NSCam2v35Utils15ImageStreamInfo13getSecureInfoEv(void);

/* Symbol: _ZTv0_n16_NK5NSCam2v35Utils15StreamBufferImp10getSubjectEv */
/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferImp::getSubject() const */
int _ZTv0_n16_NK5NSCam2v35Utils15StreamBufferImp10getSubjectEv(void);

/* Symbol: _ZN5NSCam2v35Utils3Imp14SyncHelperBase13get_timestampEiiRx */
/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::get_timestamp(int, int, long long&) */
int _ZN5NSCam2v35Utils3Imp14SyncHelperBase13get_timestampEiiRx(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__110shared_ptrIN5NSCam2v35Utils3Imp11SyncContextEEEEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, std::__1::shared_ptr<NSCam::v3::Utils::Imp::SyncContext> > >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__110shared_ptrIN5NSCam2v35Utils3Imp11SyncContextEEEEEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZN5NSCam2v35Utils22ImageStreamInfoBuilderC2EPKNS0_16IImageStreamInfoE */
/* Demangled: NSCam::v3::Utils::ImageStreamInfoBuilder::ImageStreamInfoBuilder(NSCam::v3::IImageStreamInfo const*) */
int _ZN5NSCam2v35Utils22ImageStreamInfoBuilderC2EPKNS0_16IImageStreamInfoE(void);

/* Symbol: _ZTv0_n80_NK5NSCam2v35Utils12UsersManager18createAcquireFenceEi */
/* Demangled: virtual thunk to NSCam::v3::Utils::UsersManager::createAcquireFence(int) const */
int _ZTv0_n80_NK5NSCam2v35Utils12UsersManager18createAcquireFenceEi(void);

/* Symbol: _ZTv0_n96_NK5NSCam2v35Utils15StreamBufferImp33haveAllUsersReleasedOrPreReleasedEi */
/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferImp::haveAllUsersReleasedOrPreReleased(int) const */
int _ZTv0_n96_NK5NSCam2v35Utils15StreamBufferImp33haveAllUsersReleasedOrPreReleasedEi(void);

/* Symbol: _ZN5NSCam2v35Utils3Imp14SyncHelperBase11getSyncDataEiiRxRbRi */
/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::getSyncData(int, int, long long&, bool&, int&) */
int _ZN5NSCam2v35Utils3Imp14SyncHelperBase11getSyncDataEiiRxRbRi(void);

/* Symbol: _ZN5NSCam2v35Utils3Imp14SyncHelperBase24process_drop_frame_checkERNS2_9SyncParamE */
/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::process_drop_frame_check(NSCam::v3::Utils::Imp::SyncParam&) */
int _ZN5NSCam2v35Utils3Imp14SyncHelperBase24process_drop_frame_checkERNS2_9SyncParamE(void);

/* Symbol: _ZNK5NSCam2v35Utils15ImageStreamInfo19getPhysicalCameraIdEv */
/* Demangled: NSCam::v3::Utils::ImageStreamInfo::getPhysicalCameraId() const */
int _ZNK5NSCam2v35Utils15ImageStreamInfo19getPhysicalCameraIdEv(void);

/* Symbol: _ZN5NSCam2v35Utils12UsersManager11MyUserGraph10removeEdgeEii */
/* Demangled: NSCam::v3::Utils::UsersManager::MyUserGraph::removeEdge(int, int) */
int _ZN5NSCam2v35Utils12UsersManager11MyUserGraph10removeEdgeEii(void);

/* Symbol: _ZN5NSCam2v35Utils12UsersManager11MyUserGraph7addUserERKNS0_13IUsersManager4UserE */
/* Demangled: NSCam::v3::Utils::UsersManager::MyUserGraph::addUser(NSCam::v3::IUsersManager::User const&) */
int _ZN5NSCam2v35Utils12UsersManager11MyUserGraph7addUserERKNS0_13IUsersManager4UserE(void);

/* Symbol: _ZN5NSCam2v35Utils20HalImageStreamBuffer8castFromEPNS0_13IStreamBufferE */
/* Demangled: NSCam::v3::Utils::HalImageStreamBuffer::castFrom(NSCam::v3::IStreamBuffer*) */
int _ZN5NSCam2v35Utils20HalImageStreamBuffer8castFromEPNS0_13IStreamBufferE(void);

/* Symbol: _ZNK5NSCam2v35Utils19HalMetaStreamBuffer8toStringEv */
/* Demangled: NSCam::v3::Utils::HalMetaStreamBuffer::toString() const */
int _ZNK5NSCam2v35Utils19HalMetaStreamBuffer8toStringEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp14SyncHelperBase11sync_resultEEEE10do_compareEPKvSB_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::v3::Utils::Imp::SyncHelperBase::sync_result> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp14SyncHelperBase11sync_resultEEEE10do_compareEPKvSB_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp14SyncHelperBase11sync_resultEEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::v3::Utils::Imp::SyncHelperBase::sync_result> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp14SyncHelperBase11sync_resultEEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZTv0_n32_N5NSCam2v35Utils3Imp14SyncHelperBase6uninitEi */
/* Demangled: virtual thunk to NSCam::v3::Utils::Imp::SyncHelperBase::uninit(int) */
int _ZTv0_n32_N5NSCam2v35Utils3Imp14SyncHelperBase6uninitEi(void);

/* Symbol: __floatdidf */
/* Demangled: __floatdidf */
int __floatdidf(void);

/* Symbol: _ZNK5NSCam2v35Utils22ImageStreamInfoBuilder5buildEv */
/* Demangled: NSCam::v3::Utils::ImageStreamInfoBuilder::build() const */
int _ZNK5NSCam2v35Utils22ImageStreamInfoBuilder5buildEv(void);

/* Symbol: _ZN5NSCam2v35Utils15StreamBufferImp21waitUserReleaseStatusENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE */
/* Demangled: NSCam::v3::Utils::StreamBufferImp::waitUserReleaseStatus(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN5NSCam2v35Utils15StreamBufferImp21waitUserReleaseStatusENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void);

/* Symbol: _ZTv0_n52_N5NSCam2v35Utils15StreamBufferImp14markUserStatusEij */
/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferImp::markUserStatus(int, unsigned int) */
int _ZTv0_n52_N5NSCam2v35Utils15StreamBufferImp14markUserStatusEij(void);

/* Symbol: __divdi3 */
/* Demangled: __divdi3 */
int __divdi3(void);

/* Symbol: _ZN5NSCam2v35Utils12UsersManager11createGraphEv */
/* Demangled: NSCam::v3::Utils::UsersManager::createGraph() */
int _ZN5NSCam2v35Utils12UsersManager11createGraphEv(void);

/* Symbol: _ZN5NSCam2v35Utils20StreamBufferPoolImpl14uninitPoolImplEPKc */
/* Demangled: NSCam::v3::Utils::StreamBufferPoolImpl::uninitPoolImpl(char const*) */
int _ZN5NSCam2v35Utils20StreamBufferPoolImpl14uninitPoolImplEPKc(void);

/* Symbol: _ZTv0_n32_N5NSCam2v35Utils14MetaStreamInfo12setMaxBufNumEj */
/* Demangled: virtual thunk to NSCam::v3::Utils::MetaStreamInfo::setMaxBufNum(unsigned int) */
int _ZTv0_n32_N5NSCam2v35Utils14MetaStreamInfo12setMaxBufNumEj(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v35Utils12UsersManager11MyUserGraphEEEE7do_copyEPvPKvj */
/* Demangled: android::Vector<android::sp<NSCam::v3::Utils::UsersManager::MyUserGraph> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v35Utils12UsersManager11MyUserGraphEEEE7do_copyEPvPKvj(void);

/* Symbol: _ZN5NSCam2v35Utils14MetaStreamInfo12setMaxBufNumEj */
/* Demangled: NSCam::v3::Utils::MetaStreamInfo::setMaxBufNum(unsigned int) */
int _ZN5NSCam2v35Utils14MetaStreamInfo12setMaxBufNumEj(void);

/* Symbol: _ZTv0_n120_NK5NSCam2v35Utils12UsersManager41haveAllProducerUsersReleasedOrPreReleasedEv */
/* Demangled: virtual thunk to NSCam::v3::Utils::UsersManager::haveAllProducerUsersReleasedOrPreReleased() const */
int _ZTv0_n120_NK5NSCam2v35Utils12UsersManager41haveAllProducerUsersReleasedOrPreReleasedEv(void);

/* Symbol: _ZTv0_n68_NK5NSCam2v35Utils15StreamBufferImp15queryGroupUsageEi */
/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferImp::queryGroupUsage(int) const */
int _ZTv0_n68_NK5NSCam2v35Utils15StreamBufferImp15queryGroupUsageEi(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__110shared_ptrIN5NSCam2v35Utils3Imp11SyncContextEEEEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, std::__1::shared_ptr<NSCam::v3::Utils::Imp::SyncContext> > >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__110shared_ptrIN5NSCam2v35Utils3Imp11SyncContextEEEEEE16do_move_backwardEPvPKvj(void);

/* Symbol: __aeabi_uidiv */
/* Demangled: __aeabi_uidiv */
int __aeabi_uidiv(void);

/* Symbol: _ZNK5NSCam2v35Utils15ImageStreamInfo12getBufPlanesEv */
/* Demangled: NSCam::v3::Utils::ImageStreamInfo::getBufPlanes() const */
int _ZNK5NSCam2v35Utils15ImageStreamInfo12getBufPlanesEv(void);

/* Symbol: _ZNK5NSCam2v35Utils12UsersManager18createAcquireFenceEv */
/* Demangled: NSCam::v3::Utils::UsersManager::createAcquireFence() const */
int _ZNK5NSCam2v35Utils12UsersManager18createAcquireFenceEv(void);

/* Symbol: _ZNK7android12SortedVectorIiE10do_compareEPKvS3_ */
/* Demangled: android::SortedVector<int>::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorIiE10do_compareEPKvS3_(void);

/* Symbol: _ZNK5NSCam2v35Utils15StreamBufferImp18createReleaseFenceEi */
/* Demangled: NSCam::v3::Utils::StreamBufferImp::createReleaseFence(int) const */
int _ZNK5NSCam2v35Utils15StreamBufferImp18createReleaseFenceEi(void);

/* Symbol: _ZTv0_n72_NK5NSCam2v35Utils15StreamBufferImp20getNumberOfProducersEv */
/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferImp::getNumberOfProducers() const */
int _ZTv0_n72_NK5NSCam2v35Utils15StreamBufferImp20getNumberOfProducersEv(void);

/* Symbol: _ZN5NSCam2v35Utils12UsersManager15enqueUserGraph_Ej */
/* Demangled: NSCam::v3::Utils::UsersManager::enqueUserGraph_(unsigned int) */
int _ZN5NSCam2v35Utils12UsersManager15enqueUserGraph_Ej(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils12UsersManager11MyUserGraph8UserNodeEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<int, NSCam::v3::Utils::UsersManager::MyUserGraph::UserNode> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils12UsersManager11MyUserGraph8UserNodeEEEEE;

/* Symbol: _ZTTN5NSCam2v35Utils3Imp14SyncHelperBaseE */
/* Demangled: VTT for NSCam::v3::Utils::Imp::SyncHelperBase */
extern void* _ZTTN5NSCam2v35Utils3Imp14SyncHelperBaseE;

/* Symbol: _ZNK5NSCam2v35Utils15StreamBufferImp8isActiveEv */
/* Demangled: NSCam::v3::Utils::StreamBufferImp::isActive() const */
int _ZNK5NSCam2v35Utils15StreamBufferImp8isActiveEv(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_pointerIPN5NSCam2v35Utils3Imp11SyncContextENS_14default_deleteIS5_EENS_9allocatorIS5_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_pointer<NSCam::v3::Utils::Imp::SyncContext*, std::__1::default_delete<NSCam::v3::Utils::Imp::SyncContext>, std::__1::allocator<NSCam::v3::Utils::Imp::SyncContext> > */
extern void* _ZTVNSt3__120__shared_ptr_pointerIPN5NSCam2v35Utils3Imp11SyncContextENS_14default_deleteIS5_EENS_9allocatorIS5_EEEE;

/* Symbol: _ZN5NSCam2v35Utils14MetaStreamInfoC1EPKcxjjj */
/* Demangled: NSCam::v3::Utils::MetaStreamInfo::MetaStreamInfo(char const*, long long, unsigned int, unsigned int, unsigned int) */
int _ZN5NSCam2v35Utils14MetaStreamInfoC1EPKcxjjj(void);

/* Symbol: _ZN5NSCam2v35Utils20StreamBufferPoolImplD2Ev */
/* Demangled: NSCam::v3::Utils::StreamBufferPoolImpl::~StreamBufferPoolImpl() */
int _ZN5NSCam2v35Utils20StreamBufferPoolImplD2Ev(void);

/* Symbol: _ZTv0_n12_N5NSCam2v35Utils20StreamBufferPoolImplD1Ev */
/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferPoolImpl::~StreamBufferPoolImpl() */
int _ZTv0_n12_N5NSCam2v35Utils20StreamBufferPoolImplD1Ev(void);

/* Symbol: _ZTCN5NSCam2v35Utils3Imp10SyncHelperE180_NS2_15ISyncHelperBaseE */
/* Demangled: construction vtable for NSCam::v3::Utils::Imp::ISyncHelperBase-in-NSCam::v3::Utils::Imp::SyncHelper */
extern void* _ZTCN5NSCam2v35Utils3Imp10SyncHelperE180_NS2_15ISyncHelperBaseE;

/* Symbol: _ZN5NSCam2v35Utils22ImageStreamInfoBuilderC1EPKNS0_16IImageStreamInfoE */
/* Demangled: NSCam::v3::Utils::ImageStreamInfoBuilder::ImageStreamInfoBuilder(NSCam::v3::IImageStreamInfo const*) */
int _ZN5NSCam2v35Utils22ImageStreamInfoBuilderC1EPKNS0_16IImageStreamInfoE(void);

/* Symbol: _ZTv0_n36_NK5NSCam2v35Utils15ImageStreamInfo16getMinInitBufNumEv */
/* Demangled: virtual thunk to NSCam::v3::Utils::ImageStreamInfo::getMinInitBufNum() const */
int _ZTv0_n36_NK5NSCam2v35Utils15ImageStreamInfo16getMinInitBufNumEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v35Utils12UsersManager6MyUserEEEEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::Utils::UsersManager::MyUser> > >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v35Utils12UsersManager6MyUserEEEEEE7do_copyEPvPKvj(void);

/* Symbol: _ZTv0_n32_N5NSCam2v35Utils12UsersManager11createGraphEv */
/* Demangled: virtual thunk to NSCam::v3::Utils::UsersManager::createGraph() */
int _ZTv0_n32_N5NSCam2v35Utils12UsersManager11createGraphEv(void);

/* Symbol: _ZTVN5NSCam2v35Utils3Imp10SyncHelperE */
/* Demangled: vtable for NSCam::v3::Utils::Imp::SyncHelper */
extern void* _ZTVN5NSCam2v35Utils3Imp10SyncHelperE;

/* Symbol: _ZN5NSCam2v35Utils12UsersManager5resetEv */
/* Demangled: NSCam::v3::Utils::UsersManager::reset() */
int _ZN5NSCam2v35Utils12UsersManager5resetEv(void);

/* Symbol: _ZN5NSCam2v35Utils19HalMetaStreamBuffer9AllocatorC2EPNS0_15IMetaStreamInfoE */
/* Demangled: NSCam::v3::Utils::HalMetaStreamBuffer::Allocator::Allocator(NSCam::v3::IMetaStreamInfo*) */
int _ZN5NSCam2v35Utils19HalMetaStreamBuffer9AllocatorC2EPNS0_15IMetaStreamInfoE(void);

/* Symbol: _ZTCN5NSCam2v35Utils19HalMetaStreamBufferE0_NS1_21TStreamBufferWithPoolINS1_19HalMetaStreamBufferENS0_17IMetaStreamBufferEEE */
/* Demangled: construction vtable for NSCam::v3::Utils::TStreamBufferWithPool<NSCam::v3::Utils::HalMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer>-in-NSCam::v3::Utils::HalMetaStreamBuffer */
extern void* _ZTCN5NSCam2v35Utils19HalMetaStreamBufferE0_NS1_21TStreamBufferWithPoolINS1_19HalMetaStreamBufferENS0_17IMetaStreamBufferEEE;

/* Symbol: _ZTVN5NSCam2v35Utils20HalImageStreamBufferE */
/* Demangled: vtable for NSCam::v3::Utils::HalImageStreamBuffer */
extern void* _ZTVN5NSCam2v35Utils20HalImageStreamBufferE;

/* Symbol: _ZN5NSCam2v35Utils28HalImageStreamBufferProviderC1EN7android2spINS0_16IImageStreamInfoEEENS4_INS_16IImageBufferHeapEEENS3_2wpINS1_21IStreamBufferProviderEEE */
/* Demangled: NSCam::v3::Utils::HalImageStreamBufferProvider::HalImageStreamBufferProvider(android::sp<NSCam::v3::IImageStreamInfo>, android::sp<NSCam::IImageBufferHeap>, android::wp<NSCam::v3::Utils::IStreamBufferProvider>) */
int _ZN5NSCam2v35Utils28HalImageStreamBufferProviderC1EN7android2spINS0_16IImageStreamInfoEEENS4_INS_16IImageBufferHeapEEENS3_2wpINS1_21IStreamBufferProviderEEE(void);

/* Symbol: _ZTv0_n16_NK5NSCam2v35Utils14MetaStreamInfo13getStreamNameEv */
/* Demangled: virtual thunk to NSCam::v3::Utils::MetaStreamInfo::getStreamName() const */
int _ZTv0_n16_NK5NSCam2v35Utils14MetaStreamInfo13getStreamNameEv(void);

/* Symbol: _ZNK5NSCam2v35Utils15ImageStreamInfo10getImgSizeEv */
/* Demangled: NSCam::v3::Utils::ImageStreamInfo::getImgSize() const */
int _ZNK5NSCam2v35Utils15ImageStreamInfo10getImgSizeEv(void);

/* Symbol: _ZTVN5NSCam2v35Utils15ImageStreamInfoE */
/* Demangled: vtable for NSCam::v3::Utils::ImageStreamInfo */
extern void* _ZTVN5NSCam2v35Utils15ImageStreamInfoE;

/* Symbol: _ZN5NSCam2v35Utils12UsersManagerC1EiPKc */
/* Demangled: NSCam::v3::Utils::UsersManager::UsersManager(int, char const*) */
int _ZN5NSCam2v35Utils12UsersManagerC1EiPKc(void);

/* Symbol: _ZN5NSCam2v35Utils15StreamBufferImp13onTryReadLockEPKcb */
/* Demangled: NSCam::v3::Utils::StreamBufferImp::onTryReadLock(char const*, bool) */
int _ZN5NSCam2v35Utils15StreamBufferImp13onTryReadLockEPKcb(void);

/* Symbol: _ZTv0_n92_NK5NSCam2v35Utils15StreamBufferImp18createReleaseFenceEv */
/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferImp::createReleaseFence() const */
int _ZTv0_n92_NK5NSCam2v35Utils15StreamBufferImp18createReleaseFenceEv(void);

/* Symbol: _ZN5NSCam2v35Utils12UsersManagerC2EiPKc */
/* Demangled: NSCam::v3::Utils::UsersManager::UsersManager(int, char const*) */
int _ZN5NSCam2v35Utils12UsersManagerC2EiPKc(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils12UsersManager11MyUserGraph8UserNodeEEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::v3::Utils::UsersManager::MyUserGraph::UserNode> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils12UsersManager11MyUserGraph8UserNodeEEEE7do_copyEPvPKvj(void);

/* Symbol: _ZTCN5NSCam2v35Utils19HalMetaStreamBufferE0_NS0_14TIStreamBufferINS0_15IMetaStreamInfoENS_9IMetadataEEE */
/* Demangled: construction vtable for NSCam::v3::TIStreamBuffer<NSCam::v3::IMetaStreamInfo, NSCam::IMetadata>-in-NSCam::v3::Utils::HalMetaStreamBuffer */
extern void* _ZTCN5NSCam2v35Utils19HalMetaStreamBufferE0_NS0_14TIStreamBufferINS0_15IMetaStreamInfoENS_9IMetadataEEE;

/* Symbol: _ZNK5NSCam2v35Utils15ImageStreamInfo20getUsageForAllocatorEv */
/* Demangled: NSCam::v3::Utils::ImageStreamInfo::getUsageForAllocator() const */
int _ZNK5NSCam2v35Utils15ImageStreamInfo20getUsageForAllocatorEv(void);

/* Symbol: _ZN5NSCam2v35Utils19HalMetaStreamBufferC2ERKNS_9IMetadataEN7android2spINS0_15IMetaStreamInfoEEENS6_2wpINS1_17IStreamBufferPoolINS0_17IMetaStreamBufferEEEEE */
/* Demangled: NSCam::v3::Utils::HalMetaStreamBuffer::HalMetaStreamBuffer(NSCam::IMetadata const&, android::sp<NSCam::v3::IMetaStreamInfo>, android::wp<NSCam::v3::Utils::IStreamBufferPool<NSCam::v3::IMetaStreamBuffer> >) */
int _ZN5NSCam2v35Utils19HalMetaStreamBufferC2ERKNS_9IMetadataEN7android2spINS0_15IMetaStreamInfoEEENS6_2wpINS1_17IStreamBufferPoolINS0_17IMetaStreamBufferEEEEE(void);

/* Symbol: _ZTv0_n16_N5NSCam2v35Utils3Imp14SyncHelperBaseD0Ev */
/* Demangled: virtual thunk to NSCam::v3::Utils::Imp::SyncHelperBase::~SyncHelperBase() */
int _ZTv0_n16_N5NSCam2v35Utils3Imp14SyncHelperBaseD0Ev(void);

/* Symbol: __udivsi3 */
/* Demangled: __udivsi3 */
int __udivsi3(void);

/* Symbol: _ZTVN5NSCam2v35Utils14MetaStreamInfoE */
/* Demangled: vtable for NSCam::v3::Utils::MetaStreamInfo */
extern void* _ZTVN5NSCam2v35Utils14MetaStreamInfoE;

/* Symbol: _ZNK7android12SortedVectorIiE10do_destroyEPvj */
/* Demangled: android::SortedVector<int>::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorIiE10do_destroyEPvj(void);

/* Symbol: _ZTv0_n60_NK5NSCam2v35Utils12UsersManager15getUserCategoryEi */
/* Demangled: virtual thunk to NSCam::v3::Utils::UsersManager::getUserCategory(int) const */
int _ZTv0_n60_NK5NSCam2v35Utils12UsersManager15getUserCategoryEi(void);

/* Symbol: _ZNK5NSCam2v35Utils15ImageStreamInfo19getUsageForConsumerEv */
/* Demangled: NSCam::v3::Utils::ImageStreamInfo::getUsageForConsumer() const */
int _ZNK5NSCam2v35Utils15ImageStreamInfo19getUsageForConsumerEv(void);

/* Symbol: _ZTv0_n16_NK5NSCam2v35Utils15ImageStreamInfo13getStreamNameEv */
/* Demangled: virtual thunk to NSCam::v3::Utils::ImageStreamInfo::getStreamName() const */
int _ZTv0_n16_NK5NSCam2v35Utils15ImageStreamInfo13getStreamNameEv(void);

/* Symbol: _ZTCN5NSCam2v35Utils15StreamBufferImpE0_NS0_13IStreamBufferE */
/* Demangled: construction vtable for NSCam::v3::IStreamBuffer-in-NSCam::v3::Utils::StreamBufferImp */
extern void* _ZTCN5NSCam2v35Utils15StreamBufferImpE0_NS0_13IStreamBufferE;

/* Symbol: _ZN5NSCam2v35Utils3Imp14SyncHelperBase13add_timestampEiiRNS2_9SyncParamE */
/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::add_timestamp(int, int, NSCam::v3::Utils::Imp::SyncParam&) */
int _ZN5NSCam2v35Utils3Imp14SyncHelperBase13add_timestampEiiRNS2_9SyncParamE(void);

/* Symbol: _ZN5NSCam2v35Utils3Imp15ISyncHelperBase14createInstanceEv */
/* Demangled: NSCam::v3::Utils::Imp::ISyncHelperBase::createInstance() */
int _ZN5NSCam2v35Utils3Imp15ISyncHelperBase14createInstanceEv(void);

/* Symbol: _ZN5NSCam2v35Utils15ImageStreamInfo12setMaxBufNumEj */
/* Demangled: NSCam::v3::Utils::ImageStreamInfo::setMaxBufNum(unsigned int) */
int _ZN5NSCam2v35Utils15ImageStreamInfo12setMaxBufNumEj(void);

/* Symbol: _ZN5NSCam2v35Utils19HalMetaStreamBuffer11resetBufferEv */
/* Demangled: NSCam::v3::Utils::HalMetaStreamBuffer::resetBuffer() */
int _ZN5NSCam2v35Utils19HalMetaStreamBuffer11resetBufferEv(void);

/* Symbol: _ZN5NSCam2v35Utils19HalMetaStreamBuffer9AllocatorC1EPNS0_15IMetaStreamInfoE */
/* Demangled: NSCam::v3::Utils::HalMetaStreamBuffer::Allocator::Allocator(NSCam::v3::IMetaStreamInfo*) */
int _ZN5NSCam2v35Utils19HalMetaStreamBuffer9AllocatorC1EPNS0_15IMetaStreamInfoE(void);

/* Symbol: _ZTCN5NSCam2v35Utils19HalMetaStreamBufferE0_NS0_13IUsersManagerE */
/* Demangled: construction vtable for NSCam::v3::IUsersManager-in-NSCam::v3::Utils::HalMetaStreamBuffer */
extern void* _ZTCN5NSCam2v35Utils19HalMetaStreamBufferE0_NS0_13IUsersManagerE;

/* Symbol: _ZN5NSCam2v35Utils3Imp14SyncHelperBase26earse_sync_queue_by_cam_idEi */
/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::earse_sync_queue_by_cam_id(int) */
int _ZN5NSCam2v35Utils3Imp14SyncHelperBase26earse_sync_queue_by_cam_idEi(void);

/* Symbol: _ZN5NSCam2v35Utils3Imp14SyncHelperBase7isFlushEv */
/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::isFlush() */
int _ZN5NSCam2v35Utils3Imp14SyncHelperBase7isFlushEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp11SyncContext8syncDataEEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::v3::Utils::Imp::SyncContext::syncData> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp11SyncContext8syncDataEEEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZNK5NSCam2v35Utils14MetaStreamInfo13getStreamNameEv */
/* Demangled: NSCam::v3::Utils::MetaStreamInfo::getStreamName() const */
int _ZNK5NSCam2v35Utils14MetaStreamInfo13getStreamNameEv(void);

/* Symbol: _ZN7android2spIN5NSCam5Utils4Sync6IFenceEEaSEOS5_ */
/* Demangled: android::sp<NSCam::Utils::Sync::IFence>::operator=(android::sp<NSCam::Utils::Sync::IFence>&&) */
int _ZN7android2spIN5NSCam5Utils4Sync6IFenceEEaSEOS5_(void);

/* Symbol: _ZNK5NSCam2v35Utils15StreamBufferImp18createReleaseFenceEv */
/* Demangled: NSCam::v3::Utils::StreamBufferImp::createReleaseFence() const */
int _ZNK5NSCam2v35Utils15StreamBufferImp18createReleaseFenceEv(void);

/* Symbol: _ZTTN5NSCam2v35Utils15StreamBufferImpE */
/* Demangled: VTT for NSCam::v3::Utils::StreamBufferImp */
extern void* _ZTTN5NSCam2v35Utils15StreamBufferImpE;

/* Symbol: _ZN5NSCam2v35Utils3Imp14SyncHelperBase16enque_sync_checkERNS2_9SyncParamERNSt3__16vectorIiNS6_9allocatorIiEEEE */
/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::enque_sync_check(NSCam::v3::Utils::Imp::SyncParam&, std::__1::vector<int, std::__1::allocator<int> >&) */
int _ZN5NSCam2v35Utils3Imp14SyncHelperBase16enque_sync_checkERNS2_9SyncParamERNSt3__16vectorIiNS6_9allocatorIiEEEE(void);

/* Symbol: _ZN5NSCam2v35Utils3Imp14SyncHelperBaseD2Ev */
/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::~SyncHelperBase() */
int _ZN5NSCam2v35Utils3Imp14SyncHelperBaseD2Ev(void);

/* Symbol: _ZNK5NSCam2v35Utils14MetaStreamInfo8toStringEv */
/* Demangled: NSCam::v3::Utils::MetaStreamInfo::toString() const */
int _ZNK5NSCam2v35Utils14MetaStreamInfo8toStringEv(void);

/* Symbol: _ZNK5NSCam2v35Utils12UsersManager11MyUserGraph9outdegreeEj */
/* Demangled: NSCam::v3::Utils::UsersManager::MyUserGraph::outdegree(unsigned int) const */
int _ZNK5NSCam2v35Utils12UsersManager11MyUserGraph9outdegreeEj(void);

/* Symbol: _ZTv0_n84_NK5NSCam2v35Utils15StreamBufferImp18createReleaseFenceEi */
/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferImp::createReleaseFence(int) const */
int _ZTv0_n84_NK5NSCam2v35Utils15StreamBufferImp18createReleaseFenceEi(void);

/* Symbol: _ZN5NSCam2v35Utils3Imp14SyncHelperBase9syncEnqHWERNS2_9SyncParamE */
/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::syncEnqHW(NSCam::v3::Utils::Imp::SyncParam&) */
int _ZN5NSCam2v35Utils3Imp14SyncHelperBase9syncEnqHWERNS2_9SyncParamE(void);

/* Symbol: _ZNK5NSCam2v35Utils15ImageStreamInfo13getStreamTypeEv */
/* Demangled: NSCam::v3::Utils::ImageStreamInfo::getStreamType() const */
int _ZNK5NSCam2v35Utils15ImageStreamInfo13getStreamTypeEv(void);

/* Symbol: _ZNK7android12SortedVectorIiE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<int>::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorIiE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE11__vallocateEj */
/* Demangled: std::__1::vector<NSCam::BufPlane, std::__1::allocator<NSCam::BufPlane> >::__vallocate(unsigned int) */
int _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE11__vallocateEj(void);

/* Symbol: _ZNK5NSCam2v35Utils12UsersManager14queryUserGraphEPNS0_13IUsersManager10IUserGraphE */
/* Demangled: NSCam::v3::Utils::UsersManager::queryUserGraph(NSCam::v3::IUsersManager::IUserGraph*) const */
int _ZNK5NSCam2v35Utils12UsersManager14queryUserGraphEPNS0_13IUsersManager10IUserGraphE(void);

/* Symbol: _ZTv0_n112_NK5NSCam2v35Utils12UsersManager24haveAllProducerUsersUsedEv */
/* Demangled: virtual thunk to NSCam::v3::Utils::UsersManager::haveAllProducerUsersUsed() const */
int _ZTv0_n112_NK5NSCam2v35Utils12UsersManager24haveAllProducerUsersUsedEv(void);

/* Symbol: _ZTv0_n60_NK5NSCam2v35Utils15StreamBufferImp15getUserCategoryEi */
/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferImp::getUserCategory(int) const */
int _ZTv0_n60_NK5NSCam2v35Utils15StreamBufferImp15getUserCategoryEi(void);

/* Symbol: _ZN5NSCam2v35Utils3Imp14SyncHelperBase14do_result_waitEi */
/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::do_result_wait(int) */
int _ZN5NSCam2v35Utils3Imp14SyncHelperBase14do_result_waitEi(void);

/* Symbol: _ZTv0_n12_N5NSCam2v35Utils3Imp14SyncHelperBaseD0Ev */
/* Demangled: virtual thunk to NSCam::v3::Utils::Imp::SyncHelperBase::~SyncHelperBase() */
int _ZTv0_n12_N5NSCam2v35Utils3Imp14SyncHelperBaseD0Ev(void);

/* Symbol: _ZTVN7android4ListIjEE */
/* Demangled: vtable for android::List<unsigned int> */
extern void* _ZTVN7android4ListIjEE;

/* Symbol: _ZN5NSCam2v35Utils3Imp14SyncHelperBase14getSyncContextEi */
/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::getSyncContext(int) */
int _ZN5NSCam2v35Utils3Imp14SyncHelperBase14getSyncContextEi(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: _ZNK5NSCam2v35Utils14MetaStreamInfo12getMaxBufNumEv */
/* Demangled: NSCam::v3::Utils::MetaStreamInfo::getMaxBufNum() const */
int _ZNK5NSCam2v35Utils14MetaStreamInfo12getMaxBufNumEv(void);

/* Symbol: _ZN5NSCam2v35Utils12UsersManager11MyUserGraph11setCapacityEj */
/* Demangled: NSCam::v3::Utils::UsersManager::MyUserGraph::setCapacity(unsigned int) */
int _ZN5NSCam2v35Utils12UsersManager11MyUserGraph11setCapacityEj(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v35Utils12UsersManager6MyUserEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::Utils::UsersManager::MyUser> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v35Utils12UsersManager6MyUserEEEEEEE;

/* Symbol: _ZTv0_n28_N5NSCam2v35Utils3Imp14SyncHelperBase4initEi */
/* Demangled: virtual thunk to NSCam::v3::Utils::Imp::SyncHelperBase::init(int) */
int _ZTv0_n28_N5NSCam2v35Utils3Imp14SyncHelperBase4initEi(void);

/* Symbol: _ZTv0_n56_NK5NSCam2v35Utils12UsersManager13getUserStatusEi */
/* Demangled: virtual thunk to NSCam::v3::Utils::UsersManager::getUserStatus(int) const */
int _ZTv0_n56_NK5NSCam2v35Utils12UsersManager13getUserStatusEi(void);

/* Symbol: _ZTv0_n44_N5NSCam2v35Utils3Imp14SyncHelperBase5flushEi */
/* Demangled: virtual thunk to NSCam::v3::Utils::Imp::SyncHelperBase::flush(int) */
int _ZTv0_n44_N5NSCam2v35Utils3Imp14SyncHelperBase5flushEi(void);

/* Symbol: _ZTVN7android6VectorINS_2spIN5NSCam2v35Utils12UsersManager11MyUserGraphEEEEE */
/* Demangled: vtable for android::Vector<android::sp<NSCam::v3::Utils::UsersManager::MyUserGraph> > */
extern void* _ZTVN7android6VectorINS_2spIN5NSCam2v35Utils12UsersManager11MyUserGraphEEEEE;

/* Symbol: __aeabi_l2d */
/* Demangled: __aeabi_l2d */
int __aeabi_l2d(void);

/* Symbol: _ZTCN5NSCam2v35Utils3Imp10SyncHelperE0_NS2_14SyncHelperBaseE */
/* Demangled: construction vtable for NSCam::v3::Utils::Imp::SyncHelperBase-in-NSCam::v3::Utils::Imp::SyncHelper */
extern void* _ZTCN5NSCam2v35Utils3Imp10SyncHelperE0_NS2_14SyncHelperBaseE;

/* Symbol: _ZNK5NSCam2v35Utils12UsersManager11MyUserGraph10getInUsersEjRN7android6VectorINS4_2spINS2_6MyUserEEEEE */
/* Demangled: NSCam::v3::Utils::UsersManager::MyUserGraph::getInUsers(unsigned int, android::Vector<android::sp<NSCam::v3::Utils::UsersManager::MyUser> >&) const */
int _ZNK5NSCam2v35Utils12UsersManager11MyUserGraph10getInUsersEjRN7android6VectorINS4_2spINS2_6MyUserEEEEE(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEEC2ERKS3_ */
/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::vector(std::__1::vector<int, std::__1::allocator<int> > const&) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEEC2ERKS3_(void);

/* Symbol: _ZNK5NSCam2v35Utils21MetaStreamInfoBuilder5buildEv */
/* Demangled: NSCam::v3::Utils::MetaStreamInfoBuilder::build() const */
int _ZNK5NSCam2v35Utils21MetaStreamInfoBuilder5buildEv(void);

/* Symbol: _ZNK5NSCam2v35Utils12UsersManager24haveAllProducerUsersUsedEv */
/* Demangled: NSCam::v3::Utils::UsersManager::haveAllProducerUsersUsed() const */
int _ZNK5NSCam2v35Utils12UsersManager24haveAllProducerUsersUsedEv(void);

/* Symbol: _ZTv0_n104_NK5NSCam2v35Utils12UsersManager17getAllUsersStatusEv */
/* Demangled: virtual thunk to NSCam::v3::Utils::UsersManager::getAllUsersStatus() const */
int _ZTv0_n104_NK5NSCam2v35Utils12UsersManager17getAllUsersStatusEv(void);

/* Symbol: _ZTv0_n112_NK5NSCam2v35Utils15StreamBufferImp24haveAllProducerUsersUsedEv */
/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferImp::haveAllProducerUsersUsed() const */
int _ZTv0_n112_NK5NSCam2v35Utils15StreamBufferImp24haveAllProducerUsersUsedEv(void);

/* Symbol: _ZN5NSCam2v35Utils15ImageStreamInfoC1EPKcxjjjjiRKNSt3__16vectorINS_8BufPlaneENS5_9allocatorIS7_EEEEjjRKNS_15ImageBufferInfoERKNS_10SecureInfoE */
/* Demangled: NSCam::v3::Utils::ImageStreamInfo::ImageStreamInfo(char const*, long long, unsigned int, unsigned int, unsigned int, unsigned int, int, std::__1::vector<NSCam::BufPlane, std::__1::allocator<NSCam::BufPlane> > const&, unsigned int, unsigned int, NSCam::ImageBufferInfo const&, NSCam::SecureInfo const&) */
int _ZN5NSCam2v35Utils15ImageStreamInfoC1EPKcxjjjjiRKNSt3__16vectorINS_8BufPlaneENS5_9allocatorIS7_EEEEjjRKNS_15ImageBufferInfoERKNS_10SecureInfoE(void);

/* Symbol: __aeabi_memmove */
/* Demangled: __aeabi_memmove */
int __aeabi_memmove(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils12UsersManager11MyUserGraph8UserNodeEEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::v3::Utils::UsersManager::MyUserGraph::UserNode> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils12UsersManager11MyUserGraph8UserNodeEEEE12do_constructEPvj(void);

/* Symbol: _ZTCN5NSCam2v35Utils12UsersManager11MyUserGraphE0_NS0_13IUsersManager10IUserGraphE */
/* Demangled: construction vtable for NSCam::v3::IUsersManager::IUserGraph-in-NSCam::v3::Utils::UsersManager::MyUserGraph */
extern void* _ZTCN5NSCam2v35Utils12UsersManager11MyUserGraphE0_NS0_13IUsersManager10IUserGraphE;

/* Symbol: _ZN5NSCam2v35Utils20HalImageStreamBufferC1EN7android2spINS0_16IImageStreamInfoEEENS3_2wpINS1_17IStreamBufferPoolINS0_18IImageStreamBufferEEEEENS4_INS_16IImageBufferHeapEEE */
/* Demangled: NSCam::v3::Utils::HalImageStreamBuffer::HalImageStreamBuffer(android::sp<NSCam::v3::IImageStreamInfo>, android::wp<NSCam::v3::Utils::IStreamBufferPool<NSCam::v3::IImageStreamBuffer> >, android::sp<NSCam::IImageBufferHeap>) */
int _ZN5NSCam2v35Utils20HalImageStreamBufferC1EN7android2spINS0_16IImageStreamInfoEEENS3_2wpINS1_17IStreamBufferPoolINS0_18IImageStreamBufferEEEEENS4_INS_16IImageBufferHeapEEE(void);

/* Symbol: _ZN5NSCam2v35Utils19HalMetaStreamBuffer9AllocatorclERKNS_9IMetadataEPNS1_17IStreamBufferPoolINS0_17IMetaStreamBufferEEE */
/* Demangled: NSCam::v3::Utils::HalMetaStreamBuffer::Allocator::operator()(NSCam::IMetadata const&, NSCam::v3::Utils::IStreamBufferPool<NSCam::v3::IMetaStreamBuffer>*) */
int _ZN5NSCam2v35Utils19HalMetaStreamBuffer9AllocatorclERKNS_9IMetadataEPNS1_17IStreamBufferPoolINS0_17IMetaStreamBufferEEE(void);

/* Symbol: _ZTVN7android6VectorINS_2spIN5NSCam2v35Utils12UsersManager6MyUserEEEEE */
/* Demangled: vtable for android::Vector<android::sp<NSCam::v3::Utils::UsersManager::MyUser> > */
extern void* _ZTVN7android6VectorINS_2spIN5NSCam2v35Utils12UsersManager6MyUserEEEEE;

/* Symbol: _ZTv0_n52_N5NSCam2v35Utils12UsersManager14markUserStatusEij */
/* Demangled: virtual thunk to NSCam::v3::Utils::UsersManager::markUserStatus(int, unsigned int) */
int _ZTv0_n52_N5NSCam2v35Utils12UsersManager14markUserStatusEij(void);

/* Symbol: _ZN5NSCam2v35Utils3Imp5TimerD2Ev */
/* Demangled: NSCam::v3::Utils::Imp::Timer::~Timer() */
int _ZN5NSCam2v35Utils3Imp5TimerD2Ev(void);

/* Symbol: _ZN7android2spIN5NSCam2v315IMetaStreamInfoEEC2EPS3_ */
/* Demangled: android::sp<NSCam::v3::IMetaStreamInfo>::sp(NSCam::v3::IMetaStreamInfo*) */
int _ZN7android2spIN5NSCam2v315IMetaStreamInfoEEC2EPS3_(void);

/* Symbol: _ZTCN5NSCam2v35Utils28HalImageStreamBufferProviderE0_NS0_13IUsersManagerE */
/* Demangled: construction vtable for NSCam::v3::IUsersManager-in-NSCam::v3::Utils::HalImageStreamBufferProvider */
extern void* _ZTCN5NSCam2v35Utils28HalImageStreamBufferProviderE0_NS0_13IUsersManagerE;

/* Symbol: _ZNK5NSCam2v35Utils15StreamBufferImp15getUserCategoryEi */
/* Demangled: NSCam::v3::Utils::StreamBufferImp::getUserCategory(int) const */
int _ZNK5NSCam2v35Utils15StreamBufferImp15getUserCategoryEi(void);

/* Symbol: _ZTCN5NSCam2v35Utils28HalImageStreamBufferProviderE0_NS1_13TStreamBufferINS1_20HalImageStreamBufferENS0_18IImageStreamBufferEEE */
/* Demangled: construction vtable for NSCam::v3::Utils::TStreamBuffer<NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::IImageStreamBuffer>-in-NSCam::v3::Utils::HalImageStreamBufferProvider */
extern void* _ZTCN5NSCam2v35Utils28HalImageStreamBufferProviderE0_NS1_13TStreamBufferINS1_20HalImageStreamBufferENS0_18IImageStreamBufferEEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp14SyncHelperBase11sync_resultEEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::v3::Utils::Imp::SyncHelperBase::sync_result> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp14SyncHelperBase11sync_resultEEEE7do_copyEPvPKvj(void);

/* Symbol: _ZNK5NSCam2v35Utils12UsersManager11MyUserGraph13getPriorUsersEjRN7android6VectorINS4_2spINS2_6MyUserEEEEE */
/* Demangled: NSCam::v3::Utils::UsersManager::MyUserGraph::getPriorUsers(unsigned int, android::Vector<android::sp<NSCam::v3::Utils::UsersManager::MyUser> >&) const */
int _ZNK5NSCam2v35Utils12UsersManager11MyUserGraph13getPriorUsersEjRN7android6VectorINS4_2spINS2_6MyUserEEEEE(void);

/* Symbol: _ZNK5NSCam2v35Utils12UsersManager15dumpStateLockedERN7android7PrinterE */
/* Demangled: NSCam::v3::Utils::UsersManager::dumpStateLocked(android::Printer&) const */
int _ZNK5NSCam2v35Utils12UsersManager15dumpStateLockedERN7android7PrinterE(void);

/* Symbol: _ZTv0_n136_N5NSCam2v35Utils15StreamBufferImp15setUsersManagerEN7android2spINS0_13IUsersManagerEEE */
/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferImp::setUsersManager(android::sp<NSCam::v3::IUsersManager>) */
int _ZTv0_n136_N5NSCam2v35Utils15StreamBufferImp15setUsersManagerEN7android2spINS0_13IUsersManagerEEE(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: _ZTv0_n36_N5NSCam2v35Utils3Imp14SyncHelperBase9syncEnqHWERNS2_9SyncParamE */
/* Demangled: virtual thunk to NSCam::v3::Utils::Imp::SyncHelperBase::syncEnqHW(NSCam::v3::Utils::Imp::SyncParam&) */
int _ZTv0_n36_N5NSCam2v35Utils3Imp14SyncHelperBase9syncEnqHWERNS2_9SyncParamE(void);

/* Symbol: _ZN5NSCam2v35Utils15ImageStreamInfoC1EPKcxjjjjiRKNS_5MSizeERKNSt3__16vectorINS_8BufPlaneENS8_9allocatorISA_EEEEjjRKNS_10SecureInfoE */
/* Demangled: NSCam::v3::Utils::ImageStreamInfo::ImageStreamInfo(char const*, long long, unsigned int, unsigned int, unsigned int, unsigned int, int, NSCam::MSize const&, std::__1::vector<NSCam::BufPlane, std::__1::allocator<NSCam::BufPlane> > const&, unsigned int, unsigned int, NSCam::SecureInfo const&) */
int _ZN5NSCam2v35Utils15ImageStreamInfoC1EPKcxjjjjiRKNS_5MSizeERKNSt3__16vectorINS_8BufPlaneENS8_9allocatorISA_EEEEjjRKNS_10SecureInfoE(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: _ZN5NSCam2v35Utils15StreamBufferImp15finishUserSetupEv */
/* Demangled: NSCam::v3::Utils::StreamBufferImp::finishUserSetup() */
int _ZN5NSCam2v35Utils15StreamBufferImp15finishUserSetupEv(void);

/* Symbol: _ZTVN7android4ListIN5NSCam2v35Utils15StreamBufferImp6RWUserEEE */
/* Demangled: vtable for android::List<NSCam::v3::Utils::StreamBufferImp::RWUser> */
extern void* _ZTVN7android4ListIN5NSCam2v35Utils15StreamBufferImp6RWUserEEE;

/* Symbol: _ZN5NSCam2v35Utils20StreamBufferPoolImplD1Ev */
/* Demangled: NSCam::v3::Utils::StreamBufferPoolImpl::~StreamBufferPoolImpl() */
int _ZN5NSCam2v35Utils20StreamBufferPoolImplD1Ev(void);

/* Symbol: _ZTv0_n12_N5NSCam2v35Utils20StreamBufferPoolImplD0Ev */
/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferPoolImpl::~StreamBufferPoolImpl() */
int _ZTv0_n12_N5NSCam2v35Utils20StreamBufferPoolImplD0Ev(void);

/* Symbol: _ZN5NSCam2v35Utils12UsersManager6MyUserC2ERKNS0_13IUsersManager4UserEi */
/* Demangled: NSCam::v3::Utils::UsersManager::MyUser::MyUser(NSCam::v3::IUsersManager::User const&, int) */
int _ZN5NSCam2v35Utils12UsersManager6MyUserC2ERKNS0_13IUsersManager4UserEi(void);

/* Symbol: _ZTVN7android12SortedVectorIiEE */
/* Demangled: vtable for android::SortedVector<int> */
extern void* _ZTVN7android12SortedVectorIiEE;

/* Symbol: _ZN5NSCam2v35Utils21TStreamBufferWithPoolINS1_20HalImageStreamBufferENS0_18IImageStreamBufferEE13releaseBufferEv */
/* Demangled: NSCam::v3::Utils::TStreamBufferWithPool<NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::IImageStreamBuffer>::releaseBuffer() */
int _ZN5NSCam2v35Utils21TStreamBufferWithPoolINS1_20HalImageStreamBufferENS0_18IImageStreamBufferEE13releaseBufferEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__110shared_ptrIN5NSCam2v35Utils3Imp11SyncContextEEEEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, std::__1::shared_ptr<NSCam::v3::Utils::Imp::SyncContext> > >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__110shared_ptrIN5NSCam2v35Utils3Imp11SyncContextEEEEEE8do_splatEPvPKvj(void);

/* Symbol: _ZTVN5NSCam2v35Utils3Imp14SyncHelperBaseE */
/* Demangled: vtable for NSCam::v3::Utils::Imp::SyncHelperBase */
extern void* _ZTVN5NSCam2v35Utils3Imp14SyncHelperBaseE;

/* Symbol: _ZTv0_n40_N5NSCam2v35Utils3Imp14SyncHelperBase15syncResultCheckERNS2_9SyncParamE */
/* Demangled: virtual thunk to NSCam::v3::Utils::Imp::SyncHelperBase::syncResultCheck(NSCam::v3::Utils::Imp::SyncParam&) */
int _ZTv0_n40_N5NSCam2v35Utils3Imp14SyncHelperBase15syncResultCheckERNS2_9SyncParamE(void);

/* Symbol: _ZN5NSCam2v35Utils14MetaStreamInfoC2EPKcxjjj */
/* Demangled: NSCam::v3::Utils::MetaStreamInfo::MetaStreamInfo(char const*, long long, unsigned int, unsigned int, unsigned int) */
int _ZN5NSCam2v35Utils14MetaStreamInfoC2EPKcxjjj(void);

/* Symbol: _ZNK5NSCam2v35Utils15ImageStreamInfo12getTransformEv */
/* Demangled: NSCam::v3::Utils::ImageStreamInfo::getTransform() const */
int _ZNK5NSCam2v35Utils15ImageStreamInfo12getTransformEv(void);

/* Symbol: _ZTCN5NSCam2v35Utils12UsersManagerE0_NS0_13IUsersManagerE */
/* Demangled: construction vtable for NSCam::v3::IUsersManager-in-NSCam::v3::Utils::UsersManager */
extern void* _ZTCN5NSCam2v35Utils12UsersManagerE0_NS0_13IUsersManagerE;

/* Symbol: _ZN5NSCam2v35Utils19HalMetaStreamBuffer9AllocatorclEPNS1_17IStreamBufferPoolINS0_17IMetaStreamBufferEEE */
/* Demangled: NSCam::v3::Utils::HalMetaStreamBuffer::Allocator::operator()(NSCam::v3::Utils::IStreamBufferPool<NSCam::v3::IMetaStreamBuffer>*) */
int _ZN5NSCam2v35Utils19HalMetaStreamBuffer9AllocatorclEPNS1_17IStreamBufferPoolINS0_17IMetaStreamBufferEEE(void);

/* Symbol: _ZNK5NSCam2v35Utils15StreamBufferImp14getSubjectNameEv */
/* Demangled: NSCam::v3::Utils::StreamBufferImp::getSubjectName() const */
int _ZNK5NSCam2v35Utils15StreamBufferImp14getSubjectNameEv(void);

/* Symbol: _ZTCN5NSCam2v35Utils20HalImageStreamBufferE0_NS0_14TIStreamBufferINS0_16IImageStreamInfoENS_16IImageBufferHeapEEE */
/* Demangled: construction vtable for NSCam::v3::TIStreamBuffer<NSCam::v3::IImageStreamInfo, NSCam::IImageBufferHeap>-in-NSCam::v3::Utils::HalImageStreamBuffer */
extern void* _ZTCN5NSCam2v35Utils20HalImageStreamBufferE0_NS0_14TIStreamBufferINS0_16IImageStreamInfoENS_16IImageBufferHeapEEE;

/* Symbol: _ZN5NSCam2v35Utils3Imp14SyncHelperBase12do_sync_waitEi */
/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::do_sync_wait(int) */
int _ZN5NSCam2v35Utils3Imp14SyncHelperBase12do_sync_waitEi(void);

/* Symbol: _ZNK7android12SortedVectorIiE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<int>::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorIiE7do_copyEPvPKvj(void);

/* Symbol: _ZTVN5NSCam2v35Utils12UsersManagerE */
/* Demangled: vtable for NSCam::v3::Utils::UsersManager */
extern void* _ZTVN5NSCam2v35Utils12UsersManagerE;

/* Symbol: _ZNK5NSCam2v35Utils15StreamBufferImp18createAcquireFenceEi */
/* Demangled: NSCam::v3::Utils::StreamBufferImp::createAcquireFence(int) const */
int _ZNK5NSCam2v35Utils15StreamBufferImp18createAcquireFenceEi(void);

/* Symbol: _ZTCN5NSCam2v35Utils20HalImageStreamBufferE0_NS0_13IStreamBufferE */
/* Demangled: construction vtable for NSCam::v3::IStreamBuffer-in-NSCam::v3::Utils::HalImageStreamBuffer */
extern void* _ZTCN5NSCam2v35Utils20HalImageStreamBufferE0_NS0_13IStreamBufferE;

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: _ZN5NSCam2v35Utils15StreamBufferImp14onTryWriteLockEPKcb */
/* Demangled: NSCam::v3::Utils::StreamBufferImp::onTryWriteLock(char const*, bool) */
int _ZN5NSCam2v35Utils15StreamBufferImp14onTryWriteLockEPKcb(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: _ZTv0_n24_NK5NSCam2v35Utils15ImageStreamInfo13getStreamTypeEv */
/* Demangled: virtual thunk to NSCam::v3::Utils::ImageStreamInfo::getStreamType() const */
int _ZTv0_n24_NK5NSCam2v35Utils15ImageStreamInfo13getStreamTypeEv(void);

/* Symbol: _ZTv0_n32_N5NSCam2v35Utils15ImageStreamInfo12setMaxBufNumEj */
/* Demangled: virtual thunk to NSCam::v3::Utils::ImageStreamInfo::setMaxBufNum(unsigned int) */
int _ZTv0_n32_N5NSCam2v35Utils15ImageStreamInfo12setMaxBufNumEj(void);

/* Symbol: _ZTv0_n108_NK5NSCam2v35Utils15StreamBufferImp28haveAllProducerUsersReleasedEv */
/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferImp::haveAllProducerUsersReleased() const */
int _ZTv0_n108_NK5NSCam2v35Utils15StreamBufferImp28haveAllProducerUsersReleasedEv(void);

/* Symbol: _ZTv0_n168_NK5NSCam2v35Utils19HalMetaStreamBuffer8toStringEv */
/* Demangled: virtual thunk to NSCam::v3::Utils::HalMetaStreamBuffer::toString() const */
int _ZTv0_n168_NK5NSCam2v35Utils19HalMetaStreamBuffer8toStringEv(void);

/* Symbol: _ZTv0_n80_NK5NSCam2v35Utils15StreamBufferImp18createAcquireFenceEi */
/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferImp::createAcquireFence(int) const */
int _ZTv0_n80_NK5NSCam2v35Utils15StreamBufferImp18createAcquireFenceEi(void);

/* Symbol: _ZN5NSCam2v35Utils3Imp14SyncHelperBase16remove_timestampEii */
/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::remove_timestamp(int, int) */
int _ZN5NSCam2v35Utils3Imp14SyncHelperBase16remove_timestampEii(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiiEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, int> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiiEEE7do_copyEPvPKvj(void);

/* Symbol: _ZN5NSCam2v35Utils20HalImageStreamBuffer9AllocatorC2EPNS0_16IImageStreamInfoERKNS_21IImageBufferAllocator8ImgParamE */
/* Demangled: NSCam::v3::Utils::HalImageStreamBuffer::Allocator::Allocator(NSCam::v3::IImageStreamInfo*, NSCam::IImageBufferAllocator::ImgParam const&) */
int _ZN5NSCam2v35Utils20HalImageStreamBuffer9AllocatorC2EPNS0_16IImageStreamInfoERKNS_21IImageBufferAllocator8ImgParamE(void);

/* Symbol: _ZNK5NSCam2v35Utils15StreamBufferImp33haveAllUsersReleasedOrPreReleasedEi */
/* Demangled: NSCam::v3::Utils::StreamBufferImp::haveAllUsersReleasedOrPreReleased(int) const */
int _ZNK5NSCam2v35Utils15StreamBufferImp33haveAllUsersReleasedOrPreReleasedEi(void);

/* Symbol: _ZNK5NSCam2v35Utils15StreamBufferImp9dumpStateERN7android7PrinterE */
/* Demangled: NSCam::v3::Utils::StreamBufferImp::dumpState(android::Printer&) const */
int _ZNK5NSCam2v35Utils15StreamBufferImp9dumpStateERN7android7PrinterE(void);

/* Symbol: _ZN5NSCam2v35Utils3Imp14SyncHelperBaseC2Ev */
/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::SyncHelperBase() */
int _ZN5NSCam2v35Utils3Imp14SyncHelperBaseC2Ev(void);

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEE11__vallocateEj */
/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__vallocate(unsigned int) */
int _ZNSt3__16vectorIjNS_9allocatorIjEEE11__vallocateEj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils12UsersManager11MyUserGraph8UserNodeEEEE10do_compareEPKvSB_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::v3::Utils::UsersManager::MyUserGraph::UserNode> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils12UsersManager11MyUserGraph8UserNodeEEEE10do_compareEPKvSB_(void);

/* Symbol: _ZTv0_n100_NK5NSCam2v35Utils12UsersManager20haveAllUsersReleasedEv */
/* Demangled: virtual thunk to NSCam::v3::Utils::UsersManager::haveAllUsersReleased() const */
int _ZTv0_n100_NK5NSCam2v35Utils12UsersManager20haveAllUsersReleasedEv(void);

/* Symbol: _ZN5NSCam2v35Utils20HalImageStreamBuffer17replaceStreamInfoEN7android2spINS0_16IImageStreamInfoEEE */
/* Demangled: NSCam::v3::Utils::HalImageStreamBuffer::replaceStreamInfo(android::sp<NSCam::v3::IImageStreamInfo>) */
int _ZN5NSCam2v35Utils20HalImageStreamBuffer17replaceStreamInfoEN7android2spINS0_16IImageStreamInfoEEE(void);

/* Symbol: _ZN5NSCam2v35Utils20HalImageStreamBuffer9AllocatorclEPNS1_17IStreamBufferPoolINS0_18IImageStreamBufferEEE */
/* Demangled: NSCam::v3::Utils::HalImageStreamBuffer::Allocator::operator()(NSCam::v3::Utils::IStreamBufferPool<NSCam::v3::IImageStreamBuffer>*) */
int _ZN5NSCam2v35Utils20HalImageStreamBuffer9AllocatorclEPNS1_17IStreamBufferPoolINS0_18IImageStreamBufferEEE(void);

/* Symbol: _ZTCN5NSCam2v35Utils20HalImageStreamBufferE0_NS1_13TStreamBufferINS1_20HalImageStreamBufferENS0_18IImageStreamBufferEEE */
/* Demangled: construction vtable for NSCam::v3::Utils::TStreamBuffer<NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::IImageStreamBuffer>-in-NSCam::v3::Utils::HalImageStreamBuffer */
extern void* _ZTCN5NSCam2v35Utils20HalImageStreamBufferE0_NS1_13TStreamBufferINS1_20HalImageStreamBufferENS0_18IImageStreamBufferEEE;

/* Symbol: __aeabi_ldivmod */
/* Demangled: __aeabi_ldivmod */
int __aeabi_ldivmod(void);

/* Symbol: _ZN5NSCam2v35Utils3Imp14SyncHelperBase5startEi */
/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::start(int) */
int _ZN5NSCam2v35Utils3Imp14SyncHelperBase5startEi(void);

/* Symbol: _ZNK5NSCam2v35Utils15ImageStreamInfo11getSensorIdEv */
/* Demangled: NSCam::v3::Utils::ImageStreamInfo::getSensorId() const */
int _ZNK5NSCam2v35Utils15ImageStreamInfo11getSensorIdEv(void);

/* Symbol: _ZNK5NSCam2v35Utils12UsersManager11MyUserGraph13getGroupIndexEv */
/* Demangled: NSCam::v3::Utils::UsersManager::MyUserGraph::getGroupIndex() const */
int _ZNK5NSCam2v35Utils12UsersManager11MyUserGraph13getGroupIndexEv(void);

/* Symbol: _ZNK5NSCam2v35Utils14MetaStreamInfo11getStreamIdEv */
/* Demangled: NSCam::v3::Utils::MetaStreamInfo::getStreamId() const */
int _ZNK5NSCam2v35Utils14MetaStreamInfo11getStreamIdEv(void);

/* Symbol: _ZN5NSCam2v35Utils15StreamBufferImp9dumpStateERN7android7PrinterERKNSt3__16vectorINS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEENSB_ISD_EEEE */
/* Demangled: NSCam::v3::Utils::StreamBufferImp::dumpState(android::Printer&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
int _ZN5NSCam2v35Utils15StreamBufferImp9dumpStateERN7android7PrinterERKNSt3__16vectorINS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEENSB_ISD_EEEE(void);

/* Symbol: _ZTTN5NSCam2v35Utils20StreamBufferPoolImplE */
/* Demangled: VTT for NSCam::v3::Utils::StreamBufferPoolImpl */
extern void* _ZTTN5NSCam2v35Utils20StreamBufferPoolImplE;

/* Symbol: _ZN5NSCam2v35Utils3Imp14SyncHelperBase15decideMasterCamERNS2_9SyncParamERiRx */
/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::decideMasterCam(NSCam::v3::Utils::Imp::SyncParam&, int&, long long&) */
int _ZN5NSCam2v35Utils3Imp14SyncHelperBase15decideMasterCamERNS2_9SyncParamERiRx(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp11SyncContext8syncDataEEEE10do_compareEPKvSB_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::v3::Utils::Imp::SyncContext::syncData> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp11SyncContext8syncDataEEEE10do_compareEPKvSB_(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE11__vallocateEj */
/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::__vallocate(unsigned int) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE11__vallocateEj(void);

/* Symbol: _ZN5NSCam2v35Utils3Imp14SyncHelperBaseD1Ev */
/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::~SyncHelperBase() */
int _ZN5NSCam2v35Utils3Imp14SyncHelperBaseD1Ev(void);

/* Symbol: _ZN5NSCam2v35Utils15StreamBufferImpC2EN7android2spINS0_11IStreamInfoEEEPvPNS0_13IUsersManagerE */
/* Demangled: NSCam::v3::Utils::StreamBufferImp::StreamBufferImp(android::sp<NSCam::v3::IStreamInfo>, void*, NSCam::v3::IUsersManager*) */
int _ZN5NSCam2v35Utils15StreamBufferImpC2EN7android2spINS0_11IStreamInfoEEEPvPNS0_13IUsersManagerE(void);

/* Symbol: _ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev */
/* Demangled: std::__1::__vector_base<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::~__vector_base() */
int _ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiiEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, int> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiiEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiiEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, int> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiiEEE8do_splatEPvPKvj(void);

/* Symbol: __udivmodsi4 */
/* Demangled: __udivmodsi4 */
int __udivmodsi4(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: _ZNK5NSCam2v35Utils15ImageStreamInfo17getAllocImgFormatEv */
/* Demangled: NSCam::v3::Utils::ImageStreamInfo::getAllocImgFormat() const */
int _ZNK5NSCam2v35Utils15ImageStreamInfo17getAllocImgFormatEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v35Utils12UsersManager6MyUserEEEEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::Utils::UsersManager::MyUser> > >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v35Utils12UsersManager6MyUserEEEEEE8do_splatEPvPKvj(void);

/* Symbol: _ZTv0_n36_N5NSCam2v35Utils12UsersManager14enqueUserGraphEN7android2spINS0_13IUsersManager10IUserGraphEEE */
/* Demangled: virtual thunk to NSCam::v3::Utils::UsersManager::enqueUserGraph(android::sp<NSCam::v3::IUsersManager::IUserGraph>) */
int _ZTv0_n36_N5NSCam2v35Utils12UsersManager14enqueUserGraphEN7android2spINS0_13IUsersManager10IUserGraphEEE(void);

/* Symbol: _ZN5NSCam2v35Utils20StreamBufferPoolImplC2EPKc */
/* Demangled: NSCam::v3::Utils::StreamBufferPoolImpl::StreamBufferPoolImpl(char const*) */
int _ZN5NSCam2v35Utils20StreamBufferPoolImplC2EPKc(void);

/* Symbol: _ZN5NSCam2v35Utils15StreamBufferImp14markUserStatusEij */
/* Demangled: NSCam::v3::Utils::StreamBufferImp::markUserStatus(int, unsigned int) */
int _ZN5NSCam2v35Utils15StreamBufferImp14markUserStatusEij(void);

/* Symbol: _ZNK5NSCam2v35Utils14MetaStreamInfo16getMinInitBufNumEv */
/* Demangled: NSCam::v3::Utils::MetaStreamInfo::getMinInitBufNum() const */
int _ZNK5NSCam2v35Utils14MetaStreamInfo16getMinInitBufNumEv(void);

/* Symbol: _ZNK5NSCam2v35Utils12UsersManager10queryUser_Ei */
/* Demangled: NSCam::v3::Utils::UsersManager::queryUser_(int) const */
int _ZNK5NSCam2v35Utils12UsersManager10queryUser_Ei(void);

/* Symbol: _ZNK7android12SortedVectorIiE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<int>::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorIiE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZNK5NSCam2v35Utils12UsersManager15queryGroupUsageEi */
/* Demangled: NSCam::v3::Utils::UsersManager::queryGroupUsage(int) const */
int _ZNK5NSCam2v35Utils12UsersManager15queryGroupUsageEi(void);

/* Symbol: _ZTv0_n28_N5NSCam2v35Utils12UsersManager9dumpStateERN7android7PrinterERKNSt3__16vectorINS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEENSB_ISD_EEEE */
/* Demangled: virtual thunk to NSCam::v3::Utils::UsersManager::dumpState(android::Printer&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
int _ZTv0_n28_N5NSCam2v35Utils12UsersManager9dumpStateERN7android7PrinterERKNSt3__16vectorINS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEENSB_ISD_EEEE(void);

/* Symbol: _ZTCN5NSCam2v35Utils20HalImageStreamBufferE0_NS0_18IImageStreamBufferE */
/* Demangled: construction vtable for NSCam::v3::IImageStreamBuffer-in-NSCam::v3::Utils::HalImageStreamBuffer */
extern void* _ZTCN5NSCam2v35Utils20HalImageStreamBufferE0_NS0_18IImageStreamBufferE;

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: _ZTVN5NSCam2v35Utils21MetaStreamInfoBuilderE */
/* Demangled: vtable for NSCam::v3::Utils::MetaStreamInfoBuilder */
extern void* _ZTVN5NSCam2v35Utils21MetaStreamInfoBuilderE;

/* Symbol: _ZTCN5NSCam2v35Utils15ImageStreamInfoE0_NS0_11IStreamInfoE */
/* Demangled: construction vtable for NSCam::v3::IStreamInfo-in-NSCam::v3::Utils::ImageStreamInfo */
extern void* _ZTCN5NSCam2v35Utils15ImageStreamInfoE0_NS0_11IStreamInfoE;

/* Symbol: _ZTCN5NSCam2v35Utils15ImageStreamInfoE0_NS0_16IImageStreamInfoE */
/* Demangled: construction vtable for NSCam::v3::IImageStreamInfo-in-NSCam::v3::Utils::ImageStreamInfo */
extern void* _ZTCN5NSCam2v35Utils15ImageStreamInfoE0_NS0_16IImageStreamInfoE;

/* Symbol: _ZN5NSCam2v35Utils12UsersManager6MyUserC1ERKNS0_13IUsersManager4UserEi */
/* Demangled: NSCam::v3::Utils::UsersManager::MyUser::MyUser(NSCam::v3::IUsersManager::User const&, int) */
int _ZN5NSCam2v35Utils12UsersManager6MyUserC1ERKNS0_13IUsersManager4UserEi(void);

/* Symbol: _ZNK5NSCam2v35Utils12UsersManager41haveAllProducerUsersReleasedOrPreReleasedEv */
/* Demangled: NSCam::v3::Utils::UsersManager::haveAllProducerUsersReleasedOrPreReleased() const */
int _ZNK5NSCam2v35Utils12UsersManager41haveAllProducerUsersReleasedOrPreReleasedEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils12UsersManager11MyUserGraph8UserNodeEEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::v3::Utils::UsersManager::MyUserGraph::UserNode> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils12UsersManager11MyUserGraph8UserNodeEEEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v35Utils12UsersManager6MyUserEEEE16do_move_backwardEPvPKvj */
/* Demangled: android::Vector<android::sp<NSCam::v3::Utils::UsersManager::MyUser> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v35Utils12UsersManager6MyUserEEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZTv0_n72_NK5NSCam2v35Utils12UsersManager20getNumberOfProducersEv */
/* Demangled: virtual thunk to NSCam::v3::Utils::UsersManager::getNumberOfProducers() const */
int _ZTv0_n72_NK5NSCam2v35Utils12UsersManager20getNumberOfProducersEv(void);

/* Symbol: _ZTv0_n88_NK5NSCam2v35Utils12UsersManager18createAcquireFenceEv */
/* Demangled: virtual thunk to NSCam::v3::Utils::UsersManager::createAcquireFence() const */
int _ZTv0_n88_NK5NSCam2v35Utils12UsersManager18createAcquireFenceEv(void);

/* Symbol: _ZNK5NSCam2v35Utils15StreamBufferImp18createAcquireFenceEv */
/* Demangled: NSCam::v3::Utils::StreamBufferImp::createAcquireFence() const */
int _ZNK5NSCam2v35Utils15StreamBufferImp18createAcquireFenceEv(void);

/* Symbol: _ZN5NSCam2v35Utils20StreamBufferPoolImpl17releaseToPoolImplEPKcj */
/* Demangled: NSCam::v3::Utils::StreamBufferPoolImpl::releaseToPoolImpl(char const*, unsigned int) */
int _ZN5NSCam2v35Utils20StreamBufferPoolImpl17releaseToPoolImplEPKcj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp11SyncContext8syncDataEEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::v3::Utils::Imp::SyncContext::syncData> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp11SyncContext8syncDataEEEE8do_splatEPvPKvj(void);

/* Symbol: _ZTTN5NSCam2v35Utils15ImageStreamInfoE */
/* Demangled: VTT for NSCam::v3::Utils::ImageStreamInfo */
extern void* _ZTTN5NSCam2v35Utils15ImageStreamInfoE;

/* Symbol: _ZN5NSCam2v35Utils12UsersManager15finishUserSetupEv */
/* Demangled: NSCam::v3::Utils::UsersManager::finishUserSetup() */
int _ZN5NSCam2v35Utils12UsersManager15finishUserSetupEv(void);

/* Symbol: _ZNK5NSCam2v35Utils12UsersManager11MyUserGraph8indegreeEj */
/* Demangled: NSCam::v3::Utils::UsersManager::MyUserGraph::indegree(unsigned int) const */
int _ZNK5NSCam2v35Utils12UsersManager11MyUserGraph8indegreeEj(void);

/* Symbol: _ZTTN5NSCam2v35Utils12UsersManager11MyUserGraphE */
/* Demangled: VTT for NSCam::v3::Utils::UsersManager::MyUserGraph */
extern void* _ZTTN5NSCam2v35Utils12UsersManager11MyUserGraphE;

/* Symbol: _ZN5NSCam2v35Utils19HalMetaStreamBufferC2EN7android2spINS0_15IMetaStreamInfoEEENS3_2wpINS1_17IStreamBufferPoolINS0_17IMetaStreamBufferEEEEE */
/* Demangled: NSCam::v3::Utils::HalMetaStreamBuffer::HalMetaStreamBuffer(android::sp<NSCam::v3::IMetaStreamInfo>, android::wp<NSCam::v3::Utils::IStreamBufferPool<NSCam::v3::IMetaStreamBuffer> >) */
int _ZN5NSCam2v35Utils19HalMetaStreamBufferC2EN7android2spINS0_15IMetaStreamInfoEEENS3_2wpINS1_17IStreamBufferPoolINS0_17IMetaStreamBufferEEEEE(void);

/* Symbol: _ZTCN5NSCam2v35Utils19HalMetaStreamBufferE0_NS1_13TStreamBufferINS1_19HalMetaStreamBufferENS0_17IMetaStreamBufferEEE */
/* Demangled: construction vtable for NSCam::v3::Utils::TStreamBuffer<NSCam::v3::Utils::HalMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer>-in-NSCam::v3::Utils::HalMetaStreamBuffer */
extern void* _ZTCN5NSCam2v35Utils19HalMetaStreamBufferE0_NS1_13TStreamBufferINS1_19HalMetaStreamBufferENS0_17IMetaStreamBufferEEE;

/* Symbol: _ZTv0_n40_NK5NSCam2v35Utils15ImageStreamInfo8toStringEv */
/* Demangled: virtual thunk to NSCam::v3::Utils::ImageStreamInfo::toString() const */
int _ZTv0_n40_NK5NSCam2v35Utils15ImageStreamInfo8toStringEv(void);

/* Symbol: _ZNK5NSCam2v35Utils15StreamBufferImp33haveAllUsersReleasedOrPreReleasedEv */
/* Demangled: NSCam::v3::Utils::StreamBufferImp::haveAllUsersReleasedOrPreReleased() const */
int _ZNK5NSCam2v35Utils15StreamBufferImp33haveAllUsersReleasedOrPreReleasedEv(void);

/* Symbol: _ZTv0_n116_N5NSCam2v35Utils15StreamBufferImp21waitUserReleaseStatusENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE */
/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferImp::waitUserReleaseStatus(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZTv0_n116_N5NSCam2v35Utils15StreamBufferImp21waitUserReleaseStatusENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void);

/* Symbol: _ZN5NSCam2v35Utils3Imp5TimerC2Ev */
/* Demangled: NSCam::v3::Utils::Imp::Timer::Timer() */
int _ZN5NSCam2v35Utils3Imp5TimerC2Ev(void);

/* Symbol: _ZNK5NSCam2v35Utils12UsersManager9dumpStateERN7android7PrinterE */
/* Demangled: NSCam::v3::Utils::UsersManager::dumpState(android::Printer&) const */
int _ZNK5NSCam2v35Utils12UsersManager9dumpStateERN7android7PrinterE(void);

/* Symbol: _ZNK7android12SortedVectorIiE12do_constructEPvj */
/* Demangled: android::SortedVector<int>::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorIiE12do_constructEPvj(void);

/* Symbol: _ZN7android2spIN5NSCam2v318IImageStreamBufferEEC2INS2_5Utils21TStreamBufferWithPoolINS6_20HalImageStreamBufferES3_EEEEPT_ */
/* Demangled: android::sp<NSCam::v3::IImageStreamBuffer>::sp<NSCam::v3::Utils::TStreamBufferWithPool<NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::IImageStreamBuffer> >(NSCam::v3::Utils::TStreamBufferWithPool<NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::IImageStreamBuffer>*) */
int _ZN7android2spIN5NSCam2v318IImageStreamBufferEEC2INS2_5Utils21TStreamBufferWithPoolINS6_20HalImageStreamBufferES3_EEEEPT_(void);

/* Symbol: _ZNK5NSCam2v35Utils20HalImageStreamBuffer8toStringEv */
/* Demangled: NSCam::v3::Utils::HalImageStreamBuffer::toString() const */
int _ZNK5NSCam2v35Utils20HalImageStreamBuffer8toStringEv(void);

/* Symbol: _ZN5NSCam2v35Utils12UsersManager11MyUserGraph10removeUserEi */
/* Demangled: NSCam::v3::Utils::UsersManager::MyUserGraph::removeUser(int) */
int _ZN5NSCam2v35Utils12UsersManager11MyUserGraph10removeUserEi(void);

/* Symbol: _ZN7android2spIN5NSCam2v315IMetaStreamInfoEEC2INS2_5Utils14MetaStreamInfoEEEPT_ */
/* Demangled: android::sp<NSCam::v3::IMetaStreamInfo>::sp<NSCam::v3::Utils::MetaStreamInfo>(NSCam::v3::Utils::MetaStreamInfo*) */
int _ZN7android2spIN5NSCam2v315IMetaStreamInfoEEC2INS2_5Utils14MetaStreamInfoEEEPT_(void);

/* Symbol: _ZTVN5NSCam2v35Utils12UsersManager16MyUserGroupGraphE */
/* Demangled: vtable for NSCam::v3::Utils::UsersManager::MyUserGroupGraph */
extern void* _ZTVN5NSCam2v35Utils12UsersManager16MyUserGroupGraphE;

/* Symbol: _ZN5NSCam2v35Utils20StreamBufferPoolImpl10threadLoopEv */
/* Demangled: NSCam::v3::Utils::StreamBufferPoolImpl::threadLoop() */
int _ZN5NSCam2v35Utils20StreamBufferPoolImpl10threadLoopEv(void);

/* Symbol: _ZTCN5NSCam2v35Utils14MetaStreamInfoE0_NS0_11IStreamInfoE */
/* Demangled: construction vtable for NSCam::v3::IStreamInfo-in-NSCam::v3::Utils::MetaStreamInfo */
extern void* _ZTCN5NSCam2v35Utils14MetaStreamInfoE0_NS0_11IStreamInfoE;

/* Symbol: _ZN5NSCam2v35Utils3Imp5TimerD1Ev */
/* Demangled: NSCam::v3::Utils::Imp::Timer::~Timer() */
int _ZN5NSCam2v35Utils3Imp5TimerD1Ev(void);

/* Symbol: _ZNK5NSCam2v35Utils12UsersManager13getUserStatusEi */
/* Demangled: NSCam::v3::Utils::UsersManager::getUserStatus(int) const */
int _ZNK5NSCam2v35Utils12UsersManager13getUserStatusEi(void);

/* Symbol: _ZTv0_n24_NK5NSCam2v35Utils12UsersManager9dumpStateERN7android7PrinterE */
/* Demangled: virtual thunk to NSCam::v3::Utils::UsersManager::dumpState(android::Printer&) const */
int _ZTv0_n24_NK5NSCam2v35Utils12UsersManager9dumpStateERN7android7PrinterE(void);

/* Symbol: _ZN5NSCam2v35Utils19HalMetaStreamBuffer8castFromEPNS0_13IStreamBufferE */
/* Demangled: NSCam::v3::Utils::HalMetaStreamBuffer::castFrom(NSCam::v3::IStreamBuffer*) */
int _ZN5NSCam2v35Utils19HalMetaStreamBuffer8castFromEPNS0_13IStreamBufferE(void);

/* Symbol: _ZNK5NSCam2v35Utils12UsersManager20getNumberOfProducersEv */
/* Demangled: NSCam::v3::Utils::UsersManager::getNumberOfProducers() const */
int _ZNK5NSCam2v35Utils12UsersManager20getNumberOfProducersEv(void);

/* Symbol: _ZTv0_n116_N5NSCam2v35Utils12UsersManager21waitUserReleaseStatusENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE */
/* Demangled: virtual thunk to NSCam::v3::Utils::UsersManager::waitUserReleaseStatus(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZTv0_n116_N5NSCam2v35Utils12UsersManager21waitUserReleaseStatusENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void);

/* Symbol: __aeabi_uidivmod */
/* Demangled: __aeabi_uidivmod */
int __aeabi_uidivmod(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v35Utils12UsersManager11MyUserGraphEEEE8do_splatEPvPKvj */
/* Demangled: android::Vector<android::sp<NSCam::v3::Utils::UsersManager::MyUserGraph> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v35Utils12UsersManager11MyUserGraphEEEE8do_splatEPvPKvj(void);

/* Symbol: _ZTv0_n92_NK5NSCam2v35Utils12UsersManager18createReleaseFenceEv */
/* Demangled: virtual thunk to NSCam::v3::Utils::UsersManager::createReleaseFence() const */
int _ZTv0_n92_NK5NSCam2v35Utils12UsersManager18createReleaseFenceEv(void);

/* Symbol: _ZTv0_n40_N5NSCam2v35Utils15StreamBufferImp15finishUserSetupEv */
/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferImp::finishUserSetup() */
int _ZTv0_n40_N5NSCam2v35Utils15StreamBufferImp15finishUserSetupEv(void);

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIjEEvOT_ */
/* Demangled: void std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__push_back_slow_path<unsigned int>(unsigned int&&) */
int _ZNSt3__16vectorIjNS_9allocatorIjEEE21__push_back_slow_pathIjEEvOT_(void);

/* Symbol: _ZN5NSCam2v35Utils20StreamBufferPoolImplD0Ev */
/* Demangled: NSCam::v3::Utils::StreamBufferPoolImpl::~StreamBufferPoolImpl() */
int _ZN5NSCam2v35Utils20StreamBufferPoolImplD0Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__110shared_ptrIN5NSCam2v35Utils3Imp11SyncContextEEEEEE10do_compareEPKvSD_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, std::__1::shared_ptr<NSCam::v3::Utils::Imp::SyncContext> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__110shared_ptrIN5NSCam2v35Utils3Imp11SyncContextEEEEEE10do_compareEPKvSD_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__110shared_ptrIN5NSCam2v35Utils3Imp11SyncContextEEEEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, std::__1::shared_ptr<NSCam::v3::Utils::Imp::SyncContext> > >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__110shared_ptrIN5NSCam2v35Utils3Imp11SyncContextEEEEEE10do_destroyEPvj(void);

/* Symbol: _ZNK5NSCam2v35Utils12UsersManager20haveAllUsersReleasedEv */
/* Demangled: NSCam::v3::Utils::UsersManager::haveAllUsersReleased() const */
int _ZNK5NSCam2v35Utils12UsersManager20haveAllUsersReleasedEv(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: _ZTv0_n20_NK5NSCam2v35Utils14MetaStreamInfo11getStreamIdEv */
/* Demangled: virtual thunk to NSCam::v3::Utils::MetaStreamInfo::getStreamId() const */
int _ZTv0_n20_NK5NSCam2v35Utils14MetaStreamInfo11getStreamIdEv(void);

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEEC2ERKS3_ */
/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::vector(std::__1::vector<unsigned int, std::__1::allocator<unsigned int> > const&) */
int _ZNSt3__16vectorIjNS_9allocatorIjEEEC2ERKS3_(void);

/* Symbol: _ZNK5NSCam2v35Utils12UsersManager17getAllUsersStatusEv */
/* Demangled: NSCam::v3::Utils::UsersManager::getAllUsersStatus() const */
int _ZNK5NSCam2v35Utils12UsersManager17getAllUsersStatusEv(void);

/* Symbol: _ZN5NSCam2v35Utils19HalMetaStreamBuffer13releaseBufferEv */
/* Demangled: NSCam::v3::Utils::HalMetaStreamBuffer::releaseBuffer() */
int _ZN5NSCam2v35Utils19HalMetaStreamBuffer13releaseBufferEv(void);

/* Symbol: _ZNK5NSCam2v35Utils15StreamBufferImp28haveAllProducerUsersReleasedEv */
/* Demangled: NSCam::v3::Utils::StreamBufferImp::haveAllProducerUsersReleased() const */
int _ZNK5NSCam2v35Utils15StreamBufferImp28haveAllProducerUsersReleasedEv(void);

/* Symbol: _ZN5NSCam2v35Utils12UsersManager14markUserStatusEij */
/* Demangled: NSCam::v3::Utils::UsersManager::markUserStatus(int, unsigned int) */
int _ZN5NSCam2v35Utils12UsersManager14markUserStatusEij(void);

/* Symbol: _ZTCN5NSCam2v35Utils15StreamBufferImpE0_NS0_13IUsersManagerE */
/* Demangled: construction vtable for NSCam::v3::IUsersManager-in-NSCam::v3::Utils::StreamBufferImp */
extern void* _ZTCN5NSCam2v35Utils15StreamBufferImpE0_NS0_13IUsersManagerE;

/* Symbol: _ZN5NSCam2v35Utils12UsersManager11MyUserGraph7addEdgeEii */
/* Demangled: NSCam::v3::Utils::UsersManager::MyUserGraph::addEdge(int, int) */
int _ZN5NSCam2v35Utils12UsersManager11MyUserGraph7addEdgeEii(void);

/* Symbol: _ZNK5NSCam2v35Utils12UsersManager11MyUserGraph3DFSEjRN7android6VectorINS4_2spINS2_6MyUserEEEEE */
/* Demangled: NSCam::v3::Utils::UsersManager::MyUserGraph::DFS(unsigned int, android::Vector<android::sp<NSCam::v3::Utils::UsersManager::MyUser> >&) const */
int _ZNK5NSCam2v35Utils12UsersManager11MyUserGraph3DFSEjRN7android6VectorINS4_2spINS2_6MyUserEEEEE(void);

/* Symbol: _ZNK5NSCam2v35Utils12UsersManager20getNumberOfConsumersEv */
/* Demangled: NSCam::v3::Utils::UsersManager::getNumberOfConsumers() const */
int _ZNK5NSCam2v35Utils12UsersManager20getNumberOfConsumersEv(void);

/* Symbol: _ZN5NSCam2v35Utils19HalMetaStreamBufferC1EN7android2spINS0_15IMetaStreamInfoEEENS3_2wpINS1_17IStreamBufferPoolINS0_17IMetaStreamBufferEEEEE */
/* Demangled: NSCam::v3::Utils::HalMetaStreamBuffer::HalMetaStreamBuffer(android::sp<NSCam::v3::IMetaStreamInfo>, android::wp<NSCam::v3::Utils::IStreamBufferPool<NSCam::v3::IMetaStreamBuffer> >) */
int _ZN5NSCam2v35Utils19HalMetaStreamBufferC1EN7android2spINS0_15IMetaStreamInfoEEENS3_2wpINS1_17IStreamBufferPoolINS0_17IMetaStreamBufferEEEEE(void);

/* Symbol: _ZTTN5NSCam2v35Utils20HalImageStreamBufferE */
/* Demangled: VTT for NSCam::v3::Utils::HalImageStreamBuffer */
extern void* _ZTTN5NSCam2v35Utils20HalImageStreamBufferE;

/* Symbol: _ZN5NSCam2v35Utils3Imp14SyncHelperBaseC1Ev */
/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::SyncHelperBase() */
int _ZN5NSCam2v35Utils3Imp14SyncHelperBaseC1Ev(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE26__swap_out_circular_bufferERNS_14__split_bufferIiRS2_EE */
/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::__swap_out_circular_buffer(std::__1::__split_buffer<int, std::__1::allocator<int>&>&) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE26__swap_out_circular_bufferERNS_14__split_bufferIiRS2_EE(void);

/* Symbol: _ZTv0_n20_NK5NSCam2v35Utils15ImageStreamInfo11getStreamIdEv */
/* Demangled: virtual thunk to NSCam::v3::Utils::ImageStreamInfo::getStreamId() const */
int _ZTv0_n20_NK5NSCam2v35Utils15ImageStreamInfo11getStreamIdEv(void);

/* Symbol: _ZTVN5NSCam2v35Utils28HalImageStreamBufferProviderE */
/* Demangled: vtable for NSCam::v3::Utils::HalImageStreamBufferProvider */
extern void* _ZTVN5NSCam2v35Utils28HalImageStreamBufferProviderE;

/* Symbol: _ZTv0_n24_N5NSCam2v35Utils3Imp14SyncHelperBase4stopEi */
/* Demangled: virtual thunk to NSCam::v3::Utils::Imp::SyncHelperBase::stop(int) */
int _ZTv0_n24_N5NSCam2v35Utils3Imp14SyncHelperBase4stopEi(void);

/* Symbol: _ZN7android2spIN5NSCam19IIonImageBufferHeapEEC2EPS2_ */
/* Demangled: android::sp<NSCam::IIonImageBufferHeap>::sp(NSCam::IIonImageBufferHeap*) */
int _ZN7android2spIN5NSCam19IIonImageBufferHeapEEC2EPS2_(void);

/* Symbol: _ZNK5NSCam2v35Utils15StreamBufferImp17getAllUsersStatusEv */
/* Demangled: NSCam::v3::Utils::StreamBufferImp::getAllUsersStatus() const */
int _ZNK5NSCam2v35Utils15StreamBufferImp17getAllUsersStatusEv(void);

/* Symbol: _ZTVN5NSCam2v35Utils19HalMetaStreamBufferE */
/* Demangled: vtable for NSCam::v3::Utils::HalMetaStreamBuffer */
extern void* _ZTVN5NSCam2v35Utils19HalMetaStreamBufferE;

/* Symbol: _ZN5NSCam2v35Utils20StreamBufferPoolImpl19acquireFromPoolImplEPKcRjx */
/* Demangled: NSCam::v3::Utils::StreamBufferPoolImpl::acquireFromPoolImpl(char const*, unsigned int&, long long) */
int _ZN5NSCam2v35Utils20StreamBufferPoolImpl19acquireFromPoolImplEPKcRjx(void);

/* Symbol: _ZN5NSCam2v35Utils3Imp14SyncHelperBase14do_result_postEi */
/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::do_result_post(int) */
int _ZN5NSCam2v35Utils3Imp14SyncHelperBase14do_result_postEi(void);

/* Symbol: _ZN5NSCam2v35Utils3Imp14SyncHelperBase23remove_frameno_from_mapERNS2_9SyncParamEb */
/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::remove_frameno_from_map(NSCam::v3::Utils::Imp::SyncParam&, bool) */
int _ZN5NSCam2v35Utils3Imp14SyncHelperBase23remove_frameno_from_mapERNS2_9SyncParamEb(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIiiEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<int, int> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiiEEEE;

/* Symbol: _ZNK5NSCam2v35Utils15ImageStreamInfo13getStreamNameEv */
/* Demangled: NSCam::v3::Utils::ImageStreamInfo::getStreamName() const */
int _ZNK5NSCam2v35Utils15ImageStreamInfo13getStreamNameEv(void);

/* Symbol: _ZN7android2spIN5NSCam2v35Utils20HalImageStreamBufferEEC2INS3_28HalImageStreamBufferProviderEEEPT_ */
/* Demangled: android::sp<NSCam::v3::Utils::HalImageStreamBuffer>::sp<NSCam::v3::Utils::HalImageStreamBufferProvider>(NSCam::v3::Utils::HalImageStreamBufferProvider*) */
int _ZN7android2spIN5NSCam2v35Utils20HalImageStreamBufferEEC2INS3_28HalImageStreamBufferProviderEEEPT_(void);

/* Symbol: _ZN5NSCam2v35Utils3Imp14SyncHelperBase26get_timestamp_check_resultEiiRbRiRx */
/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::get_timestamp_check_result(int, int, bool&, int&, long long&) */
int _ZN5NSCam2v35Utils3Imp14SyncHelperBase26get_timestamp_check_resultEiiRbRiRx(void);

/* Symbol: _ZTv0_n168_NK5NSCam2v35Utils20HalImageStreamBuffer8toStringEv */
/* Demangled: virtual thunk to NSCam::v3::Utils::HalImageStreamBuffer::toString() const */
int _ZTv0_n168_NK5NSCam2v35Utils20HalImageStreamBuffer8toStringEv(void);

/* Symbol: _ZN5NSCam2v35Utils3Imp14SyncHelperBaseD0Ev */
/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::~SyncHelperBase() */
int _ZN5NSCam2v35Utils3Imp14SyncHelperBaseD0Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiiEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, int> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiiEEE10do_destroyEPvj(void);

/* Symbol: _ZTCN5NSCam2v35Utils19HalMetaStreamBufferE0_NS0_17IMetaStreamBufferE */
/* Demangled: construction vtable for NSCam::v3::IMetaStreamBuffer-in-NSCam::v3::Utils::HalMetaStreamBuffer */
extern void* _ZTCN5NSCam2v35Utils19HalMetaStreamBufferE0_NS0_17IMetaStreamBufferE;

/* Symbol: _ZTv0_n24_NK5NSCam2v35Utils15StreamBufferImp9dumpStateERN7android7PrinterE */
/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferImp::dumpState(android::Printer&) const */
int _ZTv0_n24_NK5NSCam2v35Utils15StreamBufferImp9dumpStateERN7android7PrinterE(void);

/* Symbol: _ZTv0_n36_N5NSCam2v35Utils15StreamBufferImp14enqueUserGraphEN7android2spINS0_13IUsersManager10IUserGraphEEE */
/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferImp::enqueUserGraph(android::sp<NSCam::v3::IUsersManager::IUserGraph>) */
int _ZTv0_n36_N5NSCam2v35Utils15StreamBufferImp14enqueUserGraphEN7android2spINS0_13IUsersManager10IUserGraphEEE(void);

/* Symbol: _ZTv0_n88_NK5NSCam2v35Utils15StreamBufferImp18createAcquireFenceEv */
/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferImp::createAcquireFence() const */
int _ZTv0_n88_NK5NSCam2v35Utils15StreamBufferImp18createAcquireFenceEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiiEEE10do_compareEPKvS5_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, int> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiiEEE10do_compareEPKvS5_(void);

/* Symbol: _ZN5NSCam2v35Utils15ImageStreamInfo12setTransformEj */
/* Demangled: NSCam::v3::Utils::ImageStreamInfo::setTransform(unsigned int) */
int _ZN5NSCam2v35Utils15ImageStreamInfo12setTransformEj(void);

/* Symbol: _ZTv0_n108_NK5NSCam2v35Utils12UsersManager28haveAllProducerUsersReleasedEv */
/* Demangled: virtual thunk to NSCam::v3::Utils::UsersManager::haveAllProducerUsersReleased() const */
int _ZTv0_n108_NK5NSCam2v35Utils12UsersManager28haveAllProducerUsersReleasedEv(void);

/* Symbol: _ZTCN5NSCam2v35Utils20HalImageStreamBufferE4_NS1_15StreamBufferImpE */
/* Demangled: construction vtable for NSCam::v3::Utils::StreamBufferImp-in-NSCam::v3::Utils::HalImageStreamBuffer */
extern void* _ZTCN5NSCam2v35Utils20HalImageStreamBufferE4_NS1_15StreamBufferImpE;

/* Symbol: _ZTv0_n44_N5NSCam2v35Utils15StreamBufferImp5resetEv */
/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferImp::reset() */
int _ZTv0_n44_N5NSCam2v35Utils15StreamBufferImp5resetEv(void);

/* Symbol: _ZTv0_n20_N5NSCam2v35Utils3Imp14SyncHelperBase5startEi */
/* Demangled: virtual thunk to NSCam::v3::Utils::Imp::SyncHelperBase::start(int) */
int _ZTv0_n20_N5NSCam2v35Utils3Imp14SyncHelperBase5startEi(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp11SyncContext8syncDataEEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::v3::Utils::Imp::SyncContext::syncData> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp11SyncContext8syncDataEEEE12do_constructEPvj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__110shared_ptrIN5NSCam2v35Utils3Imp11SyncContextEEEEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, std::__1::shared_ptr<NSCam::v3::Utils::Imp::SyncContext> > >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__110shared_ptrIN5NSCam2v35Utils3Imp11SyncContextEEEEEE12do_constructEPvj(void);

/* Symbol: _ZN5NSCam2v35Utils12UsersManager11MyUserGraphC2Ej */
/* Demangled: NSCam::v3::Utils::UsersManager::MyUserGraph::MyUserGraph(unsigned int) */
int _ZN5NSCam2v35Utils12UsersManager11MyUserGraphC2Ej(void);

/* Symbol: _ZTv0_n100_NK5NSCam2v35Utils15StreamBufferImp20haveAllUsersReleasedEv */
/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferImp::haveAllUsersReleased() const */
int _ZTv0_n100_NK5NSCam2v35Utils15StreamBufferImp20haveAllUsersReleasedEv(void);

/* Symbol: _ZNSt3__16removeINS_11__wrap_iterIPiEEiEET_S4_S4_RKT0_ */
/* Demangled: std::__1::__wrap_iter<int*> std::__1::remove<std::__1::__wrap_iter<int*>, int>(std::__1::__wrap_iter<int*>, std::__1::__wrap_iter<int*>, int const&) */
int _ZNSt3__16removeINS_11__wrap_iterIPiEEiEET_S4_S4_RKT0_(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEEC2ERKS5_ */
/* Demangled: std::__1::vector<NSCam::BufPlane, std::__1::allocator<NSCam::BufPlane> >::vector(std::__1::vector<NSCam::BufPlane, std::__1::allocator<NSCam::BufPlane> > const&) */
int _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEEC2ERKS5_(void);

/* Symbol: _ZN5NSCam2v35Utils12UsersManager11MyUserGraph15setAcquireFenceEji */
/* Demangled: NSCam::v3::Utils::UsersManager::MyUserGraph::setAcquireFence(unsigned int, int) */
int _ZN5NSCam2v35Utils12UsersManager11MyUserGraph15setAcquireFenceEji(void);

/* Symbol: _ZNK5NSCam2v35Utils12UsersManager8isActiveEv */
/* Demangled: NSCam::v3::Utils::UsersManager::isActive() const */
int _ZNK5NSCam2v35Utils12UsersManager8isActiveEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v35Utils12UsersManager6MyUserEEEEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::Utils::UsersManager::MyUser> > >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v35Utils12UsersManager6MyUserEEEEEE10do_destroyEPvj(void);

/* Symbol: _ZNK5NSCam2v35Utils21TStreamBufferWithPoolINS1_19HalMetaStreamBufferENS0_17IMetaStreamBufferEE16tryGetBufferPoolEv */
/* Demangled: NSCam::v3::Utils::TStreamBufferWithPool<NSCam::v3::Utils::HalMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer>::tryGetBufferPool() const */
int _ZNK5NSCam2v35Utils21TStreamBufferWithPoolINS1_19HalMetaStreamBufferENS0_17IMetaStreamBufferEE16tryGetBufferPoolEv(void);

/* Symbol: _ZTv0_n76_NK5NSCam2v35Utils15StreamBufferImp20getNumberOfConsumersEv */
/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferImp::getNumberOfConsumers() const */
int _ZTv0_n76_NK5NSCam2v35Utils15StreamBufferImp20getNumberOfConsumersEv(void);

/* Symbol: _ZN5NSCam2v35Utils3Imp14SyncHelperBase28earse_result_queue_by_cam_idEi */
/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::earse_result_queue_by_cam_id(int) */
int _ZN5NSCam2v35Utils3Imp14SyncHelperBase28earse_result_queue_by_cam_idEi(void);

/* Symbol: __aeabi_memmove4 */
/* Demangled: __aeabi_memmove4 */
int __aeabi_memmove4(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: _ZNK5NSCam2v35Utils12UsersManager10getSubjectEv */
/* Demangled: NSCam::v3::Utils::UsersManager::getSubject() const */
int _ZNK5NSCam2v35Utils12UsersManager10getSubjectEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils12UsersManager11MyUserGraph8UserNodeEEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::v3::Utils::UsersManager::MyUserGraph::UserNode> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils12UsersManager11MyUserGraph8UserNodeEEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v35Utils12UsersManager11MyUserGraphEEEE15do_move_forwardEPvPKvj */
/* Demangled: android::Vector<android::sp<NSCam::v3::Utils::UsersManager::MyUserGraph> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v35Utils12UsersManager11MyUserGraphEEEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v35Utils12UsersManager6MyUserEEEE12do_constructEPvj */
/* Demangled: android::Vector<android::sp<NSCam::v3::Utils::UsersManager::MyUser> >::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v35Utils12UsersManager6MyUserEEEE12do_constructEPvj(void);

/* Symbol: _ZN5NSCam2v35Utils15StreamBufferImp15setUsersManagerEN7android2spINS0_13IUsersManagerEEE */
/* Demangled: NSCam::v3::Utils::StreamBufferImp::setUsersManager(android::sp<NSCam::v3::IUsersManager>) */
int _ZN5NSCam2v35Utils15StreamBufferImp15setUsersManagerEN7android2spINS0_13IUsersManagerEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp11SyncContext8syncDataEEEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::v3::Utils::Imp::SyncContext::syncData> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp11SyncContext8syncDataEEEE10do_destroyEPvj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp11SyncContext8syncDataEEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::v3::Utils::Imp::SyncContext::syncData> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp11SyncContext8syncDataEEEE7do_copyEPvPKvj(void);

/* Symbol: __divmoddi4 */
/* Demangled: __divmoddi4 */
int __divmoddi4(void);

/* Symbol: _ZTv0_n16_NK5NSCam2v35Utils12UsersManager10getSubjectEv */
/* Demangled: virtual thunk to NSCam::v3::Utils::UsersManager::getSubject() const */
int _ZTv0_n16_NK5NSCam2v35Utils12UsersManager10getSubjectEv(void);

/* Symbol: _ZTv0_n20_NK5NSCam2v35Utils12UsersManager14getSubjectNameEv */
/* Demangled: virtual thunk to NSCam::v3::Utils::UsersManager::getSubjectName() const */
int _ZTv0_n20_NK5NSCam2v35Utils12UsersManager14getSubjectNameEv(void);

/* Symbol: _ZTv0_n124_NK5NSCam2v35Utils15StreamBufferImp33haveAllUsersReleasedOrPreReleasedEv */
/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferImp::haveAllUsersReleasedOrPreReleased() const */
int _ZTv0_n124_NK5NSCam2v35Utils15StreamBufferImp33haveAllUsersReleasedOrPreReleasedEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiiEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, int> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiiEEE15do_move_forwardEPvPKvj(void);

/* Symbol: __udivmoddi4 */
/* Demangled: __udivmoddi4 */
int __udivmoddi4(void);

/* Symbol: _ZNK5NSCam2v35Utils12UsersManager11MyUserGraph6userAtEj */
/* Demangled: NSCam::v3::Utils::UsersManager::MyUserGraph::userAt(unsigned int) const */
int _ZNK5NSCam2v35Utils12UsersManager11MyUserGraph6userAtEj(void);

/* Symbol: _ZNK5NSCam2v35Utils15StreamBufferImp10getSubjectEv */
/* Demangled: NSCam::v3::Utils::StreamBufferImp::getSubject() const */
int _ZNK5NSCam2v35Utils15StreamBufferImp10getSubjectEv(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam2v35Utils3Imp11SyncContextEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::v3::Utils::Imp::SyncContext>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam2v35Utils3Imp11SyncContextEED2Ev(void);

/* Symbol: _ZTCN5NSCam2v35Utils14MetaStreamInfoE0_NS0_15IMetaStreamInfoE */
/* Demangled: construction vtable for NSCam::v3::IMetaStreamInfo-in-NSCam::v3::Utils::MetaStreamInfo */
extern void* _ZTCN5NSCam2v35Utils14MetaStreamInfoE0_NS0_15IMetaStreamInfoE;

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v35Utils12UsersManager6MyUserEEEE7do_copyEPvPKvj */
/* Demangled: android::Vector<android::sp<NSCam::v3::Utils::UsersManager::MyUser> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v35Utils12UsersManager6MyUserEEEE7do_copyEPvPKvj(void);

/* Symbol: _ZN7android2spIN5NSCam2v313IUsersManagerEEaSERKS4_ */
/* Demangled: android::sp<NSCam::v3::IUsersManager>::operator=(android::sp<NSCam::v3::IUsersManager> const&) */
int _ZN7android2spIN5NSCam2v313IUsersManagerEEaSERKS4_(void);

/* Symbol: _ZTv0_n48_NK5NSCam2v35Utils15StreamBufferImp8isActiveEv */
/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferImp::isActive() const */
int _ZTv0_n48_NK5NSCam2v35Utils15StreamBufferImp8isActiveEv(void);

/* Symbol: _ZN5NSCam2v35Utils3Imp5TimerC1Ev */
/* Demangled: NSCam::v3::Utils::Imp::Timer::Timer() */
int _ZN5NSCam2v35Utils3Imp5TimerC1Ev(void);

/* Symbol: __aeabi_memmove8 */
/* Demangled: __aeabi_memmove8 */
int __aeabi_memmove8(void);

/* Symbol: _ZN5NSCam2v35Utils12UsersManager9dumpStateERN7android7PrinterERKNSt3__16vectorINS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEENSB_ISD_EEEE */
/* Demangled: NSCam::v3::Utils::UsersManager::dumpState(android::Printer&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
int _ZN5NSCam2v35Utils12UsersManager9dumpStateERN7android7PrinterERKNSt3__16vectorINS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEENSB_ISD_EEEE(void);

/* Symbol: _ZN7android2spIN5NSCam2v35Utils12UsersManager6MyUserEEaSERKS6_ */
/* Demangled: android::sp<NSCam::v3::Utils::UsersManager::MyUser>::operator=(android::sp<NSCam::v3::Utils::UsersManager::MyUser> const&) */
int _ZN7android2spIN5NSCam2v35Utils12UsersManager6MyUserEEaSERKS6_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils12UsersManager11MyUserGraph8UserNodeEEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::v3::Utils::UsersManager::MyUserGraph::UserNode> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils12UsersManager11MyUserGraph8UserNodeEEEE8do_splatEPvPKvj(void);

/* Symbol: _ZNK5NSCam2v35Utils21TStreamBufferWithPoolINS1_20HalImageStreamBufferENS0_18IImageStreamBufferEE16tryGetBufferPoolEv */
/* Demangled: NSCam::v3::Utils::TStreamBufferWithPool<NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::IImageStreamBuffer>::tryGetBufferPool() const */
int _ZNK5NSCam2v35Utils21TStreamBufferWithPoolINS1_20HalImageStreamBufferENS0_18IImageStreamBufferEE16tryGetBufferPoolEv(void);

/* Symbol: _ZN7android2spIN5NSCam2v35Utils3Imp15ISyncHelperBaseEEC2INS4_14SyncHelperBaseEEEPT_ */
/* Demangled: android::sp<NSCam::v3::Utils::Imp::ISyncHelperBase>::sp<NSCam::v3::Utils::Imp::SyncHelperBase>(NSCam::v3::Utils::Imp::SyncHelperBase*) */
int _ZN7android2spIN5NSCam2v35Utils3Imp15ISyncHelperBaseEEC2INS4_14SyncHelperBaseEEEPT_(void);

/* Symbol: _ZNK5NSCam2v35Utils15ImageStreamInfo12getImgFormatEv */
/* Demangled: NSCam::v3::Utils::ImageStreamInfo::getImgFormat() const */
int _ZNK5NSCam2v35Utils15ImageStreamInfo12getImgFormatEv(void);

/* Symbol: _ZNK5NSCam2v35Utils12UsersManager18createReleaseFenceEi */
/* Demangled: NSCam::v3::Utils::UsersManager::createReleaseFence(int) const */
int _ZNK5NSCam2v35Utils12UsersManager18createReleaseFenceEi(void);

/* Symbol: _ZNK5NSCam2v35Utils12UsersManager28haveAllProducerUsersReleasedEv */
/* Demangled: NSCam::v3::Utils::UsersManager::haveAllProducerUsersReleased() const */
int _ZNK5NSCam2v35Utils12UsersManager28haveAllProducerUsersReleasedEv(void);

/* Symbol: _ZTv0_n40_N5NSCam2v35Utils12UsersManager15finishUserSetupEv */
/* Demangled: virtual thunk to NSCam::v3::Utils::UsersManager::finishUserSetup() */
int _ZTv0_n40_N5NSCam2v35Utils12UsersManager15finishUserSetupEv(void);

/* Symbol: _ZN5NSCam2v35Utils3Imp14SyncHelperBase29remove_timestamp_check_resultEii */
/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::remove_timestamp_check_result(int, int) */
int _ZN5NSCam2v35Utils3Imp14SyncHelperBase29remove_timestamp_check_resultEii(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIiEEvOT_ */
/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__push_back_slow_path<int>(int&&) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIiEEvOT_(void);

/* Symbol: _ZTv0_n96_NK5NSCam2v35Utils12UsersManager33haveAllUsersReleasedOrPreReleasedEi */
/* Demangled: virtual thunk to NSCam::v3::Utils::UsersManager::haveAllUsersReleasedOrPreReleased(int) const */
int _ZTv0_n96_NK5NSCam2v35Utils12UsersManager33haveAllUsersReleasedOrPreReleasedEi(void);

/* Symbol: _ZN7android2spIN5NSCam2v316IImageStreamInfoEEaSEPS3_ */
/* Demangled: android::sp<NSCam::v3::IImageStreamInfo>::operator=(NSCam::v3::IImageStreamInfo*) */
int _ZN7android2spIN5NSCam2v316IImageStreamInfoEEaSEPS3_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp14SyncHelperBase11sync_resultEEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::v3::Utils::Imp::SyncHelperBase::sync_result> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp14SyncHelperBase11sync_resultEEEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZTv0_n40_NK5NSCam2v35Utils14MetaStreamInfo8toStringEv */
/* Demangled: virtual thunk to NSCam::v3::Utils::MetaStreamInfo::toString() const */
int _ZTv0_n40_NK5NSCam2v35Utils14MetaStreamInfo8toStringEv(void);

/* Symbol: _ZTv0_n124_NK5NSCam2v35Utils12UsersManager33haveAllUsersReleasedOrPreReleasedEv */
/* Demangled: virtual thunk to NSCam::v3::Utils::UsersManager::haveAllUsersReleasedOrPreReleased() const */
int _ZTv0_n124_NK5NSCam2v35Utils12UsersManager33haveAllUsersReleasedOrPreReleasedEv(void);

/* Symbol: _ZNK5NSCam2v35Utils15StreamBufferImp41haveAllProducerUsersReleasedOrPreReleasedEv */
/* Demangled: NSCam::v3::Utils::StreamBufferImp::haveAllProducerUsersReleasedOrPreReleased() const */
int _ZNK5NSCam2v35Utils15StreamBufferImp41haveAllProducerUsersReleasedOrPreReleasedEv(void);

/* Symbol: _ZTCN5NSCam2v35Utils3Imp10SyncHelperE180_NS2_11ISyncHelperE */
/* Demangled: construction vtable for NSCam::v3::Utils::Imp::ISyncHelper-in-NSCam::v3::Utils::Imp::SyncHelper */
extern void* _ZTCN5NSCam2v35Utils3Imp10SyncHelperE180_NS2_11ISyncHelperE;

/* Symbol: _ZNK5NSCam2v35Utils19HalMetaStreamBuffer11isRepeatingEv */
/* Demangled: NSCam::v3::Utils::HalMetaStreamBuffer::isRepeating() const */
int _ZNK5NSCam2v35Utils19HalMetaStreamBuffer11isRepeatingEv(void);

/* Symbol: _ZNK5NSCam2v35Utils20StreamBufferPoolImpl12dumpPoolImplEv */
/* Demangled: NSCam::v3::Utils::StreamBufferPoolImpl::dumpPoolImpl() const */
int _ZNK5NSCam2v35Utils20StreamBufferPoolImpl12dumpPoolImplEv(void);

/* Symbol: _ZN5NSCam2v35Utils3Imp14SyncHelperBase12do_sync_postEi */
/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::do_sync_post(int) */
int _ZN5NSCam2v35Utils3Imp14SyncHelperBase12do_sync_postEi(void);

/* Symbol: _ZN5NSCam2v35Utils12UsersManager11MyUserGraph11getCategoryEj */
/* Demangled: NSCam::v3::Utils::UsersManager::MyUserGraph::getCategory(unsigned int) */
int _ZN5NSCam2v35Utils12UsersManager11MyUserGraph11getCategoryEj(void);

/* Symbol: _ZTCN5NSCam2v35Utils20HalImageStreamBufferE0_NS1_21TStreamBufferWithPoolINS1_20HalImageStreamBufferENS0_18IImageStreamBufferEEE */
/* Demangled: construction vtable for NSCam::v3::Utils::TStreamBufferWithPool<NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::IImageStreamBuffer>-in-NSCam::v3::Utils::HalImageStreamBuffer */
extern void* _ZTCN5NSCam2v35Utils20HalImageStreamBufferE0_NS1_21TStreamBufferWithPoolINS1_20HalImageStreamBufferENS0_18IImageStreamBufferEEE;

/* Symbol: _ZTCN5NSCam2v35Utils28HalImageStreamBufferProviderE0_NS1_20HalImageStreamBufferE */
/* Demangled: construction vtable for NSCam::v3::Utils::HalImageStreamBuffer-in-NSCam::v3::Utils::HalImageStreamBufferProvider */
extern void* _ZTCN5NSCam2v35Utils28HalImageStreamBufferProviderE0_NS1_20HalImageStreamBufferE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp14SyncHelperBase11sync_resultEEEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::v3::Utils::Imp::SyncHelperBase::sync_result> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp14SyncHelperBase11sync_resultEEEE8do_splatEPvPKvj(void);

/* Symbol: _ZN5NSCam2v35Utils3Imp10SyncHelper9syncEnqHWEiiiPNS_9IMetadataE */
/* Demangled: NSCam::v3::Utils::Imp::SyncHelper::syncEnqHW(int, int, int, NSCam::IMetadata*) */
int _ZN5NSCam2v35Utils3Imp10SyncHelper9syncEnqHWEiiiPNS_9IMetadataE(void);

/* Symbol: _ZTVN5NSCam2v35Utils22ImageStreamInfoBuilderE */
/* Demangled: vtable for NSCam::v3::Utils::ImageStreamInfoBuilder */
extern void* _ZTVN5NSCam2v35Utils22ImageStreamInfoBuilderE;

/* Symbol: _ZNK5NSCam2v35Utils12UsersManager39haveAllUsersReleasedOrPreReleasedLockedEv */
/* Demangled: NSCam::v3::Utils::UsersManager::haveAllUsersReleasedOrPreReleasedLocked() const */
int _ZNK5NSCam2v35Utils12UsersManager39haveAllUsersReleasedOrPreReleasedLockedEv(void);

/* Symbol: _ZNK5NSCam2v35Utils15StreamBufferImp10dumpLockedEv */
/* Demangled: NSCam::v3::Utils::StreamBufferImp::dumpLocked() const */
int _ZNK5NSCam2v35Utils15StreamBufferImp10dumpLockedEv(void);

/* Symbol: _ZN5NSCam2v35Utils20StreamBufferPoolImpl14commitPoolImplEPKc */
/* Demangled: NSCam::v3::Utils::StreamBufferPoolImpl::commitPoolImpl(char const*) */
int _ZN5NSCam2v35Utils20StreamBufferPoolImpl14commitPoolImplEPKc(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_ */
/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__push_back_slow_path<int const&>(int const&) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_(void);

/* Symbol: _ZNK5NSCam2v35Utils12UsersManager11MyUserGraph4sizeEv */
/* Demangled: NSCam::v3::Utils::UsersManager::MyUserGraph::size() const */
int _ZNK5NSCam2v35Utils12UsersManager11MyUserGraph4sizeEv(void);

/* Symbol: _ZN7android2spIN5NSCam2v316IImageStreamInfoEEC2EPS3_ */
/* Demangled: android::sp<NSCam::v3::IImageStreamInfo>::sp(NSCam::v3::IImageStreamInfo*) */
int _ZN7android2spIN5NSCam2v316IImageStreamInfoEEC2EPS3_(void);

/* Symbol: _ZTCN5NSCam2v35Utils20HalImageStreamBufferE0_NS0_13IUsersManagerE */
/* Demangled: construction vtable for NSCam::v3::IUsersManager-in-NSCam::v3::Utils::HalImageStreamBuffer */
extern void* _ZTCN5NSCam2v35Utils20HalImageStreamBufferE0_NS0_13IUsersManagerE;

/* Symbol: _ZNSt3__120__shared_ptr_pointerIPN5NSCam2v35Utils3Imp11SyncContextENS_14default_deleteIS5_EENS_9allocatorIS5_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_pointer<NSCam::v3::Utils::Imp::SyncContext*, std::__1::default_delete<NSCam::v3::Utils::Imp::SyncContext>, std::__1::allocator<NSCam::v3::Utils::Imp::SyncContext> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_pointerIPN5NSCam2v35Utils3Imp11SyncContextENS_14default_deleteIS5_EENS_9allocatorIS5_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN7android2spIN5NSCam2v35Utils15ImageStreamInfoEEC2EPS4_ */
/* Demangled: android::sp<NSCam::v3::Utils::ImageStreamInfo>::sp(NSCam::v3::Utils::ImageStreamInfo*) */
int _ZN7android2spIN5NSCam2v35Utils15ImageStreamInfoEEC2EPS4_(void);

/* Symbol: _ZN7android2spIN5NSCam2v316IImageStreamInfoEEaSERKS4_ */
/* Demangled: android::sp<NSCam::v3::IImageStreamInfo>::operator=(android::sp<NSCam::v3::IImageStreamInfo> const&) */
int _ZN7android2spIN5NSCam2v316IImageStreamInfoEEaSERKS4_(void);

/* Symbol: _ZTCN5NSCam2v35Utils19HalMetaStreamBufferE0_NS0_13IStreamBufferE */
/* Demangled: construction vtable for NSCam::v3::IStreamBuffer-in-NSCam::v3::Utils::HalMetaStreamBuffer */
extern void* _ZTCN5NSCam2v35Utils19HalMetaStreamBufferE0_NS0_13IStreamBufferE;

/* Symbol: _ZTv0_n56_NK5NSCam2v35Utils15StreamBufferImp13getUserStatusEi */
/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferImp::getUserStatus(int) const */
int _ZTv0_n56_NK5NSCam2v35Utils15StreamBufferImp13getUserStatusEi(void);

/* Symbol: _ZNK5NSCam2v35Utils14MetaStreamInfo13getStreamTypeEv */
/* Demangled: NSCam::v3::Utils::MetaStreamInfo::getStreamType() const */
int _ZNK5NSCam2v35Utils14MetaStreamInfo13getStreamTypeEv(void);

/* Symbol: _ZTv0_n24_NK5NSCam2v35Utils14MetaStreamInfo13getStreamTypeEv */
/* Demangled: virtual thunk to NSCam::v3::Utils::MetaStreamInfo::getStreamType() const */
int _ZTv0_n24_NK5NSCam2v35Utils14MetaStreamInfo13getStreamTypeEv(void);

/* Symbol: _ZTv0_n28_NK5NSCam2v35Utils14MetaStreamInfo12getMaxBufNumEv */
/* Demangled: virtual thunk to NSCam::v3::Utils::MetaStreamInfo::getMaxBufNum() const */
int _ZTv0_n28_NK5NSCam2v35Utils14MetaStreamInfo12getMaxBufNumEv(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v35Utils12UsersManager11MyUserGraphEEEE10do_destroyEPvj */
/* Demangled: android::Vector<android::sp<NSCam::v3::Utils::UsersManager::MyUserGraph> >::do_destroy(void*, unsigned int) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v35Utils12UsersManager11MyUserGraphEEEE10do_destroyEPvj(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v35Utils12UsersManager6MyUserEEEE8do_splatEPvPKvj */
/* Demangled: android::Vector<android::sp<NSCam::v3::Utils::UsersManager::MyUser> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v35Utils12UsersManager6MyUserEEEE8do_splatEPvPKvj(void);

/* Symbol: _ZTCN5NSCam2v35Utils20StreamBufferPoolImplE0_N7android6ThreadE */
/* Demangled: construction vtable for android::Thread-in-NSCam::v3::Utils::StreamBufferPoolImpl */
extern void* _ZTCN5NSCam2v35Utils20StreamBufferPoolImplE0_N7android6ThreadE;

/* Symbol: _ZTv0_n28_N5NSCam2v35Utils15StreamBufferImp9dumpStateERN7android7PrinterERKNSt3__16vectorINS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEENSB_ISD_EEEE */
/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferImp::dumpState(android::Printer&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
int _ZTv0_n28_N5NSCam2v35Utils15StreamBufferImp9dumpStateERN7android7PrinterERKNSt3__16vectorINS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEENSB_ISD_EEEE(void);

/* Symbol: _ZN5NSCam2v35Utils3Imp14SyncHelperBase26get_timestamp_check_resultExxx */
/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::get_timestamp_check_result(long long, long long, long long) */
int _ZN5NSCam2v35Utils3Imp14SyncHelperBase26get_timestamp_check_resultExxx(void);

/* Symbol: _ZN5NSCam2v35Utils15ImageStreamInfoC2EPKcxjjjjiRKNSt3__16vectorINS_8BufPlaneENS5_9allocatorIS7_EEEEjjRKNS_15ImageBufferInfoERKNS_10SecureInfoE */
/* Demangled: NSCam::v3::Utils::ImageStreamInfo::ImageStreamInfo(char const*, long long, unsigned int, unsigned int, unsigned int, unsigned int, int, std::__1::vector<NSCam::BufPlane, std::__1::allocator<NSCam::BufPlane> > const&, unsigned int, unsigned int, NSCam::ImageBufferInfo const&, NSCam::SecureInfo const&) */
int _ZN5NSCam2v35Utils15ImageStreamInfoC2EPKcxjjjjiRKNSt3__16vectorINS_8BufPlaneENS5_9allocatorIS7_EEEEjjRKNS_15ImageBufferInfoERKNS_10SecureInfoE(void);

/* Symbol: _ZNK5NSCam2v35Utils15ImageStreamInfo17getAllocBufPlanesEv */
/* Demangled: NSCam::v3::Utils::ImageStreamInfo::getAllocBufPlanes() const */
int _ZNK5NSCam2v35Utils15ImageStreamInfo17getAllocBufPlanesEv(void);

/* Symbol: _ZTCN5NSCam2v35Utils28HalImageStreamBufferProviderE0_NS0_18IImageStreamBufferE */
/* Demangled: construction vtable for NSCam::v3::IImageStreamBuffer-in-NSCam::v3::Utils::HalImageStreamBufferProvider */
extern void* _ZTCN5NSCam2v35Utils28HalImageStreamBufferProviderE0_NS0_18IImageStreamBufferE;

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE5eraseENS_11__wrap_iterIPKiEES7_ */
/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::erase(std::__1::__wrap_iter<int const*>, std::__1::__wrap_iter<int const*>) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE5eraseENS_11__wrap_iterIPKiEES7_(void);

/* Symbol: _ZN5NSCam2v35Utils3Imp11ISyncHelper14createInstanceEv */
/* Demangled: NSCam::v3::Utils::Imp::ISyncHelper::createInstance() */
int _ZN5NSCam2v35Utils3Imp11ISyncHelper14createInstanceEv(void);

/* Symbol: _ZN7android2spIN5NSCam2v317IMetaStreamBufferEEC2INS2_5Utils21TStreamBufferWithPoolINS6_19HalMetaStreamBufferES3_EEEEPT_ */
/* Demangled: android::sp<NSCam::v3::IMetaStreamBuffer>::sp<NSCam::v3::Utils::TStreamBufferWithPool<NSCam::v3::Utils::HalMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer> >(NSCam::v3::Utils::TStreamBufferWithPool<NSCam::v3::Utils::HalMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer>*) */
int _ZN7android2spIN5NSCam2v317IMetaStreamBufferEEC2INS2_5Utils21TStreamBufferWithPoolINS6_19HalMetaStreamBufferES3_EEEEPT_(void);

/* Symbol: _ZTCN5NSCam2v35Utils3Imp14SyncHelperBaseE0_NS2_15ISyncHelperBaseE */
/* Demangled: construction vtable for NSCam::v3::Utils::Imp::ISyncHelperBase-in-NSCam::v3::Utils::Imp::SyncHelperBase */
extern void* _ZTCN5NSCam2v35Utils3Imp14SyncHelperBaseE0_NS2_15ISyncHelperBaseE;

/* Symbol: _ZTVN5NSCam2v35Utils17BaseStreamInfoImpE */
/* Demangled: vtable for NSCam::v3::Utils::BaseStreamInfoImp */
extern void* _ZTVN5NSCam2v35Utils17BaseStreamInfoImpE;

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEE26__swap_out_circular_bufferERNS_14__split_bufferIjRS2_EE */
/* Demangled: std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >::__swap_out_circular_buffer(std::__1::__split_buffer<unsigned int, std::__1::allocator<unsigned int>&>&) */
int _ZNSt3__16vectorIjNS_9allocatorIjEEE26__swap_out_circular_bufferERNS_14__split_bufferIjRS2_EE(void);

/* Symbol: _ZNK5NSCam2v35Utils12UsersManager33haveAllUsersReleasedOrPreReleasedEi */
/* Demangled: NSCam::v3::Utils::UsersManager::haveAllUsersReleasedOrPreReleased(int) const */
int _ZNK5NSCam2v35Utils12UsersManager33haveAllUsersReleasedOrPreReleasedEi(void);

/* Symbol: _ZTVN5NSCam2v35Utils12UsersManager11MyUserGraphE */
/* Demangled: vtable for NSCam::v3::Utils::UsersManager::MyUserGraph */
extern void* _ZTVN5NSCam2v35Utils12UsersManager11MyUserGraphE;

/* Symbol: _ZTv0_n48_NK5NSCam2v35Utils12UsersManager8isActiveEv */
/* Demangled: virtual thunk to NSCam::v3::Utils::UsersManager::isActive() const */
int _ZTv0_n48_NK5NSCam2v35Utils12UsersManager8isActiveEv(void);

/* Symbol: _ZTv0_n32_N5NSCam2v35Utils15StreamBufferImp11createGraphEv */
/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferImp::createGraph() */
int _ZTv0_n32_N5NSCam2v35Utils15StreamBufferImp11createGraphEv(void);

/* Symbol: _ZTv0_n64_N5NSCam2v35Utils15StreamBufferImp19setUserReleaseFenceEii */
/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferImp::setUserReleaseFence(int, int) */
int _ZTv0_n64_N5NSCam2v35Utils15StreamBufferImp19setUserReleaseFenceEii(void);

/* Symbol: _ZN5NSCam2v35Utils3Imp5Timer11getTimeDiffEv */
/* Demangled: NSCam::v3::Utils::Imp::Timer::getTimeDiff() */
int _ZN5NSCam2v35Utils3Imp5Timer11getTimeDiffEv(void);

/* Symbol: _ZNK5NSCam2v35Utils15ImageStreamInfo18getImageBufferInfoEv */
/* Demangled: NSCam::v3::Utils::ImageStreamInfo::getImageBufferInfo() const */
int _ZNK5NSCam2v35Utils15ImageStreamInfo18getImageBufferInfoEv(void);

/* Symbol: _ZNK5NSCam2v35Utils12UsersManager18createReleaseFenceEv */
/* Demangled: NSCam::v3::Utils::UsersManager::createReleaseFence() const */
int _ZNK5NSCam2v35Utils12UsersManager18createReleaseFenceEv(void);

/* Symbol: _ZN5NSCam2v35Utils15StreamBufferImp11createGraphEv */
/* Demangled: NSCam::v3::Utils::StreamBufferImp::createGraph() */
int _ZN5NSCam2v35Utils15StreamBufferImp11createGraphEv(void);

/* Symbol: _ZN5NSCam2v35Utils19HalMetaStreamBufferC1ERKNS_9IMetadataEN7android2spINS0_15IMetaStreamInfoEEENS6_2wpINS1_17IStreamBufferPoolINS0_17IMetaStreamBufferEEEEE */
/* Demangled: NSCam::v3::Utils::HalMetaStreamBuffer::HalMetaStreamBuffer(NSCam::IMetadata const&, android::sp<NSCam::v3::IMetaStreamInfo>, android::wp<NSCam::v3::Utils::IStreamBufferPool<NSCam::v3::IMetaStreamBuffer> >) */
int _ZN5NSCam2v35Utils19HalMetaStreamBufferC1ERKNS_9IMetadataEN7android2spINS0_15IMetaStreamInfoEEENS6_2wpINS1_17IStreamBufferPoolINS0_17IMetaStreamBufferEEEEE(void);

/* Symbol: _ZTTN5NSCam2v35Utils19HalMetaStreamBufferE */
/* Demangled: VTT for NSCam::v3::Utils::HalMetaStreamBuffer */
extern void* _ZTTN5NSCam2v35Utils19HalMetaStreamBufferE;

/* Symbol: _ZN5NSCam2v35Utils20StreamBufferPoolImpl16signalUserLockedEv */
/* Demangled: NSCam::v3::Utils::StreamBufferPoolImpl::signalUserLocked() */
int _ZN5NSCam2v35Utils20StreamBufferPoolImpl16signalUserLockedEv(void);

/* Symbol: _ZN5NSCam2v35Utils28HalImageStreamBufferProvider13releaseBufferEv */
/* Demangled: NSCam::v3::Utils::HalImageStreamBufferProvider::releaseBuffer() */
int _ZN5NSCam2v35Utils28HalImageStreamBufferProvider13releaseBufferEv(void);

/* Symbol: _ZN5NSCam2v35Utils3Imp14SyncHelperBase26add_timestamp_check_resultEiijbix */
/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::add_timestamp_check_result(int, int, unsigned int, bool, int, long long) */
int _ZN5NSCam2v35Utils3Imp14SyncHelperBase26add_timestamp_check_resultEiijbix(void);

/* Symbol: _ZN7android2spIN5NSCam2v35Utils3Imp11ISyncHelperEEC2INS4_10SyncHelperEEEPT_ */
/* Demangled: android::sp<NSCam::v3::Utils::Imp::ISyncHelper>::sp<NSCam::v3::Utils::Imp::SyncHelper>(NSCam::v3::Utils::Imp::SyncHelper*) */
int _ZN7android2spIN5NSCam2v35Utils3Imp11ISyncHelperEEC2INS4_10SyncHelperEEEPT_(void);

/* Symbol: _ZN5NSCam2v35Utils20HalImageStreamBuffer11resetBufferEv */
/* Demangled: NSCam::v3::Utils::HalImageStreamBuffer::resetBuffer() */
int _ZN5NSCam2v35Utils20HalImageStreamBuffer11resetBufferEv(void);

/* Symbol: _ZNK5NSCam2v35Utils15StreamBufferImp11printLockedERN7android7PrinterE */
/* Demangled: NSCam::v3::Utils::StreamBufferImp::printLocked(android::Printer&) const */
int _ZNK5NSCam2v35Utils15StreamBufferImp11printLockedERN7android7PrinterE(void);

/* Symbol: _ZNK5NSCam2v35Utils15StreamBufferImp20getNumberOfProducersEv */
/* Demangled: NSCam::v3::Utils::StreamBufferImp::getNumberOfProducers() const */
int _ZNK5NSCam2v35Utils15StreamBufferImp20getNumberOfProducersEv(void);

/* Symbol: _ZTCN5NSCam2v35Utils28HalImageStreamBufferProviderE0_NS1_21TStreamBufferWithPoolINS1_20HalImageStreamBufferENS0_18IImageStreamBufferEEE */
/* Demangled: construction vtable for NSCam::v3::Utils::TStreamBufferWithPool<NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::IImageStreamBuffer>-in-NSCam::v3::Utils::HalImageStreamBufferProvider */
extern void* _ZTCN5NSCam2v35Utils28HalImageStreamBufferProviderE0_NS1_21TStreamBufferWithPoolINS1_20HalImageStreamBufferENS0_18IImageStreamBufferEEE;

/* Symbol: _ZN5NSCam2v35Utils3Imp14SyncHelperBase15syncResultCheckERNS2_9SyncParamE */
/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::syncResultCheck(NSCam::v3::Utils::Imp::SyncParam&) */
int _ZN5NSCam2v35Utils3Imp14SyncHelperBase15syncResultCheckERNS2_9SyncParamE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__110shared_ptrIN5NSCam2v35Utils3Imp11SyncContextEEEEEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, std::__1::shared_ptr<NSCam::v3::Utils::Imp::SyncContext> > >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNSt3__110shared_ptrIN5NSCam2v35Utils3Imp11SyncContextEEEEEE7do_copyEPvPKvj(void);

/* Symbol: _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_ */
/* Demangled: _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_ */
int _ZNSt3__16vectorIN5NSCam8BufPlaneENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v35Utils12UsersManager6MyUserEEEEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::Utils::UsersManager::MyUser> > >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v35Utils12UsersManager6MyUserEEEEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZN5NSCam2v35Utils15StreamBufferImp19setUserReleaseFenceEii */
/* Demangled: NSCam::v3::Utils::StreamBufferImp::setUserReleaseFence(int, int) */
int _ZN5NSCam2v35Utils15StreamBufferImp19setUserReleaseFenceEii(void);

/* Symbol: _ZN5NSCam2v35Utils19HalMetaStreamBuffer12setRepeatingEi */
/* Demangled: NSCam::v3::Utils::HalMetaStreamBuffer::setRepeating(int) */
int _ZN5NSCam2v35Utils19HalMetaStreamBuffer12setRepeatingEi(void);

/* Symbol: _ZN5NSCam2v35Utils28HalImageStreamBufferProviderC2EN7android2spINS0_16IImageStreamInfoEEENS4_INS_16IImageBufferHeapEEENS3_2wpINS1_21IStreamBufferProviderEEE */
/* Demangled: NSCam::v3::Utils::HalImageStreamBufferProvider::HalImageStreamBufferProvider(android::sp<NSCam::v3::IImageStreamInfo>, android::sp<NSCam::IImageBufferHeap>, android::wp<NSCam::v3::Utils::IStreamBufferProvider>) */
int _ZN5NSCam2v35Utils28HalImageStreamBufferProviderC2EN7android2spINS0_16IImageStreamInfoEEENS4_INS_16IImageBufferHeapEEENS3_2wpINS1_21IStreamBufferProviderEEE(void);

/* Symbol: _ZN5NSCam2v35Utils3Imp14SyncHelperBase4initEi */
/* Demangled: NSCam::v3::Utils::Imp::SyncHelperBase::init(int) */
int _ZN5NSCam2v35Utils3Imp14SyncHelperBase4initEi(void);

/* Symbol: _ZTTN5NSCam2v35Utils3Imp10SyncHelperE */
/* Demangled: VTT for NSCam::v3::Utils::Imp::SyncHelper */
extern void* _ZTTN5NSCam2v35Utils3Imp10SyncHelperE;

/* Symbol: _ZTTN5NSCam2v35Utils14MetaStreamInfoE */
/* Demangled: VTT for NSCam::v3::Utils::MetaStreamInfo */
extern void* _ZTTN5NSCam2v35Utils14MetaStreamInfoE;

/* Symbol: _ZN7android2spIN5NSCam2v313IUsersManagerEEC2EPS3_ */
/* Demangled: android::sp<NSCam::v3::IUsersManager>::sp(NSCam::v3::IUsersManager*) */
int _ZN7android2spIN5NSCam2v313IUsersManagerEEC2EPS3_(void);

/* Symbol: _ZTVN5NSCam2v35Utils15StreamBufferImpE */
/* Demangled: vtable for NSCam::v3::Utils::StreamBufferImp */
extern void* _ZTVN5NSCam2v35Utils15StreamBufferImpE;

/* Symbol: _ZNK5NSCam2v35Utils15StreamBufferImp20haveAllUsersReleasedEv */
/* Demangled: NSCam::v3::Utils::StreamBufferImp::haveAllUsersReleased() const */
int _ZNK5NSCam2v35Utils15StreamBufferImp20haveAllUsersReleasedEv(void);

/* Symbol: _ZNK5NSCam2v35Utils15StreamBufferImp24haveAllProducerUsersUsedEv */
/* Demangled: NSCam::v3::Utils::StreamBufferImp::haveAllProducerUsersUsed() const */
int _ZNK5NSCam2v35Utils15StreamBufferImp24haveAllProducerUsersUsedEv(void);

/* Symbol: _ZTv0_n104_NK5NSCam2v35Utils15StreamBufferImp17getAllUsersStatusEv */
/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferImp::getAllUsersStatus() const */
int _ZTv0_n104_NK5NSCam2v35Utils15StreamBufferImp17getAllUsersStatusEv(void);

/* Symbol: _ZN5NSCam2v35Utils20StreamBufferPoolImpl12initPoolImplEPKcjj */
/* Demangled: NSCam::v3::Utils::StreamBufferPoolImpl::initPoolImpl(char const*, unsigned int, unsigned int) */
int _ZN5NSCam2v35Utils20StreamBufferPoolImpl12initPoolImplEPKcjj(void);

/* Symbol: _ZTCN5NSCam2v35Utils28HalImageStreamBufferProviderE4_NS1_15StreamBufferImpE */
/* Demangled: construction vtable for NSCam::v3::Utils::StreamBufferImp-in-NSCam::v3::Utils::HalImageStreamBufferProvider */
extern void* _ZTCN5NSCam2v35Utils28HalImageStreamBufferProviderE4_NS1_15StreamBufferImpE;

/* Symbol: _ZTv0_n56_N5NSCam2v35Utils3Imp10SyncHelper15syncResultCheckERKNS2_21SyncResultInputParamsERNS2_22SyncResultOutputParamsE */
/* Demangled: virtual thunk to NSCam::v3::Utils::Imp::SyncHelper::syncResultCheck(NSCam::v3::Utils::Imp::SyncResultInputParams const&, NSCam::v3::Utils::Imp::SyncResultOutputParams&) */
int _ZTv0_n56_N5NSCam2v35Utils3Imp10SyncHelper15syncResultCheckERKNS2_21SyncResultInputParamsERNS2_22SyncResultOutputParamsE(void);

/* Symbol: _ZNSt3__16vectorIjNS_9allocatorIjEEE6assignIPjEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
/* Demangled: _ZNSt3__16vectorIjNS_9allocatorIjEEE6assignIPjEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
int _ZNSt3__16vectorIjNS_9allocatorIjEEE6assignIPjEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIjNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void);

/* Symbol: _ZN7android2spIN5NSCam2v35Utils12UsersManager11MyUserGraphEEaSEPS5_ */
/* Demangled: android::sp<NSCam::v3::Utils::UsersManager::MyUserGraph>::operator=(NSCam::v3::Utils::UsersManager::MyUserGraph*) */
int _ZN7android2spIN5NSCam2v35Utils12UsersManager11MyUserGraphEEaSEPS5_(void);

/* Symbol: _ZTCN5NSCam2v35Utils19HalMetaStreamBufferE4_NS1_15StreamBufferImpE */
/* Demangled: construction vtable for NSCam::v3::Utils::StreamBufferImp-in-NSCam::v3::Utils::HalMetaStreamBuffer */
extern void* _ZTCN5NSCam2v35Utils19HalMetaStreamBufferE4_NS1_15StreamBufferImpE;

/* Symbol: _ZTv0_n120_NK5NSCam2v35Utils15StreamBufferImp41haveAllProducerUsersReleasedOrPreReleasedEv */
/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferImp::haveAllProducerUsersReleasedOrPreReleased() const */
int _ZTv0_n120_NK5NSCam2v35Utils15StreamBufferImp41haveAllProducerUsersReleasedOrPreReleasedEv(void);

/* Symbol: _ZNK5NSCam2v35Utils15ImageStreamInfo12getDataSpaceEv */
/* Demangled: NSCam::v3::Utils::ImageStreamInfo::getDataSpace() const */
int _ZNK5NSCam2v35Utils15ImageStreamInfo12getDataSpaceEv(void);

/* Symbol: _ZN5NSCam2v35Utils12UsersManager11MyUserGraphC1Ej */
/* Demangled: NSCam::v3::Utils::UsersManager::MyUserGraph::MyUserGraph(unsigned int) */
int _ZN5NSCam2v35Utils12UsersManager11MyUserGraphC1Ej(void);

/* Symbol: _ZNK5NSCam2v35Utils12UsersManager15getUserCategoryEi */
/* Demangled: NSCam::v3::Utils::UsersManager::getUserCategory(int) const */
int _ZNK5NSCam2v35Utils12UsersManager15getUserCategoryEi(void);

/* Symbol: _ZN5NSCam2v35Utils15StreamBufferImp8onUnlockEPKcPv */
/* Demangled: NSCam::v3::Utils::StreamBufferImp::onUnlock(char const*, void*) */
int _ZN5NSCam2v35Utils15StreamBufferImp8onUnlockEPKcPv(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp14SyncHelperBase11sync_resultEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<int, NSCam::v3::Utils::Imp::SyncHelperBase::sync_result> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp14SyncHelperBase11sync_resultEEEEE;

/* Symbol: _ZTv0_n36_NK5NSCam2v35Utils14MetaStreamInfo16getMinInitBufNumEv */
/* Demangled: virtual thunk to NSCam::v3::Utils::MetaStreamInfo::getMinInitBufNum() const */
int _ZTv0_n36_NK5NSCam2v35Utils14MetaStreamInfo16getMinInitBufNumEv(void);

/* Symbol: _ZN5NSCam2v35Utils15ImageStreamInfoC2EPKcxjjjjiRKNS_5MSizeERKNSt3__16vectorINS_8BufPlaneENS8_9allocatorISA_EEEEjjRKNS_10SecureInfoE */
/* Demangled: NSCam::v3::Utils::ImageStreamInfo::ImageStreamInfo(char const*, long long, unsigned int, unsigned int, unsigned int, unsigned int, int, NSCam::MSize const&, std::__1::vector<NSCam::BufPlane, std::__1::allocator<NSCam::BufPlane> > const&, unsigned int, unsigned int, NSCam::SecureInfo const&) */
int _ZN5NSCam2v35Utils15ImageStreamInfoC2EPKcxjjjjiRKNS_5MSizeERKNSt3__16vectorINS_8BufPlaneENS8_9allocatorISA_EEEEjjRKNS_10SecureInfoE(void);

/* Symbol: _ZNK5NSCam2v35Utils15ImageStreamInfo12getMaxBufNumEv */
/* Demangled: NSCam::v3::Utils::ImageStreamInfo::getMaxBufNum() const */
int _ZNK5NSCam2v35Utils15ImageStreamInfo12getMaxBufNumEv(void);

/* Symbol: _ZNK5NSCam2v35Utils15ImageStreamInfo8toStringEv */
/* Demangled: NSCam::v3::Utils::ImageStreamInfo::toString() const */
int _ZNK5NSCam2v35Utils15ImageStreamInfo8toStringEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v35Utils12UsersManager6MyUserEEEEEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::Utils::UsersManager::MyUser> > >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v35Utils12UsersManager6MyUserEEEEEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZNK5NSCam2v35Utils15StreamBufferImp15queryGroupUsageEi */
/* Demangled: NSCam::v3::Utils::StreamBufferImp::queryGroupUsage(int) const */
int _ZNK5NSCam2v35Utils15StreamBufferImp15queryGroupUsageEi(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp11SyncContext8syncDataEEEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::v3::Utils::Imp::SyncContext::syncData> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp11SyncContext8syncDataEEEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp11SyncContext8syncDataEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<int, NSCam::v3::Utils::Imp::SyncContext::syncData> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp11SyncContext8syncDataEEEEE;

/* Symbol: _ZNK5NSCam2v35Utils15ImageStreamInfo8isSecureEv */
/* Demangled: NSCam::v3::Utils::ImageStreamInfo::isSecure() const */
int _ZNK5NSCam2v35Utils15ImageStreamInfo8isSecureEv(void);

/* Symbol: _ZN5NSCam2v35Utils12UsersManager19setUserReleaseFenceEii */
/* Demangled: NSCam::v3::Utils::UsersManager::setUserReleaseFence(int, int) */
int _ZN5NSCam2v35Utils12UsersManager19setUserReleaseFenceEii(void);

/* Symbol: _ZTCN5NSCam2v35Utils28HalImageStreamBufferProviderE0_NS0_13IStreamBufferE */
/* Demangled: construction vtable for NSCam::v3::IStreamBuffer-in-NSCam::v3::Utils::HalImageStreamBufferProvider */
extern void* _ZTCN5NSCam2v35Utils28HalImageStreamBufferProviderE0_NS0_13IStreamBufferE;

/* Symbol: _ZN5NSCam2v35Utils12UsersManager21waitUserReleaseStatusENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE */
/* Demangled: NSCam::v3::Utils::UsersManager::waitUserReleaseStatus(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN5NSCam2v35Utils12UsersManager21waitUserReleaseStatusENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void);

/* Symbol: _ZN5NSCam2v35Utils15StreamBufferImp14enqueUserGraphEN7android2spINS0_13IUsersManager10IUserGraphEEE */
/* Demangled: NSCam::v3::Utils::StreamBufferImp::enqueUserGraph(android::sp<NSCam::v3::IUsersManager::IUserGraph>) */
int _ZN5NSCam2v35Utils15StreamBufferImp14enqueUserGraphEN7android2spINS0_13IUsersManager10IUserGraphEEE(void);

/* Symbol: _ZNK5NSCam2v35Utils15StreamBufferImp20getNumberOfConsumersEv */
/* Demangled: NSCam::v3::Utils::StreamBufferImp::getNumberOfConsumers() const */
int _ZNK5NSCam2v35Utils15StreamBufferImp20getNumberOfConsumersEv(void);

/* Symbol: _ZNK5NSCam2v35Utils12UsersManager33haveAllUsersReleasedOrPreReleasedEv */
/* Demangled: NSCam::v3::Utils::UsersManager::haveAllUsersReleasedOrPreReleased() const */
int _ZNK5NSCam2v35Utils12UsersManager33haveAllUsersReleasedOrPreReleasedEv(void);

/* Symbol: _ZNK7android12SortedVectorIiE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<int>::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorIiE8do_splatEPvPKvj(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v35Utils12UsersManager11MyUserGraphEEEE12do_constructEPvj */
/* Demangled: android::Vector<android::sp<NSCam::v3::Utils::UsersManager::MyUserGraph> >::do_construct(void*, unsigned int) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v35Utils12UsersManager11MyUserGraphEEEE12do_constructEPvj(void);

/* Symbol: _ZNK5NSCam2v35Utils15ImageStreamInfo11getStreamIdEv */
/* Demangled: NSCam::v3::Utils::ImageStreamInfo::getStreamId() const */
int _ZNK5NSCam2v35Utils15ImageStreamInfo11getStreamIdEv(void);

/* Symbol: _ZTv0_n84_NK5NSCam2v35Utils12UsersManager18createReleaseFenceEi */
/* Demangled: virtual thunk to NSCam::v3::Utils::UsersManager::createReleaseFence(int) const */
int _ZTv0_n84_NK5NSCam2v35Utils12UsersManager18createReleaseFenceEi(void);

/* Symbol: _ZTVN7android4ListIPNS_9ConditionEEE */
/* Demangled: vtable for android::List<android::Condition*> */
extern void* _ZTVN7android4ListIPNS_9ConditionEEE;

/* Symbol: _ZTVN5NSCam2v35Utils20StreamBufferPoolImplE */
/* Demangled: vtable for NSCam::v3::Utils::StreamBufferPoolImpl */
extern void* _ZTVN5NSCam2v35Utils20StreamBufferPoolImplE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp14SyncHelperBase11sync_resultEEEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, NSCam::v3::Utils::Imp::SyncHelperBase::sync_result> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiN5NSCam2v35Utils3Imp14SyncHelperBase11sync_resultEEEE12do_constructEPvj(void);

/* Symbol: _ZTv0_n16_N5NSCam2v35Utils3Imp14SyncHelperBaseD1Ev */
/* Demangled: virtual thunk to NSCam::v3::Utils::Imp::SyncHelperBase::~SyncHelperBase() */
int _ZTv0_n16_N5NSCam2v35Utils3Imp14SyncHelperBaseD1Ev(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBMTKCAM_STREAMUTILS_H */
