/*
 * Reverse-Engineered ABI Specification for: hwcomposer.mt6785.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: hwcomposer.mt6785.so
 */

#ifndef BEGONIA_RE_HWCOMPOSER_MT6785_H
#define BEGONIA_RE_HWCOMPOSER_MT6785_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Standard Android Hardware Module Symbol */
extern struct hw_module_t HAL_MODULE_INFO_SYM;

/* Symbol: _ZN13HWCDispatcherC2Ev */
/* Demangled: HWCDispatcher::HWCDispatcher() */
int _ZN13HWCDispatcherC2Ev(void);

/* Symbol: _ZN14DispatchThreadC1Em */
/* Demangled: DispatchThread::DispatchThread(unsigned long) */
int _ZN14DispatchThreadC1Em(void);

/* Symbol: _ZN16HWVSyncEstimatorC1Ev */
/* Demangled: HWVSyncEstimator::HWVSyncEstimator() */
int _ZN16HWVSyncEstimatorC1Ev(void);

/* Symbol: _ZN18AsyncBliterHandler3setERKN7android2spI10HWCDisplayEEP13DispatcherJob */
/* Demangled: AsyncBliterHandler::set(android::sp<HWCDisplay> const&, DispatcherJob*) */
int _ZN18AsyncBliterHandler3setERKN7android2spI10HWCDisplayEEP13DispatcherJob(void);

/* Symbol: _ZN9DbgLoggerC2IJPKciS2_EEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, int, char const*>(unsigned int const&, unsigned char const&, char const*, char const*, int, char const*) */
int _ZN9DbgLoggerC2IJPKciS2_EEERKjRKhS2_DpT_(void);

/* Symbol: _ZN7android9TransformC2Ej */
/* Demangled: android::Transform::Transform(unsigned int) */
int _ZN7android9TransformC2Ej(void);

/* Symbol: _ZNK7android9Transform10makeBoundsEii */
/* Demangled: android::Transform::makeBounds(int, int) const */
int _ZNK7android9Transform10makeBoundsEii(void);

/* Symbol: _ZN7android10SWWatchDogD0Ev */
/* Demangled: android::SWWatchDog::~SWWatchDog() */
int _ZN7android10SWWatchDogD0Ev(void);

/* Symbol: _ZN10PerfHelperD2Ev */
/* Demangled: PerfHelper::~PerfHelper() */
int _ZN10PerfHelperD2Ev(void);

/* Symbol: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE7destroyEv */
/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE7destroyEv */
int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE7destroyEv(void);

/* Symbol: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIjEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EE7destroyEv */
/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIjEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EE7destroyEv */
int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIjEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EE7destroyEv(void);

/* Symbol: _ZN3hwc19GraphicBufferMapper21dumpBufferToSystemLogEPK13native_handleb */
/* Demangled: hwc::GraphicBufferMapper::dumpBufferToSystemLog(native_handle const*, bool) */
int _ZN3hwc19GraphicBufferMapper21dumpBufferToSystemLogEPK13native_handleb(void);

/* Symbol: _ZN3hwc19GraphicBufferMapper20getPixelFormatFourCCEPK13native_handlePj */
/* Demangled: hwc::GraphicBufferMapper::getPixelFormatFourCC(native_handle const*, unsigned int*) */
int _ZN3hwc19GraphicBufferMapper20getPixelFormatFourCCEPK13native_handlePj(void);

/* Symbol: _ZN7HWC2ApiD0Ev */
/* Demangled: HWC2Api::~HWC2Api() */
int _ZN7HWC2ApiD0Ev(void);

/* Symbol: _ZTv0_n24_N13LayerComposerD1Ev */
/* Demangled: virtual thunk to LayerComposer::~LayerComposer() */
int _ZTv0_n24_N13LayerComposerD1Ev(void);

/* Symbol: _ZN10BliterNode12calculateROIEP6DpRectS1_S1_RKNS_18SrcInvalidateParamERKNS_18DstInvalidateParamERKNS_10BufferInfoESA_ */
/* Demangled: BliterNode::calculateROI(DpRect*, DpRect*, DpRect*, BliterNode::SrcInvalidateParam const&, BliterNode::DstInvalidateParam const&, BliterNode::BufferInfo const&, BliterNode::BufferInfo const&) */
int _ZN10BliterNode12calculateROIEP6DpRectS1_S1_RKNS_18SrcInvalidateParamERKNS_18DstInvalidateParamERKNS_10BufferInfoESA_(void);

/* Symbol: _ZN13HWCDispatcher6getJobEm */
/* Demangled: HWCDispatcher::getJob(unsigned long) */
int _ZN13HWCDispatcher6getJobEm(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmS2_iiiiEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, char const*, int, int, int, int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, char const*, int, int, int, int) */
int _ZN9DbgLoggerC2IJPKcmS2_iiiiEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN10DispDevice21disableOverlaySessionEmPKP16OverlayPortParamj */
/* Demangled: DispDevice::disableOverlaySession(unsigned long, OverlayPortParam* const*, unsigned int) */
int _ZN10DispDevice21disableOverlaySessionEmPKP16OverlayPortParamj(void);

/* Symbol: _ZN10DispDevice21legacySetOutputBufferEm */
/* Demangled: DispDevice::legacySetOutputBuffer(unsigned long) */
int _ZN10DispDevice21legacySetOutputBufferEm(void);

/* Symbol: _ZN13AbortMessagerC2Ev */
/* Demangled: AbortMessager::AbortMessager() */
int _ZN13AbortMessagerC2Ev(void);

/* Symbol: _ZN3hwc14Gralloc2MapperC1Ev */
/* Demangled: hwc::Gralloc2Mapper::Gralloc2Mapper() */
int _ZN3hwc14Gralloc2MapperC1Ev(void);

/* Symbol: _ZTV9HWCThread */
/* Demangled: vtable for HWCThread */
extern void* _ZTV9HWCThread;

/* Symbol: _ZN13OverlayEngine14doMmBufferDumpERN7android2spI9FrameInfoEE */
/* Demangled: OverlayEngine::doMmBufferDump(android::sp<FrameInfo>&) */
int _ZN13OverlayEngine14doMmBufferDumpERN7android2spI9FrameInfoEE(void);

/* Symbol: _ZN7android10SWWatchDogC2ERKl */
/* Demangled: android::SWWatchDog::SWWatchDog(long const&) */
int _ZN7android10SWWatchDogC2ERKl(void);

/* Symbol: _ZN11HWCMediator20setJobVideoTimeStampEv */
/* Demangled: HWCMediator::setJobVideoTimeStamp() */
int _ZN11HWCMediator20setJobVideoTimeStampEv(void);

/* Symbol: _ZN11HWCMediator22displaySetActiveConfigEP11hwc2_devicemj */
/* Demangled: HWCMediator::displaySetActiveConfig(hwc2_device*, unsigned long, unsigned int) */
int _ZN11HWCMediator22displaySetActiveConfigEP11hwc2_devicemj(void);

/* Symbol: _ZN10DispDevice13waitTouchHintEiPm */
/* Demangled: DispDevice::waitTouchHint(int, unsigned long*) */
int _ZN10DispDevice13waitTouchHintEiPm(void);

/* Symbol: _Z20convertFormat4Bliterj */
/* Demangled: convertFormat4Bliter(unsigned int) */
int _Z20convertFormat4Bliterj(void);

/* Symbol: _ZTVNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZN9DbgLoggerC2IJPKc9DISP_MODEEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, DISP_MODE>(unsigned int const&, unsigned char const&, char const*, char const*, DISP_MODE) */
int _ZN9DbgLoggerC2IJPKc9DISP_MODEEEERKjRKhS2_DpT_(void);

/* Symbol: _ZNK7android9Transform9transformEii */
/* Demangled: android::Transform::transform(int, int) const */
int _ZNK7android9Transform9transformEii(void);

/* Symbol: _ZNK7android9TransformixEm */
/* Demangled: android::Transform::operator[](unsigned long) const */
int _ZNK7android9TransformixEm(void);

/* Symbol: _ZN15AsyncBlitDevice20getRszMaxHeightInputEv */
/* Demangled: AsyncBlitDevice::getRszMaxHeightInput() */
int _ZN15AsyncBlitDevice20getRszMaxHeightInputEv(void);

/* Symbol: _ZNK3hwc14Gralloc4Mapper26listSupportedMetadataTypesEv */
/* Demangled: hwc::Gralloc4Mapper::listSupportedMetadataTypes() const */
int _ZNK3hwc14Gralloc4Mapper26listSupportedMetadataTypesEv(void);

/* Symbol: _ZNK7android6VectorIiE10do_destroyEPvm */
/* Demangled: android::Vector<int>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIiE10do_destroyEPvm(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN10BliterNode8JobParamEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<BliterNode::JobParam> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<BliterNode::JobParam> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<BliterNode::JobParam> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<BliterNode::JobParam> > > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN10BliterNode8JobParamEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE8__rehashEm(void);

/* Symbol: _ZN14DisplayManager20notifyHotplugOutDoneEv */
/* Demangled: DisplayManager::notifyHotplugOutDone() */
int _ZN14DisplayManager20notifyHotplugOutDoneEv(void);

/* Symbol: _ZTV15TouchHintThread */
/* Demangled: vtable for TouchHintThread */
extern void* _ZTV15TouchHintThread;

/* Symbol: _ZN9IPqDeviceC2Ev */
/* Demangled: IPqDevice::IPqDevice() */
int _ZN9IPqDeviceC2Ev(void);

/* Symbol: _ZN11BlackBufferD2Ev */
/* Demangled: BlackBuffer::~BlackBuffer() */
int _ZN11BlackBufferD2Ev(void);

/* Symbol: _ZN11HWCMediator19displaySetPowerModeEP11hwc2_devicemi */
/* Demangled: HWCMediator::displaySetPowerMode(hwc2_device*, unsigned long, int) */
int _ZN11HWCMediator19displaySetPowerModeEP11hwc2_devicemi(void);

/* Symbol: _ZN10HWCDisplay25getVisibleLayersSortedByZEv */
/* Demangled: HWCDisplay::getVisibleLayersSortedByZ() */
int _ZN10HWCDisplay25getVisibleLayersSortedByZEv(void);

/* Symbol: _ZNK7android6VectorINS_2spI9FrameInfoEEE12do_constructEPvm */
/* Demangled: android::Vector<android::sp<FrameInfo> >::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorINS_2spI9FrameInfoEEE12do_constructEPvm(void);

/* Symbol: _ZN15AsyncBlitDevice20enableDisplayFeatureEj */
/* Demangled: AsyncBlitDevice::enableDisplayFeature(unsigned int) */
int _ZN15AsyncBlitDevice20enableDisplayFeatureEj(void);

/* Symbol: HWC2_PRESENT_VALI_STATE_PRESENT_STR */
/* Demangled: HWC2_PRESENT_VALI_STATE_PRESENT_STR */
extern void* HWC2_PRESENT_VALI_STATE_PRESENT_STR;

/* Symbol: _ZNSt3__1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE */
/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::operator<< <char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcS2_PK13DispatcherJobEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char const*, DispatcherJob const*>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, DispatcherJob const*) */
int _ZN9DbgLoggerC2IJPKcS2_PK13DispatcherJobEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueueS2_EEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char const*, DisplayBufferQueue*, char const*>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, DisplayBufferQueue*, char const*) */
int _ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueueS2_EEERKjRKhS2_DpT_(void);

/* Symbol: _Z14mapHdrTransferi */
/* Demangled: mapHdrTransfer(int) */
int _Z14mapHdrTransferi(void);

/* Symbol: _ZN11HWCMediator14displayGetTypeEP11hwc2_devicemPi */
/* Demangled: HWCMediator::displayGetType(hwc2_device*, unsigned long, int*) */
int _ZN11HWCMediator14displayGetTypeEP11hwc2_devicemPi(void);

/* Symbol: _ZN10HWCDisplay16needDoAvGroupingEj */
/* Demangled: HWCDisplay::needDoAvGrouping(unsigned int) */
int _ZN10HWCDisplay16needDoAvGroupingEj(void);

/* Symbol: _ZN11WhiteBufferC2Ev */
/* Demangled: WhiteBuffer::WhiteBuffer() */
int _ZN11WhiteBufferC2Ev(void);

/* Symbol: _ZN3hwc19GraphicBufferMapper16getTransportSizeEPK13native_handlePjS4_ */
/* Demangled: hwc::GraphicBufferMapper::getTransportSize(native_handle const*, unsigned int*, unsigned int*) */
int _ZN3hwc19GraphicBufferMapper16getTransportSizeEPK13native_handlePjS4_(void);

/* Symbol: _ZN15DisplayListener18setCallbackRefreshEPFvPvmES0_ */
/* Demangled: DisplayListener::setCallbackRefresh(void (*)(void*, unsigned long), void*) */
int _ZN15DisplayListener18setCallbackRefreshEPFvPvmES0_(void);

/* Symbol: _ZN10HWCDisplay17setColorTransformEPKfRKi */
/* Demangled: HWCDisplay::setColorTransform(float const*, int const&) */
int _ZN10HWCDisplay17setColorTransformEPKfRKi(void);

/* Symbol: _ZNK7android6VectorIPN13OverlayEngine12OverlayInputEE10do_destroyEPvm */
/* Demangled: android::Vector<OverlayEngine::OverlayInput*>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIPN13OverlayEngine12OverlayInputEE10do_destroyEPvm(void);

/* Symbol: _ZN10BliterNode15calculateAllROIERKjPN7android4RectE */
/* Demangled: BliterNode::calculateAllROI(unsigned int const&, android::Rect*) */
int _ZN10BliterNode15calculateAllROIERKjPN7android4RectE(void);

/* Symbol: _ZN7android9TransformC2Ev */
/* Demangled: android::Transform::Transform() */
int _ZN7android9TransformC2Ev(void);

/* Symbol: _ZN10IdleThread10initializeEl */
/* Demangled: IdleThread::initialize(long) */
int _ZN10IdleThread10initializeEl(void);

/* Symbol: _ZN13HWCDispatcher19decideDirtyAndFlushEmjN7android2spI8HWCLayerEER7HWLayer */
/* Demangled: HWCDispatcher::decideDirtyAndFlush(unsigned long, unsigned int, android::sp<HWCLayer>, HWLayer&) */
int _ZN13HWCDispatcher19decideDirtyAndFlushEmjN7android2spI8HWCLayerEER7HWLayer(void);

/* Symbol: _ZN9IONDevice11getInstanceEv */
/* Demangled: IONDevice::getInstance() */
int _ZN9IONDevice11getInstanceEv(void);

/* Symbol: _ZN13LayerComposerD1Ev */
/* Demangled: LayerComposer::~LayerComposer() */
int _ZN13LayerComposerD1Ev(void);

/* Symbol: _ZTV10IdleThread */
/* Demangled: vtable for IdleThread */
extern void* _ZTV10IdleThread;

/* Symbol: _ZN14PlatformCommon14PlatformConfigC2Ev */
/* Demangled: PlatformCommon::PlatformConfig::PlatformConfig() */
int _ZN14PlatformCommon14PlatformConfigC2Ev(void);

/* Symbol: _ZN10DispDevice12setPowerModeEmi */
/* Demangled: DispDevice::setPowerMode(unsigned long, int) */
int _ZN10DispDevice12setPowerModeEmi(void);

/* Symbol: _ZN10DispDevice4dumpERKmPN7android7String8E */
/* Demangled: DispDevice::dump(unsigned long const&, android::String8*) */
int _ZN10DispDevice4dumpERKmPN7android7String8E(void);

/* Symbol: _ZTT15DisplayListener */
/* Demangled: VTT for DisplayListener */
extern void* _ZTT15DisplayListener;

/* Symbol: _ZNK3hwc14Gralloc4Mapper10getDefaultIjEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS3_8hidl_vecIhEEPT_ESG_ */
/* Demangled: int hwc::Gralloc4Mapper::getDefault<unsigned int>(unsigned int, unsigned int, int, unsigned int, unsigned long, android::hardware::graphics::mapper::V4_0::IMapper::MetadataType const&, int (*)(android::hardware::hidl_vec<unsigned char> const&, unsigned int*), unsigned int*) const */
int _ZNK3hwc14Gralloc4Mapper10getDefaultIjEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS3_8hidl_vecIhEEPT_ESG_(void);

/* Symbol: _ZN14DisplayManager12requestVSyncEmb */
/* Demangled: DisplayManager::requestVSync(unsigned long, bool) */
int _ZN14DisplayManager12requestVSyncEmb(void);

/* Symbol: _ZTv0_n24_N20RefreshRequestThreadD0Ev */
/* Demangled: virtual thunk to RefreshRequestThread::~RefreshRequestThread() */
int _ZTv0_n24_N20RefreshRequestThreadD0Ev(void);

/* Symbol: _ZTVN3hwc13GrallocMapperE */
/* Demangled: vtable for hwc::GrallocMapper */
extern void* _ZTVN3hwc13GrallocMapperE;

/* Symbol: _ZNK3hwc14Gralloc4Mapper16getTransportSizeEPK13native_handlePjS4_ */
/* Demangled: hwc::Gralloc4Mapper::getTransportSize(native_handle const*, unsigned int*, unsigned int*) const */
int _ZNK3hwc14Gralloc4Mapper16getTransportSizeEPK13native_handlePjS4_(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcS2_miijjEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char const*, unsigned long, int, int, unsigned int, unsigned int>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, unsigned long, int, int, unsigned int, unsigned int) */
int _ZN9DbgLoggerC2IJPKcS2_miijjEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN10DispDevice15queryValidLayerEPv */
/* Demangled: DispDevice::queryValidLayer(void*) */
int _ZN10DispDevice15queryValidLayerEPv(void);

/* Symbol: _ZN3hwc19GraphicBufferMapper11getBufferIdEPK13native_handlePm */
/* Demangled: hwc::GraphicBufferMapper::getBufferId(native_handle const*, unsigned long*) */
int _ZN3hwc19GraphicBufferMapper11getBufferIdEPK13native_handlePm(void);

/* Symbol: _ZN13HWCDispatcher7onVSyncEm */
/* Demangled: HWCDispatcher::onVSync(unsigned long) */
int _ZN13HWCDispatcher7onVSyncEm(void);

/* Symbol: _ZN18DisplayBufferQueueC2Eim */
/* Demangled: DisplayBufferQueue::DisplayBufferQueue(int, unsigned long) */
int _ZN18DisplayBufferQueueC2Eim(void);

/* Symbol: _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZN10HWCDisplay7presentEv */
/* Demangled: HWCDisplay::present() */
int _ZN10HWCDisplay7presentEv(void);

/* Symbol: _ZN11WhiteBuffer11getInstanceEv */
/* Demangled: WhiteBuffer::getInstance() */
int _ZN11WhiteBuffer11getInstanceEv(void);

/* Symbol: _ZN16HWVSyncEstimator16pushPresentFenceERKi */
/* Demangled: HWVSyncEstimator::pushPresentFence(int const&) */
int _ZN16HWVSyncEstimator16pushPresentFenceERKi(void);

/* Symbol: _ZN8HWCLayer9setZOrderERKj */
/* Demangled: HWCLayer::setZOrder(unsigned int const&) */
int _ZN8HWCLayer9setZOrderERKj(void);

/* Symbol: _ZNK8HWCLayer18getPrevIsPQEnhanceEv */
/* Demangled: HWCLayer::getPrevIsPQEnhance() const */
int _ZNK8HWCLayer18getPrevIsPQEnhanceEv(void);

/* Symbol: _ZNK7android6VectorINS_2spI13DispatcherJobEEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<android::sp<DispatcherJob> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spI13DispatcherJobEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZTv0_n24_N13OverlayEngineD0Ev */
/* Demangled: virtual thunk to OverlayEngine::~OverlayEngine() */
int _ZTv0_n24_N13OverlayEngineD0Ev(void);

/* Symbol: _ZN15AsyncBlitDevice19isDisplayArrSupportEv */
/* Demangled: AsyncBlitDevice::isDisplayArrSupport() */
int _ZN15AsyncBlitDevice19isDisplayArrSupportEv(void);

/* Symbol: _ZN14DisplayManager16requestNextVSyncEm */
/* Demangled: DisplayManager::requestNextVSync(unsigned long) */
int _ZN14DisplayManager16requestNextVSyncEm(void);

/* Symbol: _ZN12UEventThreadC2Ev */
/* Demangled: UEventThread::UEventThread() */
int _ZN12UEventThreadC2Ev(void);

/* Symbol: _ZN11HWCMediator42buildVisibleAndInvisibleLayerForAllDisplayEv */
/* Demangled: HWCMediator::buildVisibleAndInvisibleLayerForAllDisplay() */
int _ZN11HWCMediator42buildVisibleAndInvisibleLayerForAllDisplayEv(void);

/* Symbol: _ZN8HWCLayer9setDamageERK10hwc_region */
/* Demangled: HWCLayer::setDamage(hwc_region const&) */
int _ZN8HWCLayer9setDamageERK10hwc_region(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcS2_PK13native_handleEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char const*, native_handle const*>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, native_handle const*) */
int _ZN9DbgLoggerC2IJPKcS2_PK13native_handleEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN14ColorTransformC1EPKfRKiRKb */
/* Demangled: ColorTransform::ColorTransform(float const*, int const&, bool const&) */
int _ZN14ColorTransformC1EPKfRKiRKb(void);

/* Symbol: _ZN11HWCMediator18getValidDisplayNumEv */
/* Demangled: HWCMediator::getValidDisplayNum() */
int _ZN11HWCMediator18getValidDisplayNumEv(void);

/* Symbol: _ZN11HWCMediator5closeEv */
/* Demangled: HWCMediator::close() */
int _ZN11HWCMediator5closeEv(void);

/* Symbol: _ZN14DisplayManager20getDisplayPowerStateERKm */
/* Demangled: DisplayManager::getDisplayPowerState(unsigned long const&) */
int _ZN14DisplayManager20getDisplayPowerStateERKm(void);

/* Symbol: _ZTC23PanelEventMonitorThread0_N7android6ThreadE */
/* Demangled: construction vtable for android::Thread-in-PanelEventMonitorThread */
extern void* _ZTC23PanelEventMonitorThread0_N7android6ThreadE;

/* Symbol: _ZN9DbgLoggerC2IJPKcmS2_ibEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, char const*, int, bool>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, char const*, int, bool) */
int _ZN9DbgLoggerC2IJPKcmS2_ibEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN9HrtCommon32updateGlesRangeHwTypeForDisplaysERKNSt3__16vectorIN7android2spI10HWCDisplayEENS0_9allocatorIS5_EEEE */
/* Demangled: HrtCommon::updateGlesRangeHwTypeForDisplays(std::__1::vector<android::sp<HWCDisplay>, std::__1::allocator<android::sp<HWCDisplay> > > const&) */
int _ZN9HrtCommon32updateGlesRangeHwTypeForDisplaysERKNSt3__16vectorIN7android2spI10HWCDisplayEENS0_9allocatorIS5_EEEE(void);

/* Symbol: _ZN3hwc19GraphicBufferMapper22getPixelFormatModifierEPK13native_handlePm */
/* Demangled: hwc::GraphicBufferMapper::getPixelFormatModifier(native_handle const*, unsigned long*) */
int _ZN3hwc19GraphicBufferMapper22getPixelFormatModifierEPK13native_handlePm(void);

/* Symbol: _ZN11HWCMediator15setupHDRFeatureEv */
/* Demangled: HWCMediator::setupHDRFeature() */
int _ZN11HWCMediator15setupHDRFeatureEv(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmiij13DP_COLOR_ENUMiiiiEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, int, int, unsigned int, DP_COLOR_ENUM, int, int, int, int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, int, int, unsigned int, DP_COLOR_ENUM, int, int, int, int) */
int _ZN9DbgLoggerC2IJPKcmiij13DP_COLOR_ENUMiiiiEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN10DispDeviceC1Ev */
/* Demangled: DispDevice::DispDevice() */
int _ZN10DispDeviceC1Ev(void);

/* Symbol: _ZN11HWCMediator17lockRefreshThreadEm */
/* Demangled: HWCMediator::lockRefreshThread(unsigned long) */
int _ZN11HWCMediator17lockRefreshThreadEm(void);

/* Symbol: _ZN9DbgLogger9getBufferEv */
/* Demangled: DbgLogger::getBuffer() */
int _ZN9DbgLogger9getBufferEv(void);

/* Symbol: _ZN14DisplayManager20setDisplayDataForVirERKmRKjS3_S3_ */
/* Demangled: DisplayManager::setDisplayDataForVir(unsigned long const&, unsigned int const&, unsigned int const&, unsigned int const&) */
int _ZN14DisplayManager20setDisplayDataForVirERKmRKjS3_S3_(void);

/* Symbol: _ZN10BliterNode18SrcInvalidateParam4dumpEv */
/* Demangled: BliterNode::SrcInvalidateParam::dump() */
int _ZN10BliterNode18SrcInvalidateParam4dumpEv(void);

/* Symbol: _ZN14PlatformCommon19getLimitedVideoSizeEv */
/* Demangled: PlatformCommon::getLimitedVideoSize() */
int _ZN14PlatformCommon19getLimitedVideoSizeEv(void);

/* Symbol: _ZN9DbgLoggerC2IJPKc12DISP_IF_MODEEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, DISP_IF_MODE>(unsigned int const&, unsigned char const&, char const*, char const*, DISP_IF_MODE) */
int _ZN9DbgLoggerC2IJPKc12DISP_IF_MODEEEERKjRKhS2_DpT_(void);

/* Symbol: _ZTVN7android6VectorIiEE */
/* Demangled: vtable for android::Vector<int> */
extern void* _ZTVN7android6VectorIiEE;

/* Symbol: _ZN8HWCLayer14getBufferQueueEv */
/* Demangled: HWCLayer::getBufferQueue() */
int _ZN8HWCLayer14getBufferQueueEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIhiEENS_19__map_value_compareIhS2_NS_4lessIhEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned char, int>, std::__1::__map_value_compare<unsigned char, std::__1::__value_type<unsigned char, int>, std::__1::less<unsigned char>, true>, std::__1::allocator<std::__1::__value_type<unsigned char, int> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned char, int>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIhiEENS_19__map_value_compareIhS2_NS_4lessIhEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE(void);

/* Symbol: _ZNK7android6VectorIP13DispatcherJobE12do_constructEPvm */
/* Demangled: android::Vector<DispatcherJob*>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIP13DispatcherJobE12do_constructEPvm(void);

/* Symbol: _ZN9IONDevice14ionCloseAndSetEPiRKiRKb */
/* Demangled: IONDevice::ionCloseAndSet(int*, int const&, bool const&) */
int _ZN9IONDevice14ionCloseAndSetEPiRKiRKb(void);

/* Symbol: _Z12mapP3PqParamP9DpPqParamRKi */
/* Demangled: mapP3PqParam(DpPqParam*, int const&) */
int _Z12mapP3PqParamP9DpPqParamRKi(void);

/* Symbol: _ZNK3hwc14Gralloc4Mapper23getPixelFormatRequestedEPK13native_handlePN7android8hardware8graphics6common4V1_211PixelFormatE */
/* Demangled: hwc::Gralloc4Mapper::getPixelFormatRequested(native_handle const*, android::hardware::graphics::common::V1_2::PixelFormat*) const */
int _ZNK3hwc14Gralloc4Mapper23getPixelFormatRequestedEPK13native_handlePN7android8hardware8graphics6common4V1_211PixelFormatE(void);

/* Symbol: __fe_raise_inexact */
/* Demangled: __fe_raise_inexact */
int __fe_raise_inexact(void);

/* Symbol: _ZNK13HWCDispatcher28getOvlEnginePowerModeChangedERKm */
/* Demangled: HWCDispatcher::getOvlEnginePowerModeChanged(unsigned long const&) const */
int _ZNK13HWCDispatcher28getOvlEnginePowerModeChangedERKm(void);

/* Symbol: _ZN13OverlayEngine21getOverlaySessionModeEv */
/* Demangled: OverlayEngine::getOverlaySessionMode() */
int _ZN13OverlayEngine21getOverlaySessionModeEv(void);

/* Symbol: _ZN14DisplayManager21createTouchHintThreadEi */
/* Demangled: DisplayManager::createTouchHintThread(int) */
int _ZN14DisplayManager21createTouchHintThreadEi(void);

/* Symbol: _ZTv0_n24_N23PanelEventMonitorThreadD1Ev */
/* Demangled: virtual thunk to PanelEventMonitorThread::~PanelEventMonitorThread() */
int _ZTv0_n24_N23PanelEventMonitorThreadD1Ev(void);

/* Symbol: _ZNK10HWCDisplay9getHeightEj */
/* Demangled: HWCDisplay::getHeight(unsigned int) const */
int _ZNK10HWCDisplay9getHeightEj(void);

/* Symbol: _ZNK7android12SortedVectorINS_2spI16HWCVSyncListenerEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::sp<HWCVSyncListener> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_2spI16HWCVSyncListenerEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN7android10SWWatchDog9delAnchorERKm */
/* Demangled: android::SWWatchDog::delAnchor(unsigned long const&) */
int _ZN7android10SWWatchDog9delAnchorERKm(void);

/* Symbol: _ZN10DispDevice26isDispSelfRefreshSupportedEv */
/* Demangled: DispDevice::isDispSelfRefreshSupported() */
int _ZN10DispDevice26isDispSelfRefreshSupportedEv(void);

/* Symbol: _ZN13HWCDispatcher14VirPostHandler8setErrorEP13DispatcherJob */
/* Demangled: HWCDispatcher::VirPostHandler::setError(DispatcherJob*) */
int _ZN13HWCDispatcher14VirPostHandler8setErrorEP13DispatcherJob(void);

/* Symbol: _ZN13OverlayEngine4dumpEPN7android7String8E */
/* Demangled: OverlayEngine::dump(android::String8*) */
int _ZN13OverlayEngine4dumpEPN7android7String8E(void);

/* Symbol: _ZN14PlatformCommon14isMMLayerValidERKN7android2spI8HWCLayerEEPi */
/* Demangled: PlatformCommon::isMMLayerValid(android::sp<HWCLayer> const&, int*) */
int _ZN14PlatformCommon14isMMLayerValidERKN7android2spI8HWCLayerEEPi(void);

/* Symbol: _ZN7android17DisplayFeatureGet11serviceDiedEmRKNS_2wpINS_4hidl4base4V1_05IBaseEEE */
/* Demangled: android::DisplayFeatureGet::serviceDied(unsigned long, android::wp<android::hidl::base::V1_0::IBase> const&) */
int _ZN7android17DisplayFeatureGet11serviceDiedEmRKNS_2wpINS_4hidl4base4V1_05IBaseEEE(void);

/* Symbol: __cmptf2 */
/* Demangled: __cmptf2 */
int __cmptf2(void);

/* Symbol: _ZN11HWCMediator22layerSetCursorPositionEP11hwc2_devicemmii */
/* Demangled: HWCMediator::layerSetCursorPosition(hwc2_device*, unsigned long, unsigned long, int, int) */
int _ZN11HWCMediator22layerSetCursorPositionEP11hwc2_devicemmii(void);

/* Symbol: _ZN13OverlayEngine7triggerERKbRKjS3_RKiS1_N7android2spI14ColorTransformEES1_ */
/* Demangled: OverlayEngine::trigger(bool const&, unsigned int const&, unsigned int const&, int const&, bool const&, android::sp<ColorTransform>, bool const&) */
int _ZN13OverlayEngine7triggerERKbRKjS3_RKiS1_N7android2spI14ColorTransformEES1_(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcjjEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned int, unsigned int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned int, unsigned int) */
int _ZN9DbgLoggerC2IJPKcjjEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN18AsyncBliterHandler7processEP13DispatcherJob */
/* Demangled: AsyncBliterHandler::process(DispatcherJob*) */
int _ZN18AsyncBliterHandler7processEP13DispatcherJob(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcS2_jjjiEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char const*, unsigned int, unsigned int, unsigned int, int>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, unsigned int, unsigned int, unsigned int, int) */
int _ZN9DbgLoggerC2IJPKcS2_jjjiEEERKjRKhS2_DpT_(void);

/* Symbol: _ZNK3hwc14Gralloc4Mapper14getCompressionEPK13native_handlePN4aidl7android8hardware8graphics6common11CompressionE */
/* Demangled: hwc::Gralloc4Mapper::getCompression(native_handle const*, aidl::android::hardware::graphics::common::Compression*) const */
int _ZNK3hwc14Gralloc4Mapper14getCompressionEPK13native_handlePN4aidl7android8hardware8graphics6common11CompressionE(void);

/* Symbol: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSJ_8hidl_vecIhEEPT_ESW_EUlRKSV_SU_E_NSC_IS11_EEFvNSM_5ErrorESU_EE7__cloneEv */
/* Demangled: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSJ_8hidl_vecIhEEPT_ESW_EUlRKSV_SU_E_NSC_IS11_EEFvNSM_5ErrorESU_EE7__cloneEv */
int _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSJ_8hidl_vecIhEEPT_ESW_EUlRKSV_SU_E_NSC_IS11_EEFvNSM_5ErrorESU_EE7__cloneEv(void);

/* Symbol: _ZN11VSyncThreadC1Em */
/* Demangled: VSyncThread::VSyncThread(unsigned long) */
int _ZN11VSyncThreadC1Em(void);

/* Symbol: _ZN23PanelEventMonitorThread5StartEv */
/* Demangled: PanelEventMonitorThread::Start() */
int _ZN23PanelEventMonitorThread5StartEv(void);

/* Symbol: _ZN13OverlayEngineD0Ev */
/* Demangled: OverlayEngine::~OverlayEngine() */
int _ZN13OverlayEngineD0Ev(void);

/* Symbol: _ZN3hwc19GraphicBufferMapper23getPixelFormatRequestedEPK13native_handlePN7android8hardware8graphics6common4V1_211PixelFormatE */
/* Demangled: hwc::GraphicBufferMapper::getPixelFormatRequested(native_handle const*, android::hardware::graphics::common::V1_2::PixelFormat*) */
int _ZN3hwc19GraphicBufferMapper23getPixelFormatRequestedEPK13native_handlePN7android8hardware8graphics6common4V1_211PixelFormatE(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmiEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, int) */
int _ZN9DbgLoggerC2IJPKcmiEEERKjRKhS2_DpT_(void);

/* Symbol: _Z25getPrivateHandleLayerTypeRKPK13native_handleP13PrivateHandle */
/* Demangled: getPrivateHandleLayerType(native_handle const* const&, PrivateHandle*) */
int _Z25getPrivateHandleLayerTypeRKPK13native_handleP13PrivateHandle(void);

/* Symbol: _ZN13LayerComposer6nullopEv */
/* Demangled: LayerComposer::nullop() */
int _ZN13LayerComposer6nullopEv(void);

/* Symbol: _ZN16HWVSyncEstimatorD2Ev */
/* Demangled: HWVSyncEstimator::~HWVSyncEstimator() */
int _ZN16HWVSyncEstimatorD2Ev(void);

/* Symbol: _ZN18AsyncBliterHandler12cancelLayersEP13DispatcherJob */
/* Demangled: AsyncBliterHandler::cancelLayers(DispatcherJob*) */
int _ZN18AsyncBliterHandler12cancelLayersEP13DispatcherJob(void);

/* Symbol: _ZN7android9Transform3setEffff */
/* Demangled: android::Transform::set(float, float, float, float) */
int _ZN7android9Transform3setEffff(void);

/* Symbol: _ZN14DisplayManager10hotplugExtEmbbb */
/* Demangled: DisplayManager::hotplugExt(unsigned long, bool, bool, bool) */
int _ZN14DisplayManager10hotplugExtEmbbb(void);

/* Symbol: _ZN10ObjectPoolI9FrameInfoE12returnObjectEPKS0_ */
/* Demangled: ObjectPool<FrameInfo>::returnObject(FrameInfo const*) */
int _ZN10ObjectPoolI9FrameInfoE12returnObjectEPKS0_(void);

/* Symbol: _ZN3hwc19GraphicBufferMapper14getCompressionEPK13native_handlePN4aidl7android8hardware8graphics6common14ExtendableTypeE */
/* Demangled: hwc::GraphicBufferMapper::getCompression(native_handle const*, aidl::android::hardware::graphics::common::ExtendableType*) */
int _ZN3hwc19GraphicBufferMapper14getCompressionEPK13native_handlePN4aidl7android8hardware8graphics6common14ExtendableTypeE(void);

/* Symbol: _ZN14DispatchThread19waitNextVSyncLockedEm */
/* Demangled: DispatchThread::waitNextVSyncLocked(unsigned long) */
int _ZN14DispatchThread19waitNextVSyncLockedEm(void);

/* Symbol: _ZNK7android6VectorIPK13native_handleE10do_destroyEPvm */
/* Demangled: android::Vector<native_handle const*>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIPK13native_handleE10do_destroyEPvm(void);

/* Symbol: _ZTT12UEventThread */
/* Demangled: VTT for UEventThread */
extern void* _ZTT12UEventThread;

/* Symbol: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS8_ISX_EEFvNSI_5ErrorESQ_EE7destroyEv */
/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS8_ISX_EEFvNSI_5ErrorESQ_EE7destroyEv */
int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS8_ISX_EEFvNSI_5ErrorESQ_EE7destroyEv(void);

/* Symbol: _ZN10HWCDisplay17isForceGpuComposeEv */
/* Demangled: HWCDisplay::isForceGpuCompose() */
int _ZN10HWCDisplay17isForceGpuComposeEv(void);

/* Symbol: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIjEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EE18destroy_deallocateEv */
/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIjEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EE18destroy_deallocateEv */
int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIjEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EE18destroy_deallocateEv(void);

/* Symbol: _ZN11HWCMediator19displayGetColorModeEP11hwc2_devicemPjPi */
/* Demangled: HWCMediator::displayGetColorMode(hwc2_device*, unsigned long, unsigned int*, int*) */
int _ZN11HWCMediator19displayGetColorModeEP11hwc2_devicemPjPi(void);

/* Symbol: _ZN13AbortMessager6printfIJmPKcS2_EEEvS2_DpT_ */
/* Demangled: void AbortMessager::printf<unsigned long, char const*, char const*>(char const*, unsigned long, char const*, char const*) */
int _ZN13AbortMessager6printfIJmPKcS2_EEEvS2_DpT_(void);

/* Symbol: _ZNK7android6VectorINS_12SortedVectorINS_2spI16HWCVSyncListenerEEEEE8do_splatEPvPKvm */
/* Demangled: android::Vector<android::SortedVector<android::sp<HWCVSyncListener> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_12SortedVectorINS_2spI16HWCVSyncListenerEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZN20RefreshRequestThreadD1Ev */
/* Demangled: RefreshRequestThread::~RefreshRequestThread() */
int _ZN20RefreshRequestThreadD1Ev(void);

/* Symbol: _ZN16FrameOverlayInfoC2Ev */
/* Demangled: FrameOverlayInfo::FrameOverlayInfo() */
int _ZN16FrameOverlayInfoC2Ev(void);

/* Symbol: _ZN10HWCDisplay9updateFpsEv */
/* Demangled: HWCDisplay::updateFps() */
int _ZN10HWCDisplay9updateFpsEv(void);

/* Symbol: _ZN10DispDevice13queryCapsInfoEv */
/* Demangled: DispDevice::queryCapsInfo() */
int _ZN10DispDevice13queryCapsInfoEv(void);

/* Symbol: _ZN11HWCMediator23isAllDisplayPresentDoneEv */
/* Demangled: HWCMediator::isAllDisplayPresentDone() */
int _ZN11HWCMediator23isAllDisplayPresentDoneEv(void);

/* Symbol: _ZN12LayerHandlerD0Ev */
/* Demangled: LayerHandler::~LayerHandler() */
int _ZN12LayerHandlerD0Ev(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmjS2_iEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned int, char const*, int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned int, char const*, int) */
int _ZN9DbgLoggerC2IJPKcmjS2_iEEERKjRKhS2_DpT_(void);

/* Symbol: HWC2_BLEND_MODE_NONE_STR */
/* Demangled: HWC2_BLEND_MODE_NONE_STR */
extern void* HWC2_BLEND_MODE_NONE_STR;

/* Symbol: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE7__cloneEPNS0_6__baseIS11_EE */
/* Demangled: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE7__cloneEPNS0_6__baseIS11_EE */
int _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE7__cloneEPNS0_6__baseIS11_EE(void);

/* Symbol: _ZN8HWCLayer13setSourceCropERK9hwc_frect */
/* Demangled: HWCLayer::setSourceCrop(hwc_frect const&) */
int _ZN8HWCLayer13setSourceCropERK9hwc_frect(void);

/* Symbol: _ZNK7android6VectorINS_12SortedVectorINS_2spI16HWCVSyncListenerEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<android::SortedVector<android::sp<HWCVSyncListener> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_12SortedVectorINS_2spI16HWCVSyncListenerEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZTT11VSyncThread */
/* Demangled: VTT for VSyncThread */
extern void* _ZTT11VSyncThread;

/* Symbol: _ZN14PqDeviceLegacy17checkAndOpenIoctlEv */
/* Demangled: PqDeviceLegacy::checkAndOpenIoctl() */
int _ZN14PqDeviceLegacy17checkAndOpenIoctlEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN7android9WDTAnchorENS_9allocatorIS2_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<android::WDTAnchor, std::__1::allocator<android::WDTAnchor> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN7android9WDTAnchorENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN13DispatcherJobD1Ev */
/* Demangled: DispatcherJob::~DispatcherJob() */
int _ZN13DispatcherJobD1Ev(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmiiEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, int, int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, int, int) */
int _ZN9DbgLoggerC2IJPKcmiiEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN15ComposerHandler12cancelLayersEP13DispatcherJob */
/* Demangled: ComposerHandler::cancelLayers(DispatcherJob*) */
int _ZN15ComposerHandler12cancelLayersEP13DispatcherJob(void);

/* Symbol: _ZN10BliterNode8JobParam4dumpENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: BliterNode::JobParam::dump(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN10BliterNode8JobParam4dumpENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _Z12getSrcHeightRKN7android2spI8HWCLayerEE */
/* Demangled: getSrcHeight(android::sp<HWCLayer> const&) */
int _Z12getSrcHeightRKN7android2spI8HWCLayerEE(void);

/* Symbol: _Z18mapHdrMatrixCoeffsi */
/* Demangled: mapHdrMatrixCoeffs(int) */
int _Z18mapHdrMatrixCoeffsi(void);

/* Symbol: _ZN7android10SWWatchDog13setTickNotifyERKNSt3__110shared_ptrINS0_9RecipientEEE */
/* Demangled: android::SWWatchDog::setTickNotify(std::__1::shared_ptr<android::SWWatchDog::Recipient> const&) */
int _ZN7android10SWWatchDog13setTickNotifyERKNSt3__110shared_ptrINS0_9RecipientEEE(void);

/* Symbol: _ZN13LayerComposerC2EmRKN7android2spI13OverlayEngineEE */
/* Demangled: LayerComposer::LayerComposer(unsigned long, android::sp<OverlayEngine> const&) */
int _ZN13LayerComposerC2EmRKN7android2spI13OverlayEngineEE(void);

/* Symbol: _ZN15TouchHintThread10threadLoopEv */
/* Demangled: TouchHintThread::threadLoop() */
int _ZN15TouchHintThread10threadLoopEv(void);

/* Symbol: _ZN18DisplayBufferQueue13releaseBufferEii */
/* Demangled: DisplayBufferQueue::releaseBuffer(int, int) */
int _ZN18DisplayBufferQueue13releaseBufferEii(void);

/* Symbol: _ZTVN7android6VectorIP9FrameInfoEE */
/* Demangled: vtable for android::Vector<FrameInfo*> */
extern void* _ZTVN7android6VectorIP9FrameInfoEE;

/* Symbol: _ZN9DbgLoggerC2IJPKciiiEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, int, int, int>(unsigned int const&, unsigned char const&, char const*, char const*, int, int, int) */
int _ZN9DbgLoggerC2IJPKciiiEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN10DispDevice17getCurrentRefreshEm */
/* Demangled: DispDevice::getCurrentRefresh(unsigned long) */
int _ZN10DispDevice17getCurrentRefreshEm(void);

/* Symbol: _ZN15DisplayListener9onPlugOutEm */
/* Demangled: DisplayListener::onPlugOut(unsigned long) */
int _ZN15DisplayListener9onPlugOutEm(void);

/* Symbol: _ZTT13OverlayEngine */
/* Demangled: VTT for OverlayEngine */
extern void* _ZTT13OverlayEngine;

/* Symbol: _ZN18DisplayBufferQueue4dumpENS_20QUEUE_DUMP_CONDITIONE */
/* Demangled: DisplayBufferQueue::dump(DisplayBufferQueue::QUEUE_DUMP_CONDITION) */
int _ZN18DisplayBufferQueue4dumpENS_20QUEUE_DUMP_CONDITIONE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIibEENS_22__unordered_map_hasherIiS2_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS2_NS_8equal_toIiEELb1EEENS_9allocatorIS2_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, bool>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, bool>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, bool>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, bool> > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIibEENS_22__unordered_map_hasherIiS2_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS2_NS_8equal_toIiEELb1EEENS_9allocatorIS2_EEE8__rehashEm(void);

/* Symbol: _ZGVZN7android15SWWatchDogTimer11getInstanceEvE6sMutex */
/* Demangled: guard variable for android::SWWatchDogTimer::getInstance()::sMutex */
extern void* _ZGVZN7android15SWWatchDogTimer11getInstanceEvE6sMutex;

/* Symbol: _ZNK3hwc14Gralloc2Mapper10freeBufferEPK13native_handle */
/* Demangled: hwc::Gralloc2Mapper::freeBuffer(native_handle const*) const */
int _ZNK3hwc14Gralloc2Mapper10freeBufferEPK13native_handle(void);

/* Symbol: _ZN11HWCMediator8validateERKN7android2spI10HWCDisplayEE */
/* Demangled: HWCMediator::validate(android::sp<HWCDisplay> const&) */
int _ZN11HWCMediator8validateERKN7android2spI10HWCDisplayEE(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcS2_P13DispatcherJobiEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char const*, DispatcherJob*, int>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, DispatcherJob*, int) */
int _ZN9DbgLoggerC2IJPKcS2_P13DispatcherJobiEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN20MDPFrameInfoDebuggerC2Ev */
/* Demangled: MDPFrameInfoDebugger::MDPFrameInfoDebugger() */
int _ZN20MDPFrameInfoDebuggerC2Ev(void);

/* Symbol: _ZNK7android9TransformmlERKS0_ */
/* Demangled: android::Transform::operator*(android::Transform const&) const */
int _ZNK7android9TransformmlERKS0_(void);

/* Symbol: _ZN14DisplayManager18destroyVsyncThreadEm */
/* Demangled: DisplayManager::destroyVsyncThread(unsigned long) */
int _ZN14DisplayManager18destroyVsyncThreadEm(void);

/* Symbol: _ZN15AsyncBlitDevice17getCurrentRefreshEm */
/* Demangled: AsyncBlitDevice::getCurrentRefresh(unsigned long) */
int _ZN15AsyncBlitDevice17getCurrentRefreshEm(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmmS2_ijjjffffffffffffEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned long, char const*, int, unsigned int, unsigned int, unsigned int, float, float, float, float, float, float, float, float, float, float, float, float>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned long, char const*, int, unsigned int, unsigned int, unsigned int, float, float, float, float, float, float, float, float, float, float, float, float) */
int _ZN9DbgLoggerC2IJPKcmmS2_ijjjffffffffffffEEERKjRKhS2_DpT_(void);

/* Symbol: _ZNK3hwc14Gralloc4Mapper10freeBufferEPK13native_handle */
/* Demangled: hwc::Gralloc4Mapper::freeBuffer(native_handle const*) const */
int _ZNK3hwc14Gralloc4Mapper10freeBufferEPK13native_handle(void);

/* Symbol: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIjEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EE7__cloneEPNS0_6__baseISV_EE */
/* Demangled: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIjEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EE7__cloneEPNS0_6__baseISV_EE */
int _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIjEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EE7__cloneEPNS0_6__baseISV_EE(void);

/* Symbol: _ZN3hwc19GraphicBufferMapper15getSmpte2094_40EPK13native_handlePNSt3__18optionalINS4_6vectorIhNS4_9allocatorIhEEEEEE */
/* Demangled: hwc::GraphicBufferMapper::getSmpte2094_40(native_handle const*, std::__1::optional<std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > >*) */
int _ZN3hwc19GraphicBufferMapper15getSmpte2094_40EPK13native_handlePNSt3__18optionalINS4_6vectorIhNS4_9allocatorIhEEEEEE(void);

/* Symbol: _ZN13OverlayEngine13OverlayOutputC2Ev */
/* Demangled: OverlayEngine::OverlayOutput::OverlayOutput() */
int _ZN13OverlayEngine13OverlayOutputC2Ev(void);

/* Symbol: _ZNK8HWCLayer8isNeedPQERKi */
/* Demangled: HWCLayer::isNeedPQ(int const&) const */
int _ZNK8HWCLayer8isNeedPQERKi(void);

/* Symbol: _ZN14DispatchThread7onVSyncEv */
/* Demangled: DispatchThread::onVSync() */
int _ZN14DispatchThread7onVSyncEv(void);

/* Symbol: _ZN15TouchHintThreadD0Ev */
/* Demangled: TouchHintThread::~TouchHintThread() */
int _ZN15TouchHintThreadD0Ev(void);

/* Symbol: _ZNK7android6VectorIP9FrameInfoE10do_destroyEPvm */
/* Demangled: android::Vector<FrameInfo*>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIP9FrameInfoE10do_destroyEPvm(void);

/* Symbol: _ZN14DisplayManager4dumpEP9dump_buff */
/* Demangled: DisplayManager::dump(dump_buff*) */
int _ZN14DisplayManager4dumpEP9dump_buff(void);

/* Symbol: _ZN10DispDevice21triggerOverlaySessionEmiiijRKjS1_jPKP16OverlayPortParamN7android2spI14ColorTransformEERKbSB_SB_ */
/* Demangled: DispDevice::triggerOverlaySession(unsigned long, int, int, int, unsigned int, unsigned int const&, unsigned int const&, unsigned int, OverlayPortParam* const*, android::sp<ColorTransform>, bool const&, bool const&, bool const&) */
int _ZN10DispDevice21triggerOverlaySessionEmiiijRKjS1_jPKP16OverlayPortParamN7android2spI14ColorTransformEERKbSB_SB_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIj14FrameFenceInfoEENS_22__unordered_map_hasherIjS3_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS3_NS_8equal_toIjEELb1EEENS_9allocatorIS3_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, FrameFenceInfo>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, FrameFenceInfo>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, FrameFenceInfo>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, FrameFenceInfo> > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIj14FrameFenceInfoEENS_22__unordered_map_hasherIjS3_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS3_NS_8equal_toIjEELb1EEENS_9allocatorIS3_EEE8__rehashEm(void);

/* Symbol: __lttf2 */
/* Demangled: __lttf2 */
int __lttf2(void);

/* Symbol: _ZN9MmBufDump7loadLibEv */
/* Demangled: MmBufDump::loadLib() */
int _ZN9MmBufDump7loadLibEv(void);

/* Symbol: _ZNK7android6VectorIiE7do_copyEPvPKvm */
/* Demangled: android::Vector<int>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIiE7do_copyEPvPKvm(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmjEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned int) */
int _ZN9DbgLoggerC2IJPKcmjEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN10BliterNode9createJobERjRi */
/* Demangled: BliterNode::createJob(unsigned int&, int&) */
int _ZN10BliterNode9createJobERjRi(void);

/* Symbol: _ZN9HrtCommon26printQueryValidLayerResultEv */
/* Demangled: HrtCommon::printQueryValidLayerResult() */
int _ZN9HrtCommon26printQueryValidLayerResultEv(void);

/* Symbol: _ZN9DbgLoggerD2Ev */
/* Demangled: DbgLogger::~DbgLogger() */
int _ZN9DbgLoggerD2Ev(void);

/* Symbol: _ZN15AsyncBlitDevice14waitAllJobDoneEm */
/* Demangled: AsyncBlitDevice::waitAllJobDone(unsigned long) */
int _ZN15AsyncBlitDevice14waitAllJobDoneEm(void);

/* Symbol: _ZTC9HWCThread0_N7android6ThreadE */
/* Demangled: construction vtable for android::Thread-in-HWCThread */
extern void* _ZTC9HWCThread0_N7android6ThreadE;

/* Symbol: _ZN13OverlayEngine7onVSyncEv */
/* Demangled: OverlayEngine::onVSync() */
int _ZN13OverlayEngine7onVSyncEv(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueuejiijjEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char const*, DisplayBufferQueue*, unsigned int, int, int, unsigned int, unsigned int>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, DisplayBufferQueue*, unsigned int, int, int, unsigned int, unsigned int) */
int _ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueuejiijjEEERKjRKhS2_DpT_(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE8__appendEm */
/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::__append(unsigned long) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE8__appendEm(void);

/* Symbol: _ZN3hwc19GraphicBufferMapper9lockYCbCrEPK13native_handlejRKNS_4RectEP13android_ycbcr */
/* Demangled: hwc::GraphicBufferMapper::lockYCbCr(native_handle const*, unsigned int, hwc::Rect const&, android_ycbcr*) */
int _ZN3hwc19GraphicBufferMapper9lockYCbCrEPK13native_handlejRKNS_4RectEP13android_ycbcr(void);

/* Symbol: _ZN15AsyncBlitDevice13getNumConfigsEm */
/* Demangled: AsyncBlitDevice::getNumConfigs(unsigned long) */
int _ZN15AsyncBlitDevice13getNumConfigsEm(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIibEENS_22__unordered_map_hasherIiS2_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS2_NS_8equal_toIiEELb1EEENS_9allocatorIS2_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, bool>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, bool>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, bool>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, bool> > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIibEENS_22__unordered_map_hasherIiS2_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS2_NS_8equal_toIiEELb1EEENS_9allocatorIS2_EEE6rehashEm(void);

/* Symbol: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9DataspaceEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE7__cloneEv */
/* Demangled: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9DataspaceEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE7__cloneEv */
int _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9DataspaceEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE7__cloneEv(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmjmEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned int, unsigned long>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned int, unsigned long) */
int _ZN9DbgLoggerC2IJPKcmjmEEERKjRKhS2_DpT_(void);

/* Symbol: _ZNK7android12SortedVectorINS_2spI16HWCVSyncListenerEEE10do_compareEPKvS6_ */
/* Demangled: android::SortedVector<android::sp<HWCVSyncListener> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_2spI16HWCVSyncListenerEEE10do_compareEPKvS6_(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmS2_jiPcEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, char const*, unsigned int, int, char*>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, char const*, unsigned int, int, char*) */
int _ZN9DbgLoggerC2IJPKcmS2_jiPcEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmjijiEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned int, int, unsigned int, int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned int, int, unsigned int, int) */
int _ZN9DbgLoggerC2IJPKcmjijiEEERKjRKhS2_DpT_(void);

/* Symbol: _ZTVN7android10SWWatchDog9RecipientE */
/* Demangled: vtable for android::SWWatchDog::Recipient */
extern void* _ZTVN7android10SWWatchDog9RecipientE;

/* Symbol: _ZN9DbgLoggerC2IJPKcmijiPcEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, int, unsigned int, int, char*>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, int, unsigned int, int, char*) */
int _ZN9DbgLoggerC2IJPKcmijiPcEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN8Platform11getInstanceEv */
/* Demangled: Platform::getInstance() */
int _ZN8Platform11getInstanceEv(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmjS2_EEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned int, char const*>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned int, char const*) */
int _ZN9DbgLoggerC2IJPKcmjS2_EEERKjRKhS2_DpT_(void);

/* Symbol: _ZN3hwc19GraphicBufferMapper15getChromaSitingEPK13native_handlePN4aidl7android8hardware8graphics6common12ChromaSitingE */
/* Demangled: hwc::GraphicBufferMapper::getChromaSiting(native_handle const*, aidl::android::hardware::graphics::common::ChromaSiting*) */
int _ZN3hwc19GraphicBufferMapper15getChromaSitingEPK13native_handlePN4aidl7android8hardware8graphics6common12ChromaSitingE(void);

/* Symbol: _ZN10HWCDisplay20buildCommittedLayersEv */
/* Demangled: HWCDisplay::buildCommittedLayers() */
int _ZN10HWCDisplay20buildCommittedLayersEv(void);

/* Symbol: _ZN8HWCLayer17setReleaseFenceFdERKiRKb */
/* Demangled: HWCLayer::setReleaseFenceFd(int const&, bool const&) */
int _ZN8HWCLayer17setReleaseFenceFdERKiRKb(void);

/* Symbol: _ZN14DisplayManager12setPowerModeEmi */
/* Demangled: DisplayManager::setPowerMode(unsigned long, int) */
int _ZN14DisplayManager12setPowerModeEmi(void);

/* Symbol: _ZN18AsyncBliterHandler6doBlitEP7HWLayer */
/* Demangled: AsyncBliterHandler::doBlit(HWLayer*) */
int _ZN18AsyncBliterHandler6doBlitEP7HWLayer(void);

/* Symbol: _ZN8HWCLayer17completeLayerCapsEv */
/* Demangled: HWCLayer::completeLayerCaps() */
int _ZN8HWCLayer17completeLayerCapsEv(void);

/* Symbol: _ZN10DispDevice20legacyTriggerSessionEmi */
/* Demangled: DispDevice::legacyTriggerSession(unsigned long, int) */
int _ZN10DispDevice20legacyTriggerSessionEmi(void);

/* Symbol: _ZN3hwc19GraphicBufferMapper11unlockAsyncEPK13native_handlePi */
/* Demangled: hwc::GraphicBufferMapper::unlockAsync(native_handle const*, int*) */
int _ZN3hwc19GraphicBufferMapper11unlockAsyncEPK13native_handlePi(void);

/* Symbol: _ZN14DisplayManager4initEv */
/* Demangled: DisplayManager::init() */
int _ZN14DisplayManager4initEv(void);

/* Symbol: _ZN13HWCDispatcher14PhyPostHandler3setERKN7android2spI10HWCDisplayEEP13DispatcherJob */
/* Demangled: HWCDispatcher::PhyPostHandler::set(android::sp<HWCDisplay> const&, DispatcherJob*) */
int _ZN13HWCDispatcher14PhyPostHandler3setERKN7android2spI10HWCDisplayEEP13DispatcherJob(void);

/* Symbol: _ZN13OverlayEngine20getAvailableInputNumEv */
/* Demangled: OverlayEngine::getAvailableInputNum() */
int _ZN13OverlayEngine20getAvailableInputNumEv(void);

/* Symbol: _ZN13OverlayEngine12OverlayInputC1Ev */
/* Demangled: OverlayEngine::OverlayInput::OverlayInput() */
int _ZN13OverlayEngine12OverlayInputC1Ev(void);

/* Symbol: _ZN10DispDeviceD2Ev */
/* Demangled: DispDevice::~DispDevice() */
int _ZN10DispDeviceD2Ev(void);

/* Symbol: g_session_type */
/* Demangled: g_session_type */
extern void* g_session_type;

/* Symbol: _ZN9DbgLoggerC2IJPKcS2_PcEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char const*, char*>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, char*) */
int _ZN9DbgLoggerC2IJPKcS2_PcEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN18DisplayBufferQueue19setConsumerListenerERKN7android2spINS_16ConsumerListenerEEE */
/* Demangled: DisplayBufferQueue::setConsumerListener(android::sp<DisplayBufferQueue::ConsumerListener> const&) */
int _ZN18DisplayBufferQueue19setConsumerListenerERKN7android2spINS_16ConsumerListenerEEE(void);

/* Symbol: _ZN9HrtCommon3runERNSt3__16vectorIN7android2spI10HWCDisplayEENS0_9allocatorIS5_EEEERKb */
/* Demangled: HrtCommon::run(std::__1::vector<android::sp<HWCDisplay>, std::__1::allocator<android::sp<HWCDisplay> > >&, bool const&) */
int _ZN9HrtCommon3runERNSt3__16vectorIN7android2spI10HWCDisplayEENS0_9allocatorIS5_EEEERKb(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcPK13native_handlejEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, native_handle const*, unsigned int>(unsigned int const&, unsigned char const&, char const*, char const*, native_handle const*, unsigned int) */
int _ZN9DbgLoggerC2IJPKcPK13native_handlejEEERKjRKhS2_DpT_(void);

/* Symbol: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIjEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EEclEOSR_SH_ */
/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIjEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EEclEOSR_SH_ */
int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIjEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EEclEOSR_SH_(void);

/* Symbol: _ZN18DisplayBufferQueueD0Ev */
/* Demangled: DisplayBufferQueue::~DisplayBufferQueue() */
int _ZN18DisplayBufferQueueD0Ev(void);

/* Symbol: _ZN15AsyncBlitDevice21isDispAodForceDisableEv */
/* Demangled: AsyncBlitDevice::isDispAodForceDisable() */
int _ZN15AsyncBlitDevice21isDispAodForceDisableEv(void);

/* Symbol: _ZN18AsyncBliterHandler20calculateMirRoiXformEPjPN7android4RectES3_P13DispatcherJob */
/* Demangled: AsyncBliterHandler::calculateMirRoiXform(unsigned int*, android::Rect*, android::Rect*, DispatcherJob*) */
int _ZN18AsyncBliterHandler20calculateMirRoiXformEPjPN7android4RectES3_P13DispatcherJob(void);

/* Symbol: _ZN9IPqDeviceD0Ev */
/* Demangled: IPqDevice::~IPqDevice() */
int _ZN9IPqDeviceD0Ev(void);

/* Symbol: _ZN10DispDevice21getOverlaySessionModeEm */
/* Demangled: DispDevice::getOverlaySessionMode(unsigned long) */
int _ZN10DispDevice21getOverlaySessionModeEm(void);

/* Symbol: _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIjEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EEE */
/* Demangled: _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIjEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EEE */
extern void* _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIjEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EEE;

/* Symbol: _ZN8Debugger11getInstanceEv */
/* Demangled: Debugger::getInstance() */
int _ZN8Debugger11getInstanceEv(void);

/* Symbol: _ZN18AsyncBliterHandler15clearBackgroundEPK13native_handlePKN7android4RectEPiP6MdpJob */
/* Demangled: AsyncBliterHandler::clearBackground(native_handle const*, android::Rect const*, int*, MdpJob*) */
int _ZN18AsyncBliterHandler15clearBackgroundEPK13native_handlePKN7android4RectEPiP6MdpJob(void);

/* Symbol: _ZN13HWCDispatcher11PostHandlerD0Ev */
/* Demangled: HWCDispatcher::PostHandler::~PostHandler() */
int _ZN13HWCDispatcher11PostHandlerD0Ev(void);

/* Symbol: _ZN20RefreshRequestThread10setEnabledEb */
/* Demangled: RefreshRequestThread::setEnabled(bool) */
int _ZN20RefreshRequestThread10setEnabledEb(void);

/* Symbol: _ZN15AsyncBlitDevice21disableDisplayFeatureEj */
/* Demangled: AsyncBlitDevice::disableDisplayFeature(unsigned int) */
int _ZN15AsyncBlitDevice21disableDisplayFeatureEj(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcPciEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char*, int>(unsigned int const&, unsigned char const&, char const*, char const*, char*, int) */
int _ZN9DbgLoggerC2IJPKcPciEEERKjRKhS2_DpT_(void);

/* Symbol: _ZNK3hwc14Gralloc4Mapper22getPixelFormatModifierEPK13native_handlePm */
/* Demangled: hwc::Gralloc4Mapper::getPixelFormatModifier(native_handle const*, unsigned long*) const */
int _ZNK3hwc14Gralloc4Mapper22getPixelFormatModifierEPK13native_handlePm(void);

/* Symbol: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSJ_8hidl_vecIhEEPT_ESW_EUlRKSV_SU_E_NSC_IS11_EEFvNSM_5ErrorESU_EEclEOS13_SU_ */
/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSJ_8hidl_vecIhEEPT_ESW_EUlRKSV_SU_E_NSC_IS11_EEFvNSM_5ErrorESU_EEclEOS13_SU_ */
int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSJ_8hidl_vecIhEEPT_ESW_EUlRKSV_SU_E_NSC_IS11_EEFvNSM_5ErrorESU_EEclEOS13_SU_(void);

/* Symbol: _ZN13HWCDispatcher14PhyPostHandler7processEP13DispatcherJob */
/* Demangled: HWCDispatcher::PhyPostHandler::process(DispatcherJob*) */
int _ZN13HWCDispatcher14PhyPostHandler7processEP13DispatcherJob(void);

/* Symbol: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN7android8hardware8graphics6common4V1_211PixelFormatEEEiPK13native_handleRKNS7_6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EE7destroyEv */
/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN7android8hardware8graphics6common4V1_211PixelFormatEEEiPK13native_handleRKNS7_6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EE7destroyEv */
int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN7android8hardware8graphics6common4V1_211PixelFormatEEEiPK13native_handleRKNS7_6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EE7destroyEv(void);

/* Symbol: _ZN11HWCMediator20displayAcceptChangesEP11hwc2_devicem */
/* Demangled: HWCMediator::displayAcceptChanges(hwc2_device*, unsigned long) */
int _ZN11HWCMediator20displayAcceptChangesEP11hwc2_devicem(void);

/* Symbol: _ZN8HWCLayer11boundaryCutERK8hwc_rect */
/* Demangled: HWCLayer::boundaryCut(hwc_rect const&) */
int _ZN8HWCLayer11boundaryCutERK8hwc_rect(void);

/* Symbol: _ZN11HWCMediator21createExternalDisplayEv */
/* Demangled: HWCMediator::createExternalDisplay() */
int _ZN11HWCMediator21createExternalDisplayEv(void);

/* Symbol: _ZTVN7android6VectorINS_12SortedVectorINS_2spI16HWCVSyncListenerEEEEEE */
/* Demangled: vtable for android::Vector<android::SortedVector<android::sp<HWCVSyncListener> > > */
extern void* _ZTVN7android6VectorINS_12SortedVectorINS_2spI16HWCVSyncListenerEEEEEE;

/* Symbol: _ZTC15TouchHintThread0_N7android6ThreadE */
/* Demangled: construction vtable for android::Thread-in-TouchHintThread */
extern void* _ZTC15TouchHintThread0_N7android6ThreadE;

/* Symbol: _ZNK7android6VectorIP16OverlayPortParamE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<OverlayPortParam*>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIP16OverlayPortParamE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN10HWCDisplay17offloadMMtoClientEv */
/* Demangled: HWCDisplay::offloadMMtoClient() */
int _ZN10HWCDisplay17offloadMMtoClientEv(void);

/* Symbol: _ZN15DisplayListener12onHotPlugExtEmi */
/* Demangled: DisplayListener::onHotPlugExt(unsigned long, int) */
int _ZN15DisplayListener12onHotPlugExtEmi(void);

/* Symbol: _ZN10DispDevice18isDispRszSupportedEv */
/* Demangled: DispDevice::isDispRszSupported() */
int _ZN10DispDevice18isDispRszSupportedEv(void);

/* Symbol: _ZN11HWCMediator15hasCapabilitiesEi */
/* Demangled: HWCMediator::hasCapabilities(int) */
int _ZN11HWCMediator15hasCapabilitiesEi(void);

/* Symbol: _ZN11HWCMediator23layerStateSetSourceCropEP11hwc2_devicemm9hwc_frect */
/* Demangled: HWCMediator::layerStateSetSourceCrop(hwc2_device*, unsigned long, unsigned long, hwc_frect) */
int _ZN11HWCMediator23layerStateSetSourceCropEP11hwc2_devicemm9hwc_frect(void);

/* Symbol: _ZN13HWCDispatcher21releaseResourceLockedEm */
/* Demangled: HWCDispatcher::releaseResourceLocked(unsigned long) */
int _ZN13HWCDispatcher21releaseResourceLockedEm(void);

/* Symbol: _ZN13LayerComposer3setERKN7android2spI10HWCDisplayEEP13DispatcherJob */
/* Demangled: LayerComposer::set(android::sp<HWCDisplay> const&, DispatcherJob*) */
int _ZN13LayerComposer3setERKN7android2spI10HWCDisplayEEP13DispatcherJob(void);

/* Symbol: _ZNK7android12SortedVectorINS_2spI16HWCVSyncListenerEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::sp<HWCVSyncListener> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_2spI16HWCVSyncListenerEEE8do_splatEPvPKvm(void);

/* Symbol: _ZN11HWCMediator9createJobERKN7android2spI10HWCDisplayEE */
/* Demangled: HWCMediator::createJob(android::sp<HWCDisplay> const&) */
int _ZN11HWCMediator9createJobERKN7android2spI10HWCDisplayEE(void);

/* Symbol: _ZN10BliterNode10BufferInfo4dumpEv */
/* Demangled: BliterNode::BufferInfo::dump() */
int _ZN10BliterNode10BufferInfo4dumpEv(void);

/* Symbol: HWC_COMPOSITION_FILE_NOT_SET_STR */
/* Demangled: HWC_COMPOSITION_FILE_NOT_SET_STR */
extern void* HWC_COMPOSITION_FILE_NOT_SET_STR;

/* Symbol: _ZN9DbgLoggerC2IJPKcmijjb11DISP_FORMATiiiijiEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, int, unsigned int, unsigned int, bool, DISP_FORMAT, int, int, int, int, unsigned int, int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, int, unsigned int, unsigned int, bool, DISP_FORMAT, int, int, int, int, unsigned int, int) */
int _ZN9DbgLoggerC2IJPKcmijjb11DISP_FORMATiiiijiEEERKjRKhS2_DpT_(void);

/* Symbol: _Z9getSrcTopRKN7android2spI8HWCLayerEE */
/* Demangled: getSrcTop(android::sp<HWCLayer> const&) */
int _Z9getSrcTopRKN7android2spI8HWCLayerEE(void);

/* Symbol: _Z9getDstTopRKN7android2spI8HWCLayerEE */
/* Demangled: getDstTop(android::sp<HWCLayer> const&) */
int _Z9getDstTopRKN7android2spI8HWCLayerEE(void);

/* Symbol: _ZNK3hwc14Gralloc4Mapper12getBlendModeEPK13native_handlePN4aidl7android8hardware8graphics6common9BlendModeE */
/* Demangled: hwc::Gralloc4Mapper::getBlendMode(native_handle const*, aidl::android::hardware::graphics::common::BlendMode*) const */
int _ZNK3hwc14Gralloc4Mapper12getBlendModeEPK13native_handlePN4aidl7android8hardware8graphics6common9BlendModeE(void);

/* Symbol: _Z20setThreadCPUAffinityRKiS0_S0_ */
/* Demangled: setThreadCPUAffinity(int const&, int const&, int const&) */
int _Z20setThreadCPUAffinityRKiS0_S0_(void);

/* Symbol: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalINS_6vectorIhNS_9allocatorIhEEEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS7_ISX_EEFvNSI_5ErrorESQ_EEclEOSZ_SQ_ */
/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalINS_6vectorIhNS_9allocatorIhEEEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS7_ISX_EEFvNSI_5ErrorESQ_EEclEOSZ_SQ_ */
int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalINS_6vectorIhNS_9allocatorIhEEEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS7_ISX_EEFvNSI_5ErrorESQ_EEclEOSZ_SQ_(void);

/* Symbol: _ZN11HWCMediator22displaySetOutputBufferEP11hwc2_devicemPK13native_handlei */
/* Demangled: HWCMediator::displaySetOutputBuffer(hwc2_device*, unsigned long, native_handle const*, int) */
int _ZN11HWCMediator22displaySetOutputBufferEP11hwc2_devicemPK13native_handlei(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmS2_S2_EEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, char const*, char const*>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, char const*, char const*) */
int _ZN9DbgLoggerC2IJPKcmS2_S2_EEERKjRKhS2_DpT_(void);

/* Symbol: _ZN13HWCDispatcher12setPowerModeEmi */
/* Demangled: HWCDispatcher::setPowerMode(unsigned long, int) */
int _ZN13HWCDispatcher12setPowerModeEmi(void);

/* Symbol: _ZN15ComposerHandlerC1EmRKN7android2spI13OverlayEngineEE */
/* Demangled: ComposerHandler::ComposerHandler(unsigned long, android::sp<OverlayEngine> const&) */
int _ZN15ComposerHandlerC1EmRKN7android2spI13OverlayEngineEE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN7android10SWWatchDog9RecipientENS_9allocatorIS3_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<android::SWWatchDog::Recipient, std::__1::allocator<android::SWWatchDog::Recipient> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN7android10SWWatchDog9RecipientENS_9allocatorIS3_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN13HWCDispatcher13WorkerClusterD2Ev */
/* Demangled: HWCDispatcher::WorkerCluster::~WorkerCluster() */
int _ZN13HWCDispatcher13WorkerClusterD2Ev(void);

/* Symbol: _ZN13HWCDispatcher16fillPrevHwLayersERKN7android2spI10HWCDisplayEEP13DispatcherJob */
/* Demangled: HWCDispatcher::fillPrevHwLayers(android::sp<HWCDisplay> const&, DispatcherJob*) */
int _ZN13HWCDispatcher16fillPrevHwLayersERKN7android2spI10HWCDisplayEEP13DispatcherJob(void);

/* Symbol: _ZN13OverlayEngine15closeAllFenceFdERKN7android2spI9FrameInfoEE */
/* Demangled: OverlayEngine::closeAllFenceFd(android::sp<FrameInfo> const&) */
int _ZN13OverlayEngine15closeAllFenceFdERKN7android2spI9FrameInfoEE(void);

/* Symbol: _Z19setSecExtraSfStatusbPK13native_handleP12ge_sf_info_t */
/* Demangled: setSecExtraSfStatus(bool, native_handle const*, ge_sf_info_t*) */
int _Z19setSecExtraSfStatusbPK13native_handleP12ge_sf_info_t(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueueS2_mEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char const*, DisplayBufferQueue*, char const*, unsigned long>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, DisplayBufferQueue*, char const*, unsigned long) */
int _ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueueS2_mEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN18AsyncBliterHandler23prepareOverlayPortParamEjN7android2spI18DisplayBufferQueueEEP16OverlayPortParamb */
/* Demangled: AsyncBliterHandler::prepareOverlayPortParam(unsigned int, android::sp<DisplayBufferQueue>, OverlayPortParam*, bool) */
int _ZN18AsyncBliterHandler23prepareOverlayPortParamEjN7android2spI18DisplayBufferQueueEEP16OverlayPortParamb(void);

/* Symbol: _ZN16DbgLogBufManager11getInstanceEv */
/* Demangled: DbgLogBufManager::getInstance() */
int _ZN16DbgLogBufManager11getInstanceEv(void);

/* Symbol: _ZN14PlatformCommon11initOverlayEv */
/* Demangled: PlatformCommon::initOverlay() */
int _ZN14PlatformCommon11initOverlayEv(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmPK13native_handleEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, native_handle const*>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, native_handle const*) */
int _ZN9DbgLoggerC2IJPKcmPK13native_handleEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN11VSyncThreadD2Ev */
/* Demangled: VSyncThread::~VSyncThread() */
int _ZN11VSyncThreadD2Ev(void);

/* Symbol: _ZN10BliterNodeC1Em */
/* Demangled: BliterNode::BliterNode(unsigned long) */
int _ZN10BliterNodeC1Em(void);

/* Symbol: _ZN7android2spI8HWCLayerED2Ev */
/* Demangled: android::sp<HWCLayer>::~sp() */
int _ZN7android2spI8HWCLayerED2Ev(void);

/* Symbol: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9BlendModeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE7__cloneEv */
/* Demangled: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9BlendModeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE7__cloneEv */
int _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9BlendModeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE7__cloneEv(void);

/* Symbol: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSJ_8hidl_vecIhEEPT_ESW_EUlRKSV_SU_E_NSC_IS11_EEFvNSM_5ErrorESU_EE7__cloneEPNS0_6__baseIS14_EE */
/* Demangled: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSJ_8hidl_vecIhEEPT_ESW_EUlRKSV_SU_E_NSC_IS11_EEFvNSM_5ErrorESU_EE7__cloneEPNS0_6__baseIS14_EE */
int _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSJ_8hidl_vecIhEEPT_ESW_EUlRKSV_SU_E_NSC_IS11_EEFvNSM_5ErrorESU_EE7__cloneEPNS0_6__baseIS14_EE(void);

/* Symbol: _ZN3hwc19GraphicBufferMapper20getDefaultInterlacedEjjijmPN4aidl7android8hardware8graphics6common14ExtendableTypeE */
/* Demangled: hwc::GraphicBufferMapper::getDefaultInterlaced(unsigned int, unsigned int, int, unsigned int, unsigned long, aidl::android::hardware::graphics::common::ExtendableType*) */
int _ZN3hwc19GraphicBufferMapper20getDefaultInterlacedEjjijmPN4aidl7android8hardware8graphics6common14ExtendableTypeE(void);

/* Symbol: _ZN11HWCMediator22destroyExternalDisplayEv */
/* Demangled: HWCMediator::destroyExternalDisplay() */
int _ZN11HWCMediator22destroyExternalDisplayEv(void);

/* Symbol: _ZNSt3__16vectorIN7android2spI10HWCDisplayEENS_9allocatorIS4_EEE21__push_back_slow_pathIS4_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<HWCDisplay>, std::__1::allocator<android::sp<HWCDisplay> > >::__push_back_slow_path<android::sp<HWCDisplay> >(android::sp<HWCDisplay>&&) */
int _ZNSt3__16vectorIN7android2spI10HWCDisplayEENS_9allocatorIS4_EEE21__push_back_slow_pathIS4_EEvOT_(void);

/* Symbol: _ZTC14DispatchThread0_9HWCThread */
/* Demangled: construction vtable for HWCThread-in-DispatchThread */
extern void* _ZTC14DispatchThread0_9HWCThread;

/* Symbol: _ZN12UEventThreadD0Ev */
/* Demangled: UEventThread::~UEventThread() */
int _ZN12UEventThreadD0Ev(void);

/* Symbol: _ZNK8HWCLayer6isHintEi */
/* Demangled: HWCLayer::isHint(int) const */
int _ZNK8HWCLayer6isHintEi(void);

/* Symbol: _ZN9IPqDevice27setColorTransformViaServiceEPKfRKi */
/* Demangled: IPqDevice::setColorTransformViaService(float const*, int const&) */
int _ZN9IPqDevice27setColorTransformViaServiceEPKfRKi(void);

/* Symbol: _ZN11HWCMediator19displayGetAttributeEP11hwc2_devicemjiPi */
/* Demangled: HWCMediator::displayGetAttribute(hwc2_device*, unsigned long, unsigned int, int, int*) */
int _ZN11HWCMediator19displayGetAttributeEP11hwc2_devicemjiPi(void);

/* Symbol: _ZN14DisplayManager15setMirrorRegionEm */
/* Demangled: DisplayManager::setMirrorRegion(unsigned long) */
int _ZN14DisplayManager15setMirrorRegionEm(void);

/* Symbol: _ZN10DispDevice18isDispRpoSupportedEv */
/* Demangled: DispDevice::isDispRpoSupported() */
int _ZN10DispDevice18isDispRpoSupportedEv(void);

/* Symbol: _ZNK3hwc14Gralloc4Mapper14getCompressionEPK13native_handlePN4aidl7android8hardware8graphics6common14ExtendableTypeE */
/* Demangled: hwc::Gralloc4Mapper::getCompression(native_handle const*, aidl::android::hardware::graphics::common::ExtendableType*) const */
int _ZNK3hwc14Gralloc4Mapper14getCompressionEPK13native_handlePN4aidl7android8hardware8graphics6common14ExtendableTypeE(void);

/* Symbol: _ZN3hwc19GraphicBufferMapperC1Ev */
/* Demangled: hwc::GraphicBufferMapper::GraphicBufferMapper() */
int _ZN3hwc19GraphicBufferMapperC1Ev(void);

/* Symbol: _ZN11HWCMediator26deviceCreateVirtualDisplayEP11hwc2_devicejjPiPm */
/* Demangled: HWCMediator::deviceCreateVirtualDisplay(hwc2_device*, unsigned int, unsigned int, int*, unsigned long*) */
int _ZN11HWCMediator26deviceCreateVirtualDisplayEP11hwc2_devicejjPiPm(void);

/* Symbol: _ZN7android2spI14IOverlayDeviceEC2I15AsyncBlitDeviceEEPT_ */
/* Demangled: android::sp<IOverlayDevice>::sp<AsyncBlitDevice>(AsyncBlitDevice*) */
int _ZN7android2spI14IOverlayDeviceEC2I15AsyncBlitDeviceEEPT_(void);

/* Symbol: _ZNSt3__16vectorIN7android2spI8HWCLayerEENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_ */
/* Demangled: _ZNSt3__16vectorIN7android2spI8HWCLayerEENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_ */
int _ZNSt3__16vectorIN7android2spI8HWCLayerEENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmjS2_jijijjEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned int, char const*, unsigned int, int, unsigned int, int, unsigned int, unsigned int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned int, char const*, unsigned int, int, unsigned int, int, unsigned int, unsigned int) */
int _ZN9DbgLoggerC2IJPKcmjS2_jijijjEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN11HWCMediator22displayGetReleaseFenceEP11hwc2_devicemPjPmPi */
/* Demangled: HWCMediator::displayGetReleaseFence(hwc2_device*, unsigned long, unsigned int*, unsigned long*, int*) */
int _ZN11HWCMediator22displayGetReleaseFenceEP11hwc2_devicemPjPmPi(void);

/* Symbol: _Z14hwcGetFunctionP11hwc2_devicei */
/* Demangled: hwcGetFunction(hwc2_device*, int) */
int _Z14hwcGetFunctionP11hwc2_devicei(void);

/* Symbol: _ZN13HWCDispatcher16initPrevHwLayersERKN7android2spI10HWCDisplayEEP13DispatcherJob */
/* Demangled: HWCDispatcher::initPrevHwLayers(android::sp<HWCDisplay> const&, DispatcherJob*) */
int _ZN13HWCDispatcher16initPrevHwLayersERKN7android2spI10HWCDisplayEEP13DispatcherJob(void);

/* Symbol: _ZNK3hwc14Gralloc2Mapper12importBufferERKN7android8hardware11hidl_handleEPPK13native_handle */
/* Demangled: hwc::Gralloc2Mapper::importBuffer(android::hardware::hidl_handle const&, native_handle const**) const */
int _ZNK3hwc14Gralloc2Mapper12importBufferERKN7android8hardware11hidl_handleEPPK13native_handle(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmmS2_iiiijffffiiiiEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned long, char const*, int, int, int, int, unsigned int, float, float, float, float, int, int, int, int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned long, char const*, int, int, int, int, unsigned int, float, float, float, float, int, int, int, int) */
int _ZN9DbgLoggerC2IJPKcmmS2_iiiijffffiiiiEEERKjRKhS2_DpT_(void);

/* Symbol: _ZTV15AsyncBlitDevice */
/* Demangled: vtable for AsyncBlitDevice */
extern void* _ZTV15AsyncBlitDevice;

/* Symbol: _ZN9HWCBufferD2Ev */
/* Demangled: HWCBuffer::~HWCBuffer() */
int _ZN9HWCBufferD2Ev(void);

/* Symbol: _ZN16DbgLogBufManagerC1Ev */
/* Demangled: DbgLogBufManager::DbgLogBufManager() */
int _ZN16DbgLogBufManagerC1Ev(void);

/* Symbol: _ZN10HWCDisplay5clearEv */
/* Demangled: HWCDisplay::clear() */
int _ZN10HWCDisplay5clearEv(void);

/* Symbol: _ZN8HWCLayer9toString8Ev */
/* Demangled: HWCLayer::toString8() */
int _ZN8HWCLayer9toString8Ev(void);

/* Symbol: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS8_ISX_EEFvNSI_5ErrorESQ_EE18destroy_deallocateEv */
/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS8_ISX_EEFvNSI_5ErrorESQ_EE18destroy_deallocateEv */
int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS8_ISX_EEFvNSI_5ErrorESQ_EE18destroy_deallocateEv(void);

/* Symbol: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSJ_8hidl_vecIhEEPT_ESW_EUlRKSV_SU_E_NSC_IS11_EEFvNSM_5ErrorESU_EE18destroy_deallocateEv */
/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSJ_8hidl_vecIhEEPT_ESW_EUlRKSV_SU_E_NSC_IS11_EEFvNSM_5ErrorESU_EE18destroy_deallocateEv */
int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSJ_8hidl_vecIhEEPT_ESW_EUlRKSV_SU_E_NSC_IS11_EEFvNSM_5ErrorESU_EE18destroy_deallocateEv(void);

/* Symbol: _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: VTT for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _Z13mapColorRangej */
/* Demangled: mapColorRange(unsigned int) */
int _Z13mapColorRangej(void);

/* Symbol: _ZN9HWCBuffer12afterPresentERKbS1_ */
/* Demangled: HWCBuffer::afterPresent(bool const&, bool const&) */
int _ZN9HWCBuffer12afterPresentERKbS1_(void);

/* Symbol: _Z9createHrtv */
/* Demangled: createHrt() */
int _Z9createHrtv(void);

/* Symbol: _ZN10DispDevice23getDisplayOutputRotatedEv */
/* Demangled: DispDevice::getDisplayOutputRotated() */
int _ZN10DispDevice23getDisplayOutputRotatedEv(void);

/* Symbol: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common8Cta861_3EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EE7__cloneEv */
/* Demangled: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common8Cta861_3EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EE7__cloneEv */
int _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common8Cta861_3EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EE7__cloneEv(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIiEEvOT_ */
/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__push_back_slow_path<int>(int&&) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIiEEvOT_(void);

/* Symbol: _ZNK10HWCDisplay18getChangedRequestsEPjPmPi */
/* Demangled: HWCDisplay::getChangedRequests(unsigned int*, unsigned long*, int*) const */
int _ZNK10HWCDisplay18getChangedRequestsEPjPmPi(void);

/* Symbol: _ZN18AsyncBliterHandlerC2EmRKN7android2spI13OverlayEngineEE */
/* Demangled: AsyncBliterHandler::AsyncBliterHandler(unsigned long, android::sp<OverlayEngine> const&) */
int _ZN18AsyncBliterHandlerC2EmRKN7android2spI13OverlayEngineEE(void);

/* Symbol: _ZN10DispDevice19getMaxOverlayHeightEv */
/* Demangled: DispDevice::getMaxOverlayHeight() */
int _ZN10DispDevice19getMaxOverlayHeightEv(void);

/* Symbol: _ZN3hwc13GrallocMapperD0Ev */
/* Demangled: hwc::GrallocMapper::~GrallocMapper() */
int _ZN3hwc13GrallocMapperD0Ev(void);

/* Symbol: _ZN13OverlayEngine12setPowerModeEi */
/* Demangled: OverlayEngine::setPowerMode(int) */
int _ZN13OverlayEngine12setPowerModeEi(void);

/* Symbol: _ZN16HWVSyncEstimator11getInstanceEv */
/* Demangled: HWVSyncEstimator::getInstance() */
int _ZN16HWVSyncEstimator11getInstanceEv(void);

/* Symbol: _ZTC14DispatchThread296_16HWCVSyncListener */
/* Demangled: construction vtable for HWCVSyncListener-in-DispatchThread */
extern void* _ZTC14DispatchThread296_16HWCVSyncListener;

/* Symbol: _ZN9SyncFence11waitForeverEiiPKc */
/* Demangled: SyncFence::waitForever(int, int, char const*) */
int _ZN9SyncFence11waitForeverEiiPKc(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIm13PrivateHandleEENS_22__unordered_map_hasherImS3_NS_4hashImEELb1EEENS_21__unordered_map_equalImS3_NS_8equal_toImEELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsImJNS_4pairIKmS2_EEEEENSG_INS_15__hash_iteratorIPNS_11__hash_nodeIS3_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, PrivateHandle>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long, PrivateHandle>, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, PrivateHandle>, std::__1::hash<unsigned long>, true>, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, PrivateHandle>, std::__1::equal_to<unsigned long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long, PrivateHandle> > >::__emplace_unique_key_args<unsigned long, std::__1::pair<unsigned long const, PrivateHandle> >(unsigned long const&, std::__1::pair<unsigned long const, PrivateHandle>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIm13PrivateHandleEENS_22__unordered_map_hasherImS3_NS_4hashImEELb1EEENS_21__unordered_map_equalImS3_NS_8equal_toImEELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsImJNS_4pairIKmS2_EEEEENSG_INS_15__hash_iteratorIPNS_11__hash_nodeIS3_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: HWC2_BLEND_MODE_PREMULTIPLIED_STR */
/* Demangled: HWC2_BLEND_MODE_PREMULTIPLIED_STR */
extern void* HWC2_BLEND_MODE_PREMULTIPLIED_STR;

/* Symbol: _ZN14DisplayManager20setDisplayPowerStateEmi */
/* Demangled: DisplayManager::setDisplayPowerState(unsigned long, int) */
int _ZN14DisplayManager20setDisplayPowerStateEmi(void);

/* Symbol: _ZNK7android9Transform9transformERKNS_6RegionE */
/* Demangled: android::Transform::transform(android::Region const&) const */
int _ZNK7android9Transform9transformERKNS_6RegionE(void);

/* Symbol: _ZNK3hwc14Gralloc4Mapper13getLayerCountEPK13native_handlePm */
/* Demangled: hwc::Gralloc4Mapper::getLayerCount(native_handle const*, unsigned long*) const */
int _ZNK3hwc14Gralloc4Mapper13getLayerCountEPK13native_handlePm(void);

/* Symbol: _ZNK3hwc14Gralloc4Mapper22getDefaultChromaSitingEjjijmPN4aidl7android8hardware8graphics6common14ExtendableTypeE */
/* Demangled: hwc::Gralloc4Mapper::getDefaultChromaSiting(unsigned int, unsigned int, int, unsigned int, unsigned long, aidl::android::hardware::graphics::common::ExtendableType*) const */
int _ZNK3hwc14Gralloc4Mapper22getDefaultChromaSitingEjjijmPN4aidl7android8hardware8graphics6common14ExtendableTypeE(void);

/* Symbol: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN7android8hardware8graphics6common4V1_211PixelFormatEEEiPK13native_handleRKNS7_6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EE7__cloneEPNS0_6__baseISY_EE */
/* Demangled: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN7android8hardware8graphics6common4V1_211PixelFormatEEEiPK13native_handleRKNS7_6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EE7__cloneEPNS0_6__baseISY_EE */
int _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN7android8hardware8graphics6common4V1_211PixelFormatEEEiPK13native_handleRKNS7_6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EE7__cloneEPNS0_6__baseISY_EE(void);

/* Symbol: _ZN3hwc19GraphicBufferMapper11isSupportedEjjijmPb */
/* Demangled: hwc::GraphicBufferMapper::isSupported(unsigned int, unsigned int, int, unsigned int, unsigned long, bool*) */
int _ZN3hwc19GraphicBufferMapper11isSupportedEjjijmPb(void);

/* Symbol: _ZN8PlatformC1Ev */
/* Demangled: Platform::Platform() */
int _ZN8PlatformC1Ev(void);

/* Symbol: _ZN13HWCDispatcher14PhyPostHandler9setMirrorEP13DispatcherJobS2_ */
/* Demangled: HWCDispatcher::PhyPostHandler::setMirror(DispatcherJob*, DispatcherJob*) */
int _ZN13HWCDispatcher14PhyPostHandler9setMirrorEP13DispatcherJobS2_(void);

/* Symbol: _ZN14DisplayManager12setVideoHdcpERKj */
/* Demangled: DisplayManager::setVideoHdcp(unsigned int const&) */
int _ZN14DisplayManager12setVideoHdcpERKj(void);

/* Symbol: _ZN13GrallocDevice4freeEPK13native_handle */
/* Demangled: GrallocDevice::free(native_handle const*) */
int _ZN13GrallocDevice4freeEPK13native_handle(void);

/* Symbol: _ZN13GrallocDeviceD1Ev */
/* Demangled: GrallocDevice::~GrallocDevice() */
int _ZN13GrallocDeviceD1Ev(void);

/* Symbol: _Z18calculateMdpDstRoiN7android2spI8HWCLayerEERKmRKd */
/* Demangled: calculateMdpDstRoi(android::sp<HWCLayer>, unsigned long const&, double const&) */
int _Z18calculateMdpDstRoiN7android2spI8HWCLayerEERKmRKd(void);

/* Symbol: _ZNSt3__16vectorIN7android2spI14IOverlayDeviceEENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<IOverlayDevice>, std::__1::allocator<android::sp<IOverlayDevice> > >::__push_back_slow_path<android::sp<IOverlayDevice> const&>(android::sp<IOverlayDevice> const&) */
int _ZNSt3__16vectorIN7android2spI14IOverlayDeviceEENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_(void);

/* Symbol: _ZNK3hwc19GraphicBufferMapper10dumpBufferEPK13native_handleRNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb */
/* Demangled: hwc::GraphicBufferMapper::dumpBuffer(native_handle const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, bool) const */
int _ZNK3hwc19GraphicBufferMapper10dumpBufferEPK13native_handleRNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb(void);

/* Symbol: _ZN11HWCMediator11getInstanceEv */
/* Demangled: HWCMediator::getInstance() */
int _ZN11HWCMediator11getInstanceEv(void);

/* Symbol: _ZN10HWCDisplay4initEv */
/* Demangled: HWCDisplay::init() */
int _ZN10HWCDisplay4initEv(void);

/* Symbol: _ZN7android10SWWatchDog9setAnchorERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKl */
/* Demangled: android::SWWatchDog::setAnchor(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, long const&) */
int _ZN7android10SWWatchDog9setAnchorERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKl(void);

/* Symbol: _ZN9DbgLoggerC2IJPKciiiiiEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, int, int, int, int, int>(unsigned int const&, unsigned char const&, char const*, char const*, int, int, int, int, int) */
int _ZN9DbgLoggerC2IJPKciiiiiEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN9HrtCommon30modifyMdpDstRoiIfRejectedByRpoERKNSt3__16vectorIN7android2spI10HWCDisplayEENS0_9allocatorIS5_EEEE */
/* Demangled: HrtCommon::modifyMdpDstRoiIfRejectedByRpo(std::__1::vector<android::sp<HWCDisplay>, std::__1::allocator<android::sp<HWCDisplay> > > const&) */
int _ZN9HrtCommon30modifyMdpDstRoiIfRejectedByRpoERKNSt3__16vectorIN7android2spI10HWCDisplayEENS0_9allocatorIS5_EEEE(void);

/* Symbol: _ZTV9HrtCommon */
/* Demangled: vtable for HrtCommon */
extern void* _ZTV9HrtCommon;

/* Symbol: _ZN10HWCDisplay24setJobDisplayOrientationEv */
/* Demangled: HWCDisplay::setJobDisplayOrientation() */
int _ZN10HWCDisplay24setJobDisplayOrientationEv(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcP9SyncFenceS2_miEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, SyncFence*, char const*, unsigned long, int>(unsigned int const&, unsigned char const&, char const*, char const*, SyncFence*, char const*, unsigned long, int) */
int _ZN9DbgLoggerC2IJPKcP9SyncFenceS2_miEEERKjRKhS2_DpT_(void);

/* Symbol: _ZNK3hwc14Gralloc4Mapper20getDefaultInterlacedEjjijmPN4aidl7android8hardware8graphics6common10InterlacedE */
/* Demangled: hwc::Gralloc4Mapper::getDefaultInterlaced(unsigned int, unsigned int, int, unsigned int, unsigned long, aidl::android::hardware::graphics::common::Interlaced*) const */
int _ZNK3hwc14Gralloc4Mapper20getDefaultInterlacedEjjijmPN4aidl7android8hardware8graphics6common10InterlacedE(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmijijijiEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, int, unsigned int, int, unsigned int, int, unsigned int, int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, int, unsigned int, int, unsigned int, int, unsigned int, int) */
int _ZN9DbgLoggerC2IJPKcmijijijiEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN8HWCLayer8validateEv */
/* Demangled: HWCLayer::validate() */
int _ZN8HWCLayer8validateEv(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmijEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, int, unsigned int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, int, unsigned int) */
int _ZN9DbgLoggerC2IJPKcmijEEERKjRKhS2_DpT_(void);

/* Symbol: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSG_8hidl_vecIhEEPT_EST_EUlRKSS_SR_E_NSC_ISY_EEFvNSJ_5ErrorESR_EE7destroyEv */
/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSG_8hidl_vecIhEEPT_EST_EUlRKSS_SR_E_NSC_ISY_EEFvNSJ_5ErrorESR_EE7destroyEv */
int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSG_8hidl_vecIhEEPT_EST_EUlRKSS_SR_E_NSC_ISY_EEFvNSJ_5ErrorESR_EE7destroyEv(void);

/* Symbol: _ZN8HWCLayer14setBufferQueueEN7android2spI18DisplayBufferQueueEE */
/* Demangled: HWCLayer::setBufferQueue(android::sp<DisplayBufferQueue>) */
int _ZN8HWCLayer14setBufferQueueEN7android2spI18DisplayBufferQueueEE(void);

/* Symbol: _Z9getFdInfoiPNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: getFdInfo(int, std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _Z9getFdInfoiPNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void);

/* Symbol: _ZNSt3__16vectorIfNS_9allocatorIfEEE8__appendEm */
/* Demangled: std::__1::vector<float, std::__1::allocator<float> >::__append(unsigned long) */
int _ZNSt3__16vectorIfNS_9allocatorIfEEE8__appendEm(void);

/* Symbol: _ZN15AsyncBlitDevice11initOverlayEv */
/* Demangled: AsyncBlitDevice::initOverlay() */
int _ZN15AsyncBlitDevice11initOverlayEv(void);

/* Symbol: _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSJ_8hidl_vecIhEEPT_ESW_EUlRKSV_SU_E_NSC_IS11_EEFvNSM_5ErrorESU_EEE */
/* Demangled: _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSJ_8hidl_vecIhEEPT_ESW_EUlRKSV_SU_E_NSC_IS11_EEFvNSM_5ErrorESU_EEE */
extern void* _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSJ_8hidl_vecIhEEPT_ESW_EUlRKSV_SU_E_NSC_IS11_EEFvNSM_5ErrorESU_EEE;

/* Symbol: _ZN10HWCDisplay15isConfigChangedEv */
/* Demangled: HWCDisplay::isConfigChanged() */
int _ZN10HWCDisplay15isConfigChangedEv(void);

/* Symbol: _ZN8HWCLayer7toBeDimEv */
/* Demangled: HWCLayer::toBeDim() */
int _ZN8HWCLayer7toBeDimEv(void);

/* Symbol: _ZN14ColorTransformC2EPKfRKiRKb */
/* Demangled: ColorTransform::ColorTransform(float const*, int const&, bool const&) */
int _ZN14ColorTransformC2EPKfRKiRKb(void);

/* Symbol: _ZN10HWCDisplay26setupPrivateHandleOfLayersEv */
/* Demangled: HWCDisplay::setupPrivateHandleOfLayers() */
int _ZN10HWCDisplay26setupPrivateHandleOfLayersEv(void);

/* Symbol: _ZN11HWCMediator16rollbackSFCPUSetERKm */
/* Demangled: HWCMediator::rollbackSFCPUSet(unsigned long const&) */
int _ZN11HWCMediator16rollbackSFCPUSetERKm(void);

/* Symbol: _ZN14ColorTransformC2ERKNSt3__16vectorINS1_IfNS0_9allocatorIfEEEENS2_IS4_EEEERKiRKbSC_ */
/* Demangled: ColorTransform::ColorTransform(std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > const&, int const&, bool const&, bool const&) */
int _ZN14ColorTransformC2ERKNSt3__16vectorINS1_IfNS0_9allocatorIfEEEENS2_IS4_EEEERKiRKbSC_(void);

/* Symbol: _ZN15AsyncBlitDevice9waitVSyncEmPl */
/* Demangled: AsyncBlitDevice::waitVSync(unsigned long, long*) */
int _ZN15AsyncBlitDevice9waitVSyncEmPl(void);

/* Symbol: _ZN9DbgLoggerC2IJPKciijEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, int, int, unsigned int>(unsigned int const&, unsigned char const&, char const*, char const*, int, int, unsigned int) */
int _ZN9DbgLoggerC2IJPKciijEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN3Hrt28fillLayerInfoOfDispatcherJobERKNSt3__16vectorIN7android2spI10HWCDisplayEENS0_9allocatorIS5_EEEE */
/* Demangled: Hrt::fillLayerInfoOfDispatcherJob(std::__1::vector<android::sp<HWCDisplay>, std::__1::allocator<android::sp<HWCDisplay> > > const&) */
int _ZN3Hrt28fillLayerInfoOfDispatcherJobERKNSt3__16vectorIN7android2spI10HWCDisplayEENS0_9allocatorIS5_EEEE(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcS2_mmiiEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char const*, unsigned long, unsigned long, int, int>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, unsigned long, unsigned long, int, int) */
int _ZN9DbgLoggerC2IJPKcS2_mmiiEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN7android2spI10IdleThreadEaSEPS1_ */
/* Demangled: android::sp<IdleThread>::operator=(IdleThread*) */
int _ZN7android2spI10IdleThreadEaSEPS1_(void);

/* Symbol: _ZN10DispDevice11initOverlayEv */
/* Demangled: DispDevice::initOverlay() */
int _ZN10DispDevice11initOverlayEv(void);

/* Symbol: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalINS_6vectorIhNS_9allocatorIhEEEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS7_ISX_EEFvNSI_5ErrorESQ_EE18destroy_deallocateEv */
/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalINS_6vectorIhNS_9allocatorIhEEEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS7_ISX_EEFvNSI_5ErrorESQ_EE18destroy_deallocateEv */
int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalINS_6vectorIhNS_9allocatorIhEEEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS7_ISX_EEFvNSI_5ErrorESQ_EE18destroy_deallocateEv(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueueiNS3_10BufferSlot11BufferStateEiEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char const*, DisplayBufferQueue*, int, DisplayBufferQueue::BufferSlot::BufferState, int>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, DisplayBufferQueue*, int, DisplayBufferQueue::BufferSlot::BufferState, int) */
int _ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueueiNS3_10BufferSlot11BufferStateEiEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN10HWCDisplay39buildVisibleAndInvisibleLayersSortedByZEv */
/* Demangled: HWCDisplay::buildVisibleAndInvisibleLayersSortedByZ() */
int _ZN10HWCDisplay39buildVisibleAndInvisibleLayersSortedByZEv(void);

/* Symbol: _ZN13HWCDispatcher14VirPostHandler3setERKN7android2spI10HWCDisplayEEP13DispatcherJob */
/* Demangled: HWCDispatcher::VirPostHandler::set(android::sp<HWCDisplay> const&, DispatcherJob*) */
int _ZN13HWCDispatcher14VirPostHandler3setERKN7android2spI10HWCDisplayEEP13DispatcherJob(void);

/* Symbol: _Z13calculateCropPN7android4RectES1_RS0_j */
/* Demangled: calculateCrop(android::Rect*, android::Rect*, android::Rect&, unsigned int) */
int _Z13calculateCropPN7android4RectES1_RS0_j(void);

/* Symbol: _ZNK7android6VectorIP13DispatcherJobE7do_copyEPvPKvm */
/* Demangled: android::Vector<DispatcherJob*>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIP13DispatcherJobE7do_copyEPvPKvm(void);

/* Symbol: _ZNK7android6VectorIP13DispatcherJobE8do_splatEPvPKvm */
/* Demangled: android::Vector<DispatcherJob*>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIP13DispatcherJobE8do_splatEPvPKvm(void);

/* Symbol: _ZN14DisplayManagerC1Ev */
/* Demangled: DisplayManager::DisplayManager() */
int _ZN14DisplayManagerC1Ev(void);

/* Symbol: _ZN16HWVSyncEstimator14getNextHWVsyncEl */
/* Demangled: HWVSyncEstimator::getNextHWVsync(long) */
int _ZN16HWVSyncEstimator14getNextHWVsyncEl(void);

/* Symbol: _Z12getDstHeightRKN7android2spI8HWCLayerEE */
/* Demangled: getDstHeight(android::sp<HWCLayer> const&) */
int _Z12getDstHeightRKN7android2spI8HWCLayerEE(void);

/* Symbol: _ZN11HWCMediator13addHWCDisplayERKN7android2spI10HWCDisplayEE */
/* Demangled: HWCMediator::addHWCDisplay(android::sp<HWCDisplay> const&) */
int _ZN11HWCMediator13addHWCDisplayERKN7android2spI10HWCDisplayEE(void);

/* Symbol: _ZN11HWCMediator22displaySetClientTargetEP11hwc2_devicemPK13native_handleii10hwc_region */
/* Demangled: HWCMediator::displaySetClientTarget(hwc2_device*, unsigned long, native_handle const*, int, int, hwc_region) */
int _ZN11HWCMediator22displaySetClientTargetEP11hwc2_devicemPK13native_handleii10hwc_region(void);

/* Symbol: _ZN18AsyncBliterHandler10bypassBlitEP7HWLayerj */
/* Demangled: AsyncBliterHandler::bypassBlit(HWLayer*, unsigned int) */
int _ZN18AsyncBliterHandler10bypassBlitEP7HWLayerj(void);

/* Symbol: _ZN10DispDevice20legacySetInputBufferEm */
/* Demangled: DispDevice::legacySetInputBuffer(unsigned long) */
int _ZN10DispDevice20legacySetInputBufferEm(void);

/* Symbol: _ZN10HWCDisplay15setActiveConfigEj */
/* Demangled: HWCDisplay::setActiveConfig(unsigned int) */
int _ZN10HWCDisplay15setActiveConfigEj(void);

/* Symbol: _ZN8HWCLayer13setLayerColorERK9hwc_color */
/* Demangled: HWCLayer::setLayerColor(hwc_color const&) */
int _ZN8HWCLayer13setLayerColorERK9hwc_color(void);

/* Symbol: _ZN13OverlayEngine23createOutputQueueLockedEjb */
/* Demangled: OverlayEngine::createOutputQueueLocked(unsigned int, bool) */
int _ZN13OverlayEngine23createOutputQueueLockedEjb(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void);

/* Symbol: _ZNK7android12SortedVectorINS_2spI16HWCVSyncListenerEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::sp<HWCVSyncListener> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_2spI16HWCVSyncListenerEEE12do_constructEPvm(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcfEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, float>(unsigned int const&, unsigned char const&, char const*, char const*, float) */
int _ZN9DbgLoggerC2IJPKcfEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN15DisplayListener9onRefreshEm */
/* Demangled: DisplayListener::onRefresh(unsigned long) */
int _ZN15DisplayListener9onRefreshEm(void);

/* Symbol: _ZN13HWCDispatcher7triggerERKm */
/* Demangled: HWCDispatcher::trigger(unsigned long const&) */
int _ZN13HWCDispatcher7triggerERKm(void);

/* Symbol: _ZNK10HWCDisplay8getWidthEj */
/* Demangled: HWCDisplay::getWidth(unsigned int) const */
int _ZNK10HWCDisplay8getWidthEj(void);

/* Symbol: _ZTv0_n24_N11VSyncThreadD1Ev */
/* Demangled: virtual thunk to VSyncThread::~VSyncThread() */
int _ZTv0_n24_N11VSyncThreadD1Ev(void);

/* Symbol: _ZNK3hwc14Gralloc4Mapper22getDefaultPlaneLayoutsEjjijmPNSt3__16vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS1_9allocatorIS8_EEEE */
/* Demangled: hwc::Gralloc4Mapper::getDefaultPlaneLayouts(unsigned int, unsigned int, int, unsigned int, unsigned long, std::__1::vector<aidl::android::hardware::graphics::common::PlaneLayout, std::__1::allocator<aidl::android::hardware::graphics::common::PlaneLayout> >*) const */
int _ZNK3hwc14Gralloc4Mapper22getDefaultPlaneLayoutsEjjijmPNSt3__16vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS1_9allocatorIS8_EEEE(void);

/* Symbol: _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultImEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EEE */
/* Demangled: _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultImEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EEE */
extern void* _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultImEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EEE;

/* Symbol: _ZN3hwc19GraphicBufferMapper13getInterlacedEPK13native_handlePN4aidl7android8hardware8graphics6common14ExtendableTypeE */
/* Demangled: hwc::GraphicBufferMapper::getInterlaced(native_handle const*, aidl::android::hardware::graphics::common::ExtendableType*) */
int _ZN3hwc19GraphicBufferMapper13getInterlacedEPK13native_handlePN4aidl7android8hardware8graphics6common14ExtendableTypeE(void);

/* Symbol: _ZN15AsyncBlitDevice24isPartialUpdateSupportedEv */
/* Demangled: AsyncBlitDevice::isPartialUpdateSupported() */
int _ZN15AsyncBlitDevice24isPartialUpdateSupportedEv(void);

/* Symbol: _ZN9DbgLoggerC2IJPKciiEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, int, int>(unsigned int const&, unsigned char const&, char const*, char const*, int, int) */
int _ZN9DbgLoggerC2IJPKciiEEERKjRKhS2_DpT_(void);

/* Symbol: _ZNK9HrtCommon9isEnabledEv */
/* Demangled: HrtCommon::isEnabled() const */
int _ZNK9HrtCommon9isEnabledEv(void);

/* Symbol: _ZNK10HWCDisplay13getNumConfigsEv */
/* Demangled: HWCDisplay::getNumConfigs() const */
int _ZNK10HWCDisplay13getNumConfigsEv(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmcS2_S2_EEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, char, char const*, char const*>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, char, char const*, char const*) */
int _ZN9DbgLoggerC2IJPKcmcS2_S2_EEERKjRKhS2_DpT_(void);

/* Symbol: _ZN14DisplayManager20setDisplayDataForPhyEmPK13native_handle */
/* Demangled: DisplayManager::setDisplayDataForPhy(unsigned long, native_handle const*) */
int _ZN14DisplayManager20setDisplayDataForPhyEmPK13native_handle(void);

/* Symbol: _ZTv0_n24_N18DisplayBufferQueueD0Ev */
/* Demangled: virtual thunk to DisplayBufferQueue::~DisplayBufferQueue() */
int _ZTv0_n24_N18DisplayBufferQueueD0Ev(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmjjjEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned int, unsigned int, unsigned int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned int, unsigned int, unsigned int) */
int _ZN9DbgLoggerC2IJPKcmjjjEEERKjRKhS2_DpT_(void);

/* Symbol: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getImEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EE7destroyEv */
/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getImEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EE7destroyEv */
int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getImEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EE7destroyEv(void);

/* Symbol: _ZN10ObjectPoolI13DispatcherJobEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEmNS2_8functionIFPS0_vEEE */
/* Demangled: ObjectPool<DispatcherJob>::ObjectPool(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned long, std::__1::function<DispatcherJob* ()>) */
int _ZN10ObjectPoolI13DispatcherJobEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEmNS2_8functionIFPS0_vEEE(void);

/* Symbol: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIjEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EE7destroyEv */
/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIjEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EE7destroyEv */
int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIjEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EE7destroyEv(void);

/* Symbol: _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN7android8hardware8graphics6common4V1_211PixelFormatEEEiPK13native_handleRKNS7_6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EEE */
/* Demangled: _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN7android8hardware8graphics6common4V1_211PixelFormatEEEiPK13native_handleRKNS7_6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EEE */
extern void* _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN7android8hardware8graphics6common4V1_211PixelFormatEEEiPK13native_handleRKNS7_6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EEE;

/* Symbol: _ZN3hwc19GraphicBufferMapper29getDefaultPixelFormatModifierEjjijmPm */
/* Demangled: hwc::GraphicBufferMapper::getDefaultPixelFormatModifier(unsigned int, unsigned int, int, unsigned int, unsigned long, unsigned long*) */
int _ZN3hwc19GraphicBufferMapper29getDefaultPixelFormatModifierEjjijmPm(void);

/* Symbol: _ZNK7android6VectorINS_12SortedVectorINS_2spI16HWCVSyncListenerEEEEE10do_destroyEPvm */
/* Demangled: android::Vector<android::SortedVector<android::sp<HWCVSyncListener> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorINS_12SortedVectorINS_2spI16HWCVSyncListenerEEEEE10do_destroyEPvm(void);

/* Symbol: HWC2_COMPOSITION_INVALID_STR */
/* Demangled: HWC2_COMPOSITION_INVALID_STR */
extern void* HWC2_COMPOSITION_INVALID_STR;

/* Symbol: _ZNK3hwc14Gralloc2Mapper8isLoadedEv */
/* Demangled: hwc::Gralloc2Mapper::isLoaded() const */
int _ZNK3hwc14Gralloc2Mapper8isLoadedEv(void);

/* Symbol: _ZNK3hwc14Gralloc4Mapper8getUsageEPK13native_handlePm */
/* Demangled: hwc::Gralloc4Mapper::getUsage(native_handle const*, unsigned long*) const */
int _ZNK3hwc14Gralloc4Mapper8getUsageEPK13native_handlePm(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcS2_ibEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char const*, int, bool>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, int, bool) */
int _ZN9DbgLoggerC2IJPKcS2_ibEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN9HWCBuffer17setAcquireFenceFdERKi */
/* Demangled: HWCBuffer::setAcquireFenceFd(int const&) */
int _ZN9HWCBuffer17setAcquireFenceFdERKi(void);

/* Symbol: _ZN15DisplayListener8onPlugInEmjj */
/* Demangled: DisplayListener::onPlugIn(unsigned long, unsigned int, unsigned int) */
int _ZN15DisplayListener8onPlugInEmjj(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcS2_iEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char const*, int>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, int) */
int _ZN9DbgLoggerC2IJPKcS2_iEEERKjRKhS2_DpT_(void);

/* Symbol: _ZNK8HWCLayer18getCompositionTypeEv */
/* Demangled: HWCLayer::getCompositionType() const */
int _ZNK8HWCLayer18getCompositionTypeEv(void);

/* Symbol: _Z4isP3RKi */
/* Demangled: isP3(int const&) */
int _Z4isP3RKi(void);

/* Symbol: _ZNK7android6VectorI10MdpJobInfoE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<MdpJobInfo>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorI10MdpJobInfoE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN3hwc19GraphicBufferMapper12getDataspaceEPK13native_handlePN7android8hardware8graphics6common4V1_29DataspaceE */
/* Demangled: hwc::GraphicBufferMapper::getDataspace(native_handle const*, android::hardware::graphics::common::V1_2::Dataspace*) */
int _ZN3hwc19GraphicBufferMapper12getDataspaceEPK13native_handlePN7android8hardware8graphics6common4V1_29DataspaceE(void);

/* Symbol: _ZN11HWCMediator30countdowmSkipValiRelatedNumberEv */
/* Demangled: HWCMediator::countdowmSkipValiRelatedNumber() */
int _ZN11HWCMediator30countdowmSkipValiRelatedNumberEv(void);

/* Symbol: _ZN13HWCDispatcher14VirPostHandler7processEP13DispatcherJob */
/* Demangled: HWCDispatcher::VirPostHandler::process(DispatcherJob*) */
int _ZN13HWCDispatcher14VirPostHandler7processEP13DispatcherJob(void);

/* Symbol: _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void);

/* Symbol: _ZN7android9TransformC2ERKS0_ */
/* Demangled: android::Transform::Transform(android::Transform const&) */
int _ZN7android9TransformC2ERKS0_(void);

/* Symbol: _ZN13DispatcherJobC2Ej */
/* Demangled: DispatcherJob::DispatcherJob(unsigned int) */
int _ZN13DispatcherJobC2Ej(void);

/* Symbol: _ZN7android2spI13LayerComposerEaSEPS1_ */
/* Demangled: android::sp<LayerComposer>::operator=(LayerComposer*) */
int _ZN7android2spI13LayerComposerEaSEPS1_(void);

/* Symbol: _ZN10IdleThreadD1Ev */
/* Demangled: IdleThread::~IdleThread() */
int _ZN10IdleThreadD1Ev(void);

/* Symbol: _ZN9HrtCommon18simpleLayeringRuleERKNSt3__16vectorIN7android2spI10HWCDisplayEENS0_9allocatorIS5_EEEE */
/* Demangled: HrtCommon::simpleLayeringRule(std::__1::vector<android::sp<HWCDisplay>, std::__1::allocator<android::sp<HWCDisplay> > > const&) */
int _ZN9HrtCommon18simpleLayeringRuleERKNSt3__16vectorIN7android2spI10HWCDisplayEENS0_9allocatorIS5_EEEE(void);

/* Symbol: _ZN8HWCLayer18setupPrivateHandleEv */
/* Demangled: HWCLayer::setupPrivateHandle() */
int _ZN8HWCLayer18setupPrivateHandleEv(void);

/* Symbol: _ZN14DispatchThread12clearUsedJobEP13DispatcherJob */
/* Demangled: DispatchThread::clearUsedJob(DispatcherJob*) */
int _ZN14DispatchThread12clearUsedJobEP13DispatcherJob(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcS2_miiffffiiiiEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char const*, unsigned long, int, int, float, float, float, float, int, int, int, int>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, unsigned long, int, int, float, float, float, float, int, int, int, int) */
int _ZN9DbgLoggerC2IJPKcS2_miiffffiiiiEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN8DebuggerC1Ev */
/* Demangled: Debugger::Debugger() */
int _ZN8DebuggerC1Ev(void);

/* Symbol: _ZN3hwc14Gralloc4MapperC1Ev */
/* Demangled: hwc::Gralloc4Mapper::Gralloc4Mapper() */
int _ZN3hwc14Gralloc4MapperC1Ev(void);

/* Symbol: _ZN11HWCMediator22layerStateSetBlendModeEP11hwc2_devicemmi */
/* Demangled: HWCMediator::layerStateSetBlendMode(hwc2_device*, unsigned long, unsigned long, int) */
int _ZN11HWCMediator22layerStateSetBlendModeEP11hwc2_devicemmi(void);

/* Symbol: _ZN8HWCLayer12setTransformERKj */
/* Demangled: HWCLayer::setTransform(unsigned int const&) */
int _ZN8HWCLayer12setTransformERKj(void);

/* Symbol: _ZTVN7android6VectorIP13DispatcherJobEE */
/* Demangled: vtable for android::Vector<DispatcherJob*> */
extern void* _ZTVN7android6VectorIP13DispatcherJobEE;

/* Symbol: _ZTC10IdleThread0_N7android6ThreadE */
/* Demangled: construction vtable for android::Thread-in-IdleThread */
extern void* _ZTC10IdleThread0_N7android6ThreadE;

/* Symbol: _ZN16FrameOverlayInfo21resetOverlayPortParamEP16OverlayPortParam */
/* Demangled: FrameOverlayInfo::resetOverlayPortParam(OverlayPortParam*) */
int _ZN16FrameOverlayInfo21resetOverlayPortParamEP16OverlayPortParam(void);

/* Symbol: __multf3 */
/* Demangled: __multf3 */
int __multf3(void);

/* Symbol: _ZN16HWVSyncEstimator6updateEl */
/* Demangled: HWVSyncEstimator::update(long) */
int _ZN16HWVSyncEstimator6updateEl(void);

/* Symbol: _ZN9IONDeviceD1Ev */
/* Demangled: IONDevice::~IONDevice() */
int _ZN9IONDeviceD1Ev(void);

/* Symbol: _ZN16DbgLogBufManagerD2Ev */
/* Demangled: DbgLogBufManager::~DbgLogBufManager() */
int _ZN16DbgLogBufManagerD2Ev(void);

/* Symbol: _ZNK3hwc14Gralloc4Mapper22getDefaultChromaSitingEjjijmPN4aidl7android8hardware8graphics6common12ChromaSitingE */
/* Demangled: hwc::Gralloc4Mapper::getDefaultChromaSiting(unsigned int, unsigned int, int, unsigned int, unsigned long, aidl::android::hardware::graphics::common::ChromaSiting*) const */
int _ZNK3hwc14Gralloc4Mapper22getDefaultChromaSitingEjjijmPN4aidl7android8hardware8graphics6common12ChromaSitingE(void);

/* Symbol: _ZN13HWCDispatcher11PostHandlerC2EPS_mRKN7android2spI13OverlayEngineEE */
/* Demangled: HWCDispatcher::PostHandler::PostHandler(HWCDispatcher*, unsigned long, android::sp<OverlayEngine> const&) */
int _ZN13HWCDispatcher11PostHandlerC2EPS_mRKN7android2spI13OverlayEngineEE(void);

/* Symbol: __getf2 */
/* Demangled: __getf2 */
int __getf2(void);

/* Symbol: _ZN11HWCMediatorD1Ev */
/* Demangled: HWCMediator::~HWCMediator() */
int _ZN11HWCMediatorD1Ev(void);

/* Symbol: _ZNK7android9Transform2tyEv */
/* Demangled: android::Transform::ty() const */
int _ZNK7android9Transform2tyEv(void);

/* Symbol: _ZN7android10SWWatchDogD2Ev */
/* Demangled: android::SWWatchDog::~SWWatchDog() */
int _ZN7android10SWWatchDogD2Ev(void);

/* Symbol: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE18destroy_deallocateEv */
/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE18destroy_deallocateEv */
int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE18destroy_deallocateEv(void);

/* Symbol: _ZNK10HWCDisplay7getDpiYEj */
/* Demangled: HWCDisplay::getDpiY(unsigned int) const */
int _ZNK10HWCDisplay7getDpiYEj(void);

/* Symbol: _ZN12UEventThread11setPropertyEv */
/* Demangled: UEventThread::setProperty() */
int _ZN12UEventThread11setPropertyEv(void);

/* Symbol: _ZN10BliterNodeD2Ev */
/* Demangled: BliterNode::~BliterNode() */
int _ZN10BliterNodeD2Ev(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIm13PrivateHandleEENS_22__unordered_map_hasherImS3_NS_4hashImEELb1EEENS_21__unordered_map_equalImS3_NS_8equal_toImEELb1EEENS_9allocatorIS3_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long, PrivateHandle>, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, PrivateHandle>, std::__1::hash<unsigned long>, true>, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, PrivateHandle>, std::__1::equal_to<unsigned long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long, PrivateHandle> > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIm13PrivateHandleEENS_22__unordered_map_hasherImS3_NS_4hashImEELb1EEENS_21__unordered_map_equalImS3_NS_8equal_toImEELb1EEENS_9allocatorIS3_EEE6rehashEm(void);

/* Symbol: _ZN10DispDevice9waitVSyncEmPl */
/* Demangled: DispDevice::waitVSync(unsigned long, long*) */
int _ZN10DispDevice9waitVSyncEmPl(void);

/* Symbol: _ZN7HWC2ApiD2Ev */
/* Demangled: HWC2Api::~HWC2Api() */
int _ZN7HWC2ApiD2Ev(void);

/* Symbol: _Z25getPresentValiStateStringRK22HWC_VALI_PRESENT_STATE */
/* Demangled: getPresentValiStateString(HWC_VALI_PRESENT_STATE const&) */
int _Z25getPresentValiStateStringRK22HWC_VALI_PRESENT_STATE(void);

/* Symbol: _ZN14DisplayManager21getSupportedColorModeEm */
/* Demangled: DisplayManager::getSupportedColorMode(unsigned long) */
int _ZN14DisplayManager21getSupportedColorModeEm(void);

/* Symbol: _ZTT20RefreshRequestThread */
/* Demangled: VTT for RefreshRequestThread */
extern void* _ZTT20RefreshRequestThread;

/* Symbol: _ZNK7android6VectorINS_2spI9FrameInfoEEE8do_splatEPvPKvm */
/* Demangled: android::Vector<android::sp<FrameInfo> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spI9FrameInfoEEE8do_splatEPvPKvm(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmiiiijjjjjjEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, int, int, int, int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, int, int, int, int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
int _ZN9DbgLoggerC2IJPKcmiiiijjjjjjEEERKjRKhS2_DpT_(void);

/* Symbol: _ZNK3hwc14Gralloc4Mapper13getInterlacedEPK13native_handlePN4aidl7android8hardware8graphics6common10InterlacedE */
/* Demangled: hwc::Gralloc4Mapper::getInterlaced(native_handle const*, aidl::android::hardware::graphics::common::Interlaced*) const */
int _ZNK3hwc14Gralloc4Mapper13getInterlacedEPK13native_handlePN4aidl7android8hardware8graphics6common10InterlacedE(void);

/* Symbol: _ZN23PanelEventMonitorThreadD1Ev */
/* Demangled: PanelEventMonitorThread::~PanelEventMonitorThread() */
int _ZN23PanelEventMonitorThreadD1Ev(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueuejPK13native_handleEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char const*, DisplayBufferQueue*, unsigned int, native_handle const*>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, DisplayBufferQueue*, unsigned int, native_handle const*) */
int _ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueuejPK13native_handleEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN11WhiteBuffer9setSecureEv */
/* Demangled: WhiteBuffer::setSecure() */
int _ZN11WhiteBuffer9setSecureEv(void);

/* Symbol: _ZN9MmBufDumpC1Ev */
/* Demangled: MmBufDump::MmBufDump() */
int _ZN9MmBufDumpC1Ev(void);

/* Symbol: _ZNK3hwc14Gralloc4Mapper8getWidthEPK13native_handlePm */
/* Demangled: hwc::Gralloc4Mapper::getWidth(native_handle const*, unsigned long*) const */
int _ZNK3hwc14Gralloc4Mapper8getWidthEPK13native_handlePm(void);

/* Symbol: _ZN11HWCMediator4openEv */
/* Demangled: HWCMediator::open() */
int _ZN11HWCMediator4openEv(void);

/* Symbol: _ZN13HWCDispatcher13prepareMirrorERKNSt3__16vectorIN7android2spI10HWCDisplayEENS0_9allocatorIS5_EEEE */
/* Demangled: HWCDispatcher::prepareMirror(std::__1::vector<android::sp<HWCDisplay>, std::__1::allocator<android::sp<HWCDisplay> > > const&) */
int _ZN13HWCDispatcher13prepareMirrorERKNSt3__16vectorIN7android2spI10HWCDisplayEENS0_9allocatorIS5_EEEE(void);

/* Symbol: _ZN20RefreshRequestThreadC2Ev */
/* Demangled: RefreshRequestThread::RefreshRequestThread() */
int _ZN20RefreshRequestThreadC2Ev(void);

/* Symbol: _ZN15AsyncBlitDevice10getRefreshEmj */
/* Demangled: AsyncBlitDevice::getRefresh(unsigned long, unsigned int) */
int _ZN15AsyncBlitDevice10getRefreshEmj(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIibEENS_22__unordered_map_hasherIiS2_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS2_NS_8equal_toIiEELb1EEENS_9allocatorIS2_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSI_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS2_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, bool>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<int, bool>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, bool>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, bool>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, bool> > >::__emplace_unique_key_args<int, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>, std::__1::tuple<> >(int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIibEENS_22__unordered_map_hasherIiS2_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS2_NS_8equal_toIiEELb1EEENS_9allocatorIS2_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSI_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS2_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZNK8HWCLayer10needRotateEv */
/* Demangled: HWCLayer::needRotate() const */
int _ZNK8HWCLayer10needRotateEv(void);

/* Symbol: _Z11getDstWidthRKN7android2spI8HWCLayerEE */
/* Demangled: getDstWidth(android::sp<HWCLayer> const&) */
int _Z11getDstWidthRKN7android2spI8HWCLayerEE(void);

/* Symbol: _ZN9DbgLoggerC2IJPKciiiiEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, int, int, int, int>(unsigned int const&, unsigned char const&, char const*, char const*, int, int, int, int) */
int _ZN9DbgLoggerC2IJPKciiiiEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN15AsyncBlitDeviceD1Ev */
/* Demangled: AsyncBlitDevice::~AsyncBlitDevice() */
int _ZN15AsyncBlitDeviceD1Ev(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmiS2_EEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, int, char const*>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, int, char const*) */
int _ZN9DbgLoggerC2IJPKcmiS2_EEERKjRKhS2_DpT_(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZNK7android9Transform14getOrientationEv */
/* Demangled: android::Transform::getOrientation() const */
int _ZNK7android9Transform14getOrientationEv(void);

/* Symbol: _ZN7android10FpsCounter6updateERKl */
/* Demangled: android::FpsCounter::update(long const&) */
int _ZN7android10FpsCounter6updateERKl(void);

/* Symbol: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalINS_6vectorIhNS_9allocatorIhEEEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS7_ISX_EEFvNSI_5ErrorESQ_EE7__cloneEv */
/* Demangled: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalINS_6vectorIhNS_9allocatorIhEEEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS7_ISX_EEFvNSI_5ErrorESQ_EE7__cloneEv */
int _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalINS_6vectorIhNS_9allocatorIhEEEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS7_ISX_EEFvNSI_5ErrorESQ_EE7__cloneEv(void);

/* Symbol: _ZN10HWCDisplay19setValiPresentStateE22HWC_VALI_PRESENT_STATERKi */
/* Demangled: HWCDisplay::setValiPresentState(HWC_VALI_PRESENT_STATE, int const&) */
int _ZN10HWCDisplay19setValiPresentStateE22HWC_VALI_PRESENT_STATERKi(void);

/* Symbol: _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m */
/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned long) */
int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmjjijEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned int, unsigned int, int, unsigned int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned int, unsigned int, int, unsigned int) */
int _ZN9DbgLoggerC2IJPKcmjjijEEERKjRKhS2_DpT_(void);

/* Symbol: _ZNK3hwc14Gralloc2Mapper28validateBufferDescriptorInfoEPN7android8hardware8graphics6mapper4V2_17IMapper20BufferDescriptorInfoE */
/* Demangled: hwc::Gralloc2Mapper::validateBufferDescriptorInfo(android::hardware::graphics::mapper::V2_1::IMapper::BufferDescriptorInfo*) const */
int _ZNK3hwc14Gralloc2Mapper28validateBufferDescriptorInfoEPN7android8hardware8graphics6mapper4V2_17IMapper20BufferDescriptorInfoE(void);

/* Symbol: _ZTC13OverlayEngine0_9HWCThread */
/* Demangled: construction vtable for HWCThread-in-OverlayEngine */
extern void* _ZTC13OverlayEngine0_9HWCThread;

/* Symbol: _ZN18AsyncBliterHandler18cancelFillBlackJobEP6MdpJob */
/* Demangled: AsyncBliterHandler::cancelFillBlackJob(MdpJob*) */
int _ZN18AsyncBliterHandler18cancelFillBlackJobEP6MdpJob(void);

/* Symbol: _ZN15AsyncBlitDevice18isDispRszSupportedEv */
/* Demangled: AsyncBlitDevice::isDispRszSupported() */
int _ZN15AsyncBlitDevice18isDispRszSupportedEv(void);

/* Symbol: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9DataspaceEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE7destroyEv */
/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9DataspaceEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE7destroyEv */
int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9DataspaceEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE7destroyEv(void);

/* Symbol: _ZN3hwc19GraphicBufferMapper21getDefaultCompressionEjjijmPN4aidl7android8hardware8graphics6common11CompressionE */
/* Demangled: hwc::GraphicBufferMapper::getDefaultCompression(unsigned int, unsigned int, int, unsigned int, unsigned long, aidl::android::hardware::graphics::common::Compression*) */
int _ZN3hwc19GraphicBufferMapper21getDefaultCompressionEjjijmPN4aidl7android8hardware8graphics6common11CompressionE(void);

/* Symbol: _ZN20MDPFrameInfoDebugger11getInstanceEv */
/* Demangled: MDPFrameInfoDebugger::getInstance() */
int _ZN20MDPFrameInfoDebugger11getInstanceEv(void);

/* Symbol: _ZN10BliterNode17cancelJobInternalERKjRKNSt3__110shared_ptrINS_8JobParamEEE */
/* Demangled: BliterNode::cancelJobInternal(unsigned int const&, std::__1::shared_ptr<BliterNode::JobParam> const&) */
int _ZN10BliterNode17cancelJobInternalERKjRKNSt3__110shared_ptrINS_8JobParamEEE(void);

/* Symbol: _ZNK3hwc14Gralloc4Mapper4lockEPK13native_handlemRKNS_4RectEiPPvPiS9_ */
/* Demangled: hwc::Gralloc4Mapper::lock(native_handle const*, unsigned long, hwc::Rect const&, int, void**, int*, int*) const */
int _ZNK3hwc14Gralloc4Mapper4lockEPK13native_handlemRKNS_4RectEiPPvPiS9_(void);

/* Symbol: _ZN3hwc19GraphicBufferMapper12getSmpte2086EPK13native_handlePNSt3__18optionalIN4aidl7android8hardware8graphics6common9Smpte2086EEE */
/* Demangled: hwc::GraphicBufferMapper::getSmpte2086(native_handle const*, std::__1::optional<aidl::android::hardware::graphics::common::Smpte2086>*) */
int _ZN3hwc19GraphicBufferMapper12getSmpte2086EPK13native_handlePNSt3__18optionalIN4aidl7android8hardware8graphics6common9Smpte2086EEE(void);

/* Symbol: _ZN13AbortMessager6printfIJEEEvPKcDpT_ */
/* Demangled: void AbortMessager::printf<>(char const*) */
int _ZN13AbortMessager6printfIJEEEvPKcDpT_(void);

/* Symbol: _Z17usageHasProtectedj */
/* Demangled: usageHasProtected(unsigned int) */
int _Z17usageHasProtectedj(void);

/* Symbol: _ZTVN7android6VectorI10MdpJobInfoEE */
/* Demangled: vtable for android::Vector<MdpJobInfo> */
extern void* _ZTVN7android6VectorI10MdpJobInfoEE;

/* Symbol: _ZNK3hwc14Gralloc2Mapper4lockEPK13native_handlemRKNS_4RectEiP13android_ycbcr */
/* Demangled: hwc::Gralloc2Mapper::lock(native_handle const*, unsigned long, hwc::Rect const&, int, android_ycbcr*) const */
int _ZNK3hwc14Gralloc2Mapper4lockEPK13native_handlemRKNS_4RectEiP13android_ycbcr(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmjijiPK13native_handleijEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned int, int, unsigned int, int, native_handle const*, int, unsigned int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned int, int, unsigned int, int, native_handle const*, int, unsigned int) */
int _ZN9DbgLoggerC2IJPKcmjijiPK13native_handleijEEERKjRKhS2_DpT_(void);

/* Symbol: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN7android8hardware8graphics6common4V1_211PixelFormatEEEiPK13native_handleRKNS7_6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EEclEOSX_SN_ */
/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN7android8hardware8graphics6common4V1_211PixelFormatEEEiPK13native_handleRKNS7_6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EEclEOSX_SN_ */
int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN7android8hardware8graphics6common4V1_211PixelFormatEEEiPK13native_handleRKNS7_6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EEclEOSX_SN_(void);

/* Symbol: _ZN14HwcFeatureListC1Ev */
/* Demangled: HwcFeatureList::HwcFeatureList() */
int _ZN14HwcFeatureListC1Ev(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueueiPK13native_handleEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char const*, DisplayBufferQueue*, int, native_handle const*>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, DisplayBufferQueue*, int, native_handle const*) */
int _ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueueiPK13native_handleEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN9HrtCommon28fillLayerInfoOfDispatcherJobERKNSt3__16vectorIN7android2spI10HWCDisplayEENS0_9allocatorIS5_EEEE */
/* Demangled: HrtCommon::fillLayerInfoOfDispatcherJob(std::__1::vector<android::sp<HWCDisplay>, std::__1::allocator<android::sp<HWCDisplay> > > const&) */
int _ZN9HrtCommon28fillLayerInfoOfDispatcherJobERKNSt3__16vectorIN7android2spI10HWCDisplayEENS0_9allocatorIS5_EEEE(void);

/* Symbol: _ZN3Hrt19fillLayerConfigListERKNSt3__16vectorIN7android2spI10HWCDisplayEENS0_9allocatorIS5_EEEE */
/* Demangled: Hrt::fillLayerConfigList(std::__1::vector<android::sp<HWCDisplay>, std::__1::allocator<android::sp<HWCDisplay> > > const&) */
int _ZN3Hrt19fillLayerConfigListERKNSt3__16vectorIN7android2spI10HWCDisplayEENS0_9allocatorIS5_EEEE(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcS2_S2_EEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char const*, char const*>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, char const*) */
int _ZN9DbgLoggerC2IJPKcS2_S2_EEERKjRKhS2_DpT_(void);

/* Symbol: _ZN3hwc19GraphicBufferMapper9lockAsyncEPK13native_handlejRKNS_4RectEPPviPiS9_ */
/* Demangled: hwc::GraphicBufferMapper::lockAsync(native_handle const*, unsigned int, hwc::Rect const&, void**, int, int*, int*) */
int _ZN3hwc19GraphicBufferMapper9lockAsyncEPK13native_handlejRKNS_4RectEPPviPiS9_(void);

/* Symbol: _ZN9SyncFenceC1Em */
/* Demangled: SyncFence::SyncFence(unsigned long) */
int _ZN9SyncFenceC1Em(void);

/* Symbol: _ZN13AbortMessager5abortEv */
/* Demangled: AbortMessager::abort() */
int _ZN13AbortMessager5abortEv(void);

/* Symbol: _ZNK3hwc14Gralloc2Mapper4lockEPK13native_handlemRKNS_4RectEiPPvPiS9_ */
/* Demangled: hwc::Gralloc2Mapper::lock(native_handle const*, unsigned long, hwc::Rect const&, int, void**, int*, int*) const */
int _ZNK3hwc14Gralloc2Mapper4lockEPK13native_handlemRKNS_4RectEiPPvPiS9_(void);

/* Symbol: _ZN7android2spI23PanelEventMonitorThreadED2Ev */
/* Demangled: android::sp<PanelEventMonitorThread>::~sp() */
int _ZN7android2spI23PanelEventMonitorThreadED2Ev(void);

/* Symbol: _Z18getFenceSignalTimeRKi */
/* Demangled: getFenceSignalTime(int const&) */
int _Z18getFenceSignalTimeRKi(void);

/* Symbol: _ZN10DispDevice21setOverlaySessionModeEm13HWC_DISP_MODE */
/* Demangled: DispDevice::setOverlaySessionMode(unsigned long, HWC_DISP_MODE) */
int _ZN10DispDevice21setOverlaySessionModeEm13HWC_DISP_MODE(void);

/* Symbol: HWC2_COMPOSITION_DEVICE_STR */
/* Demangled: HWC2_COMPOSITION_DEVICE_STR */
extern void* HWC2_COMPOSITION_DEVICE_STR;

/* Symbol: _ZN3hwc19GraphicBufferMapper6unlockEPK13native_handle */
/* Demangled: hwc::GraphicBufferMapper::unlock(native_handle const*) */
int _ZN3hwc19GraphicBufferMapper6unlockEPK13native_handle(void);

/* Symbol: _ZNK7android12SortedVectorINS_2spI16HWCVSyncListenerEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::sp<HWCVSyncListener> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_2spI16HWCVSyncListenerEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZTC11VSyncThread0_N7android6ThreadE */
/* Demangled: construction vtable for android::Thread-in-VSyncThread */
extern void* _ZTC11VSyncThread0_N7android6ThreadE;

/* Symbol: _ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueueiiiEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char const*, DisplayBufferQueue*, int, int, int>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, DisplayBufferQueue*, int, int, int) */
int _ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueueiiiEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN3hwc19GraphicBufferMapper10freeBufferEPK13native_handle */
/* Demangled: hwc::GraphicBufferMapper::freeBuffer(native_handle const*) */
int _ZN3hwc19GraphicBufferMapper10freeBufferEPK13native_handle(void);

/* Symbol: _ZNK3hwc14Gralloc4Mapper15getSmpte2094_40EPK13native_handlePNSt3__18optionalINS4_6vectorIhNS4_9allocatorIhEEEEEE */
/* Demangled: hwc::Gralloc4Mapper::getSmpte2094_40(native_handle const*, std::__1::optional<std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > >*) const */
int _ZNK3hwc14Gralloc4Mapper15getSmpte2094_40EPK13native_handlePNSt3__18optionalINS4_6vectorIhNS4_9allocatorIhEEEEEE(void);

/* Symbol: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getImEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EE18destroy_deallocateEv */
/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getImEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EE18destroy_deallocateEv */
int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getImEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EE18destroy_deallocateEv(void);

/* Symbol: _ZN10HWCDisplay13acceptChangesEv */
/* Demangled: HWCDisplay::acceptChanges() */
int _ZN10HWCDisplay13acceptChangesEv(void);

/* Symbol: _ZN8Debugger15getLogThresholdEv */
/* Demangled: Debugger::getLogThreshold() */
int _ZN8Debugger15getLogThresholdEv(void);

/* Symbol: _ZN13HWCDispatcher6setJobERKN7android2spI10HWCDisplayEE */
/* Demangled: HWCDispatcher::setJob(android::sp<HWCDisplay> const&) */
int _ZN13HWCDispatcher6setJobERKN7android2spI10HWCDisplayEE(void);

/* Symbol: _ZN15TouchHintThreadC1Ev */
/* Demangled: TouchHintThread::TouchHintThread() */
int _ZN15TouchHintThreadC1Ev(void);

/* Symbol: _ZNK7android6VectorINS_2spI9FrameInfoEEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<android::sp<FrameInfo> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spI9FrameInfoEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIj14FrameFenceInfoEENS_22__unordered_map_hasherIjS3_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS3_NS_8equal_toIjEELb1EEENS_9allocatorIS3_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS3_PvEEEE */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, FrameFenceInfo>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, FrameFenceInfo>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, FrameFenceInfo>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, FrameFenceInfo> > >::remove(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, FrameFenceInfo>, void*>*>) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIj14FrameFenceInfoEENS_22__unordered_map_hasherIjS3_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS3_NS_8equal_toIjEELb1EEENS_9allocatorIS3_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS3_PvEEEE(void);

/* Symbol: _ZN13OverlayEngine14getInputParamsEv */
/* Demangled: OverlayEngine::getInputParams() */
int _ZN13OverlayEngine14getInputParamsEv(void);

/* Symbol: _ZN15AsyncBlitDevice18isDispRpoSupportedEv */
/* Demangled: AsyncBlitDevice::isDispRpoSupported() */
int _ZN15AsyncBlitDevice18isDispRpoSupportedEv(void);

/* Symbol: _ZN15DisplayListener16setCallbackVsyncEPFvPvmlES0_ */
/* Demangled: DisplayListener::setCallbackVsync(void (*)(void*, unsigned long, long), void*) */
int _ZN15DisplayListener16setCallbackVsyncEPFvPvmlES0_(void);

/* Symbol: _ZN14DisplayManagerD2Ev */
/* Demangled: DisplayManager::~DisplayManager() */
int _ZN14DisplayManagerD2Ev(void);

/* Symbol: _ZN18AsyncBliterHandlerD1Ev */
/* Demangled: AsyncBliterHandler::~AsyncBliterHandler() */
int _ZN18AsyncBliterHandlerD1Ev(void);

/* Symbol: _Z13getBufferNameRKPK13native_handlePNSt3__119basic_ostringstreamIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE */
/* Demangled: getBufferName(native_handle const* const&, std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _Z13getBufferNameRKPK13native_handlePNSt3__119basic_ostringstreamIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN7android9WDTAnchorENS_9allocatorIS2_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<android::WDTAnchor, std::__1::allocator<android::WDTAnchor> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN7android9WDTAnchorENS_9allocatorIS2_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN8Debugger6LOGGERD1Ev */
/* Demangled: Debugger::LOGGER::~LOGGER() */
int _ZN8Debugger6LOGGERD1Ev(void);

/* Symbol: _ZN18AsyncBliterHandler6nullopERKj */
/* Demangled: AsyncBliterHandler::nullop(unsigned int const&) */
int _ZN18AsyncBliterHandler6nullopERKj(void);

/* Symbol: _ZN15AsyncBlitDevice21disableOverlaySessionEmPKP16OverlayPortParamj */
/* Demangled: AsyncBlitDevice::disableOverlaySession(unsigned long, OverlayPortParam* const*, unsigned int) */
int _ZN15AsyncBlitDevice21disableOverlaySessionEmPKP16OverlayPortParamj(void);

/* Symbol: _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE;

/* Symbol: HWC2_COMPOSITION_UNKNOWN_STR */
/* Demangled: HWC2_COMPOSITION_UNKNOWN_STR */
extern void* HWC2_COMPOSITION_UNKNOWN_STR;

/* Symbol: _ZNK7android9Transform7inverseEv */
/* Demangled: android::Transform::inverse() const */
int _ZNK7android9Transform7inverseEv(void);

/* Symbol: _Z11mapDpFormatRKj */
/* Demangled: mapDpFormat(unsigned int const&) */
int _Z11mapDpFormatRKj(void);

/* Symbol: _ZN10DispDevice21isMultiConfigsSupportEv */
/* Demangled: DispDevice::isMultiConfigsSupport() */
int _ZN10DispDevice21isMultiConfigsSupportEv(void);

/* Symbol: _ZN13HWCDispatcherC1Ev */
/* Demangled: HWCDispatcher::HWCDispatcher() */
int _ZN13HWCDispatcherC1Ev(void);

/* Symbol: _ZNK7android6VectorI10MdpJobInfoE7do_copyEPvPKvm */
/* Demangled: android::Vector<MdpJobInfo>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorI10MdpJobInfoE7do_copyEPvPKvm(void);

/* Symbol: _ZN7android9TransformC1Ej */
/* Demangled: android::Transform::Transform(unsigned int) */
int _ZN7android9TransformC1Ej(void);

/* Symbol: _ZN10PerfHelperD1Ev */
/* Demangled: PerfHelper::~PerfHelper() */
int _ZN10PerfHelperD1Ev(void);

/* Symbol: _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIjEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EEE */
/* Demangled: _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIjEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EEE */
extern void* _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIjEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EEE;

/* Symbol: _ZN11HWCMediator17checkSkipValidateERKb */
/* Demangled: HWCMediator::checkSkipValidate(bool const&) */
int _ZN11HWCMediator17checkSkipValidateERKb(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmmEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned long>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned long) */
int _ZN9DbgLoggerC2IJPKcmmEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN13OverlayEngine13closeAllIonFdERKN7android2spI9FrameInfoEE */
/* Demangled: OverlayEngine::closeAllIonFd(android::sp<FrameInfo> const&) */
int _ZN13OverlayEngine13closeAllIonFdERKN7android2spI9FrameInfoEE(void);

/* Symbol: _Z25usageHasProtectedOrSecurej */
/* Demangled: usageHasProtectedOrSecure(unsigned int) */
int _Z25usageHasProtectedOrSecurej(void);

/* Symbol: _ZN9DbgLoggerC2IJPKciPK13native_handleEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, int, native_handle const*>(unsigned int const&, unsigned char const&, char const*, char const*, int, native_handle const*) */
int _ZN9DbgLoggerC2IJPKciPK13native_handleEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN9HWCThread10readyToRunEv */
/* Demangled: HWCThread::readyToRun() */
int _ZN9HWCThread10readyToRunEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_2spI16HWCVSyncListenerEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::sp<HWCVSyncListener> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_2spI16HWCVSyncListenerEEE10do_destroyEPvm(void);

/* Symbol: _ZTv0_n24_N13LayerComposerD0Ev */
/* Demangled: virtual thunk to LayerComposer::~LayerComposer() */
int _ZTv0_n24_N13LayerComposerD0Ev(void);

/* Symbol: _ZNK3hwc14Gralloc4Mapper29getDefaultPixelFormatModifierEjjijmPm */
/* Demangled: hwc::Gralloc4Mapper::getDefaultPixelFormatModifier(unsigned int, unsigned int, int, unsigned int, unsigned long, unsigned long*) const */
int _ZNK3hwc14Gralloc4Mapper29getDefaultPixelFormatModifierEjjijmPm(void);

/* Symbol: _ZN14PlatformCommon14isUILayerValidERKN7android2spI8HWCLayerEEPi */
/* Demangled: PlatformCommon::isUILayerValid(android::sp<HWCLayer> const&, int*) */
int _ZN14PlatformCommon14isUILayerValidERKN7android2spI8HWCLayerEEPi(void);

/* Symbol: _ZN13AbortMessagerC1Ev */
/* Demangled: AbortMessager::AbortMessager() */
int _ZN13AbortMessagerC1Ev(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcS2_jS2_EEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char const*, unsigned int, char const*>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, unsigned int, char const*) */
int _ZN9DbgLoggerC2IJPKcS2_jS2_EEERKjRKhS2_DpT_(void);

/* Symbol: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9DataspaceEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE18destroy_deallocateEv */
/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9DataspaceEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE18destroy_deallocateEv */
int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9DataspaceEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE18destroy_deallocateEv(void);

/* Symbol: _ZN8Platform14isMMLayerValidERKN7android2spI8HWCLayerEEPi */
/* Demangled: Platform::isMMLayerValid(android::sp<HWCLayer> const&, int*) */
int _ZN8Platform14isMMLayerValidERKN7android2spI8HWCLayerEEPi(void);

/* Symbol: _ZN10HWCDisplay29buildVisibleAndInvisibleLayerEv */
/* Demangled: HWCDisplay::buildVisibleAndInvisibleLayer() */
int _ZN10HWCDisplay29buildVisibleAndInvisibleLayerEv(void);

/* Symbol: _ZN8Debugger4dumpEPN7android7String8E */
/* Demangled: Debugger::dump(android::String8*) */
int _ZN8Debugger4dumpEPN7android7String8E(void);

/* Symbol: _ZN10DispDevice17forceMaxFrameRateEv */
/* Demangled: DispDevice::forceMaxFrameRate() */
int _ZN10DispDevice17forceMaxFrameRateEv(void);

/* Symbol: _ZNK3hwc14Gralloc4Mapper16bufferDumpHelperERKN7android8hardware8graphics6mapper4V4_07IMapper10BufferDumpEPNSt3__119basic_ostringstreamIcNSA_11char_traitsIcEENSA_9allocatorIcEEEEPmb */
/* Demangled: hwc::Gralloc4Mapper::bufferDumpHelper(android::hardware::graphics::mapper::V4_0::IMapper::BufferDump const&, std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned long*, bool) const */
int _ZNK3hwc14Gralloc4Mapper16bufferDumpHelperERKN7android8hardware8graphics6mapper4V4_07IMapper10BufferDumpEPNSt3__119basic_ostringstreamIcNSA_11char_traitsIcEENSA_9allocatorIcEEEEPmb(void);

/* Symbol: _ZN13HWCDispatcher9onPlugOutEm */
/* Demangled: HWCDispatcher::onPlugOut(unsigned long) */
int _ZN13HWCDispatcher9onPlugOutEm(void);

/* Symbol: _ZTC14DispatchThread0_N7android6ThreadE */
/* Demangled: construction vtable for android::Thread-in-DispatchThread */
extern void* _ZTC14DispatchThread0_N7android6ThreadE;

/* Symbol: _ZN13OverlayEngine18waitUntilAvailableEv */
/* Demangled: OverlayEngine::waitUntilAvailable() */
int _ZN13OverlayEngine18waitUntilAvailableEv(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueuemiEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char const*, DisplayBufferQueue*, unsigned long, int>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, DisplayBufferQueue*, unsigned long, int) */
int _ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueuemiEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcijiPcEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, int, unsigned int, int, char*>(unsigned int const&, unsigned char const&, char const*, char const*, int, unsigned int, int, char*) */
int _ZN9DbgLoggerC2IJPKcijiPcEEERKjRKhS2_DpT_(void);

/* Symbol: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common9Smpte2086EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EE7__cloneEv */
/* Demangled: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common9Smpte2086EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EE7__cloneEv */
int _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common9Smpte2086EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EE7__cloneEv(void);

/* Symbol: _ZZN10PerfHelper11getInstanceEvE7s_mutex */
/* Demangled: PerfHelper::getInstance()::s_mutex */
extern void* _ZZN10PerfHelper11getInstanceEvE7s_mutex;

/* Symbol: _ZN11WhiteBuffer9getHandleEv */
/* Demangled: WhiteBuffer::getHandle() */
int _ZN11WhiteBuffer9getHandleEv(void);

/* Symbol: _ZN8HWCLayer29fillHdrMetadataToGrallocExtraEv */
/* Demangled: HWCLayer::fillHdrMetadataToGrallocExtra() */
int _ZN8HWCLayer29fillHdrMetadataToGrallocExtraEv(void);

/* Symbol: _ZN14PqDeviceLegacyC2Ev */
/* Demangled: PqDeviceLegacy::PqDeviceLegacy() */
int _ZN14PqDeviceLegacyC2Ev(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcjllllllEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned int, long, long, long, long, long, long>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned int, long, long, long, long, long, long) */
int _ZN9DbgLoggerC2IJPKcjllllllEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN11HWCMediator18displayCreateLayerEP11hwc2_devicemPm */
/* Demangled: HWCMediator::displayCreateLayer(hwc2_device*, unsigned long, unsigned long*) */
int _ZN11HWCMediator18displayCreateLayerEP11hwc2_devicemPm(void);

/* Symbol: _ZN13OverlayEngine21setOverlaySessionModeE13HWC_DISP_MODE */
/* Demangled: OverlayEngine::setOverlaySessionMode(HWC_DISP_MODE) */
int _ZN13OverlayEngine21setOverlaySessionModeE13HWC_DISP_MODE(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcS2_mmiEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char const*, unsigned long, unsigned long, int>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, unsigned long, unsigned long, int) */
int _ZN9DbgLoggerC2IJPKcS2_mmiEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN10DispDevice19getRszMaxWidthInputEv */
/* Demangled: DispDevice::getRszMaxWidthInput() */
int _ZN10DispDevice19getRszMaxWidthInputEv(void);

/* Symbol: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultImEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EE18destroy_deallocateEv */
/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultImEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EE18destroy_deallocateEv */
int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultImEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EE18destroy_deallocateEv(void);

/* Symbol: _ZN10HWCDisplay34setOverrideMDPOutputFormatOfLayersEv */
/* Demangled: HWCDisplay::setOverrideMDPOutputFormatOfLayers() */
int _ZN10HWCDisplay34setOverrideMDPOutputFormatOfLayersEv(void);

/* Symbol: _ZN8HWCLayer19setPerFrameMetadataEjPKiPKf */
/* Demangled: HWCLayer::setPerFrameMetadata(unsigned int, int const*, float const*) */
int _ZN8HWCLayer19setPerFrameMetadataEjPKiPKf(void);

/* Symbol: _ZN14ColorTransformC1ERKiRKbS3_ */
/* Demangled: ColorTransform::ColorTransform(int const&, bool const&, bool const&) */
int _ZN14ColorTransformC1ERKiRKbS3_(void);

/* Symbol: _ZN10DispDevice11doChangeFpsEim */
/* Demangled: DispDevice::doChangeFps(int, unsigned long) */
int _ZN10DispDevice11doChangeFpsEim(void);

/* Symbol: _ZTCN7android22DisplayFeatureCallbackE0_NS_4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-android::DisplayFeatureCallback */
extern void* _ZTCN7android22DisplayFeatureCallbackE0_NS_4hidl4base4V1_05IBaseE;

/* Symbol: _ZN11BlackBufferD1Ev */
/* Demangled: BlackBuffer::~BlackBuffer() */
int _ZN11BlackBufferD1Ev(void);

/* Symbol: _ZN10HWCDisplay14clearAllFencesEv */
/* Demangled: HWCDisplay::clearAllFences() */
int _ZN10HWCDisplay14clearAllFencesEv(void);

/* Symbol: _ZN8Platform29getLimitedExternalDisplaySizeEv */
/* Demangled: Platform::getLimitedExternalDisplaySize() */
int _ZN8Platform29getLimitedExternalDisplaySizeEv(void);

/* Symbol: _ZN18DisplayBufferQueue16updateBufferSizeEjj */
/* Demangled: DisplayBufferQueue::updateBufferSize(unsigned int, unsigned int) */
int _ZN18DisplayBufferQueue16updateBufferSizeEjj(void);

/* Symbol: _ZN18AsyncBliterHandler8setBlackERKN7android2spI10HWCDisplayEEP13DispatcherJob */
/* Demangled: AsyncBliterHandler::setBlack(android::sp<HWCDisplay> const&, DispatcherJob*) */
int _ZN18AsyncBliterHandler8setBlackERKN7android2spI10HWCDisplayEEP13DispatcherJob(void);

/* Symbol: _ZNK7android9Transform9transformERKNS_4RectEb */
/* Demangled: android::Transform::transform(android::Rect const&, bool) const */
int _ZNK7android9Transform9transformERKNS_4RectEb(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmmS2_iEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned long, char const*, int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned long, char const*, int) */
int _ZN9DbgLoggerC2IJPKcmmS2_iEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN13OverlayEngine18setInputsAndOutputEP16FrameOverlayInfo */
/* Demangled: OverlayEngine::setInputsAndOutput(FrameOverlayInfo*) */
int _ZN13OverlayEngine18setInputsAndOutputEP16FrameOverlayInfo(void);

/* Symbol: _ZN11WhiteBufferC1Ev */
/* Demangled: WhiteBuffer::WhiteBuffer() */
int _ZN11WhiteBufferC1Ev(void);

/* Symbol: _ZN8DebuggerD2Ev */
/* Demangled: Debugger::~Debugger() */
int _ZN8DebuggerD2Ev(void);

/* Symbol: _ZN11HWCMediator21displayGetDozeSupportEP11hwc2_devicemPi */
/* Demangled: HWCMediator::displayGetDozeSupport(hwc2_device*, unsigned long, int*) */
int _ZN11HWCMediator21displayGetDozeSupportEP11hwc2_devicemPi(void);

/* Symbol: _ZN14DisplayManager14isUltraDisplayEm */
/* Demangled: DisplayManager::isUltraDisplay(unsigned long) */
int _ZN14DisplayManager14isUltraDisplayEm(void);

/* Symbol: _ZTv0_n24_N15TouchHintThreadD1Ev */
/* Demangled: virtual thunk to TouchHintThread::~TouchHintThread() */
int _ZTv0_n24_N15TouchHintThreadD1Ev(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcjbEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned int, bool>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned int, bool) */
int _ZN9DbgLoggerC2IJPKcjbEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcS2_PK13native_handleP15AHardwareBufferEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char const*, native_handle const*, AHardwareBuffer*>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, native_handle const*, AHardwareBuffer*) */
int _ZN9DbgLoggerC2IJPKcS2_PK13native_handleP15AHardwareBufferEEERKjRKhS2_DpT_(void);

/* Symbol: _ZTTN7android17DisplayFeatureGetE */
/* Demangled: VTT for android::DisplayFeatureGet */
extern void* _ZTTN7android17DisplayFeatureGetE;

/* Symbol: _ZN7android9TransformC1Ev */
/* Demangled: android::Transform::Transform() */
int _ZN7android9TransformC1Ev(void);

/* Symbol: _ZNK3hwc14Gralloc2Mapper16createDescriptorEPvS1_ */
/* Demangled: hwc::Gralloc2Mapper::createDescriptor(void*, void*) const */
int _ZNK3hwc14Gralloc2Mapper16createDescriptorEPvS1_(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmS2_jjjjEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, char const*, unsigned int, unsigned int, unsigned int, unsigned int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, char const*, unsigned int, unsigned int, unsigned int, unsigned int) */
int _ZN9DbgLoggerC2IJPKcmS2_jjjjEEERKjRKhS2_DpT_(void);

/* Symbol: _ZNK10HWCDisplay11isValidatedEv */
/* Demangled: HWCDisplay::isValidated() const */
int _ZNK10HWCDisplay11isValidatedEv(void);

/* Symbol: _ZN13OverlayEngineD2Ev */
/* Demangled: OverlayEngine::~OverlayEngine() */
int _ZN13OverlayEngineD2Ev(void);

/* Symbol: _ZNK3hwc14Gralloc4Mapper11isSupportedEjjijmPb */
/* Demangled: hwc::Gralloc4Mapper::isSupported(unsigned int, unsigned int, int, unsigned int, unsigned long, bool*) const */
int _ZNK3hwc14Gralloc4Mapper11isSupportedEjjijmPb(void);

/* Symbol: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalINS_6vectorIhNS_9allocatorIhEEEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS7_ISX_EEFvNSI_5ErrorESQ_EE7__cloneEPNS0_6__baseIS10_EE */
/* Demangled: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalINS_6vectorIhNS_9allocatorIhEEEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS7_ISX_EEFvNSI_5ErrorESQ_EE7__cloneEPNS0_6__baseIS10_EE */
int _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalINS_6vectorIhNS_9allocatorIhEEEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS7_ISX_EEFvNSI_5ErrorESQ_EE7__cloneEPNS0_6__baseIS10_EE(void);

/* Symbol: _ZN3hwc19GraphicBufferMapper13getInterlacedEPK13native_handlePN4aidl7android8hardware8graphics6common10InterlacedE */
/* Demangled: hwc::GraphicBufferMapper::getInterlaced(native_handle const*, aidl::android::hardware::graphics::common::Interlaced*) */
int _ZN3hwc19GraphicBufferMapper13getInterlacedEPK13native_handlePN4aidl7android8hardware8graphics6common10InterlacedE(void);

/* Symbol: _ZN11HWCMediator21layerSetSurfaceDamageEP11hwc2_devicemm10hwc_region */
/* Demangled: HWCMediator::layerSetSurfaceDamage(hwc2_device*, unsigned long, unsigned long, hwc_region) */
int _ZN11HWCMediator21layerSetSurfaceDamageEP11hwc2_devicemm10hwc_region(void);

/* Symbol: _ZN13LayerComposerD0Ev */
/* Demangled: LayerComposer::~LayerComposer() */
int _ZN13LayerComposerD0Ev(void);

/* Symbol: _ZN18AsyncBliterHandler12cancelMirrorEP13DispatcherJob */
/* Demangled: AsyncBliterHandler::cancelMirror(DispatcherJob*) */
int _ZN18AsyncBliterHandler12cancelMirrorEP13DispatcherJob(void);

/* Symbol: _ZN14PlatformCommon14PlatformConfigC1Ev */
/* Demangled: PlatformCommon::PlatformConfig::PlatformConfig() */
int _ZN14PlatformCommon14PlatformConfigC1Ev(void);

/* Symbol: _ZN14DisplayManager18compareDisplaySizeEm */
/* Demangled: DisplayManager::compareDisplaySize(unsigned long) */
int _ZN14DisplayManager18compareDisplaySizeEm(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueuejEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char const*, DisplayBufferQueue*, unsigned int>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, DisplayBufferQueue*, unsigned int) */
int _ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueuejEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN11SessionInfoC2Ev */
/* Demangled: SessionInfo::SessionInfo() */
int _ZN11SessionInfoC2Ev(void);

/* Symbol: HWC2_COMPOSITION_SOLID_COLOR_STR */
/* Demangled: HWC2_COMPOSITION_SOLID_COLOR_STR */
extern void* HWC2_COMPOSITION_SOLID_COLOR_STR;

/* Symbol: _ZN9MmBufDump23convertHalFmt2MmDumpFmtEj */
/* Demangled: MmBufDump::convertHalFmt2MmDumpFmt(unsigned int) */
int _ZN9MmBufDump23convertHalFmt2MmDumpFmtEj(void);

/* Symbol: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common9Smpte2086EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EEclEOS12_SS_ */
/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common9Smpte2086EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EEclEOS12_SS_ */
int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common9Smpte2086EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EEclEOS12_SS_(void);

/* Symbol: _ZN14DispatchThread10onFirstRefEv */
/* Demangled: DispatchThread::onFirstRef() */
int _ZN14DispatchThread10onFirstRefEv(void);

/* Symbol: _ZTVN7android10SWWatchDogE */
/* Demangled: vtable for android::SWWatchDog */
extern void* _ZTVN7android10SWWatchDogE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeImN7android2spI8HWCLayerEEEENS_19__map_value_compareImS6_NS_4lessImEELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned long, android::sp<HWCLayer> >, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, android::sp<HWCLayer> >, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, android::sp<HWCLayer> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned long, android::sp<HWCLayer> >, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeImN7android2spI8HWCLayerEEEENS_19__map_value_compareImS6_NS_4lessImEELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE(void);

/* Symbol: _ZN9MmBufDumpD2Ev */
/* Demangled: MmBufDump::~MmBufDump() */
int _ZN9MmBufDumpD2Ev(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcijEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, int, unsigned int>(unsigned int const&, unsigned char const&, char const*, char const*, int, unsigned int) */
int _ZN9DbgLoggerC2IJPKcijEEERKjRKhS2_DpT_(void);

/* Symbol: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS8_ISX_EEFvNSI_5ErrorESQ_EEclEOSZ_SQ_ */
/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS8_ISX_EEFvNSI_5ErrorESQ_EEclEOSZ_SQ_ */
int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS8_ISX_EEFvNSI_5ErrorESQ_EEclEOSZ_SQ_(void);

/* Symbol: _ZN11HWCMediator24displaySetColorTransformEP11hwc2_devicemPKfi */
/* Demangled: HWCMediator::displaySetColorTransform(hwc2_device*, unsigned long, float const*, int) */
int _ZN11HWCMediator24displaySetColorTransformEP11hwc2_devicemPKfi(void);

/* Symbol: _ZN8HWCLayer12setDataspaceERKi */
/* Demangled: HWCLayer::setDataspace(int const&) */
int _ZN8HWCLayer12setDataspaceERKi(void);

/* Symbol: _ZN20RefreshRequestThread10threadLoopEv */
/* Demangled: RefreshRequestThread::threadLoop() */
int _ZN20RefreshRequestThread10threadLoopEv(void);

/* Symbol: _ZTT10IdleThread */
/* Demangled: VTT for IdleThread */
extern void* _ZTT10IdleThread;

/* Symbol: _ZN12LayerHandlerD2Ev */
/* Demangled: LayerHandler::~LayerHandler() */
int _ZN12LayerHandlerD2Ev(void);

/* Symbol: _ZN14DisplayManager11setListenerERKN7android2spINS_13EventListenerEEE */
/* Demangled: DisplayManager::setListener(android::sp<DisplayManager::EventListener> const&) */
int _ZN14DisplayManager11setListenerERKN7android2spINS_13EventListenerEEE(void);

/* Symbol: _ZNK7android6VectorIPK13native_handleE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<native_handle const*>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIPK13native_handleE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN10HWCDisplay21updateGlesRangeHwTypeEv */
/* Demangled: HWCDisplay::updateGlesRangeHwType() */
int _ZN10HWCDisplay21updateGlesRangeHwTypeEv(void);

/* Symbol: _ZTV3Hrt */
/* Demangled: vtable for Hrt */
extern void* _ZTV3Hrt;

/* Symbol: _ZN10DispDevice10getRefreshEmj */
/* Demangled: DispDevice::getRefresh(unsigned long, unsigned int) */
int _ZN10DispDevice10getRefreshEmj(void);

/* Symbol: _ZN9DbgLogger12getLogStringEv */
/* Demangled: DbgLogger::getLogString() */
int _ZN9DbgLogger12getLogStringEv(void);

/* Symbol: _ZTV15DisplayListener */
/* Demangled: vtable for DisplayListener */
extern void* _ZTV15DisplayListener;

/* Symbol: _ZTV11VSyncThread */
/* Demangled: vtable for VSyncThread */
extern void* _ZTV11VSyncThread;

/* Symbol: _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EEE */
/* Demangled: _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EEE */
extern void* _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EEE;

/* Symbol: _ZGVZN10PerfHelper11getInstanceEvE7s_mutex */
/* Demangled: guard variable for PerfHelper::getInstance()::s_mutex */
extern void* _ZGVZN10PerfHelper11getInstanceEvE7s_mutex;

/* Symbol: _ZN12UEventThreadC1Ev */
/* Demangled: UEventThread::UEventThread() */
int _ZN12UEventThreadC1Ev(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmPcEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, char*>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, char*) */
int _ZN9DbgLoggerC2IJPKcmPcEEERKjRKhS2_DpT_(void);

/* Symbol: _ZZN7android15SWWatchDogTimer11getInstanceEvE6sMutex */
/* Demangled: android::SWWatchDogTimer::getInstance()::sMutex */
extern void* _ZZN7android15SWWatchDogTimer11getInstanceEvE6sMutex;

/* Symbol: _ZNK3hwc14Gralloc4Mapper24getDefaultAllocationSizeEjjijmPm */
/* Demangled: hwc::Gralloc4Mapper::getDefaultAllocationSize(unsigned int, unsigned int, int, unsigned int, unsigned long, unsigned long*) const */
int _ZNK3hwc14Gralloc4Mapper24getDefaultAllocationSizeEjjijmPm(void);

/* Symbol: _ZN11BlackBuffer11getInstanceEv */
/* Demangled: BlackBuffer::getInstance() */
int _ZN11BlackBuffer11getInstanceEv(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmPK13native_handleiP9HWCBufferEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, native_handle const*, int, HWCBuffer*>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, native_handle const*, int, HWCBuffer*) */
int _ZN9DbgLoggerC2IJPKcmPK13native_handleiP9HWCBufferEEERKjRKhS2_DpT_(void);

/* Symbol: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultImEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EE7__cloneEv */
/* Demangled: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultImEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EE7__cloneEv */
int _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultImEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EE7__cloneEv(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcS2_jEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char const*, unsigned int>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, unsigned int) */
int _ZN9DbgLoggerC2IJPKcS2_jEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN13OverlayEngine19disableOutputLockedEv */
/* Demangled: OverlayEngine::disableOutputLocked() */
int _ZN13OverlayEngine19disableOutputLockedEv(void);

/* Symbol: _ZN8HWCLayer12initValidateEv */
/* Demangled: HWCLayer::initValidate() */
int _ZN8HWCLayer12initValidateEv(void);

/* Symbol: _ZN7android10FpsCounter4dumpEPNS_7String8EPKc */
/* Demangled: android::FpsCounter::dump(android::String8*, char const*) */
int _ZN7android10FpsCounter4dumpEPNS_7String8EPKc(void);

/* Symbol: _ZN9DbgLoggerC2IJPKc22DISP_SELF_REFRESH_TYPEEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, DISP_SELF_REFRESH_TYPE>(unsigned int const&, unsigned char const&, char const*, char const*, DISP_SELF_REFRESH_TYPE) */
int _ZN9DbgLoggerC2IJPKc22DISP_SELF_REFRESH_TYPEEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN3hwc19GraphicBufferMapper27getDefaultPixelFormatFourCCEjjijmPj */
/* Demangled: hwc::GraphicBufferMapper::getDefaultPixelFormatFourCC(unsigned int, unsigned int, int, unsigned int, unsigned long, unsigned int*) */
int _ZN3hwc19GraphicBufferMapper27getDefaultPixelFormatFourCCEjjijmPj(void);

/* Symbol: _ZN9DbgLoggerC2IJPKciPcEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, int, char*>(unsigned int const&, unsigned char const&, char const*, char const*, int, char*) */
int _ZN9DbgLoggerC2IJPKciPcEEERKjRKhS2_DpT_(void);

/* Symbol: g_uevent_thread */
/* Demangled: g_uevent_thread */
extern void* g_uevent_thread;

/* Symbol: _ZN11BlackBuffer9setSecureEv */
/* Demangled: BlackBuffer::setSecure() */
int _ZN11BlackBuffer9setSecureEv(void);

/* Symbol: _ZN13LayerComposerC1EmRKN7android2spI13OverlayEngineEE */
/* Demangled: LayerComposer::LayerComposer(unsigned long, android::sp<OverlayEngine> const&) */
int _ZN13LayerComposerC1EmRKN7android2spI13OverlayEngineEE(void);

/* Symbol: _ZN10DispDevice19isDisplayHrtSupportEv */
/* Demangled: DispDevice::isDisplayHrtSupport() */
int _ZN10DispDevice19isDisplayHrtSupportEv(void);

/* Symbol: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common9Smpte2086EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EE7__cloneEPNS0_6__baseIS13_EE */
/* Demangled: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common9Smpte2086EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EE7__cloneEPNS0_6__baseIS13_EE */
int _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common9Smpte2086EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EE7__cloneEPNS0_6__baseIS13_EE(void);

/* Symbol: _ZTV8Platform */
/* Demangled: vtable for Platform */
extern void* _ZTV8Platform;

/* Symbol: _ZN8HWCLayer17setAcquireFenceFdERKi */
/* Demangled: HWCLayer::setAcquireFenceFd(int const&) */
int _ZN8HWCLayer17setAcquireFenceFdERKi(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeImN13HWCDispatcher13WorkerCluster12PrevHwcLayerEEENS_22__unordered_map_hasherImS5_NS_4hashImEELb1EEENS_21__unordered_map_equalImS5_NS_8equal_toImEELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsImJRKNS_21piecewise_construct_tENS_5tupleIJRKmEEENSL_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS5_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, HWCDispatcher::WorkerCluster::PrevHwcLayer>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long, HWCDispatcher::WorkerCluster::PrevHwcLayer>, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, HWCDispatcher::WorkerCluster::PrevHwcLayer>, std::__1::hash<unsigned long>, true>, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, HWCDispatcher::WorkerCluster::PrevHwcLayer>, std::__1::equal_to<unsigned long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long, HWCDispatcher::WorkerCluster::PrevHwcLayer> > >::__emplace_unique_key_args<unsigned long, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long const&>, std::__1::tuple<> >(unsigned long const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeImN13HWCDispatcher13WorkerCluster12PrevHwcLayerEEENS_22__unordered_map_hasherImS5_NS_4hashImEELb1EEENS_21__unordered_map_equalImS5_NS_8equal_toImEELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsImJRKNS_21piecewise_construct_tENS_5tupleIJRKmEEENSL_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS5_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN11VSyncThread10initializeEbl */
/* Demangled: VSyncThread::initialize(bool, long) */
int _ZN11VSyncThread10initializeEbl(void);

/* Symbol: _ZN10HWCDisplay23checkVisibleLayerChangeERKNSt3__16vectorIN7android2spI8HWCLayerEENS0_9allocatorIS5_EEEE */
/* Demangled: HWCDisplay::checkVisibleLayerChange(std::__1::vector<android::sp<HWCLayer>, std::__1::allocator<android::sp<HWCLayer> > > const&) */
int _ZN10HWCDisplay23checkVisibleLayerChangeERKNSt3__16vectorIN7android2spI8HWCLayerEENS0_9allocatorIS5_EEEE(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmmPK13native_handleijjjbiibiiiijbbEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned long, native_handle const*, int, unsigned int, unsigned int, unsigned int, bool, int, int, bool, int, int, int, int, unsigned int, bool, bool>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned long, native_handle const*, int, unsigned int, unsigned int, unsigned int, bool, int, int, bool, int, int, int, int, unsigned int, bool, bool) */
int _ZN9DbgLoggerC2IJPKcmmPK13native_handleijjjbiibiiiijbbEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmS2_EEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, char const*>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, char const*) */
int _ZN9DbgLoggerC2IJPKcmS2_EEERKjRKhS2_DpT_(void);

/* Symbol: _ZN10HWCDisplay12afterPresentEv */
/* Demangled: HWCDisplay::afterPresent() */
int _ZN10HWCDisplay12afterPresentEv(void);

/* Symbol: _Z25usageHasCameraOrientationj */
/* Demangled: usageHasCameraOrientation(unsigned int) */
int _Z25usageHasCameraOrientationj(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcm14DP_STATUS_ENUMjP18DpAsyncBlitStream2EEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, DP_STATUS_ENUM, unsigned int, DpAsyncBlitStream2*>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, DP_STATUS_ENUM, unsigned int, DpAsyncBlitStream2*) */
int _ZN9DbgLoggerC2IJPKcm14DP_STATUS_ENUMjP18DpAsyncBlitStream2EEERKjRKhS2_DpT_(void);

/* Symbol: _ZNK7android6VectorIiE12do_constructEPvm */
/* Demangled: android::Vector<int>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIiE12do_constructEPvm(void);

/* Symbol: _ZN14DispatchThread10threadLoopEv */
/* Demangled: DispatchThread::threadLoop() */
int _ZN14DispatchThread10threadLoopEv(void);

/* Symbol: _ZN11VSyncThread10setEnabledEb */
/* Demangled: VSyncThread::setEnabled(bool) */
int _ZN11VSyncThread10setEnabledEb(void);

/* Symbol: _ZTv0_n24_N23PanelEventMonitorThreadD0Ev */
/* Demangled: virtual thunk to PanelEventMonitorThread::~PanelEventMonitorThread() */
int _ZTv0_n24_N23PanelEventMonitorThreadD0Ev(void);

/* Symbol: _ZTV14PlatformCommon */
/* Demangled: vtable for PlatformCommon */
extern void* _ZTV14PlatformCommon;

/* Symbol: _ZN15TouchHintThreadD2Ev */
/* Demangled: TouchHintThread::~TouchHintThread() */
int _ZN15TouchHintThreadD2Ev(void);

/* Symbol: _ZTV13GrallocDevice */
/* Demangled: vtable for GrallocDevice */
extern void* _ZTV13GrallocDevice;

/* Symbol: _ZTVN7android22DisplayFeatureCallbackE */
/* Demangled: vtable for android::DisplayFeatureCallback */
extern void* _ZTVN7android22DisplayFeatureCallbackE;

/* Symbol: _ZN3Hrt15queryValidLayerEv */
/* Demangled: Hrt::queryValidLayer() */
int _ZN3Hrt15queryValidLayerEv(void);

/* Symbol: _ZN7android9Transform5resetEv */
/* Demangled: android::Transform::reset() */
int _ZN7android9Transform5resetEv(void);

/* Symbol: __fe_getround */
/* Demangled: __fe_getround */
int __fe_getround(void);

/* Symbol: _ZN14DisplayManager10hotplugVirERKmRKbRKjS5_S5_ */
/* Demangled: DisplayManager::hotplugVir(unsigned long const&, bool const&, unsigned int const&, unsigned int const&, unsigned int const&) */
int _ZN14DisplayManager10hotplugVirERKmRKbRKjS5_S5_(void);

/* Symbol: _ZN20MDPFrameInfoDebugger20setJobPresentFenceFdERKjRKi */
/* Demangled: MDPFrameInfoDebugger::setJobPresentFenceFd(unsigned int const&, int const&) */
int _ZN20MDPFrameInfoDebugger20setJobPresentFenceFdERKjRKi(void);

/* Symbol: _ZN10DispDevice20disableOverlayOutputEm */
/* Demangled: DispDevice::disableOverlayOutput(unsigned long) */
int _ZN10DispDevice20disableOverlayOutputEm(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeImNS_10shared_ptrIN7android9WDTAnchorEEEEENS_19__map_value_compareImS6_NS_4lessImEELb1EEENS_9allocatorIS6_EEE5eraseENS_21__tree_const_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned long, std::__1::shared_ptr<android::WDTAnchor> >, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, std::__1::shared_ptr<android::WDTAnchor> >, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, std::__1::shared_ptr<android::WDTAnchor> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned long, std::__1::shared_ptr<android::WDTAnchor> >, std::__1::__tree_node<std::__1::__value_type<unsigned long, std::__1::shared_ptr<android::WDTAnchor> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeImNS_10shared_ptrIN7android9WDTAnchorEEEEENS_19__map_value_compareImS6_NS_4lessImEELb1EEENS_9allocatorIS6_EEE5eraseENS_21__tree_const_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEE(void);

/* Symbol: _ZN13OverlayEngine12disableInputEj */
/* Demangled: OverlayEngine::disableInput(unsigned int) */
int _ZN13OverlayEngine12disableInputEj(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIPK13native_handleP15AHardwareBufferEENS_19__map_value_compareIS4_S7_NS_4lessIS4_EELb1EEENS_9allocatorIS7_EEE7destroyEPNS_11__tree_nodeIS7_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<native_handle const*, AHardwareBuffer*>, std::__1::__map_value_compare<native_handle const*, std::__1::__value_type<native_handle const*, AHardwareBuffer*>, std::__1::less<native_handle const*>, true>, std::__1::allocator<std::__1::__value_type<native_handle const*, AHardwareBuffer*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<native_handle const*, AHardwareBuffer*>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIPK13native_handleP15AHardwareBufferEENS_19__map_value_compareIS4_S7_NS_4lessIS4_EELb1EEENS_9allocatorIS7_EEE7destroyEPNS_11__tree_nodeIS7_PvEE(void);

/* Symbol: _ZNK7android10SWWatchDog12getThresholdEv */
/* Demangled: android::SWWatchDog::getThreshold() const */
int _ZNK7android10SWWatchDog12getThresholdEv(void);

/* Symbol: _ZN3hwc19GraphicBufferMapper14lockAsyncYCbCrEPK13native_handlejRKNS_4RectEP13android_ycbcri */
/* Demangled: hwc::GraphicBufferMapper::lockAsyncYCbCr(native_handle const*, unsigned int, hwc::Rect const&, android_ycbcr*, int) */
int _ZN3hwc19GraphicBufferMapper14lockAsyncYCbCrEPK13native_handlejRKNS_4RectEP13android_ycbcri(void);

/* Symbol: _ZN11HWCMediator14layerSetBufferEP11hwc2_devicemmPK13native_handlei */
/* Demangled: HWCMediator::layerSetBuffer(hwc2_device*, unsigned long, unsigned long, native_handle const*, int) */
int _ZN11HWCMediator14layerSetBufferEP11hwc2_devicemmPK13native_handlei(void);

/* Symbol: _ZNK7android6VectorIP13DispatcherJobE10do_destroyEPvm */
/* Demangled: android::Vector<DispatcherJob*>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIP13DispatcherJobE10do_destroyEPvm(void);

/* Symbol: _ZN18AsyncBliterHandler19setOverlayPortParamEjRK16OverlayPortParam */
/* Demangled: AsyncBliterHandler::setOverlayPortParam(unsigned int, OverlayPortParam const&) */
int _ZN18AsyncBliterHandler19setOverlayPortParamEjRK16OverlayPortParam(void);

/* Symbol: _ZNK8HWCLayer11needScalingEv */
/* Demangled: HWCLayer::needScaling() const */
int _ZNK8HWCLayer11needScalingEv(void);

/* Symbol: _ZN13GrallocDeviceC2Ev */
/* Demangled: GrallocDevice::GrallocDevice() */
int _ZN13GrallocDeviceC2Ev(void);

/* Symbol: _ZN9IONDevice7ionMMapEimiii */
/* Demangled: IONDevice::ionMMap(int, unsigned long, int, int, int) */
int _ZN9IONDevice7ionMMapEimiii(void);

/* Symbol: _ZN13HWCDispatcherD2Ev */
/* Demangled: HWCDispatcher::~HWCDispatcher() */
int _ZN13HWCDispatcherD2Ev(void);

/* Symbol: _ZN18AsyncBliterHandlerC1EmRKN7android2spI13OverlayEngineEE */
/* Demangled: AsyncBliterHandler::AsyncBliterHandler(unsigned long, android::sp<OverlayEngine> const&) */
int _ZN18AsyncBliterHandlerC1EmRKN7android2spI13OverlayEngineEE(void);

/* Symbol: _ZN16HWVSyncEstimatorD1Ev */
/* Demangled: HWVSyncEstimator::~HWVSyncEstimator() */
int _ZN16HWVSyncEstimatorD1Ev(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcljjjEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, long, unsigned int, unsigned int, unsigned int>(unsigned int const&, unsigned char const&, char const*, char const*, long, unsigned int, unsigned int, unsigned int) */
int _ZN9DbgLoggerC2IJPKcljjjEEERKjRKhS2_DpT_(void);

/* Symbol: _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSG_8hidl_vecIhEEPT_EST_EUlRKSS_SR_E_NSC_ISY_EEFvNSJ_5ErrorESR_EEE */
/* Demangled: _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSG_8hidl_vecIhEEPT_EST_EUlRKSS_SR_E_NSC_ISY_EEFvNSJ_5ErrorESR_EEE */
extern void* _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSG_8hidl_vecIhEEPT_EST_EUlRKSS_SR_E_NSC_ISY_EEFvNSJ_5ErrorESR_EEE;

/* Symbol: _ZNSt3__16vectorIN7android2spI14IOverlayDeviceEENS_9allocatorIS4_EEE8__appendEmRKS4_ */
/* Demangled: std::__1::vector<android::sp<IOverlayDevice>, std::__1::allocator<android::sp<IOverlayDevice> > >::__append(unsigned long, android::sp<IOverlayDevice> const&) */
int _ZNSt3__16vectorIN7android2spI14IOverlayDeviceEENS_9allocatorIS4_EEE8__appendEmRKS4_(void);

/* Symbol: _ZN13HWCDispatcher13disableMirrorERKN7android2spI10HWCDisplayEEP13DispatcherJob */
/* Demangled: HWCDispatcher::disableMirror(android::sp<HWCDisplay> const&, DispatcherJob*) */
int _ZN13HWCDispatcher13disableMirrorERKN7android2spI10HWCDisplayEEP13DispatcherJob(void);

/* Symbol: _ZNK7android6VectorINS_12SortedVectorINS_2spI16HWCVSyncListenerEEEEE12do_constructEPvm */
/* Demangled: android::Vector<android::SortedVector<android::sp<HWCVSyncListener> > >::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorINS_12SortedVectorINS_2spI16HWCVSyncListenerEEEEE12do_constructEPvm(void);

/* Symbol: _ZN9SyncFenceD2Ev */
/* Demangled: SyncFence::~SyncFence() */
int _ZN9SyncFenceD2Ev(void);

/* Symbol: _ZN18AsyncBliterHandler9fillWhiteEPK13native_handleP13PrivateHandlePiP6MdpJob */
/* Demangled: AsyncBliterHandler::fillWhite(native_handle const*, PrivateHandle*, int*, MdpJob*) */
int _ZN18AsyncBliterHandler9fillWhiteEPK13native_handleP13PrivateHandlePiP6MdpJob(void);

/* Symbol: HWC2_COMPOSITION_CURSOR_STR */
/* Demangled: HWC2_COMPOSITION_CURSOR_STR */
extern void* HWC2_COMPOSITION_CURSOR_STR;

/* Symbol: _ZN14DisplayManager14resentCallbackEv */
/* Demangled: DisplayManager::resentCallback() */
int _ZN14DisplayManager14resentCallbackEv(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void);

/* Symbol: _ZN15DisplayListener9onRefreshEmj */
/* Demangled: DisplayListener::onRefresh(unsigned long, unsigned int) */
int _ZN15DisplayListener9onRefreshEmj(void);

/* Symbol: _ZN9DbgLoggerC2IJjjEEERKjRKhPKcDpT_ */
/* Demangled: DbgLogger::DbgLogger<unsigned int, unsigned int>(unsigned int const&, unsigned char const&, char const*, unsigned int, unsigned int) */
int _ZN9DbgLoggerC2IJjjEEERKjRKhPKcDpT_(void);

/* Symbol: _ZN10DispDevice21isDispAodForceDisableEv */
/* Demangled: DispDevice::isDispAodForceDisable() */
int _ZN10DispDevice21isDispAodForceDisableEv(void);

/* Symbol: _ZN13AbortMessagerD2Ev */
/* Demangled: AbortMessager::~AbortMessager() */
int _ZN13AbortMessagerD2Ev(void);

/* Symbol: _ZN3hwc19GraphicBufferMapper15getChromaSitingEPK13native_handlePN4aidl7android8hardware8graphics6common14ExtendableTypeE */
/* Demangled: hwc::GraphicBufferMapper::getChromaSiting(native_handle const*, aidl::android::hardware::graphics::common::ExtendableType*) */
int _ZN3hwc19GraphicBufferMapper15getChromaSitingEPK13native_handlePN4aidl7android8hardware8graphics6common14ExtendableTypeE(void);

/* Symbol: _ZN20RefreshRequestThreadD0Ev */
/* Demangled: RefreshRequestThread::~RefreshRequestThread() */
int _ZN20RefreshRequestThreadD0Ev(void);

/* Symbol: _ZN16FrameOverlayInfoC1Ev */
/* Demangled: FrameOverlayInfo::FrameOverlayInfo() */
int _ZN16FrameOverlayInfoC1Ev(void);

/* Symbol: _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getImEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EEE */
/* Demangled: _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getImEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EEE */
extern void* _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getImEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EEE;

/* Symbol: _ZN15TouchHintThread10initializeEv */
/* Demangled: TouchHintThread::initialize() */
int _ZN15TouchHintThread10initializeEv(void);

/* Symbol: _ZN9SyncFence4dumpEi */
/* Demangled: SyncFence::dump(int) */
int _ZN9SyncFence4dumpEi(void);

/* Symbol: _ZN15AsyncBlitDevice21getOverlaySessionInfoEmP11SessionInfo */
/* Demangled: AsyncBlitDevice::getOverlaySessionInfo(unsigned long, SessionInfo*) */
int _ZN15AsyncBlitDevice21getOverlaySessionInfoEmP11SessionInfo(void);

/* Symbol: _ZN13HWCDispatcher18configMirrorOutputEP13DispatcherJobRKi */
/* Demangled: HWCDispatcher::configMirrorOutput(DispatcherJob*, int const&) */
int _ZN13HWCDispatcher18configMirrorOutputEP13DispatcherJobRKi(void);

/* Symbol: _ZN16HWVSyncEstimator31getLastSignaledPresentFenceTimeEv */
/* Demangled: HWVSyncEstimator::getLastSignaledPresentFenceTime() */
int _ZN16HWVSyncEstimator31getLastSignaledPresentFenceTimeEv(void);

/* Symbol: HWC2_PRESENT_VALI_STATE_UNKNOWN_STR */
/* Demangled: HWC2_PRESENT_VALI_STATE_UNKNOWN_STR */
extern void* HWC2_PRESENT_VALI_STATE_UNKNOWN_STR;

/* Symbol: _ZN10DispDevice21disableDisplayFeatureEj */
/* Demangled: DispDevice::disableDisplayFeature(unsigned int) */
int _ZN10DispDevice21disableDisplayFeatureEj(void);

/* Symbol: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIjEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EE7__cloneEv */
/* Demangled: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIjEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EE7__cloneEv */
int _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIjEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EE7__cloneEv(void);

/* Symbol: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9BlendModeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE7destroyEv */
/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9BlendModeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE7destroyEv */
int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9BlendModeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE7destroyEv(void);

/* Symbol: _ZN3hwc19GraphicBufferMapper22getDefaultChromaSitingEjjijmPN4aidl7android8hardware8graphics6common14ExtendableTypeE */
/* Demangled: hwc::GraphicBufferMapper::getDefaultChromaSiting(unsigned int, unsigned int, int, unsigned int, unsigned long, aidl::android::hardware::graphics::common::ExtendableType*) */
int _ZN3hwc19GraphicBufferMapper22getDefaultChromaSitingEjjijmPN4aidl7android8hardware8graphics6common14ExtendableTypeE(void);

/* Symbol: _ZN13DispatcherJobD0Ev */
/* Demangled: DispatcherJob::~DispatcherJob() */
int _ZN13DispatcherJobD0Ev(void);

/* Symbol: _ZN18DisplayBufferQueueD2Ev */
/* Demangled: DisplayBufferQueue::~DisplayBufferQueue() */
int _ZN18DisplayBufferQueueD2Ev(void);

/* Symbol: _ZN15AsyncBlitDevice21getSupportedColorModeEv */
/* Demangled: AsyncBlitDevice::getSupportedColorMode() */
int _ZN15AsyncBlitDevice21getSupportedColorModeEv(void);

/* Symbol: _ZN8HWCLayer21setPrevReleaseFenceFdERKiRKb */
/* Demangled: HWCLayer::setPrevReleaseFenceFd(int const&, bool const&) */
int _ZN8HWCLayer21setPrevReleaseFenceFdERKiRKb(void);

/* Symbol: _ZNK3hwc14Gralloc4Mapper6unlockEPK13native_handle */
/* Demangled: hwc::Gralloc4Mapper::unlock(native_handle const*) const */
int _ZNK3hwc14Gralloc4Mapper6unlockEPK13native_handle(void);

/* Symbol: _ZN18AsyncBliterHandler9fillBlackEPK13native_handleP13PrivateHandlePiP6MdpJob */
/* Demangled: AsyncBliterHandler::fillBlack(native_handle const*, PrivateHandle*, int*, MdpJob*) */
int _ZN18AsyncBliterHandler9fillBlackEPK13native_handleP13PrivateHandlePiP6MdpJob(void);

/* Symbol: _ZN9IPqDeviceD2Ev */
/* Demangled: IPqDevice::~IPqDevice() */
int _ZN9IPqDeviceD2Ev(void);

/* Symbol: _ZN3Hrt13fillDispLayerERKNSt3__16vectorIN7android2spI10HWCDisplayEENS0_9allocatorIS5_EEEE */
/* Demangled: Hrt::fillDispLayer(std::__1::vector<android::sp<HWCDisplay>, std::__1::allocator<android::sp<HWCDisplay> > > const&) */
int _ZN3Hrt13fillDispLayerERKNSt3__16vectorIN7android2spI10HWCDisplayEENS0_9allocatorIS5_EEEE(void);

/* Symbol: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common9Smpte2086EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EE7destroyEv */
/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common9Smpte2086EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EE7destroyEv */
int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common9Smpte2086EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EE7destroyEv(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmjiiEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned int, int, int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned int, int, int) */
int _ZN9DbgLoggerC2IJPKcmjiiEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN15AsyncBlitDevice9getHeightEmj */
/* Demangled: AsyncBlitDevice::getHeight(unsigned long, unsigned int) */
int _ZN15AsyncBlitDevice9getHeightEmj(void);

/* Symbol: _ZN10HWCDisplayC2ERKmRKi */
/* Demangled: HWCDisplay::HWCDisplay(unsigned long const&, int const&) */
int _ZN10HWCDisplayC2ERKmRKi(void);

/* Symbol: _ZN10DispDevice26prepareOverlayPresentFenceEmP19OverlayPrepareParam */
/* Demangled: DispDevice::prepareOverlayPresentFence(unsigned long, OverlayPrepareParam*) */
int _ZN10DispDevice26prepareOverlayPresentFenceEmP19OverlayPrepareParam(void);

/* Symbol: _ZN13HWCDispatcher11PostHandlerD2Ev */
/* Demangled: HWCDispatcher::PostHandler::~PostHandler() */
int _ZN13HWCDispatcher11PostHandlerD2Ev(void);

/* Symbol: _ZTVN7android6VectorIPN13OverlayEngine12OverlayInputEEE */
/* Demangled: vtable for android::Vector<OverlayEngine::OverlayInput*> */
extern void* _ZTVN7android6VectorIPN13OverlayEngine12OverlayInputEEE;

/* Symbol: _ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueuejjjmEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char const*, DisplayBufferQueue*, unsigned int, unsigned int, unsigned int, unsigned long>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, DisplayBufferQueue*, unsigned int, unsigned int, unsigned int, unsigned long) */
int _ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueuejjjmEEERKjRKhS2_DpT_(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN10BliterNode8JobParamENS_9allocatorIS2_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<BliterNode::JobParam, std::__1::allocator<BliterNode::JobParam> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN10BliterNode8JobParamENS_9allocatorIS2_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZN15AsyncBlitDevice4dumpERKmPN7android7String8E */
/* Demangled: AsyncBlitDevice::dump(unsigned long const&, android::String8*) */
int _ZN15AsyncBlitDevice4dumpERKmPN7android7String8E(void);

/* Symbol: _ZN7android17DisplayFeatureGet24getDisplayFeatureServiceEv */
/* Demangled: android::DisplayFeatureGet::getDisplayFeatureService() */
int _ZN7android17DisplayFeatureGet24getDisplayFeatureServiceEv(void);

/* Symbol: _ZNK3hwc14Gralloc4Mapper15getChromaSitingEPK13native_handlePN4aidl7android8hardware8graphics6common12ChromaSitingE */
/* Demangled: hwc::Gralloc4Mapper::getChromaSiting(native_handle const*, aidl::android::hardware::graphics::common::ChromaSiting*) const */
int _ZNK3hwc14Gralloc4Mapper15getChromaSitingEPK13native_handlePN4aidl7android8hardware8graphics6common12ChromaSitingE(void);

/* Symbol: _ZN13OverlayEngine19preparePresentFenceER19OverlayPrepareParam */
/* Demangled: OverlayEngine::preparePresentFence(OverlayPrepareParam&) */
int _ZN13OverlayEngine19preparePresentFenceER19OverlayPrepareParam(void);

/* Symbol: _ZNK7android6VectorIPK13native_handleE7do_copyEPvPKvm */
/* Demangled: android::Vector<native_handle const*>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIPK13native_handleE7do_copyEPvPKvm(void);

/* Symbol: _ZN14DisplayManager11hotplugPostEmbib */
/* Demangled: DisplayManager::hotplugPost(unsigned long, bool, int, bool) */
int _ZN14DisplayManager11hotplugPostEmbib(void);

/* Symbol: _ZN15AsyncBlitDevice20disableOverlayOutputEm */
/* Demangled: AsyncBlitDevice::disableOverlayOutput(unsigned long) */
int _ZN15AsyncBlitDevice20disableOverlayOutputEm(void);

/* Symbol: _ZN15AsyncBlitDevice8getWidthEmj */
/* Demangled: AsyncBlitDevice::getWidth(unsigned long, unsigned int) */
int _ZN15AsyncBlitDevice8getWidthEmj(void);

/* Symbol: _ZN10DispDevice18getMaxOverlayWidthEv */
/* Demangled: DispDevice::getMaxOverlayWidth() */
int _ZN10DispDevice18getMaxOverlayWidthEv(void);

/* Symbol: _ZN11WhiteBufferD2Ev */
/* Demangled: WhiteBuffer::~WhiteBuffer() */
int _ZN11WhiteBufferD2Ev(void);

/* Symbol: _ZN9DbgLoggerC2IJPKciimEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, int, int, unsigned long>(unsigned int const&, unsigned char const&, char const*, char const*, int, int, unsigned long) */
int _ZN9DbgLoggerC2IJPKciimEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN7android9Transform3setEjff */
/* Demangled: android::Transform::set(unsigned int, float, float) */
int _ZN7android9Transform3setEjff(void);

/* Symbol: __netf2 */
/* Demangled: __netf2 */
int __netf2(void);

/* Symbol: _ZTV13DispatcherJob */
/* Demangled: vtable for DispatcherJob */
extern void* _ZTV13DispatcherJob;

/* Symbol: _ZN20MDPFrameInfoDebugger20setJobAcquireFenceFdERKjRKi */
/* Demangled: MDPFrameInfoDebugger::setJobAcquireFenceFd(unsigned int const&, int const&) */
int _ZN20MDPFrameInfoDebugger20setJobAcquireFenceFdERKjRKi(void);

/* Symbol: _ZNK8HWCLayer21decideMdpOutputFormatEv */
/* Demangled: HWCLayer::decideMdpOutputFormat() const */
int _ZNK8HWCLayer21decideMdpOutputFormatEv(void);

/* Symbol: _ZN10DispDevice22getOverlayMultiConfigsEm */
/* Demangled: DispDevice::getOverlayMultiConfigs(unsigned long) */
int _ZN10DispDevice22getOverlayMultiConfigsEm(void);

/* Symbol: _ZN7android9TransformD2Ev */
/* Demangled: android::Transform::~Transform() */
int _ZN7android9TransformD2Ev(void);

/* Symbol: _ZTVN13HWCDispatcher14VirPostHandlerE */
/* Demangled: vtable for HWCDispatcher::VirPostHandler */
extern void* _ZTVN13HWCDispatcher14VirPostHandlerE;

/* Symbol: _ZN14ColorTransformC2ERKiRKbS3_ */
/* Demangled: ColorTransform::ColorTransform(int const&, bool const&, bool const&) */
int _ZN14ColorTransformC2ERKiRKbS3_(void);

/* Symbol: _ZN20MDPFrameInfoDebuggerC1Ev */
/* Demangled: MDPFrameInfoDebugger::MDPFrameInfoDebugger() */
int _ZN20MDPFrameInfoDebuggerC1Ev(void);

/* Symbol: _ZTVN3hwc14Gralloc2MapperE */
/* Demangled: vtable for hwc::Gralloc2Mapper */
extern void* _ZTVN3hwc14Gralloc2MapperE;

/* Symbol: _ZNK3hwc14Gralloc4Mapper20getPixelFormatFourCCEPK13native_handlePj */
/* Demangled: hwc::Gralloc4Mapper::getPixelFormatFourCC(native_handle const*, unsigned int*) const */
int _ZNK3hwc14Gralloc4Mapper20getPixelFormatFourCCEPK13native_handlePj(void);

/* Symbol: _ZN11BlackBuffer9getHandleEv */
/* Demangled: BlackBuffer::getHandle() */
int _ZN11BlackBuffer9getHandleEv(void);

/* Symbol: _ZN20MDPFrameInfoDebugger22setJobHWCConfigMDPTimeERKjRKl */
/* Demangled: MDPFrameInfoDebugger::setJobHWCConfigMDPTime(unsigned int const&, long const&) */
int _ZN20MDPFrameInfoDebugger22setJobHWCConfigMDPTimeERKjRKl(void);

/* Symbol: _ZN15AsyncBlitDevice21setOverlaySessionModeEm13HWC_DISP_MODE */
/* Demangled: AsyncBlitDevice::setOverlaySessionMode(unsigned long, HWC_DISP_MODE) */
int _ZN15AsyncBlitDevice21setOverlaySessionModeEm13HWC_DISP_MODE(void);

/* Symbol: _ZNK3hwc14Gralloc4Mapper11dumpBuffersEb */
/* Demangled: hwc::Gralloc4Mapper::dumpBuffers(bool) const */
int _ZNK3hwc14Gralloc4Mapper11dumpBuffersEb(void);

/* Symbol: _ZN11HWCMediator22layerStateSetDataSpaceEP11hwc2_devicemmi */
/* Demangled: HWCMediator::layerStateSetDataSpace(hwc2_device*, unsigned long, unsigned long, int) */
int _ZN11HWCMediator22layerStateSetDataSpaceEP11hwc2_devicemmi(void);

/* Symbol: _ZN13OverlayEngine13OverlayOutputC1Ev */
/* Demangled: OverlayEngine::OverlayOutput::OverlayOutput() */
int _ZN13OverlayEngine13OverlayOutputC1Ev(void);

/* Symbol: _ZN18AsyncBliterHandler15processVirBlackEP13DispatcherJob */
/* Demangled: AsyncBliterHandler::processVirBlack(DispatcherJob*) */
int _ZN18AsyncBliterHandler15processVirBlackEP13DispatcherJob(void);

/* Symbol: _ZN10BliterNode25mapDataspace2DpColorRangeEiRKb */
/* Demangled: BliterNode::mapDataspace2DpColorRange(int, bool const&) */
int _ZN10BliterNode25mapDataspace2DpColorRangeEiRKb(void);

/* Symbol: _Z15mapHdrPrimariesi */
/* Demangled: mapHdrPrimaries(int) */
int _Z15mapHdrPrimariesi(void);

/* Symbol: _ZN9IPqDevice15setGamePQHandleERKPK13native_handle */
/* Demangled: IPqDevice::setGamePQHandle(native_handle const* const&) */
int _ZN9IPqDevice15setGamePQHandleERKPK13native_handle(void);

/* Symbol: _ZN9IPqDevice22useColorTransformIoctlEi */
/* Demangled: IPqDevice::useColorTransformIoctl(int) */
int _ZN9IPqDevice22useColorTransformIoctlEi(void);

/* Symbol: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSC_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EE7__cloneEPNS0_6__baseISY_EE */
/* Demangled: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSC_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EE7__cloneEPNS0_6__baseISY_EE */
int _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSC_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EE7__cloneEPNS0_6__baseISY_EE(void);

/* Symbol: _ZN9DbgLogger6printfIJjiEEEvPKcDpT_ */
/* Demangled: void DbgLogger::printf<unsigned int, int>(char const*, unsigned int, int) */
int _ZN9DbgLogger6printfIJjiEEEvPKcDpT_(void);

/* Symbol: _ZN10IdleThreadC2Em */
/* Demangled: IdleThread::IdleThread(unsigned long) */
int _ZN10IdleThreadC2Em(void);

/* Symbol: _ZNK7android6VectorI10MdpJobInfoE8do_splatEPvPKvm */
/* Demangled: android::Vector<MdpJobInfo>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorI10MdpJobInfoE8do_splatEPvPKvm(void);

/* Symbol: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIjEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EEclEOSU_SK_ */
/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIjEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EEclEOSU_SK_ */
int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIjEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EEclEOSU_SK_(void);

/* Symbol: _ZN15AsyncBlitDevice23updateDisplayResolutionEm */
/* Demangled: AsyncBlitDevice::updateDisplayResolution(unsigned long) */
int _ZN15AsyncBlitDevice23updateDisplayResolutionEm(void);

/* Symbol: _ZN11HWCMediator20prepareForValidationEv */
/* Demangled: HWCMediator::prepareForValidation() */
int _ZN11HWCMediator20prepareForValidationEv(void);

/* Symbol: _ZN9DbgLoggerD1Ev */
/* Demangled: DbgLogger::~DbgLogger() */
int _ZN9DbgLoggerD1Ev(void);

/* Symbol: _ZN10IdleThread10setEnabledEb */
/* Demangled: IdleThread::setEnabled(bool) */
int _ZN10IdleThread10setEnabledEb(void);

/* Symbol: _ZN13HWCDispatcher9ignoreJobEmb */
/* Demangled: HWCDispatcher::ignoreJob(unsigned long, bool) */
int _ZN13HWCDispatcher9ignoreJobEmb(void);

/* Symbol: _ZN9HrtCommon11setCompTypeERKNSt3__16vectorIN7android2spI10HWCDisplayEENS0_9allocatorIS5_EEEE */
/* Demangled: HrtCommon::setCompType(std::__1::vector<android::sp<HWCDisplay>, std::__1::allocator<android::sp<HWCDisplay> > > const&) */
int _ZN9HrtCommon11setCompTypeERKNSt3__16vectorIN7android2spI10HWCDisplayEENS0_9allocatorIS5_EEEE(void);

/* Symbol: _ZN10DispDevice19isDisplayArrSupportEv */
/* Demangled: DispDevice::isDisplayArrSupport() */
int _ZN10DispDevice19isDisplayArrSupportEv(void);

/* Symbol: _ZN11HWCMediator19layerStateSetZOrderEP11hwc2_devicemmj */
/* Demangled: HWCMediator::layerStateSetZOrder(hwc2_device*, unsigned long, unsigned long, unsigned int) */
int _ZN11HWCMediator19layerStateSetZOrderEP11hwc2_devicemmj(void);

/* Symbol: _ZN9DbgLoggerC2IJPKciEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, int>(unsigned int const&, unsigned char const&, char const*, char const*, int) */
int _ZN9DbgLoggerC2IJPKciEEERKjRKhS2_DpT_(void);

/* Symbol: _ZTC10IdleThread0_9HWCThread */
/* Demangled: construction vtable for HWCThread-in-IdleThread */
extern void* _ZTC10IdleThread0_9HWCThread;

/* Symbol: _ZNK7android6VectorIP16OverlayPortParamE12do_constructEPvm */
/* Demangled: android::Vector<OverlayPortParam*>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIP16OverlayPortParamE12do_constructEPvm(void);

/* Symbol: _ZN15AsyncBlitDevice18waitRefreshRequestEPj */
/* Demangled: AsyncBlitDevice::waitRefreshRequest(unsigned int*) */
int _ZN15AsyncBlitDevice18waitRefreshRequestEPj(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmS2_liPK13native_handleEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, char const*, long, int, native_handle const*>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, char const*, long, int, native_handle const*) */
int _ZN9DbgLoggerC2IJPKcmS2_liPK13native_handleEEERKjRKhS2_DpT_(void);

/* Symbol: _ZTV10HWCDisplay */
/* Demangled: vtable for HWCDisplay */
extern void* _ZTV10HWCDisplay;

/* Symbol: _ZN9DbgLoggerC2IJPKcPK13native_handleEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, native_handle const*>(unsigned int const&, unsigned char const&, char const*, char const*, native_handle const*) */
int _ZN9DbgLoggerC2IJPKcPK13native_handleEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN11VSyncThread12setLoopAgainEv */
/* Demangled: VSyncThread::setLoopAgain() */
int _ZN11VSyncThread12setLoopAgainEv(void);

/* Symbol: _ZN14DisplayManager22getNumberPluginDisplayEv */
/* Demangled: DisplayManager::getNumberPluginDisplay() */
int _ZN14DisplayManager22getNumberPluginDisplayEv(void);

/* Symbol: _ZN10ObjectPoolI13DispatcherJobE12returnObjectEPKS0_ */
/* Demangled: ObjectPool<DispatcherJob>::returnObject(DispatcherJob const*) */
int _ZN10ObjectPoolI13DispatcherJobE12returnObjectEPKS0_(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmiPK13native_handleiiiS5_iiEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, int, native_handle const*, int, int, int, native_handle const*, int, int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, int, native_handle const*, int, int, int, native_handle const*, int, int) */
int _ZN9DbgLoggerC2IJPKcmiPK13native_handleiiiS5_iiEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN13OverlayEngine6wakeupEv */
/* Demangled: OverlayEngine::wakeup() */
int _ZN13OverlayEngine6wakeupEv(void);

/* Symbol: _ZTV12LayerHandler */
/* Demangled: vtable for LayerHandler */
extern void* _ZTV12LayerHandler;

/* Symbol: _ZTTNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: VTT for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTTNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZN9IONDevice8ionCloseEiRKb */
/* Demangled: IONDevice::ionClose(int, bool const&) */
int _ZN9IONDevice8ionCloseEiRKb(void);

/* Symbol: _ZN3hwc19GraphicBufferMapper4lockEPK13native_handlejRKNS_4RectEPPvPiS9_ */
/* Demangled: hwc::GraphicBufferMapper::lock(native_handle const*, unsigned int, hwc::Rect const&, void**, int*, int*) */
int _ZN3hwc19GraphicBufferMapper4lockEPK13native_handlejRKNS_4RectEPPvPiS9_(void);

/* Symbol: _ZN12UEventThreadD2Ev */
/* Demangled: UEventThread::~UEventThread() */
int _ZN12UEventThreadD2Ev(void);

/* Symbol: _ZN14ColorTransformC1ERKNSt3__16vectorINS1_IfNS0_9allocatorIfEEEENS2_IS4_EEEERKiRKbSC_ */
/* Demangled: ColorTransform::ColorTransform(std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > const&, int const&, bool const&, bool const&) */
int _ZN14ColorTransformC1ERKNSt3__16vectorINS1_IfNS0_9allocatorIfEEEENS2_IS4_EEEERKiRKbSC_(void);

/* Symbol: _ZN10DispDevice20prepareOverlayOutputEmP19OverlayPrepareParam */
/* Demangled: DispDevice::prepareOverlayOutput(unsigned long, OverlayPrepareParam*) */
int _ZN10DispDevice20prepareOverlayOutputEmP19OverlayPrepareParam(void);

/* Symbol: _ZN10HWCDisplay15getClientTargetEv */
/* Demangled: HWCDisplay::getClientTarget() */
int _ZN10HWCDisplay15getClientTargetEv(void);

/* Symbol: _ZN9SyncFence5mergeEiiPKc */
/* Demangled: SyncFence::merge(int, int, char const*) */
int _ZN9SyncFence5mergeEiiPKc(void);

/* Symbol: _ZN13OverlayEngineC2ERKmjj */
/* Demangled: OverlayEngine::OverlayEngine(unsigned long const&, unsigned int, unsigned int) */
int _ZN13OverlayEngineC2ERKmjj(void);

/* Symbol: _ZN9DbgLoggerC2IJmmPKcEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<unsigned long, unsigned long, char const*>(unsigned int const&, unsigned char const&, char const*, unsigned long, unsigned long, char const*) */
int _ZN9DbgLoggerC2IJmmPKcEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmS2_iiiEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, char const*, int, int, int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, char const*, int, int, int) */
int _ZN9DbgLoggerC2IJPKcmS2_iiiEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN9IONDevice11getDeviceFdEv */
/* Demangled: IONDevice::getDeviceFd() */
int _ZN9IONDevice11getDeviceFdEv(void);

/* Symbol: __unordtf2 */
/* Demangled: __unordtf2 */
int __unordtf2(void);

/* Symbol: _ZN10DispDevice13setDFPSEnableEii */
/* Demangled: DispDevice::setDFPSEnable(int, int) */
int _ZN10DispDevice13setDFPSEnableEii(void);

/* Symbol: _ZN7android9Transform8absIsOneEf */
/* Demangled: android::Transform::absIsOne(float) */
int _ZN7android9Transform8absIsOneEf(void);

/* Symbol: _ZNK7android6VectorIP9FrameInfoE12do_constructEPvm */
/* Demangled: android::Vector<FrameInfo*>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIP9FrameInfoE12do_constructEPvm(void);

/* Symbol: _ZN10DispDeviceD1Ev */
/* Demangled: DispDevice::~DispDevice() */
int _ZN10DispDeviceD1Ev(void);

/* Symbol: _ZN11HWCMediator10deviceDumpEP11hwc2_devicePjPc */
/* Demangled: HWCMediator::deviceDump(hwc2_device*, unsigned int*, char*) */
int _ZN11HWCMediator10deviceDumpEP11hwc2_devicePjPc(void);

/* Symbol: _ZN14DisplayManager11getInstanceEv */
/* Demangled: DisplayManager::getInstance() */
int _ZN14DisplayManager11getInstanceEv(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcS2_lEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char const*, long>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, long) */
int _ZN9DbgLoggerC2IJPKcS2_lEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN18DisplayBufferQueue11queueBufferEPNS_13DisplayBufferE */
/* Demangled: DisplayBufferQueue::queueBuffer(DisplayBufferQueue::DisplayBuffer*) */
int _ZN18DisplayBufferQueue11queueBufferEPNS_13DisplayBufferE(void);

/* Symbol: _ZN15AsyncBlitDevice21destroyOverlaySessionEm */
/* Demangled: AsyncBlitDevice::destroyOverlaySession(unsigned long) */
int _ZN15AsyncBlitDevice21destroyOverlaySessionEm(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcPciiEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char*, int, int>(unsigned int const&, unsigned char const&, char const*, char const*, char*, int, int) */
int _ZN9DbgLoggerC2IJPKcPciiEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN7android10SWWatchDog17DEFAULT_THRESHOLDE */
/* Demangled: android::SWWatchDog::DEFAULT_THRESHOLD */
extern void* _ZN7android10SWWatchDog17DEFAULT_THRESHOLDE;

/* Symbol: _ZN13AbortMessager8flushOutEv */
/* Demangled: AbortMessager::flushOut() */
int _ZN13AbortMessager8flushOutEv(void);

/* Symbol: _ZN9IONDeviceC2Ev */
/* Demangled: IONDevice::IONDevice() */
int _ZN9IONDeviceC2Ev(void);

/* Symbol: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSG_8hidl_vecIhEEPT_EST_EUlRKSS_SR_E_NSC_ISY_EEFvNSJ_5ErrorESR_EE7__cloneEv */
/* Demangled: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSG_8hidl_vecIhEEPT_EST_EUlRKSS_SR_E_NSC_ISY_EEFvNSJ_5ErrorESR_EE7__cloneEv */
int _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSG_8hidl_vecIhEEPT_EST_EUlRKSS_SR_E_NSC_ISY_EEFvNSJ_5ErrorESR_EE7__cloneEv(void);

/* Symbol: _ZThn296_N13OverlayEngineD1Ev */
/* Demangled: non-virtual thunk to OverlayEngine::~OverlayEngine() */
int _ZThn296_N13OverlayEngineD1Ev(void);

/* Symbol: _ZN11HWCMediatorC2Ev */
/* Demangled: HWCMediator::HWCMediator() */
int _ZN11HWCMediatorC2Ev(void);

/* Symbol: _ZN20MDPFrameInfoDebugger9insertJobERKj */
/* Demangled: MDPFrameInfoDebugger::insertJob(unsigned int const&) */
int _ZN20MDPFrameInfoDebugger9insertJobERKj(void);

/* Symbol: _ZTVN7android6VectorIPK13native_handleEE */
/* Demangled: vtable for android::Vector<native_handle const*> */
extern void* _ZTVN7android6VectorIPK13native_handleEE;

/* Symbol: _ZTC20RefreshRequestThread0_N7android6ThreadE */
/* Demangled: construction vtable for android::Thread-in-RefreshRequestThread */
extern void* _ZTC20RefreshRequestThread0_N7android6ThreadE;

/* Symbol: HWC_COMPOSITION_FILE_HWC_STR */
/* Demangled: HWC_COMPOSITION_FILE_HWC_STR */
extern void* HWC_COMPOSITION_FILE_HWC_STR;

/* Symbol: _ZNK10HWCDisplay9getSecureEv */
/* Demangled: HWCDisplay::getSecure() const */
int _ZNK10HWCDisplay9getSecureEv(void);

/* Symbol: _Z13getCompStringRKi */
/* Demangled: getCompString(int const&) */
int _Z13getCompStringRKi(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmbEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, bool>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, bool) */
int _ZN9DbgLoggerC2IJPKcmbEEERKjRKhS2_DpT_(void);

/* Symbol: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common9Smpte2086EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EE18destroy_deallocateEv */
/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common9Smpte2086EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EE18destroy_deallocateEv */
int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common9Smpte2086EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EE18destroy_deallocateEv(void);

/* Symbol: _ZTV13LayerComposer */
/* Demangled: vtable for LayerComposer */
extern void* _ZTV13LayerComposer;

/* Symbol: _ZN9DbgLoggerC2IJPKcbjbjijbjbjijiiiiiiiiEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, bool, unsigned int, bool, unsigned int, int, unsigned int, bool, unsigned int, bool, unsigned int, int, unsigned int, int, int, int, int, int, int, int, int>(unsigned int const&, unsigned char const&, char const*, char const*, bool, unsigned int, bool, unsigned int, int, unsigned int, bool, unsigned int, bool, unsigned int, int, unsigned int, int, int, int, int, int, int, int, int) */
int _ZN9DbgLoggerC2IJPKcbjbjijbjbjijiiiiiiiiEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN3hwc13GrallocMapperD2Ev */
/* Demangled: hwc::GrallocMapper::~GrallocMapper() */
int _ZN3hwc13GrallocMapperD2Ev(void);

/* Symbol: _ZN23PanelEventMonitorThreadC2Ev */
/* Demangled: PanelEventMonitorThread::PanelEventMonitorThread() */
int _ZN23PanelEventMonitorThreadC2Ev(void);

/* Symbol: _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE16_NS_13basic_ostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE16_NS_13basic_ostreamIcS2_EE;

/* Symbol: _ZN10DispDevice24getAvailableOverlayInputEm */
/* Demangled: DispDevice::getAvailableOverlayInput(unsigned long) */
int _ZN10DispDevice24getAvailableOverlayInputEm(void);

/* Symbol: _ZNK3hwc14Gralloc4Mapper12getSmpte2086EPK13native_handlePNSt3__18optionalIN4aidl7android8hardware8graphics6common9Smpte2086EEE */
/* Demangled: hwc::Gralloc4Mapper::getSmpte2086(native_handle const*, std::__1::optional<aidl::android::hardware::graphics::common::Smpte2086>*) const */
int _ZNK3hwc14Gralloc4Mapper12getSmpte2086EPK13native_handlePNSt3__18optionalIN4aidl7android8hardware8graphics6common9Smpte2086EEE(void);

/* Symbol: _ZN13OverlayEngine16ignoreAvGroupingERKb */
/* Demangled: OverlayEngine::ignoreAvGrouping(bool const&) */
int _ZN13OverlayEngine16ignoreAvGroupingERKb(void);

/* Symbol: _ZNK7android6VectorIPN13OverlayEngine12OverlayInputEE7do_copyEPvPKvm */
/* Demangled: android::Vector<OverlayEngine::OverlayInput*>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIPN13OverlayEngine12OverlayInputEE7do_copyEPvPKvm(void);

/* Symbol: _ZTC13OverlayEngine296_16HWCVSyncListener */
/* Demangled: construction vtable for HWCVSyncListener-in-OverlayEngine */
extern void* _ZTC13OverlayEngine296_16HWCVSyncListener;

/* Symbol: _ZN11HWCMediator27layerStateSetSidebandStreamEP11hwc2_devicemmPK13native_handle */
/* Demangled: HWCMediator::layerStateSetSidebandStream(hwc2_device*, unsigned long, unsigned long, native_handle const*) */
int _ZN11HWCMediator27layerStateSetSidebandStreamEP11hwc2_devicemmPK13native_handle(void);

/* Symbol: _ZN18DisplayBufferQueue10reallocateEj */
/* Demangled: DisplayBufferQueue::reallocate(unsigned int) */
int _ZN18DisplayBufferQueue10reallocateEj(void);

/* Symbol: _ZN15AsyncBlitDeviceC2Ev */
/* Demangled: AsyncBlitDevice::AsyncBlitDevice() */
int _ZN15AsyncBlitDeviceC2Ev(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcS2_iS2_EEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char const*, int, char const*>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, int, char const*) */
int _ZN9DbgLoggerC2IJPKcS2_iS2_EEERKjRKhS2_DpT_(void);

/* Symbol: _ZNK7android6VectorIPK13native_handleE12do_constructEPvm */
/* Demangled: android::Vector<native_handle const*>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIPK13native_handleE12do_constructEPvm(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmjiiiPK13native_handleEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned int, int, int, int, native_handle const*>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned int, int, int, int, native_handle const*) */
int _ZN9DbgLoggerC2IJPKcmjiiiPK13native_handleEEERKjRKhS2_DpT_(void);

/* Symbol: _ZTV11HWCMediator */
/* Demangled: vtable for HWCMediator */
extern void* _ZTV11HWCMediator;

/* Symbol: _ZN10BliterNode27getHWCExpectMDPFinishedTimeEP7timevalRKjRKlRKb */
/* Demangled: BliterNode::getHWCExpectMDPFinishedTime(timeval*, unsigned int const&, long const&, bool const&) */
int _ZN10BliterNode27getHWCExpectMDPFinishedTimeEP7timevalRKjRKlRKb(void);

/* Symbol: _ZN15AsyncBlitDevice21getMaxOverlayInputNumEv */
/* Demangled: AsyncBlitDevice::getMaxOverlayInputNum() */
int _ZN15AsyncBlitDevice21getMaxOverlayInputNumEv(void);

/* Symbol: _ZN9IONDevice9ionImportERKiPiPKc */
/* Demangled: IONDevice::ionImport(int const&, int*, char const*) */
int _ZN9IONDevice9ionImportERKiPiPKc(void);

/* Symbol: _ZN9HWCBuffer18setupPrivateHandleEv */
/* Demangled: HWCBuffer::setupPrivateHandle() */
int _ZN9HWCBuffer18setupPrivateHandleEv(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcjEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned int) */
int _ZN9DbgLoggerC2IJPKcjEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN3hwc19GraphicBufferMapper8getWidthEPK13native_handlePm */
/* Demangled: hwc::GraphicBufferMapper::getWidth(native_handle const*, unsigned long*) */
int _ZN3hwc19GraphicBufferMapper8getWidthEPK13native_handlePm(void);

/* Symbol: _Z15checkMirrorPathRKNSt3__16vectorIN7android2spI10HWCDisplayEENS_9allocatorIS4_EEEE */
/* Demangled: checkMirrorPath(std::__1::vector<android::sp<HWCDisplay>, std::__1::allocator<android::sp<HWCDisplay> > > const&) */
int _Z15checkMirrorPathRKNSt3__16vectorIN7android2spI10HWCDisplayEENS_9allocatorIS4_EEEE(void);

/* Symbol: _ZN11HWCMediator23displayGetHdrCapabilityEP11hwc2_devicemPjPiPfS4_S4_ */
/* Demangled: HWCMediator::displayGetHdrCapability(hwc2_device*, unsigned long, unsigned int*, int*, float*, float*, float*) */
int _ZN11HWCMediator23displayGetHdrCapabilityEP11hwc2_devicemPjPiPfS4_S4_(void);

/* Symbol: _ZTVN7android12SortedVectorINS_2spI16HWCVSyncListenerEEEE */
/* Demangled: vtable for android::SortedVector<android::sp<HWCVSyncListener> > */
extern void* _ZTVN7android12SortedVectorINS_2spI16HWCVSyncListenerEEEE;

/* Symbol: _ZNK7android6VectorIP9FrameInfoE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<FrameInfo*>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIP9FrameInfoE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void);

/* Symbol: _ZNK7android9Transform9transformERKNS_7details5TVec2IfEE */
/* Demangled: android::Transform::transform(android::details::TVec2<float> const&) const */
int _ZNK7android9Transform9transformERKNS_7details5TVec2IfEE(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmibEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, int, bool>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, int, bool) */
int _ZN9DbgLoggerC2IJPKcmibEEERKjRKhS2_DpT_(void);

/* Symbol: _ZNSt3__16vectorIN13HWCDispatcher13WorkerCluster11PrevHwLayerENS_9allocatorIS3_EEE8__appendEm */
/* Demangled: std::__1::vector<HWCDispatcher::WorkerCluster::PrevHwLayer, std::__1::allocator<HWCDispatcher::WorkerCluster::PrevHwLayer> >::__append(unsigned long) */
int _ZNSt3__16vectorIN13HWCDispatcher13WorkerCluster11PrevHwLayerENS_9allocatorIS3_EEE8__appendEm(void);

/* Symbol: _ZN16FrameOverlayInfoD2Ev */
/* Demangled: FrameOverlayInfo::~FrameOverlayInfo() */
int _ZN16FrameOverlayInfoD2Ev(void);

/* Symbol: _ZN14PqDeviceLegacy25setColorTransformViaIoctlEPKfRKi */
/* Demangled: PqDeviceLegacy::setColorTransformViaIoctl(float const*, int const&) */
int _ZN14PqDeviceLegacy25setColorTransformViaIoctlEPKfRKi(void);

/* Symbol: _ZN7android9TransformC1ERKS0_ */
/* Demangled: android::Transform::Transform(android::Transform const&) */
int _ZN7android9TransformC1ERKS0_(void);

/* Symbol: _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9BlendModeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EEE */
/* Demangled: _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9BlendModeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EEE */
extern void* _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9BlendModeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EEE;

/* Symbol: _ZN13HWCDispatcher13WorkerClusterD1Ev */
/* Demangled: HWCDispatcher::WorkerCluster::~WorkerCluster() */
int _ZN13HWCDispatcher13WorkerClusterD1Ev(void);

/* Symbol: _ZN10HWCDisplay22getClientTargetSupportERKjS1_RKiS3_ */
/* Demangled: HWCDisplay::getClientTargetSupport(unsigned int const&, unsigned int const&, int const&, int const&) */
int _ZN10HWCDisplay22getClientTargetSupportERKjS1_RKiS3_(void);

/* Symbol: _ZN10HWCDisplay26removePendingRemovedLayersEv */
/* Demangled: HWCDisplay::removePendingRemovedLayers() */
int _ZN10HWCDisplay26removePendingRemovedLayersEv(void);

/* Symbol: _ZN3hwc19GraphicBufferMapper11getInstanceEv */
/* Demangled: hwc::GraphicBufferMapper::getInstance() */
int _ZN3hwc19GraphicBufferMapper11getInstanceEv(void);

/* Symbol: _ZN10BliterNode10invalidateERKjS1_S1_ */
/* Demangled: BliterNode::invalidate(unsigned int const&, unsigned int const&, unsigned int const&) */
int _ZN10BliterNode10invalidateERKjS1_S1_(void);

/* Symbol: _ZZN10PerfHelper11getInstanceEvE10s_instance */
/* Demangled: PerfHelper::getInstance()::s_instance */
extern void* _ZZN10PerfHelper11getInstanceEvE10s_instance;

/* Symbol: _ZN10HWCDisplay11createLayerEPmRKb */
/* Demangled: HWCDisplay::createLayer(unsigned long*, bool const&) */
int _ZN10HWCDisplay11createLayerEPmRKb(void);

/* Symbol: _ZN14DispatchThread7dropJobEv */
/* Demangled: DispatchThread::dropJob() */
int _ZN14DispatchThread7dropJobEv(void);

/* Symbol: _ZN11VSyncThreadD1Ev */
/* Demangled: VSyncThread::~VSyncThread() */
int _ZN11VSyncThreadD1Ev(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmblEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, bool, long>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, bool, long) */
int _ZN9DbgLoggerC2IJPKcmblEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN13OverlayEngine16waitOverlayFenceEP16FrameOverlayInfo */
/* Demangled: OverlayEngine::waitOverlayFence(FrameOverlayInfo*) */
int _ZN13OverlayEngine16waitOverlayFenceEP16FrameOverlayInfo(void);

/* Symbol: _Z12setPQEnhanceRKmRK13PrivateHandlePjRKb */
/* Demangled: setPQEnhance(unsigned long const&, PrivateHandle const&, unsigned int*, bool const&) */
int _Z12setPQEnhanceRKmRK13PrivateHandlePjRKb(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN10BliterNode8JobParamEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSM_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<BliterNode::JobParam> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<BliterNode::JobParam> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<BliterNode::JobParam> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<BliterNode::JobParam> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<BliterNode::JobParam> > > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>&&, std::__1::tuple<>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN10BliterNode8JobParamEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSM_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZTV14PqDeviceLegacy */
/* Demangled: vtable for PqDeviceLegacy */
extern void* _ZTV14PqDeviceLegacy;

/* Symbol: _ZN13OverlayEngine12prepareInputER19OverlayPrepareParam */
/* Demangled: OverlayEngine::prepareInput(OverlayPrepareParam&) */
int _ZN13OverlayEngine12prepareInputER19OverlayPrepareParam(void);

/* Symbol: _ZNK3hwc14Gralloc4Mapper10dumpBufferEPK13native_handleb */
/* Demangled: hwc::Gralloc4Mapper::dumpBuffer(native_handle const*, bool) const */
int _ZNK3hwc14Gralloc4Mapper10dumpBufferEPK13native_handleb(void);

/* Symbol: _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS8_ISX_EEFvNSI_5ErrorESQ_EEE */
/* Demangled: _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS8_ISX_EEFvNSI_5ErrorESQ_EEE */
extern void* _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS8_ISX_EEFvNSI_5ErrorESQ_EEE;

/* Symbol: _ZTVN13HWCDispatcher11PostHandlerE */
/* Demangled: vtable for HWCDispatcher::PostHandler */
extern void* _ZTVN13HWCDispatcher11PostHandlerE;

/* Symbol: _ZN11VSyncThread11setPropertyEv */
/* Demangled: VSyncThread::setProperty() */
int _ZN11VSyncThread11setPropertyEv(void);

/* Symbol: _ZNK3Hrt9isEnabledEv */
/* Demangled: Hrt::isEnabled() const */
int _ZNK3Hrt9isEnabledEv(void);

/* Symbol: _ZNK7android9Transform4typeEv */
/* Demangled: android::Transform::type() const */
int _ZNK7android9Transform4typeEv(void);

/* Symbol: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIjEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EE7__cloneEPNS0_6__baseISS_EE */
/* Demangled: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIjEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EE7__cloneEPNS0_6__baseISS_EE */
int _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIjEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EE7__cloneEPNS0_6__baseISS_EE(void);

/* Symbol: _ZN14HwcFeatureList11getInstanceEv */
/* Demangled: HwcFeatureList::getInstance() */
int _ZN14HwcFeatureList11getInstanceEv(void);

/* Symbol: _ZN9DbgLoggerC2IJPciEEERKjRKhPKcDpT_ */
/* Demangled: DbgLogger::DbgLogger<char*, int>(unsigned int const&, unsigned char const&, char const*, char*, int) */
int _ZN9DbgLoggerC2IJPciEEERKjRKhPKcDpT_(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strERKNS_12basic_stringIcS2_S4_EE */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strERKNS_12basic_stringIcS2_S4_EE(void);

/* Symbol: _ZNSt3__1lsIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_RKNS_9__iom_t10IS4_EE */
/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::operator<< <char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, std::__1::__iom_t10<char> const&) */
int _ZNSt3__1lsIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_RKNS_9__iom_t10IS4_EE(void);

/* Symbol: _ZN10HWCDisplay16setRetireFenceFdERKiRKb */
/* Demangled: HWCDisplay::setRetireFenceFd(int const&, bool const&) */
int _ZN10HWCDisplay16setRetireFenceFdERKiRKb(void);

/* Symbol: _ZNK7android6VectorINS_2spI13DispatcherJobEEE12do_constructEPvm */
/* Demangled: android::Vector<android::sp<DispatcherJob> >::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorINS_2spI13DispatcherJobEEE12do_constructEPvm(void);

/* Symbol: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSC_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EE18destroy_deallocateEv */
/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSC_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EE18destroy_deallocateEv */
int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSC_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EE18destroy_deallocateEv(void);

/* Symbol: _ZN9HWCBufferD1Ev */
/* Demangled: HWCBuffer::~HWCBuffer() */
int _ZN9HWCBufferD1Ev(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcS2_iiiEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char const*, int, int, int>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, int, int, int) */
int _ZN9DbgLoggerC2IJPKcS2_iiiEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN13AbortMessager6printfIJmiPKcjEEEvS2_DpT_ */
/* Demangled: void AbortMessager::printf<unsigned long, int, char const*, unsigned int>(char const*, unsigned long, int, char const*, unsigned int) */
int _ZN13AbortMessager6printfIJmiPKcjEEEvS2_DpT_(void);

/* Symbol: _ZN20MDPFrameInfoDebuggerD2Ev */
/* Demangled: MDPFrameInfoDebugger::~MDPFrameInfoDebugger() */
int _ZN20MDPFrameInfoDebuggerD2Ev(void);

/* Symbol: _ZN8Debugger6LOGGERC2Ev */
/* Demangled: Debugger::LOGGER::LOGGER() */
int _ZN8Debugger6LOGGERC2Ev(void);

/* Symbol: _ZN7android10SWWatchDogC1ERKl */
/* Demangled: android::SWWatchDog::SWWatchDog(long const&) */
int _ZN7android10SWWatchDogC1ERKl(void);

/* Symbol: _Z15isDispConnectedRKm */
/* Demangled: isDispConnected(unsigned long const&) */
int _Z15isDispConnectedRKm(void);

/* Symbol: _ZN13HWCDispatcher15configMirrorJobEP13DispatcherJob */
/* Demangled: HWCDispatcher::configMirrorJob(DispatcherJob*) */
int _ZN13HWCDispatcher15configMirrorJobEP13DispatcherJob(void);

/* Symbol: _ZN8HWCLayerD2Ev */
/* Demangled: HWCLayer::~HWCLayer() */
int _ZN8HWCLayerD2Ev(void);

/* Symbol: __letf2 */
/* Demangled: __letf2 */
int __letf2(void);

/* Symbol: _ZN9DbgLogger8flushOutEc */
/* Demangled: DbgLogger::flushOut(char) */
int _ZN9DbgLogger8flushOutEc(void);

/* Symbol: _ZN9MmBufDump4dumpEimjjjjjjjPKc */
/* Demangled: MmBufDump::dump(int, unsigned long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*) */
int _ZN9MmBufDump4dumpEimjjjjjjjPKc(void);

/* Symbol: _ZN15AsyncBlitDevice20prepareOverlayOutputEmP19OverlayPrepareParam */
/* Demangled: AsyncBlitDevice::prepareOverlayOutput(unsigned long, OverlayPrepareParam*) */
int _ZN15AsyncBlitDevice20prepareOverlayOutputEmP19OverlayPrepareParam(void);

/* Symbol: _ZN10PerfHelperC2Ev */
/* Demangled: PerfHelper::PerfHelper() */
int _ZN10PerfHelperC2Ev(void);

/* Symbol: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9DataspaceEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE7__cloneEPNS0_6__baseIS11_EE */
/* Demangled: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9DataspaceEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE7__cloneEPNS0_6__baseIS11_EE */
int _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9DataspaceEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE7__cloneEPNS0_6__baseIS11_EE(void);

/* Symbol: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN7android8hardware8graphics6common4V1_211PixelFormatEEEiPK13native_handleRKNS7_6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EE18destroy_deallocateEv */
/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN7android8hardware8graphics6common4V1_211PixelFormatEEEiPK13native_handleRKNS7_6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EE18destroy_deallocateEv */
int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN7android8hardware8graphics6common4V1_211PixelFormatEEEiPK13native_handleRKNS7_6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EE18destroy_deallocateEv(void);

/* Symbol: _ZN3hwc19GraphicBufferMapper15getPlaneLayoutsEPK13native_handlePNSt3__16vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS4_9allocatorISB_EEEE */
/* Demangled: hwc::GraphicBufferMapper::getPlaneLayouts(native_handle const*, std::__1::vector<aidl::android::hardware::graphics::common::PlaneLayout, std::__1::allocator<aidl::android::hardware::graphics::common::PlaneLayout> >*) */
int _ZN3hwc19GraphicBufferMapper15getPlaneLayoutsEPK13native_handlePNSt3__16vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS4_9allocatorISB_EEEE(void);

/* Symbol: _ZN10BliterNode10errorCheckERKNSt3__110shared_ptrINS_8JobParamEEE */
/* Demangled: BliterNode::errorCheck(std::__1::shared_ptr<BliterNode::JobParam> const&) */
int _ZN10BliterNode10errorCheckERKNSt3__110shared_ptrINS_8JobParamEEE(void);

/* Symbol: _ZNSt3__16vectorIN7android10FpsCounter13RingBufferFps10BufContentENS_9allocatorIS4_EEE8__appendEm */
/* Demangled: std::__1::vector<android::FpsCounter::RingBufferFps::BufContent, std::__1::allocator<android::FpsCounter::RingBufferFps::BufContent> >::__append(unsigned long) */
int _ZNSt3__16vectorIN7android10FpsCounter13RingBufferFps10BufContentENS_9allocatorIS4_EEE8__appendEm(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN7android10SWWatchDog9RecipientENS_9allocatorIS3_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<android::SWWatchDog::Recipient, std::__1::allocator<android::SWWatchDog::Recipient> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN7android10SWWatchDog9RecipientENS_9allocatorIS3_EEEE;

/* Symbol: _ZN9DbgLogger8tryFlushEv */
/* Demangled: DbgLogger::tryFlush() */
int _ZN9DbgLogger8tryFlushEv(void);

/* Symbol: _ZNK7android6VectorINS_2spI9FrameInfoEEE10do_destroyEPvm */
/* Demangled: android::Vector<android::sp<FrameInfo> >::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorINS_2spI9FrameInfoEEE10do_destroyEPvm(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcPcEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char*>(unsigned int const&, unsigned char const&, char const*, char const*, char*) */
int _ZN9DbgLoggerC2IJPKcPcEEERKjRKhS2_DpT_(void);

/* Symbol: _ZNK3hwc14Gralloc4Mapper10getDefaultImEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS3_8hidl_vecIhEEPT_ESG_ */
/* Demangled: int hwc::Gralloc4Mapper::getDefault<unsigned long>(unsigned int, unsigned int, int, unsigned int, unsigned long, android::hardware::graphics::mapper::V4_0::IMapper::MetadataType const&, int (*)(android::hardware::hidl_vec<unsigned char> const&, unsigned long*), unsigned long*) const */
int _ZNK3hwc14Gralloc4Mapper10getDefaultImEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS3_8hidl_vecIhEEPT_ESG_(void);

/* Symbol: _ZN3hwc19GraphicBufferMapper9lockAsyncEPK13native_handlemmRKNS_4RectEPPviPiS9_ */
/* Demangled: hwc::GraphicBufferMapper::lockAsync(native_handle const*, unsigned long, unsigned long, hwc::Rect const&, void**, int, int*, int*) */
int _ZN3hwc19GraphicBufferMapper9lockAsyncEPK13native_handlemmRKNS_4RectEPPviPiS9_(void);

/* Symbol: _ZN10HWCDisplay18getCommittedLayersEv */
/* Demangled: HWCDisplay::getCommittedLayers() */
int _ZN10HWCDisplay18getCommittedLayersEv(void);

/* Symbol: _ZN10ObjectPoolI13DispatcherJobED2Ev */
/* Demangled: ObjectPool<DispatcherJob>::~ObjectPool() */
int _ZN10ObjectPoolI13DispatcherJobED2Ev(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcS2_11CCORR_STATES3_ibbEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char const*, CCORR_STATE, CCORR_STATE, int, bool, bool>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, CCORR_STATE, CCORR_STATE, int, bool, bool) */
int _ZN9DbgLoggerC2IJPKcS2_11CCORR_STATES3_ibbEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN8HWCLayer16setVisibleRegionERK10hwc_region */
/* Demangled: HWCLayer::setVisibleRegion(hwc_region const&) */
int _ZN8HWCLayer16setVisibleRegionERK10hwc_region(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcilEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, int, long>(unsigned int const&, unsigned char const&, char const*, char const*, int, long) */
int _ZN9DbgLoggerC2IJPKcilEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN9DbgLoggerC2IJPcS1_iiiEEERKjRKhPKcDpT_ */
/* Demangled: DbgLogger::DbgLogger<char*, char*, int, int, int>(unsigned int const&, unsigned char const&, char const*, char*, char*, int, int, int) */
int _ZN9DbgLoggerC2IJPcS1_iiiEEERKjRKhPKcDpT_(void);

/* Symbol: _ZTV15ComposerHandler */
/* Demangled: vtable for ComposerHandler */
extern void* _ZTV15ComposerHandler;

/* Symbol: _ZN18AsyncBliterHandler16processFillBlackEP13PrivateHandlePiR6MdpJob */
/* Demangled: AsyncBliterHandler::processFillBlack(PrivateHandle*, int*, MdpJob&) */
int _ZN18AsyncBliterHandler16processFillBlackEP13PrivateHandlePiR6MdpJob(void);

/* Symbol: g_hwc2_api */
/* Demangled: g_hwc2_api */
extern void* g_hwc2_api;

/* Symbol: _ZN11HWCMediator19displayDestroyLayerEP11hwc2_devicemm */
/* Demangled: HWCMediator::displayDestroyLayer(hwc2_device*, unsigned long, unsigned long) */
int _ZN11HWCMediator19displayDestroyLayerEP11hwc2_devicemm(void);

/* Symbol: _ZN14DisplayManager10checkIsWfdEv */
/* Demangled: DisplayManager::checkIsWfd() */
int _ZN14DisplayManager10checkIsWfdEv(void);

/* Symbol: _ZN8Debugger10m_skip_logE */
/* Demangled: Debugger::m_skip_log */
extern void* _ZN8Debugger10m_skip_logE;

/* Symbol: _ZN14DispatchThread7triggerEN7android2spI13DispatcherJobEE */
/* Demangled: DispatchThread::trigger(android::sp<DispatcherJob>) */
int _ZN14DispatchThread7triggerEN7android2spI13DispatcherJobEE(void);

/* Symbol: _ZN12UEventThread10threadLoopEv */
/* Demangled: UEventThread::threadLoop() */
int _ZN12UEventThread10threadLoopEv(void);

/* Symbol: _ZN13GrallocDeviceD0Ev */
/* Demangled: GrallocDevice::~GrallocDevice() */
int _ZN13GrallocDeviceD0Ev(void);

/* Symbol: _ZNK3hwc14Gralloc2Mapper16getTransportSizeEPK13native_handlePjS4_ */
/* Demangled: hwc::Gralloc2Mapper::getTransportSize(native_handle const*, unsigned int*, unsigned int*) const */
int _ZNK3hwc14Gralloc2Mapper16getTransportSizeEPK13native_handlePjS4_(void);

/* Symbol: _ZThn296_N14DispatchThread7onVSyncEv */
/* Demangled: non-virtual thunk to DispatchThread::onVSync() */
int _ZThn296_N14DispatchThread7onVSyncEv(void);

/* Symbol: _ZTT18DisplayBufferQueue */
/* Demangled: VTT for DisplayBufferQueue */
extern void* _ZTT18DisplayBufferQueue;

/* Symbol: _Z12getDstBottomRKN7android2spI8HWCLayerEE */
/* Demangled: getDstBottom(android::sp<HWCLayer> const&) */
int _Z12getDstBottomRKN7android2spI8HWCLayerEE(void);

/* Symbol: _ZN10HWCDisplay15updateGlesRangeEv */
/* Demangled: HWCDisplay::updateGlesRange() */
int _ZN10HWCDisplay15updateGlesRangeEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeImN13HWCDispatcher13WorkerCluster12PrevHwcLayerEEENS_22__unordered_map_hasherImS5_NS_4hashImEELb1EEENS_21__unordered_map_equalImS5_NS_8equal_toImEELb1EEENS_9allocatorIS5_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long, HWCDispatcher::WorkerCluster::PrevHwcLayer>, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, HWCDispatcher::WorkerCluster::PrevHwcLayer>, std::__1::hash<unsigned long>, true>, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, HWCDispatcher::WorkerCluster::PrevHwcLayer>, std::__1::equal_to<unsigned long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long, HWCDispatcher::WorkerCluster::PrevHwcLayer> > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeImN13HWCDispatcher13WorkerCluster12PrevHwcLayerEEENS_22__unordered_map_hasherImS5_NS_4hashImEELb1EEENS_21__unordered_map_equalImS5_NS_8equal_toImEELb1EEENS_9allocatorIS5_EEE8__rehashEm(void);

/* Symbol: _ZN10DispDevice13getNumConfigsEm */
/* Demangled: DispDevice::getNumConfigs(unsigned long) */
int _ZN10DispDevice13getNumConfigsEm(void);

/* Symbol: _ZN11BlackBufferC2Ev */
/* Demangled: BlackBuffer::BlackBuffer() */
int _ZN11BlackBufferC2Ev(void);

/* Symbol: _ZNK3hwc14Gralloc4Mapper13getInterlacedEPK13native_handlePN4aidl7android8hardware8graphics6common14ExtendableTypeE */
/* Demangled: hwc::Gralloc4Mapper::getInterlaced(native_handle const*, aidl::android::hardware::graphics::common::ExtendableType*) const */
int _ZNK3hwc14Gralloc4Mapper13getInterlacedEPK13native_handlePN4aidl7android8hardware8graphics6common14ExtendableTypeE(void);

/* Symbol: _ZN11HWCMediator14displayPresentEP11hwc2_devicemPi */
/* Demangled: HWCMediator::displayPresent(hwc2_device*, unsigned long, int*) */
int _ZN11HWCMediator14displayPresentEP11hwc2_devicemPi(void);

/* Symbol: _ZN10HWCDisplay17initPrevCompTypesEv */
/* Demangled: HWCDisplay::initPrevCompTypes() */
int _ZN10HWCDisplay17initPrevCompTypesEv(void);

/* Symbol: _ZNK8HWCLayer21decideMdpOutDataspaceEv */
/* Demangled: HWCLayer::decideMdpOutDataspace() const */
int _ZNK8HWCLayer21decideMdpOutDataspaceEv(void);

/* Symbol: _ZNK8HWCLayer9isGameHDREv */
/* Demangled: HWCLayer::isGameHDR() const */
int _ZNK8HWCLayer9isGameHDREv(void);

/* Symbol: _ZN3hwc19GraphicBufferMapper13getLayerCountEPK13native_handlePm */
/* Demangled: hwc::GraphicBufferMapper::getLayerCount(native_handle const*, unsigned long*) */
int _ZN3hwc19GraphicBufferMapper13getLayerCountEPK13native_handlePm(void);

/* Symbol: _ZN3hwc19GraphicBufferMapper8getUsageEPK13native_handlePm */
/* Demangled: hwc::GraphicBufferMapper::getUsage(native_handle const*, unsigned long*) */
int _ZN3hwc19GraphicBufferMapper8getUsageEPK13native_handlePm(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcS2_miEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char const*, unsigned long, int>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, unsigned long, int) */
int _ZN9DbgLoggerC2IJPKcS2_miEEERKjRKhS2_DpT_(void);

/* Symbol: HWC_COMPOSITION_FILE_UNKNOWN_STR */
/* Demangled: HWC_COMPOSITION_FILE_UNKNOWN_STR */
extern void* HWC_COMPOSITION_FILE_UNKNOWN_STR;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeImN7android2spI8HWCLayerEEEENS_19__map_value_compareImS6_NS_4lessImEELb1EEENS_9allocatorIS6_EEE5eraseENS_21__tree_const_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned long, android::sp<HWCLayer> >, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, android::sp<HWCLayer> >, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, android::sp<HWCLayer> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned long, android::sp<HWCLayer> >, std::__1::__tree_node<std::__1::__value_type<unsigned long, android::sp<HWCLayer> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeImN7android2spI8HWCLayerEEEENS_19__map_value_compareImS6_NS_4lessImEELb1EEENS_9allocatorIS6_EEE5eraseENS_21__tree_const_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEE(void);

/* Symbol: _ZN11HWCMediator22displayValidateDisplayEP11hwc2_devicemPjS2_ */
/* Demangled: HWCMediator::displayValidateDisplay(hwc2_device*, unsigned long, unsigned int*, unsigned int*) */
int _ZN11HWCMediator22displayValidateDisplayEP11hwc2_devicemPjS2_(void);

/* Symbol: _ZN10HWCDisplay17hasGPUCompositionEv */
/* Demangled: HWCDisplay::hasGPUComposition() */
int _ZN10HWCDisplay17hasGPUCompositionEv(void);

/* Symbol: _ZTVN7android6VectorINS_2spI9FrameInfoEEEE */
/* Demangled: vtable for android::Vector<android::sp<FrameInfo> > */
extern void* _ZTVN7android6VectorINS_2spI9FrameInfoEEEE;

/* Symbol: _ZN7android10SWWatchDog9Recipient9onTimeoutERKmRKiRKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKlSG_ */
/* Demangled: android::SWWatchDog::Recipient::onTimeout(unsigned long const&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, long const&, long const&) */
int _ZN7android10SWWatchDog9Recipient9onTimeoutERKmRKiRKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKlSG_(void);

/* Symbol: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSJ_8hidl_vecIhEEPT_ESW_EUlRKSV_SU_E_NSC_IS11_EEFvNSM_5ErrorESU_EE7destroyEv */
/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSJ_8hidl_vecIhEEPT_ESW_EUlRKSV_SU_E_NSC_IS11_EEFvNSM_5ErrorESU_EE7destroyEv */
int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSJ_8hidl_vecIhEEPT_ESW_EUlRKSV_SU_E_NSC_IS11_EEFvNSM_5ErrorESU_EE7destroyEv(void);

/* Symbol: _ZN3hwc19GraphicBufferMapper12importBufferEPK13native_handlejjjimjPS3_ */
/* Demangled: hwc::GraphicBufferMapper::importBuffer(native_handle const*, unsigned int, unsigned int, unsigned int, int, unsigned long, unsigned int, native_handle const**) */
int _ZN3hwc19GraphicBufferMapper12importBufferEPK13native_handlejjjimjPS3_(void);

/* Symbol: _ZN15AsyncBlitDevice12setPowerModeEmi */
/* Demangled: AsyncBlitDevice::setPowerMode(unsigned long, int) */
int _ZN15AsyncBlitDevice12setPowerModeEmi(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmS2_iEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, char const*, int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, char const*, int) */
int _ZN9DbgLoggerC2IJPKcmS2_iEEERKjRKhS2_DpT_(void);

/* Symbol: _ZTv0_n24_N12UEventThreadD1Ev */
/* Demangled: virtual thunk to UEventThread::~UEventThread() */
int _ZTv0_n24_N12UEventThreadD1Ev(void);

/* Symbol: _ZN15AsyncBlitDevice19enableOverlayOutputEmP16OverlayPortParam */
/* Demangled: AsyncBlitDevice::enableOverlayOutput(unsigned long, OverlayPortParam*) */
int _ZN15AsyncBlitDevice19enableOverlayOutputEmP16OverlayPortParam(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcimS2_llEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, int, unsigned long, char const*, long, long>(unsigned int const&, unsigned char const&, char const*, char const*, int, unsigned long, char const*, long, long) */
int _ZN9DbgLoggerC2IJPKcimS2_llEEERKjRKhS2_DpT_(void);

/* Symbol: _ZNK3hwc14Gralloc4Mapper11getCta861_3EPK13native_handlePNSt3__18optionalIN4aidl7android8hardware8graphics6common8Cta861_3EEE */
/* Demangled: hwc::Gralloc4Mapper::getCta861_3(native_handle const*, std::__1::optional<aidl::android::hardware::graphics::common::Cta861_3>*) const */
int _ZNK3hwc14Gralloc4Mapper11getCta861_3EPK13native_handlePNSt3__18optionalIN4aidl7android8hardware8graphics6common8Cta861_3EEE(void);

/* Symbol: _ZN11HWCMediator29displayGetClientTargetSupportEP11hwc2_devicemjjii */
/* Demangled: HWCMediator::displayGetClientTargetSupport(hwc2_device*, unsigned long, unsigned int, unsigned int, int, int) */
int _ZN11HWCMediator29displayGetClientTargetSupportEP11hwc2_devicemjjii(void);

/* Symbol: _ZNSt3__16vectorIN7android2spI8HWCLayerEENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<HWCLayer>, std::__1::allocator<android::sp<HWCLayer> > >::__push_back_slow_path<android::sp<HWCLayer> const&>(android::sp<HWCLayer> const&) */
int _ZNSt3__16vectorIN7android2spI8HWCLayerEENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_(void);

/* Symbol: _ZTVN7android17DisplayFeatureGetE */
/* Demangled: vtable for android::DisplayFeatureGet */
extern void* _ZTVN7android17DisplayFeatureGetE;

/* Symbol: _ZN16DbgLogBufManager9getLogBufEPNS_7DBG_BUFE */
/* Demangled: DbgLogBufManager::getLogBuf(DbgLogBufManager::DBG_BUF*) */
int _ZN16DbgLogBufManager9getLogBufEPNS_7DBG_BUFE(void);

/* Symbol: __floatditf */
/* Demangled: __floatditf */
int __floatditf(void);

/* Symbol: _ZN18AsyncBliterHandler16processFillWhiteEP13PrivateHandlePiR6MdpJob */
/* Demangled: AsyncBliterHandler::processFillWhite(PrivateHandle*, int*, MdpJob&) */
int _ZN18AsyncBliterHandler16processFillWhiteEP13PrivateHandlePiR6MdpJob(void);

/* Symbol: _ZN18AsyncBliterHandler16processVirMirrorEP13DispatcherJob */
/* Demangled: AsyncBliterHandler::processVirMirror(DispatcherJob*) */
int _ZN18AsyncBliterHandler16processVirMirrorEP13DispatcherJob(void);

/* Symbol: _ZN18DisplayBufferQueue18setSynchronousModeEb */
/* Demangled: DisplayBufferQueue::setSynchronousMode(bool) */
int _ZN18DisplayBufferQueue18setSynchronousModeEb(void);

/* Symbol: _ZNK14ColorTransform10isIdentityEv */
/* Demangled: ColorTransform::isIdentity() const */
int _ZNK14ColorTransform10isIdentityEv(void);

/* Symbol: HWC_COMPOSITION_FILE_HWC_LAYER_STR */
/* Demangled: HWC_COMPOSITION_FILE_HWC_LAYER_STR */
extern void* HWC_COMPOSITION_FILE_HWC_LAYER_STR;

/* Symbol: _ZN14DisplayManager16printDisplayInfoEm */
/* Demangled: DisplayManager::printDisplayInfo(unsigned long) */
int _ZN14DisplayManager16printDisplayInfoEm(void);

/* Symbol: mPanelEventMonitorThread */
/* Demangled: mPanelEventMonitorThread */
extern void* mPanelEventMonitorThread;

/* Symbol: _ZN9DbgLoggerC2IJPKcimPcEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, int, unsigned long, char*>(unsigned int const&, unsigned char const&, char const*, char const*, int, unsigned long, char*) */
int _ZN9DbgLoggerC2IJPKcimPcEEERKjRKhS2_DpT_(void);

/* Symbol: _ZTC11VSyncThread0_9HWCThread */
/* Demangled: construction vtable for HWCThread-in-VSyncThread */
extern void* _ZTC11VSyncThread0_9HWCThread;

/* Symbol: _ZNK3hwc14Gralloc4Mapper9getHeightEPK13native_handlePm */
/* Demangled: hwc::Gralloc4Mapper::getHeight(native_handle const*, unsigned long*) const */
int _ZNK3hwc14Gralloc4Mapper9getHeightEPK13native_handlePm(void);

/* Symbol: _ZN18DisplayBufferQueueC1Eim */
/* Demangled: DisplayBufferQueue::DisplayBufferQueue(int, unsigned long) */
int _ZN18DisplayBufferQueueC1Eim(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueuemEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char const*, DisplayBufferQueue*, unsigned long>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, DisplayBufferQueue*, unsigned long) */
int _ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueuemEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN9DbgLoggerC2IJmjbEEERKjRKhPKcDpT_ */
/* Demangled: DbgLogger::DbgLogger<unsigned long, unsigned int, bool>(unsigned int const&, unsigned char const&, char const*, unsigned long, unsigned int, bool) */
int _ZN9DbgLoggerC2IJmjbEEERKjRKhPKcDpT_(void);

/* Symbol: _ZN9DbgLoggerC2IJijjiiiiEEERKjRKhPKcDpT_ */
/* Demangled: DbgLogger::DbgLogger<int, unsigned int, unsigned int, int, int, int, int>(unsigned int const&, unsigned char const&, char const*, int, unsigned int, unsigned int, int, int, int, int) */
int _ZN9DbgLoggerC2IJijjiiiiEEERKjRKhPKcDpT_(void);

/* Symbol: _ZN15AsyncBlitDevice18getMaxOverlayWidthEv */
/* Demangled: AsyncBlitDevice::getMaxOverlayWidth() */
int _ZN15AsyncBlitDevice18getMaxOverlayWidthEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIibEENS_22__unordered_map_hasherIiS2_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS2_NS_8equal_toIiEELb1EEENS_9allocatorIS2_EEE25__emplace_unique_key_argsIiJNS_4pairIKibEEEEENSF_INS_15__hash_iteratorIPNS_11__hash_nodeIS2_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, bool>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<int, bool>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, bool>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, bool>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, bool> > >::__emplace_unique_key_args<int, std::__1::pair<int const, bool> >(int const&, std::__1::pair<int const, bool>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIibEENS_22__unordered_map_hasherIiS2_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS2_NS_8equal_toIiEELb1EEENS_9allocatorIS2_EEE25__emplace_unique_key_argsIiJNS_4pairIKibEEEEENSF_INS_15__hash_iteratorIPNS_11__hash_nodeIS2_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcS2_iiS2_EEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char const*, int, int, char const*>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, int, int, char const*) */
int _ZN9DbgLoggerC2IJPKcS2_iiS2_EEERKjRKhS2_DpT_(void);

/* Symbol: _ZNK3hwc14Gralloc4Mapper17getAllocationSizeEPK13native_handlePm */
/* Demangled: hwc::Gralloc4Mapper::getAllocationSize(native_handle const*, unsigned long*) const */
int _ZNK3hwc14Gralloc4Mapper17getAllocationSizeEPK13native_handlePm(void);

/* Symbol: _Z10getDstLeftRKN7android2spI8HWCLayerEE */
/* Demangled: getDstLeft(android::sp<HWCLayer> const&) */
int _Z10getDstLeftRKN7android2spI8HWCLayerEE(void);

/* Symbol: HWC2_COMPOSITION_CLIENT_STR */
/* Demangled: HWC2_COMPOSITION_CLIENT_STR */
extern void* HWC2_COMPOSITION_CLIENT_STR;

/* Symbol: _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common8Cta861_3EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EEE */
/* Demangled: _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common8Cta861_3EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EEE */
extern void* _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common8Cta861_3EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EEE;

/* Symbol: _ZN3hwc19GraphicBufferMapper17getAllocationSizeEPK13native_handlePm */
/* Demangled: hwc::GraphicBufferMapper::getAllocationSize(native_handle const*, unsigned long*) */
int _ZN3hwc19GraphicBufferMapper17getAllocationSizeEPK13native_handlePm(void);

/* Symbol: _ZN13HWCDispatcher11PostHandler15setOverlayInputEP13DispatcherJob */
/* Demangled: HWCDispatcher::PostHandler::setOverlayInput(DispatcherJob*) */
int _ZN13HWCDispatcher11PostHandler15setOverlayInputEP13DispatcherJob(void);

/* Symbol: _ZN23PanelEventMonitorThread10threadLoopEv */
/* Demangled: PanelEventMonitorThread::threadLoop() */
int _ZN23PanelEventMonitorThread10threadLoopEv(void);

/* Symbol: _ZTv0_n24_N11VSyncThreadD0Ev */
/* Demangled: virtual thunk to VSyncThread::~VSyncThread() */
int _ZTv0_n24_N11VSyncThreadD0Ev(void);

/* Symbol: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common8Cta861_3EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EE7destroyEv */
/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common8Cta861_3EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EE7destroyEv */
int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common8Cta861_3EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EE7destroyEv(void);

/* Symbol: _ZNSt3__16__treeImNS_4lessImEENS_9allocatorImEEE7destroyEPNS_11__tree_nodeImPvEE */
/* Demangled: std::__1::__tree<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >::destroy(std::__1::__tree_node<unsigned long, void*>*) */
int _ZNSt3__16__treeImNS_4lessImEENS_9allocatorImEEE7destroyEPNS_11__tree_nodeImPvEE(void);

/* Symbol: _ZN7HWLayerC2Ev */
/* Demangled: HWLayer::HWLayer() */
int _ZN7HWLayerC2Ev(void);

/* Symbol: g_refresh_thread */
/* Demangled: g_refresh_thread */
extern void* g_refresh_thread;

/* Symbol: _ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueuejPK13native_handlebjjjjjjEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char const*, DisplayBufferQueue*, unsigned int, native_handle const*, bool, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, DisplayBufferQueue*, unsigned int, native_handle const*, bool, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
int _ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueuejPK13native_handlebjjjjjjEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN9IPqDevice21isColorTransformIoctlEv */
/* Demangled: IPqDevice::isColorTransformIoctl() */
int _ZN9IPqDevice21isColorTransformIoctlEv(void);

/* Symbol: _ZNK3hwc14Gralloc4Mapper21getDefaultCompressionEjjijmPN4aidl7android8hardware8graphics6common14ExtendableTypeE */
/* Demangled: hwc::Gralloc4Mapper::getDefaultCompression(unsigned int, unsigned int, int, unsigned int, unsigned long, aidl::android::hardware::graphics::common::ExtendableType*) const */
int _ZNK3hwc14Gralloc4Mapper21getDefaultCompressionEjjijmPN4aidl7android8hardware8graphics6common14ExtendableTypeE(void);

/* Symbol: _ZN11HWCMediator22layerStateSetTransformEP11hwc2_devicemmi */
/* Demangled: HWCMediator::layerStateSetTransform(hwc2_device*, unsigned long, unsigned long, int) */
int _ZN11HWCMediator22layerStateSetTransformEP11hwc2_devicemmi(void);

/* Symbol: _ZN10HWCDisplay12destroyLayerERKm */
/* Demangled: HWCDisplay::destroyLayer(unsigned long const&) */
int _ZN10HWCDisplay12destroyLayerERKm(void);

/* Symbol: _ZN9HWCBuffer17setReleaseFenceFdERKiRKb */
/* Demangled: HWCBuffer::setReleaseFenceFd(int const&, bool const&) */
int _ZN9HWCBuffer17setReleaseFenceFdERKiRKb(void);

/* Symbol: _ZN18DisplayBufferQueue13acquireBufferEPNS_13DisplayBufferEb */
/* Demangled: DisplayBufferQueue::acquireBuffer(DisplayBufferQueue::DisplayBuffer*, bool) */
int _ZN18DisplayBufferQueue13acquireBufferEPNS_13DisplayBufferEb(void);

/* Symbol: _ZN9IONDevice9ionImportEPiRKb */
/* Demangled: IONDevice::ionImport(int*, bool const&) */
int _ZN9IONDevice9ionImportEPiRKb(void);

/* Symbol: _ZNK7android6VectorIP16OverlayPortParamE8do_splatEPvPKvm */
/* Demangled: android::Vector<OverlayPortParam*>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIP16OverlayPortParamE8do_splatEPvPKvm(void);

/* Symbol: _ZTV9FrameInfo */
/* Demangled: vtable for FrameInfo */
extern void* _ZTV9FrameInfo;

/* Symbol: _ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueueiiEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char const*, DisplayBufferQueue*, int, int>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, DisplayBufferQueue*, int, int) */
int _ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueueiiEEERKjRKhS2_DpT_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIm13PrivateHandleEENS_22__unordered_map_hasherImS3_NS_4hashImEELb1EEENS_21__unordered_map_equalImS3_NS_8equal_toImEELb1EEENS_9allocatorIS3_EEE8__rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long, PrivateHandle>, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, PrivateHandle>, std::__1::hash<unsigned long>, true>, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, PrivateHandle>, std::__1::equal_to<unsigned long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long, PrivateHandle> > >::__rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIm13PrivateHandleEENS_22__unordered_map_hasherImS3_NS_4hashImEELb1EEENS_21__unordered_map_equalImS3_NS_8equal_toImEELb1EEENS_9allocatorIS3_EEE8__rehashEm(void);

/* Symbol: _ZN10DispDevice18getDisplayRotationEm */
/* Demangled: DispDevice::getDisplayRotation(unsigned long) */
int _ZN10DispDevice18getDisplayRotationEm(void);

/* Symbol: _ZN8HWCLayer14setHwlayerTypeERKiS1_RK13HWC_COMP_FILE */
/* Demangled: HWCLayer::setHwlayerType(int const&, int const&, HWC_COMP_FILE const&) */
int _ZN8HWCLayer14setHwlayerTypeERKiS1_RK13HWC_COMP_FILE(void);

/* Symbol: _ZN9HWCThread10waitLockedEv */
/* Demangled: HWCThread::waitLocked() */
int _ZN9HWCThread10waitLockedEv(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmmiiiibS2_S2_EEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned long, int, int, int, int, bool, char const*, char const*>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned long, int, int, int, int, bool, char const*, char const*) */
int _ZN9DbgLoggerC2IJPKcmmiiiibS2_S2_EEERKjRKhS2_DpT_(void);

/* Symbol: _ZN10DispDevice11getDeviceIdEm */
/* Demangled: DispDevice::getDeviceId(unsigned long) */
int _ZN10DispDevice11getDeviceIdEm(void);

/* Symbol: _ZN11HWCMediator19unlockRefreshThreadEm */
/* Demangled: HWCMediator::unlockRefreshThread(unsigned long) */
int _ZN11HWCMediator19unlockRefreshThreadEm(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcS2_mEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char const*, unsigned long>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, unsigned long) */
int _ZN9DbgLoggerC2IJPKcS2_mEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmS2_iiEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, char const*, int, int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, char const*, int, int) */
int _ZN9DbgLoggerC2IJPKcmS2_iiEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN13HWCDispatcher8onPlugInEmjj */
/* Demangled: HWCDispatcher::onPlugIn(unsigned long, unsigned int, unsigned int) */
int _ZN13HWCDispatcher8onPlugInEmjj(void);

/* Symbol: _ZN13OverlayEngine18releaseOutputQueueEv */
/* Demangled: OverlayEngine::releaseOutputQueue() */
int _ZN13OverlayEngine18releaseOutputQueueEv(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcS2_miiEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char const*, unsigned long, int, int>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, unsigned long, int, int) */
int _ZN9DbgLoggerC2IJPKcS2_miiEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN11HWCMediator22deviceRegisterCallbackEP11hwc2_deviceiPvPFvvE */
/* Demangled: HWCMediator::deviceRegisterCallback(hwc2_device*, int, void*, void (*)()) */
int _ZN11HWCMediator22deviceRegisterCallbackEP11hwc2_deviceiPvPFvvE(void);

/* Symbol: _ZN10HWCDisplay18getActiveConfigFPSEv */
/* Demangled: HWCDisplay::getActiveConfigFPS() */
int _ZN10HWCDisplay18getActiveConfigFPSEv(void);

/* Symbol: _ZTv0_n24_N10IdleThreadD1Ev */
/* Demangled: virtual thunk to IdleThread::~IdleThread() */
int _ZTv0_n24_N10IdleThreadD1Ev(void);

/* Symbol: _ZN10DispDevice8getWidthEmj */
/* Demangled: DispDevice::getWidth(unsigned long, unsigned int) */
int _ZN10DispDevice8getWidthEmj(void);

/* Symbol: _ZN13DispatcherJobC1Ej */
/* Demangled: DispatcherJob::DispatcherJob(unsigned int) */
int _ZN13DispatcherJobC1Ej(void);

/* Symbol: _ZN14DisplayManager17createVsyncThreadEm */
/* Demangled: DisplayManager::createVsyncThread(unsigned long) */
int _ZN14DisplayManager17createVsyncThreadEm(void);

/* Symbol: _ZN10IdleThreadD0Ev */
/* Demangled: IdleThread::~IdleThread() */
int _ZN10IdleThreadD0Ev(void);

/* Symbol: _ZN13GrallocDevice11getInstanceEv */
/* Demangled: GrallocDevice::getInstance() */
int _ZN13GrallocDevice11getInstanceEv(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void);

/* Symbol: _ZN10HWCDisplay12setGlesRangeERKiS1_ */
/* Demangled: HWCDisplay::setGlesRange(int const&, int const&) */
int _ZN10HWCDisplay12setGlesRangeERKiS1_(void);

/* Symbol: _ZN8Platform14isUILayerValidERKN7android2spI8HWCLayerEEPi */
/* Demangled: Platform::isUILayerValid(android::sp<HWCLayer> const&, int*) */
int _ZN8Platform14isUILayerValidERKN7android2spI8HWCLayerEEPi(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmS2_jEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, char const*, unsigned int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, char const*, unsigned int) */
int _ZN9DbgLoggerC2IJPKcmS2_jEEERKjRKhS2_DpT_(void);

/* Symbol: _ZNK13HWCDispatcher28decOvlEnginePowerModeChangedERKm */
/* Demangled: HWCDispatcher::decOvlEnginePowerModeChanged(unsigned long const&) const */
int _ZNK13HWCDispatcher28decOvlEnginePowerModeChangedERKm(void);

/* Symbol: _ZNK3hwc14Gralloc4Mapper21getDefaultCompressionEjjijmPN4aidl7android8hardware8graphics6common11CompressionE */
/* Demangled: hwc::Gralloc4Mapper::getDefaultCompression(unsigned int, unsigned int, int, unsigned int, unsigned long, aidl::android::hardware::graphics::common::Compression*) const */
int _ZNK3hwc14Gralloc4Mapper21getDefaultCompressionEjjijmPN4aidl7android8hardware8graphics6common11CompressionE(void);

/* Symbol: _ZN18AsyncBliterHandler11clearMdpJobEP6MdpJob */
/* Demangled: AsyncBliterHandler::clearMdpJob(MdpJob*) */
int _ZN18AsyncBliterHandler11clearMdpJobEP6MdpJob(void);

/* Symbol: _ZN9DbgLoggerC2IJPKclllbEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, long, long, long, bool>(unsigned int const&, unsigned char const&, char const*, char const*, long, long, long, bool) */
int _ZN9DbgLoggerC2IJPKclllbEEERKjRKhS2_DpT_(void);

/* Symbol: _ZNSt3__16vectorINS0_IfNS_9allocatorIfEEEENS1_IS3_EEE8__appendEm */
/* Demangled: std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >::__append(unsigned long) */
int _ZNSt3__16vectorINS0_IfNS_9allocatorIfEEEENS1_IS3_EEE8__appendEm(void);

/* Symbol: _ZN7android9Transform3setEff */
/* Demangled: android::Transform::set(float, float) */
int _ZN7android9Transform3setEff(void);

/* Symbol: _ZThn296_N13OverlayEngine7onVSyncEv */
/* Demangled: non-virtual thunk to OverlayEngine::onVSync() */
int _ZThn296_N13OverlayEngine7onVSyncEv(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueuejNS3_10BufferSlot11BufferStateEEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char const*, DisplayBufferQueue*, unsigned int, DisplayBufferQueue::BufferSlot::BufferState>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, DisplayBufferQueue*, unsigned int, DisplayBufferQueue::BufferSlot::BufferState) */
int _ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueuejNS3_10BufferSlot11BufferStateEEEERKjRKhS2_DpT_(void);

/* Symbol: _ZTCN7android17DisplayFeatureGetE0_NS_8hardware20hidl_death_recipientE */
/* Demangled: construction vtable for android::hardware::hidl_death_recipient-in-android::DisplayFeatureGet */
extern void* _ZTCN7android17DisplayFeatureGetE0_NS_8hardware20hidl_death_recipientE;

/* Symbol: _ZN3hwc19GraphicBufferMapper7getNameEPK13native_handlePNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE */
/* Demangled: hwc::GraphicBufferMapper::getName(native_handle const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _ZN3hwc19GraphicBufferMapper7getNameEPK13native_handlePNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void);

/* Symbol: _ZN16DbgLogBufManagerD1Ev */
/* Demangled: DbgLogBufManager::~DbgLogBufManager() */
int _ZN16DbgLogBufManagerD1Ev(void);

/* Symbol: _ZNK3hwc14Gralloc4Mapper8isLoadedEv */
/* Demangled: hwc::Gralloc4Mapper::isLoaded() const */
int _ZNK3hwc14Gralloc4Mapper8isLoadedEv(void);

/* Symbol: _ZN10HWCDisplay18getReleaseFenceFdsEPjPmPi */
/* Demangled: HWCDisplay::getReleaseFenceFds(unsigned int*, unsigned long*, int*) */
int _ZN10HWCDisplay18getReleaseFenceFdsEPjPmPi(void);

/* Symbol: _ZN10HWCDisplay8validateEv */
/* Demangled: HWCDisplay::validate() */
int _ZN10HWCDisplay8validateEv(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmjjijiEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned int, unsigned int, int, unsigned int, int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned int, unsigned int, int, unsigned int, int) */
int _ZN9DbgLoggerC2IJPKcmjjijiEEERKjRKhS2_DpT_(void);

/* Symbol: __eqtf2 */
/* Demangled: __eqtf2 */
int __eqtf2(void);

/* Symbol: _ZN11HWCMediatorD0Ev */
/* Demangled: HWCMediator::~HWCMediator() */
int _ZN11HWCMediatorD0Ev(void);

/* Symbol: _Z15dupBufferHandlePK13native_handlePS1_ */
/* Demangled: dupBufferHandle(native_handle const*, native_handle const**) */
int _Z15dupBufferHandlePK13native_handlePS1_(void);

/* Symbol: _ZN14DispatchThreadC2Em */
/* Demangled: DispatchThread::DispatchThread(unsigned long) */
int _ZN14DispatchThreadC2Em(void);

/* Symbol: _ZN16HWVSyncEstimatorC2Ev */
/* Demangled: HWVSyncEstimator::HWVSyncEstimator() */
int _ZN16HWVSyncEstimatorC2Ev(void);

/* Symbol: _ZN18DisplayBufferQueue16drainQueueLockedEv */
/* Demangled: DisplayBufferQueue::drainQueueLocked() */
int _ZN18DisplayBufferQueue16drainQueueLockedEv(void);

/* Symbol: _ZN7android10FpsCounter6updateEv */
/* Demangled: android::FpsCounter::update() */
int _ZN7android10FpsCounter6updateEv(void);

/* Symbol: _ZNK7android9Transform2txEv */
/* Demangled: android::Transform::tx() const */
int _ZNK7android9Transform2txEv(void);

/* Symbol: _ZN7android10SWWatchDogD1Ev */
/* Demangled: android::SWWatchDog::~SWWatchDog() */
int _ZN7android10SWWatchDogD1Ev(void);

/* Symbol: _ZNK3hwc14Gralloc4Mapper20getDefaultInterlacedEjjijmPN4aidl7android8hardware8graphics6common14ExtendableTypeE */
/* Demangled: hwc::Gralloc4Mapper::getDefaultInterlaced(unsigned int, unsigned int, int, unsigned int, unsigned long, aidl::android::hardware::graphics::common::ExtendableType*) const */
int _ZNK3hwc14Gralloc4Mapper20getDefaultInterlacedEjjijmPN4aidl7android8hardware8graphics6common14ExtendableTypeE(void);

/* Symbol: _ZN8HWCLayer13setPlaneAlphaERKf */
/* Demangled: HWCLayer::setPlaneAlpha(float const&) */
int _ZN8HWCLayer13setPlaneAlphaERKf(void);

/* Symbol: _ZNK10HWCDisplay7getDpiXEj */
/* Demangled: HWCDisplay::getDpiX(unsigned int) const */
int _ZNK10HWCDisplay7getDpiXEj(void);

/* Symbol: _ZTT15TouchHintThread */
/* Demangled: VTT for TouchHintThread */
extern void* _ZTT15TouchHintThread;

/* Symbol: _ZN13OverlayEngine10onFirstRefEv */
/* Demangled: OverlayEngine::onFirstRef() */
int _ZN13OverlayEngine10onFirstRefEv(void);

/* Symbol: _Z8dump_bufRKjRKiS0_RKN7android4RectES0_PKcRKb */
/* Demangled: dump_buf(unsigned int const&, int const&, unsigned int const&, android::Rect const&, unsigned int const&, char const*, bool const&) */
int _Z8dump_bufRKjRKiS0_RKN7android4RectES0_PKcRKb(void);

/* Symbol: _ZN10BliterNodeD1Ev */
/* Demangled: BliterNode::~BliterNode() */
int _ZN10BliterNodeD1Ev(void);

/* Symbol: _ZN7HWC2ApiD1Ev */
/* Demangled: HWC2Api::~HWC2Api() */
int _ZN7HWC2ApiD1Ev(void);

/* Symbol: _ZTT13LayerComposer */
/* Demangled: VTT for LayerComposer */
extern void* _ZTT13LayerComposer;

/* Symbol: _ZNK7android6VectorIP9FrameInfoE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<FrameInfo*>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIP9FrameInfoE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcjjjEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned int, unsigned int, unsigned int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned int, unsigned int, unsigned int) */
int _ZN9DbgLoggerC2IJPKcjjjEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN8HWCLayer8setBlendERKi */
/* Demangled: HWCLayer::setBlend(int const&) */
int _ZN8HWCLayer8setBlendERKi(void);

/* Symbol: _ZN23PanelEventMonitorThreadD0Ev */
/* Demangled: PanelEventMonitorThread::~PanelEventMonitorThread() */
int _ZN23PanelEventMonitorThreadD0Ev(void);

/* Symbol: _ZNK7android6VectorI10MdpJobInfoE10do_destroyEPvm */
/* Demangled: android::Vector<MdpJobInfo>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorI10MdpJobInfoE10do_destroyEPvm(void);

/* Symbol: _ZN3hwc14Gralloc2MapperC2Ev */
/* Demangled: hwc::Gralloc2Mapper::Gralloc2Mapper() */
int _ZN3hwc14Gralloc2MapperC2Ev(void);

/* Symbol: _ZN20RefreshRequestThreadC1Ev */
/* Demangled: RefreshRequestThread::RefreshRequestThread() */
int _ZN20RefreshRequestThreadC1Ev(void);

/* Symbol: _ZN11VSyncThread10threadLoopEv */
/* Demangled: VSyncThread::threadLoop() */
int _ZN11VSyncThread10threadLoopEv(void);

/* Symbol: _ZNK18AsyncBliterHandler24configDisplayBufferQueueEN7android2spI18DisplayBufferQueueEEP13PrivateHandlePNS_12BufferConfigEPK11DisplayDataRKjRKb */
/* Demangled: AsyncBliterHandler::configDisplayBufferQueue(android::sp<DisplayBufferQueue>, PrivateHandle*, AsyncBliterHandler::BufferConfig*, DisplayData const*, unsigned int const&, bool const&) const */
int _ZNK18AsyncBliterHandler24configDisplayBufferQueueEN7android2spI18DisplayBufferQueueEEP13PrivateHandlePNS_12BufferConfigEPK11DisplayDataRKjRKb(void);

/* Symbol: _ZN15AsyncBlitDevice31isConstantAlphaForRGBASupportedEv */
/* Demangled: AsyncBlitDevice::isConstantAlphaForRGBASupported() */
int _ZN15AsyncBlitDevice31isConstantAlphaForRGBASupportedEv(void);

/* Symbol: _ZN9HrtCommon4dumpEPN7android7String8E */
/* Demangled: HrtCommon::dump(android::String8*) */
int _ZN9HrtCommon4dumpEPN7android7String8E(void);

/* Symbol: _ZNK3hwc14Gralloc4Mapper27getDefaultPixelFormatFourCCEjjijmPj */
/* Demangled: hwc::Gralloc4Mapper::getDefaultPixelFormatFourCC(unsigned int, unsigned int, int, unsigned int, unsigned long, unsigned int*) const */
int _ZNK3hwc14Gralloc4Mapper27getDefaultPixelFormatFourCCEjjijmPj(void);

/* Symbol: _ZNK10HWCDisplay14getVsyncPeriodEj */
/* Demangled: HWCDisplay::getVsyncPeriod(unsigned int) const */
int _ZNK10HWCDisplay14getVsyncPeriodEj(void);

/* Symbol: _ZNK7android6VectorINS_2spI9FrameInfoEEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<android::sp<FrameInfo> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spI9FrameInfoEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN15AsyncBlitDeviceD0Ev */
/* Demangled: AsyncBlitDevice::~AsyncBlitDevice() */
int _ZN15AsyncBlitDeviceD0Ev(void);

/* Symbol: _ZN10DispDevice11frameConfigEmiiijRKjS1_RKbS3_S3_ */
/* Demangled: DispDevice::frameConfig(unsigned long, int, int, int, unsigned int, unsigned int const&, unsigned int const&, bool const&, bool const&, bool const&) */
int _ZN10DispDevice11frameConfigEmiiijRKjS1_RKbS3_S3_(void);

/* Symbol: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIjEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EE18destroy_deallocateEv */
/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIjEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EE18destroy_deallocateEv */
int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIjEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EE18destroy_deallocateEv(void);

/* Symbol: _ZN13OverlayEngineC1ERKmjj */
/* Demangled: OverlayEngine::OverlayEngine(unsigned long const&, unsigned int, unsigned int) */
int _ZN13OverlayEngineC1ERKmjj(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmmjbiiiijjiimibiEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned long, unsigned int, bool, int, int, int, int, unsigned int, unsigned int, int, int, unsigned long, int, bool, int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned long, unsigned int, bool, int, int, int, int, unsigned int, unsigned int, int, int, unsigned long, int, bool, int) */
int _ZN9DbgLoggerC2IJPKcmmjbiiiijjiimibiEEERKjRKhS2_DpT_(void);

/* Symbol: _ZNK7android12SortedVectorINS_2spI16HWCVSyncListenerEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::sp<HWCVSyncListener> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_2spI16HWCVSyncListenerEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN18DisplayBufferQueue12cancelBufferEi */
/* Demangled: DisplayBufferQueue::cancelBuffer(int) */
int _ZN18DisplayBufferQueue12cancelBufferEi(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcP9SyncFenceS2_miiEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, SyncFence*, char const*, unsigned long, int, int>(unsigned int const&, unsigned char const&, char const*, char const*, SyncFence*, char const*, unsigned long, int, int) */
int _ZN9DbgLoggerC2IJPKcP9SyncFenceS2_miiEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN9DbgLoggerC2IJPKciiiiiiiiEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, int, int, int, int, int, int, int, int>(unsigned int const&, unsigned char const&, char const*, char const*, int, int, int, int, int, int, int, int) */
int _ZN9DbgLoggerC2IJPKciiiiiiiiEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmjiiPK13native_handleEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned int, int, int, native_handle const*>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned int, int, int, native_handle const*) */
int _ZN9DbgLoggerC2IJPKcmjiiPK13native_handleEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcS2_jjjjjjEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
int _ZN9DbgLoggerC2IJPKcS2_jjjjjjEEERKjRKhS2_DpT_(void);

/* Symbol: _ZNK3hwc14Gralloc4Mapper7getNameEPK13native_handlePNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE */
/* Demangled: hwc::Gralloc4Mapper::getName(native_handle const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) const */
int _ZNK3hwc14Gralloc4Mapper7getNameEPK13native_handlePNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void);

/* Symbol: _ZN10BliterNode6setDstERKjPNS_9ParameterEijPi */
/* Demangled: BliterNode::setDst(unsigned int const&, BliterNode::Parameter*, int, unsigned int, int*) */
int _ZN10BliterNode6setDstERKjPNS_9ParameterEijPi(void);

/* Symbol: _ZN14PlatformCommon29getLimitedExternalDisplaySizeEv */
/* Demangled: PlatformCommon::getLimitedExternalDisplaySize() */
int _ZN14PlatformCommon29getLimitedExternalDisplaySizeEv(void);

/* Symbol: _ZNK3hwc14Gralloc2Mapper6unlockEPK13native_handle */
/* Demangled: hwc::Gralloc2Mapper::unlock(native_handle const*) const */
int _ZNK3hwc14Gralloc2Mapper6unlockEPK13native_handle(void);

/* Symbol: _ZN11HWCMediator17displayGetConfigsEP11hwc2_devicemPjS2_ */
/* Demangled: HWCMediator::displayGetConfigs(hwc2_device*, unsigned long, unsigned int*, unsigned int*) */
int _ZN11HWCMediator17displayGetConfigsEP11hwc2_devicemPjS2_(void);

/* Symbol: _ZNK10HWCDisplay26getChangedCompositionTypesEPjPmPi */
/* Demangled: HWCDisplay::getChangedCompositionTypes(unsigned int*, unsigned long*, int*) const */
int _ZNK10HWCDisplay26getChangedCompositionTypesEPjPmPi(void);

/* Symbol: _ZNK7android6VectorIPK13native_handleE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<native_handle const*>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIPK13native_handleE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK7android9Transform4dumpEPKc */
/* Demangled: android::Transform::dump(char const*) const */
int _ZNK7android9Transform4dumpEPKc(void);

/* Symbol: _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalINS_6vectorIhNS_9allocatorIhEEEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS7_ISX_EEFvNSI_5ErrorESQ_EEE */
/* Demangled: _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalINS_6vectorIhNS_9allocatorIhEEEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS7_ISX_EEFvNSI_5ErrorESQ_EEE */
extern void* _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalINS_6vectorIhNS_9allocatorIhEEEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS7_ISX_EEFvNSI_5ErrorESQ_EEE;

/* Symbol: _Z15mapDpColorRangejRKb */
/* Demangled: mapDpColorRange(unsigned int, bool const&) */
int _Z15mapDpColorRangejRKb(void);

/* Symbol: _Z13findGlesRangeRKNSt3__16vectorIN7android2spI8HWCLayerEENS_9allocatorIS4_EEEEPiSA_ */
/* Demangled: findGlesRange(std::__1::vector<android::sp<HWCLayer>, std::__1::allocator<android::sp<HWCLayer> > > const&, int*, int*) */
int _Z13findGlesRangeRKNSt3__16vectorIN7android2spI8HWCLayerEENS_9allocatorIS4_EEEEPiSA_(void);

/* Symbol: _ZN10DispDevice31isConstantAlphaForRGBASupportedEv */
/* Demangled: DispDevice::isConstantAlphaForRGBASupported() */
int _ZN10DispDevice31isConstantAlphaForRGBASupportedEv(void);

/* Symbol: _ZN3hwc19GraphicBufferMapper19getProtectedContentEPK13native_handlePm */
/* Demangled: hwc::GraphicBufferMapper::getProtectedContent(native_handle const*, unsigned long*) */
int _ZN3hwc19GraphicBufferMapper19getProtectedContentEPK13native_handlePm(void);

/* Symbol: _ZN13OverlayEngine4stopEv */
/* Demangled: OverlayEngine::stop() */
int _ZN13OverlayEngine4stopEv(void);

/* Symbol: _ZTT14DispatchThread */
/* Demangled: VTT for DispatchThread */
extern void* _ZTT14DispatchThread;

/* Symbol: _ZNK7android6VectorIPN13OverlayEngine12OverlayInputEE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<OverlayEngine::OverlayInput*>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIPN13OverlayEngine12OverlayInputEE16do_move_backwardEPvPKvm(void);

/* Symbol: HWC_COMPOSITION_FILE_PLATFORM_COMMON_STR */
/* Demangled: HWC_COMPOSITION_FILE_PLATFORM_COMMON_STR */
extern void* HWC_COMPOSITION_FILE_PLATFORM_COMMON_STR;

/* Symbol: _ZN10HWCDisplay17decUnpresentCountEv */
/* Demangled: HWCDisplay::decUnpresentCount() */
int _ZN10HWCDisplay17decUnpresentCountEv(void);

/* Symbol: _ZN10PerfHelper7loadApiEv */
/* Demangled: PerfHelper::loadApi() */
int _ZN10PerfHelper7loadApiEv(void);

/* Symbol: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE7__cloneEv */
/* Demangled: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE7__cloneEv */
int _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE7__cloneEv(void);

/* Symbol: _ZN16HWVSyncEstimator19resetAvgVSyncPeriodEl */
/* Demangled: HWVSyncEstimator::resetAvgVSyncPeriod(long) */
int _ZN16HWVSyncEstimator19resetAvgVSyncPeriodEl(void);

/* Symbol: _ZN15ComposerHandler7processEP13DispatcherJob */
/* Demangled: ComposerHandler::process(DispatcherJob*) */
int _ZN15ComposerHandler7processEP13DispatcherJob(void);

/* Symbol: _ZN7android10FpsCounter5resetEv */
/* Demangled: android::FpsCounter::reset() */
int _ZN7android10FpsCounter5resetEv(void);

/* Symbol: _ZNK3hwc14Gralloc4Mapper11getBufferIdEPK13native_handlePm */
/* Demangled: hwc::Gralloc4Mapper::getBufferId(native_handle const*, unsigned long*) const */
int _ZNK3hwc14Gralloc4Mapper11getBufferIdEPK13native_handlePm(void);

/* Symbol: _ZTVN7android6VectorINS_2spI13DispatcherJobEEEE */
/* Demangled: vtable for android::Vector<android::sp<DispatcherJob> > */
extern void* _ZTVN7android6VectorINS_2spI13DispatcherJobEEEE;

/* Symbol: _ZN13LayerComposerD2Ev */
/* Demangled: LayerComposer::~LayerComposer() */
int _ZN13LayerComposerD2Ev(void);

/* Symbol: _ZN13OverlayEngine10threadLoopEv */
/* Demangled: OverlayEngine::threadLoop() */
int _ZN13OverlayEngine10threadLoopEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN10BliterNode8JobParamEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS6_PvEEEE */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<BliterNode::JobParam> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<BliterNode::JobParam> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<BliterNode::JobParam> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<BliterNode::JobParam> > > >::remove(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<BliterNode::JobParam> >, void*>*>) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN10BliterNode8JobParamEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS6_PvEEEE(void);

/* Symbol: _Z11getSrcWidthRKN7android2spI8HWCLayerEE */
/* Demangled: getSrcWidth(android::sp<HWCLayer> const&) */
int _Z11getSrcWidthRKN7android2spI8HWCLayerEE(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcS2_iijEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char const*, int, int, unsigned int>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, int, int, unsigned int) */
int _ZN9DbgLoggerC2IJPKcS2_iijEEERKjRKhS2_DpT_(void);

/* Symbol: _ZNK3hwc14Gralloc4Mapper28validateBufferDescriptorInfoEPN7android8hardware8graphics6mapper4V4_07IMapper20BufferDescriptorInfoE */
/* Demangled: hwc::Gralloc4Mapper::validateBufferDescriptorInfo(android::hardware::graphics::mapper::V4_0::IMapper::BufferDescriptorInfo*) const */
int _ZNK3hwc14Gralloc4Mapper28validateBufferDescriptorInfoEPN7android8hardware8graphics6mapper4V4_07IMapper20BufferDescriptorInfoE(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmdEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, double>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, double) */
int _ZN9DbgLoggerC2IJPKcmdEEERKjRKhS2_DpT_(void);

/* Symbol: _ZTv0_n24_N20RefreshRequestThreadD1Ev */
/* Demangled: virtual thunk to RefreshRequestThread::~RefreshRequestThread() */
int _ZTv0_n24_N20RefreshRequestThreadD1Ev(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmjiPK13native_handleibEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned int, int, native_handle const*, int, bool>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned int, int, native_handle const*, int, bool) */
int _ZN9DbgLoggerC2IJPKcmjiPK13native_handleibEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmjij13DP_COLOR_ENUMiiiiEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned int, int, unsigned int, DP_COLOR_ENUM, int, int, int, int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned int, int, unsigned int, DP_COLOR_ENUM, int, int, int, int) */
int _ZN9DbgLoggerC2IJPKcmjij13DP_COLOR_ENUMiiiiEEERKjRKhS2_DpT_(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN10DispDevice19enableOverlayOutputEmP16OverlayPortParam */
/* Demangled: DispDevice::enableOverlayOutput(unsigned long, OverlayPortParam*) */
int _ZN10DispDevice19enableOverlayOutputEmP16OverlayPortParam(void);

/* Symbol: _ZNK3hwc14Gralloc4Mapper12getDataspaceEPK13native_handlePN7android8hardware8graphics6common4V1_29DataspaceE */
/* Demangled: hwc::Gralloc4Mapper::getDataspace(native_handle const*, android::hardware::graphics::common::V1_2::Dataspace*) const */
int _ZNK3hwc14Gralloc4Mapper12getDataspaceEPK13native_handlePN7android8hardware8graphics6common4V1_29DataspaceE(void);

/* Symbol: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS8_ISX_EEFvNSI_5ErrorESQ_EE7__cloneEPNS0_6__baseIS10_EE */
/* Demangled: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS8_ISX_EEFvNSI_5ErrorESQ_EE7__cloneEPNS0_6__baseIS10_EE */
int _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS8_ISX_EEFvNSI_5ErrorESQ_EE7__cloneEPNS0_6__baseIS10_EE(void);

/* Symbol: _ZN11HWCMediator29layerStateSetPerFrameMetadataEP11hwc2_devicemmjPKiPKf */
/* Demangled: HWCMediator::layerStateSetPerFrameMetadata(hwc2_device*, unsigned long, unsigned long, unsigned int, int const*, float const*) */
int _ZN11HWCMediator29layerStateSetPerFrameMetadataEP11hwc2_devicemmjPKiPKf(void);

/* Symbol: _ZN14DisplayManager14getDisplayDataEmj */
/* Demangled: DisplayManager::getDisplayData(unsigned long, unsigned int) */
int _ZN14DisplayManager14getDisplayDataEmj(void);

/* Symbol: _ZN9DbgLoggerC2IJmEEERKjRKhPKcDpT_ */
/* Demangled: DbgLogger::DbgLogger<unsigned long>(unsigned int const&, unsigned char const&, char const*, unsigned long) */
int _ZN9DbgLoggerC2IJmEEERKjRKhPKcDpT_(void);

/* Symbol: g_set_comp_from_sf_log_prefix */
/* Demangled: g_set_comp_from_sf_log_prefix */
extern void* g_set_comp_from_sf_log_prefix;

/* Symbol: _ZN14DisplayManagerD1Ev */
/* Demangled: DisplayManager::~DisplayManager() */
int _ZN14DisplayManagerD1Ev(void);

/* Symbol: _ZN18AsyncBliterHandlerD0Ev */
/* Demangled: AsyncBliterHandler::~AsyncBliterHandler() */
int _ZN18AsyncBliterHandlerD0Ev(void);

/* Symbol: _ZNK8HWCLayer8getXformEv */
/* Demangled: HWCLayer::getXform() const */
int _ZNK8HWCLayer8getXformEv(void);

/* Symbol: _ZN11HWCMediator14displayGetNameEP11hwc2_devicemPjPc */
/* Demangled: HWCMediator::displayGetName(hwc2_device*, unsigned long, unsigned int*, char*) */
int _ZN11HWCMediator14displayGetNameEP11hwc2_devicemPjPc(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcibEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, int, bool>(unsigned int const&, unsigned char const&, char const*, char const*, int, bool) */
int _ZN9DbgLoggerC2IJPKcibEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN9HWCThread4waitEv */
/* Demangled: HWCThread::wait() */
int _ZN9HWCThread4waitEv(void);

/* Symbol: HWC2_BLEND_MODE_INVALID_STR */
/* Demangled: HWC2_BLEND_MODE_INVALID_STR */
extern void* HWC2_BLEND_MODE_INVALID_STR;

/* Symbol: _ZN3hwc19GraphicBufferMapper21getDefaultCompressionEjjijmPN4aidl7android8hardware8graphics6common14ExtendableTypeE */
/* Demangled: hwc::GraphicBufferMapper::getDefaultCompression(unsigned int, unsigned int, int, unsigned int, unsigned long, aidl::android::hardware::graphics::common::ExtendableType*) */
int _ZN3hwc19GraphicBufferMapper21getDefaultCompressionEjjijmPN4aidl7android8hardware8graphics6common14ExtendableTypeE(void);

/* Symbol: _ZNK14DisplayManager12getVideoHdcpEv */
/* Demangled: DisplayManager::getVideoHdcp() const */
int _ZNK14DisplayManager12getVideoHdcpEv(void);

/* Symbol: _ZN15AsyncBlitDevice32isDisplaySupportedWidthAndHeightEjj */
/* Demangled: AsyncBlitDevice::isDisplaySupportedWidthAndHeight(unsigned int, unsigned int) */
int _ZN15AsyncBlitDevice32isDisplaySupportedWidthAndHeightEjj(void);

/* Symbol: _Z11getDstRightRKN7android2spI8HWCLayerEE */
/* Demangled: getDstRight(android::sp<HWCLayer> const&) */
int _Z11getDstRightRKN7android2spI8HWCLayerEE(void);

/* Symbol: _ZN7android10SWWatchDog13DEFAULT_TIMERE */
/* Demangled: android::SWWatchDog::DEFAULT_TIMER */
extern void* _ZN7android10SWWatchDog13DEFAULT_TIMERE;

/* Symbol: _ZN13LayerComposer7triggerEP13DispatcherJob */
/* Demangled: LayerComposer::trigger(DispatcherJob*) */
int _ZN13LayerComposer7triggerEP13DispatcherJob(void);

/* Symbol: _ZTv0_n24_N13OverlayEngineD1Ev */
/* Demangled: virtual thunk to OverlayEngine::~OverlayEngine() */
int _ZTv0_n24_N13OverlayEngineD1Ev(void);

/* Symbol: _ZN15AsyncBlitDevice15queryValidLayerEPv */
/* Demangled: AsyncBlitDevice::queryValidLayer(void*) */
int _ZN15AsyncBlitDevice15queryValidLayerEPv(void);

/* Symbol: _ZNK7android6VectorI10MdpJobInfoE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<MdpJobInfo>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorI10MdpJobInfoE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIibEENS_22__unordered_map_hasherIiS2_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS2_NS_8equal_toIiEELb1EEENS_9allocatorIS2_EEE14__erase_uniqueIiEEmRKT_ */
/* Demangled: unsigned long std::__1::__hash_table<std::__1::__hash_value_type<int, bool>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, bool>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, bool>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, bool> > >::__erase_unique<int>(int const&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIibEENS_22__unordered_map_hasherIiS2_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS2_NS_8equal_toIiEELb1EEENS_9allocatorIS2_EEE14__erase_uniqueIiEEmRKT_(void);

/* Symbol: _Z17getCompFileStringRK13HWC_COMP_FILE */
/* Demangled: getCompFileString(HWC_COMP_FILE const&) */
int _Z17getCompFileStringRK13HWC_COMP_FILE(void);

/* Symbol: _ZN10DispDevice17dynamicFPSHandlerEv */
/* Demangled: DispDevice::dynamicFPSHandler() */
int _ZN10DispDevice17dynamicFPSHandlerEv(void);

/* Symbol: _Z11getPqDevicev */
/* Demangled: getPqDevice() */
int _Z11getPqDevicev(void);

/* Symbol: _ZNK10HWCDisplay7getTypeEPi */
/* Demangled: HWCDisplay::getType(int*) const */
int _ZNK10HWCDisplay7getTypeEPi(void);

/* Symbol: _ZN9DbgLoggerC2IJPKclEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, long>(unsigned int const&, unsigned char const&, char const*, char const*, long) */
int _ZN9DbgLoggerC2IJPKclEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN16DbgLogBufManager4dumpEPN7android7String8E */
/* Demangled: DbgLogBufManager::dump(android::String8*) */
int _ZN16DbgLogBufManager4dumpEPN7android7String8E(void);

/* Symbol: _ZTC12UEventThread0_9HWCThread */
/* Demangled: construction vtable for HWCThread-in-UEventThread */
extern void* _ZTC12UEventThread0_9HWCThread;

/* Symbol: _ZN10ObjectPoolI9FrameInfoE13getFreeObjectEv */
/* Demangled: ObjectPool<FrameInfo>::getFreeObject() */
int _ZN10ObjectPoolI9FrameInfoE13getFreeObjectEv(void);

/* Symbol: _ZTVN7android6VectorIP16OverlayPortParamEE */
/* Demangled: vtable for android::Vector<OverlayPortParam*> */
extern void* _ZTVN7android6VectorIP16OverlayPortParamEE;

/* Symbol: _ZN11HWCMediator18layerStateSetColorEP11hwc2_devicemm9hwc_color */
/* Demangled: HWCMediator::layerStateSetColor(hwc2_device*, unsigned long, unsigned long, hwc_color) */
int _ZN11HWCMediator18layerStateSetColorEP11hwc2_devicemm9hwc_color(void);

/* Symbol: _ZN23PanelEventMonitorThread10readyToRunEv */
/* Demangled: PanelEventMonitorThread::readyToRun() */
int _ZN23PanelEventMonitorThread10readyToRunEv(void);

/* Symbol: _ZN11WhiteBuffer9setNormalEv */
/* Demangled: WhiteBuffer::setNormal() */
int _ZN11WhiteBuffer9setNormalEv(void);

/* Symbol: _ZN10DispDeviceC2Ev */
/* Demangled: DispDevice::DispDevice() */
int _ZN10DispDeviceC2Ev(void);

/* Symbol: _ZN3hwc19GraphicBufferMapper22getDefaultPlaneLayoutsEjjijmPNSt3__16vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS1_9allocatorIS8_EEEE */
/* Demangled: hwc::GraphicBufferMapper::getDefaultPlaneLayouts(unsigned int, unsigned int, int, unsigned int, unsigned long, std::__1::vector<aidl::android::hardware::graphics::common::PlaneLayout, std::__1::allocator<aidl::android::hardware::graphics::common::PlaneLayout> >*) */
int _ZN3hwc19GraphicBufferMapper22getDefaultPlaneLayoutsEjjijmPNSt3__16vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS1_9allocatorIS8_EEEE(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcS2_mjEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char const*, unsigned long, unsigned int>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, unsigned long, unsigned int) */
int _ZN9DbgLoggerC2IJPKcS2_mjEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN14PqDeviceLegacyC1Ev */
/* Demangled: PqDeviceLegacy::PqDeviceLegacy() */
int _ZN14PqDeviceLegacyC1Ev(void);

/* Symbol: _ZN10HWCDisplay27getInvisibleLayersSortedByZEv */
/* Demangled: HWCDisplay::getInvisibleLayersSortedByZ() */
int _ZN10HWCDisplay27getInvisibleLayersSortedByZEv(void);

/* Symbol: _ZN13OverlayEngine9setOutputEP16OverlayPortParamb */
/* Demangled: OverlayEngine::setOutput(OverlayPortParam*, bool) */
int _ZN13OverlayEngine9setOutputEP16OverlayPortParamb(void);

/* Symbol: _ZN10IdleThread10threadLoopEv */
/* Demangled: IdleThread::threadLoop() */
int _ZN10IdleThread10threadLoopEv(void);

/* Symbol: _ZN11HWCMediator22displaySetVsyncEnabledEP11hwc2_devicemi */
/* Demangled: HWCMediator::displaySetVsyncEnabled(hwc2_device*, unsigned long, int) */
int _ZN11HWCMediator22displaySetVsyncEnabledEP11hwc2_devicemi(void);

/* Symbol: _ZN14DisplayManager5vsyncEmlb */
/* Demangled: DisplayManager::vsync(unsigned long, long, bool) */
int _ZN14DisplayManager5vsyncEmlb(void);

/* Symbol: _ZTC13OverlayEngine0_N7android6ThreadE */
/* Demangled: construction vtable for android::Thread-in-OverlayEngine */
extern void* _ZTC13OverlayEngine0_N7android6ThreadE;

/* Symbol: _ZN18DisplayBufferQueue10dumpLockedEi */
/* Demangled: DisplayBufferQueue::dumpLocked(int) */
int _ZN18DisplayBufferQueue10dumpLockedEi(void);

/* Symbol: _Z16mapDpOrientationj */
/* Demangled: mapDpOrientation(unsigned int) */
int _Z16mapDpOrientationj(void);

/* Symbol: _ZN7android2spI14ColorTransformEaSEPS1_ */
/* Demangled: android::sp<ColorTransform>::operator=(ColorTransform*) */
int _ZN7android2spI14ColorTransformEaSEPS1_(void);

/* Symbol: _ZN13HWCDispatcher21decideCtDirtyAndFlushEmj */
/* Demangled: HWCDispatcher::decideCtDirtyAndFlush(unsigned long, unsigned int) */
int _ZN13HWCDispatcher21decideCtDirtyAndFlushEmj(void);

/* Symbol: _ZN8HWCLayer8id_countE */
/* Demangled: HWCLayer::id_count */
extern void* _ZN8HWCLayer8id_countE;

/* Symbol: _ZNK7android6VectorINS_2spI13DispatcherJobEEE8do_splatEPvPKvm */
/* Demangled: android::Vector<android::sp<DispatcherJob> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spI13DispatcherJobEEE8do_splatEPvPKvm(void);

/* Symbol: _ZTv0_n32_N14DispatchThread10onFirstRefEv */
/* Demangled: virtual thunk to DispatchThread::onFirstRef() */
int _ZTv0_n32_N14DispatchThread10onFirstRefEv(void);

/* Symbol: _ZTV12UEventThread */
/* Demangled: vtable for UEventThread */
extern void* _ZTV12UEventThread;

/* Symbol: _Z15getDstDataspaceRKi */
/* Demangled: getDstDataspace(int const&) */
int _Z15getDstDataspaceRKi(void);

/* Symbol: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getImEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EE7__cloneEv */
/* Demangled: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getImEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EE7__cloneEv */
int _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getImEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EE7__cloneEv(void);

/* Symbol: _ZNK10HWCDisplay11isConnectedEv */
/* Demangled: HWCDisplay::isConnected() const */
int _ZNK10HWCDisplay11isConnectedEv(void);

/* Symbol: _ZTT9HWCThread */
/* Demangled: VTT for HWCThread */
extern void* _ZTT9HWCThread;

/* Symbol: _ZN9IPqDevice17setColorTransformEPKfRKi */
/* Demangled: IPqDevice::setColorTransform(float const*, int const&) */
int _ZN9IPqDevice17setColorTransformEPKfRKi(void);

/* Symbol: _ZN8DebuggerD1Ev */
/* Demangled: Debugger::~Debugger() */
int _ZN8DebuggerD1Ev(void);

/* Symbol: _ZN7android10FpsCounter13RingBufferFps13WriteToBufferERKS0_ */
/* Demangled: android::FpsCounter::RingBufferFps::WriteToBuffer(android::FpsCounter const&) */
int _ZN7android10FpsCounter13RingBufferFps13WriteToBufferERKS0_(void);

/* Symbol: _ZTv0_n24_N15TouchHintThreadD0Ev */
/* Demangled: virtual thunk to TouchHintThread::~TouchHintThread() */
int _ZTv0_n24_N15TouchHintThreadD0Ev(void);

/* Symbol: _ZN10BliterNode18DstInvalidateParam4dumpEv */
/* Demangled: BliterNode::DstInvalidateParam::dump() */
int _ZN10BliterNode18DstInvalidateParam4dumpEv(void);

/* Symbol: _ZN11HWCMediator22displayGetActiveConfigEP11hwc2_devicemPj */
/* Demangled: HWCMediator::displayGetActiveConfig(hwc2_device*, unsigned long, unsigned int*) */
int _ZN11HWCMediator22displayGetActiveConfigEP11hwc2_devicemPj(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmmS2_EEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned long, char const*>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned long, char const*) */
int _ZN9DbgLoggerC2IJPKcmmS2_EEERKjRKhS2_DpT_(void);

/* Symbol: _ZN14DisplayManager27getSupportedColorModeVectorEmRN7android6VectorIiEE */
/* Demangled: DisplayManager::getSupportedColorModeVector(unsigned long, android::Vector<int>&) */
int _ZN14DisplayManager27getSupportedColorModeVectorEmRN7android6VectorIiEE(void);

/* Symbol: _ZN11VSyncThreadC2Em */
/* Demangled: VSyncThread::VSyncThread(unsigned long) */
int _ZN11VSyncThreadC2Em(void);

/* Symbol: _ZN13OverlayEngineD1Ev */
/* Demangled: OverlayEngine::~OverlayEngine() */
int _ZN13OverlayEngineD1Ev(void);

/* Symbol: _ZNK3hwc14Gralloc4Mapper15getPlaneLayoutsEPK13native_handlePNSt3__16vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS4_9allocatorISB_EEEE */
/* Demangled: hwc::Gralloc4Mapper::getPlaneLayouts(native_handle const*, std::__1::vector<aidl::android::hardware::graphics::common::PlaneLayout, std::__1::allocator<aidl::android::hardware::graphics::common::PlaneLayout> >*) const */
int _ZNK3hwc14Gralloc4Mapper15getPlaneLayoutsEPK13native_handlePNSt3__16vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS4_9allocatorISB_EEEE(void);

/* Symbol: _ZNK3hwc14Gralloc4Mapper18validateBufferSizeEPK13native_handlejjijmj */
/* Demangled: hwc::Gralloc4Mapper::validateBufferSize(native_handle const*, unsigned int, unsigned int, int, unsigned int, unsigned long, unsigned int) const */
int _ZNK3hwc14Gralloc4Mapper18validateBufferSizeEPK13native_handlejjijmj(void);

/* Symbol: _ZN10HWCDisplay4dumpEPN7android7String8E */
/* Demangled: HWCDisplay::dump(android::String8*) */
int _ZN10HWCDisplay4dumpEPN7android7String8E(void);

/* Symbol: _ZN9DbgLoggerC2IJPKclllEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, long, long, long>(unsigned int const&, unsigned char const&, char const*, char const*, long, long, long) */
int _ZN9DbgLoggerC2IJPKclllEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN11HWCMediator15getCapabilitiesEPjPi */
/* Demangled: HWCMediator::getCapabilities(unsigned int*, int*) */
int _ZN11HWCMediator15getCapabilitiesEPjPi(void);

/* Symbol: _ZN11HWCMediator25layerStateSetDisplayFrameEP11hwc2_devicemm8hwc_rect */
/* Demangled: HWCMediator::layerStateSetDisplayFrame(hwc2_device*, unsigned long, unsigned long, hwc_rect) */
int _ZN11HWCMediator25layerStateSetDisplayFrameEP11hwc2_devicemm8hwc_rect(void);

/* Symbol: _ZN11SessionInfoC1Ev */
/* Demangled: SessionInfo::SessionInfo() */
int _ZN11SessionInfoC1Ev(void);

/* Symbol: _ZN20RefreshRequestThread10initializeEv */
/* Demangled: RefreshRequestThread::initialize() */
int _ZN20RefreshRequestThread10initializeEv(void);

/* Symbol: _ZN11BlackBuffer9setNormalEv */
/* Demangled: BlackBuffer::setNormal() */
int _ZN11BlackBuffer9setNormalEv(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmiijiPcEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, int, int, unsigned int, int, char*>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, int, int, unsigned int, int, char*) */
int _ZN9DbgLoggerC2IJPKcmiijiPcEEERKjRKhS2_DpT_(void);

/* Symbol: _ZNK3hwc14Gralloc4Mapper10getDefaultINSt3__16vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS2_9allocatorIS9_EEEEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSE_8hidl_vecIhEEPT_ESR_ */
/* Demangled: int hwc::Gralloc4Mapper::getDefault<std::__1::vector<aidl::android::hardware::graphics::common::PlaneLayout, std::__1::allocator<aidl::android::hardware::graphics::common::PlaneLayout> > >(unsigned int, unsigned int, int, unsigned int, unsigned long, android::hardware::graphics::mapper::V4_0::IMapper::MetadataType const&, int (*)(android::hardware::hidl_vec<unsigned char> const&, std::__1::vector<aidl::android::hardware::graphics::common::PlaneLayout, std::__1::allocator<aidl::android::hardware::graphics::common::PlaneLayout> >*), std::__1::vector<aidl::android::hardware::graphics::common::PlaneLayout, std::__1::allocator<aidl::android::hardware::graphics::common::PlaneLayout> >*) const */
int _ZNK3hwc14Gralloc4Mapper10getDefaultINSt3__16vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS2_9allocatorIS9_EEEEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSE_8hidl_vecIhEEPT_ESR_(void);

/* Symbol: _ZNK3hwc14Gralloc4Mapper15getChromaSitingEPK13native_handlePN4aidl7android8hardware8graphics6common14ExtendableTypeE */
/* Demangled: hwc::Gralloc4Mapper::getChromaSiting(native_handle const*, aidl::android::hardware::graphics::common::ExtendableType*) const */
int _ZNK3hwc14Gralloc4Mapper15getChromaSitingEPK13native_handlePN4aidl7android8hardware8graphics6common14ExtendableTypeE(void);

/* Symbol: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIjEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EE7__cloneEv */
/* Demangled: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIjEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EE7__cloneEv */
int _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIjEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EE7__cloneEv(void);

/* Symbol: _ZN10ObjectPoolI9FrameInfoEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEm */
/* Demangled: ObjectPool<FrameInfo>::ObjectPool(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned long) */
int _ZN10ObjectPoolI9FrameInfoEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEm(void);

/* Symbol: _ZN10BliterNode19calculateContentROIEPN7android4RectERK6DpRectS5_i */
/* Demangled: BliterNode::calculateContentROI(android::Rect*, DpRect const&, DpRect const&, int) */
int _ZN10BliterNode19calculateContentROIEPN7android4RectERK6DpRectS5_i(void);

/* Symbol: _ZN16DbgLogBufManager13releaseLogBufEPNS_7DBG_BUFE */
/* Demangled: DbgLogBufManager::releaseLogBuf(DbgLogBufManager::DBG_BUF*) */
int _ZN16DbgLogBufManager13releaseLogBufEPNS_7DBG_BUFE(void);

/* Symbol: _ZN8Debugger15setLogThresholdERKh */
/* Demangled: Debugger::setLogThreshold(unsigned char const&) */
int _ZN8Debugger15setLogThresholdERKh(void);

/* Symbol: _ZN13OverlayEngine18configMirrorOutputEP13DispatcherJob */
/* Demangled: OverlayEngine::configMirrorOutput(DispatcherJob*) */
int _ZN13OverlayEngine18configMirrorOutputEP13DispatcherJob(void);

/* Symbol: _ZN18AsyncBliterHandler21getDisplayBufferQueueEP7HWLayer */
/* Demangled: AsyncBliterHandler::getDisplayBufferQueue(HWLayer*) */
int _ZN18AsyncBliterHandler21getDisplayBufferQueueEP7HWLayer(void);

/* Symbol: _ZTV18AsyncBliterHandler */
/* Demangled: vtable for AsyncBliterHandler */
extern void* _ZTV18AsyncBliterHandler;

/* Symbol: _Z14getBlendStringRKi */
/* Demangled: getBlendString(int const&) */
int _Z14getBlendStringRKi(void);

/* Symbol: _ZN10DispDevice9getHeightEmj */
/* Demangled: DispDevice::getHeight(unsigned long, unsigned int) */
int _ZN10DispDevice9getHeightEmj(void);

/* Symbol: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultImEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EEclEOSR_SH_ */
/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultImEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EEclEOSR_SH_ */
int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultImEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EEclEOSR_SH_(void);

/* Symbol: _ZN9MmBufDumpD1Ev */
/* Demangled: MmBufDump::~MmBufDump() */
int _ZN9MmBufDumpD1Ev(void);

/* Symbol: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getImEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EE7__cloneEPNS0_6__baseISV_EE */
/* Demangled: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getImEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EE7__cloneEPNS0_6__baseISV_EE */
int _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getImEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EE7__cloneEPNS0_6__baseISV_EE(void);

/* Symbol: _ZN20RefreshRequestThreadD2Ev */
/* Demangled: RefreshRequestThread::~RefreshRequestThread() */
int _ZN20RefreshRequestThreadD2Ev(void);

/* Symbol: _ZN9DbgLoggerC2IJPKciiiiiiEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, int, int, int, int, int, int>(unsigned int const&, unsigned char const&, char const*, char const*, int, int, int, int, int, int) */
int _ZN9DbgLoggerC2IJPKciiiiiiEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN15AsyncBlitDevice20createOverlaySessionEmjj13HWC_DISP_MODE */
/* Demangled: AsyncBlitDevice::createOverlaySession(unsigned long, unsigned int, unsigned int, HWC_DISP_MODE) */
int _ZN15AsyncBlitDevice20createOverlaySessionEmjj13HWC_DISP_MODE(void);

/* Symbol: HWC2_PRESENT_VALI_STATE_VALIDATE_DONE_STR */
/* Demangled: HWC2_PRESENT_VALI_STATE_VALIDATE_DONE_STR */
extern void* HWC2_PRESENT_VALI_STATE_VALIDATE_DONE_STR;

/* Symbol: _ZN10DispDevice14waitAllJobDoneEm */
/* Demangled: DispDevice::waitAllJobDone(unsigned long) */
int _ZN10DispDevice14waitAllJobDoneEm(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmbbEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, bool, bool>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, bool, bool) */
int _ZN9DbgLoggerC2IJPKcmbbEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN12LayerHandlerD1Ev */
/* Demangled: LayerHandler::~LayerHandler() */
int _ZN12LayerHandlerD1Ev(void);

/* Symbol: _ZN10DispDevice20createOverlaySessionEmjj13HWC_DISP_MODE */
/* Demangled: DispDevice::createOverlaySession(unsigned long, unsigned int, unsigned int, HWC_DISP_MODE) */
int _ZN10DispDevice20createOverlaySessionEmjj13HWC_DISP_MODE(void);

/* Symbol: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getImEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EEclEOSU_SK_ */
/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getImEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EEclEOSU_SK_ */
int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getImEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EEclEOSU_SK_(void);

/* Symbol: _Z15dumpTimeToTracev */
/* Demangled: dumpTimeToTrace() */
int _Z15dumpTimeToTracev(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueueEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char const*, DisplayBufferQueue*>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, DisplayBufferQueue*) */
int _ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueueEEERKjRKhS2_DpT_(void);

/* Symbol: _ZNK7android9Transform13preserveRectsEv */
/* Demangled: android::Transform::preserveRects() const */
int _ZNK7android9Transform13preserveRectsEv(void);

/* Symbol: _ZN7android10SWWatchDog9NO_ANCHORE */
/* Demangled: android::SWWatchDog::NO_ANCHOR */
extern void* _ZN7android10SWWatchDog9NO_ANCHORE;

/* Symbol: _ZN10HWCDisplay15setVsyncEnabledERKi */
/* Demangled: HWCDisplay::setVsyncEnabled(int const&) */
int _ZN10HWCDisplay15setVsyncEnabledERKi(void);

/* Symbol: _ZN13DispatcherJobD2Ev */
/* Demangled: DispatcherJob::~DispatcherJob() */
int _ZN13DispatcherJobD2Ev(void);

/* Symbol: _ZTV23PanelEventMonitorThread */
/* Demangled: vtable for PanelEventMonitorThread */
extern void* _ZTV23PanelEventMonitorThread;

/* Symbol: _ZN15ComposerHandler3setERKN7android2spI10HWCDisplayEEP13DispatcherJob */
/* Demangled: ComposerHandler::set(android::sp<HWCDisplay> const&, DispatcherJob*) */
int _ZN15ComposerHandler3setERKN7android2spI10HWCDisplayEEP13DispatcherJob(void);

/* Symbol: _Z17convertFormat4Hrtj */
/* Demangled: convertFormat4Hrt(unsigned int) */
int _Z17convertFormat4Hrtj(void);

/* Symbol: _ZN3hwc19GraphicBufferMapper22getDefaultChromaSitingEjjijmPN4aidl7android8hardware8graphics6common12ChromaSitingE */
/* Demangled: hwc::GraphicBufferMapper::getDefaultChromaSiting(unsigned int, unsigned int, int, unsigned int, unsigned long, aidl::android::hardware::graphics::common::ChromaSiting*) */
int _ZN3hwc19GraphicBufferMapper22getDefaultChromaSitingEjjijmPN4aidl7android8hardware8graphics6common12ChromaSitingE(void);

/* Symbol: _ZN13OverlayEngine18disableInputLockedEj */
/* Demangled: OverlayEngine::disableInputLocked(unsigned int) */
int _ZN13OverlayEngine18disableInputLockedEj(void);

/* Symbol: _ZNK7android6VectorIPN13OverlayEngine12OverlayInputEE12do_constructEPvm */
/* Demangled: android::Vector<OverlayEngine::OverlayInput*>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorIPN13OverlayEngine12OverlayInputEE12do_constructEPvm(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmjiPcEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned int, int, char*>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned int, int, char*) */
int _ZN9DbgLoggerC2IJPKcmjiPcEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN3hwc19GraphicBufferMapper11getCta861_3EPK13native_handlePNSt3__18optionalIN4aidl7android8hardware8graphics6common8Cta861_3EEE */
/* Demangled: hwc::GraphicBufferMapper::getCta861_3(native_handle const*, std::__1::optional<aidl::android::hardware::graphics::common::Cta861_3>*) */
int _ZN3hwc19GraphicBufferMapper11getCta861_3EPK13native_handlePNSt3__18optionalIN4aidl7android8hardware8graphics6common8Cta861_3EEE(void);

/* Symbol: _ZN8HWCLayer9setHandleERKPK13native_handle */
/* Demangled: HWCLayer::setHandle(native_handle const* const&) */
int _ZN8HWCLayer9setHandleERKPK13native_handle(void);

/* Symbol: _ZNK7android6VectorINS_2spI13DispatcherJobEEE7do_copyEPvPKvm */
/* Demangled: android::Vector<android::sp<DispatcherJob> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spI13DispatcherJobEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN9SyncFence4waitEiiPKc */
/* Demangled: SyncFence::wait(int, int, char const*) */
int _ZN9SyncFence4waitEiiPKc(void);

/* Symbol: _ZTV10DispDevice */
/* Demangled: vtable for DispDevice */
extern void* _ZTV10DispDevice;

/* Symbol: _ZN10HWCDisplay8getLayerERKm */
/* Demangled: HWCDisplay::getLayer(unsigned long const&) */
int _ZN10HWCDisplay8getLayerERKm(void);

/* Symbol: _ZNK7android6VectorIP16OverlayPortParamE7do_copyEPvPKvm */
/* Demangled: android::Vector<OverlayPortParam*>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIP16OverlayPortParamE7do_copyEPvPKvm(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmi13HWC_DISP_MODEEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, int, HWC_DISP_MODE>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, int, HWC_DISP_MODE) */
int _ZN9DbgLoggerC2IJPKcmi13HWC_DISP_MODEEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN7android10SWWatchDog6resumeEv */
/* Demangled: android::SWWatchDog::resume() */
int _ZN7android10SWWatchDog6resumeEv(void);

/* Symbol: HWC2_BLEND_MODE_UNKNOWN_STR */
/* Demangled: HWC2_BLEND_MODE_UNKNOWN_STR */
extern void* HWC2_BLEND_MODE_UNKNOWN_STR;

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN7android9WDTAnchorENS_9allocatorIS2_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<android::WDTAnchor, std::__1::allocator<android::WDTAnchor> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN7android9WDTAnchorENS_9allocatorIS2_EEEE;

/* Symbol: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS8_ISX_EEFvNSI_5ErrorESQ_EE7__cloneEv */
/* Demangled: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS8_ISX_EEFvNSI_5ErrorESQ_EE7__cloneEv */
int _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS8_ISX_EEFvNSI_5ErrorESQ_EE7__cloneEv(void);

/* Symbol: _ZTC15DisplayListener0_N14DisplayManager13EventListenerE */
/* Demangled: construction vtable for DisplayManager::EventListener-in-DisplayListener */
extern void* _ZTC15DisplayListener0_N14DisplayManager13EventListenerE;

/* Symbol: _ZN7android22DisplayFeatureCallback25displayfeatureInfoChangedEii */
/* Demangled: android::DisplayFeatureCallback::displayfeatureInfoChanged(int, int) */
int _ZN7android22DisplayFeatureCallback25displayfeatureInfoChangedEii(void);

/* Symbol: _ZZN7android15SWWatchDogTimer11getInstanceEvE8instance */
/* Demangled: android::SWWatchDogTimer::getInstance()::instance */
extern void* _ZZN7android15SWWatchDogTimer11getInstanceEvE8instance;

/* Symbol: _ZN15AsyncBlitDevice18getDisplayRotationEm */
/* Demangled: AsyncBlitDevice::getDisplayRotation(unsigned long) */
int _ZN15AsyncBlitDevice18getDisplayRotationEm(void);

/* Symbol: _ZN10DispDevice21getOverlaySessionInfoEmP11SessionInfo */
/* Demangled: DispDevice::getOverlaySessionInfo(unsigned long, SessionInfo*) */
int _ZN10DispDevice21getOverlaySessionInfoEmP11SessionInfo(void);

/* Symbol: _ZN7android10SWWatchDog12setThresholdERKl */
/* Demangled: android::SWWatchDog::setThreshold(long const&) */
int _ZN7android10SWWatchDog12setThresholdERKl(void);

/* Symbol: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSG_8hidl_vecIhEEPT_EST_EUlRKSS_SR_E_NSC_ISY_EEFvNSJ_5ErrorESR_EEclEOS10_SR_ */
/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSG_8hidl_vecIhEEPT_EST_EUlRKSS_SR_E_NSC_ISY_EEFvNSJ_5ErrorESR_EEclEOS10_SR_ */
int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSG_8hidl_vecIhEEPT_EST_EUlRKSS_SR_E_NSC_ISY_EEFvNSJ_5ErrorESR_EEclEOS10_SR_(void);

/* Symbol: _ZN15DisplayListener7onVSyncEmlb */
/* Demangled: DisplayListener::onVSync(unsigned long, long, bool) */
int _ZN15DisplayListener7onVSyncEmlb(void);

/* Symbol: _ZNK3hwc14Gralloc4Mapper19getProtectedContentEPK13native_handlePm */
/* Demangled: hwc::Gralloc4Mapper::getProtectedContent(native_handle const*, unsigned long*) const */
int _ZNK3hwc14Gralloc4Mapper19getProtectedContentEPK13native_handlePm(void);

/* Symbol: _ZN3hwc19GraphicBufferMapper12getBlendModeEPK13native_handlePN4aidl7android8hardware8graphics6common9BlendModeE */
/* Demangled: hwc::GraphicBufferMapper::getBlendMode(native_handle const*, aidl::android::hardware::graphics::common::BlendMode*) */
int _ZN3hwc19GraphicBufferMapper12getBlendModeEPK13native_handlePN4aidl7android8hardware8graphics6common9BlendModeE(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcPFvPvmEEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, void (*)(void*, unsigned long)>(unsigned int const&, unsigned char const&, char const*, char const*, void (*)(void*, unsigned long)) */
int _ZN9DbgLoggerC2IJPKcPFvPvmEEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN15TouchHintThreadD1Ev */
/* Demangled: TouchHintThread::~TouchHintThread() */
int _ZN15TouchHintThreadD1Ev(void);

/* Symbol: _ZN3hwc19GraphicBufferMapper24getDefaultAllocationSizeEjjijmPm */
/* Demangled: hwc::GraphicBufferMapper::getDefaultAllocationSize(unsigned int, unsigned int, int, unsigned int, unsigned long, unsigned long*) */
int _ZN3hwc19GraphicBufferMapper24getDefaultAllocationSizeEjjijmPm(void);

/* Symbol: _Z10getSrcLeftRKN7android2spI8HWCLayerEE */
/* Demangled: getSrcLeft(android::sp<HWCLayer> const&) */
int _Z10getSrcLeftRKN7android2spI8HWCLayerEE(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*>(unsigned int const&, unsigned char const&, char const*, char const*) */
int _ZN9DbgLoggerC2IJPKcEEERKjRKhS2_DpT_(void);

/* Symbol: _ZNSt3__16vectorIN7android2spI10HWCDisplayEENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<HWCDisplay>, std::__1::allocator<android::sp<HWCDisplay> > >::__push_back_slow_path<android::sp<HWCDisplay> const&>(android::sp<HWCDisplay> const&) */
int _ZNSt3__16vectorIN7android2spI10HWCDisplayEENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcPFvPvmiEEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, void (*)(void*, unsigned long, int)>(unsigned int const&, unsigned char const&, char const*, char const*, void (*)(void*, unsigned long, int)) */
int _ZN9DbgLoggerC2IJPKcPFvPvmiEEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN14DisplayManager15isAllDisplayOffEv */
/* Demangled: DisplayManager::isAllDisplayOff() */
int _ZN14DisplayManager15isAllDisplayOffEv(void);

/* Symbol: _ZN18AsyncBliterHandler12setPhyMirrorEP13DispatcherJob */
/* Demangled: AsyncBliterHandler::setPhyMirror(DispatcherJob*) */
int _ZN18AsyncBliterHandler12setPhyMirrorEP13DispatcherJob(void);

/* Symbol: _ZN9DbgLoggerC2IJPKciPvmEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, int, void*, unsigned long>(unsigned int const&, unsigned char const&, char const*, char const*, int, void*, unsigned long) */
int _ZN9DbgLoggerC2IJPKciPvmEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN10HWCDisplay9setOutbufERKPK13native_handleRKi */
/* Demangled: HWCDisplay::setOutbuf(native_handle const* const&, int const&) */
int _ZN10HWCDisplay9setOutbufERKPK13native_handleRKi(void);

/* Symbol: _ZN13OverlayEngine16packageFrameInfoERN7android2spI9FrameInfoEERKbRKjS8_RKiS6_NS1_I14ColorTransformEE */
/* Demangled: OverlayEngine::packageFrameInfo(android::sp<FrameInfo>&, bool const&, unsigned int const&, unsigned int const&, int const&, bool const&, android::sp<ColorTransform>) */
int _ZN13OverlayEngine16packageFrameInfoERN7android2spI9FrameInfoEERKbRKjS8_RKiS6_NS1_I14ColorTransformEE(void);

/* Symbol: _ZN15AsyncBlitDevice21getOverlaySessionModeEm */
/* Demangled: AsyncBlitDevice::getOverlaySessionMode(unsigned long) */
int _ZN15AsyncBlitDevice21getOverlaySessionModeEm(void);

/* Symbol: HWC_COMPOSITION_FILE_HWC_DISPLAY_STR */
/* Demangled: HWC_COMPOSITION_FILE_HWC_DISPLAY_STR */
extern void* HWC_COMPOSITION_FILE_HWC_DISPLAY_STR;

/* Symbol: _ZN13GrallocDeviceC1Ev */
/* Demangled: GrallocDevice::GrallocDevice() */
int _ZN13GrallocDeviceC1Ev(void);

/* Symbol: _ZN10DispDevice16dynamicFPSThreadEPv */
/* Demangled: DispDevice::dynamicFPSThread(void*) */
int _ZN10DispDevice16dynamicFPSThreadEPv(void);

/* Symbol: _ZNSt3__16vectorImNS_9allocatorImEEE21__push_back_slow_pathIRKmEEvOT_ */
/* Demangled: void std::__1::vector<unsigned long, std::__1::allocator<unsigned long> >::__push_back_slow_path<unsigned long const&>(unsigned long const&) */
int _ZNSt3__16vectorImNS_9allocatorImEEE21__push_back_slow_pathIRKmEEvOT_(void);

/* Symbol: _ZN13HWCDispatcher14VirPostHandler9setMirrorEP13DispatcherJobS2_ */
/* Demangled: HWCDispatcher::VirPostHandler::setMirror(DispatcherJob*, DispatcherJob*) */
int _ZN13HWCDispatcher14VirPostHandler9setMirrorEP13DispatcherJobS2_(void);

/* Symbol: _ZN13HWCDispatcherD1Ev */
/* Demangled: HWCDispatcher::~HWCDispatcher() */
int _ZN13HWCDispatcherD1Ev(void);

/* Symbol: _ZNK7android6VectorIPN13OverlayEngine12OverlayInputEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<OverlayEngine::OverlayInput*>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIPN13OverlayEngine12OverlayInputEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN15AsyncBlitDevice19getMaxOverlayHeightEv */
/* Demangled: AsyncBlitDevice::getMaxOverlayHeight() */
int _ZN15AsyncBlitDevice19getMaxOverlayHeightEv(void);

/* Symbol: _ZN14DisplayManager19notifyHotplugInDoneEv */
/* Demangled: DisplayManager::notifyHotplugInDone() */
int _ZN14DisplayManager19notifyHotplugInDoneEv(void);

/* Symbol: _ZN9SyncFenceD1Ev */
/* Demangled: SyncFence::~SyncFence() */
int _ZN9SyncFenceD1Ev(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmjiEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned int, int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned int, int) */
int _ZN9DbgLoggerC2IJPKcmjiEEERKjRKhS2_DpT_(void);

/* Symbol: _Z18hwcGetCapabilitiesP11hwc2_devicePjPi */
/* Demangled: hwcGetCapabilities(hwc2_device*, unsigned int*, int*) */
int _Z18hwcGetCapabilitiesP11hwc2_devicePjPi(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcS2_iPK13native_handleEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char const*, int, native_handle const*>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, int, native_handle const*) */
int _ZN9DbgLoggerC2IJPKcS2_iPK13native_handleEEERKjRKhS2_DpT_(void);

/* Symbol: HWC2_PRESENT_VALI_STATE_VALIDATE_STR */
/* Demangled: HWC2_PRESENT_VALI_STATE_VALIDATE_STR */
extern void* HWC2_PRESENT_VALI_STATE_VALIDATE_STR;

/* Symbol: _ZNK7android9Transform7getTypeEv */
/* Demangled: android::Transform::getType() const */
int _ZNK7android9Transform7getTypeEv(void);

/* Symbol: _ZTC12UEventThread0_N7android6ThreadE */
/* Demangled: construction vtable for android::Thread-in-UEventThread */
extern void* _ZTC12UEventThread0_N7android6ThreadE;

/* Symbol: _ZN13OverlayEngine12waitAllFenceERN7android2spI9FrameInfoEE */
/* Demangled: OverlayEngine::waitAllFence(android::sp<FrameInfo>&) */
int _ZN13OverlayEngine12waitAllFenceERN7android2spI9FrameInfoEE(void);

/* Symbol: _ZN13AbortMessagerD1Ev */
/* Demangled: AbortMessager::~AbortMessager() */
int _ZN13AbortMessagerD1Ev(void);

/* Symbol: _ZN10HWCDisplay20setJobVideoTimeStampEP13DispatcherJob */
/* Demangled: HWCDisplay::setJobVideoTimeStamp(DispatcherJob*) */
int _ZN10HWCDisplay20setJobVideoTimeStampEP13DispatcherJob(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcS2_iPK13native_handleP13PrivateHandleEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char const*, int, native_handle const*, PrivateHandle*>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, int, native_handle const*, PrivateHandle*) */
int _ZN9DbgLoggerC2IJPKcS2_iPK13native_handleP13PrivateHandleEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN15AsyncBlitDevice23getDisplayOutputRotatedEv */
/* Demangled: AsyncBlitDevice::getDisplayOutputRotated() */
int _ZN15AsyncBlitDevice23getDisplayOutputRotatedEv(void);

/* Symbol: _ZN10DispDevice19prepareOverlayInputEmP19OverlayPrepareParam */
/* Demangled: DispDevice::prepareOverlayInput(unsigned long, OverlayPrepareParam*) */
int _ZN10DispDevice19prepareOverlayInputEmP19OverlayPrepareParam(void);

/* Symbol: _ZN11HWCMediator31setValiPresentStateOfAllDisplayERK22HWC_VALI_PRESENT_STATERKi */
/* Demangled: HWCMediator::setValiPresentStateOfAllDisplay(HWC_VALI_PRESENT_STATE const&, int const&) */
int _ZN11HWCMediator31setValiPresentStateOfAllDisplayERK22HWC_VALI_PRESENT_STATERKi(void);

/* Symbol: _ZN13OverlayEngine12OverlayInputC2Ev */
/* Demangled: OverlayEngine::OverlayInput::OverlayInput() */
int _ZN13OverlayEngine12OverlayInputC2Ev(void);

/* Symbol: _ZN8HWCLayer18setPrevIsPQEnhanceERKb */
/* Demangled: HWCLayer::setPrevIsPQEnhance(bool const&) */
int _ZN8HWCLayer18setPrevIsPQEnhanceERKb(void);

/* Symbol: _ZN10PerfHelper8clearApiEv */
/* Demangled: PerfHelper::clearApi() */
int _ZN10PerfHelper8clearApiEv(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcS2_EEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char const*>(unsigned int const&, unsigned char const&, char const*, char const*, char const*) */
int _ZN9DbgLoggerC2IJPKcS2_EEERKjRKhS2_DpT_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeImN13HWCDispatcher13WorkerCluster12PrevHwcLayerEEENS_22__unordered_map_hasherImS5_NS_4hashImEELb1EEENS_21__unordered_map_equalImS5_NS_8equal_toImEELb1EEENS_9allocatorIS5_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long, HWCDispatcher::WorkerCluster::PrevHwcLayer>, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, HWCDispatcher::WorkerCluster::PrevHwcLayer>, std::__1::hash<unsigned long>, true>, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, HWCDispatcher::WorkerCluster::PrevHwcLayer>, std::__1::equal_to<unsigned long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long, HWCDispatcher::WorkerCluster::PrevHwcLayer> > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeImN13HWCDispatcher13WorkerCluster12PrevHwcLayerEEENS_22__unordered_map_hasherImS5_NS_4hashImEELb1EEENS_21__unordered_map_equalImS5_NS_8equal_toImEELb1EEENS_9allocatorIS5_EEE6rehashEm(void);

/* Symbol: _ZN11HWCMediator30displayGetPerFrameMetadataKeysEP11hwc2_devicemPjPi */
/* Demangled: HWCMediator::displayGetPerFrameMetadataKeys(hwc2_device*, unsigned long, unsigned int*, int*) */
int _ZN11HWCMediator30displayGetPerFrameMetadataKeysEP11hwc2_devicemPjPi(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcS2_PKiPKfEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char const*, int const*, float const*>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, int const*, float const*) */
int _ZN9DbgLoggerC2IJPKcS2_PKiPKfEEERKjRKhS2_DpT_(void);

/* Symbol: _ZNK7android6VectorIP16OverlayPortParamE10do_destroyEPvm */
/* Demangled: android::Vector<OverlayPortParam*>::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorIP16OverlayPortParamE10do_destroyEPvm(void);

/* Symbol: _ZN18DisplayBufferQueueD1Ev */
/* Demangled: DisplayBufferQueue::~DisplayBufferQueue() */
int _ZN18DisplayBufferQueueD1Ev(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN10BliterNode8JobParamEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<BliterNode::JobParam> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<BliterNode::JobParam> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<BliterNode::JobParam> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<BliterNode::JobParam> > > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN10BliterNode8JobParamEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE6rehashEm(void);

/* Symbol: _ZNK3hwc14Gralloc4Mapper26getDefaultProtectedContentEjjijmPm */
/* Demangled: hwc::Gralloc4Mapper::getDefaultProtectedContent(unsigned int, unsigned int, int, unsigned int, unsigned long, unsigned long*) const */
int _ZNK3hwc14Gralloc4Mapper26getDefaultProtectedContentEjjijmPm(void);

/* Symbol: _ZN7android2spI14IOverlayDeviceEaSEPS1_ */
/* Demangled: android::sp<IOverlayDevice>::operator=(IOverlayDevice*) */
int _ZN7android2spI14IOverlayDeviceEaSEPS1_(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcS2_mmiiiiEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char const*, unsigned long, unsigned long, int, int, int, int>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, unsigned long, unsigned long, int, int, int, int) */
int _ZN9DbgLoggerC2IJPKcS2_mmiiiiEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN9IPqDeviceD1Ev */
/* Demangled: IPqDevice::~IPqDevice() */
int _ZN9IPqDeviceD1Ev(void);

/* Symbol: _ZNK3hwc14Gralloc4Mapper4lockEPK13native_handlemRKNS_4RectEiP13android_ycbcr */
/* Demangled: hwc::Gralloc4Mapper::lock(native_handle const*, unsigned long, hwc::Rect const&, int, android_ycbcr*) const */
int _ZNK3hwc14Gralloc4Mapper4lockEPK13native_handlemRKNS_4RectEiP13android_ycbcr(void);

/* Symbol: _ZN13HWCDispatcher11PostHandlerD1Ev */
/* Demangled: HWCDispatcher::PostHandler::~PostHandler() */
int _ZN13HWCDispatcher11PostHandlerD1Ev(void);

/* Symbol: _ZN14DispatchThread12getQueueSizeEv */
/* Demangled: DispatchThread::getQueueSize() */
int _ZN14DispatchThread12getQueueSizeEv(void);

/* Symbol: _ZNK7android6VectorINS_2spI13DispatcherJobEEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<android::sp<DispatcherJob> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spI13DispatcherJobEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZTVN13HWCDispatcher14PhyPostHandlerE */
/* Demangled: vtable for HWCDispatcher::PhyPostHandler */
extern void* _ZTVN13HWCDispatcher14PhyPostHandlerE;

/* Symbol: _ZN15AsyncBlitDevice19prepareOverlayInputEmP19OverlayPrepareParam */
/* Demangled: AsyncBlitDevice::prepareOverlayInput(unsigned long, OverlayPrepareParam*) */
int _ZN15AsyncBlitDevice19prepareOverlayInputEmP19OverlayPrepareParam(void);

/* Symbol: _ZTV18DisplayBufferQueue */
/* Demangled: vtable for DisplayBufferQueue */
extern void* _ZTV18DisplayBufferQueue;

/* Symbol: _ZN11WhiteBufferD1Ev */
/* Demangled: WhiteBuffer::~WhiteBuffer() */
int _ZN11WhiteBufferD1Ev(void);

/* Symbol: _ZTV7HWC2Api */
/* Demangled: vtable for HWC2Api */
extern void* _ZTV7HWC2Api;

/* Symbol: _ZN7android9TransformD1Ev */
/* Demangled: android::Transform::~Transform() */
int _ZN7android9TransformD1Ev(void);

/* Symbol: _ZTVN3hwc14Gralloc4MapperE */
/* Demangled: vtable for hwc::Gralloc4Mapper */
extern void* _ZTVN3hwc14Gralloc4MapperE;

/* Symbol: _ZN7android10SWWatchDog11DEFAULT_WDTE */
/* Demangled: android::SWWatchDog::DEFAULT_WDT */
extern void* _ZN7android10SWWatchDog11DEFAULT_WDTE;

/* Symbol: _ZN13OverlayEngine13prepareOutputER19OverlayPrepareParam */
/* Demangled: OverlayEngine::prepareOutput(OverlayPrepareParam&) */
int _ZN13OverlayEngine13prepareOutputER19OverlayPrepareParam(void);

/* Symbol: _ZN18AsyncBliterHandler14setDstDpConfigER13PrivateHandlePNS_12BufferConfigE */
/* Demangled: AsyncBliterHandler::setDstDpConfig(PrivateHandle&, AsyncBliterHandler::BufferConfig*) */
int _ZN18AsyncBliterHandler14setDstDpConfigER13PrivateHandlePNS_12BufferConfigE(void);

/* Symbol: _ZN14DisplayManager13hotplugExtOutEv */
/* Demangled: DisplayManager::hotplugExtOut() */
int _ZN14DisplayManager13hotplugExtOutEv(void);

/* Symbol: _ZN10BliterNode6setSrcERKjPN18AsyncBliterHandler12BufferConfigER13PrivateHandlePiRKbS9_ */
/* Demangled: BliterNode::setSrc(unsigned int const&, AsyncBliterHandler::BufferConfig*, PrivateHandle&, int*, bool const&, bool const&) */
int _ZN10BliterNode6setSrcERKjPN18AsyncBliterHandler12BufferConfigER13PrivateHandlePiRKbS9_(void);

/* Symbol: _ZNK8HWCLayer8hasAlphaEv */
/* Demangled: HWCLayer::hasAlpha() const */
int _ZNK8HWCLayer8hasAlphaEv(void);

/* Symbol: _Z15mapDispInFormatji */
/* Demangled: mapDispInFormat(unsigned int, int) */
int _Z15mapDispInFormatji(void);

/* Symbol: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSG_8hidl_vecIhEEPT_EST_EUlRKSS_SR_E_NSC_ISY_EEFvNSJ_5ErrorESR_EE7__cloneEPNS0_6__baseIS11_EE */
/* Demangled: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSG_8hidl_vecIhEEPT_EST_EUlRKSS_SR_E_NSC_ISY_EEFvNSJ_5ErrorESR_EE7__cloneEPNS0_6__baseIS11_EE */
int _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSG_8hidl_vecIhEEPT_EST_EUlRKSS_SR_E_NSC_ISY_EEFvNSJ_5ErrorESR_EE7__cloneEPNS0_6__baseIS11_EE(void);

/* Symbol: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common8Cta861_3EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EE7__cloneEPNS0_6__baseIS13_EE */
/* Demangled: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common8Cta861_3EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EE7__cloneEPNS0_6__baseIS13_EE */
int _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common8Cta861_3EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EE7__cloneEPNS0_6__baseIS13_EE(void);

/* Symbol: _ZN10HWCDisplayC1ERKmRKi */
/* Demangled: HWCDisplay::HWCDisplay(unsigned long const&, int const&) */
int _ZN10HWCDisplayC1ERKmRKi(void);

/* Symbol: _ZN10IdleThreadC1Em */
/* Demangled: IdleThread::IdleThread(unsigned long) */
int _ZN10IdleThreadC1Em(void);

/* Symbol: _ZN10DispDevice21getSupportedColorModeEv */
/* Demangled: DispDevice::getSupportedColorMode() */
int _ZN10DispDevice21getSupportedColorModeEv(void);

/* Symbol: _ZN3Hrt26printQueryValidLayerResultEv */
/* Demangled: Hrt::printQueryValidLayerResult() */
int _ZN3Hrt26printQueryValidLayerResultEv(void);

/* Symbol: _ZN7android10SWWatchDog8setTimerERKl */
/* Demangled: android::SWWatchDog::setTimer(long const&) */
int _ZN7android10SWWatchDog8setTimerERKl(void);

/* Symbol: _ZNK3hwc14Gralloc2Mapper18validateBufferSizeEPK13native_handlejjijmj */
/* Demangled: hwc::Gralloc2Mapper::validateBufferSize(native_handle const*, unsigned int, unsigned int, int, unsigned int, unsigned long, unsigned int) const */
int _ZNK3hwc14Gralloc2Mapper18validateBufferSizeEPK13native_handlejjijmj(void);

/* Symbol: _ZNSt3__16vectorIN7android2spI14IOverlayDeviceEENS_9allocatorIS4_EEE21__push_back_slow_pathIS4_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<IOverlayDevice>, std::__1::allocator<android::sp<IOverlayDevice> > >::__push_back_slow_path<android::sp<IOverlayDevice> >(android::sp<IOverlayDevice>&&) */
int _ZNSt3__16vectorIN7android2spI14IOverlayDeviceEENS_9allocatorIS4_EEE21__push_back_slow_pathIS4_EEvOT_(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcS2_mjibiibbbEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char const*, unsigned long, unsigned int, int, bool, int, int, bool, bool, bool>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, unsigned long, unsigned int, int, bool, int, int, bool, bool, bool) */
int _ZN9DbgLoggerC2IJPKcS2_mjibiibbbEEERKjRKhS2_DpT_(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN10BliterNode8JobParamENS_9allocatorIS2_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<BliterNode::JobParam, std::__1::allocator<BliterNode::JobParam> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN10BliterNode8JobParamENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN9HrtCommon34updateGlesRangeForDisplaysBeforHrtERKNSt3__16vectorIN7android2spI10HWCDisplayEENS0_9allocatorIS5_EEEE */
/* Demangled: HrtCommon::updateGlesRangeForDisplaysBeforHrt(std::__1::vector<android::sp<HWCDisplay>, std::__1::allocator<android::sp<HWCDisplay> > > const&) */
int _ZN9HrtCommon34updateGlesRangeForDisplaysBeforHrtERKNSt3__16vectorIN7android2spI10HWCDisplayEENS0_9allocatorIS5_EEEE(void);

/* Symbol: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9BlendModeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE18destroy_deallocateEv */
/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9BlendModeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE18destroy_deallocateEv */
int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9BlendModeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE18destroy_deallocateEv(void);

/* Symbol: _ZN13AbortMessager11getInstanceEv */
/* Demangled: AbortMessager::getInstance() */
int _ZN13AbortMessager11getInstanceEv(void);

/* Symbol: _ZN13HWCDispatcher20dupInputBufferHandleEP13DispatcherJob */
/* Demangled: HWCDispatcher::dupInputBufferHandle(DispatcherJob*) */
int _ZN13HWCDispatcher20dupInputBufferHandleEP13DispatcherJob(void);

/* Symbol: _ZZ15getUniquePoolIdvE6nextId */
/* Demangled: getUniquePoolId()::nextId */
extern void* _ZZ15getUniquePoolIdvE6nextId;

/* Symbol: _ZN9MmBufDump10releaseLibEv */
/* Demangled: MmBufDump::releaseLib() */
int _ZN9MmBufDump10releaseLibEv(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long) */
int _ZN9DbgLoggerC2IJPKcmEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN14DisplayManager15m_profile_levelE */
/* Demangled: DisplayManager::m_profile_level */
extern void* _ZN14DisplayManager15m_profile_levelE;

/* Symbol: _ZN11HWCMediator27deviceDestroyVirtualDisplayEP11hwc2_devicem */
/* Demangled: HWCMediator::deviceDestroyVirtualDisplay(hwc2_device*, unsigned long) */
int _ZN11HWCMediator27deviceDestroyVirtualDisplayEP11hwc2_devicem(void);

/* Symbol: _ZNK7android6VectorIiE8do_splatEPvPKvm */
/* Demangled: android::Vector<int>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIiE8do_splatEPvPKvm(void);

/* Symbol: _ZN8HWCLayer20setSFCompositionTypeERKiRKb */
/* Demangled: HWCLayer::setSFCompositionType(int const&, bool const&) */
int _ZN8HWCLayer20setSFCompositionTypeERKiRKb(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmmjbEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned long, unsigned int, bool>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned long, unsigned int, bool) */
int _ZN9DbgLoggerC2IJPKcmmjbEEERKjRKhS2_DpT_(void);

/* Symbol: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9BlendModeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EEclEOS10_SQ_ */
/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9BlendModeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EEclEOS10_SQ_ */
int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9BlendModeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EEclEOS10_SQ_(void);

/* Symbol: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9DataspaceEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EEclEOS10_SQ_ */
/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9DataspaceEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EEclEOS10_SQ_ */
int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9DataspaceEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EEclEOS10_SQ_(void);

/* Symbol: _Z11getHwDevicev */
/* Demangled: getHwDevice() */
int _Z11getHwDevicev(void);

/* Symbol: _ZNK7android6VectorIP9FrameInfoE7do_copyEPvPKvm */
/* Demangled: android::Vector<FrameInfo*>::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIP9FrameInfoE7do_copyEPvPKvm(void);

/* Symbol: _ZN10DispDevice24isPartialUpdateSupportedEv */
/* Demangled: DispDevice::isPartialUpdateSupported() */
int _ZN10DispDevice24isPartialUpdateSupportedEv(void);

/* Symbol: _ZN13HWCDispatcher14getSessionModeERKm */
/* Demangled: HWCDispatcher::getSessionMode(unsigned long const&) */
int _ZN13HWCDispatcher14getSessionModeERKm(void);

/* Symbol: _ZN10BliterNodeC2Em */
/* Demangled: BliterNode::BliterNode(unsigned long) */
int _ZN10BliterNodeC2Em(void);

/* Symbol: _ZN12UEventThreadD1Ev */
/* Demangled: UEventThread::~UEventThread() */
int _ZN12UEventThreadD1Ev(void);

/* Symbol: _ZN14PqDeviceLegacy11getInstanceEv */
/* Demangled: PqDeviceLegacy::getInstance() */
int _ZN14PqDeviceLegacy11getInstanceEv(void);

/* Symbol: _ZNK7android6VectorINS_12SortedVectorINS_2spI16HWCVSyncListenerEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<android::SortedVector<android::sp<HWCVSyncListener> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_12SortedVectorINS_2spI16HWCVSyncListenerEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN12LayerHandlerC2EmRKN7android2spI13OverlayEngineEE */
/* Demangled: LayerHandler::LayerHandler(unsigned long, android::sp<OverlayEngine> const&) */
int _ZN12LayerHandlerC2EmRKN7android2spI13OverlayEngineEE(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcS2_22HWC_VALI_PRESENT_STATEEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char const*, HWC_VALI_PRESENT_STATE>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, HWC_VALI_PRESENT_STATE) */
int _ZN9DbgLoggerC2IJPKcS2_22HWC_VALI_PRESENT_STATEEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN7android9Transform6isZeroEf */
/* Demangled: android::Transform::isZero(float) */
int _ZN7android9Transform6isZeroEf(void);

/* Symbol: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSC_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EE7destroyEv */
/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSC_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EE7destroyEv */
int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSC_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EE7destroyEv(void);

/* Symbol: _ZN3hwc19GraphicBufferMapperC2Ev */
/* Demangled: hwc::GraphicBufferMapper::GraphicBufferMapper() */
int _ZN3hwc19GraphicBufferMapperC2Ev(void);

/* Symbol: _ZN10ObjectPoolI9FrameInfoED2Ev */
/* Demangled: ObjectPool<FrameInfo>::~ObjectPool() */
int _ZN10ObjectPoolI9FrameInfoED2Ev(void);

/* Symbol: _ZN9FrameInfo8initDataEv */
/* Demangled: FrameInfo::initData() */
int _ZN9FrameInfo8initDataEv(void);

/* Symbol: _ZNK7android6VectorIPN13OverlayEngine12OverlayInputEE8do_splatEPvPKvm */
/* Demangled: android::Vector<OverlayEngine::OverlayInput*>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIPN13OverlayEngine12OverlayInputEE8do_splatEPvPKvm(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcS2_iPK13native_handlejEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char const*, int, native_handle const*, unsigned int>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, int, native_handle const*, unsigned int) */
int _ZN9DbgLoggerC2IJPKcS2_iPK13native_handlejEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN3hwc19GraphicBufferMapper12importBufferEPK13native_handlePS3_ */
/* Demangled: hwc::GraphicBufferMapper::importBuffer(native_handle const*, native_handle const**) */
int _ZN3hwc19GraphicBufferMapper12importBufferEPK13native_handlePS3_(void);

/* Symbol: _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSC_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EEE */
/* Demangled: _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSC_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EEE */
extern void* _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSC_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EEE;

/* Symbol: _ZN11HWCMediator33displayGetChangedCompositionTypesEP11hwc2_devicemPjPmPi */
/* Demangled: HWCMediator::displayGetChangedCompositionTypes(hwc2_device*, unsigned long, unsigned int*, unsigned long*, int*) */
int _ZN11HWCMediator33displayGetChangedCompositionTypesEP11hwc2_devicemPjPmPi(void);

/* Symbol: _ZNK7android6VectorIiE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<int>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIiE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcS2_iiEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char const*, int, int>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, int, int) */
int _ZN9DbgLoggerC2IJPKcS2_iiEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN7android2spI20RefreshRequestThreadED2Ev */
/* Demangled: android::sp<RefreshRequestThread>::~sp() */
int _ZN7android2spI20RefreshRequestThreadED2Ev(void);

/* Symbol: _ZTv0_n32_N13OverlayEngine10onFirstRefEv */
/* Demangled: virtual thunk to OverlayEngine::onFirstRef() */
int _ZTv0_n32_N13OverlayEngine10onFirstRefEv(void);

/* Symbol: _ZN10DispDeviceD0Ev */
/* Demangled: DispDevice::~DispDevice() */
int _ZN10DispDeviceD0Ev(void);

/* Symbol: _ZTV14DispatchThread */
/* Demangled: vtable for DispatchThread */
extern void* _ZTV14DispatchThread;

/* Symbol: _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE;

/* Symbol: _ZN9IONDeviceC1Ev */
/* Demangled: IONDevice::IONDevice() */
int _ZN9IONDeviceC1Ev(void);

/* Symbol: _ZN16DbgLogBufManagerC2Ev */
/* Demangled: DbgLogBufManager::DbgLogBufManager() */
int _ZN16DbgLogBufManagerC2Ev(void);

/* Symbol: _ZN10HWCDisplay17addUnpresentCountEv */
/* Demangled: HWCDisplay::addUnpresentCount() */
int _ZN10HWCDisplay17addUnpresentCountEv(void);

/* Symbol: _ZN14DisplayManager17refreshForDisplayEm */
/* Demangled: DisplayManager::refreshForDisplay(unsigned long) */
int _ZN14DisplayManager17refreshForDisplayEm(void);

/* Symbol: _ZThn296_N13OverlayEngineD0Ev */
/* Demangled: non-virtual thunk to OverlayEngine::~OverlayEngine() */
int _ZThn296_N13OverlayEngineD0Ev(void);

/* Symbol: _ZN18AsyncBliterHandler11setDpConfigEP13PrivateHandlePKN18DisplayBufferQueue13DisplayBufferEPNS_12BufferConfigEjRKj */
/* Demangled: AsyncBliterHandler::setDpConfig(PrivateHandle*, DisplayBufferQueue::DisplayBuffer const*, AsyncBliterHandler::BufferConfig*, unsigned int, unsigned int const&) */
int _ZN18AsyncBliterHandler11setDpConfigEP13PrivateHandlePKN18DisplayBufferQueue13DisplayBufferEPNS_12BufferConfigEjRKj(void);

/* Symbol: _Z10setPQParamRKmP9DpPqParamRKjRKbRKiS6_S8_S4_RKPK13native_handleS4_S6_S6_ */
/* Demangled: setPQParam(unsigned long const&, DpPqParam*, unsigned int const&, bool const&, int const&, bool const&, int const&, unsigned int const&, native_handle const* const&, unsigned int const&, bool const&, bool const&) */
int _Z10setPQParamRKmP9DpPqParamRKjRKbRKiS6_S8_S4_RKPK13native_handleS4_S6_S6_(void);

/* Symbol: _ZNK9HrtCommon12isRPOEnabledEv */
/* Demangled: HrtCommon::isRPOEnabled() const */
int _ZNK9HrtCommon12isRPOEnabledEv(void);

/* Symbol: _ZN11HWCMediatorC1Ev */
/* Demangled: HWCMediator::HWCMediator() */
int _ZN11HWCMediatorC1Ev(void);

/* Symbol: _ZNK7android6VectorINS_12SortedVectorINS_2spI16HWCVSyncListenerEEEEE7do_copyEPvPKvm */
/* Demangled: android::Vector<android::SortedVector<android::sp<HWCVSyncListener> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_12SortedVectorINS_2spI16HWCVSyncListenerEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmiijEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, int, int, unsigned int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, int, int, unsigned int) */
int _ZN9DbgLoggerC2IJPKcmiijEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN13GrallocDevice5allocERNS_10AllocParamE */
/* Demangled: GrallocDevice::alloc(GrallocDevice::AllocParam&) */
int _ZN13GrallocDevice5allocERNS_10AllocParamE(void);

/* Symbol: _ZN14ColorTransform4dumpEPN7android7String8E */
/* Demangled: ColorTransform::dump(android::String8*) */
int _ZN14ColorTransform4dumpEPN7android7String8E(void);

/* Symbol: _ZN15AsyncBlitDevice24getAvailableOverlayInputEm */
/* Demangled: AsyncBlitDevice::getAvailableOverlayInput(unsigned long) */
int _ZN15AsyncBlitDevice24getAvailableOverlayInputEm(void);

/* Symbol: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultImEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EE7destroyEv */
/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultImEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EE7destroyEv */
int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultImEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EE7destroyEv(void);

/* Symbol: _ZN7HWC2ApiC2Ev */
/* Demangled: HWC2Api::HWC2Api() */
int _ZN7HWC2ApiC2Ev(void);

/* Symbol: _ZN3hwc13GrallocMapperD1Ev */
/* Demangled: hwc::GrallocMapper::~GrallocMapper() */
int _ZN3hwc13GrallocMapperD1Ev(void);

/* Symbol: _ZN3hwc19GraphicBufferMapper14getCompressionEPK13native_handlePN4aidl7android8hardware8graphics6common11CompressionE */
/* Demangled: hwc::GraphicBufferMapper::getCompression(native_handle const*, aidl::android::hardware::graphics::common::Compression*) */
int _ZN3hwc19GraphicBufferMapper14getCompressionEPK13native_handlePN4aidl7android8hardware8graphics6common11CompressionE(void);

/* Symbol: __gttf2 */
/* Demangled: __gttf2 */
int __gttf2(void);

/* Symbol: _ZN13HWCDispatcher14setSessionModeEmb */
/* Demangled: HWCDispatcher::setSessionMode(unsigned long, bool) */
int _ZN13HWCDispatcher14setSessionModeEmb(void);

/* Symbol: _ZN23PanelEventMonitorThreadC1Ev */
/* Demangled: PanelEventMonitorThread::PanelEventMonitorThread() */
int _ZN23PanelEventMonitorThreadC1Ev(void);

/* Symbol: _ZN9DbgLoggerC2IJPKc13HWC_DISP_MODEEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, HWC_DISP_MODE>(unsigned int const&, unsigned char const&, char const*, char const*, HWC_DISP_MODE) */
int _ZN9DbgLoggerC2IJPKc13HWC_DISP_MODEEEERKjRKhS2_DpT_(void);

/* Symbol: _ZTTN7android22DisplayFeatureCallbackE */
/* Demangled: VTT for android::DisplayFeatureCallback */
extern void* _ZTTN7android22DisplayFeatureCallbackE;

/* Symbol: _Z30copyHWCLayerIntoLightHwcLayer1RKN7android2spI8HWCLayerEEP14LightHwcLayer1b */
/* Demangled: copyHWCLayerIntoLightHwcLayer1(android::sp<HWCLayer> const&, LightHwcLayer1*, bool) */
int _Z30copyHWCLayerIntoLightHwcLayer1RKN7android2spI8HWCLayerEEP14LightHwcLayer1b(void);

/* Symbol: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN7android8hardware8graphics6common4V1_211PixelFormatEEEiPK13native_handleRKNS7_6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EE7__cloneEv */
/* Demangled: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN7android8hardware8graphics6common4V1_211PixelFormatEEEiPK13native_handleRKNS7_6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EE7__cloneEv */
int _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN7android8hardware8graphics6common4V1_211PixelFormatEEEiPK13native_handleRKNS7_6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EE7__cloneEv(void);

/* Symbol: _ZN8PlatformC2Ev */
/* Demangled: Platform::Platform() */
int _ZN8PlatformC2Ev(void);

/* Symbol: _ZN15AsyncBlitDeviceC1Ev */
/* Demangled: AsyncBlitDevice::AsyncBlitDevice() */
int _ZN15AsyncBlitDeviceC1Ev(void);

/* Symbol: _ZN13GrallocDeviceD2Ev */
/* Demangled: GrallocDevice::~GrallocDevice() */
int _ZN13GrallocDeviceD2Ev(void);

/* Symbol: _ZN7android10SWWatchDog7suspendEv */
/* Demangled: android::SWWatchDog::suspend() */
int _ZN7android10SWWatchDog7suspendEv(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcS2_mjjiiEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char const*, unsigned long, unsigned int, unsigned int, int, int>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, unsigned long, unsigned int, unsigned int, int, int) */
int _ZN9DbgLoggerC2IJPKcS2_mjjiiEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN15TouchHintThread10setEnabledEb */
/* Demangled: TouchHintThread::setEnabled(bool) */
int _ZN15TouchHintThread10setEnabledEb(void);

/* Symbol: _ZN12UEventThread13handleUeventsEPKcl */
/* Demangled: UEventThread::handleUevents(char const*, long) */
int _ZN12UEventThread13handleUeventsEPKcl(void);

/* Symbol: _ZN7android2spI18DisplayBufferQueueEaSEPS1_ */
/* Demangled: android::sp<DisplayBufferQueue>::operator=(DisplayBufferQueue*) */
int _ZN7android2spI18DisplayBufferQueueEaSEPS1_(void);

/* Symbol: _ZN10DispDevice21destroyOverlaySessionEm */
/* Demangled: DispDevice::destroyOverlaySession(unsigned long) */
int _ZN10DispDevice21destroyOverlaySessionEm(void);

/* Symbol: _ZNK7android6VectorIP13DispatcherJobE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<DispatcherJob*>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIP13DispatcherJobE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN15AsyncBlitDevice26prepareOverlayPresentFenceEmP19OverlayPrepareParam */
/* Demangled: AsyncBlitDevice::prepareOverlayPresentFence(unsigned long, OverlayPrepareParam*) */
int _ZN15AsyncBlitDevice26prepareOverlayPresentFenceEmP19OverlayPrepareParam(void);

/* Symbol: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common8Cta861_3EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EE18destroy_deallocateEv */
/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common8Cta861_3EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EE18destroy_deallocateEv */
int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common8Cta861_3EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EE18destroy_deallocateEv(void);

/* Symbol: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalINS_6vectorIhNS_9allocatorIhEEEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS7_ISX_EEFvNSI_5ErrorESQ_EE7destroyEv */
/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalINS_6vectorIhNS_9allocatorIhEEEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS7_ISX_EEFvNSI_5ErrorESQ_EE7destroyEv */
int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalINS_6vectorIhNS_9allocatorIhEEEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS7_ISX_EEFvNSI_5ErrorESQ_EE7destroyEv(void);

/* Symbol: _ZN9DbgLoggerC2IJPKc12DISP_IF_TYPEEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, DISP_IF_TYPE>(unsigned int const&, unsigned char const&, char const*, char const*, DISP_IF_TYPE) */
int _ZN9DbgLoggerC2IJPKc12DISP_IF_TYPEEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN9IONDevice9ionMUnmapEiPvm */
/* Demangled: IONDevice::ionMUnmap(int, void*, unsigned long) */
int _ZN9IONDevice9ionMUnmapEiPvm(void);

/* Symbol: __addtf3 */
/* Demangled: __addtf3 */
int __addtf3(void);

/* Symbol: _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common9Smpte2086EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EEE */
/* Demangled: _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common9Smpte2086EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EEE */
extern void* _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common9Smpte2086EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EEE;

/* Symbol: _ZN9DbgLoggerC2IJmPKcEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<unsigned long, char const*>(unsigned int const&, unsigned char const&, char const*, unsigned long, char const*) */
int _ZN9DbgLoggerC2IJmPKcEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN13OverlayEngine19closeOverlayFenceFdEP16FrameOverlayInfo */
/* Demangled: OverlayEngine::closeOverlayFenceFd(FrameOverlayInfo*) */
int _ZN13OverlayEngine19closeOverlayFenceFdEP16FrameOverlayInfo(void);

/* Symbol: _ZN16FrameOverlayInfoD1Ev */
/* Demangled: FrameOverlayInfo::~FrameOverlayInfo() */
int _ZN16FrameOverlayInfoD1Ev(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcS2_iiPciEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char const*, int, int, char*, int>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, int, int, char*, int) */
int _ZN9DbgLoggerC2IJPKcS2_iiPciEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN18AsyncBliterHandler6nullopEv */
/* Demangled: AsyncBliterHandler::nullop() */
int _ZN18AsyncBliterHandler6nullopEv(void);

/* Symbol: _ZN8HWCLayer12afterPresentERKb */
/* Demangled: HWCLayer::afterPresent(bool const&) */
int _ZN8HWCLayer12afterPresentERKb(void);

/* Symbol: _ZN11HWCMediator19displaySetColorModeEP11hwc2_devicemi */
/* Demangled: HWCMediator::displaySetColorMode(hwc2_device*, unsigned long, int) */
int _ZN11HWCMediator19displaySetColorModeEP11hwc2_devicemi(void);

/* Symbol: _ZN10HWCDisplay13beforePresentEj */
/* Demangled: HWCDisplay::beforePresent(unsigned int) */
int _ZN10HWCDisplay13beforePresentEj(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmifdddEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, int, float, double, double, double>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, int, float, double, double, double) */
int _ZN9DbgLoggerC2IJPKcmifdddEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN13HWCDispatcher19removeVSyncListenerEmRKN7android2spI16HWCVSyncListenerEE */
/* Demangled: HWCDispatcher::removeVSyncListener(unsigned long, android::sp<HWCVSyncListener> const&) */
int _ZN13HWCDispatcher19removeVSyncListenerEmRKN7android2spI16HWCVSyncListenerEE(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN10BliterNode8JobParamENS_9allocatorIS2_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<BliterNode::JobParam, std::__1::allocator<BliterNode::JobParam> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN10BliterNode8JobParamENS_9allocatorIS2_EEEE;

/* Symbol: _Z18protectedCloseImplRKiPKcS0_ */
/* Demangled: protectedCloseImpl(int const&, char const*, int const&) */
int _Z18protectedCloseImplRKiPKcS0_(void);

/* Symbol: _ZN11VSyncThreadD0Ev */
/* Demangled: VSyncThread::~VSyncThread() */
int _ZN11VSyncThreadD0Ev(void);

/* Symbol: _ZN10BliterNode9cancelJobERKj */
/* Demangled: BliterNode::cancelJob(unsigned int const&) */
int _ZN10BliterNode9cancelJobERKj(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIibEENS_22__unordered_map_hasherIiS2_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS2_NS_8equal_toIiEELb1EEENS_9allocatorIS2_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS2_PvEEEE */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, bool>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, bool>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, bool>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, bool> > >::remove(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, bool>, void*>*>) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIibEENS_22__unordered_map_hasherIiS2_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS2_NS_8equal_toIiEELb1EEENS_9allocatorIS2_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS2_PvEEEE(void);

/* Symbol: _ZN10HWCDisplay17setJobDisplayDataEv */
/* Demangled: HWCDisplay::setJobDisplayData() */
int _ZN10HWCDisplay17setJobDisplayDataEv(void);

/* Symbol: _ZNK7android6VectorINS_2spI9FrameInfoEEE7do_copyEPvPKvm */
/* Demangled: android::Vector<android::sp<FrameInfo> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android6VectorINS_2spI9FrameInfoEEE7do_copyEPvPKvm(void);

/* Symbol: _ZTV13OverlayEngine */
/* Demangled: vtable for OverlayEngine */
extern void* _ZTV13OverlayEngine;

/* Symbol: _ZN10DispDevice23updateDisplayResolutionEm */
/* Demangled: DispDevice::updateDisplayResolution(unsigned long) */
int _ZN10DispDevice23updateDisplayResolutionEm(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN7android10SWWatchDog9RecipientENS_9allocatorIS3_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<android::SWWatchDog::Recipient, std::__1::allocator<android::SWWatchDog::Recipient> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN7android10SWWatchDog9RecipientENS_9allocatorIS3_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN13LayerComposer12cancelLayersEP13DispatcherJob */
/* Demangled: LayerComposer::cancelLayers(DispatcherJob*) */
int _ZN13LayerComposer12cancelLayersEP13DispatcherJob(void);

/* Symbol: _ZN3hwc19GraphicBufferMapper20getDefaultInterlacedEjjijmPN4aidl7android8hardware8graphics6common10InterlacedE */
/* Demangled: hwc::GraphicBufferMapper::getDefaultInterlaced(unsigned int, unsigned int, int, unsigned int, unsigned long, aidl::android::hardware::graphics::common::Interlaced*) */
int _ZN3hwc19GraphicBufferMapper20getDefaultInterlacedEjjijmPN4aidl7android8hardware8graphics6common10InterlacedE(void);

/* Symbol: _ZN18AsyncBliterHandler9setMirrorERKN7android2spI10HWCDisplayEEP13DispatcherJob */
/* Demangled: AsyncBliterHandler::setMirror(android::sp<HWCDisplay> const&, DispatcherJob*) */
int _ZN18AsyncBliterHandler9setMirrorERKN7android2spI10HWCDisplayEEP13DispatcherJob(void);

/* Symbol: _ZN10DispDevice21getMaxOverlayInputNumEv */
/* Demangled: DispDevice::getMaxOverlayInputNum() */
int _ZN10DispDevice21getMaxOverlayInputNumEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIj14FrameFenceInfoEENS_22__unordered_map_hasherIjS3_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS3_NS_8equal_toIjEELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIjJNS_4pairIKjS2_EEEEENSG_INS_15__hash_iteratorIPNS_11__hash_nodeIS3_PvEEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, FrameFenceInfo>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, FrameFenceInfo>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, FrameFenceInfo>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, FrameFenceInfo>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, FrameFenceInfo> > >::__emplace_unique_key_args<unsigned int, std::__1::pair<unsigned int const, FrameFenceInfo> >(unsigned int const&, std::__1::pair<unsigned int const, FrameFenceInfo>&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIj14FrameFenceInfoEENS_22__unordered_map_hasherIjS3_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS3_NS_8equal_toIjEELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIjJNS_4pairIKjS2_EEEEENSG_INS_15__hash_iteratorIPNS_11__hash_nodeIS3_PvEEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN3hwc19GraphicBufferMapper9getHeightEPK13native_handlePm */
/* Demangled: hwc::GraphicBufferMapper::getHeight(native_handle const*, unsigned long*) */
int _ZN3hwc19GraphicBufferMapper9getHeightEPK13native_handlePm(void);

/* Symbol: _ZN15DisplayListenerC1EPFvPvmiES0_PFvS0_mlES0_PFvS0_mES0_ */
/* Demangled: DisplayListener::DisplayListener(void (*)(void*, unsigned long, int), void*, void (*)(void*, unsigned long, long), void*, void (*)(void*, unsigned long), void*) */
int _ZN15DisplayListenerC1EPFvPvmiES0_PFvS0_mlES0_PFvS0_mES0_(void);

/* Symbol: _ZNK7android6VectorINS_2spI13DispatcherJobEEE10do_destroyEPvm */
/* Demangled: android::Vector<android::sp<DispatcherJob> >::do_destroy(void*, unsigned long) const */
int _ZNK7android6VectorINS_2spI13DispatcherJobEEE10do_destroyEPvm(void);

/* Symbol: _ZN14DisplayManagerC2Ev */
/* Demangled: DisplayManager::DisplayManager() */
int _ZN14DisplayManagerC2Ev(void);

/* Symbol: _ZN8Debugger6LOGGERC1Ev */
/* Demangled: Debugger::LOGGER::LOGGER() */
int _ZN8Debugger6LOGGERC1Ev(void);

/* Symbol: _ZN14DisplayManager20getPhysicalPanelSizeEPjS0_R11SessionInfo */
/* Demangled: DisplayManager::getPhysicalPanelSize(unsigned int*, unsigned int*, SessionInfo&) */
int _ZN14DisplayManager20getPhysicalPanelSizeEPjS0_R11SessionInfo(void);

/* Symbol: _Z22setPrivateHandlePQInfoRKPK13native_handleP13PrivateHandle */
/* Demangled: setPrivateHandlePQInfo(native_handle const* const&, PrivateHandle*) */
int _Z22setPrivateHandlePQInfoRKPK13native_handleP13PrivateHandle(void);

/* Symbol: _ZN20MDPFrameInfoDebuggerD1Ev */
/* Demangled: MDPFrameInfoDebugger::~MDPFrameInfoDebugger() */
int _ZN20MDPFrameInfoDebuggerD1Ev(void);

/* Symbol: _ZN10PerfHelper11perfLockRelEi */
/* Demangled: PerfHelper::perfLockRel(int) */
int _ZN10PerfHelper11perfLockRelEi(void);

/* Symbol: _ZN8HWCLayerD1Ev */
/* Demangled: HWCLayer::~HWCLayer() */
int _ZN8HWCLayerD1Ev(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcbEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, bool>(unsigned int const&, unsigned char const&, char const*, char const*, bool) */
int _ZN9DbgLoggerC2IJPKcbEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN10PerfHelperC1Ev */
/* Demangled: PerfHelper::PerfHelper() */
int _ZN10PerfHelperC1Ev(void);

/* Symbol: _ZN13HWCDispatcher21registerVSyncListenerEmRKN7android2spI16HWCVSyncListenerEE */
/* Demangled: HWCDispatcher::registerVSyncListener(unsigned long, android::sp<HWCVSyncListener> const&) */
int _ZN13HWCDispatcher21registerVSyncListenerEmRKN7android2spI16HWCVSyncListenerEE(void);

/* Symbol: _ZNK7android6VectorIPK13native_handleE8do_splatEPvPKvm */
/* Demangled: android::Vector<native_handle const*>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIPK13native_handleE8do_splatEPvPKvm(void);

/* Symbol: _ZN10DispDevice18waitRefreshRequestEPj */
/* Demangled: DispDevice::waitRefreshRequest(unsigned int*) */
int _ZN10DispDevice18waitRefreshRequestEPj(void);

/* Symbol: _ZN8Debugger10checkLevelERKh */
/* Demangled: Debugger::checkLevel(unsigned char const&) */
int _ZN8Debugger10checkLevelERKh(void);

/* Symbol: _ZN14DisplayManager16refreshForDriverEj */
/* Demangled: DisplayManager::refreshForDriver(unsigned int) */
int _ZN14DisplayManager16refreshForDriverEj(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmjjjjjjbjjjjjjjibEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, bool, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, int, bool>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, bool, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, int, bool) */
int _ZN9DbgLoggerC2IJPKcmjjjjjjbjjjjjjjibEEERKjRKhS2_DpT_(void);

/* Symbol: _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_14basic_iostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_iostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_14basic_iostreamIcS2_EE;

/* Symbol: _ZN9DbgLoggerC2IJPKcPFvPvmlEEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, void (*)(void*, unsigned long, long)>(unsigned int const&, unsigned char const&, char const*, char const*, void (*)(void*, unsigned long, long)) */
int _ZN9DbgLoggerC2IJPKcPFvPvmlEEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN8HWCLayerC2ERKN7android2wpI10HWCDisplayEERKmRKb */
/* Demangled: HWCLayer::HWCLayer(android::wp<HWCDisplay> const&, unsigned long const&, bool const&) */
int _ZN8HWCLayerC2ERKN7android2wpI10HWCDisplayEERKmRKb(void);

/* Symbol: _ZN9DbgLoggerC2IJPKciiS2_EEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, int, int, char const*>(unsigned int const&, unsigned char const&, char const*, char const*, int, int, char const*) */
int _ZN9DbgLoggerC2IJPKciiS2_EEERKjRKhS2_DpT_(void);

/* Symbol: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultImEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EE7__cloneEPNS0_6__baseISS_EE */
/* Demangled: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultImEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EE7__cloneEPNS0_6__baseISS_EE */
int _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultImEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EE7__cloneEPNS0_6__baseISS_EE(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmPK13native_handleiiEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, native_handle const*, int, int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, native_handle const*, int, int) */
int _ZN9DbgLoggerC2IJPKcmPK13native_handleiiEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmjjEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned int, unsigned int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned int, unsigned int) */
int _ZN9DbgLoggerC2IJPKcmjjEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN16FrameOverlayInfo8initDataEv */
/* Demangled: FrameOverlayInfo::initData() */
int _ZN16FrameOverlayInfo8initDataEv(void);

/* Symbol: HWC_COMPOSITION_FILE_PLATFORM_STR */
/* Demangled: HWC_COMPOSITION_FILE_PLATFORM_STR */
extern void* HWC_COMPOSITION_FILE_PLATFORM_STR;

/* Symbol: _Z22freeDuppedBufferHandlePK13native_handle */
/* Demangled: freeDuppedBufferHandle(native_handle const*) */
int _Z22freeDuppedBufferHandlePK13native_handle(void);

/* Symbol: _ZTT23PanelEventMonitorThread */
/* Demangled: VTT for PanelEventMonitorThread */
extern void* _ZTT23PanelEventMonitorThread;

/* Symbol: _ZTv0_n24_N18DisplayBufferQueueD1Ev */
/* Demangled: virtual thunk to DisplayBufferQueue::~DisplayBufferQueue() */
int _ZTv0_n24_N18DisplayBufferQueueD1Ev(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN10BliterNode8JobParamEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE14__erase_uniqueIjEEmRKT_ */
/* Demangled: unsigned long std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<BliterNode::JobParam> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<BliterNode::JobParam> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<BliterNode::JobParam> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<BliterNode::JobParam> > > >::__erase_unique<unsigned int>(unsigned int const&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN10BliterNode8JobParamEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE14__erase_uniqueIjEEmRKT_(void);

/* Symbol: _ZN10DispDevice20isFenceWaitSupportedEv */
/* Demangled: DispDevice::isFenceWaitSupported() */
int _ZN10DispDevice20isFenceWaitSupportedEv(void);

/* Symbol: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSC_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EEclEOSX_SN_ */
/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSC_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EEclEOSX_SN_ */
int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSC_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EEclEOSX_SN_(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmmiEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned long, int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned long, int) */
int _ZN9DbgLoggerC2IJPKcmmiEEERKjRKhS2_DpT_(void);

/* Symbol: HWC2_PRESENT_VALI_STATE_PRESENT_DONE_STR */
/* Demangled: HWC2_PRESENT_VALI_STATE_PRESENT_DONE_STR */
extern void* HWC2_PRESENT_VALI_STATE_PRESENT_DONE_STR;

/* Symbol: HWC2_BLEND_MODE_COVERAGE_STR */
/* Demangled: HWC2_BLEND_MODE_COVERAGE_STR */
extern void* HWC2_BLEND_MODE_COVERAGE_STR;

/* Symbol: _ZN7android10SWWatchDog12setWDTNotifyERKNSt3__110shared_ptrINS0_9RecipientEEE */
/* Demangled: android::SWWatchDog::setWDTNotify(std::__1::shared_ptr<android::SWWatchDog::Recipient> const&) */
int _ZN7android10SWWatchDog12setWDTNotifyERKNSt3__110shared_ptrINS0_9RecipientEEE(void);

/* Symbol: _ZN20MDPFrameInfoDebugger21checkMDPLayerExecTimeEv */
/* Demangled: MDPFrameInfoDebugger::checkMDPLayerExecTime() */
int _ZN20MDPFrameInfoDebugger21checkMDPLayerExecTimeEv(void);

/* Symbol: _ZN16HWVSyncEstimator19getAvgHWVSyncPeriodEv */
/* Demangled: HWVSyncEstimator::getAvgHWVSyncPeriod() */
int _ZN16HWVSyncEstimator19getAvgHWVSyncPeriodEv(void);

/* Symbol: _ZN3hwc19GraphicBufferMapper26getDefaultProtectedContentEjjijmPm */
/* Demangled: hwc::GraphicBufferMapper::getDefaultProtectedContent(unsigned int, unsigned int, int, unsigned int, unsigned long, unsigned long*) */
int _ZN3hwc19GraphicBufferMapper26getDefaultProtectedContentEjjijmPm(void);

/* Symbol: _ZN11HWCMediator23layerStateSetPlaneAlphaEP11hwc2_devicemmf */
/* Demangled: HWCMediator::layerStateSetPlaneAlpha(hwc2_device*, unsigned long, unsigned long, float) */
int _ZN11HWCMediator23layerStateSetPlaneAlphaEP11hwc2_devicemmf(void);

/* Symbol: _ZN13DispatcherJob9resetDataEv */
/* Demangled: DispatcherJob::resetData() */
int _ZN13DispatcherJob9resetDataEv(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcS2_13HWC_COMP_FILEEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char const*, HWC_COMP_FILE>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, HWC_COMP_FILE) */
int _ZN9DbgLoggerC2IJPKcS2_13HWC_COMP_FILEEEERKjRKhS2_DpT_(void);

/* Symbol: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSG_8hidl_vecIhEEPT_EST_EUlRKSS_SR_E_NSC_ISY_EEFvNSJ_5ErrorESR_EE18destroy_deallocateEv */
/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSG_8hidl_vecIhEEPT_EST_EUlRKSS_SR_E_NSC_ISY_EEFvNSJ_5ErrorESR_EE18destroy_deallocateEv */
int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSG_8hidl_vecIhEEPT_EST_EUlRKSS_SR_E_NSC_ISY_EEFvNSJ_5ErrorESR_EE18destroy_deallocateEv(void);

/* Symbol: _ZN7HWLayer9resetDataEv */
/* Demangled: HWLayer::resetData() */
int _ZN7HWLayer9resetDataEv(void);

/* Symbol: _ZN11BlackBufferC1Ev */
/* Demangled: BlackBuffer::BlackBuffer() */
int _ZN11BlackBufferC1Ev(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIj14FrameFenceInfoEENS_22__unordered_map_hasherIjS3_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS3_NS_8equal_toIjEELb1EEENS_9allocatorIS3_EEE6rehashEm */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, FrameFenceInfo>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, FrameFenceInfo>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, FrameFenceInfo>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, FrameFenceInfo> > >::rehash(unsigned long) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIj14FrameFenceInfoEENS_22__unordered_map_hasherIjS3_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS3_NS_8equal_toIjEELb1EEENS_9allocatorIS3_EEE6rehashEm(void);

/* Symbol: _ZN13HWCDispatcher4dumpEPN7android7String8E */
/* Demangled: HWCDispatcher::dump(android::String8*) */
int _ZN13HWCDispatcher4dumpEPN7android7String8E(void);

/* Symbol: _ZN8HWCLayer15setDisplayFrameERK8hwc_rect */
/* Demangled: HWCLayer::setDisplayFrame(hwc_rect const&) */
int _ZN8HWCLayer15setDisplayFrameERK8hwc_rect(void);

/* Symbol: _ZN11HWCMediator26layerStateSetVisibleRegionEP11hwc2_devicemm10hwc_region */
/* Demangled: HWCMediator::layerStateSetVisibleRegion(hwc2_device*, unsigned long, unsigned long, hwc_region) */
int _ZN11HWCMediator26layerStateSetVisibleRegionEP11hwc2_devicemm10hwc_region(void);

/* Symbol: _ZN15DisplayListenerC2EPFvPvmiES0_PFvS0_mlES0_PFvS0_mES0_ */
/* Demangled: DisplayListener::DisplayListener(void (*)(void*, unsigned long, int), void*, void (*)(void*, unsigned long, long), void*, void (*)(void*, unsigned long), void*) */
int _ZN15DisplayListenerC2EPFvPvmiES0_PFvS0_mlES0_PFvS0_mES0_(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcS2_mmEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char const*, unsigned long, unsigned long>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, unsigned long, unsigned long) */
int _ZN9DbgLoggerC2IJPKcS2_mmEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN10IdleThreadD2Ev */
/* Demangled: IdleThread::~IdleThread() */
int _ZN10IdleThreadD2Ev(void);

/* Symbol: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common8Cta861_3EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EEclEOS12_SS_ */
/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common8Cta861_3EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EEclEOS12_SS_ */
int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common8Cta861_3EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EEclEOS12_SS_(void);

/* Symbol: _ZN11HWCMediator28layerStateSetCompositionTypeEP11hwc2_devicemmi */
/* Demangled: HWCMediator::layerStateSetCompositionType(hwc2_device*, unsigned long, unsigned long, int) */
int _ZN11HWCMediator28layerStateSetCompositionTypeEP11hwc2_devicemmi(void);

/* Symbol: _ZN13OverlayEngine13disableOutputEv */
/* Demangled: OverlayEngine::disableOutput() */
int _ZN13OverlayEngine13disableOutputEv(void);

/* Symbol: _ZNK7android6VectorIP16OverlayPortParamE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<OverlayPortParam*>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIP16OverlayPortParamE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN15AsyncBlitDevice19getRszMaxWidthInputEv */
/* Demangled: AsyncBlitDevice::getRszMaxWidthInput() */
int _ZN15AsyncBlitDevice19getRszMaxWidthInputEv(void);

/* Symbol: _ZN8DebuggerC2Ev */
/* Demangled: Debugger::Debugger() */
int _ZN8DebuggerC2Ev(void);

/* Symbol: _ZN3hwc14Gralloc4MapperC2Ev */
/* Demangled: hwc::Gralloc4Mapper::Gralloc4Mapper() */
int _ZN3hwc14Gralloc4MapperC2Ev(void);

/* Symbol: _ZNK3hwc14Gralloc4Mapper10getDefaultIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_ */
/* Demangled: int hwc::Gralloc4Mapper::getDefault<aidl::android::hardware::graphics::common::ExtendableType>(unsigned int, unsigned int, int, unsigned int, unsigned long, android::hardware::graphics::mapper::V4_0::IMapper::MetadataType const&, int (*)(android::hardware::hidl_vec<unsigned char> const&, aidl::android::hardware::graphics::common::ExtendableType*), aidl::android::hardware::graphics::common::ExtendableType*) const */
int _ZNK3hwc14Gralloc4Mapper10getDefaultIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_(void);

/* Symbol: _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9DataspaceEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EEE */
/* Demangled: _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9DataspaceEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EEE */
extern void* _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9DataspaceEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EEE;

/* Symbol: _ZN9DbgLoggerC2IJPKcmS2_mEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, char const*, unsigned long>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, char const*, unsigned long) */
int _ZN9DbgLoggerC2IJPKcmS2_mEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN10HWCDisplay12setPowerModeERKib */
/* Demangled: HWCDisplay::setPowerMode(int const&, bool) */
int _ZN10HWCDisplay12setPowerModeERKib(void);

/* Symbol: _ZN7android2spI12UEventThreadED2Ev */
/* Demangled: android::sp<UEventThread>::~sp() */
int _ZN7android2spI12UEventThreadED2Ev(void);

/* Symbol: _ZTv0_n24_N12UEventThreadD0Ev */
/* Demangled: virtual thunk to UEventThread::~UEventThread() */
int _ZTv0_n24_N12UEventThreadD0Ev(void);

/* Symbol: _ZN9IONDeviceD2Ev */
/* Demangled: IONDevice::~IONDevice() */
int _ZN9IONDeviceD2Ev(void);

/* Symbol: _ZN11HWCMediator18displayGetRequestsEP11hwc2_devicemPiPjPmS2_ */
/* Demangled: HWCMediator::displayGetRequests(hwc2_device*, unsigned long, int*, unsigned int*, unsigned long*, int*) */
int _ZN11HWCMediator18displayGetRequestsEP11hwc2_devicemPiPjPmS2_(void);

/* Symbol: _Z16listForceGPUCompRKNSt3__16vectorIN7android2spI8HWCLayerEENS_9allocatorIS4_EEEE */
/* Demangled: listForceGPUComp(std::__1::vector<android::sp<HWCLayer>, std::__1::allocator<android::sp<HWCLayer> > > const&) */
int _Z16listForceGPUCompRKNSt3__16vectorIN7android2spI8HWCLayerEENS_9allocatorIS4_EEEE(void);

/* Symbol: _ZNK7android6VectorIP9FrameInfoE8do_splatEPvPKvm */
/* Demangled: android::Vector<FrameInfo*>::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIP9FrameInfoE8do_splatEPvPKvm(void);

/* Symbol: _ZNK3hwc14Gralloc4Mapper16createDescriptorEPvS1_ */
/* Demangled: hwc::Gralloc4Mapper::createDescriptor(void*, void*) const */
int _ZNK3hwc14Gralloc4Mapper16createDescriptorEPvS1_(void);

/* Symbol: _ZN11HWCMediator31deviceGetMaxVirtualDisplayCountEP11hwc2_device */
/* Demangled: HWCMediator::deviceGetMaxVirtualDisplayCount(hwc2_device*) */
int _ZN11HWCMediator31deviceGetMaxVirtualDisplayCountEP11hwc2_device(void);

/* Symbol: _ZN11HWCMediatorD2Ev */
/* Demangled: HWCMediator::~HWCMediator() */
int _ZN11HWCMediatorD2Ev(void);

/* Symbol: _ZN9DbgLogger6printfIJEEEvPKcDpT_ */
/* Demangled: void DbgLogger::printf<>(char const*) */
int _ZN9DbgLogger6printfIJEEEvPKcDpT_(void);

/* Symbol: _ZN13HWCDispatcher11getExistJobEm */
/* Demangled: HWCDispatcher::getExistJob(unsigned long) */
int _ZN13HWCDispatcher11getExistJobEm(void);

/* Symbol: _ZN13OverlayEngine17createOutputQueueEjb */
/* Demangled: OverlayEngine::createOutputQueue(unsigned int, bool) */
int _ZN13OverlayEngine17createOutputQueueEjb(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueuejPK13native_handlejEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char const*, DisplayBufferQueue*, unsigned int, native_handle const*, unsigned int>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, DisplayBufferQueue*, unsigned int, native_handle const*, unsigned int) */
int _ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueuejPK13native_handlejEEERKjRKhS2_DpT_(void);

/* Symbol: _ZTV9IPqDevice */
/* Demangled: vtable for IPqDevice */
extern void* _ZTV9IPqDevice;

/* Symbol: _Z16protectedDupImplRKiPKcS0_ */
/* Demangled: protectedDupImpl(int const&, char const*, int const&) */
int _Z16protectedDupImplRKiPKcS0_(void);

/* Symbol: _ZN13HWCDispatcher11getInstanceEv */
/* Demangled: HWCDispatcher::getInstance() */
int _ZN13HWCDispatcher11getInstanceEv(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcjiEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned int, int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned int, int) */
int _ZN9DbgLoggerC2IJPKcjiEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN18AsyncBliterHandler4dumpEPcii */
/* Demangled: AsyncBliterHandler::dump(char*, int, int) */
int _ZN18AsyncBliterHandler4dumpEPcii(void);

/* Symbol: _ZN10DispDevice11getInstanceEv */
/* Demangled: DispDevice::getInstance() */
int _ZN10DispDevice11getInstanceEv(void);

/* Symbol: _ZN23PanelEventMonitorThreadD2Ev */
/* Demangled: PanelEventMonitorThread::~PanelEventMonitorThread() */
int _ZN23PanelEventMonitorThreadD2Ev(void);

/* Symbol: _ZN18DisplayBufferQueue14setBufferParamERNS_11BufferParamE */
/* Demangled: DisplayBufferQueue::setBufferParam(DisplayBufferQueue::BufferParam&) */
int _ZN18DisplayBufferQueue14setBufferParamERNS_11BufferParamE(void);

/* Symbol: _ZN18AsyncBliterHandler16processPhyMirrorEP13DispatcherJob */
/* Demangled: AsyncBliterHandler::processPhyMirror(DispatcherJob*) */
int _ZN18AsyncBliterHandler16processPhyMirrorEP13DispatcherJob(void);

/* Symbol: _ZN15AsyncBlitDevice20isFenceWaitSupportedEv */
/* Demangled: AsyncBlitDevice::isFenceWaitSupported() */
int _ZN15AsyncBlitDevice20isFenceWaitSupportedEv(void);

/* Symbol: _ZN8HWCLayerC1ERKN7android2wpI10HWCDisplayEERKmRKb */
/* Demangled: HWCLayer::HWCLayer(android::wp<HWCDisplay> const&, unsigned long const&, bool const&) */
int _ZN8HWCLayerC1ERKN7android2wpI10HWCDisplayEERKmRKb(void);

/* Symbol: _ZN9MmBufDumpC2Ev */
/* Demangled: MmBufDump::MmBufDump() */
int _ZN9MmBufDumpC2Ev(void);

/* Symbol: _ZN10PerfHelper11perfLockAcqEiiPii */
/* Demangled: PerfHelper::perfLockAcq(int, int, int*, int) */
int _ZN10PerfHelper11perfLockAcqEiiPii(void);

/* Symbol: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9BlendModeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE7__cloneEPNS0_6__baseIS11_EE */
/* Demangled: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9BlendModeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE7__cloneEPNS0_6__baseIS11_EE */
int _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9BlendModeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE7__cloneEPNS0_6__baseIS11_EE(void);

/* Symbol: _Z10listSecureRKNSt3__16vectorIN7android2spI8HWCLayerEENS_9allocatorIS4_EEEE */
/* Demangled: listSecure(std::__1::vector<android::sp<HWCLayer>, std::__1::allocator<android::sp<HWCLayer> > > const&) */
int _Z10listSecureRKNSt3__16vectorIN7android2spI8HWCLayerEENS_9allocatorIS4_EEEE(void);

/* Symbol: _ZTC15TouchHintThread0_9HWCThread */
/* Demangled: construction vtable for HWCThread-in-TouchHintThread */
extern void* _ZTC15TouchHintThread0_9HWCThread;

/* Symbol: _ZN13OverlayEngine11loopHandlerERN7android2spI9FrameInfoEE */
/* Demangled: OverlayEngine::loopHandler(android::sp<FrameInfo>&) */
int _ZN13OverlayEngine11loopHandlerERN7android2spI9FrameInfoEE(void);

/* Symbol: _ZN15AsyncBlitDeviceD2Ev */
/* Demangled: AsyncBlitDevice::~AsyncBlitDevice() */
int _ZN15AsyncBlitDeviceD2Ev(void);

/* Symbol: _ZN9DbgLoggerC2IJPKc14DP_STATUS_ENUMEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, DP_STATUS_ENUM>(unsigned int const&, unsigned char const&, char const*, char const*, DP_STATUS_ENUM) */
int _ZN9DbgLoggerC2IJPKc14DP_STATUS_ENUMEEERKjRKhS2_DpT_(void);

/* Symbol: _ZNK7android6VectorI10MdpJobInfoE12do_constructEPvm */
/* Demangled: android::Vector<MdpJobInfo>::do_construct(void*, unsigned long) const */
int _ZNK7android6VectorI10MdpJobInfoE12do_constructEPvm(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmmjffffffffiiiiiiiiEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned long, unsigned int, float, float, float, float, float, float, float, float, int, int, int, int, int, int, int, int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned long, unsigned int, float, float, float, float, float, float, float, float, int, int, int, int, int, int, int, int) */
int _ZN9DbgLoggerC2IJPKcmmjffffffffiiiiiiiiEEERKjRKhS2_DpT_(void);

/* Symbol: _ZTC20RefreshRequestThread0_9HWCThread */
/* Demangled: construction vtable for HWCThread-in-RefreshRequestThread */
extern void* _ZTC20RefreshRequestThread0_9HWCThread;

/* Symbol: _ZN15ComposerHandlerC2EmRKN7android2spI13OverlayEngineEE */
/* Demangled: ComposerHandler::ComposerHandler(unsigned long, android::sp<OverlayEngine> const&) */
int _ZN15ComposerHandlerC2EmRKN7android2spI13OverlayEngineEE(void);

/* Symbol: _ZN10DispDevice19updateOverlayInputsEmPKP16OverlayPortParamjN7android2spI14ColorTransformEE */
/* Demangled: DispDevice::updateOverlayInputs(unsigned long, OverlayPortParam* const*, unsigned int, android::sp<ColorTransform>) */
int _ZN10DispDevice19updateOverlayInputsEmPKP16OverlayPortParamjN7android2spI14ColorTransformEE(void);

/* Symbol: _ZN11HWCMediator11setSFCPUSetERKm */
/* Demangled: HWCMediator::setSFCPUSet(unsigned long const&) */
int _ZN11HWCMediator11setSFCPUSetERKm(void);

/* Symbol: _ZN13AbortMessager6printfIJmEEEvPKcDpT_ */
/* Demangled: void AbortMessager::printf<unsigned long>(char const*, unsigned long) */
int _ZN13AbortMessager6printfIJmEEEvPKcDpT_(void);

/* Symbol: _ZN10ObjectPoolI13DispatcherJobE13getFreeObjectEv */
/* Demangled: ObjectPool<DispatcherJob>::getFreeObject() */
int _ZN10ObjectPoolI13DispatcherJobE13getFreeObjectEv(void);

/* Symbol: _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZNK3Hrt12isRPOEnabledEv */
/* Demangled: Hrt::isRPOEnabled() const */
int _ZNK3Hrt12isRPOEnabledEv(void);

/* Symbol: _ZN9HWCBuffer21setPrevReleaseFenceFdERKiRKb */
/* Demangled: HWCBuffer::setPrevReleaseFenceFd(int const&, bool const&) */
int _ZN9HWCBuffer21setPrevReleaseFenceFdERKiRKb(void);

/* Symbol: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSC_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EE7__cloneEv */
/* Demangled: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSC_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EE7__cloneEv */
int _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSC_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EE7__cloneEv(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmPK13native_handleiEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, native_handle const*, int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, native_handle const*, int) */
int _ZN9DbgLoggerC2IJPKcmPK13native_handleiEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcmmPK13native_handleiEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned long, native_handle const*, int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned long, native_handle const*, int) */
int _ZN9DbgLoggerC2IJPKcmmPK13native_handleiEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN7HWLayerC1Ev */
/* Demangled: HWLayer::HWLayer() */
int _ZN7HWLayerC1Ev(void);

/* Symbol: _ZTV20RefreshRequestThread */
/* Demangled: vtable for RefreshRequestThread */
extern void* _ZTV20RefreshRequestThread;

/* Symbol: _ZN9DbgLoggerC2IJPKcS2_PK9FrameInfoEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char const*, FrameInfo const*>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, FrameInfo const*) */
int _ZN9DbgLoggerC2IJPKcS2_PK9FrameInfoEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN15AsyncBlitDevice26isDispSelfRefreshSupportedEv */
/* Demangled: AsyncBlitDevice::isDispSelfRefreshSupported() */
int _ZN15AsyncBlitDevice26isDispSelfRefreshSupportedEv(void);

/* Symbol: _Z19mapHwcDispMode2Disp13HWC_DISP_MODE */
/* Demangled: mapHwcDispMode2Disp(HWC_DISP_MODE) */
int _Z19mapHwcDispMode2Disp13HWC_DISP_MODE(void);

/* Symbol: _ZN7android10SWWatchDog4dumpERNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: android::SWWatchDog::dump(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZN7android10SWWatchDog4dumpERNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN14HwcFeatureListC2Ev */
/* Demangled: HwcFeatureList::HwcFeatureList() */
int _ZN14HwcFeatureListC2Ev(void);

/* Symbol: _ZNK8HWCLayer32decideMdpOutputCompressedBuffersEv */
/* Demangled: HWCLayer::decideMdpOutputCompressedBuffers() const */
int _ZNK8HWCLayer32decideMdpOutputCompressedBuffersEv(void);

/* Symbol: _ZNK3hwc14Gralloc4Mapper12importBufferERKN7android8hardware11hidl_handleEPPK13native_handle */
/* Demangled: hwc::Gralloc4Mapper::importBuffer(android::hardware::hidl_handle const&, native_handle const**) const */
int _ZNK3hwc14Gralloc4Mapper12importBufferERKN7android8hardware11hidl_handleEPPK13native_handle(void);

/* Symbol: _ZN18DisplayBufferQueue13dequeueBufferEPNS_13DisplayBufferEbb */
/* Demangled: DisplayBufferQueue::dequeueBuffer(DisplayBufferQueue::DisplayBuffer*, bool, bool) */
int _ZN18DisplayBufferQueue13dequeueBufferEPNS_13DisplayBufferEbb(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueueimEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char const*, DisplayBufferQueue*, int, unsigned long>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, DisplayBufferQueue*, int, unsigned long) */
int _ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueueimEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN10HWCDisplay23setColorTransformForJobEP13DispatcherJob */
/* Demangled: HWCDisplay::setColorTransformForJob(DispatcherJob*) */
int _ZN10HWCDisplay23setColorTransformForJobEP13DispatcherJob(void);

/* Symbol: g_set_buf_from_sf_log_prefix */
/* Demangled: g_set_buf_from_sf_log_prefix */
extern void* g_set_buf_from_sf_log_prefix;

/* Symbol: _ZNK7android6VectorIP13DispatcherJobE16do_move_backwardEPvPKvm */
/* Demangled: android::Vector<DispatcherJob*>::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIP13DispatcherJobE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcS2_ijEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char const*, int, unsigned int>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, int, unsigned int) */
int _ZN9DbgLoggerC2IJPKcS2_ijEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN9SyncFenceC2Em */
/* Demangled: SyncFence::SyncFence(unsigned long) */
int _ZN9SyncFenceC2Em(void);

/* Symbol: _ZN20MDPFrameInfoDebugger28setJobHWCExpectMDPFinsihTimeERKjRKl */
/* Demangled: MDPFrameInfoDebugger::setJobHWCExpectMDPFinsihTime(unsigned int const&, long const&) */
int _ZN20MDPFrameInfoDebugger28setJobHWCExpectMDPFinsihTimeERKjRKl(void);

/* Symbol: _ZN10DispDevice20getRszMaxHeightInputEv */
/* Demangled: DispDevice::getRszMaxHeightInput() */
int _ZN10DispDevice20getRszMaxHeightInputEv(void);

/* Symbol: _ZN13HWCDispatcher27freeDuppedInputBufferHandleEP13DispatcherJob */
/* Demangled: HWCDispatcher::freeDuppedInputBufferHandle(DispatcherJob*) */
int _ZN13HWCDispatcher27freeDuppedInputBufferHandleEP13DispatcherJob(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcS2_mjiiEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char const*, unsigned long, unsigned int, int, int>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, unsigned long, unsigned int, int, int) */
int _ZN9DbgLoggerC2IJPKcS2_mjiiEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN9DbgLoggerC2IJEEERKjRKhPKcDpT_ */
/* Demangled: DbgLogger::DbgLogger<>(unsigned int const&, unsigned char const&, char const*) */
int _ZN9DbgLoggerC2IJEEERKjRKhPKcDpT_(void);

/* Symbol: _ZNK7android6VectorIiE15do_move_forwardEPvPKvm */
/* Demangled: android::Vector<int>::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android6VectorIiE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZNK9DbgLogger11getLogLevelEv */
/* Demangled: DbgLogger::getLogLevel() const */
int _ZNK9DbgLogger11getLogLevelEv(void);

/* Symbol: _ZTv0_n24_N10IdleThreadD0Ev */
/* Demangled: virtual thunk to IdleThread::~IdleThread() */
int _ZTv0_n24_N10IdleThreadD0Ev(void);

/* Symbol: _ZNK13GrallocDevice4dumpEv */
/* Demangled: GrallocDevice::dump() const */
int _ZNK13GrallocDevice4dumpEv(void);

/* Symbol: _ZNK7android9Transform9transformERKNS_7details5TVec3IfEE */
/* Demangled: android::Transform::transform(android::details::TVec3<float> const&) const */
int _ZNK7android9Transform9transformERKNS_7details5TVec3IfEE(void);

/* Symbol: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EEclEOS10_SQ_ */
/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EEclEOS10_SQ_ */
int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EEclEOS10_SQ_(void);

/* Symbol: _ZN15TouchHintThreadC2Ev */
/* Demangled: TouchHintThread::TouchHintThread() */
int _ZN15TouchHintThreadC2Ev(void);

/* Symbol: _ZN15AsyncBlitDevice19isDisplayHrtSupportEv */
/* Demangled: AsyncBlitDevice::isDisplayHrtSupport() */
int _ZN15AsyncBlitDevice19isDisplayHrtSupportEv(void);

/* Symbol: _ZN10DispDevice20enableDisplayFeatureEj */
/* Demangled: DispDevice::enableDisplayFeature(unsigned int) */
int _ZN10DispDevice20enableDisplayFeatureEj(void);

/* Symbol: _ZN10DispDevice32isDisplaySupportedWidthAndHeightEjj */
/* Demangled: DispDevice::isDisplaySupportedWidthAndHeight(unsigned int, unsigned int) */
int _ZN10DispDevice32isDisplaySupportedWidthAndHeightEjj(void);

/* Symbol: _ZN15AsyncBlitDevice21triggerOverlaySessionEmiiijRKjS1_jPKP16OverlayPortParamN7android2spI14ColorTransformEERKbSB_SB_ */
/* Demangled: AsyncBlitDevice::triggerOverlaySession(unsigned long, int, int, int, unsigned int, unsigned int const&, unsigned int const&, unsigned int, OverlayPortParam* const*, android::sp<ColorTransform>, bool const&, bool const&, bool const&) */
int _ZN15AsyncBlitDevice21triggerOverlaySessionEmiiijRKjS1_jPKP16OverlayPortParamN7android2spI14ColorTransformEERKbSB_SB_(void);

/* Symbol: HWC2_PRESENT_VALI_STATE_CHECK_SKIP_VALI_STR */
/* Demangled: HWC2_PRESENT_VALI_STATE_CHECK_SKIP_VALI_STR */
extern void* HWC2_PRESENT_VALI_STATE_CHECK_SKIP_VALI_STR;

/* Symbol: _Z14usageHasSecurej */
/* Demangled: usageHasSecure(unsigned int) */
int _Z14usageHasSecurej(void);

/* Symbol: _ZN9MmBufDump11getInstanceEv */
/* Demangled: MmBufDump::getInstance() */
int _ZN9MmBufDump11getInstanceEv(void);

/* Symbol: _ZN18AsyncBliterHandlerD2Ev */
/* Demangled: AsyncBliterHandler::~AsyncBliterHandler() */
int _ZN18AsyncBliterHandlerD2Ev(void);

/* Symbol: _ZN15AsyncBlitDevice19updateOverlayInputsEmPKP16OverlayPortParamjN7android2spI14ColorTransformEE */
/* Demangled: AsyncBlitDevice::updateOverlayInputs(unsigned long, OverlayPortParam* const*, unsigned int, android::sp<ColorTransform>) */
int _ZN15AsyncBlitDevice19updateOverlayInputsEmPKP16OverlayPortParamjN7android2spI14ColorTransformEE(void);

/* Symbol: _ZN12UEventThread10initializeEv */
/* Demangled: UEventThread::initialize() */
int _ZN12UEventThread10initializeEv(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcffEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, float, float>(unsigned int const&, unsigned char const&, char const*, char const*, float, float) */
int _ZN9DbgLoggerC2IJPKcffEEERKjRKhS2_DpT_(void);

/* Symbol: _ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueueiiNS3_10BufferSlot11BufferStateEEEERKjRKhS2_DpT_ */
/* Demangled: DbgLogger::DbgLogger<char const*, char const*, DisplayBufferQueue*, int, int, DisplayBufferQueue::BufferSlot::BufferState>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, DisplayBufferQueue*, int, int, DisplayBufferQueue::BufferSlot::BufferState) */
int _ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueueiiNS3_10BufferSlot11BufferStateEEEERKjRKhS2_DpT_(void);

/* Symbol: _ZTCN7android22DisplayFeatureCallbackE0_N6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallbackE */
/* Demangled: construction vtable for vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback-in-android::DisplayFeatureCallback */
extern void* _ZTCN7android22DisplayFeatureCallbackE0_N6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallbackE;

/* Symbol: _ZN8Debugger6LOGGERD2Ev */
/* Demangled: Debugger::LOGGER::~LOGGER() */
int _ZN8Debugger6LOGGERD2Ev(void);

/* Symbol: _ZN7android10SWWatchDog9Recipient11onDelAnchorERKmRKiRKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKlSG_RKb */
/* Demangled: android::SWWatchDog::Recipient::onDelAnchor(unsigned long const&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, long const&, long const&, bool const&) */
int _ZN7android10SWWatchDog9Recipient11onDelAnchorERKmRKiRKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKlSG_RKb(void);

/* Symbol: _Z7PrintToRK6DpRectPNSt3__113basic_ostreamIcNS2_11char_traitsIcEEEE */
/* Demangled: PrintTo(DpRect const&, std::__1::basic_ostream<char, std::__1::char_traits<char> >*) */
int _Z7PrintToRK6DpRectPNSt3__113basic_ostreamIcNS2_11char_traitsIcEEEE(void);

__END_DECLS

#endif /* BEGONIA_RE_HWCOMPOSER_MT6785_H */
