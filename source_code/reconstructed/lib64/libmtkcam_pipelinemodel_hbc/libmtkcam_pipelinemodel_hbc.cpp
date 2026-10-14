/*
 * Reverse-Engineered Source for: libmtkcam_pipelinemodel_hbc.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libmtkcam_pipelinemodel_hbc"

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
#include "libmtkcam_pipelinemodel_hbc.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: NSCam::v3::BufferPool::do_construct(android::sp<NSCam::IImageBufferHeap>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v310BufferPool12do_constructERN7android2spINS_16IImageBufferHeapEEE(void) {
    ALOGD("_ZN5NSCam2v310BufferPool12do_constructERN7android2spINS_16IImageBufferHeapEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::StreamBufferProducer::setMaxBufferCount(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v320StreamBufferProducer17setMaxBufferCountEm(void) {
    ALOGD("_ZN5NSCam2v320StreamBufferProducer17setMaxBufferCountEm() called");
    return 0;
}

/* Demangled: NSCam::v3::StreamBufferProducer::dump() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v320StreamBufferProducer4dumpEv(void) {
    ALOGD("_ZN5NSCam2v320StreamBufferProducer4dumpEv() called");
    return 0;
}

/* Demangled: NSCam::v3::HistoryBufferContainerImp::returnBufferSets(android::Vector<NSCam::v3::IHistoryBufferContainer::BufferSet_T>&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v325HistoryBufferContainerImp16returnBufferSetsERN7android6VectorINS0_23IHistoryBufferContainer11BufferSet_TEEEj(void) {
    ALOGD("_ZN5NSCam2v325HistoryBufferContainerImp16returnBufferSetsERN7android6VectorINS0_23IHistoryBufferContainer11BufferSet_TEEEj() called");
    return 0;
}

/* Demangled: NSCam::v3::HistoryBufferContainerImp::acquireBuffersByRequiredSetLocked(android::Vector<NSCam::v3::IHistoryBufferContainer::BufferSet_T>&, unsigned int, NSCam::v3::IHistoryBufferContainer::StreamIds_T const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v325HistoryBufferContainerImp33acquireBuffersByRequiredSetLockedERN7android6VectorINS0_23IHistoryBufferContainer11BufferSet_TEEEjRKNS4_11StreamIds_TE(void) {
    ALOGD("_ZN5NSCam2v325HistoryBufferContainerImp33acquireBuffersByRequiredSetLockedERN7android6VectorINS0_23IHistoryBufferContainer11BufferSet_TEEEjRKNS4_11StreamIds_TE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::v3::HistoryBufferContainerImp::Status_T> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam2v325HistoryBufferContainerImp8Status_TEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam2v325HistoryBufferContainerImp8Status_TEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::v3::HistoryBufferContainerImp::HistoryBufferSet_T> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp18HistoryBufferSet_TEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp18HistoryBufferSet_TEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::HistoryBufferContainerImp::ImageItem_T> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp11ImageItem_TEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp11ImageItem_TEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::HistoryBufferContainerImp::dumpAcquiredLocked() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v325HistoryBufferContainerImp18dumpAcquiredLockedEv(void) {
    ALOGD("_ZN5NSCam2v325HistoryBufferContainerImp18dumpAcquiredLockedEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE10do_compareEPKvSA_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE10do_compareEPKvSA_() called");
    return 0;
}

/* Demangled: android::Vector<unsigned int>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIjE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIjE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::v3::HistoryBufferContainerImp::AcquiredData_T> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp14AcquiredData_TEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp14AcquiredData_TEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::v3::HistoryBufferContainerImp::AcquiredData_T> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp14AcquiredData_TEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp14AcquiredData_TEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::HistoryBufferContainerImp::MetaItem_T> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp10MetaItem_TEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp10MetaItem_TEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::HistoryBufferContainerImp::ImageItem_T> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp11ImageItem_TEEEE10do_compareEPKvS9_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp11ImageItem_TEEEE10do_compareEPKvS9_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::v3::HistoryBufferContainerImp::HistoryBufferSet_T> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp18HistoryBufferSet_TEEEEEEE = NULL;

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, android::Vector<NSCam::v3::Utils::HalImageStreamBuffer*> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjNS_6VectorIPN5NSCam2v35Utils20HalImageStreamBufferEEEEEEE = NULL;

/* Demangled: NSCam::v3::HistoryBufferContainerImp::clear() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v325HistoryBufferContainerImp5clearEv(void) {
    ALOGD("_ZN5NSCam2v325HistoryBufferContainerImp5clearEv() called");
    return 0;
}

/* Demangled: NSCam::v3::HistoryBufferContainerImp::endConfigStreams() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v325HistoryBufferContainerImp16endConfigStreamsEv(void) {
    ALOGD("_ZN5NSCam2v325HistoryBufferContainerImp16endConfigStreamsEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Exported Object: VTT for NSCam::v3::HistoryBufferContainerImp */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam2v325HistoryBufferContainerImpE = NULL;

