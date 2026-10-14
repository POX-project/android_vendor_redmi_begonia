/*
 * Reverse-Engineered ABI Specification for: libmtkcam_pipelinemodel_hbc.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libmtkcam_pipelinemodel_hbc.so
 */

#ifndef BEGONIA_RE_LIBMTKCAM_PIPELINEMODEL_HBC_H
#define BEGONIA_RE_LIBMTKCAM_PIPELINEMODEL_HBC_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN5NSCam2v310BufferPool12do_constructERN7android2spINS_16IImageBufferHeapEEE */
/* Demangled: NSCam::v3::BufferPool::do_construct(android::sp<NSCam::IImageBufferHeap>&) */
int _ZN5NSCam2v310BufferPool12do_constructERN7android2spINS_16IImageBufferHeapEEE(void);

/* Symbol: _ZN5NSCam2v320StreamBufferProducer17setMaxBufferCountEm */
/* Demangled: NSCam::v3::StreamBufferProducer::setMaxBufferCount(unsigned long) */
int _ZN5NSCam2v320StreamBufferProducer17setMaxBufferCountEm(void);

/* Symbol: _ZN5NSCam2v320StreamBufferProducer4dumpEv */
/* Demangled: NSCam::v3::StreamBufferProducer::dump() */
int _ZN5NSCam2v320StreamBufferProducer4dumpEv(void);

/* Symbol: _ZN5NSCam2v325HistoryBufferContainerImp16returnBufferSetsERN7android6VectorINS0_23IHistoryBufferContainer11BufferSet_TEEEj */
/* Demangled: NSCam::v3::HistoryBufferContainerImp::returnBufferSets(android::Vector<NSCam::v3::IHistoryBufferContainer::BufferSet_T>&, unsigned int) */
int _ZN5NSCam2v325HistoryBufferContainerImp16returnBufferSetsERN7android6VectorINS0_23IHistoryBufferContainer11BufferSet_TEEEj(void);

/* Symbol: _ZN5NSCam2v325HistoryBufferContainerImp33acquireBuffersByRequiredSetLockedERN7android6VectorINS0_23IHistoryBufferContainer11BufferSet_TEEEjRKNS4_11StreamIds_TE */
/* Demangled: NSCam::v3::HistoryBufferContainerImp::acquireBuffersByRequiredSetLocked(android::Vector<NSCam::v3::IHistoryBufferContainer::BufferSet_T>&, unsigned int, NSCam::v3::IHistoryBufferContainer::StreamIds_T const&) */
int _ZN5NSCam2v325HistoryBufferContainerImp33acquireBuffersByRequiredSetLockedERN7android6VectorINS0_23IHistoryBufferContainer11BufferSet_TEEEjRKNS4_11StreamIds_TE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam2v325HistoryBufferContainerImp8Status_TEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::v3::HistoryBufferContainerImp::Status_T> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam2v325HistoryBufferContainerImp8Status_TEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp18HistoryBufferSet_TEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::v3::HistoryBufferContainerImp::HistoryBufferSet_T> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp18HistoryBufferSet_TEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp11ImageItem_TEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::HistoryBufferContainerImp::ImageItem_T> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp11ImageItem_TEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN5NSCam2v325HistoryBufferContainerImp18dumpAcquiredLockedEv */
/* Demangled: NSCam::v3::HistoryBufferContainerImp::dumpAcquiredLocked() */
int _ZN5NSCam2v325HistoryBufferContainerImp18dumpAcquiredLockedEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE10do_compareEPKvSA_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE10do_compareEPKvSA_(void);

/* Symbol: _ZNK7android6VectorIjE8do_splatEPvPKvm */
/* Demangled: android::Vector<unsigned int>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIjE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp14AcquiredData_TEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::v3::HistoryBufferContainerImp::AcquiredData_T> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp14AcquiredData_TEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp14AcquiredData_TEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::v3::HistoryBufferContainerImp::AcquiredData_T> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp14AcquiredData_TEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp10MetaItem_TEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::HistoryBufferContainerImp::MetaItem_T> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp10MetaItem_TEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp11ImageItem_TEEEE10do_compareEPKvS9_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::HistoryBufferContainerImp::ImageItem_T> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp11ImageItem_TEEEE10do_compareEPKvS9_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE12do_constructEPvm(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp18HistoryBufferSet_TEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::v3::HistoryBufferContainerImp::HistoryBufferSet_T> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp18HistoryBufferSet_TEEEEEEE;

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIjNS_6VectorIPN5NSCam2v35Utils20HalImageStreamBufferEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, android::Vector<NSCam::v3::Utils::HalImageStreamBuffer*> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjNS_6VectorIPN5NSCam2v35Utils20HalImageStreamBufferEEEEEEE;

/* Symbol: _ZN5NSCam2v325HistoryBufferContainerImp5clearEv */
/* Demangled: NSCam::v3::HistoryBufferContainerImp::clear() */
int _ZN5NSCam2v325HistoryBufferContainerImp5clearEv(void);

/* Symbol: _ZN5NSCam2v325HistoryBufferContainerImp16endConfigStreamsEv */
/* Demangled: NSCam::v3::HistoryBufferContainerImp::endConfigStreams() */
int _ZN5NSCam2v325HistoryBufferContainerImp16endConfigStreamsEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZTTN5NSCam2v325HistoryBufferContainerImpE */
/* Demangled: VTT for NSCam::v3::HistoryBufferContainerImp */
extern void* _ZTTN5NSCam2v325HistoryBufferContainerImpE;

