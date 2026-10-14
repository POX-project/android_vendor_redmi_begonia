/*
 * Reverse-Engineered ABI Specification for: libmtkcam_pipelinemodel_capture.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libmtkcam_pipelinemodel_capture.so
 */

#ifndef BEGONIA_RE_LIBMTKCAM_PIPELINEMODEL_CAPTURE_H
#define BEGONIA_RE_LIBMTKCAM_PIPELINEMODEL_CAPTURE_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjbEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, bool> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjbEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZTCN5NSCam2v38pipeline5model22CaptureInFlightRequestE0_NS2_23ICaptureInFlightRequestE */
/* Demangled: construction vtable for NSCam::v3::pipeline::model::ICaptureInFlightRequest-in-NSCam::v3::pipeline::model::CaptureInFlightRequest */
extern void* _ZTCN5NSCam2v38pipeline5model22CaptureInFlightRequestE0_NS2_23ICaptureInFlightRequestE;

/* Symbol: _ZTTN5NSCam2v38pipeline5model22CaptureInFlightRequestE */
/* Demangled: VTT for NSCam::v3::pipeline::model::CaptureInFlightRequest */
extern void* _ZTTN5NSCam2v38pipeline5model22CaptureInFlightRequestE;

/* Symbol: _ZTVN7android4ListIjEE */
/* Demangled: vtable for android::List<unsigned int> */
extern void* _ZTVN7android4ListIjEE;

/* Symbol: _ZN5NSCam2v38pipeline5model19AppRaw16ReprocessorC1ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_20IAppRaw16Reprocessor10CtorParamsE */
/* Demangled: NSCam::v3::pipeline::model::AppRaw16Reprocessor::AppRaw16Reprocessor(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, NSCam::v3::pipeline::model::IAppRaw16Reprocessor::CtorParams const&) */
int _ZN5NSCam2v38pipeline5model19AppRaw16ReprocessorC1ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_20IAppRaw16Reprocessor10CtorParamsE(void);

/* Symbol: _ZN5NSCam2v38pipeline5model22CaptureInFlightRequest13insertRequestEjj */
/* Demangled: NSCam::v3::pipeline::model::CaptureInFlightRequest::insertRequest(unsigned int, unsigned int) */
int _ZN5NSCam2v38pipeline5model22CaptureInFlightRequest13insertRequestEjj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjbEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, bool> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjbEEE8do_splatEPvPKvm(void);

/* Symbol: _ZN5NSCam2v38pipeline5model19AppRaw16Reprocessor21setReprocessRequestNoEj */
/* Demangled: NSCam::v3::pipeline::model::AppRaw16Reprocessor::setReprocessRequestNo(unsigned int) */
int _ZN5NSCam2v38pipeline5model19AppRaw16Reprocessor21setReprocessRequestNoEj(void);

/* Symbol: _ZN5NSCam2v38pipeline5model19AppRaw16Reprocessor5resetEv */
/* Demangled: NSCam::v3::pipeline::model::AppRaw16Reprocessor::reset() */
int _ZN5NSCam2v38pipeline5model19AppRaw16Reprocessor5resetEv(void);

/* Symbol: _ZTVN7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEEE */
/* Demangled: vtable for android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> > */
extern void* _ZTVN7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEEE;

/* Symbol: _ZN5NSCam2v38pipeline5model19NextCaptureListener12get_fd_countEv */
/* Demangled: NSCam::v3::pipeline::model::NextCaptureListener::get_fd_count() */
int _ZN5NSCam2v38pipeline5model19NextCaptureListener12get_fd_countEv(void);

/* Symbol: _ZTVN5NSCam2v38pipeline5model19NextCaptureListenerE */
/* Demangled: vtable for NSCam::v3::pipeline::model::NextCaptureListener */
extern void* _ZTVN5NSCam2v38pipeline5model19NextCaptureListenerE;

/* Symbol: _ZN5NSCam2v38pipeline5model19AppRaw16Reprocessor24transferBuffersFromFrameERKNS3_30TransferBuffersFromFrameParamsE */
/* Demangled: NSCam::v3::pipeline::model::AppRaw16Reprocessor::transferBuffersFromFrame(NSCam::v3::pipeline::model::AppRaw16Reprocessor::TransferBuffersFromFrameParams const&) */
int _ZN5NSCam2v38pipeline5model19AppRaw16Reprocessor24transferBuffersFromFrameERKNS3_30TransferBuffersFromFrameParamsE(void);