/* Demangled: NSCam::v3::BufferPool::returnBufferToPool_l(char const*, android::sp<NSCam::IImageBufferHeap>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v310BufferPool20returnBufferToPool_lEPKcN7android2spINS_16IImageBufferHeapEEE(void) {
    ALOGD("_ZN5NSCam2v310BufferPool20returnBufferToPool_lEPKcN7android2spINS_16IImageBufferHeapEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::HistoryBufferContainerImp::ImageItem_T> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp11ImageItem_TEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp11ImageItem_TEEEE12do_constructEPvm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::HistoryBufferContainerImp::AcquiredData_T */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v325HistoryBufferContainerImp14AcquiredData_TE = NULL;

/* Demangled: NSCam::v3::BufferPool::dumpPool() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v310BufferPool8dumpPoolEv(void) {
    ALOGD("_ZNK5NSCam2v310BufferPool8dumpPoolEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::StreamBufferProducer */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v320StreamBufferProducerE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::Vector<NSCam::v3::Utils::HalImageStreamBuffer*> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_6VectorIPN5NSCam2v35Utils20HalImageStreamBufferEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_6VectorIPN5NSCam2v35Utils20HalImageStreamBufferEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::HistoryBufferContainerImp::MetaItem_T> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp10MetaItem_TEEEE10do_compareEPKvS9_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp10MetaItem_TEEEE10do_compareEPKvS9_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::HistoryBufferContainerImp::ImageItem_T> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp11ImageItem_TEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp11ImageItem_TEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEEE = NULL;