/* Symbol: _ZN5NSCam2v310BufferPool20returnBufferToPool_lEPKcN7android2spINS_16IImageBufferHeapEEE */
/* Demangled: NSCam::v3::BufferPool::returnBufferToPool_l(char const*, android::sp<NSCam::IImageBufferHeap>) */
int _ZN5NSCam2v310BufferPool20returnBufferToPool_lEPKcN7android2spINS_16IImageBufferHeapEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp11ImageItem_TEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::HistoryBufferContainerImp::ImageItem_T> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp11ImageItem_TEEEE12do_constructEPvm(void);

/* Symbol: _ZTVN5NSCam2v325HistoryBufferContainerImp14AcquiredData_TE */
/* Demangled: vtable for NSCam::v3::HistoryBufferContainerImp::AcquiredData_T */
extern void* _ZTVN5NSCam2v325HistoryBufferContainerImp14AcquiredData_TE;

/* Symbol: _ZNK5NSCam2v310BufferPool8dumpPoolEv */
/* Demangled: NSCam::v3::BufferPool::dumpPool() const */
int _ZNK5NSCam2v310BufferPool8dumpPoolEv(void);

/* Symbol: _ZTVN5NSCam2v320StreamBufferProducerE */
/* Demangled: vtable for NSCam::v3::StreamBufferProducer */
extern void* _ZTVN5NSCam2v320StreamBufferProducerE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_6VectorIPN5NSCam2v35Utils20HalImageStreamBufferEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::Vector<NSCam::v3::Utils::HalImageStreamBuffer*> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_6VectorIPN5NSCam2v35Utils20HalImageStreamBufferEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp10MetaItem_TEEEE10do_compareEPKvS9_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::HistoryBufferContainerImp::MetaItem_T> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp10MetaItem_TEEEE10do_compareEPKvS9_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp11ImageItem_TEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::HistoryBufferContainerImp::ImageItem_T> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp11ImageItem_TEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEEE;

/* Symbol: _ZN5NSCam2v320StreamBufferProducer19releaseStreamBufferEN7android2spINS0_5Utils20HalImageStreamBufferEEEj */
/* Demangled: NSCam::v3::StreamBufferProducer::releaseStreamBuffer(android::sp<NSCam::v3::Utils::HalImageStreamBuffer>, unsigned int) */
int _ZN5NSCam2v320StreamBufferProducer19releaseStreamBufferEN7android2spINS0_5Utils20HalImageStreamBufferEEEj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp18HistoryBufferSet_TEEEEEE10do_compareEPKvSB_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::v3::HistoryBufferContainerImp::HistoryBufferSet_T> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp18HistoryBufferSet_TEEEEEE10do_compareEPKvSB_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp10MetaItem_TEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::HistoryBufferContainerImp::MetaItem_T> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp10MetaItem_TEEEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam2v310BufferPool19getBufferFromPool_lEPKcRN7android2spINS_16IImageBufferHeapEEE */
/* Demangled: NSCam::v3::BufferPool::getBufferFromPool_l(char const*, android::sp<NSCam::IImageBufferHeap>&) */
int _ZN5NSCam2v310BufferPool19getBufferFromPool_lEPKcRN7android2spINS_16IImageBufferHeapEEE(void);

/* Symbol: _ZN5NSCam2v325HistoryBufferContainerImp13setBufferSizeERKN7android11KeyedVectorIlmEE */
/* Demangled: NSCam::v3::HistoryBufferContainerImp::setBufferSize(android::KeyedVector<long, unsigned long> const&) */
int _ZN5NSCam2v325HistoryBufferContainerImp13setBufferSizeERKN7android11KeyedVectorIlmEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_6VectorIPN5NSCam2v35Utils20HalImageStreamBufferEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::Vector<NSCam::v3::Utils::HalImageStreamBuffer*> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_6VectorIPN5NSCam2v35Utils20HalImageStreamBufferEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp10MetaItem_TEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<long, NSCam::v3::HistoryBufferContainerImp::MetaItem_T> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp10MetaItem_TEEEEE;

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp11ImageItem_TEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<long, NSCam::v3::HistoryBufferContainerImp::ImageItem_T> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp11ImageItem_TEEEEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferENS_2spINS2_16IImageBufferHeapEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::v3::Utils::HalImageStreamBuffer*, android::sp<NSCam::IImageBufferHeap> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferENS_2spINS2_16IImageBufferHeapEEEEEE12do_constructEPvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp14AcquiredData_TEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::v3::HistoryBufferContainerImp::AcquiredData_T> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp14AcquiredData_TEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android6VectorIPN5NSCam2v35Utils20HalImageStreamBufferEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::Utils::HalImageStreamBuffer*>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIPN5NSCam2v35Utils20HalImageStreamBufferEE7do_copyEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIPN5NSCam2v35Utils20HalImageStreamBufferEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::Utils::HalImageStreamBuffer*>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIPN5NSCam2v35Utils20HalImageStreamBufferEE8do_splatEPvPKvm(void);

/* Symbol: _ZN5NSCam2v325HistoryBufferContainerImp15cancelBufferSetERNS0_23IHistoryBufferContainer11BufferSet_TEj */
/* Demangled: NSCam::v3::HistoryBufferContainerImp::cancelBufferSet(NSCam::v3::IHistoryBufferContainer::BufferSet_T&, unsigned int) */
int _ZN5NSCam2v325HistoryBufferContainerImp15cancelBufferSetERNS0_23IHistoryBufferContainer11BufferSet_TEj(void);

