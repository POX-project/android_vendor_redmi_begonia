/*
 * Reverse-Engineered ABI Specification for: libmtkcam_3rdparty.vidhance.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libmtkcam_3rdparty.vidhance.so
 */

#ifndef BEGONIA_RE_LIBMTKCAM_3RDPARTY_VIDHANCE_H
#define BEGONIA_RE_LIBMTKCAM_3RDPARTY_VIDHANCE_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinEN8vidhance20VidhanceProviderImplEEENS_9allocatorIS7_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, vidhance::VidhanceProviderImpl>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, vidhance::VidhanceProviderImpl> > >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinEN8vidhance20VidhanceProviderImplEEENS_9allocatorIS7_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZNSt3__15dequeIN8vidhance5QDataENS_9allocatorIS2_EEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<vidhance::QData, std::__1::allocator<vidhance::QData> >::__add_back_capacity() */
int _ZNSt3__15dequeIN8vidhance5QDataENS_9allocatorIS2_EEE19__add_back_capacityEv(void);

/* Symbol: _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE;

/* Symbol: _ZN8vidhance8PlatformD0Ev */
/* Demangled: vidhance::Platform::~Platform() */
int _ZN8vidhance8PlatformD0Ev(void);

/* Symbol: _ZN10ISensorAPI10GyroReader24allocateVidhanceInstanceEv */
/* Demangled: ISensorAPI::GyroReader::allocateVidhanceInstance() */
int _ZN10ISensorAPI10GyroReader24allocateVidhanceInstanceEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPN7android8hardware7sensors4V1_05EventENS_9allocatorIS6_EEE10push_frontEOS6_ */
/* Demangled: std::__1::__split_buffer<android::hardware::sensors::V1_0::Event*, std::__1::allocator<android::hardware::sensors::V1_0::Event*> >::push_front(android::hardware::sensors::V1_0::Event*&&) */
int _ZNSt3__114__split_bufferIPN7android8hardware7sensors4V1_05EventENS_9allocatorIS6_EEE10push_frontEOS6_(void);

/* Symbol: _ZZN8vidhance20VidhanceProviderImpl8propertyEvE11initialized */
/* Demangled: vidhance::VidhanceProviderImpl::property()::initialized */
extern void* _ZZN8vidhance20VidhanceProviderImpl8propertyEvE11initialized;

/* Symbol: _ZNK8vidhance8Platform18getInputResolutionERKNS_12Resolution2DIiEERKNS_11StreamUsageE */
/* Demangled: vidhance::Platform::getInputResolution(vidhance::Resolution2D<int> const&, vidhance::StreamUsage const&) const */
int _ZNK8vidhance8Platform18getInputResolutionERKNS_12Resolution2DIiEERKNS_11StreamUsageE(void);

/* Symbol: _ZNK10ISensorAPI16SensorReaderImpl15getSamplePeriodEv */
/* Demangled: ISensorAPI::SensorReaderImpl::getSamplePeriod() const */
int _ZNK10ISensorAPI16SensorReaderImpl15getSamplePeriodEv(void);

/* Symbol: _ZN9OISReaderC2ERKNSt3__18functionIFNS0_6vectorI18ois_lens_meta_dataNS0_9allocatorIS3_EEEE20vidhance_date_time_t20vidhance_time_span_tEEES7_ */
/* Demangled: OISReader::OISReader(std::__1::function<std::__1::vector<ois_lens_meta_data, std::__1::allocator<ois_lens_meta_data> > (vidhance_date_time_t, vidhance_time_span_t)> const&, vidhance_date_time_t) */
int _ZN9OISReaderC2ERKNSt3__18functionIFNS0_6vectorI18ois_lens_meta_dataNS0_9allocatorIS3_EEEE20vidhance_date_time_t20vidhance_time_span_tEEES7_(void);

/* Symbol: _ZNK8vidhance8Platform21getOutputGrallocUsageERKNS_11StreamUsageE */
/* Demangled: vidhance::Platform::getOutputGrallocUsage(vidhance::StreamUsage const&) const */
int _ZNK8vidhance8Platform21getOutputGrallocUsageERKNS_11StreamUsageE(void);