/* Demangled: NSCam::v3::StreamBufferProducer::releaseStreamBuffer(android::sp<NSCam::v3::Utils::HalImageStreamBuffer>, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v320StreamBufferProducer19releaseStreamBufferEN7android2spINS0_5Utils20HalImageStreamBufferEEEj(void) {
    ALOGD("_ZN5NSCam2v320StreamBufferProducer19releaseStreamBufferEN7android2spINS0_5Utils20HalImageStreamBufferEEEj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::v3::HistoryBufferContainerImp::HistoryBufferSet_T> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp18HistoryBufferSet_TEEEEEE10do_compareEPKvSB_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp18HistoryBufferSet_TEEEEEE10do_compareEPKvSB_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::HistoryBufferContainerImp::MetaItem_T> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp10MetaItem_TEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp10MetaItem_TEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::v3::BufferPool::getBufferFromPool_l(char const*, android::sp<NSCam::IImageBufferHeap>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v310BufferPool19getBufferFromPool_lEPKcRN7android2spINS_16IImageBufferHeapEEE(void) {
    ALOGD("_ZN5NSCam2v310BufferPool19getBufferFromPool_lEPKcRN7android2spINS_16IImageBufferHeapEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::HistoryBufferContainerImp::setBufferSize(android::KeyedVector<long, unsigned long> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v325HistoryBufferContainerImp13setBufferSizeERKN7android11KeyedVectorIlmEE(void) {
    ALOGD("_ZN5NSCam2v325HistoryBufferContainerImp13setBufferSizeERKN7android11KeyedVectorIlmEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::Vector<NSCam::v3::Utils::HalImageStreamBuffer*> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_6VectorIPN5NSCam2v35Utils20HalImageStreamBufferEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_6VectorIPN5NSCam2v35Utils20HalImageStreamBufferEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<long, NSCam::v3::HistoryBufferContainerImp::MetaItem_T> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp10MetaItem_TEEEEE = NULL;

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<long, NSCam::v3::HistoryBufferContainerImp::ImageItem_T> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp11ImageItem_TEEEEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::v3::Utils::HalImageStreamBuffer*, android::sp<NSCam::IImageBufferHeap> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferENS_2spINS2_16IImageBufferHeapEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferENS_2spINS2_16IImageBufferHeapEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::v3::HistoryBufferContainerImp::AcquiredData_T> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp14AcquiredData_TEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp14AcquiredData_TEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::Utils::HalImageStreamBuffer*>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIPN5NSCam2v35Utils20HalImageStreamBufferEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIPN5NSCam2v35Utils20HalImageStreamBufferEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::Utils::HalImageStreamBuffer*>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIPN5NSCam2v35Utils20HalImageStreamBufferEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIPN5NSCam2v35Utils20HalImageStreamBufferEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::HistoryBufferContainerImp::cancelBufferSet(NSCam::v3::IHistoryBufferContainer::BufferSet_T&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v325HistoryBufferContainerImp15cancelBufferSetERNS0_23IHistoryBufferContainer11BufferSet_TEj(void) {
    ALOGD("_ZN5NSCam2v325HistoryBufferContainerImp15cancelBufferSetERNS0_23IHistoryBufferContainer11BufferSet_TEj() called");
    return 0;
}

/* Demangled: NSCam::v3::HistoryBufferContainerImp::releaseHistoryBufferLocked(android::sp<NSCam::v3::HistoryBufferContainerImp::HistoryBufferSet_T>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v325HistoryBufferContainerImp26releaseHistoryBufferLockedEN7android2spINS1_18HistoryBufferSet_TEEE(void) {
    ALOGD("_ZN5NSCam2v325HistoryBufferContainerImp26releaseHistoryBufferLockedEN7android2spINS1_18HistoryBufferSet_TEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::v3::Utils::HalImageStreamBuffer*, unsigned int> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferEjEEE10do_compareEPKvSA_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferEjEEE10do_compareEPKvSA_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::v3::Utils::HalImageStreamBuffer*, unsigned int> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferEjEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferEjEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::v3::HistoryBufferContainerImp::AcquiredData_T> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp14AcquiredData_TEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp14AcquiredData_TEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::v3::HistoryBufferContainerImp::AcquiredData_T> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp14AcquiredData_TEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp14AcquiredData_TEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::Vector<NSCam::v3::Utils::HalImageStreamBuffer*> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_6VectorIPN5NSCam2v35Utils20HalImageStreamBufferEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_6VectorIPN5NSCam2v35Utils20HalImageStreamBufferEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::BufferPool::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5NSCam2v310BufferPool15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n40_N5NSCam2v310BufferPool15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: NSCam::v3::HistoryBufferContainerImp::cancelBufferSets(android::Vector<NSCam::v3::IHistoryBufferContainer::BufferSet_T>&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v325HistoryBufferContainerImp16cancelBufferSetsERN7android6VectorINS0_23IHistoryBufferContainer11BufferSet_TEEEj(void) {
    ALOGD("_ZN5NSCam2v325HistoryBufferContainerImp16cancelBufferSetsERN7android6VectorINS0_23IHistoryBufferContainer11BufferSet_TEEEj() called");
    return 0;
}

/* Demangled: NSCam::v3::HistoryBufferContainerImp::getAvailableRequestList(android::Vector<unsigned int>&, NSCam::v3::IHistoryBufferContainer::StreamIds_T const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v325HistoryBufferContainerImp23getAvailableRequestListERN7android6VectorIjEERKNS0_23IHistoryBufferContainer11StreamIds_TE(void) {
    ALOGD("_ZN5NSCam2v325HistoryBufferContainerImp23getAvailableRequestListERN7android6VectorIjEERKNS0_23IHistoryBufferContainer11StreamIds_TE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::v3::Utils::HalImageStreamBuffer*, android::sp<NSCam::IImageBufferHeap> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferENS_2spINS2_16IImageBufferHeapEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferENS_2spINS2_16IImageBufferHeapEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::v3::Utils::HalImageStreamBuffer*, android::sp<NSCam::IImageBufferHeap> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferENS_2spINS2_16IImageBufferHeapEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferENS_2spINS2_16IImageBufferHeapEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::HistoryBufferContainerImp::MetaItem_T> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp10MetaItem_TEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp10MetaItem_TEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::List<android::sp<NSCam::IImageBufferHeap> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android4ListINS_2spIN5NSCam16IImageBufferHeapEEEEE = NULL;

/* Demangled: NSCam::v3::HistoryBufferContainerImp::beginConfigStreams(android::sp<NSCam::v3::IStreamInfoSet> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v325HistoryBufferContainerImp18beginConfigStreamsERKN7android2spINS0_14IStreamInfoSetEEE(void) {
    ALOGD("_ZN5NSCam2v325HistoryBufferContainerImp18beginConfigStreamsERKN7android2spINS0_14IStreamInfoSetEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::HistoryBufferContainerImp::enqueStreamBufferOfAcquiredDataLocked(android::sp<NSCam::v3::Utils::HalImageStreamBuffer>, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v325HistoryBufferContainerImp37enqueStreamBufferOfAcquiredDataLockedEN7android2spINS0_5Utils20HalImageStreamBufferEEEj(void) {
    ALOGD("_ZN5NSCam2v325HistoryBufferContainerImp37enqueStreamBufferOfAcquiredDataLockedEN7android2spINS0_5Utils20HalImageStreamBufferEEEj() called");
    return 0;
}

/* Demangled: NSCam::v3::HistoryBufferContainerImp::HistoryBufferContainerImp(int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v325HistoryBufferContainerImpC1EiRKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZN5NSCam2v325HistoryBufferContainerImpC1EiRKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::HistoryBufferContainerImp::acquireBufferSetsOfList(android::Vector<unsigned int> const&, android::Vector<NSCam::v3::IHistoryBufferContainer::BufferSet_T>&, unsigned int, NSCam::v3::IHistoryBufferContainer::StreamIds_T const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v325HistoryBufferContainerImp23acquireBufferSetsOfListERKN7android6VectorIjEERNS3_INS0_23IHistoryBufferContainer11BufferSet_TEEEjRKNS7_11StreamIds_TE(void) {
    ALOGD("_ZN5NSCam2v325HistoryBufferContainerImp23acquireBufferSetsOfListERKN7android6VectorIjEERNS3_INS0_23IHistoryBufferContainer11BufferSet_TEEEjRKNS7_11StreamIds_TE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::Vector<NSCam::v3::Utils::HalImageStreamBuffer*> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_6VectorIPN5NSCam2v35Utils20HalImageStreamBufferEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_6VectorIPN5NSCam2v35Utils20HalImageStreamBufferEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::HistoryBufferContainerImp::ImageItem_T> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp11ImageItem_TEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp11ImageItem_TEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::StreamBufferProducer> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v320StreamBufferProducerEEEEEE10do_compareEPKvSA_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v320StreamBufferProducerEEEEEE10do_compareEPKvSA_() called");
    return 0;
}

/* Demangled: NSCam::v3::BufferPool::releaseToPool(char const*, unsigned int, android::sp<NSCam::IImageBufferHeap>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v310BufferPool13releaseToPoolEPKcjN7android2spINS_16IImageBufferHeapEEE(void) {
    ALOGD("_ZN5NSCam2v310BufferPool13releaseToPoolEPKcjN7android2spINS_16IImageBufferHeapEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::BufferPool::allocateBuffer(char const*, unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v310BufferPool14allocateBufferEPKcmm(void) {
    ALOGD("_ZN5NSCam2v310BufferPool14allocateBufferEPKcmm() called");
    return 0;
}

/* Demangled: NSCam::v3::StreamBufferProducer::initProducer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v320StreamBufferProducer12initProducerEv(void) {
    ALOGD("_ZN5NSCam2v320StreamBufferProducer12initProducerEv() called");
    return 0;
}

/* Demangled: NSCam::v3::StreamBufferProducer::setBufferPool(android::sp<NSCam::v3::IBufferPool>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v320StreamBufferProducer13setBufferPoolEN7android2spINS0_11IBufferPoolEEE(void) {
    ALOGD("_ZN5NSCam2v320StreamBufferProducer13setBufferPoolEN7android2spINS0_11IBufferPoolEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::v3::HistoryBufferContainerImp::HistoryBufferSet_T> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp18HistoryBufferSet_TEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp18HistoryBufferSet_TEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::Vector<NSCam::v3::Utils::HalImageStreamBuffer*> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_6VectorIPN5NSCam2v35Utils20HalImageStreamBufferEEEEEE10do_compareEPKvSC_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_6VectorIPN5NSCam2v35Utils20HalImageStreamBufferEEEEEE10do_compareEPKvSC_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::Vector<NSCam::v3::Utils::HalImageStreamBuffer*> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_6VectorIPN5NSCam2v35Utils20HalImageStreamBufferEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_6VectorIPN5NSCam2v35Utils20HalImageStreamBufferEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::IBufferPool-in-NSCam::v3::BufferPool */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v310BufferPoolE0_NS0_11IBufferPoolE = NULL;

