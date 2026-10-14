/*
 * Reverse-Engineered ABI Specification for: libmtkcam_pipeline.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libmtkcam_pipeline.so
 */

#ifndef BEGONIA_RE_LIBMTKCAM_PIPELINE_H
#define BEGONIA_RE_LIBMTKCAM_PIPELINE_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, int> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE;

/* Symbol: _ZTCN5NSCam2v317NSPipelineContext14DispatcherBaseE0_NS0_21IPipelineNodeCallbackE */
/* Demangled: construction vtable for NSCam::v3::IPipelineNodeCallback-in-NSCam::v3::NSPipelineContext::DispatcherBase */
extern void* _ZTCN5NSCam2v317NSPipelineContext14DispatcherBaseE0_NS0_21IPipelineNodeCallbackE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_18DefaultKeyedVectorIljEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::DefaultKeyedVector<long, unsigned int> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_18DefaultKeyedVectorIljEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig14ItemMetaStreamEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineContext::StreamConfig::ItemMetaStream> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig14ItemMetaStreamEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZTv0_n56_N5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEE10uninitPoolEPKc */
/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferPoolImp<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator>::uninitPool(char const*) */
int _ZTv0_n56_N5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEE10uninitPoolEPKc(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS4_18IImageStreamBufferEE4ItemEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalImageStreamBufferT, NSCam::v3::IImageStreamBuffer>::Item> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS4_18IImageStreamBufferEE4ItemEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZTVN5NSCam2v317NSPipelineContext17DefaultDispatcherE */
/* Demangled: vtable for NSCam::v3::NSPipelineContext::DefaultDispatcher */
extern void* _ZTVN5NSCam2v317NSPipelineContext17DefaultDispatcherE;

/* Symbol: _ZNK7android6VectorINS_7String8EE12do_constructEPvm */
/* Demangled: android::Vector<android::String8>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorINS_7String8EE12do_constructEPvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS4_17IMetaStreamBufferEE4ItemEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalMetaStreamBufferT, NSCam::v3::IMetaStreamBuffer>::Item> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS4_17IMetaStreamBufferEE4ItemEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEE13releaseToPoolEPKcN7android2spIS3_EE */
/* Demangled: NSCam::v3::Utils::StreamBufferPoolImp<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator>::releaseToPool(char const*, android::sp<NSCam::v3::IImageStreamBuffer>) */
int _ZN5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEE13releaseToPoolEPKcN7android2spIS3_EE(void);

/* Symbol: _ZTCN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImplE0_NS0_23INodeCallbackToPipelineE */
/* Demangled: construction vtable for NSCam::v3::INodeCallbackToPipeline-in-NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl */
extern void* _ZTCN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImplE0_NS0_23INodeCallbackToPipelineE;

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_4ListIjEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<long, android::List<unsigned int> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_4ListIjEEEEEE;

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandler29deactivateAndWaitUntilDrainedEv */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::InitFrameHandler::deactivateAndWaitUntilDrained() */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandler29deactivateAndWaitUntilDrainedEv(void);

/* Symbol: _ZNK5NSCam2v317NSPipelineContext16FrameBuilderImpl23getAppMetaStreamBuffersERNSt3__16vectorIN7android2spINS0_17IMetaStreamBufferEEENS3_9allocatorIS8_EEEE */
/* Demangled: NSCam::v3::NSPipelineContext::FrameBuilderImpl::getAppMetaStreamBuffers(std::__1::vector<android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamBuffer> > >&) const */
int _ZNK5NSCam2v317NSPipelineContext16FrameBuilderImpl23getAppMetaStreamBuffersERNSt3__16vectorIN7android2spINS0_17IMetaStreamBufferEEENS3_9allocatorIS8_EEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v317NSPipelineContext8IOMapSetEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::NSPipelineContext::IOMapSet> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v317NSPipelineContext8IOMapSetEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZN5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEED2Ev */
/* Demangled: NSCam::v3::Utils::StreamBufferPoolImp<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator>::~StreamBufferPoolImp() */
int _ZN5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEED2Ev(void);

/* Symbol: _ZNK7android6VectorIbE10do_destroyEPvm */
/* Demangled: android::Vector<bool>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIbE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_18IImageStreamBufferES3_E3addEN7android2spIS3_EE */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IImageStreamBuffer, NSCam::v3::IImageStreamBuffer>::add(android::sp<NSCam::v3::IImageStreamBuffer>) */
int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_18IImageStreamBufferES3_E3addEN7android2spIS3_EE(void);

/* Symbol: _ZTv0_n24_N5NSCam2v328PipelineFrameNumberGeneratorD0Ev */
/* Demangled: virtual thunk to NSCam::v3::PipelineFrameNumberGenerator::~PipelineFrameNumberGenerator() */
int _ZTv0_n24_N5NSCam2v328PipelineFrameNumberGeneratorD0Ev(void);

/* Symbol: _ZTv0_n40_N5NSCam2v317NSPipelineContext14DispatcherBase15onEarlyCallbackEjllRKNS_9IMetadataEi */
/* Demangled: virtual thunk to NSCam::v3::NSPipelineContext::DispatcherBase::onEarlyCallback(unsigned int, long, long, NSCam::IMetadata const&, int) */
int _ZTv0_n40_N5NSCam2v317NSPipelineContext14DispatcherBase15onEarlyCallbackEjllRKNS_9IMetadataEi(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceINS_6threadENS_9allocatorIS1_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<std::__1::thread, std::__1::allocator<std::__1::thread> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceINS_6threadENS_9allocatorIS1_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, int> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE7do_copyEPvPKvm(void);

/* Symbol: _ZTVN5NSCam2v314IPipelineFrame17ImageInfoIOMapSetE */
/* Demangled: vtable for NSCam::v3::IPipelineFrame::ImageInfoIOMapSet */
extern void* _ZTVN5NSCam2v314IPipelineFrame17ImageInfoIOMapSetE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS4_18IImageStreamBufferEE4ItemEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalImageStreamBufferT, NSCam::v3::IImageStreamBuffer>::Item> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS4_18IImageStreamBufferEE4ItemEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_18IImageStreamBufferES7_E4ItemEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IImageStreamBuffer, NSCam::v3::IImageStreamBuffer>::Item> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_18IImageStreamBufferES7_E4ItemEEEEEEE;

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandlerC2EjN7android2spIS3_EE */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::InitFrameHandler::InitFrameHandler(unsigned int, android::sp<NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl>) */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandlerC2EjN7android2spIS3_EE(void);

/* Symbol: _ZThn8_NK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS0_18IImageStreamBufferEE12streamInfoAtEm */
/* Demangled: non-virtual thunk to NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalImageStreamBufferT, NSCam::v3::IImageStreamBuffer>::streamInfoAt(unsigned long) const */
int _ZThn8_NK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS0_18IImageStreamBufferEE12streamInfoAtEm(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext16FrameBuilderImplENS_9allocatorIS4_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::NSPipelineContext::FrameBuilderImpl, std::__1::allocator<NSCam::v3::NSPipelineContext::FrameBuilderImpl> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext16FrameBuilderImplENS_9allocatorIS4_EEEE;

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContextD1Ev */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::~PipelineContext() */
int _ZN5NSCam2v317NSPipelineContext15PipelineContextD1Ev(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext23collect_from_NodeIOMaps12getStreamSetERKN7android18DefaultKeyedVectorIlNS1_8IOMapSetEEERNS0_3SetIlEE */
/* Demangled: NSCam::v3::NSPipelineContext::collect_from_NodeIOMaps::getStreamSet(android::DefaultKeyedVector<long, NSCam::v3::NSPipelineContext::IOMapSet> const&, NSCam::v3::Set<long>&) */
int _ZN5NSCam2v317NSPipelineContext23collect_from_NodeIOMaps12getStreamSetERKN7android18DefaultKeyedVectorIlNS1_8IOMapSetEEERNS0_3SetIlEE(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext26collect_from_stream_configclERNS2_6ParamsE */
/* Demangled: NSCam::v3::NSPipelineContext::collect_from_stream_config::operator()(NSCam::v3::NSPipelineContext::collect_from_stream_config::Params&) */
int _ZN5NSCam2v317NSPipelineContext26collect_from_stream_configclERNS2_6ParamsE(void);

/* Symbol: _ZNK5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl15isNeededToFlushERKN7android2spINS0_14IPipelineFrameEEE */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::isNeededToFlush(android::sp<NSCam::v3::IPipelineFrame> const&) const */
int _ZNK5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl15isNeededToFlushERKN7android2spINS0_14IPipelineFrameEEE(void);

/* Symbol: _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS0_18IImageStreamBufferEE14usersManagerAtEm */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalImageStreamBufferT, NSCam::v3::IImageStreamBuffer>::usersManagerAt(unsigned long) const */
int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS0_18IImageStreamBufferEE14usersManagerAtEm(void);

/* Symbol: _ZN7android2spIN5NSCam2v328IPipelineFrameNodeMapControlEEaSERKS4_ */
/* Demangled: android::sp<NSCam::v3::IPipelineFrameNodeMapControl>::operator=(android::sp<NSCam::v3::IPipelineFrameNodeMapControl> const&) */
int _ZN7android2spIN5NSCam2v328IPipelineFrameNodeMapControlEEaSERKS4_(void);

/* Symbol: _ZTv0_n24_N5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImplD1Ev */
/* Demangled: virtual thunk to NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::~PipelineContextImpl() */
int _ZTv0_n24_N5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImplD1Ev(void);

/* Symbol: _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_18IImageStreamBufferES3_E12streamInfoAtEm */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IImageStreamBuffer, NSCam::v3::IImageStreamBuffer>::streamInfoAt(unsigned long) const */
int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_18IImageStreamBufferES3_E12streamInfoAtEm(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void);

/* Symbol: _ZTVN5NSCam2v314IPipelineFrame16MetaInfoIOMapSetE */
/* Demangled: vtable for NSCam::v3::IPipelineFrame::MetaInfoIOMapSet */
extern void* _ZTVN5NSCam2v314IPipelineFrame16MetaInfoIOMapSetE;

/* Symbol: _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_17IMetaStreamBufferES3_E3addEN7android2spINS0_15IMetaStreamInfoEEENS6_INS0_13IUsersManagerEEE */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer>::add(android::sp<NSCam::v3::IMetaStreamInfo>, android::sp<NSCam::v3::IUsersManager>) */
int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_17IMetaStreamBufferES3_E3addEN7android2spINS0_15IMetaStreamInfoEEENS6_INS0_13IUsersManagerEEE(void);

/* Symbol: _ZThn8_N5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_17IMetaStreamBufferES3_E3addEN7android2spINS0_15IMetaStreamInfoEEENS6_INS0_13IUsersManagerEEE */
/* Demangled: non-virtual thunk to NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer>::add(android::sp<NSCam::v3::IMetaStreamInfo>, android::sp<NSCam::v3::IUsersManager>) */
int _ZThn8_N5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_17IMetaStreamBufferES3_E3addEN7android2spINS0_15IMetaStreamInfoEEENS6_INS0_13IUsersManagerEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v317NSPipelineContext8IOMapSetEEEE10do_compareEPKvS9_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::NSPipelineContext::IOMapSet> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v317NSPipelineContext8IOMapSetEEEE10do_compareEPKvS9_(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext12StreamConfigD2Ev */
/* Demangled: NSCam::v3::NSPipelineContext::StreamConfig::~StreamConfig() */
int _ZN5NSCam2v317NSPipelineContext12StreamConfigD2Ev(void);

/* Symbol: _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp21tryGetSensorTimestampEv */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::tryGetSensorTimestamp() const */
int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp21tryGetSensorTimestampEv(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl22setHalMetaStreamBufferElN7android2spINS0_17IMetaStreamBufferEEE */
/* Demangled: NSCam::v3::NSPipelineContext::FrameBuilderImpl::setHalMetaStreamBuffer(long, android::sp<NSCam::v3::IMetaStreamBuffer>) */
int _ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl22setHalMetaStreamBufferElN7android2spINS0_17IMetaStreamBufferEEE(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext8endFlushEv */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::endFlush() */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext8endFlushEv(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl19waitUntilConfigDoneEPKc */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::waitUntilConfigDone(char const*) */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl19waitUntilConfigDoneEPKc(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext11ContextNodeEEEEEE10do_compareEPKvSB_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineContext::ContextNode> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext11ContextNodeEEEEEE10do_compareEPKvSB_(void);

/* Symbol: _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp16setStreamInfoSetEN7android2spIKNS0_14IStreamInfoSetEEE */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::setStreamInfoSet(android::sp<NSCam::v3::IStreamInfoSet const>) */
int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp16setStreamInfoSetEN7android2spIKNS0_14IStreamInfoSetEEE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE25__emplace_unique_key_argsIjJRKNS_4pairIKjS5_EEEEENSI_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > > > >::__emplace_unique_key_args<unsigned int, std::__1::pair<unsigned int const, std::__1::vector<long, std::__1::allocator<long> > > const&>(unsigned int const&, std::__1::pair<unsigned int const, std::__1::vector<long, std::__1::allocator<long> > > const&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE25__emplace_unique_key_argsIjJRKNS_4pairIKjS5_EEEEENSI_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZTVN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_17IMetaStreamBufferES3_E4ItemE */
/* Demangled: vtable for NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer>::Item */
extern void* _ZTVN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_17IMetaStreamBufferES3_E4ItemE;

/* Symbol: _ZN5NSCam2v317NSPipelineContext14DispatcherBase13onCtrlReadoutEjllRNS_9IMetadataElS4_Ri */
/* Demangled: NSCam::v3::NSPipelineContext::DispatcherBase::onCtrlReadout(unsigned int, long, long, NSCam::IMetadata&, long, NSCam::IMetadata&, int&) */
int _ZN5NSCam2v317NSPipelineContext14DispatcherBase13onCtrlReadoutEjllRNS_9IMetadataElS4_Ri(void);

/* Symbol: _ZN5NSCam2v315InFlightRequest15onPipelineFrameEjljPv */
/* Demangled: NSCam::v3::InFlightRequest::onPipelineFrame(unsigned int, long, unsigned int, void*) */
int _ZN5NSCam2v315InFlightRequest15onPipelineFrameEjljPv(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext16FrameBuilderImplENS_9allocatorIS4_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::NSPipelineContext::FrameBuilderImpl, std::__1::allocator<NSCam::v3::NSPipelineContext::FrameBuilderImpl> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext16FrameBuilderImplENS_9allocatorIS4_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v312IPipelineDAG8TNodeObjIllEEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::IPipelineDAG::TNodeObj<long, long> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v312IPipelineDAG8TNodeObjIllEEE8do_splatEPvPKvm(void);

/* Symbol: _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_17IMetaStreamBufferES3_E3addEN7android2spIS3_EE */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer>::add(android::sp<NSCam::v3::IMetaStreamBuffer>) */
int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_17IMetaStreamBufferES3_E3addEN7android2spIS3_EE(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl20waitUntilNodeDrainedEl */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::waitUntilNodeDrained(long) */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl20waitUntilNodeDrainedEl(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v35Utils19StreamBufferPoolImpINS2_18IImageStreamBufferENS3_20HalImageStreamBufferENS6_9AllocatorEE9MyBufferTEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::Utils::StreamBufferPoolImp<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator>::MyBufferT>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v35Utils19StreamBufferPoolImpINS2_18IImageStreamBufferENS3_20HalImageStreamBufferENS6_9AllocatorEE9MyBufferTEE7do_copyEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIlE7do_copyEPvPKvm */
/* Demangled: android::Vector<long>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIlE7do_copyEPvPKvm(void);

/* Symbol: _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp18setPipelineNodeMapEN7android2spIKNS0_16IPipelineNodeMapEEE */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::setPipelineNodeMap(android::sp<NSCam::v3::IPipelineNodeMap const>) */
int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp18setPipelineNodeMapEN7android2spIKNS0_16IPipelineNodeMapEEE(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK5NSCam2v317NSPipelineContext16FrameBuilderImpl4dumpEjj */
/* Demangled: NSCam::v3::NSPipelineContext::FrameBuilderImpl::dump(unsigned int, unsigned int) const */
int _ZNK5NSCam2v317NSPipelineContext16FrameBuilderImpl4dumpEjj(void);

/* Symbol: _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp29transferPendingReleaseBuffersERN7android6VectorINS3_2spINS0_17IMetaStreamBufferEEEEE */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::transferPendingReleaseBuffers(android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >&) */
int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp29transferPendingReleaseBuffersERN7android6VectorINS3_2spINS0_17IMetaStreamBufferEEEEE(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam2v312IPipelineDAG4EdgeEEE */
/* Demangled: vtable for android::Vector<NSCam::v3::IPipelineDAG::Edge> */
extern void* _ZTVN7android6VectorIN5NSCam2v312IPipelineDAG4EdgeEEE;

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16constructRequestEPNS1_16FrameBuilderImplE */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::constructRequest(NSCam::v3::NSPipelineContext::FrameBuilderImpl*) */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16constructRequestEPNS1_16FrameBuilderImplE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_17IMetaStreamBufferES7_E4ItemEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer>::Item> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_17IMetaStreamBufferES7_E4ItemEEEEEE12do_constructEPvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v312IPipelineDAG4EdgeEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::v3::IPipelineDAG::Edge>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v312IPipelineDAG4EdgeEE12do_constructEPvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v317NSPipelineContext8IOMapSetEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::NSPipelineContext::IOMapSet> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v317NSPipelineContext8IOMapSetEEEE12do_constructEPvm(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext18RequestBuilderImplENS_9allocatorIS4_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::NSPipelineContext::RequestBuilderImpl, std::__1::allocator<NSCam::v3::NSPipelineContext::RequestBuilderImpl> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext18RequestBuilderImplENS_9allocatorIS4_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl15setDataCallbackEN7android2wpINS1_13IDataCallbackEEE */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::setDataCallback(android::wp<NSCam::v3::NSPipelineContext::IDataCallback>) */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl15setDataCallbackEN7android2wpINS1_13IDataCallbackEEE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v314IPipelineFrame13MetaInfoIOMapEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::IPipelineFrame::MetaInfoIOMap>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v314IPipelineFrame13MetaInfoIOMapEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp15hasBufferStatusEj */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::hasBufferStatus(unsigned int) */
int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp15hasBufferStatusEj(void);

/* Symbol: _ZTVN5NSCam2v334NSPipelineBufferSetFrameControlImp17ReleasedCollectorE */
/* Demangled: vtable for NSCam::v3::NSPipelineBufferSetFrameControlImp::ReleasedCollector */
extern void* _ZTVN5NSCam2v334NSPipelineBufferSetFrameControlImp17ReleasedCollectorE;

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_18DefaultKeyedVectorIljEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<long, android::DefaultKeyedVector<long, unsigned int> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_18DefaultKeyedVectorIljEEEEEE;

/* Symbol: _ZNK5NSCam2v317NSPipelineContext11NodeBuilder5buildEN7android2spINS1_16IPipelineContextEEE */
/* Demangled: NSCam::v3::NSPipelineContext::NodeBuilder::build(android::sp<NSCam::v3::NSPipelineContext::IPipelineContext>) const */
int _ZNK5NSCam2v317NSPipelineContext11NodeBuilder5buildEN7android2spINS1_16IPipelineContextEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_4ListIjEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::List<unsigned int> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_4ListIjEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS4_18IImageStreamBufferEE4ItemEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalImageStreamBufferT, NSCam::v3::IImageStreamBuffer>::Item> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS4_18IImageStreamBufferEE4ItemEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZTVN7android4ListINS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp10NodeStatus2IOEEEEE */
/* Demangled: vtable for android::List<android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::NodeStatus::IO> > */
extern void* _ZTVN7android4ListINS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp10NodeStatus2IOEEEEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIljEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, unsigned int> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIljEEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS0_18IImageStreamBufferEE3addEN7android2spINS0_16IImageStreamInfoEEENS7_INS0_13IUsersManagerEEE */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalImageStreamBufferT, NSCam::v3::IImageStreamBuffer>::add(android::sp<NSCam::v3::IImageStreamInfo>, android::sp<NSCam::v3::IUsersManager>) */
int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS0_18IImageStreamBufferEE3addEN7android2spINS0_16IImageStreamInfoEEENS7_INS0_13IUsersManagerEEE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandlerENS_9allocatorIS6_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::InitFrameHandler, std::__1::allocator<NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::InitFrameHandler> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandlerENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext21setMultiCamSyncHelperERN7android2spINS0_5Utils3Imp11ISyncHelperEEE */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::setMultiCamSyncHelper(android::sp<NSCam::v3::Utils::Imp::ISyncHelper>&) */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext21setMultiCamSyncHelperERN7android2spINS0_5Utils3Imp11ISyncHelperEEE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::NodeEdge>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE8do_splatEPvPKvm(void);

/* Symbol: _ZNSt3__16vectorIPN5NSCam2v317NSPipelineContext16FrameBuilderImplENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<NSCam::v3::NSPipelineContext::FrameBuilderImpl*, std::__1::allocator<NSCam::v3::NSPipelineContext::FrameBuilderImpl*> >::__push_back_slow_path<NSCam::v3::NSPipelineContext::FrameBuilderImpl*>(NSCam::v3::NSPipelineContext::FrameBuilderImpl*&&) */
int _ZNSt3__16vectorIPN5NSCam2v317NSPipelineContext16FrameBuilderImplENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZTVN5NSCam2v317NSPipelineContext11NodeEdgeSetE */
/* Demangled: vtable for NSCam::v3::NSPipelineContext::NodeEdgeSet */
extern void* _ZTVN5NSCam2v317NSPipelineContext11NodeEdgeSetE;

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl24waitUntilRootNodeDrainedEv */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::waitUntilRootNodeDrained() */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl24waitUntilRootNodeDrainedEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFvN7android2spIN5NSCam2v317NSPipelineContext10INodeActorEEEENS_9allocatorISA_EES9_EclEOS8_ */
/* Demangled: std::__1::__function::__func<void (*)(android::sp<NSCam::v3::NSPipelineContext::INodeActor>), std::__1::allocator<void (*)(android::sp<NSCam::v3::NSPipelineContext::INodeActor>)>, void (android::sp<NSCam::v3::NSPipelineContext::INodeActor>)>::operator()(android::sp<NSCam::v3::NSPipelineContext::INodeActor>&&) */
int _ZNSt3__110__function6__funcIPFvN7android2spIN5NSCam2v317NSPipelineContext10INodeActorEEEENS_9allocatorISA_EES9_EclEOS8_(void);

/* Symbol: _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp19setUserReleaseFenceElli */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::setUserReleaseFence(long, long, int) */
int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp19setUserReleaseFenceElli(void);

/* Symbol: _ZNK7android12SortedVectorIlE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<long>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorIlE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl25setTrackFrameResultParamsERKNSt3__110shared_ptrIKNS1_22TrackFrameResultParamsEEE */
/* Demangled: NSCam::v3::NSPipelineContext::FrameBuilderImpl::setTrackFrameResultParams(std::__1::shared_ptr<NSCam::v3::NSPipelineContext::TrackFrameResultParams const> const&) */
int _ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl25setTrackFrameResultParamsERKNSt3__110shared_ptrIKNS1_22TrackFrameResultParamsEEE(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIljEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<long, unsigned int> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIljEEEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_17IMetaStreamBufferES7_E4ItemEEEEEE10do_compareEPKvSE_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer>::Item> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_17IMetaStreamBufferES7_E4ItemEEEEEE10do_compareEPKvSE_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_4ListIjEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::List<unsigned int> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_4ListIjEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl9reuseNodeElN7android2spINS1_11ContextNodeEEERKNS4_18DefaultKeyedVectorIljEE */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::reuseNode(long, android::sp<NSCam::v3::NSPipelineContext::ContextNode>, android::DefaultKeyedVector<long, unsigned int> const&) */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl9reuseNodeElN7android2spINS1_11ContextNodeEEERKNS4_18DefaultKeyedVectorIljEE(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext13StreamBuilderC2ENS1_11eStreamTypeEN7android2spINS0_16IImageStreamInfoEEE */
/* Demangled: NSCam::v3::NSPipelineContext::StreamBuilder::StreamBuilder(NSCam::v3::NSPipelineContext::eStreamType, android::sp<NSCam::v3::IImageStreamInfo>) */
int _ZN5NSCam2v317NSPipelineContext13StreamBuilderC2ENS1_11eStreamTypeEN7android2spINS0_16IImageStreamInfoEEE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v314IPipelineFrame13MetaInfoIOMapEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::IPipelineFrame::MetaInfoIOMap>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v314IPipelineFrame13MetaInfoIOMapEE7do_copyEPvPKvm(void);

/* Symbol: _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp29transferPendingReleaseBuffersERN7android6VectorINS3_2spINS0_18IImageStreamBufferEEEEE */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::transferPendingReleaseBuffers(android::Vector<android::sp<NSCam::v3::IImageStreamBuffer> >&) */
int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp29transferPendingReleaseBuffersERN7android6VectorINS3_2spINS0_18IImageStreamBufferEEEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE7do_copyEPvPKvm */
/* Demangled: android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIjE7do_copyEPvPKvm */
/* Demangled: android::Vector<unsigned int>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIjE7do_copyEPvPKvm(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl11setRootNodeERKNS0_3SetIlEE */
/* Demangled: NSCam::v3::NSPipelineContext::FrameBuilderImpl::setRootNode(NSCam::v3::Set<long> const&) */
int _ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl11setRootNodeERKNS0_3SetIlEE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::NodeEdge>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl51waitUntilInitFrameDrainedAndDestroyInitFrameHandlerEv */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::waitUntilInitFrameDrainedAndDestroyInitFrameHandler() */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl51waitUntilInitFrameDrainedAndDestroyInitFrameHandlerEv(void);

/* Symbol: _ZN5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEED1Ev */
/* Demangled: NSCam::v3::Utils::StreamBufferPoolImp<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator>::~StreamBufferPoolImp() */
int _ZN5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEED1Ev(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineBuilder12setNodeEdgesERKNS1_11NodeEdgeSetE */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineBuilder::setNodeEdges(NSCam::v3::NSPipelineContext::NodeEdgeSet const&) */
int _ZN5NSCam2v317NSPipelineContext15PipelineBuilder12setNodeEdgesERKNS1_11NodeEdgeSetE(void);

/* Symbol: _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp20getMetaMapItemLockedEl */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::getMetaMapItemLocked(long) const */
int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp20getMetaMapItemLockedEl(void);

/* Symbol: _ZNSt3__14listIN7android2spIN5NSCam2v317IMetaStreamBufferEEENS_9allocatorIS6_EEE6insertINS_21__list_const_iteratorIS6_PvEEEENS_15__list_iteratorIS6_SC_EESD_T_SG_PNS_9enable_ifIXsr19__is_input_iteratorISG_EE5valueEvE4typeE */
/* Demangled: _ZNSt3__14listIN7android2spIN5NSCam2v317IMetaStreamBufferEEENS_9allocatorIS6_EEE6insertINS_21__list_const_iteratorIS6_PvEEEENS_15__list_iteratorIS6_SC_EESD_T_SG_PNS_9enable_ifIXsr19__is_input_iteratorISG_EE5valueEvE4typeE */
int _ZNSt3__14listIN7android2spIN5NSCam2v317IMetaStreamBufferEEENS_9allocatorIS6_EEE6insertINS_21__list_const_iteratorIS6_PvEEEENS_15__list_iteratorIS6_SC_EESD_T_SG_PNS_9enable_ifIXsr19__is_input_iteratorISG_EE5valueEvE4typeE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_4ListIjEEEEE10do_compareEPKvS7_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::List<unsigned int> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_4ListIjEEEEE10do_compareEPKvS7_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig15ItemImageStreamEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineContext::StreamConfig::ItemImageStream> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig15ItemImageStreamEEEEEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineBuilderD2Ev */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineBuilder::~PipelineBuilder() */
int _ZN5NSCam2v317NSPipelineContext15PipelineBuilderD2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_17IMetaStreamBufferES7_E4ItemEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer>::Item> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_17IMetaStreamBufferES7_E4ItemEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZThn8_N5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp15applyPreReleaseEl */
/* Demangled: non-virtual thunk to NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::applyPreRelease(long) */
int _ZThn8_N5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp15applyPreReleaseEl(void);

/* Symbol: _ZTCN5NSCam2v35Utils26SimpleStreamInfoSetControl3MapINS0_15IMetaStreamInfoEEE0_NS0_14IStreamInfoSet4IMapIS4_EE */
/* Demangled: construction vtable for NSCam::v3::IStreamInfoSet::IMap<NSCam::v3::IMetaStreamInfo>-in-NSCam::v3::Utils::SimpleStreamInfoSetControl::Map<NSCam::v3::IMetaStreamInfo> */
extern void* _ZTCN5NSCam2v35Utils26SimpleStreamInfoSetControl3MapINS0_15IMetaStreamInfoEEE0_NS0_14IStreamInfoSet4IMapIS4_EE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, int> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp17queryInfoIOMapSetERKlRNS0_14IPipelineFrame12InfoIOMapSetE */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::queryInfoIOMapSet(long const&, NSCam::v3::IPipelineFrame::InfoIOMapSet&) const */
int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp17queryInfoIOMapSetERKlRNS0_14IPipelineFrame12InfoIOMapSetE(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContextD0Ev */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::~PipelineContext() */
int _ZN5NSCam2v317NSPipelineContext15PipelineContextD0Ev(void);

/* Symbol: _ZNSt3__119__async_assoc_stateIiNS_12__async_funcIPFiN7android2spIN5NSCam2v317NSPipelineContext10INodeActorEEENS3_INS5_23INodeCallbackToPipelineEEEEJS8_SA_EEEE16__on_zero_sharedEv */
/* Demangled: std::__1::__async_assoc_state<int, std::__1::__async_func<int (*)(android::sp<NSCam::v3::NSPipelineContext::INodeActor>, android::sp<NSCam::v3::INodeCallbackToPipeline>), android::sp<NSCam::v3::NSPipelineContext::INodeActor>, android::sp<NSCam::v3::INodeCallbackToPipeline> > >::__on_zero_shared() */
int _ZNSt3__119__async_assoc_stateIiNS_12__async_funcIPFiN7android2spIN5NSCam2v317NSPipelineContext10INodeActorEEENS3_INS5_23INodeCallbackToPipelineEEEEJS8_SA_EEEE16__on_zero_sharedEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, std::__1::vector<android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamBuffer> > > > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEE12do_constructEPvm(void);

/* Symbol: _ZNSt3__14listIN7android2spIN5NSCam2v317IMetaStreamBufferEEENS_9allocatorIS6_EEE6assignINS_21__list_const_iteratorIS6_PvEEEEvT_SE_PNS_9enable_ifIXsr19__is_input_iteratorISE_EE5valueEvE4typeE */
/* Demangled: _ZNSt3__14listIN7android2spIN5NSCam2v317IMetaStreamBufferEEENS_9allocatorIS6_EEE6assignINS_21__list_const_iteratorIS6_PvEEEEvT_SE_PNS_9enable_ifIXsr19__is_input_iteratorISE_EE5valueEvE4typeE */
int _ZNSt3__14listIN7android2spIN5NSCam2v317IMetaStreamBufferEEENS_9allocatorIS6_EEE6assignINS_21__list_const_iteratorIS6_PvEEEEvT_SE_PNS_9enable_ifIXsr19__is_input_iteratorISE_EE5valueEvE4typeE(void);

/* Symbol: _ZThn8_N5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS0_17IMetaStreamBufferEE3addEN7android2spIS4_EE */
/* Demangled: non-virtual thunk to NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalMetaStreamBufferT, NSCam::v3::IMetaStreamBuffer>::add(android::sp<NSCam::v3::IMetaStreamBuffer>) */
int _ZThn8_N5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS0_17IMetaStreamBufferEE3addEN7android2spIS4_EE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_4ListIjEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::List<unsigned int> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_4ListIjEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZTv0_n24_N5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImplD0Ev */
/* Demangled: virtual thunk to NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::~PipelineContextImpl() */
int _ZTv0_n24_N5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImplD0Ev(void);

/* Symbol: _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp12applyReleaseEl */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::applyRelease(long) */
int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp12applyReleaseEl(void);

/* Symbol: _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_17IMetaStreamBufferES3_E12streamInfoAtEm */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer>::streamInfoAt(unsigned long) const */
int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_17IMetaStreamBufferES3_E12streamInfoAtEm(void);

/* Symbol: __cmptf2 */
/* Demangled: __cmptf2 */
int __cmptf2(void);

/* Symbol: _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp18getBufferLockedImpINS1_8TItemMapINS0_18IImageStreamBufferES5_EEEEN7android2spINT_14IStreamBufferTEEEllRKS9_ */
/* Demangled: android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IImageStreamBuffer, NSCam::v3::IImageStreamBuffer>::IStreamBufferT> NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::getBufferLockedImp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IImageStreamBuffer, NSCam::v3::IImageStreamBuffer> >(long, long, NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IImageStreamBuffer, NSCam::v3::IImageStreamBuffer> const&) const */
int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp18getBufferLockedImpINS1_8TItemMapINS0_18IImageStreamBufferES5_EEEEN7android2spINT_14IStreamBufferTEEEllRKS9_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp10NodeStatusEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::NodeStatus> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp10NodeStatusEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE14__assign_multiINS_21__hash_const_iteratorIPNS_11__hash_nodeIS6_PvEEEEEEvT_SO_ */
/* Demangled: void std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > > > >::__assign_multi<std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, void*>*> >(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, void*>*>, std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, void*>*>) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE14__assign_multiINS_21__hash_const_iteratorIPNS_11__hash_nodeIS6_PvEEEEEEvT_SO_(void);

/* Symbol: _ZThn8_NK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp13getMetaBufferEll */
/* Demangled: non-virtual thunk to NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::getMetaBuffer(long, long) const */
int _ZThn8_NK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp13getMetaBufferEll(void);

/* Symbol: _ZThn8_NK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_18IImageStreamBufferES3_E14usersManagerAtEm */
/* Demangled: non-virtual thunk to NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IImageStreamBuffer, NSCam::v3::IImageStreamBuffer>::usersManagerAt(unsigned long) const */
int _ZThn8_NK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_18IImageStreamBufferES3_E14usersManagerAtEm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::IOMap>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext12StreamConfigD1Ev */
/* Demangled: NSCam::v3::NSPipelineContext::StreamConfig::~StreamConfig() */
int _ZN5NSCam2v317NSPipelineContext12StreamConfigD1Ev(void);

/* Symbol: _ZNK5NSCam2v317NSPipelineContext10NodeConfig9queryNodeEl */
/* Demangled: NSCam::v3::NSPipelineContext::NodeConfig::queryNode(long) const */
int _ZNK5NSCam2v317NSPipelineContext10NodeConfig9queryNodeEl(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_18IImageStreamBufferES7_E4ItemEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IImageStreamBuffer, NSCam::v3::IImageStreamBuffer>::Item> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_18IImageStreamBufferES7_E4ItemEEEEEE12do_constructEPvm(void);

/* Symbol: _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void);

/* Symbol: _ZTTN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImpE */
/* Demangled: VTT for NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp */
extern void* _ZTTN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImpE;

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl11reuseStreamEN7android2spINS1_12StreamConfig15ItemImageStreamEEE */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::reuseStream(android::sp<NSCam::v3::NSPipelineContext::StreamConfig::ItemImageStream>) */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl11reuseStreamEN7android2spINS1_12StreamConfig15ItemImageStreamEEE(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl11submitFrameERKNSt3__16vectorIN7android2spINS0_14IPipelineFrameEEENS4_9allocatorIS9_EEEE */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::submitFrame(std::__1::vector<android::sp<NSCam::v3::IPipelineFrame>, std::__1::allocator<android::sp<NSCam::v3::IPipelineFrame> > > const&) */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl11submitFrameERKNSt3__16vectorIN7android2spINS0_14IPipelineFrameEEENS4_9allocatorIS9_EEEE(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl10onCallbackENS0_23INodeCallbackToPipeline14CallBackParamsE */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::onCallback(NSCam::v3::INodeCallbackToPipeline::CallBackParams) */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl10onCallbackENS0_23INodeCallbackToPipeline14CallBackParamsE(void);

/* Symbol: _ZTVN5NSCam2v35Utils26SimpleStreamInfoSetControlE */
/* Demangled: vtable for NSCam::v3::Utils::SimpleStreamInfoSetControl */
extern void* _ZTVN5NSCam2v35Utils26SimpleStreamInfoSetControlE;

/* Symbol: _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_17IMetaStreamBufferES3_E18onAllUsersReleasedERNS4_4ItemE */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer>::onAllUsersReleased(NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer>::Item&) */
int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_17IMetaStreamBufferES3_E18onAllUsersReleasedERNS4_4ItemE(void);

/* Symbol: _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp16getMapItemLockedElRKNS1_6IMyMapE */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::getMapItemLocked(long, NSCam::v3::NSPipelineBufferSetFrameControlImp::IMyMap const&) const */
int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp16getMapItemLockedElRKNS1_6IMyMapE(void);

/* Symbol: _ZNK5NSCam2v317NSPipelineContext29update_streambuffers_to_frame16updateAppImageSBERKN7android18DefaultKeyedVectorIlNS3_2spINS0_16IImageStreamInfoEEEEERKNS4_IlNS5_INS0_18IImageStreamBufferEEEEEPNS0_30IPipelineBufferSetFrameControlE */
/* Demangled: NSCam::v3::NSPipelineContext::update_streambuffers_to_frame::updateAppImageSB(android::DefaultKeyedVector<long, android::sp<NSCam::v3::IImageStreamInfo> > const&, android::DefaultKeyedVector<long, android::sp<NSCam::v3::IImageStreamBuffer> > const&, NSCam::v3::IPipelineBufferSetFrameControl*) const */
int _ZNK5NSCam2v317NSPipelineContext29update_streambuffers_to_frame16updateAppImageSBERKN7android18DefaultKeyedVectorIlNS3_2spINS0_16IImageStreamInfoEEEEERKNS4_IlNS5_INS0_18IImageStreamBufferEEEEEPNS0_30IPipelineBufferSetFrameControlE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIljEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, unsigned int> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIljEEE8do_splatEPvPKvm(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext13StreamBuilderC2ERKS2_ */
/* Demangled: NSCam::v3::NSPipelineContext::StreamBuilder::StreamBuilder(NSCam::v3::NSPipelineContext::StreamBuilder const&) */
int _ZN5NSCam2v317NSPipelineContext13StreamBuilderC2ERKS2_(void);

/* Symbol: _ZNK5NSCam2v317NSPipelineContext15PipelineContext7getNameEv */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::getName() const */
int _ZNK5NSCam2v317NSPipelineContext15PipelineContext7getNameEv(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15IRequestBuilder4makeEv */
/* Demangled: NSCam::v3::NSPipelineContext::IRequestBuilder::make() */
int _ZN5NSCam2v317NSPipelineContext15IRequestBuilder4makeEv(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15config_pipelineclERNS2_6ParamsE */
/* Demangled: NSCam::v3::NSPipelineContext::config_pipeline::operator()(NSCam::v3::NSPipelineContext::config_pipeline::Params&) */
int _ZN5NSCam2v317NSPipelineContext15config_pipelineclERNS2_6ParamsE(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext24update_streaminfo_to_setclERNS2_6ParamsE */
/* Demangled: NSCam::v3::NSPipelineContext::update_streaminfo_to_set::operator()(NSCam::v3::NSPipelineContext::update_streaminfo_to_set::Params&) */
int _ZN5NSCam2v317NSPipelineContext24update_streaminfo_to_setclERNS2_6ParamsE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v35Utils19StreamBufferPoolImpINS2_18IImageStreamBufferENS3_20HalImageStreamBufferENS6_9AllocatorEE9MyBufferTEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::Utils::StreamBufferPoolImp<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator>::MyBufferT>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v35Utils19StreamBufferPoolImpINS2_18IImageStreamBufferENS3_20HalImageStreamBufferENS6_9AllocatorEE9MyBufferTEE8do_splatEPvPKvm(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl24setPhysicalCameraSettingERKNSt3__16vectorIiNS3_9allocatorIiEEEE */
/* Demangled: NSCam::v3::NSPipelineContext::FrameBuilderImpl::setPhysicalCameraSetting(std::__1::vector<int, std::__1::allocator<int> > const&) */
int _ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl24setPhysicalCameraSettingERKNSt3__16vectorIiNS3_9allocatorIiEEEE(void);

/* Symbol: _ZTVN5NSCam2v317NSPipelineContext18RequestBuilderImplE */
/* Demangled: vtable for NSCam::v3::NSPipelineContext::RequestBuilderImpl */
extern void* _ZTVN5NSCam2v317NSPipelineContext18RequestBuilderImplE;

/* Symbol: _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp21getImageMapItemLockedEl */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::getImageMapItemLocked(long) const */
int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp21getImageMapItemLockedEl(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v312IPipelineDAG4EdgeEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::IPipelineDAG::Edge>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v312IPipelineDAG4EdgeEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext17DefaultDispatcher15onDispatchFrameERKN7android2spINS0_14IPipelineFrameEEEl */
/* Demangled: NSCam::v3::NSPipelineContext::DefaultDispatcher::onDispatchFrame(android::sp<NSCam::v3::IPipelineFrame> const&, long) */
int _ZN5NSCam2v317NSPipelineContext17DefaultDispatcher15onDispatchFrameERKN7android2spINS0_14IPipelineFrameEEEl(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandler13setConfigDoneEi */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::InitFrameHandler::setConfigDone(int) */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandler13setConfigDoneEi(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIljEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, unsigned int> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIljEEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v35Utils19StreamBufferPoolImpINS2_18IImageStreamBufferENS3_20HalImageStreamBufferENS6_9AllocatorEE9MyBufferTEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::v3::Utils::StreamBufferPoolImp<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator>::MyBufferT>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v35Utils19StreamBufferPoolImpINS2_18IImageStreamBufferENS3_20HalImageStreamBufferENS6_9AllocatorEE9MyBufferTEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandler10threadLoopEv */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::InitFrameHandler::threadLoop() */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandler10threadLoopEv(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl12setRequestNoEj */
/* Demangled: NSCam::v3::NSPipelineContext::FrameBuilderImpl::setRequestNo(unsigned int) */
int _ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl12setRequestNoEj(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v314IPipelineFrame14ImageInfoIOMapEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::IPipelineFrame::ImageInfoIOMap>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v314IPipelineFrame14ImageInfoIOMapEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZThn8_NK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS0_17IMetaStreamBufferEE12streamInfoAtEm */
/* Demangled: non-virtual thunk to NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalMetaStreamBufferT, NSCam::v3::IMetaStreamBuffer>::streamInfoAt(unsigned long) const */
int _ZThn8_NK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS0_17IMetaStreamBufferEE12streamInfoAtEm(void);

/* Symbol: _ZN5NSCam2v315InFlightRequest16waitUntilDrainedEv */
/* Demangled: NSCam::v3::InFlightRequest::waitUntilDrained() */
int _ZN5NSCam2v315InFlightRequest16waitUntilDrainedEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v35Utils19StreamBufferPoolImpINS2_18IImageStreamBufferENS3_20HalImageStreamBufferENS6_9AllocatorEE9MyBufferTEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::v3::Utils::StreamBufferPoolImp<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator>::MyBufferT>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v35Utils19StreamBufferPoolImpINS2_18IImageStreamBufferENS3_20HalImageStreamBufferENS6_9AllocatorEE9MyBufferTEE10do_destroyEPvm(void);

/* Symbol: _ZTv0_n48_N5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEE8initPoolEPKcmm */
/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferPoolImp<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator>::initPool(char const*, unsigned long, unsigned long) */
int _ZTv0_n48_N5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEE8initPoolEPKcmm(void);

/* Symbol: _ZNK7android6VectorIbE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<bool>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIbE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZTVN7android6VectorIlEE */
/* Demangled: vtable for android::Vector<long> */
extern void* _ZTVN7android6VectorIlEE;

/* Symbol: _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp27setPhysicalAppMetaStreamIdsERKNSt3__113unordered_mapIjNS3_6vectorIlNS3_9allocatorIlEEEENS3_4hashIjEENS3_8equal_toIjEENS6_INS3_4pairIKjS8_EEEEEE */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::setPhysicalAppMetaStreamIds(std::__1::unordered_map<unsigned int, std::__1::vector<long, std::__1::allocator<long> >, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, std::__1::vector<long, std::__1::allocator<long> > > > > const&) */
int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp27setPhysicalAppMetaStreamIdsERKNSt3__113unordered_mapIjNS3_6vectorIlNS3_9allocatorIlEEEENS3_4hashIjEENS3_8equal_toIjEENS6_INS3_4pairIKjS8_EEEEEE(void);

/* Symbol: _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp15getBufferLockedINS1_8TItemMapINS0_18IImageStreamBufferES5_EEEEN7android2spINT_14IStreamBufferTEEEllRKS9_ */
/* Demangled: android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IImageStreamBuffer, NSCam::v3::IImageStreamBuffer>::IStreamBufferT> NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::getBufferLocked<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IImageStreamBuffer, NSCam::v3::IImageStreamBuffer> >(long, long, NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IImageStreamBuffer, NSCam::v3::IImageStreamBuffer> const&) const */
int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp15getBufferLockedINS1_8TItemMapINS0_18IImageStreamBufferES5_EEEEN7android2spINT_14IStreamBufferTEEEllRKS9_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp10NodeStatusEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::NodeStatus> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp10NodeStatusEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZTCN5NSCam2v328PipelineFrameNumberGeneratorE0_NS0_29IPipelineFrameNumberGeneratorE */
/* Demangled: construction vtable for NSCam::v3::IPipelineFrameNumberGenerator-in-NSCam::v3::PipelineFrameNumberGenerator */
extern void* _ZTCN5NSCam2v328PipelineFrameNumberGeneratorE0_NS0_29IPipelineFrameNumberGeneratorE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::IOMap>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK5NSCam2v317NSPipelineContext12StreamConfig22acquireHalStreamBufferEjN7android2spINS0_16IImageStreamInfoEEERNS4_INS0_5Utils20HalImageStreamBufferEEE */
/* Demangled: NSCam::v3::NSPipelineContext::StreamConfig::acquireHalStreamBuffer(unsigned int, android::sp<NSCam::v3::IImageStreamInfo>, android::sp<NSCam::v3::Utils::HalImageStreamBuffer>&) const */
int _ZNK5NSCam2v317NSPipelineContext12StreamConfig22acquireHalStreamBufferEjN7android2spINS0_16IImageStreamInfoEEERNS4_INS0_5Utils20HalImageStreamBufferEEE(void);

/* Symbol: _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp21handleReleasedBuffersElN7android2spINS0_30IPipelineBufferSetFrameControl12IAppCallbackEEE */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::handleReleasedBuffers(long, android::sp<NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback>) */
int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp21handleReleasedBuffersElN7android2spINS0_30IPipelineBufferSetFrameControl12IAppCallbackEEE(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::IMetaStreamBuffer> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEEE;

/* Symbol: _ZN5NSCam2v317NSPipelineContext29set_streaminfoset_from_configclERNS2_6ParamsE */
/* Demangled: NSCam::v3::NSPipelineContext::set_streaminfoset_from_config::operator()(NSCam::v3::NSPipelineContext::set_streaminfoset_from_config::Params&) */
int _ZN5NSCam2v317NSPipelineContext29set_streaminfoset_from_configclERNS2_6ParamsE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext11ContextNodeEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineContext::ContextNode> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext11ContextNodeEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE10do_compareEPKvSA_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE10do_compareEPKvSA_(void);

/* Symbol: _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp25finishConfigurationLockedEv */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::finishConfigurationLocked() */
int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp25finishConfigurationLockedEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp10NodeStatusEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::NodeStatus> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp10NodeStatusEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceINS_5mutexENS_9allocatorIS1_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<std::__1::mutex, std::__1::allocator<std::__1::mutex> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceINS_5mutexENS_9allocatorIS1_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig15ItemImageStreamEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineContext::StreamConfig::ItemImageStream> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig15ItemImageStreamEEEEEEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZTCN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImpE8_NS0_25IPipelineBufferSetControlE */
/* Demangled: construction vtable for NSCam::v3::IPipelineBufferSetControl-in-NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp */
extern void* _ZTCN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImpE8_NS0_25IPipelineBufferSetControlE;

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext17setInitFrameCountEj */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::setInitFrameCount(unsigned int) */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext17setInitFrameCountEj(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_18DefaultKeyedVectorIljEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::DefaultKeyedVector<long, unsigned int> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_18DefaultKeyedVectorIljEEEEE12do_constructEPvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig14ItemMetaStreamEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineContext::StreamConfig::ItemMetaStream> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig14ItemMetaStreamEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZTCN5NSCam2v35Utils26SimpleStreamInfoSetControl3MapINS0_16IImageStreamInfoEEE0_NS0_14IStreamInfoSet4IMapIS4_EE */
/* Demangled: construction vtable for NSCam::v3::IStreamInfoSet::IMap<NSCam::v3::IImageStreamInfo>-in-NSCam::v3::Utils::SimpleStreamInfoSetControl::Map<NSCam::v3::IImageStreamInfo> */
extern void* _ZTCN5NSCam2v35Utils26SimpleStreamInfoSetControl3MapINS0_16IImageStreamInfoEEE0_NS0_14IStreamInfoSet4IMapIS4_EE;

/* Symbol: _ZNK5NSCam2v317NSPipelineContext15PipelineBuilder5buildEN7android2spINS1_16IPipelineContextEEE */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineBuilder::build(android::sp<NSCam::v3::NSPipelineContext::IPipelineContext>) const */
int _ZNK5NSCam2v317NSPipelineContext15PipelineBuilder5buildEN7android2spINS1_16IPipelineContextEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZNSt3__16__treeIlNS_4lessIlEENS_9allocatorIlEEE14__assign_multiINS_21__tree_const_iteratorIlPNS_11__tree_nodeIlPvEElEEEEvT_SD_ */
/* Demangled: void std::__1::__tree<long, std::__1::less<long>, std::__1::allocator<long> >::__assign_multi<std::__1::__tree_const_iterator<long, std::__1::__tree_node<long, void*>*, long> >(std::__1::__tree_const_iterator<long, std::__1::__tree_node<long, void*>*, long>, std::__1::__tree_const_iterator<long, std::__1::__tree_node<long, void*>*, long>) */
int _ZNSt3__16__treeIlNS_4lessIlEENS_9allocatorIlEEE14__assign_multiINS_21__tree_const_iteratorIlPNS_11__tree_nodeIlPvEElEEEEvT_SD_(void);

/* Symbol: __floatditf */
/* Demangled: __floatditf */
int __floatditf(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZTVN5NSCam2v35Utils16StreamBufferPoolINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEEE */
/* Demangled: vtable for NSCam::v3::Utils::StreamBufferPool<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator> */
extern void* _ZTVN5NSCam2v35Utils16StreamBufferPoolINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEEE;

/* Symbol: _ZN5NSCam2v317NSPipelineContext13StreamBuilderC1ERKS2_ */
/* Demangled: NSCam::v3::NSPipelineContext::StreamBuilder::StreamBuilder(NSCam::v3::NSPipelineContext::StreamBuilder const&) */
int _ZN5NSCam2v317NSPipelineContext13StreamBuilderC1ERKS2_(void);

/* Symbol: _ZNK7android6VectorIlE8do_splatEPvPKvm */
/* Demangled: android::Vector<long>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIlE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS4_17IMetaStreamBufferEE4ItemEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalMetaStreamBufferT, NSCam::v3::IMetaStreamBuffer>::Item> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS4_17IMetaStreamBufferEE4ItemEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEED0Ev */
/* Demangled: NSCam::v3::Utils::StreamBufferPoolImp<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator>::~StreamBufferPoolImp() */
int _ZN5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEED0Ev(void);

/* Symbol: _ZTVN5NSCam2v317NSPipelineContext12StreamConfigE */
/* Demangled: vtable for NSCam::v3::NSPipelineContext::StreamConfig */
extern void* _ZTVN5NSCam2v317NSPipelineContext12StreamConfigE;

/* Symbol: __netf2 */
/* Demangled: __netf2 */
int __netf2(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext14DispatcherBase10onCtrlSyncEjljjl */
/* Demangled: NSCam::v3::NSPipelineContext::DispatcherBase::onCtrlSync(unsigned int, long, unsigned int, unsigned int, long) */
int _ZN5NSCam2v317NSPipelineContext14DispatcherBase10onCtrlSyncEjljjl(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext11NodeBuilder19setImageStreamUsageElj */
/* Demangled: NSCam::v3::NSPipelineContext::NodeBuilder::setImageStreamUsage(long, unsigned int) */
int _ZN5NSCam2v317NSPipelineContext11NodeBuilder19setImageStreamUsageElj(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineBuilderD1Ev */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineBuilder::~PipelineBuilder() */
int _ZN5NSCam2v317NSPipelineContext15PipelineBuilderD1Ev(void);

/* Symbol: _ZTVN5NSCam2v35Utils21IStreamInfoSetControlE */
/* Demangled: vtable for NSCam::v3::Utils::IStreamInfoSetControl */
extern void* _ZTVN5NSCam2v35Utils21IStreamInfoSetControlE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext11ContextNodeEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineContext::ContextNode> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext11ContextNodeEEEEEE12do_constructEPvm(void);

/* Symbol: _ZNK7android6VectorINS_7String8EE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<android::String8>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_7String8EE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5NSCam2v330IPipelineBufferSetFrameControl8castFromEPNS0_14IPipelineFrameE */
/* Demangled: NSCam::v3::IPipelineBufferSetFrameControl::castFrom(NSCam::v3::IPipelineFrame*) */
int _ZN5NSCam2v330IPipelineBufferSetFrameControl8castFromEPNS0_14IPipelineFrameE(void);

/* Symbol: _ZNK7android6VectorIlE10do_destroyEPvm */
/* Demangled: android::Vector<long>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIlE10do_destroyEPvm(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam2v314IPipelineFrame14ImageInfoIOMapEEE */
/* Demangled: vtable for android::Vector<NSCam::v3::IPipelineFrame::ImageInfoIOMap> */
extern void* _ZTVN7android6VectorIN5NSCam2v314IPipelineFrame14ImageInfoIOMapEEE;

/* Symbol: _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp14getImageBufferEll */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::getImageBuffer(long, long) const */
int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp14getImageBufferEll(void);

/* Symbol: _ZTv0_n72_N5NSCam2v317NSPipelineContext14DispatcherBase13onCtrlReadoutEjllRNS_9IMetadataElS4_Ri */
/* Demangled: virtual thunk to NSCam::v3::NSPipelineContext::DispatcherBase::onCtrlReadout(unsigned int, long, long, NSCam::IMetadata&, long, NSCam::IMetadata&, int&) */
int _ZTv0_n72_N5NSCam2v317NSPipelineContext14DispatcherBase13onCtrlReadoutEjllRNS_9IMetadataElS4_Ri(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext4castEPNS1_16IPipelineContextE */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::cast(NSCam::v3::NSPipelineContext::IPipelineContext*) */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext4castEPNS1_16IPipelineContextE(void);

/* Symbol: _ZN7android2spIN5NSCam2v314IPipelineFrameEEC2INS2_34NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImpEEEPT_ */
/* Demangled: android::sp<NSCam::v3::IPipelineFrame>::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp>(NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp*) */
int _ZN7android2spIN5NSCam2v314IPipelineFrameEEC2INS2_34NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImpEEEPT_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v317NSPipelineContext8IOMapSetEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::NSPipelineContext::IOMapSet> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v317NSPipelineContext8IOMapSetEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext12StreamConfigD0Ev */
/* Demangled: NSCam::v3::NSPipelineContext::StreamConfig::~StreamConfig() */
int _ZN5NSCam2v317NSPipelineContext12StreamConfigD0Ev(void);

/* Symbol: _ZTCN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImpE8_NS0_16IStreamBufferSetE */
/* Demangled: construction vtable for NSCam::v3::IStreamBufferSet-in-NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp */
extern void* _ZTCN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImpE8_NS0_16IStreamBufferSetE;

/* Symbol: _ZN5NSCam2v315InFlightRequest15onPipelineFrameEjjPv */
/* Demangled: NSCam::v3::InFlightRequest::onPipelineFrame(unsigned int, unsigned int, void*) */
int _ZN5NSCam2v315InFlightRequest15onPipelineFrameEjjPv(void);

/* Symbol: _ZN5NSCam2v315InFlightRequest5abortEv */
/* Demangled: NSCam::v3::InFlightRequest::abort() */
int _ZN5NSCam2v315InFlightRequest5abortEv(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext13StreamBuilder11setProviderEN7android2spINS0_5Utils21IStreamBufferProviderEEE */
/* Demangled: NSCam::v3::NSPipelineContext::StreamBuilder::setProvider(android::sp<NSCam::v3::Utils::IStreamBufferProvider>) */
int _ZN5NSCam2v317NSPipelineContext13StreamBuilder11setProviderEN7android2spINS0_5Utils21IStreamBufferProviderEEE(void);

/* Symbol: _ZTv0_n40_N5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp15onLastStrongRefEPKv */
/* Demangled: virtual thunk to NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::onLastStrongRef(void const*) */
int _ZTv0_n40_N5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp15onLastStrongRefEPKv(void);

/* Symbol: __lttf2 */
/* Demangled: __lttf2 */
int __lttf2(void);

/* Symbol: _ZNSt3__110__function6__funcIPFvN7android2spIN5NSCam2v317NSPipelineContext10INodeActorEEEENS_9allocatorISA_EES9_E7destroyEv */
/* Demangled: std::__1::__function::__func<void (*)(android::sp<NSCam::v3::NSPipelineContext::INodeActor>), std::__1::allocator<void (*)(android::sp<NSCam::v3::NSPipelineContext::INodeActor>)>, void (android::sp<NSCam::v3::NSPipelineContext::INodeActor>)>::destroy() */
int _ZNSt3__110__function6__funcIPFvN7android2spIN5NSCam2v317NSPipelineContext10INodeActorEEEENS_9allocatorISA_EES9_E7destroyEv(void);

/* Symbol: _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImpC2ERKNS0_30IPipelineBufferSetFrameControl14CreationParamsE */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp(NSCam::v3::IPipelineBufferSetFrameControl::CreationParams const&) */
int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImpC2ERKNS0_30IPipelineBufferSetFrameControl14CreationParamsE(void);

/* Symbol: _ZThn8_N5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp14markUserStatusEllj */
/* Demangled: non-virtual thunk to NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::markUserStatus(long, long, unsigned int) */
int _ZThn8_N5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp14markUserStatusEllj(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext5queueERKN7android2spINS0_14IPipelineFrameEEE */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::queue(android::sp<NSCam::v3::IPipelineFrame> const&) */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext5queueERKN7android2spINS0_14IPipelineFrameEEE(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam2v35Utils19StreamBufferPoolImpINS2_18IImageStreamBufferENS3_20HalImageStreamBufferENS6_9AllocatorEE9MyBufferTEEE */
/* Demangled: vtable for android::Vector<NSCam::v3::Utils::StreamBufferPoolImp<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator>::MyBufferT> */
extern void* _ZTVN7android6VectorIN5NSCam2v35Utils19StreamBufferPoolImpINS2_18IImageStreamBufferENS3_20HalImageStreamBufferENS6_9AllocatorEE9MyBufferTEEE;

/* Symbol: _ZN5NSCam2v312IPipelineDAG6createEv */
/* Demangled: NSCam::v3::IPipelineDAG::create() */
int _ZN5NSCam2v312IPipelineDAG6createEv(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandler11requestExitEv */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::InitFrameHandler::requestExit() */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandler11requestExitEv(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl23setHalImageStreamBufferElN7android2spINS0_18IImageStreamBufferEEE */
/* Demangled: NSCam::v3::NSPipelineContext::FrameBuilderImpl::setHalImageStreamBuffer(long, android::sp<NSCam::v3::IImageStreamBuffer>) */
int _ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl23setHalImageStreamBufferElN7android2spINS0_18IImageStreamBufferEEE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::NodeEdge>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE7do_copyEPvPKvm(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig14ItemMetaStreamEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineContext::StreamConfig::ItemMetaStream> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig14ItemMetaStreamEEEEEEE;

/* Symbol: _ZN7android4ListIN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp10MyListenerEEaSERKS6_ */
/* Demangled: android::List<NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::MyListener>::operator=(android::List<NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::MyListener> const&) */
int _ZN7android4ListIN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp10MyListenerEEaSERKS6_(void);

/* Symbol: _ZNK5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl20queryImageStreamPoolEl */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::queryImageStreamPool(long) const */
int _ZNK5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl20queryImageStreamPoolEl(void);

/* Symbol: _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m */
/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned long) */
int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m(void);

/* Symbol: _ZThn8_NK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_18IImageStreamBufferES3_E12streamInfoAtEm */
/* Demangled: non-virtual thunk to NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IImageStreamBuffer, NSCam::v3::IImageStreamBuffer>::streamInfoAt(unsigned long) const */
int _ZThn8_NK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_18IImageStreamBufferES3_E12streamInfoAtEm(void);

/* Symbol: _ZN7android2spIN5NSCam2v35Utils21IStreamInfoSetControlEEaSERKS5_ */
/* Demangled: android::sp<NSCam::v3::Utils::IStreamInfoSetControl>::operator=(android::sp<NSCam::v3::Utils::IStreamInfoSetControl> const&) */
int _ZN7android2spIN5NSCam2v35Utils21IStreamInfoSetControlEEaSERKS5_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, int> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE8do_splatEPvPKvm(void);

/* Symbol: _ZTVN5NSCam2v328PipelineFrameNumberGeneratorE */
/* Demangled: vtable for NSCam::v3::PipelineFrameNumberGenerator */
extern void* _ZTVN5NSCam2v328PipelineFrameNumberGeneratorE;

/* Symbol: __subtf3 */
/* Demangled: __subtf3 */
int __subtf3(void);

/* Symbol: _ZTVN5NSCam2v317NSPipelineContext12StreamConfig14ItemMetaStreamE */
/* Demangled: vtable for NSCam::v3::NSPipelineContext::StreamConfig::ItemMetaStream */
extern void* _ZTVN5NSCam2v317NSPipelineContext12StreamConfig14ItemMetaStreamE;

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEaSEOS5_ */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::operator=(std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEaSEOS5_(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandlerD2Ev */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::InitFrameHandler::~InitFrameHandler() */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandlerD2Ev(void);

/* Symbol: _ZTTN5NSCam2v35Utils16StreamBufferPoolINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEEE */
/* Demangled: VTT for NSCam::v3::Utils::StreamBufferPool<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator> */
extern void* _ZTTN5NSCam2v35Utils16StreamBufferPoolINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS4_18IImageStreamBufferEE4ItemEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalImageStreamBufferT, NSCam::v3::IImageStreamBuffer>::Item> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS4_18IImageStreamBufferEE4ItemEEEEEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl4kickERKN7android2spINS0_14IPipelineFrameEEE */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::kick(android::sp<NSCam::v3::IPipelineFrame> const&) */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl4kickERKN7android2spINS0_14IPipelineFrameEEE(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImplC2EPKc */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::PipelineContextImpl(char const*) */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImplC2EPKc(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig15ItemImageStreamEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineContext::StreamConfig::ItemImageStream> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig15ItemImageStreamEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZTVN7android6VectorINS_7String8EEE */
/* Demangled: vtable for android::Vector<android::String8> */
extern void* _ZTVN7android6VectorINS_7String8EEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl10buildFrameERKNSt3__16vectorIPNS1_16FrameBuilderImplENS4_9allocatorIS7_EEEE */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::buildFrame(std::__1::vector<NSCam::v3::NSPipelineContext::FrameBuilderImpl*, std::__1::allocator<NSCam::v3::NSPipelineContext::FrameBuilderImpl*> > const&) */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl10buildFrameERKNSt3__16vectorIPNS1_16FrameBuilderImplENS4_9allocatorIS7_EEEE(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl12setNodeEdgesERKNS1_11NodeEdgeSetE */
/* Demangled: NSCam::v3::NSPipelineContext::FrameBuilderImpl::setNodeEdges(NSCam::v3::NSPipelineContext::NodeEdgeSet const&) */
int _ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl12setNodeEdgesERKNS1_11NodeEdgeSetE(void);

/* Symbol: _ZNK5NSCam2v317NSPipelineContext29update_streambuffers_to_frame16updateHalImageSBERKN7android18DefaultKeyedVectorIlNS3_2spINS0_16IImageStreamInfoEEEEERKNS4_IlNS5_INS0_18IImageStreamBufferEEEEEPNS0_30IPipelineBufferSetFrameControlE */
/* Demangled: NSCam::v3::NSPipelineContext::update_streambuffers_to_frame::updateHalImageSB(android::DefaultKeyedVector<long, android::sp<NSCam::v3::IImageStreamInfo> > const&, android::DefaultKeyedVector<long, android::sp<NSCam::v3::IImageStreamBuffer> > const&, NSCam::v3::IPipelineBufferSetFrameControl*) const */
int _ZNK5NSCam2v317NSPipelineContext29update_streambuffers_to_frame16updateHalImageSBERKN7android18DefaultKeyedVectorIlNS3_2spINS0_16IImageStreamInfoEEEEERKNS4_IlNS5_INS0_18IImageStreamBufferEEEEEPNS0_30IPipelineBufferSetFrameControlE(void);

/* Symbol: __addtf3 */
/* Demangled: __addtf3 */
int __addtf3(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, int> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext14DispatcherBase21onNextCaptureCallBackEjlji */
/* Demangled: NSCam::v3::NSPipelineContext::DispatcherBase::onNextCaptureCallBack(unsigned int, long, unsigned int, int) */
int _ZN5NSCam2v317NSPipelineContext14DispatcherBase21onNextCaptureCallBackEjlji(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext11ContextNodeEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineContext::ContextNode> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext11ContextNodeEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNSt3__16vectorINS_6futureIiEENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::future<int>, std::__1::allocator<std::__1::future<int> > >::__push_back_slow_path<std::__1::future<int> >(std::__1::future<int>&&) */
int _ZNSt3__16vectorINS_6futureIiEENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void);

/* Symbol: _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp14getPipelineDAGEv */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::getPipelineDAG() const */
int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp14getPipelineDAGEv(void);

/* Symbol: createNodeActor */
/* Demangled: createNodeActor */
int createNodeActor(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext5queueERKNSt3__16vectorIN7android2spINS0_14IPipelineFrameEEENS3_9allocatorIS8_EEEE */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::queue(std::__1::vector<android::sp<NSCam::v3::IPipelineFrame>, std::__1::allocator<android::sp<NSCam::v3::IPipelineFrame> > > const&) */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext5queueERKNSt3__16vectorIN7android2spINS0_14IPipelineFrameEEENS3_9allocatorIS8_EEEE(void);

/* Symbol: _ZTVNSt3__119__async_assoc_stateIiNS_12__async_funcIPFiN7android2spIN5NSCam2v317NSPipelineContext10INodeActorEEENS3_INS5_23INodeCallbackToPipelineEEEEJS8_SA_EEEEE */
/* Demangled: vtable for std::__1::__async_assoc_state<int, std::__1::__async_func<int (*)(android::sp<NSCam::v3::NSPipelineContext::INodeActor>, android::sp<NSCam::v3::INodeCallbackToPipeline>), android::sp<NSCam::v3::NSPipelineContext::INodeActor>, android::sp<NSCam::v3::INodeCallbackToPipeline> > > */
extern void* _ZTVNSt3__119__async_assoc_stateIiNS_12__async_funcIPFiN7android2spIN5NSCam2v317NSPipelineContext10INodeActorEEENS3_INS5_23INodeCallbackToPipelineEEEEJS8_SA_EEEEE;

/* Symbol: _ZNK7android6VectorIN5NSCam2v312IPipelineDAG8TNodeObjIllEEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::v3::IPipelineDAG::TNodeObj<long, long> >::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v312IPipelineDAG8TNodeObjIllEEE12do_constructEPvm(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > > > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE8__rehashEm(void);

/* Symbol: _ZN5NSCam2v315InFlightRequest24waitUntilNodeMetaDrainedEl */
/* Demangled: NSCam::v3::InFlightRequest::waitUntilNodeMetaDrained(long) */
int _ZN5NSCam2v315InFlightRequest24waitUntilNodeMetaDrainedEl(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContextC2EPKc */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContext(char const*) */
int _ZN5NSCam2v317NSPipelineContext15PipelineContextC2EPKc(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl6configEPS3_ii */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::config(NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl*, int, int) */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl6configEPS3_ii(void);

/* Symbol: _ZN5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEEC2EPKcRKS5_ */
/* Demangled: NSCam::v3::Utils::StreamBufferPoolImp<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator>::StreamBufferPoolImp(char const*, NSCam::v3::Utils::HalImageStreamBuffer::Allocator const&) */
int _ZN5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEEC2EPKcRKS5_(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineBuilder11setRootNodeERKNS0_3SetIlEE */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineBuilder::setRootNode(NSCam::v3::Set<long> const&) */
int _ZN5NSCam2v317NSPipelineContext15PipelineBuilder11setRootNodeERKNS0_3SetIlEE(void);

/* Symbol: _ZTVN7android6VectorIbEE */
/* Demangled: vtable for android::Vector<bool> */
extern void* _ZTVN7android6VectorIbEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZNK5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl9queryNodeEl */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::queryNode(long) const */
int _ZNK5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl9queryNodeEl(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE10do_compareEPKvSA_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE10do_compareEPKvSA_(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp10NodeStatusEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::NodeStatus> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp10NodeStatusEEEEEEE;

/* Symbol: _ZTv0_n88_N5NSCam2v317NSPipelineContext14DispatcherBase21onNextCaptureCallBackEjlji */
/* Demangled: virtual thunk to NSCam::v3::NSPipelineContext::DispatcherBase::onNextCaptureCallBack(unsigned int, long, unsigned int, int) */
int _ZTv0_n88_N5NSCam2v317NSPipelineContext14DispatcherBase21onNextCaptureCallBackEjlji(void);

/* Symbol: _ZNK5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEE8dumpPoolEv */
/* Demangled: NSCam::v3::Utils::StreamBufferPoolImp<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator>::dumpPool() const */
int _ZNK5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEE8dumpPoolEv(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl10buildFrameEPNS1_16FrameBuilderImplE */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::buildFrame(NSCam::v3::NSPipelineContext::FrameBuilderImpl*) */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl10buildFrameEPNS1_16FrameBuilderImplE(void);

/* Symbol: _ZNK5NSCam2v317NSPipelineContext15PipelineContext15queryINodeActorEl */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::queryINodeActor(long) const */
int _ZNK5NSCam2v317NSPipelineContext15PipelineContext15queryINodeActorEl(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v313IPipelineNodeEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<android::sp<NSCam::v3::IPipelineNode> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v313IPipelineNodeEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: __gttf2 */
/* Demangled: __gttf2 */
int __gttf2(void);

/* Symbol: _ZN5NSCam2v328PipelineFrameNumberGeneratorC2Ev */
/* Demangled: NSCam::v3::PipelineFrameNumberGenerator::PipelineFrameNumberGenerator() */
int _ZN5NSCam2v328PipelineFrameNumberGeneratorC2Ev(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext18RequestBuilderImpl5buildEN7android2spINS1_16IPipelineContextEEERKNSt3__16vectorINS7_10shared_ptrINS1_13IFrameBuilderEEENS7_9allocatorISB_EEEE */
/* Demangled: NSCam::v3::NSPipelineContext::RequestBuilderImpl::build(android::sp<NSCam::v3::NSPipelineContext::IPipelineContext>, std::__1::vector<std::__1::shared_ptr<NSCam::v3::NSPipelineContext::IFrameBuilder>, std::__1::allocator<std::__1::shared_ptr<NSCam::v3::NSPipelineContext::IFrameBuilder> > > const&) */
int _ZN5NSCam2v317NSPipelineContext18RequestBuilderImpl5buildEN7android2spINS1_16IPipelineContextEEERKNSt3__16vectorINS7_10shared_ptrINS1_13IFrameBuilderEEENS7_9allocatorISB_EEEE(void);

/* Symbol: __unordtf2 */
/* Demangled: __unordtf2 */
int __unordtf2(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam2v312IPipelineDAG8TNodeObjIllEEEE */
/* Demangled: vtable for android::Vector<NSCam::v3::IPipelineDAG::TNodeObj<long, long> > */
extern void* _ZTVN7android6VectorIN5NSCam2v312IPipelineDAG8TNodeObjIllEEEE;

/* Symbol: _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp23getPipelineNodeCallbackEv */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::getPipelineNodeCallback() const */
int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp23getPipelineNodeCallbackEv(void);

/* Symbol: _ZNK5NSCam2v317NSPipelineContext29update_streambuffers_to_frame15updateAppMetaSBERKN7android18DefaultKeyedVectorIlNS3_2spINS0_15IMetaStreamInfoEEEEERKNS4_IlNS5_INS0_17IMetaStreamBufferEEEEEPNS0_30IPipelineBufferSetFrameControlE */
/* Demangled: NSCam::v3::NSPipelineContext::update_streambuffers_to_frame::updateAppMetaSB(android::DefaultKeyedVector<long, android::sp<NSCam::v3::IMetaStreamInfo> > const&, android::DefaultKeyedVector<long, android::sp<NSCam::v3::IMetaStreamBuffer> > const&, NSCam::v3::IPipelineBufferSetFrameControl*) const */
int _ZNK5NSCam2v317NSPipelineContext29update_streambuffers_to_frame15updateAppMetaSBERKN7android18DefaultKeyedVectorIlNS3_2spINS0_15IMetaStreamInfoEEEEERKNS4_IlNS5_INS0_17IMetaStreamBufferEEEEEPNS0_30IPipelineBufferSetFrameControlE(void);

/* Symbol: _ZNSt3__124__make_async_assoc_stateIiNS_12__async_funcIPFiN7android2spIN5NSCam2v317NSPipelineContext10INodeActorEEENS3_INS5_23INodeCallbackToPipelineEEEEJS8_SA_EEEEENS_6futureIT_EEOT0_ */
/* Demangled: std::__1::future<int> std::__1::__make_async_assoc_state<int, std::__1::__async_func<int (*)(android::sp<NSCam::v3::NSPipelineContext::INodeActor>, android::sp<NSCam::v3::INodeCallbackToPipeline>), android::sp<NSCam::v3::NSPipelineContext::INodeActor>, android::sp<NSCam::v3::INodeCallbackToPipeline> > >(std::__1::__async_func<int (*)(android::sp<NSCam::v3::NSPipelineContext::INodeActor>, android::sp<NSCam::v3::INodeCallbackToPipeline>), android::sp<NSCam::v3::NSPipelineContext::INodeActor>, android::sp<NSCam::v3::INodeCallbackToPipeline> >&&) */
int _ZNSt3__124__make_async_assoc_stateIiNS_12__async_funcIPFiN7android2spIN5NSCam2v317NSPipelineContext10INodeActorEEENS3_INS5_23INodeCallbackToPipelineEEEEJS8_SA_EEEEENS_6futureIT_EEOT0_(void);

/* Symbol: _ZTVN5NSCam2v317NSPipelineContext14DispatcherBaseE */
/* Demangled: vtable for NSCam::v3::NSPipelineContext::DispatcherBase */
extern void* _ZTVN5NSCam2v317NSPipelineContext14DispatcherBaseE;

/* Symbol: _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp16getStreamInfoSetEv */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::getStreamInfoSet() const */
int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp16getStreamInfoSetEv(void);

/* Symbol: _ZTVN7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEEE */
/* Demangled: vtable for android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> > */
extern void* _ZTVN7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEEE;

/* Symbol: _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::IOMap>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE7do_copyEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v312IPipelineDAG8TNodeObjIllEEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::IPipelineDAG::TNodeObj<long, long> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v312IPipelineDAG8TNodeObjIllEEE7do_copyEPvPKvm(void);

/* Symbol: _ZTVN5NSCam2v35Utils21IStreamInfoSetControl3SetINS0_16IImageStreamInfoEEE */
/* Demangled: vtable for NSCam::v3::Utils::IStreamInfoSetControl::Set<NSCam::v3::IImageStreamInfo> */
extern void* _ZTVN5NSCam2v35Utils21IStreamInfoSetControl3SetINS0_16IImageStreamInfoEEE;

/* Symbol: _ZNK7android6VectorIjE8do_splatEPvPKvm */
/* Demangled: android::Vector<unsigned int>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIjE8do_splatEPvPKvm(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl17replaceStreamInfoElN7android2spINS0_16IImageStreamInfoEEE */
/* Demangled: NSCam::v3::NSPipelineContext::FrameBuilderImpl::replaceStreamInfo(long, android::sp<NSCam::v3::IImageStreamInfo>) */
int _ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl17replaceStreamInfoElN7android2spINS0_16IImageStreamInfoEEE(void);

/* Symbol: _ZNK7android12SortedVectorIlE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<long>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorIlE7do_copyEPvPKvm(void);

/* Symbol: _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS0_17IMetaStreamBufferEE14usersManagerAtEm */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalMetaStreamBufferT, NSCam::v3::IMetaStreamBuffer>::usersManagerAt(unsigned long) const */
int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS0_17IMetaStreamBufferEE14usersManagerAtEm(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext11NodeBuilderC1ERKS2_ */
/* Demangled: NSCam::v3::NSPipelineContext::NodeBuilder::NodeBuilder(NSCam::v3::NSPipelineContext::NodeBuilder const&) */
int _ZN5NSCam2v317NSPipelineContext11NodeBuilderC1ERKS2_(void);

/* Symbol: _ZNK7android6VectorIbE12do_constructEPvm */
/* Demangled: android::Vector<bool>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIbE12do_constructEPvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp10NodeStatusEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::NodeStatus> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp10NodeStatusEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZTv0_n64_N5NSCam2v317NSPipelineContext14DispatcherBase12onCtrlResizeEjllRNS_9IMetadataElS4_Ri */
/* Demangled: virtual thunk to NSCam::v3::NSPipelineContext::DispatcherBase::onCtrlResize(unsigned int, long, long, NSCam::IMetadata&, long, NSCam::IMetadata&, int&) */
int _ZTv0_n64_N5NSCam2v317NSPipelineContext14DispatcherBase12onCtrlResizeEjllRNS_9IMetadataElS4_Ri(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext20waitUntilNodeDrainedEl */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::waitUntilNodeDrained(long) */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext20waitUntilNodeDrainedEl(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIljEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, unsigned int> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIljEEE7do_copyEPvPKvm(void);

/* Symbol: _ZTVN5NSCam2v35Utils21IStreamInfoSetControl3SetINS0_15IMetaStreamInfoEEE */
/* Demangled: vtable for NSCam::v3::Utils::IStreamInfoSetControl::Set<NSCam::v3::IMetaStreamInfo> */
extern void* _ZTVN5NSCam2v35Utils21IStreamInfoSetControl3SetINS0_15IMetaStreamInfoEEE;

/* Symbol: _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp15queryGroupUsageEll */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::queryGroupUsage(long, long) const */
int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp15queryGroupUsageEll(void);

/* Symbol: _ZTCN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImpE0_NS0_14IPipelineFrameE */
/* Demangled: construction vtable for NSCam::v3::IPipelineFrame-in-NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp */
extern void* _ZTCN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImpE0_NS0_14IPipelineFrameE;

/* Symbol: _ZNKSt3__110__function6__funcIPFvN7android2spIN5NSCam2v317NSPipelineContext10INodeActorEEEENS_9allocatorISA_EES9_E7__cloneEPNS0_6__baseIS9_EE */
/* Demangled: std::__1::__function::__func<void (*)(android::sp<NSCam::v3::NSPipelineContext::INodeActor>), std::__1::allocator<void (*)(android::sp<NSCam::v3::NSPipelineContext::INodeActor>)>, void (android::sp<NSCam::v3::NSPipelineContext::INodeActor>)>::__clone(std::__1::__function::__base<void (android::sp<NSCam::v3::NSPipelineContext::INodeActor>)>*) const */
int _ZNKSt3__110__function6__funcIPFvN7android2spIN5NSCam2v317NSPipelineContext10INodeActorEEEENS_9allocatorISA_EES9_E7__cloneEPNS0_6__baseIS9_EE(void);

/* Symbol: _ZTVN7android12SortedVectorIlEE */
/* Demangled: vtable for android::SortedVector<long> */
extern void* _ZTVN7android12SortedVectorIlEE;

/* Symbol: _ZNK7android6VectorIN5NSCam2v314IPipelineFrame13MetaInfoIOMapEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::v3::IPipelineFrame::MetaInfoIOMap>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v314IPipelineFrame13MetaInfoIOMapEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android6VectorIjE10do_destroyEPvm */
/* Demangled: android::Vector<unsigned int>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIjE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext15onLastStrongRefEPKv */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::onLastStrongRef(void const*) */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext15onLastStrongRefEPKv(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl8endFlushEv */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::endFlush() */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl8endFlushEv(void);

/* Symbol: _ZNKSt3__110__function6__funcIPFvN7android2spIN5NSCam2v317NSPipelineContext10INodeActorEEEENS_9allocatorISA_EES9_E7__cloneEv */
/* Demangled: std::__1::__function::__func<void (*)(android::sp<NSCam::v3::NSPipelineContext::INodeActor>), std::__1::allocator<void (*)(android::sp<NSCam::v3::NSPipelineContext::INodeActor>)>, void (android::sp<NSCam::v3::NSPipelineContext::INodeActor>)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFvN7android2spIN5NSCam2v317NSPipelineContext10INodeActorEEEENS_9allocatorISA_EES9_E7__cloneEv(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandlerC1EjN7android2spIS3_EE */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::InitFrameHandler::InitFrameHandler(unsigned int, android::sp<NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl>) */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandlerC1EjN7android2spIS3_EE(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEEE */
/* Demangled: vtable for android::Vector<NSCam::v3::NSPipelineContext::NodeEdge> */
extern void* _ZTVN7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEEE;

/* Symbol: _ZN5NSCam2v317NSPipelineContext10NodeConfig19setImageStreamUsageElRKN7android18DefaultKeyedVectorIljEE */
/* Demangled: NSCam::v3::NSPipelineContext::NodeConfig::setImageStreamUsage(long, android::DefaultKeyedVector<long, unsigned int> const&) */
int _ZN5NSCam2v317NSPipelineContext10NodeConfig19setImageStreamUsageElRKN7android18DefaultKeyedVectorIljEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_18DefaultKeyedVectorIljEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::DefaultKeyedVector<long, unsigned int> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_18DefaultKeyedVectorIljEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS0_18IImageStreamBufferEE12streamInfoAtEm */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalImageStreamBufferT, NSCam::v3::IImageStreamBuffer>::streamInfoAt(unsigned long) const */
int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS0_18IImageStreamBufferEE12streamInfoAtEm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, std::__1::vector<android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamBuffer> > > > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v317NSPipelineContext8IOMapSetEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::NSPipelineContext::IOMapSet> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v317NSPipelineContext8IOMapSetEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE12do_constructEPvm(void);

/* Symbol: _ZThn8_N5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_18IImageStreamBufferES3_E3addEN7android2spINS0_16IImageStreamInfoEEENS6_INS0_13IUsersManagerEEE */
/* Demangled: non-virtual thunk to NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IImageStreamBuffer, NSCam::v3::IImageStreamBuffer>::add(android::sp<NSCam::v3::IImageStreamInfo>, android::sp<NSCam::v3::IUsersManager>) */
int _ZThn8_N5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_18IImageStreamBufferES3_E3addEN7android2spINS0_16IImageStreamInfoEEENS6_INS0_13IUsersManagerEEE(void);

/* Symbol: _ZThn8_NK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp14getImageBufferEll */
/* Demangled: non-virtual thunk to NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::getImageBuffer(long, long) const */
int _ZThn8_NK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp14getImageBufferEll(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandlerD1Ev */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::InitFrameHandler::~InitFrameHandler() */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandlerD1Ev(void);

/* Symbol: _ZNK5NSCam2v317NSPipelineContext15PipelineContext7getImplEv */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::getImpl() const */
int _ZNK5NSCam2v317NSPipelineContext15PipelineContext7getImplEv(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl12updateConfigEPNS1_15NodeBuilderImplE */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::updateConfig(NSCam::v3::NSPipelineContext::NodeBuilderImpl*) */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl12updateConfigEPNS1_15NodeBuilderImplE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext11ContextNodeEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineContext::ContextNode> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext11ContextNodeEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext13StreamBuilderD2Ev */
/* Demangled: NSCam::v3::NSPipelineContext::StreamBuilder::~StreamBuilder() */
int _ZN5NSCam2v317NSPipelineContext13StreamBuilderD2Ev(void);

/* Symbol: _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp18createAcquireFenceEll */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::createAcquireFence(long, long) const */
int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp18createAcquireFenceEll(void);

/* Symbol: _ZN7android2spIKN5NSCam2v316IPipelineNodeMapEEC2INS2_23IPipelineNodeMapControlEEEPT_ */
/* Demangled: android::sp<NSCam::v3::IPipelineNodeMap const>::sp<NSCam::v3::IPipelineNodeMapControl>(NSCam::v3::IPipelineNodeMapControl*) */
int _ZN7android2spIKN5NSCam2v316IPipelineNodeMapEEC2INS2_23IPipelineNodeMapControlEEEPT_(void);

/* Symbol: _ZNSt3__110__function6__funcIPFvN7android2spIN5NSCam2v317NSPipelineContext10INodeActorEEEENS_9allocatorISA_EES9_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<void (*)(android::sp<NSCam::v3::NSPipelineContext::INodeActor>), std::__1::allocator<void (*)(android::sp<NSCam::v3::NSPipelineContext::INodeActor>)>, void (android::sp<NSCam::v3::NSPipelineContext::INodeActor>)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFvN7android2spIN5NSCam2v317NSPipelineContext10INodeActorEEEENS_9allocatorISA_EES9_E18destroy_deallocateEv(void);

/* Symbol: _ZNSt3__16vectorIN7android2spIN5NSCam2v314IPipelineFrameEEENS_9allocatorIS6_EEE7reserveEm */
/* Demangled: std::__1::vector<android::sp<NSCam::v3::IPipelineFrame>, std::__1::allocator<android::sp<NSCam::v3::IPipelineFrame> > >::reserve(unsigned long) */
int _ZNSt3__16vectorIN7android2spIN5NSCam2v314IPipelineFrameEEENS_9allocatorIS6_EEE7reserveEm(void);

/* Symbol: _ZTVN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS0_18IImageStreamBufferEE4ItemE */
/* Demangled: vtable for NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalImageStreamBufferT, NSCam::v3::IImageStreamBuffer>::Item */
extern void* _ZTVN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS0_18IImageStreamBufferEE4ItemE;

/* Symbol: _ZNSt3__16vectorIN7android2spIN5NSCam2v314IPipelineFrameEEENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<NSCam::v3::IPipelineFrame>, std::__1::allocator<android::sp<NSCam::v3::IPipelineFrame> > >::__push_back_slow_path<android::sp<NSCam::v3::IPipelineFrame> const&>(android::sp<NSCam::v3::IPipelineFrame> const&) */
int _ZNSt3__16vectorIN7android2spIN5NSCam2v314IPipelineFrameEEENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void);

/* Symbol: _ZNSt3__114__thread_proxyINS_5tupleIJNS_10unique_ptrINS_15__thread_structENS_14default_deleteIS3_EEEEMN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandlerEFvNS_10shared_ptrISC_EENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEESE_SE_PKcEEEEEPvSQ_ */
/* Demangled: void* std::__1::__thread_proxy<std::__1::tuple<std::__1::unique_ptr<std::__1::__thread_struct, std::__1::default_delete<std::__1::__thread_struct> >, void (NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::InitFrameHandler::*)(std::__1::shared_ptr<NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::InitFrameHandler>, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >), std::__1::shared_ptr<NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::InitFrameHandler>, std::__1::shared_ptr<NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::InitFrameHandler>, char const*> >(void*) */
int _ZNSt3__114__thread_proxyINS_5tupleIJNS_10unique_ptrINS_15__thread_structENS_14default_deleteIS3_EEEEMN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandlerEFvNS_10shared_ptrISC_EENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEESE_SE_PKcEEEEEPvSQ_(void);

/* Symbol: _ZTVN7android6VectorIjEE */
/* Demangled: vtable for android::Vector<unsigned int> */
extern void* _ZTVN7android6VectorIjEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamBuffer> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEEE */
/* Demangled: vtable for android::Vector<NSCam::v3::NSPipelineContext::IOMap> */
extern void* _ZTVN7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_18DefaultKeyedVectorIljEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::DefaultKeyedVector<long, unsigned int> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_18DefaultKeyedVectorIljEEEEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, std::__1::vector<android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamBuffer> > > > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev */
/* Demangled: std::__1::__vector_base<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::~__vector_base() */
int _ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev(void);

/* Symbol: _ZThn8_NK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS0_18IImageStreamBufferEE14usersManagerAtEm */
/* Demangled: non-virtual thunk to NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalImageStreamBufferT, NSCam::v3::IImageStreamBuffer>::usersManagerAt(unsigned long) const */
int _ZThn8_NK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS0_18IImageStreamBufferEE14usersManagerAtEm(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEEE;

/* Symbol: _ZNK7android6VectorIN5NSCam2v314IPipelineFrame14ImageInfoIOMapEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::v3::IPipelineFrame::ImageInfoIOMap>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v314IPipelineFrame14ImageInfoIOMapEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandler4makeEjN7android2spIS3_EE */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::InitFrameHandler::make(unsigned int, android::sp<NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl>) */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandler4makeEjN7android2spIS3_EE(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceINS_5mutexENS_9allocatorIS1_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<std::__1::mutex, std::__1::allocator<std::__1::mutex> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceINS_5mutexENS_9allocatorIS1_EEEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext11ContextNodeEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineContext::ContextNode> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext11ContextNodeEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandler9dumpStateERN7android7PrinterE */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::InitFrameHandler::dumpState(android::Printer&) */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandler9dumpStateERN7android7PrinterE(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext9magicNameEv */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::magicName() */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext9magicNameEv(void);

/* Symbol: _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS0_18IImageStreamBufferEE18onAllUsersReleasedERNS5_4ItemE */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalImageStreamBufferT, NSCam::v3::IImageStreamBuffer>::onAllUsersReleased(NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalImageStreamBufferT, NSCam::v3::IImageStreamBuffer>::Item&) */
int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS0_18IImageStreamBufferEE18onAllUsersReleasedERNS5_4ItemE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp10NodeStatusEEEEEE10do_compareEPKvSC_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::NodeStatus> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp10NodeStatusEEEEEE10do_compareEPKvSC_(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext18RequestBuilderImpl5buildEN7android2spINS1_16IPipelineContextEEERKNSt3__110shared_ptrINS1_13IFrameBuilderEEE */
/* Demangled: NSCam::v3::NSPipelineContext::RequestBuilderImpl::build(android::sp<NSCam::v3::NSPipelineContext::IPipelineContext>, std::__1::shared_ptr<NSCam::v3::NSPipelineContext::IFrameBuilder> const&) */
int _ZN5NSCam2v317NSPipelineContext18RequestBuilderImpl5buildEN7android2spINS1_16IPipelineContextEEERKNSt3__110shared_ptrINS1_13IFrameBuilderEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamBuffer> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZNK5NSCam2v317NSPipelineContext29update_streambuffers_to_frame15updateHalMetaSBERKN7android18DefaultKeyedVectorIlNS3_2spINS0_15IMetaStreamInfoEEEEERKNS4_IlNS5_INS0_17IMetaStreamBufferEEEEEPNS0_30IPipelineBufferSetFrameControlE */
/* Demangled: NSCam::v3::NSPipelineContext::update_streambuffers_to_frame::updateHalMetaSB(android::DefaultKeyedVector<long, android::sp<NSCam::v3::IMetaStreamInfo> > const&, android::DefaultKeyedVector<long, android::sp<NSCam::v3::IMetaStreamBuffer> > const&, NSCam::v3::IPipelineBufferSetFrameControl*) const */
int _ZNK5NSCam2v317NSPipelineContext29update_streambuffers_to_frame15updateHalMetaSBERKN7android18DefaultKeyedVectorIlNS3_2spINS0_15IMetaStreamInfoEEEEERKNS4_IlNS5_INS0_17IMetaStreamBufferEEEEEPNS0_30IPipelineBufferSetFrameControlE(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v313IPipelineNodeEEEE7do_copyEPvPKvm */
/* Demangled: android::Vector<android::sp<NSCam::v3::IPipelineNode> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v313IPipelineNodeEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp14attachListenerERKN7android2wpINS0_22IPipelineFrameListenerEEEPv */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::attachListener(android::wp<NSCam::v3::IPipelineFrameListener> const&, void*) */
int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp14attachListenerERKN7android2wpINS0_22IPipelineFrameListenerEEEPv(void);

/* Symbol: _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS0_17IMetaStreamBufferEE18onAllUsersReleasedERNS5_4ItemE */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalMetaStreamBufferT, NSCam::v3::IMetaStreamBuffer>::onAllUsersReleased(NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalMetaStreamBufferT, NSCam::v3::IMetaStreamBuffer>::Item&) */
int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS0_17IMetaStreamBufferEE18onAllUsersReleasedERNS5_4ItemE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v317NSPipelineContext8IOMapSetEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::NSPipelineContext::IOMapSet> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v317NSPipelineContext8IOMapSetEEEE10do_destroyEPvm(void);

/* Symbol: _ZNSt3__114__thread_proxyINS_5tupleIJNS_10unique_ptrINS_15__thread_structENS_14default_deleteIS3_EEEEMNS_19__async_assoc_stateIiNS_12__async_funcIPFiN7android2spIN5NSCam2v317NSPipelineContext10INodeActorEEENSA_INSC_23INodeCallbackToPipelineEEEEJSF_SH_EEEEEFvvEPSL_EEEEEPvSQ_ */
/* Demangled: void* std::__1::__thread_proxy<std::__1::tuple<std::__1::unique_ptr<std::__1::__thread_struct, std::__1::default_delete<std::__1::__thread_struct> >, void (std::__1::__async_assoc_state<int, std::__1::__async_func<int (*)(android::sp<NSCam::v3::NSPipelineContext::INodeActor>, android::sp<NSCam::v3::INodeCallbackToPipeline>), android::sp<NSCam::v3::NSPipelineContext::INodeActor>, android::sp<NSCam::v3::INodeCallbackToPipeline> > >::*)(), std::__1::__async_assoc_state<int, std::__1::__async_func<int (*)(android::sp<NSCam::v3::NSPipelineContext::INodeActor>, android::sp<NSCam::v3::INodeCallbackToPipeline>), android::sp<NSCam::v3::NSPipelineContext::INodeActor>, android::sp<NSCam::v3::INodeCallbackToPipeline> > >*> >(void*) */
int _ZNSt3__114__thread_proxyINS_5tupleIJNS_10unique_ptrINS_15__thread_structENS_14default_deleteIS3_EEEEMNS_19__async_assoc_stateIiNS_12__async_funcIPFiN7android2spIN5NSCam2v317NSPipelineContext10INodeActorEEENSA_INSC_23INodeCallbackToPipelineEEEEJSF_SH_EEEEEFvvEPSL_EEEEEPvSQ_(void);

/* Symbol: __letf2 */
/* Demangled: __letf2 */
int __letf2(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v314IPipelineFrame14ImageInfoIOMapEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::IPipelineFrame::ImageInfoIOMap>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v314IPipelineFrame14ImageInfoIOMapEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZTTN5NSCam2v328PipelineFrameNumberGeneratorE */
/* Demangled: VTT for NSCam::v3::PipelineFrameNumberGenerator */
extern void* _ZTTN5NSCam2v328PipelineFrameNumberGeneratorE;

/* Symbol: _ZTVN7android4ListIjEE */
/* Demangled: vtable for android::List<unsigned int> */
extern void* _ZTVN7android4ListIjEE;

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandler7enqueueERKN7android2spINS0_14IPipelineFrameEEE */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::InitFrameHandler::enqueue(android::sp<NSCam::v3::IPipelineFrame> const&) */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandler7enqueueERKN7android2spINS0_14IPipelineFrameEEE(void);

/* Symbol: _ZN5NSCam2v328PipelineFrameNumberGeneratorC1Ev */
/* Demangled: NSCam::v3::PipelineFrameNumberGenerator::PipelineFrameNumberGenerator() */
int _ZN5NSCam2v328PipelineFrameNumberGeneratorC1Ev(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext13StreamBuilderC1ENS1_11eStreamTypeEN7android2spINS0_16IImageStreamInfoEEE */
/* Demangled: NSCam::v3::NSPipelineContext::StreamBuilder::StreamBuilder(NSCam::v3::NSPipelineContext::eStreamType, android::sp<NSCam::v3::IImageStreamInfo>) */
int _ZN5NSCam2v317NSPipelineContext13StreamBuilderC1ENS1_11eStreamTypeEN7android2spINS0_16IImageStreamInfoEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_4ListIjEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::List<unsigned int> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_4ListIjEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl10beginFlushEv */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::beginFlush() */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl10beginFlushEv(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext11NodeBuilderC2ElN7android2spINS1_10INodeActorEEE */
/* Demangled: NSCam::v3::NSPipelineContext::NodeBuilder::NodeBuilder(long, android::sp<NSCam::v3::NSPipelineContext::INodeActor>) */
int _ZN5NSCam2v317NSPipelineContext11NodeBuilderC2ElN7android2spINS1_10INodeActorEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_18IImageStreamBufferES7_E4ItemEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IImageStreamBuffer, NSCam::v3::IImageStreamBuffer>::Item> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_18IImageStreamBufferES7_E4ItemEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_18DefaultKeyedVectorIljEEEEE10do_compareEPKvS7_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::DefaultKeyedVector<long, unsigned int> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_18DefaultKeyedVectorIljEEEEE10do_compareEPKvS7_(void);

/* Symbol: _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp18getStreamBufferSetEv */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::getStreamBufferSet() const */
int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp18getStreamBufferSetEv(void);

/* Symbol: _ZThn8_N5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS0_18IImageStreamBufferEE3addEN7android2spIS4_EE */
/* Demangled: non-virtual thunk to NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalImageStreamBufferT, NSCam::v3::IImageStreamBuffer>::add(android::sp<NSCam::v3::IImageStreamBuffer>) */
int _ZThn8_N5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS0_18IImageStreamBufferEE3addEN7android2spIS4_EE(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl9dumpStateERN7android7PrinterERKNSt3__16vectorINS7_12basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEENSC_ISE_EEEE */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::dumpState(android::Printer&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl9dumpStateERN7android7PrinterERKNSt3__16vectorINS7_12basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEENSC_ISE_EEEE(void);

/* Symbol: _ZTVN5NSCam2v317NSPipelineContext10NodeConfigE */
/* Demangled: vtable for NSCam::v3::NSPipelineContext::NodeConfig */
extern void* _ZTVN5NSCam2v317NSPipelineContext10NodeConfigE;

/* Symbol: __fe_getround */
/* Demangled: __fe_getround */
int __fe_getround(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v314IPipelineFrame14ImageInfoIOMapEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::IPipelineFrame::ImageInfoIOMap>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v314IPipelineFrame14ImageInfoIOMapEE8do_splatEPvPKvm(void);

/* Symbol: _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_18IImageStreamBufferES3_E3addEN7android2spINS0_16IImageStreamInfoEEENS6_INS0_13IUsersManagerEEE */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IImageStreamBuffer, NSCam::v3::IImageStreamBuffer>::add(android::sp<NSCam::v3::IImageStreamInfo>, android::sp<NSCam::v3::IUsersManager>) */
int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_18IImageStreamBufferES3_E3addEN7android2spINS0_16IImageStreamInfoEEENS6_INS0_13IUsersManagerEEE(void);

/* Symbol: _ZTVN5NSCam2v317NSPipelineContext15PipelineContextE */
/* Demangled: vtable for NSCam::v3::NSPipelineContext::PipelineContext */
extern void* _ZTVN5NSCam2v317NSPipelineContext15PipelineContextE;

/* Symbol: _ZNSt3__113__assoc_stateIiE4moveEv */
/* Demangled: std::__1::__assoc_state<int>::move() */
int _ZNSt3__113__assoc_stateIiE4moveEv(void);

/* Symbol: _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp9dumpStateERN7android7PrinterERKNSt3__16vectorINS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEENSB_ISD_EEEE */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::dumpState(android::Printer&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) const */
int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp9dumpStateERN7android7PrinterERKNSt3__16vectorINS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEENSB_ISD_EEEE(void);

/* Symbol: _ZN5NSCam2v328PipelineFrameNumberGenerator15generateFrameNoEv */
/* Demangled: NSCam::v3::PipelineFrameNumberGenerator::generateFrameNo() */
int _ZN5NSCam2v328PipelineFrameNumberGenerator15generateFrameNoEv(void);

/* Symbol: _ZNK5NSCam2v317NSPipelineContext14PipelineConfig9dumpStateERN7android7PrinterE */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineConfig::dumpState(android::Printer&) const */
int _ZNK5NSCam2v317NSPipelineContext14PipelineConfig9dumpStateERN7android7PrinterE(void);

/* Symbol: _ZTVN5NSCam2v317NSPipelineContext15NodeBuilderImplE */
/* Demangled: vtable for NSCam::v3::NSPipelineContext::NodeBuilderImpl */
extern void* _ZTVN5NSCam2v317NSPipelineContext15NodeBuilderImplE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp10NodeStatusEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::NodeStatus> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp10NodeStatusEEEEEE12do_constructEPvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_18IImageStreamBufferES7_E4ItemEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IImageStreamBuffer, NSCam::v3::IImageStreamBuffer>::Item> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_18IImageStreamBufferES7_E4ItemEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE8do_splatEPvPKvm */
/* Demangled: android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZTVN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS0_18IImageStreamBufferEEE */
/* Demangled: vtable for NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalImageStreamBufferT, NSCam::v3::IImageStreamBuffer> */
extern void* _ZTVN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS0_18IImageStreamBufferEEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIljEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, unsigned int> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIljEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v312IPipelineDAG8TNodeObjIllEEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::v3::IPipelineDAG::TNodeObj<long, long> >::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v312IPipelineDAG8TNodeObjIllEEE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp12logDebugInfoEONSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::logDebugInfo(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&) */
int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp12logDebugInfoEONSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS4_17IMetaStreamBufferEE4ItemEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalMetaStreamBufferT, NSCam::v3::IMetaStreamBuffer>::Item> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS4_17IMetaStreamBufferEE4ItemEEEEEEE;

/* Symbol: _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::NodeEdge>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorINS_7String8EE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<android::String8>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_7String8EE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext9dumpStateERN7android7PrinterERKNSt3__16vectorINS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEENSB_ISD_EEEE */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::dumpState(android::Printer&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext9dumpStateERN7android7PrinterERKNSt3__16vectorINS6_12basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEENSB_ISD_EEEE(void);

/* Symbol: _ZNK7android6VectorIjE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<unsigned int>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIjE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamBuffer> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v313IPipelineNodeEEEE12do_constructEPvm */
/* Demangled: android::Vector<android::sp<NSCam::v3::IPipelineNode> >::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v313IPipelineNodeEEEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext13StreamBuilderC2ENS1_11eStreamTypeEN7android2spINS0_15IMetaStreamInfoEEE */
/* Demangled: NSCam::v3::NSPipelineContext::StreamBuilder::StreamBuilder(NSCam::v3::NSPipelineContext::eStreamType, android::sp<NSCam::v3::IMetaStreamInfo>) */
int _ZN5NSCam2v317NSPipelineContext13StreamBuilderC2ENS1_11eStreamTypeEN7android2spINS0_15IMetaStreamInfoEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5NSCam2v323IPipelineNodeMapControl6createEv */
/* Demangled: NSCam::v3::IPipelineNodeMapControl::create() */
int _ZN5NSCam2v323IPipelineNodeMapControl6createEv(void);

/* Symbol: _ZNSt3__14listIN7android2spIN5NSCam2v318IImageStreamBufferEEENS_9allocatorIS6_EEE6assignINS_21__list_const_iteratorIS6_PvEEEEvT_SE_PNS_9enable_ifIXsr19__is_input_iteratorISE_EE5valueEvE4typeE */
/* Demangled: _ZNSt3__14listIN7android2spIN5NSCam2v318IImageStreamBufferEEENS_9allocatorIS6_EEE6assignINS_21__list_const_iteratorIS6_PvEEEEvT_SE_PNS_9enable_ifIXsr19__is_input_iteratorISE_EE5valueEvE4typeE */
int _ZNSt3__14listIN7android2spIN5NSCam2v318IImageStreamBufferEEENS_9allocatorIS6_EEE6assignINS_21__list_const_iteratorIS6_PvEEEEvT_SE_PNS_9enable_ifIXsr19__is_input_iteratorISE_EE5valueEvE4typeE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamBuffer> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::NodeEdge>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEE10uninitPoolEPKc */
/* Demangled: NSCam::v3::Utils::StreamBufferPoolImp<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator>::uninitPool(char const*) */
int _ZN5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEE10uninitPoolEPKc(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext13StreamBuilderD1Ev */
/* Demangled: NSCam::v3::NSPipelineContext::StreamBuilder::~StreamBuilder() */
int _ZN5NSCam2v317NSPipelineContext13StreamBuilderD1Ev(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE16__construct_nodeIJRKNS_4pairIKjS5_EEEEENS_10unique_ptrINS_11__hash_nodeIS6_PvEENS_22__hash_node_destructorINS3_ISQ_EEEEEEDpOT_ */
/* Demangled: std::__1::unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, void*>, std::__1::__hash_node_destructor<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, void*> > > > std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > > > >::__construct_node<std::__1::pair<unsigned int const, std::__1::vector<long, std::__1::allocator<long> > > const&>(std::__1::pair<unsigned int const, std::__1::vector<long, std::__1::allocator<long> > > const&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE16__construct_nodeIJRKNS_4pairIKjS5_EEEEENS_10unique_ptrINS_11__hash_nodeIS6_PvEENS_22__hash_node_destructorINS3_ISQ_EEEEEEDpOT_(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl19updateFrameCallbackEN7android2wpINS0_30IPipelineBufferSetFrameControl12IAppCallbackEEE */
/* Demangled: NSCam::v3::NSPipelineContext::FrameBuilderImpl::updateFrameCallback(android::wp<NSCam::v3::IPipelineBufferSetFrameControl::IAppCallback>) */
int _ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl19updateFrameCallbackEN7android2wpINS0_30IPipelineBufferSetFrameControl12IAppCallbackEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext12constructDAGEPKNS0_12IPipelineDAGERKNS0_3SetIlEERKNS1_11NodeEdgeSetE */
/* Demangled: NSCam::v3::NSPipelineContext::constructDAG(NSCam::v3::IPipelineDAG const*, NSCam::v3::Set<long> const&, NSCam::v3::NSPipelineContext::NodeEdgeSet const&) */
int _ZN5NSCam2v317NSPipelineContext12constructDAGEPKNS0_12IPipelineDAGERKNS0_3SetIlEERKNS1_11NodeEdgeSetE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig14ItemMetaStreamEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineContext::StreamConfig::ItemMetaStream> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig14ItemMetaStreamEEEEEE7do_copyEPvPKvm(void);

/* Symbol: __getf2 */
/* Demangled: __getf2 */
int __getf2(void);

/* Symbol: _ZNK7android6VectorIbE8do_splatEPvPKvm */
/* Demangled: android::Vector<bool>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIbE8do_splatEPvPKvm(void);

/* Symbol: _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp16getPipelineDAGSpEv */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::getPipelineDAGSp() */
int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp16getPipelineDAGSpEv(void);

/* Symbol: _ZNSt3__16vectorIlNS_9allocatorIlEEE6assignIPlEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIlNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
/* Demangled: _ZNSt3__16vectorIlNS_9allocatorIlEEE6assignIPlEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIlNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
int _ZNSt3__16vectorIlNS_9allocatorIlEEE6assignIPlEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIlNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS4_18IImageStreamBufferEE4ItemEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalImageStreamBufferT, NSCam::v3::IImageStreamBuffer>::Item> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS4_18IImageStreamBufferEE4ItemEEEEEEE;

/* Symbol: _ZThn8_NK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS0_17IMetaStreamBufferEE14usersManagerAtEm */
/* Demangled: non-virtual thunk to NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalMetaStreamBufferT, NSCam::v3::IMetaStreamBuffer>::usersManagerAt(unsigned long) const */
int _ZThn8_NK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS0_17IMetaStreamBufferEE14usersManagerAtEm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp27configureInformationKeepingERKNS0_30IPipelineBufferSetFrameControl33ConfigureInformationKeepingParamsE */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::configureInformationKeeping(NSCam::v3::IPipelineBufferSetFrameControl::ConfigureInformationKeepingParams const&) */
int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp27configureInformationKeepingERKNS0_30IPipelineBufferSetFrameControl33ConfigureInformationKeepingParamsE(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext10NodeConfig7addNodeElN7android2spINS1_11ContextNodeEEE */
/* Demangled: NSCam::v3::NSPipelineContext::NodeConfig::addNode(long, android::sp<NSCam::v3::NSPipelineContext::ContextNode>) */
int _ZN5NSCam2v317NSPipelineContext10NodeConfig7addNodeElN7android2spINS1_11ContextNodeEEE(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext29construct_FrameNodeMapControlclERNS2_6ParamsE */
/* Demangled: NSCam::v3::NSPipelineContext::construct_FrameNodeMapControl::operator()(NSCam::v3::NSPipelineContext::construct_FrameNodeMapControl::Params&) */
int _ZN5NSCam2v317NSPipelineContext29construct_FrameNodeMapControlclERNS2_6ParamsE(void);

/* Symbol: _ZTCN5NSCam2v35Utils16StreamBufferPoolINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEEE0_NS1_19StreamBufferPoolImpIS3_S4_S5_EE */
/* Demangled: construction vtable for NSCam::v3::Utils::StreamBufferPoolImp<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator>-in-NSCam::v3::Utils::StreamBufferPool<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator> */
extern void* _ZTCN5NSCam2v35Utils16StreamBufferPoolINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEEE0_NS1_19StreamBufferPoolImpIS3_S4_S5_EE;

/* Symbol: _ZTTN5NSCam2v317NSPipelineContext12StreamConfigE */
/* Demangled: VTT for NSCam::v3::NSPipelineContext::StreamConfig */
extern void* _ZTTN5NSCam2v317NSPipelineContext12StreamConfigE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE10do_compareEPKvS5_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, int> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE10do_compareEPKvS5_(void);

/* Symbol: _ZNK7android12SortedVectorIlE10do_destroyEPvm */
/* Demangled: android::SortedVector<long>::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorIlE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp18startConfigurationEv */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::startConfiguration() */
int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp18startConfigurationEv(void);

/* Symbol: _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp15getBufferLockedINS1_8TItemMapI21HalImageStreamBufferTNS0_18IImageStreamBufferEEEEEN7android2spINT_14IStreamBufferTEEEllRKSA_ */
/* Demangled: android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalImageStreamBufferT, NSCam::v3::IImageStreamBuffer>::IStreamBufferT> NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::getBufferLocked<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalImageStreamBufferT, NSCam::v3::IImageStreamBuffer> >(long, long, NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalImageStreamBufferT, NSCam::v3::IImageStreamBuffer> const&) const */
int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp15getBufferLockedINS1_8TItemMapI21HalImageStreamBufferTNS0_18IImageStreamBufferEEEEEN7android2spINT_14IStreamBufferTEEEllRKSA_(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext14DispatcherBase12onCtrlResizeEjllRNS_9IMetadataElS4_Ri */
/* Demangled: NSCam::v3::NSPipelineContext::DispatcherBase::onCtrlResize(unsigned int, long, long, NSCam::IMetadata&, long, NSCam::IMetadata&, int&) */
int _ZN5NSCam2v317NSPipelineContext14DispatcherBase12onCtrlResizeEjllRNS_9IMetadataElS4_Ri(void);

/* Symbol: _ZTTN5NSCam2v317NSPipelineContext17DefaultDispatcherE */
/* Demangled: VTT for NSCam::v3::NSPipelineContext::DefaultDispatcher */
extern void* _ZTTN5NSCam2v317NSPipelineContext17DefaultDispatcherE;

/* Symbol: _ZTv0_n80_N5NSCam2v317NSPipelineContext14DispatcherBase10needCtrlCbENS0_21IPipelineNodeCallback9eCtrlTypeE */
/* Demangled: virtual thunk to NSCam::v3::NSPipelineContext::DispatcherBase::needCtrlCb(NSCam::v3::IPipelineNodeCallback::eCtrlType) */
int _ZTv0_n80_N5NSCam2v317NSPipelineContext14DispatcherBase10needCtrlCbENS0_21IPipelineNodeCallback9eCtrlTypeE(void);

/* Symbol: _ZTVN5NSCam2v317NSPipelineContext16FrameBuilderImplE */
/* Demangled: vtable for NSCam::v3::NSPipelineContext::FrameBuilderImpl */
extern void* _ZTVN5NSCam2v317NSPipelineContext16FrameBuilderImplE;

/* Symbol: _ZTv0_n24_N5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEED1Ev */
/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferPoolImp<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator>::~StreamBufferPoolImp() */
int _ZTv0_n24_N5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEED1Ev(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext11NodeBuilderD2Ev */
/* Demangled: NSCam::v3::NSPipelineContext::NodeBuilder::~NodeBuilder() */
int _ZN5NSCam2v317NSPipelineContext11NodeBuilderD2Ev(void);

/* Symbol: _ZTVN5NSCam2v317NSPipelineContext17StreamBuilderImplE */
/* Demangled: vtable for NSCam::v3::NSPipelineContext::StreamBuilderImpl */
extern void* _ZTVN5NSCam2v317NSPipelineContext17StreamBuilderImplE;

/* Symbol: _ZN5NSCam2v330IPipelineBufferSetFrameControl6createERKNS1_14CreationParamsE */
/* Demangled: NSCam::v3::IPipelineBufferSetFrameControl::create(NSCam::v3::IPipelineBufferSetFrameControl::CreationParams const&) */
int _ZN5NSCam2v330IPipelineBufferSetFrameControl6createERKNS1_14CreationParamsE(void);

/* Symbol: _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp15onLastStrongRefEPKv */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::onLastStrongRef(void const*) */
int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp15onLastStrongRefEPKv(void);

/* Symbol: _ZN5NSCam2v328PipelineFrameNumberGenerator10getFrameNoEv */
/* Demangled: NSCam::v3::PipelineFrameNumberGenerator::getFrameNo() */
int _ZN5NSCam2v328PipelineFrameNumberGenerator10getFrameNoEv(void);

/* Symbol: _ZN5NSCam2v315InFlightRequest25waitUntilNodeImageDrainedEl */
/* Demangled: NSCam::v3::InFlightRequest::waitUntilNodeImageDrained(long) */
int _ZN5NSCam2v315InFlightRequest25waitUntilNodeImageDrainedEl(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext18RequestBuilderImplENS_9allocatorIS4_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::NSPipelineContext::RequestBuilderImpl, std::__1::allocator<NSCam::v3::NSPipelineContext::RequestBuilderImpl> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext18RequestBuilderImplENS_9allocatorIS4_EEEE;

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl15onLastStrongRefEPKv */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::onLastStrongRef(void const*) */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl15onLastStrongRefEPKv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_18IImageStreamBufferES7_E4ItemEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IImageStreamBuffer, NSCam::v3::IImageStreamBuffer>::Item> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_18IImageStreamBufferES7_E4ItemEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZTCN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImpE0_NS0_30IPipelineBufferSetFrameControlE */
/* Demangled: construction vtable for NSCam::v3::IPipelineBufferSetFrameControl-in-NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp */
extern void* _ZTCN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImpE0_NS0_30IPipelineBufferSetFrameControlE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_17IMetaStreamBufferES7_E4ItemEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer>::Item> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_17IMetaStreamBufferES7_E4ItemEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZTCN5NSCam2v315InFlightRequestE0_NS0_22IPipelineFrameListenerE */
/* Demangled: construction vtable for NSCam::v3::IPipelineFrameListener-in-NSCam::v3::InFlightRequest */
extern void* _ZTCN5NSCam2v315InFlightRequestE0_NS0_22IPipelineFrameListenerE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, long> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE7do_copyEPvPKvm(void);

/* Symbol: _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp18getBufferLockedImpINS1_8TItemMapI21HalImageStreamBufferTNS0_18IImageStreamBufferEEEEEN7android2spINT_14IStreamBufferTEEEllRKSA_ */
/* Demangled: android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalImageStreamBufferT, NSCam::v3::IImageStreamBuffer>::IStreamBufferT> NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::getBufferLockedImp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalImageStreamBufferT, NSCam::v3::IImageStreamBuffer> >(long, long, NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalImageStreamBufferT, NSCam::v3::IImageStreamBuffer> const&) const */
int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp18getBufferLockedImpINS1_8TItemMapI21HalImageStreamBufferTNS0_18IImageStreamBufferEEEEEN7android2spINT_14IStreamBufferTEEEllRKSA_(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext14DispatcherBase13onCtrlSettingEjllRNS_9IMetadataElS4_Ri */
/* Demangled: NSCam::v3::NSPipelineContext::DispatcherBase::onCtrlSetting(unsigned int, long, long, NSCam::IMetadata&, long, NSCam::IMetadata&, int&) */
int _ZN5NSCam2v317NSPipelineContext14DispatcherBase13onCtrlSettingEjllRNS_9IMetadataElS4_Ri(void);

/* Symbol: _ZTCN5NSCam2v317NSPipelineContext17DefaultDispatcherE0_NS0_21IPipelineNodeCallbackE */
/* Demangled: construction vtable for NSCam::v3::IPipelineNodeCallback-in-NSCam::v3::NSPipelineContext::DefaultDispatcher */
extern void* _ZTCN5NSCam2v317NSPipelineContext17DefaultDispatcherE0_NS0_21IPipelineNodeCallbackE;

/* Symbol: _ZNK5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandler12isConfigDoneEv */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::InitFrameHandler::isConfigDone() const */
int _ZNK5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandler12isConfigDoneEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig15ItemImageStreamEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineContext::StreamConfig::ItemImageStream> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig15ItemImageStreamEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZTVN7android6VectorIN5NSCam2v314IPipelineFrame13MetaInfoIOMapEEE */
/* Demangled: vtable for android::Vector<NSCam::v3::IPipelineFrame::MetaInfoIOMap> */
extern void* _ZTVN7android6VectorIN5NSCam2v314IPipelineFrame13MetaInfoIOMapEEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_18IImageStreamBufferES7_E4ItemEEEEEE10do_compareEPKvSE_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IImageStreamBuffer, NSCam::v3::IImageStreamBuffer>::Item> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_18IImageStreamBufferES7_E4ItemEEEEEE10do_compareEPKvSE_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, std::__1::vector<android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamBuffer> > > > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_4ListIjEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::List<unsigned int> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_4ListIjEEEEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE10do_compareEPKvSA_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE10do_compareEPKvSA_(void);

/* Symbol: _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp25getTrackFrameResultParamsEv */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::getTrackFrameResultParams() const */
int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp25getTrackFrameResultParamsEv(void);

/* Symbol: _ZTv0_n56_N5NSCam2v317NSPipelineContext14DispatcherBase10onCtrlSyncEjljjl */
/* Demangled: virtual thunk to NSCam::v3::NSPipelineContext::DispatcherBase::onCtrlSync(unsigned int, long, unsigned int, unsigned int, long) */
int _ZTv0_n56_N5NSCam2v317NSPipelineContext14DispatcherBase10onCtrlSyncEjljjl(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamBuffer> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp10NodeStatusEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::NodeStatus> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp10NodeStatusEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext14DispatcherBase10needCtrlCbENS0_21IPipelineNodeCallback9eCtrlTypeE */
/* Demangled: NSCam::v3::NSPipelineContext::DispatcherBase::needCtrlCb(NSCam::v3::IPipelineNodeCallback::eCtrlType) */
int _ZN5NSCam2v317NSPipelineContext14DispatcherBase10needCtrlCbENS0_21IPipelineNodeCallback9eCtrlTypeE(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceINS_6threadENS_9allocatorIS1_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<std::__1::thread, std::__1::allocator<std::__1::thread> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceINS_6threadENS_9allocatorIS1_EEEE;

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext18RequestBuilderImplENS_9allocatorIS4_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::NSPipelineContext::RequestBuilderImpl, std::__1::allocator<NSCam::v3::NSPipelineContext::RequestBuilderImpl> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext18RequestBuilderImplENS_9allocatorIS4_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN5NSCam2v328PipelineFrameNumberGeneratorD2Ev */
/* Demangled: NSCam::v3::PipelineFrameNumberGenerator::~PipelineFrameNumberGenerator() */
int _ZN5NSCam2v328PipelineFrameNumberGeneratorD2Ev(void);

/* Symbol: _ZTTN5NSCam2v315InFlightRequestE */
/* Demangled: VTT for NSCam::v3::InFlightRequest */
extern void* _ZTTN5NSCam2v315InFlightRequestE;

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl13kickRootNodesEv */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::kickRootNodes() */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl13kickRootNodesEv(void);

/* Symbol: _ZTVN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_17IMetaStreamBufferES3_EE */
/* Demangled: vtable for NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer> */
extern void* _ZTVN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_17IMetaStreamBufferES3_EE;

/* Symbol: _ZTv0_n40_N5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl15onLastStrongRefEPKv */
/* Demangled: virtual thunk to NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::onLastStrongRef(void const*) */
int _ZTv0_n40_N5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl15onLastStrongRefEPKv(void);

/* Symbol: _ZTVN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS0_17IMetaStreamBufferEE4ItemE */
/* Demangled: vtable for NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalMetaStreamBufferT, NSCam::v3::IMetaStreamBuffer>::Item */
extern void* _ZTVN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS0_17IMetaStreamBufferEE4ItemE;

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<long, std::__1::vector<android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamBuffer> > > > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEEE;

/* Symbol: _ZN5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEE16get_itemLocationERN7android2spIS4_EEj */
/* Demangled: NSCam::v3::Utils::StreamBufferPoolImp<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator>::get_itemLocation(android::sp<NSCam::v3::Utils::HalImageStreamBuffer>&, unsigned int) */
int _ZN5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEE16get_itemLocationERN7android2spIS4_EEj(void);

/* Symbol: _ZTCN5NSCam2v35Utils16StreamBufferPoolINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEEE0_NS1_20StreamBufferPoolImplE */
/* Demangled: construction vtable for NSCam::v3::Utils::StreamBufferPoolImpl-in-NSCam::v3::Utils::StreamBufferPool<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator> */
extern void* _ZTCN5NSCam2v35Utils16StreamBufferPoolINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEEE0_NS1_20StreamBufferPoolImplE;

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16waitUntilDrainedEv */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::waitUntilDrained() */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16waitUntilDrainedEv(void);

/* Symbol: _ZNSt3__122__deferred_assoc_stateIiNS_12__async_funcIPFiN7android2spIN5NSCam2v317NSPipelineContext10INodeActorEEENS3_INS5_23INodeCallbackToPipelineEEEEJS8_SA_EEEE9__executeEv */
/* Demangled: std::__1::__deferred_assoc_state<int, std::__1::__async_func<int (*)(android::sp<NSCam::v3::NSPipelineContext::INodeActor>, android::sp<NSCam::v3::INodeCallbackToPipeline>), android::sp<NSCam::v3::NSPipelineContext::INodeActor>, android::sp<NSCam::v3::INodeCallbackToPipeline> > >::__execute() */
int _ZNSt3__122__deferred_assoc_stateIiNS_12__async_funcIPFiN7android2spIN5NSCam2v317NSPipelineContext10INodeActorEEENS3_INS5_23INodeCallbackToPipelineEEEEJS8_SA_EEEE9__executeEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS4_17IMetaStreamBufferEE4ItemEEEEEE10do_compareEPKvSF_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalMetaStreamBufferT, NSCam::v3::IMetaStreamBuffer>::Item> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS4_17IMetaStreamBufferEE4ItemEEEEEE10do_compareEPKvSF_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig15ItemImageStreamEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineContext::StreamConfig::ItemImageStream> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig15ItemImageStreamEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZN5NSCam2v328PipelineFrameNumberGenerator12resetFrameNoEv */
/* Demangled: NSCam::v3::PipelineFrameNumberGenerator::resetFrameNo() */
int _ZN5NSCam2v328PipelineFrameNumberGenerator12resetFrameNoEv(void);

/* Symbol: _ZNK7android12SortedVectorIlE12do_constructEPvm */
/* Demangled: android::SortedVector<long>::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorIlE12do_constructEPvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, std::__1::vector<android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamBuffer> > > > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZTVN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_18IImageStreamBufferES3_E4ItemE */
/* Demangled: vtable for NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IImageStreamBuffer, NSCam::v3::IImageStreamBuffer>::Item */
extern void* _ZTVN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_18IImageStreamBufferES3_E4ItemE;

/* Symbol: _ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl20onRequestConstructedEv */
/* Demangled: NSCam::v3::NSPipelineContext::FrameBuilderImpl::onRequestConstructed() */
int _ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl20onRequestConstructedEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig15ItemImageStreamEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineContext::StreamConfig::ItemImageStream> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig15ItemImageStreamEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZTv0_n24_N5NSCam2v317NSPipelineContext12StreamConfigD1Ev */
/* Demangled: virtual thunk to NSCam::v3::NSPipelineContext::StreamConfig::~StreamConfig() */
int _ZTv0_n24_N5NSCam2v317NSPipelineContext12StreamConfigD1Ev(void);

/* Symbol: _ZNK7android6VectorIlE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<long>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIlE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v312IPipelineDAG4EdgeEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::IPipelineDAG::Edge>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v312IPipelineDAG4EdgeEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v312IPipelineDAG4EdgeEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::IPipelineDAG::Edge>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v312IPipelineDAG4EdgeEE7do_copyEPvPKvm(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void);

/* Symbol: _ZTv0_n32_N5NSCam2v317NSPipelineContext17DefaultDispatcher15onDispatchFrameERKN7android2spINS0_14IPipelineFrameEEEl */
/* Demangled: virtual thunk to NSCam::v3::NSPipelineContext::DefaultDispatcher::onDispatchFrame(android::sp<NSCam::v3::IPipelineFrame> const&, long) */
int _ZTv0_n32_N5NSCam2v317NSPipelineContext17DefaultDispatcher15onDispatchFrameERKN7android2spINS0_14IPipelineFrameEEEl(void);

/* Symbol: _ZNK5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandler22getWaitDrainedDurationEv */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::InitFrameHandler::getWaitDrainedDuration() const */
int _ZNK5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandler22getWaitDrainedDurationEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE10do_compareEPKvSA_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamBuffer> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE10do_compareEPKvSA_(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext23IPipelineContextManager3getEv */
/* Demangled: NSCam::v3::NSPipelineContext::IPipelineContextManager::get() */
int _ZN5NSCam2v317NSPipelineContext23IPipelineContextManager3getEv(void);

/* Symbol: _ZNK5NSCam2v317NSPipelineContext13StreamBuilder5buildEN7android2spINS1_16IPipelineContextEEE */
/* Demangled: NSCam::v3::NSPipelineContext::StreamBuilder::build(android::sp<NSCam::v3::NSPipelineContext::IPipelineContext>) const */
int _ZNK5NSCam2v317NSPipelineContext13StreamBuilder5buildEN7android2spINS1_16IPipelineContextEEE(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamBuffer> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEEE;

/* Symbol: _ZNK7android6VectorIN5NSCam2v314IPipelineFrame13MetaInfoIOMapEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::IPipelineFrame::MetaInfoIOMap>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v314IPipelineFrame13MetaInfoIOMapEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceINS_5mutexENS_9allocatorIS1_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<std::__1::mutex, std::__1::allocator<std::__1::mutex> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceINS_5mutexENS_9allocatorIS1_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceINS_6threadENS_9allocatorIS1_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<std::__1::thread, std::__1::allocator<std::__1::thread> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceINS_6threadENS_9allocatorIS1_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
/* Demangled: _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void);

/* Symbol: _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp14markUserStatusEllj */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::markUserStatus(long, long, unsigned int) */
int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp14markUserStatusEllj(void);

/* Symbol: _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS0_18IImageStreamBufferEE3addEN7android2spIS4_EE */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalImageStreamBufferT, NSCam::v3::IImageStreamBuffer>::add(android::sp<NSCam::v3::IImageStreamBuffer>) */
int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS0_18IImageStreamBufferEE3addEN7android2spIS4_EE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS4_17IMetaStreamBufferEE4ItemEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalMetaStreamBufferT, NSCam::v3::IMetaStreamBuffer>::Item> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS4_17IMetaStreamBufferEE4ItemEEEEEE12do_constructEPvm(void);

/* Symbol: _ZTv0_n48_N5NSCam2v317NSPipelineContext14DispatcherBase13onCtrlSettingEjllRNS_9IMetadataElS4_Ri */
/* Demangled: virtual thunk to NSCam::v3::NSPipelineContext::DispatcherBase::onCtrlSetting(unsigned int, long, long, NSCam::IMetadata&, long, NSCam::IMetadata&, int&) */
int _ZTv0_n48_N5NSCam2v317NSPipelineContext14DispatcherBase13onCtrlSettingEjllRNS_9IMetadataElS4_Ri(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig14ItemMetaStreamEEEEEE10do_compareEPKvSC_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineContext::StreamConfig::ItemMetaStream> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig14ItemMetaStreamEEEEEE10do_compareEPKvSC_(void);

/* Symbol: _ZTv0_n24_N5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEED0Ev */
/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferPoolImp<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator>::~StreamBufferPoolImp() */
int _ZTv0_n24_N5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEED0Ev(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext11NodeBuilderD1Ev */
/* Demangled: NSCam::v3::NSPipelineContext::NodeBuilder::~NodeBuilder() */
int _ZN5NSCam2v317NSPipelineContext11NodeBuilderD1Ev(void);

/* Symbol: _ZNK7android6VectorIlE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<long>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIlE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_17IMetaStreamBufferES3_E14usersManagerAtEm */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer>::usersManagerAt(unsigned long) const */
int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_17IMetaStreamBufferES3_E14usersManagerAtEm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE10do_compareEPKvSA_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE10do_compareEPKvSA_(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl8setIOMapElRKNS1_8IOMapSetES5_ */
/* Demangled: NSCam::v3::NSPipelineContext::FrameBuilderImpl::setIOMap(long, NSCam::v3::NSPipelineContext::IOMapSet const&, NSCam::v3::NSPipelineContext::IOMapSet const&) */
int _ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl8setIOMapElRKNS1_8IOMapSetES5_(void);

/* Symbol: _ZTCN5NSCam2v317NSPipelineContext12StreamConfigE0_NS0_29IPipelineStreamBufferProviderE */
/* Demangled: construction vtable for NSCam::v3::IPipelineStreamBufferProvider-in-NSCam::v3::NSPipelineContext::StreamConfig */
extern void* _ZTCN5NSCam2v317NSPipelineContext12StreamConfigE0_NS0_29IPipelineStreamBufferProviderE;

/* Symbol: __fe_raise_inexact */
/* Demangled: __fe_raise_inexact */
int __fe_raise_inexact(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS4_18IImageStreamBufferEE4ItemEEEEEE10do_compareEPKvSF_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalImageStreamBufferT, NSCam::v3::IImageStreamBuffer>::Item> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS4_18IImageStreamBufferEE4ItemEEEEEE10do_compareEPKvSF_(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE12do_constructEPvm */
/* Demangled: android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE12do_constructEPvm(void);

/* Symbol: _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImpC1ERKNS0_30IPipelineBufferSetFrameControl14CreationParamsE */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp(NSCam::v3::IPipelineBufferSetFrameControl::CreationParams const&) */
int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImpC1ERKNS0_30IPipelineBufferSetFrameControl14CreationParamsE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS4_18IImageStreamBufferEE4ItemEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalImageStreamBufferT, NSCam::v3::IImageStreamBuffer>::Item> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS4_18IImageStreamBufferEE4ItemEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext16waitUntilDrainedEv */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::waitUntilDrained() */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext16waitUntilDrainedEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE10do_compareEPKvS5_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, long> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE10do_compareEPKvS5_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEE10commitPoolEPKc */
/* Demangled: NSCam::v3::Utils::StreamBufferPoolImp<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator>::commitPool(char const*) */
int _ZN5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEE10commitPoolEPKc(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIljEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, unsigned int> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIljEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext14DispatcherBase15onEarlyCallbackEjllRKNS_9IMetadataEi */
/* Demangled: NSCam::v3::NSPipelineContext::DispatcherBase::onEarlyCallback(unsigned int, long, long, NSCam::IMetadata const&, int) */
int _ZN5NSCam2v317NSPipelineContext14DispatcherBase15onEarlyCallbackEjllRKNS_9IMetadataEi(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl9sendFrameERKN7android2spINS0_14IPipelineFrameEEE */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::sendFrame(android::sp<NSCam::v3::IPipelineFrame> const&) */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl9sendFrameERKN7android2spINS0_14IPipelineFrameEEE(void);

/* Symbol: _ZNSt3__14listIN7android2spIN5NSCam2v318IImageStreamBufferEEENS_9allocatorIS6_EEE6insertINS_21__list_const_iteratorIS6_PvEEEENS_15__list_iteratorIS6_SC_EESD_T_SG_PNS_9enable_ifIXsr19__is_input_iteratorISG_EE5valueEvE4typeE */
/* Demangled: _ZNSt3__14listIN7android2spIN5NSCam2v318IImageStreamBufferEEENS_9allocatorIS6_EEE6insertINS_21__list_const_iteratorIS6_PvEEEENS_15__list_iteratorIS6_SC_EESD_T_SG_PNS_9enable_ifIXsr19__is_input_iteratorISG_EE5valueEvE4typeE */
int _ZNSt3__14listIN7android2spIN5NSCam2v318IImageStreamBufferEEENS_9allocatorIS6_EEE6insertINS_21__list_const_iteratorIS6_PvEEEENS_15__list_iteratorIS6_SC_EESD_T_SG_PNS_9enable_ifIXsr19__is_input_iteratorISG_EE5valueEvE4typeE(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl17setReprocessFrameEi */
/* Demangled: NSCam::v3::NSPipelineContext::FrameBuilderImpl::setReprocessFrame(int) */
int _ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl17setReprocessFrameEi(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_18DefaultKeyedVectorIljEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::DefaultKeyedVector<long, unsigned int> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_18DefaultKeyedVectorIljEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorINS_7String8EE7do_copyEPvPKvm */
/* Demangled: android::Vector<android::String8>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_7String8EE7do_copyEPvPKvm(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandlerENS_9allocatorIS6_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::InitFrameHandler, std::__1::allocator<NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::InitFrameHandler> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandlerENS_9allocatorIS6_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIliEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<long, int> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIliEEEE;

/* Symbol: _ZNSt3__15asyncIRFiN7android2spIN5NSCam2v317NSPipelineContext10INodeActorEEENS2_INS4_23INodeCallbackToPipelineEEEEJRS7_RS9_EEENS_6futureINS_11__invoke_ofINS_5decayIT_E4typeEJDpNSG_IT0_E4typeEEE4typeEEENS_6launchEOSH_DpOSK_ */
/* Demangled: std::__1::future<std::__1::__invoke_of<std::__1::decay<int (&)(android::sp<NSCam::v3::NSPipelineContext::INodeActor>, android::sp<NSCam::v3::INodeCallbackToPipeline>)>::type, std::__1::decay<android::sp<NSCam::v3::NSPipelineContext::INodeActor>&>::type, std::__1::decay<android::sp<NSCam::v3::INodeCallbackToPipeline>&>::type>::type> std::__1::async<int (&)(android::sp<NSCam::v3::NSPipelineContext::INodeActor>, android::sp<NSCam::v3::INodeCallbackToPipeline>), android::sp<NSCam::v3::NSPipelineContext::INodeActor>&, android::sp<NSCam::v3::INodeCallbackToPipeline>&>(std::__1::launch, int (&)(android::sp<NSCam::v3::NSPipelineContext::INodeActor>, android::sp<NSCam::v3::INodeCallbackToPipeline>), android::sp<NSCam::v3::NSPipelineContext::INodeActor>&, android::sp<NSCam::v3::INodeCallbackToPipeline>&) */
int _ZNSt3__15asyncIRFiN7android2spIN5NSCam2v317NSPipelineContext10INodeActorEEENS2_INS4_23INodeCallbackToPipelineEEEEJRS7_RS9_EEENS_6futureINS_11__invoke_ofINS_5decayIT_E4typeEJDpNSG_IT0_E4typeEEE4typeEEENS_6launchEOSH_DpOSK_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNSt3__16vectorIN7android2spIN5NSCam2v317IMetaStreamBufferEEENS_9allocatorIS6_EEE6assignIPS6_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS6_NS_15iterator_traitsISD_E9referenceEEE5valueEvE4typeESD_SD_ */
/* Demangled: _ZNSt3__16vectorIN7android2spIN5NSCam2v317IMetaStreamBufferEEENS_9allocatorIS6_EEE6assignIPS6_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS6_NS_15iterator_traitsISD_E9referenceEEE5valueEvE4typeESD_SD_ */
int _ZNSt3__16vectorIN7android2spIN5NSCam2v317IMetaStreamBufferEEENS_9allocatorIS6_EEE6assignIPS6_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS6_NS_15iterator_traitsISD_E9referenceEEE5valueEvE4typeESD_SD_(void);

/* Symbol: _ZN5NSCam2v328PipelineFrameNumberGeneratorD1Ev */
/* Demangled: NSCam::v3::PipelineFrameNumberGenerator::~PipelineFrameNumberGenerator() */
int _ZN5NSCam2v328PipelineFrameNumberGeneratorD1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_17IMetaStreamBufferES7_E4ItemEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer>::Item> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_17IMetaStreamBufferES7_E4ItemEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEE10do_compareEPKvSF_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, std::__1::vector<android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamBuffer> > > > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEE10do_compareEPKvSF_(void);

/* Symbol: _ZThn8_NK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_17IMetaStreamBufferES3_E14usersManagerAtEm */
/* Demangled: non-virtual thunk to NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer>::usersManagerAt(unsigned long) const */
int _ZThn8_NK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_17IMetaStreamBufferES3_E14usersManagerAtEm(void);

/* Symbol: _ZTv0_n24_N5NSCam2v317NSPipelineContext15PipelineContextD1Ev */
/* Demangled: virtual thunk to NSCam::v3::NSPipelineContext::PipelineContext::~PipelineContext() */
int _ZTv0_n24_N5NSCam2v317NSPipelineContext15PipelineContextD1Ev(void);

/* Symbol: _ZTVN5NSCam2v35Utils26SimpleStreamInfoSetControl3MapINS0_16IImageStreamInfoEEE */
/* Demangled: vtable for NSCam::v3::Utils::SimpleStreamInfoSetControl::Map<NSCam::v3::IImageStreamInfo> */
extern void* _ZTVN5NSCam2v35Utils26SimpleStreamInfoSetControl3MapINS0_16IImageStreamInfoEEE;

/* Symbol: _ZNK7android6VectorIjE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<unsigned int>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIjE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK5NSCam2v317NSPipelineContext15PipelineContext20queryImageStreamPoolEl */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::queryImageStreamPool(long) const */
int _ZNK5NSCam2v317NSPipelineContext15PipelineContext20queryImageStreamPoolEl(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v35Utils19StreamBufferPoolImpINS2_18IImageStreamBufferENS3_20HalImageStreamBufferENS6_9AllocatorEE9MyBufferTEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::Utils::StreamBufferPoolImp<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator>::MyBufferT>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v35Utils19StreamBufferPoolImpINS2_18IImageStreamBufferENS3_20HalImageStreamBufferENS6_9AllocatorEE9MyBufferTEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v35Utils19StreamBufferPoolImpINS2_18IImageStreamBufferENS3_20HalImageStreamBufferENS6_9AllocatorEE9MyBufferTEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::Utils::StreamBufferPoolImp<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator>::MyBufferT>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v35Utils19StreamBufferPoolImpINS2_18IImageStreamBufferENS3_20HalImageStreamBufferENS6_9AllocatorEE9MyBufferTEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZTCN5NSCam2v317NSPipelineContext17DefaultDispatcherE0_NS1_14DispatcherBaseE */
/* Demangled: construction vtable for NSCam::v3::NSPipelineContext::DispatcherBase-in-NSCam::v3::NSPipelineContext::DefaultDispatcher */
extern void* _ZTCN5NSCam2v317NSPipelineContext17DefaultDispatcherE0_NS1_14DispatcherBaseE;

/* Symbol: _ZN5NSCam2v315InFlightRequest15registerRequestERKN7android2spINS0_14IPipelineFrameEEE */
/* Demangled: NSCam::v3::InFlightRequest::registerRequest(android::sp<NSCam::v3::IPipelineFrame> const&) */
int _ZN5NSCam2v315InFlightRequest15registerRequestERKN7android2spINS0_14IPipelineFrameEEE(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v313IPipelineNodeEEEE8do_splatEPvPKvm */
/* Demangled: android::Vector<android::sp<NSCam::v3::IPipelineNode> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v313IPipelineNodeEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZTVN5NSCam2v35Utils26SimpleStreamInfoSetControl3MapINS0_15IMetaStreamInfoEEE */
/* Demangled: vtable for NSCam::v3::Utils::SimpleStreamInfoSetControl::Map<NSCam::v3::IMetaStreamInfo> */
extern void* _ZTVN5NSCam2v35Utils26SimpleStreamInfoSetControl3MapINS0_15IMetaStreamInfoEEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS4_18IImageStreamBufferEE4ItemEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalImageStreamBufferT, NSCam::v3::IImageStreamBuffer>::Item> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS4_18IImageStreamBufferEE4ItemEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIjE12do_constructEPvm */
/* Demangled: android::Vector<unsigned int>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIjE12do_constructEPvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v314IPipelineFrame13MetaInfoIOMapEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::v3::IPipelineFrame::MetaInfoIOMap>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v314IPipelineFrame13MetaInfoIOMapEE12do_constructEPvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_17IMetaStreamBufferES7_E4ItemEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer>::Item> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_17IMetaStreamBufferES7_E4ItemEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE21__construct_node_hashIRKNS_4pairIKjS5_EEJEEENS_10unique_ptrINS_11__hash_nodeIS6_PvEENS_22__hash_node_destructorINS3_ISQ_EEEEEEmOT_DpOT0_ */
/* Demangled: std::__1::unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, void*>, std::__1::__hash_node_destructor<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, void*> > > > std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > > > >::__construct_node_hash<std::__1::pair<unsigned int const, std::__1::vector<long, std::__1::allocator<long> > > const&>(unsigned long, std::__1::pair<unsigned int const, std::__1::vector<long, std::__1::allocator<long> > > const&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE21__construct_node_hashIRKNS_4pairIKjS5_EEJEEENS_10unique_ptrINS_11__hash_nodeIS6_PvEENS_22__hash_node_destructorINS3_ISQ_EEEEEEmOT_DpOT0_(void);

/* Symbol: _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: VTT for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamBuffer> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::NodeEdge>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext8NodeEdgeEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImplD2Ev */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::~PipelineContextImpl() */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImplD2Ev(void);

/* Symbol: _ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EERKS9_SB_ */
/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > std::__1::operator+<char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EERKS9_SB_(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v312IPipelineDAG8TNodeObjIllEEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::IPipelineDAG::TNodeObj<long, long> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v312IPipelineDAG8TNodeObjIllEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineBuilderC2ERKS2_ */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineBuilder::PipelineBuilder(NSCam::v3::NSPipelineContext::PipelineBuilder const&) */
int _ZN5NSCam2v317NSPipelineContext15PipelineBuilderC2ERKS2_(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v312IPipelineDAG8TNodeObjIllEEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::IPipelineDAG::TNodeObj<long, long> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v312IPipelineDAG8TNodeObjIllEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v317NSPipelineContext8IOMapSetEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<long, NSCam::v3::NSPipelineContext::IOMapSet> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v317NSPipelineContext8IOMapSetEEEEE;

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext12endConfigureEii */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::endConfigure(int, int) */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext12endConfigureEii(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v313IPipelineNodeEEEE10do_destroyEPvm */
/* Demangled: android::Vector<android::sp<NSCam::v3::IPipelineNode> >::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v313IPipelineNodeEEEE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp14setPipelineDAGEN7android2spINS0_12IPipelineDAGEEE */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::setPipelineDAG(android::sp<NSCam::v3::IPipelineDAG>) */
int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp14setPipelineDAGEN7android2spINS0_12IPipelineDAGEEE(void);

/* Symbol: _ZTVN5NSCam2v317NSPipelineContext8IOMapSetE */
/* Demangled: vtable for NSCam::v3::NSPipelineContext::IOMapSet */
extern void* _ZTVN5NSCam2v317NSPipelineContext8IOMapSetE;

/* Symbol: _ZTCN5NSCam2v35Utils16StreamBufferPoolINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEEE0_N7android6ThreadE */
/* Demangled: construction vtable for android::Thread-in-NSCam::v3::Utils::StreamBufferPool<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator> */
extern void* _ZTCN5NSCam2v35Utils16StreamBufferPoolINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEEE0_N7android6ThreadE;

/* Symbol: _ZTv0_n24_N5NSCam2v317NSPipelineContext12StreamConfigD0Ev */
/* Demangled: virtual thunk to NSCam::v3::NSPipelineContext::StreamConfig::~StreamConfig() */
int _ZTv0_n24_N5NSCam2v317NSPipelineContext12StreamConfigD0Ev(void);

/* Symbol: _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZN5NSCam2v317NSPipelineContext13IFrameBuilder4makeEv */
/* Demangled: NSCam::v3::NSPipelineContext::IFrameBuilder::make() */
int _ZN5NSCam2v317NSPipelineContext13IFrameBuilder4makeEv(void);

/* Symbol: _ZTVN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp10NodeStatus5IOSetE */
/* Demangled: vtable for NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::NodeStatus::IOSet */
extern void* _ZTVN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp10NodeStatus5IOSetE;

/* Symbol: _ZThn8_N5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS0_17IMetaStreamBufferEE3addEN7android2spINS0_15IMetaStreamInfoEEENS7_INS0_13IUsersManagerEEE */
/* Demangled: non-virtual thunk to NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalMetaStreamBufferT, NSCam::v3::IMetaStreamBuffer>::add(android::sp<NSCam::v3::IMetaStreamInfo>, android::sp<NSCam::v3::IUsersManager>) */
int _ZThn8_N5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS0_17IMetaStreamBufferEE3addEN7android2spINS0_15IMetaStreamInfoEEENS7_INS0_13IUsersManagerEEE(void);

/* Symbol: _ZThn8_N5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_17IMetaStreamBufferES3_E3addEN7android2spIS3_EE */
/* Demangled: non-virtual thunk to NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer>::add(android::sp<NSCam::v3::IMetaStreamBuffer>) */
int _ZThn8_N5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_17IMetaStreamBufferES3_E3addEN7android2spIS3_EE(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext10beginFlushEv */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::beginFlush() */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext10beginFlushEv(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext4dumpEv */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::dump() */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext4dumpEv(void);

/* Symbol: _ZN5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEE12do_constructERj */
/* Demangled: NSCam::v3::Utils::StreamBufferPoolImp<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator>::do_construct(unsigned int&) */
int _ZN5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEE12do_constructERj(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v313IPipelineNodeEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<android::sp<NSCam::v3::IPipelineNode> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v313IPipelineNodeEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext11NodeBuilder9addStreamENS2_9DirectionERKNS0_3SetIlEE */
/* Demangled: NSCam::v3::NSPipelineContext::NodeBuilder::addStream(NSCam::v3::NSPipelineContext::NodeBuilder::Direction, NSCam::v3::Set<long> const&) */
int _ZN5NSCam2v317NSPipelineContext11NodeBuilder9addStreamENS2_9DirectionERKNS0_3SetIlEE(void);

/* Symbol: _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_18IImageStreamBufferES3_E14usersManagerAtEm */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IImageStreamBuffer, NSCam::v3::IImageStreamBuffer>::usersManagerAt(unsigned long) const */
int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_18IImageStreamBufferES3_E14usersManagerAtEm(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandler11_threadLoopENSt3__110shared_ptrIS4_EENS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::InitFrameHandler::_threadLoop(std::__1::shared_ptr<NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::InitFrameHandler>, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandler11_threadLoopENSt3__110shared_ptrIS4_EENS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZNK5NSCam2v317NSPipelineContext12StreamConfig4dumpEv */
/* Demangled: NSCam::v3::NSPipelineContext::StreamConfig::dump() const */
int _ZNK5NSCam2v317NSPipelineContext12StreamConfig4dumpEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig14ItemMetaStreamEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineContext::StreamConfig::ItemMetaStream> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig14ItemMetaStreamEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZTVN5NSCam2v317NSPipelineContext12StreamConfig15ItemImageStreamE */
/* Demangled: vtable for NSCam::v3::NSPipelineContext::StreamConfig::ItemImageStream */
extern void* _ZTVN5NSCam2v317NSPipelineContext12StreamConfig15ItemImageStreamE;

/* Symbol: _ZNK7android6VectorIbE7do_copyEPvPKvm */
/* Demangled: android::Vector<bool>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIbE7do_copyEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_17IMetaStreamBufferES7_E4ItemEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer>::Item> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_17IMetaStreamBufferES7_E4ItemEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIljEEE10do_compareEPKvS5_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, unsigned int> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIljEEE10do_compareEPKvS5_(void);

/* Symbol: _ZTVNSt3__122__deferred_assoc_stateIiNS_12__async_funcIPFiN7android2spIN5NSCam2v317NSPipelineContext10INodeActorEEENS3_INS5_23INodeCallbackToPipelineEEEEJS8_SA_EEEEE */
/* Demangled: vtable for std::__1::__deferred_assoc_state<int, std::__1::__async_func<int (*)(android::sp<NSCam::v3::NSPipelineContext::INodeActor>, android::sp<NSCam::v3::INodeCallbackToPipeline>), android::sp<NSCam::v3::NSPipelineContext::INodeActor>, android::sp<NSCam::v3::INodeCallbackToPipeline> > > */
extern void* _ZTVNSt3__122__deferred_assoc_stateIiNS_12__async_funcIPFiN7android2spIN5NSCam2v317NSPipelineContext10INodeActorEEENS3_INS5_23INodeCallbackToPipelineEEEEJS8_SA_EEEEE;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::vector<long, std::__1::allocator<long> > > > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_6vectorIlNS_9allocatorIlEEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS3_IS6_EEE6rehashEm(void);

/* Symbol: _ZThn8_N5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS0_18IImageStreamBufferEE3addEN7android2spINS0_16IImageStreamInfoEEENS7_INS0_13IUsersManagerEEE */
/* Demangled: non-virtual thunk to NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalImageStreamBufferT, NSCam::v3::IImageStreamBuffer>::add(android::sp<NSCam::v3::IImageStreamInfo>, android::sp<NSCam::v3::IUsersManager>) */
int _ZThn8_N5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI21HalImageStreamBufferTNS0_18IImageStreamBufferEE3addEN7android2spINS0_16IImageStreamInfoEEENS7_INS0_13IUsersManagerEEE(void);

/* Symbol: _ZN5NSCam2v315InFlightRequestC2Ev */
/* Demangled: NSCam::v3::InFlightRequest::InFlightRequest() */
int _ZN5NSCam2v315InFlightRequestC2Ev(void);

/* Symbol: _ZN5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEE8initPoolEPKcmm */
/* Demangled: NSCam::v3::Utils::StreamBufferPoolImp<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator>::initPool(char const*, unsigned long, unsigned long) */
int _ZN5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEE8initPoolEPKcmm(void);

/* Symbol: _ZNSt3__16__treeIlNS_4lessIlEENS_9allocatorIlEEE7destroyEPNS_11__tree_nodeIlPvEE */
/* Demangled: std::__1::__tree<long, std::__1::less<long>, std::__1::allocator<long> >::destroy(std::__1::__tree_node<long, void*>*) */
int _ZNSt3__16__treeIlNS_4lessIlEENS_9allocatorIlEEE7destroyEPNS_11__tree_nodeIlPvEE(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl14submitOneFrameERKN7android2spINS0_14IPipelineFrameEEE */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::submitOneFrame(android::sp<NSCam::v3::IPipelineFrame> const&) */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl14submitOneFrameERKN7android2spINS0_14IPipelineFrameEEE(void);

/* Symbol: _ZTv0_n88_N5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEED1Ev */
/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferPoolImp<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator>::~StreamBufferPoolImp() */
int _ZTv0_n88_N5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEED1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp18setSensorTimestampElPKc */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::setSensorTimestamp(long, char const*) */
int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp18setSensorTimestampElPKc(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext21getMultiCamSyncHelperEv */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::getMultiCamSyncHelper() */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext21getMultiCamSyncHelperEv(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFvN7android2spIN5NSCam2v317NSPipelineContext10INodeActorEEEENS_9allocatorISA_EES9_EE */
/* Demangled: vtable for std::__1::__function::__func<void (*)(android::sp<NSCam::v3::NSPipelineContext::INodeActor>), std::__1::allocator<void (*)(android::sp<NSCam::v3::NSPipelineContext::INodeActor>)>, void (android::sp<NSCam::v3::NSPipelineContext::INodeActor>)> */
extern void* _ZTVNSt3__110__function6__funcIPFvN7android2spIN5NSCam2v317NSPipelineContext10INodeActorEEEENS_9allocatorISA_EES9_EE;

/* Symbol: _ZTVN5NSCam2v317NSPipelineContext19PipelineBuilderImplE */
/* Demangled: vtable for NSCam::v3::NSPipelineContext::PipelineBuilderImpl */
extern void* _ZTVN5NSCam2v317NSPipelineContext19PipelineBuilderImplE;

/* Symbol: _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp10setNodeMapEN7android2spINS0_28IPipelineFrameNodeMapControlEEE */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::setNodeMap(android::sp<NSCam::v3::IPipelineFrameNodeMapControl>) */
int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp10setNodeMapEN7android2spINS0_28IPipelineFrameNodeMapControlEEE(void);

/* Symbol: _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp18getBufferLockedImpINS1_8TItemMapINS0_17IMetaStreamBufferES5_EEEEN7android2spINT_14IStreamBufferTEEEllRKS9_ */
/* Demangled: android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer>::IStreamBufferT> NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::getBufferLockedImp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer> >(long, long, NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer> const&) const */
int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp18getBufferLockedImpINS1_8TItemMapINS0_17IMetaStreamBufferES5_EEEEN7android2spINT_14IStreamBufferTEEEllRKS9_(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineBuilderC1ERKS2_ */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineBuilder::PipelineBuilder(NSCam::v3::NSPipelineContext::PipelineBuilder const&) */
int _ZN5NSCam2v317NSPipelineContext15PipelineBuilderC1ERKS2_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamInfo> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v316IImageStreamInfoEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp15getBufferLockedINS1_8TItemMapINS0_17IMetaStreamBufferES5_EEEEN7android2spINT_14IStreamBufferTEEEllRKS9_ */
/* Demangled: android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer>::IStreamBufferT> NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::getBufferLocked<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer> >(long, long, NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer> const&) const */
int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp15getBufferLockedINS1_8TItemMapINS0_17IMetaStreamBufferES5_EEEEN7android2spINT_14IStreamBufferTEEEllRKS9_(void);

/* Symbol: _ZN7android2spIN5NSCam2v328IPipelineFrameNodeMapControlEEC2EPS3_ */
/* Demangled: android::sp<NSCam::v3::IPipelineFrameNodeMapControl>::sp(NSCam::v3::IPipelineFrameNodeMapControl*) */
int _ZN7android2spIN5NSCam2v328IPipelineFrameNodeMapControlEEC2EPS3_(void);

/* Symbol: _ZNSt3__119__async_assoc_stateIiNS_12__async_funcIPFiN7android2spIN5NSCam2v317NSPipelineContext10INodeActorEEENS3_INS5_23INodeCallbackToPipelineEEEEJS8_SA_EEEE9__executeEv */
/* Demangled: std::__1::__async_assoc_state<int, std::__1::__async_func<int (*)(android::sp<NSCam::v3::NSPipelineContext::INodeActor>, android::sp<NSCam::v3::INodeCallbackToPipeline>), android::sp<NSCam::v3::NSPipelineContext::INodeActor>, android::sp<NSCam::v3::INodeCallbackToPipeline> > >::__execute() */
int _ZNSt3__119__async_assoc_stateIiNS_12__async_funcIPFiN7android2spIN5NSCam2v317NSPipelineContext10INodeActorEEENS3_INS5_23INodeCallbackToPipelineEEEEJS8_SA_EEEE9__executeEv(void);

/* Symbol: __eqtf2 */
/* Demangled: __eqtf2 */
int __eqtf2(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext21evaluate_buffer_usersclERNS2_6ParamsE */
/* Demangled: NSCam::v3::NSPipelineContext::evaluate_buffer_users::operator()(NSCam::v3::NSPipelineContext::evaluate_buffer_users::Params&) */
int _ZN5NSCam2v317NSPipelineContext21evaluate_buffer_usersclERNS2_6ParamsE(void);

/* Symbol: _ZTVN7android6VectorINS_2spIN5NSCam2v313IPipelineNodeEEEEE */
/* Demangled: vtable for android::Vector<android::sp<NSCam::v3::IPipelineNode> > */
extern void* _ZTVN7android6VectorINS_2spIN5NSCam2v313IPipelineNodeEEEEE;

/* Symbol: _ZNK7android6VectorIbE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<bool>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIbE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_18IImageStreamBufferES7_E4ItemEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IImageStreamBuffer, NSCam::v3::IImageStreamBuffer>::Item> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_18IImageStreamBufferES7_E4ItemEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IImageStreamBuffer> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v318IImageStreamBufferEEEEEE12do_constructEPvm(void);

/* Symbol: _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp18getBufferLockedImpINS1_8TItemMapI20HalMetaStreamBufferTNS0_17IMetaStreamBufferEEEEEN7android2spINT_14IStreamBufferTEEEllRKSA_ */
/* Demangled: android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalMetaStreamBufferT, NSCam::v3::IMetaStreamBuffer>::IStreamBufferT> NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::getBufferLockedImp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalMetaStreamBufferT, NSCam::v3::IMetaStreamBuffer> >(long, long, NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalMetaStreamBufferT, NSCam::v3::IMetaStreamBuffer> const&) const */
int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp18getBufferLockedImpINS1_8TItemMapI20HalMetaStreamBufferTNS0_17IMetaStreamBufferEEEEEN7android2spINT_14IStreamBufferTEEEllRKSA_(void);

/* Symbol: _ZN5NSCam2v328PipelineFrameNumberGeneratorD0Ev */
/* Demangled: NSCam::v3::PipelineFrameNumberGenerator::~PipelineFrameNumberGenerator() */
int _ZN5NSCam2v328PipelineFrameNumberGeneratorD0Ev(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext16FrameBuilderImplENS_9allocatorIS4_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::v3::NSPipelineContext::FrameBuilderImpl, std::__1::allocator<NSCam::v3::NSPipelineContext::FrameBuilderImpl> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext16FrameBuilderImplENS_9allocatorIS4_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext15setDataCallbackEN7android2wpINS1_13IDataCallbackEEE */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::setDataCallback(android::wp<NSCam::v3::NSPipelineContext::IDataCallback>) */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext15setDataCallbackEN7android2wpINS1_13IDataCallbackEEE(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext11ContextNodeEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineContext::ContextNode> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext11ContextNodeEEEEEEE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, long> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE12do_constructEPvm(void);

/* Symbol: _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp15getBufferLockedINS1_8TItemMapI20HalMetaStreamBufferTNS0_17IMetaStreamBufferEEEEEN7android2spINT_14IStreamBufferTEEEllRKSA_ */
/* Demangled: android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalMetaStreamBufferT, NSCam::v3::IMetaStreamBuffer>::IStreamBufferT> NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::getBufferLocked<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalMetaStreamBufferT, NSCam::v3::IMetaStreamBuffer> >(long, long, NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalMetaStreamBufferT, NSCam::v3::IMetaStreamBuffer> const&) const */
int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp15getBufferLockedINS1_8TItemMapI20HalMetaStreamBufferTNS0_17IMetaStreamBufferEEEEEN7android2spINT_14IStreamBufferTEEEllRKSA_(void);

/* Symbol: _ZTv0_n24_N5NSCam2v317NSPipelineContext15PipelineContextD0Ev */
/* Demangled: virtual thunk to NSCam::v3::NSPipelineContext::PipelineContext::~PipelineContext() */
int _ZTv0_n24_N5NSCam2v317NSPipelineContext15PipelineContextD0Ev(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEEE;

/* Symbol: _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp15applyPreReleaseEl */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::applyPreRelease(long) */
int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp15applyPreReleaseEl(void);

/* Symbol: _ZThn8_N5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp12applyReleaseEl */
/* Demangled: non-virtual thunk to NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::applyRelease(long) */
int _ZThn8_N5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp12applyReleaseEl(void);

/* Symbol: __multf3 */
/* Demangled: __multf3 */
int __multf3(void);

/* Symbol: _ZNK7android12SortedVectorIlE10do_compareEPKvS3_ */
/* Demangled: android::SortedVector<long>::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorIlE10do_compareEPKvS3_(void);

/* Symbol: _ZTVN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_18IImageStreamBufferES3_EE */
/* Demangled: vtable for NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IImageStreamBuffer, NSCam::v3::IImageStreamBuffer> */
extern void* _ZTVN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_18IImageStreamBufferES3_EE;

/* Symbol: _ZNSt3__16vectorIN7android2spIN5NSCam2v317IMetaStreamBufferEEENS_9allocatorIS6_EEE7reserveEm */
/* Demangled: std::__1::vector<android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamBuffer> > >::reserve(unsigned long) */
int _ZNSt3__16vectorIN7android2spIN5NSCam2v317IMetaStreamBufferEEENS_9allocatorIS6_EEE7reserveEm(void);

/* Symbol: _ZNK7android12SortedVectorIlE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<long>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorIlE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorINS_7String8EE8do_splatEPvPKvm */
/* Demangled: android::Vector<android::String8>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_7String8EE8do_splatEPvPKvm(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl22setAppMetaStreamBufferElN7android2spINS0_17IMetaStreamBufferEEE */
/* Demangled: NSCam::v3::NSPipelineContext::FrameBuilderImpl::setAppMetaStreamBuffer(long, android::sp<NSCam::v3::IMetaStreamBuffer>) */
int _ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl22setAppMetaStreamBufferElN7android2spINS0_17IMetaStreamBufferEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamInfo> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v315IMetaStreamInfoEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_18IImageStreamBufferES7_E4ItemEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IImageStreamBuffer, NSCam::v3::IImageStreamBuffer>::Item> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_18IImageStreamBufferES7_E4ItemEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImplD1Ev */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::~PipelineContextImpl() */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImplD1Ev(void);

/* Symbol: _ZNSt3__113__assoc_stateIiE16__on_zero_sharedEv */
/* Demangled: std::__1::__assoc_state<int>::__on_zero_shared() */
int _ZNSt3__113__assoc_stateIiE16__on_zero_sharedEv(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineBuilderC2Ev */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineBuilder::PipelineBuilder() */
int _ZN5NSCam2v317NSPipelineContext15PipelineBuilderC2Ev(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIllEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<long, long> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIllEEEE;

/* Symbol: _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp13getMetaBufferEll */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::getMetaBuffer(long, long) const */
int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp13getMetaBufferEll(void);

/* Symbol: _ZN5NSCam2v329IPipelineFrameNumberGenerator6createEv */
/* Demangled: NSCam::v3::IPipelineFrameNumberGenerator::create() */
int _ZN5NSCam2v329IPipelineFrameNumberGenerator6createEv(void);

/* Symbol: _ZN5NSCam2v315InFlightRequest20waitUntilNodeDrainedEl */
/* Demangled: NSCam::v3::InFlightRequest::waitUntilNodeDrained(long) */
int _ZN5NSCam2v315InFlightRequest20waitUntilNodeDrainedEl(void);

/* Symbol: _ZTVN5NSCam2v315InFlightRequestE */
/* Demangled: vtable for NSCam::v3::InFlightRequest */
extern void* _ZTVN5NSCam2v315InFlightRequestE;

/* Symbol: _ZThn8_NK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_17IMetaStreamBufferES3_E12streamInfoAtEm */
/* Demangled: non-virtual thunk to NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer>::streamInfoAt(unsigned long) const */
int _ZThn8_NK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_17IMetaStreamBufferES3_E12streamInfoAtEm(void);

/* Symbol: _ZNK5NSCam2v315InFlightRequest9dumpStateERN7android7PrinterERKNSt3__16vectorINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEENSA_ISC_EEEE */
/* Demangled: NSCam::v3::InFlightRequest::dumpState(android::Printer&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) const */
int _ZNK5NSCam2v315InFlightRequest9dumpStateERN7android7PrinterERKNSt3__16vectorINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEENSA_ISC_EEEE(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl23setAppImageStreamBufferElN7android2spINS0_18IImageStreamBufferEEE */
/* Demangled: NSCam::v3::NSPipelineContext::FrameBuilderImpl::setAppImageStreamBuffer(long, android::sp<NSCam::v3::IImageStreamBuffer>) */
int _ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl23setAppImageStreamBufferElN7android2spINS0_18IImageStreamBufferEEE(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl27setPhysicalAppMetaStreamIdsEPKNSt3__113unordered_mapIjNS3_6vectorIlNS3_9allocatorIlEEEENS3_4hashIjEENS3_8equal_toIjEENS6_INS3_4pairIKjS8_EEEEEE */
/* Demangled: NSCam::v3::NSPipelineContext::FrameBuilderImpl::setPhysicalAppMetaStreamIds(std::__1::unordered_map<unsigned int, std::__1::vector<long, std::__1::allocator<long> >, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<unsigned int const, std::__1::vector<long, std::__1::allocator<long> > > > > const*) */
int _ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl27setPhysicalAppMetaStreamIdsEPKNSt3__113unordered_mapIjNS3_6vectorIlNS3_9allocatorIlEEEENS3_4hashIjEENS3_8equal_toIjEENS6_INS3_4pairIKjS8_EEEEEE(void);

/* Symbol: _ZTv0_n40_N5NSCam2v317NSPipelineContext15PipelineContext15onLastStrongRefEPKv */
/* Demangled: virtual thunk to NSCam::v3::NSPipelineContext::PipelineContext::onLastStrongRef(void const*) */
int _ZTv0_n40_N5NSCam2v317NSPipelineContext15PipelineContext15onLastStrongRefEPKv(void);

/* Symbol: _ZNK7android6VectorINS_7String8EE10do_destroyEPvm */
/* Demangled: android::Vector<android::String8>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorINS_7String8EE10do_destroyEPvm(void);

/* Symbol: _ZTVN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS0_17IMetaStreamBufferEEE */
/* Demangled: vtable for NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalMetaStreamBufferT, NSCam::v3::IMetaStreamBuffer> */
extern void* _ZTVN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS0_17IMetaStreamBufferEEE;

/* Symbol: _ZTVN5NSCam2v33SetIlEE */
/* Demangled: vtable for NSCam::v3::Set<long> */
extern void* _ZTVN5NSCam2v33SetIlEE;

/* Symbol: _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS0_17IMetaStreamBufferEE3addEN7android2spIS4_EE */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalMetaStreamBufferT, NSCam::v3::IMetaStreamBuffer>::add(android::sp<NSCam::v3::IMetaStreamBuffer>) */
int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS0_17IMetaStreamBufferEE3addEN7android2spIS4_EE(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandler16waitUntilDrainedEv */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::InitFrameHandler::waitUntilDrained() */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandler16waitUntilDrainedEv(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext4kickERKN7android2spINS0_14IPipelineFrameEEE */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::kick(android::sp<NSCam::v3::IPipelineFrame> const&) */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext4kickERKN7android2spINS0_14IPipelineFrameEEE(void);

/* Symbol: _ZTTN5NSCam2v317NSPipelineContext15PipelineContextE */
/* Demangled: VTT for NSCam::v3::NSPipelineContext::PipelineContext */
extern void* _ZTTN5NSCam2v317NSPipelineContext15PipelineContextE;

/* Symbol: _ZN5NSCam2v317NSPipelineContext11NodeBuilderC2ERKS2_ */
/* Demangled: NSCam::v3::NSPipelineContext::NodeBuilder::NodeBuilder(NSCam::v3::NSPipelineContext::NodeBuilder const&) */
int _ZN5NSCam2v317NSPipelineContext11NodeBuilderC2ERKS2_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, long> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp18getPipelineNodeMapEv */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::getPipelineNodeMap() const */
int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp18getPipelineNodeMapEv(void);

/* Symbol: _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIS6_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__push_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&) */
int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIS6_EEvOT_(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_17IMetaStreamBufferES7_E4ItemEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IMetaStreamBuffer, NSCam::v3::IMetaStreamBuffer>::Item> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS4_17IMetaStreamBufferES7_E4ItemEEEEEEE;

/* Symbol: _ZTv0_n24_N5NSCam2v328PipelineFrameNumberGeneratorD1Ev */
/* Demangled: virtual thunk to NSCam::v3::PipelineFrameNumberGenerator::~PipelineFrameNumberGenerator() */
int _ZTv0_n24_N5NSCam2v328PipelineFrameNumberGeneratorD1Ev(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext11NodeBuilderC1ElN7android2spINS1_10INodeActorEEE */
/* Demangled: NSCam::v3::NSPipelineContext::NodeBuilder::NodeBuilder(long, android::sp<NSCam::v3::NSPipelineContext::INodeActor>) */
int _ZN5NSCam2v317NSPipelineContext11NodeBuilderC1ElN7android2spINS1_10INodeActorEEE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v314IPipelineFrame14ImageInfoIOMapEE7do_copyEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::IPipelineFrame::ImageInfoIOMap>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v314IPipelineFrame14ImageInfoIOMapEE7do_copyEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE12do_constructEPvm */
/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::IOMap>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE12do_constructEPvm(void);

/* Symbol: _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp22findSubjectUsersLockedEl */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::findSubjectUsersLocked(long) const */
int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp22findSubjectUsersLockedEl(void);

/* Symbol: _ZTVN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImpE */
/* Demangled: vtable for NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp */
extern void* _ZTVN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImpE;

/* Symbol: _ZNK5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandler20getWaitNextInitFrameEv */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::InitFrameHandler::getWaitNextInitFrame() const */
int _ZNK5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandler20getWaitNextInitFrameEv(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContextD2Ev */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::~PipelineContext() */
int _ZN5NSCam2v317NSPipelineContext15PipelineContextD2Ev(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl12updateConfigEPNS1_17StreamBuilderImplE */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::updateConfig(NSCam::v3::NSPipelineContext::StreamBuilderImpl*) */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl12updateConfigEPNS1_17StreamBuilderImplE(void);

/* Symbol: _ZNK5NSCam2v317NSPipelineContext10NodeConfig17queryMinimalUsageEll */
/* Demangled: NSCam::v3::NSPipelineContext::NodeConfig::queryMinimalUsage(long, long) const */
int _ZNK5NSCam2v317NSPipelineContext10NodeConfig17queryMinimalUsageEll(void);

/* Symbol: _ZNK5NSCam2v317NSPipelineContext10NodeConfig9dumpStateERN7android7PrinterE */
/* Demangled: NSCam::v3::NSPipelineContext::NodeConfig::dumpState(android::Printer&) const */
int _ZNK5NSCam2v317NSPipelineContext10NodeConfig9dumpStateERN7android7PrinterE(void);

/* Symbol: _ZNK5NSCam2v317NSPipelineContext12StreamConfig9dumpStateERN7android7PrinterE */
/* Demangled: NSCam::v3::NSPipelineContext::StreamConfig::dumpState(android::Printer&) const */
int _ZNK5NSCam2v317NSPipelineContext12StreamConfig9dumpStateERN7android7PrinterE(void);

/* Symbol: _ZTv0_n64_N5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEE10commitPoolEPKc */
/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferPoolImp<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator>::commitPool(char const*) */
int _ZTv0_n64_N5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEE10commitPoolEPKc(void);

/* Symbol: _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp19finishConfigurationEv */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::finishConfiguration() */
int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp19finishConfigurationEv(void);

/* Symbol: _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp25setTrackFrameResultParamsERKNSt3__110shared_ptrIKNS0_17NSPipelineContext22TrackFrameResultParamsEEE */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::setTrackFrameResultParams(std::__1::shared_ptr<NSCam::v3::NSPipelineContext::TrackFrameResultParams const> const&) */
int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp25setTrackFrameResultParamsERKNSt3__110shared_ptrIKNS0_17NSPipelineContext22TrackFrameResultParamsEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS4_17IMetaStreamBufferEE4ItemEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalMetaStreamBufferT, NSCam::v3::IMetaStreamBuffer>::Item> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS4_17IMetaStreamBufferEE4ItemEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZNSt3__16vectorIN7android2spIN5NSCam2v317IMetaStreamBufferEEENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamBuffer> > >::__push_back_slow_path<android::sp<NSCam::v3::IMetaStreamBuffer> const&>(android::sp<NSCam::v3::IMetaStreamBuffer> const&) */
int _ZNSt3__16vectorIN7android2spIN5NSCam2v317IMetaStreamBufferEEENS_9allocatorIS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void);

/* Symbol: _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext14beginConfigureEN7android2spINS1_16IPipelineContextEEE */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::beginConfigure(android::sp<NSCam::v3::NSPipelineContext::IPipelineContext>) */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext14beginConfigureEN7android2spINS1_16IPipelineContextEEE(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext24waitUntilRootNodeDrainedEv */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::waitUntilRootNodeDrained() */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext24waitUntilRootNodeDrainedEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, long> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android6VectorIlE12do_constructEPvm */
/* Demangled: android::Vector<long>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIlE12do_constructEPvm(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void);

/* Symbol: _ZN5NSCam2v315InFlightRequestC1Ev */
/* Demangled: NSCam::v3::InFlightRequest::InFlightRequest() */
int _ZN5NSCam2v315InFlightRequestC1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_4ListIjEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::List<unsigned int> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_4ListIjEEEEE12do_constructEPvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig15ItemImageStreamEEEEEE10do_compareEPKvSC_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineContext::StreamConfig::ItemImageStream> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig15ItemImageStreamEEEEEE10do_compareEPKvSC_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, int> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIliEEE12do_constructEPvm(void);

/* Symbol: _ZTCN5NSCam2v317NSPipelineContext17DefaultDispatcherE0_NS1_11IDispatcherE */
/* Demangled: construction vtable for NSCam::v3::NSPipelineContext::IDispatcher-in-NSCam::v3::NSPipelineContext::DefaultDispatcher */
extern void* _ZTCN5NSCam2v317NSPipelineContext17DefaultDispatcherE0_NS1_11IDispatcherE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v317NSPipelineContext8IOMapSetEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, NSCam::v3::NSPipelineContext::IOMapSet> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlN5NSCam2v317NSPipelineContext8IOMapSetEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZTv0_n88_N5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEED0Ev */
/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferPoolImp<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator>::~StreamBufferPoolImp() */
int _ZTv0_n88_N5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEED0Ev(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl9dumpStateERN7android7PrinterE */
/* Demangled: NSCam::v3::NSPipelineContext::FrameBuilderImpl::dumpState(android::Printer&) */
int _ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl9dumpStateERN7android7PrinterE(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImplC1EPKc */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::PipelineContextImpl(char const*) */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImplC1EPKc(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig14ItemMetaStreamEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineContext::StreamConfig::ItemMetaStream> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig14ItemMetaStreamEEEEEE12do_constructEPvm(void);

/* Symbol: _ZTv0_n80_N5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEE13releaseToPoolEPKcN7android2spIS3_EE */
/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferPoolImp<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator>::releaseToPool(char const*, android::sp<NSCam::v3::IImageStreamBuffer>) */
int _ZTv0_n80_N5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEE13releaseToPoolEPKcN7android2spIS3_EE(void);

/* Symbol: _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_18IImageStreamBufferES3_E18onAllUsersReleasedERNS4_4ItemE */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IImageStreamBuffer, NSCam::v3::IImageStreamBuffer>::onAllUsersReleased(NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IImageStreamBuffer, NSCam::v3::IImageStreamBuffer>::Item&) */
int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_18IImageStreamBufferES3_E18onAllUsersReleasedERNS4_4ItemE(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl27setReprocessSensorTimestampEl */
/* Demangled: NSCam::v3::NSPipelineContext::FrameBuilderImpl::setReprocessSensorTimestamp(long) */
int _ZN5NSCam2v317NSPipelineContext16FrameBuilderImpl27setReprocessSensorTimestampEl(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::IMetaStreamBuffer> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317IMetaStreamBufferEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::IOMap>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE8do_splatEPvPKvm(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl25waitUntilInitFrameDrainedEv */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::waitUntilInitFrameDrained() */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl25waitUntilInitFrameDrainedEv(void);

/* Symbol: _ZTCN5NSCam2v35Utils16StreamBufferPoolINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEEE536_NS1_17IStreamBufferPoolIS3_EE */
/* Demangled: construction vtable for NSCam::v3::Utils::IStreamBufferPool<NSCam::v3::IImageStreamBuffer>-in-NSCam::v3::Utils::StreamBufferPool<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator> */
extern void* _ZTCN5NSCam2v35Utils16StreamBufferPoolINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEEE536_NS1_17IStreamBufferPoolIS3_EE;

/* Symbol: _ZTVN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImplE */
/* Demangled: vtable for NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl */
extern void* _ZTVN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImplE;

/* Symbol: _ZN5NSCam2v317NSPipelineContext13StreamBuilderC1ENS1_11eStreamTypeEN7android2spINS0_15IMetaStreamInfoEEE */
/* Demangled: NSCam::v3::NSPipelineContext::StreamBuilder::StreamBuilder(NSCam::v3::NSPipelineContext::eStreamType, android::sp<NSCam::v3::IMetaStreamInfo>) */
int _ZN5NSCam2v317NSPipelineContext13StreamBuilderC1ENS1_11eStreamTypeEN7android2spINS0_15IMetaStreamInfoEEE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v314IPipelineFrame13MetaInfoIOMapEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::IPipelineFrame::MetaInfoIOMap>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v314IPipelineFrame13MetaInfoIOMapEE8do_splatEPvPKvm(void);

/* Symbol: _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS0_17IMetaStreamBufferEE3addEN7android2spINS0_15IMetaStreamInfoEEENS7_INS0_13IUsersManagerEEE */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalMetaStreamBufferT, NSCam::v3::IMetaStreamBuffer>::add(android::sp<NSCam::v3::IMetaStreamInfo>, android::sp<NSCam::v3::IUsersManager>) */
int _ZN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS0_17IMetaStreamBufferEE3addEN7android2spINS0_15IMetaStreamInfoEEENS7_INS0_13IUsersManagerEEE(void);

/* Symbol: _ZN7android2spIKN5NSCam2v314IStreamInfoSetEEaSEPS4_ */
/* Demangled: android::sp<NSCam::v3::IStreamInfoSet const>::operator=(NSCam::v3::IStreamInfoSet const*) */
int _ZN7android2spIKN5NSCam2v314IStreamInfoSetEEaSEPS4_(void);

/* Symbol: _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp20queryIOStreamInfoSetERKlRN7android2spIKNS0_14IStreamInfoSetEEESA_ */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::queryIOStreamInfoSet(long const&, android::sp<NSCam::v3::IStreamInfoSet const>&, android::sp<NSCam::v3::IStreamInfoSet const>&) const */
int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp20queryIOStreamInfoSetERKlRN7android2spIKNS0_14IStreamInfoSetEEESA_(void);

/* Symbol: _ZNSt3__114__thread_proxyINS_5tupleIJNS_10unique_ptrINS_15__thread_structENS_14default_deleteIS3_EEEEPFvONS_6vectorIN7android2spIN5NSCam2v314IPipelineFrameEEENS_9allocatorISD_EEEEESG_EEEEEPvSL_ */
/* Demangled: void* std::__1::__thread_proxy<std::__1::tuple<std::__1::unique_ptr<std::__1::__thread_struct, std::__1::default_delete<std::__1::__thread_struct> >, void (*)(std::__1::vector<android::sp<NSCam::v3::IPipelineFrame>, std::__1::allocator<android::sp<NSCam::v3::IPipelineFrame> > >&&), std::__1::vector<android::sp<NSCam::v3::IPipelineFrame>, std::__1::allocator<android::sp<NSCam::v3::IPipelineFrame> > > > >(void*) */
int _ZNSt3__114__thread_proxyINS_5tupleIJNS_10unique_ptrINS_15__thread_structENS_14default_deleteIS3_EEEEPFvONS_6vectorIN7android2spIN5NSCam2v314IPipelineFrameEEENS_9allocatorISD_EEEEESG_EEEEEPvSL_(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl12updateConfigEPNS1_19PipelineBuilderImplE */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::updateConfig(NSCam::v3::NSPipelineContext::PipelineBuilderImpl*) */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl12updateConfigEPNS1_19PipelineBuilderImplE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext11ContextNodeEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineContext::ContextNode> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext11ContextNodeEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZTCN5NSCam2v317NSPipelineContext14DispatcherBaseE0_NS1_11IDispatcherE */
/* Demangled: construction vtable for NSCam::v3::NSPipelineContext::IDispatcher-in-NSCam::v3::NSPipelineContext::DispatcherBase */
extern void* _ZTCN5NSCam2v317NSPipelineContext14DispatcherBaseE0_NS1_11IDispatcherE;

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandlerENS_9allocatorIS6_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::InitFrameHandler, std::__1::allocator<NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::InitFrameHandler> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandlerENS_9allocatorIS6_EEEE;

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContextC1EPKc */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContext(char const*) */
int _ZN5NSCam2v317NSPipelineContext15PipelineContextC1EPKc(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl17setInitFrameCountEj */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::setInitFrameCount(unsigned int) */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl17setInitFrameCountEj(void);

/* Symbol: _ZTVN5NSCam2v317NSPipelineContext11ContextNodeE */
/* Demangled: vtable for NSCam::v3::NSPipelineContext::ContextNode */
extern void* _ZTVN5NSCam2v317NSPipelineContext11ContextNodeE;

/* Symbol: _ZN5NSCam2v328IPipelineFrameNodeMapControl6createEv */
/* Demangled: NSCam::v3::IPipelineFrameNodeMapControl::create() */
int _ZN5NSCam2v328IPipelineFrameNodeMapControl6createEv(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v314IPipelineFrame14ImageInfoIOMapEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::v3::IPipelineFrame::ImageInfoIOMap>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v314IPipelineFrame14ImageInfoIOMapEE10do_destroyEPvm(void);

/* Symbol: _ZTTN5NSCam2v317NSPipelineContext14DispatcherBaseE */
/* Demangled: VTT for NSCam::v3::NSPipelineContext::DispatcherBase */
extern void* _ZTTN5NSCam2v317NSPipelineContext14DispatcherBaseE;

/* Symbol: _ZNK5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandler32getWaitDrainedTimeoutAfterConfigEv */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::InitFrameHandler::getWaitDrainedTimeoutAfterConfig() const */
int _ZNK5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImpl16InitFrameHandler32getWaitDrainedTimeoutAfterConfigEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, long> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v312IPipelineDAG4EdgeEE8do_splatEPvPKvm */
/* Demangled: android::Vector<NSCam::v3::IPipelineDAG::Edge>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v312IPipelineDAG4EdgeEE8do_splatEPvPKvm(void);

/* Symbol: _ZThn8_N5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_18IImageStreamBufferES3_E3addEN7android2spIS3_EE */
/* Demangled: non-virtual thunk to NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<NSCam::v3::IImageStreamBuffer, NSCam::v3::IImageStreamBuffer>::add(android::sp<NSCam::v3::IImageStreamBuffer>) */
int _ZThn8_N5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapINS0_18IImageStreamBufferES3_E3addEN7android2spIS3_EE(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::v3::NSPipelineContext::IOMap>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v317NSPipelineContext5IOMapEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig15ItemImageStreamEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineContext::StreamConfig::ItemImageStream> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig15ItemImageStreamEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZTTN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImplE */
/* Demangled: VTT for NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl */
extern void* _ZTTN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImplE;

/* Symbol: _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE10do_destroyEPvm */
/* Demangled: android::Vector<android::sp<NSCam::v3::IMetaStreamBuffer> >::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorINS_2spIN5NSCam2v317IMetaStreamBufferEEEE10do_destroyEPvm(void);

/* Symbol: _ZTVN7android4ListIN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp10MyListenerEEE */
/* Demangled: vtable for android::List<NSCam::v3::NSPipelineBufferSetFrameControlImp::PipelineBufferSetFrameControlImp::MyListener> */
extern void* _ZTVN7android4ListIN5NSCam2v334NSPipelineBufferSetFrameControlImp32PipelineBufferSetFrameControlImp10MyListenerEEE;

/* Symbol: _ZTCN5NSCam2v317NSPipelineContext15PipelineContextE0_NS1_16IPipelineContextE */
/* Demangled: construction vtable for NSCam::v3::NSPipelineContext::IPipelineContext-in-NSCam::v3::NSPipelineContext::PipelineContext */
extern void* _ZTCN5NSCam2v317NSPipelineContext15PipelineContextE0_NS1_16IPipelineContextE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig14ItemMetaStreamEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineContext::StreamConfig::ItemMetaStream> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v317NSPipelineContext12StreamConfig14ItemMetaStreamEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZTv0_n40_NK5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEE8dumpPoolEv */
/* Demangled: virtual thunk to NSCam::v3::Utils::StreamBufferPoolImp<NSCam::v3::IImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer, NSCam::v3::Utils::HalImageStreamBuffer::Allocator>::dumpPool() const */
int _ZTv0_n40_NK5NSCam2v35Utils19StreamBufferPoolImpINS0_18IImageStreamBufferENS1_20HalImageStreamBufferENS4_9AllocatorEE8dumpPoolEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS4_17IMetaStreamBufferEE4ItemEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalMetaStreamBufferT, NSCam::v3::IMetaStreamBuffer>::Item> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS4_17IMetaStreamBufferEE4ItemEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK5NSCam2v317NSPipelineContext16FrameBuilderImpl23getHalMetaStreamBuffersERNSt3__16vectorIN7android2spINS0_17IMetaStreamBufferEEENS3_9allocatorIS8_EEEE */
/* Demangled: NSCam::v3::NSPipelineContext::FrameBuilderImpl::getHalMetaStreamBuffers(std::__1::vector<android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamBuffer> > >&) const */
int _ZNK5NSCam2v317NSPipelineContext16FrameBuilderImpl23getHalMetaStreamBuffersERNSt3__16vectorIN7android2spINS0_17IMetaStreamBufferEEENS3_9allocatorIS8_EEEE(void);

/* Symbol: _ZNK7android12SortedVectorIlE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<long>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorIlE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS4_17IMetaStreamBufferEE4ItemEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::sp<NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalMetaStreamBufferT, NSCam::v3::IMetaStreamBuffer>::Item> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_2spIN5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS4_17IMetaStreamBufferEE4ItemEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, std::__1::vector<android::sp<NSCam::v3::IMetaStreamBuffer>, std::__1::allocator<android::sp<NSCam::v3::IMetaStreamBuffer> > > > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNSt3__16vectorINS_2spIN5NSCam2v317IMetaStreamBufferEEENS2_9allocatorIS8_EEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZTVN5NSCam2v317NSPipelineContext14PipelineConfigE */
/* Demangled: vtable for NSCam::v3::NSPipelineContext::PipelineConfig */
extern void* _ZTVN5NSCam2v317NSPipelineContext14PipelineConfigE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, long> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIllEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS0_17IMetaStreamBufferEE12streamInfoAtEm */
/* Demangled: NSCam::v3::NSPipelineBufferSetFrameControlImp::TItemMap<HalMetaStreamBufferT, NSCam::v3::IMetaStreamBuffer>::streamInfoAt(unsigned long) const */
int _ZNK5NSCam2v334NSPipelineBufferSetFrameControlImp8TItemMapI20HalMetaStreamBufferTNS0_17IMetaStreamBufferEE12streamInfoAtEm(void);

/* Symbol: _ZNK7android6VectorIN5NSCam2v312IPipelineDAG4EdgeEE10do_destroyEPvm */
/* Demangled: android::Vector<NSCam::v3::IPipelineDAG::Edge>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIN5NSCam2v312IPipelineDAG4EdgeEE10do_destroyEPvm(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImplD0Ev */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineContext::PipelineContextImpl::~PipelineContextImpl() */
int _ZN5NSCam2v317NSPipelineContext15PipelineContext19PipelineContextImplD0Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_18DefaultKeyedVectorIljEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<long, android::DefaultKeyedVector<long, unsigned int> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIlNS_18DefaultKeyedVectorIljEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5NSCam2v317NSPipelineContext15PipelineBuilderC1Ev */
/* Demangled: NSCam::v3::NSPipelineContext::PipelineBuilder::PipelineBuilder() */
int _ZN5NSCam2v317NSPipelineContext15PipelineBuilderC1Ev(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBMTKCAM_PIPELINE_H */
