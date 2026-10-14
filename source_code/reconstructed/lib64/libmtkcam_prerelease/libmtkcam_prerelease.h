/*
 * Reverse-Engineered ABI Specification for: libmtkcam_prerelease.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libmtkcam_prerelease.so
 */

#ifndef BEGONIA_RE_LIBMTKCAM_PRERELEASE_H
#define BEGONIA_RE_LIBMTKCAM_PRERELEASE_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN17PreReleaseRequest4dumpEv */
/* Demangled: PreReleaseRequest::dump() */
int _ZN17PreReleaseRequest4dumpEv(void);

/* Symbol: _ZN17PreReleaseRequestD0Ev */
/* Demangled: PreReleaseRequest::~PreReleaseRequest() */
int _ZN17PreReleaseRequestD0Ev(void);

/* Symbol: _ZN17PreReleaseRequestD2Ev */
/* Demangled: PreReleaseRequest::~PreReleaseRequest() */
int _ZN17PreReleaseRequestD2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v313IStreamBufferEEEEEE10do_compareEPKvSA_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IStreamBuffer> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v313IStreamBufferEEEEEE10do_compareEPKvSA_(void);

/* Symbol: _ZNK7android6VectorIN20PreReleaseRequestMgr11RequestItemEE12do_constructEPvm */
/* Demangled: android::Vector<PreReleaseRequestMgr::RequestItem>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN20PreReleaseRequestMgr11RequestItemEE12do_constructEPvm(void);

/* Symbol: _ZNK7android6VectorIN20PreReleaseRequestMgr19InFlightRequestItemEE7do_copyEPvPKvm */
/* Demangled: android::Vector<PreReleaseRequestMgr::InFlightRequestItem>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN20PreReleaseRequestMgr19InFlightRequestItemEE7do_copyEPvPKvm(void);

/* Symbol: __multf3 */
/* Demangled: __multf3 */
int __multf3(void);

/* Symbol: __subtf3 */
/* Demangled: __subtf3 */
int __subtf3(void);

/* Symbol: _ZN17PreReleaseRequest6uninitEv */
/* Demangled: PreReleaseRequest::uninit() */
int _ZN17PreReleaseRequest6uninitEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v313IStreamBufferEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IStreamBuffer> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v313IStreamBufferEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN20PreReleaseRequestMgr19InFlightRequestItemEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<PreReleaseRequestMgr::InFlightRequestItem>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN20PreReleaseRequestMgr19InFlightRequestItemEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v313IStreamBufferEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IStreamBuffer> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v313IStreamBufferEEEEEEE;

/* Symbol: _ZN17PreReleaseRequest20registerStreamBufferERKN7android2spIN5NSCam2v314IPipelineFrameEEE */
/* Demangled: PreReleaseRequest::registerStreamBuffer(android::sp<NSCam::v3::IPipelineFrame> const&) */
int _ZN17PreReleaseRequest20registerStreamBufferERKN7android2spIN5NSCam2v314IPipelineFrameEEE(void);

/* Symbol: _ZN17PreReleaseRequestC1EN7android2spIN5NSCam2v317NSPipelineContext16IPipelineContextEEEjj */
/* Demangled: PreReleaseRequest::PreReleaseRequest(android::sp<NSCam::v3::NSPipelineContext::IPipelineContext>, unsigned int, unsigned int) */
int _ZN17PreReleaseRequestC1EN7android2spIN5NSCam2v317NSPipelineContext16IPipelineContextEEEjj(void);

/* Symbol: _ZN20PreReleaseRequestMgr18setRequestFinishedEjjj */
/* Demangled: PreReleaseRequestMgr::setRequestFinished(unsigned int, unsigned int, unsigned int) */
int _ZN20PreReleaseRequestMgr18setRequestFinishedEjjj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_11KeyedVectorIlNS_2spIN5NSCam2v313IStreamBufferEEEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::KeyedVector<long, android::sp<NSCam::v3::IStreamBuffer> > > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_11KeyedVectorIlNS_2spIN5NSCam2v313IStreamBufferEEEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_11KeyedVectorIlNS_2spIN5NSCam2v313IStreamBufferEEEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::KeyedVector<long, android::sp<NSCam::v3::IStreamBuffer> > > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_11KeyedVectorIlNS_2spIN5NSCam2v313IStreamBufferEEEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIjNS_11KeyedVectorIlNS_2spIN5NSCam2v313IStreamBufferEEEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, android::KeyedVector<long, android::sp<NSCam::v3::IStreamBuffer> > > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjNS_11KeyedVectorIlNS_2spIN5NSCam2v313IStreamBufferEEEEEEEEE;