/* Demangled: NSCam::v3::HistoryBufferContainerImp::dumpProducerInfoLocked() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v325HistoryBufferContainerImp22dumpProducerInfoLockedEv(void) {
    ALOGD("_ZN5NSCam2v325HistoryBufferContainerImp22dumpProducerInfoLockedEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::v3::HistoryBufferContainerImp::Status_T> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam2v325HistoryBufferContainerImp8Status_TEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam2v325HistoryBufferContainerImp8Status_TEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<unsigned int>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIjE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIjE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::v3::HistoryBufferContainerImp::registerFrame(unsigned int, bool, std::__1::pair<bool, std::__1::vector<long, std::__1::allocator<long> > > const&, std::__1::pair<bool, std::__1::vector<long, std::__1::allocator<long> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v325HistoryBufferContainerImp13registerFrameEjbRKNSt3__14pairIbNS2_6vectorIlNS2_9allocatorIlEEEEEESA_(void) {
    ALOGD("_ZN5NSCam2v325HistoryBufferContainerImp13registerFrameEjbRKNSt3__14pairIbNS2_6vectorIlNS2_9allocatorIlEEEEEESA_() called");
    return 0;
}

/* Demangled: NSCam::v3::HistoryBufferContainerImp::setBufferPool(android::KeyedVector<long, android::sp<NSCam::v3::IBufferPool> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v325HistoryBufferContainerImp13setBufferPoolERKN7android11KeyedVectorIlNS2_2spINS0_11IBufferPoolEEEEE(void) {
    ALOGD("_ZN5NSCam2v325HistoryBufferContainerImp13setBufferPoolERKN7android11KeyedVectorIlNS2_2spINS0_11IBufferPoolEEEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::HistoryBufferContainerImp::enqueMetaBuffers(android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> > const&, android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> > const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v325HistoryBufferContainerImp16enqueMetaBuffersERKN7android6VectorINS2_2spINS0_17IMetaStreamBufferEEEEES9_j(void) {
    ALOGD("_ZN5NSCam2v325HistoryBufferContainerImp16enqueMetaBuffersERKN7android6VectorINS2_2spINS0_17IMetaStreamBufferEEEEES9_j() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::v3::HistoryBufferContainerImp::HistoryBufferSet_T> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp18HistoryBufferSet_TEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp18HistoryBufferSet_TEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::HistoryBufferContainerImp::MetaItem_T> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp10MetaItem_TEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp10MetaItem_TEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::BufferPool::poolName() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v310BufferPool8poolNameEv(void) {
    ALOGD("_ZNK5NSCam2v310BufferPool8poolNameEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::v3::Utils::HalImageStreamBuffer*, unsigned int> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferEjEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferEjEEE12do_constructEPvm() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::StreamBufferProducer> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v320StreamBufferProducerEEEEEEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::v3::Utils::HalImageStreamBuffer*, android::sp<NSCam::IImageBufferHeap> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferENS_2spINS2_16IImageBufferHeapEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferENS_2spINS2_16IImageBufferHeapEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::BufferPool::acquireFromPool(char const*, unsigned int, android::sp<NSCam::IImageBufferHeap>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v310BufferPool15acquireFromPoolEPKcjRN7android2spINS_16IImageBufferHeapEEE(void) {
    ALOGD("_ZN5NSCam2v310BufferPool15acquireFromPoolEPKcjRN7android2spINS_16IImageBufferHeapEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::BufferPool::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v310BufferPool15onLastStrongRefEPKv(void) {
    ALOGD("_ZN5NSCam2v310BufferPool15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: NSCam::v3::BufferPool::BufferPool(android::sp<NSCam::v3::IImageStreamInfo>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v310BufferPoolC2EN7android2spINS0_16IImageStreamInfoEEE(void) {
    ALOGD("_ZN5NSCam2v310BufferPoolC2EN7android2spINS0_16IImageStreamInfoEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::v3::Utils::HalImageStreamBuffer*, unsigned int> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferEjEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferEjEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::HistoryBufferContainerImp::ImageItem_T> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp11ImageItem_TEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp11ImageItem_TEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::HistoryBufferContainerImp */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v325HistoryBufferContainerImpE = NULL;

