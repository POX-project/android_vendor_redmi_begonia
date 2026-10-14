/*
 * Reverse-Engineered Source for: libmtkcam_pipeline.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libmtkcam_pipeline"

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
#include "libmtkcam_pipeline.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, int> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE = NULL;

/* Exported Object: construction vtable for NSCam::v3::IPipelineNodeCallback-in-NSCam::v3::NSPipelineContext::DispatcherBase */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v317NSPipelineContext14DispatcherBaseE0_NS0_21IPipelineNodeCallbackE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::DefaultKeyedVector<long, unsigned int> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_18DefaultKeyedVectorIljEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_18DefaultKeyedVectorIljEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineContext::StreamConfig::ItemMetaStream> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig14ItemMetaStreamEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig14ItemMetaStreamEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferPoolImp<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator>::uninitPool(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n56_N5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEE10uninitPoolEPKc(void) {
    ALOGD("_ZTv0_n56_N5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEE10uninitPoolEPKc() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalImageStreamBufferT, NSCam::v3::IImageStreamBuffer>::Item> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS4_18IImageStreamBufferEE4ItemEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS4_18IImageStreamBufferEE4ItemEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSPipelineContext::DefaultDispatcher */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v317NSPipelineContext17DefaultDispatcherE = NULL;

/* Demangled: android::Vector<android::String8>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalMetaStreamBufferT, NSCam::v3::IMetaStreamBuffer>::Item> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS4_17IMetaStreamBufferEE4ItemEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS4_17IMetaStreamBufferEE4ItemEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::StreamBufferPoolImp<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator>::releaseToPool(char const*, android::sp<NSCam::v3::IImageStreamBuffer>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEE13releaseToPoolEPKcN7android2spIS3_EE(void) {
    ALOGD("_ZN5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEE13releaseToPoolEPKcN7android2spIS3_EE() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::INodeCallbackToPipeline-in-NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImplE0_NS0_23INodeCallbackToPipelineE = NULL;

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<long, android::List<unsigned int> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_4ListIjEEEEEE = NULL;

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::InitFrameHandler::deactivateAndWaitUntilDrained() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandler29deactivateAndWaitUntilDrainedEv(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandler29deactivateAndWaitUntilDrainedEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::FrameBuilderImpl::getAppMetaStreamBuffers(std::__1::vector<android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamBuffer> > >&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v317NSPipelineContext16FrameBuilderImpl23getAppMetaStreamBuffersERNSt3__16vectorIN7android2spINS0_17IMetaStreamBufferEEENS3_9allocatorIS8_EEEE(void) {
    ALOGD("_ZNK5NSCam2v317NSPipelineContext16FrameBuilderImpl23getAppMetaStreamBuffersERNSt3__16vectorIN7android2spINS0_17IMetaStreamBufferEEENS3_9allocatorIS8_EEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::NSPipelineContext::IOMapSet> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v317NSPipelineContext8IOMapSetEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v317NSPipelineContext8IOMapSetEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::StreamBufferPoolImp<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator>::~StreamBufferPoolImp() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEED2Ev(void) {
    ALOGD("_ZN5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEED2Ev() called");
    return 0;
}

/* Demangled: android::Vector<bool>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIbE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIbE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IImageStreamBuffer, NSCam::v3::IImageStreamBuffer>::add(android::sp<NSCam::v3::IImageStreamBuffer>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_18IImageStreamBufferES3_E3addEN7android2spIS3_EE(void) {
    ALOGD("_ZN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_18IImageStreamBufferES3_E3addEN7android2spIS3_EE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::PipelineFrameNumberGenerator::~PipelineFrameNumberGenerator() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam2v328PipelineFrameNumberGeneratorD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam2v328PipelineFrameNumberGeneratorD0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::NSPipelineContext::DispatcherBase::onEarlyCallback(unsigned int, long, long, NSCam::IMetadata const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5NSCam2v317NSPipelineContext14DispatcherBase15onEarlyCallbackEjllRKNS_9IMetadataEi(void) {
    ALOGD("_ZTv0_n40_N5NSCam2v317NSPipelineContext14DispatcherBase15onEarlyCallbackEjllRKNS_9IMetadataEi() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<std::__1::thread, std::__1::allocator<std::__1::thread> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceINS_6threadENS_9allocatorIS1_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceINS_6threadENS_9allocatorIS1_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, int> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::IPipelineFrame::ImageInfoIOMapSet */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v314IPipelineFrame17ImageInfoIOMapSetE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalImageStreamBufferT, NSCam::v3::IImageStreamBuffer>::Item> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS4_18IImageStreamBufferEE4ItemEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS4_18IImageStreamBufferEE4ItemEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IImageStreamBuffer, NSCam::v3::IImageStreamBuffer>::Item> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_18IImageStreamBufferES7_E4ItemEEEEEEE = NULL;

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::InitFrameHandler::InitFrameHandler(unsigned int, android::sp<NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandlerC2EjN7android2spIS3_EE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandlerC2EjN7android2spIS3_EE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalImageStreamBufferT, NSCam::v3::IImageStreamBuffer>::streamInfoAt(unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZThn8_NK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS0_18IImageStreamBufferEE12streamInfoAtEm(void) {
    ALOGD("_ZThn8_NK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS0_18IImageStreamBufferEE12streamInfoAtEm() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::NSPipelineContext::FrameBuilderImpl, std::__1::allocator<NSCam::v3::NSPipelineContext::FrameBuilderImpl> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext16FrameBuilderImplENS_9allocatorIS4_EEEE = NULL;

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::~PipelineContext() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContextD1Ev(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContextD1Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::collect_from_NodeIOMaps::getStreamSet(android::DefaultKeyedVector<long, NSCam::v3::NSPipelineContext::IOMapSet> const&, NSCam::v3::Set<long>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext23collect_from_NodeIOMaps12getStreamSetERKN7android18DefaultKeyedVectorIlNS1_8IOMapSetEEERNS0_3SetIlEE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext23collect_from_NodeIOMaps12getStreamSetERKN7android18DefaultKeyedVectorIlNS1_8IOMapSetEEERNS0_3SetIlEE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::collect_from_stream_config::operator()(NSCam::v3::NSPipelineContext::collect_from_stream_config::Params&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext26collect_from_stream_configclERNS2_6ParamsE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext26collect_from_stream_configclERNS2_6ParamsE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::isNeededToFlush(android::sp<NSCam::v3::IPipelineFrame> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl15isNeededToFlushERKN7android2spINS0_14IPipelineFrameEEE(void) {
    ALOGD("_ZNK5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl15isNeededToFlushERKN7android2spINS0_14IPipelineFrameEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalImageStreamBufferT, NSCam::v3::IImageStreamBuffer>::usersManagerAt(unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS0_18IImageStreamBufferEE14usersManagerAtEm(void) {
    ALOGD("_ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS0_18IImageStreamBufferEE14usersManagerAtEm() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::IPipelineFrameNodeMapControl>::operator=(android::sp<NSCam::v3::IPipelineFrameNodeMapControl> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v328IPipelineFrameNodeMapControlEEaSERKS4_(void) {
    ALOGD("_ZN7android2spIN5NSCam2v328IPipelineFrameNodeMapControlEEaSERKS4_() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::~PipelineContextImpl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImplD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImplD1Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IImageStreamBuffer, NSCam::v3::IImageStreamBuffer>::streamInfoAt(unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_18IImageStreamBufferES3_E12streamInfoAtEm(void) {
    ALOGD("_ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_18IImageStreamBufferES3_E12streamInfoAtEm() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::IPipelineFrame::MetaInfoIOMapSet */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v314IPipelineFrame16MetaInfoIOMapSetE = NULL;

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer>::add(android::sp<NSCam::v3::IMetaStreamInfo>, android::sp<NSCam::v3::IUsersManager>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_17IMetaStreamBufferES3_E3addEN7android2spINS0_15IMetaStreamInfoEEENS6_INS0_13IUsersManagerEEE(void) {
    ALOGD("_ZN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_17IMetaStreamBufferES3_E3addEN7android2spINS0_15IMetaStreamInfoEEENS6_INS0_13IUsersManagerEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer>::add(android::sp<NSCam::v3::IMetaStreamInfo>, android::sp<NSCam::v3::IUsersManager>) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_17IMetaStreamBufferES3_E3addEN7android2spINS0_15IMetaStreamInfoEEENS6_INS0_13IUsersManagerEEE(void) {
    ALOGD("_ZThn8_N5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_17IMetaStreamBufferES3_E3addEN7android2spINS0_15IMetaStreamInfoEEENS6_INS0_13IUsersManagerEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::NSPipelineContext::IOMapSet> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v317NSPipelineContext8IOMapSetEEEE10do_compareEPKvS9_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v317NSPipelineContext8IOMapSetEEEE10do_compareEPKvS9_() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::StreamConfig::~StreamConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext12StreamConfigD2Ev(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext12StreamConfigD2Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::tryGetSensorTimestamp() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp21tryGetSensorTimestampEv(void) {
    ALOGD("_ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp21tryGetSensorTimestampEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::FrameBuilderImpl::setHalMetaStreamBuffer(long, android::sp<NSCam::v3::IMetaStreamBuffer>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl22setHalMetaStreamBufferElN7android2spINS0_17IMetaStreamBufferEEE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl22setHalMetaStreamBufferElN7android2spINS0_17IMetaStreamBufferEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::endFlush() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext8endFlushEv(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext8endFlushEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::waitUntilConfigDone(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl19waitUntilConfigDoneEPKc(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl19waitUntilConfigDoneEPKc() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineContext::ContextNode> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext11ContextNodeEEEEEE10do_compareEPKvSB_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext11ContextNodeEEEEEE10do_compareEPKvSB_() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::setStreamInfoSet(android::sp<NSCam::v3::IStreamInfoSet const>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp16setStreamInfoSetEN7android2spIKNS0_14IStreamInfoSetEEE(void) {
    ALOGD("_ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp16setStreamInfoSetEN7android2spIKNS0_14IStreamInfoSetEEE() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > > > >::__emplace_unique_key_args<unsigned int, std::__1::pair<unsigned int const, std::__1::vector<long, std::__1::allocator<long> > > const&>(unsigned int const&, std::__1::pair<unsigned int const, std::__1::vector<long, std::__1::allocator<long> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE25__emplace_unique_key_argsIjJRKNS_4pairIKjS5_EEEEENSI_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE25__emplace_unique_key_argsIjJRKNS_4pairIKjS5_EEEEENSI_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer>::Item */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_17IMetaStreamBufferES3_E4ItemE = NULL;

/* Demangled: NSCam::v3::NSPipelineContext::DispatcherBase::onCtrlReadout(unsigned int, long, long, NSCam::IMetadata&, long, NSCam::IMetadata&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext14DispatcherBase13onCtrlReadoutEjllRNS_9IMetadataElS4_Ri(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext14DispatcherBase13onCtrlReadoutEjllRNS_9IMetadataElS4_Ri() called");
    return 0;
}

/* Demangled: NSCam::v3::InFlightRequest::onPipelineFrame(unsigned int, long, unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v315InFlightRequest15onPipelineFrameEjljPv(void) {
    ALOGD("_ZN5NSCam2v315InFlightRequest15onPipelineFrameEjljPv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::NSPipelineContext::FrameBuilderImpl, std::__1::allocator<NSCam::v3::NSPipelineContext::FrameBuilderImpl> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext16FrameBuilderImplENS_9allocatorIS4_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext16FrameBuilderImplENS_9allocatorIS4_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::IPipelineDAG::TNodeObj<long, long> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v312IPipelineDAG8TNodeObjIllEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v312IPipelineDAG8TNodeObjIllEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer>::add(android::sp<NSCam::v3::IMetaStreamBuffer>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_17IMetaStreamBufferES3_E3addEN7android2spIS3_EE(void) {
    ALOGD("_ZN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_17IMetaStreamBufferES3_E3addEN7android2spIS3_EE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::waitUntilNodeDrained(long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl20waitUntilNodeDrainedEl(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl20waitUntilNodeDrainedEl() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::Utils::StreamBufferPoolImp<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator>::MyBufferT>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v35Utils19StreamBufferPoolImpINS2_18IImageStreamBufferENS3_20HalImageStreamBufferENS6_9AllocatorEE9MyBufferTEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v35Utils19StreamBufferPoolImpINS2_18IImageStreamBufferENS3_20HalImageStreamBufferENS6_9AllocatorEE9MyBufferTEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<long>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIlE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIlE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::setPipelineNodeMap(android::sp<NSCam::v3::IPipelineNodeMap const>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp18setPipelineNodeMapEN7android2spIKNS0_16IPipelineNodeMapEEE(void) {
    ALOGD("_ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp18setPipelineNodeMapEN7android2spIKNS0_16IPipelineNodeMapEEE() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::FrameBuilderImpl::dump(unsigned int, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v317NSPipelineContext16FrameBuilderImpl4dumpEjj(void) {
    ALOGD("_ZNK5NSCam2v317NSPipelineContext16FrameBuilderImpl4dumpEjj() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::transferPendingReleaseBuffers(android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp29transferPendingReleaseBuffersERN7android6VectorINS3_2spINS0_17IMetaStreamBufferEEEEE(void) {
    ALOGD("_ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp29transferPendingReleaseBuffersERN7android6VectorINS3_2spINS0_17IMetaStreamBufferEEEEE() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::v3::IPipelineDAG::Edge> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam2v312IPipelineDAG4EdgeEEE = NULL;

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::constructRequest(NSCam::v3::NSPipelineContext::FrameBuilderImpl*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16constructRequestEPNS1_16FrameBuilderImplE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16constructRequestEPNS1_16FrameBuilderImplE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer>::Item> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_17IMetaStreamBufferES7_E4ItemEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_17IMetaStreamBufferES7_E4ItemEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::IPipelineDAG::Edge>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v312IPipelineDAG4EdgeEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v312IPipelineDAG4EdgeEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::NSPipelineContext::IOMapSet> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v317NSPipelineContext8IOMapSetEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v317NSPipelineContext8IOMapSetEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::NSPipelineContext::RequestBuilderImpl, std::__1::allocator<NSCam::v3::NSPipelineContext::RequestBuilderImpl> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext18RequestBuilderImplENS_9allocatorIS4_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext18RequestBuilderImplENS_9allocatorIS4_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::setDataCallback(android::wp<NSCam::v3::NSPipelineContext::IDataCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl15setDataCallbackEN7android2wpINS1_13IDataCallbackEEE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl15setDataCallbackEN7android2wpINS1_13IDataCallbackEEE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::IPipelineFrame::MetaInfoIOMap>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v314IPipelineFrame13MetaInfoIOMapEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v314IPipelineFrame13MetaInfoIOMapEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::hasBufferStatus(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp15hasBufferStatusEj(void) {
    ALOGD("_ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp15hasBufferStatusEj() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSPipelineBufferSetFrameControlImp::ReleasedCollector */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v334NSPipelineBufferSetFrameControlImp17ReleasedCollectorE = NULL;

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<long, android::DefaultKeyedVector<long, unsigned int> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_18DefaultKeyedVectorIljEEEEEE = NULL;

/* Demangled: NSCam::v3::NSPipelineContext::NodeBuilder::build(android::sp<NSCam::v3::NSPipelineContext::IPipelineContext>) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v317NSPipelineContext11NodeBuilder5buildEN7android2spINS1_16IPipelineContextEEE(void) {
    ALOGD("_ZNK5NSCam2v317NSPipelineContext11NodeBuilder5buildEN7android2spINS1_16IPipelineContextEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::List<unsigned int> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_4ListIjEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_4ListIjEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalImageStreamBufferT, NSCam::v3::IImageStreamBuffer>::Item> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS4_18IImageStreamBufferEE4ItemEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS4_18IImageStreamBufferEE4ItemEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::List<android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::NodeStatus::IO> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android4ListINS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp10NodeStatus2IOEEEEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<long, unsigned int> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIljEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIljEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalImageStreamBufferT, NSCam::v3::IImageStreamBuffer>::add(android::sp<NSCam::v3::IImageStreamInfo>, android::sp<NSCam::v3::IUsersManager>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS0_18IImageStreamBufferEE3addEN7android2spINS0_16IImageStreamInfoEEENS7_INS0_13IUsersManagerEEE(void) {
    ALOGD("_ZN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS0_18IImageStreamBufferEE3addEN7android2spINS0_16IImageStreamInfoEEENS7_INS0_13IUsersManagerEEE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::InitFrameHandler, std::__1::allocator<NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::InitFrameHandler> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandlerENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandlerENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::setMultiCamSyncHelper(android::sp<NSCam::v3::Utils::Imp::ISyncHelper>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext21setMultiCamSyncHelperERN7android2spINS0_5Utils3Imp11ISyncHelperEEE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext21setMultiCamSyncHelperERN7android2spINS0_5Utils3Imp11ISyncHelperEEE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::NodeEdge>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::v3::NSPipelineContext::FrameBuilderImpl*, std::__1::allocator<NSCam::v3::NSPipelineContext::FrameBuilderImpl*> >::__push_back_slow_path<NSCam::v3::NSPipelineContext::FrameBuilderImpl*>(NSCam::v3::NSPipelineContext::FrameBuilderImpl*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN5NSCam2v317NSPipelineContext16FrameBuilderImplENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPN5NSCam2v317NSPipelineContext16FrameBuilderImplENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSPipelineContext::NodeEdgeSet */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v317NSPipelineContext11NodeEdgeSetE = NULL;

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::waitUntilRootNodeDrained() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl24waitUntilRootNodeDrainedEv(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl24waitUntilRootNodeDrainedEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<void (*)(android::sp<NSCam::v3::NSPipelineContext::INodeActor>), std::__1::allocator<void (*)(android::sp<NSCam::v3::NSPipelineContext::INodeActor>)>, void (android::sp<NSCam::v3::NSPipelineContext::INodeActor>)>::operator()(android::sp<NSCam::v3::NSPipelineContext::INodeActor>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFvN7android2spIN5NSCam2v317NSPipelineContext10INodeActorEEEENS_9allocatorISA_EES9_EclEOS8_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFvN7android2spIN5NSCam2v317NSPipelineContext10INodeActorEEEENS_9allocatorISA_EES9_EclEOS8_() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::setUserReleaseFence(long, long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp19setUserReleaseFenceElli(void) {
    ALOGD("_ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp19setUserReleaseFenceElli() called");
    return 0;
}

/* Demangled: android::SortedVector<long>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorIlE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorIlE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::FrameBuilderImpl::setTrackFrameResultParams(std::__1::shared_ptr<NSCam::v3::NSPipelineContext::TrackFrameResultParams const> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl25setTrackFrameResultParamsERKNSt3__110shared_ptrIKNS1_22TrackFrameResultParamsEEE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl25setTrackFrameResultParamsERKNSt3__110shared_ptrIKNS1_22TrackFrameResultParamsEEE() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<long, unsigned int> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIljEEEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer>::Item> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_17IMetaStreamBufferES7_E4ItemEEEEEE10do_compareEPKvSE_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_17IMetaStreamBufferES7_E4ItemEEEEEE10do_compareEPKvSE_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::List<unsigned int> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_4ListIjEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_4ListIjEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::reuseNode(long, android::sp<NSCam::v3::NSPipelineContext::ContextNode>, android::DefaultKeyedVector<long, unsigned int> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl9reuseNodeElN7android2spINS1_11ContextNodeEEERKNS4_18DefaultKeyedVectorIljEE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl9reuseNodeElN7android2spINS1_11ContextNodeEEERKNS4_18DefaultKeyedVectorIljEE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::StreamBuilder::StreamBuilder(NSCam::v3::NSPipelineContext::eStreamType, android::sp<NSCam::v3::IImageStreamInfo>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext13StreamBuilderC2ENS1_11eStreamTypeEN7android2spINS0_16IImageStreamInfoEEE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext13StreamBuilderC2ENS1_11eStreamTypeEN7android2spINS0_16IImageStreamInfoEEE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::IPipelineFrame::MetaInfoIOMap>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v314IPipelineFrame13MetaInfoIOMapEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v314IPipelineFrame13MetaInfoIOMapEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::transferPendingReleaseBuffers(android::Vector<android::sp<NSCam::v3::IImageStreamBuffer> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp29transferPendingReleaseBuffersERN7android6VectorINS3_2spINS0_18IImageStreamBufferEEEEE(void) {
    ALOGD("_ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp29transferPendingReleaseBuffersERN7android6VectorINS3_2spINS0_18IImageStreamBufferEEEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<unsigned int>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIjE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIjE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::FrameBuilderImpl::setRootNode(NSCam::v3::Set<long> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl11setRootNodeERKNS0_3SetIlEE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl11setRootNodeERKNS0_3SetIlEE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::NodeEdge>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::waitUntilInitFrameDrainedAndDestroyInitFrameHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl51waitUntilInitFrameDrainedAndDestroyInitFrameHandlerEv(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl51waitUntilInitFrameDrainedAndDestroyInitFrameHandlerEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::StreamBufferPoolImp<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator>::~StreamBufferPoolImp() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEED1Ev(void) {
    ALOGD("_ZN5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEED1Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineBuilder::setNodeEdges(NSCam::v3::NSPipelineContext::NodeEdgeSet const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineBuilder12setNodeEdgesERKNS1_11NodeEdgeSetE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineBuilder12setNodeEdgesERKNS1_11NodeEdgeSetE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::getMetaMapItemLocked(long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp20getMetaMapItemLockedEl(void) {
    ALOGD("_ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp20getMetaMapItemLockedEl() called");
    return 0;
}

/* Demangled: _ZNSt3__14listIN7android2spIN5NSCam2v317IMetaStreamBufferEEENS_9allocatorIS6_EEE6insertINS_21__list_const_iteratorIS6_PvEEEENS_15__list_iteratorIS6_SC_EESD_T_SG_PNS_9enable_ifIXsr19__is_input_iteratorISG_EE5valueEvE4typeE */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14listIN7android2spIN5NSCam2v317IMetaStreamBufferEEENS_9allocatorIS6_EEE6insertINS_21__list_const_iteratorIS6_PvEEEENS_15__list_iteratorIS6_SC_EESD_T_SG_PNS_9enable_ifIXsr19__is_input_iteratorISG_EE5valueEvE4typeE(void) {
    ALOGD("_ZNSt3__14listIN7android2spIN5NSCam2v317IMetaStreamBufferEEENS_9allocatorIS6_EEE6insertINS_21__list_const_iteratorIS6_PvEEEENS_15__list_iteratorIS6_SC_EESD_T_SG_PNS_9enable_ifIXsr19__is_input_iteratorISG_EE5valueEvE4typeE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::List<unsigned int> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_4ListIjEEEEE10do_compareEPKvS7_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_4ListIjEEEEE10do_compareEPKvS7_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineContext::StreamConfig::ItemImageStream> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig15ItemImageStreamEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig15ItemImageStreamEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineBuilder::~PipelineBuilder() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineBuilderD2Ev(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineBuilderD2Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer>::Item> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_17IMetaStreamBufferES7_E4ItemEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_17IMetaStreamBufferES7_E4ItemEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::applyPreRelease(long) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp15applyPreReleaseEl(void) {
    ALOGD("_ZThn8_N5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp15applyPreReleaseEl() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::IStreamInfoSet::IMap<NSCam::v3::IMetaStreamInfo>-in-NSCam::v3::Utils::SimpleStreamInfoSetControl::Map<NSCam::v3::IMetaStreamInfo> */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v35Utils26SimpleStreamInfoSetControl3MapINS0_15IMetaStreamInfoEEE0_NS0_14IStreamInfoSet4IMapIS4_EE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<long, int> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::queryInfoIOMapSet(long const&, NSCam::v3::IPipelineFrame::InfoIOMapSet&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp17queryInfoIOMapSetERKlRNS0_14IPipelineFrame12InfoIOMapSetE(void) {
    ALOGD("_ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp17queryInfoIOMapSetERKlRNS0_14IPipelineFrame12InfoIOMapSetE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::~PipelineContext() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContextD0Ev(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContextD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__async_assoc_state<int, std::__1::__async_func<int (*)(android::sp<NSCam::v3::NSPipelineContext::INodeActor>, android::sp<NSCam::v3::INodeCallbackToPipeline>), android::sp<NSCam::v3::NSPipelineContext::INodeActor>, android::sp<NSCam::v3::INodeCallbackToPipeline> > >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__119__async_assoc_stateIiNS_12__async_funcIPFiN7android2spIN5NSCam2v317NSPipelineContext10INodeActorEEENS3_INS5_23INodeCallbackToPipelineEEEEJS8_SA_EEEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__119__async_assoc_stateIiNS_12__async_funcIPFiN7android2spIN5NSCam2v317NSPipelineContext10INodeActorEEENS3_INS5_23INodeCallbackToPipelineEEEEJS8_SA_EEEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, std::__1::vector<android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamBuffer> > > > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: _ZNSt3__14listIN7android2spIN5NSCam2v317IMetaStreamBufferEEENS_9allocatorIS6_EEE6assignINS_21__list_const_iteratorIS6_PvEEEEvT_SE_PNS_9enable_ifIXsr19__is_input_iteratorISE_EE5valueEvE4typeE */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14listIN7android2spIN5NSCam2v317IMetaStreamBufferEEENS_9allocatorIS6_EEE6assignINS_21__list_const_iteratorIS6_PvEEEEvT_SE_PNS_9enable_ifIXsr19__is_input_iteratorISE_EE5valueEvE4typeE(void) {
    ALOGD("_ZNSt3__14listIN7android2spIN5NSCam2v317IMetaStreamBufferEEENS_9allocatorIS6_EEE6assignINS_21__list_const_iteratorIS6_PvEEEEvT_SE_PNS_9enable_ifIXsr19__is_input_iteratorISE_EE5valueEvE4typeE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalMetaStreamBufferT, NSCam::v3::IMetaStreamBuffer>::add(android::sp<NSCam::v3::IMetaStreamBuffer>) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS0_17IMetaStreamBufferEE3addEN7android2spIS4_EE(void) {
    ALOGD("_ZThn8_N5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS0_17IMetaStreamBufferEE3addEN7android2spIS4_EE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::List<unsigned int> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_4ListIjEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_4ListIjEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::~PipelineContextImpl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImplD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImplD0Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::applyRelease(long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp12applyReleaseEl(void) {
    ALOGD("_ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp12applyReleaseEl() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer>::streamInfoAt(unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_17IMetaStreamBufferES3_E12streamInfoAtEm(void) {
    ALOGD("_ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_17IMetaStreamBufferES3_E12streamInfoAtEm() called");
    return 0;
}

/* Demangled: __cmptf2 */
extern "C" __attribute__((visibility("default"))) int __cmptf2(void) {
    ALOGD("__cmptf2() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IImageStreamBuffer, NSCam::v3::IImageStreamBuffer>::IStreamBufferT> NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::getBufferLockedImp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IImageStreamBuffer, NSCam::v3::IImageStreamBuffer> >(long, long, NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IImageStreamBuffer, NSCam::v3::IImageStreamBuffer> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp18getBufferLockedImpINS1_8TItemMapINS0_18IImageStreamBufferES5_EEEEN7android2spINT_14IStreamBufferTEEEllRKS9_(void) {
    ALOGD("_ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp18getBufferLockedImpINS1_8TItemMapINS0_18IImageStreamBufferES5_EEEEN7android2spINT_14IStreamBufferTEEEllRKS9_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::NodeStatus> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp10NodeStatusEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp10NodeStatusEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: void std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > > > >::__assign_multi<std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, void*>*> >(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, void*>*>, std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, void*>*>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE14__assign_multiINS_21__hash_const_iteratorIPNS_11__hash_nodeIS6_PvEEEEEEvT_SO_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE14__assign_multiINS_21__hash_const_iteratorIPNS_11__hash_nodeIS6_PvEEEEEEvT_SO_() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::getMetaBuffer(long, long) const */
extern "C" __attribute__((visibility("default"))) int _ZThn8_NK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp13getMetaBufferEll(void) {
    ALOGD("_ZThn8_NK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp13getMetaBufferEll() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IImageStreamBuffer, NSCam::v3::IImageStreamBuffer>::usersManagerAt(unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZThn8_NK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_18IImageStreamBufferES3_E14usersManagerAtEm(void) {
    ALOGD("_ZThn8_NK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_18IImageStreamBufferES3_E14usersManagerAtEm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::IOMap>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::StreamConfig::~StreamConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext12StreamConfigD1Ev(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext12StreamConfigD1Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::NodeConfig::queryNode(long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v317NSPipelineContext10NodeConfig9queryNodeEl(void) {
    ALOGD("_ZNK5NSCam2v317NSPipelineContext10NodeConfig9queryNodeEl() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IImageStreamBuffer, NSCam::v3::IImageStreamBuffer>::Item> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_18IImageStreamBufferES7_E4ItemEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_18IImageStreamBufferES7_E4ItemEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void) {
    ALOGD("_ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv() called");
    return 0;
}

/* Exported Object: VTT for NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImpE = NULL;

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::reuseStream(android::sp<NSCam::v3::NSPipelineContext::StreamConfig::ItemImageStream>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl11reuseStreamEN7android2spINS1_12StreamConfig15ItemImageStreamEEE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl11reuseStreamEN7android2spINS1_12StreamConfig15ItemImageStreamEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::submitFrame(std::__1::vector<android::sp<NSCam::v3::IPipelineFrame>, std::__1::allocator<android::sp<NSCam::v3::IPipelineFrame> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl11submitFrameERKNSt3__16vectorIN7android2spINS0_14IPipelineFrameEEENS4_9allocatorIS9_EEEE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl11submitFrameERKNSt3__16vectorIN7android2spINS0_14IPipelineFrameEEENS4_9allocatorIS9_EEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::onCallback(NSCam::v3::INodeCallbackToPipeline::CallBackParams) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl10onCallbackENS0_23INodeCallbackToPipeline14CallBackParamsE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl10onCallbackENS0_23INodeCallbackToPipeline14CallBackParamsE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::Utils::SimpleStreamInfoSetControl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v35Utils26SimpleStreamInfoSetControlE = NULL;

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer>::onAllUsersReleased(NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer>::Item&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_17IMetaStreamBufferES3_E18onAllUsersReleasedERNS4_4ItemE(void) {
    ALOGD("_ZN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_17IMetaStreamBufferES3_E18onAllUsersReleasedERNS4_4ItemE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::getMapItemLocked(long, NSCam::v3::NSPipelineBufferSetFrameControlImp::IMyMap const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp16getMapItemLockedElRKNS1_6IMyMapE(void) {
    ALOGD("_ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp16getMapItemLockedElRKNS1_6IMyMapE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::update_streambuffers_to_frame::updateAppImageSB(android::DefaultKeyedVector<long, android::sp<NSCam::v3::IImageStreamInfo> > const&, android::DefaultKeyedVector<long, android::sp<NSCam::v3::IImageStreamBuffer> > const&, NSCam::v3::IPipelineBufferSetFrameControl*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v317NSPipelineContext29update_streambuffers_to_frame16updateAppImageSBERKN7android18DefaultKeyedVectorIlNS3_2spINS0_16IImageStreamInfoEEEEERKNS4_IlNS5_INS0_18IImageStreamBufferEEEEEPNS0_30IPipelineBufferSetFrameControlE(void) {
    ALOGD("_ZNK5NSCam2v317NSPipelineContext29update_streambuffers_to_frame16updateAppImageSBERKN7android18DefaultKeyedVectorIlNS3_2spINS0_16IImageStreamInfoEEEEERKNS4_IlNS5_INS0_18IImageStreamBufferEEEEEPNS0_30IPipelineBufferSetFrameControlE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, unsigned int> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIljEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIljEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::StreamBuilder::StreamBuilder(NSCam::v3::NSPipelineContext::StreamBuilder const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext13StreamBuilderC2ERKS2_(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext13StreamBuilderC2ERKS2_() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::getName() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v317NSPipelineContext15PipelineContext7getNameEv(void) {
    ALOGD("_ZNK5NSCam2v317NSPipelineContext15PipelineContext7getNameEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::IRequestBuilder::make() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15IRequestBuilder4makeEv(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15IRequestBuilder4makeEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::config_pipeline::operator()(NSCam::v3::NSPipelineContext::config_pipeline::Params&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15config_pipelineclERNS2_6ParamsE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15config_pipelineclERNS2_6ParamsE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::update_streaminfo_to_set::operator()(NSCam::v3::NSPipelineContext::update_streaminfo_to_set::Params&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext24update_streaminfo_to_setclERNS2_6ParamsE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext24update_streaminfo_to_setclERNS2_6ParamsE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::Utils::StreamBufferPoolImp<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator>::MyBufferT>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v35Utils19StreamBufferPoolImpINS2_18IImageStreamBufferENS3_20HalImageStreamBufferENS6_9AllocatorEE9MyBufferTEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v35Utils19StreamBufferPoolImpINS2_18IImageStreamBufferENS3_20HalImageStreamBufferENS6_9AllocatorEE9MyBufferTEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::FrameBuilderImpl::setPhysicalCameraSetting(std::__1::vector<int, std::__1::allocator<int> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl24setPhysicalCameraSettingERKNSt3__16vectorIiNS3_9allocatorIiEEEE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl24setPhysicalCameraSettingERKNSt3__16vectorIiNS3_9allocatorIiEEEE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSPipelineContext::RequestBuilderImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v317NSPipelineContext18RequestBuilderImplE = NULL;

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::getImageMapItemLocked(long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp21getImageMapItemLockedEl(void) {
    ALOGD("_ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp21getImageMapItemLockedEl() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::IPipelineDAG::Edge>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v312IPipelineDAG4EdgeEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v312IPipelineDAG4EdgeEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::DefaultDispatcher::onDispatchFrame(android::sp<NSCam::v3::IPipelineFrame> const&, long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext17DefaultDispatcher15onDispatchFrameERKN7android2spINS0_14IPipelineFrameEEEl(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext17DefaultDispatcher15onDispatchFrameERKN7android2spINS0_14IPipelineFrameEEEl() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::InitFrameHandler::setConfigDone(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandler13setConfigDoneEi(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandler13setConfigDoneEi() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, unsigned int> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIljEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIljEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::Utils::StreamBufferPoolImp<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator>::MyBufferT>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v35Utils19StreamBufferPoolImpINS2_18IImageStreamBufferENS3_20HalImageStreamBufferENS6_9AllocatorEE9MyBufferTEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v35Utils19StreamBufferPoolImpINS2_18IImageStreamBufferENS3_20HalImageStreamBufferENS6_9AllocatorEE9MyBufferTEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::InitFrameHandler::threadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandler10threadLoopEv(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandler10threadLoopEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::FrameBuilderImpl::setRequestNo(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl12setRequestNoEj(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl12setRequestNoEj() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::IPipelineFrame::ImageInfoIOMap>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v314IPipelineFrame14ImageInfoIOMapEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v314IPipelineFrame14ImageInfoIOMapEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalMetaStreamBufferT, NSCam::v3::IMetaStreamBuffer>::streamInfoAt(unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZThn8_NK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS0_17IMetaStreamBufferEE12streamInfoAtEm(void) {
    ALOGD("_ZThn8_NK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS0_17IMetaStreamBufferEE12streamInfoAtEm() called");
    return 0;
}

/* Demangled: NSCam::v3::InFlightRequest::waitUntilDrained() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v315InFlightRequest16waitUntilDrainedEv(void) {
    ALOGD("_ZN5NSCam2v315InFlightRequest16waitUntilDrainedEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::Utils::StreamBufferPoolImp<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator>::MyBufferT>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v35Utils19StreamBufferPoolImpINS2_18IImageStreamBufferENS3_20HalImageStreamBufferENS6_9AllocatorEE9MyBufferTEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v35Utils19StreamBufferPoolImpINS2_18IImageStreamBufferENS3_20HalImageStreamBufferENS6_9AllocatorEE9MyBufferTEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferPoolImp<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator>::initPool(char const*, unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n48_N5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEE8initPoolEPKcmm(void) {
    ALOGD("_ZTv0_n48_N5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEE8initPoolEPKcmm() called");
    return 0;
}

/* Demangled: android::Vector<bool>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIbE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIbE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<long> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIlEE = NULL;

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::setPhysicalAppMetaStreamIds(std::__1::unordered_map<unsigned int, std::__1::vector<long, std::__1::allocator<long> >, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, std::__1::vector<long, std::__1::allocator<long> > > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp27setPhysicalAppMetaStreamIdsERKNSt3__113unordered_mapIjNS3_6vectorIlNS3_9allocatorIlEEEENS3_4hashIjEENS3_8equal_toIjEENS6_INS3_4pairIKjS8_EEEEEE(void) {
    ALOGD("_ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp27setPhysicalAppMetaStreamIdsERKNSt3__113unordered_mapIjNS3_6vectorIlNS3_9allocatorIlEEEENS3_4hashIjEENS3_8equal_toIjEENS6_INS3_4pairIKjS8_EEEEEE() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IImageStreamBuffer, NSCam::v3::IImageStreamBuffer>::IStreamBufferT> NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::getBufferLocked<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IImageStreamBuffer, NSCam::v3::IImageStreamBuffer> >(long, long, NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IImageStreamBuffer, NSCam::v3::IImageStreamBuffer> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp15getBufferLockedINS1_8TItemMapINS0_18IImageStreamBufferES5_EEEEN7android2spINT_14IStreamBufferTEEEllRKS9_(void) {
    ALOGD("_ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp15getBufferLockedINS1_8TItemMapINS0_18IImageStreamBufferES5_EEEEN7android2spINT_14IStreamBufferTEEEllRKS9_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::NodeStatus> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp10NodeStatusEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp10NodeStatusEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::IPipelineFrameNumberGenerator-in-NSCam::v3::PipelineFrameNumberGenerator */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v328PipelineFrameNumberGeneratorE0_NS0_29IPipelineFrameNumberGeneratorE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::IOMap>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::StreamConfig::acquireHalStreamBuffer(unsigned int, android::sp<NSCam::v3::IImageStreamInfo>, android::sp<NSCam::v3::Utils::HalImageStreamBuffer>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v317NSPipelineContext12StreamConfig22acquireHalStreamBufferEjN7android2spINS0_16IImageStreamInfoEEERNS4_INS0_5Utils20HalImageStreamBufferEEE(void) {
    ALOGD("_ZNK5NSCam2v317NSPipelineContext12StreamConfig22acquireHalStreamBufferEjN7android2spINS0_16IImageStreamInfoEEERNS4_INS0_5Utils20HalImageStreamBufferEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::handleReleasedBuffers(long, android::sp<NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp21handleReleasedBuffersElN7android2spINS0_30IPipelineBufferSetFrameControl12IAppCallbackEEE(void) {
    ALOGD("_ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp21handleReleasedBuffersElN7android2spINS0_30IPipelineBufferSetFrameControl12IAppCallbackEEE() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::IMetaStreamBuffer> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEEE = NULL;

/* Demangled: NSCam::v3::NSPipelineContext::set_streaminfoset_from_config::operator()(NSCam::v3::NSPipelineContext::set_streaminfoset_from_config::Params&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext29set_streaminfoset_from_configclERNS2_6ParamsE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext29set_streaminfoset_from_configclERNS2_6ParamsE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineContext::ContextNode> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext11ContextNodeEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext11ContextNodeEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE10do_compareEPKvSA_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE10do_compareEPKvSA_() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::finishConfigurationLocked() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp25finishConfigurationLockedEv(void) {
    ALOGD("_ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp25finishConfigurationLockedEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::NodeStatus> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp10NodeStatusEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp10NodeStatusEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<std::__1::mutex, std::__1::allocator<std::__1::mutex> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceINS_5mutexENS_9allocatorIS1_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceINS_5mutexENS_9allocatorIS1_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineContext::StreamConfig::ItemImageStream> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig15ItemImageStreamEEEEEEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::IPipelineBufferSetControl-in-NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImpE8_NS0_25IPipelineBufferSetControlE = NULL;

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::setInitFrameCount(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext17setInitFrameCountEj(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext17setInitFrameCountEj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::DefaultKeyedVector<long, unsigned int> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_18DefaultKeyedVectorIljEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_18DefaultKeyedVectorIljEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineContext::StreamConfig::ItemMetaStream> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig14ItemMetaStreamEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig14ItemMetaStreamEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::IStreamInfoSet::IMap<NSCam::v3::IImageStreamInfo>-in-NSCam::v3::Utils::SimpleStreamInfoSetControl::Map<NSCam::v3::IImageStreamInfo> */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v35Utils26SimpleStreamInfoSetControl3MapINS0_16IImageStreamInfoEEE0_NS0_14IStreamInfoSet4IMapIS4_EE = NULL;

/* Demangled: NSCam::v3::NSPipelineContext::PipelineBuilder::build(android::sp<NSCam::v3::NSPipelineContext::IPipelineContext>) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v317NSPipelineContext15PipelineBuilder5buildEN7android2spINS1_16IPipelineContextEEE(void) {
    ALOGD("_ZNK5NSCam2v317NSPipelineContext15PipelineBuilder5buildEN7android2spINS1_16IPipelineContextEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: void std::__1::__tree<long, std::__1::less<long>, std::__1::allocator<long> >::__assign_multi<std::__1::__tree_const_iterator<long, std::__1::__tree_node<long, void*>*, long> >(std::__1::__tree_const_iterator<long, std::__1::__tree_node<long, void*>*, long>, std::__1::__tree_const_iterator<long, std::__1::__tree_node<long, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeIlNS_4lessIlEENS_9allocatorIlEEE14__assign_multiINS_21__tree_const_iteratorIlPNS_11__tree_nodeIlPvEElEEEEvT_SD_(void) {
    ALOGD("_ZNSt3__16__treeIlNS_4lessIlEENS_9allocatorIlEEE14__assign_multiINS_21__tree_const_iteratorIlPNS_11__tree_nodeIlPvEElEEEEvT_SD_() called");
    return 0;
}

/* Demangled: __floatditf */
extern "C" __attribute__((visibility("default"))) int __floatditf(void) {
    ALOGD("__floatditf() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::Utils::StreamBufferPool<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v35Utils16StreamBufferPoolINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEEE = NULL;

/* Demangled: NSCam::v3::NSPipelineContext::StreamBuilder::StreamBuilder(NSCam::v3::NSPipelineContext::StreamBuilder const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext13StreamBuilderC1ERKS2_(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext13StreamBuilderC1ERKS2_() called");
    return 0;
}

/* Demangled: android::Vector<long>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIlE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIlE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalMetaStreamBufferT, NSCam::v3::IMetaStreamBuffer>::Item> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS4_17IMetaStreamBufferEE4ItemEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS4_17IMetaStreamBufferEE4ItemEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::StreamBufferPoolImp<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator>::~StreamBufferPoolImp() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEED0Ev(void) {
    ALOGD("_ZN5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEED0Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSPipelineContext::StreamConfig */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v317NSPipelineContext12StreamConfigE = NULL;

/* Demangled: __netf2 */
extern "C" __attribute__((visibility("default"))) int __netf2(void) {
    ALOGD("__netf2() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::DispatcherBase::onCtrlSync(unsigned int, long, unsigned int, unsigned int, long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext14DispatcherBase10onCtrlSyncEjljjl(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext14DispatcherBase10onCtrlSyncEjljjl() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::NodeBuilder::setImageStreamUsage(long, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext11NodeBuilder19setImageStreamUsageElj(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext11NodeBuilder19setImageStreamUsageElj() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineBuilder::~PipelineBuilder() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineBuilderD1Ev(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineBuilderD1Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::Utils::IStreamInfoSetControl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v35Utils21IStreamInfoSetControlE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineContext::ContextNode> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext11ContextNodeEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext11ContextNodeEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::Vector<android::String8>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::IPipelineBufferSetFrameControl::castFrom(NSCam::v3::IPipelineFrame*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v330IPipelineBufferSetFrameControl8castFromEPNS0_14IPipelineFrameE(void) {
    ALOGD("_ZN5NSCam2v330IPipelineBufferSetFrameControl8castFromEPNS0_14IPipelineFrameE() called");
    return 0;
}

/* Demangled: android::Vector<long>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIlE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIlE10do_destroyEPvm() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::v3::IPipelineFrame::ImageInfoIOMap> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam2v314IPipelineFrame14ImageInfoIOMapEEE = NULL;

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::getImageBuffer(long, long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp14getImageBufferEll(void) {
    ALOGD("_ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp14getImageBufferEll() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::NSPipelineContext::DispatcherBase::onCtrlReadout(unsigned int, long, long, NSCam::IMetadata&, long, NSCam::IMetadata&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n72_N5NSCam2v317NSPipelineContext14DispatcherBase13onCtrlReadoutEjllRNS_9IMetadataElS4_Ri(void) {
    ALOGD("_ZTv0_n72_N5NSCam2v317NSPipelineContext14DispatcherBase13onCtrlReadoutEjllRNS_9IMetadataElS4_Ri() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::cast(NSCam::v3::NSPipelineContext::IPipelineContext*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext4castEPNS1_16IPipelineContextE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext4castEPNS1_16IPipelineContextE() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::IPipelineFrame>::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp>(NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v314IPipelineFrameEEC2INS2_34NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImpEEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam2v314IPipelineFrameEEC2INS2_34NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImpEEEPT_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::NSPipelineContext::IOMapSet> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v317NSPipelineContext8IOMapSetEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v317NSPipelineContext8IOMapSetEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::StreamConfig::~StreamConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext12StreamConfigD0Ev(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext12StreamConfigD0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::IStreamBufferSet-in-NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImpE8_NS0_16IStreamBufferSetE = NULL;

/* Demangled: NSCam::v3::InFlightRequest::onPipelineFrame(unsigned int, unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v315InFlightRequest15onPipelineFrameEjjPv(void) {
    ALOGD("_ZN5NSCam2v315InFlightRequest15onPipelineFrameEjjPv() called");
    return 0;
}

/* Demangled: NSCam::v3::InFlightRequest::abort() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v315InFlightRequest5abortEv(void) {
    ALOGD("_ZN5NSCam2v315InFlightRequest5abortEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::StreamBuilder::setProvider(android::sp<NSCam::v3::Utils::IStreamBufferProvider>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext13StreamBuilder11setProviderEN7android2spINS0_5Utils21IStreamBufferProviderEEE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext13StreamBuilder11setProviderEN7android2spINS0_5Utils21IStreamBufferProviderEEE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n40_N5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: __lttf2 */
extern "C" __attribute__((visibility("default"))) int __lttf2(void) {
    ALOGD("__lttf2() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<void (*)(android::sp<NSCam::v3::NSPipelineContext::INodeActor>), std::__1::allocator<void (*)(android::sp<NSCam::v3::NSPipelineContext::INodeActor>)>, void (android::sp<NSCam::v3::NSPipelineContext::INodeActor>)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFvN7android2spIN5NSCam2v317NSPipelineContext10INodeActorEEEENS_9allocatorISA_EES9_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFvN7android2spIN5NSCam2v317NSPipelineContext10INodeActorEEEENS_9allocatorISA_EES9_E7destroyEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp(NSCam::v3::IPipelineBufferSetFrameControl::CreationParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImpC2ERKNS0_30IPipelineBufferSetFrameControl14CreationParamsE(void) {
    ALOGD("_ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImpC2ERKNS0_30IPipelineBufferSetFrameControl14CreationParamsE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::markUserStatus(long, long, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp14markUserStatusEllj(void) {
    ALOGD("_ZThn8_N5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp14markUserStatusEllj() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::queue(android::sp<NSCam::v3::IPipelineFrame> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext5queueERKN7android2spINS0_14IPipelineFrameEEE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext5queueERKN7android2spINS0_14IPipelineFrameEEE() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::v3::Utils::StreamBufferPoolImp<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator>::MyBufferT> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam2v35Utils19StreamBufferPoolImpINS2_18IImageStreamBufferENS3_20HalImageStreamBufferENS6_9AllocatorEE9MyBufferTEEE = NULL;

/* Demangled: NSCam::v3::IPipelineDAG::create() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v312IPipelineDAG6createEv(void) {
    ALOGD("_ZN5NSCam2v312IPipelineDAG6createEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::InitFrameHandler::requestExit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandler11requestExitEv(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandler11requestExitEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::FrameBuilderImpl::setHalImageStreamBuffer(long, android::sp<NSCam::v3::IImageStreamBuffer>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl23setHalImageStreamBufferElN7android2spINS0_18IImageStreamBufferEEE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl23setHalImageStreamBufferElN7android2spINS0_18IImageStreamBufferEEE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::NodeEdge>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineContext::StreamConfig::ItemMetaStream> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig14ItemMetaStreamEEEEEEE = NULL;

/* Demangled: android::List<NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::MyListener>::operator=(android::List<NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::MyListener> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4ListIN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp10MyListenerEEaSERKS6_(void) {
    ALOGD("_ZN7android4ListIN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp10MyListenerEEaSERKS6_() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::queryImageStreamPool(long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl20queryImageStreamPoolEl(void) {
    ALOGD("_ZNK5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl20queryImageStreamPoolEl() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m(void) {
    ALOGD("_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IImageStreamBuffer, NSCam::v3::IImageStreamBuffer>::streamInfoAt(unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZThn8_NK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_18IImageStreamBufferES3_E12streamInfoAtEm(void) {
    ALOGD("_ZThn8_NK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_18IImageStreamBufferES3_E12streamInfoAtEm() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::Utils::IStreamInfoSetControl>::operator=(android::sp<NSCam::v3::Utils::IStreamInfoSetControl> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v35Utils21IStreamInfoSetControlEEaSERKS5_(void) {
    ALOGD("_ZN7android2spIN5NSCam2v35Utils21IStreamInfoSetControlEEaSERKS5_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, int> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::PipelineFrameNumberGenerator */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v328PipelineFrameNumberGeneratorE = NULL;

/* Demangled: __subtf3 */
extern "C" __attribute__((visibility("default"))) int __subtf3(void) {
    ALOGD("__subtf3() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSPipelineContext::StreamConfig::ItemMetaStream */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v317NSPipelineContext12StreamConfig14ItemMetaStreamE = NULL;

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::operator=(std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEaSEOS5_(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEaSEOS5_() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::InitFrameHandler::~InitFrameHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandlerD2Ev(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandlerD2Ev() called");
    return 0;
}

/* Exported Object: VTT for NSCam::v3::Utils::StreamBufferPool<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator> */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam2v35Utils16StreamBufferPoolINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalImageStreamBufferT, NSCam::v3::IImageStreamBuffer>::Item> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS4_18IImageStreamBufferEE4ItemEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS4_18IImageStreamBufferEE4ItemEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::kick(android::sp<NSCam::v3::IPipelineFrame> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl4kickERKN7android2spINS0_14IPipelineFrameEEE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl4kickERKN7android2spINS0_14IPipelineFrameEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::PipelineContextImpl(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImplC2EPKc(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImplC2EPKc() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineContext::StreamConfig::ItemImageStream> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig15ItemImageStreamEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig15ItemImageStreamEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<android::String8> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_7String8EEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::buildFrame(std::__1::vector<NSCam::v3::NSPipelineContext::FrameBuilderImpl*, std::__1::allocator<NSCam::v3::NSPipelineContext::FrameBuilderImpl*> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl10buildFrameERKNSt3__16vectorIPNS1_16FrameBuilderImplENS4_9allocatorIS7_EEEE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl10buildFrameERKNSt3__16vectorIPNS1_16FrameBuilderImplENS4_9allocatorIS7_EEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::FrameBuilderImpl::setNodeEdges(NSCam::v3::NSPipelineContext::NodeEdgeSet const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl12setNodeEdgesERKNS1_11NodeEdgeSetE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl12setNodeEdgesERKNS1_11NodeEdgeSetE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::update_streambuffers_to_frame::updateHalImageSB(android::DefaultKeyedVector<long, android::sp<NSCam::v3::IImageStreamInfo> > const&, android::DefaultKeyedVector<long, android::sp<NSCam::v3::IImageStreamBuffer> > const&, NSCam::v3::IPipelineBufferSetFrameControl*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v317NSPipelineContext29update_streambuffers_to_frame16updateHalImageSBERKN7android18DefaultKeyedVectorIlNS3_2spINS0_16IImageStreamInfoEEEEERKNS4_IlNS5_INS0_18IImageStreamBufferEEEEEPNS0_30IPipelineBufferSetFrameControlE(void) {
    ALOGD("_ZNK5NSCam2v317NSPipelineContext29update_streambuffers_to_frame16updateHalImageSBERKN7android18DefaultKeyedVectorIlNS3_2spINS0_16IImageStreamInfoEEEEERKNS4_IlNS5_INS0_18IImageStreamBufferEEEEEPNS0_30IPipelineBufferSetFrameControlE() called");
    return 0;
}

/* Demangled: __addtf3 */
extern "C" __attribute__((visibility("default"))) int __addtf3(void) {
    ALOGD("__addtf3() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, int> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::DispatcherBase::onNextCaptureCallBack(unsigned int, long, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext14DispatcherBase21onNextCaptureCallBackEjlji(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext14DispatcherBase21onNextCaptureCallBackEjlji() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineContext::ContextNode> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext11ContextNodeEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext11ContextNodeEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::future<int>, std::__1::allocator<std::__1::future<int> > >::__push_back_slow_path<std::__1::future<int> >(std::__1::future<int>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_6futureIiEENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_6futureIiEENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::getPipelineDAG() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp14getPipelineDAGEv(void) {
    ALOGD("_ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp14getPipelineDAGEv() called");
    return 0;
}

/* Demangled: createNodeActor */
extern "C" __attribute__((visibility("default"))) int createNodeActor(void) {
    ALOGD("createNodeActor() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::queue(std::__1::vector<android::sp<NSCam::v3::IPipelineFrame>, std::__1::allocator<android::sp<NSCam::v3::IPipelineFrame> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext5queueERKNSt3__16vectorIN7android2spINS0_14IPipelineFrameEEENS3_9allocatorIS8_EEEE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext5queueERKNSt3__16vectorIN7android2spINS0_14IPipelineFrameEEENS3_9allocatorIS8_EEEE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__async_assoc_state<int, std::__1::__async_func<int (*)(android::sp<NSCam::v3::NSPipelineContext::INodeActor>, android::sp<NSCam::v3::INodeCallbackToPipeline>), android::sp<NSCam::v3::NSPipelineContext::INodeActor>, android::sp<NSCam::v3::INodeCallbackToPipeline> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__119__async_assoc_stateIiNS_12__async_funcIPFiN7android2spIN5NSCam2v317NSPipelineContext10INodeActorEEENS3_INS5_23INodeCallbackToPipelineEEEEJS8_SA_EEEEE = NULL;

/* Demangled: android::Vector<NSCam::v3::IPipelineDAG::TNodeObj<long, long> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v312IPipelineDAG8TNodeObjIllEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v312IPipelineDAG8TNodeObjIllEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > > > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: NSCam::v3::InFlightRequest::waitUntilNodeMetaDrained(long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v315InFlightRequest24waitUntilNodeMetaDrainedEl(void) {
    ALOGD("_ZN5NSCam2v315InFlightRequest24waitUntilNodeMetaDrainedEl() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContext(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContextC2EPKc(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContextC2EPKc() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::config(NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl6configEPS3_ii(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl6configEPS3_ii() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::StreamBufferPoolImp<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator>::StreamBufferPoolImp(char const*, NSCam::v3::Utils::HalImageStreamBuffer::Allocator const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEEC2EPKcRKS5_(void) {
    ALOGD("_ZN5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEEC2EPKcRKS5_() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineBuilder::setRootNode(NSCam::v3::Set<long> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineBuilder11setRootNodeERKNS0_3SetIlEE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineBuilder11setRootNodeERKNS0_3SetIlEE() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<bool> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIbEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::queryNode(long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl9queryNodeEl(void) {
    ALOGD("_ZNK5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl9queryNodeEl() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE10do_compareEPKvSA_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE10do_compareEPKvSA_() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::NodeStatus> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp10NodeStatusEEEEEEE = NULL;

/* Demangled: virtual thunk to NSCam::v3::NSPipelineContext::DispatcherBase::onNextCaptureCallBack(unsigned int, long, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n88_N5NSCam2v317NSPipelineContext14DispatcherBase21onNextCaptureCallBackEjlji(void) {
    ALOGD("_ZTv0_n88_N5NSCam2v317NSPipelineContext14DispatcherBase21onNextCaptureCallBackEjlji() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::StreamBufferPoolImp<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator>::dumpPool() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEE8dumpPoolEv(void) {
    ALOGD("_ZNK5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEE8dumpPoolEv() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::buildFrame(NSCam::v3::NSPipelineContext::FrameBuilderImpl*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl10buildFrameEPNS1_16FrameBuilderImplE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl10buildFrameEPNS1_16FrameBuilderImplE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::queryINodeActor(long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v317NSPipelineContext15PipelineContext15queryINodeActorEl(void) {
    ALOGD("_ZNK5NSCam2v317NSPipelineContext15PipelineContext15queryINodeActorEl() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::v3::IPipelineNode> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v313IPipelineNodeEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v313IPipelineNodeEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: __gttf2 */
extern "C" __attribute__((visibility("default"))) int __gttf2(void) {
    ALOGD("__gttf2() called");
    return 0;
}

/* Demangled: NSCam::v3::PipelineFrameNumberGenerator::PipelineFrameNumberGenerator() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v328PipelineFrameNumberGeneratorC2Ev(void) {
    ALOGD("_ZN5NSCam2v328PipelineFrameNumberGeneratorC2Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::RequestBuilderImpl::build(android::sp<NSCam::v3::NSPipelineContext::IPipelineContext>, std::__1::vector<std::__1::shared_ptr<NSCam::v3::NSPipelineContext::IFrameBuilder>, std::__1::allocator<std::__1::shared_ptr<NSCam::v3::NSPipelineContext::IFrameBuilder> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext18RequestBuilderImpl5buildEN7android2spINS1_16IPipelineContextEEERKNSt3__16vectorINS7_10shared_ptrINS1_13IFrameBuilderEEENS7_9allocatorISB_EEEE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext18RequestBuilderImpl5buildEN7android2spINS1_16IPipelineContextEEERKNSt3__16vectorINS7_10shared_ptrINS1_13IFrameBuilderEEENS7_9allocatorISB_EEEE() called");
    return 0;
}

/* Demangled: __unordtf2 */
extern "C" __attribute__((visibility("default"))) int __unordtf2(void) {
    ALOGD("__unordtf2() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::v3::IPipelineDAG::TNodeObj<long, long> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam2v312IPipelineDAG8TNodeObjIllEEEE = NULL;

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::getPipelineNodeCallback() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp23getPipelineNodeCallbackEv(void) {
    ALOGD("_ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp23getPipelineNodeCallbackEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::update_streambuffers_to_frame::updateAppMetaSB(android::DefaultKeyedVector<long, android::sp<NSCam::v3::IMetaStreamInfo> > const&, android::DefaultKeyedVector<long, android::sp<NSCam::v3::IMetaStreamBuffer> > const&, NSCam::v3::IPipelineBufferSetFrameControl*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v317NSPipelineContext29update_streambuffers_to_frame15updateAppMetaSBERKN7android18DefaultKeyedVectorIlNS3_2spINS0_15IMetaStreamInfoEEEEERKNS4_IlNS5_INS0_17IMetaStreamBufferEEEEEPNS0_30IPipelineBufferSetFrameControlE(void) {
    ALOGD("_ZNK5NSCam2v317NSPipelineContext29update_streambuffers_to_frame15updateAppMetaSBERKN7android18DefaultKeyedVectorIlNS3_2spINS0_15IMetaStreamInfoEEEEERKNS4_IlNS5_INS0_17IMetaStreamBufferEEEEEPNS0_30IPipelineBufferSetFrameControlE() called");
    return 0;
}

/* Demangled: std::__1::future<int> std::__1::__make_async_assoc_state<int, std::__1::__async_func<int (*)(android::sp<NSCam::v3::NSPipelineContext::INodeActor>, android::sp<NSCam::v3::INodeCallbackToPipeline>), android::sp<NSCam::v3::NSPipelineContext::INodeActor>, android::sp<NSCam::v3::INodeCallbackToPipeline> > >(std::__1::__async_func<int (*)(android::sp<NSCam::v3::NSPipelineContext::INodeActor>, android::sp<NSCam::v3::INodeCallbackToPipeline>), android::sp<NSCam::v3::NSPipelineContext::INodeActor>, android::sp<NSCam::v3::INodeCallbackToPipeline> >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__124__make_async_assoc_stateIiNS_12__async_funcIPFiN7android2spIN5NSCam2v317NSPipelineContext10INodeActorEEENS3_INS5_23INodeCallbackToPipelineEEEEJS8_SA_EEEEENS_6futureIT_EEOT0_(void) {
    ALOGD("_ZNSt3__124__make_async_assoc_stateIiNS_12__async_funcIPFiN7android2spIN5NSCam2v317NSPipelineContext10INodeActorEEENS3_INS5_23INodeCallbackToPipelineEEEEJS8_SA_EEEEENS_6futureIT_EEOT0_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSPipelineContext::DispatcherBase */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v317NSPipelineContext14DispatcherBaseE = NULL;

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::getStreamInfoSet() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp16getStreamInfoSetEv(void) {
    ALOGD("_ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp16getStreamInfoSetEv() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEEE = NULL;

/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::IOMap>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::IPipelineDAG::TNodeObj<long, long> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v312IPipelineDAG8TNodeObjIllEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v312IPipelineDAG8TNodeObjIllEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::Utils::IStreamInfoSetControl::Set<NSCam::v3::IImageStreamInfo> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v35Utils21IStreamInfoSetControl3SetINS0_16IImageStreamInfoEEE = NULL;

/* Demangled: android::Vector<unsigned int>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIjE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIjE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::FrameBuilderImpl::replaceStreamInfo(long, android::sp<NSCam::v3::IImageStreamInfo>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl17replaceStreamInfoElN7android2spINS0_16IImageStreamInfoEEE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl17replaceStreamInfoElN7android2spINS0_16IImageStreamInfoEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<long>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorIlE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorIlE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalMetaStreamBufferT, NSCam::v3::IMetaStreamBuffer>::usersManagerAt(unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS0_17IMetaStreamBufferEE14usersManagerAtEm(void) {
    ALOGD("_ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS0_17IMetaStreamBufferEE14usersManagerAtEm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::NodeBuilder::NodeBuilder(NSCam::v3::NSPipelineContext::NodeBuilder const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext11NodeBuilderC1ERKS2_(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext11NodeBuilderC1ERKS2_() called");
    return 0;
}

/* Demangled: android::Vector<bool>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIbE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIbE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::NodeStatus> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp10NodeStatusEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp10NodeStatusEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::NSPipelineContext::DispatcherBase::onCtrlResize(unsigned int, long, long, NSCam::IMetadata&, long, NSCam::IMetadata&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n64_N5NSCam2v317NSPipelineContext14DispatcherBase12onCtrlResizeEjllRNS_9IMetadataElS4_Ri(void) {
    ALOGD("_ZTv0_n64_N5NSCam2v317NSPipelineContext14DispatcherBase12onCtrlResizeEjllRNS_9IMetadataElS4_Ri() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::waitUntilNodeDrained(long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext20waitUntilNodeDrainedEl(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext20waitUntilNodeDrainedEl() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, unsigned int> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIljEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIljEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::Utils::IStreamInfoSetControl::Set<NSCam::v3::IMetaStreamInfo> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v35Utils21IStreamInfoSetControl3SetINS0_15IMetaStreamInfoEEE = NULL;

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::queryGroupUsage(long, long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp15queryGroupUsageEll(void) {
    ALOGD("_ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp15queryGroupUsageEll() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::IPipelineFrame-in-NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImpE0_NS0_14IPipelineFrameE = NULL;

/* Demangled: std::__1::__function::__func<void (*)(android::sp<NSCam::v3::NSPipelineContext::INodeActor>), std::__1::allocator<void (*)(android::sp<NSCam::v3::NSPipelineContext::INodeActor>)>, void (android::sp<NSCam::v3::NSPipelineContext::INodeActor>)>::__clone(std::__1::__function::__base<void (android::sp<NSCam::v3::NSPipelineContext::INodeActor>)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFvN7android2spIN5NSCam2v317NSPipelineContext10INodeActorEEEENS_9allocatorISA_EES9_E7__cloneEPNS0_6__baseIS9_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFvN7android2spIN5NSCam2v317NSPipelineContext10INodeActorEEEENS_9allocatorISA_EES9_E7__cloneEPNS0_6__baseIS9_EE() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<long> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorIlEE = NULL;

/* Demangled: android::Vector<NSCam::v3::IPipelineFrame::MetaInfoIOMap>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v314IPipelineFrame13MetaInfoIOMapEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v314IPipelineFrame13MetaInfoIOMapEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::Vector<unsigned int>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIjE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIjE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext15onLastStrongRefEPKv(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::endFlush() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl8endFlushEv(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl8endFlushEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<void (*)(android::sp<NSCam::v3::NSPipelineContext::INodeActor>), std::__1::allocator<void (*)(android::sp<NSCam::v3::NSPipelineContext::INodeActor>)>, void (android::sp<NSCam::v3::NSPipelineContext::INodeActor>)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFvN7android2spIN5NSCam2v317NSPipelineContext10INodeActorEEEENS_9allocatorISA_EES9_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFvN7android2spIN5NSCam2v317NSPipelineContext10INodeActorEEEENS_9allocatorISA_EES9_E7__cloneEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::InitFrameHandler::InitFrameHandler(unsigned int, android::sp<NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandlerC1EjN7android2spIS3_EE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandlerC1EjN7android2spIS3_EE() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::v3::NSPipelineContext::NodeEdge> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEEE = NULL;

/* Demangled: NSCam::v3::NSPipelineContext::NodeConfig::setImageStreamUsage(long, android::DefaultKeyedVector<long, unsigned int> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext10NodeConfig19setImageStreamUsageElRKN7android18DefaultKeyedVectorIljEE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext10NodeConfig19setImageStreamUsageElRKN7android18DefaultKeyedVectorIljEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::DefaultKeyedVector<long, unsigned int> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_18DefaultKeyedVectorIljEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_18DefaultKeyedVectorIljEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalImageStreamBufferT, NSCam::v3::IImageStreamBuffer>::streamInfoAt(unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS0_18IImageStreamBufferEE12streamInfoAtEm(void) {
    ALOGD("_ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS0_18IImageStreamBufferEE12streamInfoAtEm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, std::__1::vector<android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamBuffer> > > > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::NSPipelineContext::IOMapSet> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v317NSPipelineContext8IOMapSetEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v317NSPipelineContext8IOMapSetEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IImageStreamBuffer, NSCam::v3::IImageStreamBuffer>::add(android::sp<NSCam::v3::IImageStreamInfo>, android::sp<NSCam::v3::IUsersManager>) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_18IImageStreamBufferES3_E3addEN7android2spINS0_16IImageStreamInfoEEENS6_INS0_13IUsersManagerEEE(void) {
    ALOGD("_ZThn8_N5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_18IImageStreamBufferES3_E3addEN7android2spINS0_16IImageStreamInfoEEENS6_INS0_13IUsersManagerEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::getImageBuffer(long, long) const */
extern "C" __attribute__((visibility("default"))) int _ZThn8_NK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp14getImageBufferEll(void) {
    ALOGD("_ZThn8_NK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp14getImageBufferEll() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::InitFrameHandler::~InitFrameHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandlerD1Ev(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandlerD1Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::getImpl() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v317NSPipelineContext15PipelineContext7getImplEv(void) {
    ALOGD("_ZNK5NSCam2v317NSPipelineContext15PipelineContext7getImplEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::updateConfig(NSCam::v3::NSPipelineContext::NodeBuilderImpl*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl12updateConfigEPNS1_15NodeBuilderImplE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl12updateConfigEPNS1_15NodeBuilderImplE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineContext::ContextNode> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext11ContextNodeEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext11ContextNodeEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::StreamBuilder::~StreamBuilder() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext13StreamBuilderD2Ev(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext13StreamBuilderD2Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::createAcquireFence(long, long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp18createAcquireFenceEll(void) {
    ALOGD("_ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp18createAcquireFenceEll() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::IPipelineNodeMap const>::sp<NSCam::v3::IPipelineNodeMapControl>(NSCam::v3::IPipelineNodeMapControl*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIKN5NSCam2v316IPipelineNodeMapEEC2INS2_23IPipelineNodeMapControlEEEPT_(void) {
    ALOGD("_ZN7android2spIKN5NSCam2v316IPipelineNodeMapEEC2INS2_23IPipelineNodeMapControlEEEPT_() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<void (*)(android::sp<NSCam::v3::NSPipelineContext::INodeActor>), std::__1::allocator<void (*)(android::sp<NSCam::v3::NSPipelineContext::INodeActor>)>, void (android::sp<NSCam::v3::NSPipelineContext::INodeActor>)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFvN7android2spIN5NSCam2v317NSPipelineContext10INodeActorEEEENS_9allocatorISA_EES9_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFvN7android2spIN5NSCam2v317NSPipelineContext10INodeActorEEEENS_9allocatorISA_EES9_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: std::__1::vector<android::sp<NSCam::v3::IPipelineFrame>, std::__1::allocator<android::sp<NSCam::v3::IPipelineFrame> > >::reserve(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spIN5NSCam2v314IPipelineFrameEEENS_9allocatorIS6_EEE7reserveEm(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spIN5NSCam2v314IPipelineFrameEEENS_9allocatorIS6_EEE7reserveEm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalImageStreamBufferT, NSCam::v3::IImageStreamBuffer>::Item */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS0_18IImageStreamBufferEE4ItemE = NULL;

/* Demangled: void std::__1::vector<android::sp<NSCam::v3::IPipelineFrame>, std::__1::allocator<android::sp<NSCam::v3::IPipelineFrame> > >::__push_back_slow_path<android::sp<NSCam::v3::IPipelineFrame> const&>(android::sp<NSCam::v3::IPipelineFrame> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spIN5NSCam2v314IPipelineFrameEEENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spIN5NSCam2v314IPipelineFrameEEENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_() called");
    return 0;
}

/* Demangled: void* std::__1::__thread_proxy<std::__1::tuple<std::__1::unique_ptr<std::__1::__thread_struct, std::__1::default_delete<std::__1::__thread_struct> >, void (NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::InitFrameHandler::*)(std::__1::shared_ptr<NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::InitFrameHandler>, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >), std::__1::shared_ptr<NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::InitFrameHandler>, std::__1::shared_ptr<NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::InitFrameHandler>, char const*> >(void*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__thread_proxyINS_5tupleIJNS_10unique_ptrINS_15__thread_structENS_14default_deleteIS3_EEEEMN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandlerEFvNS_10shared_ptrISC_EENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEESE_SE_PKcEEEEEPvSQ_(void) {
    ALOGD("_ZNSt3__114__thread_proxyINS_5tupleIJNS_10unique_ptrINS_15__thread_structENS_14default_deleteIS3_EEEEMN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandlerEFvNS_10shared_ptrISC_EENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEESE_SE_PKcEEEEEPvSQ_() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<unsigned int> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIjEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamBuffer> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::v3::NSPipelineContext::IOMap> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::DefaultKeyedVector<long, unsigned int> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_18DefaultKeyedVectorIljEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_18DefaultKeyedVectorIljEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, std::__1::vector<android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamBuffer> > > > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalImageStreamBufferT, NSCam::v3::IImageStreamBuffer>::usersManagerAt(unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZThn8_NK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS0_18IImageStreamBufferEE14usersManagerAtEm(void) {
    ALOGD("_ZThn8_NK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS0_18IImageStreamBufferEE14usersManagerAtEm() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEEE = NULL;

/* Demangled: android::Vector<NSCam::v3::IPipelineFrame::ImageInfoIOMap>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v314IPipelineFrame14ImageInfoIOMapEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v314IPipelineFrame14ImageInfoIOMapEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::InitFrameHandler::make(unsigned int, android::sp<NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandler4makeEjN7android2spIS3_EE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandler4makeEjN7android2spIS3_EE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<std::__1::mutex, std::__1::allocator<std::__1::mutex> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceINS_5mutexENS_9allocatorIS1_EEEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineContext::ContextNode> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext11ContextNodeEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext11ContextNodeEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::InitFrameHandler::dumpState(android::Printer&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandler9dumpStateERN7android7PrinterE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandler9dumpStateERN7android7PrinterE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::magicName() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext9magicNameEv(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext9magicNameEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalImageStreamBufferT, NSCam::v3::IImageStreamBuffer>::onAllUsersReleased(NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalImageStreamBufferT, NSCam::v3::IImageStreamBuffer>::Item&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS0_18IImageStreamBufferEE18onAllUsersReleasedERNS5_4ItemE(void) {
    ALOGD("_ZN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS0_18IImageStreamBufferEE18onAllUsersReleasedERNS5_4ItemE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::NodeStatus> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp10NodeStatusEEEEEE10do_compareEPKvSC_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp10NodeStatusEEEEEE10do_compareEPKvSC_() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::RequestBuilderImpl::build(android::sp<NSCam::v3::NSPipelineContext::IPipelineContext>, std::__1::shared_ptr<NSCam::v3::NSPipelineContext::IFrameBuilder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext18RequestBuilderImpl5buildEN7android2spINS1_16IPipelineContextEEERKNSt3__110shared_ptrINS1_13IFrameBuilderEEE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext18RequestBuilderImpl5buildEN7android2spINS1_16IPipelineContextEEERKNSt3__110shared_ptrINS1_13IFrameBuilderEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamBuffer> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::update_streambuffers_to_frame::updateHalMetaSB(android::DefaultKeyedVector<long, android::sp<NSCam::v3::IMetaStreamInfo> > const&, android::DefaultKeyedVector<long, android::sp<NSCam::v3::IMetaStreamBuffer> > const&, NSCam::v3::IPipelineBufferSetFrameControl*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v317NSPipelineContext29update_streambuffers_to_frame15updateHalMetaSBERKN7android18DefaultKeyedVectorIlNS3_2spINS0_15IMetaStreamInfoEEEEERKNS4_IlNS5_INS0_17IMetaStreamBufferEEEEEPNS0_30IPipelineBufferSetFrameControlE(void) {
    ALOGD("_ZNK5NSCam2v317NSPipelineContext29update_streambuffers_to_frame15updateHalMetaSBERKN7android18DefaultKeyedVectorIlNS3_2spINS0_15IMetaStreamInfoEEEEERKNS4_IlNS5_INS0_17IMetaStreamBufferEEEEEPNS0_30IPipelineBufferSetFrameControlE() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::v3::IPipelineNode> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v313IPipelineNodeEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v313IPipelineNodeEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::attachListener(android::wp<NSCam::v3::IPipelineFrameListener> const&, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp14attachListenerERKN7android2wpINS0_22IPipelineFrameListenerEEEPv(void) {
    ALOGD("_ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp14attachListenerERKN7android2wpINS0_22IPipelineFrameListenerEEEPv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalMetaStreamBufferT, NSCam::v3::IMetaStreamBuffer>::onAllUsersReleased(NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalMetaStreamBufferT, NSCam::v3::IMetaStreamBuffer>::Item&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS0_17IMetaStreamBufferEE18onAllUsersReleasedERNS5_4ItemE(void) {
    ALOGD("_ZN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS0_17IMetaStreamBufferEE18onAllUsersReleasedERNS5_4ItemE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::NSPipelineContext::IOMapSet> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v317NSPipelineContext8IOMapSetEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v317NSPipelineContext8IOMapSetEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: void* std::__1::__thread_proxy<std::__1::tuple<std::__1::unique_ptr<std::__1::__thread_struct, std::__1::default_delete<std::__1::__thread_struct> >, void (std::__1::__async_assoc_state<int, std::__1::__async_func<int (*)(android::sp<NSCam::v3::NSPipelineContext::INodeActor>, android::sp<NSCam::v3::INodeCallbackToPipeline>), android::sp<NSCam::v3::NSPipelineContext::INodeActor>, android::sp<NSCam::v3::INodeCallbackToPipeline> > >::*)(), std::__1::__async_assoc_state<int, std::__1::__async_func<int (*)(android::sp<NSCam::v3::NSPipelineContext::INodeActor>, android::sp<NSCam::v3::INodeCallbackToPipeline>), android::sp<NSCam::v3::NSPipelineContext::INodeActor>, android::sp<NSCam::v3::INodeCallbackToPipeline> > >*> >(void*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__thread_proxyINS_5tupleIJNS_10unique_ptrINS_15__thread_structENS_14default_deleteIS3_EEEEMNS_19__async_assoc_stateIiNS_12__async_funcIPFiN7android2spIN5NSCam2v317NSPipelineContext10INodeActorEEENSA_INSC_23INodeCallbackToPipelineEEEEJSF_SH_EEEEEFvvEPSL_EEEEEPvSQ_(void) {
    ALOGD("_ZNSt3__114__thread_proxyINS_5tupleIJNS_10unique_ptrINS_15__thread_structENS_14default_deleteIS3_EEEEMNS_19__async_assoc_stateIiNS_12__async_funcIPFiN7android2spIN5NSCam2v317NSPipelineContext10INodeActorEEENSA_INSC_23INodeCallbackToPipelineEEEEJSF_SH_EEEEEFvvEPSL_EEEEEPvSQ_() called");
    return 0;
}

/* Demangled: __letf2 */
extern "C" __attribute__((visibility("default"))) int __letf2(void) {
    ALOGD("__letf2() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::IPipelineFrame::ImageInfoIOMap>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v314IPipelineFrame14ImageInfoIOMapEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v314IPipelineFrame14ImageInfoIOMapEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Exported Object: VTT for NSCam::v3::PipelineFrameNumberGenerator */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam2v328PipelineFrameNumberGeneratorE = NULL;

/* Exported Object: vtable for android::List<unsigned int> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android4ListIjEE = NULL;

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::InitFrameHandler::enqueue(android::sp<NSCam::v3::IPipelineFrame> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandler7enqueueERKN7android2spINS0_14IPipelineFrameEEE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandler7enqueueERKN7android2spINS0_14IPipelineFrameEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::PipelineFrameNumberGenerator::PipelineFrameNumberGenerator() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v328PipelineFrameNumberGeneratorC1Ev(void) {
    ALOGD("_ZN5NSCam2v328PipelineFrameNumberGeneratorC1Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::StreamBuilder::StreamBuilder(NSCam::v3::NSPipelineContext::eStreamType, android::sp<NSCam::v3::IImageStreamInfo>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext13StreamBuilderC1ENS1_11eStreamTypeEN7android2spINS0_16IImageStreamInfoEEE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext13StreamBuilderC1ENS1_11eStreamTypeEN7android2spINS0_16IImageStreamInfoEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::List<unsigned int> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_4ListIjEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_4ListIjEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::beginFlush() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl10beginFlushEv(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl10beginFlushEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::NodeBuilder::NodeBuilder(long, android::sp<NSCam::v3::NSPipelineContext::INodeActor>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext11NodeBuilderC2ElN7android2spINS1_10INodeActorEEE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext11NodeBuilderC2ElN7android2spINS1_10INodeActorEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IImageStreamBuffer, NSCam::v3::IImageStreamBuffer>::Item> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_18IImageStreamBufferES7_E4ItemEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_18IImageStreamBufferES7_E4ItemEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::DefaultKeyedVector<long, unsigned int> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_18DefaultKeyedVectorIljEEEEE10do_compareEPKvS7_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_18DefaultKeyedVectorIljEEEEE10do_compareEPKvS7_() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::getStreamBufferSet() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp18getStreamBufferSetEv(void) {
    ALOGD("_ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp18getStreamBufferSetEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalImageStreamBufferT, NSCam::v3::IImageStreamBuffer>::add(android::sp<NSCam::v3::IImageStreamBuffer>) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS0_18IImageStreamBufferEE3addEN7android2spIS4_EE(void) {
    ALOGD("_ZThn8_N5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS0_18IImageStreamBufferEE3addEN7android2spIS4_EE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::dumpState(android::Printer&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl9dumpStateERN7android7PrinterERKNSt3__16vectorINS7_12basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEENSC_ISE_EEEE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl9dumpStateERN7android7PrinterERKNSt3__16vectorINS7_12basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEENSC_ISE_EEEE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSPipelineContext::NodeConfig */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v317NSPipelineContext10NodeConfigE = NULL;

/* Demangled: __fe_getround */
extern "C" __attribute__((visibility("default"))) int __fe_getround(void) {
    ALOGD("__fe_getround() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::IPipelineFrame::ImageInfoIOMap>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v314IPipelineFrame14ImageInfoIOMapEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v314IPipelineFrame14ImageInfoIOMapEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IImageStreamBuffer, NSCam::v3::IImageStreamBuffer>::add(android::sp<NSCam::v3::IImageStreamInfo>, android::sp<NSCam::v3::IUsersManager>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_18IImageStreamBufferES3_E3addEN7android2spINS0_16IImageStreamInfoEEENS6_INS0_13IUsersManagerEEE(void) {
    ALOGD("_ZN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_18IImageStreamBufferES3_E3addEN7android2spINS0_16IImageStreamInfoEEENS6_INS0_13IUsersManagerEEE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSPipelineContext::PipelineContext */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v317NSPipelineContext15PipelineContextE = NULL;

/* Demangled: std::__1::__assoc_state<int>::move() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__assoc_stateIiE4moveEv(void) {
    ALOGD("_ZNSt3__113__assoc_stateIiE4moveEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::dumpState(android::Printer&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp9dumpStateERN7android7PrinterERKNSt3__16vectorINS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEENSB_ISD_EEEE(void) {
    ALOGD("_ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp9dumpStateERN7android7PrinterERKNSt3__16vectorINS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEENSB_ISD_EEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::PipelineFrameNumberGenerator::generateFrameNo() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v328PipelineFrameNumberGenerator15generateFrameNoEv(void) {
    ALOGD("_ZN5NSCam2v328PipelineFrameNumberGenerator15generateFrameNoEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineConfig::dumpState(android::Printer&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v317NSPipelineContext14PipelineConfig9dumpStateERN7android7PrinterE(void) {
    ALOGD("_ZNK5NSCam2v317NSPipelineContext14PipelineConfig9dumpStateERN7android7PrinterE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSPipelineContext::NodeBuilderImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v317NSPipelineContext15NodeBuilderImplE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::NodeStatus> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp10NodeStatusEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp10NodeStatusEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IImageStreamBuffer, NSCam::v3::IImageStreamBuffer>::Item> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_18IImageStreamBufferES7_E4ItemEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_18IImageStreamBufferES7_E4ItemEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalImageStreamBufferT, NSCam::v3::IImageStreamBuffer> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS0_18IImageStreamBufferEEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<long, unsigned int> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIljEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIljEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::IPipelineDAG::TNodeObj<long, long> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v312IPipelineDAG8TNodeObjIllEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v312IPipelineDAG8TNodeObjIllEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::logDebugInfo(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp12logDebugInfoEONSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void) {
    ALOGD("_ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp12logDebugInfoEONSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalMetaStreamBufferT, NSCam::v3::IMetaStreamBuffer>::Item> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS4_17IMetaStreamBufferEE4ItemEEEEEEE = NULL;

/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::NodeEdge>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<android::String8>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::dumpState(android::Printer&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext9dumpStateERN7android7PrinterERKNSt3__16vectorINS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEENSB_ISD_EEEE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext9dumpStateERN7android7PrinterERKNSt3__16vectorINS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEENSB_ISD_EEEE() called");
    return 0;
}

/* Demangled: android::Vector<unsigned int>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIjE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIjE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamBuffer> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::v3::IPipelineNode> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v313IPipelineNodeEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v313IPipelineNodeEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::StreamBuilder::StreamBuilder(NSCam::v3::NSPipelineContext::eStreamType, android::sp<NSCam::v3::IMetaStreamInfo>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext13StreamBuilderC2ENS1_11eStreamTypeEN7android2spINS0_15IMetaStreamInfoEEE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext13StreamBuilderC2ENS1_11eStreamTypeEN7android2spINS0_15IMetaStreamInfoEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::IPipelineNodeMapControl::create() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v323IPipelineNodeMapControl6createEv(void) {
    ALOGD("_ZN5NSCam2v323IPipelineNodeMapControl6createEv() called");
    return 0;
}

/* Demangled: _ZNSt3__14listIN7android2spIN5NSCam2v318IImageStreamBufferEEENS_9allocatorIS6_EEE6assignINS_21__list_const_iteratorIS6_PvEEEEvT_SE_PNS_9enable_ifIXsr19__is_input_iteratorISE_EE5valueEvE4typeE */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14listIN7android2spIN5NSCam2v318IImageStreamBufferEEENS_9allocatorIS6_EEE6assignINS_21__list_const_iteratorIS6_PvEEEEvT_SE_PNS_9enable_ifIXsr19__is_input_iteratorISE_EE5valueEvE4typeE(void) {
    ALOGD("_ZNSt3__14listIN7android2spIN5NSCam2v318IImageStreamBufferEEENS_9allocatorIS6_EEE6assignINS_21__list_const_iteratorIS6_PvEEEEvT_SE_PNS_9enable_ifIXsr19__is_input_iteratorISE_EE5valueEvE4typeE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamBuffer> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::NodeEdge>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::StreamBufferPoolImp<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator>::uninitPool(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEE10uninitPoolEPKc(void) {
    ALOGD("_ZN5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEE10uninitPoolEPKc() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::StreamBuilder::~StreamBuilder() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext13StreamBuilderD1Ev(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext13StreamBuilderD1Ev() called");
    return 0;
}

/* Demangled: std::__1::unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, void*>, std::__1::__hash_node_destructor<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, void*> > > > std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > > > >::__construct_node<std::__1::pair<unsigned int const, std::__1::vector<long, std::__1::allocator<long> > > const&>(std::__1::pair<unsigned int const, std::__1::vector<long, std::__1::allocator<long> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE16__construct_nodeIJRKNS_4pairIKjS5_EEEEENS_10unique_ptrINS_11__hash_nodeIS6_PvEENS_22__hash_node_destructorINS3_ISQ_EEEEEEDpOT_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE16__construct_nodeIJRKNS_4pairIKjS5_EEEEENS_10unique_ptrINS_11__hash_nodeIS6_PvEENS_22__hash_node_destructorINS3_ISQ_EEEEEEDpOT_() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::FrameBuilderImpl::updateFrameCallback(android::wp<NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl19updateFrameCallbackEN7android2wpINS0_30IPipelineBufferSetFrameControl12IAppCallbackEEE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl19updateFrameCallbackEN7android2wpINS0_30IPipelineBufferSetFrameControl12IAppCallbackEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::constructDAG(NSCam::v3::IPipelineDAG const*, NSCam::v3::Set<long> const&, NSCam::v3::NSPipelineContext::NodeEdgeSet const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext12constructDAGEPKNS0_12IPipelineDAGERKNS0_3SetIlEERKNS1_11NodeEdgeSetE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext12constructDAGEPKNS0_12IPipelineDAGERKNS0_3SetIlEERKNS1_11NodeEdgeSetE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineContext::StreamConfig::ItemMetaStream> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig14ItemMetaStreamEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig14ItemMetaStreamEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: __getf2 */
extern "C" __attribute__((visibility("default"))) int __getf2(void) {
    ALOGD("__getf2() called");
    return 0;
}

/* Demangled: android::Vector<bool>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIbE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIbE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::getPipelineDAGSp() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp16getPipelineDAGSpEv(void) {
    ALOGD("_ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp16getPipelineDAGSpEv() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIlNS_9allocatorIlEEE6assignIPlEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIlNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIlNS_9allocatorIlEEE6assignIPlEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIlNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void) {
    ALOGD("_ZNSt3__16vectorIlNS_9allocatorIlEEE6assignIPlEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIlNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalImageStreamBufferT, NSCam::v3::IImageStreamBuffer>::Item> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS4_18IImageStreamBufferEE4ItemEEEEEEE = NULL;

/* Demangled: non-virtual thunk to NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalMetaStreamBufferT, NSCam::v3::IMetaStreamBuffer>::usersManagerAt(unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZThn8_NK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS0_17IMetaStreamBufferEE14usersManagerAtEm(void) {
    ALOGD("_ZThn8_NK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS0_17IMetaStreamBufferEE14usersManagerAtEm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::configureInformationKeeping(NSCam::v3::IPipelineBufferSetFrameControl::ConfigureInformationKeepingParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp27configureInformationKeepingERKNS0_30IPipelineBufferSetFrameControl33ConfigureInformationKeepingParamsE(void) {
    ALOGD("_ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp27configureInformationKeepingERKNS0_30IPipelineBufferSetFrameControl33ConfigureInformationKeepingParamsE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::NodeConfig::addNode(long, android::sp<NSCam::v3::NSPipelineContext::ContextNode>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext10NodeConfig7addNodeElN7android2spINS1_11ContextNodeEEE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext10NodeConfig7addNodeElN7android2spINS1_11ContextNodeEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::construct_FrameNodeMapControl::operator()(NSCam::v3::NSPipelineContext::construct_FrameNodeMapControl::Params&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext29construct_FrameNodeMapControlclERNS2_6ParamsE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext29construct_FrameNodeMapControlclERNS2_6ParamsE() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::Utils::StreamBufferPoolImp<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator>-in-NSCam::v3::Utils::StreamBufferPool<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator> */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v35Utils16StreamBufferPoolINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEEE0_NS1_19StreamBufferPoolImpIS3_S4_S5_EE = NULL;

/* Exported Object: VTT for NSCam::v3::NSPipelineContext::StreamConfig */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam2v317NSPipelineContext12StreamConfigE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<long, int> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE10do_compareEPKvS5_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE10do_compareEPKvS5_() called");
    return 0;
}

/* Demangled: android::SortedVector<long>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorIlE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorIlE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::startConfiguration() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp18startConfigurationEv(void) {
    ALOGD("_ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp18startConfigurationEv() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalImageStreamBufferT, NSCam::v3::IImageStreamBuffer>::IStreamBufferT> NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::getBufferLocked<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalImageStreamBufferT, NSCam::v3::IImageStreamBuffer> >(long, long, NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalImageStreamBufferT, NSCam::v3::IImageStreamBuffer> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp15getBufferLockedINS1_8TItemMapI21HalImageStreamBufferTNS0_18IImageStreamBufferEEEEEN7android2spINT_14IStreamBufferTEEEllRKSA_(void) {
    ALOGD("_ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp15getBufferLockedINS1_8TItemMapI21HalImageStreamBufferTNS0_18IImageStreamBufferEEEEEN7android2spINT_14IStreamBufferTEEEllRKSA_() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::DispatcherBase::onCtrlResize(unsigned int, long, long, NSCam::IMetadata&, long, NSCam::IMetadata&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext14DispatcherBase12onCtrlResizeEjllRNS_9IMetadataElS4_Ri(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext14DispatcherBase12onCtrlResizeEjllRNS_9IMetadataElS4_Ri() called");
    return 0;
}

/* Exported Object: VTT for NSCam::v3::NSPipelineContext::DefaultDispatcher */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam2v317NSPipelineContext17DefaultDispatcherE = NULL;

/* Demangled: virtual thunk to NSCam::v3::NSPipelineContext::DispatcherBase::needCtrlCb(NSCam::v3::IPipelineNodeCallback::eCtrlType) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n80_N5NSCam2v317NSPipelineContext14DispatcherBase10needCtrlCbENS0_21IPipelineNodeCallback9eCtrlTypeE(void) {
    ALOGD("_ZTv0_n80_N5NSCam2v317NSPipelineContext14DispatcherBase10needCtrlCbENS0_21IPipelineNodeCallback9eCtrlTypeE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSPipelineContext::FrameBuilderImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v317NSPipelineContext16FrameBuilderImplE = NULL;

/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferPoolImp<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator>::~StreamBufferPoolImp() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEED1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEED1Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::NodeBuilder::~NodeBuilder() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext11NodeBuilderD2Ev(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext11NodeBuilderD2Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSPipelineContext::StreamBuilderImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v317NSPipelineContext17StreamBuilderImplE = NULL;

/* Demangled: NSCam::v3::IPipelineBufferSetFrameControl::create(NSCam::v3::IPipelineBufferSetFrameControl::CreationParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v330IPipelineBufferSetFrameControl6createERKNS1_14CreationParamsE(void) {
    ALOGD("_ZN5NSCam2v330IPipelineBufferSetFrameControl6createERKNS1_14CreationParamsE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp15onLastStrongRefEPKv(void) {
    ALOGD("_ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: NSCam::v3::PipelineFrameNumberGenerator::getFrameNo() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v328PipelineFrameNumberGenerator10getFrameNoEv(void) {
    ALOGD("_ZN5NSCam2v328PipelineFrameNumberGenerator10getFrameNoEv() called");
    return 0;
}

/* Demangled: NSCam::v3::InFlightRequest::waitUntilNodeImageDrained(long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v315InFlightRequest25waitUntilNodeImageDrainedEl(void) {
    ALOGD("_ZN5NSCam2v315InFlightRequest25waitUntilNodeImageDrainedEl() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::NSPipelineContext::RequestBuilderImpl, std::__1::allocator<NSCam::v3::NSPipelineContext::RequestBuilderImpl> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext18RequestBuilderImplENS_9allocatorIS4_EEEE = NULL;

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl15onLastStrongRefEPKv(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IImageStreamBuffer, NSCam::v3::IImageStreamBuffer>::Item> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_18IImageStreamBufferES7_E4ItemEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_18IImageStreamBufferES7_E4ItemEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::IPipelineBufferSetFrameControl-in-NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImpE0_NS0_30IPipelineBufferSetFrameControlE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer>::Item> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_17IMetaStreamBufferES7_E4ItemEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_17IMetaStreamBufferES7_E4ItemEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::IPipelineFrameListener-in-NSCam::v3::InFlightRequest */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v315InFlightRequestE0_NS0_22IPipelineFrameListenerE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<long, long> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalImageStreamBufferT, NSCam::v3::IImageStreamBuffer>::IStreamBufferT> NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::getBufferLockedImp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalImageStreamBufferT, NSCam::v3::IImageStreamBuffer> >(long, long, NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalImageStreamBufferT, NSCam::v3::IImageStreamBuffer> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp18getBufferLockedImpINS1_8TItemMapI21HalImageStreamBufferTNS0_18IImageStreamBufferEEEEEN7android2spINT_14IStreamBufferTEEEllRKSA_(void) {
    ALOGD("_ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp18getBufferLockedImpINS1_8TItemMapI21HalImageStreamBufferTNS0_18IImageStreamBufferEEEEEN7android2spINT_14IStreamBufferTEEEllRKSA_() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::DispatcherBase::onCtrlSetting(unsigned int, long, long, NSCam::IMetadata&, long, NSCam::IMetadata&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext14DispatcherBase13onCtrlSettingEjllRNS_9IMetadataElS4_Ri(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext14DispatcherBase13onCtrlSettingEjllRNS_9IMetadataElS4_Ri() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::IPipelineNodeCallback-in-NSCam::v3::NSPipelineContext::DefaultDispatcher */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v317NSPipelineContext17DefaultDispatcherE0_NS0_21IPipelineNodeCallbackE = NULL;

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::InitFrameHandler::isConfigDone() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandler12isConfigDoneEv(void) {
    ALOGD("_ZNK5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandler12isConfigDoneEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineContext::StreamConfig::ItemImageStream> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig15ItemImageStreamEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig15ItemImageStreamEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::v3::IPipelineFrame::MetaInfoIOMap> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam2v314IPipelineFrame13MetaInfoIOMapEEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IImageStreamBuffer, NSCam::v3::IImageStreamBuffer>::Item> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_18IImageStreamBufferES7_E4ItemEEEEEE10do_compareEPKvSE_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_18IImageStreamBufferES7_E4ItemEEEEEE10do_compareEPKvSE_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, std::__1::vector<android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamBuffer> > > > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::List<unsigned int> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_4ListIjEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_4ListIjEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE10do_compareEPKvSA_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE10do_compareEPKvSA_() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::getTrackFrameResultParams() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp25getTrackFrameResultParamsEv(void) {
    ALOGD("_ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp25getTrackFrameResultParamsEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::NSPipelineContext::DispatcherBase::onCtrlSync(unsigned int, long, unsigned int, unsigned int, long) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n56_N5NSCam2v317NSPipelineContext14DispatcherBase10onCtrlSyncEjljjl(void) {
    ALOGD("_ZTv0_n56_N5NSCam2v317NSPipelineContext14DispatcherBase10onCtrlSyncEjljjl() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamBuffer> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::NodeStatus> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp10NodeStatusEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp10NodeStatusEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::DispatcherBase::needCtrlCb(NSCam::v3::IPipelineNodeCallback::eCtrlType) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext14DispatcherBase10needCtrlCbENS0_21IPipelineNodeCallback9eCtrlTypeE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext14DispatcherBase10needCtrlCbENS0_21IPipelineNodeCallback9eCtrlTypeE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<std::__1::thread, std::__1::allocator<std::__1::thread> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceINS_6threadENS_9allocatorIS1_EEEE = NULL;

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::NSPipelineContext::RequestBuilderImpl, std::__1::allocator<NSCam::v3::NSPipelineContext::RequestBuilderImpl> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext18RequestBuilderImplENS_9allocatorIS4_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext18RequestBuilderImplENS_9allocatorIS4_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: NSCam::v3::PipelineFrameNumberGenerator::~PipelineFrameNumberGenerator() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v328PipelineFrameNumberGeneratorD2Ev(void) {
    ALOGD("_ZN5NSCam2v328PipelineFrameNumberGeneratorD2Ev() called");
    return 0;
}

/* Exported Object: VTT for NSCam::v3::InFlightRequest */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam2v315InFlightRequestE = NULL;

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::kickRootNodes() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl13kickRootNodesEv(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl13kickRootNodesEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_17IMetaStreamBufferES3_EE = NULL;

/* Demangled: virtual thunk to NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n40_N5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl15onLastStrongRefEPKv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalMetaStreamBufferT, NSCam::v3::IMetaStreamBuffer>::Item */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS0_17IMetaStreamBufferEE4ItemE = NULL;

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<long, std::__1::vector<android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamBuffer> > > > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEEE = NULL;

/* Demangled: NSCam::v3::Utils::StreamBufferPoolImp<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator>::get_itemLocation(android::sp<NSCam::v3::Utils::HalImageStreamBuffer>&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEE16get_itemLocationERN7android2spIS4_EEj(void) {
    ALOGD("_ZN5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEE16get_itemLocationERN7android2spIS4_EEj() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::Utils::StreamBufferPoolImpl-in-NSCam::v3::Utils::StreamBufferPool<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator> */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v35Utils16StreamBufferPoolINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEEE0_NS1_20StreamBufferPoolImplE = NULL;

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::waitUntilDrained() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16waitUntilDrainedEv(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16waitUntilDrainedEv() called");
    return 0;
}

/* Demangled: std::__1::__deferred_assoc_state<int, std::__1::__async_func<int (*)(android::sp<NSCam::v3::NSPipelineContext::INodeActor>, android::sp<NSCam::v3::INodeCallbackToPipeline>), android::sp<NSCam::v3::NSPipelineContext::INodeActor>, android::sp<NSCam::v3::INodeCallbackToPipeline> > >::__execute() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__122__deferred_assoc_stateIiNS_12__async_funcIPFiN7android2spIN5NSCam2v317NSPipelineContext10INodeActorEEENS3_INS5_23INodeCallbackToPipelineEEEEJS8_SA_EEEE9__executeEv(void) {
    ALOGD("_ZNSt3__122__deferred_assoc_stateIiNS_12__async_funcIPFiN7android2spIN5NSCam2v317NSPipelineContext10INodeActorEEENS3_INS5_23INodeCallbackToPipelineEEEEJS8_SA_EEEE9__executeEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalMetaStreamBufferT, NSCam::v3::IMetaStreamBuffer>::Item> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS4_17IMetaStreamBufferEE4ItemEEEEEE10do_compareEPKvSF_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS4_17IMetaStreamBufferEE4ItemEEEEEE10do_compareEPKvSF_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineContext::StreamConfig::ItemImageStream> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig15ItemImageStreamEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig15ItemImageStreamEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::PipelineFrameNumberGenerator::resetFrameNo() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v328PipelineFrameNumberGenerator12resetFrameNoEv(void) {
    ALOGD("_ZN5NSCam2v328PipelineFrameNumberGenerator12resetFrameNoEv() called");
    return 0;
}

/* Demangled: android::SortedVector<long>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorIlE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorIlE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, std::__1::vector<android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamBuffer> > > > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IImageStreamBuffer, NSCam::v3::IImageStreamBuffer>::Item */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_18IImageStreamBufferES3_E4ItemE = NULL;

/* Demangled: NSCam::v3::NSPipelineContext::FrameBuilderImpl::onRequestConstructed() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl20onRequestConstructedEv(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl20onRequestConstructedEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineContext::StreamConfig::ItemImageStream> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig15ItemImageStreamEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig15ItemImageStreamEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::NSPipelineContext::StreamConfig::~StreamConfig() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam2v317NSPipelineContext12StreamConfigD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam2v317NSPipelineContext12StreamConfigD1Ev() called");
    return 0;
}

/* Demangled: android::Vector<long>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIlE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIlE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::IPipelineDAG::Edge>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v312IPipelineDAG4EdgeEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v312IPipelineDAG4EdgeEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::IPipelineDAG::Edge>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v312IPipelineDAG4EdgeEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v312IPipelineDAG4EdgeEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::NSPipelineContext::DefaultDispatcher::onDispatchFrame(android::sp<NSCam::v3::IPipelineFrame> const&, long) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N5NSCam2v317NSPipelineContext17DefaultDispatcher15onDispatchFrameERKN7android2spINS0_14IPipelineFrameEEEl(void) {
    ALOGD("_ZTv0_n32_N5NSCam2v317NSPipelineContext17DefaultDispatcher15onDispatchFrameERKN7android2spINS0_14IPipelineFrameEEEl() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::InitFrameHandler::getWaitDrainedDuration() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandler22getWaitDrainedDurationEv(void) {
    ALOGD("_ZNK5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandler22getWaitDrainedDurationEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamBuffer> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE10do_compareEPKvSA_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE10do_compareEPKvSA_() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::IPipelineContextManager::get() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext23IPipelineContextManager3getEv(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext23IPipelineContextManager3getEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::StreamBuilder::build(android::sp<NSCam::v3::NSPipelineContext::IPipelineContext>) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v317NSPipelineContext13StreamBuilder5buildEN7android2spINS1_16IPipelineContextEEE(void) {
    ALOGD("_ZNK5NSCam2v317NSPipelineContext13StreamBuilder5buildEN7android2spINS1_16IPipelineContextEEE() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamBuffer> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEEE = NULL;

/* Demangled: android::Vector<NSCam::v3::IPipelineFrame::MetaInfoIOMap>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v314IPipelineFrame13MetaInfoIOMapEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v314IPipelineFrame13MetaInfoIOMapEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<std::__1::mutex, std::__1::allocator<std::__1::mutex> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceINS_5mutexENS_9allocatorIS1_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceINS_5mutexENS_9allocatorIS1_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<std::__1::thread, std::__1::allocator<std::__1::thread> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceINS_6threadENS_9allocatorIS1_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceINS_6threadENS_9allocatorIS1_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::markUserStatus(long, long, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp14markUserStatusEllj(void) {
    ALOGD("_ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp14markUserStatusEllj() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalImageStreamBufferT, NSCam::v3::IImageStreamBuffer>::add(android::sp<NSCam::v3::IImageStreamBuffer>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS0_18IImageStreamBufferEE3addEN7android2spIS4_EE(void) {
    ALOGD("_ZN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS0_18IImageStreamBufferEE3addEN7android2spIS4_EE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalMetaStreamBufferT, NSCam::v3::IMetaStreamBuffer>::Item> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS4_17IMetaStreamBufferEE4ItemEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS4_17IMetaStreamBufferEE4ItemEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::NSPipelineContext::DispatcherBase::onCtrlSetting(unsigned int, long, long, NSCam::IMetadata&, long, NSCam::IMetadata&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n48_N5NSCam2v317NSPipelineContext14DispatcherBase13onCtrlSettingEjllRNS_9IMetadataElS4_Ri(void) {
    ALOGD("_ZTv0_n48_N5NSCam2v317NSPipelineContext14DispatcherBase13onCtrlSettingEjllRNS_9IMetadataElS4_Ri() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineContext::StreamConfig::ItemMetaStream> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig14ItemMetaStreamEEEEEE10do_compareEPKvSC_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig14ItemMetaStreamEEEEEE10do_compareEPKvSC_() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferPoolImp<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator>::~StreamBufferPoolImp() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEED0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEED0Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::NodeBuilder::~NodeBuilder() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext11NodeBuilderD1Ev(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext11NodeBuilderD1Ev() called");
    return 0;
}

/* Demangled: android::Vector<long>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIlE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIlE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer>::usersManagerAt(unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_17IMetaStreamBufferES3_E14usersManagerAtEm(void) {
    ALOGD("_ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_17IMetaStreamBufferES3_E14usersManagerAtEm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE10do_compareEPKvSA_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE10do_compareEPKvSA_() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::FrameBuilderImpl::setIOMap(long, NSCam::v3::NSPipelineContext::IOMapSet const&, NSCam::v3::NSPipelineContext::IOMapSet const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl8setIOMapElRKNS1_8IOMapSetES5_(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl8setIOMapElRKNS1_8IOMapSetES5_() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::IPipelineStreamBufferProvider-in-NSCam::v3::NSPipelineContext::StreamConfig */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v317NSPipelineContext12StreamConfigE0_NS0_29IPipelineStreamBufferProviderE = NULL;

/* Demangled: __fe_raise_inexact */
extern "C" __attribute__((visibility("default"))) int __fe_raise_inexact(void) {
    ALOGD("__fe_raise_inexact() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalImageStreamBufferT, NSCam::v3::IImageStreamBuffer>::Item> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS4_18IImageStreamBufferEE4ItemEEEEEE10do_compareEPKvSF_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS4_18IImageStreamBufferEE4ItemEEEEEE10do_compareEPKvSF_() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp(NSCam::v3::IPipelineBufferSetFrameControl::CreationParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImpC1ERKNS0_30IPipelineBufferSetFrameControl14CreationParamsE(void) {
    ALOGD("_ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImpC1ERKNS0_30IPipelineBufferSetFrameControl14CreationParamsE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalImageStreamBufferT, NSCam::v3::IImageStreamBuffer>::Item> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS4_18IImageStreamBufferEE4ItemEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS4_18IImageStreamBufferEE4ItemEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::waitUntilDrained() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext16waitUntilDrainedEv(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext16waitUntilDrainedEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, long> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE10do_compareEPKvS5_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE10do_compareEPKvS5_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::StreamBufferPoolImp<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator>::commitPool(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEE10commitPoolEPKc(void) {
    ALOGD("_ZN5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEE10commitPoolEPKc() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, unsigned int> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIljEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIljEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::DispatcherBase::onEarlyCallback(unsigned int, long, long, NSCam::IMetadata const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext14DispatcherBase15onEarlyCallbackEjllRKNS_9IMetadataEi(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext14DispatcherBase15onEarlyCallbackEjllRKNS_9IMetadataEi() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::sendFrame(android::sp<NSCam::v3::IPipelineFrame> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl9sendFrameERKN7android2spINS0_14IPipelineFrameEEE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl9sendFrameERKN7android2spINS0_14IPipelineFrameEEE() called");
    return 0;
}

/* Demangled: _ZNSt3__14listIN7android2spIN5NSCam2v318IImageStreamBufferEEENS_9allocatorIS6_EEE6insertINS_21__list_const_iteratorIS6_PvEEEENS_15__list_iteratorIS6_SC_EESD_T_SG_PNS_9enable_ifIXsr19__is_input_iteratorISG_EE5valueEvE4typeE */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14listIN7android2spIN5NSCam2v318IImageStreamBufferEEENS_9allocatorIS6_EEE6insertINS_21__list_const_iteratorIS6_PvEEEENS_15__list_iteratorIS6_SC_EESD_T_SG_PNS_9enable_ifIXsr19__is_input_iteratorISG_EE5valueEvE4typeE(void) {
    ALOGD("_ZNSt3__14listIN7android2spIN5NSCam2v318IImageStreamBufferEEENS_9allocatorIS6_EEE6insertINS_21__list_const_iteratorIS6_PvEEEENS_15__list_iteratorIS6_SC_EESD_T_SG_PNS_9enable_ifIXsr19__is_input_iteratorISG_EE5valueEvE4typeE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::FrameBuilderImpl::setReprocessFrame(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl17setReprocessFrameEi(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl17setReprocessFrameEi() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::DefaultKeyedVector<long, unsigned int> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_18DefaultKeyedVectorIljEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_18DefaultKeyedVectorIljEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<android::String8>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::InitFrameHandler, std::__1::allocator<NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::InitFrameHandler> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandlerENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandlerENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<long, int> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIliEEEE = NULL;

/* Demangled: std::__1::future<std::__1::__invoke_of<std::__1::decay<int (&)(android::sp<NSCam::v3::NSPipelineContext::INodeActor>, android::sp<NSCam::v3::INodeCallbackToPipeline>)>::type, std::__1::decay<android::sp<NSCam::v3::NSPipelineContext::INodeActor>&>::type, std::__1::decay<android::sp<NSCam::v3::INodeCallbackToPipeline>&>::type>::type> std::__1::async<int (&)(android::sp<NSCam::v3::NSPipelineContext::INodeActor>, android::sp<NSCam::v3::INodeCallbackToPipeline>), android::sp<NSCam::v3::NSPipelineContext::INodeActor>&, android::sp<NSCam::v3::INodeCallbackToPipeline>&>(std::__1::launch, int (&)(android::sp<NSCam::v3::NSPipelineContext::INodeActor>, android::sp<NSCam::v3::INodeCallbackToPipeline>), android::sp<NSCam::v3::NSPipelineContext::INodeActor>&, android::sp<NSCam::v3::INodeCallbackToPipeline>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15asyncIRFiN7android2spIN5NSCam2v317NSPipelineContext10INodeActorEEENS2_INS4_23INodeCallbackToPipelineEEEEJRS7_RS9_EEENS_6futureINS_11__invoke_ofINS_5decayIT_E4typeEJDpNSG_IT0_E4typeEEE4typeEEENS_6launchEOSH_DpOSK_(void) {
    ALOGD("_ZNSt3__15asyncIRFiN7android2spIN5NSCam2v317NSPipelineContext10INodeActorEEENS2_INS4_23INodeCallbackToPipelineEEEEJRS7_RS9_EEENS_6futureINS_11__invoke_ofINS_5decayIT_E4typeEJDpNSG_IT0_E4typeEEE4typeEEENS_6launchEOSH_DpOSK_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIN7android2spIN5NSCam2v317IMetaStreamBufferEEENS_9allocatorIS6_EEE6assignIPS6_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS6_NS_15iterator_traitsISD_E9referenceEEE5valueEvE4typeESD_SD_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spIN5NSCam2v317IMetaStreamBufferEEENS_9allocatorIS6_EEE6assignIPS6_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS6_NS_15iterator_traitsISD_E9referenceEEE5valueEvE4typeESD_SD_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spIN5NSCam2v317IMetaStreamBufferEEENS_9allocatorIS6_EEE6assignIPS6_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS6_NS_15iterator_traitsISD_E9referenceEEE5valueEvE4typeESD_SD_() called");
    return 0;
}

/* Demangled: NSCam::v3::PipelineFrameNumberGenerator::~PipelineFrameNumberGenerator() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v328PipelineFrameNumberGeneratorD1Ev(void) {
    ALOGD("_ZN5NSCam2v328PipelineFrameNumberGeneratorD1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer>::Item> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_17IMetaStreamBufferES7_E4ItemEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_17IMetaStreamBufferES7_E4ItemEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, std::__1::vector<android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamBuffer> > > > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEE10do_compareEPKvSF_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEE10do_compareEPKvSF_() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer>::usersManagerAt(unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZThn8_NK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_17IMetaStreamBufferES3_E14usersManagerAtEm(void) {
    ALOGD("_ZThn8_NK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_17IMetaStreamBufferES3_E14usersManagerAtEm() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::NSPipelineContext::PipelineContext::~PipelineContext() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam2v317NSPipelineContext15PipelineContextD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam2v317NSPipelineContext15PipelineContextD1Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::Utils::SimpleStreamInfoSetControl::Map<NSCam::v3::IImageStreamInfo> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v35Utils26SimpleStreamInfoSetControl3MapINS0_16IImageStreamInfoEEE = NULL;

/* Demangled: android::Vector<unsigned int>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIjE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIjE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::queryImageStreamPool(long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v317NSPipelineContext15PipelineContext20queryImageStreamPoolEl(void) {
    ALOGD("_ZNK5NSCam2v317NSPipelineContext15PipelineContext20queryImageStreamPoolEl() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::Utils::StreamBufferPoolImp<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator>::MyBufferT>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v35Utils19StreamBufferPoolImpINS2_18IImageStreamBufferENS3_20HalImageStreamBufferENS6_9AllocatorEE9MyBufferTEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v35Utils19StreamBufferPoolImpINS2_18IImageStreamBufferENS3_20HalImageStreamBufferENS6_9AllocatorEE9MyBufferTEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::Utils::StreamBufferPoolImp<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator>::MyBufferT>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v35Utils19StreamBufferPoolImpINS2_18IImageStreamBufferENS3_20HalImageStreamBufferENS6_9AllocatorEE9MyBufferTEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v35Utils19StreamBufferPoolImpINS2_18IImageStreamBufferENS3_20HalImageStreamBufferENS6_9AllocatorEE9MyBufferTEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::NSPipelineContext::DispatcherBase-in-NSCam::v3::NSPipelineContext::DefaultDispatcher */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v317NSPipelineContext17DefaultDispatcherE0_NS1_14DispatcherBaseE = NULL;

/* Demangled: NSCam::v3::InFlightRequest::registerRequest(android::sp<NSCam::v3::IPipelineFrame> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v315InFlightRequest15registerRequestERKN7android2spINS0_14IPipelineFrameEEE(void) {
    ALOGD("_ZN5NSCam2v315InFlightRequest15registerRequestERKN7android2spINS0_14IPipelineFrameEEE() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::v3::IPipelineNode> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v313IPipelineNodeEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v313IPipelineNodeEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::Utils::SimpleStreamInfoSetControl::Map<NSCam::v3::IMetaStreamInfo> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v35Utils26SimpleStreamInfoSetControl3MapINS0_15IMetaStreamInfoEEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalImageStreamBufferT, NSCam::v3::IImageStreamBuffer>::Item> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS4_18IImageStreamBufferEE4ItemEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS4_18IImageStreamBufferEE4ItemEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<unsigned int>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIjE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIjE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::IPipelineFrame::MetaInfoIOMap>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v314IPipelineFrame13MetaInfoIOMapEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v314IPipelineFrame13MetaInfoIOMapEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer>::Item> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_17IMetaStreamBufferES7_E4ItemEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_17IMetaStreamBufferES7_E4ItemEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: std::__1::unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, void*>, std::__1::__hash_node_destructor<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, void*> > > > std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > > > >::__construct_node_hash<std::__1::pair<unsigned int const, std::__1::vector<long, std::__1::allocator<long> > > const&>(unsigned long, std::__1::pair<unsigned int const, std::__1::vector<long, std::__1::allocator<long> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE21__construct_node_hashIRKNS_4pairIKjS5_EEJEEENS_10unique_ptrINS_11__hash_nodeIS6_PvEENS_22__hash_node_destructorINS3_ISQ_EEEEEEmOT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE21__construct_node_hashIRKNS_4pairIKjS5_EEJEEENS_10unique_ptrINS_11__hash_nodeIS6_PvEENS_22__hash_node_destructorINS3_ISQ_EEEEEEmOT_DpOT0_() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamBuffer> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::NodeEdge>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::~PipelineContextImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImplD2Ev(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImplD2Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > std::__1::operator+<char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EERKS9_SB_(void) {
    ALOGD("_ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EERKS9_SB_() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::IPipelineDAG::TNodeObj<long, long> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v312IPipelineDAG8TNodeObjIllEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v312IPipelineDAG8TNodeObjIllEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineBuilder::PipelineBuilder(NSCam::v3::NSPipelineContext::PipelineBuilder const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineBuilderC2ERKS2_(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineBuilderC2ERKS2_() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::IPipelineDAG::TNodeObj<long, long> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v312IPipelineDAG8TNodeObjIllEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v312IPipelineDAG8TNodeObjIllEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<long, NSCam::v3::NSPipelineContext::IOMapSet> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v317NSPipelineContext8IOMapSetEEEEE = NULL;

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::endConfigure(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext12endConfigureEii(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext12endConfigureEii() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::v3::IPipelineNode> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v313IPipelineNodeEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v313IPipelineNodeEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::setPipelineDAG(android::sp<NSCam::v3::IPipelineDAG>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp14setPipelineDAGEN7android2spINS0_12IPipelineDAGEEE(void) {
    ALOGD("_ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp14setPipelineDAGEN7android2spINS0_12IPipelineDAGEEE() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSPipelineContext::IOMapSet */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v317NSPipelineContext8IOMapSetE = NULL;

/* Exported Object: construction vtable for android::Thread-in-NSCam::v3::Utils::StreamBufferPool<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator> */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v35Utils16StreamBufferPoolINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEEE0_N7android6ThreadE = NULL;

/* Demangled: virtual thunk to NSCam::v3::NSPipelineContext::StreamConfig::~StreamConfig() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam2v317NSPipelineContext12StreamConfigD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam2v317NSPipelineContext12StreamConfigD0Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: NSCam::v3::NSPipelineContext::IFrameBuilder::make() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext13IFrameBuilder4makeEv(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext13IFrameBuilder4makeEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::NodeStatus::IOSet */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp10NodeStatus5IOSetE = NULL;

/* Demangled: non-virtual thunk to NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalMetaStreamBufferT, NSCam::v3::IMetaStreamBuffer>::add(android::sp<NSCam::v3::IMetaStreamInfo>, android::sp<NSCam::v3::IUsersManager>) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS0_17IMetaStreamBufferEE3addEN7android2spINS0_15IMetaStreamInfoEEENS7_INS0_13IUsersManagerEEE(void) {
    ALOGD("_ZThn8_N5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS0_17IMetaStreamBufferEE3addEN7android2spINS0_15IMetaStreamInfoEEENS7_INS0_13IUsersManagerEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer>::add(android::sp<NSCam::v3::IMetaStreamBuffer>) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_17IMetaStreamBufferES3_E3addEN7android2spIS3_EE(void) {
    ALOGD("_ZThn8_N5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_17IMetaStreamBufferES3_E3addEN7android2spIS3_EE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::beginFlush() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext10beginFlushEv(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext10beginFlushEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::dump() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext4dumpEv(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext4dumpEv() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::StreamBufferPoolImp<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator>::do_construct(unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEE12do_constructERj(void) {
    ALOGD("_ZN5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEE12do_constructERj() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::v3::IPipelineNode> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v313IPipelineNodeEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v313IPipelineNodeEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::NodeBuilder::addStream(NSCam::v3::NSPipelineContext::NodeBuilder::Direction, NSCam::v3::Set<long> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext11NodeBuilder9addStreamENS2_9DirectionERKNS0_3SetIlEE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext11NodeBuilder9addStreamENS2_9DirectionERKNS0_3SetIlEE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IImageStreamBuffer, NSCam::v3::IImageStreamBuffer>::usersManagerAt(unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_18IImageStreamBufferES3_E14usersManagerAtEm(void) {
    ALOGD("_ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_18IImageStreamBufferES3_E14usersManagerAtEm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::InitFrameHandler::_threadLoop(std::__1::shared_ptr<NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::InitFrameHandler>, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandler11_threadLoopENSt3__110shared_ptrIS4_EENS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandler11_threadLoopENSt3__110shared_ptrIS4_EENS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::StreamConfig::dump() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v317NSPipelineContext12StreamConfig4dumpEv(void) {
    ALOGD("_ZNK5NSCam2v317NSPipelineContext12StreamConfig4dumpEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineContext::StreamConfig::ItemMetaStream> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig14ItemMetaStreamEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig14ItemMetaStreamEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSPipelineContext::StreamConfig::ItemImageStream */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v317NSPipelineContext12StreamConfig15ItemImageStreamE = NULL;

/* Demangled: android::Vector<bool>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIbE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIbE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer>::Item> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_17IMetaStreamBufferES7_E4ItemEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_17IMetaStreamBufferES7_E4ItemEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, unsigned int> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIljEEE10do_compareEPKvS5_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIljEEE10do_compareEPKvS5_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__deferred_assoc_state<int, std::__1::__async_func<int (*)(android::sp<NSCam::v3::NSPipelineContext::INodeActor>, android::sp<NSCam::v3::INodeCallbackToPipeline>), android::sp<NSCam::v3::NSPipelineContext::INodeActor>, android::sp<NSCam::v3::INodeCallbackToPipeline> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__122__deferred_assoc_stateIiNS_12__async_funcIPFiN7android2spIN5NSCam2v317NSPipelineContext10INodeActorEEENS3_INS5_23INodeCallbackToPipelineEEEEJS8_SA_EEEEE = NULL;

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > > > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE6rehashEm() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalImageStreamBufferT, NSCam::v3::IImageStreamBuffer>::add(android::sp<NSCam::v3::IImageStreamInfo>, android::sp<NSCam::v3::IUsersManager>) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS0_18IImageStreamBufferEE3addEN7android2spINS0_16IImageStreamInfoEEENS7_INS0_13IUsersManagerEEE(void) {
    ALOGD("_ZThn8_N5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS0_18IImageStreamBufferEE3addEN7android2spINS0_16IImageStreamInfoEEENS7_INS0_13IUsersManagerEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::InFlightRequest::InFlightRequest() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v315InFlightRequestC2Ev(void) {
    ALOGD("_ZN5NSCam2v315InFlightRequestC2Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::Utils::StreamBufferPoolImp<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator>::initPool(char const*, unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEE8initPoolEPKcmm(void) {
    ALOGD("_ZN5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEE8initPoolEPKcmm() called");
    return 0;
}

/* Demangled: std::__1::__tree<long, std::__1::less<long>, std::__1::allocator<long> >::destroy(std::__1::__tree_node<long, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeIlNS_4lessIlEENS_9allocatorIlEEE7destroyEPNS_11__tree_nodeIlPvEE(void) {
    ALOGD("_ZNSt3__16__treeIlNS_4lessIlEENS_9allocatorIlEEE7destroyEPNS_11__tree_nodeIlPvEE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::submitOneFrame(android::sp<NSCam::v3::IPipelineFrame> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl14submitOneFrameERKN7android2spINS0_14IPipelineFrameEEE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl14submitOneFrameERKN7android2spINS0_14IPipelineFrameEEE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferPoolImp<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator>::~StreamBufferPoolImp() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n88_N5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEED1Ev(void) {
    ALOGD("_ZTv0_n88_N5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEED1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::setSensorTimestamp(long, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp18setSensorTimestampElPKc(void) {
    ALOGD("_ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp18setSensorTimestampElPKc() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::getMultiCamSyncHelper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext21getMultiCamSyncHelperEv(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext21getMultiCamSyncHelperEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<void (*)(android::sp<NSCam::v3::NSPipelineContext::INodeActor>), std::__1::allocator<void (*)(android::sp<NSCam::v3::NSPipelineContext::INodeActor>)>, void (android::sp<NSCam::v3::NSPipelineContext::INodeActor>)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFvN7android2spIN5NSCam2v317NSPipelineContext10INodeActorEEEENS_9allocatorISA_EES9_EE = NULL;

/* Exported Object: vtable for NSCam::v3::NSPipelineContext::PipelineBuilderImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v317NSPipelineContext19PipelineBuilderImplE = NULL;

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::setNodeMap(android::sp<NSCam::v3::IPipelineFrameNodeMapControl>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp10setNodeMapEN7android2spINS0_28IPipelineFrameNodeMapControlEEE(void) {
    ALOGD("_ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp10setNodeMapEN7android2spINS0_28IPipelineFrameNodeMapControlEEE() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer>::IStreamBufferT> NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::getBufferLockedImp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer> >(long, long, NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp18getBufferLockedImpINS1_8TItemMapINS0_17IMetaStreamBufferES5_EEEEN7android2spINT_14IStreamBufferTEEEllRKS9_(void) {
    ALOGD("_ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp18getBufferLockedImpINS1_8TItemMapINS0_17IMetaStreamBufferES5_EEEEN7android2spINT_14IStreamBufferTEEEllRKS9_() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineBuilder::PipelineBuilder(NSCam::v3::NSPipelineContext::PipelineBuilder const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineBuilderC1ERKS2_(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineBuilderC1ERKS2_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer>::IStreamBufferT> NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::getBufferLocked<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer> >(long, long, NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp15getBufferLockedINS1_8TItemMapINS0_17IMetaStreamBufferES5_EEEEN7android2spINT_14IStreamBufferTEEEllRKS9_(void) {
    ALOGD("_ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp15getBufferLockedINS1_8TItemMapINS0_17IMetaStreamBufferES5_EEEEN7android2spINT_14IStreamBufferTEEEllRKS9_() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::IPipelineFrameNodeMapControl>::sp(NSCam::v3::IPipelineFrameNodeMapControl*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam2v328IPipelineFrameNodeMapControlEEC2EPS3_(void) {
    ALOGD("_ZN7android2spIN5NSCam2v328IPipelineFrameNodeMapControlEEC2EPS3_() called");
    return 0;
}

/* Demangled: std::__1::__async_assoc_state<int, std::__1::__async_func<int (*)(android::sp<NSCam::v3::NSPipelineContext::INodeActor>, android::sp<NSCam::v3::INodeCallbackToPipeline>), android::sp<NSCam::v3::NSPipelineContext::INodeActor>, android::sp<NSCam::v3::INodeCallbackToPipeline> > >::__execute() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__119__async_assoc_stateIiNS_12__async_funcIPFiN7android2spIN5NSCam2v317NSPipelineContext10INodeActorEEENS3_INS5_23INodeCallbackToPipelineEEEEJS8_SA_EEEE9__executeEv(void) {
    ALOGD("_ZNSt3__119__async_assoc_stateIiNS_12__async_funcIPFiN7android2spIN5NSCam2v317NSPipelineContext10INodeActorEEENS3_INS5_23INodeCallbackToPipelineEEEEJS8_SA_EEEE9__executeEv() called");
    return 0;
}

/* Demangled: __eqtf2 */
extern "C" __attribute__((visibility("default"))) int __eqtf2(void) {
    ALOGD("__eqtf2() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::evaluate_buffer_users::operator()(NSCam::v3::NSPipelineContext::evaluate_buffer_users::Params&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext21evaluate_buffer_usersclERNS2_6ParamsE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext21evaluate_buffer_usersclERNS2_6ParamsE() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<android::sp<NSCam::v3::IPipelineNode> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_2spIN5NSCam2v313IPipelineNodeEEEEE = NULL;

/* Demangled: android::Vector<bool>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIbE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIbE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IImageStreamBuffer, NSCam::v3::IImageStreamBuffer>::Item> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_18IImageStreamBufferES7_E4ItemEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_18IImageStreamBufferES7_E4ItemEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamBuffer> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalMetaStreamBufferT, NSCam::v3::IMetaStreamBuffer>::IStreamBufferT> NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::getBufferLockedImp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalMetaStreamBufferT, NSCam::v3::IMetaStreamBuffer> >(long, long, NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalMetaStreamBufferT, NSCam::v3::IMetaStreamBuffer> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp18getBufferLockedImpINS1_8TItemMapI20HalMetaStreamBufferTNS0_17IMetaStreamBufferEEEEEN7android2spINT_14IStreamBufferTEEEllRKSA_(void) {
    ALOGD("_ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp18getBufferLockedImpINS1_8TItemMapI20HalMetaStreamBufferTNS0_17IMetaStreamBufferEEEEEN7android2spINT_14IStreamBufferTEEEllRKSA_() called");
    return 0;
}

/* Demangled: NSCam::v3::PipelineFrameNumberGenerator::~PipelineFrameNumberGenerator() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v328PipelineFrameNumberGeneratorD0Ev(void) {
    ALOGD("_ZN5NSCam2v328PipelineFrameNumberGeneratorD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::NSPipelineContext::FrameBuilderImpl, std::__1::allocator<NSCam::v3::NSPipelineContext::FrameBuilderImpl> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext16FrameBuilderImplENS_9allocatorIS4_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext16FrameBuilderImplENS_9allocatorIS4_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::setDataCallback(android::wp<NSCam::v3::NSPipelineContext::IDataCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext15setDataCallbackEN7android2wpINS1_13IDataCallbackEEE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext15setDataCallbackEN7android2wpINS1_13IDataCallbackEEE() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineContext::ContextNode> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext11ContextNodeEEEEEEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<long, long> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalMetaStreamBufferT, NSCam::v3::IMetaStreamBuffer>::IStreamBufferT> NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::getBufferLocked<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalMetaStreamBufferT, NSCam::v3::IMetaStreamBuffer> >(long, long, NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalMetaStreamBufferT, NSCam::v3::IMetaStreamBuffer> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp15getBufferLockedINS1_8TItemMapI20HalMetaStreamBufferTNS0_17IMetaStreamBufferEEEEEN7android2spINT_14IStreamBufferTEEEllRKSA_(void) {
    ALOGD("_ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp15getBufferLockedINS1_8TItemMapI20HalMetaStreamBufferTNS0_17IMetaStreamBufferEEEEEN7android2spINT_14IStreamBufferTEEEllRKSA_() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::NSPipelineContext::PipelineContext::~PipelineContext() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam2v317NSPipelineContext15PipelineContextD0Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam2v317NSPipelineContext15PipelineContextD0Ev() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEEE = NULL;

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::applyPreRelease(long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp15applyPreReleaseEl(void) {
    ALOGD("_ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp15applyPreReleaseEl() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::applyRelease(long) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp12applyReleaseEl(void) {
    ALOGD("_ZThn8_N5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp12applyReleaseEl() called");
    return 0;
}

/* Demangled: __multf3 */
extern "C" __attribute__((visibility("default"))) int __multf3(void) {
    ALOGD("__multf3() called");
    return 0;
}

/* Demangled: android::SortedVector<long>::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorIlE10do_compareEPKvS3_(void) {
    ALOGD("_ZNK7android12SortedVectorIlE10do_compareEPKvS3_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IImageStreamBuffer, NSCam::v3::IImageStreamBuffer> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_18IImageStreamBufferES3_EE = NULL;

/* Demangled: std::__1::vector<android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamBuffer> > >::reserve(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spIN5NSCam2v317IMetaStreamBufferEEENS_9allocatorIS6_EEE7reserveEm(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spIN5NSCam2v317IMetaStreamBufferEEENS_9allocatorIS6_EEE7reserveEm() called");
    return 0;
}

/* Demangled: android::SortedVector<long>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorIlE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorIlE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<android::String8>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::FrameBuilderImpl::setAppMetaStreamBuffer(long, android::sp<NSCam::v3::IMetaStreamBuffer>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl22setAppMetaStreamBufferElN7android2spINS0_17IMetaStreamBufferEEE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl22setAppMetaStreamBufferElN7android2spINS0_17IMetaStreamBufferEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IImageStreamBuffer, NSCam::v3::IImageStreamBuffer>::Item> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_18IImageStreamBufferES7_E4ItemEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_18IImageStreamBufferES7_E4ItemEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::~PipelineContextImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImplD1Ev(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImplD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__assoc_state<int>::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__assoc_stateIiE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__113__assoc_stateIiE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineBuilder::PipelineBuilder() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineBuilderC2Ev(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineBuilderC2Ev() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<long, long> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIllEEEE = NULL;

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::getMetaBuffer(long, long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp13getMetaBufferEll(void) {
    ALOGD("_ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp13getMetaBufferEll() called");
    return 0;
}

/* Demangled: NSCam::v3::IPipelineFrameNumberGenerator::create() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v329IPipelineFrameNumberGenerator6createEv(void) {
    ALOGD("_ZN5NSCam2v329IPipelineFrameNumberGenerator6createEv() called");
    return 0;
}

/* Demangled: NSCam::v3::InFlightRequest::waitUntilNodeDrained(long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v315InFlightRequest20waitUntilNodeDrainedEl(void) {
    ALOGD("_ZN5NSCam2v315InFlightRequest20waitUntilNodeDrainedEl() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::InFlightRequest */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v315InFlightRequestE = NULL;

/* Demangled: non-virtual thunk to NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer>::streamInfoAt(unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZThn8_NK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_17IMetaStreamBufferES3_E12streamInfoAtEm(void) {
    ALOGD("_ZThn8_NK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_17IMetaStreamBufferES3_E12streamInfoAtEm() called");
    return 0;
}

/* Demangled: NSCam::v3::InFlightRequest::dumpState(android::Printer&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v315InFlightRequest9dumpStateERN7android7PrinterERKNSt3__16vectorINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEENSA_ISC_EEEE(void) {
    ALOGD("_ZNK5NSCam2v315InFlightRequest9dumpStateERN7android7PrinterERKNSt3__16vectorINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEENSA_ISC_EEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::FrameBuilderImpl::setAppImageStreamBuffer(long, android::sp<NSCam::v3::IImageStreamBuffer>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl23setAppImageStreamBufferElN7android2spINS0_18IImageStreamBufferEEE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl23setAppImageStreamBufferElN7android2spINS0_18IImageStreamBufferEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::FrameBuilderImpl::setPhysicalAppMetaStreamIds(std::__1::unordered_map<unsigned int, std::__1::vector<long, std::__1::allocator<long> >, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, std::__1::vector<long, std::__1::allocator<long> > > > > const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl27setPhysicalAppMetaStreamIdsEPKNSt3__113unordered_mapIjNS3_6vectorIlNS3_9allocatorIlEEEENS3_4hashIjEENS3_8equal_toIjEENS6_INS3_4pairIKjS8_EEEEEE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl27setPhysicalAppMetaStreamIdsEPKNSt3__113unordered_mapIjNS3_6vectorIlNS3_9allocatorIlEEEENS3_4hashIjEENS3_8equal_toIjEENS6_INS3_4pairIKjS8_EEEEEE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::NSPipelineContext::PipelineContext::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N5NSCam2v317NSPipelineContext15PipelineContext15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n40_N5NSCam2v317NSPipelineContext15PipelineContext15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: android::Vector<android::String8>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_7String8EE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_7String8EE10do_destroyEPvm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalMetaStreamBufferT, NSCam::v3::IMetaStreamBuffer> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS0_17IMetaStreamBufferEEE = NULL;

/* Exported Object: vtable for NSCam::v3::Set<long> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v33SetIlEE = NULL;

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalMetaStreamBufferT, NSCam::v3::IMetaStreamBuffer>::add(android::sp<NSCam::v3::IMetaStreamBuffer>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS0_17IMetaStreamBufferEE3addEN7android2spIS4_EE(void) {
    ALOGD("_ZN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS0_17IMetaStreamBufferEE3addEN7android2spIS4_EE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::InitFrameHandler::waitUntilDrained() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandler16waitUntilDrainedEv(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandler16waitUntilDrainedEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::kick(android::sp<NSCam::v3::IPipelineFrame> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext4kickERKN7android2spINS0_14IPipelineFrameEEE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext4kickERKN7android2spINS0_14IPipelineFrameEEE() called");
    return 0;
}

/* Exported Object: VTT for NSCam::v3::NSPipelineContext::PipelineContext */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam2v317NSPipelineContext15PipelineContextE = NULL;

/* Demangled: NSCam::v3::NSPipelineContext::NodeBuilder::NodeBuilder(NSCam::v3::NSPipelineContext::NodeBuilder const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext11NodeBuilderC2ERKS2_(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext11NodeBuilderC2ERKS2_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, long> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::getPipelineNodeMap() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp18getPipelineNodeMapEv(void) {
    ALOGD("_ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp18getPipelineNodeMapEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__push_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIS6_EEvOT_() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer>::Item> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_17IMetaStreamBufferES7_E4ItemEEEEEEE = NULL;

/* Demangled: virtual thunk to NSCam::v3::PipelineFrameNumberGenerator::~PipelineFrameNumberGenerator() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N5NSCam2v328PipelineFrameNumberGeneratorD1Ev(void) {
    ALOGD("_ZTv0_n24_N5NSCam2v328PipelineFrameNumberGeneratorD1Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::NodeBuilder::NodeBuilder(long, android::sp<NSCam::v3::NSPipelineContext::INodeActor>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext11NodeBuilderC1ElN7android2spINS1_10INodeActorEEE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext11NodeBuilderC1ElN7android2spINS1_10INodeActorEEE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::IPipelineFrame::ImageInfoIOMap>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v314IPipelineFrame14ImageInfoIOMapEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v314IPipelineFrame14ImageInfoIOMapEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::IOMap>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::findSubjectUsersLocked(long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp22findSubjectUsersLockedEl(void) {
    ALOGD("_ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp22findSubjectUsersLockedEl() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImpE = NULL;

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::InitFrameHandler::getWaitNextInitFrame() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandler20getWaitNextInitFrameEv(void) {
    ALOGD("_ZNK5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandler20getWaitNextInitFrameEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::~PipelineContext() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContextD2Ev(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContextD2Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::updateConfig(NSCam::v3::NSPipelineContext::StreamBuilderImpl*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl12updateConfigEPNS1_17StreamBuilderImplE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl12updateConfigEPNS1_17StreamBuilderImplE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::NodeConfig::queryMinimalUsage(long, long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v317NSPipelineContext10NodeConfig17queryMinimalUsageEll(void) {
    ALOGD("_ZNK5NSCam2v317NSPipelineContext10NodeConfig17queryMinimalUsageEll() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::NodeConfig::dumpState(android::Printer&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v317NSPipelineContext10NodeConfig9dumpStateERN7android7PrinterE(void) {
    ALOGD("_ZNK5NSCam2v317NSPipelineContext10NodeConfig9dumpStateERN7android7PrinterE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::StreamConfig::dumpState(android::Printer&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v317NSPipelineContext12StreamConfig9dumpStateERN7android7PrinterE(void) {
    ALOGD("_ZNK5NSCam2v317NSPipelineContext12StreamConfig9dumpStateERN7android7PrinterE() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferPoolImp<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator>::commitPool(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n64_N5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEE10commitPoolEPKc(void) {
    ALOGD("_ZTv0_n64_N5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEE10commitPoolEPKc() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::finishConfiguration() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp19finishConfigurationEv(void) {
    ALOGD("_ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp19finishConfigurationEv() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::setTrackFrameResultParams(std::__1::shared_ptr<NSCam::v3::NSPipelineContext::TrackFrameResultParams const> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp25setTrackFrameResultParamsERKNSt3__110shared_ptrIKNS0_17NSPipelineContext22TrackFrameResultParamsEEE(void) {
    ALOGD("_ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp25setTrackFrameResultParamsERKNSt3__110shared_ptrIKNS0_17NSPipelineContext22TrackFrameResultParamsEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalMetaStreamBufferT, NSCam::v3::IMetaStreamBuffer>::Item> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS4_17IMetaStreamBufferEE4ItemEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS4_17IMetaStreamBufferEE4ItemEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamBuffer> > >::__push_back_slow_path<android::sp<NSCam::v3::IMetaStreamBuffer> const&>(android::sp<NSCam::v3::IMetaStreamBuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spIN5NSCam2v317IMetaStreamBufferEEENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spIN5NSCam2v317IMetaStreamBufferEEENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::beginConfigure(android::sp<NSCam::v3::NSPipelineContext::IPipelineContext>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext14beginConfigureEN7android2spINS1_16IPipelineContextEEE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext14beginConfigureEN7android2spINS1_16IPipelineContextEEE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::waitUntilRootNodeDrained() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext24waitUntilRootNodeDrainedEv(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext24waitUntilRootNodeDrainedEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, long> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::Vector<long>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIlE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIlE12do_constructEPvm() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi() called");
    return 0;
}

/* Demangled: NSCam::v3::InFlightRequest::InFlightRequest() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v315InFlightRequestC1Ev(void) {
    ALOGD("_ZN5NSCam2v315InFlightRequestC1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::List<unsigned int> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_4ListIjEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_4ListIjEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineContext::StreamConfig::ItemImageStream> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig15ItemImageStreamEEEEEE10do_compareEPKvSC_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig15ItemImageStreamEEEEEE10do_compareEPKvSC_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, int> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE12do_constructEPvm() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::NSPipelineContext::IDispatcher-in-NSCam::v3::NSPipelineContext::DefaultDispatcher */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v317NSPipelineContext17DefaultDispatcherE0_NS1_11IDispatcherE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::NSPipelineContext::IOMapSet> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v317NSPipelineContext8IOMapSetEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v317NSPipelineContext8IOMapSetEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferPoolImp<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator>::~StreamBufferPoolImp() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n88_N5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEED0Ev(void) {
    ALOGD("_ZTv0_n88_N5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEED0Ev() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::FrameBuilderImpl::dumpState(android::Printer&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl9dumpStateERN7android7PrinterE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl9dumpStateERN7android7PrinterE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::PipelineContextImpl(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImplC1EPKc(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImplC1EPKc() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineContext::StreamConfig::ItemMetaStream> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig14ItemMetaStreamEEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig14ItemMetaStreamEEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferPoolImp<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator>::releaseToPool(char const*, android::sp<NSCam::v3::IImageStreamBuffer>) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n80_N5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEE13releaseToPoolEPKcN7android2spIS3_EE(void) {
    ALOGD("_ZTv0_n80_N5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEE13releaseToPoolEPKcN7android2spIS3_EE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IImageStreamBuffer, NSCam::v3::IImageStreamBuffer>::onAllUsersReleased(NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IImageStreamBuffer, NSCam::v3::IImageStreamBuffer>::Item&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_18IImageStreamBufferES3_E18onAllUsersReleasedERNS4_4ItemE(void) {
    ALOGD("_ZN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_18IImageStreamBufferES3_E18onAllUsersReleasedERNS4_4ItemE() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::FrameBuilderImpl::setReprocessSensorTimestamp(long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl27setReprocessSensorTimestampEl(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl27setReprocessSensorTimestampEl() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::IOMap>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::waitUntilInitFrameDrained() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl25waitUntilInitFrameDrainedEv(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl25waitUntilInitFrameDrainedEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::Utils::IStreamBufferPool<NSCam::v3::IImageStreamBuffer>-in-NSCam::v3::Utils::StreamBufferPool<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator> */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v35Utils16StreamBufferPoolINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEEE536_NS1_17IStreamBufferPoolIS3_EE = NULL;

/* Exported Object: vtable for NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImplE = NULL;

/* Demangled: NSCam::v3::NSPipelineContext::StreamBuilder::StreamBuilder(NSCam::v3::NSPipelineContext::eStreamType, android::sp<NSCam::v3::IMetaStreamInfo>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext13StreamBuilderC1ENS1_11eStreamTypeEN7android2spINS0_15IMetaStreamInfoEEE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext13StreamBuilderC1ENS1_11eStreamTypeEN7android2spINS0_15IMetaStreamInfoEEE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::IPipelineFrame::MetaInfoIOMap>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v314IPipelineFrame13MetaInfoIOMapEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v314IPipelineFrame13MetaInfoIOMapEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalMetaStreamBufferT, NSCam::v3::IMetaStreamBuffer>::add(android::sp<NSCam::v3::IMetaStreamInfo>, android::sp<NSCam::v3::IUsersManager>) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS0_17IMetaStreamBufferEE3addEN7android2spINS0_15IMetaStreamInfoEEENS7_INS0_13IUsersManagerEEE(void) {
    ALOGD("_ZN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS0_17IMetaStreamBufferEE3addEN7android2spINS0_15IMetaStreamInfoEEENS7_INS0_13IUsersManagerEEE() called");
    return 0;
}

/* Demangled: android::sp<NSCam::v3::IStreamInfoSet const>::operator=(NSCam::v3::IStreamInfoSet const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIKN5NSCam2v314IStreamInfoSetEEaSEPS4_(void) {
    ALOGD("_ZN7android2spIKN5NSCam2v314IStreamInfoSetEEaSEPS4_() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::queryIOStreamInfoSet(long const&, android::sp<NSCam::v3::IStreamInfoSet const>&, android::sp<NSCam::v3::IStreamInfoSet const>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp20queryIOStreamInfoSetERKlRN7android2spIKNS0_14IStreamInfoSetEEESA_(void) {
    ALOGD("_ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp20queryIOStreamInfoSetERKlRN7android2spIKNS0_14IStreamInfoSetEEESA_() called");
    return 0;
}

/* Demangled: void* std::__1::__thread_proxy<std::__1::tuple<std::__1::unique_ptr<std::__1::__thread_struct, std::__1::default_delete<std::__1::__thread_struct> >, void (*)(std::__1::vector<android::sp<NSCam::v3::IPipelineFrame>, std::__1::allocator<android::sp<NSCam::v3::IPipelineFrame> > >&&), std::__1::vector<android::sp<NSCam::v3::IPipelineFrame>, std::__1::allocator<android::sp<NSCam::v3::IPipelineFrame> > > > >(void*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__thread_proxyINS_5tupleIJNS_10unique_ptrINS_15__thread_structENS_14default_deleteIS3_EEEEPFvONS_6vectorIN7android2spIN5NSCam2v314IPipelineFrameEEENS_9allocatorISD_EEEEESG_EEEEEPvSL_(void) {
    ALOGD("_ZNSt3__114__thread_proxyINS_5tupleIJNS_10unique_ptrINS_15__thread_structENS_14default_deleteIS3_EEEEPFvONS_6vectorIN7android2spIN5NSCam2v314IPipelineFrameEEENS_9allocatorISD_EEEEESG_EEEEEPvSL_() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::updateConfig(NSCam::v3::NSPipelineContext::PipelineBuilderImpl*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl12updateConfigEPNS1_19PipelineBuilderImplE(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl12updateConfigEPNS1_19PipelineBuilderImplE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineContext::ContextNode> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext11ContextNodeEEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext11ContextNodeEEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::v3::NSPipelineContext::IDispatcher-in-NSCam::v3::NSPipelineContext::DispatcherBase */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v317NSPipelineContext14DispatcherBaseE0_NS1_11IDispatcherE = NULL;

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::InitFrameHandler, std::__1::allocator<NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::InitFrameHandler> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandlerENS_9allocatorIS6_EEEE = NULL;

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContext(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContextC1EPKc(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContextC1EPKc() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::setInitFrameCount(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl17setInitFrameCountEj(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl17setInitFrameCountEj() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSPipelineContext::ContextNode */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v317NSPipelineContext11ContextNodeE = NULL;

/* Demangled: NSCam::v3::IPipelineFrameNodeMapControl::create() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v328IPipelineFrameNodeMapControl6createEv(void) {
    ALOGD("_ZN5NSCam2v328IPipelineFrameNodeMapControl6createEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::IPipelineFrame::ImageInfoIOMap>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v314IPipelineFrame14ImageInfoIOMapEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v314IPipelineFrame14ImageInfoIOMapEE10do_destroyEPvm() called");
    return 0;
}

/* Exported Object: VTT for NSCam::v3::NSPipelineContext::DispatcherBase */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam2v317NSPipelineContext14DispatcherBaseE = NULL;

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::InitFrameHandler::getWaitDrainedTimeoutAfterConfig() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandler32getWaitDrainedTimeoutAfterConfigEv(void) {
    ALOGD("_ZNK5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandler32getWaitDrainedTimeoutAfterConfigEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, long> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::IPipelineDAG::Edge>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v312IPipelineDAG4EdgeEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v312IPipelineDAG4EdgeEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IImageStreamBuffer, NSCam::v3::IImageStreamBuffer>::add(android::sp<NSCam::v3::IImageStreamBuffer>) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_18IImageStreamBufferES3_E3addEN7android2spIS3_EE(void) {
    ALOGD("_ZThn8_N5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_18IImageStreamBufferES3_E3addEN7android2spIS3_EE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::IOMap>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineContext::StreamConfig::ItemImageStream> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig15ItemImageStreamEEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig15ItemImageStreamEEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Exported Object: VTT for NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImplE = NULL;

/* Demangled: android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE10do_destroyEPvm() called");
    return 0;
}

/* Exported Object: vtable for android::List<NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::MyListener> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android4ListIN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp10MyListenerEEE = NULL;

/* Exported Object: construction vtable for NSCam::v3::NSPipelineContext::IPipelineContext-in-NSCam::v3::NSPipelineContext::PipelineContext */
extern "C" __attribute__((visibility("default"))) void* _ZTCN5NSCam2v317NSPipelineContext15PipelineContextE0_NS1_16IPipelineContextE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineContext::StreamConfig::ItemMetaStream> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig14ItemMetaStreamEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig14ItemMetaStreamEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferPoolImp<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator>::dumpPool() const */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_NK5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEE8dumpPoolEv(void) {
    ALOGD("_ZTv0_n40_NK5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEE8dumpPoolEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalMetaStreamBufferT, NSCam::v3::IMetaStreamBuffer>::Item> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS4_17IMetaStreamBufferEE4ItemEEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS4_17IMetaStreamBufferEE4ItemEEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::FrameBuilderImpl::getHalMetaStreamBuffers(std::__1::vector<android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamBuffer> > >&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v317NSPipelineContext16FrameBuilderImpl23getHalMetaStreamBuffersERNSt3__16vectorIN7android2spINS0_17IMetaStreamBufferEEENS3_9allocatorIS8_EEEE(void) {
    ALOGD("_ZNK5NSCam2v317NSPipelineContext16FrameBuilderImpl23getHalMetaStreamBuffersERNSt3__16vectorIN7android2spINS0_17IMetaStreamBufferEEENS3_9allocatorIS8_EEEE() called");
    return 0;
}

/* Demangled: android::SortedVector<long>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorIlE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorIlE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalMetaStreamBufferT, NSCam::v3::IMetaStreamBuffer>::Item> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS4_17IMetaStreamBufferEE4ItemEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS4_17IMetaStreamBufferEE4ItemEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, std::__1::vector<android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamBuffer> > > > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for NSCam::v3::NSPipelineContext::PipelineConfig */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam2v317NSPipelineContext14PipelineConfigE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<long, long> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalMetaStreamBufferT, NSCam::v3::IMetaStreamBuffer>::streamInfoAt(unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS0_17IMetaStreamBufferEE12streamInfoAtEm(void) {
    ALOGD("_ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS0_17IMetaStreamBufferEE12streamInfoAtEm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::v3::IPipelineDAG::Edge>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam2v312IPipelineDAG4EdgeEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam2v312IPipelineDAG4EdgeEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::~PipelineContextImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImplD0Ev(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImplD0Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::DefaultKeyedVector<long, unsigned int> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_18DefaultKeyedVectorIljEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_18DefaultKeyedVectorIljEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSCam::v3::NSPipelineContext::PipelineBuilder::PipelineBuilder() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam2v317NSPipelineContext15PipelineBuilderC1Ev(void) {
    ALOGD("_ZN5NSCam2v317NSPipelineContext15PipelineBuilderC1Ev() called");
    return 0;
}