/* Symbol: _ZN20PreReleaseRequestMgr13getPreReleaseEv */
/* Demangled: PreReleaseRequestMgr::getPreRelease() */
int _ZN20PreReleaseRequestMgr13getPreReleaseEv(void);

/* Symbol: _ZN20PreReleaseRequestMgr17addCaptureRequestEjb */
/* Demangled: PreReleaseRequestMgr::addCaptureRequest(unsigned int, bool) */
int _ZN20PreReleaseRequestMgr17addCaptureRequestEjb(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_11KeyedVectorIlNS_2spIN5NSCam2v313IStreamBufferEEEEEEEE10do_compareEPKvSC_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::KeyedVector<long, android::sp<NSCam::v3::IStreamBuffer> > > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_11KeyedVectorIlNS_2spIN5NSCam2v313IStreamBufferEEEEEEEE10do_compareEPKvSC_(void);

/* Symbol: _ZN17PreReleaseRequestC2EN7android2spIN5NSCam2v317NSPipelineContext16IPipelineContextEEEjj */
/* Demangled: PreReleaseRequest::PreReleaseRequest(android::sp<NSCam::v3::NSPipelineContext::IPipelineContext>, unsigned int, unsigned int) */
int _ZN17PreReleaseRequestC2EN7android2spIN5NSCam2v317NSPipelineContext16IPipelineContextEEEjj(void);

/* Symbol: __lttf2 */
/* Demangled: __lttf2 */
int __lttf2(void);

/* Symbol: __eqtf2 */
/* Demangled: __eqtf2 */
int __eqtf2(void);

/* Symbol: __getf2 */
/* Demangled: __getf2 */
int __getf2(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_11KeyedVectorIlNS_2spIN5NSCam2v313IStreamBufferEEEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::KeyedVector<long, android::sp<NSCam::v3::IStreamBuffer> > > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_11KeyedVectorIlNS_2spIN5NSCam2v313IStreamBufferEEEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN20PreReleaseRequestMgr20addPreReleaseRequestEjjil */
/* Demangled: PreReleaseRequestMgr::addPreReleaseRequest(unsigned int, unsigned int, int, long) */
int _ZN20PreReleaseRequestMgr20addPreReleaseRequestEjjil(void);

/* Symbol: _ZNK7android6VectorIN20PreReleaseRequestMgr11RequestItemEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<PreReleaseRequestMgr::RequestItem>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN20PreReleaseRequestMgr11RequestItemEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZTV17PreReleaseRequest */
/* Demangled: vtable for PreReleaseRequest */
extern void* _ZTV17PreReleaseRequest;

/* Symbol: _ZN20PreReleaseRequestMgr13decPreReleaseEv */
/* Demangled: PreReleaseRequestMgr::decPreRelease() */
int _ZN20PreReleaseRequestMgr13decPreReleaseEv(void);

/* Symbol: _ZN20PreReleaseRequestMgr16setImageReaderIDEj */
/* Demangled: PreReleaseRequestMgr::setImageReaderID(unsigned int) */
int _ZN20PreReleaseRequestMgr16setImageReaderIDEj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v313IStreamBufferEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IStreamBuffer> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v313IStreamBufferEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v313IStreamBufferEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IStreamBuffer> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v313IStreamBufferEEEEEE7do_copyEPvPKvm(void);

/* Symbol: __floatditf */
/* Demangled: __floatditf */
int __floatditf(void);

/* Symbol: _ZN17PreReleaseRequestD1Ev */
/* Demangled: PreReleaseRequest::~PreReleaseRequest() */
int _ZN17PreReleaseRequestD1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_11KeyedVectorIlNS_2spIN5NSCam2v313IStreamBufferEEEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::KeyedVector<long, android::sp<NSCam::v3::IStreamBuffer> > > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_11KeyedVectorIlNS_2spIN5NSCam2v313IStreamBufferEEEEEEEE12do_constructEPvm(void);

/* Symbol: __addtf3 */
/* Demangled: __addtf3 */
int __addtf3(void);

/* Symbol: _ZN20PreReleaseRequestMgr20registerStreamBufferERKN7android2spIN5NSCam2v314IPipelineFrameEEE */
/* Demangled: PreReleaseRequestMgr::registerStreamBuffer(android::sp<NSCam::v3::IPipelineFrame> const&) */
int _ZN20PreReleaseRequestMgr20registerStreamBufferERKN7android2spIN5NSCam2v314IPipelineFrameEEE(void);

/* Symbol: _ZN20PreReleaseRequestMgr4dumpEv */
/* Demangled: PreReleaseRequestMgr::dump() */
int _ZN20PreReleaseRequestMgr4dumpEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_11KeyedVectorIlNS_2spIN5NSCam2v313IStreamBufferEEEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::KeyedVector<long, android::sp<NSCam::v3::IStreamBuffer> > > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_11KeyedVectorIlNS_2spIN5NSCam2v313IStreamBufferEEEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN20PreReleaseRequestMgr19InFlightRequestItemEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<PreReleaseRequestMgr::InFlightRequestItem>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN20PreReleaseRequestMgr19InFlightRequestItemEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZTVN7android6VectorIN20PreReleaseRequestMgr11RequestItemEEE */
/* Demangled: vtable for android::Vector<PreReleaseRequestMgr::RequestItem> */
extern void* _ZTVN7android6VectorIN20PreReleaseRequestMgr11RequestItemEEE;

/* Symbol: _ZN20PreReleaseRequestMgr16createPreReleaseEN7android2spIN5NSCam2v317NSPipelineContext16IPipelineContextEEE */
/* Demangled: PreReleaseRequestMgr::createPreRelease(android::sp<NSCam::v3::NSPipelineContext::IPipelineContext>) */
int _ZN20PreReleaseRequestMgr16createPreReleaseEN7android2spIN5NSCam2v317NSPipelineContext16IPipelineContextEEE(void);

/* Symbol: _ZN20PreReleaseRequestMgr28addCompletedReqAndCheckCbCntEjjl */
/* Demangled: PreReleaseRequestMgr::addCompletedReqAndCheckCbCnt(unsigned int, unsigned int, long) */
int _ZN20PreReleaseRequestMgr28addCompletedReqAndCheckCbCntEjjl(void);

/* Symbol: _ZN20PreReleaseRequestMgr6uninitEv */
/* Demangled: PreReleaseRequestMgr::uninit() */
int _ZN20PreReleaseRequestMgr6uninitEv(void);

/* Symbol: _ZNK7android6VectorIN20PreReleaseRequestMgr19InFlightRequestItemEE12do_constructEPvm */
/* Demangled: android::Vector<PreReleaseRequestMgr::InFlightRequestItem>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN20PreReleaseRequestMgr19InFlightRequestItemEE12do_constructEPvm(void);

/* Symbol: _ZTV20PreReleaseRequestMgr */
/* Demangled: vtable for PreReleaseRequestMgr */
extern void* _ZTV20PreReleaseRequestMgr;

/* Symbol: _ZN20PreReleaseRequestMgr20checkInFlightRequestEv */
/* Demangled: PreReleaseRequestMgr::checkInFlightRequest() */
int _ZN20PreReleaseRequestMgr20checkInFlightRequestEv(void);

/* Symbol: _ZN20PreReleaseRequestMgr20setPreReleaseRequestEN7android2spIN5NSCam2v38pipeline10prerelease18IPreReleaseRequestEEE */
/* Demangled: PreReleaseRequestMgr::setPreReleaseRequest(android::sp<NSCam::v3::pipeline::prerelease::IPreReleaseRequest>) */
int _ZN20PreReleaseRequestMgr20setPreReleaseRequestEN7android2spIN5NSCam2v38pipeline10prerelease18IPreReleaseRequestEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v313IStreamBufferEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IStreamBuffer> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v313IStreamBufferEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v313IStreamBufferEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IStreamBuffer> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v313IStreamBufferEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN20PreReleaseRequestMgr11RequestItemEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<PreReleaseRequestMgr::RequestItem>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN20PreReleaseRequestMgr11RequestItemEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN20PreReleaseRequestMgr19InFlightRequestItemEE10do_destroyEPvm */
/* Demangled: android::Vector<PreReleaseRequestMgr::InFlightRequestItem>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN20PreReleaseRequestMgr19InFlightRequestItemEE10do_destroyEPvm(void);

/* Symbol: _ZN17PreReleaseRequest5startEv */
/* Demangled: PreReleaseRequest::start() */
int _ZN17PreReleaseRequest5startEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v313IStreamBufferEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IStreamBuffer> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v313IStreamBufferEEEEEE12do_constructEPvm(void);

/* Symbol: _ZNK7android6VectorIN20PreReleaseRequestMgr11RequestItemEE10do_destroyEPvm */
/* Demangled: android::Vector<PreReleaseRequestMgr::RequestItem>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN20PreReleaseRequestMgr11RequestItemEE10do_destroyEPvm(void);

/* Symbol: _ZTVN7android6VectorIN20PreReleaseRequestMgr19InFlightRequestItemEEE */
/* Demangled: vtable for android::Vector<PreReleaseRequestMgr::InFlightRequestItem> */
extern void* _ZTVN7android6VectorIN20PreReleaseRequestMgr19InFlightRequestItemEEE;

/* Symbol: _ZN5NSCam2v38pipeline10prerelease21IPreReleaseRequestMgr11getInstanceEv */
/* Demangled: NSCam::v3::pipeline::prerelease::IPreReleaseRequestMgr::getInstance() */
int _ZN5NSCam2v38pipeline10prerelease21IPreReleaseRequestMgr11getInstanceEv(void);

/* Symbol: __gttf2 */
/* Demangled: __gttf2 */
int __gttf2(void);

/* Symbol: __letf2 */
/* Demangled: __letf2 */
int __letf2(void);

/* Symbol: __netf2 */
/* Demangled: __netf2 */
int __netf2(void);

/* Symbol: __fe_raise_inexact */
/* Demangled: __fe_raise_inexact */
int __fe_raise_inexact(void);

/* Symbol: _ZN20PreReleaseRequestMgr21removeInFlightRequestEj */
/* Demangled: PreReleaseRequestMgr::removeInFlightRequest(unsigned int) */
int _ZN20PreReleaseRequestMgr21removeInFlightRequestEj(void);

/* Symbol: __unordtf2 */
/* Demangled: __unordtf2 */
int __unordtf2(void);

/* Symbol: _ZN20PreReleaseRequestMgr13incPreReleaseEv */
/* Demangled: PreReleaseRequestMgr::incPreRelease() */
int _ZN20PreReleaseRequestMgr13incPreReleaseEv(void);

/* Symbol: _ZN20PreReleaseRequestMgr21getPreleaseRequestCntEv */
/* Demangled: PreReleaseRequestMgr::getPreleaseRequestCnt() */
int _ZN20PreReleaseRequestMgr21getPreleaseRequestCntEv(void);

/* Symbol: _ZNK7android6VectorIN20PreReleaseRequestMgr19InFlightRequestItemEE8do_splatEPvPKvm */
/* Demangled: android::Vector<PreReleaseRequestMgr::InFlightRequestItem>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN20PreReleaseRequestMgr19InFlightRequestItemEE8do_splatEPvPKvm(void);

/* Symbol: _ZN17PreReleaseRequest16waitUntilDrainedEv */
/* Demangled: PreReleaseRequest::waitUntilDrained() */
int _ZN17PreReleaseRequest16waitUntilDrainedEv(void);

/* Symbol: _ZN20PreReleaseRequestMgr15configBGServiceERN5NSCam9IMetadataE */
/* Demangled: PreReleaseRequestMgr::configBGService(NSCam::IMetadata&) */
int _ZN20PreReleaseRequestMgr15configBGServiceERN5NSCam9IMetadataE(void);

/* Symbol: _ZN20PreReleaseRequestMgr22notifyCaptureCompletedERKN7android2spIN5NSCam2v314IPipelineFrameEEEj */
/* Demangled: PreReleaseRequestMgr::notifyCaptureCompleted(android::sp<NSCam::v3::IPipelineFrame> const&, unsigned int) */
int _ZN20PreReleaseRequestMgr22notifyCaptureCompletedERKN7android2spIN5NSCam2v314IPipelineFrameEEEj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_11KeyedVectorIlNS_2spIN5NSCam2v313IStreamBufferEEEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::KeyedVector<long, android::sp<NSCam::v3::IStreamBuffer> > > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_11KeyedVectorIlNS_2spIN5NSCam2v313IStreamBufferEEEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN20PreReleaseRequestMgr11RequestItemEE7do_copyEPvPKvm */
/* Demangled: android::Vector<PreReleaseRequestMgr::RequestItem>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN20PreReleaseRequestMgr11RequestItemEE7do_copyEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN20PreReleaseRequestMgr11RequestItemEE8do_splatEPvPKvm */
/* Demangled: android::Vector<PreReleaseRequestMgr::RequestItem>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN20PreReleaseRequestMgr11RequestItemEE8do_splatEPvPKvm(void);

/* Symbol: __cmptf2 */
/* Demangled: __cmptf2 */
int __cmptf2(void);

/* Symbol: __fe_getround */
/* Demangled: __fe_getround */
int __fe_getround(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBMTKCAM_PRERELEASE_H */
