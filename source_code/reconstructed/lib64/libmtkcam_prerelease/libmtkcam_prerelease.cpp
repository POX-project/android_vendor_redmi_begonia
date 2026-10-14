/*
 * Reverse-Engineered Source for: libmtkcam_prerelease.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libmtkcam_prerelease"

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
#include "libmtkcam_prerelease.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: PreReleaseRequest::dump() */
extern "C" __attribute__((visibility("default"))) int _ZN17PreReleaseRequest4dumpEv(void) {
    ALOGD("_ZN17PreReleaseRequest4dumpEv() called");
    return 0;
}

/* Demangled: PreReleaseRequest::~PreReleaseRequest() */
extern "C" __attribute__((visibility("default"))) int _ZN17PreReleaseRequestD0Ev(void) {
    ALOGD("_ZN17PreReleaseRequestD0Ev() called");
    return 0;
}

/* Demangled: PreReleaseRequest::~PreReleaseRequest() */
extern "C" __attribute__((visibility("default"))) int _ZN17PreReleaseRequestD2Ev(void) {
    ALOGD("_ZN17PreReleaseRequestD2Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IStreamBuffer> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v313IStreamBufferEEEEEE10do_compareEPKvSA_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v313IStreamBufferEEEEEE10do_compareEPKvSA_() called");
    return 0;
}

/* Demangled: android::Vector<PreReleaseRequestMgr::RequestItem>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN20PreReleaseRequestMgr11RequestItemEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN20PreReleaseRequestMgr11RequestItemEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::Vector<PreReleaseRequestMgr::InFlightRequestItem>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN20PreReleaseRequestMgr19InFlightRequestItemEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN20PreReleaseRequestMgr19InFlightRequestItemEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: __multf3 */
extern "C" __attribute__((visibility("default"))) int __multf3(void) {
    ALOGD("__multf3() called");
    return 0;
}

/* Demangled: __subtf3 */
extern "C" __attribute__((visibility("default"))) int __subtf3(void) {
    ALOGD("__subtf3() called");
    return 0;
}

/* Demangled: PreReleaseRequest::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN17PreReleaseRequest6uninitEv(void) {
    ALOGD("_ZN17PreReleaseRequest6uninitEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IStreamBuffer> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v313IStreamBufferEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v313IStreamBufferEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<PreReleaseRequestMgr::InFlightRequestItem>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN20PreReleaseRequestMgr19InFlightRequestItemEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN20PreReleaseRequestMgr19InFlightRequestItemEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IStreamBuffer> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v313IStreamBufferEEEEEEE = NULL;

/* Demangled: PreReleaseRequest::registerStreamBuffer(android::sp<NSCam::v3::IPipelineFrame> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN17PreReleaseRequest20registerStreamBufferERKN7android2spIN5NSCam2v314IPipelineFrameEEE(void) {
    ALOGD("_ZN17PreReleaseRequest20registerStreamBufferERKN7android2spIN5NSCam2v314IPipelineFrameEEE() called");
    return 0;
}

/* Demangled: PreReleaseRequest::PreReleaseRequest(android::sp<NSCam::v3::NSPipelineContext::IPipelineContext>, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN17PreReleaseRequestC1EN7android2spIN5NSCam2v317NSPipelineContext16IPipelineContextEEEjj(void) {
    ALOGD("_ZN17PreReleaseRequestC1EN7android2spIN5NSCam2v317NSPipelineContext16IPipelineContextEEEjj() called");
    return 0;
}

/* Demangled: PreReleaseRequestMgr::setRequestFinished(unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN20PreReleaseRequestMgr18setRequestFinishedEjjj(void) {
    ALOGD("_ZN20PreReleaseRequestMgr18setRequestFinishedEjjj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::KeyedVector<long, android::sp<NSCam::v3::IStreamBuffer> > > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_11KeyedVectorIlNS_2spIN5NSCam2v313IStreamBufferEEEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_11KeyedVectorIlNS_2spIN5NSCam2v313IStreamBufferEEEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::KeyedVector<long, android::sp<NSCam::v3::IStreamBuffer> > > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_11KeyedVectorIlNS_2spIN5NSCam2v313IStreamBufferEEEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_11KeyedVectorIlNS_2spIN5NSCam2v313IStreamBufferEEEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, android::KeyedVector<long, android::sp<NSCam::v3::IStreamBuffer> > > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjNS_11KeyedVectorIlNS_2spIN5NSCam2v313IStreamBufferEEEEEEEEE = NULL;

/* Demangled: PreReleaseRequestMgr::getPreRelease() */
extern "C" __attribute__((visibility("default"))) int _ZN20PreReleaseRequestMgr13getPreReleaseEv(void) {
    ALOGD("_ZN20PreReleaseRequestMgr13getPreReleaseEv() called");
    return 0;
}