/* Symbol: _ZN5NSCam2v325HistoryBufferContainerImp26releaseHistoryBufferLockedEN7android2spINS1_18HistoryBufferSet_TEEE */
/* Demangled: NSCam::v3::HistoryBufferContainerImp::releaseHistoryBufferLocked(android::sp<NSCam::v3::HistoryBufferContainerImp::HistoryBufferSet_T>) */
int _ZN5NSCam2v325HistoryBufferContainerImp26releaseHistoryBufferLockedEN7android2spINS1_18HistoryBufferSet_TEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferEjEEE10do_compareEPKvSA_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::v3::Utils::HalImageStreamBuffer*, unsigned int> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferEjEEE10do_compareEPKvSA_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferEjEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::v3::Utils::HalImageStreamBuffer*, unsigned int> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferEjEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp14AcquiredData_TEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::v3::HistoryBufferContainerImp::AcquiredData_T> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp14AcquiredData_TEEEEEE12do_constructEPvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp14AcquiredData_TEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::v3::HistoryBufferContainerImp::AcquiredData_T> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp14AcquiredData_TEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_6VectorIPN5NSCam2v35Utils20HalImageStreamBufferEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::Vector<NSCam::v3::Utils::HalImageStreamBuffer*> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_6VectorIPN5NSCam2v35Utils20HalImageStreamBufferEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZTv0_n40_N5NSCam2v310BufferPool15onLastStrongRefEPKv */
/* Demangled: virtual thunk to NSCam::v3::BufferPool::onLastStrongRef(void const*) */
int _ZTv0_n40_N5NSCam2v310BufferPool15onLastStrongRefEPKv(void);

/* Symbol: _ZN5NSCam2v325HistoryBufferContainerImp16cancelBufferSetsERN7android6VectorINS0_23IHistoryBufferContainer11BufferSet_TEEEj */
/* Demangled: NSCam::v3::HistoryBufferContainerImp::cancelBufferSets(android::Vector<NSCam::v3::IHistoryBufferContainer::BufferSet_T>&, unsigned int) */
int _ZN5NSCam2v325HistoryBufferContainerImp16cancelBufferSetsERN7android6VectorINS0_23IHistoryBufferContainer11BufferSet_TEEEj(void);

/* Symbol: _ZN5NSCam2v325HistoryBufferContainerImp23getAvailableRequestListERN7android6VectorIjEERKNS0_23IHistoryBufferContainer11StreamIds_TE */
/* Demangled: NSCam::v3::HistoryBufferContainerImp::getAvailableRequestList(android::Vector<unsigned int>&, NSCam::v3::IHistoryBufferContainer::StreamIds_T const&) */
int _ZN5NSCam2v325HistoryBufferContainerImp23getAvailableRequestListERN7android6VectorIjEERKNS0_23IHistoryBufferContainer11StreamIds_TE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferENS_2spINS2_16IImageBufferHeapEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::v3::Utils::HalImageStreamBuffer*, android::sp<NSCam::IImageBufferHeap> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferENS_2spINS2_16IImageBufferHeapEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferENS_2spINS2_16IImageBufferHeapEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::v3::Utils::HalImageStreamBuffer*, android::sp<NSCam::IImageBufferHeap> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferENS_2spINS2_16IImageBufferHeapEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp10MetaItem_TEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::HistoryBufferContainerImp::MetaItem_T> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp10MetaItem_TEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZTVN7android4ListINS_2spIN5NSCam16IImageBufferHeapEEEEE */
/* Demangled: vtable for android::List<android::sp<NSCam::IImageBufferHeap> > */
extern void* _ZTVN7android4ListINS_2spIN5NSCam16IImageBufferHeapEEEEE;

/* Symbol: _ZN5NSCam2v325HistoryBufferContainerImp18beginConfigStreamsERKN7android2spINS0_14IStreamInfoSetEEE */
/* Demangled: NSCam::v3::HistoryBufferContainerImp::beginConfigStreams(android::sp<NSCam::v3::IStreamInfoSet> const&) */
int _ZN5NSCam2v325HistoryBufferContainerImp18beginConfigStreamsERKN7android2spINS0_14IStreamInfoSetEEE(void);

/* Symbol: _ZN5NSCam2v325HistoryBufferContainerImp37enqueStreamBufferOfAcquiredDataLockedEN7android2spINS0_5Utils20HalImageStreamBufferEEEj */
/* Demangled: NSCam::v3::HistoryBufferContainerImp::enqueStreamBufferOfAcquiredDataLocked(android::sp<NSCam::v3::Utils::HalImageStreamBuffer>, unsigned int) */
int _ZN5NSCam2v325HistoryBufferContainerImp37enqueStreamBufferOfAcquiredDataLockedEN7android2spINS0_5Utils20HalImageStreamBufferEEEj(void);

