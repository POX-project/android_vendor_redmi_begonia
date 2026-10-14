/*
 * Reverse-Engineered Source for: libmtkcam_pipelinemodel_capture.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libmtkcam_pipelinemodel_capture"

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
#include "libmtkcam_pipelinemodel_capture.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, bool> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjbEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjbEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::pipeline::model::ICaptureInFlightRequest-in-NSCam::v3::pipeline::model::CaptureInFlightRequest */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v38pipeline5model22CaptureInFlightRequestE0_NS2_23ICaptureInFlightRequestE = NULL;

/* Exported Object: VTT for NSCam::v3::pipeline::model::CaptureInFlightRequest */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam2v38pipeline5model22CaptureInFlightRequestE = NULL;

/* Exported Object: vtable for android::List<unsigned int> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android4ListIjEE = NULL;

/* Demangled: NSCam::v3::pipeline::model::AppRaw16Reprocessor::AppRaw16Reprocessor(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, NSCam::v3::pipeline::model::IAppRaw16Reprocessor::CtorParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model19AppRaw16ReprocessorC1ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_20IAppRaw16Reprocessor10CtorParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model19AppRaw16ReprocessorC1ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_20IAppRaw16Reprocessor10CtorParamsE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::CaptureInFlightRequest::insertRequest(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model22CaptureInFlightRequest13insertRequestEjj(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model22CaptureInFlightRequest13insertRequestEjj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, bool> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjbEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjbEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::AppRaw16Reprocessor::setReprocessRequestNo(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model19AppRaw16Reprocessor21setReprocessRequestNoEj(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model19AppRaw16Reprocessor21setReprocessRequestNoEj() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::AppRaw16Reprocessor::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model19AppRaw16Reprocessor5resetEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model19AppRaw16Reprocessor5resetEv() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEEE = NULL;

/* Demangled: NSCam::v3::pipeline::model::NextCaptureListener::get_fd_count() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model19NextCaptureListener12get_fd_countEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model19NextCaptureListener12get_fd_countEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::pipeline::model::NextCaptureListener */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38pipeline5model19NextCaptureListenerE = NULL;

/* Demangled: NSCam::v3::pipeline::model::AppRaw16Reprocessor::transferBuffersFromFrame(NSCam::v3::pipeline::model::AppRaw16Reprocessor::TransferBuffersFromFrameParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model19AppRaw16Reprocessor24transferBuffersFromFrameERKNS3_30TransferBuffersFromFrameParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model19AppRaw16Reprocessor24transferBuffersFromFrameERKNS3_30TransferBuffersFromFrameParamsE() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::IPipelineBufferSetFrameControl>::operator=(NSCam::v3::IPipelineBufferSetFrameControl*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v330IPipelineBufferSetFrameControlEEaSEPS3_(void) {
    ALOGD("_ZN7android2spIN5NSCam2v330IPipelineBufferSetFrameControlEEaSEPS3_() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::AppRaw16Reprocessor::checkJpegControlMetadata(NSCam::IMetadata*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v38pipeline5model19AppRaw16Reprocessor24checkJpegControlMetadataEPNS_9IMetadataE(void) {
    ALOGD("_ZNK5NSCam2v38pipeline5model19AppRaw16Reprocessor24checkJpegControlMetadataEPNS_9IMetadataE() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::v3::IImageStreamBuffer> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v318IImageStreamBufferEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v318IImageStreamBufferEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Exported Object: VTT for NSCam::v3::pipeline::model::AppRaw16Reprocessor */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam2v38pipeline5model19AppRaw16ReprocessorE = NULL;

/* Demangled: NSCam::v3::pipeline::model::CaptureInFlightRequest::CaptureInFlightRequest(int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model22CaptureInFlightRequestC2EiRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model22CaptureInFlightRequestC2EiRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, bool> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjbEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjbEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, bool> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjbEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjbEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, bool> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjbEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjbEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::IAppRaw16Reprocessor::makeInstance(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, NSCam::v3::pipeline::model::IAppRaw16Reprocessor::CtorParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model20IAppRaw16Reprocessor12makeInstanceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS3_10CtorParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model20IAppRaw16Reprocessor12makeInstanceERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS3_10CtorParamsE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::pipeline::model::CaptureInFlightRequest */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38pipeline5model22CaptureInFlightRequestE = NULL;

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, bool> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjbEEEE = NULL;