/* Demangled: PreReleaseRequestMgr::addCaptureRequest(unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN20PreReleaseRequestMgr17addCaptureRequestEjb(void) {
    ALOGD("_ZN20PreReleaseRequestMgr17addCaptureRequestEjb() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::KeyedVector<long, android::sp<NSCam::v3::IStreamBuffer> > > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_11KeyedVectorIlNS_2spIN5NSCam2v313IStreamBufferEEEEEEEE10do_compareEPKvSC_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_11KeyedVectorIlNS_2spIN5NSCam2v313IStreamBufferEEEEEEEE10do_compareEPKvSC_() called");
    return 0;
}

/* Demangled: PreReleaseRequest::PreReleaseRequest(android::sp<NSCam::v3::NSPipelineContext::IPipelineContext>, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN17PreReleaseRequestC2EN7android2spIN5NSCam2v317NSPipelineContext16IPipelineContextEEEjj(void) {
    ALOGD("_ZN17PreReleaseRequestC2EN7android2spIN5NSCam2v317NSPipelineContext16IPipelineContextEEEjj() called");
    return 0;
}

/* Demangled: __lttf2 */
extern "C" __attribute__((visibility("default"))) int __lttf2(void) {
    ALOGD("__lttf2() called");
    return 0;
}

/* Demangled: __eqtf2 */
extern "C" __attribute__((visibility("default"))) int __eqtf2(void) {
    ALOGD("__eqtf2() called");
    return 0;
}