/* Demangled: NSCam::v3::BufferPool::BufferPool(android::sp<NSCam::v3::IImageStreamInfo>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v310BufferPoolC1EN7android2spINS0_16IImageStreamInfoEEE(void) {
    ALOGD("_ZN5NSCam2v310BufferPoolC1EN7android2spINS0_16IImageStreamInfoEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::v3::HistoryBufferContainerImp::HistoryBufferSet_T> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp18HistoryBufferSet_TEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp18HistoryBufferSet_TEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::HistoryBufferContainerImp::enqueStreamBuffer(android::sp<NSCam::v3::IImageStreamInfo>, android::sp<NSCam::v3::Utils::HalImageStreamBuffer>, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v325HistoryBufferContainerImp17enqueStreamBufferEN7android2spINS0_16IImageStreamInfoEEENS3_INS0_5Utils20HalImageStreamBufferEEEj(void) {
    ALOGD("_ZN5NSCam2v325HistoryBufferContainerImp17enqueStreamBufferEN7android2spINS0_16IImageStreamInfoEEENS3_INS0_5Utils20HalImageStreamBufferEEEj() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::Utils::HalImageStreamBuffer*>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIPN5NSCam2v35Utils20HalImageStreamBufferEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIPN5NSCam2v35Utils20HalImageStreamBufferEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::v3::StreamBufferProducer::acquireStreamBuffer(unsigned int, android::sp<NSCam::v3::Utils::HalImageStreamBuffer>&, android::sp<NSCam::v3::Utils::IStreamBufferProvider>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v320StreamBufferProducer19acquireStreamBufferEjRN7android2spINS0_5Utils20HalImageStreamBufferEEENS3_INS4_21IStreamBufferProviderEEE(void) {
    ALOGD("_ZN5NSCam2v320StreamBufferProducer19acquireStreamBufferEjRN7android2spINS0_5Utils20HalImageStreamBufferEEENS3_INS4_21IStreamBufferProviderEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::HistoryBufferContainerImp::dump() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v325HistoryBufferContainerImp4dumpEv(void) {
    ALOGD("_ZN5NSCam2v325HistoryBufferContainerImp4dumpEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::Vector<NSCam::v3::Utils::HalImageStreamBuffer*> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_6VectorIPN5NSCam2v35Utils20HalImageStreamBufferEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_6VectorIPN5NSCam2v35Utils20HalImageStreamBufferEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::v3::Utils::HalImageStreamBuffer*> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIPN5NSCam2v35Utils20HalImageStreamBufferEEE = NULL;

/* Demangled: std::__1::__assoc_state<int>::move() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__assoc_stateIiE4moveEv(void) {
    ALOGD("_ZNSt3__113__assoc_stateIiE4moveEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::Utils::HalImageStreamBuffer*>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIPN5NSCam2v35Utils20HalImageStreamBufferEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIPN5NSCam2v35Utils20HalImageStreamBufferEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::v3::StreamBufferProducer::hasAcquiredMaxBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v320StreamBufferProducer20hasAcquiredMaxBufferEv(void) {
    ALOGD("_ZN5NSCam2v320StreamBufferProducer20hasAcquiredMaxBufferEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::v3::HistoryBufferContainerImp::AcquiredData_T> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp14AcquiredData_TEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp14AcquiredData_TEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::StreamBufferProducer> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v320StreamBufferProducerEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v320StreamBufferProducerEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::StreamBufferProducer> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v320StreamBufferProducerEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v320StreamBufferProducerEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::v3::HistoryBufferContainerImp::AcquiredData_T> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp14AcquiredData_TEEEEEEE = NULL;

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEEE = NULL;

/* Demangled: void std::__1::vector<std::__1::future<int>, std::__1::allocator<std::__1::future<int> > >::__push_back_slow_path<std::__1::future<int> >(std::__1::future<int>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_6futureIiEENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_6futureIiEENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_() called");
    return 0;
}

/* Demangled: NSCam::v3::StreamBufferProducer::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v320StreamBufferProducer15onLastStrongRefEPKv(void) {
    ALOGD("_ZN5NSCam2v320StreamBufferProducer15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::v3::Utils::HalImageStreamBuffer*, android::sp<NSCam::IImageBufferHeap> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferENS_2spINS2_16IImageBufferHeapEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferENS_2spINS2_16IImageBufferHeapEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::v3::HistoryBufferContainerImp::Status_T> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam2v325HistoryBufferContainerImp8Status_TEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam2v325HistoryBufferContainerImp8Status_TEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::v3::HistoryBufferContainerImp::Status_T> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjN5NSCam2v325HistoryBufferContainerImp8Status_TEEEEE = NULL;

/* Exported Object: vtable for NSCam::v3::BufferPool */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v310BufferPoolE = NULL;