/* Demangled: NSCam::v3::pipeline::model::NextCaptureListener::onNextCaptureUpdated(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model19NextCaptureListener20onNextCaptureUpdatedEj(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model19NextCaptureListener20onNextCaptureUpdatedEj() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::AppRaw16Reprocessor::endFlush() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model19AppRaw16Reprocessor8endFlushEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model19AppRaw16Reprocessor8endFlushEv() called");
    return 0;
}

/* Demangled: std::__1::list<android::sp<NSCam::v3::IPipelineFrame>, std::__1::allocator<android::sp<NSCam::v3::IPipelineFrame> > >::__move_assign(std::__1::list<android::sp<NSCam::v3::IPipelineFrame>, std::__1::allocator<android::sp<NSCam::v3::IPipelineFrame> > >&, std::__1::integral_constant<bool, true>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14listIN7android2spIN5NSCam2v314IPipelineFrameEEENS_9allocatorIS6_EEE13__move_assignERS9_NS_17integral_constantIbLb1EEE(void) {
    ALOGD("_ZNSt3__14listIN7android2spIN5NSCam2v314IPipelineFrameEEENS_9allocatorIS6_EEE13__move_assignERS9_NS_17integral_constantIbLb1EEE() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::pipeline::model::IAppRaw16Reprocessor-in-NSCam::v3::pipeline::model::AppRaw16Reprocessor */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v38pipeline5model19AppRaw16ReprocessorE0_NS2_20IAppRaw16ReprocessorE = NULL;

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: NSCam::v3::pipeline::model::CaptureInFlightRequest::removeRequest(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model22CaptureInFlightRequest13removeRequestEj(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model22CaptureInFlightRequest13removeRequestEj() called");
    return 0;
}

/* Demangled: android::List<android::wp<NSCam::v3::pipeline::model::ICaptureInFlightListener> >::operator=(android::List<android::wp<NSCam::v3::pipeline::model::ICaptureInFlightListener> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4ListINS_2wpIN5NSCam2v38pipeline5model24ICaptureInFlightListenerEEEEaSERKS8_(void) {
    ALOGD("_ZN7android4ListINS_2wpIN5NSCam2v38pipeline5model24ICaptureInFlightListenerEEEEaSERKS8_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, bool> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjbEEE10do_compareEPKvS5_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjbEEE10do_compareEPKvS5_() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::NextCaptureListener::onNextCaptureCallBack(unsigned int, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model19NextCaptureListener21onNextCaptureCallBackEjji(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model19NextCaptureListener21onNextCaptureCallBackEjji() called");
    return 0;
}

/* Exported Object: vtable for android::List<android::wp<NSCam::v3::pipeline::model::ICaptureInFlightListener> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android4ListINS_2wpIN5NSCam2v38pipeline5model24ICaptureInFlightListenerEEEEE = NULL;

/* Demangled: NSCam::v3::pipeline::model::INextCaptureListener::createInstance(int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, NSCam::v3::pipeline::model::INextCaptureListener::CtorParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model20INextCaptureListener14createInstanceEiRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS3_10CtorParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model20INextCaptureListener14createInstanceEiRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS3_10CtorParamsE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::AppRaw16Reprocessor::beginFlush() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model19AppRaw16Reprocessor10beginFlushEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model19AppRaw16Reprocessor10beginFlushEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::AppRaw16Reprocessor::keepFrameIfNeeded(NSCam::v3::pipeline::model::IAppRaw16Reprocessor::KeepFrameIfNeededParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model19AppRaw16Reprocessor17keepFrameIfNeededERKNS2_20IAppRaw16Reprocessor23KeepFrameIfNeededParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model19AppRaw16Reprocessor17keepFrameIfNeededERKNS2_20IAppRaw16Reprocessor23KeepFrameIfNeededParamsE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::AppRaw16Reprocessor::handleReprocessFrame(NSCam::v3::pipeline::model::IAppRaw16Reprocessor::HandleReprocessFrameParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model19AppRaw16Reprocessor20handleReprocessFrameERKNS2_20IAppRaw16Reprocessor26HandleReprocessFrameParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model19AppRaw16Reprocessor20handleReprocessFrameERKNS2_20IAppRaw16Reprocessor26HandleReprocessFrameParamsE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::AppRaw16Reprocessor::AppRaw16Reprocessor(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, NSCam::v3::pipeline::model::IAppRaw16Reprocessor::CtorParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model19AppRaw16ReprocessorC2ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_20IAppRaw16Reprocessor10CtorParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model19AppRaw16ReprocessorC2ERKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_20IAppRaw16Reprocessor10CtorParamsE() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::v3::IImageStreamBuffer> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v318IImageStreamBufferEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v318IImageStreamBufferEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::pipeline::model::AppRaw16Reprocessor */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v38pipeline5model19AppRaw16ReprocessorE = NULL;

/* Demangled: NSCam::v3::pipeline::model::AppRaw16Reprocessor::acquireAllHistoryFrames() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model19AppRaw16Reprocessor23acquireAllHistoryFramesEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model19AppRaw16Reprocessor23acquireAllHistoryFramesEv() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: NSCam::v3::pipeline::model::ICaptureInFlightRequest::createInstance(int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model23ICaptureInFlightRequest14createInstanceEiRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model23ICaptureInFlightRequest14createInstanceEiRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, bool> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIjbEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIjbEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::v3::IImageStreamBuffer> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v318IImageStreamBufferEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v318IImageStreamBufferEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::NextCaptureListener::onCaptureInFlightUpdated(NSCam::v3::pipeline::model::CaptureInFlightUpdated const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model19NextCaptureListener24onCaptureInFlightUpdatedERKNS2_22CaptureInFlightUpdatedE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model19NextCaptureListener24onCaptureInFlightUpdatedERKNS2_22CaptureInFlightUpdatedE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::NextCaptureListener::NextCaptureListener(int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, NSCam::v3::pipeline::model::INextCaptureListener::CtorParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model19NextCaptureListenerC2EiRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_20INextCaptureListener10CtorParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model19NextCaptureListenerC2EiRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_20INextCaptureListener10CtorParamsE() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::pipeline::model::ICaptureInFlightListener-in-NSCam::v3::pipeline::model::NextCaptureListener */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v38pipeline5model19NextCaptureListenerE0_NS2_24ICaptureInFlightListenerE = NULL;

/* Demangled: android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::v3::IImageStreamBuffer> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v318IImageStreamBufferEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v318IImageStreamBufferEEEE12do_constructEPvm() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: std::__1::__tree<long, std::__1::less<long>, std::__1::allocator<long> >::destroy(std::__1::__tree_node<long, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeIlNS_4lessIlEENS_9allocatorIlEEE7destroyEPNS_11__tree_nodeIlPvEE(void) {
    ALOGD("_ZNSt3__16__treeIlNS_4lessIlEENS_9allocatorIlEEE7destroyEPNS_11__tree_nodeIlPvEE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::CaptureInFlightRequest::registerListener(android::wp<NSCam::v3::pipeline::model::ICaptureInFlightListener>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model22CaptureInFlightRequest16registerListenerEN7android2wpINS2_24ICaptureInFlightListenerEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model22CaptureInFlightRequest16registerListenerEN7android2wpINS2_24ICaptureInFlightListenerEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::AppRaw16Reprocessor::resetReprocessRequestNo(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model19AppRaw16Reprocessor23resetReprocessRequestNoEj(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model19AppRaw16Reprocessor23resetReprocessRequestNoEj() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::AppRaw16Reprocessor::prepareReprocessHalBuffers(NSCam::v3::pipeline::model::IAppRaw16Reprocessor::HandleReprocessFrameParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model19AppRaw16Reprocessor26prepareReprocessHalBuffersERKNS2_20IAppRaw16Reprocessor26HandleReprocessFrameParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model19AppRaw16Reprocessor26prepareReprocessHalBuffersERKNS2_20IAppRaw16Reprocessor26HandleReprocessFrameParamsE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::CaptureInFlightRequest::removeListener(android::wp<NSCam::v3::pipeline::model::ICaptureInFlightListener>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model22CaptureInFlightRequest14removeListenerEN7android2wpINS2_24ICaptureInFlightListenerEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model22CaptureInFlightRequest14removeListenerEN7android2wpINS2_24ICaptureInFlightListenerEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::AppRaw16Reprocessor::notifyRequestDone(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model19AppRaw16Reprocessor17notifyRequestDoneEj(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model19AppRaw16Reprocessor17notifyRequestDoneEj() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::CaptureInFlightRequest::CaptureInFlightRequest(int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model22CaptureInFlightRequestC1EiRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model22CaptureInFlightRequestC1EiRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::pipeline::model::INextCaptureListener-in-NSCam::v3::pipeline::model::NextCaptureListener */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v38pipeline5model19NextCaptureListenerE0_NS2_20INextCaptureListenerE = NULL;

/* Demangled: NSCam::v3::pipeline::model::AppRaw16Reprocessor::selectHistoryFrameForReprocess(android::sp<NSCam::v3::IPipelineBufferSetFrameControl>&, std::__1::list<android::sp<NSCam::v3::IPipelineFrame>, std::__1::allocator<android::sp<NSCam::v3::IPipelineFrame> > >&, long, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model19AppRaw16Reprocessor30selectHistoryFrameForReprocessERN7android2spINS0_30IPipelineBufferSetFrameControlEEERNSt3__14listINS5_INS0_14IPipelineFrameEEENS9_9allocatorISC_EEEElj(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model19AppRaw16Reprocessor30selectHistoryFrameForReprocessERN7android2spINS0_30IPipelineBufferSetFrameControlEEERNSt3__14listINS5_INS0_14IPipelineFrameEEENS9_9allocatorISC_EEEElj() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<android::sp<NSCam::v3::IImageStreamBuffer> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_2spIN5NSCam2v318IImageStreamBufferEEEEE = NULL;

/* Demangled: NSCam::v3::pipeline::model::NextCaptureListener::nextCaptureDecision(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model19NextCaptureListener19nextCaptureDecisionEjj(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model19NextCaptureListener19nextCaptureDecisionEjj() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::AppRaw16Reprocessor::debugRequestResult(NSCam::v3::pipeline::model::IAppRaw16Reprocessor::DebugRequestResultParams const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v38pipeline5model19AppRaw16Reprocessor18debugRequestResultERKNS2_20IAppRaw16Reprocessor24DebugRequestResultParamsE(void) {
    ALOGD("_ZNK5NSCam2v38pipeline5model19AppRaw16Reprocessor18debugRequestResultERKNS2_20IAppRaw16Reprocessor24DebugRequestResultParamsE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::NextCaptureListener::NextCaptureListener(int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, NSCam::v3::pipeline::model::INextCaptureListener::CtorParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model19NextCaptureListenerC1EiRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_20INextCaptureListener10CtorParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model19NextCaptureListenerC1EiRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEERKNS2_20INextCaptureListener10CtorParamsE() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::AppRaw16Reprocessor::keepFrameForReprocess(NSCam::v3::pipeline::model::IAppRaw16Reprocessor::KeepFrameIfNeededParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model19AppRaw16Reprocessor21keepFrameForReprocessERKNS2_20IAppRaw16Reprocessor23KeepFrameIfNeededParamsE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model19AppRaw16Reprocessor21keepFrameForReprocessERKNS2_20IAppRaw16Reprocessor23KeepFrameIfNeededParamsE() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::v3::IImageStreamBuffer> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v318IImageStreamBufferEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v318IImageStreamBufferEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::v3::IImageStreamBuffer> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v318IImageStreamBufferEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v318IImageStreamBufferEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Exported Object: VTT for NSCam::v3::pipeline::model::NextCaptureListener */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam2v38pipeline5model19NextCaptureListenerE = NULL;

/* Demangled: NSCam::v3::pipeline::model::AppRaw16Reprocessor::dumpState(android::Printer&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model19AppRaw16Reprocessor9dumpStateERN7android7PrinterE(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model19AppRaw16Reprocessor9dumpStateERN7android7PrinterE() called");
    return 0;
}

/* Exported Object: end */
extern "C" __attribute__((visibility("default"))) void* end = NULL;

/* Demangled: NSCam::v3::pipeline::model::CaptureInFlightRequest::captureInFlightUpdated() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v38pipeline5model22CaptureInFlightRequest22captureInFlightUpdatedEv(void) {
    ALOGD("_ZN5NSCam2v38pipeline5model22CaptureInFlightRequest22captureInFlightUpdatedEv() called");
    return 0;
}

/* Demangled: NSCam::v3::pipeline::model::AppRaw16Reprocessor::isReprocessFrame(NSCam::v3::pipeline::model::IAppRaw16Reprocessor::IsReprocessFrameParams const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v38pipeline5model19AppRaw16Reprocessor16isReprocessFrameERKNS2_20IAppRaw16Reprocessor22IsReprocessFrameParamsE(void) {
    ALOGD("_ZNK5NSCam2v38pipeline5model19AppRaw16Reprocessor16isReprocessFrameERKNS2_20IAppRaw16Reprocessor22IsReprocessFrameParamsE() called");
    return 0;
}