/* Symbol: _Z22nativeToVidhanceFormati */
/* Demangled: nativeToVidhanceFormat(int) */
int _Z22nativeToVidhanceFormati(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _ZTVNSt3__120__shared_ptr_pointerIPN10ISensorAPI10GyroReaderENS_14default_deleteIS2_EENS_9allocatorIS2_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_pointer<ISensorAPI::GyroReader*, std::__1::default_delete<ISensorAPI::GyroReader>, std::__1::allocator<ISensorAPI::GyroReader> > */
extern void* _ZTVNSt3__120__shared_ptr_pointerIPN10ISensorAPI10GyroReaderENS_14default_deleteIS2_EENS_9allocatorIS2_EEEE;

/* Symbol: _ZN8vidhance8PlatformC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: vidhance::Platform::Platform(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN8vidhance8PlatformC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _Z21allocateGraphicBufferiiii */
/* Demangled: allocateGraphicBuffer(int, int, int, int) */
int _Z21allocateGraphicBufferiiii(void);

/* Symbol: _ZTV19SensorEventCallback */
/* Demangled: vtable for SensorEventCallback */
extern void* _ZTV19SensorEventCallback;

/* Symbol: _ZN9OISReader7processE20vidhance_date_time_t20vidhance_time_span_t */
/* Demangled: OISReader::process(vidhance_date_time_t, vidhance_time_span_t) */
int _ZN9OISReader7processE20vidhance_date_time_t20vidhance_time_span_t(void);

/* Symbol: _Z17dumpJoinImageInfoNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERKN5NSCam16NSPipelinePlugin15JoinImageInfo_tE */
/* Demangled: dumpJoinImageInfo(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, NSCam::NSPipelinePlugin::JoinImageInfo_t const&) */
int _Z17dumpJoinImageInfoNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERKN5NSCam16NSPipelinePlugin15JoinImageInfo_tE(void);

/* Symbol: _ZTVNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _Z22vidhanceToNativeFormati */
/* Demangled: vidhanceToNativeFormat(int) */
int _Z22vidhanceToNativeFormati(void);

/* Symbol: _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: VTT for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZN9OISReader27getLensPositionMeasurementsE20vidhance_date_time_t20vidhance_time_span_t */
/* Demangled: OISReader::getLensPositionMeasurements(vidhance_date_time_t, vidhance_time_span_t) */
int _ZN9OISReader27getLensPositionMeasurementsE20vidhance_date_time_t20vidhance_time_span_t(void);

/* Symbol: _ZN8vidhance10Properties6updateEv */
/* Demangled: vidhance::Properties::update() */
int _ZN8vidhance10Properties6updateEv(void);

/* Symbol: _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZN8vidhance8PlatformD2Ev */
/* Demangled: vidhance::Platform::~Platform() */
int _ZN8vidhance8PlatformD2Ev(void);

/* Symbol: _ZN10ThreadPoolC1Em */
/* Demangled: ThreadPool::ThreadPool(unsigned long) */
int _ZN10ThreadPoolC1Em(void);

/* Symbol: _ZNSt3__113move_backwardIPN7android8hardware7sensors4V1_05EventES5_S6_RS5_PS6_lLl51EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SG_SF_PNS_9enable_ifIXsr27__is_random_access_iteratorISG_EE5valueEvE4typeE */
/* Demangled: _ZNSt3__113move_backwardIPN7android8hardware7sensors4V1_05EventES5_S6_RS5_PS6_lLl51EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SG_SF_PNS_9enable_ifIXsr27__is_random_access_iteratorISG_EE5valueEvE4typeE */
int _ZNSt3__113move_backwardIPN7android8hardware7sensors4V1_05EventES5_S6_RS5_PS6_lLl51EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SG_SF_PNS_9enable_ifIXsr27__is_random_access_iteratorISG_EE5valueEvE4typeE(void);

/* Symbol: _ZN8vidhance15VidhanceContext16registerCallbackEPFvP18_vidhance_result_tE */
/* Demangled: vidhance::VidhanceContext::registerCallback(void (*)(_vidhance_result_t*)) */
int _ZN8vidhance15VidhanceContext16registerCallbackEPFvP18_vidhance_result_tE(void);

/* Symbol: _ZNSt3__16vectorIN8vidhance12Resolution2DIiEENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_ */
/* Demangled: void std::__1::vector<vidhance::Resolution2D<int>, std::__1::allocator<vidhance::Resolution2D<int> > >::__push_back_slow_path<vidhance::Resolution2D<int> >(vidhance::Resolution2D<int>&&) */
int _ZNSt3__16vectorIN8vidhance12Resolution2DIiEENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_(void);

/* Symbol: _ZNSt3__120__shared_ptr_pointerIPN10ISensorAPI10GyroReaderENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_pointer<ISensorAPI::GyroReader*, std::__1::default_delete<ISensorAPI::GyroReader>, std::__1::allocator<ISensorAPI::GyroReader> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_pointerIPN10ISensorAPI10GyroReaderENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _Z17lockGraphicBufferPviPS_ */
/* Demangled: lockGraphicBuffer(void*, int, void**) */
int _Z17lockGraphicBufferPviPS_(void);

/* Symbol: _ZN10ISensorAPI16SensorReaderImpl10initializeEv */
/* Demangled: ISensorAPI::SensorReaderImpl::initialize() */
int _ZN10ISensorAPI16SensorReaderImpl10initializeEv(void);

/* Symbol: _Z29createGraphicBufferFromHandleiiiiiPK13native_handleN7android13GraphicBuffer16HandleWrapMethodE */
/* Demangled: createGraphicBufferFromHandle(int, int, int, int, int, native_handle const*, android::GraphicBuffer::HandleWrapMethod) */
int _Z29createGraphicBufferFromHandleiiiiiPK13native_handleN7android13GraphicBuffer16HandleWrapMethodE(void);

/* Symbol: _ZTVN8vidhance8PlatformE */
/* Demangled: vtable for vidhance::Platform */
extern void* _ZTVN8vidhance8PlatformE;

/* Symbol: _ZNK9OISReader12getOisSensorEv */
/* Demangled: OISReader::getOisSensor() const */
int _ZNK9OISReader12getOisSensorEv(void);

/* Symbol: _ZN8vidhance15VidhanceContext11createImageERKN7android2spINS1_13GraphicBufferEEEPKv8FreeFlag */
/* Demangled: vidhance::VidhanceContext::createImage(android::sp<android::GraphicBuffer> const&, void const*, FreeFlag) */
int _ZN8vidhance15VidhanceContext11createImageERKN7android2spINS1_13GraphicBufferEEEPKv8FreeFlag(void);

/* Symbol: _ZN8vidhance42_CreatePluginProvider_VidhanceProviderImplEv */
/* Demangled: vidhance::_CreatePluginProvider_VidhanceProviderImpl() */
int _ZN8vidhance42_CreatePluginProvider_VidhanceProviderImplEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPNS_8functionIFvvEEENS_9allocatorIS4_EEE9push_backEOS4_ */
/* Demangled: std::__1::__split_buffer<std::__1::function<void ()>*, std::__1::allocator<std::__1::function<void ()>*> >::push_back(std::__1::function<void ()>*&&) */
int _ZNSt3__114__split_bufferIPNS_8functionIFvvEEENS_9allocatorIS4_EEE9push_backEOS4_(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceINS_13packaged_taskIFvvEEENS_9allocatorIS3_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<std::__1::packaged_task<void ()>, std::__1::allocator<std::__1::packaged_task<void ()> > > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceINS_13packaged_taskIFvvEEENS_9allocatorIS3_EEEE;

/* Symbol: _ZNK8vidhance8Platform15getOutputFormatERKNS_11StreamUsageE */
/* Demangled: vidhance::Platform::getOutputFormat(vidhance::StreamUsage const&) const */
int _ZNK8vidhance8Platform15getOutputFormatERKNS_11StreamUsageE(void);

/* Symbol: _ZNSt3__120__shared_ptr_pointerIPN10ISensorAPI10GyroReaderENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_pointer<ISensorAPI::GyroReader*, std::__1::default_delete<ISensorAPI::GyroReader>, std::__1::allocator<ISensorAPI::GyroReader> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_pointerIPN10ISensorAPI10GyroReaderENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN10ISensorAPI16SensorReaderImplD1Ev */
/* Demangled: ISensorAPI::SensorReaderImpl::~SensorReaderImpl() */
int _ZN10ISensorAPI16SensorReaderImplD1Ev(void);

/* Symbol: _ZNSt3__114__split_bufferIPNS_8functionIFvvEEERNS_9allocatorIS4_EEE10push_frontERKS4_ */
/* Demangled: std::__1::__split_buffer<std::__1::function<void ()>*, std::__1::allocator<std::__1::function<void ()>*>&>::push_front(std::__1::function<void ()>* const&) */
int _ZNSt3__114__split_bufferIPNS_8functionIFvvEEERNS_9allocatorIS4_EEE10push_frontERKS4_(void);

/* Symbol: _ZNSt3__15dequeINS_8functionIFvvEEENS_9allocatorIS3_EEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<std::__1::function<void ()>, std::__1::allocator<std::__1::function<void ()> > >::__add_back_capacity() */
int _ZNSt3__15dequeINS_8functionIFvvEEENS_9allocatorIS3_EEE19__add_back_capacityEv(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void);

/* Symbol: _ZNK15DefaultPlatform17overrideFrameDataEPN8vidhance12frame_data_tE */
/* Demangled: DefaultPlatform::overrideFrameData(vidhance::frame_data_t*) const */
int _ZNK15DefaultPlatform17overrideFrameDataEPN8vidhance12frame_data_tE(void);

/* Symbol: _ZNSt3__112__deque_baseINS_8functionIFvvEEENS_9allocatorIS3_EEE5clearEv */
/* Demangled: std::__1::__deque_base<std::__1::function<void ()>, std::__1::allocator<std::__1::function<void ()> > >::clear() */
int _ZNSt3__112__deque_baseINS_8functionIFvvEEENS_9allocatorIS3_EEE5clearEv(void);

/* Symbol: _Z22dummyLockGraphicBufferPviPS_ */
/* Demangled: dummyLockGraphicBuffer(void*, int, void**) */
int _Z22dummyLockGraphicBufferPviPS_(void);

/* Symbol: _ZN20GraphicBufferWrapperC1EN7android2spINS0_13GraphicBufferEEE8FreeFlag */
/* Demangled: GraphicBufferWrapper::GraphicBufferWrapper(android::sp<android::GraphicBuffer>, FreeFlag) */
int _ZN20GraphicBufferWrapperC1EN7android2spINS0_13GraphicBufferEEE8FreeFlag(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceINS_13packaged_taskIFvvEEENS_9allocatorIS3_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<std::__1::packaged_task<void ()>, std::__1::allocator<std::__1::packaged_task<void ()> > >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceINS_13packaged_taskIFvvEEENS_9allocatorIS3_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPN7android8hardware7sensors4V1_05EventERNS_9allocatorIS6_EEE10push_frontERKS6_ */
/* Demangled: std::__1::__split_buffer<android::hardware::sensors::V1_0::Event*, std::__1::allocator<android::hardware::sensors::V1_0::Event*>&>::push_front(android::hardware::sensors::V1_0::Event* const&) */
int _ZNSt3__114__split_bufferIPN7android8hardware7sensors4V1_05EventERNS_9allocatorIS6_EEE10push_frontERKS6_(void);

/* Symbol: _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZNSt3__112__deque_baseIN8vidhance5QDataENS_9allocatorIS2_EEE5clearEv */
/* Demangled: std::__1::__deque_base<vidhance::QData, std::__1::allocator<vidhance::QData> >::clear() */
int _ZNSt3__112__deque_baseIN8vidhance5QDataENS_9allocatorIS2_EEE5clearEv(void);

/* Symbol: _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m */
/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned long) */
int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m(void);

/* Symbol: _ZN8vidhance15VidhanceContext10videoStartEv */
/* Demangled: vidhance::VidhanceContext::videoStart() */
int _ZN8vidhance15VidhanceContext10videoStartEv(void);

/* Symbol: _ZN8vidhance15VidhanceContextD0Ev */
/* Demangled: vidhance::VidhanceContext::~VidhanceContext() */
int _ZN8vidhance15VidhanceContextD0Ev(void);

/* Symbol: _Z21allocateGraphicBufferiiiiPPvS0_Pi */
/* Demangled: allocateGraphicBuffer(int, int, int, int, void**, void**, int*) */
int _Z21allocateGraphicBufferiiiiPPvS0_Pi(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinEN8vidhance20VidhanceProviderImplEEENS_9allocatorIS7_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, vidhance::VidhanceProviderImpl>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, vidhance::VidhanceProviderImpl> > > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinEN8vidhance20VidhanceProviderImplEEENS_9allocatorIS7_EEEE;

/* Symbol: _ZZN8vidhance20VidhanceProviderImpl8propertyEvE4prop */
/* Demangled: vidhance::VidhanceProviderImpl::property()::prop */
extern void* _ZZN8vidhance20VidhanceProviderImpl8propertyEvE4prop;

/* Symbol: _ZN15DefaultPlatformC2Ev */
/* Demangled: DefaultPlatform::DefaultPlatform() */
int _ZN15DefaultPlatformC2Ev(void);

/* Symbol: _ZN9OISReader24allocateVidhanceInstanceEv */
/* Demangled: OISReader::allocateVidhanceInstance() */
int _ZN9OISReader24allocateVidhanceInstanceEv(void);

/* Symbol: _ZN8vidhance10PropertiesC2Ev */
/* Demangled: vidhance::Properties::Properties() */
int _ZN8vidhance10PropertiesC2Ev(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _ZN8vidhance15VidhanceContext11createImageEP20GraphicBufferWrapper6stridePKv */
/* Demangled: vidhance::VidhanceContext::createImage(GraphicBufferWrapper*, stride, void const*) */
int _ZN8vidhance15VidhanceContext11createImageEP20GraphicBufferWrapper6stridePKv(void);

/* Symbol: _ZN10ISensorAPI16SensorReaderImplC2EN7android8hardware7sensors4V1_010SensorTypeENSt3__18functionIFNS4_5EventERKS8_EEEi */
/* Demangled: ISensorAPI::SensorReaderImpl::SensorReaderImpl(android::hardware::sensors::V1_0::SensorType, std::__1::function<android::hardware::sensors::V1_0::Event (android::hardware::sensors::V1_0::Event const&)>, int) */
int _ZN10ISensorAPI16SensorReaderImplC2EN7android8hardware7sensors4V1_010SensorTypeENSt3__18functionIFNS4_5EventERKS8_EEEi(void);

/* Symbol: _ZNSt3__120__shared_ptr_pointerIPN8vidhance10PropertiesENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_pointer<vidhance::Properties*, std::__1::default_delete<vidhance::Properties>, std::__1::allocator<vidhance::Properties> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_pointerIPN8vidhance10PropertiesENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN8vidhance15VidhanceContext5flushEv */
/* Demangled: vidhance::VidhanceContext::flush() */
int _ZN8vidhance15VidhanceContext5flushEv(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _ZN8vidhance15VidhanceContextC1EP20_vidhance_settings_t */
/* Demangled: vidhance::VidhanceContext::VidhanceContext(_vidhance_settings_t*) */
int _ZN8vidhance15VidhanceContextC1EP20_vidhance_settings_t(void);

/* Symbol: _Z24dummyUnlockGraphicBufferPv */
/* Demangled: dummyUnlockGraphicBuffer(void*) */
int _Z24dummyUnlockGraphicBufferPv(void);

/* Symbol: _ZNSt3__114__split_bufferIPN8vidhance5QDataENS_9allocatorIS3_EEE10push_frontEOS3_ */
/* Demangled: std::__1::__split_buffer<vidhance::QData*, std::__1::allocator<vidhance::QData*> >::push_front(vidhance::QData*&&) */
int _ZNSt3__114__split_bufferIPN8vidhance5QDataENS_9allocatorIS3_EEE10push_frontEOS3_(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZTVN10ISensorAPI16SensorReaderImplE */
/* Demangled: vtable for ISensorAPI::SensorReaderImpl */
extern void* _ZTVN10ISensorAPI16SensorReaderImplE;

/* Symbol: _ZN10ThreadPoolD2Ev */
/* Demangled: ThreadPool::~ThreadPool() */
int _ZN10ThreadPoolD2Ev(void);

/* Symbol: _ZN8vidhance15VidhanceContextC2EP20_vidhance_settings_t */
/* Demangled: vidhance::VidhanceContext::VidhanceContext(_vidhance_settings_t*) */
int _ZN8vidhance15VidhanceContextC2EP20_vidhance_settings_t(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIN8vidhance11StreamUsageENS_10shared_ptrI12SensorReaderEEEENS_19__map_value_compareIS3_S7_NS_4lessIS3_EELb1EEENS_9allocatorIS7_EEE7destroyEPNS_11__tree_nodeIS7_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<vidhance::StreamUsage, std::__1::shared_ptr<SensorReader> >, std::__1::__map_value_compare<vidhance::StreamUsage, std::__1::__value_type<vidhance::StreamUsage, std::__1::shared_ptr<SensorReader> >, std::__1::less<vidhance::StreamUsage>, true>, std::__1::allocator<std::__1::__value_type<vidhance::StreamUsage, std::__1::shared_ptr<SensorReader> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<vidhance::StreamUsage, std::__1::shared_ptr<SensorReader> >, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIN8vidhance11StreamUsageENS_10shared_ptrI12SensorReaderEEEENS_19__map_value_compareIS3_S7_NS_4lessIS3_EELb1EEENS_9allocatorIS7_EEE7destroyEPNS_11__tree_nodeIS7_PvEE(void);

/* Symbol: _ZNK8vidhance10Properties20isConfigurationValidEv */
/* Demangled: vidhance::Properties::isConfigurationValid() const */
int _ZNK8vidhance10Properties20isConfigurationValidEv(void);

/* Symbol: _ZN8vidhance15VidhanceContextD2Ev */
/* Demangled: vidhance::VidhanceContext::~VidhanceContext() */
int _ZN8vidhance15VidhanceContextD2Ev(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void);

/* Symbol: _ZNSt3__120__shared_ptr_pointerIPN8vidhance10PropertiesENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_pointer<vidhance::Properties*, std::__1::default_delete<vidhance::Properties>, std::__1::allocator<vidhance::Properties> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_pointerIPN8vidhance10PropertiesENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN8vidhance15VidhanceContext17preregisterOutputEP17_vidhance_image_t */
/* Demangled: vidhance::VidhanceContext::preregisterOutput(_vidhance_image_t*) */
int _ZN8vidhance15VidhanceContext17preregisterOutputEP17_vidhance_image_t(void);

/* Symbol: _Z19createGraphicBufferiiiiiPvbPS_S0_ */
/* Demangled: createGraphicBuffer(int, int, int, int, int, void*, bool, void**, void**) */
int _Z19createGraphicBufferiiiiiPvbPS_S0_(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinEN8vidhance20VidhanceProviderImplEEENS_9allocatorIS7_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, vidhance::VidhanceProviderImpl>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, vidhance::VidhanceProviderImpl> > >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinEN8vidhance20VidhanceProviderImplEEENS_9allocatorIS7_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiNS_6vectorIN8vidhance12Resolution2DIiEENS_9allocatorIS5_EEEEEENS_19__map_value_compareIiS9_NS_4lessIiEELb1EEENS6_IS9_EEE16__construct_nodeIJRKNS_4pairIKiS8_EEEEENS_10unique_ptrINS_11__tree_nodeIS9_PvEENS_22__tree_node_destructorINS6_ISP_EEEEEEDpOT_ */
/* Demangled: std::__1::unique_ptr<std::__1::__tree_node<std::__1::__value_type<int, std::__1::vector<vidhance::Resolution2D<int>, std::__1::allocator<vidhance::Resolution2D<int> > > >, void*>, std::__1::__tree_node_destructor<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, std::__1::vector<vidhance::Resolution2D<int>, std::__1::allocator<vidhance::Resolution2D<int> > > >, void*> > > > std::__1::__tree<std::__1::__value_type<int, std::__1::vector<vidhance::Resolution2D<int>, std::__1::allocator<vidhance::Resolution2D<int> > > >, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::vector<vidhance::Resolution2D<int>, std::__1::allocator<vidhance::Resolution2D<int> > > >, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, std::__1::vector<vidhance::Resolution2D<int>, std::__1::allocator<vidhance::Resolution2D<int> > > > > >::__construct_node<std::__1::pair<int const, std::__1::vector<vidhance::Resolution2D<int>, std::__1::allocator<vidhance::Resolution2D<int> > > > const&>(std::__1::pair<int const, std::__1::vector<vidhance::Resolution2D<int>, std::__1::allocator<vidhance::Resolution2D<int> > > > const&) */
int _ZNSt3__16__treeINS_12__value_typeIiNS_6vectorIN8vidhance12Resolution2DIiEENS_9allocatorIS5_EEEEEENS_19__map_value_compareIiS9_NS_4lessIiEELb1EEENS6_IS9_EEE16__construct_nodeIJRKNS_4pairIKiS8_EEEEENS_10unique_ptrINS_11__tree_nodeIS9_PvEENS_22__tree_node_destructorINS6_ISP_EEEEEEDpOT_(void);

/* Symbol: _ZN10ISensorAPI16SensorReaderImpl7disableEv */
/* Demangled: ISensorAPI::SensorReaderImpl::disable() */
int _ZN10ISensorAPI16SensorReaderImpl7disableEv(void);

/* Symbol: _ZNSt3__14copyIN7android8hardware7sensors4V1_05EventEPS5_RS5_PS6_lLl51ENS_20back_insert_iteratorINS_6vectorIS5_NS_9allocatorIS5_EEEEEEEET5_NS_16__deque_iteratorIT_T0_T1_T2_T3_XT4_EEESM_SF_ */
/* Demangled: std::__1::back_insert_iterator<std::__1::vector<android::hardware::sensors::V1_0::Event, std::__1::allocator<android::hardware::sensors::V1_0::Event> > > std::__1::copy<android::hardware::sensors::V1_0::Event, android::hardware::sensors::V1_0::Event*, android::hardware::sensors::V1_0::Event&, android::hardware::sensors::V1_0::Event**, long, 51l, std::__1::back_insert_iterator<std::__1::vector<android::hardware::sensors::V1_0::Event, std::__1::allocator<android::hardware::sensors::V1_0::Event> > > >(std::__1::__deque_iterator<android::hardware::sensors::V1_0::Event, android::hardware::sensors::V1_0::Event*, android::hardware::sensors::V1_0::Event&, android::hardware::sensors::V1_0::Event**, long, 51l>, std::__1::__deque_iterator<android::hardware::sensors::V1_0::Event, android::hardware::sensors::V1_0::Event*, android::hardware::sensors::V1_0::Event&, android::hardware::sensors::V1_0::Event**, long, 51l>, std::__1::back_insert_iterator<std::__1::vector<android::hardware::sensors::V1_0::Event, std::__1::allocator<android::hardware::sensors::V1_0::Event> > >) */
int _ZNSt3__14copyIN7android8hardware7sensors4V1_05EventEPS5_RS5_PS6_lLl51ENS_20back_insert_iteratorINS_6vectorIS5_NS_9allocatorIS5_EEEEEEEET5_NS_16__deque_iteratorIT_T0_T1_T2_T3_XT4_EEESM_SF_(void);

/* Symbol: _ZN8vidhance15VidhanceContext16preregisterInputERKN7android2spINS1_13GraphicBufferEEEPKv */
/* Demangled: vidhance::VidhanceContext::preregisterInput(android::sp<android::GraphicBuffer> const&, void const*) */
int _ZN8vidhance15VidhanceContext16preregisterInputERKN7android2spINS1_13GraphicBufferEEEPKv(void);

/* Symbol: _Z9drawFramePKN5NSCam12IImageBufferE */
/* Demangled: drawFrame(NSCam::IImageBuffer const*) */
int _Z9drawFramePKN5NSCam12IImageBufferE(void);

/* Symbol: _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE16_NS_13basic_ostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE16_NS_13basic_ostreamIcS2_EE;

/* Symbol: _ZNK8vidhance8Platform25getMaximumInputResolutionERKNS_20FeatureConfigurationERKNS_12Resolution2DIiEERKNS_11StreamUsageE */
/* Demangled: vidhance::Platform::getMaximumInputResolution(vidhance::FeatureConfiguration const&, vidhance::Resolution2D<int> const&, vidhance::StreamUsage const&) const */
int _ZNK8vidhance8Platform25getMaximumInputResolutionERKNS_20FeatureConfigurationERKNS_12Resolution2DIiEERKNS_11StreamUsageE(void);

/* Symbol: _ZN10ISensorAPI16SensorReaderImpl12printSensorsEv */
/* Demangled: ISensorAPI::SensorReaderImpl::printSensors() */
int _ZN10ISensorAPI16SensorReaderImpl12printSensorsEv(void);

/* Symbol: _ZN8vidhance15VidhanceContext17invalidateBuffersEv */
/* Demangled: vidhance::VidhanceContext::invalidateBuffers() */
int _ZN8vidhance15VidhanceContext17invalidateBuffersEv(void);

/* Symbol: _ZN8vidhance15VidhanceContext17preregisterOutputERKN7android2spINS1_13GraphicBufferEEEPKv */
/* Demangled: vidhance::VidhanceContext::preregisterOutput(android::sp<android::GraphicBuffer> const&, void const*) */
int _ZN8vidhance15VidhanceContext17preregisterOutputERKN7android2spINS1_13GraphicBufferEEEPKv(void);

/* Symbol: _ZNSt3__114__split_bufferIPN8vidhance5QDataERNS_9allocatorIS3_EEE10push_frontERKS3_ */
/* Demangled: std::__1::__split_buffer<vidhance::QData*, std::__1::allocator<vidhance::QData*>&>::push_front(vidhance::QData* const&) */
int _ZNSt3__114__split_bufferIPN8vidhance5QDataERNS_9allocatorIS3_EEE10push_frontERKS3_(void);

/* Symbol: _ZNK8vidhance8Platform18getInputResolutionERKNS_20FeatureConfigurationERKNS_12Resolution2DIiEERKNS_11StreamUsageE */
/* Demangled: vidhance::Platform::getInputResolution(vidhance::FeatureConfiguration const&, vidhance::Resolution2D<int> const&, vidhance::StreamUsage const&) const */
int _ZNK8vidhance8Platform18getInputResolutionERKNS_20FeatureConfigurationERKNS_12Resolution2DIiEERKNS_11StreamUsageE(void);

/* Symbol: _ZN8vidhance8PlatformD1Ev */
/* Demangled: vidhance::Platform::~Platform() */
int _ZN8vidhance8PlatformD1Ev(void);

/* Symbol: _ZNK8vidhance10Properties16logConfigurationEv */
/* Demangled: vidhance::Properties::logConfiguration() const */
int _ZNK8vidhance10Properties16logConfigurationEv(void);

/* Symbol: _ZN12SensorReader13suspendedTimeE */
/* Demangled: SensorReader::suspendedTime */
extern void* _ZN12SensorReader13suspendedTimeE;

/* Symbol: _ZN8vidhance15VidhanceContext4sendEP17_vidhance_input_t */
/* Demangled: vidhance::VidhanceContext::send(_vidhance_input_t*) */
int _ZN8vidhance15VidhanceContext4sendEP17_vidhance_input_t(void);

/* Symbol: _ZNSt3__114__split_bufferIPN8vidhance5QDataERNS_9allocatorIS3_EEE9push_backEOS3_ */
/* Demangled: std::__1::__split_buffer<vidhance::QData*, std::__1::allocator<vidhance::QData*>&>::push_back(vidhance::QData*&&) */
int _ZNSt3__114__split_bufferIPN8vidhance5QDataERNS_9allocatorIS3_EEE9push_backEOS3_(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void);

/* Symbol: _Z19unlockGraphicBufferPv */
/* Demangled: unlockGraphicBuffer(void*) */
int _Z19unlockGraphicBufferPv(void);

/* Symbol: _ZNSt3__15dequeIN7android8hardware7sensors4V1_05EventENS_9allocatorIS5_EEE5eraseENS_16__deque_iteratorIS5_PKS5_RSA_PKSB_lLl51EEESF_ */
/* Demangled: std::__1::deque<android::hardware::sensors::V1_0::Event, std::__1::allocator<android::hardware::sensors::V1_0::Event> >::erase(std::__1::__deque_iterator<android::hardware::sensors::V1_0::Event, android::hardware::sensors::V1_0::Event const*, android::hardware::sensors::V1_0::Event const&, android::hardware::sensors::V1_0::Event const* const*, long, 51l>, std::__1::__deque_iterator<android::hardware::sensors::V1_0::Event, android::hardware::sensors::V1_0::Event const*, android::hardware::sensors::V1_0::Event const&, android::hardware::sensors::V1_0::Event const* const*, long, 51l>) */
int _ZNSt3__15dequeIN7android8hardware7sensors4V1_05EventENS_9allocatorIS5_EEE5eraseENS_16__deque_iteratorIS5_PKS5_RSA_PKSB_lLl51EEESF_(void);

/* Symbol: _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE;

/* Symbol: _ZN8vidhance8PlatformC2Ev */
/* Demangled: vidhance::Platform::Platform() */
int _ZN8vidhance8PlatformC2Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIN8vidhance11StreamUsageENS_10shared_ptrI9OISReaderEEEENS_19__map_value_compareIS3_S7_NS_4lessIS3_EELb1EEENS_9allocatorIS7_EEE7destroyEPNS_11__tree_nodeIS7_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<vidhance::StreamUsage, std::__1::shared_ptr<OISReader> >, std::__1::__map_value_compare<vidhance::StreamUsage, std::__1::__value_type<vidhance::StreamUsage, std::__1::shared_ptr<OISReader> >, std::__1::less<vidhance::StreamUsage>, true>, std::__1::allocator<std::__1::__value_type<vidhance::StreamUsage, std::__1::shared_ptr<OISReader> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<vidhance::StreamUsage, std::__1::shared_ptr<OISReader> >, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIN8vidhance11StreamUsageENS_10shared_ptrI9OISReaderEEEENS_19__map_value_compareIS3_S7_NS_4lessIS3_EELb1EEENS_9allocatorIS7_EEE7destroyEPNS_11__tree_nodeIS7_PvEE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceINS_13packaged_taskIFvvEEENS_9allocatorIS3_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<std::__1::packaged_task<void ()>, std::__1::allocator<std::__1::packaged_task<void ()> > >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceINS_13packaged_taskIFvvEEENS_9allocatorIS3_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN10ISensorAPI16SensorReaderImpl12deinitializeEv */
/* Demangled: ISensorAPI::SensorReaderImpl::deinitialize() */
int _ZN10ISensorAPI16SensorReaderImpl12deinitializeEv(void);

/* Symbol: _ZN10ISensorAPI16SensorReaderImpl6enableEv */
/* Demangled: ISensorAPI::SensorReaderImpl::enable() */
int _ZN10ISensorAPI16SensorReaderImpl6enableEv(void);

/* Symbol: _ZN10ISensorAPI16SensorReaderImplD0Ev */
/* Demangled: ISensorAPI::SensorReaderImpl::~SensorReaderImpl() */
int _ZN10ISensorAPI16SensorReaderImplD0Ev(void);

/* Symbol: _ZNSt3__14moveIN7android8hardware7sensors4V1_05EventEPS5_RS5_PS6_lLl51ES5_S6_S7_S8_lLl51EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS9_IT_T0_T1_T2_T3_XT4_EEESL_SF_ */
/* Demangled: std::__1::__deque_iterator<android::hardware::sensors::V1_0::Event, android::hardware::sensors::V1_0::Event*, android::hardware::sensors::V1_0::Event&, android::hardware::sensors::V1_0::Event**, long, 51l> std::__1::move<android::hardware::sensors::V1_0::Event, android::hardware::sensors::V1_0::Event*, android::hardware::sensors::V1_0::Event&, android::hardware::sensors::V1_0::Event**, long, 51l, android::hardware::sensors::V1_0::Event, android::hardware::sensors::V1_0::Event*, android::hardware::sensors::V1_0::Event&, android::hardware::sensors::V1_0::Event**, long, 51l>(std::__1::__deque_iterator<android::hardware::sensors::V1_0::Event, android::hardware::sensors::V1_0::Event*, android::hardware::sensors::V1_0::Event&, android::hardware::sensors::V1_0::Event**, long, 51l>, std::__1::__deque_iterator<android::hardware::sensors::V1_0::Event, android::hardware::sensors::V1_0::Event*, android::hardware::sensors::V1_0::Event&, android::hardware::sensors::V1_0::Event**, long, 51l>, std::__1::__deque_iterator<android::hardware::sensors::V1_0::Event, android::hardware::sensors::V1_0::Event*, android::hardware::sensors::V1_0::Event&, android::hardware::sensors::V1_0::Event**, long, 51l>) */
int _ZNSt3__14moveIN7android8hardware7sensors4V1_05EventEPS5_RS5_PS6_lLl51ES5_S6_S7_S8_lLl51EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS9_IT_T0_T1_T2_T3_XT4_EEESL_SF_(void);

/* Symbol: _ZNK8vidhance10Properties20getContextPropertiesENS_11StreamUsageE */
/* Demangled: vidhance::Properties::getContextProperties(vidhance::StreamUsage) const */
int _ZNK8vidhance10Properties20getContextPropertiesENS_11StreamUsageE(void);

/* Symbol: _ZNK8vidhance8Platform9getFormatENS_11StreamUsageE */
/* Demangled: vidhance::Platform::getFormat(vidhance::StreamUsage) const */
int _ZNK8vidhance8Platform9getFormatENS_11StreamUsageE(void);

/* Symbol: _ZTV15DefaultPlatform */
/* Demangled: vtable for DefaultPlatform */
extern void* _ZTV15DefaultPlatform;

/* Symbol: _ZTVNSt3__120__shared_ptr_pointerIPN8vidhance10PropertiesENS_14default_deleteIS2_EENS_9allocatorIS2_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_pointer<vidhance::Properties*, std::__1::default_delete<vidhance::Properties>, std::__1::allocator<vidhance::Properties> > */
extern void* _ZTVNSt3__120__shared_ptr_pointerIPN8vidhance10PropertiesENS_14default_deleteIS2_EENS_9allocatorIS2_EEEE;

/* Symbol: _ZNSt3__114__split_bufferIPN7android8hardware7sensors4V1_05EventENS_9allocatorIS6_EEE9push_backEOS6_ */
/* Demangled: std::__1::__split_buffer<android::hardware::sensors::V1_0::Event*, std::__1::allocator<android::hardware::sensors::V1_0::Event*> >::push_back(android::hardware::sensors::V1_0::Event*&&) */
int _ZNSt3__114__split_bufferIPN7android8hardware7sensors4V1_05EventENS_9allocatorIS6_EEE9push_backEOS6_(void);

/* Symbol: _ZNSt3__114__split_bufferIPN8vidhance5QDataENS_9allocatorIS3_EEE9push_backEOS3_ */
/* Demangled: std::__1::__split_buffer<vidhance::QData*, std::__1::allocator<vidhance::QData*> >::push_back(vidhance::QData*&&) */
int _ZNSt3__114__split_bufferIPN8vidhance5QDataENS_9allocatorIS3_EEE9push_backEOS3_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiNS_6vectorIN8vidhance12Resolution2DIiEENS_9allocatorIS5_EEEEEENS_19__map_value_compareIiS9_NS_4lessIiEELb1EEENS6_IS9_EEE12__find_equalIiEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS9_PNS_11__tree_nodeIS9_SI_EElEERPNS_15__tree_end_nodeISK_EESL_RKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<int, std::__1::vector<vidhance::Resolution2D<int>, std::__1::allocator<vidhance::Resolution2D<int> > > >, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::vector<vidhance::Resolution2D<int>, std::__1::allocator<vidhance::Resolution2D<int> > > >, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, std::__1::vector<vidhance::Resolution2D<int>, std::__1::allocator<vidhance::Resolution2D<int> > > > > >::__find_equal<int>(std::__1::__tree_const_iterator<std::__1::__value_type<int, std::__1::vector<vidhance::Resolution2D<int>, std::__1::allocator<vidhance::Resolution2D<int> > > >, std::__1::__tree_node<std::__1::__value_type<int, std::__1::vector<vidhance::Resolution2D<int>, std::__1::allocator<vidhance::Resolution2D<int> > > >, void*>*, long>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, int const&) */
int _ZNSt3__16__treeINS_12__value_typeIiNS_6vectorIN8vidhance12Resolution2DIiEENS_9allocatorIS5_EEEEEENS_19__map_value_compareIiS9_NS_4lessIiEELb1EEENS6_IS9_EEE12__find_equalIiEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS9_PNS_11__tree_nodeIS9_SI_EElEERPNS_15__tree_end_nodeISK_EESL_RKT_(void);

/* Symbol: _ZTVN8vidhance20VidhanceProviderImplE */
/* Demangled: vtable for vidhance::VidhanceProviderImpl */
extern void* _ZTVN8vidhance20VidhanceProviderImplE;

/* Symbol: _ZNK8vidhance8Platform29createStandardContextSettingsERKNS_20FeatureConfigurationERKNS_17ContextPropertiesERKNS_11StreamUsageE */
/* Demangled: vidhance::Platform::createStandardContextSettings(vidhance::FeatureConfiguration const&, vidhance::ContextProperties const&, vidhance::StreamUsage const&) const */
int _ZNK8vidhance8Platform29createStandardContextSettingsERKNS_20FeatureConfigurationERKNS_17ContextPropertiesERKNS_11StreamUsageE(void);

/* Symbol: _ZNSt3__113move_backwardIN7android8hardware7sensors4V1_05EventEPS5_RS5_PS6_lLl51ES5_S6_S7_S8_lLl51EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS9_IT_T0_T1_T2_T3_XT4_EEESL_SF_ */
/* Demangled: std::__1::__deque_iterator<android::hardware::sensors::V1_0::Event, android::hardware::sensors::V1_0::Event*, android::hardware::sensors::V1_0::Event&, android::hardware::sensors::V1_0::Event**, long, 51l> std::__1::move_backward<android::hardware::sensors::V1_0::Event, android::hardware::sensors::V1_0::Event*, android::hardware::sensors::V1_0::Event&, android::hardware::sensors::V1_0::Event**, long, 51l, android::hardware::sensors::V1_0::Event, android::hardware::sensors::V1_0::Event*, android::hardware::sensors::V1_0::Event&, android::hardware::sensors::V1_0::Event**, long, 51l>(std::__1::__deque_iterator<android::hardware::sensors::V1_0::Event, android::hardware::sensors::V1_0::Event*, android::hardware::sensors::V1_0::Event&, android::hardware::sensors::V1_0::Event**, long, 51l>, std::__1::__deque_iterator<android::hardware::sensors::V1_0::Event, android::hardware::sensors::V1_0::Event*, android::hardware::sensors::V1_0::Event&, android::hardware::sensors::V1_0::Event**, long, 51l>, std::__1::__deque_iterator<android::hardware::sensors::V1_0::Event, android::hardware::sensors::V1_0::Event*, android::hardware::sensors::V1_0::Event&, android::hardware::sensors::V1_0::Event**, long, 51l>) */
int _ZNSt3__113move_backwardIN7android8hardware7sensors4V1_05EventEPS5_RS5_PS6_lLl51ES5_S6_S7_S8_lLl51EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS9_IT_T0_T1_T2_T3_XT4_EEESL_SF_(void);

/* Symbol: _ZN10ThreadPoolC2Em */
/* Demangled: ThreadPool::ThreadPool(unsigned long) */
int _ZN10ThreadPoolC2Em(void);

/* Symbol: _ZNK8vidhance15VidhanceContext10getLatencyEv */
/* Demangled: vidhance::VidhanceContext::getLatency() const */
int _ZNK8vidhance15VidhanceContext10getLatencyEv(void);

/* Symbol: _ZNK8vidhance8Platform30getDefaultFeatureConfigurationEv */
/* Demangled: vidhance::Platform::getDefaultFeatureConfiguration() const */
int _ZNK8vidhance8Platform30getDefaultFeatureConfigurationEv(void);

/* Symbol: _ZNK8vidhance10Properties9isEnabledENS_11StreamUsageE */
/* Demangled: vidhance::Properties::isEnabled(vidhance::StreamUsage) const */
int _ZNK8vidhance10Properties9isEnabledENS_11StreamUsageE(void);

/* Symbol: _ZNK8vidhance15VidhanceContext11createInputERKP17_vidhance_image_tRKNS_12frame_data_tERKNS_11camera_dataE */
/* Demangled: vidhance::VidhanceContext::createInput(_vidhance_image_t* const&, vidhance::frame_data_t const&, vidhance::camera_data const&) const */
int _ZNK8vidhance15VidhanceContext11createInputERKP17_vidhance_image_tRKNS_12frame_data_tERKNS_11camera_dataE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiNS_6vectorIN8vidhance12Resolution2DIiEENS_9allocatorIS5_EEEEEENS_19__map_value_compareIiS9_NS_4lessIiEELb1EEENS6_IS9_EEE7destroyEPNS_11__tree_nodeIS9_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<int, std::__1::vector<vidhance::Resolution2D<int>, std::__1::allocator<vidhance::Resolution2D<int> > > >, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::vector<vidhance::Resolution2D<int>, std::__1::allocator<vidhance::Resolution2D<int> > > >, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, std::__1::vector<vidhance::Resolution2D<int>, std::__1::allocator<vidhance::Resolution2D<int> > > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, std::__1::vector<vidhance::Resolution2D<int>, std::__1::allocator<vidhance::Resolution2D<int> > > >, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIiNS_6vectorIN8vidhance12Resolution2DIiEENS_9allocatorIS5_EEEEEENS_19__map_value_compareIiS9_NS_4lessIiEELb1EEENS6_IS9_EEE7destroyEPNS_11__tree_nodeIS9_PvEE(void);

/* Symbol: _ZN8vidhance15VidhanceContext9videoStopEv */
/* Demangled: vidhance::VidhanceContext::videoStop() */
int _ZN8vidhance15VidhanceContext9videoStopEv(void);

/* Symbol: _ZTVN10ISensorAPI10GyroReaderE */
/* Demangled: vtable for ISensorAPI::GyroReader */
extern void* _ZTVN10ISensorAPI10GyroReaderE;

/* Symbol: _ZN10ISensorAPI16SensorReaderImpl9getEventsE20vidhance_date_time_t20vidhance_time_span_t */
/* Demangled: ISensorAPI::SensorReaderImpl::getEvents(vidhance_date_time_t, vidhance_time_span_t) */
int _ZN10ISensorAPI16SensorReaderImpl9getEventsE20vidhance_date_time_t20vidhance_time_span_t(void);

/* Symbol: _ZN10ISensorAPI16SensorReaderImplD2Ev */
/* Demangled: ISensorAPI::SensorReaderImpl::~SensorReaderImpl() */
int _ZN10ISensorAPI16SensorReaderImplD2Ev(void);

/* Symbol: _ZN15DefaultPlatform11getInstanceEv */
/* Demangled: DefaultPlatform::getInstance() */
int _ZN15DefaultPlatform11getInstanceEv(void);

/* Symbol: _ZNSt3__114__split_bufferIPNS_8functionIFvvEEERNS_9allocatorIS4_EEE9push_backEOS4_ */
/* Demangled: std::__1::__split_buffer<std::__1::function<void ()>*, std::__1::allocator<std::__1::function<void ()>*>&>::push_back(std::__1::function<void ()>*&&) */
int _ZNSt3__114__split_bufferIPNS_8functionIFvvEEERNS_9allocatorIS4_EEE9push_backEOS4_(void);

/* Symbol: _ZN15DefaultPlatformC1Ev */
/* Demangled: DefaultPlatform::DefaultPlatform() */
int _ZN15DefaultPlatformC1Ev(void);

/* Symbol: _ZN8vidhance10PropertiesC1Ev */
/* Demangled: vidhance::Properties::Properties() */
int _ZN8vidhance10PropertiesC1Ev(void);

/* Symbol: _ZN8vidhance8Platform15toVidhanceUsageENS_11StreamUsageE */
/* Demangled: vidhance::Platform::toVidhanceUsage(vidhance::StreamUsage) */
int _ZN8vidhance8Platform15toVidhanceUsageENS_11StreamUsageE(void);

/* Symbol: _ZN10ISensorAPI16SensorReaderImpl12processEventERKN7android8hardware7sensors4V1_05EventE */
/* Demangled: ISensorAPI::SensorReaderImpl::processEvent(android::hardware::sensors::V1_0::Event const&) */
int _ZN10ISensorAPI16SensorReaderImpl12processEventERKN7android8hardware7sensors4V1_05EventE(void);

/* Symbol: _ZN12SensorReader14realtimeAtBootE */
/* Demangled: SensorReader::realtimeAtBoot */
extern void* _ZN12SensorReader14realtimeAtBootE;

/* Symbol: _ZNSt3__114__split_bufferIPN7android8hardware7sensors4V1_05EventERNS_9allocatorIS6_EEE9push_backEOS6_ */
/* Demangled: std::__1::__split_buffer<android::hardware::sensors::V1_0::Event*, std::__1::allocator<android::hardware::sensors::V1_0::Event*>&>::push_back(android::hardware::sensors::V1_0::Event*&&) */
int _ZNSt3__114__split_bufferIPN7android8hardware7sensors4V1_05EventERNS_9allocatorIS6_EEE9push_backEOS6_(void);

/* Symbol: _ZN9OISReaderC1ERKNSt3__18functionIFNS0_6vectorI18ois_lens_meta_dataNS0_9allocatorIS3_EEEE20vidhance_date_time_t20vidhance_time_span_tEEES7_ */
/* Demangled: OISReader::OISReader(std::__1::function<std::__1::vector<ois_lens_meta_data, std::__1::allocator<ois_lens_meta_data> > (vidhance_date_time_t, vidhance_time_span_t)> const&, vidhance_date_time_t) */
int _ZN9OISReaderC1ERKNSt3__18functionIFNS0_6vectorI18ois_lens_meta_dataNS0_9allocatorIS3_EEEE20vidhance_date_time_t20vidhance_time_span_tEEES7_(void);

/* Symbol: _ZTVN5NSCam16NSPipelinePlugin11InterceptorINS0_4JoinEN8vidhance20VidhanceProviderImplEEE */
/* Demangled: vtable for NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, vidhance::VidhanceProviderImpl> */
extern void* _ZTVN5NSCam16NSPipelinePlugin11InterceptorINS0_4JoinEN8vidhance20VidhanceProviderImplEEE;

/* Symbol: _ZN15DefaultPlatform11releaseGyroEN8vidhance11StreamUsageE */
/* Demangled: DefaultPlatform::releaseGyro(vidhance::StreamUsage) */
int _ZN15DefaultPlatform11releaseGyroEN8vidhance11StreamUsageE(void);

/* Symbol: _ZNSt3__16vectorIN7android8hardware7sensors4V1_05EventENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::hardware::sensors::V1_0::Event, std::__1::allocator<android::hardware::sensors::V1_0::Event> >::__push_back_slow_path<android::hardware::sensors::V1_0::Event const&>(android::hardware::sensors::V1_0::Event const&) */
int _ZNSt3__16vectorIN7android8hardware7sensors4V1_05EventENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_(void);

/* Symbol: _ZTTNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: VTT for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTTNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZTVN8vidhance15VidhanceContextE */
/* Demangled: vtable for vidhance::VidhanceContext */
extern void* _ZTVN8vidhance15VidhanceContextE;

/* Symbol: _ZN10ThreadPoolD1Ev */
/* Demangled: ThreadPool::~ThreadPool() */
int _ZN10ThreadPoolD1Ev(void);

/* Symbol: _ZNSt3__114__split_bufferIPNS_8functionIFvvEEENS_9allocatorIS4_EEE10push_frontEOS4_ */
/* Demangled: std::__1::__split_buffer<std::__1::function<void ()>*, std::__1::allocator<std::__1::function<void ()>*> >::push_front(std::__1::function<void ()>*&&) */
int _ZNSt3__114__split_bufferIPNS_8functionIFvvEEENS_9allocatorIS4_EEE10push_frontEOS4_(void);

/* Symbol: _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_14basic_iostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_iostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_14basic_iostreamIcS2_EE;

/* Symbol: _ZNK15DefaultPlatform7getGyroERKN8vidhance11StreamUsageE */
/* Demangled: DefaultPlatform::getGyro(vidhance::StreamUsage const&) const */
int _ZNK15DefaultPlatform7getGyroERKN8vidhance11StreamUsageE(void);

/* Symbol: _ZNK8vidhance8Platform14getInputFormatERKNS_11StreamUsageE */
/* Demangled: vidhance::Platform::getInputFormat(vidhance::StreamUsage const&) const */
int _ZNK8vidhance8Platform14getInputFormatERKNS_11StreamUsageE(void);

/* Symbol: _ZNK20GraphicBufferWrapper9getStrideEv */
/* Demangled: GraphicBufferWrapper::getStride() const */
int _ZNK20GraphicBufferWrapper9getStrideEv(void);

/* Symbol: _ZNSt3__15dequeIN7android8hardware7sensors4V1_05EventENS_9allocatorIS5_EEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<android::hardware::sensors::V1_0::Event, std::__1::allocator<android::hardware::sensors::V1_0::Event> >::__add_back_capacity() */
int _ZNSt3__15dequeIN7android8hardware7sensors4V1_05EventENS_9allocatorIS5_EEE19__add_back_capacityEv(void);

/* Symbol: _ZN8vidhance15VidhanceContext8setProxyEPS0_ */
/* Demangled: vidhance::VidhanceContext::setProxy(vidhance::VidhanceContext*) */
int _ZN8vidhance15VidhanceContext8setProxyEPS0_(void);

/* Symbol: _ZN8vidhance15VidhanceContextD1Ev */
/* Demangled: vidhance::VidhanceContext::~VidhanceContext() */
int _ZN8vidhance15VidhanceContextD1Ev(void);

/* Symbol: _ZNK8vidhance15VidhanceContext7processEP17_vidhance_input_t */
/* Demangled: vidhance::VidhanceContext::process(_vidhance_input_t*) const */
int _ZNK8vidhance15VidhanceContext7processEP17_vidhance_input_t(void);

/* Symbol: _ZN20GraphicBufferWrapperC2EN7android2spINS0_13GraphicBufferEEE8FreeFlag */
/* Demangled: GraphicBufferWrapper::GraphicBufferWrapper(android::sp<android::GraphicBuffer>, FreeFlag) */
int _ZN20GraphicBufferWrapperC2EN7android2spINS0_13GraphicBufferEEE8FreeFlag(void);

/* Symbol: _ZN10ISensorAPI10GyroReader18getAngularVelocityE20vidhance_date_time_t20vidhance_time_span_tPv */
/* Demangled: ISensorAPI::GyroReader::getAngularVelocity(vidhance_date_time_t, vidhance_time_span_t, void*) */
int _ZN10ISensorAPI10GyroReader18getAngularVelocityE20vidhance_date_time_t20vidhance_time_span_tPv(void);

/* Symbol: _Z17freeGraphicBufferPvS_ */
/* Demangled: freeGraphicBuffer(void*, void*) */
int _Z17freeGraphicBufferPvS_(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void);

/* Symbol: _ZNK15DefaultPlatform30getDefaultFeatureConfigurationEv */
/* Demangled: DefaultPlatform::getDefaultFeatureConfiguration() const */
int _ZNK15DefaultPlatform30getDefaultFeatureConfigurationEv(void);

/* Symbol: _ZNK8vidhance8Platform20getInputGrallocUsageERKNS_11StreamUsageE */
/* Demangled: vidhance::Platform::getInputGrallocUsage(vidhance::StreamUsage const&) const */
int _ZNK8vidhance8Platform20getInputGrallocUsageERKNS_11StreamUsageE(void);

/* Symbol: _ZN10ISensorAPI10GyroReader19_getAngularVelocityE20vidhance_date_time_t20vidhance_time_span_t */
/* Demangled: ISensorAPI::GyroReader::_getAngularVelocity(vidhance_date_time_t, vidhance_time_span_t) */
int _ZN10ISensorAPI10GyroReader19_getAngularVelocityE20vidhance_date_time_t20vidhance_time_span_t(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBMTKCAM_3RDPARTY_VIDHANCE_H */