/* Demangled: void std::__1::vector<long, std::__1::allocator<long> >::__push_back_slow_path<long const&>(long const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIlNS_9allocatorIlEEE21__push_back_slow_pathIRKlEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIlNS_9allocatorIlEEE21__push_back_slow_pathIRKlEEvOT_() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::IHistoryBufferContainer-in-NSCam::v3::HistoryBufferContainerImp */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v325HistoryBufferContainerImpE0_NS0_23IHistoryBufferContainerE = NULL;

/* Exported Object: vtable for NSCam::v3::HistoryBufferContainerImp::HistoryBufferSet_T */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v325HistoryBufferContainerImp18HistoryBufferSet_TE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::v3::HistoryBufferContainerImp::HistoryBufferSet_T> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp18HistoryBufferSet_TEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp18HistoryBufferSet_TEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::v3::Utils::HalImageStreamBuffer*, unsigned int> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferEjEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferEjEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::Utils::IStreamBufferProvider-in-NSCam::v3::HistoryBufferContainerImp */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v325HistoryBufferContainerImpE0_NS0_5Utils21IStreamBufferProviderE = NULL;

/* Demangled: NSCam::v3::HistoryBufferContainerImp::dumpLocked() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v325HistoryBufferContainerImp10dumpLockedEv(void) {
    ALOGD("_ZN5NSCam2v325HistoryBufferContainerImp10dumpLockedEv() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<unsigned int> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIjEE = NULL;

/* Demangled: NSCam::v3::StreamBufferProducer::clear() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v320StreamBufferProducer5clearEv(void) {
    ALOGD("_ZN5NSCam2v320StreamBufferProducer5clearEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::v3::HistoryBufferContainerImp::Status_T> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam2v325HistoryBufferContainerImp8Status_TEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam2v325HistoryBufferContainerImp8Status_TEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<unsigned int>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIjE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIjE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::v3::HistoryBufferContainerImp::dumpHistoryBufferLocked(android::sp<NSCam::v3::HistoryBufferContainerImp::HistoryBufferSet_T> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v325HistoryBufferContainerImp23dumpHistoryBufferLockedERKN7android2spINS1_18HistoryBufferSet_TEEE(void) {
    ALOGD("_ZN5NSCam2v325HistoryBufferContainerImp23dumpHistoryBufferLockedERKN7android2spINS1_18HistoryBufferSet_TEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::HistoryBufferContainerImp::dumpAllHistoryBufferLocked() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v325HistoryBufferContainerImp26dumpAllHistoryBufferLockedEv(void) {
    ALOGD("_ZN5NSCam2v325HistoryBufferContainerImp26dumpAllHistoryBufferLockedEv() called");
    return 0;
}

/* Demangled: NSCam::v3::HistoryBufferContainerImp::HistoryBufferContainerImp(int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v325HistoryBufferContainerImpC2EiRKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZN5NSCam2v325HistoryBufferContainerImpC2EiRKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::v3::HistoryBufferContainerImp::Status_T> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam2v325HistoryBufferContainerImp8Status_TEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam2v325HistoryBufferContainerImp8Status_TEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::v3::HistoryBufferContainerImp::HistoryBufferSet_T> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp18HistoryBufferSet_TEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp18HistoryBufferSet_TEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::StreamBufferProducer> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v320StreamBufferProducerEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v320StreamBufferProducerEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::HistoryBufferContainerImp::releaseOneHistoryBufferLocked() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v325HistoryBufferContainerImp29releaseOneHistoryBufferLockedEv(void) {
    ALOGD("_ZN5NSCam2v325HistoryBufferContainerImp29releaseOneHistoryBufferLockedEv() called");
    return 0;
}

/* Demangled: NSCam::v3::HistoryBufferContainerImp::clear(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v325HistoryBufferContainerImp5clearEj(void) {
    ALOGD("_ZN5NSCam2v325HistoryBufferContainerImp5clearEj() called");
    return 0;
}

/* Demangled: NSCam::v3::StreamBufferProducer::StreamBufferProducer(android::sp<NSCam::v3::IImageStreamInfo>, android::sp<NSCam::v3::BufferPool>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v320StreamBufferProducerC2EN7android2spINS0_16IImageStreamInfoEEENS3_INS0_10BufferPoolEEE(void) {
    ALOGD("_ZN5NSCam2v320StreamBufferProducerC2EN7android2spINS0_16IImageStreamInfoEEENS3_INS0_10BufferPoolEEE() called");
    return 0;
}

/* Exported Object: NSCam::v3::HistoryBufferContainerImp::kStatusNames */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam2v325HistoryBufferContainerImp12kStatusNamesE = NULL;