/* Symbol: _ZN5NSCam2v325HistoryBufferContainerImpC1EiRKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE */
/* Demangled: NSCam::v3::HistoryBufferContainerImp::HistoryBufferContainerImp(int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN5NSCam2v325HistoryBufferContainerImpC1EiRKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN5NSCam2v325HistoryBufferContainerImp23acquireBufferSetsOfListERKN7android6VectorIjEERNS3_INS0_23IHistoryBufferContainer11BufferSet_TEEEjRKNS7_11StreamIds_TE */
/* Demangled: NSCam::v3::HistoryBufferContainerImp::acquireBufferSetsOfList(android::Vector<unsigned int> const&, android::Vector<NSCam::v3::IHistoryBufferContainer::BufferSet_T>&, unsigned int, NSCam::v3::IHistoryBufferContainer::StreamIds_T const&) */
int _ZN5NSCam2v325HistoryBufferContainerImp23acquireBufferSetsOfListERKN7android6VectorIjEERNS3_INS0_23IHistoryBufferContainer11BufferSet_TEEEjRKNS7_11StreamIds_TE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_6VectorIPN5NSCam2v35Utils20HalImageStreamBufferEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::Vector<NSCam::v3::Utils::HalImageStreamBuffer*> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_6VectorIPN5NSCam2v35Utils20HalImageStreamBufferEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp11ImageItem_TEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::HistoryBufferContainerImp::ImageItem_T> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp11ImageItem_TEEEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v320StreamBufferProducerEEEEEE10do_compareEPKvSA_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::StreamBufferProducer> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v320StreamBufferProducerEEEEEE10do_compareEPKvSA_(void);

/* Symbol: _ZN5NSCam2v310BufferPool13releaseToPoolEPKcjN7android2spINS_16IImageBufferHeapEEE */
/* Demangled: NSCam::v3::BufferPool::releaseToPool(char const*, unsigned int, android::sp<NSCam::IImageBufferHeap>) */
int _ZN5NSCam2v310BufferPool13releaseToPoolEPKcjN7android2spINS_16IImageBufferHeapEEE(void);

/* Symbol: _ZN5NSCam2v310BufferPool14allocateBufferEPKcmm */
/* Demangled: NSCam::v3::BufferPool::allocateBuffer(char const*, unsigned long, unsigned long) */
int _ZN5NSCam2v310BufferPool14allocateBufferEPKcmm(void);

/* Symbol: _ZN5NSCam2v320StreamBufferProducer12initProducerEv */
/* Demangled: NSCam::v3::StreamBufferProducer::initProducer() */
int _ZN5NSCam2v320StreamBufferProducer12initProducerEv(void);

/* Symbol: _ZN5NSCam2v320StreamBufferProducer13setBufferPoolEN7android2spINS0_11IBufferPoolEEE */
/* Demangled: NSCam::v3::StreamBufferProducer::setBufferPool(android::sp<NSCam::v3::IBufferPool>) */
int _ZN5NSCam2v320StreamBufferProducer13setBufferPoolEN7android2spINS0_11IBufferPoolEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp18HistoryBufferSet_TEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::v3::HistoryBufferContainerImp::HistoryBufferSet_T> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp18HistoryBufferSet_TEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_6VectorIPN5NSCam2v35Utils20HalImageStreamBufferEEEEEE10do_compareEPKvSC_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::Vector<NSCam::v3::Utils::HalImageStreamBuffer*> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_6VectorIPN5NSCam2v35Utils20HalImageStreamBufferEEEEEE10do_compareEPKvSC_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_6VectorIPN5NSCam2v35Utils20HalImageStreamBufferEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::Vector<NSCam::v3::Utils::HalImageStreamBuffer*> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_6VectorIPN5NSCam2v35Utils20HalImageStreamBufferEEEEEE12do_constructEPvm(void);

/* Symbol: _ZTCN5NSCam2v310BufferPoolE0_NS0_11IBufferPoolE */
/* Demangled: construction vtable for NSCam::v3::IBufferPool-in-NSCam::v3::BufferPool */
extern void* _ZTCN5NSCam2v310BufferPoolE0_NS0_11IBufferPoolE;

/* Symbol: _ZN5NSCam2v325HistoryBufferContainerImp22dumpProducerInfoLockedEv */
/* Demangled: NSCam::v3::HistoryBufferContainerImp::dumpProducerInfoLocked() */
int _ZN5NSCam2v325HistoryBufferContainerImp22dumpProducerInfoLockedEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam2v325HistoryBufferContainerImp8Status_TEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::v3::HistoryBufferContainerImp::Status_T> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam2v325HistoryBufferContainerImp8Status_TEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIjE10do_destroyEPvm */
/* Demangled: android::Vector<unsigned int>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIjE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam2v325HistoryBufferContainerImp13registerFrameEjbRKNSt3__14pairIbNS2_6vectorIlNS2_9allocatorIlEEEEEESA_ */
/* Demangled: NSCam::v3::HistoryBufferContainerImp::registerFrame(unsigned int, bool, std::__1::pair<bool, std::__1::vector<long, std::__1::allocator<long> > > const&, std::__1::pair<bool, std::__1::vector<long, std::__1::allocator<long> > > const&) */
int _ZN5NSCam2v325HistoryBufferContainerImp13registerFrameEjbRKNSt3__14pairIbNS2_6vectorIlNS2_9allocatorIlEEEEEESA_(void);

/* Symbol: _ZN5NSCam2v325HistoryBufferContainerImp13setBufferPoolERKN7android11KeyedVectorIlNS2_2spINS0_11IBufferPoolEEEEE */
/* Demangled: NSCam::v3::HistoryBufferContainerImp::setBufferPool(android::KeyedVector<long, android::sp<NSCam::v3::IBufferPool> > const&) */
int _ZN5NSCam2v325HistoryBufferContainerImp13setBufferPoolERKN7android11KeyedVectorIlNS2_2spINS0_11IBufferPoolEEEEE(void);