/* Demangled: __getf2 */
extern "C" __attribute__((visibility("default"))) int __getf2(void) {
    ALOGD("__getf2() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::KeyedVector<long, android::sp<NSCam::v3::IStreamBuffer> > > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_11KeyedVectorIlNS_2spIN5NSCam2v313IStreamBufferEEEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_11KeyedVectorIlNS_2spIN5NSCam2v313IStreamBufferEEEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: PreReleaseRequestMgr::addPreReleaseRequest(unsigned int, unsigned int, int, long) */
extern "C" __attribute__((visibility("default"))) int _ZN20PreReleaseRequestMgr20addPreReleaseRequestEjjil(void) {
    ALOGD("_ZN20PreReleaseRequestMgr20addPreReleaseRequestEjjil() called");
    return 0;
}

/* Demangled: android::Vector<PreReleaseRequestMgr::RequestItem>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN20PreReleaseRequestMgr11RequestItemEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN20PreReleaseRequestMgr11RequestItemEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for PreReleaseRequest */
extern "C" __attribute__((visibility("default"))) void* _ZTV17PreReleaseRequest = NULL;

/* Demangled: PreReleaseRequestMgr::decPreRelease() */
extern "C" __attribute__((visibility("default"))) int _ZN20PreReleaseRequestMgr13decPreReleaseEv(void) {
    ALOGD("_ZN20PreReleaseRequestMgr13decPreReleaseEv() called");
    return 0;
}

/* Demangled: PreReleaseRequestMgr::setImageReaderID(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN20PreReleaseRequestMgr16setImageReaderIDEj(void) {
    ALOGD("_ZN20PreReleaseRequestMgr16setImageReaderIDEj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IStreamBuffer> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v313IStreamBufferEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v313IStreamBufferEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IStreamBuffer> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v313IStreamBufferEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v313IStreamBufferEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: __floatditf */
extern "C" __attribute__((visibility("default"))) int __floatditf(void) {
    ALOGD("__floatditf() called");
    return 0;
}

/* Demangled: PreReleaseRequest::~PreReleaseRequest() */
extern "C" __attribute__((visibility("default"))) int _ZN17PreReleaseRequestD1Ev(void) {
    ALOGD("_ZN17PreReleaseRequestD1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::KeyedVector<long, android::sp<NSCam::v3::IStreamBuffer> > > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_11KeyedVectorIlNS_2spIN5NSCam2v313IStreamBufferEEEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_11KeyedVectorIlNS_2spIN5NSCam2v313IStreamBufferEEEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: __addtf3 */
extern "C" __attribute__((visibility("default"))) int __addtf3(void) {
    ALOGD("__addtf3() called");
    return 0;
}

/* Demangled: PreReleaseRequestMgr::registerStreamBuffer(android::sp<NSCam::v3::IPipelineFrame> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN20PreReleaseRequestMgr20registerStreamBufferERKN7android2spIN5NSCam2v314IPipelineFrameEEE(void) {
    ALOGD("_ZN20PreReleaseRequestMgr20registerStreamBufferERKN7android2spIN5NSCam2v314IPipelineFrameEEE() called");
    return 0;
}

/* Demangled: PreReleaseRequestMgr::dump() */
extern "C" __attribute__((visibility("default"))) int _ZN20PreReleaseRequestMgr4dumpEv(void) {
    ALOGD("_ZN20PreReleaseRequestMgr4dumpEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::KeyedVector<long, android::sp<NSCam::v3::IStreamBuffer> > > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_11KeyedVectorIlNS_2spIN5NSCam2v313IStreamBufferEEEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_11KeyedVectorIlNS_2spIN5NSCam2v313IStreamBufferEEEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<PreReleaseRequestMgr::InFlightRequestItem>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN20PreReleaseRequestMgr19InFlightRequestItemEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN20PreReleaseRequestMgr19InFlightRequestItemEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<PreReleaseRequestMgr::RequestItem> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN20PreReleaseRequestMgr11RequestItemEEE = NULL;

/* Demangled: PreReleaseRequestMgr::createPreRelease(android::sp<NSCam::v3::NSPipelineContext::IPipelineContext>) */
extern "C" __attribute__((visibility("default"))) int _ZN20PreReleaseRequestMgr16createPreReleaseEN7android2spIN5NSCam2v317NSPipelineContext16IPipelineContextEEE(void) {
    ALOGD("_ZN20PreReleaseRequestMgr16createPreReleaseEN7android2spIN5NSCam2v317NSPipelineContext16IPipelineContextEEE() called");
    return 0;
}

/* Demangled: PreReleaseRequestMgr::addCompletedReqAndCheckCbCnt(unsigned int, unsigned int, long) */
extern "C" __attribute__((visibility("default"))) int _ZN20PreReleaseRequestMgr28addCompletedReqAndCheckCbCntEjjl(void) {
    ALOGD("_ZN20PreReleaseRequestMgr28addCompletedReqAndCheckCbCntEjjl() called");
    return 0;
}

/* Demangled: PreReleaseRequestMgr::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN20PreReleaseRequestMgr6uninitEv(void) {
    ALOGD("_ZN20PreReleaseRequestMgr6uninitEv() called");
    return 0;
}

/* Demangled: android::Vector<PreReleaseRequestMgr::InFlightRequestItem>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN20PreReleaseRequestMgr19InFlightRequestItemEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN20PreReleaseRequestMgr19InFlightRequestItemEE12do_constructEPvm() called");
    return 0;
}

/* Exported Object: vtable for PreReleaseRequestMgr */
extern "C" __attribute__((visibility("default"))) void* _ZTV20PreReleaseRequestMgr = NULL;

/* Demangled: PreReleaseRequestMgr::checkInFlightRequest() */
extern "C" __attribute__((visibility("default"))) int _ZN20PreReleaseRequestMgr20checkInFlightRequestEv(void) {
    ALOGD("_ZN20PreReleaseRequestMgr20checkInFlightRequestEv() called");
    return 0;
}

/* Demangled: PreReleaseRequestMgr::setPreReleaseRequest(android::sp<NSCam::v3::pipeline::prerelease::IPreReleaseRequest>) */
extern "C" __attribute__((visibility("default"))) int _ZN20PreReleaseRequestMgr20setPreReleaseRequestEN7android2spIN5NSCam2v38pipeline10prerelease18IPreReleaseRequestEEE(void) {
    ALOGD("_ZN20PreReleaseRequestMgr20setPreReleaseRequestEN7android2spIN5NSCam2v38pipeline10prerelease18IPreReleaseRequestEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IStreamBuffer> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v313IStreamBufferEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v313IStreamBufferEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IStreamBuffer> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v313IStreamBufferEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v313IStreamBufferEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<PreReleaseRequestMgr::RequestItem>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN20PreReleaseRequestMgr11RequestItemEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN20PreReleaseRequestMgr11RequestItemEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<PreReleaseRequestMgr::InFlightRequestItem>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN20PreReleaseRequestMgr19InFlightRequestItemEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN20PreReleaseRequestMgr19InFlightRequestItemEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: PreReleaseRequest::start() */
extern "C" __attribute__((visibility("default"))) int _ZN17PreReleaseRequest5startEv(void) {
    ALOGD("_ZN17PreReleaseRequest5startEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IStreamBuffer> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v313IStreamBufferEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v313IStreamBufferEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::Vector<PreReleaseRequestMgr::RequestItem>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN20PreReleaseRequestMgr11RequestItemEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN20PreReleaseRequestMgr11RequestItemEE10do_destroyEPvm() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<PreReleaseRequestMgr::InFlightRequestItem> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN20PreReleaseRequestMgr19InFlightRequestItemEEE = NULL;

/* Demangled: NSCam::v3::pipeline::prerelease::IPreReleaseRequestMgr::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline10prerelease21IPreReleaseRequestMgr11getInstanceEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline10prerelease21IPreReleaseRequestMgr11getInstanceEv() called");
    return 0;
}

/* Demangled: __gttf2 */
extern "C" __attribute__((visibility("default"))) int __gttf2(void) {
    ALOGD("__gttf2() called");
    return 0;
}

/* Demangled: __letf2 */
extern "C" __attribute__((visibility("default"))) int __letf2(void) {
    ALOGD("__letf2() called");
    return 0;
}

/* Demangled: __netf2 */
extern "C" __attribute__((visibility("default"))) int __netf2(void) {
    ALOGD("__netf2() called");
    return 0;
}

/* Demangled: __fe_raise_inexact */
extern "C" __attribute__((visibility("default"))) int __fe_raise_inexact(void) {
    ALOGD("__fe_raise_inexact() called");
    return 0;
}

/* Demangled: PreReleaseRequestMgr::removeInFlightRequest(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN20PreReleaseRequestMgr21removeInFlightRequestEj(void) {
    ALOGD("_ZN20PreReleaseRequestMgr21removeInFlightRequestEj() called");
    return 0;
}

/* Demangled: __unordtf2 */
extern "C" __attribute__((visibility("default"))) int __unordtf2(void) {
    ALOGD("__unordtf2() called");
    return 0;
}

/* Demangled: PreReleaseRequestMgr::incPreRelease() */
extern "C" __attribute__((visibility("default"))) int _ZN20PreReleaseRequestMgr13incPreReleaseEv(void) {
    ALOGD("_ZN20PreReleaseRequestMgr13incPreReleaseEv() called");
    return 0;
}

/* Demangled: PreReleaseRequestMgr::getPreleaseRequestCnt() */
extern "C" __attribute__((visibility("default"))) int _ZN20PreReleaseRequestMgr21getPreleaseRequestCntEv(void) {
    ALOGD("_ZN20PreReleaseRequestMgr21getPreleaseRequestCntEv() called");
    return 0;
}

/* Demangled: android::Vector<PreReleaseRequestMgr::InFlightRequestItem>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN20PreReleaseRequestMgr19InFlightRequestItemEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN20PreReleaseRequestMgr19InFlightRequestItemEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: PreReleaseRequest::waitUntilDrained() */
extern "C" __attribute__((visibility("default"))) int _ZN17PreReleaseRequest16waitUntilDrainedEv(void) {
    ALOGD("_ZN17PreReleaseRequest16waitUntilDrainedEv() called");
    return 0;
}

/* Demangled: PreReleaseRequestMgr::configBGService(NSCam::IMetadata&) */
extern "C" __attribute__((visibility("default"))) int _ZN20PreReleaseRequestMgr15configBGServiceERN5NSCam9IMetadataE(void) {
    ALOGD("_ZN20PreReleaseRequestMgr15configBGServiceERN5NSCam9IMetadataE() called");
    return 0;
}

/* Demangled: PreReleaseRequestMgr::notifyCaptureCompleted(android::sp<NSCam::v3::IPipelineFrame> const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN20PreReleaseRequestMgr22notifyCaptureCompletedERKN7android2spIN5NSCam2v314IPipelineFrameEEEj(void) {
    ALOGD("_ZN20PreReleaseRequestMgr22notifyCaptureCompletedERKN7android2spIN5NSCam2v314IPipelineFrameEEEj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::KeyedVector<long, android::sp<NSCam::v3::IStreamBuffer> > > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_11KeyedVectorIlNS_2spIN5NSCam2v313IStreamBufferEEEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_11KeyedVectorIlNS_2spIN5NSCam2v313IStreamBufferEEEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<PreReleaseRequestMgr::RequestItem>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN20PreReleaseRequestMgr11RequestItemEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN20PreReleaseRequestMgr11RequestItemEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<PreReleaseRequestMgr::RequestItem>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN20PreReleaseRequestMgr11RequestItemEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN20PreReleaseRequestMgr11RequestItemEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: __cmptf2 */
extern "C" __attribute__((visibility("default"))) int __cmptf2(void) {
    ALOGD("__cmptf2() called");
    return 0;
}

/* Demangled: __fe_getround */
extern "C" __attribute__((visibility("default"))) int __fe_getround(void) {
    ALOGD("__fe_getround() called");
    return 0;
}