/* Demangled: NSCam::v3::HistoryBufferContainerImp::initOneHistoryBufferLocked(unsigned int, std::__1::vector<long, std::__1::allocator<long> > const&, std::__1::vector<long, std::__1::allocator<long> > const&, bool, NSCam::v3::HistoryBufferContainerImp::Status_T) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v325HistoryBufferContainerImp26initOneHistoryBufferLockedEjRKNSt3__16vectorIlNS2_9allocatorIlEEEES8_bNS1_8Status_TE(void) {
    ALOGD("_ZN5NSCam2v325HistoryBufferContainerImp26initOneHistoryBufferLockedEjRKNSt3__16vectorIlNS2_9allocatorIlEEEES8_bNS1_8Status_TE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::v3::Utils::HalImageStreamBuffer*, unsigned int> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferEjEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferEjEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::HistoryBufferContainerImp::MetaItem_T> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp10MetaItem_TEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp10MetaItem_TEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Exported Object: VTT for NSCam::v3::BufferPool */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam2v310BufferPoolE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<unsigned int>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIjE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIjE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::BufferPool::updateBufferCount(char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v310BufferPool17updateBufferCountEPKci(void) {
    ALOGD("_ZN5NSCam2v310BufferPool17updateBufferCountEPKci() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::HistoryBufferContainerImp::MetaItem_T> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp10MetaItem_TEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp10MetaItem_TEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::StreamBufferProducer> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v320StreamBufferProducerEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v320StreamBufferProducerEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<NSCam::v3::Utils::HalImageStreamBuffer*, unsigned int> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferEjEEEE = NULL;

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<NSCam::v3::Utils::HalImageStreamBuffer*, android::sp<NSCam::IImageBufferHeap> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferENS_2spINS2_16IImageBufferHeapEEEEEEE = NULL;

/* Demangled: NSCam::v3::IHistoryBufferContainer::createInstance(int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v323IHistoryBufferContainer14createInstanceEiRKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZN5NSCam2v323IHistoryBufferContainer14createInstanceEiRKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::v3::HistoryBufferContainerImp::Status_T> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam2v325HistoryBufferContainerImp8Status_TEEEE10do_compareEPKvS9_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam2v325HistoryBufferContainerImp8Status_TEEEE10do_compareEPKvS9_() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::Utils::HalImageStreamBuffer*>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIPN5NSCam2v35Utils20HalImageStreamBufferEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIPN5NSCam2v35Utils20HalImageStreamBufferEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::Utils::HalImageStreamBuffer*>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIPN5NSCam2v35Utils20HalImageStreamBufferEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIPN5NSCam2v35Utils20HalImageStreamBufferEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::v3::Utils::HalImageStreamBuffer*, android::sp<NSCam::IImageBufferHeap> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferENS_2spINS2_16IImageBufferHeapEEEEEE10do_compareEPKvSD_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferENS_2spINS2_16IImageBufferHeapEEEEEE10do_compareEPKvSD_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::v3::Utils::HalImageStreamBuffer*, android::sp<NSCam::IImageBufferHeap> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferENS_2spINS2_16IImageBufferHeapEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferENS_2spINS2_16IImageBufferHeapEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::HistoryBufferContainerImp::dequeStreamBuffer(unsigned int, android::sp<NSCam::v3::IImageStreamInfo>, android::sp<NSCam::v3::Utils::HalImageStreamBuffer>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v325HistoryBufferContainerImp17dequeStreamBufferEjN7android2spINS0_16IImageStreamInfoEEERNS3_INS0_5Utils20HalImageStreamBufferEEE(void) {
    ALOGD("_ZN5NSCam2v325HistoryBufferContainerImp17dequeStreamBufferEjN7android2spINS0_16IImageStreamInfoEEERNS3_INS0_5Utils20HalImageStreamBufferEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::v3::Utils::HalImageStreamBuffer*, unsigned int> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferEjEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferEjEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::v3::HistoryBufferContainerImp::AcquiredData_T> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp14AcquiredData_TEEEEEE10do_compareEPKvSB_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp14AcquiredData_TEEEEEE10do_compareEPKvSB_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE10do_compareEPKvSA_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE10do_compareEPKvSA_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::StreamBufferProducer> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v320StreamBufferProducerEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v320StreamBufferProducerEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::Vector<unsigned int>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIjE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIjE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__tree<NSCam::v3::StreamBufferProducer*, std::__1::less<NSCam::v3::StreamBufferProducer*>, std::__1::allocator<NSCam::v3::StreamBufferProducer*> >::destroy(std::__1::__tree_node<NSCam::v3::StreamBufferProducer*, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeIPN5NSCam2v320StreamBufferProducerENS_4lessIS4_EENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE(void) {
    ALOGD("_ZNSt3__16__treeIPN5NSCam2v320StreamBufferProducerENS_4lessIS4_EENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE() called");
    return 0;
}

/* Demangled: NSCam::v3::StreamBufferProducer::allocateBufferFromPoolLocked() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v320StreamBufferProducer28allocateBufferFromPoolLockedEv(void) {
    ALOGD("_ZN5NSCam2v320StreamBufferProducer28allocateBufferFromPoolLockedEv() called");
    return 0;
}

/* Demangled: NSCam::v3::StreamBufferProducer::StreamBufferProducer(android::sp<NSCam::v3::IImageStreamInfo>, android::sp<NSCam::v3::BufferPool>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v320StreamBufferProducerC1EN7android2spINS0_16IImageStreamInfoEEENS3_INS0_10BufferPoolEEE(void) {
    ALOGD("_ZN5NSCam2v320StreamBufferProducerC1EN7android2spINS0_16IImageStreamInfoEEENS3_INS0_10BufferPoolEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::HistoryBufferContainerImp::acquireBufferSets(android::Vector<NSCam::v3::IHistoryBufferContainer::BufferSet_T>&, unsigned int, NSCam::v3::IHistoryBufferContainer::StreamIds_T const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v325HistoryBufferContainerImp17acquireBufferSetsERN7android6VectorINS0_23IHistoryBufferContainer11BufferSet_TEEEjRKNS4_11StreamIds_TE(void) {
    ALOGD("_ZN5NSCam2v325HistoryBufferContainerImp17acquireBufferSetsERN7android6VectorINS0_23IHistoryBufferContainer11BufferSet_TEEEjRKNS4_11StreamIds_TE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::v3::HistoryBufferContainerImp::Status_T> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam2v325HistoryBufferContainerImp8Status_TEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam2v325HistoryBufferContainerImp8Status_TEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::HistoryBufferContainerImp::ImageItem_T> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp11ImageItem_TEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp11ImageItem_TEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::StreamBufferProducer> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v320StreamBufferProducerEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v320StreamBufferProducerEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::Vector<unsigned int>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIjE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIjE16do_move_backwardEPvPKvm() called");
    return 0;
}