/* Symbol: _ZN7android2spIN5NSCam2v330IPipelineBufferSetFrameControlEEaSEPS3_ */
/* Demangled: android::sp<NSCam::v3::IPipelineBufferSetFrameControl>::operator=(NSCam::v3::IPipelineBufferSetFrameControl*) */
int _ZN7android2spIN5NSCam2v330IPipelineBufferSetFrameControlEEaSEPS3_(void);

/* Symbol: _ZNK5NSCam2v38pipeline5model19AppRaw16Reprocessor24checkJpegControlMetadataEPNS_9IMetadataE */
/* Demangled: NSCam::v3::pipeline::model::AppRaw16Reprocessor::checkJpegControlMetadata(NSCam::IMetadata*) const */
int _ZNK5NSCam2v38pipeline5model19AppRaw16Reprocessor24checkJpegControlMetadataEPNS_9IMetadataE(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE10do_destroyEPvm */
/* Demangled: android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE7do_copyEPvPKvm */
/* Demangled: android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v318IImageStreamBufferEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<android::sp<NSCam::v3::IImageStreamBuffer> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v318IImageStreamBufferEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZTTN5NSCam2v38pipeline5model19AppRaw16ReprocessorE */
/* Demangled: VTT for NSCam::v3::pipeline::model::AppRaw16Reprocessor */
extern void* _ZTTN5NSCam2v38pipeline5model19AppRaw16ReprocessorE;

/* Symbol: _ZN5NSCam2v38pipeline5model22CaptureInFlightRequestC2EiRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE */
/* Demangled: NSCam::v3::pipeline::model::CaptureInFlightRequest::CaptureInFlightRequest(int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN5NSCam2v38pipeline5model22CaptureInFlightRequestC2EiRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjbEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, bool> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjbEEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjbEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, bool> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjbEEE12do_constructEPvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjbEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, bool> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjbEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5NSCam2v38pipeline5model20IAppRaw16Reprocessor12makeInstanceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS3_10CtorParamsE */
/* Demangled: NSCam::v3::pipeline::model::IAppRaw16Reprocessor::makeInstance(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, NSCam::v3::pipeline::model::IAppRaw16Reprocessor::CtorParams const&) */
int _ZN5NSCam2v38pipeline5model20IAppRaw16Reprocessor12makeInstanceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS3_10CtorParamsE(void);

/* Symbol: _ZTVN5NSCam2v38pipeline5model22CaptureInFlightRequestE */
/* Demangled: vtable for NSCam::v3::pipeline::model::CaptureInFlightRequest */
extern void* _ZTVN5NSCam2v38pipeline5model22CaptureInFlightRequestE;

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIjbEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, bool> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjbEEEE;

/* Symbol: _ZN5NSCam2v38pipeline5model19NextCaptureListener20onNextCaptureUpdatedEj */
/* Demangled: NSCam::v3::pipeline::model::NextCaptureListener::onNextCaptureUpdated(unsigned int) */
int _ZN5NSCam2v38pipeline5model19NextCaptureListener20onNextCaptureUpdatedEj(void);

/* Symbol: _ZN5NSCam2v38pipeline5model19AppRaw16Reprocessor8endFlushEv */
/* Demangled: NSCam::v3::pipeline::model::AppRaw16Reprocessor::endFlush() */
int _ZN5NSCam2v38pipeline5model19AppRaw16Reprocessor8endFlushEv(void);

/* Symbol: _ZNSt3__14listIN7android2spIN5NSCam2v314IPipelineFrameEEENS_9allocatorIS6_EEE13__move_assignERS9_NS_17integral_constantIbLb1EEE */
/* Demangled: std::__1::list<android::sp<NSCam::v3::IPipelineFrame>, std::__1::allocator<android::sp<NSCam::v3::IPipelineFrame> > >::__move_assign(std::__1::list<android::sp<NSCam::v3::IPipelineFrame>, std::__1::allocator<android::sp<NSCam::v3::IPipelineFrame> > >&, std::__1::integral_constant<bool, true>) */
int _ZNSt3__14listIN7android2spIN5NSCam2v314IPipelineFrameEEENS_9allocatorIS6_EEE13__move_assignERS9_NS_17integral_constantIbLb1EEE(void);

/* Symbol: _ZTCN5NSCam2v38pipeline5model19AppRaw16ReprocessorE0_NS2_20IAppRaw16ReprocessorE */
/* Demangled: construction vtable for NSCam::v3::pipeline::model::IAppRaw16Reprocessor-in-NSCam::v3::pipeline::model::AppRaw16Reprocessor */
extern void* _ZTCN5NSCam2v38pipeline5model19AppRaw16ReprocessorE0_NS2_20IAppRaw16ReprocessorE;

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _ZN5NSCam2v38pipeline5model22CaptureInFlightRequest13removeRequestEj */
/* Demangled: NSCam::v3::pipeline::model::CaptureInFlightRequest::removeRequest(unsigned int) */
int _ZN5NSCam2v38pipeline5model22CaptureInFlightRequest13removeRequestEj(void);

/* Symbol: _ZN7android4ListINS_2wpIN5NSCam2v38pipeline5model24ICaptureInFlightListenerEEEEaSERKS8_ */
/* Demangled: android::List<android::wp<NSCam::v3::pipeline::model::ICaptureInFlightListener> >::operator=(android::List<android::wp<NSCam::v3::pipeline::model::ICaptureInFlightListener> > const&) */
int _ZN7android4ListINS_2wpIN5NSCam2v38pipeline5model24ICaptureInFlightListenerEEEEaSERKS8_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjbEEE10do_compareEPKvS5_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, bool> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjbEEE10do_compareEPKvS5_(void);

/* Symbol: _ZN5NSCam2v38pipeline5model19NextCaptureListener21onNextCaptureCallBackEjji */
/* Demangled: NSCam::v3::pipeline::model::NextCaptureListener::onNextCaptureCallBack(unsigned int, unsigned int, int) */
int _ZN5NSCam2v38pipeline5model19NextCaptureListener21onNextCaptureCallBackEjji(void);

/* Symbol: _ZTVN7android4ListINS_2wpIN5NSCam2v38pipeline5model24ICaptureInFlightListenerEEEEE */
/* Demangled: vtable for android::List<android::wp<NSCam::v3::pipeline::model::ICaptureInFlightListener> > */
extern void* _ZTVN7android4ListINS_2wpIN5NSCam2v38pipeline5model24ICaptureInFlightListenerEEEEE;

/* Symbol: _ZN5NSCam2v38pipeline5model20INextCaptureListener14createInstanceEiRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS3_10CtorParamsE */
/* Demangled: NSCam::v3::pipeline::model::INextCaptureListener::createInstance(int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, NSCam::v3::pipeline::model::INextCaptureListener::CtorParams const&) */
int _ZN5NSCam2v38pipeline5model20INextCaptureListener14createInstanceEiRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS3_10CtorParamsE(void);

/* Symbol: _ZN5NSCam2v38pipeline5model19AppRaw16Reprocessor10beginFlushEv */
/* Demangled: NSCam::v3::pipeline::model::AppRaw16Reprocessor::beginFlush() */
int _ZN5NSCam2v38pipeline5model19AppRaw16Reprocessor10beginFlushEv(void);

/* Symbol: _ZN5NSCam2v38pipeline5model19AppRaw16Reprocessor17keepFrameIfNeededERKNS2_20IAppRaw16Reprocessor23KeepFrameIfNeededParamsE */
/* Demangled: NSCam::v3::pipeline::model::AppRaw16Reprocessor::keepFrameIfNeeded(NSCam::v3::pipeline::model::IAppRaw16Reprocessor::KeepFrameIfNeededParams const&) */
int _ZN5NSCam2v38pipeline5model19AppRaw16Reprocessor17keepFrameIfNeededERKNS2_20IAppRaw16Reprocessor23KeepFrameIfNeededParamsE(void);

/* Symbol: _ZN5NSCam2v38pipeline5model19AppRaw16Reprocessor20handleReprocessFrameERKNS2_20IAppRaw16Reprocessor26HandleReprocessFrameParamsE */
/* Demangled: NSCam::v3::pipeline::model::AppRaw16Reprocessor::handleReprocessFrame(NSCam::v3::pipeline::model::IAppRaw16Reprocessor::HandleReprocessFrameParams const&) */
int _ZN5NSCam2v38pipeline5model19AppRaw16Reprocessor20handleReprocessFrameERKNS2_20IAppRaw16Reprocessor26HandleReprocessFrameParamsE(void);

/* Symbol: _ZN5NSCam2v38pipeline5model19AppRaw16ReprocessorC2ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_20IAppRaw16Reprocessor10CtorParamsE */
/* Demangled: NSCam::v3::pipeline::model::AppRaw16Reprocessor::AppRaw16Reprocessor(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, NSCam::v3::pipeline::model::IAppRaw16Reprocessor::CtorParams const&) */
int _ZN5NSCam2v38pipeline5model19AppRaw16ReprocessorC2ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_20IAppRaw16Reprocessor10CtorParamsE(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v318IImageStreamBufferEEEE7do_copyEPvPKvm */
/* Demangled: android::Vector<android::sp<NSCam::v3::IImageStreamBuffer> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v318IImageStreamBufferEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZTVN5NSCam2v38pipeline5model19AppRaw16ReprocessorE */
/* Demangled: vtable for NSCam::v3::pipeline::model::AppRaw16Reprocessor */
extern void* _ZTVN5NSCam2v38pipeline5model19AppRaw16ReprocessorE;

/* Symbol: _ZN5NSCam2v38pipeline5model19AppRaw16Reprocessor23acquireAllHistoryFramesEv */
/* Demangled: NSCam::v3::pipeline::model::AppRaw16Reprocessor::acquireAllHistoryFrames() */
int _ZN5NSCam2v38pipeline5model19AppRaw16Reprocessor23acquireAllHistoryFramesEv(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _ZN5NSCam2v38pipeline5model23ICaptureInFlightRequest14createInstanceEiRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE */
/* Demangled: NSCam::v3::pipeline::model::ICaptureInFlightRequest::createInstance(int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN5NSCam2v38pipeline5model23ICaptureInFlightRequest14createInstanceEiRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjbEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, bool> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjbEEE7do_copyEPvPKvm(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v318IImageStreamBufferEEEE8do_splatEPvPKvm */
/* Demangled: android::Vector<android::sp<NSCam::v3::IImageStreamBuffer> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v318IImageStreamBufferEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZN5NSCam2v38pipeline5model19NextCaptureListener24onCaptureInFlightUpdatedERKNS2_22CaptureInFlightUpdatedE */
/* Demangled: NSCam::v3::pipeline::model::NextCaptureListener::onCaptureInFlightUpdated(NSCam::v3::pipeline::model::CaptureInFlightUpdated const&) */
int _ZN5NSCam2v38pipeline5model19NextCaptureListener24onCaptureInFlightUpdatedERKNS2_22CaptureInFlightUpdatedE(void);

/* Symbol: _ZN5NSCam2v38pipeline5model19NextCaptureListenerC2EiRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_20INextCaptureListener10CtorParamsE */
/* Demangled: NSCam::v3::pipeline::model::NextCaptureListener::NextCaptureListener(int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, NSCam::v3::pipeline::model::INextCaptureListener::CtorParams const&) */
int _ZN5NSCam2v38pipeline5model19NextCaptureListenerC2EiRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_20INextCaptureListener10CtorParamsE(void);

/* Symbol: _ZTCN5NSCam2v38pipeline5model19NextCaptureListenerE0_NS2_24ICaptureInFlightListenerE */
/* Demangled: construction vtable for NSCam::v3::pipeline::model::ICaptureInFlightListener-in-NSCam::v3::pipeline::model::NextCaptureListener */
extern void* _ZTCN5NSCam2v38pipeline5model19NextCaptureListenerE0_NS2_24ICaptureInFlightListenerE;

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v318IImageStreamBufferEEEE12do_constructEPvm */
/* Demangled: android::Vector<android::sp<NSCam::v3::IImageStreamBuffer> >::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v318IImageStreamBufferEEEE12do_constructEPvm(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE12do_constructEPvm */
/* Demangled: android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE12do_constructEPvm(void);

/* Symbol: _ZNSt3__16__treeIlNS_4lessIlEENS_9allocatorIlEEE7destroyEPNS_11__tree_nodeIlPvEE */
/* Demangled: std::__1::__tree<long, std::__1::less<long>, std::__1::allocator<long> >::destroy(std::__1::__tree_node<long, void*>*) */
int _ZNSt3__16__treeIlNS_4lessIlEENS_9allocatorIlEEE7destroyEPNS_11__tree_nodeIlPvEE(void);

/* Symbol: _ZN5NSCam2v38pipeline5model22CaptureInFlightRequest16registerListenerEN7android2wpINS2_24ICaptureInFlightListenerEEE */
/* Demangled: NSCam::v3::pipeline::model::CaptureInFlightRequest::registerListener(android::wp<NSCam::v3::pipeline::model::ICaptureInFlightListener>) */
int _ZN5NSCam2v38pipeline5model22CaptureInFlightRequest16registerListenerEN7android2wpINS2_24ICaptureInFlightListenerEEE(void);

/* Symbol: _ZN5NSCam2v38pipeline5model19AppRaw16Reprocessor23resetReprocessRequestNoEj */
/* Demangled: NSCam::v3::pipeline::model::AppRaw16Reprocessor::resetReprocessRequestNo(unsigned int) */
int _ZN5NSCam2v38pipeline5model19AppRaw16Reprocessor23resetReprocessRequestNoEj(void);

/* Symbol: _ZN5NSCam2v38pipeline5model19AppRaw16Reprocessor26prepareReprocessHalBuffersERKNS2_20IAppRaw16Reprocessor26HandleReprocessFrameParamsE */
/* Demangled: NSCam::v3::pipeline::model::AppRaw16Reprocessor::prepareReprocessHalBuffers(NSCam::v3::pipeline::model::IAppRaw16Reprocessor::HandleReprocessFrameParams const&) */
int _ZN5NSCam2v38pipeline5model19AppRaw16Reprocessor26prepareReprocessHalBuffersERKNS2_20IAppRaw16Reprocessor26HandleReprocessFrameParamsE(void);

/* Symbol: _ZN5NSCam2v38pipeline5model22CaptureInFlightRequest14removeListenerEN7android2wpINS2_24ICaptureInFlightListenerEEE */
/* Demangled: NSCam::v3::pipeline::model::CaptureInFlightRequest::removeListener(android::wp<NSCam::v3::pipeline::model::ICaptureInFlightListener>) */
int _ZN5NSCam2v38pipeline5model22CaptureInFlightRequest14removeListenerEN7android2wpINS2_24ICaptureInFlightListenerEEE(void);

/* Symbol: _ZN5NSCam2v38pipeline5model19AppRaw16Reprocessor17notifyRequestDoneEj */
/* Demangled: NSCam::v3::pipeline::model::AppRaw16Reprocessor::notifyRequestDone(unsigned int) */
int _ZN5NSCam2v38pipeline5model19AppRaw16Reprocessor17notifyRequestDoneEj(void);

/* Symbol: _ZN5NSCam2v38pipeline5model22CaptureInFlightRequestC1EiRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE */
/* Demangled: NSCam::v3::pipeline::model::CaptureInFlightRequest::CaptureInFlightRequest(int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN5NSCam2v38pipeline5model22CaptureInFlightRequestC1EiRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void);

/* Symbol: _ZTCN5NSCam2v38pipeline5model19NextCaptureListenerE0_NS2_20INextCaptureListenerE */
/* Demangled: construction vtable for NSCam::v3::pipeline::model::INextCaptureListener-in-NSCam::v3::pipeline::model::NextCaptureListener */
extern void* _ZTCN5NSCam2v38pipeline5model19NextCaptureListenerE0_NS2_20INextCaptureListenerE;

/* Symbol: _ZN5NSCam2v38pipeline5model19AppRaw16Reprocessor30selectHistoryFrameForReprocessERN7android2spINS0_30IPipelineBufferSetFrameControlEEERNSt3__14listINS5_INS0_14IPipelineFrameEEENS9_9allocatorISC_EEEElj */
/* Demangled: NSCam::v3::pipeline::model::AppRaw16Reprocessor::selectHistoryFrameForReprocess(android::sp<NSCam::v3::IPipelineBufferSetFrameControl>&, std::__1::list<android::sp<NSCam::v3::IPipelineFrame>, std::__1::allocator<android::sp<NSCam::v3::IPipelineFrame> > >&, long, unsigned int) */
int _ZN5NSCam2v38pipeline5model19AppRaw16Reprocessor30selectHistoryFrameForReprocessERN7android2spINS0_30IPipelineBufferSetFrameControlEEERNSt3__14listINS5_INS0_14IPipelineFrameEEENS9_9allocatorISC_EEEElj(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE8do_splatEPvPKvm */
/* Demangled: android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZTVN7android6VectorINS_2spIN5NSCam2v318IImageStreamBufferEEEEE */
/* Demangled: vtable for android::Vector<android::sp<NSCam::v3::IImageStreamBuffer> > */
extern void* _ZTVN7android6VectorINS_2spIN5NSCam2v318IImageStreamBufferEEEEE;

/* Symbol: _ZN5NSCam2v38pipeline5model19NextCaptureListener19nextCaptureDecisionEjj */
/* Demangled: NSCam::v3::pipeline::model::NextCaptureListener::nextCaptureDecision(unsigned int, unsigned int) */
int _ZN5NSCam2v38pipeline5model19NextCaptureListener19nextCaptureDecisionEjj(void);

/* Symbol: _ZNK5NSCam2v38pipeline5model19AppRaw16Reprocessor18debugRequestResultERKNS2_20IAppRaw16Reprocessor24DebugRequestResultParamsE */
/* Demangled: NSCam::v3::pipeline::model::AppRaw16Reprocessor::debugRequestResult(NSCam::v3::pipeline::model::IAppRaw16Reprocessor::DebugRequestResultParams const&) const */
int _ZNK5NSCam2v38pipeline5model19AppRaw16Reprocessor18debugRequestResultERKNS2_20IAppRaw16Reprocessor24DebugRequestResultParamsE(void);

/* Symbol: _ZN5NSCam2v38pipeline5model19NextCaptureListenerC1EiRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_20INextCaptureListener10CtorParamsE */
/* Demangled: NSCam::v3::pipeline::model::NextCaptureListener::NextCaptureListener(int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, NSCam::v3::pipeline::model::INextCaptureListener::CtorParams const&) */
int _ZN5NSCam2v38pipeline5model19NextCaptureListenerC1EiRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_20INextCaptureListener10CtorParamsE(void);

/* Symbol: _ZN5NSCam2v38pipeline5model19AppRaw16Reprocessor21keepFrameForReprocessERKNS2_20IAppRaw16Reprocessor23KeepFrameIfNeededParamsE */
/* Demangled: NSCam::v3::pipeline::model::AppRaw16Reprocessor::keepFrameForReprocess(NSCam::v3::pipeline::model::IAppRaw16Reprocessor::KeepFrameIfNeededParams const&) */
int _ZN5NSCam2v38pipeline5model19AppRaw16Reprocessor21keepFrameForReprocessERKNS2_20IAppRaw16Reprocessor23KeepFrameIfNeededParamsE(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v318IImageStreamBufferEEEE10do_destroyEPvm */
/* Demangled: android::Vector<android::sp<NSCam::v3::IImageStreamBuffer> >::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v318IImageStreamBufferEEEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v318IImageStreamBufferEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<android::sp<NSCam::v3::IImageStreamBuffer> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v318IImageStreamBufferEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZTTN5NSCam2v38pipeline5model19NextCaptureListenerE */
/* Demangled: VTT for NSCam::v3::pipeline::model::NextCaptureListener */
extern void* _ZTTN5NSCam2v38pipeline5model19NextCaptureListenerE;

/* Symbol: _ZN5NSCam2v38pipeline5model19AppRaw16Reprocessor9dumpStateERN7android7PrinterE */
/* Demangled: NSCam::v3::pipeline::model::AppRaw16Reprocessor::dumpState(android::Printer&) */
int _ZN5NSCam2v38pipeline5model19AppRaw16Reprocessor9dumpStateERN7android7PrinterE(void);

/* Symbol: end */
/* Demangled: end */
extern void* end;

/* Symbol: _ZN5NSCam2v38pipeline5model22CaptureInFlightRequest22captureInFlightUpdatedEv */
/* Demangled: NSCam::v3::pipeline::model::CaptureInFlightRequest::captureInFlightUpdated() */
int _ZN5NSCam2v38pipeline5model22CaptureInFlightRequest22captureInFlightUpdatedEv(void);

/* Symbol: _ZNK5NSCam2v38pipeline5model19AppRaw16Reprocessor16isReprocessFrameERKNS2_20IAppRaw16Reprocessor22IsReprocessFrameParamsE */
/* Demangled: NSCam::v3::pipeline::model::AppRaw16Reprocessor::isReprocessFrame(NSCam::v3::pipeline::model::IAppRaw16Reprocessor::IsReprocessFrameParams const&) const */
int _ZNK5NSCam2v38pipeline5model19AppRaw16Reprocessor16isReprocessFrameERKNS2_20IAppRaw16Reprocessor22IsReprocessFrameParamsE(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBMTKCAM_PIPELINEMODEL_CAPTURE_H */
