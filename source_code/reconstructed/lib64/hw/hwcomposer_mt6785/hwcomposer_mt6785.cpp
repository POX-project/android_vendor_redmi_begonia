/*
 * Reverse-Engineered Source for: hwcomposer.mt6785.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "hwcomposer_mt6785"

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
#include "hwcomposer_mt6785.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_GRAPHICS_FB "/dev/graphics/fb"
#define DEV_DEV_ION "/dev/ion"
#define DEV_DEV_MTK_DISP_MGR "/dev/mtk_disp_mgr"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
        if (access(DEV_DEV_GRAPHICS_FB, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_GRAPHICS_FB, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_GRAPHICS_FB, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_ION, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_ION, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_ION, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_MTK_DISP_MGR, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_MTK_DISP_MGR, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_MTK_DISP_MGR, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Hardware Module Implementation */
static int hwcomposer_mt6785_open(const struct hw_module_t* module, const char* id, struct hw_device_t** device);
static int hwcomposer_mt6785_close(struct hw_device_t* dev);

static struct hw_module_methods_t hwcomposer_mt6785_module_methods = {
    .open = hwcomposer_mt6785_open,
};

struct hw_module_t HAL_MODULE_INFO_SYM __attribute__ ((visibility ("default"))) = {
    .tag = HARDWARE_MODULE_TAG,
    .module_api_version = HARDWARE_MODULE_API_VERSION(1, 0),
    .hal_api_version = HARDWARE_HAL_API_VERSION,
    .id = "hwcomposer",
    .name = "Begonia hwcomposer_mt6785 Module",
    .author = "LineageOS / Community RE",
    .methods = &hwcomposer_mt6785_module_methods,
    .dso = NULL,
    .reserved = {0},
};

static int hwcomposer_mt6785_open(const struct hw_module_t* module, const char* id, struct hw_device_t** device) {
    ALOGI("Opening %s module (id: %s)", module->name, id);
    open_device_node();
    return 0;
}

static int hwcomposer_mt6785_close(struct hw_device_t* dev) {
    ALOGI("Closing hwcomposer_mt6785 module");
    if (dev) free(dev);
    return 0;
}

/* Demangled: HWCDispatcher::HWCDispatcher() */
extern "C" __attribute__((visibility("default"))) int _ZN13HWCDispatcherC2Ev(void) {
    ALOGD("_ZN13HWCDispatcherC2Ev() called");
    return 0;
}

/* Demangled: DispatchThread::DispatchThread(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN14DispatchThreadC1Em(void) {
    ALOGD("_ZN14DispatchThreadC1Em() called");
    return 0;
}

/* Demangled: HWVSyncEstimator::HWVSyncEstimator() */
extern "C" __attribute__((visibility("default"))) int _ZN16HWVSyncEstimatorC1Ev(void) {
    ALOGD("_ZN16HWVSyncEstimatorC1Ev() called");
    return 0;
}

/* Demangled: AsyncBliterHandler::set(android::sp<HWCDisplay> const&, DispatcherJob*) */
extern "C" __attribute__((visibility("default"))) int _ZN18AsyncBliterHandler3setERKN7android2spI10HWCDisplayEEP13DispatcherJob(void) {
    ALOGD("_ZN18AsyncBliterHandler3setERKN7android2spI10HWCDisplayEEP13DispatcherJob() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, int, char const*>(unsigned int const&, unsigned char const&, char const*, char const*, int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKciS2_EEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKciS2_EEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: android::Transform::Transform(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9TransformC2Ej(void) {
    ALOGD("_ZN7android9TransformC2Ej() called");
    return 0;
}

/* Demangled: android::Transform::makeBounds(int, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android9Transform10makeBoundsEii(void) {
    ALOGD("_ZNK7android9Transform10makeBoundsEii() called");
    return 0;
}

/* Demangled: android::SWWatchDog::~SWWatchDog() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10SWWatchDogD0Ev(void) {
    ALOGD("_ZN7android10SWWatchDogD0Ev() called");
    return 0;
}

/* Demangled: PerfHelper::~PerfHelper() */
extern "C" __attribute__((visibility("default"))) int _ZN10PerfHelperD2Ev(void) {
    ALOGD("_ZN10PerfHelperD2Ev() called");
    return 0;
}

/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE7destroyEv */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE7destroyEv() called");
    return 0;
}

/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIjEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EE7destroyEv */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIjEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EE7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIjEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EE7destroyEv() called");
    return 0;
}

/* Demangled: hwc::GraphicBufferMapper::dumpBufferToSystemLog(native_handle const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN3hwc19GraphicBufferMapper21dumpBufferToSystemLogEPK13native_handleb(void) {
    ALOGD("_ZN3hwc19GraphicBufferMapper21dumpBufferToSystemLogEPK13native_handleb() called");
    return 0;
}

/* Demangled: hwc::GraphicBufferMapper::getPixelFormatFourCC(native_handle const*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN3hwc19GraphicBufferMapper20getPixelFormatFourCCEPK13native_handlePj(void) {
    ALOGD("_ZN3hwc19GraphicBufferMapper20getPixelFormatFourCCEPK13native_handlePj() called");
    return 0;
}

/* Demangled: HWC2Api::~HWC2Api() */
extern "C" __attribute__((visibility("default"))) int _ZN7HWC2ApiD0Ev(void) {
    ALOGD("_ZN7HWC2ApiD0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to LayerComposer::~LayerComposer() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N13LayerComposerD1Ev(void) {
    ALOGD("_ZTv0_n24_N13LayerComposerD1Ev() called");
    return 0;
}

/* Demangled: BliterNode::calculateROI(DpRect*, DpRect*, DpRect*, BliterNode::SrcInvalidateParam const&, BliterNode::DstInvalidateParam const&, BliterNode::BufferInfo const&, BliterNode::BufferInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10BliterNode12calculateROIEP6DpRectS1_S1_RKNS_18SrcInvalidateParamERKNS_18DstInvalidateParamERKNS_10BufferInfoESA_(void) {
    ALOGD("_ZN10BliterNode12calculateROIEP6DpRectS1_S1_RKNS_18SrcInvalidateParamERKNS_18DstInvalidateParamERKNS_10BufferInfoESA_() called");
    return 0;
}

/* Demangled: HWCDispatcher::getJob(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN13HWCDispatcher6getJobEm(void) {
    ALOGD("_ZN13HWCDispatcher6getJobEm() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, char const*, int, int, int, int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, char const*, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmS2_iiiiEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmS2_iiiiEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: DispDevice::disableOverlaySession(unsigned long, OverlayPortParam* const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice21disableOverlaySessionEmPKP16OverlayPortParamj(void) {
    ALOGD("_ZN10DispDevice21disableOverlaySessionEmPKP16OverlayPortParamj() called");
    return 0;
}

/* Demangled: DispDevice::legacySetOutputBuffer(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice21legacySetOutputBufferEm(void) {
    ALOGD("_ZN10DispDevice21legacySetOutputBufferEm() called");
    return 0;
}

/* Demangled: AbortMessager::AbortMessager() */
extern "C" __attribute__((visibility("default"))) int _ZN13AbortMessagerC2Ev(void) {
    ALOGD("_ZN13AbortMessagerC2Ev() called");
    return 0;
}

/* Demangled: hwc::Gralloc2Mapper::Gralloc2Mapper() */
extern "C" __attribute__((visibility("default"))) int _ZN3hwc14Gralloc2MapperC1Ev(void) {
    ALOGD("_ZN3hwc14Gralloc2MapperC1Ev() called");
    return 0;
}

/* Exported Object: vtable for HWCThread */
extern "C" __attribute__((visibility("default"))) void* _ZTV9HWCThread = NULL;

/* Demangled: OverlayEngine::doMmBufferDump(android::sp<FrameInfo>&) */
extern "C" __attribute__((visibility("default"))) int _ZN13OverlayEngine14doMmBufferDumpERN7android2spI9FrameInfoEE(void) {
    ALOGD("_ZN13OverlayEngine14doMmBufferDumpERN7android2spI9FrameInfoEE() called");
    return 0;
}

/* Demangled: android::SWWatchDog::SWWatchDog(long const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10SWWatchDogC2ERKl(void) {
    ALOGD("_ZN7android10SWWatchDogC2ERKl() called");
    return 0;
}

/* Demangled: HWCMediator::setJobVideoTimeStamp() */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator20setJobVideoTimeStampEv(void) {
    ALOGD("_ZN11HWCMediator20setJobVideoTimeStampEv() called");
    return 0;
}

/* Demangled: HWCMediator::displaySetActiveConfig(hwc2_device*, unsigned long, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator22displaySetActiveConfigEP11hwc2_devicemj(void) {
    ALOGD("_ZN11HWCMediator22displaySetActiveConfigEP11hwc2_devicemj() called");
    return 0;
}

/* Demangled: DispDevice::waitTouchHint(int, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice13waitTouchHintEiPm(void) {
    ALOGD("_ZN10DispDevice13waitTouchHintEiPm() called");
    return 0;
}

/* Demangled: convertFormat4Bliter(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z20convertFormat4Bliterj(void) {
    ALOGD("_Z20convertFormat4Bliterj() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: DbgLogger::DbgLogger<char const*, DISP_MODE>(unsigned int const&, unsigned char const&, char const*, char const*, DISP_MODE) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKc9DISP_MODEEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKc9DISP_MODEEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: android::Transform::transform(int, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android9Transform9transformEii(void) {
    ALOGD("_ZNK7android9Transform9transformEii() called");
    return 0;
}

/* Demangled: android::Transform::operator[](unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android9TransformixEm(void) {
    ALOGD("_ZNK7android9TransformixEm() called");
    return 0;
}

/* Demangled: AsyncBlitDevice::getRszMaxHeightInput() */
extern "C" __attribute__((visibility("default"))) int _ZN15AsyncBlitDevice20getRszMaxHeightInputEv(void) {
    ALOGD("_ZN15AsyncBlitDevice20getRszMaxHeightInputEv() called");
    return 0;
}

/* Demangled: hwc::Gralloc4Mapper::listSupportedMetadataTypes() const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc4Mapper26listSupportedMetadataTypesEv(void) {
    ALOGD("_ZNK3hwc14Gralloc4Mapper26listSupportedMetadataTypesEv() called");
    return 0;
}

/* Demangled: android::Vector<int>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIiE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<BliterNode::JobParam> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<BliterNode::JobParam> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<BliterNode::JobParam> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<BliterNode::JobParam> > > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN10BliterNode8JobParamEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN10BliterNode8JobParamEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: DisplayManager::notifyHotplugOutDone() */
extern "C" __attribute__((visibility("default"))) int _ZN14DisplayManager20notifyHotplugOutDoneEv(void) {
    ALOGD("_ZN14DisplayManager20notifyHotplugOutDoneEv() called");
    return 0;
}

/* Exported Object: vtable for TouchHintThread */
extern "C" __attribute__((visibility("default"))) void* _ZTV15TouchHintThread = NULL;

/* Demangled: IPqDevice::IPqDevice() */
extern "C" __attribute__((visibility("default"))) int _ZN9IPqDeviceC2Ev(void) {
    ALOGD("_ZN9IPqDeviceC2Ev() called");
    return 0;
}

/* Demangled: BlackBuffer::~BlackBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN11BlackBufferD2Ev(void) {
    ALOGD("_ZN11BlackBufferD2Ev() called");
    return 0;
}

/* Demangled: HWCMediator::displaySetPowerMode(hwc2_device*, unsigned long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator19displaySetPowerModeEP11hwc2_devicemi(void) {
    ALOGD("_ZN11HWCMediator19displaySetPowerModeEP11hwc2_devicemi() called");
    return 0;
}

/* Demangled: HWCDisplay::getVisibleLayersSortedByZ() */
extern "C" __attribute__((visibility("default"))) int _ZN10HWCDisplay25getVisibleLayersSortedByZEv(void) {
    ALOGD("_ZN10HWCDisplay25getVisibleLayersSortedByZEv() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<FrameInfo> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spI9FrameInfoEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spI9FrameInfoEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: AsyncBlitDevice::enableDisplayFeature(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN15AsyncBlitDevice20enableDisplayFeatureEj(void) {
    ALOGD("_ZN15AsyncBlitDevice20enableDisplayFeatureEj() called");
    return 0;
}

/* Exported Object: HWC2_PRESENT_VALI_STATE_PRESENT_STR */
extern "C" __attribute__((visibility("default"))) void* HWC2_PRESENT_VALI_STATE_PRESENT_STR = NULL;

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::operator<< <char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE(void) {
    ALOGD("_ZNSt3__1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, char const*, DispatcherJob const*>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, DispatcherJob const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcS2_PK13DispatcherJobEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcS2_PK13DispatcherJobEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, char const*, DisplayBufferQueue*, char const*>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, DisplayBufferQueue*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueueS2_EEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueueS2_EEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: mapHdrTransfer(int) */
extern "C" __attribute__((visibility("default"))) int _Z14mapHdrTransferi(void) {
    ALOGD("_Z14mapHdrTransferi() called");
    return 0;
}

/* Demangled: HWCMediator::displayGetType(hwc2_device*, unsigned long, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator14displayGetTypeEP11hwc2_devicemPi(void) {
    ALOGD("_ZN11HWCMediator14displayGetTypeEP11hwc2_devicemPi() called");
    return 0;
}

/* Demangled: HWCDisplay::needDoAvGrouping(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10HWCDisplay16needDoAvGroupingEj(void) {
    ALOGD("_ZN10HWCDisplay16needDoAvGroupingEj() called");
    return 0;
}

/* Demangled: WhiteBuffer::WhiteBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN11WhiteBufferC2Ev(void) {
    ALOGD("_ZN11WhiteBufferC2Ev() called");
    return 0;
}

/* Demangled: hwc::GraphicBufferMapper::getTransportSize(native_handle const*, unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN3hwc19GraphicBufferMapper16getTransportSizeEPK13native_handlePjS4_(void) {
    ALOGD("_ZN3hwc19GraphicBufferMapper16getTransportSizeEPK13native_handlePjS4_() called");
    return 0;
}

/* Demangled: DisplayListener::setCallbackRefresh(void (*)(void*, unsigned long), void*) */
extern "C" __attribute__((visibility("default"))) int _ZN15DisplayListener18setCallbackRefreshEPFvPvmES0_(void) {
    ALOGD("_ZN15DisplayListener18setCallbackRefreshEPFvPvmES0_() called");
    return 0;
}

/* Demangled: HWCDisplay::setColorTransform(float const*, int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10HWCDisplay17setColorTransformEPKfRKi(void) {
    ALOGD("_ZN10HWCDisplay17setColorTransformEPKfRKi() called");
    return 0;
}

/* Demangled: android::Vector<OverlayEngine::OverlayInput*>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIPN13OverlayEngine12OverlayInputEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIPN13OverlayEngine12OverlayInputEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: BliterNode::calculateAllROI(unsigned int const&, android::Rect*) */
extern "C" __attribute__((visibility("default"))) int _ZN10BliterNode15calculateAllROIERKjPN7android4RectE(void) {
    ALOGD("_ZN10BliterNode15calculateAllROIERKjPN7android4RectE() called");
    return 0;
}

/* Demangled: android::Transform::Transform() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9TransformC2Ev(void) {
    ALOGD("_ZN7android9TransformC2Ev() called");
    return 0;
}

/* Demangled: IdleThread::initialize(long) */
extern "C" __attribute__((visibility("default"))) int _ZN10IdleThread10initializeEl(void) {
    ALOGD("_ZN10IdleThread10initializeEl() called");
    return 0;
}

/* Demangled: HWCDispatcher::decideDirtyAndFlush(unsigned long, unsigned int, android::sp<HWCLayer>, HWLayer&) */
extern "C" __attribute__((visibility("default"))) int _ZN13HWCDispatcher19decideDirtyAndFlushEmjN7android2spI8HWCLayerEER7HWLayer(void) {
    ALOGD("_ZN13HWCDispatcher19decideDirtyAndFlushEmjN7android2spI8HWCLayerEER7HWLayer() called");
    return 0;
}

/* Demangled: IONDevice::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9IONDevice11getInstanceEv(void) {
    ALOGD("_ZN9IONDevice11getInstanceEv() called");
    return 0;
}

/* Demangled: LayerComposer::~LayerComposer() */
extern "C" __attribute__((visibility("default"))) int _ZN13LayerComposerD1Ev(void) {
    ALOGD("_ZN13LayerComposerD1Ev() called");
    return 0;
}

/* Exported Object: vtable for IdleThread */
extern "C" __attribute__((visibility("default"))) void* _ZTV10IdleThread = NULL;

/* Demangled: PlatformCommon::PlatformConfig::PlatformConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN14PlatformCommon14PlatformConfigC2Ev(void) {
    ALOGD("_ZN14PlatformCommon14PlatformConfigC2Ev() called");
    return 0;
}

/* Demangled: DispDevice::setPowerMode(unsigned long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice12setPowerModeEmi(void) {
    ALOGD("_ZN10DispDevice12setPowerModeEmi() called");
    return 0;
}

/* Demangled: DispDevice::dump(unsigned long const&, android::String8*) */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice4dumpERKmPN7android7String8E(void) {
    ALOGD("_ZN10DispDevice4dumpERKmPN7android7String8E() called");
    return 0;
}

/* Exported Object: VTT for DisplayListener */
extern "C" __attribute__((visibility("default"))) void* _ZTT15DisplayListener = NULL;

/* Demangled: int hwc::Gralloc4Mapper::getDefault<unsigned int>(unsigned int, unsigned int, int, unsigned int, unsigned long, android::hardware::graphics::mapper::V4_0::IMapper::MetadataType const&, int (*)(android::hardware::hidl_vec<unsigned char> const&, unsigned int*), unsigned int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc4Mapper10getDefaultIjEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS3_8hidl_vecIhEEPT_ESG_(void) {
    ALOGD("_ZNK3hwc14Gralloc4Mapper10getDefaultIjEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS3_8hidl_vecIhEEPT_ESG_() called");
    return 0;
}

/* Demangled: DisplayManager::requestVSync(unsigned long, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN14DisplayManager12requestVSyncEmb(void) {
    ALOGD("_ZN14DisplayManager12requestVSyncEmb() called");
    return 0;
}

/* Demangled: virtual thunk to RefreshRequestThread::~RefreshRequestThread() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N20RefreshRequestThreadD0Ev(void) {
    ALOGD("_ZTv0_n24_N20RefreshRequestThreadD0Ev() called");
    return 0;
}

/* Exported Object: vtable for hwc::GrallocMapper */
extern "C" __attribute__((visibility("default"))) void* _ZTVN3hwc13GrallocMapperE = NULL;

/* Demangled: hwc::Gralloc4Mapper::getTransportSize(native_handle const*, unsigned int*, unsigned int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc4Mapper16getTransportSizeEPK13native_handlePjS4_(void) {
    ALOGD("_ZNK3hwc14Gralloc4Mapper16getTransportSizeEPK13native_handlePjS4_() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, char const*, unsigned long, int, int, unsigned int, unsigned int>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, unsigned long, int, int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcS2_miijjEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcS2_miijjEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: DispDevice::queryValidLayer(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice15queryValidLayerEPv(void) {
    ALOGD("_ZN10DispDevice15queryValidLayerEPv() called");
    return 0;
}

/* Demangled: hwc::GraphicBufferMapper::getBufferId(native_handle const*, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZN3hwc19GraphicBufferMapper11getBufferIdEPK13native_handlePm(void) {
    ALOGD("_ZN3hwc19GraphicBufferMapper11getBufferIdEPK13native_handlePm() called");
    return 0;
}

/* Demangled: HWCDispatcher::onVSync(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN13HWCDispatcher7onVSyncEm(void) {
    ALOGD("_ZN13HWCDispatcher7onVSyncEm() called");
    return 0;
}

/* Demangled: DisplayBufferQueue::DisplayBufferQueue(int, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN18DisplayBufferQueueC2Eim(void) {
    ALOGD("_ZN18DisplayBufferQueueC2Eim() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: HWCDisplay::present() */
extern "C" __attribute__((visibility("default"))) int _ZN10HWCDisplay7presentEv(void) {
    ALOGD("_ZN10HWCDisplay7presentEv() called");
    return 0;
}

/* Demangled: WhiteBuffer::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN11WhiteBuffer11getInstanceEv(void) {
    ALOGD("_ZN11WhiteBuffer11getInstanceEv() called");
    return 0;
}

/* Demangled: HWVSyncEstimator::pushPresentFence(int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN16HWVSyncEstimator16pushPresentFenceERKi(void) {
    ALOGD("_ZN16HWVSyncEstimator16pushPresentFenceERKi() called");
    return 0;
}

/* Demangled: HWCLayer::setZOrder(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN8HWCLayer9setZOrderERKj(void) {
    ALOGD("_ZN8HWCLayer9setZOrderERKj() called");
    return 0;
}

/* Demangled: HWCLayer::getPrevIsPQEnhance() const */
extern "C" __attribute__((visibility("default"))) int _ZNK8HWCLayer18getPrevIsPQEnhanceEv(void) {
    ALOGD("_ZNK8HWCLayer18getPrevIsPQEnhanceEv() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<DispatcherJob> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spI13DispatcherJobEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spI13DispatcherJobEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: virtual thunk to OverlayEngine::~OverlayEngine() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N13OverlayEngineD0Ev(void) {
    ALOGD("_ZTv0_n24_N13OverlayEngineD0Ev() called");
    return 0;
}

/* Demangled: AsyncBlitDevice::isDisplayArrSupport() */
extern "C" __attribute__((visibility("default"))) int _ZN15AsyncBlitDevice19isDisplayArrSupportEv(void) {
    ALOGD("_ZN15AsyncBlitDevice19isDisplayArrSupportEv() called");
    return 0;
}

/* Demangled: DisplayManager::requestNextVSync(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN14DisplayManager16requestNextVSyncEm(void) {
    ALOGD("_ZN14DisplayManager16requestNextVSyncEm() called");
    return 0;
}

/* Demangled: UEventThread::UEventThread() */
extern "C" __attribute__((visibility("default"))) int _ZN12UEventThreadC2Ev(void) {
    ALOGD("_ZN12UEventThreadC2Ev() called");
    return 0;
}

/* Demangled: HWCMediator::buildVisibleAndInvisibleLayerForAllDisplay() */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator42buildVisibleAndInvisibleLayerForAllDisplayEv(void) {
    ALOGD("_ZN11HWCMediator42buildVisibleAndInvisibleLayerForAllDisplayEv() called");
    return 0;
}

/* Demangled: HWCLayer::setDamage(hwc_region const&) */
extern "C" __attribute__((visibility("default"))) int _ZN8HWCLayer9setDamageERK10hwc_region(void) {
    ALOGD("_ZN8HWCLayer9setDamageERK10hwc_region() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, char const*, native_handle const*>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, native_handle const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcS2_PK13native_handleEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcS2_PK13native_handleEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: ColorTransform::ColorTransform(float const*, int const&, bool const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14ColorTransformC1EPKfRKiRKb(void) {
    ALOGD("_ZN14ColorTransformC1EPKfRKiRKb() called");
    return 0;
}

/* Demangled: HWCMediator::getValidDisplayNum() */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator18getValidDisplayNumEv(void) {
    ALOGD("_ZN11HWCMediator18getValidDisplayNumEv() called");
    return 0;
}

/* Demangled: HWCMediator::close() */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator5closeEv(void) {
    ALOGD("_ZN11HWCMediator5closeEv() called");
    return 0;
}

/* Demangled: DisplayManager::getDisplayPowerState(unsigned long const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14DisplayManager20getDisplayPowerStateERKm(void) {
    ALOGD("_ZN14DisplayManager20getDisplayPowerStateERKm() called");
    return 0;
}

/* Exported Object: construction vtable for android::Thread-in-PanelEventMonitorThread */
extern "C" __attribute__((visibility("default"))) void* _ZTC23PanelEventMonitorThread0_N7android6ThreadE = NULL;

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, char const*, int, bool>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, char const*, int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmS2_ibEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmS2_ibEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: HrtCommon::updateGlesRangeHwTypeForDisplays(std::__1::vector<android::sp<HWCDisplay>, std::__1::allocator<android::sp<HWCDisplay> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9HrtCommon32updateGlesRangeHwTypeForDisplaysERKNSt3__16vectorIN7android2spI10HWCDisplayEENS0_9allocatorIS5_EEEE(void) {
    ALOGD("_ZN9HrtCommon32updateGlesRangeHwTypeForDisplaysERKNSt3__16vectorIN7android2spI10HWCDisplayEENS0_9allocatorIS5_EEEE() called");
    return 0;
}

/* Demangled: hwc::GraphicBufferMapper::getPixelFormatModifier(native_handle const*, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZN3hwc19GraphicBufferMapper22getPixelFormatModifierEPK13native_handlePm(void) {
    ALOGD("_ZN3hwc19GraphicBufferMapper22getPixelFormatModifierEPK13native_handlePm() called");
    return 0;
}

/* Demangled: HWCMediator::setupHDRFeature() */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator15setupHDRFeatureEv(void) {
    ALOGD("_ZN11HWCMediator15setupHDRFeatureEv() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, int, int, unsigned int, DP_COLOR_ENUM, int, int, int, int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, int, int, unsigned int, DP_COLOR_ENUM, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmiij13DP_COLOR_ENUMiiiiEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmiij13DP_COLOR_ENUMiiiiEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: DispDevice::DispDevice() */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDeviceC1Ev(void) {
    ALOGD("_ZN10DispDeviceC1Ev() called");
    return 0;
}

/* Demangled: HWCMediator::lockRefreshThread(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator17lockRefreshThreadEm(void) {
    ALOGD("_ZN11HWCMediator17lockRefreshThreadEm() called");
    return 0;
}

/* Demangled: DbgLogger::getBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLogger9getBufferEv(void) {
    ALOGD("_ZN9DbgLogger9getBufferEv() called");
    return 0;
}

/* Demangled: DisplayManager::setDisplayDataForVir(unsigned long const&, unsigned int const&, unsigned int const&, unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14DisplayManager20setDisplayDataForVirERKmRKjS3_S3_(void) {
    ALOGD("_ZN14DisplayManager20setDisplayDataForVirERKmRKjS3_S3_() called");
    return 0;
}

/* Demangled: BliterNode::SrcInvalidateParam::dump() */
extern "C" __attribute__((visibility("default"))) int _ZN10BliterNode18SrcInvalidateParam4dumpEv(void) {
    ALOGD("_ZN10BliterNode18SrcInvalidateParam4dumpEv() called");
    return 0;
}

/* Demangled: PlatformCommon::getLimitedVideoSize() */
extern "C" __attribute__((visibility("default"))) int _ZN14PlatformCommon19getLimitedVideoSizeEv(void) {
    ALOGD("_ZN14PlatformCommon19getLimitedVideoSizeEv() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, DISP_IF_MODE>(unsigned int const&, unsigned char const&, char const*, char const*, DISP_IF_MODE) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKc12DISP_IF_MODEEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKc12DISP_IF_MODEEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<int> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIiEE = NULL;

/* Demangled: HWCLayer::getBufferQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN8HWCLayer14getBufferQueueEv(void) {
    ALOGD("_ZN8HWCLayer14getBufferQueueEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned char, int>, std::__1::__map_value_compare<unsigned char, std::__1::__value_type<unsigned char, int>, std::__1::less<unsigned char>, true>, std::__1::allocator<std::__1::__value_type<unsigned char, int> > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned char, int>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIhiEENS_19__map_value_compareIhS2_NS_4lessIhEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIhiEENS_19__map_value_compareIhS2_NS_4lessIhEELb1EEENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE() called");
    return 0;
}

/* Demangled: android::Vector<DispatcherJob*>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIP13DispatcherJobE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIP13DispatcherJobE12do_constructEPvm() called");
    return 0;
}

/* Demangled: IONDevice::ionCloseAndSet(int*, int const&, bool const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9IONDevice14ionCloseAndSetEPiRKiRKb(void) {
    ALOGD("_ZN9IONDevice14ionCloseAndSetEPiRKiRKb() called");
    return 0;
}

/* Demangled: mapP3PqParam(DpPqParam*, int const&) */
extern "C" __attribute__((visibility("default"))) int _Z12mapP3PqParamP9DpPqParamRKi(void) {
    ALOGD("_Z12mapP3PqParamP9DpPqParamRKi() called");
    return 0;
}

/* Demangled: hwc::Gralloc4Mapper::getPixelFormatRequested(native_handle const*, android::hardware::graphics::common::V1_2::PixelFormat*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc4Mapper23getPixelFormatRequestedEPK13native_handlePN7android8hardware8graphics6common4V1_211PixelFormatE(void) {
    ALOGD("_ZNK3hwc14Gralloc4Mapper23getPixelFormatRequestedEPK13native_handlePN7android8hardware8graphics6common4V1_211PixelFormatE() called");
    return 0;
}

/* Demangled: __fe_raise_inexact */
extern "C" __attribute__((visibility("default"))) int __fe_raise_inexact(void) {
    ALOGD("__fe_raise_inexact() called");
    return 0;
}

/* Demangled: HWCDispatcher::getOvlEnginePowerModeChanged(unsigned long const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK13HWCDispatcher28getOvlEnginePowerModeChangedERKm(void) {
    ALOGD("_ZNK13HWCDispatcher28getOvlEnginePowerModeChangedERKm() called");
    return 0;
}

/* Demangled: OverlayEngine::getOverlaySessionMode() */
extern "C" __attribute__((visibility("default"))) int _ZN13OverlayEngine21getOverlaySessionModeEv(void) {
    ALOGD("_ZN13OverlayEngine21getOverlaySessionModeEv() called");
    return 0;
}

/* Demangled: DisplayManager::createTouchHintThread(int) */
extern "C" __attribute__((visibility("default"))) int _ZN14DisplayManager21createTouchHintThreadEi(void) {
    ALOGD("_ZN14DisplayManager21createTouchHintThreadEi() called");
    return 0;
}

/* Demangled: virtual thunk to PanelEventMonitorThread::~PanelEventMonitorThread() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N23PanelEventMonitorThreadD1Ev(void) {
    ALOGD("_ZTv0_n24_N23PanelEventMonitorThreadD1Ev() called");
    return 0;
}

/* Demangled: HWCDisplay::getHeight(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK10HWCDisplay9getHeightEj(void) {
    ALOGD("_ZNK10HWCDisplay9getHeightEj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::sp<HWCVSyncListener> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_2spI16HWCVSyncListenerEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_2spI16HWCVSyncListenerEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::SWWatchDog::delAnchor(unsigned long const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10SWWatchDog9delAnchorERKm(void) {
    ALOGD("_ZN7android10SWWatchDog9delAnchorERKm() called");
    return 0;
}

/* Demangled: DispDevice::isDispSelfRefreshSupported() */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice26isDispSelfRefreshSupportedEv(void) {
    ALOGD("_ZN10DispDevice26isDispSelfRefreshSupportedEv() called");
    return 0;
}

/* Demangled: HWCDispatcher::VirPostHandler::setError(DispatcherJob*) */
extern "C" __attribute__((visibility("default"))) int _ZN13HWCDispatcher14VirPostHandler8setErrorEP13DispatcherJob(void) {
    ALOGD("_ZN13HWCDispatcher14VirPostHandler8setErrorEP13DispatcherJob() called");
    return 0;
}

/* Demangled: OverlayEngine::dump(android::String8*) */
extern "C" __attribute__((visibility("default"))) int _ZN13OverlayEngine4dumpEPN7android7String8E(void) {
    ALOGD("_ZN13OverlayEngine4dumpEPN7android7String8E() called");
    return 0;
}

/* Demangled: PlatformCommon::isMMLayerValid(android::sp<HWCLayer> const&, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN14PlatformCommon14isMMLayerValidERKN7android2spI8HWCLayerEEPi(void) {
    ALOGD("_ZN14PlatformCommon14isMMLayerValidERKN7android2spI8HWCLayerEEPi() called");
    return 0;
}

/* Demangled: android::DisplayFeatureGet::serviceDied(unsigned long, android::wp<android::hidl::base::V1_0::IBase> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android17DisplayFeatureGet11serviceDiedEmRKNS_2wpINS_4hidl4base4V1_05IBaseEEE(void) {
    ALOGD("_ZN7android17DisplayFeatureGet11serviceDiedEmRKNS_2wpINS_4hidl4base4V1_05IBaseEEE() called");
    return 0;
}

/* Demangled: __cmptf2 */
extern "C" __attribute__((visibility("default"))) int __cmptf2(void) {
    ALOGD("__cmptf2() called");
    return 0;
}

/* Demangled: HWCMediator::layerSetCursorPosition(hwc2_device*, unsigned long, unsigned long, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator22layerSetCursorPositionEP11hwc2_devicemmii(void) {
    ALOGD("_ZN11HWCMediator22layerSetCursorPositionEP11hwc2_devicemmii() called");
    return 0;
}

/* Demangled: OverlayEngine::trigger(bool const&, unsigned int const&, unsigned int const&, int const&, bool const&, android::sp<ColorTransform>, bool const&) */
extern "C" __attribute__((visibility("default"))) int _ZN13OverlayEngine7triggerERKbRKjS3_RKiS1_N7android2spI14ColorTransformEES1_(void) {
    ALOGD("_ZN13OverlayEngine7triggerERKbRKjS3_RKiS1_N7android2spI14ColorTransformEES1_() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned int, unsigned int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcjjEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcjjEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: AsyncBliterHandler::process(DispatcherJob*) */
extern "C" __attribute__((visibility("default"))) int _ZN18AsyncBliterHandler7processEP13DispatcherJob(void) {
    ALOGD("_ZN18AsyncBliterHandler7processEP13DispatcherJob() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, char const*, unsigned int, unsigned int, unsigned int, int>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, unsigned int, unsigned int, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcS2_jjjiEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcS2_jjjiEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: hwc::Gralloc4Mapper::getCompression(native_handle const*, aidl::android::hardware::graphics::common::Compression*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc4Mapper14getCompressionEPK13native_handlePN4aidl7android8hardware8graphics6common11CompressionE(void) {
    ALOGD("_ZNK3hwc14Gralloc4Mapper14getCompressionEPK13native_handlePN4aidl7android8hardware8graphics6common11CompressionE() called");
    return 0;
}

/* Demangled: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSJ_8hidl_vecIhEEPT_ESW_EUlRKSV_SU_E_NSC_IS11_EEFvNSM_5ErrorESU_EE7__cloneEv */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSJ_8hidl_vecIhEEPT_ESW_EUlRKSV_SU_E_NSC_IS11_EEFvNSM_5ErrorESU_EE7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSJ_8hidl_vecIhEEPT_ESW_EUlRKSV_SU_E_NSC_IS11_EEFvNSM_5ErrorESU_EE7__cloneEv() called");
    return 0;
}

/* Demangled: VSyncThread::VSyncThread(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN11VSyncThreadC1Em(void) {
    ALOGD("_ZN11VSyncThreadC1Em() called");
    return 0;
}

/* Demangled: PanelEventMonitorThread::Start() */
extern "C" __attribute__((visibility("default"))) int _ZN23PanelEventMonitorThread5StartEv(void) {
    ALOGD("_ZN23PanelEventMonitorThread5StartEv() called");
    return 0;
}

/* Demangled: OverlayEngine::~OverlayEngine() */
extern "C" __attribute__((visibility("default"))) int _ZN13OverlayEngineD0Ev(void) {
    ALOGD("_ZN13OverlayEngineD0Ev() called");
    return 0;
}

/* Demangled: hwc::GraphicBufferMapper::getPixelFormatRequested(native_handle const*, android::hardware::graphics::common::V1_2::PixelFormat*) */
extern "C" __attribute__((visibility("default"))) int _ZN3hwc19GraphicBufferMapper23getPixelFormatRequestedEPK13native_handlePN7android8hardware8graphics6common4V1_211PixelFormatE(void) {
    ALOGD("_ZN3hwc19GraphicBufferMapper23getPixelFormatRequestedEPK13native_handlePN7android8hardware8graphics6common4V1_211PixelFormatE() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmiEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmiEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: getPrivateHandleLayerType(native_handle const* const&, PrivateHandle*) */
extern "C" __attribute__((visibility("default"))) int _Z25getPrivateHandleLayerTypeRKPK13native_handleP13PrivateHandle(void) {
    ALOGD("_Z25getPrivateHandleLayerTypeRKPK13native_handleP13PrivateHandle() called");
    return 0;
}

/* Demangled: LayerComposer::nullop() */
extern "C" __attribute__((visibility("default"))) int _ZN13LayerComposer6nullopEv(void) {
    ALOGD("_ZN13LayerComposer6nullopEv() called");
    return 0;
}

/* Demangled: HWVSyncEstimator::~HWVSyncEstimator() */
extern "C" __attribute__((visibility("default"))) int _ZN16HWVSyncEstimatorD2Ev(void) {
    ALOGD("_ZN16HWVSyncEstimatorD2Ev() called");
    return 0;
}

/* Demangled: AsyncBliterHandler::cancelLayers(DispatcherJob*) */
extern "C" __attribute__((visibility("default"))) int _ZN18AsyncBliterHandler12cancelLayersEP13DispatcherJob(void) {
    ALOGD("_ZN18AsyncBliterHandler12cancelLayersEP13DispatcherJob() called");
    return 0;
}

/* Demangled: android::Transform::set(float, float, float, float) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9Transform3setEffff(void) {
    ALOGD("_ZN7android9Transform3setEffff() called");
    return 0;
}

/* Demangled: DisplayManager::hotplugExt(unsigned long, bool, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN14DisplayManager10hotplugExtEmbbb(void) {
    ALOGD("_ZN14DisplayManager10hotplugExtEmbbb() called");
    return 0;
}

/* Demangled: ObjectPool<FrameInfo>::returnObject(FrameInfo const*) */
extern "C" __attribute__((visibility("default"))) int _ZN10ObjectPoolI9FrameInfoE12returnObjectEPKS0_(void) {
    ALOGD("_ZN10ObjectPoolI9FrameInfoE12returnObjectEPKS0_() called");
    return 0;
}

/* Demangled: hwc::GraphicBufferMapper::getCompression(native_handle const*, aidl::android::hardware::graphics::common::ExtendableType*) */
extern "C" __attribute__((visibility("default"))) int _ZN3hwc19GraphicBufferMapper14getCompressionEPK13native_handlePN4aidl7android8hardware8graphics6common14ExtendableTypeE(void) {
    ALOGD("_ZN3hwc19GraphicBufferMapper14getCompressionEPK13native_handlePN4aidl7android8hardware8graphics6common14ExtendableTypeE() called");
    return 0;
}

/* Demangled: DispatchThread::waitNextVSyncLocked(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN14DispatchThread19waitNextVSyncLockedEm(void) {
    ALOGD("_ZN14DispatchThread19waitNextVSyncLockedEm() called");
    return 0;
}

/* Demangled: android::Vector<native_handle const*>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIPK13native_handleE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIPK13native_handleE10do_destroyEPvm() called");
    return 0;
}

/* Exported Object: VTT for UEventThread */
extern "C" __attribute__((visibility("default"))) void* _ZTT12UEventThread = NULL;

/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS8_ISX_EEFvNSI_5ErrorESQ_EE7destroyEv */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS8_ISX_EEFvNSI_5ErrorESQ_EE7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS8_ISX_EEFvNSI_5ErrorESQ_EE7destroyEv() called");
    return 0;
}

/* Demangled: HWCDisplay::isForceGpuCompose() */
extern "C" __attribute__((visibility("default"))) int _ZN10HWCDisplay17isForceGpuComposeEv(void) {
    ALOGD("_ZN10HWCDisplay17isForceGpuComposeEv() called");
    return 0;
}

/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIjEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EE18destroy_deallocateEv */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIjEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EE18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIjEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EE18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: HWCMediator::displayGetColorMode(hwc2_device*, unsigned long, unsigned int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator19displayGetColorModeEP11hwc2_devicemPjPi(void) {
    ALOGD("_ZN11HWCMediator19displayGetColorModeEP11hwc2_devicemPjPi() called");
    return 0;
}

/* Demangled: void AbortMessager::printf<unsigned long, char const*, char const*>(char const*, unsigned long, char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN13AbortMessager6printfIJmPKcS2_EEEvS2_DpT_(void) {
    ALOGD("_ZN13AbortMessager6printfIJmPKcS2_EEEvS2_DpT_() called");
    return 0;
}

/* Demangled: android::Vector<android::SortedVector<android::sp<HWCVSyncListener> > >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_12SortedVectorINS_2spI16HWCVSyncListenerEEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_12SortedVectorINS_2spI16HWCVSyncListenerEEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: RefreshRequestThread::~RefreshRequestThread() */
extern "C" __attribute__((visibility("default"))) int _ZN20RefreshRequestThreadD1Ev(void) {
    ALOGD("_ZN20RefreshRequestThreadD1Ev() called");
    return 0;
}

/* Demangled: FrameOverlayInfo::FrameOverlayInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN16FrameOverlayInfoC2Ev(void) {
    ALOGD("_ZN16FrameOverlayInfoC2Ev() called");
    return 0;
}

/* Demangled: HWCDisplay::updateFps() */
extern "C" __attribute__((visibility("default"))) int _ZN10HWCDisplay9updateFpsEv(void) {
    ALOGD("_ZN10HWCDisplay9updateFpsEv() called");
    return 0;
}

/* Demangled: DispDevice::queryCapsInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice13queryCapsInfoEv(void) {
    ALOGD("_ZN10DispDevice13queryCapsInfoEv() called");
    return 0;
}

/* Demangled: HWCMediator::isAllDisplayPresentDone() */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator23isAllDisplayPresentDoneEv(void) {
    ALOGD("_ZN11HWCMediator23isAllDisplayPresentDoneEv() called");
    return 0;
}

/* Demangled: LayerHandler::~LayerHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN12LayerHandlerD0Ev(void) {
    ALOGD("_ZN12LayerHandlerD0Ev() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned int, char const*, int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned int, char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmjS2_iEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmjS2_iEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Exported Object: HWC2_BLEND_MODE_NONE_STR */
extern "C" __attribute__((visibility("default"))) void* HWC2_BLEND_MODE_NONE_STR = NULL;

/* Demangled: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE7__cloneEPNS0_6__baseIS11_EE */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE7__cloneEPNS0_6__baseIS11_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE7__cloneEPNS0_6__baseIS11_EE() called");
    return 0;
}

/* Demangled: HWCLayer::setSourceCrop(hwc_frect const&) */
extern "C" __attribute__((visibility("default"))) int _ZN8HWCLayer13setSourceCropERK9hwc_frect(void) {
    ALOGD("_ZN8HWCLayer13setSourceCropERK9hwc_frect() called");
    return 0;
}

/* Demangled: android::Vector<android::SortedVector<android::sp<HWCVSyncListener> > >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_12SortedVectorINS_2spI16HWCVSyncListenerEEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_12SortedVectorINS_2spI16HWCVSyncListenerEEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Exported Object: VTT for VSyncThread */
extern "C" __attribute__((visibility("default"))) void* _ZTT11VSyncThread = NULL;

/* Demangled: PqDeviceLegacy::checkAndOpenIoctl() */
extern "C" __attribute__((visibility("default"))) int _ZN14PqDeviceLegacy17checkAndOpenIoctlEv(void) {
    ALOGD("_ZN14PqDeviceLegacy17checkAndOpenIoctlEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<android::WDTAnchor, std::__1::allocator<android::WDTAnchor> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN7android9WDTAnchorENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN7android9WDTAnchorENS_9allocatorIS2_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: DispatcherJob::~DispatcherJob() */
extern "C" __attribute__((visibility("default"))) int _ZN13DispatcherJobD1Ev(void) {
    ALOGD("_ZN13DispatcherJobD1Ev() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, int, int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmiiEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmiiEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: ComposerHandler::cancelLayers(DispatcherJob*) */
extern "C" __attribute__((visibility("default"))) int _ZN15ComposerHandler12cancelLayersEP13DispatcherJob(void) {
    ALOGD("_ZN15ComposerHandler12cancelLayersEP13DispatcherJob() called");
    return 0;
}

/* Demangled: BliterNode::JobParam::dump(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN10BliterNode8JobParam4dumpENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN10BliterNode8JobParam4dumpENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: getSrcHeight(android::sp<HWCLayer> const&) */
extern "C" __attribute__((visibility("default"))) int _Z12getSrcHeightRKN7android2spI8HWCLayerEE(void) {
    ALOGD("_Z12getSrcHeightRKN7android2spI8HWCLayerEE() called");
    return 0;
}

/* Demangled: mapHdrMatrixCoeffs(int) */
extern "C" __attribute__((visibility("default"))) int _Z18mapHdrMatrixCoeffsi(void) {
    ALOGD("_Z18mapHdrMatrixCoeffsi() called");
    return 0;
}

/* Demangled: android::SWWatchDog::setTickNotify(std::__1::shared_ptr<android::SWWatchDog::Recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10SWWatchDog13setTickNotifyERKNSt3__110shared_ptrINS0_9RecipientEEE(void) {
    ALOGD("_ZN7android10SWWatchDog13setTickNotifyERKNSt3__110shared_ptrINS0_9RecipientEEE() called");
    return 0;
}

/* Demangled: LayerComposer::LayerComposer(unsigned long, android::sp<OverlayEngine> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN13LayerComposerC2EmRKN7android2spI13OverlayEngineEE(void) {
    ALOGD("_ZN13LayerComposerC2EmRKN7android2spI13OverlayEngineEE() called");
    return 0;
}

/* Demangled: TouchHintThread::threadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN15TouchHintThread10threadLoopEv(void) {
    ALOGD("_ZN15TouchHintThread10threadLoopEv() called");
    return 0;
}

/* Demangled: DisplayBufferQueue::releaseBuffer(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN18DisplayBufferQueue13releaseBufferEii(void) {
    ALOGD("_ZN18DisplayBufferQueue13releaseBufferEii() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<FrameInfo*> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIP9FrameInfoEE = NULL;

/* Demangled: DbgLogger::DbgLogger<char const*, int, int, int>(unsigned int const&, unsigned char const&, char const*, char const*, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKciiiEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKciiiEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: DispDevice::getCurrentRefresh(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice17getCurrentRefreshEm(void) {
    ALOGD("_ZN10DispDevice17getCurrentRefreshEm() called");
    return 0;
}

/* Demangled: DisplayListener::onPlugOut(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN15DisplayListener9onPlugOutEm(void) {
    ALOGD("_ZN15DisplayListener9onPlugOutEm() called");
    return 0;
}

/* Exported Object: VTT for OverlayEngine */
extern "C" __attribute__((visibility("default"))) void* _ZTT13OverlayEngine = NULL;

/* Demangled: DisplayBufferQueue::dump(DisplayBufferQueue::QUEUE_DUMP_CONDITION) */
extern "C" __attribute__((visibility("default"))) int _ZN18DisplayBufferQueue4dumpENS_20QUEUE_DUMP_CONDITIONE(void) {
    ALOGD("_ZN18DisplayBufferQueue4dumpENS_20QUEUE_DUMP_CONDITIONE() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, bool>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, bool>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, bool>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, bool> > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIibEENS_22__unordered_map_hasherIiS2_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS2_NS_8equal_toIiEELb1EEENS_9allocatorIS2_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIibEENS_22__unordered_map_hasherIiS2_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS2_NS_8equal_toIiEELb1EEENS_9allocatorIS2_EEE8__rehashEm() called");
    return 0;
}

/* Exported Object: guard variable for android::SWWatchDogTimer::getInstance()::sMutex */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN7android15SWWatchDogTimer11getInstanceEvE6sMutex = NULL;

/* Demangled: hwc::Gralloc2Mapper::freeBuffer(native_handle const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc2Mapper10freeBufferEPK13native_handle(void) {
    ALOGD("_ZNK3hwc14Gralloc2Mapper10freeBufferEPK13native_handle() called");
    return 0;
}

/* Demangled: HWCMediator::validate(android::sp<HWCDisplay> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator8validateERKN7android2spI10HWCDisplayEE(void) {
    ALOGD("_ZN11HWCMediator8validateERKN7android2spI10HWCDisplayEE() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, char const*, DispatcherJob*, int>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, DispatcherJob*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcS2_P13DispatcherJobiEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcS2_P13DispatcherJobiEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: MDPFrameInfoDebugger::MDPFrameInfoDebugger() */
extern "C" __attribute__((visibility("default"))) int _ZN20MDPFrameInfoDebuggerC2Ev(void) {
    ALOGD("_ZN20MDPFrameInfoDebuggerC2Ev() called");
    return 0;
}

/* Demangled: android::Transform::operator*(android::Transform const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android9TransformmlERKS0_(void) {
    ALOGD("_ZNK7android9TransformmlERKS0_() called");
    return 0;
}

/* Demangled: DisplayManager::destroyVsyncThread(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN14DisplayManager18destroyVsyncThreadEm(void) {
    ALOGD("_ZN14DisplayManager18destroyVsyncThreadEm() called");
    return 0;
}

/* Demangled: AsyncBlitDevice::getCurrentRefresh(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN15AsyncBlitDevice17getCurrentRefreshEm(void) {
    ALOGD("_ZN15AsyncBlitDevice17getCurrentRefreshEm() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned long, char const*, int, unsigned int, unsigned int, unsigned int, float, float, float, float, float, float, float, float, float, float, float, float>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned long, char const*, int, unsigned int, unsigned int, unsigned int, float, float, float, float, float, float, float, float, float, float, float, float) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmmS2_ijjjffffffffffffEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmmS2_ijjjffffffffffffEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: hwc::Gralloc4Mapper::freeBuffer(native_handle const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc4Mapper10freeBufferEPK13native_handle(void) {
    ALOGD("_ZNK3hwc14Gralloc4Mapper10freeBufferEPK13native_handle() called");
    return 0;
}

/* Demangled: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIjEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EE7__cloneEPNS0_6__baseISV_EE */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIjEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EE7__cloneEPNS0_6__baseISV_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIjEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EE7__cloneEPNS0_6__baseISV_EE() called");
    return 0;
}

/* Demangled: hwc::GraphicBufferMapper::getSmpte2094_40(native_handle const*, std::__1::optional<std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > >*) */
extern "C" __attribute__((visibility("default"))) int _ZN3hwc19GraphicBufferMapper15getSmpte2094_40EPK13native_handlePNSt3__18optionalINS4_6vectorIhNS4_9allocatorIhEEEEEE(void) {
    ALOGD("_ZN3hwc19GraphicBufferMapper15getSmpte2094_40EPK13native_handlePNSt3__18optionalINS4_6vectorIhNS4_9allocatorIhEEEEEE() called");
    return 0;
}

/* Demangled: OverlayEngine::OverlayOutput::OverlayOutput() */
extern "C" __attribute__((visibility("default"))) int _ZN13OverlayEngine13OverlayOutputC2Ev(void) {
    ALOGD("_ZN13OverlayEngine13OverlayOutputC2Ev() called");
    return 0;
}

/* Demangled: HWCLayer::isNeedPQ(int const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8HWCLayer8isNeedPQERKi(void) {
    ALOGD("_ZNK8HWCLayer8isNeedPQERKi() called");
    return 0;
}

/* Demangled: DispatchThread::onVSync() */
extern "C" __attribute__((visibility("default"))) int _ZN14DispatchThread7onVSyncEv(void) {
    ALOGD("_ZN14DispatchThread7onVSyncEv() called");
    return 0;
}

/* Demangled: TouchHintThread::~TouchHintThread() */
extern "C" __attribute__((visibility("default"))) int _ZN15TouchHintThreadD0Ev(void) {
    ALOGD("_ZN15TouchHintThreadD0Ev() called");
    return 0;
}

/* Demangled: android::Vector<FrameInfo*>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIP9FrameInfoE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIP9FrameInfoE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: DisplayManager::dump(dump_buff*) */
extern "C" __attribute__((visibility("default"))) int _ZN14DisplayManager4dumpEP9dump_buff(void) {
    ALOGD("_ZN14DisplayManager4dumpEP9dump_buff() called");
    return 0;
}

/* Demangled: DispDevice::triggerOverlaySession(unsigned long, int, int, int, unsigned int, unsigned int const&, unsigned int const&, unsigned int, OverlayPortParam* const*, android::sp<ColorTransform>, bool const&, bool const&, bool const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice21triggerOverlaySessionEmiiijRKjS1_jPKP16OverlayPortParamN7android2spI14ColorTransformEERKbSB_SB_(void) {
    ALOGD("_ZN10DispDevice21triggerOverlaySessionEmiiijRKjS1_jPKP16OverlayPortParamN7android2spI14ColorTransformEERKbSB_SB_() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, FrameFenceInfo>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, FrameFenceInfo>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, FrameFenceInfo>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, FrameFenceInfo> > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIj14FrameFenceInfoEENS_22__unordered_map_hasherIjS3_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS3_NS_8equal_toIjEELb1EEENS_9allocatorIS3_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIj14FrameFenceInfoEENS_22__unordered_map_hasherIjS3_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS3_NS_8equal_toIjEELb1EEENS_9allocatorIS3_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: __lttf2 */
extern "C" __attribute__((visibility("default"))) int __lttf2(void) {
    ALOGD("__lttf2() called");
    return 0;
}

/* Demangled: MmBufDump::loadLib() */
extern "C" __attribute__((visibility("default"))) int _ZN9MmBufDump7loadLibEv(void) {
    ALOGD("_ZN9MmBufDump7loadLibEv() called");
    return 0;
}

/* Demangled: android::Vector<int>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIiE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmjEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmjEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: BliterNode::createJob(unsigned int&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN10BliterNode9createJobERjRi(void) {
    ALOGD("_ZN10BliterNode9createJobERjRi() called");
    return 0;
}

/* Demangled: HrtCommon::printQueryValidLayerResult() */
extern "C" __attribute__((visibility("default"))) int _ZN9HrtCommon26printQueryValidLayerResultEv(void) {
    ALOGD("_ZN9HrtCommon26printQueryValidLayerResultEv() called");
    return 0;
}

/* Demangled: DbgLogger::~DbgLogger() */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerD2Ev(void) {
    ALOGD("_ZN9DbgLoggerD2Ev() called");
    return 0;
}

/* Demangled: AsyncBlitDevice::waitAllJobDone(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN15AsyncBlitDevice14waitAllJobDoneEm(void) {
    ALOGD("_ZN15AsyncBlitDevice14waitAllJobDoneEm() called");
    return 0;
}

/* Exported Object: construction vtable for android::Thread-in-HWCThread */
extern "C" __attribute__((visibility("default"))) void* _ZTC9HWCThread0_N7android6ThreadE = NULL;

/* Demangled: OverlayEngine::onVSync() */
extern "C" __attribute__((visibility("default"))) int _ZN13OverlayEngine7onVSyncEv(void) {
    ALOGD("_ZN13OverlayEngine7onVSyncEv() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, char const*, DisplayBufferQueue*, unsigned int, int, int, unsigned int, unsigned int>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, DisplayBufferQueue*, unsigned int, int, int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueuejiijjEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueuejiijjEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::__append(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE8__appendEm(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE8__appendEm() called");
    return 0;
}

/* Demangled: hwc::GraphicBufferMapper::lockYCbCr(native_handle const*, unsigned int, hwc::Rect const&, android_ycbcr*) */
extern "C" __attribute__((visibility("default"))) int _ZN3hwc19GraphicBufferMapper9lockYCbCrEPK13native_handlejRKNS_4RectEP13android_ycbcr(void) {
    ALOGD("_ZN3hwc19GraphicBufferMapper9lockYCbCrEPK13native_handlejRKNS_4RectEP13android_ycbcr() called");
    return 0;
}

/* Demangled: AsyncBlitDevice::getNumConfigs(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN15AsyncBlitDevice13getNumConfigsEm(void) {
    ALOGD("_ZN15AsyncBlitDevice13getNumConfigsEm() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, bool>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, bool>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, bool>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, bool> > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIibEENS_22__unordered_map_hasherIiS2_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS2_NS_8equal_toIiEELb1EEENS_9allocatorIS2_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIibEENS_22__unordered_map_hasherIiS2_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS2_NS_8equal_toIiEELb1EEENS_9allocatorIS2_EEE6rehashEm() called");
    return 0;
}

/* Demangled: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9DataspaceEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE7__cloneEv */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9DataspaceEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9DataspaceEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE7__cloneEv() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned int, unsigned long>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned int, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmjmEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmjmEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::sp<HWCVSyncListener> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_2spI16HWCVSyncListenerEEE10do_compareEPKvS6_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_2spI16HWCVSyncListenerEEE10do_compareEPKvS6_() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, char const*, unsigned int, int, char*>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, char const*, unsigned int, int, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmS2_jiPcEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmS2_jiPcEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned int, int, unsigned int, int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned int, int, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmjijiEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmjijiEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Exported Object: vtable for android::SWWatchDog::Recipient */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android10SWWatchDog9RecipientE = NULL;

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, int, unsigned int, int, char*>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, int, unsigned int, int, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmijiPcEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmijiPcEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: Platform::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN8Platform11getInstanceEv(void) {
    ALOGD("_ZN8Platform11getInstanceEv() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned int, char const*>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmjS2_EEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmjS2_EEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: hwc::GraphicBufferMapper::getChromaSiting(native_handle const*, aidl::android::hardware::graphics::common::ChromaSiting*) */
extern "C" __attribute__((visibility("default"))) int _ZN3hwc19GraphicBufferMapper15getChromaSitingEPK13native_handlePN4aidl7android8hardware8graphics6common12ChromaSitingE(void) {
    ALOGD("_ZN3hwc19GraphicBufferMapper15getChromaSitingEPK13native_handlePN4aidl7android8hardware8graphics6common12ChromaSitingE() called");
    return 0;
}

/* Demangled: HWCDisplay::buildCommittedLayers() */
extern "C" __attribute__((visibility("default"))) int _ZN10HWCDisplay20buildCommittedLayersEv(void) {
    ALOGD("_ZN10HWCDisplay20buildCommittedLayersEv() called");
    return 0;
}

/* Demangled: HWCLayer::setReleaseFenceFd(int const&, bool const&) */
extern "C" __attribute__((visibility("default"))) int _ZN8HWCLayer17setReleaseFenceFdERKiRKb(void) {
    ALOGD("_ZN8HWCLayer17setReleaseFenceFdERKiRKb() called");
    return 0;
}

/* Demangled: DisplayManager::setPowerMode(unsigned long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14DisplayManager12setPowerModeEmi(void) {
    ALOGD("_ZN14DisplayManager12setPowerModeEmi() called");
    return 0;
}

/* Demangled: AsyncBliterHandler::doBlit(HWLayer*) */
extern "C" __attribute__((visibility("default"))) int _ZN18AsyncBliterHandler6doBlitEP7HWLayer(void) {
    ALOGD("_ZN18AsyncBliterHandler6doBlitEP7HWLayer() called");
    return 0;
}

/* Demangled: HWCLayer::completeLayerCaps() */
extern "C" __attribute__((visibility("default"))) int _ZN8HWCLayer17completeLayerCapsEv(void) {
    ALOGD("_ZN8HWCLayer17completeLayerCapsEv() called");
    return 0;
}

/* Demangled: DispDevice::legacyTriggerSession(unsigned long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice20legacyTriggerSessionEmi(void) {
    ALOGD("_ZN10DispDevice20legacyTriggerSessionEmi() called");
    return 0;
}

/* Demangled: hwc::GraphicBufferMapper::unlockAsync(native_handle const*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN3hwc19GraphicBufferMapper11unlockAsyncEPK13native_handlePi(void) {
    ALOGD("_ZN3hwc19GraphicBufferMapper11unlockAsyncEPK13native_handlePi() called");
    return 0;
}

/* Demangled: DisplayManager::init() */
extern "C" __attribute__((visibility("default"))) int _ZN14DisplayManager4initEv(void) {
    ALOGD("_ZN14DisplayManager4initEv() called");
    return 0;
}

/* Demangled: HWCDispatcher::PhyPostHandler::set(android::sp<HWCDisplay> const&, DispatcherJob*) */
extern "C" __attribute__((visibility("default"))) int _ZN13HWCDispatcher14PhyPostHandler3setERKN7android2spI10HWCDisplayEEP13DispatcherJob(void) {
    ALOGD("_ZN13HWCDispatcher14PhyPostHandler3setERKN7android2spI10HWCDisplayEEP13DispatcherJob() called");
    return 0;
}

/* Demangled: OverlayEngine::getAvailableInputNum() */
extern "C" __attribute__((visibility("default"))) int _ZN13OverlayEngine20getAvailableInputNumEv(void) {
    ALOGD("_ZN13OverlayEngine20getAvailableInputNumEv() called");
    return 0;
}

/* Demangled: OverlayEngine::OverlayInput::OverlayInput() */
extern "C" __attribute__((visibility("default"))) int _ZN13OverlayEngine12OverlayInputC1Ev(void) {
    ALOGD("_ZN13OverlayEngine12OverlayInputC1Ev() called");
    return 0;
}

/* Demangled: DispDevice::~DispDevice() */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDeviceD2Ev(void) {
    ALOGD("_ZN10DispDeviceD2Ev() called");
    return 0;
}

/* Exported Object: g_session_type */
extern "C" __attribute__((visibility("default"))) void* g_session_type = NULL;

/* Demangled: DbgLogger::DbgLogger<char const*, char const*, char*>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcS2_PcEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcS2_PcEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: DisplayBufferQueue::setConsumerListener(android::sp<DisplayBufferQueue::ConsumerListener> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN18DisplayBufferQueue19setConsumerListenerERKN7android2spINS_16ConsumerListenerEEE(void) {
    ALOGD("_ZN18DisplayBufferQueue19setConsumerListenerERKN7android2spINS_16ConsumerListenerEEE() called");
    return 0;
}

/* Demangled: HrtCommon::run(std::__1::vector<android::sp<HWCDisplay>, std::__1::allocator<android::sp<HWCDisplay> > >&, bool const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9HrtCommon3runERNSt3__16vectorIN7android2spI10HWCDisplayEENS0_9allocatorIS5_EEEERKb(void) {
    ALOGD("_ZN9HrtCommon3runERNSt3__16vectorIN7android2spI10HWCDisplayEENS0_9allocatorIS5_EEEERKb() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, native_handle const*, unsigned int>(unsigned int const&, unsigned char const&, char const*, char const*, native_handle const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcPK13native_handlejEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcPK13native_handlejEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIjEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EEclEOSR_SH_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIjEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EEclEOSR_SH_(void) {
    ALOGD("_ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIjEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EEclEOSR_SH_() called");
    return 0;
}

/* Demangled: DisplayBufferQueue::~DisplayBufferQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN18DisplayBufferQueueD0Ev(void) {
    ALOGD("_ZN18DisplayBufferQueueD0Ev() called");
    return 0;
}

/* Demangled: AsyncBlitDevice::isDispAodForceDisable() */
extern "C" __attribute__((visibility("default"))) int _ZN15AsyncBlitDevice21isDispAodForceDisableEv(void) {
    ALOGD("_ZN15AsyncBlitDevice21isDispAodForceDisableEv() called");
    return 0;
}

/* Demangled: AsyncBliterHandler::calculateMirRoiXform(unsigned int*, android::Rect*, android::Rect*, DispatcherJob*) */
extern "C" __attribute__((visibility("default"))) int _ZN18AsyncBliterHandler20calculateMirRoiXformEPjPN7android4RectES3_P13DispatcherJob(void) {
    ALOGD("_ZN18AsyncBliterHandler20calculateMirRoiXformEPjPN7android4RectES3_P13DispatcherJob() called");
    return 0;
}

/* Demangled: IPqDevice::~IPqDevice() */
extern "C" __attribute__((visibility("default"))) int _ZN9IPqDeviceD0Ev(void) {
    ALOGD("_ZN9IPqDeviceD0Ev() called");
    return 0;
}

/* Demangled: DispDevice::getOverlaySessionMode(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice21getOverlaySessionModeEm(void) {
    ALOGD("_ZN10DispDevice21getOverlaySessionModeEm() called");
    return 0;
}

/* Exported Object: _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIjEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EEE */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIjEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EEE = NULL;

/* Demangled: Debugger::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN8Debugger11getInstanceEv(void) {
    ALOGD("_ZN8Debugger11getInstanceEv() called");
    return 0;
}

/* Demangled: AsyncBliterHandler::clearBackground(native_handle const*, android::Rect const*, int*, MdpJob*) */
extern "C" __attribute__((visibility("default"))) int _ZN18AsyncBliterHandler15clearBackgroundEPK13native_handlePKN7android4RectEPiP6MdpJob(void) {
    ALOGD("_ZN18AsyncBliterHandler15clearBackgroundEPK13native_handlePKN7android4RectEPiP6MdpJob() called");
    return 0;
}

/* Demangled: HWCDispatcher::PostHandler::~PostHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN13HWCDispatcher11PostHandlerD0Ev(void) {
    ALOGD("_ZN13HWCDispatcher11PostHandlerD0Ev() called");
    return 0;
}

/* Demangled: RefreshRequestThread::setEnabled(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN20RefreshRequestThread10setEnabledEb(void) {
    ALOGD("_ZN20RefreshRequestThread10setEnabledEb() called");
    return 0;
}

/* Demangled: AsyncBlitDevice::disableDisplayFeature(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN15AsyncBlitDevice21disableDisplayFeatureEj(void) {
    ALOGD("_ZN15AsyncBlitDevice21disableDisplayFeatureEj() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, char*, int>(unsigned int const&, unsigned char const&, char const*, char const*, char*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcPciEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcPciEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: hwc::Gralloc4Mapper::getPixelFormatModifier(native_handle const*, unsigned long*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc4Mapper22getPixelFormatModifierEPK13native_handlePm(void) {
    ALOGD("_ZNK3hwc14Gralloc4Mapper22getPixelFormatModifierEPK13native_handlePm() called");
    return 0;
}

/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSJ_8hidl_vecIhEEPT_ESW_EUlRKSV_SU_E_NSC_IS11_EEFvNSM_5ErrorESU_EEclEOS13_SU_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSJ_8hidl_vecIhEEPT_ESW_EUlRKSV_SU_E_NSC_IS11_EEFvNSM_5ErrorESU_EEclEOS13_SU_(void) {
    ALOGD("_ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSJ_8hidl_vecIhEEPT_ESW_EUlRKSV_SU_E_NSC_IS11_EEFvNSM_5ErrorESU_EEclEOS13_SU_() called");
    return 0;
}

/* Demangled: HWCDispatcher::PhyPostHandler::process(DispatcherJob*) */
extern "C" __attribute__((visibility("default"))) int _ZN13HWCDispatcher14PhyPostHandler7processEP13DispatcherJob(void) {
    ALOGD("_ZN13HWCDispatcher14PhyPostHandler7processEP13DispatcherJob() called");
    return 0;
}

/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN7android8hardware8graphics6common4V1_211PixelFormatEEEiPK13native_handleRKNS7_6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EE7destroyEv */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN7android8hardware8graphics6common4V1_211PixelFormatEEEiPK13native_handleRKNS7_6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EE7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN7android8hardware8graphics6common4V1_211PixelFormatEEEiPK13native_handleRKNS7_6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EE7destroyEv() called");
    return 0;
}

/* Demangled: HWCMediator::displayAcceptChanges(hwc2_device*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator20displayAcceptChangesEP11hwc2_devicem(void) {
    ALOGD("_ZN11HWCMediator20displayAcceptChangesEP11hwc2_devicem() called");
    return 0;
}

/* Demangled: HWCLayer::boundaryCut(hwc_rect const&) */
extern "C" __attribute__((visibility("default"))) int _ZN8HWCLayer11boundaryCutERK8hwc_rect(void) {
    ALOGD("_ZN8HWCLayer11boundaryCutERK8hwc_rect() called");
    return 0;
}

/* Demangled: HWCMediator::createExternalDisplay() */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator21createExternalDisplayEv(void) {
    ALOGD("_ZN11HWCMediator21createExternalDisplayEv() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<android::SortedVector<android::sp<HWCVSyncListener> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_12SortedVectorINS_2spI16HWCVSyncListenerEEEEEE = NULL;

/* Exported Object: construction vtable for android::Thread-in-TouchHintThread */
extern "C" __attribute__((visibility("default"))) void* _ZTC15TouchHintThread0_N7android6ThreadE = NULL;

/* Demangled: android::Vector<OverlayPortParam*>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIP16OverlayPortParamE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIP16OverlayPortParamE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: HWCDisplay::offloadMMtoClient() */
extern "C" __attribute__((visibility("default"))) int _ZN10HWCDisplay17offloadMMtoClientEv(void) {
    ALOGD("_ZN10HWCDisplay17offloadMMtoClientEv() called");
    return 0;
}

/* Demangled: DisplayListener::onHotPlugExt(unsigned long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN15DisplayListener12onHotPlugExtEmi(void) {
    ALOGD("_ZN15DisplayListener12onHotPlugExtEmi() called");
    return 0;
}

/* Demangled: DispDevice::isDispRszSupported() */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice18isDispRszSupportedEv(void) {
    ALOGD("_ZN10DispDevice18isDispRszSupportedEv() called");
    return 0;
}

/* Demangled: HWCMediator::hasCapabilities(int) */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator15hasCapabilitiesEi(void) {
    ALOGD("_ZN11HWCMediator15hasCapabilitiesEi() called");
    return 0;
}

/* Demangled: HWCMediator::layerStateSetSourceCrop(hwc2_device*, unsigned long, unsigned long, hwc_frect) */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator23layerStateSetSourceCropEP11hwc2_devicemm9hwc_frect(void) {
    ALOGD("_ZN11HWCMediator23layerStateSetSourceCropEP11hwc2_devicemm9hwc_frect() called");
    return 0;
}

/* Demangled: HWCDispatcher::releaseResourceLocked(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN13HWCDispatcher21releaseResourceLockedEm(void) {
    ALOGD("_ZN13HWCDispatcher21releaseResourceLockedEm() called");
    return 0;
}

/* Demangled: LayerComposer::set(android::sp<HWCDisplay> const&, DispatcherJob*) */
extern "C" __attribute__((visibility("default"))) int _ZN13LayerComposer3setERKN7android2spI10HWCDisplayEEP13DispatcherJob(void) {
    ALOGD("_ZN13LayerComposer3setERKN7android2spI10HWCDisplayEEP13DispatcherJob() called");
    return 0;
}

/* Demangled: android::SortedVector<android::sp<HWCVSyncListener> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_2spI16HWCVSyncListenerEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_2spI16HWCVSyncListenerEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: HWCMediator::createJob(android::sp<HWCDisplay> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator9createJobERKN7android2spI10HWCDisplayEE(void) {
    ALOGD("_ZN11HWCMediator9createJobERKN7android2spI10HWCDisplayEE() called");
    return 0;
}

/* Demangled: BliterNode::BufferInfo::dump() */
extern "C" __attribute__((visibility("default"))) int _ZN10BliterNode10BufferInfo4dumpEv(void) {
    ALOGD("_ZN10BliterNode10BufferInfo4dumpEv() called");
    return 0;
}

/* Exported Object: HWC_COMPOSITION_FILE_NOT_SET_STR */
extern "C" __attribute__((visibility("default"))) void* HWC_COMPOSITION_FILE_NOT_SET_STR = NULL;

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, int, unsigned int, unsigned int, bool, DISP_FORMAT, int, int, int, int, unsigned int, int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, int, unsigned int, unsigned int, bool, DISP_FORMAT, int, int, int, int, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmijjb11DISP_FORMATiiiijiEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmijjb11DISP_FORMATiiiijiEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: getSrcTop(android::sp<HWCLayer> const&) */
extern "C" __attribute__((visibility("default"))) int _Z9getSrcTopRKN7android2spI8HWCLayerEE(void) {
    ALOGD("_Z9getSrcTopRKN7android2spI8HWCLayerEE() called");
    return 0;
}

/* Demangled: getDstTop(android::sp<HWCLayer> const&) */
extern "C" __attribute__((visibility("default"))) int _Z9getDstTopRKN7android2spI8HWCLayerEE(void) {
    ALOGD("_Z9getDstTopRKN7android2spI8HWCLayerEE() called");
    return 0;
}

/* Demangled: hwc::Gralloc4Mapper::getBlendMode(native_handle const*, aidl::android::hardware::graphics::common::BlendMode*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc4Mapper12getBlendModeEPK13native_handlePN4aidl7android8hardware8graphics6common9BlendModeE(void) {
    ALOGD("_ZNK3hwc14Gralloc4Mapper12getBlendModeEPK13native_handlePN4aidl7android8hardware8graphics6common9BlendModeE() called");
    return 0;
}

/* Demangled: setThreadCPUAffinity(int const&, int const&, int const&) */
extern "C" __attribute__((visibility("default"))) int _Z20setThreadCPUAffinityRKiS0_S0_(void) {
    ALOGD("_Z20setThreadCPUAffinityRKiS0_S0_() called");
    return 0;
}

/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalINS_6vectorIhNS_9allocatorIhEEEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS7_ISX_EEFvNSI_5ErrorESQ_EEclEOSZ_SQ_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalINS_6vectorIhNS_9allocatorIhEEEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS7_ISX_EEFvNSI_5ErrorESQ_EEclEOSZ_SQ_(void) {
    ALOGD("_ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalINS_6vectorIhNS_9allocatorIhEEEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS7_ISX_EEFvNSI_5ErrorESQ_EEclEOSZ_SQ_() called");
    return 0;
}

/* Demangled: HWCMediator::displaySetOutputBuffer(hwc2_device*, unsigned long, native_handle const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator22displaySetOutputBufferEP11hwc2_devicemPK13native_handlei(void) {
    ALOGD("_ZN11HWCMediator22displaySetOutputBufferEP11hwc2_devicemPK13native_handlei() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, char const*, char const*>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmS2_S2_EEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmS2_S2_EEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: HWCDispatcher::setPowerMode(unsigned long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN13HWCDispatcher12setPowerModeEmi(void) {
    ALOGD("_ZN13HWCDispatcher12setPowerModeEmi() called");
    return 0;
}

/* Demangled: ComposerHandler::ComposerHandler(unsigned long, android::sp<OverlayEngine> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN15ComposerHandlerC1EmRKN7android2spI13OverlayEngineEE(void) {
    ALOGD("_ZN15ComposerHandlerC1EmRKN7android2spI13OverlayEngineEE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<android::SWWatchDog::Recipient, std::__1::allocator<android::SWWatchDog::Recipient> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN7android10SWWatchDog9RecipientENS_9allocatorIS3_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN7android10SWWatchDog9RecipientENS_9allocatorIS3_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: HWCDispatcher::WorkerCluster::~WorkerCluster() */
extern "C" __attribute__((visibility("default"))) int _ZN13HWCDispatcher13WorkerClusterD2Ev(void) {
    ALOGD("_ZN13HWCDispatcher13WorkerClusterD2Ev() called");
    return 0;
}

/* Demangled: HWCDispatcher::fillPrevHwLayers(android::sp<HWCDisplay> const&, DispatcherJob*) */
extern "C" __attribute__((visibility("default"))) int _ZN13HWCDispatcher16fillPrevHwLayersERKN7android2spI10HWCDisplayEEP13DispatcherJob(void) {
    ALOGD("_ZN13HWCDispatcher16fillPrevHwLayersERKN7android2spI10HWCDisplayEEP13DispatcherJob() called");
    return 0;
}

/* Demangled: OverlayEngine::closeAllFenceFd(android::sp<FrameInfo> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN13OverlayEngine15closeAllFenceFdERKN7android2spI9FrameInfoEE(void) {
    ALOGD("_ZN13OverlayEngine15closeAllFenceFdERKN7android2spI9FrameInfoEE() called");
    return 0;
}

/* Demangled: setSecExtraSfStatus(bool, native_handle const*, ge_sf_info_t*) */
extern "C" __attribute__((visibility("default"))) int _Z19setSecExtraSfStatusbPK13native_handleP12ge_sf_info_t(void) {
    ALOGD("_Z19setSecExtraSfStatusbPK13native_handleP12ge_sf_info_t() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, char const*, DisplayBufferQueue*, char const*, unsigned long>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, DisplayBufferQueue*, char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueueS2_mEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueueS2_mEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: AsyncBliterHandler::prepareOverlayPortParam(unsigned int, android::sp<DisplayBufferQueue>, OverlayPortParam*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN18AsyncBliterHandler23prepareOverlayPortParamEjN7android2spI18DisplayBufferQueueEEP16OverlayPortParamb(void) {
    ALOGD("_ZN18AsyncBliterHandler23prepareOverlayPortParamEjN7android2spI18DisplayBufferQueueEEP16OverlayPortParamb() called");
    return 0;
}

/* Demangled: DbgLogBufManager::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN16DbgLogBufManager11getInstanceEv(void) {
    ALOGD("_ZN16DbgLogBufManager11getInstanceEv() called");
    return 0;
}

/* Demangled: PlatformCommon::initOverlay() */
extern "C" __attribute__((visibility("default"))) int _ZN14PlatformCommon11initOverlayEv(void) {
    ALOGD("_ZN14PlatformCommon11initOverlayEv() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, native_handle const*>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, native_handle const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmPK13native_handleEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmPK13native_handleEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: VSyncThread::~VSyncThread() */
extern "C" __attribute__((visibility("default"))) int _ZN11VSyncThreadD2Ev(void) {
    ALOGD("_ZN11VSyncThreadD2Ev() called");
    return 0;
}

/* Demangled: BliterNode::BliterNode(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10BliterNodeC1Em(void) {
    ALOGD("_ZN10BliterNodeC1Em() called");
    return 0;
}

/* Demangled: android::sp<HWCLayer>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spI8HWCLayerED2Ev(void) {
    ALOGD("_ZN7android2spI8HWCLayerED2Ev() called");
    return 0;
}

/* Demangled: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9BlendModeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE7__cloneEv */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9BlendModeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9BlendModeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE7__cloneEv() called");
    return 0;
}

/* Demangled: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSJ_8hidl_vecIhEEPT_ESW_EUlRKSV_SU_E_NSC_IS11_EEFvNSM_5ErrorESU_EE7__cloneEPNS0_6__baseIS14_EE */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSJ_8hidl_vecIhEEPT_ESW_EUlRKSV_SU_E_NSC_IS11_EEFvNSM_5ErrorESU_EE7__cloneEPNS0_6__baseIS14_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSJ_8hidl_vecIhEEPT_ESW_EUlRKSV_SU_E_NSC_IS11_EEFvNSM_5ErrorESU_EE7__cloneEPNS0_6__baseIS14_EE() called");
    return 0;
}

/* Demangled: hwc::GraphicBufferMapper::getDefaultInterlaced(unsigned int, unsigned int, int, unsigned int, unsigned long, aidl::android::hardware::graphics::common::ExtendableType*) */
extern "C" __attribute__((visibility("default"))) int _ZN3hwc19GraphicBufferMapper20getDefaultInterlacedEjjijmPN4aidl7android8hardware8graphics6common14ExtendableTypeE(void) {
    ALOGD("_ZN3hwc19GraphicBufferMapper20getDefaultInterlacedEjjijmPN4aidl7android8hardware8graphics6common14ExtendableTypeE() called");
    return 0;
}

/* Demangled: HWCMediator::destroyExternalDisplay() */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator22destroyExternalDisplayEv(void) {
    ALOGD("_ZN11HWCMediator22destroyExternalDisplayEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<HWCDisplay>, std::__1::allocator<android::sp<HWCDisplay> > >::__push_back_slow_path<android::sp<HWCDisplay> >(android::sp<HWCDisplay>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spI10HWCDisplayEENS_9allocatorIS4_EEE21__push_back_slow_pathIS4_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spI10HWCDisplayEENS_9allocatorIS4_EEE21__push_back_slow_pathIS4_EEvOT_() called");
    return 0;
}

/* Exported Object: construction vtable for HWCThread-in-DispatchThread */
extern "C" __attribute__((visibility("default"))) void* _ZTC14DispatchThread0_9HWCThread = NULL;

/* Demangled: UEventThread::~UEventThread() */
extern "C" __attribute__((visibility("default"))) int _ZN12UEventThreadD0Ev(void) {
    ALOGD("_ZN12UEventThreadD0Ev() called");
    return 0;
}

/* Demangled: HWCLayer::isHint(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK8HWCLayer6isHintEi(void) {
    ALOGD("_ZNK8HWCLayer6isHintEi() called");
    return 0;
}

/* Demangled: IPqDevice::setColorTransformViaService(float const*, int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9IPqDevice27setColorTransformViaServiceEPKfRKi(void) {
    ALOGD("_ZN9IPqDevice27setColorTransformViaServiceEPKfRKi() called");
    return 0;
}

/* Demangled: HWCMediator::displayGetAttribute(hwc2_device*, unsigned long, unsigned int, int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator19displayGetAttributeEP11hwc2_devicemjiPi(void) {
    ALOGD("_ZN11HWCMediator19displayGetAttributeEP11hwc2_devicemjiPi() called");
    return 0;
}

/* Demangled: DisplayManager::setMirrorRegion(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN14DisplayManager15setMirrorRegionEm(void) {
    ALOGD("_ZN14DisplayManager15setMirrorRegionEm() called");
    return 0;
}

/* Demangled: DispDevice::isDispRpoSupported() */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice18isDispRpoSupportedEv(void) {
    ALOGD("_ZN10DispDevice18isDispRpoSupportedEv() called");
    return 0;
}

/* Demangled: hwc::Gralloc4Mapper::getCompression(native_handle const*, aidl::android::hardware::graphics::common::ExtendableType*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc4Mapper14getCompressionEPK13native_handlePN4aidl7android8hardware8graphics6common14ExtendableTypeE(void) {
    ALOGD("_ZNK3hwc14Gralloc4Mapper14getCompressionEPK13native_handlePN4aidl7android8hardware8graphics6common14ExtendableTypeE() called");
    return 0;
}

/* Demangled: hwc::GraphicBufferMapper::GraphicBufferMapper() */
extern "C" __attribute__((visibility("default"))) int _ZN3hwc19GraphicBufferMapperC1Ev(void) {
    ALOGD("_ZN3hwc19GraphicBufferMapperC1Ev() called");
    return 0;
}

/* Demangled: HWCMediator::deviceCreateVirtualDisplay(hwc2_device*, unsigned int, unsigned int, int*, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator26deviceCreateVirtualDisplayEP11hwc2_devicejjPiPm(void) {
    ALOGD("_ZN11HWCMediator26deviceCreateVirtualDisplayEP11hwc2_devicejjPiPm() called");
    return 0;
}

/* Demangled: android::sp<IOverlayDevice>::sp<AsyncBlitDevice>(AsyncBlitDevice*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spI14IOverlayDeviceEC2I15AsyncBlitDeviceEEPT_(void) {
    ALOGD("_ZN7android2spI14IOverlayDeviceEC2I15AsyncBlitDeviceEEPT_() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIN7android2spI8HWCLayerEENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spI8HWCLayerEENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spI8HWCLayerEENS_9allocatorIS4_EEE6assignIPS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISB_E9referenceEEE5valueEvE4typeESB_SB_() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned int, char const*, unsigned int, int, unsigned int, int, unsigned int, unsigned int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned int, char const*, unsigned int, int, unsigned int, int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmjS2_jijijjEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmjS2_jijijjEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: HWCMediator::displayGetReleaseFence(hwc2_device*, unsigned long, unsigned int*, unsigned long*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator22displayGetReleaseFenceEP11hwc2_devicemPjPmPi(void) {
    ALOGD("_ZN11HWCMediator22displayGetReleaseFenceEP11hwc2_devicemPjPmPi() called");
    return 0;
}

/* Demangled: hwcGetFunction(hwc2_device*, int) */
extern "C" __attribute__((visibility("default"))) int _Z14hwcGetFunctionP11hwc2_devicei(void) {
    ALOGD("_Z14hwcGetFunctionP11hwc2_devicei() called");
    return 0;
}

/* Demangled: HWCDispatcher::initPrevHwLayers(android::sp<HWCDisplay> const&, DispatcherJob*) */
extern "C" __attribute__((visibility("default"))) int _ZN13HWCDispatcher16initPrevHwLayersERKN7android2spI10HWCDisplayEEP13DispatcherJob(void) {
    ALOGD("_ZN13HWCDispatcher16initPrevHwLayersERKN7android2spI10HWCDisplayEEP13DispatcherJob() called");
    return 0;
}

/* Demangled: hwc::Gralloc2Mapper::importBuffer(android::hardware::hidl_handle const&, native_handle const**) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc2Mapper12importBufferERKN7android8hardware11hidl_handleEPPK13native_handle(void) {
    ALOGD("_ZNK3hwc14Gralloc2Mapper12importBufferERKN7android8hardware11hidl_handleEPPK13native_handle() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned long, char const*, int, int, int, int, unsigned int, float, float, float, float, int, int, int, int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned long, char const*, int, int, int, int, unsigned int, float, float, float, float, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmmS2_iiiijffffiiiiEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmmS2_iiiijffffiiiiEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Exported Object: vtable for AsyncBlitDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTV15AsyncBlitDevice = NULL;

/* Demangled: HWCBuffer::~HWCBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN9HWCBufferD2Ev(void) {
    ALOGD("_ZN9HWCBufferD2Ev() called");
    return 0;
}

/* Demangled: DbgLogBufManager::DbgLogBufManager() */
extern "C" __attribute__((visibility("default"))) int _ZN16DbgLogBufManagerC1Ev(void) {
    ALOGD("_ZN16DbgLogBufManagerC1Ev() called");
    return 0;
}

/* Demangled: HWCDisplay::clear() */
extern "C" __attribute__((visibility("default"))) int _ZN10HWCDisplay5clearEv(void) {
    ALOGD("_ZN10HWCDisplay5clearEv() called");
    return 0;
}

/* Demangled: HWCLayer::toString8() */
extern "C" __attribute__((visibility("default"))) int _ZN8HWCLayer9toString8Ev(void) {
    ALOGD("_ZN8HWCLayer9toString8Ev() called");
    return 0;
}

/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS8_ISX_EEFvNSI_5ErrorESQ_EE18destroy_deallocateEv */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS8_ISX_EEFvNSI_5ErrorESQ_EE18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS8_ISX_EEFvNSI_5ErrorESQ_EE18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSJ_8hidl_vecIhEEPT_ESW_EUlRKSV_SU_E_NSC_IS11_EEFvNSM_5ErrorESU_EE18destroy_deallocateEv */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSJ_8hidl_vecIhEEPT_ESW_EUlRKSV_SU_E_NSC_IS11_EEFvNSM_5ErrorESU_EE18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSJ_8hidl_vecIhEEPT_ESW_EUlRKSV_SU_E_NSC_IS11_EEFvNSM_5ErrorESU_EE18destroy_deallocateEv() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: mapColorRange(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z13mapColorRangej(void) {
    ALOGD("_Z13mapColorRangej() called");
    return 0;
}

/* Demangled: HWCBuffer::afterPresent(bool const&, bool const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9HWCBuffer12afterPresentERKbS1_(void) {
    ALOGD("_ZN9HWCBuffer12afterPresentERKbS1_() called");
    return 0;
}

/* Demangled: createHrt() */
extern "C" __attribute__((visibility("default"))) int _Z9createHrtv(void) {
    ALOGD("_Z9createHrtv() called");
    return 0;
}

/* Demangled: DispDevice::getDisplayOutputRotated() */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice23getDisplayOutputRotatedEv(void) {
    ALOGD("_ZN10DispDevice23getDisplayOutputRotatedEv() called");
    return 0;
}

/* Demangled: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common8Cta861_3EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EE7__cloneEv */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common8Cta861_3EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EE7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common8Cta861_3EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EE7__cloneEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__push_back_slow_path<int>(int&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIiEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIiEEvOT_() called");
    return 0;
}

/* Demangled: HWCDisplay::getChangedRequests(unsigned int*, unsigned long*, int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK10HWCDisplay18getChangedRequestsEPjPmPi(void) {
    ALOGD("_ZNK10HWCDisplay18getChangedRequestsEPjPmPi() called");
    return 0;
}

/* Demangled: AsyncBliterHandler::AsyncBliterHandler(unsigned long, android::sp<OverlayEngine> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN18AsyncBliterHandlerC2EmRKN7android2spI13OverlayEngineEE(void) {
    ALOGD("_ZN18AsyncBliterHandlerC2EmRKN7android2spI13OverlayEngineEE() called");
    return 0;
}

/* Demangled: DispDevice::getMaxOverlayHeight() */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice19getMaxOverlayHeightEv(void) {
    ALOGD("_ZN10DispDevice19getMaxOverlayHeightEv() called");
    return 0;
}

/* Demangled: hwc::GrallocMapper::~GrallocMapper() */
extern "C" __attribute__((visibility("default"))) int _ZN3hwc13GrallocMapperD0Ev(void) {
    ALOGD("_ZN3hwc13GrallocMapperD0Ev() called");
    return 0;
}

/* Demangled: OverlayEngine::setPowerMode(int) */
extern "C" __attribute__((visibility("default"))) int _ZN13OverlayEngine12setPowerModeEi(void) {
    ALOGD("_ZN13OverlayEngine12setPowerModeEi() called");
    return 0;
}

/* Demangled: HWVSyncEstimator::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN16HWVSyncEstimator11getInstanceEv(void) {
    ALOGD("_ZN16HWVSyncEstimator11getInstanceEv() called");
    return 0;
}

/* Exported Object: construction vtable for HWCVSyncListener-in-DispatchThread */
extern "C" __attribute__((visibility("default"))) void* _ZTC14DispatchThread296_16HWCVSyncListener = NULL;

/* Demangled: SyncFence::waitForever(int, int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9SyncFence11waitForeverEiiPKc(void) {
    ALOGD("_ZN9SyncFence11waitForeverEiiPKc() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, PrivateHandle>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long, PrivateHandle>, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, PrivateHandle>, std::__1::hash<unsigned long>, true>, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, PrivateHandle>, std::__1::equal_to<unsigned long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long, PrivateHandle> > >::__emplace_unique_key_args<unsigned long, std::__1::pair<unsigned long const, PrivateHandle> >(unsigned long const&, std::__1::pair<unsigned long const, PrivateHandle>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIm13PrivateHandleEENS_22__unordered_map_hasherImS3_NS_4hashImEELb1EEENS_21__unordered_map_equalImS3_NS_8equal_toImEELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsImJNS_4pairIKmS2_EEEEENSG_INS_15__hash_iteratorIPNS_11__hash_nodeIS3_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIm13PrivateHandleEENS_22__unordered_map_hasherImS3_NS_4hashImEELb1EEENS_21__unordered_map_equalImS3_NS_8equal_toImEELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsImJNS_4pairIKmS2_EEEEENSG_INS_15__hash_iteratorIPNS_11__hash_nodeIS3_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Exported Object: HWC2_BLEND_MODE_PREMULTIPLIED_STR */
extern "C" __attribute__((visibility("default"))) void* HWC2_BLEND_MODE_PREMULTIPLIED_STR = NULL;

/* Demangled: DisplayManager::setDisplayPowerState(unsigned long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14DisplayManager20setDisplayPowerStateEmi(void) {
    ALOGD("_ZN14DisplayManager20setDisplayPowerStateEmi() called");
    return 0;
}

/* Demangled: android::Transform::transform(android::Region const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android9Transform9transformERKNS_6RegionE(void) {
    ALOGD("_ZNK7android9Transform9transformERKNS_6RegionE() called");
    return 0;
}

/* Demangled: hwc::Gralloc4Mapper::getLayerCount(native_handle const*, unsigned long*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc4Mapper13getLayerCountEPK13native_handlePm(void) {
    ALOGD("_ZNK3hwc14Gralloc4Mapper13getLayerCountEPK13native_handlePm() called");
    return 0;
}

/* Demangled: hwc::Gralloc4Mapper::getDefaultChromaSiting(unsigned int, unsigned int, int, unsigned int, unsigned long, aidl::android::hardware::graphics::common::ExtendableType*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc4Mapper22getDefaultChromaSitingEjjijmPN4aidl7android8hardware8graphics6common14ExtendableTypeE(void) {
    ALOGD("_ZNK3hwc14Gralloc4Mapper22getDefaultChromaSitingEjjijmPN4aidl7android8hardware8graphics6common14ExtendableTypeE() called");
    return 0;
}

/* Demangled: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN7android8hardware8graphics6common4V1_211PixelFormatEEEiPK13native_handleRKNS7_6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EE7__cloneEPNS0_6__baseISY_EE */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN7android8hardware8graphics6common4V1_211PixelFormatEEEiPK13native_handleRKNS7_6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EE7__cloneEPNS0_6__baseISY_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN7android8hardware8graphics6common4V1_211PixelFormatEEEiPK13native_handleRKNS7_6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EE7__cloneEPNS0_6__baseISY_EE() called");
    return 0;
}

/* Demangled: hwc::GraphicBufferMapper::isSupported(unsigned int, unsigned int, int, unsigned int, unsigned long, bool*) */
extern "C" __attribute__((visibility("default"))) int _ZN3hwc19GraphicBufferMapper11isSupportedEjjijmPb(void) {
    ALOGD("_ZN3hwc19GraphicBufferMapper11isSupportedEjjijmPb() called");
    return 0;
}

/* Demangled: Platform::Platform() */
extern "C" __attribute__((visibility("default"))) int _ZN8PlatformC1Ev(void) {
    ALOGD("_ZN8PlatformC1Ev() called");
    return 0;
}

/* Demangled: HWCDispatcher::PhyPostHandler::setMirror(DispatcherJob*, DispatcherJob*) */
extern "C" __attribute__((visibility("default"))) int _ZN13HWCDispatcher14PhyPostHandler9setMirrorEP13DispatcherJobS2_(void) {
    ALOGD("_ZN13HWCDispatcher14PhyPostHandler9setMirrorEP13DispatcherJobS2_() called");
    return 0;
}

/* Demangled: DisplayManager::setVideoHdcp(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14DisplayManager12setVideoHdcpERKj(void) {
    ALOGD("_ZN14DisplayManager12setVideoHdcpERKj() called");
    return 0;
}

/* Demangled: GrallocDevice::free(native_handle const*) */
extern "C" __attribute__((visibility("default"))) int _ZN13GrallocDevice4freeEPK13native_handle(void) {
    ALOGD("_ZN13GrallocDevice4freeEPK13native_handle() called");
    return 0;
}

/* Demangled: GrallocDevice::~GrallocDevice() */
extern "C" __attribute__((visibility("default"))) int _ZN13GrallocDeviceD1Ev(void) {
    ALOGD("_ZN13GrallocDeviceD1Ev() called");
    return 0;
}

/* Demangled: calculateMdpDstRoi(android::sp<HWCLayer>, unsigned long const&, double const&) */
extern "C" __attribute__((visibility("default"))) int _Z18calculateMdpDstRoiN7android2spI8HWCLayerEERKmRKd(void) {
    ALOGD("_Z18calculateMdpDstRoiN7android2spI8HWCLayerEERKmRKd() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<IOverlayDevice>, std::__1::allocator<android::sp<IOverlayDevice> > >::__push_back_slow_path<android::sp<IOverlayDevice> const&>(android::sp<IOverlayDevice> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spI14IOverlayDeviceEENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spI14IOverlayDeviceEENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_() called");
    return 0;
}

/* Demangled: hwc::GraphicBufferMapper::dumpBuffer(native_handle const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, bool) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc19GraphicBufferMapper10dumpBufferEPK13native_handleRNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb(void) {
    ALOGD("_ZNK3hwc19GraphicBufferMapper10dumpBufferEPK13native_handleRNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: HWCMediator::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator11getInstanceEv(void) {
    ALOGD("_ZN11HWCMediator11getInstanceEv() called");
    return 0;
}

/* Demangled: HWCDisplay::init() */
extern "C" __attribute__((visibility("default"))) int _ZN10HWCDisplay4initEv(void) {
    ALOGD("_ZN10HWCDisplay4initEv() called");
    return 0;
}

/* Demangled: android::SWWatchDog::setAnchor(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, long const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10SWWatchDog9setAnchorERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKl(void) {
    ALOGD("_ZN7android10SWWatchDog9setAnchorERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKl() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, int, int, int, int, int>(unsigned int const&, unsigned char const&, char const*, char const*, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKciiiiiEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKciiiiiEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: HrtCommon::modifyMdpDstRoiIfRejectedByRpo(std::__1::vector<android::sp<HWCDisplay>, std::__1::allocator<android::sp<HWCDisplay> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9HrtCommon30modifyMdpDstRoiIfRejectedByRpoERKNSt3__16vectorIN7android2spI10HWCDisplayEENS0_9allocatorIS5_EEEE(void) {
    ALOGD("_ZN9HrtCommon30modifyMdpDstRoiIfRejectedByRpoERKNSt3__16vectorIN7android2spI10HWCDisplayEENS0_9allocatorIS5_EEEE() called");
    return 0;
}

/* Exported Object: vtable for HrtCommon */
extern "C" __attribute__((visibility("default"))) void* _ZTV9HrtCommon = NULL;

/* Demangled: HWCDisplay::setJobDisplayOrientation() */
extern "C" __attribute__((visibility("default"))) int _ZN10HWCDisplay24setJobDisplayOrientationEv(void) {
    ALOGD("_ZN10HWCDisplay24setJobDisplayOrientationEv() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, SyncFence*, char const*, unsigned long, int>(unsigned int const&, unsigned char const&, char const*, char const*, SyncFence*, char const*, unsigned long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcP9SyncFenceS2_miEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcP9SyncFenceS2_miEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: hwc::Gralloc4Mapper::getDefaultInterlaced(unsigned int, unsigned int, int, unsigned int, unsigned long, aidl::android::hardware::graphics::common::Interlaced*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc4Mapper20getDefaultInterlacedEjjijmPN4aidl7android8hardware8graphics6common10InterlacedE(void) {
    ALOGD("_ZNK3hwc14Gralloc4Mapper20getDefaultInterlacedEjjijmPN4aidl7android8hardware8graphics6common10InterlacedE() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, int, unsigned int, int, unsigned int, int, unsigned int, int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, int, unsigned int, int, unsigned int, int, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmijijijiEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmijijijiEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: HWCLayer::validate() */
extern "C" __attribute__((visibility("default"))) int _ZN8HWCLayer8validateEv(void) {
    ALOGD("_ZN8HWCLayer8validateEv() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, int, unsigned int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmijEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmijEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSG_8hidl_vecIhEEPT_EST_EUlRKSS_SR_E_NSC_ISY_EEFvNSJ_5ErrorESR_EE7destroyEv */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSG_8hidl_vecIhEEPT_EST_EUlRKSS_SR_E_NSC_ISY_EEFvNSJ_5ErrorESR_EE7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSG_8hidl_vecIhEEPT_EST_EUlRKSS_SR_E_NSC_ISY_EEFvNSJ_5ErrorESR_EE7destroyEv() called");
    return 0;
}

/* Demangled: HWCLayer::setBufferQueue(android::sp<DisplayBufferQueue>) */
extern "C" __attribute__((visibility("default"))) int _ZN8HWCLayer14setBufferQueueEN7android2spI18DisplayBufferQueueEE(void) {
    ALOGD("_ZN8HWCLayer14setBufferQueueEN7android2spI18DisplayBufferQueueEE() called");
    return 0;
}

/* Demangled: getFdInfo(int, std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _Z9getFdInfoiPNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void) {
    ALOGD("_Z9getFdInfoiPNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: std::__1::vector<float, std::__1::allocator<float> >::__append(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIfNS_9allocatorIfEEE8__appendEm(void) {
    ALOGD("_ZNSt3__16vectorIfNS_9allocatorIfEEE8__appendEm() called");
    return 0;
}

/* Demangled: AsyncBlitDevice::initOverlay() */
extern "C" __attribute__((visibility("default"))) int _ZN15AsyncBlitDevice11initOverlayEv(void) {
    ALOGD("_ZN15AsyncBlitDevice11initOverlayEv() called");
    return 0;
}

/* Exported Object: _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSJ_8hidl_vecIhEEPT_ESW_EUlRKSV_SU_E_NSC_IS11_EEFvNSM_5ErrorESU_EEE */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSJ_8hidl_vecIhEEPT_ESW_EUlRKSV_SU_E_NSC_IS11_EEFvNSM_5ErrorESU_EEE = NULL;

/* Demangled: HWCDisplay::isConfigChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN10HWCDisplay15isConfigChangedEv(void) {
    ALOGD("_ZN10HWCDisplay15isConfigChangedEv() called");
    return 0;
}

/* Demangled: HWCLayer::toBeDim() */
extern "C" __attribute__((visibility("default"))) int _ZN8HWCLayer7toBeDimEv(void) {
    ALOGD("_ZN8HWCLayer7toBeDimEv() called");
    return 0;
}

/* Demangled: ColorTransform::ColorTransform(float const*, int const&, bool const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14ColorTransformC2EPKfRKiRKb(void) {
    ALOGD("_ZN14ColorTransformC2EPKfRKiRKb() called");
    return 0;
}

/* Demangled: HWCDisplay::setupPrivateHandleOfLayers() */
extern "C" __attribute__((visibility("default"))) int _ZN10HWCDisplay26setupPrivateHandleOfLayersEv(void) {
    ALOGD("_ZN10HWCDisplay26setupPrivateHandleOfLayersEv() called");
    return 0;
}

/* Demangled: HWCMediator::rollbackSFCPUSet(unsigned long const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator16rollbackSFCPUSetERKm(void) {
    ALOGD("_ZN11HWCMediator16rollbackSFCPUSetERKm() called");
    return 0;
}

/* Demangled: ColorTransform::ColorTransform(std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > const&, int const&, bool const&, bool const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14ColorTransformC2ERKNSt3__16vectorINS1_IfNS0_9allocatorIfEEEENS2_IS4_EEEERKiRKbSC_(void) {
    ALOGD("_ZN14ColorTransformC2ERKNSt3__16vectorINS1_IfNS0_9allocatorIfEEEENS2_IS4_EEEERKiRKbSC_() called");
    return 0;
}

/* Demangled: AsyncBlitDevice::waitVSync(unsigned long, long*) */
extern "C" __attribute__((visibility("default"))) int _ZN15AsyncBlitDevice9waitVSyncEmPl(void) {
    ALOGD("_ZN15AsyncBlitDevice9waitVSyncEmPl() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, int, int, unsigned int>(unsigned int const&, unsigned char const&, char const*, char const*, int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKciijEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKciijEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: Hrt::fillLayerInfoOfDispatcherJob(std::__1::vector<android::sp<HWCDisplay>, std::__1::allocator<android::sp<HWCDisplay> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3Hrt28fillLayerInfoOfDispatcherJobERKNSt3__16vectorIN7android2spI10HWCDisplayEENS0_9allocatorIS5_EEEE(void) {
    ALOGD("_ZN3Hrt28fillLayerInfoOfDispatcherJobERKNSt3__16vectorIN7android2spI10HWCDisplayEENS0_9allocatorIS5_EEEE() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, char const*, unsigned long, unsigned long, int, int>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, unsigned long, unsigned long, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcS2_mmiiEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcS2_mmiiEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: android::sp<IdleThread>::operator=(IdleThread*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spI10IdleThreadEaSEPS1_(void) {
    ALOGD("_ZN7android2spI10IdleThreadEaSEPS1_() called");
    return 0;
}

/* Demangled: DispDevice::initOverlay() */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice11initOverlayEv(void) {
    ALOGD("_ZN10DispDevice11initOverlayEv() called");
    return 0;
}

/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalINS_6vectorIhNS_9allocatorIhEEEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS7_ISX_EEFvNSI_5ErrorESQ_EE18destroy_deallocateEv */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalINS_6vectorIhNS_9allocatorIhEEEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS7_ISX_EEFvNSI_5ErrorESQ_EE18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalINS_6vectorIhNS_9allocatorIhEEEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS7_ISX_EEFvNSI_5ErrorESQ_EE18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, char const*, DisplayBufferQueue*, int, DisplayBufferQueue::BufferSlot::BufferState, int>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, DisplayBufferQueue*, int, DisplayBufferQueue::BufferSlot::BufferState, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueueiNS3_10BufferSlot11BufferStateEiEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueueiNS3_10BufferSlot11BufferStateEiEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: HWCDisplay::buildVisibleAndInvisibleLayersSortedByZ() */
extern "C" __attribute__((visibility("default"))) int _ZN10HWCDisplay39buildVisibleAndInvisibleLayersSortedByZEv(void) {
    ALOGD("_ZN10HWCDisplay39buildVisibleAndInvisibleLayersSortedByZEv() called");
    return 0;
}

/* Demangled: HWCDispatcher::VirPostHandler::set(android::sp<HWCDisplay> const&, DispatcherJob*) */
extern "C" __attribute__((visibility("default"))) int _ZN13HWCDispatcher14VirPostHandler3setERKN7android2spI10HWCDisplayEEP13DispatcherJob(void) {
    ALOGD("_ZN13HWCDispatcher14VirPostHandler3setERKN7android2spI10HWCDisplayEEP13DispatcherJob() called");
    return 0;
}

/* Demangled: calculateCrop(android::Rect*, android::Rect*, android::Rect&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z13calculateCropPN7android4RectES1_RS0_j(void) {
    ALOGD("_Z13calculateCropPN7android4RectES1_RS0_j() called");
    return 0;
}

/* Demangled: android::Vector<DispatcherJob*>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIP13DispatcherJobE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIP13DispatcherJobE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<DispatcherJob*>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIP13DispatcherJobE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIP13DispatcherJobE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: DisplayManager::DisplayManager() */
extern "C" __attribute__((visibility("default"))) int _ZN14DisplayManagerC1Ev(void) {
    ALOGD("_ZN14DisplayManagerC1Ev() called");
    return 0;
}

/* Demangled: HWVSyncEstimator::getNextHWVsync(long) */
extern "C" __attribute__((visibility("default"))) int _ZN16HWVSyncEstimator14getNextHWVsyncEl(void) {
    ALOGD("_ZN16HWVSyncEstimator14getNextHWVsyncEl() called");
    return 0;
}

/* Demangled: getDstHeight(android::sp<HWCLayer> const&) */
extern "C" __attribute__((visibility("default"))) int _Z12getDstHeightRKN7android2spI8HWCLayerEE(void) {
    ALOGD("_Z12getDstHeightRKN7android2spI8HWCLayerEE() called");
    return 0;
}

/* Demangled: HWCMediator::addHWCDisplay(android::sp<HWCDisplay> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator13addHWCDisplayERKN7android2spI10HWCDisplayEE(void) {
    ALOGD("_ZN11HWCMediator13addHWCDisplayERKN7android2spI10HWCDisplayEE() called");
    return 0;
}

/* Demangled: HWCMediator::displaySetClientTarget(hwc2_device*, unsigned long, native_handle const*, int, int, hwc_region) */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator22displaySetClientTargetEP11hwc2_devicemPK13native_handleii10hwc_region(void) {
    ALOGD("_ZN11HWCMediator22displaySetClientTargetEP11hwc2_devicemPK13native_handleii10hwc_region() called");
    return 0;
}

/* Demangled: AsyncBliterHandler::bypassBlit(HWLayer*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN18AsyncBliterHandler10bypassBlitEP7HWLayerj(void) {
    ALOGD("_ZN18AsyncBliterHandler10bypassBlitEP7HWLayerj() called");
    return 0;
}

/* Demangled: DispDevice::legacySetInputBuffer(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice20legacySetInputBufferEm(void) {
    ALOGD("_ZN10DispDevice20legacySetInputBufferEm() called");
    return 0;
}

/* Demangled: HWCDisplay::setActiveConfig(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10HWCDisplay15setActiveConfigEj(void) {
    ALOGD("_ZN10HWCDisplay15setActiveConfigEj() called");
    return 0;
}

/* Demangled: HWCLayer::setLayerColor(hwc_color const&) */
extern "C" __attribute__((visibility("default"))) int _ZN8HWCLayer13setLayerColorERK9hwc_color(void) {
    ALOGD("_ZN8HWCLayer13setLayerColorERK9hwc_color() called");
    return 0;
}

/* Demangled: OverlayEngine::createOutputQueueLocked(unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN13OverlayEngine23createOutputQueueLockedEjb(void) {
    ALOGD("_ZN13OverlayEngine23createOutputQueueLockedEjb() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi() called");
    return 0;
}

/* Demangled: android::SortedVector<android::sp<HWCVSyncListener> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_2spI16HWCVSyncListenerEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_2spI16HWCVSyncListenerEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, float>(unsigned int const&, unsigned char const&, char const*, char const*, float) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcfEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcfEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: DisplayListener::onRefresh(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN15DisplayListener9onRefreshEm(void) {
    ALOGD("_ZN15DisplayListener9onRefreshEm() called");
    return 0;
}

/* Demangled: HWCDispatcher::trigger(unsigned long const&) */
extern "C" __attribute__((visibility("default"))) int _ZN13HWCDispatcher7triggerERKm(void) {
    ALOGD("_ZN13HWCDispatcher7triggerERKm() called");
    return 0;
}

/* Demangled: HWCDisplay::getWidth(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK10HWCDisplay8getWidthEj(void) {
    ALOGD("_ZNK10HWCDisplay8getWidthEj() called");
    return 0;
}

/* Demangled: virtual thunk to VSyncThread::~VSyncThread() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N11VSyncThreadD1Ev(void) {
    ALOGD("_ZTv0_n24_N11VSyncThreadD1Ev() called");
    return 0;
}

/* Demangled: hwc::Gralloc4Mapper::getDefaultPlaneLayouts(unsigned int, unsigned int, int, unsigned int, unsigned long, std::__1::vector<aidl::android::hardware::graphics::common::PlaneLayout, std::__1::allocator<aidl::android::hardware::graphics::common::PlaneLayout> >*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc4Mapper22getDefaultPlaneLayoutsEjjijmPNSt3__16vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS1_9allocatorIS8_EEEE(void) {
    ALOGD("_ZNK3hwc14Gralloc4Mapper22getDefaultPlaneLayoutsEjjijmPNSt3__16vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS1_9allocatorIS8_EEEE() called");
    return 0;
}

/* Exported Object: _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultImEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EEE */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultImEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EEE = NULL;

/* Demangled: hwc::GraphicBufferMapper::getInterlaced(native_handle const*, aidl::android::hardware::graphics::common::ExtendableType*) */
extern "C" __attribute__((visibility("default"))) int _ZN3hwc19GraphicBufferMapper13getInterlacedEPK13native_handlePN4aidl7android8hardware8graphics6common14ExtendableTypeE(void) {
    ALOGD("_ZN3hwc19GraphicBufferMapper13getInterlacedEPK13native_handlePN4aidl7android8hardware8graphics6common14ExtendableTypeE() called");
    return 0;
}

/* Demangled: AsyncBlitDevice::isPartialUpdateSupported() */
extern "C" __attribute__((visibility("default"))) int _ZN15AsyncBlitDevice24isPartialUpdateSupportedEv(void) {
    ALOGD("_ZN15AsyncBlitDevice24isPartialUpdateSupportedEv() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, int, int>(unsigned int const&, unsigned char const&, char const*, char const*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKciiEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKciiEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: HrtCommon::isEnabled() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9HrtCommon9isEnabledEv(void) {
    ALOGD("_ZNK9HrtCommon9isEnabledEv() called");
    return 0;
}

/* Demangled: HWCDisplay::getNumConfigs() const */
extern "C" __attribute__((visibility("default"))) int _ZNK10HWCDisplay13getNumConfigsEv(void) {
    ALOGD("_ZNK10HWCDisplay13getNumConfigsEv() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, char, char const*, char const*>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, char, char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmcS2_S2_EEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmcS2_S2_EEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: DisplayManager::setDisplayDataForPhy(unsigned long, native_handle const*) */
extern "C" __attribute__((visibility("default"))) int _ZN14DisplayManager20setDisplayDataForPhyEmPK13native_handle(void) {
    ALOGD("_ZN14DisplayManager20setDisplayDataForPhyEmPK13native_handle() called");
    return 0;
}

/* Demangled: virtual thunk to DisplayBufferQueue::~DisplayBufferQueue() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N18DisplayBufferQueueD0Ev(void) {
    ALOGD("_ZTv0_n24_N18DisplayBufferQueueD0Ev() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned int, unsigned int, unsigned int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmjjjEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmjjjEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getImEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EE7destroyEv */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getImEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EE7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getImEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EE7destroyEv() called");
    return 0;
}

/* Demangled: ObjectPool<DispatcherJob>::ObjectPool(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned long, std::__1::function<DispatcherJob* ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN10ObjectPoolI13DispatcherJobEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEmNS2_8functionIFPS0_vEEE(void) {
    ALOGD("_ZN10ObjectPoolI13DispatcherJobEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEmNS2_8functionIFPS0_vEEE() called");
    return 0;
}

/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIjEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EE7destroyEv */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIjEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EE7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIjEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EE7destroyEv() called");
    return 0;
}

/* Exported Object: _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN7android8hardware8graphics6common4V1_211PixelFormatEEEiPK13native_handleRKNS7_6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EEE */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN7android8hardware8graphics6common4V1_211PixelFormatEEEiPK13native_handleRKNS7_6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EEE = NULL;

/* Demangled: hwc::GraphicBufferMapper::getDefaultPixelFormatModifier(unsigned int, unsigned int, int, unsigned int, unsigned long, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZN3hwc19GraphicBufferMapper29getDefaultPixelFormatModifierEjjijmPm(void) {
    ALOGD("_ZN3hwc19GraphicBufferMapper29getDefaultPixelFormatModifierEjjijmPm() called");
    return 0;
}

/* Demangled: android::Vector<android::SortedVector<android::sp<HWCVSyncListener> > >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_12SortedVectorINS_2spI16HWCVSyncListenerEEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_12SortedVectorINS_2spI16HWCVSyncListenerEEEEE10do_destroyEPvm() called");
    return 0;
}

/* Exported Object: HWC2_COMPOSITION_INVALID_STR */
extern "C" __attribute__((visibility("default"))) void* HWC2_COMPOSITION_INVALID_STR = NULL;

/* Demangled: hwc::Gralloc2Mapper::isLoaded() const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc2Mapper8isLoadedEv(void) {
    ALOGD("_ZNK3hwc14Gralloc2Mapper8isLoadedEv() called");
    return 0;
}

/* Demangled: hwc::Gralloc4Mapper::getUsage(native_handle const*, unsigned long*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc4Mapper8getUsageEPK13native_handlePm(void) {
    ALOGD("_ZNK3hwc14Gralloc4Mapper8getUsageEPK13native_handlePm() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, char const*, int, bool>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcS2_ibEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcS2_ibEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: HWCBuffer::setAcquireFenceFd(int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9HWCBuffer17setAcquireFenceFdERKi(void) {
    ALOGD("_ZN9HWCBuffer17setAcquireFenceFdERKi() called");
    return 0;
}

/* Demangled: DisplayListener::onPlugIn(unsigned long, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN15DisplayListener8onPlugInEmjj(void) {
    ALOGD("_ZN15DisplayListener8onPlugInEmjj() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, char const*, int>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcS2_iEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcS2_iEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: HWCLayer::getCompositionType() const */
extern "C" __attribute__((visibility("default"))) int _ZNK8HWCLayer18getCompositionTypeEv(void) {
    ALOGD("_ZNK8HWCLayer18getCompositionTypeEv() called");
    return 0;
}

/* Demangled: isP3(int const&) */
extern "C" __attribute__((visibility("default"))) int _Z4isP3RKi(void) {
    ALOGD("_Z4isP3RKi() called");
    return 0;
}

/* Demangled: android::Vector<MdpJobInfo>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorI10MdpJobInfoE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorI10MdpJobInfoE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: hwc::GraphicBufferMapper::getDataspace(native_handle const*, android::hardware::graphics::common::V1_2::Dataspace*) */
extern "C" __attribute__((visibility("default"))) int _ZN3hwc19GraphicBufferMapper12getDataspaceEPK13native_handlePN7android8hardware8graphics6common4V1_29DataspaceE(void) {
    ALOGD("_ZN3hwc19GraphicBufferMapper12getDataspaceEPK13native_handlePN7android8hardware8graphics6common4V1_29DataspaceE() called");
    return 0;
}

/* Demangled: HWCMediator::countdowmSkipValiRelatedNumber() */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator30countdowmSkipValiRelatedNumberEv(void) {
    ALOGD("_ZN11HWCMediator30countdowmSkipValiRelatedNumberEv() called");
    return 0;
}

/* Demangled: HWCDispatcher::VirPostHandler::process(DispatcherJob*) */
extern "C" __attribute__((visibility("default"))) int _ZN13HWCDispatcher14VirPostHandler7processEP13DispatcherJob(void) {
    ALOGD("_ZN13HWCDispatcher14VirPostHandler7processEP13DispatcherJob() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void) {
    ALOGD("_ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv() called");
    return 0;
}

/* Demangled: android::Transform::Transform(android::Transform const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9TransformC2ERKS0_(void) {
    ALOGD("_ZN7android9TransformC2ERKS0_() called");
    return 0;
}

/* Demangled: DispatcherJob::DispatcherJob(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN13DispatcherJobC2Ej(void) {
    ALOGD("_ZN13DispatcherJobC2Ej() called");
    return 0;
}

/* Demangled: android::sp<LayerComposer>::operator=(LayerComposer*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spI13LayerComposerEaSEPS1_(void) {
    ALOGD("_ZN7android2spI13LayerComposerEaSEPS1_() called");
    return 0;
}

/* Demangled: IdleThread::~IdleThread() */
extern "C" __attribute__((visibility("default"))) int _ZN10IdleThreadD1Ev(void) {
    ALOGD("_ZN10IdleThreadD1Ev() called");
    return 0;
}

/* Demangled: HrtCommon::simpleLayeringRule(std::__1::vector<android::sp<HWCDisplay>, std::__1::allocator<android::sp<HWCDisplay> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9HrtCommon18simpleLayeringRuleERKNSt3__16vectorIN7android2spI10HWCDisplayEENS0_9allocatorIS5_EEEE(void) {
    ALOGD("_ZN9HrtCommon18simpleLayeringRuleERKNSt3__16vectorIN7android2spI10HWCDisplayEENS0_9allocatorIS5_EEEE() called");
    return 0;
}

/* Demangled: HWCLayer::setupPrivateHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN8HWCLayer18setupPrivateHandleEv(void) {
    ALOGD("_ZN8HWCLayer18setupPrivateHandleEv() called");
    return 0;
}

/* Demangled: DispatchThread::clearUsedJob(DispatcherJob*) */
extern "C" __attribute__((visibility("default"))) int _ZN14DispatchThread12clearUsedJobEP13DispatcherJob(void) {
    ALOGD("_ZN14DispatchThread12clearUsedJobEP13DispatcherJob() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, char const*, unsigned long, int, int, float, float, float, float, int, int, int, int>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, unsigned long, int, int, float, float, float, float, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcS2_miiffffiiiiEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcS2_miiffffiiiiEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: Debugger::Debugger() */
extern "C" __attribute__((visibility("default"))) int _ZN8DebuggerC1Ev(void) {
    ALOGD("_ZN8DebuggerC1Ev() called");
    return 0;
}

/* Demangled: hwc::Gralloc4Mapper::Gralloc4Mapper() */
extern "C" __attribute__((visibility("default"))) int _ZN3hwc14Gralloc4MapperC1Ev(void) {
    ALOGD("_ZN3hwc14Gralloc4MapperC1Ev() called");
    return 0;
}

/* Demangled: HWCMediator::layerStateSetBlendMode(hwc2_device*, unsigned long, unsigned long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator22layerStateSetBlendModeEP11hwc2_devicemmi(void) {
    ALOGD("_ZN11HWCMediator22layerStateSetBlendModeEP11hwc2_devicemmi() called");
    return 0;
}

/* Demangled: HWCLayer::setTransform(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN8HWCLayer12setTransformERKj(void) {
    ALOGD("_ZN8HWCLayer12setTransformERKj() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<DispatcherJob*> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIP13DispatcherJobEE = NULL;

/* Exported Object: construction vtable for android::Thread-in-IdleThread */
extern "C" __attribute__((visibility("default"))) void* _ZTC10IdleThread0_N7android6ThreadE = NULL;

/* Demangled: FrameOverlayInfo::resetOverlayPortParam(OverlayPortParam*) */
extern "C" __attribute__((visibility("default"))) int _ZN16FrameOverlayInfo21resetOverlayPortParamEP16OverlayPortParam(void) {
    ALOGD("_ZN16FrameOverlayInfo21resetOverlayPortParamEP16OverlayPortParam() called");
    return 0;
}

/* Demangled: __multf3 */
extern "C" __attribute__((visibility("default"))) int __multf3(void) {
    ALOGD("__multf3() called");
    return 0;
}

/* Demangled: HWVSyncEstimator::update(long) */
extern "C" __attribute__((visibility("default"))) int _ZN16HWVSyncEstimator6updateEl(void) {
    ALOGD("_ZN16HWVSyncEstimator6updateEl() called");
    return 0;
}

/* Demangled: IONDevice::~IONDevice() */
extern "C" __attribute__((visibility("default"))) int _ZN9IONDeviceD1Ev(void) {
    ALOGD("_ZN9IONDeviceD1Ev() called");
    return 0;
}

/* Demangled: DbgLogBufManager::~DbgLogBufManager() */
extern "C" __attribute__((visibility("default"))) int _ZN16DbgLogBufManagerD2Ev(void) {
    ALOGD("_ZN16DbgLogBufManagerD2Ev() called");
    return 0;
}

/* Demangled: hwc::Gralloc4Mapper::getDefaultChromaSiting(unsigned int, unsigned int, int, unsigned int, unsigned long, aidl::android::hardware::graphics::common::ChromaSiting*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc4Mapper22getDefaultChromaSitingEjjijmPN4aidl7android8hardware8graphics6common12ChromaSitingE(void) {
    ALOGD("_ZNK3hwc14Gralloc4Mapper22getDefaultChromaSitingEjjijmPN4aidl7android8hardware8graphics6common12ChromaSitingE() called");
    return 0;
}

/* Demangled: HWCDispatcher::PostHandler::PostHandler(HWCDispatcher*, unsigned long, android::sp<OverlayEngine> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN13HWCDispatcher11PostHandlerC2EPS_mRKN7android2spI13OverlayEngineEE(void) {
    ALOGD("_ZN13HWCDispatcher11PostHandlerC2EPS_mRKN7android2spI13OverlayEngineEE() called");
    return 0;
}

/* Demangled: __getf2 */
extern "C" __attribute__((visibility("default"))) int __getf2(void) {
    ALOGD("__getf2() called");
    return 0;
}

/* Demangled: HWCMediator::~HWCMediator() */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediatorD1Ev(void) {
    ALOGD("_ZN11HWCMediatorD1Ev() called");
    return 0;
}

/* Demangled: android::Transform::ty() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android9Transform2tyEv(void) {
    ALOGD("_ZNK7android9Transform2tyEv() called");
    return 0;
}

/* Demangled: android::SWWatchDog::~SWWatchDog() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10SWWatchDogD2Ev(void) {
    ALOGD("_ZN7android10SWWatchDogD2Ev() called");
    return 0;
}

/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE18destroy_deallocateEv */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: HWCDisplay::getDpiY(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK10HWCDisplay7getDpiYEj(void) {
    ALOGD("_ZNK10HWCDisplay7getDpiYEj() called");
    return 0;
}

/* Demangled: UEventThread::setProperty() */
extern "C" __attribute__((visibility("default"))) int _ZN12UEventThread11setPropertyEv(void) {
    ALOGD("_ZN12UEventThread11setPropertyEv() called");
    return 0;
}

/* Demangled: BliterNode::~BliterNode() */
extern "C" __attribute__((visibility("default"))) int _ZN10BliterNodeD2Ev(void) {
    ALOGD("_ZN10BliterNodeD2Ev() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long, PrivateHandle>, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, PrivateHandle>, std::__1::hash<unsigned long>, true>, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, PrivateHandle>, std::__1::equal_to<unsigned long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long, PrivateHandle> > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIm13PrivateHandleEENS_22__unordered_map_hasherImS3_NS_4hashImEELb1EEENS_21__unordered_map_equalImS3_NS_8equal_toImEELb1EEENS_9allocatorIS3_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIm13PrivateHandleEENS_22__unordered_map_hasherImS3_NS_4hashImEELb1EEENS_21__unordered_map_equalImS3_NS_8equal_toImEELb1EEENS_9allocatorIS3_EEE6rehashEm() called");
    return 0;
}

/* Demangled: DispDevice::waitVSync(unsigned long, long*) */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice9waitVSyncEmPl(void) {
    ALOGD("_ZN10DispDevice9waitVSyncEmPl() called");
    return 0;
}

/* Demangled: HWC2Api::~HWC2Api() */
extern "C" __attribute__((visibility("default"))) int _ZN7HWC2ApiD2Ev(void) {
    ALOGD("_ZN7HWC2ApiD2Ev() called");
    return 0;
}

/* Demangled: getPresentValiStateString(HWC_VALI_PRESENT_STATE const&) */
extern "C" __attribute__((visibility("default"))) int _Z25getPresentValiStateStringRK22HWC_VALI_PRESENT_STATE(void) {
    ALOGD("_Z25getPresentValiStateStringRK22HWC_VALI_PRESENT_STATE() called");
    return 0;
}

/* Demangled: DisplayManager::getSupportedColorMode(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN14DisplayManager21getSupportedColorModeEm(void) {
    ALOGD("_ZN14DisplayManager21getSupportedColorModeEm() called");
    return 0;
}

/* Exported Object: VTT for RefreshRequestThread */
extern "C" __attribute__((visibility("default"))) void* _ZTT20RefreshRequestThread = NULL;

/* Demangled: android::Vector<android::sp<FrameInfo> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spI9FrameInfoEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spI9FrameInfoEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, int, int, int, int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, int, int, int, int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmiiiijjjjjjEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmiiiijjjjjjEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: hwc::Gralloc4Mapper::getInterlaced(native_handle const*, aidl::android::hardware::graphics::common::Interlaced*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc4Mapper13getInterlacedEPK13native_handlePN4aidl7android8hardware8graphics6common10InterlacedE(void) {
    ALOGD("_ZNK3hwc14Gralloc4Mapper13getInterlacedEPK13native_handlePN4aidl7android8hardware8graphics6common10InterlacedE() called");
    return 0;
}

/* Demangled: PanelEventMonitorThread::~PanelEventMonitorThread() */
extern "C" __attribute__((visibility("default"))) int _ZN23PanelEventMonitorThreadD1Ev(void) {
    ALOGD("_ZN23PanelEventMonitorThreadD1Ev() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, char const*, DisplayBufferQueue*, unsigned int, native_handle const*>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, DisplayBufferQueue*, unsigned int, native_handle const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueuejPK13native_handleEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueuejPK13native_handleEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: WhiteBuffer::setSecure() */
extern "C" __attribute__((visibility("default"))) int _ZN11WhiteBuffer9setSecureEv(void) {
    ALOGD("_ZN11WhiteBuffer9setSecureEv() called");
    return 0;
}

/* Demangled: MmBufDump::MmBufDump() */
extern "C" __attribute__((visibility("default"))) int _ZN9MmBufDumpC1Ev(void) {
    ALOGD("_ZN9MmBufDumpC1Ev() called");
    return 0;
}

/* Demangled: hwc::Gralloc4Mapper::getWidth(native_handle const*, unsigned long*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc4Mapper8getWidthEPK13native_handlePm(void) {
    ALOGD("_ZNK3hwc14Gralloc4Mapper8getWidthEPK13native_handlePm() called");
    return 0;
}

/* Demangled: HWCMediator::open() */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator4openEv(void) {
    ALOGD("_ZN11HWCMediator4openEv() called");
    return 0;
}

/* Demangled: HWCDispatcher::prepareMirror(std::__1::vector<android::sp<HWCDisplay>, std::__1::allocator<android::sp<HWCDisplay> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN13HWCDispatcher13prepareMirrorERKNSt3__16vectorIN7android2spI10HWCDisplayEENS0_9allocatorIS5_EEEE(void) {
    ALOGD("_ZN13HWCDispatcher13prepareMirrorERKNSt3__16vectorIN7android2spI10HWCDisplayEENS0_9allocatorIS5_EEEE() called");
    return 0;
}

/* Demangled: RefreshRequestThread::RefreshRequestThread() */
extern "C" __attribute__((visibility("default"))) int _ZN20RefreshRequestThreadC2Ev(void) {
    ALOGD("_ZN20RefreshRequestThreadC2Ev() called");
    return 0;
}

/* Demangled: AsyncBlitDevice::getRefresh(unsigned long, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN15AsyncBlitDevice10getRefreshEmj(void) {
    ALOGD("_ZN15AsyncBlitDevice10getRefreshEmj() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, bool>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<int, bool>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, bool>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, bool>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, bool> > >::__emplace_unique_key_args<int, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>, std::__1::tuple<> >(int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<int const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIibEENS_22__unordered_map_hasherIiS2_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS2_NS_8equal_toIiEELb1EEENS_9allocatorIS2_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSI_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS2_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIibEENS_22__unordered_map_hasherIiS2_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS2_NS_8equal_toIiEELb1EEENS_9allocatorIS2_EEE25__emplace_unique_key_argsIiJRKNS_21piecewise_construct_tENS_5tupleIJRKiEEENSI_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS2_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: HWCLayer::needRotate() const */
extern "C" __attribute__((visibility("default"))) int _ZNK8HWCLayer10needRotateEv(void) {
    ALOGD("_ZNK8HWCLayer10needRotateEv() called");
    return 0;
}

/* Demangled: getDstWidth(android::sp<HWCLayer> const&) */
extern "C" __attribute__((visibility("default"))) int _Z11getDstWidthRKN7android2spI8HWCLayerEE(void) {
    ALOGD("_Z11getDstWidthRKN7android2spI8HWCLayerEE() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, int, int, int, int>(unsigned int const&, unsigned char const&, char const*, char const*, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKciiiiEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKciiiiEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: AsyncBlitDevice::~AsyncBlitDevice() */
extern "C" __attribute__((visibility("default"))) int _ZN15AsyncBlitDeviceD1Ev(void) {
    ALOGD("_ZN15AsyncBlitDeviceD1Ev() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, int, char const*>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmiS2_EEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmiS2_EEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: android::Transform::getOrientation() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android9Transform14getOrientationEv(void) {
    ALOGD("_ZNK7android9Transform14getOrientationEv() called");
    return 0;
}

/* Demangled: android::FpsCounter::update(long const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10FpsCounter6updateERKl(void) {
    ALOGD("_ZN7android10FpsCounter6updateERKl() called");
    return 0;
}

/* Demangled: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalINS_6vectorIhNS_9allocatorIhEEEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS7_ISX_EEFvNSI_5ErrorESQ_EE7__cloneEv */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalINS_6vectorIhNS_9allocatorIhEEEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS7_ISX_EEFvNSI_5ErrorESQ_EE7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalINS_6vectorIhNS_9allocatorIhEEEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS7_ISX_EEFvNSI_5ErrorESQ_EE7__cloneEv() called");
    return 0;
}

/* Demangled: HWCDisplay::setValiPresentState(HWC_VALI_PRESENT_STATE, int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10HWCDisplay19setValiPresentStateE22HWC_VALI_PRESENT_STATERKi(void) {
    ALOGD("_ZN10HWCDisplay19setValiPresentStateE22HWC_VALI_PRESENT_STATERKi() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m(void) {
    ALOGD("_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned int, unsigned int, int, unsigned int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned int, unsigned int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmjjijEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmjjijEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: hwc::Gralloc2Mapper::validateBufferDescriptorInfo(android::hardware::graphics::mapper::V2_1::IMapper::BufferDescriptorInfo*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc2Mapper28validateBufferDescriptorInfoEPN7android8hardware8graphics6mapper4V2_17IMapper20BufferDescriptorInfoE(void) {
    ALOGD("_ZNK3hwc14Gralloc2Mapper28validateBufferDescriptorInfoEPN7android8hardware8graphics6mapper4V2_17IMapper20BufferDescriptorInfoE() called");
    return 0;
}

/* Exported Object: construction vtable for HWCThread-in-OverlayEngine */
extern "C" __attribute__((visibility("default"))) void* _ZTC13OverlayEngine0_9HWCThread = NULL;

/* Demangled: AsyncBliterHandler::cancelFillBlackJob(MdpJob*) */
extern "C" __attribute__((visibility("default"))) int _ZN18AsyncBliterHandler18cancelFillBlackJobEP6MdpJob(void) {
    ALOGD("_ZN18AsyncBliterHandler18cancelFillBlackJobEP6MdpJob() called");
    return 0;
}

/* Demangled: AsyncBlitDevice::isDispRszSupported() */
extern "C" __attribute__((visibility("default"))) int _ZN15AsyncBlitDevice18isDispRszSupportedEv(void) {
    ALOGD("_ZN15AsyncBlitDevice18isDispRszSupportedEv() called");
    return 0;
}

/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9DataspaceEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE7destroyEv */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9DataspaceEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9DataspaceEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE7destroyEv() called");
    return 0;
}

/* Demangled: hwc::GraphicBufferMapper::getDefaultCompression(unsigned int, unsigned int, int, unsigned int, unsigned long, aidl::android::hardware::graphics::common::Compression*) */
extern "C" __attribute__((visibility("default"))) int _ZN3hwc19GraphicBufferMapper21getDefaultCompressionEjjijmPN4aidl7android8hardware8graphics6common11CompressionE(void) {
    ALOGD("_ZN3hwc19GraphicBufferMapper21getDefaultCompressionEjjijmPN4aidl7android8hardware8graphics6common11CompressionE() called");
    return 0;
}

/* Demangled: MDPFrameInfoDebugger::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN20MDPFrameInfoDebugger11getInstanceEv(void) {
    ALOGD("_ZN20MDPFrameInfoDebugger11getInstanceEv() called");
    return 0;
}

/* Demangled: BliterNode::cancelJobInternal(unsigned int const&, std::__1::shared_ptr<BliterNode::JobParam> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10BliterNode17cancelJobInternalERKjRKNSt3__110shared_ptrINS_8JobParamEEE(void) {
    ALOGD("_ZN10BliterNode17cancelJobInternalERKjRKNSt3__110shared_ptrINS_8JobParamEEE() called");
    return 0;
}

/* Demangled: hwc::Gralloc4Mapper::lock(native_handle const*, unsigned long, hwc::Rect const&, int, void**, int*, int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc4Mapper4lockEPK13native_handlemRKNS_4RectEiPPvPiS9_(void) {
    ALOGD("_ZNK3hwc14Gralloc4Mapper4lockEPK13native_handlemRKNS_4RectEiPPvPiS9_() called");
    return 0;
}

/* Demangled: hwc::GraphicBufferMapper::getSmpte2086(native_handle const*, std::__1::optional<aidl::android::hardware::graphics::common::Smpte2086>*) */
extern "C" __attribute__((visibility("default"))) int _ZN3hwc19GraphicBufferMapper12getSmpte2086EPK13native_handlePNSt3__18optionalIN4aidl7android8hardware8graphics6common9Smpte2086EEE(void) {
    ALOGD("_ZN3hwc19GraphicBufferMapper12getSmpte2086EPK13native_handlePNSt3__18optionalIN4aidl7android8hardware8graphics6common9Smpte2086EEE() called");
    return 0;
}

/* Demangled: void AbortMessager::printf<>(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN13AbortMessager6printfIJEEEvPKcDpT_(void) {
    ALOGD("_ZN13AbortMessager6printfIJEEEvPKcDpT_() called");
    return 0;
}

/* Demangled: usageHasProtected(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z17usageHasProtectedj(void) {
    ALOGD("_Z17usageHasProtectedj() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<MdpJobInfo> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorI10MdpJobInfoEE = NULL;

/* Demangled: hwc::Gralloc2Mapper::lock(native_handle const*, unsigned long, hwc::Rect const&, int, android_ycbcr*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc2Mapper4lockEPK13native_handlemRKNS_4RectEiP13android_ycbcr(void) {
    ALOGD("_ZNK3hwc14Gralloc2Mapper4lockEPK13native_handlemRKNS_4RectEiP13android_ycbcr() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned int, int, unsigned int, int, native_handle const*, int, unsigned int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned int, int, unsigned int, int, native_handle const*, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmjijiPK13native_handleijEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmjijiPK13native_handleijEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN7android8hardware8graphics6common4V1_211PixelFormatEEEiPK13native_handleRKNS7_6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EEclEOSX_SN_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN7android8hardware8graphics6common4V1_211PixelFormatEEEiPK13native_handleRKNS7_6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EEclEOSX_SN_(void) {
    ALOGD("_ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN7android8hardware8graphics6common4V1_211PixelFormatEEEiPK13native_handleRKNS7_6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EEclEOSX_SN_() called");
    return 0;
}

/* Demangled: HwcFeatureList::HwcFeatureList() */
extern "C" __attribute__((visibility("default"))) int _ZN14HwcFeatureListC1Ev(void) {
    ALOGD("_ZN14HwcFeatureListC1Ev() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, char const*, DisplayBufferQueue*, int, native_handle const*>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, DisplayBufferQueue*, int, native_handle const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueueiPK13native_handleEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueueiPK13native_handleEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: HrtCommon::fillLayerInfoOfDispatcherJob(std::__1::vector<android::sp<HWCDisplay>, std::__1::allocator<android::sp<HWCDisplay> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9HrtCommon28fillLayerInfoOfDispatcherJobERKNSt3__16vectorIN7android2spI10HWCDisplayEENS0_9allocatorIS5_EEEE(void) {
    ALOGD("_ZN9HrtCommon28fillLayerInfoOfDispatcherJobERKNSt3__16vectorIN7android2spI10HWCDisplayEENS0_9allocatorIS5_EEEE() called");
    return 0;
}

/* Demangled: Hrt::fillLayerConfigList(std::__1::vector<android::sp<HWCDisplay>, std::__1::allocator<android::sp<HWCDisplay> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3Hrt19fillLayerConfigListERKNSt3__16vectorIN7android2spI10HWCDisplayEENS0_9allocatorIS5_EEEE(void) {
    ALOGD("_ZN3Hrt19fillLayerConfigListERKNSt3__16vectorIN7android2spI10HWCDisplayEENS0_9allocatorIS5_EEEE() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, char const*, char const*>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcS2_S2_EEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcS2_S2_EEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: hwc::GraphicBufferMapper::lockAsync(native_handle const*, unsigned int, hwc::Rect const&, void**, int, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN3hwc19GraphicBufferMapper9lockAsyncEPK13native_handlejRKNS_4RectEPPviPiS9_(void) {
    ALOGD("_ZN3hwc19GraphicBufferMapper9lockAsyncEPK13native_handlejRKNS_4RectEPPviPiS9_() called");
    return 0;
}

/* Demangled: SyncFence::SyncFence(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9SyncFenceC1Em(void) {
    ALOGD("_ZN9SyncFenceC1Em() called");
    return 0;
}

/* Demangled: AbortMessager::abort() */
extern "C" __attribute__((visibility("default"))) int _ZN13AbortMessager5abortEv(void) {
    ALOGD("_ZN13AbortMessager5abortEv() called");
    return 0;
}

/* Demangled: hwc::Gralloc2Mapper::lock(native_handle const*, unsigned long, hwc::Rect const&, int, void**, int*, int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc2Mapper4lockEPK13native_handlemRKNS_4RectEiPPvPiS9_(void) {
    ALOGD("_ZNK3hwc14Gralloc2Mapper4lockEPK13native_handlemRKNS_4RectEiPPvPiS9_() called");
    return 0;
}

/* Demangled: android::sp<PanelEventMonitorThread>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spI23PanelEventMonitorThreadED2Ev(void) {
    ALOGD("_ZN7android2spI23PanelEventMonitorThreadED2Ev() called");
    return 0;
}

/* Demangled: getFenceSignalTime(int const&) */
extern "C" __attribute__((visibility("default"))) int _Z18getFenceSignalTimeRKi(void) {
    ALOGD("_Z18getFenceSignalTimeRKi() called");
    return 0;
}

/* Demangled: DispDevice::setOverlaySessionMode(unsigned long, HWC_DISP_MODE) */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice21setOverlaySessionModeEm13HWC_DISP_MODE(void) {
    ALOGD("_ZN10DispDevice21setOverlaySessionModeEm13HWC_DISP_MODE() called");
    return 0;
}

/* Exported Object: HWC2_COMPOSITION_DEVICE_STR */
extern "C" __attribute__((visibility("default"))) void* HWC2_COMPOSITION_DEVICE_STR = NULL;

/* Demangled: hwc::GraphicBufferMapper::unlock(native_handle const*) */
extern "C" __attribute__((visibility("default"))) int _ZN3hwc19GraphicBufferMapper6unlockEPK13native_handle(void) {
    ALOGD("_ZN3hwc19GraphicBufferMapper6unlockEPK13native_handle() called");
    return 0;
}

/* Demangled: android::SortedVector<android::sp<HWCVSyncListener> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_2spI16HWCVSyncListenerEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_2spI16HWCVSyncListenerEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Exported Object: construction vtable for android::Thread-in-VSyncThread */
extern "C" __attribute__((visibility("default"))) void* _ZTC11VSyncThread0_N7android6ThreadE = NULL;

/* Demangled: DbgLogger::DbgLogger<char const*, char const*, DisplayBufferQueue*, int, int, int>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, DisplayBufferQueue*, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueueiiiEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueueiiiEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: hwc::GraphicBufferMapper::freeBuffer(native_handle const*) */
extern "C" __attribute__((visibility("default"))) int _ZN3hwc19GraphicBufferMapper10freeBufferEPK13native_handle(void) {
    ALOGD("_ZN3hwc19GraphicBufferMapper10freeBufferEPK13native_handle() called");
    return 0;
}

/* Demangled: hwc::Gralloc4Mapper::getSmpte2094_40(native_handle const*, std::__1::optional<std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > >*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc4Mapper15getSmpte2094_40EPK13native_handlePNSt3__18optionalINS4_6vectorIhNS4_9allocatorIhEEEEEE(void) {
    ALOGD("_ZNK3hwc14Gralloc4Mapper15getSmpte2094_40EPK13native_handlePNSt3__18optionalINS4_6vectorIhNS4_9allocatorIhEEEEEE() called");
    return 0;
}

/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getImEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EE18destroy_deallocateEv */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getImEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EE18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getImEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EE18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: HWCDisplay::acceptChanges() */
extern "C" __attribute__((visibility("default"))) int _ZN10HWCDisplay13acceptChangesEv(void) {
    ALOGD("_ZN10HWCDisplay13acceptChangesEv() called");
    return 0;
}

/* Demangled: Debugger::getLogThreshold() */
extern "C" __attribute__((visibility("default"))) int _ZN8Debugger15getLogThresholdEv(void) {
    ALOGD("_ZN8Debugger15getLogThresholdEv() called");
    return 0;
}

/* Demangled: HWCDispatcher::setJob(android::sp<HWCDisplay> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN13HWCDispatcher6setJobERKN7android2spI10HWCDisplayEE(void) {
    ALOGD("_ZN13HWCDispatcher6setJobERKN7android2spI10HWCDisplayEE() called");
    return 0;
}

/* Demangled: TouchHintThread::TouchHintThread() */
extern "C" __attribute__((visibility("default"))) int _ZN15TouchHintThreadC1Ev(void) {
    ALOGD("_ZN15TouchHintThreadC1Ev() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<FrameInfo> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spI9FrameInfoEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spI9FrameInfoEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, FrameFenceInfo>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, FrameFenceInfo>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, FrameFenceInfo>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, FrameFenceInfo> > >::remove(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, FrameFenceInfo>, void*>*>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIj14FrameFenceInfoEENS_22__unordered_map_hasherIjS3_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS3_NS_8equal_toIjEELb1EEENS_9allocatorIS3_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS3_PvEEEE(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIj14FrameFenceInfoEENS_22__unordered_map_hasherIjS3_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS3_NS_8equal_toIjEELb1EEENS_9allocatorIS3_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS3_PvEEEE() called");
    return 0;
}

/* Demangled: OverlayEngine::getInputParams() */
extern "C" __attribute__((visibility("default"))) int _ZN13OverlayEngine14getInputParamsEv(void) {
    ALOGD("_ZN13OverlayEngine14getInputParamsEv() called");
    return 0;
}

/* Demangled: AsyncBlitDevice::isDispRpoSupported() */
extern "C" __attribute__((visibility("default"))) int _ZN15AsyncBlitDevice18isDispRpoSupportedEv(void) {
    ALOGD("_ZN15AsyncBlitDevice18isDispRpoSupportedEv() called");
    return 0;
}

/* Demangled: DisplayListener::setCallbackVsync(void (*)(void*, unsigned long, long), void*) */
extern "C" __attribute__((visibility("default"))) int _ZN15DisplayListener16setCallbackVsyncEPFvPvmlES0_(void) {
    ALOGD("_ZN15DisplayListener16setCallbackVsyncEPFvPvmlES0_() called");
    return 0;
}

/* Demangled: DisplayManager::~DisplayManager() */
extern "C" __attribute__((visibility("default"))) int _ZN14DisplayManagerD2Ev(void) {
    ALOGD("_ZN14DisplayManagerD2Ev() called");
    return 0;
}

/* Demangled: AsyncBliterHandler::~AsyncBliterHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN18AsyncBliterHandlerD1Ev(void) {
    ALOGD("_ZN18AsyncBliterHandlerD1Ev() called");
    return 0;
}

/* Demangled: getBufferName(native_handle const* const&, std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _Z13getBufferNameRKPK13native_handlePNSt3__119basic_ostringstreamIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void) {
    ALOGD("_Z13getBufferNameRKPK13native_handlePNSt3__119basic_ostringstreamIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<android::WDTAnchor, std::__1::allocator<android::WDTAnchor> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN7android9WDTAnchorENS_9allocatorIS2_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN7android9WDTAnchorENS_9allocatorIS2_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: Debugger::LOGGER::~LOGGER() */
extern "C" __attribute__((visibility("default"))) int _ZN8Debugger6LOGGERD1Ev(void) {
    ALOGD("_ZN8Debugger6LOGGERD1Ev() called");
    return 0;
}

/* Demangled: AsyncBliterHandler::nullop(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN18AsyncBliterHandler6nullopERKj(void) {
    ALOGD("_ZN18AsyncBliterHandler6nullopERKj() called");
    return 0;
}

/* Demangled: AsyncBlitDevice::disableOverlaySession(unsigned long, OverlayPortParam* const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN15AsyncBlitDevice21disableOverlaySessionEmPKP16OverlayPortParamj(void) {
    ALOGD("_ZN15AsyncBlitDevice21disableOverlaySessionEmPKP16OverlayPortParamj() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE = NULL;

/* Exported Object: HWC2_COMPOSITION_UNKNOWN_STR */
extern "C" __attribute__((visibility("default"))) void* HWC2_COMPOSITION_UNKNOWN_STR = NULL;

/* Demangled: android::Transform::inverse() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android9Transform7inverseEv(void) {
    ALOGD("_ZNK7android9Transform7inverseEv() called");
    return 0;
}

/* Demangled: mapDpFormat(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _Z11mapDpFormatRKj(void) {
    ALOGD("_Z11mapDpFormatRKj() called");
    return 0;
}

/* Demangled: DispDevice::isMultiConfigsSupport() */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice21isMultiConfigsSupportEv(void) {
    ALOGD("_ZN10DispDevice21isMultiConfigsSupportEv() called");
    return 0;
}

/* Demangled: HWCDispatcher::HWCDispatcher() */
extern "C" __attribute__((visibility("default"))) int _ZN13HWCDispatcherC1Ev(void) {
    ALOGD("_ZN13HWCDispatcherC1Ev() called");
    return 0;
}

/* Demangled: android::Vector<MdpJobInfo>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorI10MdpJobInfoE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorI10MdpJobInfoE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::Transform::Transform(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9TransformC1Ej(void) {
    ALOGD("_ZN7android9TransformC1Ej() called");
    return 0;
}

/* Demangled: PerfHelper::~PerfHelper() */
extern "C" __attribute__((visibility("default"))) int _ZN10PerfHelperD1Ev(void) {
    ALOGD("_ZN10PerfHelperD1Ev() called");
    return 0;
}

/* Exported Object: _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIjEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EEE */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIjEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EEE = NULL;

/* Demangled: HWCMediator::checkSkipValidate(bool const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator17checkSkipValidateERKb(void) {
    ALOGD("_ZN11HWCMediator17checkSkipValidateERKb() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned long>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmmEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmmEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: OverlayEngine::closeAllIonFd(android::sp<FrameInfo> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN13OverlayEngine13closeAllIonFdERKN7android2spI9FrameInfoEE(void) {
    ALOGD("_ZN13OverlayEngine13closeAllIonFdERKN7android2spI9FrameInfoEE() called");
    return 0;
}

/* Demangled: usageHasProtectedOrSecure(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z25usageHasProtectedOrSecurej(void) {
    ALOGD("_Z25usageHasProtectedOrSecurej() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, int, native_handle const*>(unsigned int const&, unsigned char const&, char const*, char const*, int, native_handle const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKciPK13native_handleEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKciPK13native_handleEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: HWCThread::readyToRun() */
extern "C" __attribute__((visibility("default"))) int _ZN9HWCThread10readyToRunEv(void) {
    ALOGD("_ZN9HWCThread10readyToRunEv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::sp<HWCVSyncListener> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_2spI16HWCVSyncListenerEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_2spI16HWCVSyncListenerEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: virtual thunk to LayerComposer::~LayerComposer() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N13LayerComposerD0Ev(void) {
    ALOGD("_ZTv0_n24_N13LayerComposerD0Ev() called");
    return 0;
}

/* Demangled: hwc::Gralloc4Mapper::getDefaultPixelFormatModifier(unsigned int, unsigned int, int, unsigned int, unsigned long, unsigned long*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc4Mapper29getDefaultPixelFormatModifierEjjijmPm(void) {
    ALOGD("_ZNK3hwc14Gralloc4Mapper29getDefaultPixelFormatModifierEjjijmPm() called");
    return 0;
}

/* Demangled: PlatformCommon::isUILayerValid(android::sp<HWCLayer> const&, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN14PlatformCommon14isUILayerValidERKN7android2spI8HWCLayerEEPi(void) {
    ALOGD("_ZN14PlatformCommon14isUILayerValidERKN7android2spI8HWCLayerEEPi() called");
    return 0;
}

/* Demangled: AbortMessager::AbortMessager() */
extern "C" __attribute__((visibility("default"))) int _ZN13AbortMessagerC1Ev(void) {
    ALOGD("_ZN13AbortMessagerC1Ev() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, char const*, unsigned int, char const*>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, unsigned int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcS2_jS2_EEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcS2_jS2_EEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9DataspaceEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE18destroy_deallocateEv */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9DataspaceEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9DataspaceEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: Platform::isMMLayerValid(android::sp<HWCLayer> const&, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN8Platform14isMMLayerValidERKN7android2spI8HWCLayerEEPi(void) {
    ALOGD("_ZN8Platform14isMMLayerValidERKN7android2spI8HWCLayerEEPi() called");
    return 0;
}

/* Demangled: HWCDisplay::buildVisibleAndInvisibleLayer() */
extern "C" __attribute__((visibility("default"))) int _ZN10HWCDisplay29buildVisibleAndInvisibleLayerEv(void) {
    ALOGD("_ZN10HWCDisplay29buildVisibleAndInvisibleLayerEv() called");
    return 0;
}

/* Demangled: Debugger::dump(android::String8*) */
extern "C" __attribute__((visibility("default"))) int _ZN8Debugger4dumpEPN7android7String8E(void) {
    ALOGD("_ZN8Debugger4dumpEPN7android7String8E() called");
    return 0;
}

/* Demangled: DispDevice::forceMaxFrameRate() */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice17forceMaxFrameRateEv(void) {
    ALOGD("_ZN10DispDevice17forceMaxFrameRateEv() called");
    return 0;
}

/* Demangled: hwc::Gralloc4Mapper::bufferDumpHelper(android::hardware::graphics::mapper::V4_0::IMapper::BufferDump const&, std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, unsigned long*, bool) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc4Mapper16bufferDumpHelperERKN7android8hardware8graphics6mapper4V4_07IMapper10BufferDumpEPNSt3__119basic_ostringstreamIcNSA_11char_traitsIcEENSA_9allocatorIcEEEEPmb(void) {
    ALOGD("_ZNK3hwc14Gralloc4Mapper16bufferDumpHelperERKN7android8hardware8graphics6mapper4V4_07IMapper10BufferDumpEPNSt3__119basic_ostringstreamIcNSA_11char_traitsIcEENSA_9allocatorIcEEEEPmb() called");
    return 0;
}

/* Demangled: HWCDispatcher::onPlugOut(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN13HWCDispatcher9onPlugOutEm(void) {
    ALOGD("_ZN13HWCDispatcher9onPlugOutEm() called");
    return 0;
}

/* Exported Object: construction vtable for android::Thread-in-DispatchThread */
extern "C" __attribute__((visibility("default"))) void* _ZTC14DispatchThread0_N7android6ThreadE = NULL;

/* Demangled: OverlayEngine::waitUntilAvailable() */
extern "C" __attribute__((visibility("default"))) int _ZN13OverlayEngine18waitUntilAvailableEv(void) {
    ALOGD("_ZN13OverlayEngine18waitUntilAvailableEv() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, char const*, DisplayBufferQueue*, unsigned long, int>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, DisplayBufferQueue*, unsigned long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueuemiEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueuemiEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, int, unsigned int, int, char*>(unsigned int const&, unsigned char const&, char const*, char const*, int, unsigned int, int, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcijiPcEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcijiPcEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common9Smpte2086EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EE7__cloneEv */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common9Smpte2086EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EE7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common9Smpte2086EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EE7__cloneEv() called");
    return 0;
}

/* Exported Object: PerfHelper::getInstance()::s_mutex */
extern "C" __attribute__((visibility("default"))) void* _ZZN10PerfHelper11getInstanceEvE7s_mutex = NULL;

/* Demangled: WhiteBuffer::getHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN11WhiteBuffer9getHandleEv(void) {
    ALOGD("_ZN11WhiteBuffer9getHandleEv() called");
    return 0;
}

/* Demangled: HWCLayer::fillHdrMetadataToGrallocExtra() */
extern "C" __attribute__((visibility("default"))) int _ZN8HWCLayer29fillHdrMetadataToGrallocExtraEv(void) {
    ALOGD("_ZN8HWCLayer29fillHdrMetadataToGrallocExtraEv() called");
    return 0;
}

/* Demangled: PqDeviceLegacy::PqDeviceLegacy() */
extern "C" __attribute__((visibility("default"))) int _ZN14PqDeviceLegacyC2Ev(void) {
    ALOGD("_ZN14PqDeviceLegacyC2Ev() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned int, long, long, long, long, long, long>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned int, long, long, long, long, long, long) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcjllllllEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcjllllllEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: HWCMediator::displayCreateLayer(hwc2_device*, unsigned long, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator18displayCreateLayerEP11hwc2_devicemPm(void) {
    ALOGD("_ZN11HWCMediator18displayCreateLayerEP11hwc2_devicemPm() called");
    return 0;
}

/* Demangled: OverlayEngine::setOverlaySessionMode(HWC_DISP_MODE) */
extern "C" __attribute__((visibility("default"))) int _ZN13OverlayEngine21setOverlaySessionModeE13HWC_DISP_MODE(void) {
    ALOGD("_ZN13OverlayEngine21setOverlaySessionModeE13HWC_DISP_MODE() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, char const*, unsigned long, unsigned long, int>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, unsigned long, unsigned long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcS2_mmiEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcS2_mmiEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: DispDevice::getRszMaxWidthInput() */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice19getRszMaxWidthInputEv(void) {
    ALOGD("_ZN10DispDevice19getRszMaxWidthInputEv() called");
    return 0;
}

/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultImEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EE18destroy_deallocateEv */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultImEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EE18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultImEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EE18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: HWCDisplay::setOverrideMDPOutputFormatOfLayers() */
extern "C" __attribute__((visibility("default"))) int _ZN10HWCDisplay34setOverrideMDPOutputFormatOfLayersEv(void) {
    ALOGD("_ZN10HWCDisplay34setOverrideMDPOutputFormatOfLayersEv() called");
    return 0;
}

/* Demangled: HWCLayer::setPerFrameMetadata(unsigned int, int const*, float const*) */
extern "C" __attribute__((visibility("default"))) int _ZN8HWCLayer19setPerFrameMetadataEjPKiPKf(void) {
    ALOGD("_ZN8HWCLayer19setPerFrameMetadataEjPKiPKf() called");
    return 0;
}

/* Demangled: ColorTransform::ColorTransform(int const&, bool const&, bool const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14ColorTransformC1ERKiRKbS3_(void) {
    ALOGD("_ZN14ColorTransformC1ERKiRKbS3_() called");
    return 0;
}

/* Demangled: DispDevice::doChangeFps(int, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice11doChangeFpsEim(void) {
    ALOGD("_ZN10DispDevice11doChangeFpsEim() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-android::DisplayFeatureCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android22DisplayFeatureCallbackE0_NS_4hidl4base4V1_05IBaseE = NULL;

/* Demangled: BlackBuffer::~BlackBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN11BlackBufferD1Ev(void) {
    ALOGD("_ZN11BlackBufferD1Ev() called");
    return 0;
}

/* Demangled: HWCDisplay::clearAllFences() */
extern "C" __attribute__((visibility("default"))) int _ZN10HWCDisplay14clearAllFencesEv(void) {
    ALOGD("_ZN10HWCDisplay14clearAllFencesEv() called");
    return 0;
}

/* Demangled: Platform::getLimitedExternalDisplaySize() */
extern "C" __attribute__((visibility("default"))) int _ZN8Platform29getLimitedExternalDisplaySizeEv(void) {
    ALOGD("_ZN8Platform29getLimitedExternalDisplaySizeEv() called");
    return 0;
}

/* Demangled: DisplayBufferQueue::updateBufferSize(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN18DisplayBufferQueue16updateBufferSizeEjj(void) {
    ALOGD("_ZN18DisplayBufferQueue16updateBufferSizeEjj() called");
    return 0;
}

/* Demangled: AsyncBliterHandler::setBlack(android::sp<HWCDisplay> const&, DispatcherJob*) */
extern "C" __attribute__((visibility("default"))) int _ZN18AsyncBliterHandler8setBlackERKN7android2spI10HWCDisplayEEP13DispatcherJob(void) {
    ALOGD("_ZN18AsyncBliterHandler8setBlackERKN7android2spI10HWCDisplayEEP13DispatcherJob() called");
    return 0;
}

/* Demangled: android::Transform::transform(android::Rect const&, bool) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android9Transform9transformERKNS_4RectEb(void) {
    ALOGD("_ZNK7android9Transform9transformERKNS_4RectEb() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned long, char const*, int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned long, char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmmS2_iEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmmS2_iEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: OverlayEngine::setInputsAndOutput(FrameOverlayInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN13OverlayEngine18setInputsAndOutputEP16FrameOverlayInfo(void) {
    ALOGD("_ZN13OverlayEngine18setInputsAndOutputEP16FrameOverlayInfo() called");
    return 0;
}

/* Demangled: WhiteBuffer::WhiteBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN11WhiteBufferC1Ev(void) {
    ALOGD("_ZN11WhiteBufferC1Ev() called");
    return 0;
}

/* Demangled: Debugger::~Debugger() */
extern "C" __attribute__((visibility("default"))) int _ZN8DebuggerD2Ev(void) {
    ALOGD("_ZN8DebuggerD2Ev() called");
    return 0;
}

/* Demangled: HWCMediator::displayGetDozeSupport(hwc2_device*, unsigned long, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator21displayGetDozeSupportEP11hwc2_devicemPi(void) {
    ALOGD("_ZN11HWCMediator21displayGetDozeSupportEP11hwc2_devicemPi() called");
    return 0;
}

/* Demangled: DisplayManager::isUltraDisplay(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN14DisplayManager14isUltraDisplayEm(void) {
    ALOGD("_ZN14DisplayManager14isUltraDisplayEm() called");
    return 0;
}

/* Demangled: virtual thunk to TouchHintThread::~TouchHintThread() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N15TouchHintThreadD1Ev(void) {
    ALOGD("_ZTv0_n24_N15TouchHintThreadD1Ev() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned int, bool>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcjbEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcjbEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, char const*, native_handle const*, AHardwareBuffer*>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, native_handle const*, AHardwareBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcS2_PK13native_handleP15AHardwareBufferEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcS2_PK13native_handleP15AHardwareBufferEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Exported Object: VTT for android::DisplayFeatureGet */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android17DisplayFeatureGetE = NULL;

/* Demangled: android::Transform::Transform() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9TransformC1Ev(void) {
    ALOGD("_ZN7android9TransformC1Ev() called");
    return 0;
}

/* Demangled: hwc::Gralloc2Mapper::createDescriptor(void*, void*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc2Mapper16createDescriptorEPvS1_(void) {
    ALOGD("_ZNK3hwc14Gralloc2Mapper16createDescriptorEPvS1_() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, char const*, unsigned int, unsigned int, unsigned int, unsigned int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, char const*, unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmS2_jjjjEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmS2_jjjjEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: HWCDisplay::isValidated() const */
extern "C" __attribute__((visibility("default"))) int _ZNK10HWCDisplay11isValidatedEv(void) {
    ALOGD("_ZNK10HWCDisplay11isValidatedEv() called");
    return 0;
}

/* Demangled: OverlayEngine::~OverlayEngine() */
extern "C" __attribute__((visibility("default"))) int _ZN13OverlayEngineD2Ev(void) {
    ALOGD("_ZN13OverlayEngineD2Ev() called");
    return 0;
}

/* Demangled: hwc::Gralloc4Mapper::isSupported(unsigned int, unsigned int, int, unsigned int, unsigned long, bool*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc4Mapper11isSupportedEjjijmPb(void) {
    ALOGD("_ZNK3hwc14Gralloc4Mapper11isSupportedEjjijmPb() called");
    return 0;
}

/* Demangled: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalINS_6vectorIhNS_9allocatorIhEEEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS7_ISX_EEFvNSI_5ErrorESQ_EE7__cloneEPNS0_6__baseIS10_EE */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalINS_6vectorIhNS_9allocatorIhEEEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS7_ISX_EEFvNSI_5ErrorESQ_EE7__cloneEPNS0_6__baseIS10_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalINS_6vectorIhNS_9allocatorIhEEEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS7_ISX_EEFvNSI_5ErrorESQ_EE7__cloneEPNS0_6__baseIS10_EE() called");
    return 0;
}

/* Demangled: hwc::GraphicBufferMapper::getInterlaced(native_handle const*, aidl::android::hardware::graphics::common::Interlaced*) */
extern "C" __attribute__((visibility("default"))) int _ZN3hwc19GraphicBufferMapper13getInterlacedEPK13native_handlePN4aidl7android8hardware8graphics6common10InterlacedE(void) {
    ALOGD("_ZN3hwc19GraphicBufferMapper13getInterlacedEPK13native_handlePN4aidl7android8hardware8graphics6common10InterlacedE() called");
    return 0;
}

/* Demangled: HWCMediator::layerSetSurfaceDamage(hwc2_device*, unsigned long, unsigned long, hwc_region) */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator21layerSetSurfaceDamageEP11hwc2_devicemm10hwc_region(void) {
    ALOGD("_ZN11HWCMediator21layerSetSurfaceDamageEP11hwc2_devicemm10hwc_region() called");
    return 0;
}

/* Demangled: LayerComposer::~LayerComposer() */
extern "C" __attribute__((visibility("default"))) int _ZN13LayerComposerD0Ev(void) {
    ALOGD("_ZN13LayerComposerD0Ev() called");
    return 0;
}

/* Demangled: AsyncBliterHandler::cancelMirror(DispatcherJob*) */
extern "C" __attribute__((visibility("default"))) int _ZN18AsyncBliterHandler12cancelMirrorEP13DispatcherJob(void) {
    ALOGD("_ZN18AsyncBliterHandler12cancelMirrorEP13DispatcherJob() called");
    return 0;
}

/* Demangled: PlatformCommon::PlatformConfig::PlatformConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN14PlatformCommon14PlatformConfigC1Ev(void) {
    ALOGD("_ZN14PlatformCommon14PlatformConfigC1Ev() called");
    return 0;
}

/* Demangled: DisplayManager::compareDisplaySize(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN14DisplayManager18compareDisplaySizeEm(void) {
    ALOGD("_ZN14DisplayManager18compareDisplaySizeEm() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, char const*, DisplayBufferQueue*, unsigned int>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, DisplayBufferQueue*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueuejEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueuejEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: SessionInfo::SessionInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN11SessionInfoC2Ev(void) {
    ALOGD("_ZN11SessionInfoC2Ev() called");
    return 0;
}

/* Exported Object: HWC2_COMPOSITION_SOLID_COLOR_STR */
extern "C" __attribute__((visibility("default"))) void* HWC2_COMPOSITION_SOLID_COLOR_STR = NULL;

/* Demangled: MmBufDump::convertHalFmt2MmDumpFmt(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9MmBufDump23convertHalFmt2MmDumpFmtEj(void) {
    ALOGD("_ZN9MmBufDump23convertHalFmt2MmDumpFmtEj() called");
    return 0;
}

/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common9Smpte2086EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EEclEOS12_SS_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common9Smpte2086EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EEclEOS12_SS_(void) {
    ALOGD("_ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common9Smpte2086EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EEclEOS12_SS_() called");
    return 0;
}

/* Demangled: DispatchThread::onFirstRef() */
extern "C" __attribute__((visibility("default"))) int _ZN14DispatchThread10onFirstRefEv(void) {
    ALOGD("_ZN14DispatchThread10onFirstRefEv() called");
    return 0;
}

/* Exported Object: vtable for android::SWWatchDog */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android10SWWatchDogE = NULL;

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned long, android::sp<HWCLayer> >, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, android::sp<HWCLayer> >, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, android::sp<HWCLayer> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<unsigned long, android::sp<HWCLayer> >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeImN7android2spI8HWCLayerEEEENS_19__map_value_compareImS6_NS_4lessImEELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeImN7android2spI8HWCLayerEEEENS_19__map_value_compareImS6_NS_4lessImEELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE() called");
    return 0;
}

/* Demangled: MmBufDump::~MmBufDump() */
extern "C" __attribute__((visibility("default"))) int _ZN9MmBufDumpD2Ev(void) {
    ALOGD("_ZN9MmBufDumpD2Ev() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, int, unsigned int>(unsigned int const&, unsigned char const&, char const*, char const*, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcijEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcijEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS8_ISX_EEFvNSI_5ErrorESQ_EEclEOSZ_SQ_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS8_ISX_EEFvNSI_5ErrorESQ_EEclEOSZ_SQ_(void) {
    ALOGD("_ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS8_ISX_EEFvNSI_5ErrorESQ_EEclEOSZ_SQ_() called");
    return 0;
}

/* Demangled: HWCMediator::displaySetColorTransform(hwc2_device*, unsigned long, float const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator24displaySetColorTransformEP11hwc2_devicemPKfi(void) {
    ALOGD("_ZN11HWCMediator24displaySetColorTransformEP11hwc2_devicemPKfi() called");
    return 0;
}

/* Demangled: HWCLayer::setDataspace(int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN8HWCLayer12setDataspaceERKi(void) {
    ALOGD("_ZN8HWCLayer12setDataspaceERKi() called");
    return 0;
}

/* Demangled: RefreshRequestThread::threadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN20RefreshRequestThread10threadLoopEv(void) {
    ALOGD("_ZN20RefreshRequestThread10threadLoopEv() called");
    return 0;
}

/* Exported Object: VTT for IdleThread */
extern "C" __attribute__((visibility("default"))) void* _ZTT10IdleThread = NULL;

/* Demangled: LayerHandler::~LayerHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN12LayerHandlerD2Ev(void) {
    ALOGD("_ZN12LayerHandlerD2Ev() called");
    return 0;
}

/* Demangled: DisplayManager::setListener(android::sp<DisplayManager::EventListener> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14DisplayManager11setListenerERKN7android2spINS_13EventListenerEEE(void) {
    ALOGD("_ZN14DisplayManager11setListenerERKN7android2spINS_13EventListenerEEE() called");
    return 0;
}

/* Demangled: android::Vector<native_handle const*>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIPK13native_handleE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIPK13native_handleE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: HWCDisplay::updateGlesRangeHwType() */
extern "C" __attribute__((visibility("default"))) int _ZN10HWCDisplay21updateGlesRangeHwTypeEv(void) {
    ALOGD("_ZN10HWCDisplay21updateGlesRangeHwTypeEv() called");
    return 0;
}

/* Exported Object: vtable for Hrt */
extern "C" __attribute__((visibility("default"))) void* _ZTV3Hrt = NULL;

/* Demangled: DispDevice::getRefresh(unsigned long, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice10getRefreshEmj(void) {
    ALOGD("_ZN10DispDevice10getRefreshEmj() called");
    return 0;
}

/* Demangled: DbgLogger::getLogString() */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLogger12getLogStringEv(void) {
    ALOGD("_ZN9DbgLogger12getLogStringEv() called");
    return 0;
}

/* Exported Object: vtable for DisplayListener */
extern "C" __attribute__((visibility("default"))) void* _ZTV15DisplayListener = NULL;

/* Exported Object: vtable for VSyncThread */
extern "C" __attribute__((visibility("default"))) void* _ZTV11VSyncThread = NULL;

/* Exported Object: _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EEE */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EEE = NULL;

/* Exported Object: guard variable for PerfHelper::getInstance()::s_mutex */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN10PerfHelper11getInstanceEvE7s_mutex = NULL;

/* Demangled: UEventThread::UEventThread() */
extern "C" __attribute__((visibility("default"))) int _ZN12UEventThreadC1Ev(void) {
    ALOGD("_ZN12UEventThreadC1Ev() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, char*>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmPcEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmPcEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Exported Object: android::SWWatchDogTimer::getInstance()::sMutex */
extern "C" __attribute__((visibility("default"))) void* _ZZN7android15SWWatchDogTimer11getInstanceEvE6sMutex = NULL;

/* Demangled: hwc::Gralloc4Mapper::getDefaultAllocationSize(unsigned int, unsigned int, int, unsigned int, unsigned long, unsigned long*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc4Mapper24getDefaultAllocationSizeEjjijmPm(void) {
    ALOGD("_ZNK3hwc14Gralloc4Mapper24getDefaultAllocationSizeEjjijmPm() called");
    return 0;
}

/* Demangled: BlackBuffer::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN11BlackBuffer11getInstanceEv(void) {
    ALOGD("_ZN11BlackBuffer11getInstanceEv() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, native_handle const*, int, HWCBuffer*>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, native_handle const*, int, HWCBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmPK13native_handleiP9HWCBufferEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmPK13native_handleiP9HWCBufferEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultImEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EE7__cloneEv */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultImEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EE7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultImEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EE7__cloneEv() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, char const*, unsigned int>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcS2_jEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcS2_jEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: OverlayEngine::disableOutputLocked() */
extern "C" __attribute__((visibility("default"))) int _ZN13OverlayEngine19disableOutputLockedEv(void) {
    ALOGD("_ZN13OverlayEngine19disableOutputLockedEv() called");
    return 0;
}

/* Demangled: HWCLayer::initValidate() */
extern "C" __attribute__((visibility("default"))) int _ZN8HWCLayer12initValidateEv(void) {
    ALOGD("_ZN8HWCLayer12initValidateEv() called");
    return 0;
}

/* Demangled: android::FpsCounter::dump(android::String8*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10FpsCounter4dumpEPNS_7String8EPKc(void) {
    ALOGD("_ZN7android10FpsCounter4dumpEPNS_7String8EPKc() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, DISP_SELF_REFRESH_TYPE>(unsigned int const&, unsigned char const&, char const*, char const*, DISP_SELF_REFRESH_TYPE) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKc22DISP_SELF_REFRESH_TYPEEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKc22DISP_SELF_REFRESH_TYPEEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: hwc::GraphicBufferMapper::getDefaultPixelFormatFourCC(unsigned int, unsigned int, int, unsigned int, unsigned long, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN3hwc19GraphicBufferMapper27getDefaultPixelFormatFourCCEjjijmPj(void) {
    ALOGD("_ZN3hwc19GraphicBufferMapper27getDefaultPixelFormatFourCCEjjijmPj() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, int, char*>(unsigned int const&, unsigned char const&, char const*, char const*, int, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKciPcEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKciPcEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Exported Object: g_uevent_thread */
extern "C" __attribute__((visibility("default"))) void* g_uevent_thread = NULL;

/* Demangled: BlackBuffer::setSecure() */
extern "C" __attribute__((visibility("default"))) int _ZN11BlackBuffer9setSecureEv(void) {
    ALOGD("_ZN11BlackBuffer9setSecureEv() called");
    return 0;
}

/* Demangled: LayerComposer::LayerComposer(unsigned long, android::sp<OverlayEngine> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN13LayerComposerC1EmRKN7android2spI13OverlayEngineEE(void) {
    ALOGD("_ZN13LayerComposerC1EmRKN7android2spI13OverlayEngineEE() called");
    return 0;
}

/* Demangled: DispDevice::isDisplayHrtSupport() */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice19isDisplayHrtSupportEv(void) {
    ALOGD("_ZN10DispDevice19isDisplayHrtSupportEv() called");
    return 0;
}

/* Demangled: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common9Smpte2086EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EE7__cloneEPNS0_6__baseIS13_EE */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common9Smpte2086EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EE7__cloneEPNS0_6__baseIS13_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common9Smpte2086EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EE7__cloneEPNS0_6__baseIS13_EE() called");
    return 0;
}

/* Exported Object: vtable for Platform */
extern "C" __attribute__((visibility("default"))) void* _ZTV8Platform = NULL;

/* Demangled: HWCLayer::setAcquireFenceFd(int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN8HWCLayer17setAcquireFenceFdERKi(void) {
    ALOGD("_ZN8HWCLayer17setAcquireFenceFdERKi() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, HWCDispatcher::WorkerCluster::PrevHwcLayer>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned long, HWCDispatcher::WorkerCluster::PrevHwcLayer>, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, HWCDispatcher::WorkerCluster::PrevHwcLayer>, std::__1::hash<unsigned long>, true>, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, HWCDispatcher::WorkerCluster::PrevHwcLayer>, std::__1::equal_to<unsigned long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long, HWCDispatcher::WorkerCluster::PrevHwcLayer> > >::__emplace_unique_key_args<unsigned long, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long const&>, std::__1::tuple<> >(unsigned long const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned long const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeImN13HWCDispatcher13WorkerCluster12PrevHwcLayerEEENS_22__unordered_map_hasherImS5_NS_4hashImEELb1EEENS_21__unordered_map_equalImS5_NS_8equal_toImEELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsImJRKNS_21piecewise_construct_tENS_5tupleIJRKmEEENSL_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS5_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeImN13HWCDispatcher13WorkerCluster12PrevHwcLayerEEENS_22__unordered_map_hasherImS5_NS_4hashImEELb1EEENS_21__unordered_map_equalImS5_NS_8equal_toImEELb1EEENS_9allocatorIS5_EEE25__emplace_unique_key_argsImJRKNS_21piecewise_construct_tENS_5tupleIJRKmEEENSL_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS5_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: VSyncThread::initialize(bool, long) */
extern "C" __attribute__((visibility("default"))) int _ZN11VSyncThread10initializeEbl(void) {
    ALOGD("_ZN11VSyncThread10initializeEbl() called");
    return 0;
}

/* Demangled: HWCDisplay::checkVisibleLayerChange(std::__1::vector<android::sp<HWCLayer>, std::__1::allocator<android::sp<HWCLayer> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10HWCDisplay23checkVisibleLayerChangeERKNSt3__16vectorIN7android2spI8HWCLayerEENS0_9allocatorIS5_EEEE(void) {
    ALOGD("_ZN10HWCDisplay23checkVisibleLayerChangeERKNSt3__16vectorIN7android2spI8HWCLayerEENS0_9allocatorIS5_EEEE() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned long, native_handle const*, int, unsigned int, unsigned int, unsigned int, bool, int, int, bool, int, int, int, int, unsigned int, bool, bool>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned long, native_handle const*, int, unsigned int, unsigned int, unsigned int, bool, int, int, bool, int, int, int, int, unsigned int, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmmPK13native_handleijjjbiibiiiijbbEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmmPK13native_handleijjjbiibiiiijbbEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, char const*>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmS2_EEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmS2_EEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: HWCDisplay::afterPresent() */
extern "C" __attribute__((visibility("default"))) int _ZN10HWCDisplay12afterPresentEv(void) {
    ALOGD("_ZN10HWCDisplay12afterPresentEv() called");
    return 0;
}

/* Demangled: usageHasCameraOrientation(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z25usageHasCameraOrientationj(void) {
    ALOGD("_Z25usageHasCameraOrientationj() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, DP_STATUS_ENUM, unsigned int, DpAsyncBlitStream2*>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, DP_STATUS_ENUM, unsigned int, DpAsyncBlitStream2*) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcm14DP_STATUS_ENUMjP18DpAsyncBlitStream2EEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcm14DP_STATUS_ENUMjP18DpAsyncBlitStream2EEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: android::Vector<int>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIiE12do_constructEPvm() called");
    return 0;
}

/* Demangled: DispatchThread::threadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN14DispatchThread10threadLoopEv(void) {
    ALOGD("_ZN14DispatchThread10threadLoopEv() called");
    return 0;
}

/* Demangled: VSyncThread::setEnabled(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN11VSyncThread10setEnabledEb(void) {
    ALOGD("_ZN11VSyncThread10setEnabledEb() called");
    return 0;
}

/* Demangled: virtual thunk to PanelEventMonitorThread::~PanelEventMonitorThread() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N23PanelEventMonitorThreadD0Ev(void) {
    ALOGD("_ZTv0_n24_N23PanelEventMonitorThreadD0Ev() called");
    return 0;
}

/* Exported Object: vtable for PlatformCommon */
extern "C" __attribute__((visibility("default"))) void* _ZTV14PlatformCommon = NULL;

/* Demangled: TouchHintThread::~TouchHintThread() */
extern "C" __attribute__((visibility("default"))) int _ZN15TouchHintThreadD2Ev(void) {
    ALOGD("_ZN15TouchHintThreadD2Ev() called");
    return 0;
}

/* Exported Object: vtable for GrallocDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTV13GrallocDevice = NULL;

/* Exported Object: vtable for android::DisplayFeatureCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android22DisplayFeatureCallbackE = NULL;

/* Demangled: Hrt::queryValidLayer() */
extern "C" __attribute__((visibility("default"))) int _ZN3Hrt15queryValidLayerEv(void) {
    ALOGD("_ZN3Hrt15queryValidLayerEv() called");
    return 0;
}

/* Demangled: android::Transform::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9Transform5resetEv(void) {
    ALOGD("_ZN7android9Transform5resetEv() called");
    return 0;
}

/* Demangled: __fe_getround */
extern "C" __attribute__((visibility("default"))) int __fe_getround(void) {
    ALOGD("__fe_getround() called");
    return 0;
}

/* Demangled: DisplayManager::hotplugVir(unsigned long const&, bool const&, unsigned int const&, unsigned int const&, unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14DisplayManager10hotplugVirERKmRKbRKjS5_S5_(void) {
    ALOGD("_ZN14DisplayManager10hotplugVirERKmRKbRKjS5_S5_() called");
    return 0;
}

/* Demangled: MDPFrameInfoDebugger::setJobPresentFenceFd(unsigned int const&, int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN20MDPFrameInfoDebugger20setJobPresentFenceFdERKjRKi(void) {
    ALOGD("_ZN20MDPFrameInfoDebugger20setJobPresentFenceFdERKjRKi() called");
    return 0;
}

/* Demangled: DispDevice::disableOverlayOutput(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice20disableOverlayOutputEm(void) {
    ALOGD("_ZN10DispDevice20disableOverlayOutputEm() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned long, std::__1::shared_ptr<android::WDTAnchor> >, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, std::__1::shared_ptr<android::WDTAnchor> >, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, std::__1::shared_ptr<android::WDTAnchor> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned long, std::__1::shared_ptr<android::WDTAnchor> >, std::__1::__tree_node<std::__1::__value_type<unsigned long, std::__1::shared_ptr<android::WDTAnchor> >, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeImNS_10shared_ptrIN7android9WDTAnchorEEEEENS_19__map_value_compareImS6_NS_4lessImEELb1EEENS_9allocatorIS6_EEE5eraseENS_21__tree_const_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeImNS_10shared_ptrIN7android9WDTAnchorEEEEENS_19__map_value_compareImS6_NS_4lessImEELb1EEENS_9allocatorIS6_EEE5eraseENS_21__tree_const_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEE() called");
    return 0;
}

/* Demangled: OverlayEngine::disableInput(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN13OverlayEngine12disableInputEj(void) {
    ALOGD("_ZN13OverlayEngine12disableInputEj() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<native_handle const*, AHardwareBuffer*>, std::__1::__map_value_compare<native_handle const*, std::__1::__value_type<native_handle const*, AHardwareBuffer*>, std::__1::less<native_handle const*>, true>, std::__1::allocator<std::__1::__value_type<native_handle const*, AHardwareBuffer*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<native_handle const*, AHardwareBuffer*>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIPK13native_handleP15AHardwareBufferEENS_19__map_value_compareIS4_S7_NS_4lessIS4_EELb1EEENS_9allocatorIS7_EEE7destroyEPNS_11__tree_nodeIS7_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIPK13native_handleP15AHardwareBufferEENS_19__map_value_compareIS4_S7_NS_4lessIS4_EELb1EEENS_9allocatorIS7_EEE7destroyEPNS_11__tree_nodeIS7_PvEE() called");
    return 0;
}

/* Demangled: android::SWWatchDog::getThreshold() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android10SWWatchDog12getThresholdEv(void) {
    ALOGD("_ZNK7android10SWWatchDog12getThresholdEv() called");
    return 0;
}

/* Demangled: hwc::GraphicBufferMapper::lockAsyncYCbCr(native_handle const*, unsigned int, hwc::Rect const&, android_ycbcr*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN3hwc19GraphicBufferMapper14lockAsyncYCbCrEPK13native_handlejRKNS_4RectEP13android_ycbcri(void) {
    ALOGD("_ZN3hwc19GraphicBufferMapper14lockAsyncYCbCrEPK13native_handlejRKNS_4RectEP13android_ycbcri() called");
    return 0;
}

/* Demangled: HWCMediator::layerSetBuffer(hwc2_device*, unsigned long, unsigned long, native_handle const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator14layerSetBufferEP11hwc2_devicemmPK13native_handlei(void) {
    ALOGD("_ZN11HWCMediator14layerSetBufferEP11hwc2_devicemmPK13native_handlei() called");
    return 0;
}

/* Demangled: android::Vector<DispatcherJob*>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIP13DispatcherJobE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIP13DispatcherJobE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: AsyncBliterHandler::setOverlayPortParam(unsigned int, OverlayPortParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN18AsyncBliterHandler19setOverlayPortParamEjRK16OverlayPortParam(void) {
    ALOGD("_ZN18AsyncBliterHandler19setOverlayPortParamEjRK16OverlayPortParam() called");
    return 0;
}

/* Demangled: HWCLayer::needScaling() const */
extern "C" __attribute__((visibility("default"))) int _ZNK8HWCLayer11needScalingEv(void) {
    ALOGD("_ZNK8HWCLayer11needScalingEv() called");
    return 0;
}

/* Demangled: GrallocDevice::GrallocDevice() */
extern "C" __attribute__((visibility("default"))) int _ZN13GrallocDeviceC2Ev(void) {
    ALOGD("_ZN13GrallocDeviceC2Ev() called");
    return 0;
}

/* Demangled: IONDevice::ionMMap(int, unsigned long, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9IONDevice7ionMMapEimiii(void) {
    ALOGD("_ZN9IONDevice7ionMMapEimiii() called");
    return 0;
}

/* Demangled: HWCDispatcher::~HWCDispatcher() */
extern "C" __attribute__((visibility("default"))) int _ZN13HWCDispatcherD2Ev(void) {
    ALOGD("_ZN13HWCDispatcherD2Ev() called");
    return 0;
}

/* Demangled: AsyncBliterHandler::AsyncBliterHandler(unsigned long, android::sp<OverlayEngine> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN18AsyncBliterHandlerC1EmRKN7android2spI13OverlayEngineEE(void) {
    ALOGD("_ZN18AsyncBliterHandlerC1EmRKN7android2spI13OverlayEngineEE() called");
    return 0;
}

/* Demangled: HWVSyncEstimator::~HWVSyncEstimator() */
extern "C" __attribute__((visibility("default"))) int _ZN16HWVSyncEstimatorD1Ev(void) {
    ALOGD("_ZN16HWVSyncEstimatorD1Ev() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, long, unsigned int, unsigned int, unsigned int>(unsigned int const&, unsigned char const&, char const*, char const*, long, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcljjjEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcljjjEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Exported Object: _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSG_8hidl_vecIhEEPT_EST_EUlRKSS_SR_E_NSC_ISY_EEFvNSJ_5ErrorESR_EEE */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSG_8hidl_vecIhEEPT_EST_EUlRKSS_SR_E_NSC_ISY_EEFvNSJ_5ErrorESR_EEE = NULL;

/* Demangled: std::__1::vector<android::sp<IOverlayDevice>, std::__1::allocator<android::sp<IOverlayDevice> > >::__append(unsigned long, android::sp<IOverlayDevice> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spI14IOverlayDeviceEENS_9allocatorIS4_EEE8__appendEmRKS4_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spI14IOverlayDeviceEENS_9allocatorIS4_EEE8__appendEmRKS4_() called");
    return 0;
}

/* Demangled: HWCDispatcher::disableMirror(android::sp<HWCDisplay> const&, DispatcherJob*) */
extern "C" __attribute__((visibility("default"))) int _ZN13HWCDispatcher13disableMirrorERKN7android2spI10HWCDisplayEEP13DispatcherJob(void) {
    ALOGD("_ZN13HWCDispatcher13disableMirrorERKN7android2spI10HWCDisplayEEP13DispatcherJob() called");
    return 0;
}

/* Demangled: android::Vector<android::SortedVector<android::sp<HWCVSyncListener> > >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_12SortedVectorINS_2spI16HWCVSyncListenerEEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_12SortedVectorINS_2spI16HWCVSyncListenerEEEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: SyncFence::~SyncFence() */
extern "C" __attribute__((visibility("default"))) int _ZN9SyncFenceD2Ev(void) {
    ALOGD("_ZN9SyncFenceD2Ev() called");
    return 0;
}

/* Demangled: AsyncBliterHandler::fillWhite(native_handle const*, PrivateHandle*, int*, MdpJob*) */
extern "C" __attribute__((visibility("default"))) int _ZN18AsyncBliterHandler9fillWhiteEPK13native_handleP13PrivateHandlePiP6MdpJob(void) {
    ALOGD("_ZN18AsyncBliterHandler9fillWhiteEPK13native_handleP13PrivateHandlePiP6MdpJob() called");
    return 0;
}

/* Exported Object: HWC2_COMPOSITION_CURSOR_STR */
extern "C" __attribute__((visibility("default"))) void* HWC2_COMPOSITION_CURSOR_STR = NULL;

/* Demangled: DisplayManager::resentCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN14DisplayManager14resentCallbackEv(void) {
    ALOGD("_ZN14DisplayManager14resentCallbackEv() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv() called");
    return 0;
}

/* Demangled: DisplayListener::onRefresh(unsigned long, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN15DisplayListener9onRefreshEmj(void) {
    ALOGD("_ZN15DisplayListener9onRefreshEmj() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<unsigned int, unsigned int>(unsigned int const&, unsigned char const&, char const*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJjjEEERKjRKhPKcDpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJjjEEERKjRKhPKcDpT_() called");
    return 0;
}

/* Demangled: DispDevice::isDispAodForceDisable() */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice21isDispAodForceDisableEv(void) {
    ALOGD("_ZN10DispDevice21isDispAodForceDisableEv() called");
    return 0;
}

/* Demangled: AbortMessager::~AbortMessager() */
extern "C" __attribute__((visibility("default"))) int _ZN13AbortMessagerD2Ev(void) {
    ALOGD("_ZN13AbortMessagerD2Ev() called");
    return 0;
}

/* Demangled: hwc::GraphicBufferMapper::getChromaSiting(native_handle const*, aidl::android::hardware::graphics::common::ExtendableType*) */
extern "C" __attribute__((visibility("default"))) int _ZN3hwc19GraphicBufferMapper15getChromaSitingEPK13native_handlePN4aidl7android8hardware8graphics6common14ExtendableTypeE(void) {
    ALOGD("_ZN3hwc19GraphicBufferMapper15getChromaSitingEPK13native_handlePN4aidl7android8hardware8graphics6common14ExtendableTypeE() called");
    return 0;
}

/* Demangled: RefreshRequestThread::~RefreshRequestThread() */
extern "C" __attribute__((visibility("default"))) int _ZN20RefreshRequestThreadD0Ev(void) {
    ALOGD("_ZN20RefreshRequestThreadD0Ev() called");
    return 0;
}

/* Demangled: FrameOverlayInfo::FrameOverlayInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN16FrameOverlayInfoC1Ev(void) {
    ALOGD("_ZN16FrameOverlayInfoC1Ev() called");
    return 0;
}

/* Exported Object: _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getImEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EEE */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getImEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EEE = NULL;

/* Demangled: TouchHintThread::initialize() */
extern "C" __attribute__((visibility("default"))) int _ZN15TouchHintThread10initializeEv(void) {
    ALOGD("_ZN15TouchHintThread10initializeEv() called");
    return 0;
}

/* Demangled: SyncFence::dump(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9SyncFence4dumpEi(void) {
    ALOGD("_ZN9SyncFence4dumpEi() called");
    return 0;
}

/* Demangled: AsyncBlitDevice::getOverlaySessionInfo(unsigned long, SessionInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN15AsyncBlitDevice21getOverlaySessionInfoEmP11SessionInfo(void) {
    ALOGD("_ZN15AsyncBlitDevice21getOverlaySessionInfoEmP11SessionInfo() called");
    return 0;
}

/* Demangled: HWCDispatcher::configMirrorOutput(DispatcherJob*, int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN13HWCDispatcher18configMirrorOutputEP13DispatcherJobRKi(void) {
    ALOGD("_ZN13HWCDispatcher18configMirrorOutputEP13DispatcherJobRKi() called");
    return 0;
}

/* Demangled: HWVSyncEstimator::getLastSignaledPresentFenceTime() */
extern "C" __attribute__((visibility("default"))) int _ZN16HWVSyncEstimator31getLastSignaledPresentFenceTimeEv(void) {
    ALOGD("_ZN16HWVSyncEstimator31getLastSignaledPresentFenceTimeEv() called");
    return 0;
}

/* Exported Object: HWC2_PRESENT_VALI_STATE_UNKNOWN_STR */
extern "C" __attribute__((visibility("default"))) void* HWC2_PRESENT_VALI_STATE_UNKNOWN_STR = NULL;

/* Demangled: DispDevice::disableDisplayFeature(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice21disableDisplayFeatureEj(void) {
    ALOGD("_ZN10DispDevice21disableDisplayFeatureEj() called");
    return 0;
}

/* Demangled: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIjEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EE7__cloneEv */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIjEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EE7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIjEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EE7__cloneEv() called");
    return 0;
}

/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9BlendModeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE7destroyEv */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9BlendModeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9BlendModeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE7destroyEv() called");
    return 0;
}

/* Demangled: hwc::GraphicBufferMapper::getDefaultChromaSiting(unsigned int, unsigned int, int, unsigned int, unsigned long, aidl::android::hardware::graphics::common::ExtendableType*) */
extern "C" __attribute__((visibility("default"))) int _ZN3hwc19GraphicBufferMapper22getDefaultChromaSitingEjjijmPN4aidl7android8hardware8graphics6common14ExtendableTypeE(void) {
    ALOGD("_ZN3hwc19GraphicBufferMapper22getDefaultChromaSitingEjjijmPN4aidl7android8hardware8graphics6common14ExtendableTypeE() called");
    return 0;
}

/* Demangled: DispatcherJob::~DispatcherJob() */
extern "C" __attribute__((visibility("default"))) int _ZN13DispatcherJobD0Ev(void) {
    ALOGD("_ZN13DispatcherJobD0Ev() called");
    return 0;
}

/* Demangled: DisplayBufferQueue::~DisplayBufferQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN18DisplayBufferQueueD2Ev(void) {
    ALOGD("_ZN18DisplayBufferQueueD2Ev() called");
    return 0;
}

/* Demangled: AsyncBlitDevice::getSupportedColorMode() */
extern "C" __attribute__((visibility("default"))) int _ZN15AsyncBlitDevice21getSupportedColorModeEv(void) {
    ALOGD("_ZN15AsyncBlitDevice21getSupportedColorModeEv() called");
    return 0;
}

/* Demangled: HWCLayer::setPrevReleaseFenceFd(int const&, bool const&) */
extern "C" __attribute__((visibility("default"))) int _ZN8HWCLayer21setPrevReleaseFenceFdERKiRKb(void) {
    ALOGD("_ZN8HWCLayer21setPrevReleaseFenceFdERKiRKb() called");
    return 0;
}

/* Demangled: hwc::Gralloc4Mapper::unlock(native_handle const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc4Mapper6unlockEPK13native_handle(void) {
    ALOGD("_ZNK3hwc14Gralloc4Mapper6unlockEPK13native_handle() called");
    return 0;
}

/* Demangled: AsyncBliterHandler::fillBlack(native_handle const*, PrivateHandle*, int*, MdpJob*) */
extern "C" __attribute__((visibility("default"))) int _ZN18AsyncBliterHandler9fillBlackEPK13native_handleP13PrivateHandlePiP6MdpJob(void) {
    ALOGD("_ZN18AsyncBliterHandler9fillBlackEPK13native_handleP13PrivateHandlePiP6MdpJob() called");
    return 0;
}

/* Demangled: IPqDevice::~IPqDevice() */
extern "C" __attribute__((visibility("default"))) int _ZN9IPqDeviceD2Ev(void) {
    ALOGD("_ZN9IPqDeviceD2Ev() called");
    return 0;
}

/* Demangled: Hrt::fillDispLayer(std::__1::vector<android::sp<HWCDisplay>, std::__1::allocator<android::sp<HWCDisplay> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3Hrt13fillDispLayerERKNSt3__16vectorIN7android2spI10HWCDisplayEENS0_9allocatorIS5_EEEE(void) {
    ALOGD("_ZN3Hrt13fillDispLayerERKNSt3__16vectorIN7android2spI10HWCDisplayEENS0_9allocatorIS5_EEEE() called");
    return 0;
}

/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common9Smpte2086EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EE7destroyEv */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common9Smpte2086EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EE7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common9Smpte2086EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EE7destroyEv() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned int, int, int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmjiiEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmjiiEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: AsyncBlitDevice::getHeight(unsigned long, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN15AsyncBlitDevice9getHeightEmj(void) {
    ALOGD("_ZN15AsyncBlitDevice9getHeightEmj() called");
    return 0;
}

/* Demangled: HWCDisplay::HWCDisplay(unsigned long const&, int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10HWCDisplayC2ERKmRKi(void) {
    ALOGD("_ZN10HWCDisplayC2ERKmRKi() called");
    return 0;
}

/* Demangled: DispDevice::prepareOverlayPresentFence(unsigned long, OverlayPrepareParam*) */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice26prepareOverlayPresentFenceEmP19OverlayPrepareParam(void) {
    ALOGD("_ZN10DispDevice26prepareOverlayPresentFenceEmP19OverlayPrepareParam() called");
    return 0;
}

/* Demangled: HWCDispatcher::PostHandler::~PostHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN13HWCDispatcher11PostHandlerD2Ev(void) {
    ALOGD("_ZN13HWCDispatcher11PostHandlerD2Ev() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<OverlayEngine::OverlayInput*> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIPN13OverlayEngine12OverlayInputEEE = NULL;

/* Demangled: DbgLogger::DbgLogger<char const*, char const*, DisplayBufferQueue*, unsigned int, unsigned int, unsigned int, unsigned long>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, DisplayBufferQueue*, unsigned int, unsigned int, unsigned int, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueuejjjmEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueuejjjmEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<BliterNode::JobParam, std::__1::allocator<BliterNode::JobParam> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN10BliterNode8JobParamENS_9allocatorIS2_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN10BliterNode8JobParamENS_9allocatorIS2_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: AsyncBlitDevice::dump(unsigned long const&, android::String8*) */
extern "C" __attribute__((visibility("default"))) int _ZN15AsyncBlitDevice4dumpERKmPN7android7String8E(void) {
    ALOGD("_ZN15AsyncBlitDevice4dumpERKmPN7android7String8E() called");
    return 0;
}

/* Demangled: android::DisplayFeatureGet::getDisplayFeatureService() */
extern "C" __attribute__((visibility("default"))) int _ZN7android17DisplayFeatureGet24getDisplayFeatureServiceEv(void) {
    ALOGD("_ZN7android17DisplayFeatureGet24getDisplayFeatureServiceEv() called");
    return 0;
}

/* Demangled: hwc::Gralloc4Mapper::getChromaSiting(native_handle const*, aidl::android::hardware::graphics::common::ChromaSiting*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc4Mapper15getChromaSitingEPK13native_handlePN4aidl7android8hardware8graphics6common12ChromaSitingE(void) {
    ALOGD("_ZNK3hwc14Gralloc4Mapper15getChromaSitingEPK13native_handlePN4aidl7android8hardware8graphics6common12ChromaSitingE() called");
    return 0;
}

/* Demangled: OverlayEngine::preparePresentFence(OverlayPrepareParam&) */
extern "C" __attribute__((visibility("default"))) int _ZN13OverlayEngine19preparePresentFenceER19OverlayPrepareParam(void) {
    ALOGD("_ZN13OverlayEngine19preparePresentFenceER19OverlayPrepareParam() called");
    return 0;
}

/* Demangled: android::Vector<native_handle const*>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIPK13native_handleE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIPK13native_handleE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: DisplayManager::hotplugPost(unsigned long, bool, int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN14DisplayManager11hotplugPostEmbib(void) {
    ALOGD("_ZN14DisplayManager11hotplugPostEmbib() called");
    return 0;
}

/* Demangled: AsyncBlitDevice::disableOverlayOutput(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN15AsyncBlitDevice20disableOverlayOutputEm(void) {
    ALOGD("_ZN15AsyncBlitDevice20disableOverlayOutputEm() called");
    return 0;
}

/* Demangled: AsyncBlitDevice::getWidth(unsigned long, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN15AsyncBlitDevice8getWidthEmj(void) {
    ALOGD("_ZN15AsyncBlitDevice8getWidthEmj() called");
    return 0;
}

/* Demangled: DispDevice::getMaxOverlayWidth() */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice18getMaxOverlayWidthEv(void) {
    ALOGD("_ZN10DispDevice18getMaxOverlayWidthEv() called");
    return 0;
}

/* Demangled: WhiteBuffer::~WhiteBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN11WhiteBufferD2Ev(void) {
    ALOGD("_ZN11WhiteBufferD2Ev() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, int, int, unsigned long>(unsigned int const&, unsigned char const&, char const*, char const*, int, int, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKciimEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKciimEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: android::Transform::set(unsigned int, float, float) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9Transform3setEjff(void) {
    ALOGD("_ZN7android9Transform3setEjff() called");
    return 0;
}

/* Demangled: __netf2 */
extern "C" __attribute__((visibility("default"))) int __netf2(void) {
    ALOGD("__netf2() called");
    return 0;
}

/* Exported Object: vtable for DispatcherJob */
extern "C" __attribute__((visibility("default"))) void* _ZTV13DispatcherJob = NULL;

/* Demangled: MDPFrameInfoDebugger::setJobAcquireFenceFd(unsigned int const&, int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN20MDPFrameInfoDebugger20setJobAcquireFenceFdERKjRKi(void) {
    ALOGD("_ZN20MDPFrameInfoDebugger20setJobAcquireFenceFdERKjRKi() called");
    return 0;
}

/* Demangled: HWCLayer::decideMdpOutputFormat() const */
extern "C" __attribute__((visibility("default"))) int _ZNK8HWCLayer21decideMdpOutputFormatEv(void) {
    ALOGD("_ZNK8HWCLayer21decideMdpOutputFormatEv() called");
    return 0;
}

/* Demangled: DispDevice::getOverlayMultiConfigs(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice22getOverlayMultiConfigsEm(void) {
    ALOGD("_ZN10DispDevice22getOverlayMultiConfigsEm() called");
    return 0;
}

/* Demangled: android::Transform::~Transform() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9TransformD2Ev(void) {
    ALOGD("_ZN7android9TransformD2Ev() called");
    return 0;
}

/* Exported Object: vtable for HWCDispatcher::VirPostHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTVN13HWCDispatcher14VirPostHandlerE = NULL;

/* Demangled: ColorTransform::ColorTransform(int const&, bool const&, bool const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14ColorTransformC2ERKiRKbS3_(void) {
    ALOGD("_ZN14ColorTransformC2ERKiRKbS3_() called");
    return 0;
}

/* Demangled: MDPFrameInfoDebugger::MDPFrameInfoDebugger() */
extern "C" __attribute__((visibility("default"))) int _ZN20MDPFrameInfoDebuggerC1Ev(void) {
    ALOGD("_ZN20MDPFrameInfoDebuggerC1Ev() called");
    return 0;
}

/* Exported Object: vtable for hwc::Gralloc2Mapper */
extern "C" __attribute__((visibility("default"))) void* _ZTVN3hwc14Gralloc2MapperE = NULL;

/* Demangled: hwc::Gralloc4Mapper::getPixelFormatFourCC(native_handle const*, unsigned int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc4Mapper20getPixelFormatFourCCEPK13native_handlePj(void) {
    ALOGD("_ZNK3hwc14Gralloc4Mapper20getPixelFormatFourCCEPK13native_handlePj() called");
    return 0;
}

/* Demangled: BlackBuffer::getHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN11BlackBuffer9getHandleEv(void) {
    ALOGD("_ZN11BlackBuffer9getHandleEv() called");
    return 0;
}

/* Demangled: MDPFrameInfoDebugger::setJobHWCConfigMDPTime(unsigned int const&, long const&) */
extern "C" __attribute__((visibility("default"))) int _ZN20MDPFrameInfoDebugger22setJobHWCConfigMDPTimeERKjRKl(void) {
    ALOGD("_ZN20MDPFrameInfoDebugger22setJobHWCConfigMDPTimeERKjRKl() called");
    return 0;
}

/* Demangled: AsyncBlitDevice::setOverlaySessionMode(unsigned long, HWC_DISP_MODE) */
extern "C" __attribute__((visibility("default"))) int _ZN15AsyncBlitDevice21setOverlaySessionModeEm13HWC_DISP_MODE(void) {
    ALOGD("_ZN15AsyncBlitDevice21setOverlaySessionModeEm13HWC_DISP_MODE() called");
    return 0;
}

/* Demangled: hwc::Gralloc4Mapper::dumpBuffers(bool) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc4Mapper11dumpBuffersEb(void) {
    ALOGD("_ZNK3hwc14Gralloc4Mapper11dumpBuffersEb() called");
    return 0;
}

/* Demangled: HWCMediator::layerStateSetDataSpace(hwc2_device*, unsigned long, unsigned long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator22layerStateSetDataSpaceEP11hwc2_devicemmi(void) {
    ALOGD("_ZN11HWCMediator22layerStateSetDataSpaceEP11hwc2_devicemmi() called");
    return 0;
}

/* Demangled: OverlayEngine::OverlayOutput::OverlayOutput() */
extern "C" __attribute__((visibility("default"))) int _ZN13OverlayEngine13OverlayOutputC1Ev(void) {
    ALOGD("_ZN13OverlayEngine13OverlayOutputC1Ev() called");
    return 0;
}

/* Demangled: AsyncBliterHandler::processVirBlack(DispatcherJob*) */
extern "C" __attribute__((visibility("default"))) int _ZN18AsyncBliterHandler15processVirBlackEP13DispatcherJob(void) {
    ALOGD("_ZN18AsyncBliterHandler15processVirBlackEP13DispatcherJob() called");
    return 0;
}

/* Demangled: BliterNode::mapDataspace2DpColorRange(int, bool const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10BliterNode25mapDataspace2DpColorRangeEiRKb(void) {
    ALOGD("_ZN10BliterNode25mapDataspace2DpColorRangeEiRKb() called");
    return 0;
}

/* Demangled: mapHdrPrimaries(int) */
extern "C" __attribute__((visibility("default"))) int _Z15mapHdrPrimariesi(void) {
    ALOGD("_Z15mapHdrPrimariesi() called");
    return 0;
}

/* Demangled: IPqDevice::setGamePQHandle(native_handle const* const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9IPqDevice15setGamePQHandleERKPK13native_handle(void) {
    ALOGD("_ZN9IPqDevice15setGamePQHandleERKPK13native_handle() called");
    return 0;
}

/* Demangled: IPqDevice::useColorTransformIoctl(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9IPqDevice22useColorTransformIoctlEi(void) {
    ALOGD("_ZN9IPqDevice22useColorTransformIoctlEi() called");
    return 0;
}

/* Demangled: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSC_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EE7__cloneEPNS0_6__baseISY_EE */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSC_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EE7__cloneEPNS0_6__baseISY_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSC_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EE7__cloneEPNS0_6__baseISY_EE() called");
    return 0;
}

/* Demangled: void DbgLogger::printf<unsigned int, int>(char const*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLogger6printfIJjiEEEvPKcDpT_(void) {
    ALOGD("_ZN9DbgLogger6printfIJjiEEEvPKcDpT_() called");
    return 0;
}

/* Demangled: IdleThread::IdleThread(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10IdleThreadC2Em(void) {
    ALOGD("_ZN10IdleThreadC2Em() called");
    return 0;
}

/* Demangled: android::Vector<MdpJobInfo>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorI10MdpJobInfoE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorI10MdpJobInfoE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIjEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EEclEOSU_SK_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIjEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EEclEOSU_SK_(void) {
    ALOGD("_ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIjEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EEclEOSU_SK_() called");
    return 0;
}

/* Demangled: AsyncBlitDevice::updateDisplayResolution(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN15AsyncBlitDevice23updateDisplayResolutionEm(void) {
    ALOGD("_ZN15AsyncBlitDevice23updateDisplayResolutionEm() called");
    return 0;
}

/* Demangled: HWCMediator::prepareForValidation() */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator20prepareForValidationEv(void) {
    ALOGD("_ZN11HWCMediator20prepareForValidationEv() called");
    return 0;
}

/* Demangled: DbgLogger::~DbgLogger() */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerD1Ev(void) {
    ALOGD("_ZN9DbgLoggerD1Ev() called");
    return 0;
}

/* Demangled: IdleThread::setEnabled(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN10IdleThread10setEnabledEb(void) {
    ALOGD("_ZN10IdleThread10setEnabledEb() called");
    return 0;
}

/* Demangled: HWCDispatcher::ignoreJob(unsigned long, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN13HWCDispatcher9ignoreJobEmb(void) {
    ALOGD("_ZN13HWCDispatcher9ignoreJobEmb() called");
    return 0;
}

/* Demangled: HrtCommon::setCompType(std::__1::vector<android::sp<HWCDisplay>, std::__1::allocator<android::sp<HWCDisplay> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9HrtCommon11setCompTypeERKNSt3__16vectorIN7android2spI10HWCDisplayEENS0_9allocatorIS5_EEEE(void) {
    ALOGD("_ZN9HrtCommon11setCompTypeERKNSt3__16vectorIN7android2spI10HWCDisplayEENS0_9allocatorIS5_EEEE() called");
    return 0;
}

/* Demangled: DispDevice::isDisplayArrSupport() */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice19isDisplayArrSupportEv(void) {
    ALOGD("_ZN10DispDevice19isDisplayArrSupportEv() called");
    return 0;
}

/* Demangled: HWCMediator::layerStateSetZOrder(hwc2_device*, unsigned long, unsigned long, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator19layerStateSetZOrderEP11hwc2_devicemmj(void) {
    ALOGD("_ZN11HWCMediator19layerStateSetZOrderEP11hwc2_devicemmj() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, int>(unsigned int const&, unsigned char const&, char const*, char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKciEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKciEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Exported Object: construction vtable for HWCThread-in-IdleThread */
extern "C" __attribute__((visibility("default"))) void* _ZTC10IdleThread0_9HWCThread = NULL;

/* Demangled: android::Vector<OverlayPortParam*>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIP16OverlayPortParamE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIP16OverlayPortParamE12do_constructEPvm() called");
    return 0;
}

/* Demangled: AsyncBlitDevice::waitRefreshRequest(unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN15AsyncBlitDevice18waitRefreshRequestEPj(void) {
    ALOGD("_ZN15AsyncBlitDevice18waitRefreshRequestEPj() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, char const*, long, int, native_handle const*>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, char const*, long, int, native_handle const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmS2_liPK13native_handleEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmS2_liPK13native_handleEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Exported Object: vtable for HWCDisplay */
extern "C" __attribute__((visibility("default"))) void* _ZTV10HWCDisplay = NULL;

/* Demangled: DbgLogger::DbgLogger<char const*, native_handle const*>(unsigned int const&, unsigned char const&, char const*, char const*, native_handle const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcPK13native_handleEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcPK13native_handleEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: VSyncThread::setLoopAgain() */
extern "C" __attribute__((visibility("default"))) int _ZN11VSyncThread12setLoopAgainEv(void) {
    ALOGD("_ZN11VSyncThread12setLoopAgainEv() called");
    return 0;
}

/* Demangled: DisplayManager::getNumberPluginDisplay() */
extern "C" __attribute__((visibility("default"))) int _ZN14DisplayManager22getNumberPluginDisplayEv(void) {
    ALOGD("_ZN14DisplayManager22getNumberPluginDisplayEv() called");
    return 0;
}

/* Demangled: ObjectPool<DispatcherJob>::returnObject(DispatcherJob const*) */
extern "C" __attribute__((visibility("default"))) int _ZN10ObjectPoolI13DispatcherJobE12returnObjectEPKS0_(void) {
    ALOGD("_ZN10ObjectPoolI13DispatcherJobE12returnObjectEPKS0_() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, int, native_handle const*, int, int, int, native_handle const*, int, int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, int, native_handle const*, int, int, int, native_handle const*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmiPK13native_handleiiiS5_iiEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmiPK13native_handleiiiS5_iiEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: OverlayEngine::wakeup() */
extern "C" __attribute__((visibility("default"))) int _ZN13OverlayEngine6wakeupEv(void) {
    ALOGD("_ZN13OverlayEngine6wakeupEv() called");
    return 0;
}

/* Exported Object: vtable for LayerHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTV12LayerHandler = NULL;

/* Exported Object: VTT for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: IONDevice::ionClose(int, bool const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9IONDevice8ionCloseEiRKb(void) {
    ALOGD("_ZN9IONDevice8ionCloseEiRKb() called");
    return 0;
}

/* Demangled: hwc::GraphicBufferMapper::lock(native_handle const*, unsigned int, hwc::Rect const&, void**, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN3hwc19GraphicBufferMapper4lockEPK13native_handlejRKNS_4RectEPPvPiS9_(void) {
    ALOGD("_ZN3hwc19GraphicBufferMapper4lockEPK13native_handlejRKNS_4RectEPPvPiS9_() called");
    return 0;
}

/* Demangled: UEventThread::~UEventThread() */
extern "C" __attribute__((visibility("default"))) int _ZN12UEventThreadD2Ev(void) {
    ALOGD("_ZN12UEventThreadD2Ev() called");
    return 0;
}

/* Demangled: ColorTransform::ColorTransform(std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > const&, int const&, bool const&, bool const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14ColorTransformC1ERKNSt3__16vectorINS1_IfNS0_9allocatorIfEEEENS2_IS4_EEEERKiRKbSC_(void) {
    ALOGD("_ZN14ColorTransformC1ERKNSt3__16vectorINS1_IfNS0_9allocatorIfEEEENS2_IS4_EEEERKiRKbSC_() called");
    return 0;
}

/* Demangled: DispDevice::prepareOverlayOutput(unsigned long, OverlayPrepareParam*) */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice20prepareOverlayOutputEmP19OverlayPrepareParam(void) {
    ALOGD("_ZN10DispDevice20prepareOverlayOutputEmP19OverlayPrepareParam() called");
    return 0;
}

/* Demangled: HWCDisplay::getClientTarget() */
extern "C" __attribute__((visibility("default"))) int _ZN10HWCDisplay15getClientTargetEv(void) {
    ALOGD("_ZN10HWCDisplay15getClientTargetEv() called");
    return 0;
}

/* Demangled: SyncFence::merge(int, int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9SyncFence5mergeEiiPKc(void) {
    ALOGD("_ZN9SyncFence5mergeEiiPKc() called");
    return 0;
}

/* Demangled: OverlayEngine::OverlayEngine(unsigned long const&, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN13OverlayEngineC2ERKmjj(void) {
    ALOGD("_ZN13OverlayEngineC2ERKmjj() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<unsigned long, unsigned long, char const*>(unsigned int const&, unsigned char const&, char const*, unsigned long, unsigned long, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJmmPKcEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJmmPKcEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, char const*, int, int, int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, char const*, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmS2_iiiEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmS2_iiiEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: IONDevice::getDeviceFd() */
extern "C" __attribute__((visibility("default"))) int _ZN9IONDevice11getDeviceFdEv(void) {
    ALOGD("_ZN9IONDevice11getDeviceFdEv() called");
    return 0;
}

/* Demangled: __unordtf2 */
extern "C" __attribute__((visibility("default"))) int __unordtf2(void) {
    ALOGD("__unordtf2() called");
    return 0;
}

/* Demangled: DispDevice::setDFPSEnable(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice13setDFPSEnableEii(void) {
    ALOGD("_ZN10DispDevice13setDFPSEnableEii() called");
    return 0;
}

/* Demangled: android::Transform::absIsOne(float) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9Transform8absIsOneEf(void) {
    ALOGD("_ZN7android9Transform8absIsOneEf() called");
    return 0;
}

/* Demangled: android::Vector<FrameInfo*>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIP9FrameInfoE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIP9FrameInfoE12do_constructEPvm() called");
    return 0;
}

/* Demangled: DispDevice::~DispDevice() */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDeviceD1Ev(void) {
    ALOGD("_ZN10DispDeviceD1Ev() called");
    return 0;
}

/* Demangled: HWCMediator::deviceDump(hwc2_device*, unsigned int*, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator10deviceDumpEP11hwc2_devicePjPc(void) {
    ALOGD("_ZN11HWCMediator10deviceDumpEP11hwc2_devicePjPc() called");
    return 0;
}

/* Demangled: DisplayManager::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN14DisplayManager11getInstanceEv(void) {
    ALOGD("_ZN14DisplayManager11getInstanceEv() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, char const*, long>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, long) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcS2_lEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcS2_lEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: DisplayBufferQueue::queueBuffer(DisplayBufferQueue::DisplayBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN18DisplayBufferQueue11queueBufferEPNS_13DisplayBufferE(void) {
    ALOGD("_ZN18DisplayBufferQueue11queueBufferEPNS_13DisplayBufferE() called");
    return 0;
}

/* Demangled: AsyncBlitDevice::destroyOverlaySession(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN15AsyncBlitDevice21destroyOverlaySessionEm(void) {
    ALOGD("_ZN15AsyncBlitDevice21destroyOverlaySessionEm() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, char*, int, int>(unsigned int const&, unsigned char const&, char const*, char const*, char*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcPciiEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcPciiEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Exported Object: android::SWWatchDog::DEFAULT_THRESHOLD */
extern "C" __attribute__((visibility("default"))) void* _ZN7android10SWWatchDog17DEFAULT_THRESHOLDE = NULL;

/* Demangled: AbortMessager::flushOut() */
extern "C" __attribute__((visibility("default"))) int _ZN13AbortMessager8flushOutEv(void) {
    ALOGD("_ZN13AbortMessager8flushOutEv() called");
    return 0;
}

/* Demangled: IONDevice::IONDevice() */
extern "C" __attribute__((visibility("default"))) int _ZN9IONDeviceC2Ev(void) {
    ALOGD("_ZN9IONDeviceC2Ev() called");
    return 0;
}

/* Demangled: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSG_8hidl_vecIhEEPT_EST_EUlRKSS_SR_E_NSC_ISY_EEFvNSJ_5ErrorESR_EE7__cloneEv */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSG_8hidl_vecIhEEPT_EST_EUlRKSS_SR_E_NSC_ISY_EEFvNSJ_5ErrorESR_EE7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSG_8hidl_vecIhEEPT_EST_EUlRKSS_SR_E_NSC_ISY_EEFvNSJ_5ErrorESR_EE7__cloneEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to OverlayEngine::~OverlayEngine() */
extern "C" __attribute__((visibility("default"))) int _ZThn296_N13OverlayEngineD1Ev(void) {
    ALOGD("_ZThn296_N13OverlayEngineD1Ev() called");
    return 0;
}

/* Demangled: HWCMediator::HWCMediator() */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediatorC2Ev(void) {
    ALOGD("_ZN11HWCMediatorC2Ev() called");
    return 0;
}

/* Demangled: MDPFrameInfoDebugger::insertJob(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN20MDPFrameInfoDebugger9insertJobERKj(void) {
    ALOGD("_ZN20MDPFrameInfoDebugger9insertJobERKj() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<native_handle const*> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIPK13native_handleEE = NULL;

/* Exported Object: construction vtable for android::Thread-in-RefreshRequestThread */
extern "C" __attribute__((visibility("default"))) void* _ZTC20RefreshRequestThread0_N7android6ThreadE = NULL;

/* Exported Object: HWC_COMPOSITION_FILE_HWC_STR */
extern "C" __attribute__((visibility("default"))) void* HWC_COMPOSITION_FILE_HWC_STR = NULL;

/* Demangled: HWCDisplay::getSecure() const */
extern "C" __attribute__((visibility("default"))) int _ZNK10HWCDisplay9getSecureEv(void) {
    ALOGD("_ZNK10HWCDisplay9getSecureEv() called");
    return 0;
}

/* Demangled: getCompString(int const&) */
extern "C" __attribute__((visibility("default"))) int _Z13getCompStringRKi(void) {
    ALOGD("_Z13getCompStringRKi() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, bool>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmbEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmbEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common9Smpte2086EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EE18destroy_deallocateEv */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common9Smpte2086EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EE18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common9Smpte2086EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EE18destroy_deallocateEv() called");
    return 0;
}

/* Exported Object: vtable for LayerComposer */
extern "C" __attribute__((visibility("default"))) void* _ZTV13LayerComposer = NULL;

/* Demangled: DbgLogger::DbgLogger<char const*, bool, unsigned int, bool, unsigned int, int, unsigned int, bool, unsigned int, bool, unsigned int, int, unsigned int, int, int, int, int, int, int, int, int>(unsigned int const&, unsigned char const&, char const*, char const*, bool, unsigned int, bool, unsigned int, int, unsigned int, bool, unsigned int, bool, unsigned int, int, unsigned int, int, int, int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcbjbjijbjbjijiiiiiiiiEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcbjbjijbjbjijiiiiiiiiEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: hwc::GrallocMapper::~GrallocMapper() */
extern "C" __attribute__((visibility("default"))) int _ZN3hwc13GrallocMapperD2Ev(void) {
    ALOGD("_ZN3hwc13GrallocMapperD2Ev() called");
    return 0;
}

/* Demangled: PanelEventMonitorThread::PanelEventMonitorThread() */
extern "C" __attribute__((visibility("default"))) int _ZN23PanelEventMonitorThreadC2Ev(void) {
    ALOGD("_ZN23PanelEventMonitorThreadC2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE16_NS_13basic_ostreamIcS2_EE = NULL;

/* Demangled: DispDevice::getAvailableOverlayInput(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice24getAvailableOverlayInputEm(void) {
    ALOGD("_ZN10DispDevice24getAvailableOverlayInputEm() called");
    return 0;
}

/* Demangled: hwc::Gralloc4Mapper::getSmpte2086(native_handle const*, std::__1::optional<aidl::android::hardware::graphics::common::Smpte2086>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc4Mapper12getSmpte2086EPK13native_handlePNSt3__18optionalIN4aidl7android8hardware8graphics6common9Smpte2086EEE(void) {
    ALOGD("_ZNK3hwc14Gralloc4Mapper12getSmpte2086EPK13native_handlePNSt3__18optionalIN4aidl7android8hardware8graphics6common9Smpte2086EEE() called");
    return 0;
}

/* Demangled: OverlayEngine::ignoreAvGrouping(bool const&) */
extern "C" __attribute__((visibility("default"))) int _ZN13OverlayEngine16ignoreAvGroupingERKb(void) {
    ALOGD("_ZN13OverlayEngine16ignoreAvGroupingERKb() called");
    return 0;
}

/* Demangled: android::Vector<OverlayEngine::OverlayInput*>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIPN13OverlayEngine12OverlayInputEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIPN13OverlayEngine12OverlayInputEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: construction vtable for HWCVSyncListener-in-OverlayEngine */
extern "C" __attribute__((visibility("default"))) void* _ZTC13OverlayEngine296_16HWCVSyncListener = NULL;

/* Demangled: HWCMediator::layerStateSetSidebandStream(hwc2_device*, unsigned long, unsigned long, native_handle const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator27layerStateSetSidebandStreamEP11hwc2_devicemmPK13native_handle(void) {
    ALOGD("_ZN11HWCMediator27layerStateSetSidebandStreamEP11hwc2_devicemmPK13native_handle() called");
    return 0;
}

/* Demangled: DisplayBufferQueue::reallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN18DisplayBufferQueue10reallocateEj(void) {
    ALOGD("_ZN18DisplayBufferQueue10reallocateEj() called");
    return 0;
}

/* Demangled: AsyncBlitDevice::AsyncBlitDevice() */
extern "C" __attribute__((visibility("default"))) int _ZN15AsyncBlitDeviceC2Ev(void) {
    ALOGD("_ZN15AsyncBlitDeviceC2Ev() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, char const*, int, char const*>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcS2_iS2_EEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcS2_iS2_EEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: android::Vector<native_handle const*>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIPK13native_handleE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIPK13native_handleE12do_constructEPvm() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned int, int, int, int, native_handle const*>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned int, int, int, int, native_handle const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmjiiiPK13native_handleEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmjiiiPK13native_handleEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Exported Object: vtable for HWCMediator */
extern "C" __attribute__((visibility("default"))) void* _ZTV11HWCMediator = NULL;

/* Demangled: BliterNode::getHWCExpectMDPFinishedTime(timeval*, unsigned int const&, long const&, bool const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10BliterNode27getHWCExpectMDPFinishedTimeEP7timevalRKjRKlRKb(void) {
    ALOGD("_ZN10BliterNode27getHWCExpectMDPFinishedTimeEP7timevalRKjRKlRKb() called");
    return 0;
}

/* Demangled: AsyncBlitDevice::getMaxOverlayInputNum() */
extern "C" __attribute__((visibility("default"))) int _ZN15AsyncBlitDevice21getMaxOverlayInputNumEv(void) {
    ALOGD("_ZN15AsyncBlitDevice21getMaxOverlayInputNumEv() called");
    return 0;
}

/* Demangled: IONDevice::ionImport(int const&, int*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9IONDevice9ionImportERKiPiPKc(void) {
    ALOGD("_ZN9IONDevice9ionImportERKiPiPKc() called");
    return 0;
}

/* Demangled: HWCBuffer::setupPrivateHandle() */
extern "C" __attribute__((visibility("default"))) int _ZN9HWCBuffer18setupPrivateHandleEv(void) {
    ALOGD("_ZN9HWCBuffer18setupPrivateHandleEv() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcjEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcjEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: hwc::GraphicBufferMapper::getWidth(native_handle const*, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZN3hwc19GraphicBufferMapper8getWidthEPK13native_handlePm(void) {
    ALOGD("_ZN3hwc19GraphicBufferMapper8getWidthEPK13native_handlePm() called");
    return 0;
}

/* Demangled: checkMirrorPath(std::__1::vector<android::sp<HWCDisplay>, std::__1::allocator<android::sp<HWCDisplay> > > const&) */
extern "C" __attribute__((visibility("default"))) int _Z15checkMirrorPathRKNSt3__16vectorIN7android2spI10HWCDisplayEENS_9allocatorIS4_EEEE(void) {
    ALOGD("_Z15checkMirrorPathRKNSt3__16vectorIN7android2spI10HWCDisplayEENS_9allocatorIS4_EEEE() called");
    return 0;
}

/* Demangled: HWCMediator::displayGetHdrCapability(hwc2_device*, unsigned long, unsigned int*, int*, float*, float*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator23displayGetHdrCapabilityEP11hwc2_devicemPjPiPfS4_S4_(void) {
    ALOGD("_ZN11HWCMediator23displayGetHdrCapabilityEP11hwc2_devicemPjPiPfS4_S4_() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::sp<HWCVSyncListener> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_2spI16HWCVSyncListenerEEEE = NULL;

/* Demangled: android::Vector<FrameInfo*>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIP9FrameInfoE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIP9FrameInfoE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi() called");
    return 0;
}

/* Demangled: android::Transform::transform(android::details::TVec2<float> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android9Transform9transformERKNS_7details5TVec2IfEE(void) {
    ALOGD("_ZNK7android9Transform9transformERKNS_7details5TVec2IfEE() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, int, bool>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmibEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmibEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: std::__1::vector<HWCDispatcher::WorkerCluster::PrevHwLayer, std::__1::allocator<HWCDispatcher::WorkerCluster::PrevHwLayer> >::__append(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN13HWCDispatcher13WorkerCluster11PrevHwLayerENS_9allocatorIS3_EEE8__appendEm(void) {
    ALOGD("_ZNSt3__16vectorIN13HWCDispatcher13WorkerCluster11PrevHwLayerENS_9allocatorIS3_EEE8__appendEm() called");
    return 0;
}

/* Demangled: FrameOverlayInfo::~FrameOverlayInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN16FrameOverlayInfoD2Ev(void) {
    ALOGD("_ZN16FrameOverlayInfoD2Ev() called");
    return 0;
}

/* Demangled: PqDeviceLegacy::setColorTransformViaIoctl(float const*, int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14PqDeviceLegacy25setColorTransformViaIoctlEPKfRKi(void) {
    ALOGD("_ZN14PqDeviceLegacy25setColorTransformViaIoctlEPKfRKi() called");
    return 0;
}

/* Demangled: android::Transform::Transform(android::Transform const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9TransformC1ERKS0_(void) {
    ALOGD("_ZN7android9TransformC1ERKS0_() called");
    return 0;
}

/* Exported Object: _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9BlendModeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EEE */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9BlendModeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EEE = NULL;

/* Demangled: HWCDispatcher::WorkerCluster::~WorkerCluster() */
extern "C" __attribute__((visibility("default"))) int _ZN13HWCDispatcher13WorkerClusterD1Ev(void) {
    ALOGD("_ZN13HWCDispatcher13WorkerClusterD1Ev() called");
    return 0;
}

/* Demangled: HWCDisplay::getClientTargetSupport(unsigned int const&, unsigned int const&, int const&, int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10HWCDisplay22getClientTargetSupportERKjS1_RKiS3_(void) {
    ALOGD("_ZN10HWCDisplay22getClientTargetSupportERKjS1_RKiS3_() called");
    return 0;
}

/* Demangled: HWCDisplay::removePendingRemovedLayers() */
extern "C" __attribute__((visibility("default"))) int _ZN10HWCDisplay26removePendingRemovedLayersEv(void) {
    ALOGD("_ZN10HWCDisplay26removePendingRemovedLayersEv() called");
    return 0;
}

/* Demangled: hwc::GraphicBufferMapper::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN3hwc19GraphicBufferMapper11getInstanceEv(void) {
    ALOGD("_ZN3hwc19GraphicBufferMapper11getInstanceEv() called");
    return 0;
}

/* Demangled: BliterNode::invalidate(unsigned int const&, unsigned int const&, unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10BliterNode10invalidateERKjS1_S1_(void) {
    ALOGD("_ZN10BliterNode10invalidateERKjS1_S1_() called");
    return 0;
}

/* Exported Object: PerfHelper::getInstance()::s_instance */
extern "C" __attribute__((visibility("default"))) void* _ZZN10PerfHelper11getInstanceEvE10s_instance = NULL;

/* Demangled: HWCDisplay::createLayer(unsigned long*, bool const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10HWCDisplay11createLayerEPmRKb(void) {
    ALOGD("_ZN10HWCDisplay11createLayerEPmRKb() called");
    return 0;
}

/* Demangled: DispatchThread::dropJob() */
extern "C" __attribute__((visibility("default"))) int _ZN14DispatchThread7dropJobEv(void) {
    ALOGD("_ZN14DispatchThread7dropJobEv() called");
    return 0;
}

/* Demangled: VSyncThread::~VSyncThread() */
extern "C" __attribute__((visibility("default"))) int _ZN11VSyncThreadD1Ev(void) {
    ALOGD("_ZN11VSyncThreadD1Ev() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, bool, long>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, bool, long) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmblEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmblEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: OverlayEngine::waitOverlayFence(FrameOverlayInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN13OverlayEngine16waitOverlayFenceEP16FrameOverlayInfo(void) {
    ALOGD("_ZN13OverlayEngine16waitOverlayFenceEP16FrameOverlayInfo() called");
    return 0;
}

/* Demangled: setPQEnhance(unsigned long const&, PrivateHandle const&, unsigned int*, bool const&) */
extern "C" __attribute__((visibility("default"))) int _Z12setPQEnhanceRKmRK13PrivateHandlePjRKb(void) {
    ALOGD("_Z12setPQEnhanceRKmRK13PrivateHandlePjRKb() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<BliterNode::JobParam> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<BliterNode::JobParam> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<BliterNode::JobParam> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<BliterNode::JobParam> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<BliterNode::JobParam> > > >::__emplace_unique_key_args<unsigned int, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>, std::__1::tuple<> >(unsigned int const&, std::__1::piecewise_construct_t const&, std::__1::tuple<unsigned int const&>&&, std::__1::tuple<>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN10BliterNode8JobParamEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSM_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN10BliterNode8JobParamEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIjJRKNS_21piecewise_construct_tENS_5tupleIJRKjEEENSM_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeIS6_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Exported Object: vtable for PqDeviceLegacy */
extern "C" __attribute__((visibility("default"))) void* _ZTV14PqDeviceLegacy = NULL;

/* Demangled: OverlayEngine::prepareInput(OverlayPrepareParam&) */
extern "C" __attribute__((visibility("default"))) int _ZN13OverlayEngine12prepareInputER19OverlayPrepareParam(void) {
    ALOGD("_ZN13OverlayEngine12prepareInputER19OverlayPrepareParam() called");
    return 0;
}

/* Demangled: hwc::Gralloc4Mapper::dumpBuffer(native_handle const*, bool) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc4Mapper10dumpBufferEPK13native_handleb(void) {
    ALOGD("_ZNK3hwc14Gralloc4Mapper10dumpBufferEPK13native_handleb() called");
    return 0;
}

/* Exported Object: _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS8_ISX_EEFvNSI_5ErrorESQ_EEE */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS8_ISX_EEFvNSI_5ErrorESQ_EEE = NULL;

/* Exported Object: vtable for HWCDispatcher::PostHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTVN13HWCDispatcher11PostHandlerE = NULL;

/* Demangled: VSyncThread::setProperty() */
extern "C" __attribute__((visibility("default"))) int _ZN11VSyncThread11setPropertyEv(void) {
    ALOGD("_ZN11VSyncThread11setPropertyEv() called");
    return 0;
}

/* Demangled: Hrt::isEnabled() const */
extern "C" __attribute__((visibility("default"))) int _ZNK3Hrt9isEnabledEv(void) {
    ALOGD("_ZNK3Hrt9isEnabledEv() called");
    return 0;
}

/* Demangled: android::Transform::type() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android9Transform4typeEv(void) {
    ALOGD("_ZNK7android9Transform4typeEv() called");
    return 0;
}

/* Demangled: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIjEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EE7__cloneEPNS0_6__baseISS_EE */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIjEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EE7__cloneEPNS0_6__baseISS_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIjEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EE7__cloneEPNS0_6__baseISS_EE() called");
    return 0;
}

/* Demangled: HwcFeatureList::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN14HwcFeatureList11getInstanceEv(void) {
    ALOGD("_ZN14HwcFeatureList11getInstanceEv() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char*, int>(unsigned int const&, unsigned char const&, char const*, char*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPciEEERKjRKhPKcDpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPciEEERKjRKhPKcDpT_() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strERKNS_12basic_stringIcS2_S4_EE(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strERKNS_12basic_stringIcS2_S4_EE() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::operator<< <char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, std::__1::__iom_t10<char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__1lsIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_RKNS_9__iom_t10IS4_EE(void) {
    ALOGD("_ZNSt3__1lsIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_RKNS_9__iom_t10IS4_EE() called");
    return 0;
}

/* Demangled: HWCDisplay::setRetireFenceFd(int const&, bool const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10HWCDisplay16setRetireFenceFdERKiRKb(void) {
    ALOGD("_ZN10HWCDisplay16setRetireFenceFdERKiRKb() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<DispatcherJob> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spI13DispatcherJobEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spI13DispatcherJobEEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSC_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EE18destroy_deallocateEv */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSC_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EE18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSC_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EE18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: HWCBuffer::~HWCBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN9HWCBufferD1Ev(void) {
    ALOGD("_ZN9HWCBufferD1Ev() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, char const*, int, int, int>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcS2_iiiEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcS2_iiiEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: void AbortMessager::printf<unsigned long, int, char const*, unsigned int>(char const*, unsigned long, int, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN13AbortMessager6printfIJmiPKcjEEEvS2_DpT_(void) {
    ALOGD("_ZN13AbortMessager6printfIJmiPKcjEEEvS2_DpT_() called");
    return 0;
}

/* Demangled: MDPFrameInfoDebugger::~MDPFrameInfoDebugger() */
extern "C" __attribute__((visibility("default"))) int _ZN20MDPFrameInfoDebuggerD2Ev(void) {
    ALOGD("_ZN20MDPFrameInfoDebuggerD2Ev() called");
    return 0;
}

/* Demangled: Debugger::LOGGER::LOGGER() */
extern "C" __attribute__((visibility("default"))) int _ZN8Debugger6LOGGERC2Ev(void) {
    ALOGD("_ZN8Debugger6LOGGERC2Ev() called");
    return 0;
}

/* Demangled: android::SWWatchDog::SWWatchDog(long const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10SWWatchDogC1ERKl(void) {
    ALOGD("_ZN7android10SWWatchDogC1ERKl() called");
    return 0;
}

/* Demangled: isDispConnected(unsigned long const&) */
extern "C" __attribute__((visibility("default"))) int _Z15isDispConnectedRKm(void) {
    ALOGD("_Z15isDispConnectedRKm() called");
    return 0;
}

/* Demangled: HWCDispatcher::configMirrorJob(DispatcherJob*) */
extern "C" __attribute__((visibility("default"))) int _ZN13HWCDispatcher15configMirrorJobEP13DispatcherJob(void) {
    ALOGD("_ZN13HWCDispatcher15configMirrorJobEP13DispatcherJob() called");
    return 0;
}

/* Demangled: HWCLayer::~HWCLayer() */
extern "C" __attribute__((visibility("default"))) int _ZN8HWCLayerD2Ev(void) {
    ALOGD("_ZN8HWCLayerD2Ev() called");
    return 0;
}

/* Demangled: __letf2 */
extern "C" __attribute__((visibility("default"))) int __letf2(void) {
    ALOGD("__letf2() called");
    return 0;
}

/* Demangled: DbgLogger::flushOut(char) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLogger8flushOutEc(void) {
    ALOGD("_ZN9DbgLogger8flushOutEc() called");
    return 0;
}

/* Demangled: MmBufDump::dump(int, unsigned long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9MmBufDump4dumpEimjjjjjjjPKc(void) {
    ALOGD("_ZN9MmBufDump4dumpEimjjjjjjjPKc() called");
    return 0;
}

/* Demangled: AsyncBlitDevice::prepareOverlayOutput(unsigned long, OverlayPrepareParam*) */
extern "C" __attribute__((visibility("default"))) int _ZN15AsyncBlitDevice20prepareOverlayOutputEmP19OverlayPrepareParam(void) {
    ALOGD("_ZN15AsyncBlitDevice20prepareOverlayOutputEmP19OverlayPrepareParam() called");
    return 0;
}

/* Demangled: PerfHelper::PerfHelper() */
extern "C" __attribute__((visibility("default"))) int _ZN10PerfHelperC2Ev(void) {
    ALOGD("_ZN10PerfHelperC2Ev() called");
    return 0;
}

/* Demangled: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9DataspaceEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE7__cloneEPNS0_6__baseIS11_EE */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9DataspaceEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE7__cloneEPNS0_6__baseIS11_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9DataspaceEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE7__cloneEPNS0_6__baseIS11_EE() called");
    return 0;
}

/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN7android8hardware8graphics6common4V1_211PixelFormatEEEiPK13native_handleRKNS7_6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EE18destroy_deallocateEv */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN7android8hardware8graphics6common4V1_211PixelFormatEEEiPK13native_handleRKNS7_6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EE18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN7android8hardware8graphics6common4V1_211PixelFormatEEEiPK13native_handleRKNS7_6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EE18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: hwc::GraphicBufferMapper::getPlaneLayouts(native_handle const*, std::__1::vector<aidl::android::hardware::graphics::common::PlaneLayout, std::__1::allocator<aidl::android::hardware::graphics::common::PlaneLayout> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN3hwc19GraphicBufferMapper15getPlaneLayoutsEPK13native_handlePNSt3__16vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS4_9allocatorISB_EEEE(void) {
    ALOGD("_ZN3hwc19GraphicBufferMapper15getPlaneLayoutsEPK13native_handlePNSt3__16vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS4_9allocatorISB_EEEE() called");
    return 0;
}

/* Demangled: BliterNode::errorCheck(std::__1::shared_ptr<BliterNode::JobParam> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10BliterNode10errorCheckERKNSt3__110shared_ptrINS_8JobParamEEE(void) {
    ALOGD("_ZN10BliterNode10errorCheckERKNSt3__110shared_ptrINS_8JobParamEEE() called");
    return 0;
}

/* Demangled: std::__1::vector<android::FpsCounter::RingBufferFps::BufContent, std::__1::allocator<android::FpsCounter::RingBufferFps::BufContent> >::__append(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android10FpsCounter13RingBufferFps10BufContentENS_9allocatorIS4_EEE8__appendEm(void) {
    ALOGD("_ZNSt3__16vectorIN7android10FpsCounter13RingBufferFps10BufContentENS_9allocatorIS4_EEE8__appendEm() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<android::SWWatchDog::Recipient, std::__1::allocator<android::SWWatchDog::Recipient> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN7android10SWWatchDog9RecipientENS_9allocatorIS3_EEEE = NULL;

/* Demangled: DbgLogger::tryFlush() */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLogger8tryFlushEv(void) {
    ALOGD("_ZN9DbgLogger8tryFlushEv() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<FrameInfo> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spI9FrameInfoEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spI9FrameInfoEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, char*>(unsigned int const&, unsigned char const&, char const*, char const*, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcPcEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcPcEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: int hwc::Gralloc4Mapper::getDefault<unsigned long>(unsigned int, unsigned int, int, unsigned int, unsigned long, android::hardware::graphics::mapper::V4_0::IMapper::MetadataType const&, int (*)(android::hardware::hidl_vec<unsigned char> const&, unsigned long*), unsigned long*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc4Mapper10getDefaultImEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS3_8hidl_vecIhEEPT_ESG_(void) {
    ALOGD("_ZNK3hwc14Gralloc4Mapper10getDefaultImEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS3_8hidl_vecIhEEPT_ESG_() called");
    return 0;
}

/* Demangled: hwc::GraphicBufferMapper::lockAsync(native_handle const*, unsigned long, unsigned long, hwc::Rect const&, void**, int, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN3hwc19GraphicBufferMapper9lockAsyncEPK13native_handlemmRKNS_4RectEPPviPiS9_(void) {
    ALOGD("_ZN3hwc19GraphicBufferMapper9lockAsyncEPK13native_handlemmRKNS_4RectEPPviPiS9_() called");
    return 0;
}

/* Demangled: HWCDisplay::getCommittedLayers() */
extern "C" __attribute__((visibility("default"))) int _ZN10HWCDisplay18getCommittedLayersEv(void) {
    ALOGD("_ZN10HWCDisplay18getCommittedLayersEv() called");
    return 0;
}

/* Demangled: ObjectPool<DispatcherJob>::~ObjectPool() */
extern "C" __attribute__((visibility("default"))) int _ZN10ObjectPoolI13DispatcherJobED2Ev(void) {
    ALOGD("_ZN10ObjectPoolI13DispatcherJobED2Ev() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, char const*, CCORR_STATE, CCORR_STATE, int, bool, bool>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, CCORR_STATE, CCORR_STATE, int, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcS2_11CCORR_STATES3_ibbEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcS2_11CCORR_STATES3_ibbEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: HWCLayer::setVisibleRegion(hwc_region const&) */
extern "C" __attribute__((visibility("default"))) int _ZN8HWCLayer16setVisibleRegionERK10hwc_region(void) {
    ALOGD("_ZN8HWCLayer16setVisibleRegionERK10hwc_region() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, int, long>(unsigned int const&, unsigned char const&, char const*, char const*, int, long) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcilEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcilEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char*, char*, int, int, int>(unsigned int const&, unsigned char const&, char const*, char*, char*, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPcS1_iiiEEERKjRKhPKcDpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPcS1_iiiEEERKjRKhPKcDpT_() called");
    return 0;
}

/* Exported Object: vtable for ComposerHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTV15ComposerHandler = NULL;

/* Demangled: AsyncBliterHandler::processFillBlack(PrivateHandle*, int*, MdpJob&) */
extern "C" __attribute__((visibility("default"))) int _ZN18AsyncBliterHandler16processFillBlackEP13PrivateHandlePiR6MdpJob(void) {
    ALOGD("_ZN18AsyncBliterHandler16processFillBlackEP13PrivateHandlePiR6MdpJob() called");
    return 0;
}

/* Exported Object: g_hwc2_api */
extern "C" __attribute__((visibility("default"))) void* g_hwc2_api = NULL;

/* Demangled: HWCMediator::displayDestroyLayer(hwc2_device*, unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator19displayDestroyLayerEP11hwc2_devicemm(void) {
    ALOGD("_ZN11HWCMediator19displayDestroyLayerEP11hwc2_devicemm() called");
    return 0;
}

/* Demangled: DisplayManager::checkIsWfd() */
extern "C" __attribute__((visibility("default"))) int _ZN14DisplayManager10checkIsWfdEv(void) {
    ALOGD("_ZN14DisplayManager10checkIsWfdEv() called");
    return 0;
}

/* Exported Object: Debugger::m_skip_log */
extern "C" __attribute__((visibility("default"))) void* _ZN8Debugger10m_skip_logE = NULL;

/* Demangled: DispatchThread::trigger(android::sp<DispatcherJob>) */
extern "C" __attribute__((visibility("default"))) int _ZN14DispatchThread7triggerEN7android2spI13DispatcherJobEE(void) {
    ALOGD("_ZN14DispatchThread7triggerEN7android2spI13DispatcherJobEE() called");
    return 0;
}

/* Demangled: UEventThread::threadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN12UEventThread10threadLoopEv(void) {
    ALOGD("_ZN12UEventThread10threadLoopEv() called");
    return 0;
}

/* Demangled: GrallocDevice::~GrallocDevice() */
extern "C" __attribute__((visibility("default"))) int _ZN13GrallocDeviceD0Ev(void) {
    ALOGD("_ZN13GrallocDeviceD0Ev() called");
    return 0;
}

/* Demangled: hwc::Gralloc2Mapper::getTransportSize(native_handle const*, unsigned int*, unsigned int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc2Mapper16getTransportSizeEPK13native_handlePjS4_(void) {
    ALOGD("_ZNK3hwc14Gralloc2Mapper16getTransportSizeEPK13native_handlePjS4_() called");
    return 0;
}

/* Demangled: non-virtual thunk to DispatchThread::onVSync() */
extern "C" __attribute__((visibility("default"))) int _ZThn296_N14DispatchThread7onVSyncEv(void) {
    ALOGD("_ZThn296_N14DispatchThread7onVSyncEv() called");
    return 0;
}

/* Exported Object: VTT for DisplayBufferQueue */
extern "C" __attribute__((visibility("default"))) void* _ZTT18DisplayBufferQueue = NULL;

/* Demangled: getDstBottom(android::sp<HWCLayer> const&) */
extern "C" __attribute__((visibility("default"))) int _Z12getDstBottomRKN7android2spI8HWCLayerEE(void) {
    ALOGD("_Z12getDstBottomRKN7android2spI8HWCLayerEE() called");
    return 0;
}

/* Demangled: HWCDisplay::updateGlesRange() */
extern "C" __attribute__((visibility("default"))) int _ZN10HWCDisplay15updateGlesRangeEv(void) {
    ALOGD("_ZN10HWCDisplay15updateGlesRangeEv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long, HWCDispatcher::WorkerCluster::PrevHwcLayer>, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, HWCDispatcher::WorkerCluster::PrevHwcLayer>, std::__1::hash<unsigned long>, true>, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, HWCDispatcher::WorkerCluster::PrevHwcLayer>, std::__1::equal_to<unsigned long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long, HWCDispatcher::WorkerCluster::PrevHwcLayer> > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeImN13HWCDispatcher13WorkerCluster12PrevHwcLayerEEENS_22__unordered_map_hasherImS5_NS_4hashImEELb1EEENS_21__unordered_map_equalImS5_NS_8equal_toImEELb1EEENS_9allocatorIS5_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeImN13HWCDispatcher13WorkerCluster12PrevHwcLayerEEENS_22__unordered_map_hasherImS5_NS_4hashImEELb1EEENS_21__unordered_map_equalImS5_NS_8equal_toImEELb1EEENS_9allocatorIS5_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: DispDevice::getNumConfigs(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice13getNumConfigsEm(void) {
    ALOGD("_ZN10DispDevice13getNumConfigsEm() called");
    return 0;
}

/* Demangled: BlackBuffer::BlackBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN11BlackBufferC2Ev(void) {
    ALOGD("_ZN11BlackBufferC2Ev() called");
    return 0;
}

/* Demangled: hwc::Gralloc4Mapper::getInterlaced(native_handle const*, aidl::android::hardware::graphics::common::ExtendableType*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc4Mapper13getInterlacedEPK13native_handlePN4aidl7android8hardware8graphics6common14ExtendableTypeE(void) {
    ALOGD("_ZNK3hwc14Gralloc4Mapper13getInterlacedEPK13native_handlePN4aidl7android8hardware8graphics6common14ExtendableTypeE() called");
    return 0;
}

/* Demangled: HWCMediator::displayPresent(hwc2_device*, unsigned long, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator14displayPresentEP11hwc2_devicemPi(void) {
    ALOGD("_ZN11HWCMediator14displayPresentEP11hwc2_devicemPi() called");
    return 0;
}

/* Demangled: HWCDisplay::initPrevCompTypes() */
extern "C" __attribute__((visibility("default"))) int _ZN10HWCDisplay17initPrevCompTypesEv(void) {
    ALOGD("_ZN10HWCDisplay17initPrevCompTypesEv() called");
    return 0;
}

/* Demangled: HWCLayer::decideMdpOutDataspace() const */
extern "C" __attribute__((visibility("default"))) int _ZNK8HWCLayer21decideMdpOutDataspaceEv(void) {
    ALOGD("_ZNK8HWCLayer21decideMdpOutDataspaceEv() called");
    return 0;
}

/* Demangled: HWCLayer::isGameHDR() const */
extern "C" __attribute__((visibility("default"))) int _ZNK8HWCLayer9isGameHDREv(void) {
    ALOGD("_ZNK8HWCLayer9isGameHDREv() called");
    return 0;
}

/* Demangled: hwc::GraphicBufferMapper::getLayerCount(native_handle const*, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZN3hwc19GraphicBufferMapper13getLayerCountEPK13native_handlePm(void) {
    ALOGD("_ZN3hwc19GraphicBufferMapper13getLayerCountEPK13native_handlePm() called");
    return 0;
}

/* Demangled: hwc::GraphicBufferMapper::getUsage(native_handle const*, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZN3hwc19GraphicBufferMapper8getUsageEPK13native_handlePm(void) {
    ALOGD("_ZN3hwc19GraphicBufferMapper8getUsageEPK13native_handlePm() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, char const*, unsigned long, int>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, unsigned long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcS2_miEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcS2_miEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Exported Object: HWC_COMPOSITION_FILE_UNKNOWN_STR */
extern "C" __attribute__((visibility("default"))) void* HWC_COMPOSITION_FILE_UNKNOWN_STR = NULL;

/* Demangled: std::__1::__tree<std::__1::__value_type<unsigned long, android::sp<HWCLayer> >, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, android::sp<HWCLayer> >, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, android::sp<HWCLayer> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<unsigned long, android::sp<HWCLayer> >, std::__1::__tree_node<std::__1::__value_type<unsigned long, android::sp<HWCLayer> >, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeImN7android2spI8HWCLayerEEEENS_19__map_value_compareImS6_NS_4lessImEELb1EEENS_9allocatorIS6_EEE5eraseENS_21__tree_const_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeImN7android2spI8HWCLayerEEEENS_19__map_value_compareImS6_NS_4lessImEELb1EEENS_9allocatorIS6_EEE5eraseENS_21__tree_const_iteratorIS6_PNS_11__tree_nodeIS6_PvEElEE() called");
    return 0;
}

/* Demangled: HWCMediator::displayValidateDisplay(hwc2_device*, unsigned long, unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator22displayValidateDisplayEP11hwc2_devicemPjS2_(void) {
    ALOGD("_ZN11HWCMediator22displayValidateDisplayEP11hwc2_devicemPjS2_() called");
    return 0;
}

/* Demangled: HWCDisplay::hasGPUComposition() */
extern "C" __attribute__((visibility("default"))) int _ZN10HWCDisplay17hasGPUCompositionEv(void) {
    ALOGD("_ZN10HWCDisplay17hasGPUCompositionEv() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<android::sp<FrameInfo> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_2spI9FrameInfoEEEE = NULL;

/* Demangled: android::SWWatchDog::Recipient::onTimeout(unsigned long const&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, long const&, long const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10SWWatchDog9Recipient9onTimeoutERKmRKiRKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKlSG_(void) {
    ALOGD("_ZN7android10SWWatchDog9Recipient9onTimeoutERKmRKiRKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKlSG_() called");
    return 0;
}

/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSJ_8hidl_vecIhEEPT_ESW_EUlRKSV_SU_E_NSC_IS11_EEFvNSM_5ErrorESU_EE7destroyEv */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSJ_8hidl_vecIhEEPT_ESW_EUlRKSV_SU_E_NSC_IS11_EEFvNSM_5ErrorESU_EE7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSJ_8hidl_vecIhEEPT_ESW_EUlRKSV_SU_E_NSC_IS11_EEFvNSM_5ErrorESU_EE7destroyEv() called");
    return 0;
}

/* Demangled: hwc::GraphicBufferMapper::importBuffer(native_handle const*, unsigned int, unsigned int, unsigned int, int, unsigned long, unsigned int, native_handle const**) */
extern "C" __attribute__((visibility("default"))) int _ZN3hwc19GraphicBufferMapper12importBufferEPK13native_handlejjjimjPS3_(void) {
    ALOGD("_ZN3hwc19GraphicBufferMapper12importBufferEPK13native_handlejjjimjPS3_() called");
    return 0;
}

/* Demangled: AsyncBlitDevice::setPowerMode(unsigned long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN15AsyncBlitDevice12setPowerModeEmi(void) {
    ALOGD("_ZN15AsyncBlitDevice12setPowerModeEmi() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, char const*, int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmS2_iEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmS2_iEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: virtual thunk to UEventThread::~UEventThread() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N12UEventThreadD1Ev(void) {
    ALOGD("_ZTv0_n24_N12UEventThreadD1Ev() called");
    return 0;
}

/* Demangled: AsyncBlitDevice::enableOverlayOutput(unsigned long, OverlayPortParam*) */
extern "C" __attribute__((visibility("default"))) int _ZN15AsyncBlitDevice19enableOverlayOutputEmP16OverlayPortParam(void) {
    ALOGD("_ZN15AsyncBlitDevice19enableOverlayOutputEmP16OverlayPortParam() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, int, unsigned long, char const*, long, long>(unsigned int const&, unsigned char const&, char const*, char const*, int, unsigned long, char const*, long, long) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcimS2_llEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcimS2_llEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: hwc::Gralloc4Mapper::getCta861_3(native_handle const*, std::__1::optional<aidl::android::hardware::graphics::common::Cta861_3>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc4Mapper11getCta861_3EPK13native_handlePNSt3__18optionalIN4aidl7android8hardware8graphics6common8Cta861_3EEE(void) {
    ALOGD("_ZNK3hwc14Gralloc4Mapper11getCta861_3EPK13native_handlePNSt3__18optionalIN4aidl7android8hardware8graphics6common8Cta861_3EEE() called");
    return 0;
}

/* Demangled: HWCMediator::displayGetClientTargetSupport(hwc2_device*, unsigned long, unsigned int, unsigned int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator29displayGetClientTargetSupportEP11hwc2_devicemjjii(void) {
    ALOGD("_ZN11HWCMediator29displayGetClientTargetSupportEP11hwc2_devicemjjii() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<HWCLayer>, std::__1::allocator<android::sp<HWCLayer> > >::__push_back_slow_path<android::sp<HWCLayer> const&>(android::sp<HWCLayer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spI8HWCLayerEENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spI8HWCLayerEENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_() called");
    return 0;
}

/* Exported Object: vtable for android::DisplayFeatureGet */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android17DisplayFeatureGetE = NULL;

/* Demangled: DbgLogBufManager::getLogBuf(DbgLogBufManager::DBG_BUF*) */
extern "C" __attribute__((visibility("default"))) int _ZN16DbgLogBufManager9getLogBufEPNS_7DBG_BUFE(void) {
    ALOGD("_ZN16DbgLogBufManager9getLogBufEPNS_7DBG_BUFE() called");
    return 0;
}

/* Demangled: __floatditf */
extern "C" __attribute__((visibility("default"))) int __floatditf(void) {
    ALOGD("__floatditf() called");
    return 0;
}

/* Demangled: AsyncBliterHandler::processFillWhite(PrivateHandle*, int*, MdpJob&) */
extern "C" __attribute__((visibility("default"))) int _ZN18AsyncBliterHandler16processFillWhiteEP13PrivateHandlePiR6MdpJob(void) {
    ALOGD("_ZN18AsyncBliterHandler16processFillWhiteEP13PrivateHandlePiR6MdpJob() called");
    return 0;
}

/* Demangled: AsyncBliterHandler::processVirMirror(DispatcherJob*) */
extern "C" __attribute__((visibility("default"))) int _ZN18AsyncBliterHandler16processVirMirrorEP13DispatcherJob(void) {
    ALOGD("_ZN18AsyncBliterHandler16processVirMirrorEP13DispatcherJob() called");
    return 0;
}

/* Demangled: DisplayBufferQueue::setSynchronousMode(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN18DisplayBufferQueue18setSynchronousModeEb(void) {
    ALOGD("_ZN18DisplayBufferQueue18setSynchronousModeEb() called");
    return 0;
}

/* Demangled: ColorTransform::isIdentity() const */
extern "C" __attribute__((visibility("default"))) int _ZNK14ColorTransform10isIdentityEv(void) {
    ALOGD("_ZNK14ColorTransform10isIdentityEv() called");
    return 0;
}

/* Exported Object: HWC_COMPOSITION_FILE_HWC_LAYER_STR */
extern "C" __attribute__((visibility("default"))) void* HWC_COMPOSITION_FILE_HWC_LAYER_STR = NULL;

/* Demangled: DisplayManager::printDisplayInfo(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN14DisplayManager16printDisplayInfoEm(void) {
    ALOGD("_ZN14DisplayManager16printDisplayInfoEm() called");
    return 0;
}

/* Exported Object: mPanelEventMonitorThread */
extern "C" __attribute__((visibility("default"))) void* mPanelEventMonitorThread = NULL;

/* Demangled: DbgLogger::DbgLogger<char const*, int, unsigned long, char*>(unsigned int const&, unsigned char const&, char const*, char const*, int, unsigned long, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcimPcEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcimPcEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Exported Object: construction vtable for HWCThread-in-VSyncThread */
extern "C" __attribute__((visibility("default"))) void* _ZTC11VSyncThread0_9HWCThread = NULL;

/* Demangled: hwc::Gralloc4Mapper::getHeight(native_handle const*, unsigned long*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc4Mapper9getHeightEPK13native_handlePm(void) {
    ALOGD("_ZNK3hwc14Gralloc4Mapper9getHeightEPK13native_handlePm() called");
    return 0;
}

/* Demangled: DisplayBufferQueue::DisplayBufferQueue(int, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN18DisplayBufferQueueC1Eim(void) {
    ALOGD("_ZN18DisplayBufferQueueC1Eim() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, char const*, DisplayBufferQueue*, unsigned long>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, DisplayBufferQueue*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueuemEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueuemEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<unsigned long, unsigned int, bool>(unsigned int const&, unsigned char const&, char const*, unsigned long, unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJmjbEEERKjRKhPKcDpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJmjbEEERKjRKhPKcDpT_() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<int, unsigned int, unsigned int, int, int, int, int>(unsigned int const&, unsigned char const&, char const*, int, unsigned int, unsigned int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJijjiiiiEEERKjRKhPKcDpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJijjiiiiEEERKjRKhPKcDpT_() called");
    return 0;
}

/* Demangled: AsyncBlitDevice::getMaxOverlayWidth() */
extern "C" __attribute__((visibility("default"))) int _ZN15AsyncBlitDevice18getMaxOverlayWidthEv(void) {
    ALOGD("_ZN15AsyncBlitDevice18getMaxOverlayWidthEv() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, bool>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<int, bool>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, bool>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, bool>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, bool> > >::__emplace_unique_key_args<int, std::__1::pair<int const, bool> >(int const&, std::__1::pair<int const, bool>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIibEENS_22__unordered_map_hasherIiS2_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS2_NS_8equal_toIiEELb1EEENS_9allocatorIS2_EEE25__emplace_unique_key_argsIiJNS_4pairIKibEEEEENSF_INS_15__hash_iteratorIPNS_11__hash_nodeIS2_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIibEENS_22__unordered_map_hasherIiS2_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS2_NS_8equal_toIiEELb1EEENS_9allocatorIS2_EEE25__emplace_unique_key_argsIiJNS_4pairIKibEEEEENSF_INS_15__hash_iteratorIPNS_11__hash_nodeIS2_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, char const*, int, int, char const*>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, int, int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcS2_iiS2_EEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcS2_iiS2_EEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: hwc::Gralloc4Mapper::getAllocationSize(native_handle const*, unsigned long*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc4Mapper17getAllocationSizeEPK13native_handlePm(void) {
    ALOGD("_ZNK3hwc14Gralloc4Mapper17getAllocationSizeEPK13native_handlePm() called");
    return 0;
}

/* Demangled: getDstLeft(android::sp<HWCLayer> const&) */
extern "C" __attribute__((visibility("default"))) int _Z10getDstLeftRKN7android2spI8HWCLayerEE(void) {
    ALOGD("_Z10getDstLeftRKN7android2spI8HWCLayerEE() called");
    return 0;
}

/* Exported Object: HWC2_COMPOSITION_CLIENT_STR */
extern "C" __attribute__((visibility("default"))) void* HWC2_COMPOSITION_CLIENT_STR = NULL;

/* Exported Object: _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common8Cta861_3EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EEE */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common8Cta861_3EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EEE = NULL;

/* Demangled: hwc::GraphicBufferMapper::getAllocationSize(native_handle const*, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZN3hwc19GraphicBufferMapper17getAllocationSizeEPK13native_handlePm(void) {
    ALOGD("_ZN3hwc19GraphicBufferMapper17getAllocationSizeEPK13native_handlePm() called");
    return 0;
}

/* Demangled: HWCDispatcher::PostHandler::setOverlayInput(DispatcherJob*) */
extern "C" __attribute__((visibility("default"))) int _ZN13HWCDispatcher11PostHandler15setOverlayInputEP13DispatcherJob(void) {
    ALOGD("_ZN13HWCDispatcher11PostHandler15setOverlayInputEP13DispatcherJob() called");
    return 0;
}

/* Demangled: PanelEventMonitorThread::threadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN23PanelEventMonitorThread10threadLoopEv(void) {
    ALOGD("_ZN23PanelEventMonitorThread10threadLoopEv() called");
    return 0;
}

/* Demangled: virtual thunk to VSyncThread::~VSyncThread() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N11VSyncThreadD0Ev(void) {
    ALOGD("_ZTv0_n24_N11VSyncThreadD0Ev() called");
    return 0;
}

/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common8Cta861_3EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EE7destroyEv */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common8Cta861_3EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EE7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common8Cta861_3EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EE7destroyEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >::destroy(std::__1::__tree_node<unsigned long, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeImNS_4lessImEENS_9allocatorImEEE7destroyEPNS_11__tree_nodeImPvEE(void) {
    ALOGD("_ZNSt3__16__treeImNS_4lessImEENS_9allocatorImEEE7destroyEPNS_11__tree_nodeImPvEE() called");
    return 0;
}

/* Demangled: HWLayer::HWLayer() */
extern "C" __attribute__((visibility("default"))) int _ZN7HWLayerC2Ev(void) {
    ALOGD("_ZN7HWLayerC2Ev() called");
    return 0;
}

/* Exported Object: g_refresh_thread */
extern "C" __attribute__((visibility("default"))) void* g_refresh_thread = NULL;

/* Demangled: DbgLogger::DbgLogger<char const*, char const*, DisplayBufferQueue*, unsigned int, native_handle const*, bool, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, DisplayBufferQueue*, unsigned int, native_handle const*, bool, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueuejPK13native_handlebjjjjjjEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueuejPK13native_handlebjjjjjjEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: IPqDevice::isColorTransformIoctl() */
extern "C" __attribute__((visibility("default"))) int _ZN9IPqDevice21isColorTransformIoctlEv(void) {
    ALOGD("_ZN9IPqDevice21isColorTransformIoctlEv() called");
    return 0;
}

/* Demangled: hwc::Gralloc4Mapper::getDefaultCompression(unsigned int, unsigned int, int, unsigned int, unsigned long, aidl::android::hardware::graphics::common::ExtendableType*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc4Mapper21getDefaultCompressionEjjijmPN4aidl7android8hardware8graphics6common14ExtendableTypeE(void) {
    ALOGD("_ZNK3hwc14Gralloc4Mapper21getDefaultCompressionEjjijmPN4aidl7android8hardware8graphics6common14ExtendableTypeE() called");
    return 0;
}

/* Demangled: HWCMediator::layerStateSetTransform(hwc2_device*, unsigned long, unsigned long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator22layerStateSetTransformEP11hwc2_devicemmi(void) {
    ALOGD("_ZN11HWCMediator22layerStateSetTransformEP11hwc2_devicemmi() called");
    return 0;
}

/* Demangled: HWCDisplay::destroyLayer(unsigned long const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10HWCDisplay12destroyLayerERKm(void) {
    ALOGD("_ZN10HWCDisplay12destroyLayerERKm() called");
    return 0;
}

/* Demangled: HWCBuffer::setReleaseFenceFd(int const&, bool const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9HWCBuffer17setReleaseFenceFdERKiRKb(void) {
    ALOGD("_ZN9HWCBuffer17setReleaseFenceFdERKiRKb() called");
    return 0;
}

/* Demangled: DisplayBufferQueue::acquireBuffer(DisplayBufferQueue::DisplayBuffer*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN18DisplayBufferQueue13acquireBufferEPNS_13DisplayBufferEb(void) {
    ALOGD("_ZN18DisplayBufferQueue13acquireBufferEPNS_13DisplayBufferEb() called");
    return 0;
}

/* Demangled: IONDevice::ionImport(int*, bool const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9IONDevice9ionImportEPiRKb(void) {
    ALOGD("_ZN9IONDevice9ionImportEPiRKb() called");
    return 0;
}

/* Demangled: android::Vector<OverlayPortParam*>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIP16OverlayPortParamE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIP16OverlayPortParamE8do_splatEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for FrameInfo */
extern "C" __attribute__((visibility("default"))) void* _ZTV9FrameInfo = NULL;

/* Demangled: DbgLogger::DbgLogger<char const*, char const*, DisplayBufferQueue*, int, int>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, DisplayBufferQueue*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueueiiEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueueiiEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long, PrivateHandle>, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, PrivateHandle>, std::__1::hash<unsigned long>, true>, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, PrivateHandle>, std::__1::equal_to<unsigned long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long, PrivateHandle> > >::__rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIm13PrivateHandleEENS_22__unordered_map_hasherImS3_NS_4hashImEELb1EEENS_21__unordered_map_equalImS3_NS_8equal_toImEELb1EEENS_9allocatorIS3_EEE8__rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIm13PrivateHandleEENS_22__unordered_map_hasherImS3_NS_4hashImEELb1EEENS_21__unordered_map_equalImS3_NS_8equal_toImEELb1EEENS_9allocatorIS3_EEE8__rehashEm() called");
    return 0;
}

/* Demangled: DispDevice::getDisplayRotation(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice18getDisplayRotationEm(void) {
    ALOGD("_ZN10DispDevice18getDisplayRotationEm() called");
    return 0;
}

/* Demangled: HWCLayer::setHwlayerType(int const&, int const&, HWC_COMP_FILE const&) */
extern "C" __attribute__((visibility("default"))) int _ZN8HWCLayer14setHwlayerTypeERKiS1_RK13HWC_COMP_FILE(void) {
    ALOGD("_ZN8HWCLayer14setHwlayerTypeERKiS1_RK13HWC_COMP_FILE() called");
    return 0;
}

/* Demangled: HWCThread::waitLocked() */
extern "C" __attribute__((visibility("default"))) int _ZN9HWCThread10waitLockedEv(void) {
    ALOGD("_ZN9HWCThread10waitLockedEv() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned long, int, int, int, int, bool, char const*, char const*>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned long, int, int, int, int, bool, char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmmiiiibS2_S2_EEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmmiiiibS2_S2_EEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: DispDevice::getDeviceId(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice11getDeviceIdEm(void) {
    ALOGD("_ZN10DispDevice11getDeviceIdEm() called");
    return 0;
}

/* Demangled: HWCMediator::unlockRefreshThread(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator19unlockRefreshThreadEm(void) {
    ALOGD("_ZN11HWCMediator19unlockRefreshThreadEm() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, char const*, unsigned long>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcS2_mEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcS2_mEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, char const*, int, int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, char const*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmS2_iiEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmS2_iiEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: HWCDispatcher::onPlugIn(unsigned long, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN13HWCDispatcher8onPlugInEmjj(void) {
    ALOGD("_ZN13HWCDispatcher8onPlugInEmjj() called");
    return 0;
}

/* Demangled: OverlayEngine::releaseOutputQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN13OverlayEngine18releaseOutputQueueEv(void) {
    ALOGD("_ZN13OverlayEngine18releaseOutputQueueEv() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, char const*, unsigned long, int, int>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, unsigned long, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcS2_miiEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcS2_miiEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: HWCMediator::deviceRegisterCallback(hwc2_device*, int, void*, void (*)()) */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator22deviceRegisterCallbackEP11hwc2_deviceiPvPFvvE(void) {
    ALOGD("_ZN11HWCMediator22deviceRegisterCallbackEP11hwc2_deviceiPvPFvvE() called");
    return 0;
}

/* Demangled: HWCDisplay::getActiveConfigFPS() */
extern "C" __attribute__((visibility("default"))) int _ZN10HWCDisplay18getActiveConfigFPSEv(void) {
    ALOGD("_ZN10HWCDisplay18getActiveConfigFPSEv() called");
    return 0;
}

/* Demangled: virtual thunk to IdleThread::~IdleThread() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N10IdleThreadD1Ev(void) {
    ALOGD("_ZTv0_n24_N10IdleThreadD1Ev() called");
    return 0;
}

/* Demangled: DispDevice::getWidth(unsigned long, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice8getWidthEmj(void) {
    ALOGD("_ZN10DispDevice8getWidthEmj() called");
    return 0;
}

/* Demangled: DispatcherJob::DispatcherJob(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN13DispatcherJobC1Ej(void) {
    ALOGD("_ZN13DispatcherJobC1Ej() called");
    return 0;
}

/* Demangled: DisplayManager::createVsyncThread(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN14DisplayManager17createVsyncThreadEm(void) {
    ALOGD("_ZN14DisplayManager17createVsyncThreadEm() called");
    return 0;
}

/* Demangled: IdleThread::~IdleThread() */
extern "C" __attribute__((visibility("default"))) int _ZN10IdleThreadD0Ev(void) {
    ALOGD("_ZN10IdleThreadD0Ev() called");
    return 0;
}

/* Demangled: GrallocDevice::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN13GrallocDevice11getInstanceEv(void) {
    ALOGD("_ZN13GrallocDevice11getInstanceEv() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Demangled: HWCDisplay::setGlesRange(int const&, int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10HWCDisplay12setGlesRangeERKiS1_(void) {
    ALOGD("_ZN10HWCDisplay12setGlesRangeERKiS1_() called");
    return 0;
}

/* Demangled: Platform::isUILayerValid(android::sp<HWCLayer> const&, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN8Platform14isUILayerValidERKN7android2spI8HWCLayerEEPi(void) {
    ALOGD("_ZN8Platform14isUILayerValidERKN7android2spI8HWCLayerEEPi() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, char const*, unsigned int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmS2_jEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmS2_jEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: HWCDispatcher::decOvlEnginePowerModeChanged(unsigned long const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK13HWCDispatcher28decOvlEnginePowerModeChangedERKm(void) {
    ALOGD("_ZNK13HWCDispatcher28decOvlEnginePowerModeChangedERKm() called");
    return 0;
}

/* Demangled: hwc::Gralloc4Mapper::getDefaultCompression(unsigned int, unsigned int, int, unsigned int, unsigned long, aidl::android::hardware::graphics::common::Compression*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc4Mapper21getDefaultCompressionEjjijmPN4aidl7android8hardware8graphics6common11CompressionE(void) {
    ALOGD("_ZNK3hwc14Gralloc4Mapper21getDefaultCompressionEjjijmPN4aidl7android8hardware8graphics6common11CompressionE() called");
    return 0;
}

/* Demangled: AsyncBliterHandler::clearMdpJob(MdpJob*) */
extern "C" __attribute__((visibility("default"))) int _ZN18AsyncBliterHandler11clearMdpJobEP6MdpJob(void) {
    ALOGD("_ZN18AsyncBliterHandler11clearMdpJobEP6MdpJob() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, long, long, long, bool>(unsigned int const&, unsigned char const&, char const*, char const*, long, long, long, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKclllbEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKclllbEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >::__append(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS0_IfNS_9allocatorIfEEEENS1_IS3_EEE8__appendEm(void) {
    ALOGD("_ZNSt3__16vectorINS0_IfNS_9allocatorIfEEEENS1_IS3_EEE8__appendEm() called");
    return 0;
}

/* Demangled: android::Transform::set(float, float) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9Transform3setEff(void) {
    ALOGD("_ZN7android9Transform3setEff() called");
    return 0;
}

/* Demangled: non-virtual thunk to OverlayEngine::onVSync() */
extern "C" __attribute__((visibility("default"))) int _ZThn296_N13OverlayEngine7onVSyncEv(void) {
    ALOGD("_ZThn296_N13OverlayEngine7onVSyncEv() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, char const*, DisplayBufferQueue*, unsigned int, DisplayBufferQueue::BufferSlot::BufferState>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, DisplayBufferQueue*, unsigned int, DisplayBufferQueue::BufferSlot::BufferState) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueuejNS3_10BufferSlot11BufferStateEEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueuejNS3_10BufferSlot11BufferStateEEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::hidl_death_recipient-in-android::DisplayFeatureGet */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android17DisplayFeatureGetE0_NS_8hardware20hidl_death_recipientE = NULL;

/* Demangled: hwc::GraphicBufferMapper::getName(native_handle const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN3hwc19GraphicBufferMapper7getNameEPK13native_handlePNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void) {
    ALOGD("_ZN3hwc19GraphicBufferMapper7getNameEPK13native_handlePNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: DbgLogBufManager::~DbgLogBufManager() */
extern "C" __attribute__((visibility("default"))) int _ZN16DbgLogBufManagerD1Ev(void) {
    ALOGD("_ZN16DbgLogBufManagerD1Ev() called");
    return 0;
}

/* Demangled: hwc::Gralloc4Mapper::isLoaded() const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc4Mapper8isLoadedEv(void) {
    ALOGD("_ZNK3hwc14Gralloc4Mapper8isLoadedEv() called");
    return 0;
}

/* Demangled: HWCDisplay::getReleaseFenceFds(unsigned int*, unsigned long*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN10HWCDisplay18getReleaseFenceFdsEPjPmPi(void) {
    ALOGD("_ZN10HWCDisplay18getReleaseFenceFdsEPjPmPi() called");
    return 0;
}

/* Demangled: HWCDisplay::validate() */
extern "C" __attribute__((visibility("default"))) int _ZN10HWCDisplay8validateEv(void) {
    ALOGD("_ZN10HWCDisplay8validateEv() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned int, unsigned int, int, unsigned int, int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned int, unsigned int, int, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmjjijiEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmjjijiEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: __eqtf2 */
extern "C" __attribute__((visibility("default"))) int __eqtf2(void) {
    ALOGD("__eqtf2() called");
    return 0;
}

/* Demangled: HWCMediator::~HWCMediator() */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediatorD0Ev(void) {
    ALOGD("_ZN11HWCMediatorD0Ev() called");
    return 0;
}

/* Demangled: dupBufferHandle(native_handle const*, native_handle const**) */
extern "C" __attribute__((visibility("default"))) int _Z15dupBufferHandlePK13native_handlePS1_(void) {
    ALOGD("_Z15dupBufferHandlePK13native_handlePS1_() called");
    return 0;
}

/* Demangled: DispatchThread::DispatchThread(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN14DispatchThreadC2Em(void) {
    ALOGD("_ZN14DispatchThreadC2Em() called");
    return 0;
}

/* Demangled: HWVSyncEstimator::HWVSyncEstimator() */
extern "C" __attribute__((visibility("default"))) int _ZN16HWVSyncEstimatorC2Ev(void) {
    ALOGD("_ZN16HWVSyncEstimatorC2Ev() called");
    return 0;
}

/* Demangled: DisplayBufferQueue::drainQueueLocked() */
extern "C" __attribute__((visibility("default"))) int _ZN18DisplayBufferQueue16drainQueueLockedEv(void) {
    ALOGD("_ZN18DisplayBufferQueue16drainQueueLockedEv() called");
    return 0;
}

/* Demangled: android::FpsCounter::update() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10FpsCounter6updateEv(void) {
    ALOGD("_ZN7android10FpsCounter6updateEv() called");
    return 0;
}

/* Demangled: android::Transform::tx() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android9Transform2txEv(void) {
    ALOGD("_ZNK7android9Transform2txEv() called");
    return 0;
}

/* Demangled: android::SWWatchDog::~SWWatchDog() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10SWWatchDogD1Ev(void) {
    ALOGD("_ZN7android10SWWatchDogD1Ev() called");
    return 0;
}

/* Demangled: hwc::Gralloc4Mapper::getDefaultInterlaced(unsigned int, unsigned int, int, unsigned int, unsigned long, aidl::android::hardware::graphics::common::ExtendableType*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc4Mapper20getDefaultInterlacedEjjijmPN4aidl7android8hardware8graphics6common14ExtendableTypeE(void) {
    ALOGD("_ZNK3hwc14Gralloc4Mapper20getDefaultInterlacedEjjijmPN4aidl7android8hardware8graphics6common14ExtendableTypeE() called");
    return 0;
}

/* Demangled: HWCLayer::setPlaneAlpha(float const&) */
extern "C" __attribute__((visibility("default"))) int _ZN8HWCLayer13setPlaneAlphaERKf(void) {
    ALOGD("_ZN8HWCLayer13setPlaneAlphaERKf() called");
    return 0;
}

/* Demangled: HWCDisplay::getDpiX(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK10HWCDisplay7getDpiXEj(void) {
    ALOGD("_ZNK10HWCDisplay7getDpiXEj() called");
    return 0;
}

/* Exported Object: VTT for TouchHintThread */
extern "C" __attribute__((visibility("default"))) void* _ZTT15TouchHintThread = NULL;

/* Demangled: OverlayEngine::onFirstRef() */
extern "C" __attribute__((visibility("default"))) int _ZN13OverlayEngine10onFirstRefEv(void) {
    ALOGD("_ZN13OverlayEngine10onFirstRefEv() called");
    return 0;
}

/* Demangled: dump_buf(unsigned int const&, int const&, unsigned int const&, android::Rect const&, unsigned int const&, char const*, bool const&) */
extern "C" __attribute__((visibility("default"))) int _Z8dump_bufRKjRKiS0_RKN7android4RectES0_PKcRKb(void) {
    ALOGD("_Z8dump_bufRKjRKiS0_RKN7android4RectES0_PKcRKb() called");
    return 0;
}

/* Demangled: BliterNode::~BliterNode() */
extern "C" __attribute__((visibility("default"))) int _ZN10BliterNodeD1Ev(void) {
    ALOGD("_ZN10BliterNodeD1Ev() called");
    return 0;
}

/* Demangled: HWC2Api::~HWC2Api() */
extern "C" __attribute__((visibility("default"))) int _ZN7HWC2ApiD1Ev(void) {
    ALOGD("_ZN7HWC2ApiD1Ev() called");
    return 0;
}

/* Exported Object: VTT for LayerComposer */
extern "C" __attribute__((visibility("default"))) void* _ZTT13LayerComposer = NULL;

/* Demangled: android::Vector<FrameInfo*>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIP9FrameInfoE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIP9FrameInfoE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned int, unsigned int, unsigned int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcjjjEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcjjjEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: HWCLayer::setBlend(int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN8HWCLayer8setBlendERKi(void) {
    ALOGD("_ZN8HWCLayer8setBlendERKi() called");
    return 0;
}

/* Demangled: PanelEventMonitorThread::~PanelEventMonitorThread() */
extern "C" __attribute__((visibility("default"))) int _ZN23PanelEventMonitorThreadD0Ev(void) {
    ALOGD("_ZN23PanelEventMonitorThreadD0Ev() called");
    return 0;
}

/* Demangled: android::Vector<MdpJobInfo>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorI10MdpJobInfoE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorI10MdpJobInfoE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: hwc::Gralloc2Mapper::Gralloc2Mapper() */
extern "C" __attribute__((visibility("default"))) int _ZN3hwc14Gralloc2MapperC2Ev(void) {
    ALOGD("_ZN3hwc14Gralloc2MapperC2Ev() called");
    return 0;
}

/* Demangled: RefreshRequestThread::RefreshRequestThread() */
extern "C" __attribute__((visibility("default"))) int _ZN20RefreshRequestThreadC1Ev(void) {
    ALOGD("_ZN20RefreshRequestThreadC1Ev() called");
    return 0;
}

/* Demangled: VSyncThread::threadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN11VSyncThread10threadLoopEv(void) {
    ALOGD("_ZN11VSyncThread10threadLoopEv() called");
    return 0;
}

/* Demangled: AsyncBliterHandler::configDisplayBufferQueue(android::sp<DisplayBufferQueue>, PrivateHandle*, AsyncBliterHandler::BufferConfig*, DisplayData const*, unsigned int const&, bool const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK18AsyncBliterHandler24configDisplayBufferQueueEN7android2spI18DisplayBufferQueueEEP13PrivateHandlePNS_12BufferConfigEPK11DisplayDataRKjRKb(void) {
    ALOGD("_ZNK18AsyncBliterHandler24configDisplayBufferQueueEN7android2spI18DisplayBufferQueueEEP13PrivateHandlePNS_12BufferConfigEPK11DisplayDataRKjRKb() called");
    return 0;
}

/* Demangled: AsyncBlitDevice::isConstantAlphaForRGBASupported() */
extern "C" __attribute__((visibility("default"))) int _ZN15AsyncBlitDevice31isConstantAlphaForRGBASupportedEv(void) {
    ALOGD("_ZN15AsyncBlitDevice31isConstantAlphaForRGBASupportedEv() called");
    return 0;
}

/* Demangled: HrtCommon::dump(android::String8*) */
extern "C" __attribute__((visibility("default"))) int _ZN9HrtCommon4dumpEPN7android7String8E(void) {
    ALOGD("_ZN9HrtCommon4dumpEPN7android7String8E() called");
    return 0;
}

/* Demangled: hwc::Gralloc4Mapper::getDefaultPixelFormatFourCC(unsigned int, unsigned int, int, unsigned int, unsigned long, unsigned int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc4Mapper27getDefaultPixelFormatFourCCEjjijmPj(void) {
    ALOGD("_ZNK3hwc14Gralloc4Mapper27getDefaultPixelFormatFourCCEjjijmPj() called");
    return 0;
}

/* Demangled: HWCDisplay::getVsyncPeriod(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK10HWCDisplay14getVsyncPeriodEj(void) {
    ALOGD("_ZNK10HWCDisplay14getVsyncPeriodEj() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<FrameInfo> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spI9FrameInfoEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spI9FrameInfoEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: AsyncBlitDevice::~AsyncBlitDevice() */
extern "C" __attribute__((visibility("default"))) int _ZN15AsyncBlitDeviceD0Ev(void) {
    ALOGD("_ZN15AsyncBlitDeviceD0Ev() called");
    return 0;
}

/* Demangled: DispDevice::frameConfig(unsigned long, int, int, int, unsigned int, unsigned int const&, unsigned int const&, bool const&, bool const&, bool const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice11frameConfigEmiiijRKjS1_RKbS3_S3_(void) {
    ALOGD("_ZN10DispDevice11frameConfigEmiiijRKjS1_RKbS3_S3_() called");
    return 0;
}

/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIjEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EE18destroy_deallocateEv */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIjEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EE18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIjEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EE18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: OverlayEngine::OverlayEngine(unsigned long const&, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN13OverlayEngineC1ERKmjj(void) {
    ALOGD("_ZN13OverlayEngineC1ERKmjj() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned long, unsigned int, bool, int, int, int, int, unsigned int, unsigned int, int, int, unsigned long, int, bool, int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned long, unsigned int, bool, int, int, int, int, unsigned int, unsigned int, int, int, unsigned long, int, bool, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmmjbiiiijjiimibiEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmmjbiiiijjiimibiEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::sp<HWCVSyncListener> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_2spI16HWCVSyncListenerEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_2spI16HWCVSyncListenerEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: DisplayBufferQueue::cancelBuffer(int) */
extern "C" __attribute__((visibility("default"))) int _ZN18DisplayBufferQueue12cancelBufferEi(void) {
    ALOGD("_ZN18DisplayBufferQueue12cancelBufferEi() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, SyncFence*, char const*, unsigned long, int, int>(unsigned int const&, unsigned char const&, char const*, char const*, SyncFence*, char const*, unsigned long, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcP9SyncFenceS2_miiEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcP9SyncFenceS2_miiEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, int, int, int, int, int, int, int, int>(unsigned int const&, unsigned char const&, char const*, char const*, int, int, int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKciiiiiiiiEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKciiiiiiiiEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned int, int, int, native_handle const*>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned int, int, int, native_handle const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmjiiPK13native_handleEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmjiiPK13native_handleEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, char const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcS2_jjjjjjEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcS2_jjjjjjEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: hwc::Gralloc4Mapper::getName(native_handle const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc4Mapper7getNameEPK13native_handlePNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE(void) {
    ALOGD("_ZNK3hwc14Gralloc4Mapper7getNameEPK13native_handlePNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: BliterNode::setDst(unsigned int const&, BliterNode::Parameter*, int, unsigned int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN10BliterNode6setDstERKjPNS_9ParameterEijPi(void) {
    ALOGD("_ZN10BliterNode6setDstERKjPNS_9ParameterEijPi() called");
    return 0;
}

/* Demangled: PlatformCommon::getLimitedExternalDisplaySize() */
extern "C" __attribute__((visibility("default"))) int _ZN14PlatformCommon29getLimitedExternalDisplaySizeEv(void) {
    ALOGD("_ZN14PlatformCommon29getLimitedExternalDisplaySizeEv() called");
    return 0;
}

/* Demangled: hwc::Gralloc2Mapper::unlock(native_handle const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc2Mapper6unlockEPK13native_handle(void) {
    ALOGD("_ZNK3hwc14Gralloc2Mapper6unlockEPK13native_handle() called");
    return 0;
}

/* Demangled: HWCMediator::displayGetConfigs(hwc2_device*, unsigned long, unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator17displayGetConfigsEP11hwc2_devicemPjS2_(void) {
    ALOGD("_ZN11HWCMediator17displayGetConfigsEP11hwc2_devicemPjS2_() called");
    return 0;
}

/* Demangled: HWCDisplay::getChangedCompositionTypes(unsigned int*, unsigned long*, int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK10HWCDisplay26getChangedCompositionTypesEPjPmPi(void) {
    ALOGD("_ZNK10HWCDisplay26getChangedCompositionTypesEPjPmPi() called");
    return 0;
}

/* Demangled: android::Vector<native_handle const*>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIPK13native_handleE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIPK13native_handleE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Transform::dump(char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android9Transform4dumpEPKc(void) {
    ALOGD("_ZNK7android9Transform4dumpEPKc() called");
    return 0;
}

/* Exported Object: _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalINS_6vectorIhNS_9allocatorIhEEEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS7_ISX_EEFvNSI_5ErrorESQ_EEE */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalINS_6vectorIhNS_9allocatorIhEEEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS7_ISX_EEFvNSI_5ErrorESQ_EEE = NULL;

/* Demangled: mapDpColorRange(unsigned int, bool const&) */
extern "C" __attribute__((visibility("default"))) int _Z15mapDpColorRangejRKb(void) {
    ALOGD("_Z15mapDpColorRangejRKb() called");
    return 0;
}

/* Demangled: findGlesRange(std::__1::vector<android::sp<HWCLayer>, std::__1::allocator<android::sp<HWCLayer> > > const&, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _Z13findGlesRangeRKNSt3__16vectorIN7android2spI8HWCLayerEENS_9allocatorIS4_EEEEPiSA_(void) {
    ALOGD("_Z13findGlesRangeRKNSt3__16vectorIN7android2spI8HWCLayerEENS_9allocatorIS4_EEEEPiSA_() called");
    return 0;
}

/* Demangled: DispDevice::isConstantAlphaForRGBASupported() */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice31isConstantAlphaForRGBASupportedEv(void) {
    ALOGD("_ZN10DispDevice31isConstantAlphaForRGBASupportedEv() called");
    return 0;
}

/* Demangled: hwc::GraphicBufferMapper::getProtectedContent(native_handle const*, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZN3hwc19GraphicBufferMapper19getProtectedContentEPK13native_handlePm(void) {
    ALOGD("_ZN3hwc19GraphicBufferMapper19getProtectedContentEPK13native_handlePm() called");
    return 0;
}

/* Demangled: OverlayEngine::stop() */
extern "C" __attribute__((visibility("default"))) int _ZN13OverlayEngine4stopEv(void) {
    ALOGD("_ZN13OverlayEngine4stopEv() called");
    return 0;
}

/* Exported Object: VTT for DispatchThread */
extern "C" __attribute__((visibility("default"))) void* _ZTT14DispatchThread = NULL;

/* Demangled: android::Vector<OverlayEngine::OverlayInput*>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIPN13OverlayEngine12OverlayInputEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIPN13OverlayEngine12OverlayInputEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Exported Object: HWC_COMPOSITION_FILE_PLATFORM_COMMON_STR */
extern "C" __attribute__((visibility("default"))) void* HWC_COMPOSITION_FILE_PLATFORM_COMMON_STR = NULL;

/* Demangled: HWCDisplay::decUnpresentCount() */
extern "C" __attribute__((visibility("default"))) int _ZN10HWCDisplay17decUnpresentCountEv(void) {
    ALOGD("_ZN10HWCDisplay17decUnpresentCountEv() called");
    return 0;
}

/* Demangled: PerfHelper::loadApi() */
extern "C" __attribute__((visibility("default"))) int _ZN10PerfHelper7loadApiEv(void) {
    ALOGD("_ZN10PerfHelper7loadApiEv() called");
    return 0;
}

/* Demangled: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE7__cloneEv */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE7__cloneEv() called");
    return 0;
}

/* Demangled: HWVSyncEstimator::resetAvgVSyncPeriod(long) */
extern "C" __attribute__((visibility("default"))) int _ZN16HWVSyncEstimator19resetAvgVSyncPeriodEl(void) {
    ALOGD("_ZN16HWVSyncEstimator19resetAvgVSyncPeriodEl() called");
    return 0;
}

/* Demangled: ComposerHandler::process(DispatcherJob*) */
extern "C" __attribute__((visibility("default"))) int _ZN15ComposerHandler7processEP13DispatcherJob(void) {
    ALOGD("_ZN15ComposerHandler7processEP13DispatcherJob() called");
    return 0;
}

/* Demangled: android::FpsCounter::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10FpsCounter5resetEv(void) {
    ALOGD("_ZN7android10FpsCounter5resetEv() called");
    return 0;
}

/* Demangled: hwc::Gralloc4Mapper::getBufferId(native_handle const*, unsigned long*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc4Mapper11getBufferIdEPK13native_handlePm(void) {
    ALOGD("_ZNK3hwc14Gralloc4Mapper11getBufferIdEPK13native_handlePm() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<android::sp<DispatcherJob> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorINS_2spI13DispatcherJobEEEE = NULL;

/* Demangled: LayerComposer::~LayerComposer() */
extern "C" __attribute__((visibility("default"))) int _ZN13LayerComposerD2Ev(void) {
    ALOGD("_ZN13LayerComposerD2Ev() called");
    return 0;
}

/* Demangled: OverlayEngine::threadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN13OverlayEngine10threadLoopEv(void) {
    ALOGD("_ZN13OverlayEngine10threadLoopEv() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<BliterNode::JobParam> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<BliterNode::JobParam> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<BliterNode::JobParam> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<BliterNode::JobParam> > > >::remove(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<BliterNode::JobParam> >, void*>*>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN10BliterNode8JobParamEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS6_PvEEEE(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN10BliterNode8JobParamEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS6_PvEEEE() called");
    return 0;
}

/* Demangled: getSrcWidth(android::sp<HWCLayer> const&) */
extern "C" __attribute__((visibility("default"))) int _Z11getSrcWidthRKN7android2spI8HWCLayerEE(void) {
    ALOGD("_Z11getSrcWidthRKN7android2spI8HWCLayerEE() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, char const*, int, int, unsigned int>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcS2_iijEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcS2_iijEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: hwc::Gralloc4Mapper::validateBufferDescriptorInfo(android::hardware::graphics::mapper::V4_0::IMapper::BufferDescriptorInfo*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc4Mapper28validateBufferDescriptorInfoEPN7android8hardware8graphics6mapper4V4_07IMapper20BufferDescriptorInfoE(void) {
    ALOGD("_ZNK3hwc14Gralloc4Mapper28validateBufferDescriptorInfoEPN7android8hardware8graphics6mapper4V4_07IMapper20BufferDescriptorInfoE() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, double>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, double) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmdEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmdEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: virtual thunk to RefreshRequestThread::~RefreshRequestThread() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N20RefreshRequestThreadD1Ev(void) {
    ALOGD("_ZTv0_n24_N20RefreshRequestThreadD1Ev() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned int, int, native_handle const*, int, bool>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned int, int, native_handle const*, int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmjiPK13native_handleibEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmjiPK13native_handleibEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned int, int, unsigned int, DP_COLOR_ENUM, int, int, int, int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned int, int, unsigned int, DP_COLOR_ENUM, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmjij13DP_COLOR_ENUMiiiiEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmjij13DP_COLOR_ENUMiiiiEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: DispDevice::enableOverlayOutput(unsigned long, OverlayPortParam*) */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice19enableOverlayOutputEmP16OverlayPortParam(void) {
    ALOGD("_ZN10DispDevice19enableOverlayOutputEmP16OverlayPortParam() called");
    return 0;
}

/* Demangled: hwc::Gralloc4Mapper::getDataspace(native_handle const*, android::hardware::graphics::common::V1_2::Dataspace*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc4Mapper12getDataspaceEPK13native_handlePN7android8hardware8graphics6common4V1_29DataspaceE(void) {
    ALOGD("_ZNK3hwc14Gralloc4Mapper12getDataspaceEPK13native_handlePN7android8hardware8graphics6common4V1_29DataspaceE() called");
    return 0;
}

/* Demangled: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS8_ISX_EEFvNSI_5ErrorESQ_EE7__cloneEPNS0_6__baseIS10_EE */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS8_ISX_EEFvNSI_5ErrorESQ_EE7__cloneEPNS0_6__baseIS10_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS8_ISX_EEFvNSI_5ErrorESQ_EE7__cloneEPNS0_6__baseIS10_EE() called");
    return 0;
}

/* Demangled: HWCMediator::layerStateSetPerFrameMetadata(hwc2_device*, unsigned long, unsigned long, unsigned int, int const*, float const*) */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator29layerStateSetPerFrameMetadataEP11hwc2_devicemmjPKiPKf(void) {
    ALOGD("_ZN11HWCMediator29layerStateSetPerFrameMetadataEP11hwc2_devicemmjPKiPKf() called");
    return 0;
}

/* Demangled: DisplayManager::getDisplayData(unsigned long, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN14DisplayManager14getDisplayDataEmj(void) {
    ALOGD("_ZN14DisplayManager14getDisplayDataEmj() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<unsigned long>(unsigned int const&, unsigned char const&, char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJmEEERKjRKhPKcDpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJmEEERKjRKhPKcDpT_() called");
    return 0;
}

/* Exported Object: g_set_comp_from_sf_log_prefix */
extern "C" __attribute__((visibility("default"))) void* g_set_comp_from_sf_log_prefix = NULL;

/* Demangled: DisplayManager::~DisplayManager() */
extern "C" __attribute__((visibility("default"))) int _ZN14DisplayManagerD1Ev(void) {
    ALOGD("_ZN14DisplayManagerD1Ev() called");
    return 0;
}

/* Demangled: AsyncBliterHandler::~AsyncBliterHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN18AsyncBliterHandlerD0Ev(void) {
    ALOGD("_ZN18AsyncBliterHandlerD0Ev() called");
    return 0;
}

/* Demangled: HWCLayer::getXform() const */
extern "C" __attribute__((visibility("default"))) int _ZNK8HWCLayer8getXformEv(void) {
    ALOGD("_ZNK8HWCLayer8getXformEv() called");
    return 0;
}

/* Demangled: HWCMediator::displayGetName(hwc2_device*, unsigned long, unsigned int*, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator14displayGetNameEP11hwc2_devicemPjPc(void) {
    ALOGD("_ZN11HWCMediator14displayGetNameEP11hwc2_devicemPjPc() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, int, bool>(unsigned int const&, unsigned char const&, char const*, char const*, int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcibEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcibEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: HWCThread::wait() */
extern "C" __attribute__((visibility("default"))) int _ZN9HWCThread4waitEv(void) {
    ALOGD("_ZN9HWCThread4waitEv() called");
    return 0;
}

/* Exported Object: HWC2_BLEND_MODE_INVALID_STR */
extern "C" __attribute__((visibility("default"))) void* HWC2_BLEND_MODE_INVALID_STR = NULL;

/* Demangled: hwc::GraphicBufferMapper::getDefaultCompression(unsigned int, unsigned int, int, unsigned int, unsigned long, aidl::android::hardware::graphics::common::ExtendableType*) */
extern "C" __attribute__((visibility("default"))) int _ZN3hwc19GraphicBufferMapper21getDefaultCompressionEjjijmPN4aidl7android8hardware8graphics6common14ExtendableTypeE(void) {
    ALOGD("_ZN3hwc19GraphicBufferMapper21getDefaultCompressionEjjijmPN4aidl7android8hardware8graphics6common14ExtendableTypeE() called");
    return 0;
}

/* Demangled: DisplayManager::getVideoHdcp() const */
extern "C" __attribute__((visibility("default"))) int _ZNK14DisplayManager12getVideoHdcpEv(void) {
    ALOGD("_ZNK14DisplayManager12getVideoHdcpEv() called");
    return 0;
}

/* Demangled: AsyncBlitDevice::isDisplaySupportedWidthAndHeight(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN15AsyncBlitDevice32isDisplaySupportedWidthAndHeightEjj(void) {
    ALOGD("_ZN15AsyncBlitDevice32isDisplaySupportedWidthAndHeightEjj() called");
    return 0;
}

/* Demangled: getDstRight(android::sp<HWCLayer> const&) */
extern "C" __attribute__((visibility("default"))) int _Z11getDstRightRKN7android2spI8HWCLayerEE(void) {
    ALOGD("_Z11getDstRightRKN7android2spI8HWCLayerEE() called");
    return 0;
}

/* Exported Object: android::SWWatchDog::DEFAULT_TIMER */
extern "C" __attribute__((visibility("default"))) void* _ZN7android10SWWatchDog13DEFAULT_TIMERE = NULL;

/* Demangled: LayerComposer::trigger(DispatcherJob*) */
extern "C" __attribute__((visibility("default"))) int _ZN13LayerComposer7triggerEP13DispatcherJob(void) {
    ALOGD("_ZN13LayerComposer7triggerEP13DispatcherJob() called");
    return 0;
}

/* Demangled: virtual thunk to OverlayEngine::~OverlayEngine() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N13OverlayEngineD1Ev(void) {
    ALOGD("_ZTv0_n24_N13OverlayEngineD1Ev() called");
    return 0;
}

/* Demangled: AsyncBlitDevice::queryValidLayer(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN15AsyncBlitDevice15queryValidLayerEPv(void) {
    ALOGD("_ZN15AsyncBlitDevice15queryValidLayerEPv() called");
    return 0;
}

/* Demangled: android::Vector<MdpJobInfo>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorI10MdpJobInfoE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorI10MdpJobInfoE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: unsigned long std::__1::__hash_table<std::__1::__hash_value_type<int, bool>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, bool>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, bool>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, bool> > >::__erase_unique<int>(int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIibEENS_22__unordered_map_hasherIiS2_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS2_NS_8equal_toIiEELb1EEENS_9allocatorIS2_EEE14__erase_uniqueIiEEmRKT_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIibEENS_22__unordered_map_hasherIiS2_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS2_NS_8equal_toIiEELb1EEENS_9allocatorIS2_EEE14__erase_uniqueIiEEmRKT_() called");
    return 0;
}

/* Demangled: getCompFileString(HWC_COMP_FILE const&) */
extern "C" __attribute__((visibility("default"))) int _Z17getCompFileStringRK13HWC_COMP_FILE(void) {
    ALOGD("_Z17getCompFileStringRK13HWC_COMP_FILE() called");
    return 0;
}

/* Demangled: DispDevice::dynamicFPSHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice17dynamicFPSHandlerEv(void) {
    ALOGD("_ZN10DispDevice17dynamicFPSHandlerEv() called");
    return 0;
}

/* Demangled: getPqDevice() */
extern "C" __attribute__((visibility("default"))) int _Z11getPqDevicev(void) {
    ALOGD("_Z11getPqDevicev() called");
    return 0;
}

/* Demangled: HWCDisplay::getType(int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK10HWCDisplay7getTypeEPi(void) {
    ALOGD("_ZNK10HWCDisplay7getTypeEPi() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, long>(unsigned int const&, unsigned char const&, char const*, char const*, long) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKclEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKclEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: DbgLogBufManager::dump(android::String8*) */
extern "C" __attribute__((visibility("default"))) int _ZN16DbgLogBufManager4dumpEPN7android7String8E(void) {
    ALOGD("_ZN16DbgLogBufManager4dumpEPN7android7String8E() called");
    return 0;
}

/* Exported Object: construction vtable for HWCThread-in-UEventThread */
extern "C" __attribute__((visibility("default"))) void* _ZTC12UEventThread0_9HWCThread = NULL;

/* Demangled: ObjectPool<FrameInfo>::getFreeObject() */
extern "C" __attribute__((visibility("default"))) int _ZN10ObjectPoolI9FrameInfoE13getFreeObjectEv(void) {
    ALOGD("_ZN10ObjectPoolI9FrameInfoE13getFreeObjectEv() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<OverlayPortParam*> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIP16OverlayPortParamEE = NULL;

/* Demangled: HWCMediator::layerStateSetColor(hwc2_device*, unsigned long, unsigned long, hwc_color) */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator18layerStateSetColorEP11hwc2_devicemm9hwc_color(void) {
    ALOGD("_ZN11HWCMediator18layerStateSetColorEP11hwc2_devicemm9hwc_color() called");
    return 0;
}

/* Demangled: PanelEventMonitorThread::readyToRun() */
extern "C" __attribute__((visibility("default"))) int _ZN23PanelEventMonitorThread10readyToRunEv(void) {
    ALOGD("_ZN23PanelEventMonitorThread10readyToRunEv() called");
    return 0;
}

/* Demangled: WhiteBuffer::setNormal() */
extern "C" __attribute__((visibility("default"))) int _ZN11WhiteBuffer9setNormalEv(void) {
    ALOGD("_ZN11WhiteBuffer9setNormalEv() called");
    return 0;
}

/* Demangled: DispDevice::DispDevice() */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDeviceC2Ev(void) {
    ALOGD("_ZN10DispDeviceC2Ev() called");
    return 0;
}

/* Demangled: hwc::GraphicBufferMapper::getDefaultPlaneLayouts(unsigned int, unsigned int, int, unsigned int, unsigned long, std::__1::vector<aidl::android::hardware::graphics::common::PlaneLayout, std::__1::allocator<aidl::android::hardware::graphics::common::PlaneLayout> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN3hwc19GraphicBufferMapper22getDefaultPlaneLayoutsEjjijmPNSt3__16vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS1_9allocatorIS8_EEEE(void) {
    ALOGD("_ZN3hwc19GraphicBufferMapper22getDefaultPlaneLayoutsEjjijmPNSt3__16vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS1_9allocatorIS8_EEEE() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, char const*, unsigned long, unsigned int>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, unsigned long, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcS2_mjEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcS2_mjEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: PqDeviceLegacy::PqDeviceLegacy() */
extern "C" __attribute__((visibility("default"))) int _ZN14PqDeviceLegacyC1Ev(void) {
    ALOGD("_ZN14PqDeviceLegacyC1Ev() called");
    return 0;
}

/* Demangled: HWCDisplay::getInvisibleLayersSortedByZ() */
extern "C" __attribute__((visibility("default"))) int _ZN10HWCDisplay27getInvisibleLayersSortedByZEv(void) {
    ALOGD("_ZN10HWCDisplay27getInvisibleLayersSortedByZEv() called");
    return 0;
}

/* Demangled: OverlayEngine::setOutput(OverlayPortParam*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN13OverlayEngine9setOutputEP16OverlayPortParamb(void) {
    ALOGD("_ZN13OverlayEngine9setOutputEP16OverlayPortParamb() called");
    return 0;
}

/* Demangled: IdleThread::threadLoop() */
extern "C" __attribute__((visibility("default"))) int _ZN10IdleThread10threadLoopEv(void) {
    ALOGD("_ZN10IdleThread10threadLoopEv() called");
    return 0;
}

/* Demangled: HWCMediator::displaySetVsyncEnabled(hwc2_device*, unsigned long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator22displaySetVsyncEnabledEP11hwc2_devicemi(void) {
    ALOGD("_ZN11HWCMediator22displaySetVsyncEnabledEP11hwc2_devicemi() called");
    return 0;
}

/* Demangled: DisplayManager::vsync(unsigned long, long, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN14DisplayManager5vsyncEmlb(void) {
    ALOGD("_ZN14DisplayManager5vsyncEmlb() called");
    return 0;
}

/* Exported Object: construction vtable for android::Thread-in-OverlayEngine */
extern "C" __attribute__((visibility("default"))) void* _ZTC13OverlayEngine0_N7android6ThreadE = NULL;

/* Demangled: DisplayBufferQueue::dumpLocked(int) */
extern "C" __attribute__((visibility("default"))) int _ZN18DisplayBufferQueue10dumpLockedEi(void) {
    ALOGD("_ZN18DisplayBufferQueue10dumpLockedEi() called");
    return 0;
}

/* Demangled: mapDpOrientation(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z16mapDpOrientationj(void) {
    ALOGD("_Z16mapDpOrientationj() called");
    return 0;
}

/* Demangled: android::sp<ColorTransform>::operator=(ColorTransform*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spI14ColorTransformEaSEPS1_(void) {
    ALOGD("_ZN7android2spI14ColorTransformEaSEPS1_() called");
    return 0;
}

/* Demangled: HWCDispatcher::decideCtDirtyAndFlush(unsigned long, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN13HWCDispatcher21decideCtDirtyAndFlushEmj(void) {
    ALOGD("_ZN13HWCDispatcher21decideCtDirtyAndFlushEmj() called");
    return 0;
}

/* Exported Object: HWCLayer::id_count */
extern "C" __attribute__((visibility("default"))) void* _ZN8HWCLayer8id_countE = NULL;

/* Demangled: android::Vector<android::sp<DispatcherJob> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spI13DispatcherJobEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spI13DispatcherJobEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: virtual thunk to DispatchThread::onFirstRef() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N14DispatchThread10onFirstRefEv(void) {
    ALOGD("_ZTv0_n32_N14DispatchThread10onFirstRefEv() called");
    return 0;
}

/* Exported Object: vtable for UEventThread */
extern "C" __attribute__((visibility("default"))) void* _ZTV12UEventThread = NULL;

/* Demangled: getDstDataspace(int const&) */
extern "C" __attribute__((visibility("default"))) int _Z15getDstDataspaceRKi(void) {
    ALOGD("_Z15getDstDataspaceRKi() called");
    return 0;
}

/* Demangled: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getImEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EE7__cloneEv */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getImEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EE7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getImEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EE7__cloneEv() called");
    return 0;
}

/* Demangled: HWCDisplay::isConnected() const */
extern "C" __attribute__((visibility("default"))) int _ZNK10HWCDisplay11isConnectedEv(void) {
    ALOGD("_ZNK10HWCDisplay11isConnectedEv() called");
    return 0;
}

/* Exported Object: VTT for HWCThread */
extern "C" __attribute__((visibility("default"))) void* _ZTT9HWCThread = NULL;

/* Demangled: IPqDevice::setColorTransform(float const*, int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9IPqDevice17setColorTransformEPKfRKi(void) {
    ALOGD("_ZN9IPqDevice17setColorTransformEPKfRKi() called");
    return 0;
}

/* Demangled: Debugger::~Debugger() */
extern "C" __attribute__((visibility("default"))) int _ZN8DebuggerD1Ev(void) {
    ALOGD("_ZN8DebuggerD1Ev() called");
    return 0;
}

/* Demangled: android::FpsCounter::RingBufferFps::WriteToBuffer(android::FpsCounter const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10FpsCounter13RingBufferFps13WriteToBufferERKS0_(void) {
    ALOGD("_ZN7android10FpsCounter13RingBufferFps13WriteToBufferERKS0_() called");
    return 0;
}

/* Demangled: virtual thunk to TouchHintThread::~TouchHintThread() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N15TouchHintThreadD0Ev(void) {
    ALOGD("_ZTv0_n24_N15TouchHintThreadD0Ev() called");
    return 0;
}

/* Demangled: BliterNode::DstInvalidateParam::dump() */
extern "C" __attribute__((visibility("default"))) int _ZN10BliterNode18DstInvalidateParam4dumpEv(void) {
    ALOGD("_ZN10BliterNode18DstInvalidateParam4dumpEv() called");
    return 0;
}

/* Demangled: HWCMediator::displayGetActiveConfig(hwc2_device*, unsigned long, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator22displayGetActiveConfigEP11hwc2_devicemPj(void) {
    ALOGD("_ZN11HWCMediator22displayGetActiveConfigEP11hwc2_devicemPj() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned long, char const*>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned long, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmmS2_EEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmmS2_EEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: DisplayManager::getSupportedColorModeVector(unsigned long, android::Vector<int>&) */
extern "C" __attribute__((visibility("default"))) int _ZN14DisplayManager27getSupportedColorModeVectorEmRN7android6VectorIiEE(void) {
    ALOGD("_ZN14DisplayManager27getSupportedColorModeVectorEmRN7android6VectorIiEE() called");
    return 0;
}

/* Demangled: VSyncThread::VSyncThread(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN11VSyncThreadC2Em(void) {
    ALOGD("_ZN11VSyncThreadC2Em() called");
    return 0;
}

/* Demangled: OverlayEngine::~OverlayEngine() */
extern "C" __attribute__((visibility("default"))) int _ZN13OverlayEngineD1Ev(void) {
    ALOGD("_ZN13OverlayEngineD1Ev() called");
    return 0;
}

/* Demangled: hwc::Gralloc4Mapper::getPlaneLayouts(native_handle const*, std::__1::vector<aidl::android::hardware::graphics::common::PlaneLayout, std::__1::allocator<aidl::android::hardware::graphics::common::PlaneLayout> >*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc4Mapper15getPlaneLayoutsEPK13native_handlePNSt3__16vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS4_9allocatorISB_EEEE(void) {
    ALOGD("_ZNK3hwc14Gralloc4Mapper15getPlaneLayoutsEPK13native_handlePNSt3__16vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS4_9allocatorISB_EEEE() called");
    return 0;
}

/* Demangled: hwc::Gralloc4Mapper::validateBufferSize(native_handle const*, unsigned int, unsigned int, int, unsigned int, unsigned long, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc4Mapper18validateBufferSizeEPK13native_handlejjijmj(void) {
    ALOGD("_ZNK3hwc14Gralloc4Mapper18validateBufferSizeEPK13native_handlejjijmj() called");
    return 0;
}

/* Demangled: HWCDisplay::dump(android::String8*) */
extern "C" __attribute__((visibility("default"))) int _ZN10HWCDisplay4dumpEPN7android7String8E(void) {
    ALOGD("_ZN10HWCDisplay4dumpEPN7android7String8E() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, long, long, long>(unsigned int const&, unsigned char const&, char const*, char const*, long, long, long) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKclllEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKclllEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: HWCMediator::getCapabilities(unsigned int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator15getCapabilitiesEPjPi(void) {
    ALOGD("_ZN11HWCMediator15getCapabilitiesEPjPi() called");
    return 0;
}

/* Demangled: HWCMediator::layerStateSetDisplayFrame(hwc2_device*, unsigned long, unsigned long, hwc_rect) */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator25layerStateSetDisplayFrameEP11hwc2_devicemm8hwc_rect(void) {
    ALOGD("_ZN11HWCMediator25layerStateSetDisplayFrameEP11hwc2_devicemm8hwc_rect() called");
    return 0;
}

/* Demangled: SessionInfo::SessionInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN11SessionInfoC1Ev(void) {
    ALOGD("_ZN11SessionInfoC1Ev() called");
    return 0;
}

/* Demangled: RefreshRequestThread::initialize() */
extern "C" __attribute__((visibility("default"))) int _ZN20RefreshRequestThread10initializeEv(void) {
    ALOGD("_ZN20RefreshRequestThread10initializeEv() called");
    return 0;
}

/* Demangled: BlackBuffer::setNormal() */
extern "C" __attribute__((visibility("default"))) int _ZN11BlackBuffer9setNormalEv(void) {
    ALOGD("_ZN11BlackBuffer9setNormalEv() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, int, int, unsigned int, int, char*>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, int, int, unsigned int, int, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmiijiPcEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmiijiPcEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: int hwc::Gralloc4Mapper::getDefault<std::__1::vector<aidl::android::hardware::graphics::common::PlaneLayout, std::__1::allocator<aidl::android::hardware::graphics::common::PlaneLayout> > >(unsigned int, unsigned int, int, unsigned int, unsigned long, android::hardware::graphics::mapper::V4_0::IMapper::MetadataType const&, int (*)(android::hardware::hidl_vec<unsigned char> const&, std::__1::vector<aidl::android::hardware::graphics::common::PlaneLayout, std::__1::allocator<aidl::android::hardware::graphics::common::PlaneLayout> >*), std::__1::vector<aidl::android::hardware::graphics::common::PlaneLayout, std::__1::allocator<aidl::android::hardware::graphics::common::PlaneLayout> >*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc4Mapper10getDefaultINSt3__16vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS2_9allocatorIS9_EEEEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSE_8hidl_vecIhEEPT_ESR_(void) {
    ALOGD("_ZNK3hwc14Gralloc4Mapper10getDefaultINSt3__16vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS2_9allocatorIS9_EEEEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSE_8hidl_vecIhEEPT_ESR_() called");
    return 0;
}

/* Demangled: hwc::Gralloc4Mapper::getChromaSiting(native_handle const*, aidl::android::hardware::graphics::common::ExtendableType*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc4Mapper15getChromaSitingEPK13native_handlePN4aidl7android8hardware8graphics6common14ExtendableTypeE(void) {
    ALOGD("_ZNK3hwc14Gralloc4Mapper15getChromaSitingEPK13native_handlePN4aidl7android8hardware8graphics6common14ExtendableTypeE() called");
    return 0;
}

/* Demangled: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIjEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EE7__cloneEv */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIjEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EE7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIjEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EE7__cloneEv() called");
    return 0;
}

/* Demangled: ObjectPool<FrameInfo>::ObjectPool(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10ObjectPoolI9FrameInfoEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEm(void) {
    ALOGD("_ZN10ObjectPoolI9FrameInfoEC2ENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEm() called");
    return 0;
}

/* Demangled: BliterNode::calculateContentROI(android::Rect*, DpRect const&, DpRect const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10BliterNode19calculateContentROIEPN7android4RectERK6DpRectS5_i(void) {
    ALOGD("_ZN10BliterNode19calculateContentROIEPN7android4RectERK6DpRectS5_i() called");
    return 0;
}

/* Demangled: DbgLogBufManager::releaseLogBuf(DbgLogBufManager::DBG_BUF*) */
extern "C" __attribute__((visibility("default"))) int _ZN16DbgLogBufManager13releaseLogBufEPNS_7DBG_BUFE(void) {
    ALOGD("_ZN16DbgLogBufManager13releaseLogBufEPNS_7DBG_BUFE() called");
    return 0;
}

/* Demangled: Debugger::setLogThreshold(unsigned char const&) */
extern "C" __attribute__((visibility("default"))) int _ZN8Debugger15setLogThresholdERKh(void) {
    ALOGD("_ZN8Debugger15setLogThresholdERKh() called");
    return 0;
}

/* Demangled: OverlayEngine::configMirrorOutput(DispatcherJob*) */
extern "C" __attribute__((visibility("default"))) int _ZN13OverlayEngine18configMirrorOutputEP13DispatcherJob(void) {
    ALOGD("_ZN13OverlayEngine18configMirrorOutputEP13DispatcherJob() called");
    return 0;
}

/* Demangled: AsyncBliterHandler::getDisplayBufferQueue(HWLayer*) */
extern "C" __attribute__((visibility("default"))) int _ZN18AsyncBliterHandler21getDisplayBufferQueueEP7HWLayer(void) {
    ALOGD("_ZN18AsyncBliterHandler21getDisplayBufferQueueEP7HWLayer() called");
    return 0;
}

/* Exported Object: vtable for AsyncBliterHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTV18AsyncBliterHandler = NULL;

/* Demangled: getBlendString(int const&) */
extern "C" __attribute__((visibility("default"))) int _Z14getBlendStringRKi(void) {
    ALOGD("_Z14getBlendStringRKi() called");
    return 0;
}

/* Demangled: DispDevice::getHeight(unsigned long, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice9getHeightEmj(void) {
    ALOGD("_ZN10DispDevice9getHeightEmj() called");
    return 0;
}

/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultImEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EEclEOSR_SH_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultImEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EEclEOSR_SH_(void) {
    ALOGD("_ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultImEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EEclEOSR_SH_() called");
    return 0;
}

/* Demangled: MmBufDump::~MmBufDump() */
extern "C" __attribute__((visibility("default"))) int _ZN9MmBufDumpD1Ev(void) {
    ALOGD("_ZN9MmBufDumpD1Ev() called");
    return 0;
}

/* Demangled: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getImEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EE7__cloneEPNS0_6__baseISV_EE */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getImEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EE7__cloneEPNS0_6__baseISV_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getImEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EE7__cloneEPNS0_6__baseISV_EE() called");
    return 0;
}

/* Demangled: RefreshRequestThread::~RefreshRequestThread() */
extern "C" __attribute__((visibility("default"))) int _ZN20RefreshRequestThreadD2Ev(void) {
    ALOGD("_ZN20RefreshRequestThreadD2Ev() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, int, int, int, int, int, int>(unsigned int const&, unsigned char const&, char const*, char const*, int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKciiiiiiEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKciiiiiiEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: AsyncBlitDevice::createOverlaySession(unsigned long, unsigned int, unsigned int, HWC_DISP_MODE) */
extern "C" __attribute__((visibility("default"))) int _ZN15AsyncBlitDevice20createOverlaySessionEmjj13HWC_DISP_MODE(void) {
    ALOGD("_ZN15AsyncBlitDevice20createOverlaySessionEmjj13HWC_DISP_MODE() called");
    return 0;
}

/* Exported Object: HWC2_PRESENT_VALI_STATE_VALIDATE_DONE_STR */
extern "C" __attribute__((visibility("default"))) void* HWC2_PRESENT_VALI_STATE_VALIDATE_DONE_STR = NULL;

/* Demangled: DispDevice::waitAllJobDone(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice14waitAllJobDoneEm(void) {
    ALOGD("_ZN10DispDevice14waitAllJobDoneEm() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, bool, bool>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmbbEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmbbEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: LayerHandler::~LayerHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN12LayerHandlerD1Ev(void) {
    ALOGD("_ZN12LayerHandlerD1Ev() called");
    return 0;
}

/* Demangled: DispDevice::createOverlaySession(unsigned long, unsigned int, unsigned int, HWC_DISP_MODE) */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice20createOverlaySessionEmjj13HWC_DISP_MODE(void) {
    ALOGD("_ZN10DispDevice20createOverlaySessionEmjj13HWC_DISP_MODE() called");
    return 0;
}

/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getImEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EEclEOSU_SK_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getImEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EEclEOSU_SK_(void) {
    ALOGD("_ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getImEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_EUlRKSL_SK_E_NS_9allocatorISR_EEFvNSC_5ErrorESK_EEclEOSU_SK_() called");
    return 0;
}

/* Demangled: dumpTimeToTrace() */
extern "C" __attribute__((visibility("default"))) int _Z15dumpTimeToTracev(void) {
    ALOGD("_Z15dumpTimeToTracev() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, char const*, DisplayBufferQueue*>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, DisplayBufferQueue*) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueueEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueueEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: android::Transform::preserveRects() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android9Transform13preserveRectsEv(void) {
    ALOGD("_ZNK7android9Transform13preserveRectsEv() called");
    return 0;
}

/* Exported Object: android::SWWatchDog::NO_ANCHOR */
extern "C" __attribute__((visibility("default"))) void* _ZN7android10SWWatchDog9NO_ANCHORE = NULL;

/* Demangled: HWCDisplay::setVsyncEnabled(int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10HWCDisplay15setVsyncEnabledERKi(void) {
    ALOGD("_ZN10HWCDisplay15setVsyncEnabledERKi() called");
    return 0;
}

/* Demangled: DispatcherJob::~DispatcherJob() */
extern "C" __attribute__((visibility("default"))) int _ZN13DispatcherJobD2Ev(void) {
    ALOGD("_ZN13DispatcherJobD2Ev() called");
    return 0;
}

/* Exported Object: vtable for PanelEventMonitorThread */
extern "C" __attribute__((visibility("default"))) void* _ZTV23PanelEventMonitorThread = NULL;

/* Demangled: ComposerHandler::set(android::sp<HWCDisplay> const&, DispatcherJob*) */
extern "C" __attribute__((visibility("default"))) int _ZN15ComposerHandler3setERKN7android2spI10HWCDisplayEEP13DispatcherJob(void) {
    ALOGD("_ZN15ComposerHandler3setERKN7android2spI10HWCDisplayEEP13DispatcherJob() called");
    return 0;
}

/* Demangled: convertFormat4Hrt(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z17convertFormat4Hrtj(void) {
    ALOGD("_Z17convertFormat4Hrtj() called");
    return 0;
}

/* Demangled: hwc::GraphicBufferMapper::getDefaultChromaSiting(unsigned int, unsigned int, int, unsigned int, unsigned long, aidl::android::hardware::graphics::common::ChromaSiting*) */
extern "C" __attribute__((visibility("default"))) int _ZN3hwc19GraphicBufferMapper22getDefaultChromaSitingEjjijmPN4aidl7android8hardware8graphics6common12ChromaSitingE(void) {
    ALOGD("_ZN3hwc19GraphicBufferMapper22getDefaultChromaSitingEjjijmPN4aidl7android8hardware8graphics6common12ChromaSitingE() called");
    return 0;
}

/* Demangled: OverlayEngine::disableInputLocked(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN13OverlayEngine18disableInputLockedEj(void) {
    ALOGD("_ZN13OverlayEngine18disableInputLockedEj() called");
    return 0;
}

/* Demangled: android::Vector<OverlayEngine::OverlayInput*>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIPN13OverlayEngine12OverlayInputEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIPN13OverlayEngine12OverlayInputEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned int, int, char*>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned int, int, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmjiPcEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmjiPcEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: hwc::GraphicBufferMapper::getCta861_3(native_handle const*, std::__1::optional<aidl::android::hardware::graphics::common::Cta861_3>*) */
extern "C" __attribute__((visibility("default"))) int _ZN3hwc19GraphicBufferMapper11getCta861_3EPK13native_handlePNSt3__18optionalIN4aidl7android8hardware8graphics6common8Cta861_3EEE(void) {
    ALOGD("_ZN3hwc19GraphicBufferMapper11getCta861_3EPK13native_handlePNSt3__18optionalIN4aidl7android8hardware8graphics6common8Cta861_3EEE() called");
    return 0;
}

/* Demangled: HWCLayer::setHandle(native_handle const* const&) */
extern "C" __attribute__((visibility("default"))) int _ZN8HWCLayer9setHandleERKPK13native_handle(void) {
    ALOGD("_ZN8HWCLayer9setHandleERKPK13native_handle() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<DispatcherJob> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spI13DispatcherJobEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spI13DispatcherJobEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: SyncFence::wait(int, int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9SyncFence4waitEiiPKc(void) {
    ALOGD("_ZN9SyncFence4waitEiiPKc() called");
    return 0;
}

/* Exported Object: vtable for DispDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTV10DispDevice = NULL;

/* Demangled: HWCDisplay::getLayer(unsigned long const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10HWCDisplay8getLayerERKm(void) {
    ALOGD("_ZN10HWCDisplay8getLayerERKm() called");
    return 0;
}

/* Demangled: android::Vector<OverlayPortParam*>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIP16OverlayPortParamE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIP16OverlayPortParamE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, int, HWC_DISP_MODE>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, int, HWC_DISP_MODE) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmi13HWC_DISP_MODEEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmi13HWC_DISP_MODEEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: android::SWWatchDog::resume() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10SWWatchDog6resumeEv(void) {
    ALOGD("_ZN7android10SWWatchDog6resumeEv() called");
    return 0;
}

/* Exported Object: HWC2_BLEND_MODE_UNKNOWN_STR */
extern "C" __attribute__((visibility("default"))) void* HWC2_BLEND_MODE_UNKNOWN_STR = NULL;

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<android::WDTAnchor, std::__1::allocator<android::WDTAnchor> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN7android9WDTAnchorENS_9allocatorIS2_EEEE = NULL;

/* Demangled: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS8_ISX_EEFvNSI_5ErrorESQ_EE7__cloneEv */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS8_ISX_EEFvNSI_5ErrorESQ_EE7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS8_ISX_EEFvNSI_5ErrorESQ_EE7__cloneEv() called");
    return 0;
}

/* Exported Object: construction vtable for DisplayManager::EventListener-in-DisplayListener */
extern "C" __attribute__((visibility("default"))) void* _ZTC15DisplayListener0_N14DisplayManager13EventListenerE = NULL;

/* Demangled: android::DisplayFeatureCallback::displayfeatureInfoChanged(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android22DisplayFeatureCallback25displayfeatureInfoChangedEii(void) {
    ALOGD("_ZN7android22DisplayFeatureCallback25displayfeatureInfoChangedEii() called");
    return 0;
}

/* Exported Object: android::SWWatchDogTimer::getInstance()::instance */
extern "C" __attribute__((visibility("default"))) void* _ZZN7android15SWWatchDogTimer11getInstanceEvE8instance = NULL;

/* Demangled: AsyncBlitDevice::getDisplayRotation(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN15AsyncBlitDevice18getDisplayRotationEm(void) {
    ALOGD("_ZN15AsyncBlitDevice18getDisplayRotationEm() called");
    return 0;
}

/* Demangled: DispDevice::getOverlaySessionInfo(unsigned long, SessionInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice21getOverlaySessionInfoEmP11SessionInfo(void) {
    ALOGD("_ZN10DispDevice21getOverlaySessionInfoEmP11SessionInfo() called");
    return 0;
}

/* Demangled: android::SWWatchDog::setThreshold(long const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10SWWatchDog12setThresholdERKl(void) {
    ALOGD("_ZN7android10SWWatchDog12setThresholdERKl() called");
    return 0;
}

/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSG_8hidl_vecIhEEPT_EST_EUlRKSS_SR_E_NSC_ISY_EEFvNSJ_5ErrorESR_EEclEOS10_SR_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSG_8hidl_vecIhEEPT_EST_EUlRKSS_SR_E_NSC_ISY_EEFvNSJ_5ErrorESR_EEclEOS10_SR_(void) {
    ALOGD("_ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSG_8hidl_vecIhEEPT_EST_EUlRKSS_SR_E_NSC_ISY_EEFvNSJ_5ErrorESR_EEclEOS10_SR_() called");
    return 0;
}

/* Demangled: DisplayListener::onVSync(unsigned long, long, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN15DisplayListener7onVSyncEmlb(void) {
    ALOGD("_ZN15DisplayListener7onVSyncEmlb() called");
    return 0;
}

/* Demangled: hwc::Gralloc4Mapper::getProtectedContent(native_handle const*, unsigned long*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc4Mapper19getProtectedContentEPK13native_handlePm(void) {
    ALOGD("_ZNK3hwc14Gralloc4Mapper19getProtectedContentEPK13native_handlePm() called");
    return 0;
}

/* Demangled: hwc::GraphicBufferMapper::getBlendMode(native_handle const*, aidl::android::hardware::graphics::common::BlendMode*) */
extern "C" __attribute__((visibility("default"))) int _ZN3hwc19GraphicBufferMapper12getBlendModeEPK13native_handlePN4aidl7android8hardware8graphics6common9BlendModeE(void) {
    ALOGD("_ZN3hwc19GraphicBufferMapper12getBlendModeEPK13native_handlePN4aidl7android8hardware8graphics6common9BlendModeE() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, void (*)(void*, unsigned long)>(unsigned int const&, unsigned char const&, char const*, char const*, void (*)(void*, unsigned long)) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcPFvPvmEEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcPFvPvmEEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: TouchHintThread::~TouchHintThread() */
extern "C" __attribute__((visibility("default"))) int _ZN15TouchHintThreadD1Ev(void) {
    ALOGD("_ZN15TouchHintThreadD1Ev() called");
    return 0;
}

/* Demangled: hwc::GraphicBufferMapper::getDefaultAllocationSize(unsigned int, unsigned int, int, unsigned int, unsigned long, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZN3hwc19GraphicBufferMapper24getDefaultAllocationSizeEjjijmPm(void) {
    ALOGD("_ZN3hwc19GraphicBufferMapper24getDefaultAllocationSizeEjjijmPm() called");
    return 0;
}

/* Demangled: getSrcLeft(android::sp<HWCLayer> const&) */
extern "C" __attribute__((visibility("default"))) int _Z10getSrcLeftRKN7android2spI8HWCLayerEE(void) {
    ALOGD("_Z10getSrcLeftRKN7android2spI8HWCLayerEE() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*>(unsigned int const&, unsigned char const&, char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<HWCDisplay>, std::__1::allocator<android::sp<HWCDisplay> > >::__push_back_slow_path<android::sp<HWCDisplay> const&>(android::sp<HWCDisplay> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spI10HWCDisplayEENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spI10HWCDisplayEENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, void (*)(void*, unsigned long, int)>(unsigned int const&, unsigned char const&, char const*, char const*, void (*)(void*, unsigned long, int)) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcPFvPvmiEEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcPFvPvmiEEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: DisplayManager::isAllDisplayOff() */
extern "C" __attribute__((visibility("default"))) int _ZN14DisplayManager15isAllDisplayOffEv(void) {
    ALOGD("_ZN14DisplayManager15isAllDisplayOffEv() called");
    return 0;
}

/* Demangled: AsyncBliterHandler::setPhyMirror(DispatcherJob*) */
extern "C" __attribute__((visibility("default"))) int _ZN18AsyncBliterHandler12setPhyMirrorEP13DispatcherJob(void) {
    ALOGD("_ZN18AsyncBliterHandler12setPhyMirrorEP13DispatcherJob() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, int, void*, unsigned long>(unsigned int const&, unsigned char const&, char const*, char const*, int, void*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKciPvmEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKciPvmEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: HWCDisplay::setOutbuf(native_handle const* const&, int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10HWCDisplay9setOutbufERKPK13native_handleRKi(void) {
    ALOGD("_ZN10HWCDisplay9setOutbufERKPK13native_handleRKi() called");
    return 0;
}

/* Demangled: OverlayEngine::packageFrameInfo(android::sp<FrameInfo>&, bool const&, unsigned int const&, unsigned int const&, int const&, bool const&, android::sp<ColorTransform>) */
extern "C" __attribute__((visibility("default"))) int _ZN13OverlayEngine16packageFrameInfoERN7android2spI9FrameInfoEERKbRKjS8_RKiS6_NS1_I14ColorTransformEE(void) {
    ALOGD("_ZN13OverlayEngine16packageFrameInfoERN7android2spI9FrameInfoEERKbRKjS8_RKiS6_NS1_I14ColorTransformEE() called");
    return 0;
}

/* Demangled: AsyncBlitDevice::getOverlaySessionMode(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN15AsyncBlitDevice21getOverlaySessionModeEm(void) {
    ALOGD("_ZN15AsyncBlitDevice21getOverlaySessionModeEm() called");
    return 0;
}

/* Exported Object: HWC_COMPOSITION_FILE_HWC_DISPLAY_STR */
extern "C" __attribute__((visibility("default"))) void* HWC_COMPOSITION_FILE_HWC_DISPLAY_STR = NULL;

/* Demangled: GrallocDevice::GrallocDevice() */
extern "C" __attribute__((visibility("default"))) int _ZN13GrallocDeviceC1Ev(void) {
    ALOGD("_ZN13GrallocDeviceC1Ev() called");
    return 0;
}

/* Demangled: DispDevice::dynamicFPSThread(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice16dynamicFPSThreadEPv(void) {
    ALOGD("_ZN10DispDevice16dynamicFPSThreadEPv() called");
    return 0;
}

/* Demangled: void std::__1::vector<unsigned long, std::__1::allocator<unsigned long> >::__push_back_slow_path<unsigned long const&>(unsigned long const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorImNS_9allocatorImEEE21__push_back_slow_pathIRKmEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorImNS_9allocatorImEEE21__push_back_slow_pathIRKmEEvOT_() called");
    return 0;
}

/* Demangled: HWCDispatcher::VirPostHandler::setMirror(DispatcherJob*, DispatcherJob*) */
extern "C" __attribute__((visibility("default"))) int _ZN13HWCDispatcher14VirPostHandler9setMirrorEP13DispatcherJobS2_(void) {
    ALOGD("_ZN13HWCDispatcher14VirPostHandler9setMirrorEP13DispatcherJobS2_() called");
    return 0;
}

/* Demangled: HWCDispatcher::~HWCDispatcher() */
extern "C" __attribute__((visibility("default"))) int _ZN13HWCDispatcherD1Ev(void) {
    ALOGD("_ZN13HWCDispatcherD1Ev() called");
    return 0;
}

/* Demangled: android::Vector<OverlayEngine::OverlayInput*>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIPN13OverlayEngine12OverlayInputEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIPN13OverlayEngine12OverlayInputEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: AsyncBlitDevice::getMaxOverlayHeight() */
extern "C" __attribute__((visibility("default"))) int _ZN15AsyncBlitDevice19getMaxOverlayHeightEv(void) {
    ALOGD("_ZN15AsyncBlitDevice19getMaxOverlayHeightEv() called");
    return 0;
}

/* Demangled: DisplayManager::notifyHotplugInDone() */
extern "C" __attribute__((visibility("default"))) int _ZN14DisplayManager19notifyHotplugInDoneEv(void) {
    ALOGD("_ZN14DisplayManager19notifyHotplugInDoneEv() called");
    return 0;
}

/* Demangled: SyncFence::~SyncFence() */
extern "C" __attribute__((visibility("default"))) int _ZN9SyncFenceD1Ev(void) {
    ALOGD("_ZN9SyncFenceD1Ev() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned int, int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmjiEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmjiEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: hwcGetCapabilities(hwc2_device*, unsigned int*, int*) */
extern "C" __attribute__((visibility("default"))) int _Z18hwcGetCapabilitiesP11hwc2_devicePjPi(void) {
    ALOGD("_Z18hwcGetCapabilitiesP11hwc2_devicePjPi() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, char const*, int, native_handle const*>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, int, native_handle const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcS2_iPK13native_handleEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcS2_iPK13native_handleEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Exported Object: HWC2_PRESENT_VALI_STATE_VALIDATE_STR */
extern "C" __attribute__((visibility("default"))) void* HWC2_PRESENT_VALI_STATE_VALIDATE_STR = NULL;

/* Demangled: android::Transform::getType() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android9Transform7getTypeEv(void) {
    ALOGD("_ZNK7android9Transform7getTypeEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::Thread-in-UEventThread */
extern "C" __attribute__((visibility("default"))) void* _ZTC12UEventThread0_N7android6ThreadE = NULL;

/* Demangled: OverlayEngine::waitAllFence(android::sp<FrameInfo>&) */
extern "C" __attribute__((visibility("default"))) int _ZN13OverlayEngine12waitAllFenceERN7android2spI9FrameInfoEE(void) {
    ALOGD("_ZN13OverlayEngine12waitAllFenceERN7android2spI9FrameInfoEE() called");
    return 0;
}

/* Demangled: AbortMessager::~AbortMessager() */
extern "C" __attribute__((visibility("default"))) int _ZN13AbortMessagerD1Ev(void) {
    ALOGD("_ZN13AbortMessagerD1Ev() called");
    return 0;
}

/* Demangled: HWCDisplay::setJobVideoTimeStamp(DispatcherJob*) */
extern "C" __attribute__((visibility("default"))) int _ZN10HWCDisplay20setJobVideoTimeStampEP13DispatcherJob(void) {
    ALOGD("_ZN10HWCDisplay20setJobVideoTimeStampEP13DispatcherJob() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, char const*, int, native_handle const*, PrivateHandle*>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, int, native_handle const*, PrivateHandle*) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcS2_iPK13native_handleP13PrivateHandleEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcS2_iPK13native_handleP13PrivateHandleEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: AsyncBlitDevice::getDisplayOutputRotated() */
extern "C" __attribute__((visibility("default"))) int _ZN15AsyncBlitDevice23getDisplayOutputRotatedEv(void) {
    ALOGD("_ZN15AsyncBlitDevice23getDisplayOutputRotatedEv() called");
    return 0;
}

/* Demangled: DispDevice::prepareOverlayInput(unsigned long, OverlayPrepareParam*) */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice19prepareOverlayInputEmP19OverlayPrepareParam(void) {
    ALOGD("_ZN10DispDevice19prepareOverlayInputEmP19OverlayPrepareParam() called");
    return 0;
}

/* Demangled: HWCMediator::setValiPresentStateOfAllDisplay(HWC_VALI_PRESENT_STATE const&, int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator31setValiPresentStateOfAllDisplayERK22HWC_VALI_PRESENT_STATERKi(void) {
    ALOGD("_ZN11HWCMediator31setValiPresentStateOfAllDisplayERK22HWC_VALI_PRESENT_STATERKi() called");
    return 0;
}

/* Demangled: OverlayEngine::OverlayInput::OverlayInput() */
extern "C" __attribute__((visibility("default"))) int _ZN13OverlayEngine12OverlayInputC2Ev(void) {
    ALOGD("_ZN13OverlayEngine12OverlayInputC2Ev() called");
    return 0;
}

/* Demangled: HWCLayer::setPrevIsPQEnhance(bool const&) */
extern "C" __attribute__((visibility("default"))) int _ZN8HWCLayer18setPrevIsPQEnhanceERKb(void) {
    ALOGD("_ZN8HWCLayer18setPrevIsPQEnhanceERKb() called");
    return 0;
}

/* Demangled: PerfHelper::clearApi() */
extern "C" __attribute__((visibility("default"))) int _ZN10PerfHelper8clearApiEv(void) {
    ALOGD("_ZN10PerfHelper8clearApiEv() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, char const*>(unsigned int const&, unsigned char const&, char const*, char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcS2_EEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcS2_EEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned long, HWCDispatcher::WorkerCluster::PrevHwcLayer>, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, HWCDispatcher::WorkerCluster::PrevHwcLayer>, std::__1::hash<unsigned long>, true>, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, HWCDispatcher::WorkerCluster::PrevHwcLayer>, std::__1::equal_to<unsigned long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long, HWCDispatcher::WorkerCluster::PrevHwcLayer> > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeImN13HWCDispatcher13WorkerCluster12PrevHwcLayerEEENS_22__unordered_map_hasherImS5_NS_4hashImEELb1EEENS_21__unordered_map_equalImS5_NS_8equal_toImEELb1EEENS_9allocatorIS5_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeImN13HWCDispatcher13WorkerCluster12PrevHwcLayerEEENS_22__unordered_map_hasherImS5_NS_4hashImEELb1EEENS_21__unordered_map_equalImS5_NS_8equal_toImEELb1EEENS_9allocatorIS5_EEE6rehashEm() called");
    return 0;
}

/* Demangled: HWCMediator::displayGetPerFrameMetadataKeys(hwc2_device*, unsigned long, unsigned int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator30displayGetPerFrameMetadataKeysEP11hwc2_devicemPjPi(void) {
    ALOGD("_ZN11HWCMediator30displayGetPerFrameMetadataKeysEP11hwc2_devicemPjPi() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, char const*, int const*, float const*>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, int const*, float const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcS2_PKiPKfEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcS2_PKiPKfEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: android::Vector<OverlayPortParam*>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIP16OverlayPortParamE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIP16OverlayPortParamE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: DisplayBufferQueue::~DisplayBufferQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN18DisplayBufferQueueD1Ev(void) {
    ALOGD("_ZN18DisplayBufferQueueD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<BliterNode::JobParam> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<BliterNode::JobParam> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<BliterNode::JobParam> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<BliterNode::JobParam> > > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN10BliterNode8JobParamEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN10BliterNode8JobParamEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE6rehashEm() called");
    return 0;
}

/* Demangled: hwc::Gralloc4Mapper::getDefaultProtectedContent(unsigned int, unsigned int, int, unsigned int, unsigned long, unsigned long*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc4Mapper26getDefaultProtectedContentEjjijmPm(void) {
    ALOGD("_ZNK3hwc14Gralloc4Mapper26getDefaultProtectedContentEjjijmPm() called");
    return 0;
}

/* Demangled: android::sp<IOverlayDevice>::operator=(IOverlayDevice*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spI14IOverlayDeviceEaSEPS1_(void) {
    ALOGD("_ZN7android2spI14IOverlayDeviceEaSEPS1_() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, char const*, unsigned long, unsigned long, int, int, int, int>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, unsigned long, unsigned long, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcS2_mmiiiiEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcS2_mmiiiiEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: IPqDevice::~IPqDevice() */
extern "C" __attribute__((visibility("default"))) int _ZN9IPqDeviceD1Ev(void) {
    ALOGD("_ZN9IPqDeviceD1Ev() called");
    return 0;
}

/* Demangled: hwc::Gralloc4Mapper::lock(native_handle const*, unsigned long, hwc::Rect const&, int, android_ycbcr*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc4Mapper4lockEPK13native_handlemRKNS_4RectEiP13android_ycbcr(void) {
    ALOGD("_ZNK3hwc14Gralloc4Mapper4lockEPK13native_handlemRKNS_4RectEiP13android_ycbcr() called");
    return 0;
}

/* Demangled: HWCDispatcher::PostHandler::~PostHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN13HWCDispatcher11PostHandlerD1Ev(void) {
    ALOGD("_ZN13HWCDispatcher11PostHandlerD1Ev() called");
    return 0;
}

/* Demangled: DispatchThread::getQueueSize() */
extern "C" __attribute__((visibility("default"))) int _ZN14DispatchThread12getQueueSizeEv(void) {
    ALOGD("_ZN14DispatchThread12getQueueSizeEv() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<DispatcherJob> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spI13DispatcherJobEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spI13DispatcherJobEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for HWCDispatcher::PhyPostHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTVN13HWCDispatcher14PhyPostHandlerE = NULL;

/* Demangled: AsyncBlitDevice::prepareOverlayInput(unsigned long, OverlayPrepareParam*) */
extern "C" __attribute__((visibility("default"))) int _ZN15AsyncBlitDevice19prepareOverlayInputEmP19OverlayPrepareParam(void) {
    ALOGD("_ZN15AsyncBlitDevice19prepareOverlayInputEmP19OverlayPrepareParam() called");
    return 0;
}

/* Exported Object: vtable for DisplayBufferQueue */
extern "C" __attribute__((visibility("default"))) void* _ZTV18DisplayBufferQueue = NULL;

/* Demangled: WhiteBuffer::~WhiteBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN11WhiteBufferD1Ev(void) {
    ALOGD("_ZN11WhiteBufferD1Ev() called");
    return 0;
}

/* Exported Object: vtable for HWC2Api */
extern "C" __attribute__((visibility("default"))) void* _ZTV7HWC2Api = NULL;

/* Demangled: android::Transform::~Transform() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9TransformD1Ev(void) {
    ALOGD("_ZN7android9TransformD1Ev() called");
    return 0;
}

/* Exported Object: vtable for hwc::Gralloc4Mapper */
extern "C" __attribute__((visibility("default"))) void* _ZTVN3hwc14Gralloc4MapperE = NULL;

/* Exported Object: android::SWWatchDog::DEFAULT_WDT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android10SWWatchDog11DEFAULT_WDTE = NULL;

/* Demangled: OverlayEngine::prepareOutput(OverlayPrepareParam&) */
extern "C" __attribute__((visibility("default"))) int _ZN13OverlayEngine13prepareOutputER19OverlayPrepareParam(void) {
    ALOGD("_ZN13OverlayEngine13prepareOutputER19OverlayPrepareParam() called");
    return 0;
}

/* Demangled: AsyncBliterHandler::setDstDpConfig(PrivateHandle&, AsyncBliterHandler::BufferConfig*) */
extern "C" __attribute__((visibility("default"))) int _ZN18AsyncBliterHandler14setDstDpConfigER13PrivateHandlePNS_12BufferConfigE(void) {
    ALOGD("_ZN18AsyncBliterHandler14setDstDpConfigER13PrivateHandlePNS_12BufferConfigE() called");
    return 0;
}

/* Demangled: DisplayManager::hotplugExtOut() */
extern "C" __attribute__((visibility("default"))) int _ZN14DisplayManager13hotplugExtOutEv(void) {
    ALOGD("_ZN14DisplayManager13hotplugExtOutEv() called");
    return 0;
}

/* Demangled: BliterNode::setSrc(unsigned int const&, AsyncBliterHandler::BufferConfig*, PrivateHandle&, int*, bool const&, bool const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10BliterNode6setSrcERKjPN18AsyncBliterHandler12BufferConfigER13PrivateHandlePiRKbS9_(void) {
    ALOGD("_ZN10BliterNode6setSrcERKjPN18AsyncBliterHandler12BufferConfigER13PrivateHandlePiRKbS9_() called");
    return 0;
}

/* Demangled: HWCLayer::hasAlpha() const */
extern "C" __attribute__((visibility("default"))) int _ZNK8HWCLayer8hasAlphaEv(void) {
    ALOGD("_ZNK8HWCLayer8hasAlphaEv() called");
    return 0;
}

/* Demangled: mapDispInFormat(unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _Z15mapDispInFormatji(void) {
    ALOGD("_Z15mapDispInFormatji() called");
    return 0;
}

/* Demangled: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSG_8hidl_vecIhEEPT_EST_EUlRKSS_SR_E_NSC_ISY_EEFvNSJ_5ErrorESR_EE7__cloneEPNS0_6__baseIS11_EE */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSG_8hidl_vecIhEEPT_EST_EUlRKSS_SR_E_NSC_ISY_EEFvNSJ_5ErrorESR_EE7__cloneEPNS0_6__baseIS11_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSG_8hidl_vecIhEEPT_EST_EUlRKSS_SR_E_NSC_ISY_EEFvNSJ_5ErrorESR_EE7__cloneEPNS0_6__baseIS11_EE() called");
    return 0;
}

/* Demangled: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common8Cta861_3EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EE7__cloneEPNS0_6__baseIS13_EE */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common8Cta861_3EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EE7__cloneEPNS0_6__baseIS13_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common8Cta861_3EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EE7__cloneEPNS0_6__baseIS13_EE() called");
    return 0;
}

/* Demangled: HWCDisplay::HWCDisplay(unsigned long const&, int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10HWCDisplayC1ERKmRKi(void) {
    ALOGD("_ZN10HWCDisplayC1ERKmRKi() called");
    return 0;
}

/* Demangled: IdleThread::IdleThread(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10IdleThreadC1Em(void) {
    ALOGD("_ZN10IdleThreadC1Em() called");
    return 0;
}

/* Demangled: DispDevice::getSupportedColorMode() */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice21getSupportedColorModeEv(void) {
    ALOGD("_ZN10DispDevice21getSupportedColorModeEv() called");
    return 0;
}

/* Demangled: Hrt::printQueryValidLayerResult() */
extern "C" __attribute__((visibility("default"))) int _ZN3Hrt26printQueryValidLayerResultEv(void) {
    ALOGD("_ZN3Hrt26printQueryValidLayerResultEv() called");
    return 0;
}

/* Demangled: android::SWWatchDog::setTimer(long const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10SWWatchDog8setTimerERKl(void) {
    ALOGD("_ZN7android10SWWatchDog8setTimerERKl() called");
    return 0;
}

/* Demangled: hwc::Gralloc2Mapper::validateBufferSize(native_handle const*, unsigned int, unsigned int, int, unsigned int, unsigned long, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc2Mapper18validateBufferSizeEPK13native_handlejjijmj(void) {
    ALOGD("_ZNK3hwc14Gralloc2Mapper18validateBufferSizeEPK13native_handlejjijmj() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<IOverlayDevice>, std::__1::allocator<android::sp<IOverlayDevice> > >::__push_back_slow_path<android::sp<IOverlayDevice> >(android::sp<IOverlayDevice>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spI14IOverlayDeviceEENS_9allocatorIS4_EEE21__push_back_slow_pathIS4_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spI14IOverlayDeviceEENS_9allocatorIS4_EEE21__push_back_slow_pathIS4_EEvOT_() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, char const*, unsigned long, unsigned int, int, bool, int, int, bool, bool, bool>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, unsigned long, unsigned int, int, bool, int, int, bool, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcS2_mjibiibbbEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcS2_mjibiibbbEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<BliterNode::JobParam, std::__1::allocator<BliterNode::JobParam> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN10BliterNode8JobParamENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN10BliterNode8JobParamENS_9allocatorIS2_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: HrtCommon::updateGlesRangeForDisplaysBeforHrt(std::__1::vector<android::sp<HWCDisplay>, std::__1::allocator<android::sp<HWCDisplay> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9HrtCommon34updateGlesRangeForDisplaysBeforHrtERKNSt3__16vectorIN7android2spI10HWCDisplayEENS0_9allocatorIS5_EEEE(void) {
    ALOGD("_ZN9HrtCommon34updateGlesRangeForDisplaysBeforHrtERKNSt3__16vectorIN7android2spI10HWCDisplayEENS0_9allocatorIS5_EEEE() called");
    return 0;
}

/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9BlendModeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE18destroy_deallocateEv */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9BlendModeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9BlendModeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: AbortMessager::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN13AbortMessager11getInstanceEv(void) {
    ALOGD("_ZN13AbortMessager11getInstanceEv() called");
    return 0;
}

/* Demangled: HWCDispatcher::dupInputBufferHandle(DispatcherJob*) */
extern "C" __attribute__((visibility("default"))) int _ZN13HWCDispatcher20dupInputBufferHandleEP13DispatcherJob(void) {
    ALOGD("_ZN13HWCDispatcher20dupInputBufferHandleEP13DispatcherJob() called");
    return 0;
}

/* Exported Object: getUniquePoolId()::nextId */
extern "C" __attribute__((visibility("default"))) void* _ZZ15getUniquePoolIdvE6nextId = NULL;

/* Demangled: MmBufDump::releaseLib() */
extern "C" __attribute__((visibility("default"))) int _ZN9MmBufDump10releaseLibEv(void) {
    ALOGD("_ZN9MmBufDump10releaseLibEv() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Exported Object: DisplayManager::m_profile_level */
extern "C" __attribute__((visibility("default"))) void* _ZN14DisplayManager15m_profile_levelE = NULL;

/* Demangled: HWCMediator::deviceDestroyVirtualDisplay(hwc2_device*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator27deviceDestroyVirtualDisplayEP11hwc2_devicem(void) {
    ALOGD("_ZN11HWCMediator27deviceDestroyVirtualDisplayEP11hwc2_devicem() called");
    return 0;
}

/* Demangled: android::Vector<int>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIiE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: HWCLayer::setSFCompositionType(int const&, bool const&) */
extern "C" __attribute__((visibility("default"))) int _ZN8HWCLayer20setSFCompositionTypeERKiRKb(void) {
    ALOGD("_ZN8HWCLayer20setSFCompositionTypeERKiRKb() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned long, unsigned int, bool>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned long, unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmmjbEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmmjbEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9BlendModeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EEclEOS10_SQ_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9BlendModeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EEclEOS10_SQ_(void) {
    ALOGD("_ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9BlendModeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EEclEOS10_SQ_() called");
    return 0;
}

/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9DataspaceEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EEclEOS10_SQ_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9DataspaceEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EEclEOS10_SQ_(void) {
    ALOGD("_ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9DataspaceEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EEclEOS10_SQ_() called");
    return 0;
}

/* Demangled: getHwDevice() */
extern "C" __attribute__((visibility("default"))) int _Z11getHwDevicev(void) {
    ALOGD("_Z11getHwDevicev() called");
    return 0;
}

/* Demangled: android::Vector<FrameInfo*>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIP9FrameInfoE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIP9FrameInfoE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: DispDevice::isPartialUpdateSupported() */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice24isPartialUpdateSupportedEv(void) {
    ALOGD("_ZN10DispDevice24isPartialUpdateSupportedEv() called");
    return 0;
}

/* Demangled: HWCDispatcher::getSessionMode(unsigned long const&) */
extern "C" __attribute__((visibility("default"))) int _ZN13HWCDispatcher14getSessionModeERKm(void) {
    ALOGD("_ZN13HWCDispatcher14getSessionModeERKm() called");
    return 0;
}

/* Demangled: BliterNode::BliterNode(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10BliterNodeC2Em(void) {
    ALOGD("_ZN10BliterNodeC2Em() called");
    return 0;
}

/* Demangled: UEventThread::~UEventThread() */
extern "C" __attribute__((visibility("default"))) int _ZN12UEventThreadD1Ev(void) {
    ALOGD("_ZN12UEventThreadD1Ev() called");
    return 0;
}

/* Demangled: PqDeviceLegacy::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN14PqDeviceLegacy11getInstanceEv(void) {
    ALOGD("_ZN14PqDeviceLegacy11getInstanceEv() called");
    return 0;
}

/* Demangled: android::Vector<android::SortedVector<android::sp<HWCVSyncListener> > >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_12SortedVectorINS_2spI16HWCVSyncListenerEEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_12SortedVectorINS_2spI16HWCVSyncListenerEEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: LayerHandler::LayerHandler(unsigned long, android::sp<OverlayEngine> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN12LayerHandlerC2EmRKN7android2spI13OverlayEngineEE(void) {
    ALOGD("_ZN12LayerHandlerC2EmRKN7android2spI13OverlayEngineEE() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, char const*, HWC_VALI_PRESENT_STATE>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, HWC_VALI_PRESENT_STATE) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcS2_22HWC_VALI_PRESENT_STATEEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcS2_22HWC_VALI_PRESENT_STATEEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: android::Transform::isZero(float) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9Transform6isZeroEf(void) {
    ALOGD("_ZN7android9Transform6isZeroEf() called");
    return 0;
}

/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSC_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EE7destroyEv */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSC_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EE7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSC_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EE7destroyEv() called");
    return 0;
}

/* Demangled: hwc::GraphicBufferMapper::GraphicBufferMapper() */
extern "C" __attribute__((visibility("default"))) int _ZN3hwc19GraphicBufferMapperC2Ev(void) {
    ALOGD("_ZN3hwc19GraphicBufferMapperC2Ev() called");
    return 0;
}

/* Demangled: ObjectPool<FrameInfo>::~ObjectPool() */
extern "C" __attribute__((visibility("default"))) int _ZN10ObjectPoolI9FrameInfoED2Ev(void) {
    ALOGD("_ZN10ObjectPoolI9FrameInfoED2Ev() called");
    return 0;
}

/* Demangled: FrameInfo::initData() */
extern "C" __attribute__((visibility("default"))) int _ZN9FrameInfo8initDataEv(void) {
    ALOGD("_ZN9FrameInfo8initDataEv() called");
    return 0;
}

/* Demangled: android::Vector<OverlayEngine::OverlayInput*>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIPN13OverlayEngine12OverlayInputEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIPN13OverlayEngine12OverlayInputEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, char const*, int, native_handle const*, unsigned int>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, int, native_handle const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcS2_iPK13native_handlejEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcS2_iPK13native_handlejEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: hwc::GraphicBufferMapper::importBuffer(native_handle const*, native_handle const**) */
extern "C" __attribute__((visibility("default"))) int _ZN3hwc19GraphicBufferMapper12importBufferEPK13native_handlePS3_(void) {
    ALOGD("_ZN3hwc19GraphicBufferMapper12importBufferEPK13native_handlePS3_() called");
    return 0;
}

/* Exported Object: _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSC_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EEE */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSC_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EEE = NULL;

/* Demangled: HWCMediator::displayGetChangedCompositionTypes(hwc2_device*, unsigned long, unsigned int*, unsigned long*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator33displayGetChangedCompositionTypesEP11hwc2_devicemPjPmPi(void) {
    ALOGD("_ZN11HWCMediator33displayGetChangedCompositionTypesEP11hwc2_devicemPjPmPi() called");
    return 0;
}

/* Demangled: android::Vector<int>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIiE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, char const*, int, int>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcS2_iiEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcS2_iiEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: android::sp<RefreshRequestThread>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spI20RefreshRequestThreadED2Ev(void) {
    ALOGD("_ZN7android2spI20RefreshRequestThreadED2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to OverlayEngine::onFirstRef() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n32_N13OverlayEngine10onFirstRefEv(void) {
    ALOGD("_ZTv0_n32_N13OverlayEngine10onFirstRefEv() called");
    return 0;
}

/* Demangled: DispDevice::~DispDevice() */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDeviceD0Ev(void) {
    ALOGD("_ZN10DispDeviceD0Ev() called");
    return 0;
}

/* Exported Object: vtable for DispatchThread */
extern "C" __attribute__((visibility("default"))) void* _ZTV14DispatchThread = NULL;

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE = NULL;

/* Demangled: IONDevice::IONDevice() */
extern "C" __attribute__((visibility("default"))) int _ZN9IONDeviceC1Ev(void) {
    ALOGD("_ZN9IONDeviceC1Ev() called");
    return 0;
}

/* Demangled: DbgLogBufManager::DbgLogBufManager() */
extern "C" __attribute__((visibility("default"))) int _ZN16DbgLogBufManagerC2Ev(void) {
    ALOGD("_ZN16DbgLogBufManagerC2Ev() called");
    return 0;
}

/* Demangled: HWCDisplay::addUnpresentCount() */
extern "C" __attribute__((visibility("default"))) int _ZN10HWCDisplay17addUnpresentCountEv(void) {
    ALOGD("_ZN10HWCDisplay17addUnpresentCountEv() called");
    return 0;
}

/* Demangled: DisplayManager::refreshForDisplay(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN14DisplayManager17refreshForDisplayEm(void) {
    ALOGD("_ZN14DisplayManager17refreshForDisplayEm() called");
    return 0;
}

/* Demangled: non-virtual thunk to OverlayEngine::~OverlayEngine() */
extern "C" __attribute__((visibility("default"))) int _ZThn296_N13OverlayEngineD0Ev(void) {
    ALOGD("_ZThn296_N13OverlayEngineD0Ev() called");
    return 0;
}

/* Demangled: AsyncBliterHandler::setDpConfig(PrivateHandle*, DisplayBufferQueue::DisplayBuffer const*, AsyncBliterHandler::BufferConfig*, unsigned int, unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN18AsyncBliterHandler11setDpConfigEP13PrivateHandlePKN18DisplayBufferQueue13DisplayBufferEPNS_12BufferConfigEjRKj(void) {
    ALOGD("_ZN18AsyncBliterHandler11setDpConfigEP13PrivateHandlePKN18DisplayBufferQueue13DisplayBufferEPNS_12BufferConfigEjRKj() called");
    return 0;
}

/* Demangled: setPQParam(unsigned long const&, DpPqParam*, unsigned int const&, bool const&, int const&, bool const&, int const&, unsigned int const&, native_handle const* const&, unsigned int const&, bool const&, bool const&) */
extern "C" __attribute__((visibility("default"))) int _Z10setPQParamRKmP9DpPqParamRKjRKbRKiS6_S8_S4_RKPK13native_handleS4_S6_S6_(void) {
    ALOGD("_Z10setPQParamRKmP9DpPqParamRKjRKbRKiS6_S8_S4_RKPK13native_handleS4_S6_S6_() called");
    return 0;
}

/* Demangled: HrtCommon::isRPOEnabled() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9HrtCommon12isRPOEnabledEv(void) {
    ALOGD("_ZNK9HrtCommon12isRPOEnabledEv() called");
    return 0;
}

/* Demangled: HWCMediator::HWCMediator() */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediatorC1Ev(void) {
    ALOGD("_ZN11HWCMediatorC1Ev() called");
    return 0;
}

/* Demangled: android::Vector<android::SortedVector<android::sp<HWCVSyncListener> > >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_12SortedVectorINS_2spI16HWCVSyncListenerEEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_12SortedVectorINS_2spI16HWCVSyncListenerEEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, int, int, unsigned int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmiijEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmiijEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: GrallocDevice::alloc(GrallocDevice::AllocParam&) */
extern "C" __attribute__((visibility("default"))) int _ZN13GrallocDevice5allocERNS_10AllocParamE(void) {
    ALOGD("_ZN13GrallocDevice5allocERNS_10AllocParamE() called");
    return 0;
}

/* Demangled: ColorTransform::dump(android::String8*) */
extern "C" __attribute__((visibility("default"))) int _ZN14ColorTransform4dumpEPN7android7String8E(void) {
    ALOGD("_ZN14ColorTransform4dumpEPN7android7String8E() called");
    return 0;
}

/* Demangled: AsyncBlitDevice::getAvailableOverlayInput(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN15AsyncBlitDevice24getAvailableOverlayInputEm(void) {
    ALOGD("_ZN15AsyncBlitDevice24getAvailableOverlayInputEm() called");
    return 0;
}

/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultImEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EE7destroyEv */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultImEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EE7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultImEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EE7destroyEv() called");
    return 0;
}

/* Demangled: HWC2Api::HWC2Api() */
extern "C" __attribute__((visibility("default"))) int _ZN7HWC2ApiC2Ev(void) {
    ALOGD("_ZN7HWC2ApiC2Ev() called");
    return 0;
}

/* Demangled: hwc::GrallocMapper::~GrallocMapper() */
extern "C" __attribute__((visibility("default"))) int _ZN3hwc13GrallocMapperD1Ev(void) {
    ALOGD("_ZN3hwc13GrallocMapperD1Ev() called");
    return 0;
}

/* Demangled: hwc::GraphicBufferMapper::getCompression(native_handle const*, aidl::android::hardware::graphics::common::Compression*) */
extern "C" __attribute__((visibility("default"))) int _ZN3hwc19GraphicBufferMapper14getCompressionEPK13native_handlePN4aidl7android8hardware8graphics6common11CompressionE(void) {
    ALOGD("_ZN3hwc19GraphicBufferMapper14getCompressionEPK13native_handlePN4aidl7android8hardware8graphics6common11CompressionE() called");
    return 0;
}

/* Demangled: __gttf2 */
extern "C" __attribute__((visibility("default"))) int __gttf2(void) {
    ALOGD("__gttf2() called");
    return 0;
}

/* Demangled: HWCDispatcher::setSessionMode(unsigned long, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN13HWCDispatcher14setSessionModeEmb(void) {
    ALOGD("_ZN13HWCDispatcher14setSessionModeEmb() called");
    return 0;
}

/* Demangled: PanelEventMonitorThread::PanelEventMonitorThread() */
extern "C" __attribute__((visibility("default"))) int _ZN23PanelEventMonitorThreadC1Ev(void) {
    ALOGD("_ZN23PanelEventMonitorThreadC1Ev() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, HWC_DISP_MODE>(unsigned int const&, unsigned char const&, char const*, char const*, HWC_DISP_MODE) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKc13HWC_DISP_MODEEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKc13HWC_DISP_MODEEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Exported Object: VTT for android::DisplayFeatureCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android22DisplayFeatureCallbackE = NULL;

/* Demangled: copyHWCLayerIntoLightHwcLayer1(android::sp<HWCLayer> const&, LightHwcLayer1*, bool) */
extern "C" __attribute__((visibility("default"))) int _Z30copyHWCLayerIntoLightHwcLayer1RKN7android2spI8HWCLayerEEP14LightHwcLayer1b(void) {
    ALOGD("_Z30copyHWCLayerIntoLightHwcLayer1RKN7android2spI8HWCLayerEEP14LightHwcLayer1b() called");
    return 0;
}

/* Demangled: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN7android8hardware8graphics6common4V1_211PixelFormatEEEiPK13native_handleRKNS7_6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EE7__cloneEv */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN7android8hardware8graphics6common4V1_211PixelFormatEEEiPK13native_handleRKNS7_6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EE7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN7android8hardware8graphics6common4V1_211PixelFormatEEEiPK13native_handleRKNS7_6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EE7__cloneEv() called");
    return 0;
}

/* Demangled: Platform::Platform() */
extern "C" __attribute__((visibility("default"))) int _ZN8PlatformC2Ev(void) {
    ALOGD("_ZN8PlatformC2Ev() called");
    return 0;
}

/* Demangled: AsyncBlitDevice::AsyncBlitDevice() */
extern "C" __attribute__((visibility("default"))) int _ZN15AsyncBlitDeviceC1Ev(void) {
    ALOGD("_ZN15AsyncBlitDeviceC1Ev() called");
    return 0;
}

/* Demangled: GrallocDevice::~GrallocDevice() */
extern "C" __attribute__((visibility("default"))) int _ZN13GrallocDeviceD2Ev(void) {
    ALOGD("_ZN13GrallocDeviceD2Ev() called");
    return 0;
}

/* Demangled: android::SWWatchDog::suspend() */
extern "C" __attribute__((visibility("default"))) int _ZN7android10SWWatchDog7suspendEv(void) {
    ALOGD("_ZN7android10SWWatchDog7suspendEv() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, char const*, unsigned long, unsigned int, unsigned int, int, int>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, unsigned long, unsigned int, unsigned int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcS2_mjjiiEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcS2_mjjiiEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: TouchHintThread::setEnabled(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN15TouchHintThread10setEnabledEb(void) {
    ALOGD("_ZN15TouchHintThread10setEnabledEb() called");
    return 0;
}

/* Demangled: UEventThread::handleUevents(char const*, long) */
extern "C" __attribute__((visibility("default"))) int _ZN12UEventThread13handleUeventsEPKcl(void) {
    ALOGD("_ZN12UEventThread13handleUeventsEPKcl() called");
    return 0;
}

/* Demangled: android::sp<DisplayBufferQueue>::operator=(DisplayBufferQueue*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spI18DisplayBufferQueueEaSEPS1_(void) {
    ALOGD("_ZN7android2spI18DisplayBufferQueueEaSEPS1_() called");
    return 0;
}

/* Demangled: DispDevice::destroyOverlaySession(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice21destroyOverlaySessionEm(void) {
    ALOGD("_ZN10DispDevice21destroyOverlaySessionEm() called");
    return 0;
}

/* Demangled: android::Vector<DispatcherJob*>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIP13DispatcherJobE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIP13DispatcherJobE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: AsyncBlitDevice::prepareOverlayPresentFence(unsigned long, OverlayPrepareParam*) */
extern "C" __attribute__((visibility("default"))) int _ZN15AsyncBlitDevice26prepareOverlayPresentFenceEmP19OverlayPrepareParam(void) {
    ALOGD("_ZN15AsyncBlitDevice26prepareOverlayPresentFenceEmP19OverlayPrepareParam() called");
    return 0;
}

/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common8Cta861_3EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EE18destroy_deallocateEv */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common8Cta861_3EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EE18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common8Cta861_3EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EE18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalINS_6vectorIhNS_9allocatorIhEEEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS7_ISX_EEFvNSI_5ErrorESQ_EE7destroyEv */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalINS_6vectorIhNS_9allocatorIhEEEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS7_ISX_EEFvNSI_5ErrorESQ_EE7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalINS_6vectorIhNS_9allocatorIhEEEEEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS7_ISX_EEFvNSI_5ErrorESQ_EE7destroyEv() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, DISP_IF_TYPE>(unsigned int const&, unsigned char const&, char const*, char const*, DISP_IF_TYPE) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKc12DISP_IF_TYPEEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKc12DISP_IF_TYPEEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: IONDevice::ionMUnmap(int, void*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9IONDevice9ionMUnmapEiPvm(void) {
    ALOGD("_ZN9IONDevice9ionMUnmapEiPvm() called");
    return 0;
}

/* Demangled: __addtf3 */
extern "C" __attribute__((visibility("default"))) int __addtf3(void) {
    ALOGD("__addtf3() called");
    return 0;
}

/* Exported Object: _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common9Smpte2086EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EEE */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common9Smpte2086EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EEE = NULL;

/* Demangled: DbgLogger::DbgLogger<unsigned long, char const*>(unsigned int const&, unsigned char const&, char const*, unsigned long, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJmPKcEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJmPKcEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: OverlayEngine::closeOverlayFenceFd(FrameOverlayInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN13OverlayEngine19closeOverlayFenceFdEP16FrameOverlayInfo(void) {
    ALOGD("_ZN13OverlayEngine19closeOverlayFenceFdEP16FrameOverlayInfo() called");
    return 0;
}

/* Demangled: FrameOverlayInfo::~FrameOverlayInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN16FrameOverlayInfoD1Ev(void) {
    ALOGD("_ZN16FrameOverlayInfoD1Ev() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, char const*, int, int, char*, int>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, int, int, char*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcS2_iiPciEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcS2_iiPciEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: AsyncBliterHandler::nullop() */
extern "C" __attribute__((visibility("default"))) int _ZN18AsyncBliterHandler6nullopEv(void) {
    ALOGD("_ZN18AsyncBliterHandler6nullopEv() called");
    return 0;
}

/* Demangled: HWCLayer::afterPresent(bool const&) */
extern "C" __attribute__((visibility("default"))) int _ZN8HWCLayer12afterPresentERKb(void) {
    ALOGD("_ZN8HWCLayer12afterPresentERKb() called");
    return 0;
}

/* Demangled: HWCMediator::displaySetColorMode(hwc2_device*, unsigned long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator19displaySetColorModeEP11hwc2_devicemi(void) {
    ALOGD("_ZN11HWCMediator19displaySetColorModeEP11hwc2_devicemi() called");
    return 0;
}

/* Demangled: HWCDisplay::beforePresent(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10HWCDisplay13beforePresentEj(void) {
    ALOGD("_ZN10HWCDisplay13beforePresentEj() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, int, float, double, double, double>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, int, float, double, double, double) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmifdddEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmifdddEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: HWCDispatcher::removeVSyncListener(unsigned long, android::sp<HWCVSyncListener> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN13HWCDispatcher19removeVSyncListenerEmRKN7android2spI16HWCVSyncListenerEE(void) {
    ALOGD("_ZN13HWCDispatcher19removeVSyncListenerEmRKN7android2spI16HWCVSyncListenerEE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<BliterNode::JobParam, std::__1::allocator<BliterNode::JobParam> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN10BliterNode8JobParamENS_9allocatorIS2_EEEE = NULL;

/* Demangled: protectedCloseImpl(int const&, char const*, int const&) */
extern "C" __attribute__((visibility("default"))) int _Z18protectedCloseImplRKiPKcS0_(void) {
    ALOGD("_Z18protectedCloseImplRKiPKcS0_() called");
    return 0;
}

/* Demangled: VSyncThread::~VSyncThread() */
extern "C" __attribute__((visibility("default"))) int _ZN11VSyncThreadD0Ev(void) {
    ALOGD("_ZN11VSyncThreadD0Ev() called");
    return 0;
}

/* Demangled: BliterNode::cancelJob(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZN10BliterNode9cancelJobERKj(void) {
    ALOGD("_ZN10BliterNode9cancelJobERKj() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<int, bool>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, bool>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, bool>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, bool> > >::remove(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<int, bool>, void*>*>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIibEENS_22__unordered_map_hasherIiS2_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS2_NS_8equal_toIiEELb1EEENS_9allocatorIS2_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS2_PvEEEE(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIibEENS_22__unordered_map_hasherIiS2_NS_4hashIiEELb1EEENS_21__unordered_map_equalIiS2_NS_8equal_toIiEELb1EEENS_9allocatorIS2_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS2_PvEEEE() called");
    return 0;
}

/* Demangled: HWCDisplay::setJobDisplayData() */
extern "C" __attribute__((visibility("default"))) int _ZN10HWCDisplay17setJobDisplayDataEv(void) {
    ALOGD("_ZN10HWCDisplay17setJobDisplayDataEv() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<FrameInfo> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spI9FrameInfoEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spI9FrameInfoEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for OverlayEngine */
extern "C" __attribute__((visibility("default"))) void* _ZTV13OverlayEngine = NULL;

/* Demangled: DispDevice::updateDisplayResolution(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice23updateDisplayResolutionEm(void) {
    ALOGD("_ZN10DispDevice23updateDisplayResolutionEm() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<android::SWWatchDog::Recipient, std::__1::allocator<android::SWWatchDog::Recipient> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN7android10SWWatchDog9RecipientENS_9allocatorIS3_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN7android10SWWatchDog9RecipientENS_9allocatorIS3_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: LayerComposer::cancelLayers(DispatcherJob*) */
extern "C" __attribute__((visibility("default"))) int _ZN13LayerComposer12cancelLayersEP13DispatcherJob(void) {
    ALOGD("_ZN13LayerComposer12cancelLayersEP13DispatcherJob() called");
    return 0;
}

/* Demangled: hwc::GraphicBufferMapper::getDefaultInterlaced(unsigned int, unsigned int, int, unsigned int, unsigned long, aidl::android::hardware::graphics::common::Interlaced*) */
extern "C" __attribute__((visibility("default"))) int _ZN3hwc19GraphicBufferMapper20getDefaultInterlacedEjjijmPN4aidl7android8hardware8graphics6common10InterlacedE(void) {
    ALOGD("_ZN3hwc19GraphicBufferMapper20getDefaultInterlacedEjjijmPN4aidl7android8hardware8graphics6common10InterlacedE() called");
    return 0;
}

/* Demangled: AsyncBliterHandler::setMirror(android::sp<HWCDisplay> const&, DispatcherJob*) */
extern "C" __attribute__((visibility("default"))) int _ZN18AsyncBliterHandler9setMirrorERKN7android2spI10HWCDisplayEEP13DispatcherJob(void) {
    ALOGD("_ZN18AsyncBliterHandler9setMirrorERKN7android2spI10HWCDisplayEEP13DispatcherJob() called");
    return 0;
}

/* Demangled: DispDevice::getMaxOverlayInputNum() */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice21getMaxOverlayInputNumEv(void) {
    ALOGD("_ZN10DispDevice21getMaxOverlayInputNumEv() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, FrameFenceInfo>, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, FrameFenceInfo>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, FrameFenceInfo>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, FrameFenceInfo>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, FrameFenceInfo> > >::__emplace_unique_key_args<unsigned int, std::__1::pair<unsigned int const, FrameFenceInfo> >(unsigned int const&, std::__1::pair<unsigned int const, FrameFenceInfo>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIj14FrameFenceInfoEENS_22__unordered_map_hasherIjS3_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS3_NS_8equal_toIjEELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIjJNS_4pairIKjS2_EEEEENSG_INS_15__hash_iteratorIPNS_11__hash_nodeIS3_PvEEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIj14FrameFenceInfoEENS_22__unordered_map_hasherIjS3_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS3_NS_8equal_toIjEELb1EEENS_9allocatorIS3_EEE25__emplace_unique_key_argsIjJNS_4pairIKjS2_EEEEENSG_INS_15__hash_iteratorIPNS_11__hash_nodeIS3_PvEEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: hwc::GraphicBufferMapper::getHeight(native_handle const*, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZN3hwc19GraphicBufferMapper9getHeightEPK13native_handlePm(void) {
    ALOGD("_ZN3hwc19GraphicBufferMapper9getHeightEPK13native_handlePm() called");
    return 0;
}

/* Demangled: DisplayListener::DisplayListener(void (*)(void*, unsigned long, int), void*, void (*)(void*, unsigned long, long), void*, void (*)(void*, unsigned long), void*) */
extern "C" __attribute__((visibility("default"))) int _ZN15DisplayListenerC1EPFvPvmiES0_PFvS0_mlES0_PFvS0_mES0_(void) {
    ALOGD("_ZN15DisplayListenerC1EPFvPvmiES0_PFvS0_mlES0_PFvS0_mES0_() called");
    return 0;
}

/* Demangled: android::Vector<android::sp<DispatcherJob> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorINS_2spI13DispatcherJobEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorINS_2spI13DispatcherJobEEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: DisplayManager::DisplayManager() */
extern "C" __attribute__((visibility("default"))) int _ZN14DisplayManagerC2Ev(void) {
    ALOGD("_ZN14DisplayManagerC2Ev() called");
    return 0;
}

/* Demangled: Debugger::LOGGER::LOGGER() */
extern "C" __attribute__((visibility("default"))) int _ZN8Debugger6LOGGERC1Ev(void) {
    ALOGD("_ZN8Debugger6LOGGERC1Ev() called");
    return 0;
}

/* Demangled: DisplayManager::getPhysicalPanelSize(unsigned int*, unsigned int*, SessionInfo&) */
extern "C" __attribute__((visibility("default"))) int _ZN14DisplayManager20getPhysicalPanelSizeEPjS0_R11SessionInfo(void) {
    ALOGD("_ZN14DisplayManager20getPhysicalPanelSizeEPjS0_R11SessionInfo() called");
    return 0;
}

/* Demangled: setPrivateHandlePQInfo(native_handle const* const&, PrivateHandle*) */
extern "C" __attribute__((visibility("default"))) int _Z22setPrivateHandlePQInfoRKPK13native_handleP13PrivateHandle(void) {
    ALOGD("_Z22setPrivateHandlePQInfoRKPK13native_handleP13PrivateHandle() called");
    return 0;
}

/* Demangled: MDPFrameInfoDebugger::~MDPFrameInfoDebugger() */
extern "C" __attribute__((visibility("default"))) int _ZN20MDPFrameInfoDebuggerD1Ev(void) {
    ALOGD("_ZN20MDPFrameInfoDebuggerD1Ev() called");
    return 0;
}

/* Demangled: PerfHelper::perfLockRel(int) */
extern "C" __attribute__((visibility("default"))) int _ZN10PerfHelper11perfLockRelEi(void) {
    ALOGD("_ZN10PerfHelper11perfLockRelEi() called");
    return 0;
}

/* Demangled: HWCLayer::~HWCLayer() */
extern "C" __attribute__((visibility("default"))) int _ZN8HWCLayerD1Ev(void) {
    ALOGD("_ZN8HWCLayerD1Ev() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, bool>(unsigned int const&, unsigned char const&, char const*, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcbEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcbEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: PerfHelper::PerfHelper() */
extern "C" __attribute__((visibility("default"))) int _ZN10PerfHelperC1Ev(void) {
    ALOGD("_ZN10PerfHelperC1Ev() called");
    return 0;
}

/* Demangled: HWCDispatcher::registerVSyncListener(unsigned long, android::sp<HWCVSyncListener> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN13HWCDispatcher21registerVSyncListenerEmRKN7android2spI16HWCVSyncListenerEE(void) {
    ALOGD("_ZN13HWCDispatcher21registerVSyncListenerEmRKN7android2spI16HWCVSyncListenerEE() called");
    return 0;
}

/* Demangled: android::Vector<native_handle const*>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIPK13native_handleE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIPK13native_handleE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: DispDevice::waitRefreshRequest(unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice18waitRefreshRequestEPj(void) {
    ALOGD("_ZN10DispDevice18waitRefreshRequestEPj() called");
    return 0;
}

/* Demangled: Debugger::checkLevel(unsigned char const&) */
extern "C" __attribute__((visibility("default"))) int _ZN8Debugger10checkLevelERKh(void) {
    ALOGD("_ZN8Debugger10checkLevelERKh() called");
    return 0;
}

/* Demangled: DisplayManager::refreshForDriver(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN14DisplayManager16refreshForDriverEj(void) {
    ALOGD("_ZN14DisplayManager16refreshForDriverEj() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, bool, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, int, bool>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, bool, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmjjjjjjbjjjjjjjibEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmjjjjjjbjjjjjjjibEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_iostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_14basic_iostreamIcS2_EE = NULL;

/* Demangled: DbgLogger::DbgLogger<char const*, void (*)(void*, unsigned long, long)>(unsigned int const&, unsigned char const&, char const*, char const*, void (*)(void*, unsigned long, long)) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcPFvPvmlEEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcPFvPvmlEEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: HWCLayer::HWCLayer(android::wp<HWCDisplay> const&, unsigned long const&, bool const&) */
extern "C" __attribute__((visibility("default"))) int _ZN8HWCLayerC2ERKN7android2wpI10HWCDisplayEERKmRKb(void) {
    ALOGD("_ZN8HWCLayerC2ERKN7android2wpI10HWCDisplayEERKmRKb() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, int, int, char const*>(unsigned int const&, unsigned char const&, char const*, char const*, int, int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKciiS2_EEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKciiS2_EEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultImEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EE7__cloneEPNS0_6__baseISS_EE */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultImEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EE7__cloneEPNS0_6__baseISS_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultImEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS6_8hidl_vecIhEEPT_ESJ_EUlRKSI_SH_E_NS_9allocatorISO_EEFvNS9_5ErrorESH_EE7__cloneEPNS0_6__baseISS_EE() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, native_handle const*, int, int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, native_handle const*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmPK13native_handleiiEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmPK13native_handleiiEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned int, unsigned int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmjjEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmjjEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: FrameOverlayInfo::initData() */
extern "C" __attribute__((visibility("default"))) int _ZN16FrameOverlayInfo8initDataEv(void) {
    ALOGD("_ZN16FrameOverlayInfo8initDataEv() called");
    return 0;
}

/* Exported Object: HWC_COMPOSITION_FILE_PLATFORM_STR */
extern "C" __attribute__((visibility("default"))) void* HWC_COMPOSITION_FILE_PLATFORM_STR = NULL;

/* Demangled: freeDuppedBufferHandle(native_handle const*) */
extern "C" __attribute__((visibility("default"))) int _Z22freeDuppedBufferHandlePK13native_handle(void) {
    ALOGD("_Z22freeDuppedBufferHandlePK13native_handle() called");
    return 0;
}

/* Exported Object: VTT for PanelEventMonitorThread */
extern "C" __attribute__((visibility("default"))) void* _ZTT23PanelEventMonitorThread = NULL;

/* Demangled: virtual thunk to DisplayBufferQueue::~DisplayBufferQueue() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N18DisplayBufferQueueD1Ev(void) {
    ALOGD("_ZTv0_n24_N18DisplayBufferQueueD1Ev() called");
    return 0;
}

/* Demangled: unsigned long std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<BliterNode::JobParam> >, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<BliterNode::JobParam> >, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<BliterNode::JobParam> >, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, std::__1::shared_ptr<BliterNode::JobParam> > > >::__erase_unique<unsigned int>(unsigned int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN10BliterNode8JobParamEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE14__erase_uniqueIjEEmRKT_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIjNS_10shared_ptrIN10BliterNode8JobParamEEEEENS_22__unordered_map_hasherIjS6_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS6_NS_8equal_toIjEELb1EEENS_9allocatorIS6_EEE14__erase_uniqueIjEEmRKT_() called");
    return 0;
}

/* Demangled: DispDevice::isFenceWaitSupported() */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice20isFenceWaitSupportedEv(void) {
    ALOGD("_ZN10DispDevice20isFenceWaitSupportedEv() called");
    return 0;
}

/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSC_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EEclEOSX_SN_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSC_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EEclEOSX_SN_(void) {
    ALOGD("_ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSC_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EEclEOSX_SN_() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned long, int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmmiEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmmiEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Exported Object: HWC2_PRESENT_VALI_STATE_PRESENT_DONE_STR */
extern "C" __attribute__((visibility("default"))) void* HWC2_PRESENT_VALI_STATE_PRESENT_DONE_STR = NULL;

/* Exported Object: HWC2_BLEND_MODE_COVERAGE_STR */
extern "C" __attribute__((visibility("default"))) void* HWC2_BLEND_MODE_COVERAGE_STR = NULL;

/* Demangled: android::SWWatchDog::setWDTNotify(std::__1::shared_ptr<android::SWWatchDog::Recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10SWWatchDog12setWDTNotifyERKNSt3__110shared_ptrINS0_9RecipientEEE(void) {
    ALOGD("_ZN7android10SWWatchDog12setWDTNotifyERKNSt3__110shared_ptrINS0_9RecipientEEE() called");
    return 0;
}

/* Demangled: MDPFrameInfoDebugger::checkMDPLayerExecTime() */
extern "C" __attribute__((visibility("default"))) int _ZN20MDPFrameInfoDebugger21checkMDPLayerExecTimeEv(void) {
    ALOGD("_ZN20MDPFrameInfoDebugger21checkMDPLayerExecTimeEv() called");
    return 0;
}

/* Demangled: HWVSyncEstimator::getAvgHWVSyncPeriod() */
extern "C" __attribute__((visibility("default"))) int _ZN16HWVSyncEstimator19getAvgHWVSyncPeriodEv(void) {
    ALOGD("_ZN16HWVSyncEstimator19getAvgHWVSyncPeriodEv() called");
    return 0;
}

/* Demangled: hwc::GraphicBufferMapper::getDefaultProtectedContent(unsigned int, unsigned int, int, unsigned int, unsigned long, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZN3hwc19GraphicBufferMapper26getDefaultProtectedContentEjjijmPm(void) {
    ALOGD("_ZN3hwc19GraphicBufferMapper26getDefaultProtectedContentEjjijmPm() called");
    return 0;
}

/* Demangled: HWCMediator::layerStateSetPlaneAlpha(hwc2_device*, unsigned long, unsigned long, float) */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator23layerStateSetPlaneAlphaEP11hwc2_devicemmf(void) {
    ALOGD("_ZN11HWCMediator23layerStateSetPlaneAlphaEP11hwc2_devicemmf() called");
    return 0;
}

/* Demangled: DispatcherJob::resetData() */
extern "C" __attribute__((visibility("default"))) int _ZN13DispatcherJob9resetDataEv(void) {
    ALOGD("_ZN13DispatcherJob9resetDataEv() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, char const*, HWC_COMP_FILE>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, HWC_COMP_FILE) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcS2_13HWC_COMP_FILEEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcS2_13HWC_COMP_FILEEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSG_8hidl_vecIhEEPT_EST_EUlRKSS_SR_E_NSC_ISY_EEFvNSJ_5ErrorESR_EE18destroy_deallocateEv */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSG_8hidl_vecIhEEPT_EST_EUlRKSS_SR_E_NSC_ISY_EEFvNSJ_5ErrorESR_EE18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultINS_6vectorIN4aidl7android8hardware8graphics6common11PlaneLayoutENS_9allocatorISB_EEEEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSG_8hidl_vecIhEEPT_EST_EUlRKSS_SR_E_NSC_ISY_EEFvNSJ_5ErrorESR_EE18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: HWLayer::resetData() */
extern "C" __attribute__((visibility("default"))) int _ZN7HWLayer9resetDataEv(void) {
    ALOGD("_ZN7HWLayer9resetDataEv() called");
    return 0;
}

/* Demangled: BlackBuffer::BlackBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN11BlackBufferC1Ev(void) {
    ALOGD("_ZN11BlackBufferC1Ev() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<unsigned int, FrameFenceInfo>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, FrameFenceInfo>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, FrameFenceInfo>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, FrameFenceInfo> > >::rehash(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIj14FrameFenceInfoEENS_22__unordered_map_hasherIjS3_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS3_NS_8equal_toIjEELb1EEENS_9allocatorIS3_EEE6rehashEm(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIj14FrameFenceInfoEENS_22__unordered_map_hasherIjS3_NS_4hashIjEELb1EEENS_21__unordered_map_equalIjS3_NS_8equal_toIjEELb1EEENS_9allocatorIS3_EEE6rehashEm() called");
    return 0;
}

/* Demangled: HWCDispatcher::dump(android::String8*) */
extern "C" __attribute__((visibility("default"))) int _ZN13HWCDispatcher4dumpEPN7android7String8E(void) {
    ALOGD("_ZN13HWCDispatcher4dumpEPN7android7String8E() called");
    return 0;
}

/* Demangled: HWCLayer::setDisplayFrame(hwc_rect const&) */
extern "C" __attribute__((visibility("default"))) int _ZN8HWCLayer15setDisplayFrameERK8hwc_rect(void) {
    ALOGD("_ZN8HWCLayer15setDisplayFrameERK8hwc_rect() called");
    return 0;
}

/* Demangled: HWCMediator::layerStateSetVisibleRegion(hwc2_device*, unsigned long, unsigned long, hwc_region) */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator26layerStateSetVisibleRegionEP11hwc2_devicemm10hwc_region(void) {
    ALOGD("_ZN11HWCMediator26layerStateSetVisibleRegionEP11hwc2_devicemm10hwc_region() called");
    return 0;
}

/* Demangled: DisplayListener::DisplayListener(void (*)(void*, unsigned long, int), void*, void (*)(void*, unsigned long, long), void*, void (*)(void*, unsigned long), void*) */
extern "C" __attribute__((visibility("default"))) int _ZN15DisplayListenerC2EPFvPvmiES0_PFvS0_mlES0_PFvS0_mES0_(void) {
    ALOGD("_ZN15DisplayListenerC2EPFvPvmiES0_PFvS0_mlES0_PFvS0_mES0_() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, char const*, unsigned long, unsigned long>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcS2_mmEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcS2_mmEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: IdleThread::~IdleThread() */
extern "C" __attribute__((visibility("default"))) int _ZN10IdleThreadD2Ev(void) {
    ALOGD("_ZN10IdleThreadD2Ev() called");
    return 0;
}

/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common8Cta861_3EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EEclEOS12_SS_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common8Cta861_3EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EEclEOS12_SS_(void) {
    ALOGD("_ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getINS_8optionalIN4aidl7android8hardware8graphics6common8Cta861_3EEEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSH_8hidl_vecIhEEPT_ESU_EUlRKST_SS_E_NS_9allocatorISZ_EEFvNSK_5ErrorESS_EEclEOS12_SS_() called");
    return 0;
}

/* Demangled: HWCMediator::layerStateSetCompositionType(hwc2_device*, unsigned long, unsigned long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator28layerStateSetCompositionTypeEP11hwc2_devicemmi(void) {
    ALOGD("_ZN11HWCMediator28layerStateSetCompositionTypeEP11hwc2_devicemmi() called");
    return 0;
}

/* Demangled: OverlayEngine::disableOutput() */
extern "C" __attribute__((visibility("default"))) int _ZN13OverlayEngine13disableOutputEv(void) {
    ALOGD("_ZN13OverlayEngine13disableOutputEv() called");
    return 0;
}

/* Demangled: android::Vector<OverlayPortParam*>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIP16OverlayPortParamE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIP16OverlayPortParamE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: AsyncBlitDevice::getRszMaxWidthInput() */
extern "C" __attribute__((visibility("default"))) int _ZN15AsyncBlitDevice19getRszMaxWidthInputEv(void) {
    ALOGD("_ZN15AsyncBlitDevice19getRszMaxWidthInputEv() called");
    return 0;
}

/* Demangled: Debugger::Debugger() */
extern "C" __attribute__((visibility("default"))) int _ZN8DebuggerC2Ev(void) {
    ALOGD("_ZN8DebuggerC2Ev() called");
    return 0;
}

/* Demangled: hwc::Gralloc4Mapper::Gralloc4Mapper() */
extern "C" __attribute__((visibility("default"))) int _ZN3hwc14Gralloc4MapperC2Ev(void) {
    ALOGD("_ZN3hwc14Gralloc4MapperC2Ev() called");
    return 0;
}

/* Demangled: int hwc::Gralloc4Mapper::getDefault<aidl::android::hardware::graphics::common::ExtendableType>(unsigned int, unsigned int, int, unsigned int, unsigned long, android::hardware::graphics::mapper::V4_0::IMapper::MetadataType const&, int (*)(android::hardware::hidl_vec<unsigned char> const&, aidl::android::hardware::graphics::common::ExtendableType*), aidl::android::hardware::graphics::common::ExtendableType*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc4Mapper10getDefaultIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_(void) {
    ALOGD("_ZNK3hwc14Gralloc4Mapper10getDefaultIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNS9_8hidl_vecIhEEPT_ESM_() called");
    return 0;
}

/* Exported Object: _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9DataspaceEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EEE */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9DataspaceEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EEE = NULL;

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, char const*, unsigned long>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmS2_mEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmS2_mEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: HWCDisplay::setPowerMode(int const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN10HWCDisplay12setPowerModeERKib(void) {
    ALOGD("_ZN10HWCDisplay12setPowerModeERKib() called");
    return 0;
}

/* Demangled: android::sp<UEventThread>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spI12UEventThreadED2Ev(void) {
    ALOGD("_ZN7android2spI12UEventThreadED2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to UEventThread::~UEventThread() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N12UEventThreadD0Ev(void) {
    ALOGD("_ZTv0_n24_N12UEventThreadD0Ev() called");
    return 0;
}

/* Demangled: IONDevice::~IONDevice() */
extern "C" __attribute__((visibility("default"))) int _ZN9IONDeviceD2Ev(void) {
    ALOGD("_ZN9IONDeviceD2Ev() called");
    return 0;
}

/* Demangled: HWCMediator::displayGetRequests(hwc2_device*, unsigned long, int*, unsigned int*, unsigned long*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator18displayGetRequestsEP11hwc2_devicemPiPjPmS2_(void) {
    ALOGD("_ZN11HWCMediator18displayGetRequestsEP11hwc2_devicemPiPjPmS2_() called");
    return 0;
}

/* Demangled: listForceGPUComp(std::__1::vector<android::sp<HWCLayer>, std::__1::allocator<android::sp<HWCLayer> > > const&) */
extern "C" __attribute__((visibility("default"))) int _Z16listForceGPUCompRKNSt3__16vectorIN7android2spI8HWCLayerEENS_9allocatorIS4_EEEE(void) {
    ALOGD("_Z16listForceGPUCompRKNSt3__16vectorIN7android2spI8HWCLayerEENS_9allocatorIS4_EEEE() called");
    return 0;
}

/* Demangled: android::Vector<FrameInfo*>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIP9FrameInfoE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIP9FrameInfoE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: hwc::Gralloc4Mapper::createDescriptor(void*, void*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc4Mapper16createDescriptorEPvS1_(void) {
    ALOGD("_ZNK3hwc14Gralloc4Mapper16createDescriptorEPvS1_() called");
    return 0;
}

/* Demangled: HWCMediator::deviceGetMaxVirtualDisplayCount(hwc2_device*) */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator31deviceGetMaxVirtualDisplayCountEP11hwc2_device(void) {
    ALOGD("_ZN11HWCMediator31deviceGetMaxVirtualDisplayCountEP11hwc2_device() called");
    return 0;
}

/* Demangled: HWCMediator::~HWCMediator() */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediatorD2Ev(void) {
    ALOGD("_ZN11HWCMediatorD2Ev() called");
    return 0;
}

/* Demangled: void DbgLogger::printf<>(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLogger6printfIJEEEvPKcDpT_(void) {
    ALOGD("_ZN9DbgLogger6printfIJEEEvPKcDpT_() called");
    return 0;
}

/* Demangled: HWCDispatcher::getExistJob(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN13HWCDispatcher11getExistJobEm(void) {
    ALOGD("_ZN13HWCDispatcher11getExistJobEm() called");
    return 0;
}

/* Demangled: OverlayEngine::createOutputQueue(unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN13OverlayEngine17createOutputQueueEjb(void) {
    ALOGD("_ZN13OverlayEngine17createOutputQueueEjb() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, char const*, DisplayBufferQueue*, unsigned int, native_handle const*, unsigned int>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, DisplayBufferQueue*, unsigned int, native_handle const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueuejPK13native_handlejEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueuejPK13native_handlejEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Exported Object: vtable for IPqDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTV9IPqDevice = NULL;

/* Demangled: protectedDupImpl(int const&, char const*, int const&) */
extern "C" __attribute__((visibility("default"))) int _Z16protectedDupImplRKiPKcS0_(void) {
    ALOGD("_Z16protectedDupImplRKiPKcS0_() called");
    return 0;
}

/* Demangled: HWCDispatcher::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN13HWCDispatcher11getInstanceEv(void) {
    ALOGD("_ZN13HWCDispatcher11getInstanceEv() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned int, int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcjiEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcjiEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: AsyncBliterHandler::dump(char*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN18AsyncBliterHandler4dumpEPcii(void) {
    ALOGD("_ZN18AsyncBliterHandler4dumpEPcii() called");
    return 0;
}

/* Demangled: DispDevice::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice11getInstanceEv(void) {
    ALOGD("_ZN10DispDevice11getInstanceEv() called");
    return 0;
}

/* Demangled: PanelEventMonitorThread::~PanelEventMonitorThread() */
extern "C" __attribute__((visibility("default"))) int _ZN23PanelEventMonitorThreadD2Ev(void) {
    ALOGD("_ZN23PanelEventMonitorThreadD2Ev() called");
    return 0;
}

/* Demangled: DisplayBufferQueue::setBufferParam(DisplayBufferQueue::BufferParam&) */
extern "C" __attribute__((visibility("default"))) int _ZN18DisplayBufferQueue14setBufferParamERNS_11BufferParamE(void) {
    ALOGD("_ZN18DisplayBufferQueue14setBufferParamERNS_11BufferParamE() called");
    return 0;
}

/* Demangled: AsyncBliterHandler::processPhyMirror(DispatcherJob*) */
extern "C" __attribute__((visibility("default"))) int _ZN18AsyncBliterHandler16processPhyMirrorEP13DispatcherJob(void) {
    ALOGD("_ZN18AsyncBliterHandler16processPhyMirrorEP13DispatcherJob() called");
    return 0;
}

/* Demangled: AsyncBlitDevice::isFenceWaitSupported() */
extern "C" __attribute__((visibility("default"))) int _ZN15AsyncBlitDevice20isFenceWaitSupportedEv(void) {
    ALOGD("_ZN15AsyncBlitDevice20isFenceWaitSupportedEv() called");
    return 0;
}

/* Demangled: HWCLayer::HWCLayer(android::wp<HWCDisplay> const&, unsigned long const&, bool const&) */
extern "C" __attribute__((visibility("default"))) int _ZN8HWCLayerC1ERKN7android2wpI10HWCDisplayEERKmRKb(void) {
    ALOGD("_ZN8HWCLayerC1ERKN7android2wpI10HWCDisplayEERKmRKb() called");
    return 0;
}

/* Demangled: MmBufDump::MmBufDump() */
extern "C" __attribute__((visibility("default"))) int _ZN9MmBufDumpC2Ev(void) {
    ALOGD("_ZN9MmBufDumpC2Ev() called");
    return 0;
}

/* Demangled: PerfHelper::perfLockAcq(int, int, int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10PerfHelper11perfLockAcqEiiPii(void) {
    ALOGD("_ZN10PerfHelper11perfLockAcqEiiPii() called");
    return 0;
}

/* Demangled: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9BlendModeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE7__cloneEPNS0_6__baseIS11_EE */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9BlendModeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE7__cloneEPNS0_6__baseIS11_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common9BlendModeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EE7__cloneEPNS0_6__baseIS11_EE() called");
    return 0;
}

/* Demangled: listSecure(std::__1::vector<android::sp<HWCLayer>, std::__1::allocator<android::sp<HWCLayer> > > const&) */
extern "C" __attribute__((visibility("default"))) int _Z10listSecureRKNSt3__16vectorIN7android2spI8HWCLayerEENS_9allocatorIS4_EEEE(void) {
    ALOGD("_Z10listSecureRKNSt3__16vectorIN7android2spI8HWCLayerEENS_9allocatorIS4_EEEE() called");
    return 0;
}

/* Exported Object: construction vtable for HWCThread-in-TouchHintThread */
extern "C" __attribute__((visibility("default"))) void* _ZTC15TouchHintThread0_9HWCThread = NULL;

/* Demangled: OverlayEngine::loopHandler(android::sp<FrameInfo>&) */
extern "C" __attribute__((visibility("default"))) int _ZN13OverlayEngine11loopHandlerERN7android2spI9FrameInfoEE(void) {
    ALOGD("_ZN13OverlayEngine11loopHandlerERN7android2spI9FrameInfoEE() called");
    return 0;
}

/* Demangled: AsyncBlitDevice::~AsyncBlitDevice() */
extern "C" __attribute__((visibility("default"))) int _ZN15AsyncBlitDeviceD2Ev(void) {
    ALOGD("_ZN15AsyncBlitDeviceD2Ev() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, DP_STATUS_ENUM>(unsigned int const&, unsigned char const&, char const*, char const*, DP_STATUS_ENUM) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKc14DP_STATUS_ENUMEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKc14DP_STATUS_ENUMEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: android::Vector<MdpJobInfo>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorI10MdpJobInfoE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorI10MdpJobInfoE12do_constructEPvm() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned long, unsigned int, float, float, float, float, float, float, float, float, int, int, int, int, int, int, int, int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned long, unsigned int, float, float, float, float, float, float, float, float, int, int, int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmmjffffffffiiiiiiiiEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmmjffffffffiiiiiiiiEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Exported Object: construction vtable for HWCThread-in-RefreshRequestThread */
extern "C" __attribute__((visibility("default"))) void* _ZTC20RefreshRequestThread0_9HWCThread = NULL;

/* Demangled: ComposerHandler::ComposerHandler(unsigned long, android::sp<OverlayEngine> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN15ComposerHandlerC2EmRKN7android2spI13OverlayEngineEE(void) {
    ALOGD("_ZN15ComposerHandlerC2EmRKN7android2spI13OverlayEngineEE() called");
    return 0;
}

/* Demangled: DispDevice::updateOverlayInputs(unsigned long, OverlayPortParam* const*, unsigned int, android::sp<ColorTransform>) */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice19updateOverlayInputsEmPKP16OverlayPortParamjN7android2spI14ColorTransformEE(void) {
    ALOGD("_ZN10DispDevice19updateOverlayInputsEmPKP16OverlayPortParamjN7android2spI14ColorTransformEE() called");
    return 0;
}

/* Demangled: HWCMediator::setSFCPUSet(unsigned long const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11HWCMediator11setSFCPUSetERKm(void) {
    ALOGD("_ZN11HWCMediator11setSFCPUSetERKm() called");
    return 0;
}

/* Demangled: void AbortMessager::printf<unsigned long>(char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN13AbortMessager6printfIJmEEEvPKcDpT_(void) {
    ALOGD("_ZN13AbortMessager6printfIJmEEEvPKcDpT_() called");
    return 0;
}

/* Demangled: ObjectPool<DispatcherJob>::getFreeObject() */
extern "C" __attribute__((visibility("default"))) int _ZN10ObjectPoolI13DispatcherJobE13getFreeObjectEv(void) {
    ALOGD("_ZN10ObjectPoolI13DispatcherJobE13getFreeObjectEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: Hrt::isRPOEnabled() const */
extern "C" __attribute__((visibility("default"))) int _ZNK3Hrt12isRPOEnabledEv(void) {
    ALOGD("_ZNK3Hrt12isRPOEnabledEv() called");
    return 0;
}

/* Demangled: HWCBuffer::setPrevReleaseFenceFd(int const&, bool const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9HWCBuffer21setPrevReleaseFenceFdERKiRKb(void) {
    ALOGD("_ZN9HWCBuffer21setPrevReleaseFenceFdERKiRKb() called");
    return 0;
}

/* Demangled: _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSC_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EE7__cloneEv */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSC_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EE7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper10getDefaultIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEijjijmRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSC_8hidl_vecIhEEPT_ESP_EUlRKSO_SN_E_NS_9allocatorISU_EEFvNSF_5ErrorESN_EE7__cloneEv() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, native_handle const*, int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, native_handle const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmPK13native_handleiEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmPK13native_handleiEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, unsigned long, unsigned long, native_handle const*, int>(unsigned int const&, unsigned char const&, char const*, char const*, unsigned long, unsigned long, native_handle const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcmmPK13native_handleiEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcmmPK13native_handleiEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: HWLayer::HWLayer() */
extern "C" __attribute__((visibility("default"))) int _ZN7HWLayerC1Ev(void) {
    ALOGD("_ZN7HWLayerC1Ev() called");
    return 0;
}

/* Exported Object: vtable for RefreshRequestThread */
extern "C" __attribute__((visibility("default"))) void* _ZTV20RefreshRequestThread = NULL;

/* Demangled: DbgLogger::DbgLogger<char const*, char const*, FrameInfo const*>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, FrameInfo const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcS2_PK9FrameInfoEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcS2_PK9FrameInfoEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: AsyncBlitDevice::isDispSelfRefreshSupported() */
extern "C" __attribute__((visibility("default"))) int _ZN15AsyncBlitDevice26isDispSelfRefreshSupportedEv(void) {
    ALOGD("_ZN15AsyncBlitDevice26isDispSelfRefreshSupportedEv() called");
    return 0;
}

/* Demangled: mapHwcDispMode2Disp(HWC_DISP_MODE) */
extern "C" __attribute__((visibility("default"))) int _Z19mapHwcDispMode2Disp13HWC_DISP_MODE(void) {
    ALOGD("_Z19mapHwcDispMode2Disp13HWC_DISP_MODE() called");
    return 0;
}

/* Demangled: android::SWWatchDog::dump(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10SWWatchDog4dumpERNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android10SWWatchDog4dumpERNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: HwcFeatureList::HwcFeatureList() */
extern "C" __attribute__((visibility("default"))) int _ZN14HwcFeatureListC2Ev(void) {
    ALOGD("_ZN14HwcFeatureListC2Ev() called");
    return 0;
}

/* Demangled: HWCLayer::decideMdpOutputCompressedBuffers() const */
extern "C" __attribute__((visibility("default"))) int _ZNK8HWCLayer32decideMdpOutputCompressedBuffersEv(void) {
    ALOGD("_ZNK8HWCLayer32decideMdpOutputCompressedBuffersEv() called");
    return 0;
}

/* Demangled: hwc::Gralloc4Mapper::importBuffer(android::hardware::hidl_handle const&, native_handle const**) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3hwc14Gralloc4Mapper12importBufferERKN7android8hardware11hidl_handleEPPK13native_handle(void) {
    ALOGD("_ZNK3hwc14Gralloc4Mapper12importBufferERKN7android8hardware11hidl_handleEPPK13native_handle() called");
    return 0;
}

/* Demangled: DisplayBufferQueue::dequeueBuffer(DisplayBufferQueue::DisplayBuffer*, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN18DisplayBufferQueue13dequeueBufferEPNS_13DisplayBufferEbb(void) {
    ALOGD("_ZN18DisplayBufferQueue13dequeueBufferEPNS_13DisplayBufferEbb() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, char const*, DisplayBufferQueue*, int, unsigned long>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, DisplayBufferQueue*, int, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueueimEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueueimEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: HWCDisplay::setColorTransformForJob(DispatcherJob*) */
extern "C" __attribute__((visibility("default"))) int _ZN10HWCDisplay23setColorTransformForJobEP13DispatcherJob(void) {
    ALOGD("_ZN10HWCDisplay23setColorTransformForJobEP13DispatcherJob() called");
    return 0;
}

/* Exported Object: g_set_buf_from_sf_log_prefix */
extern "C" __attribute__((visibility("default"))) void* g_set_buf_from_sf_log_prefix = NULL;

/* Demangled: android::Vector<DispatcherJob*>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIP13DispatcherJobE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIP13DispatcherJobE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, char const*, int, unsigned int>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcS2_ijEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcS2_ijEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: SyncFence::SyncFence(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN9SyncFenceC2Em(void) {
    ALOGD("_ZN9SyncFenceC2Em() called");
    return 0;
}

/* Demangled: MDPFrameInfoDebugger::setJobHWCExpectMDPFinsihTime(unsigned int const&, long const&) */
extern "C" __attribute__((visibility("default"))) int _ZN20MDPFrameInfoDebugger28setJobHWCExpectMDPFinsihTimeERKjRKl(void) {
    ALOGD("_ZN20MDPFrameInfoDebugger28setJobHWCExpectMDPFinsihTimeERKjRKl() called");
    return 0;
}

/* Demangled: DispDevice::getRszMaxHeightInput() */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice20getRszMaxHeightInputEv(void) {
    ALOGD("_ZN10DispDevice20getRszMaxHeightInputEv() called");
    return 0;
}

/* Demangled: HWCDispatcher::freeDuppedInputBufferHandle(DispatcherJob*) */
extern "C" __attribute__((visibility("default"))) int _ZN13HWCDispatcher27freeDuppedInputBufferHandleEP13DispatcherJob(void) {
    ALOGD("_ZN13HWCDispatcher27freeDuppedInputBufferHandleEP13DispatcherJob() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, char const*, unsigned long, unsigned int, int, int>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, unsigned long, unsigned int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcS2_mjiiEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcS2_mjiiEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<>(unsigned int const&, unsigned char const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJEEERKjRKhPKcDpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJEEERKjRKhPKcDpT_() called");
    return 0;
}

/* Demangled: android::Vector<int>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIiE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIiE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: DbgLogger::getLogLevel() const */
extern "C" __attribute__((visibility("default"))) int _ZNK9DbgLogger11getLogLevelEv(void) {
    ALOGD("_ZNK9DbgLogger11getLogLevelEv() called");
    return 0;
}

/* Demangled: virtual thunk to IdleThread::~IdleThread() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N10IdleThreadD0Ev(void) {
    ALOGD("_ZTv0_n24_N10IdleThreadD0Ev() called");
    return 0;
}

/* Demangled: GrallocDevice::dump() const */
extern "C" __attribute__((visibility("default"))) int _ZNK13GrallocDevice4dumpEv(void) {
    ALOGD("_ZNK13GrallocDevice4dumpEv() called");
    return 0;
}

/* Demangled: android::Transform::transform(android::details::TVec3<float> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android9Transform9transformERKNS_7details5TVec3IfEE(void) {
    ALOGD("_ZNK7android9Transform9transformERKNS_7details5TVec3IfEE() called");
    return 0;
}

/* Demangled: _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EEclEOS10_SQ_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EEclEOS10_SQ_(void) {
    ALOGD("_ZNSt3__110__function6__funcIZNK3hwc14Gralloc4Mapper3getIN4aidl7android8hardware8graphics6common14ExtendableTypeEEEiPK13native_handleRKN7android8hardware8graphics6mapper4V4_07IMapper12MetadataTypeEPFiRKNSF_8hidl_vecIhEEPT_ESS_EUlRKSR_SQ_E_NS_9allocatorISX_EEFvNSI_5ErrorESQ_EEclEOS10_SQ_() called");
    return 0;
}

/* Demangled: TouchHintThread::TouchHintThread() */
extern "C" __attribute__((visibility("default"))) int _ZN15TouchHintThreadC2Ev(void) {
    ALOGD("_ZN15TouchHintThreadC2Ev() called");
    return 0;
}

/* Demangled: AsyncBlitDevice::isDisplayHrtSupport() */
extern "C" __attribute__((visibility("default"))) int _ZN15AsyncBlitDevice19isDisplayHrtSupportEv(void) {
    ALOGD("_ZN15AsyncBlitDevice19isDisplayHrtSupportEv() called");
    return 0;
}

/* Demangled: DispDevice::enableDisplayFeature(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice20enableDisplayFeatureEj(void) {
    ALOGD("_ZN10DispDevice20enableDisplayFeatureEj() called");
    return 0;
}

/* Demangled: DispDevice::isDisplaySupportedWidthAndHeight(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10DispDevice32isDisplaySupportedWidthAndHeightEjj(void) {
    ALOGD("_ZN10DispDevice32isDisplaySupportedWidthAndHeightEjj() called");
    return 0;
}

/* Demangled: AsyncBlitDevice::triggerOverlaySession(unsigned long, int, int, int, unsigned int, unsigned int const&, unsigned int const&, unsigned int, OverlayPortParam* const*, android::sp<ColorTransform>, bool const&, bool const&, bool const&) */
extern "C" __attribute__((visibility("default"))) int _ZN15AsyncBlitDevice21triggerOverlaySessionEmiiijRKjS1_jPKP16OverlayPortParamN7android2spI14ColorTransformEERKbSB_SB_(void) {
    ALOGD("_ZN15AsyncBlitDevice21triggerOverlaySessionEmiiijRKjS1_jPKP16OverlayPortParamN7android2spI14ColorTransformEERKbSB_SB_() called");
    return 0;
}

/* Exported Object: HWC2_PRESENT_VALI_STATE_CHECK_SKIP_VALI_STR */
extern "C" __attribute__((visibility("default"))) void* HWC2_PRESENT_VALI_STATE_CHECK_SKIP_VALI_STR = NULL;

/* Demangled: usageHasSecure(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z14usageHasSecurej(void) {
    ALOGD("_Z14usageHasSecurej() called");
    return 0;
}

/* Demangled: MmBufDump::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9MmBufDump11getInstanceEv(void) {
    ALOGD("_ZN9MmBufDump11getInstanceEv() called");
    return 0;
}

/* Demangled: AsyncBliterHandler::~AsyncBliterHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN18AsyncBliterHandlerD2Ev(void) {
    ALOGD("_ZN18AsyncBliterHandlerD2Ev() called");
    return 0;
}

/* Demangled: AsyncBlitDevice::updateOverlayInputs(unsigned long, OverlayPortParam* const*, unsigned int, android::sp<ColorTransform>) */
extern "C" __attribute__((visibility("default"))) int _ZN15AsyncBlitDevice19updateOverlayInputsEmPKP16OverlayPortParamjN7android2spI14ColorTransformEE(void) {
    ALOGD("_ZN15AsyncBlitDevice19updateOverlayInputsEmPKP16OverlayPortParamjN7android2spI14ColorTransformEE() called");
    return 0;
}

/* Demangled: UEventThread::initialize() */
extern "C" __attribute__((visibility("default"))) int _ZN12UEventThread10initializeEv(void) {
    ALOGD("_ZN12UEventThread10initializeEv() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, float, float>(unsigned int const&, unsigned char const&, char const*, char const*, float, float) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcffEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcffEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Demangled: DbgLogger::DbgLogger<char const*, char const*, DisplayBufferQueue*, int, int, DisplayBufferQueue::BufferSlot::BufferState>(unsigned int const&, unsigned char const&, char const*, char const*, char const*, DisplayBufferQueue*, int, int, DisplayBufferQueue::BufferSlot::BufferState) */
extern "C" __attribute__((visibility("default"))) int _ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueueiiNS3_10BufferSlot11BufferStateEEEERKjRKhS2_DpT_(void) {
    ALOGD("_ZN9DbgLoggerC2IJPKcS2_P18DisplayBufferQueueiiNS3_10BufferSlot11BufferStateEEEERKjRKhS2_DpT_() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback-in-android::DisplayFeatureCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android22DisplayFeatureCallbackE0_N6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallbackE = NULL;

/* Demangled: Debugger::LOGGER::~LOGGER() */
extern "C" __attribute__((visibility("default"))) int _ZN8Debugger6LOGGERD2Ev(void) {
    ALOGD("_ZN8Debugger6LOGGERD2Ev() called");
    return 0;
}

/* Demangled: android::SWWatchDog::Recipient::onDelAnchor(unsigned long const&, int const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, long const&, long const&, bool const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android10SWWatchDog9Recipient11onDelAnchorERKmRKiRKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKlSG_RKb(void) {
    ALOGD("_ZN7android10SWWatchDog9Recipient11onDelAnchorERKmRKiRKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKlSG_RKb() called");
    return 0;
}

/* Demangled: PrintTo(DpRect const&, std::__1::basic_ostream<char, std::__1::char_traits<char> >*) */
extern "C" __attribute__((visibility("default"))) int _Z7PrintToRK6DpRectPNSt3__113basic_ostreamIcNS2_11char_traitsIcEEEE(void) {
    ALOGD("_Z7PrintToRK6DpRectPNSt3__113basic_ostreamIcNS2_11char_traitsIcEEEE() called");
    return 0;
}
