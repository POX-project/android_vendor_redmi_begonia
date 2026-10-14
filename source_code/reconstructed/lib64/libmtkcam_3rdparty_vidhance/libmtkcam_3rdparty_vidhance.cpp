/*
 * Reverse-Engineered Source for: libmtkcam_3rdparty.vidhance.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libmtkcam_3rdparty_vidhance"

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
#include "libmtkcam_3rdparty_vidhance.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void) {
    ALOGD("_ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, vidhance::VidhanceProviderImpl>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, vidhance::VidhanceProviderImpl> > >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinEN8vidhance20VidhanceProviderImplEEENS_9allocatorIS7_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinEN8vidhance20VidhanceProviderImplEEENS_9allocatorIS7_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: std::__1::deque<vidhance::QData, std::__1::allocator<vidhance::QData> >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN8vidhance5QDataENS_9allocatorIS2_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeIN8vidhance5QDataENS_9allocatorIS2_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE = NULL;

/* Demangled: vidhance::Platform::~Platform() */
extern "C" __attribute__((visibility("default"))) int _ZN8vidhance8PlatformD0Ev(void) {
    ALOGD("_ZN8vidhance8PlatformD0Ev() called");
    return 0;
}

/* Demangled: ISensorAPI::GyroReader::allocateVidhanceInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN10ISensorAPI10GyroReader24allocateVidhanceInstanceEv(void) {
    ALOGD("_ZN10ISensorAPI10GyroReader24allocateVidhanceInstanceEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::hardware::sensors::V1_0::Event*, std::__1::allocator<android::hardware::sensors::V1_0::Event*> >::push_front(android::hardware::sensors::V1_0::Event*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android8hardware7sensors4V1_05EventENS_9allocatorIS6_EEE10push_frontEOS6_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android8hardware7sensors4V1_05EventENS_9allocatorIS6_EEE10push_frontEOS6_() called");
    return 0;
}

/* Exported Object: vidhance::VidhanceProviderImpl::property()::initialized */
extern "C" __attribute__((visibility("default"))) void* _ZZN8vidhance20VidhanceProviderImpl8propertyEvE11initialized = NULL;

/* Demangled: vidhance::Platform::getInputResolution(vidhance::Resolution2D<int> const&, vidhance::StreamUsage const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8vidhance8Platform18getInputResolutionERKNS_12Resolution2DIiEERKNS_11StreamUsageE(void) {
    ALOGD("_ZNK8vidhance8Platform18getInputResolutionERKNS_12Resolution2DIiEERKNS_11StreamUsageE() called");
    return 0;
}

/* Demangled: ISensorAPI::SensorReaderImpl::getSamplePeriod() const */
extern "C" __attribute__((visibility("default"))) int _ZNK10ISensorAPI16SensorReaderImpl15getSamplePeriodEv(void) {
    ALOGD("_ZNK10ISensorAPI16SensorReaderImpl15getSamplePeriodEv() called");
    return 0;
}

/* Demangled: OISReader::OISReader(std::__1::function<std::__1::vector<ois_lens_meta_data, std::__1::allocator<ois_lens_meta_data> > (vidhance_date_time_t, vidhance_time_span_t)> const&, vidhance_date_time_t) */
extern "C" __attribute__((visibility("default"))) int _ZN9OISReaderC2ERKNSt3__18functionIFNS0_6vectorI18ois_lens_meta_dataNS0_9allocatorIS3_EEEE20vidhance_date_time_t20vidhance_time_span_tEEES7_(void) {
    ALOGD("_ZN9OISReaderC2ERKNSt3__18functionIFNS0_6vectorI18ois_lens_meta_dataNS0_9allocatorIS3_EEEE20vidhance_date_time_t20vidhance_time_span_tEEES7_() called");
    return 0;
}