/* Symbol: _ZN5NSCam2v325HistoryBufferContainerImp16enqueMetaBuffersERKN7android6VectorINS2_2spINS0_17IMetaStreamBufferEEEEES9_j */
/* Demangled: NSCam::v3::HistoryBufferContainerImp::enqueMetaBuffers(android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> > const&, android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> > const&, unsigned int) */
int _ZN5NSCam2v325HistoryBufferContainerImp16enqueMetaBuffersERKN7android6VectorINS2_2spINS0_17IMetaStreamBufferEEEEES9_j(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp18HistoryBufferSet_TEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::v3::HistoryBufferContainerImp::HistoryBufferSet_T> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp18HistoryBufferSet_TEEEEEE12do_constructEPvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp10MetaItem_TEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::HistoryBufferContainerImp::MetaItem_T> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp10MetaItem_TEEEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK5NSCam2v310BufferPool8poolNameEv */
/* Demangled: NSCam::v3::BufferPool::poolName() const */
int _ZNK5NSCam2v310BufferPool8poolNameEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferEjEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::v3::Utils::HalImageStreamBuffer*, unsigned int> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferEjEEE12do_constructEPvm(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v320StreamBufferProducerEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::StreamBufferProducer> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v320StreamBufferProducerEEEEEEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferENS_2spINS2_16IImageBufferHeapEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::v3::Utils::HalImageStreamBuffer*, android::sp<NSCam::IImageBufferHeap> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferENS_2spINS2_16IImageBufferHeapEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5NSCam2v310BufferPool15acquireFromPoolEPKcjRN7android2spINS_16IImageBufferHeapEEE */
/* Demangled: NSCam::v3::BufferPool::acquireFromPool(char const*, unsigned int, android::sp<NSCam::IImageBufferHeap>&) */
int _ZN5NSCam2v310BufferPool15acquireFromPoolEPKcjRN7android2spINS_16IImageBufferHeapEEE(void);

/* Symbol: _ZN5NSCam2v310BufferPool15onLastStrongRefEPKv */
/* Demangled: NSCam::v3::BufferPool::onLastStrongRef(void const*) */
int _ZN5NSCam2v310BufferPool15onLastStrongRefEPKv(void);

/* Symbol: _ZN5NSCam2v310BufferPoolC2EN7android2spINS0_16IImageStreamInfoEEE */
/* Demangled: NSCam::v3::BufferPool::BufferPool(android::sp<NSCam::v3::IImageStreamInfo>) */
int _ZN5NSCam2v310BufferPoolC2EN7android2spINS0_16IImageStreamInfoEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferEjEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::v3::Utils::HalImageStreamBuffer*, unsigned int> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferEjEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp11ImageItem_TEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::HistoryBufferContainerImp::ImageItem_T> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp11ImageItem_TEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZTVN5NSCam2v325HistoryBufferContainerImpE */
/* Demangled: vtable for NSCam::v3::HistoryBufferContainerImp */
extern void* _ZTVN5NSCam2v325HistoryBufferContainerImpE;

/* Symbol: _ZN5NSCam2v310BufferPoolC1EN7android2spINS0_16IImageStreamInfoEEE */
/* Demangled: NSCam::v3::BufferPool::BufferPool(android::sp<NSCam::v3::IImageStreamInfo>) */
int _ZN5NSCam2v310BufferPoolC1EN7android2spINS0_16IImageStreamInfoEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp18HistoryBufferSet_TEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::v3::HistoryBufferContainerImp::HistoryBufferSet_T> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp18HistoryBufferSet_TEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN5NSCam2v325HistoryBufferContainerImp17enqueStreamBufferEN7android2spINS0_16IImageStreamInfoEEENS3_INS0_5Utils20HalImageStreamBufferEEEj */
/* Demangled: NSCam::v3::HistoryBufferContainerImp::enqueStreamBuffer(android::sp<NSCam::v3::IImageStreamInfo>, android::sp<NSCam::v3::Utils::HalImageStreamBuffer>, unsigned int) */
int _ZN5NSCam2v325HistoryBufferContainerImp17enqueStreamBufferEN7android2spINS0_16IImageStreamInfoEEENS3_INS0_5Utils20HalImageStreamBufferEEEj(void);

/* Symbol: _ZNK7android6VectorIPN5NSCam2v35Utils20HalImageStreamBufferEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::v3::Utils::HalImageStreamBuffer*>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIPN5NSCam2v35Utils20HalImageStreamBufferEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam2v320StreamBufferProducer19acquireStreamBufferEjRN7android2spINS0_5Utils20HalImageStreamBufferEEENS3_INS4_21IStreamBufferProviderEEE */
/* Demangled: NSCam::v3::StreamBufferProducer::acquireStreamBuffer(unsigned int, android::sp<NSCam::v3::Utils::HalImageStreamBuffer>&, android::sp<NSCam::v3::Utils::IStreamBufferProvider>) */
int _ZN5NSCam2v320StreamBufferProducer19acquireStreamBufferEjRN7android2spINS0_5Utils20HalImageStreamBufferEEENS3_INS4_21IStreamBufferProviderEEE(void);

/* Symbol: _ZN5NSCam2v325HistoryBufferContainerImp4dumpEv */
/* Demangled: NSCam::v3::HistoryBufferContainerImp::dump() */
int _ZN5NSCam2v325HistoryBufferContainerImp4dumpEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_6VectorIPN5NSCam2v35Utils20HalImageStreamBufferEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::Vector<NSCam::v3::Utils::HalImageStreamBuffer*> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_6VectorIPN5NSCam2v35Utils20HalImageStreamBufferEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZTVN7android6VectorIPN5NSCam2v35Utils20HalImageStreamBufferEEE */
/* Demangled: vtable for android::Vector<NSCam::v3::Utils::HalImageStreamBuffer*> */
extern void* _ZTVN7android6VectorIPN5NSCam2v35Utils20HalImageStreamBufferEEE;

/* Symbol: _ZNSt3__113__assoc_stateIiE4moveEv */
/* Demangled: std::__1::__assoc_state<int>::move() */
int _ZNSt3__113__assoc_stateIiE4moveEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE12do_constructEPvm(void);

/* Symbol: _ZNK7android6VectorIPN5NSCam2v35Utils20HalImageStreamBufferEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::v3::Utils::HalImageStreamBuffer*>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIPN5NSCam2v35Utils20HalImageStreamBufferEE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam2v320StreamBufferProducer20hasAcquiredMaxBufferEv */
/* Demangled: NSCam::v3::StreamBufferProducer::hasAcquiredMaxBuffer() */
int _ZN5NSCam2v320StreamBufferProducer20hasAcquiredMaxBufferEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp14AcquiredData_TEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::v3::HistoryBufferContainerImp::AcquiredData_T> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp14AcquiredData_TEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v320StreamBufferProducerEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::StreamBufferProducer> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v320StreamBufferProducerEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v320StreamBufferProducerEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::StreamBufferProducer> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v320StreamBufferProducerEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp14AcquiredData_TEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::v3::HistoryBufferContainerImp::AcquiredData_T> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp14AcquiredData_TEEEEEEE;

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEEE;

/* Symbol: _ZNSt3__16vectorINS_6futureIiEENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::future<int>, std::__1::allocator<std::__1::future<int> > >::__push_back_slow_path<std::__1::future<int> >(std::__1::future<int>&&) */
int _ZNSt3__16vectorINS_6futureIiEENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void);

/* Symbol: _ZN5NSCam2v320StreamBufferProducer15onLastStrongRefEPKv */
/* Demangled: NSCam::v3::StreamBufferProducer::onLastStrongRef(void const*) */
int _ZN5NSCam2v320StreamBufferProducer15onLastStrongRefEPKv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferENS_2spINS2_16IImageBufferHeapEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::v3::Utils::HalImageStreamBuffer*, android::sp<NSCam::IImageBufferHeap> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferENS_2spINS2_16IImageBufferHeapEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam2v325HistoryBufferContainerImp8Status_TEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::v3::HistoryBufferContainerImp::Status_T> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam2v325HistoryBufferContainerImp8Status_TEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIjN5NSCam2v325HistoryBufferContainerImp8Status_TEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::v3::HistoryBufferContainerImp::Status_T> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjN5NSCam2v325HistoryBufferContainerImp8Status_TEEEEE;

/* Symbol: _ZTVN5NSCam2v310BufferPoolE */
/* Demangled: vtable for NSCam::v3::BufferPool */
extern void* _ZTVN5NSCam2v310BufferPoolE;

/* Symbol: _ZNSt3__16vectorIlNS_9allocatorIlEEE21__push_back_slow_pathIRKlEEvOT_ */
/* Demangled: void std::__1::vector<long, std::__1::allocator<long> >::__push_back_slow_path<long const&>(long const&) */
int _ZNSt3__16vectorIlNS_9allocatorIlEEE21__push_back_slow_pathIRKlEEvOT_(void);

/* Symbol: _ZTCN5NSCam2v325HistoryBufferContainerImpE0_NS0_23IHistoryBufferContainerE */
/* Demangled: construction vtable for NSCam::v3::IHistoryBufferContainer-in-NSCam::v3::HistoryBufferContainerImp */
extern void* _ZTCN5NSCam2v325HistoryBufferContainerImpE0_NS0_23IHistoryBufferContainerE;

/* Symbol: _ZTVN5NSCam2v325HistoryBufferContainerImp18HistoryBufferSet_TE */
/* Demangled: vtable for NSCam::v3::HistoryBufferContainerImp::HistoryBufferSet_T */
extern void* _ZTVN5NSCam2v325HistoryBufferContainerImp18HistoryBufferSet_TE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp18HistoryBufferSet_TEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::v3::HistoryBufferContainerImp::HistoryBufferSet_T> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp18HistoryBufferSet_TEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferEjEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::v3::Utils::HalImageStreamBuffer*, unsigned int> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferEjEEE7do_copyEPvPKvm(void);

/* Symbol: _ZTCN5NSCam2v325HistoryBufferContainerImpE0_NS0_5Utils21IStreamBufferProviderE */
/* Demangled: construction vtable for NSCam::v3::Utils::IStreamBufferProvider-in-NSCam::v3::HistoryBufferContainerImp */
extern void* _ZTCN5NSCam2v325HistoryBufferContainerImpE0_NS0_5Utils21IStreamBufferProviderE;

/* Symbol: _ZN5NSCam2v325HistoryBufferContainerImp10dumpLockedEv */
/* Demangled: NSCam::v3::HistoryBufferContainerImp::dumpLocked() */
int _ZN5NSCam2v325HistoryBufferContainerImp10dumpLockedEv(void);

/* Symbol: _ZTVN7android6VectorIjEE */
/* Demangled: vtable for android::Vector<unsigned int> */
extern void* _ZTVN7android6VectorIjEE;

/* Symbol: _ZN5NSCam2v320StreamBufferProducer5clearEv */
/* Demangled: NSCam::v3::StreamBufferProducer::clear() */
int _ZN5NSCam2v320StreamBufferProducer5clearEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam2v325HistoryBufferContainerImp8Status_TEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::v3::HistoryBufferContainerImp::Status_T> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam2v325HistoryBufferContainerImp8Status_TEEEE12do_constructEPvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIjE12do_constructEPvm */
/* Demangled: android::Vector<unsigned int>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIjE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam2v325HistoryBufferContainerImp23dumpHistoryBufferLockedERKN7android2spINS1_18HistoryBufferSet_TEEE */
/* Demangled: NSCam::v3::HistoryBufferContainerImp::dumpHistoryBufferLocked(android::sp<NSCam::v3::HistoryBufferContainerImp::HistoryBufferSet_T> const&) */
int _ZN5NSCam2v325HistoryBufferContainerImp23dumpHistoryBufferLockedERKN7android2spINS1_18HistoryBufferSet_TEEE(void);

/* Symbol: _ZN5NSCam2v325HistoryBufferContainerImp26dumpAllHistoryBufferLockedEv */
/* Demangled: NSCam::v3::HistoryBufferContainerImp::dumpAllHistoryBufferLocked() */
int _ZN5NSCam2v325HistoryBufferContainerImp26dumpAllHistoryBufferLockedEv(void);

/* Symbol: _ZN5NSCam2v325HistoryBufferContainerImpC2EiRKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE */
/* Demangled: NSCam::v3::HistoryBufferContainerImp::HistoryBufferContainerImp(int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN5NSCam2v325HistoryBufferContainerImpC2EiRKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam2v325HistoryBufferContainerImp8Status_TEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::v3::HistoryBufferContainerImp::Status_T> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam2v325HistoryBufferContainerImp8Status_TEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp18HistoryBufferSet_TEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::v3::HistoryBufferContainerImp::HistoryBufferSet_T> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp18HistoryBufferSet_TEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v320StreamBufferProducerEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::StreamBufferProducer> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v320StreamBufferProducerEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5NSCam2v325HistoryBufferContainerImp29releaseOneHistoryBufferLockedEv */
/* Demangled: NSCam::v3::HistoryBufferContainerImp::releaseOneHistoryBufferLocked() */
int _ZN5NSCam2v325HistoryBufferContainerImp29releaseOneHistoryBufferLockedEv(void);

/* Symbol: _ZN5NSCam2v325HistoryBufferContainerImp5clearEj */
/* Demangled: NSCam::v3::HistoryBufferContainerImp::clear(unsigned int) */
int _ZN5NSCam2v325HistoryBufferContainerImp5clearEj(void);

/* Symbol: _ZN5NSCam2v320StreamBufferProducerC2EN7android2spINS0_16IImageStreamInfoEEENS3_INS0_10BufferPoolEEE */
/* Demangled: NSCam::v3::StreamBufferProducer::StreamBufferProducer(android::sp<NSCam::v3::IImageStreamInfo>, android::sp<NSCam::v3::BufferPool>) */
int _ZN5NSCam2v320StreamBufferProducerC2EN7android2spINS0_16IImageStreamInfoEEENS3_INS0_10BufferPoolEEE(void);

/* Symbol: _ZN5NSCam2v325HistoryBufferContainerImp12kStatusNamesE */
/* Demangled: NSCam::v3::HistoryBufferContainerImp::kStatusNames */
extern void* _ZN5NSCam2v325HistoryBufferContainerImp12kStatusNamesE;

/* Symbol: _ZN5NSCam2v325HistoryBufferContainerImp26initOneHistoryBufferLockedEjRKNSt3__16vectorIlNS2_9allocatorIlEEEES8_bNS1_8Status_TE */
/* Demangled: NSCam::v3::HistoryBufferContainerImp::initOneHistoryBufferLocked(unsigned int, std::__1::vector<long, std::__1::allocator<long> > const&, std::__1::vector<long, std::__1::allocator<long> > const&, bool, NSCam::v3::HistoryBufferContainerImp::Status_T) */
int _ZN5NSCam2v325HistoryBufferContainerImp26initOneHistoryBufferLockedEjRKNSt3__16vectorIlNS2_9allocatorIlEEEES8_bNS1_8Status_TE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferEjEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::v3::Utils::HalImageStreamBuffer*, unsigned int> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferEjEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp10MetaItem_TEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::HistoryBufferContainerImp::MetaItem_T> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp10MetaItem_TEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZTTN5NSCam2v310BufferPoolE */
/* Demangled: VTT for NSCam::v3::BufferPool */
extern void* _ZTTN5NSCam2v310BufferPoolE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIjE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<unsigned int>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIjE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN5NSCam2v310BufferPool17updateBufferCountEPKci */
/* Demangled: NSCam::v3::BufferPool::updateBufferCount(char const*, int) */
int _ZN5NSCam2v310BufferPool17updateBufferCountEPKci(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp10MetaItem_TEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::HistoryBufferContainerImp::MetaItem_T> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp10MetaItem_TEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v320StreamBufferProducerEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::StreamBufferProducer> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v320StreamBufferProducerEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferEjEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<NSCam::v3::Utils::HalImageStreamBuffer*, unsigned int> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferEjEEEE;

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferENS_2spINS2_16IImageBufferHeapEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<NSCam::v3::Utils::HalImageStreamBuffer*, android::sp<NSCam::IImageBufferHeap> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferENS_2spINS2_16IImageBufferHeapEEEEEEE;

/* Symbol: _ZN5NSCam2v323IHistoryBufferContainer14createInstanceEiRKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE */
/* Demangled: NSCam::v3::IHistoryBufferContainer::createInstance(int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN5NSCam2v323IHistoryBufferContainer14createInstanceEiRKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam2v325HistoryBufferContainerImp8Status_TEEEE10do_compareEPKvS9_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::v3::HistoryBufferContainerImp::Status_T> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam2v325HistoryBufferContainerImp8Status_TEEEE10do_compareEPKvS9_(void);

/* Symbol: _ZNK7android6VectorIPN5NSCam2v35Utils20HalImageStreamBufferEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::Utils::HalImageStreamBuffer*>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIPN5NSCam2v35Utils20HalImageStreamBufferEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIPN5NSCam2v35Utils20HalImageStreamBufferEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::Utils::HalImageStreamBuffer*>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIPN5NSCam2v35Utils20HalImageStreamBufferEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferENS_2spINS2_16IImageBufferHeapEEEEEE10do_compareEPKvSD_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::v3::Utils::HalImageStreamBuffer*, android::sp<NSCam::IImageBufferHeap> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferENS_2spINS2_16IImageBufferHeapEEEEEE10do_compareEPKvSD_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferENS_2spINS2_16IImageBufferHeapEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::v3::Utils::HalImageStreamBuffer*, android::sp<NSCam::IImageBufferHeap> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferENS_2spINS2_16IImageBufferHeapEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN5NSCam2v325HistoryBufferContainerImp17dequeStreamBufferEjN7android2spINS0_16IImageStreamInfoEEERNS3_INS0_5Utils20HalImageStreamBufferEEE */
/* Demangled: NSCam::v3::HistoryBufferContainerImp::dequeStreamBuffer(unsigned int, android::sp<NSCam::v3::IImageStreamInfo>, android::sp<NSCam::v3::Utils::HalImageStreamBuffer>&) */
int _ZN5NSCam2v325HistoryBufferContainerImp17dequeStreamBufferEjN7android2spINS0_16IImageStreamInfoEEERNS3_INS0_5Utils20HalImageStreamBufferEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferEjEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<NSCam::v3::Utils::HalImageStreamBuffer*, unsigned int> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIPN5NSCam2v35Utils20HalImageStreamBufferEjEEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp14AcquiredData_TEEEEEE10do_compareEPKvSB_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<NSCam::v3::HistoryBufferContainerImp::AcquiredData_T> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spIN5NSCam2v325HistoryBufferContainerImp14AcquiredData_TEEEEEE10do_compareEPKvSB_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE10do_compareEPKvSA_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE10do_compareEPKvSA_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v320StreamBufferProducerEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::StreamBufferProducer> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v320StreamBufferProducerEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android6VectorIjE7do_copyEPvPKvm */
/* Demangled: android::Vector<unsigned int>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIjE7do_copyEPvPKvm(void);

/* Symbol: _ZNSt3__16__treeIPN5NSCam2v320StreamBufferProducerENS_4lessIS4_EENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE */
/* Demangled: std::__1::__tree<NSCam::v3::StreamBufferProducer*, std::__1::less<NSCam::v3::StreamBufferProducer*>, std::__1::allocator<NSCam::v3::StreamBufferProducer*> >::destroy(std::__1::__tree_node<NSCam::v3::StreamBufferProducer*, void*>*) */
int _ZNSt3__16__treeIPN5NSCam2v320StreamBufferProducerENS_4lessIS4_EENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE(void);

/* Symbol: _ZN5NSCam2v320StreamBufferProducer28allocateBufferFromPoolLockedEv */
/* Demangled: NSCam::v3::StreamBufferProducer::allocateBufferFromPoolLocked() */
int _ZN5NSCam2v320StreamBufferProducer28allocateBufferFromPoolLockedEv(void);

/* Symbol: _ZN5NSCam2v320StreamBufferProducerC1EN7android2spINS0_16IImageStreamInfoEEENS3_INS0_10BufferPoolEEE */
/* Demangled: NSCam::v3::StreamBufferProducer::StreamBufferProducer(android::sp<NSCam::v3::IImageStreamInfo>, android::sp<NSCam::v3::BufferPool>) */
int _ZN5NSCam2v320StreamBufferProducerC1EN7android2spINS0_16IImageStreamInfoEEENS3_INS0_10BufferPoolEEE(void);

/* Symbol: _ZN5NSCam2v325HistoryBufferContainerImp17acquireBufferSetsERN7android6VectorINS0_23IHistoryBufferContainer11BufferSet_TEEEjRKNS4_11StreamIds_TE */
/* Demangled: NSCam::v3::HistoryBufferContainerImp::acquireBufferSets(android::Vector<NSCam::v3::IHistoryBufferContainer::BufferSet_T>&, unsigned int, NSCam::v3::IHistoryBufferContainer::StreamIds_T const&) */
int _ZN5NSCam2v325HistoryBufferContainerImp17acquireBufferSetsERN7android6VectorINS0_23IHistoryBufferContainer11BufferSet_TEEEjRKNS4_11StreamIds_TE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam2v325HistoryBufferContainerImp8Status_TEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, NSCam::v3::HistoryBufferContainerImp::Status_T> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjN5NSCam2v325HistoryBufferContainerImp8Status_TEEEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp11ImageItem_TEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::HistoryBufferContainerImp::ImageItem_T> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v325HistoryBufferContainerImp11ImageItem_TEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v320StreamBufferProducerEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::StreamBufferProducer> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v320StreamBufferProducerEEEEEE12do_constructEPvm(void);

/* Symbol: _ZNK7android6VectorIjE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<unsigned int>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIjE16do_move_backwardEPvPKvm(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBMTKCAM_PIPELINEMODEL_HBC_H */