/* Demangled: vidhance::Platform::getOutputGrallocUsage(vidhance::StreamUsage const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8vidhance8Platform21getOutputGrallocUsageERKNS_11StreamUsageE(void) {
    ALOGD("_ZNK8vidhance8Platform21getOutputGrallocUsageERKNS_11StreamUsageE() called");
    return 0;
}

/* Demangled: nativeToVidhanceFormat(int) */
extern "C" __attribute__((visibility("default"))) int _Z22nativeToVidhanceFormati(void) {
    ALOGD("_Z22nativeToVidhanceFormati() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Exported Object: vtable for std::__1::__shared_ptr_pointer<ISensorAPI::GyroReader*, std::__1::default_delete<ISensorAPI::GyroReader>, std::__1::allocator<ISensorAPI::GyroReader> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_pointerIPN10ISensorAPI10GyroReaderENS_14default_deleteIS2_EENS_9allocatorIS2_EEEE = NULL;

/* Demangled: vidhance::Platform::Platform(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN8vidhance8PlatformC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN8vidhance8PlatformC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: allocateGraphicBuffer(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z21allocateGraphicBufferiiii(void) {
    ALOGD("_Z21allocateGraphicBufferiiii() called");
    return 0;
}

/* Exported Object: vtable for SensorEventCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTV19SensorEventCallback = NULL;

/* Demangled: OISReader::process(vidhance_date_time_t, vidhance_time_span_t) */
extern "C" __attribute__((visibility("default"))) int _ZN9OISReader7processE20vidhance_date_time_t20vidhance_time_span_t(void) {
    ALOGD("_ZN9OISReader7processE20vidhance_date_time_t20vidhance_time_span_t() called");
    return 0;
}

/* Demangled: dumpJoinImageInfo(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, NSCam::NSPipelinePlugin::JoinImageInfo_t const&) */
extern "C" __attribute__((visibility("default"))) int _Z17dumpJoinImageInfoNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERKN5NSCam16NSPipelinePlugin15JoinImageInfo_tE(void) {
    ALOGD("_Z17dumpJoinImageInfoNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERKN5NSCam16NSPipelinePlugin15JoinImageInfo_tE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: vidhanceToNativeFormat(int) */
extern "C" __attribute__((visibility("default"))) int _Z22vidhanceToNativeFormati(void) {
    ALOGD("_Z22vidhanceToNativeFormati() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: OISReader::getLensPositionMeasurements(vidhance_date_time_t, vidhance_time_span_t) */
extern "C" __attribute__((visibility("default"))) int _ZN9OISReader27getLensPositionMeasurementsE20vidhance_date_time_t20vidhance_time_span_t(void) {
    ALOGD("_ZN9OISReader27getLensPositionMeasurementsE20vidhance_date_time_t20vidhance_time_span_t() called");
    return 0;
}

/* Demangled: vidhance::Properties::update() */
extern "C" __attribute__((visibility("default"))) int _ZN8vidhance10Properties6updateEv(void) {
    ALOGD("_ZN8vidhance10Properties6updateEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: vidhance::Platform::~Platform() */
extern "C" __attribute__((visibility("default"))) int _ZN8vidhance8PlatformD2Ev(void) {
    ALOGD("_ZN8vidhance8PlatformD2Ev() called");
    return 0;
}

/* Demangled: ThreadPool::ThreadPool(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10ThreadPoolC1Em(void) {
    ALOGD("_ZN10ThreadPoolC1Em() called");
    return 0;
}

/* Demangled: _ZNSt3__113move_backwardIPN7android8hardware7sensors4V1_05EventES5_S6_RS5_PS6_lLl51EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SG_SF_PNS_9enable_ifIXsr27__is_random_access_iteratorISG_EE5valueEvE4typeE */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113move_backwardIPN7android8hardware7sensors4V1_05EventES5_S6_RS5_PS6_lLl51EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SG_SF_PNS_9enable_ifIXsr27__is_random_access_iteratorISG_EE5valueEvE4typeE(void) {
    ALOGD("_ZNSt3__113move_backwardIPN7android8hardware7sensors4V1_05EventES5_S6_RS5_PS6_lLl51EEENS_16__deque_iteratorIT0_T1_T2_T3_T4_XT5_EEET_SG_SF_PNS_9enable_ifIXsr27__is_random_access_iteratorISG_EE5valueEvE4typeE() called");
    return 0;
}

/* Demangled: vidhance::VidhanceContext::registerCallback(void (*)(_vidhance_result_t*)) */
extern "C" __attribute__((visibility("default"))) int _ZN8vidhance15VidhanceContext16registerCallbackEPFvP18_vidhance_result_tE(void) {
    ALOGD("_ZN8vidhance15VidhanceContext16registerCallbackEPFvP18_vidhance_result_tE() called");
    return 0;
}

/* Demangled: void std::__1::vector<vidhance::Resolution2D<int>, std::__1::allocator<vidhance::Resolution2D<int> > >::__push_back_slow_path<vidhance::Resolution2D<int> >(vidhance::Resolution2D<int>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN8vidhance12Resolution2DIiEENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN8vidhance12Resolution2DIiEENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<ISensorAPI::GyroReader*, std::__1::default_delete<ISensorAPI::GyroReader>, std::__1::allocator<ISensorAPI::GyroReader> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPN10ISensorAPI10GyroReaderENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPN10ISensorAPI10GyroReaderENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: lockGraphicBuffer(void*, int, void**) */
extern "C" __attribute__((visibility("default"))) int _Z17lockGraphicBufferPviPS_(void) {
    ALOGD("_Z17lockGraphicBufferPviPS_() called");
    return 0;
}

/* Demangled: ISensorAPI::SensorReaderImpl::initialize() */
extern "C" __attribute__((visibility("default"))) int _ZN10ISensorAPI16SensorReaderImpl10initializeEv(void) {
    ALOGD("_ZN10ISensorAPI16SensorReaderImpl10initializeEv() called");
    return 0;
}

/* Demangled: createGraphicBufferFromHandle(int, int, int, int, int, native_handle const*, android::GraphicBuffer::HandleWrapMethod) */
extern "C" __attribute__((visibility("default"))) int _Z29createGraphicBufferFromHandleiiiiiPK13native_handleN7android13GraphicBuffer16HandleWrapMethodE(void) {
    ALOGD("_Z29createGraphicBufferFromHandleiiiiiPK13native_handleN7android13GraphicBuffer16HandleWrapMethodE() called");
    return 0;
}

/* Exported Object: vtable for vidhance::Platform */
extern "C" __attribute__((visibility("default"))) void* _ZTVN8vidhance8PlatformE = NULL;

/* Demangled: OISReader::getOisSensor() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9OISReader12getOisSensorEv(void) {
    ALOGD("_ZNK9OISReader12getOisSensorEv() called");
    return 0;
}

/* Demangled: vidhance::VidhanceContext::createImage(android::sp<android::GraphicBuffer> const&, void const*, FreeFlag) */
extern "C" __attribute__((visibility("default"))) int _ZN8vidhance15VidhanceContext11createImageERKN7android2spINS1_13GraphicBufferEEEPKv8FreeFlag(void) {
    ALOGD("_ZN8vidhance15VidhanceContext11createImageERKN7android2spINS1_13GraphicBufferEEEPKv8FreeFlag() called");
    return 0;
}

/* Demangled: vidhance::_CreatePluginProvider_VidhanceProviderImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN8vidhance42_CreatePluginProvider_VidhanceProviderImplEv(void) {
    ALOGD("_ZN8vidhance42_CreatePluginProvider_VidhanceProviderImplEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::function<void ()>*, std::__1::allocator<std::__1::function<void ()>*> >::push_back(std::__1::function<void ()>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_8functionIFvvEEENS_9allocatorIS4_EEE9push_backEOS4_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_8functionIFvvEEENS_9allocatorIS4_EEE9push_backEOS4_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<std::__1::packaged_task<void ()>, std::__1::allocator<std::__1::packaged_task<void ()> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceINS_13packaged_taskIFvvEEENS_9allocatorIS3_EEEE = NULL;

/* Demangled: vidhance::Platform::getOutputFormat(vidhance::StreamUsage const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8vidhance8Platform15getOutputFormatERKNS_11StreamUsageE(void) {
    ALOGD("_ZNK8vidhance8Platform15getOutputFormatERKNS_11StreamUsageE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<ISensorAPI::GyroReader*, std::__1::default_delete<ISensorAPI::GyroReader>, std::__1::allocator<ISensorAPI::GyroReader> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPN10ISensorAPI10GyroReaderENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPN10ISensorAPI10GyroReaderENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: ISensorAPI::SensorReaderImpl::~SensorReaderImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN10ISensorAPI16SensorReaderImplD1Ev(void) {
    ALOGD("_ZN10ISensorAPI16SensorReaderImplD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::function<void ()>*, std::__1::allocator<std::__1::function<void ()>*>&>::push_front(std::__1::function<void ()>* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_8functionIFvvEEERNS_9allocatorIS4_EEE10push_frontERKS4_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_8functionIFvvEEERNS_9allocatorIS4_EEE10push_frontERKS4_() called");
    return 0;
}

/* Demangled: std::__1::deque<std::__1::function<void ()>, std::__1::allocator<std::__1::function<void ()> > >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeINS_8functionIFvvEEENS_9allocatorIS3_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeINS_8functionIFvvEEENS_9allocatorIS3_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv() called");
    return 0;
}

/* Demangled: DefaultPlatform::overrideFrameData(vidhance::frame_data_t*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK15DefaultPlatform17overrideFrameDataEPN8vidhance12frame_data_tE(void) {
    ALOGD("_ZNK15DefaultPlatform17overrideFrameDataEPN8vidhance12frame_data_tE() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<std::__1::function<void ()>, std::__1::allocator<std::__1::function<void ()> > >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseINS_8functionIFvvEEENS_9allocatorIS3_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseINS_8functionIFvvEEENS_9allocatorIS3_EEE5clearEv() called");
    return 0;
}

/* Demangled: dummyLockGraphicBuffer(void*, int, void**) */
extern "C" __attribute__((visibility("default"))) int _Z22dummyLockGraphicBufferPviPS_(void) {
    ALOGD("_Z22dummyLockGraphicBufferPviPS_() called");
    return 0;
}

/* Demangled: GraphicBufferWrapper::GraphicBufferWrapper(android::sp<android::GraphicBuffer>, FreeFlag) */
extern "C" __attribute__((visibility("default"))) int _ZN20GraphicBufferWrapperC1EN7android2spINS0_13GraphicBufferEEE8FreeFlag(void) {
    ALOGD("_ZN20GraphicBufferWrapperC1EN7android2spINS0_13GraphicBufferEEE8FreeFlag() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<std::__1::packaged_task<void ()>, std::__1::allocator<std::__1::packaged_task<void ()> > >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceINS_13packaged_taskIFvvEEENS_9allocatorIS3_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceINS_13packaged_taskIFvvEEENS_9allocatorIS3_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<android::hardware::sensors::V1_0::Event*, std::__1::allocator<android::hardware::sensors::V1_0::Event*>&>::push_front(android::hardware::sensors::V1_0::Event* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android8hardware7sensors4V1_05EventERNS_9allocatorIS6_EEE10push_frontERKS6_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android8hardware7sensors4V1_05EventERNS_9allocatorIS6_EEE10push_frontERKS6_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: std::__1::__deque_base<vidhance::QData, std::__1::allocator<vidhance::QData> >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseIN8vidhance5QDataENS_9allocatorIS2_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseIN8vidhance5QDataENS_9allocatorIS2_EEE5clearEv() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m(void) {
    ALOGD("_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m() called");
    return 0;
}

/* Demangled: vidhance::VidhanceContext::videoStart() */
extern "C" __attribute__((visibility("default"))) int _ZN8vidhance15VidhanceContext10videoStartEv(void) {
    ALOGD("_ZN8vidhance15VidhanceContext10videoStartEv() called");
    return 0;
}

/* Demangled: vidhance::VidhanceContext::~VidhanceContext() */
extern "C" __attribute__((visibility("default"))) int _ZN8vidhance15VidhanceContextD0Ev(void) {
    ALOGD("_ZN8vidhance15VidhanceContextD0Ev() called");
    return 0;
}

/* Demangled: allocateGraphicBuffer(int, int, int, int, void**, void**, int*) */
extern "C" __attribute__((visibility("default"))) int _Z21allocateGraphicBufferiiiiPPvS0_Pi(void) {
    ALOGD("_Z21allocateGraphicBufferiiiiPPvS0_Pi() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, vidhance::VidhanceProviderImpl>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, vidhance::VidhanceProviderImpl> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinEN8vidhance20VidhanceProviderImplEEENS_9allocatorIS7_EEEE = NULL;

/* Exported Object: vidhance::VidhanceProviderImpl::property()::prop */
extern "C" __attribute__((visibility("default"))) void* _ZZN8vidhance20VidhanceProviderImpl8propertyEvE4prop = NULL;

/* Demangled: DefaultPlatform::DefaultPlatform() */
extern "C" __attribute__((visibility("default"))) int _ZN15DefaultPlatformC2Ev(void) {
    ALOGD("_ZN15DefaultPlatformC2Ev() called");
    return 0;
}

/* Demangled: OISReader::allocateVidhanceInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9OISReader24allocateVidhanceInstanceEv(void) {
    ALOGD("_ZN9OISReader24allocateVidhanceInstanceEv() called");
    return 0;
}

/* Demangled: vidhance::Properties::Properties() */
extern "C" __attribute__((visibility("default"))) int _ZN8vidhance10PropertiesC2Ev(void) {
    ALOGD("_ZN8vidhance10PropertiesC2Ev() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: vidhance::VidhanceContext::createImage(GraphicBufferWrapper*, stride, void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN8vidhance15VidhanceContext11createImageEP20GraphicBufferWrapper6stridePKv(void) {
    ALOGD("_ZN8vidhance15VidhanceContext11createImageEP20GraphicBufferWrapper6stridePKv() called");
    return 0;
}

/* Demangled: ISensorAPI::SensorReaderImpl::SensorReaderImpl(android::hardware::sensors::V1_0::SensorType, std::__1::function<android::hardware::sensors::V1_0::Event (android::hardware::sensors::V1_0::Event const&)>, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10ISensorAPI16SensorReaderImplC2EN7android8hardware7sensors4V1_010SensorTypeENSt3__18functionIFNS4_5EventERKS8_EEEi(void) {
    ALOGD("_ZN10ISensorAPI16SensorReaderImplC2EN7android8hardware7sensors4V1_010SensorTypeENSt3__18functionIFNS4_5EventERKS8_EEEi() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<vidhance::Properties*, std::__1::default_delete<vidhance::Properties>, std::__1::allocator<vidhance::Properties> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPN8vidhance10PropertiesENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPN8vidhance10PropertiesENS_14default_deleteIS2_EENS_9allocatorIS2_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: vidhance::VidhanceContext::flush() */
extern "C" __attribute__((visibility("default"))) int _ZN8vidhance15VidhanceContext5flushEv(void) {
    ALOGD("_ZN8vidhance15VidhanceContext5flushEv() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: vidhance::VidhanceContext::VidhanceContext(_vidhance_settings_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN8vidhance15VidhanceContextC1EP20_vidhance_settings_t(void) {
    ALOGD("_ZN8vidhance15VidhanceContextC1EP20_vidhance_settings_t() called");
    return 0;
}

/* Demangled: dummyUnlockGraphicBuffer(void*) */
extern "C" __attribute__((visibility("default"))) int _Z24dummyUnlockGraphicBufferPv(void) {
    ALOGD("_Z24dummyUnlockGraphicBufferPv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<vidhance::QData*, std::__1::allocator<vidhance::QData*> >::push_front(vidhance::QData*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN8vidhance5QDataENS_9allocatorIS3_EEE10push_frontEOS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN8vidhance5QDataENS_9allocatorIS3_EEE10push_frontEOS3_() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Exported Object: vtable for ISensorAPI::SensorReaderImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10ISensorAPI16SensorReaderImplE = NULL;

/* Demangled: ThreadPool::~ThreadPool() */
extern "C" __attribute__((visibility("default"))) int _ZN10ThreadPoolD2Ev(void) {
    ALOGD("_ZN10ThreadPoolD2Ev() called");
    return 0;
}

/* Demangled: vidhance::VidhanceContext::VidhanceContext(_vidhance_settings_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN8vidhance15VidhanceContextC2EP20_vidhance_settings_t(void) {
    ALOGD("_ZN8vidhance15VidhanceContextC2EP20_vidhance_settings_t() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<vidhance::StreamUsage, std::__1::shared_ptr<SensorReader> >, std::__1::__map_value_compare<vidhance::StreamUsage, std::__1::__value_type<vidhance::StreamUsage, std::__1::shared_ptr<SensorReader> >, std::__1::less<vidhance::StreamUsage>, true>, std::__1::allocator<std::__1::__value_type<vidhance::StreamUsage, std::__1::shared_ptr<SensorReader> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<vidhance::StreamUsage, std::__1::shared_ptr<SensorReader> >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIN8vidhance11StreamUsageENS_10shared_ptrI12SensorReaderEEEENS_19__map_value_compareIS3_S7_NS_4lessIS3_EELb1EEENS_9allocatorIS7_EEE7destroyEPNS_11__tree_nodeIS7_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIN8vidhance11StreamUsageENS_10shared_ptrI12SensorReaderEEEENS_19__map_value_compareIS3_S7_NS_4lessIS3_EELb1EEENS_9allocatorIS7_EEE7destroyEPNS_11__tree_nodeIS7_PvEE() called");
    return 0;
}

/* Demangled: vidhance::Properties::isConfigurationValid() const */
extern "C" __attribute__((visibility("default"))) int _ZNK8vidhance10Properties20isConfigurationValidEv(void) {
    ALOGD("_ZNK8vidhance10Properties20isConfigurationValidEv() called");
    return 0;
}

/* Demangled: vidhance::VidhanceContext::~VidhanceContext() */
extern "C" __attribute__((visibility("default"))) int _ZN8vidhance15VidhanceContextD2Ev(void) {
    ALOGD("_ZN8vidhance15VidhanceContextD2Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_pointer<vidhance::Properties*, std::__1::default_delete<vidhance::Properties>, std::__1::allocator<vidhance::Properties> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_pointerIPN8vidhance10PropertiesENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_pointerIPN8vidhance10PropertiesENS_14default_deleteIS2_EENS_9allocatorIS2_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: vidhance::VidhanceContext::preregisterOutput(_vidhance_image_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN8vidhance15VidhanceContext17preregisterOutputEP17_vidhance_image_t(void) {
    ALOGD("_ZN8vidhance15VidhanceContext17preregisterOutputEP17_vidhance_image_t() called");
    return 0;
}

/* Demangled: createGraphicBuffer(int, int, int, int, int, void*, bool, void**, void**) */
extern "C" __attribute__((visibility("default"))) int _Z19createGraphicBufferiiiiiPvbPS_S0_(void) {
    ALOGD("_Z19createGraphicBufferiiiiiPvbPS_S0_() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, vidhance::VidhanceProviderImpl>, std::__1::allocator<NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, vidhance::VidhanceProviderImpl> > >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinEN8vidhance20VidhanceProviderImplEEENS_9allocatorIS7_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam16NSPipelinePlugin11InterceptorINS2_4JoinEN8vidhance20VidhanceProviderImplEEENS_9allocatorIS7_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: std::__1::unique_ptr<std::__1::__tree_node<std::__1::__value_type<int, std::__1::vector<vidhance::Resolution2D<int>, std::__1::allocator<vidhance::Resolution2D<int> > > >, void*>, std::__1::__tree_node_destructor<std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, std::__1::vector<vidhance::Resolution2D<int>, std::__1::allocator<vidhance::Resolution2D<int> > > >, void*> > > > std::__1::__tree<std::__1::__value_type<int, std::__1::vector<vidhance::Resolution2D<int>, std::__1::allocator<vidhance::Resolution2D<int> > > >, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::vector<vidhance::Resolution2D<int>, std::__1::allocator<vidhance::Resolution2D<int> > > >, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, std::__1::vector<vidhance::Resolution2D<int>, std::__1::allocator<vidhance::Resolution2D<int> > > > > >::__construct_node<std::__1::pair<int const, std::__1::vector<vidhance::Resolution2D<int>, std::__1::allocator<vidhance::Resolution2D<int> > > > const&>(std::__1::pair<int const, std::__1::vector<vidhance::Resolution2D<int>, std::__1::allocator<vidhance::Resolution2D<int> > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiNS_6vectorIN8vidhance12Resolution2DIiEENS_9allocatorIS5_EEEEEENS_19__map_value_compareIiS9_NS_4lessIiEELb1EEENS6_IS9_EEE16__construct_nodeIJRKNS_4pairIKiS8_EEEEENS_10unique_ptrINS_11__tree_nodeIS9_PvEENS_22__tree_node_destructorINS6_ISP_EEEEEEDpOT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiNS_6vectorIN8vidhance12Resolution2DIiEENS_9allocatorIS5_EEEEEENS_19__map_value_compareIiS9_NS_4lessIiEELb1EEENS6_IS9_EEE16__construct_nodeIJRKNS_4pairIKiS8_EEEEENS_10unique_ptrINS_11__tree_nodeIS9_PvEENS_22__tree_node_destructorINS6_ISP_EEEEEEDpOT_() called");
    return 0;
}

/* Demangled: ISensorAPI::SensorReaderImpl::disable() */
extern "C" __attribute__((visibility("default"))) int _ZN10ISensorAPI16SensorReaderImpl7disableEv(void) {
    ALOGD("_ZN10ISensorAPI16SensorReaderImpl7disableEv() called");
    return 0;
}

/* Demangled: std::__1::back_insert_iterator<std::__1::vector<android::hardware::sensors::V1_0::Event, std::__1::allocator<android::hardware::sensors::V1_0::Event> > > std::__1::copy<android::hardware::sensors::V1_0::Event, android::hardware::sensors::V1_0::Event*, android::hardware::sensors::V1_0::Event&, android::hardware::sensors::V1_0::Event**, long, 51l, std::__1::back_insert_iterator<std::__1::vector<android::hardware::sensors::V1_0::Event, std::__1::allocator<android::hardware::sensors::V1_0::Event> > > >(std::__1::__deque_iterator<android::hardware::sensors::V1_0::Event, android::hardware::sensors::V1_0::Event*, android::hardware::sensors::V1_0::Event&, android::hardware::sensors::V1_0::Event**, long, 51l>, std::__1::__deque_iterator<android::hardware::sensors::V1_0::Event, android::hardware::sensors::V1_0::Event*, android::hardware::sensors::V1_0::Event&, android::hardware::sensors::V1_0::Event**, long, 51l>, std::__1::back_insert_iterator<std::__1::vector<android::hardware::sensors::V1_0::Event, std::__1::allocator<android::hardware::sensors::V1_0::Event> > >) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14copyIN7android8hardware7sensors4V1_05EventEPS5_RS5_PS6_lLl51ENS_20back_insert_iteratorINS_6vectorIS5_NS_9allocatorIS5_EEEEEEEET5_NS_16__deque_iteratorIT_T0_T1_T2_T3_XT4_EEESM_SF_(void) {
    ALOGD("_ZNSt3__14copyIN7android8hardware7sensors4V1_05EventEPS5_RS5_PS6_lLl51ENS_20back_insert_iteratorINS_6vectorIS5_NS_9allocatorIS5_EEEEEEEET5_NS_16__deque_iteratorIT_T0_T1_T2_T3_XT4_EEESM_SF_() called");
    return 0;
}

/* Demangled: vidhance::VidhanceContext::preregisterInput(android::sp<android::GraphicBuffer> const&, void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN8vidhance15VidhanceContext16preregisterInputERKN7android2spINS1_13GraphicBufferEEEPKv(void) {
    ALOGD("_ZN8vidhance15VidhanceContext16preregisterInputERKN7android2spINS1_13GraphicBufferEEEPKv() called");
    return 0;
}

/* Demangled: drawFrame(NSCam::IImageBuffer const*) */
extern "C" __attribute__((visibility("default"))) int _Z9drawFramePKN5NSCam12IImageBufferE(void) {
    ALOGD("_Z9drawFramePKN5NSCam12IImageBufferE() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE16_NS_13basic_ostreamIcS2_EE = NULL;

/* Demangled: vidhance::Platform::getMaximumInputResolution(vidhance::FeatureConfiguration const&, vidhance::Resolution2D<int> const&, vidhance::StreamUsage const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8vidhance8Platform25getMaximumInputResolutionERKNS_20FeatureConfigurationERKNS_12Resolution2DIiEERKNS_11StreamUsageE(void) {
    ALOGD("_ZNK8vidhance8Platform25getMaximumInputResolutionERKNS_20FeatureConfigurationERKNS_12Resolution2DIiEERKNS_11StreamUsageE() called");
    return 0;
}

/* Demangled: ISensorAPI::SensorReaderImpl::printSensors() */
extern "C" __attribute__((visibility("default"))) int _ZN10ISensorAPI16SensorReaderImpl12printSensorsEv(void) {
    ALOGD("_ZN10ISensorAPI16SensorReaderImpl12printSensorsEv() called");
    return 0;
}

/* Demangled: vidhance::VidhanceContext::invalidateBuffers() */
extern "C" __attribute__((visibility("default"))) int _ZN8vidhance15VidhanceContext17invalidateBuffersEv(void) {
    ALOGD("_ZN8vidhance15VidhanceContext17invalidateBuffersEv() called");
    return 0;
}

/* Demangled: vidhance::VidhanceContext::preregisterOutput(android::sp<android::GraphicBuffer> const&, void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN8vidhance15VidhanceContext17preregisterOutputERKN7android2spINS1_13GraphicBufferEEEPKv(void) {
    ALOGD("_ZN8vidhance15VidhanceContext17preregisterOutputERKN7android2spINS1_13GraphicBufferEEEPKv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<vidhance::QData*, std::__1::allocator<vidhance::QData*>&>::push_front(vidhance::QData* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN8vidhance5QDataERNS_9allocatorIS3_EEE10push_frontERKS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN8vidhance5QDataERNS_9allocatorIS3_EEE10push_frontERKS3_() called");
    return 0;
}

/* Demangled: vidhance::Platform::getInputResolution(vidhance::FeatureConfiguration const&, vidhance::Resolution2D<int> const&, vidhance::StreamUsage const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8vidhance8Platform18getInputResolutionERKNS_20FeatureConfigurationERKNS_12Resolution2DIiEERKNS_11StreamUsageE(void) {
    ALOGD("_ZNK8vidhance8Platform18getInputResolutionERKNS_20FeatureConfigurationERKNS_12Resolution2DIiEERKNS_11StreamUsageE() called");
    return 0;
}

/* Demangled: vidhance::Platform::~Platform() */
extern "C" __attribute__((visibility("default"))) int _ZN8vidhance8PlatformD1Ev(void) {
    ALOGD("_ZN8vidhance8PlatformD1Ev() called");
    return 0;
}

/* Demangled: vidhance::Properties::logConfiguration() const */
extern "C" __attribute__((visibility("default"))) int _ZNK8vidhance10Properties16logConfigurationEv(void) {
    ALOGD("_ZNK8vidhance10Properties16logConfigurationEv() called");
    return 0;
}

/* Exported Object: SensorReader::suspendedTime */
extern "C" __attribute__((visibility("default"))) void* _ZN12SensorReader13suspendedTimeE = NULL;

/* Demangled: vidhance::VidhanceContext::send(_vidhance_input_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN8vidhance15VidhanceContext4sendEP17_vidhance_input_t(void) {
    ALOGD("_ZN8vidhance15VidhanceContext4sendEP17_vidhance_input_t() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<vidhance::QData*, std::__1::allocator<vidhance::QData*>&>::push_back(vidhance::QData*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN8vidhance5QDataERNS_9allocatorIS3_EEE9push_backEOS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN8vidhance5QDataERNS_9allocatorIS3_EEE9push_backEOS3_() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi() called");
    return 0;
}

/* Demangled: unlockGraphicBuffer(void*) */
extern "C" __attribute__((visibility("default"))) int _Z19unlockGraphicBufferPv(void) {
    ALOGD("_Z19unlockGraphicBufferPv() called");
    return 0;
}

/* Demangled: std::__1::deque<android::hardware::sensors::V1_0::Event, std::__1::allocator<android::hardware::sensors::V1_0::Event> >::erase(std::__1::__deque_iterator<android::hardware::sensors::V1_0::Event, android::hardware::sensors::V1_0::Event const*, android::hardware::sensors::V1_0::Event const&, android::hardware::sensors::V1_0::Event const* const*, long, 51l>, std::__1::__deque_iterator<android::hardware::sensors::V1_0::Event, android::hardware::sensors::V1_0::Event const*, android::hardware::sensors::V1_0::Event const&, android::hardware::sensors::V1_0::Event const* const*, long, 51l>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN7android8hardware7sensors4V1_05EventENS_9allocatorIS5_EEE5eraseENS_16__deque_iteratorIS5_PKS5_RSA_PKSB_lLl51EEESF_(void) {
    ALOGD("_ZNSt3__15dequeIN7android8hardware7sensors4V1_05EventENS_9allocatorIS5_EEE5eraseENS_16__deque_iteratorIS5_PKS5_RSA_PKSB_lLl51EEESF_() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE = NULL;

/* Demangled: vidhance::Platform::Platform() */
extern "C" __attribute__((visibility("default"))) int _ZN8vidhance8PlatformC2Ev(void) {
    ALOGD("_ZN8vidhance8PlatformC2Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<vidhance::StreamUsage, std::__1::shared_ptr<OISReader> >, std::__1::__map_value_compare<vidhance::StreamUsage, std::__1::__value_type<vidhance::StreamUsage, std::__1::shared_ptr<OISReader> >, std::__1::less<vidhance::StreamUsage>, true>, std::__1::allocator<std::__1::__value_type<vidhance::StreamUsage, std::__1::shared_ptr<OISReader> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<vidhance::StreamUsage, std::__1::shared_ptr<OISReader> >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIN8vidhance11StreamUsageENS_10shared_ptrI9OISReaderEEEENS_19__map_value_compareIS3_S7_NS_4lessIS3_EELb1EEENS_9allocatorIS7_EEE7destroyEPNS_11__tree_nodeIS7_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIN8vidhance11StreamUsageENS_10shared_ptrI9OISReaderEEEENS_19__map_value_compareIS3_S7_NS_4lessIS3_EELb1EEENS_9allocatorIS7_EEE7destroyEPNS_11__tree_nodeIS7_PvEE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<std::__1::packaged_task<void ()>, std::__1::allocator<std::__1::packaged_task<void ()> > >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceINS_13packaged_taskIFvvEEENS_9allocatorIS3_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceINS_13packaged_taskIFvvEEENS_9allocatorIS3_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: ISensorAPI::SensorReaderImpl::deinitialize() */
extern "C" __attribute__((visibility("default"))) int _ZN10ISensorAPI16SensorReaderImpl12deinitializeEv(void) {
    ALOGD("_ZN10ISensorAPI16SensorReaderImpl12deinitializeEv() called");
    return 0;
}

/* Demangled: ISensorAPI::SensorReaderImpl::enable() */
extern "C" __attribute__((visibility("default"))) int _ZN10ISensorAPI16SensorReaderImpl6enableEv(void) {
    ALOGD("_ZN10ISensorAPI16SensorReaderImpl6enableEv() called");
    return 0;
}

/* Demangled: ISensorAPI::SensorReaderImpl::~SensorReaderImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN10ISensorAPI16SensorReaderImplD0Ev(void) {
    ALOGD("_ZN10ISensorAPI16SensorReaderImplD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__deque_iterator<android::hardware::sensors::V1_0::Event, android::hardware::sensors::V1_0::Event*, android::hardware::sensors::V1_0::Event&, android::hardware::sensors::V1_0::Event**, long, 51l> std::__1::move<android::hardware::sensors::V1_0::Event, android::hardware::sensors::V1_0::Event*, android::hardware::sensors::V1_0::Event&, android::hardware::sensors::V1_0::Event**, long, 51l, android::hardware::sensors::V1_0::Event, android::hardware::sensors::V1_0::Event*, android::hardware::sensors::V1_0::Event&, android::hardware::sensors::V1_0::Event**, long, 51l>(std::__1::__deque_iterator<android::hardware::sensors::V1_0::Event, android::hardware::sensors::V1_0::Event*, android::hardware::sensors::V1_0::Event&, android::hardware::sensors::V1_0::Event**, long, 51l>, std::__1::__deque_iterator<android::hardware::sensors::V1_0::Event, android::hardware::sensors::V1_0::Event*, android::hardware::sensors::V1_0::Event&, android::hardware::sensors::V1_0::Event**, long, 51l>, std::__1::__deque_iterator<android::hardware::sensors::V1_0::Event, android::hardware::sensors::V1_0::Event*, android::hardware::sensors::V1_0::Event&, android::hardware::sensors::V1_0::Event**, long, 51l>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14moveIN7android8hardware7sensors4V1_05EventEPS5_RS5_PS6_lLl51ES5_S6_S7_S8_lLl51EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS9_IT_T0_T1_T2_T3_XT4_EEESL_SF_(void) {
    ALOGD("_ZNSt3__14moveIN7android8hardware7sensors4V1_05EventEPS5_RS5_PS6_lLl51ES5_S6_S7_S8_lLl51EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS9_IT_T0_T1_T2_T3_XT4_EEESL_SF_() called");
    return 0;
}

/* Demangled: vidhance::Properties::getContextProperties(vidhance::StreamUsage) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8vidhance10Properties20getContextPropertiesENS_11StreamUsageE(void) {
    ALOGD("_ZNK8vidhance10Properties20getContextPropertiesENS_11StreamUsageE() called");
    return 0;
}

/* Demangled: vidhance::Platform::getFormat(vidhance::StreamUsage) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8vidhance8Platform9getFormatENS_11StreamUsageE(void) {
    ALOGD("_ZNK8vidhance8Platform9getFormatENS_11StreamUsageE() called");
    return 0;
}

/* Exported Object: vtable for DefaultPlatform */
extern "C" __attribute__((visibility("default"))) void* _ZTV15DefaultPlatform = NULL;

/* Exported Object: vtable for std::__1::__shared_ptr_pointer<vidhance::Properties*, std::__1::default_delete<vidhance::Properties>, std::__1::allocator<vidhance::Properties> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_pointerIPN8vidhance10PropertiesENS_14default_deleteIS2_EENS_9allocatorIS2_EEEE = NULL;

/* Demangled: std::__1::__split_buffer<android::hardware::sensors::V1_0::Event*, std::__1::allocator<android::hardware::sensors::V1_0::Event*> >::push_back(android::hardware::sensors::V1_0::Event*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android8hardware7sensors4V1_05EventENS_9allocatorIS6_EEE9push_backEOS6_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android8hardware7sensors4V1_05EventENS_9allocatorIS6_EEE9push_backEOS6_() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<vidhance::QData*, std::__1::allocator<vidhance::QData*> >::push_back(vidhance::QData*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN8vidhance5QDataENS_9allocatorIS3_EEE9push_backEOS3_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN8vidhance5QDataENS_9allocatorIS3_EEE9push_backEOS3_() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<int, std::__1::vector<vidhance::Resolution2D<int>, std::__1::allocator<vidhance::Resolution2D<int> > > >, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::vector<vidhance::Resolution2D<int>, std::__1::allocator<vidhance::Resolution2D<int> > > >, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, std::__1::vector<vidhance::Resolution2D<int>, std::__1::allocator<vidhance::Resolution2D<int> > > > > >::__find_equal<int>(std::__1::__tree_const_iterator<std::__1::__value_type<int, std::__1::vector<vidhance::Resolution2D<int>, std::__1::allocator<vidhance::Resolution2D<int> > > >, std::__1::__tree_node<std::__1::__value_type<int, std::__1::vector<vidhance::Resolution2D<int>, std::__1::allocator<vidhance::Resolution2D<int> > > >, void*>*, long>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiNS_6vectorIN8vidhance12Resolution2DIiEENS_9allocatorIS5_EEEEEENS_19__map_value_compareIiS9_NS_4lessIiEELb1EEENS6_IS9_EEE12__find_equalIiEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS9_PNS_11__tree_nodeIS9_SI_EElEERPNS_15__tree_end_nodeISK_EESL_RKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiNS_6vectorIN8vidhance12Resolution2DIiEENS_9allocatorIS5_EEEEEENS_19__map_value_compareIiS9_NS_4lessIiEELb1EEENS6_IS9_EEE12__find_equalIiEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS9_PNS_11__tree_nodeIS9_SI_EElEERPNS_15__tree_end_nodeISK_EESL_RKT_() called");
    return 0;
}

/* Exported Object: vtable for vidhance::VidhanceProviderImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN8vidhance20VidhanceProviderImplE = NULL;

/* Demangled: vidhance::Platform::createStandardContextSettings(vidhance::FeatureConfiguration const&, vidhance::ContextProperties const&, vidhance::StreamUsage const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8vidhance8Platform29createStandardContextSettingsERKNS_20FeatureConfigurationERKNS_17ContextPropertiesERKNS_11StreamUsageE(void) {
    ALOGD("_ZNK8vidhance8Platform29createStandardContextSettingsERKNS_20FeatureConfigurationERKNS_17ContextPropertiesERKNS_11StreamUsageE() called");
    return 0;
}

/* Demangled: std::__1::__deque_iterator<android::hardware::sensors::V1_0::Event, android::hardware::sensors::V1_0::Event*, android::hardware::sensors::V1_0::Event&, android::hardware::sensors::V1_0::Event**, long, 51l> std::__1::move_backward<android::hardware::sensors::V1_0::Event, android::hardware::sensors::V1_0::Event*, android::hardware::sensors::V1_0::Event&, android::hardware::sensors::V1_0::Event**, long, 51l, android::hardware::sensors::V1_0::Event, android::hardware::sensors::V1_0::Event*, android::hardware::sensors::V1_0::Event&, android::hardware::sensors::V1_0::Event**, long, 51l>(std::__1::__deque_iterator<android::hardware::sensors::V1_0::Event, android::hardware::sensors::V1_0::Event*, android::hardware::sensors::V1_0::Event&, android::hardware::sensors::V1_0::Event**, long, 51l>, std::__1::__deque_iterator<android::hardware::sensors::V1_0::Event, android::hardware::sensors::V1_0::Event*, android::hardware::sensors::V1_0::Event&, android::hardware::sensors::V1_0::Event**, long, 51l>, std::__1::__deque_iterator<android::hardware::sensors::V1_0::Event, android::hardware::sensors::V1_0::Event*, android::hardware::sensors::V1_0::Event&, android::hardware::sensors::V1_0::Event**, long, 51l>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113move_backwardIN7android8hardware7sensors4V1_05EventEPS5_RS5_PS6_lLl51ES5_S6_S7_S8_lLl51EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS9_IT_T0_T1_T2_T3_XT4_EEESL_SF_(void) {
    ALOGD("_ZNSt3__113move_backwardIN7android8hardware7sensors4V1_05EventEPS5_RS5_PS6_lLl51ES5_S6_S7_S8_lLl51EEENS_16__deque_iteratorIT5_T6_T7_T8_T9_XT10_EEENS9_IT_T0_T1_T2_T3_XT4_EEESL_SF_() called");
    return 0;
}

/* Demangled: ThreadPool::ThreadPool(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10ThreadPoolC2Em(void) {
    ALOGD("_ZN10ThreadPoolC2Em() called");
    return 0;
}

/* Demangled: vidhance::VidhanceContext::getLatency() const */
extern "C" __attribute__((visibility("default"))) int _ZNK8vidhance15VidhanceContext10getLatencyEv(void) {
    ALOGD("_ZNK8vidhance15VidhanceContext10getLatencyEv() called");
    return 0;
}

/* Demangled: vidhance::Platform::getDefaultFeatureConfiguration() const */
extern "C" __attribute__((visibility("default"))) int _ZNK8vidhance8Platform30getDefaultFeatureConfigurationEv(void) {
    ALOGD("_ZNK8vidhance8Platform30getDefaultFeatureConfigurationEv() called");
    return 0;
}

/* Demangled: vidhance::Properties::isEnabled(vidhance::StreamUsage) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8vidhance10Properties9isEnabledENS_11StreamUsageE(void) {
    ALOGD("_ZNK8vidhance10Properties9isEnabledENS_11StreamUsageE() called");
    return 0;
}

/* Demangled: vidhance::VidhanceContext::createInput(_vidhance_image_t* const&, vidhance::frame_data_t const&, vidhance::camera_data const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8vidhance15VidhanceContext11createInputERKP17_vidhance_image_tRKNS_12frame_data_tERKNS_11camera_dataE(void) {
    ALOGD("_ZNK8vidhance15VidhanceContext11createInputERKP17_vidhance_image_tRKNS_12frame_data_tERKNS_11camera_dataE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<int, std::__1::vector<vidhance::Resolution2D<int>, std::__1::allocator<vidhance::Resolution2D<int> > > >, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::vector<vidhance::Resolution2D<int>, std::__1::allocator<vidhance::Resolution2D<int> > > >, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, std::__1::vector<vidhance::Resolution2D<int>, std::__1::allocator<vidhance::Resolution2D<int> > > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, std::__1::vector<vidhance::Resolution2D<int>, std::__1::allocator<vidhance::Resolution2D<int> > > >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiNS_6vectorIN8vidhance12Resolution2DIiEENS_9allocatorIS5_EEEEEENS_19__map_value_compareIiS9_NS_4lessIiEELb1EEENS6_IS9_EEE7destroyEPNS_11__tree_nodeIS9_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiNS_6vectorIN8vidhance12Resolution2DIiEENS_9allocatorIS5_EEEEEENS_19__map_value_compareIiS9_NS_4lessIiEELb1EEENS6_IS9_EEE7destroyEPNS_11__tree_nodeIS9_PvEE() called");
    return 0;
}

/* Demangled: vidhance::VidhanceContext::videoStop() */
extern "C" __attribute__((visibility("default"))) int _ZN8vidhance15VidhanceContext9videoStopEv(void) {
    ALOGD("_ZN8vidhance15VidhanceContext9videoStopEv() called");
    return 0;
}

/* Exported Object: vtable for ISensorAPI::GyroReader */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10ISensorAPI10GyroReaderE = NULL;

/* Demangled: ISensorAPI::SensorReaderImpl::getEvents(vidhance_date_time_t, vidhance_time_span_t) */
extern "C" __attribute__((visibility("default"))) int _ZN10ISensorAPI16SensorReaderImpl9getEventsE20vidhance_date_time_t20vidhance_time_span_t(void) {
    ALOGD("_ZN10ISensorAPI16SensorReaderImpl9getEventsE20vidhance_date_time_t20vidhance_time_span_t() called");
    return 0;
}

/* Demangled: ISensorAPI::SensorReaderImpl::~SensorReaderImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN10ISensorAPI16SensorReaderImplD2Ev(void) {
    ALOGD("_ZN10ISensorAPI16SensorReaderImplD2Ev() called");
    return 0;
}

/* Demangled: DefaultPlatform::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN15DefaultPlatform11getInstanceEv(void) {
    ALOGD("_ZN15DefaultPlatform11getInstanceEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::function<void ()>*, std::__1::allocator<std::__1::function<void ()>*>&>::push_back(std::__1::function<void ()>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_8functionIFvvEEERNS_9allocatorIS4_EEE9push_backEOS4_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_8functionIFvvEEERNS_9allocatorIS4_EEE9push_backEOS4_() called");
    return 0;
}

/* Demangled: DefaultPlatform::DefaultPlatform() */
extern "C" __attribute__((visibility("default"))) int _ZN15DefaultPlatformC1Ev(void) {
    ALOGD("_ZN15DefaultPlatformC1Ev() called");
    return 0;
}

/* Demangled: vidhance::Properties::Properties() */
extern "C" __attribute__((visibility("default"))) int _ZN8vidhance10PropertiesC1Ev(void) {
    ALOGD("_ZN8vidhance10PropertiesC1Ev() called");
    return 0;
}

/* Demangled: vidhance::Platform::toVidhanceUsage(vidhance::StreamUsage) */
extern "C" __attribute__((visibility("default"))) int _ZN8vidhance8Platform15toVidhanceUsageENS_11StreamUsageE(void) {
    ALOGD("_ZN8vidhance8Platform15toVidhanceUsageENS_11StreamUsageE() called");
    return 0;
}

/* Demangled: ISensorAPI::SensorReaderImpl::processEvent(android::hardware::sensors::V1_0::Event const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10ISensorAPI16SensorReaderImpl12processEventERKN7android8hardware7sensors4V1_05EventE(void) {
    ALOGD("_ZN10ISensorAPI16SensorReaderImpl12processEventERKN7android8hardware7sensors4V1_05EventE() called");
    return 0;
}

/* Exported Object: SensorReader::realtimeAtBoot */
extern "C" __attribute__((visibility("default"))) void* _ZN12SensorReader14realtimeAtBootE = NULL;

/* Demangled: std::__1::__split_buffer<android::hardware::sensors::V1_0::Event*, std::__1::allocator<android::hardware::sensors::V1_0::Event*>&>::push_back(android::hardware::sensors::V1_0::Event*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN7android8hardware7sensors4V1_05EventERNS_9allocatorIS6_EEE9push_backEOS6_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN7android8hardware7sensors4V1_05EventERNS_9allocatorIS6_EEE9push_backEOS6_() called");
    return 0;
}

/* Demangled: OISReader::OISReader(std::__1::function<std::__1::vector<ois_lens_meta_data, std::__1::allocator<ois_lens_meta_data> > (vidhance_date_time_t, vidhance_time_span_t)> const&, vidhance_date_time_t) */
extern "C" __attribute__((visibility("default"))) int _ZN9OISReaderC1ERKNSt3__18functionIFNS0_6vectorI18ois_lens_meta_dataNS0_9allocatorIS3_EEEE20vidhance_date_time_t20vidhance_time_span_tEEES7_(void) {
    ALOGD("_ZN9OISReaderC1ERKNSt3__18functionIFNS0_6vectorI18ois_lens_meta_dataNS0_9allocatorIS3_EEEE20vidhance_date_time_t20vidhance_time_span_tEEES7_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSPipelinePlugin::Interceptor<NSCam::NSPipelinePlugin::Join, vidhance::VidhanceProviderImpl> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam16NSPipelinePlugin11InterceptorINS0_4JoinEN8vidhance20VidhanceProviderImplEEE = NULL;

/* Demangled: DefaultPlatform::releaseGyro(vidhance::StreamUsage) */
extern "C" __attribute__((visibility("default"))) int _ZN15DefaultPlatform11releaseGyroEN8vidhance11StreamUsageE(void) {
    ALOGD("_ZN15DefaultPlatform11releaseGyroEN8vidhance11StreamUsageE() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::hardware::sensors::V1_0::Event, std::__1::allocator<android::hardware::sensors::V1_0::Event> >::__push_back_slow_path<android::hardware::sensors::V1_0::Event const&>(android::hardware::sensors::V1_0::Event const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android8hardware7sensors4V1_05EventENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android8hardware7sensors4V1_05EventENS_9allocatorIS5_EEE21__push_back_slow_pathIRKS5_EEvOT_() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Exported Object: vtable for vidhance::VidhanceContext */
extern "C" __attribute__((visibility("default"))) void* _ZTVN8vidhance15VidhanceContextE = NULL;

/* Demangled: ThreadPool::~ThreadPool() */
extern "C" __attribute__((visibility("default"))) int _ZN10ThreadPoolD1Ev(void) {
    ALOGD("_ZN10ThreadPoolD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::function<void ()>*, std::__1::allocator<std::__1::function<void ()>*> >::push_front(std::__1::function<void ()>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_8functionIFvvEEENS_9allocatorIS4_EEE10push_frontEOS4_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_8functionIFvvEEENS_9allocatorIS4_EEE10push_frontEOS4_() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_iostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_14basic_iostreamIcS2_EE = NULL;

/* Demangled: DefaultPlatform::getGyro(vidhance::StreamUsage const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK15DefaultPlatform7getGyroERKN8vidhance11StreamUsageE(void) {
    ALOGD("_ZNK15DefaultPlatform7getGyroERKN8vidhance11StreamUsageE() called");
    return 0;
}

/* Demangled: vidhance::Platform::getInputFormat(vidhance::StreamUsage const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8vidhance8Platform14getInputFormatERKNS_11StreamUsageE(void) {
    ALOGD("_ZNK8vidhance8Platform14getInputFormatERKNS_11StreamUsageE() called");
    return 0;
}

/* Demangled: GraphicBufferWrapper::getStride() const */
extern "C" __attribute__((visibility("default"))) int _ZNK20GraphicBufferWrapper9getStrideEv(void) {
    ALOGD("_ZNK20GraphicBufferWrapper9getStrideEv() called");
    return 0;
}

/* Demangled: std::__1::deque<android::hardware::sensors::V1_0::Event, std::__1::allocator<android::hardware::sensors::V1_0::Event> >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN7android8hardware7sensors4V1_05EventENS_9allocatorIS5_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeIN7android8hardware7sensors4V1_05EventENS_9allocatorIS5_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: vidhance::VidhanceContext::setProxy(vidhance::VidhanceContext*) */
extern "C" __attribute__((visibility("default"))) int _ZN8vidhance15VidhanceContext8setProxyEPS0_(void) {
    ALOGD("_ZN8vidhance15VidhanceContext8setProxyEPS0_() called");
    return 0;
}

/* Demangled: vidhance::VidhanceContext::~VidhanceContext() */
extern "C" __attribute__((visibility("default"))) int _ZN8vidhance15VidhanceContextD1Ev(void) {
    ALOGD("_ZN8vidhance15VidhanceContextD1Ev() called");
    return 0;
}

/* Demangled: vidhance::VidhanceContext::process(_vidhance_input_t*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8vidhance15VidhanceContext7processEP17_vidhance_input_t(void) {
    ALOGD("_ZNK8vidhance15VidhanceContext7processEP17_vidhance_input_t() called");
    return 0;
}

/* Demangled: GraphicBufferWrapper::GraphicBufferWrapper(android::sp<android::GraphicBuffer>, FreeFlag) */
extern "C" __attribute__((visibility("default"))) int _ZN20GraphicBufferWrapperC2EN7android2spINS0_13GraphicBufferEEE8FreeFlag(void) {
    ALOGD("_ZN20GraphicBufferWrapperC2EN7android2spINS0_13GraphicBufferEEE8FreeFlag() called");
    return 0;
}

/* Demangled: ISensorAPI::GyroReader::getAngularVelocity(vidhance_date_time_t, vidhance_time_span_t, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10ISensorAPI10GyroReader18getAngularVelocityE20vidhance_date_time_t20vidhance_time_span_tPv(void) {
    ALOGD("_ZN10ISensorAPI10GyroReader18getAngularVelocityE20vidhance_date_time_t20vidhance_time_span_tPv() called");
    return 0;
}

/* Demangled: freeGraphicBuffer(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z17freeGraphicBufferPvS_(void) {
    ALOGD("_Z17freeGraphicBufferPvS_() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi() called");
    return 0;
}

/* Demangled: DefaultPlatform::getDefaultFeatureConfiguration() const */
extern "C" __attribute__((visibility("default"))) int _ZNK15DefaultPlatform30getDefaultFeatureConfigurationEv(void) {
    ALOGD("_ZNK15DefaultPlatform30getDefaultFeatureConfigurationEv() called");
    return 0;
}

/* Demangled: vidhance::Platform::getInputGrallocUsage(vidhance::StreamUsage const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8vidhance8Platform20getInputGrallocUsageERKNS_11StreamUsageE(void) {
    ALOGD("_ZNK8vidhance8Platform20getInputGrallocUsageERKNS_11StreamUsageE() called");
    return 0;
}

/* Demangled: ISensorAPI::GyroReader::_getAngularVelocity(vidhance_date_time_t, vidhance_time_span_t) */
extern "C" __attribute__((visibility("default"))) int _ZN10ISensorAPI10GyroReader19_getAngularVelocityE20vidhance_date_time_t20vidhance_time_span_t(void) {
    ALOGD("_ZN10ISensorAPI10GyroReader19_getAngularVelocityE20vidhance_date_time_t20vidhance_time_span_t() called");
    return 0;
}
