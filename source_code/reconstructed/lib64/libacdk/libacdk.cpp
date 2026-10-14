/*
 * Reverse-Engineered Source for: libacdk.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libacdk"

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
#include "libacdk.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_GRAPHICS_FB0 "/dev/graphics/fb0"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_GRAPHICS_FB0, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_GRAPHICS_FB0, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_GRAPHICS_FB0, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: NSAcdkMhal::AcdkMhalPure::acdkMhalUninit() */
extern "C" __attribute__((visibility("default"))) int _ZN10NSAcdkMhal12AcdkMhalPure14acdkMhalUninitEv(void) {
    ALOGD("_ZN10NSAcdkMhal12AcdkMhalPure14acdkMhalUninitEv() called");
    return 0;
}

/* Demangled: NSACDK::AcdkMain::destroyMemBuf(unsigned int, AMEM_BUF_INFO*) */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK8AcdkMain13destroyMemBufEjP13AMEM_BUF_INFO(void) {
    ALOGD("_ZN6NSACDK8AcdkMain13destroyMemBufEjP13AMEM_BUF_INFO() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSACDK::AcdkMain::setSrcDev(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK8AcdkMain9setSrcDevEi(void) {
    ALOGD("_ZN6NSACDK8AcdkMain9setSrcDevEi() called");
    return 0;
}

/* Demangled: android::Vector<ImageBufferMap>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorI14ImageBufferMapE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorI14ImageBufferMapE8do_splatEPvPKvm() called");
    return 0;
}

/* Exported Object: mvImgBufMap */
extern "C" __attribute__((visibility("default"))) void* mvImgBufMap = NULL;

/* Demangled: NSACDK::surfaceView::getNumLayer(unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK11surfaceView11getNumLayerERj(void) {
    ALOGD("_ZN6NSACDK11surfaceView11getNumLayerERj() called");
    return 0;
}

/* Demangled: NSACDK::surfaceView::registerBuffer(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK11surfaceView14registerBufferEjj(void) {
    ALOGD("_ZN6NSACDK11surfaceView14registerBufferEjj() called");
    return 0;
}

/* Demangled: NSACDK::surfaceView::init() */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK11surfaceView4initEv(void) {
    ALOGD("_ZN6NSACDK11surfaceView4initEv() called");
    return 0;
}

/* Demangled: NSAcdkMhal::AcdkMhalPure::AcdkMhalPure() */
extern "C" __attribute__((visibility("default"))) int _ZN10NSAcdkMhal12AcdkMhalPureC2Ev(void) {
    ALOGD("_ZN10NSAcdkMhal12AcdkMhalPureC2Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSACDK::surfaceView::resetLayer(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK11surfaceView10resetLayerEj(void) {
    ALOGD("_ZN6NSACDK11surfaceView10resetLayerEj() called");
    return 0;
}

/* Demangled: NSACDK::AcdkMain::sendcommand(unsigned int, unsigned char*, unsigned int, unsigned char*, unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK8AcdkMain11sendcommandEjPhjS1_jPj(void) {
    ALOGD("_ZN6NSACDK8AcdkMain11sendcommandEjPhjS1_jPj() called");
    return 0;
}

/* Demangled: NSAcdkMhal::AcdkMhalPure::acdkMhalGetAFInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN10NSAcdkMhal12AcdkMhalPure17acdkMhalGetAFInfoEv(void) {
    ALOGD("_ZN10NSAcdkMhal12AcdkMhalPure17acdkMhalGetAFInfoEv() called");
    return 0;
}

/* Demangled: MDK_Open */
extern "C" __attribute__((visibility("default"))) int MDK_Open(void) {
    ALOGD("MDK_Open() called");
    return 0;
}

/* Demangled: NSAcdkMhal::AcdkMhalBase::createInstance(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10NSAcdkMhal12AcdkMhalBase14createInstanceEj(void) {
    ALOGD("_ZN10NSAcdkMhal12AcdkMhalBase14createInstanceEj() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSACDK::surfaceView::~surfaceView() */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK11surfaceViewD0Ev(void) {
    ALOGD("_ZN6NSACDK11surfaceViewD0Ev() called");
    return 0;
}

/* Demangled: NSACDK::AcdkMain::handleCapCB(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK8AcdkMain11handleCapCBEPv(void) {
    ALOGD("_ZN6NSACDK8AcdkMain11handleCapCBEPv() called");
    return 0;
}

/* Demangled: NSAcdkMhal::AcdkMhalEng::acdkMhalGetAFInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN10NSAcdkMhal11AcdkMhalEng17acdkMhalGetAFInfoEv(void) {
    ALOGD("_ZN10NSAcdkMhal11AcdkMhalEng17acdkMhalGetAFInfoEv() called");
    return 0;
}

/* Demangled: NSAcdkMhal::AcdkMhalEng::acdkMhalPreviewProc() */
extern "C" __attribute__((visibility("default"))) int _ZN10NSAcdkMhal11AcdkMhalEng19acdkMhalPreviewProcEv(void) {
    ALOGD("_ZN10NSAcdkMhal11AcdkMhalEng19acdkMhalPreviewProcEv() called");
    return 0;
}

/* Demangled: NSACDK::AcdkMain::AcdkMain(NSACDK::_ACDK_BYPASS_FLAG) */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK8AcdkMainC2ENS_17_ACDK_BYPASS_FLAGE(void) {
    ALOGD("_ZN6NSACDK8AcdkMainC2ENS_17_ACDK_BYPASS_FLAGE() called");
    return 0;
}

/* Demangled: NSAcdkMhal::AcdkMhalEng::acdkMhalPreCapture() */
extern "C" __attribute__((visibility("default"))) int _ZN10NSAcdkMhal11AcdkMhalEng18acdkMhalPreCaptureEv(void) {
    ALOGD("_ZN10NSAcdkMhal11AcdkMhalEng18acdkMhalPreCaptureEv() called");
    return 0;
}

/* Demangled: android::Vector<ImageBufferMap>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorI14ImageBufferMapE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorI14ImageBufferMapE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSACDK::surfaceView::surfaceView() */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK11surfaceViewC2Ev(void) {
    ALOGD("_ZN6NSACDK11surfaceViewC2Ev() called");
    return 0;
}

/* Demangled: NSACDK::AcdkUtility::unmapPhyAddr(AMEM_BUF_INFO*) */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK11AcdkUtility12unmapPhyAddrEP13AMEM_BUF_INFO(void) {
    ALOGD("_ZN6NSACDK11AcdkUtility12unmapPhyAddrEP13AMEM_BUF_INFO() called");
    return 0;
}

/* Demangled: NSAcdkMhal::AcdkMhalEng::acdkMhalCaptureProc() */
extern "C" __attribute__((visibility("default"))) int _ZN10NSAcdkMhal11AcdkMhalEng19acdkMhalCaptureProcEv(void) {
    ALOGD("_ZN10NSAcdkMhal11AcdkMhalEng19acdkMhalCaptureProcEv() called");
    return 0;
}

/* Demangled: NSAcdkMhal::AcdkMhalEng::acdkMhalReadyForCap() */
extern "C" __attribute__((visibility("default"))) int _ZN10NSAcdkMhal11AcdkMhalEng19acdkMhalReadyForCapEv(void) {
    ALOGD("_ZN10NSAcdkMhal11AcdkMhalEng19acdkMhalReadyForCapEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::portInfo, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::portInfo> >::__push_back_slow_path<NSCam::NSIoPipe::NSCamIOPipe::portInfo const&>(NSCam::NSIoPipe::NSCamIOPipe::portInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe8portInfoENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe8portInfoENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_() called");
    return 0;
}

/* Demangled: NSAcdkMhal::AcdkMhalPure::acdkMhal3ASetParam(int, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN10NSAcdkMhal12AcdkMhalPure18acdkMhal3ASetParamEih(void) {
    ALOGD("_ZN10NSAcdkMhal12AcdkMhalPure18acdkMhal3ASetParamEih() called");
    return 0;
}

/* Exported Object: mDebugEnable */
extern "C" __attribute__((visibility("default"))) void* mDebugEnable = NULL;

/* Demangled: NSACDK::AcdkUtility::rawImgUnpack(AMEM_BUF_INFO, AMEM_BUF_INFO, unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK11AcdkUtility12rawImgUnpackE13AMEM_BUF_INFOS1_jjjj(void) {
    ALOGD("_ZN6NSACDK11AcdkUtility12rawImgUnpackE13AMEM_BUF_INFOS1_jjjj() called");
    return 0;
}

/* Demangled: NSAcdkMhal::AcdkMhalEng::acdkMhalUninit() */
extern "C" __attribute__((visibility("default"))) int _ZN10NSAcdkMhal11AcdkMhalEng14acdkMhalUninitEv(void) {
    ALOGD("_ZN10NSAcdkMhal11AcdkMhalEng14acdkMhalUninitEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE8do_splatEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::NSIoPipe::MCrpRsInfo> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEEE = NULL;

/* Demangled: MDK_DeInit */
extern "C" __attribute__((visibility("default"))) int MDK_DeInit(void) {
    ALOGD("MDK_DeInit() called");
    return 0;
}

/* Demangled: MDK_Init */
extern "C" __attribute__((visibility("default"))) int MDK_Init(void) {
    ALOGD("MDK_Init() called");
    return 0;
}

/* Demangled: NSACDK::AcdkUtility::allocVirtBuf(AMEM_BUF_INFO*) */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK11AcdkUtility12allocVirtBufEP13AMEM_BUF_INFO(void) {
    ALOGD("_ZN6NSACDK11AcdkUtility12allocVirtBufEP13AMEM_BUF_INFO() called");
    return 0;
}

/* Demangled: NSACDK::AcdkMain::stopPreview() */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK8AcdkMain11stopPreviewEv(void) {
    ALOGD("_ZN6NSACDK8AcdkMain11stopPreviewEv() called");
    return 0;
}

/* Demangled: NSACDK::AcdkUtility::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK11AcdkUtility15destroyInstanceEv(void) {
    ALOGD("_ZN6NSACDK11AcdkUtility15destroyInstanceEv() called");
    return 0;
}

/* Demangled: NSACDK::AcdkMain::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK8AcdkMain6uninitEv(void) {
    ALOGD("_ZN6NSACDK8AcdkMain6uninitEv() called");
    return 0;
}

/* Demangled: NSACDK::AcdkMain::~AcdkMain() */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK8AcdkMainD1Ev(void) {
    ALOGD("_ZN6NSACDK8AcdkMainD1Ev() called");
    return 0;
}

/* Exported Object: vtable for NSACDK::AcdkMain */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6NSACDK8AcdkMainE = NULL;

/* Demangled: void std::__1::vector<unsigned long, std::__1::allocator<unsigned long> >::__push_back_slow_path<unsigned long>(unsigned long&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorImNS_9allocatorImEEE21__push_back_slow_pathImEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorImNS_9allocatorImEEE21__push_back_slow_pathImEEvOT_() called");
    return 0;
}

/* Demangled: NSAcdkMhal::AcdkMhalPure::acdkMhalSetState(NSAcdkMhal::acdkMhalState_enum) */
extern "C" __attribute__((visibility("default"))) int _ZN10NSAcdkMhal12AcdkMhalPure16acdkMhalSetStateENS_18acdkMhalState_enumE(void) {
    ALOGD("_ZN10NSAcdkMhal12AcdkMhalPure16acdkMhalSetStateENS_18acdkMhalState_enumE() called");
    return 0;
}

/* Demangled: android::Vector<ImageBufferMap>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorI14ImageBufferMapE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorI14ImageBufferMapE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSACDK::AcdkUtility::queryImageSize(unsigned int, unsigned int, unsigned int, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK11AcdkUtility14queryImageSizeEjjjRj(void) {
    ALOGD("_ZN6NSACDK11AcdkUtility14queryImageSizeEjjjRj() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::NSIoPipe::Input> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam8NSIoPipe5InputEEE = NULL;

/* Demangled: NSACDK::AcdkMain::setOperMode(eACDK_OPERA_MODE) */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK8AcdkMain11setOperModeE16eACDK_OPERA_MODE(void) {
    ALOGD("_ZN6NSACDK8AcdkMain11setOperModeE16eACDK_OPERA_MODE() called");
    return 0;
}

/* Demangled: NSAcdkMhal::AcdkMhalEng::doNotifyCb(int, long, long, long) */
extern "C" __attribute__((visibility("default"))) int _ZN10NSAcdkMhal11AcdkMhalEng10doNotifyCbEilll(void) {
    ALOGD("_ZN10NSAcdkMhal11AcdkMhalEng10doNotifyCbEilll() called");
    return 0;
}

/* Demangled: NSAcdkMhal::AcdkMhalEng::acdkMhalGetShutTime() */
extern "C" __attribute__((visibility("default"))) int _ZN10NSAcdkMhal11AcdkMhalEng19acdkMhalGetShutTimeEv(void) {
    ALOGD("_ZN10NSAcdkMhal11AcdkMhalEng19acdkMhalGetShutTimeEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSAcdkMhal::AcdkMhalPure::acdkMhalGetState() */
extern "C" __attribute__((visibility("default"))) int _ZN10NSAcdkMhal12AcdkMhalPure16acdkMhalGetStateEv(void) {
    ALOGD("_ZN10NSAcdkMhal12AcdkMhalPure16acdkMhalGetStateEv() called");
    return 0;
}

/* Demangled: NSAcdkMhal::AcdkMhalPure::doDataCb(int, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10NSAcdkMhal12AcdkMhalPure8doDataCbEiPvj(void) {
    ALOGD("_ZN10NSAcdkMhal12AcdkMhalPure8doDataCbEiPvj() called");
    return 0;
}

/* Demangled: NSACDK::AcdkMain::takePicture(unsigned int, unsigned int, void (*)(void*), unsigned int, unsigned int, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK8AcdkMain11takePictureEjjPFvPvEjjji(void) {
    ALOGD("_ZN6NSACDK8AcdkMain11takePictureEjjPFvPvEjjji() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: NSAcdkMhal::AcdkMhalPure::doNotifyCb(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10NSAcdkMhal12AcdkMhalPure10doNotifyCbEiiii(void) {
    ALOGD("_ZN10NSAcdkMhal12AcdkMhalPure10doNotifyCbEiiii() called");
    return 0;
}

/* Demangled: NSACDK::surfaceView::getSurfaceInfo(unsigned int&, unsigned int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK11surfaceView14getSurfaceInfoERjS1_S1_(void) {
    ALOGD("_ZN6NSACDK11surfaceView14getSurfaceInfoERjS1_S1_() called");
    return 0;
}

/* Demangled: NSACDK::AcdkUtility::init() */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK11AcdkUtility4initEv(void) {
    ALOGD("_ZN6NSACDK11AcdkUtility4initEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<NS3Av3::MetaSet_T*, std::__1::allocator<NS3Av3::MetaSet_T*> >::__push_back_slow_path<NS3Av3::MetaSet_T*>(NS3Av3::MetaSet_T*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN6NS3Av39MetaSet_TENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPN6NS3Av39MetaSet_TENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_() called");
    return 0;
}

/* Demangled: MDK_Close */
extern "C" __attribute__((visibility("default"))) int MDK_Close(void) {
    ALOGD("MDK_Close() called");
    return 0;
}

/* Demangled: NSACDK::surfaceView::resetActiveFrameBuffer(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK11surfaceView22resetActiveFrameBufferEj(void) {
    ALOGD("_ZN6NSACDK11surfaceView22resetActiveFrameBufferEj() called");
    return 0;
}

/* Demangled: NSACDK::surfaceView::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK11surfaceView6uninitEv(void) {
    ALOGD("_ZN6NSACDK11surfaceView6uninitEv() called");
    return 0;
}

/* Demangled: NSACDK::AcdkUtility::freeVirtBuf(AMEM_BUF_INFO*) */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK11AcdkUtility11freeVirtBufEP13AMEM_BUF_INFO(void) {
    ALOGD("_ZN6NSACDK11AcdkUtility11freeVirtBufEP13AMEM_BUF_INFO() called");
    return 0;
}

/* Demangled: NSACDK::AcdkMain::getSensorInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK8AcdkMain13getSensorInfoEv(void) {
    ALOGD("_ZN6NSACDK8AcdkMain13getSensorInfoEv() called");
    return 0;
}

/* Demangled: NSAcdkMhal::AcdkMhalEng::acdkMhalPreviewStop() */
extern "C" __attribute__((visibility("default"))) int _ZN10NSAcdkMhal11AcdkMhalEng19acdkMhalPreviewStopEv(void) {
    ALOGD("_ZN10NSAcdkMhal11AcdkMhalEng19acdkMhalPreviewStopEv() called");
    return 0;
}

/* Demangled: NSAcdkMhal::AcdkMhalEng::acdkMhalPreviewStart(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10NSAcdkMhal11AcdkMhalEng20acdkMhalPreviewStartEPv(void) {
    ALOGD("_ZN10NSAcdkMhal11AcdkMhalEng20acdkMhalPreviewStartEPv() called");
    return 0;
}

/* Demangled: NSAcdkMhal::AcdkMhalEng::acdkMhalGetCaptureRaw(AMEM_BUF_INFO*, AMEM_BUF_INFO*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10NSAcdkMhal11AcdkMhalEng21acdkMhalGetCaptureRawEP13AMEM_BUF_INFOS2_j(void) {
    ALOGD("_ZN10NSAcdkMhal11AcdkMhalEng21acdkMhalGetCaptureRawEP13AMEM_BUF_INFOS2_j() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSACDK::AcdkUtility::mapPhyAddr(AMEM_BUF_INFO*) */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK11AcdkUtility10mapPhyAddrEP13AMEM_BUF_INFO(void) {
    ALOGD("_ZN6NSACDK11AcdkUtility10mapPhyAddrEP13AMEM_BUF_INFO() called");
    return 0;
}

/* Demangled: NSAcdkMhal::AcdkMhalEng::acdkMhalSetShutTime(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10NSAcdkMhal11AcdkMhalEng19acdkMhalSetShutTimeEj(void) {
    ALOGD("_ZN10NSAcdkMhal11AcdkMhalEng19acdkMhalSetShutTimeEj() called");
    return 0;
}

/* Demangled: NSAcdkMhal::AcdkMhalPure::acdkMhalPreviewProc() */
extern "C" __attribute__((visibility("default"))) int _ZN10NSAcdkMhal12AcdkMhalPure19acdkMhalPreviewProcEv(void) {
    ALOGD("_ZN10NSAcdkMhal12AcdkMhalPure19acdkMhalPreviewProcEv() called");
    return 0;
}

/* Exported Object: vtable for NSAcdkMhal::AcdkMhalPure */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10NSAcdkMhal12AcdkMhalPureE = NULL;

/* Demangled: android::Vector<ImageBufferMap>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorI14ImageBufferMapE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorI14ImageBufferMapE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSAcdkMhal::AcdkMhalEng::AcdkMhalEng() */
extern "C" __attribute__((visibility("default"))) int _ZN10NSAcdkMhal11AcdkMhalEngC1Ev(void) {
    ALOGD("_ZN10NSAcdkMhal11AcdkMhalEngC1Ev() called");
    return 0;
}

/* Demangled: NSAcdkMhal::AcdkMhalEng::acdkMhalCaptureStop() */
extern "C" __attribute__((visibility("default"))) int _ZN10NSAcdkMhal11AcdkMhalEng19acdkMhalCaptureStopEv(void) {
    ALOGD("_ZN10NSAcdkMhal11AcdkMhalEng19acdkMhalCaptureStopEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: void std::__1::vector<NS3Av3::MetaSet_T, std::__1::allocator<NS3Av3::MetaSet_T> >::__push_back_slow_path<NS3Av3::MetaSet_T const&>(NS3Av3::MetaSet_T const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN6NS3Av39MetaSet_TENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN6NS3Av39MetaSet_TENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_() called");
    return 0;
}

/* Demangled: NSACDK::surfaceView::setOverlayBuf(unsigned int, unsigned char const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK11surfaceView13setOverlayBufEjPKhjjjjjj(void) {
    ALOGD("_ZN6NSACDK11surfaceView13setOverlayBufEjPKhjjjjjj() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: NSAcdkMhal::AcdkMhalPure::acdkMhalPreCapture() */
extern "C" __attribute__((visibility("default"))) int _ZN10NSAcdkMhal12AcdkMhalPure18acdkMhalPreCaptureEv(void) {
    ALOGD("_ZN10NSAcdkMhal12AcdkMhalPure18acdkMhalPreCaptureEv() called");
    return 0;
}

/* Demangled: NSAcdkMhal::AcdkMhalPure::acdkMhalCaptureProc() */
extern "C" __attribute__((visibility("default"))) int _ZN10NSAcdkMhal12AcdkMhalPure19acdkMhalCaptureProcEv(void) {
    ALOGD("_ZN10NSAcdkMhal12AcdkMhalPure19acdkMhalCaptureProcEv() called");
    return 0;
}

/* Demangled: NSACDK::AcdkBase::createInstance(NSACDK::_ACDK_BYPASS_FLAG) */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK8AcdkBase14createInstanceENS_17_ACDK_BYPASS_FLAGE(void) {
    ALOGD("_ZN6NSACDK8AcdkBase14createInstanceENS_17_ACDK_BYPASS_FLAGE() called");
    return 0;
}

/* Demangled: NSACDK::AcdkMain::getFrameCnt(unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK8AcdkMain11getFrameCntERj(void) {
    ALOGD("_ZN6NSACDK8AcdkMain11getFrameCntERj() called");
    return 0;
}

/* Demangled: NSACDK::AcdkMain::sensorFormatSetting(unsigned int, unsigned int&, unsigned int&, unsigned int&, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK8AcdkMain19sensorFormatSettingEjRjS1_S1_Pj(void) {
    ALOGD("_ZN6NSACDK8AcdkMain19sensorFormatSettingEjRjS1_S1_Pj() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: NSAcdkMhal::AcdkMhalPure::acdkMhalReadyForCap() */
extern "C" __attribute__((visibility("default"))) int _ZN10NSAcdkMhal12AcdkMhalPure19acdkMhalReadyForCapEv(void) {
    ALOGD("_ZN10NSAcdkMhal12AcdkMhalPure19acdkMhalReadyForCapEv() called");
    return 0;
}

/* Demangled: NSACDK::surfaceView::unRegisterBuffer(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK11surfaceView16unRegisterBufferEj(void) {
    ALOGD("_ZN6NSACDK11surfaceView16unRegisterBufferEj() called");
    return 0;
}

/* Demangled: NSACDK::surfaceView::~surfaceView() */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK11surfaceViewD1Ev(void) {
    ALOGD("_ZN6NSACDK11surfaceViewD1Ev() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE12do_constructEPvm() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::NSIoPipe::Output> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam8NSIoPipe6OutputEEE = NULL;

/* Exported Object: vtable for NSACDK::fakeSurfaceView */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6NSACDK15fakeSurfaceViewE = NULL;

/* Demangled: MDK_IOControl */
extern "C" __attribute__((visibility("default"))) int MDK_IOControl(void) {
    ALOGD("MDK_IOControl() called");
    return 0;
}

/* Demangled: NSAcdkMhal::AcdkMhalEng::onProcess3A() */
extern "C" __attribute__((visibility("default"))) int _ZN10NSAcdkMhal11AcdkMhalEng11onProcess3AEv(void) {
    ALOGD("_ZN10NSAcdkMhal11AcdkMhalEng11onProcess3AEv() called");
    return 0;
}

/* Demangled: NSAcdkMhal::AcdkMhalEng::acdkMhalInit() */
extern "C" __attribute__((visibility("default"))) int _ZN10NSAcdkMhal11AcdkMhalEng12acdkMhalInitEv(void) {
    ALOGD("_ZN10NSAcdkMhal11AcdkMhalEng12acdkMhalInitEv() called");
    return 0;
}

/* Demangled: mapJpgFmt(int, unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z9mapJpgFmtiPjS_(void) {
    ALOGD("_Z9mapJpgFmtiPjS_() called");
    return 0;
}

/* Demangled: NSACDK::AcdkMain::dispatchCallback(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK8AcdkMain16dispatchCallbackEPv(void) {
    ALOGD("_ZN6NSACDK8AcdkMain16dispatchCallbackEPv() called");
    return 0;
}

/* Demangled: NSAcdkMhal::AcdkMhalEng::requestMagicNum() */
extern "C" __attribute__((visibility("default"))) int _ZN10NSAcdkMhal11AcdkMhalEng15requestMagicNumEv(void) {
    ALOGD("_ZN10NSAcdkMhal11AcdkMhalEng15requestMagicNumEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSAcdkMhal::AcdkMhalPure::acdkMhalGetShutTime() */
extern "C" __attribute__((visibility("default"))) int _ZN10NSAcdkMhal12AcdkMhalPure19acdkMhalGetShutTimeEv(void) {
    ALOGD("_ZN10NSAcdkMhal12AcdkMhalPure19acdkMhalGetShutTimeEv() called");
    return 0;
}

/* Demangled: NSACDK::surfaceView::refresh() */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK11surfaceView7refreshEv(void) {
    ALOGD("_ZN6NSACDK11surfaceView7refreshEv() called");
    return 0;
}

/* Exported Object: NSACDK::AcdkMain::mSensorDev */
extern "C" __attribute__((visibility("default"))) void* _ZN6NSACDK8AcdkMain10mSensorDevE = NULL;

/* Demangled: NSAcdkMhal::AcdkMhalEng::acdkMhalCaptureStart(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10NSAcdkMhal11AcdkMhalEng20acdkMhalCaptureStartEPv(void) {
    ALOGD("_ZN10NSAcdkMhal11AcdkMhalEng20acdkMhalCaptureStartEPv() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::NSIoPipe::NSCamIOPipe::BufInfo, std::__1::allocator<NSCam::NSIoPipe::NSCamIOPipe::BufInfo> >::__push_back_slow_path<NSCam::NSIoPipe::NSCamIOPipe::BufInfo>(NSCam::NSIoPipe::NSCamIOPipe::BufInfo&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe7BufInfoENS_9allocatorIS4_EEE21__push_back_slow_pathIS4_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe11NSCamIOPipe7BufInfoENS_9allocatorIS4_EEE21__push_back_slow_pathIS4_EEvOT_() called");
    return 0;
}

/* Demangled: NSAcdkMhal::AcdkMhalPure::acdkMhalPreviewStart(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10NSAcdkMhal12AcdkMhalPure20acdkMhalPreviewStartEPv(void) {
    ALOGD("_ZN10NSAcdkMhal12AcdkMhalPure20acdkMhalPreviewStartEPv() called");
    return 0;
}

/* Demangled: NSACDK::surfaceView::getBootMode(unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK11surfaceView11getBootModeERj(void) {
    ALOGD("_ZN6NSACDK11surfaceView11getBootModeERj() called");
    return 0;
}

/* Exported Object: g_pAcdkBaseObj */
extern "C" __attribute__((visibility("default"))) void* g_pAcdkBaseObj = NULL;

/* Demangled: NSACDK::AcdkSurfaceView::createInstance(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK15AcdkSurfaceView14createInstanceEi(void) {
    ALOGD("_ZN6NSACDK15AcdkSurfaceView14createInstanceEi() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::NSIoPipe::ModuleInfo> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEEE = NULL;

/* Demangled: NSACDK::AcdkMain::quickViewImg(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK8AcdkMain12quickViewImgEj(void) {
    ALOGD("_ZN6NSACDK8AcdkMain12quickViewImgEj() called");
    return 0;
}

/* Demangled: NSACDK::AcdkMain::~AcdkMain() */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK8AcdkMainD2Ev(void) {
    ALOGD("_ZN6NSACDK8AcdkMainD2Ev() called");
    return 0;
}

/* Demangled: NSAcdkMhal::AcdkMhalPure::acdkMhalCBHandle(unsigned int, unsigned char*, unsigned char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10NSAcdkMhal12AcdkMhalPure16acdkMhalCBHandleEjPhS1_j(void) {
    ALOGD("_ZN10NSAcdkMhal12AcdkMhalPure16acdkMhalCBHandleEjPhS1_j() called");
    return 0;
}

/* Exported Object: vtable for NSACDK::AcdkUtility */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6NSACDK11AcdkUtilityE = NULL;

/* Demangled: NSAcdkMhal::AcdkMhalEng::acdkMhal3ASetParam() */
extern "C" __attribute__((visibility("default"))) int _ZN10NSAcdkMhal11AcdkMhalEng18acdkMhal3ASetParamEv(void) {
    ALOGD("_ZN10NSAcdkMhal11AcdkMhalEng18acdkMhal3ASetParamEv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::FrameParams>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe11FrameParamsEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSAcdkMhal::AcdkMhalPure::acdkMhalPreviewStop() */
extern "C" __attribute__((visibility("default"))) int _ZN10NSAcdkMhal12AcdkMhalPure19acdkMhalPreviewStopEv(void) {
    ALOGD("_ZN10NSAcdkMhal12AcdkMhalPure19acdkMhalPreviewStopEv() called");
    return 0;
}

/* Demangled: NSACDK::AcdkUtility::imageProcess(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, AMEM_BUF_INFO, AMEM_BUF_INFO, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK11AcdkUtility12imageProcessEjjjjjj13AMEM_BUF_INFOS1_jj(void) {
    ALOGD("_ZN6NSACDK11AcdkUtility12imageProcessEjjjjjj13AMEM_BUF_INFOS1_jj() called");
    return 0;
}

/* Demangled: NSACDK::AcdkMain::saveRAWImg(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK8AcdkMain10saveRAWImgEi(void) {
    ALOGD("_ZN6NSACDK8AcdkMain10saveRAWImgEi() called");
    return 0;
}

/* Demangled: NSACDK::AcdkMain::handleRAWCB(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK8AcdkMain11handleRAWCBEPv(void) {
    ALOGD("_ZN6NSACDK8AcdkMain11handleRAWCBEPv() called");
    return 0;
}

/* Demangled: NSAcdkMhal::AcdkMhalEng::addFrameMeta(unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10NSAcdkMhal11AcdkMhalEng12addFrameMetaEji(void) {
    ALOGD("_ZN10NSAcdkMhal11AcdkMhalEng12addFrameMetaEji() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ModuleInfo>::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ModuleInfoEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: NSAcdkMhal::AcdkMhalPure::acdkMhalSetShutTime(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10NSAcdkMhal12AcdkMhalPure19acdkMhalSetShutTimeEj(void) {
    ALOGD("_ZN10NSAcdkMhal12AcdkMhalPure19acdkMhalSetShutTimeEj() called");
    return 0;
}

/* Demangled: NSACDK::AcdkUtility::deallocBuffer(NSCam::IImageBuffer*&) */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK11AcdkUtility13deallocBufferERPN5NSCam12IImageBufferE(void) {
    ALOGD("_ZN6NSACDK11AcdkUtility13deallocBufferERPN5NSCam12IImageBufferE() called");
    return 0;
}

/* Demangled: NSACDK::AcdkUtility::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK11AcdkUtility14createInstanceEv(void) {
    ALOGD("_ZN6NSACDK11AcdkUtility14createInstanceEv() called");
    return 0;
}

/* Demangled: NSACDK::AcdkUtility::cacheSyncbyRange(AMEM_CACHECTRL_ENUM, AMEM_BUF_INFO*) */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK11AcdkUtility16cacheSyncbyRangeE19AMEM_CACHECTRL_ENUMP13AMEM_BUF_INFO(void) {
    ALOGD("_ZN6NSACDK11AcdkUtility16cacheSyncbyRangeE19AMEM_CACHECTRL_ENUMP13AMEM_BUF_INFO() called");
    return 0;
}

/* Demangled: NSACDK::AcdkMain::saveJPEGImg(unsigned long, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK8AcdkMain11saveJPEGImgEmj(void) {
    ALOGD("_ZN6NSACDK8AcdkMain11saveJPEGImgEmj() called");
    return 0;
}

/* Demangled: NSACDK::AcdkMain::createMemBuf(unsigned int&, unsigned int, AMEM_BUF_INFO*) */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK8AcdkMain12createMemBufERjjP13AMEM_BUF_INFO(void) {
    ALOGD("_ZN6NSACDK8AcdkMain12createMemBufERjjP13AMEM_BUF_INFO() called");
    return 0;
}

/* Demangled: non-virtual thunk to NSAcdkMhal::AcdkMhalEng::doNotifyCb(int, long, long, long) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N10NSAcdkMhal11AcdkMhalEng10doNotifyCbEilll(void) {
    ALOGD("_ZThn8_N10NSAcdkMhal11AcdkMhalEng10doNotifyCbEilll() called");
    return 0;
}

/* Demangled: NSAcdkMhal::AcdkMhalPure::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN10NSAcdkMhal12AcdkMhalPure15destroyInstanceEv(void) {
    ALOGD("_ZN10NSAcdkMhal12AcdkMhalPure15destroyInstanceEv() called");
    return 0;
}

/* Demangled: NSAcdkMhal::AcdkMhalPure::acdkMhalCaptureStop() */
extern "C" __attribute__((visibility("default"))) int _ZN10NSAcdkMhal12AcdkMhalPure19acdkMhalCaptureStopEv(void) {
    ALOGD("_ZN10NSAcdkMhal12AcdkMhalPure19acdkMhalCaptureStopEv() called");
    return 0;
}

/* Demangled: NSACDK::AcdkMain::AcdkMain(NSACDK::_ACDK_BYPASS_FLAG) */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK8AcdkMainC1ENS_17_ACDK_BYPASS_FLAGE(void) {
    ALOGD("_ZN6NSACDK8AcdkMainC1ENS_17_ACDK_BYPASS_FLAGE() called");
    return 0;
}

/* Demangled: NSACDK::AcdkMain::handleJPEGCB(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK8AcdkMain12handleJPEGCBEPv(void) {
    ALOGD("_ZN6NSACDK8AcdkMain12handleJPEGCBEPv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE8do_splatEPvPKvm() called");
    return 0;
}

/* Demangled: NSACDK::AcdkUtility::queryCapSize(unsigned int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK11AcdkUtility12queryCapSizeERjS1_(void) {
    ALOGD("_ZN6NSACDK11AcdkUtility12queryCapSizeERjS1_() called");
    return 0;
}

/* Exported Object: vtable for NSACDK::surfaceView */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6NSACDK11surfaceViewE = NULL;

/* Demangled: NSACDK::AcdkMain::handlePreviewCB(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK8AcdkMain15handlePreviewCBEPv(void) {
    ALOGD("_ZN6NSACDK8AcdkMain15handlePreviewCBEPv() called");
    return 0;
}

/* Demangled: NSAcdkMhal::AcdkMhalPure::AcdkMhalPure() */
extern "C" __attribute__((visibility("default"))) int _ZN10NSAcdkMhal12AcdkMhalPureC1Ev(void) {
    ALOGD("_ZN10NSAcdkMhal12AcdkMhalPureC1Ev() called");
    return 0;
}

/* Demangled: NSACDK::AcdkMain::setShutterTime(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK8AcdkMain14setShutterTimeEj(void) {
    ALOGD("_ZN6NSACDK8AcdkMain14setShutterTimeEj() called");
    return 0;
}

/* Demangled: NSACDK::AcdkMain::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK8AcdkMain15destroyInstanceEv(void) {
    ALOGD("_ZN6NSACDK8AcdkMain15destroyInstanceEv() called");
    return 0;
}

/* Demangled: NSACDK::AcdkMain::stateMgr(NSACDK::acdkMainState_e) */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK8AcdkMain8stateMgrENS_15acdkMainState_eE(void) {
    ALOGD("_ZN6NSACDK8AcdkMain8stateMgrENS_15acdkMainState_eE() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Output>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe6OutputEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSAcdkMhal::AcdkMhalPure::acdkMhalCaptureStart(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10NSAcdkMhal12AcdkMhalPure20acdkMhalCaptureStartEPv(void) {
    ALOGD("_ZN10NSAcdkMhal12AcdkMhalPure20acdkMhalCaptureStartEPv() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: NSACDK::AcdkMain::acdkMainSetState(NSACDK::acdkMainState_e) */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK8AcdkMain16acdkMainSetStateENS_15acdkMainState_eE(void) {
    ALOGD("_ZN6NSACDK8AcdkMain16acdkMainSetStateENS_15acdkMainState_eE() called");
    return 0;
}

/* Demangled: NSAcdkMhal::AcdkMhalEng::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN10NSAcdkMhal11AcdkMhalEng15destroyInstanceEv(void) {
    ALOGD("_ZN10NSAcdkMhal11AcdkMhalEng15destroyInstanceEv() called");
    return 0;
}

/* Demangled: NSACDK::AcdkUtility::queryPrvSize(unsigned int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK11AcdkUtility12queryPrvSizeERjS1_(void) {
    ALOGD("_ZN6NSACDK11AcdkUtility12queryPrvSizeERjS1_() called");
    return 0;
}

/* Demangled: NSACDK::AcdkMain::acdkMainGetState() */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK8AcdkMain16acdkMainGetStateEv(void) {
    ALOGD("_ZN6NSACDK8AcdkMain16acdkMainGetStateEv() called");
    return 0;
}

/* Demangled: NSAcdkMhal::AcdkMhalEng::AcdkMhalEng() */
extern "C" __attribute__((visibility("default"))) int _ZN10NSAcdkMhal11AcdkMhalEngC2Ev(void) {
    ALOGD("_ZN10NSAcdkMhal11AcdkMhalEngC2Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::MCrpRsInfo>::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10MCrpRsInfoEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<NSCam::NSIoPipe::EDIPInfoEnum, unsigned int>, std::__1::__map_value_compare<NSCam::NSIoPipe::EDIPInfoEnum, std::__1::__value_type<NSCam::NSIoPipe::EDIPInfoEnum, unsigned int>, std::__1::less<NSCam::NSIoPipe::EDIPInfoEnum>, true>, std::__1::allocator<std::__1::__value_type<NSCam::NSIoPipe::EDIPInfoEnum, unsigned int> > >::destroy(std::__1::__tree_node<std::__1::__value_type<NSCam::NSIoPipe::EDIPInfoEnum, unsigned int>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIN5NSCam8NSIoPipe12EDIPInfoEnumEjEENS_19__map_value_compareIS4_S5_NS_4lessIS4_EELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIN5NSCam8NSIoPipe12EDIPInfoEnumEjEENS_19__map_value_compareIS4_S5_NS_4lessIS4_EELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE() called");
    return 0;
}

/* Demangled: NSACDK::AcdkMain::handleQVCB(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK8AcdkMain10handleQVCBEPv(void) {
    ALOGD("_ZN6NSACDK8AcdkMain10handleQVCBEPv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE10do_destroyEPvm() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: NSACDK::AcdkUtility::queryRAWImgFullGInfo(unsigned int, unsigned int, unsigned int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK11AcdkUtility20queryRAWImgFullGInfoEjjRjS1_(void) {
    ALOGD("_ZN6NSACDK11AcdkUtility20queryRAWImgFullGInfoEjjRjS1_() called");
    return 0;
}

/* Demangled: NSAcdkMhal::AcdkMhalEng::acdkMhalSetState(NSAcdkMhal::acdkMhalState_enum) */
extern "C" __attribute__((visibility("default"))) int _ZN10NSAcdkMhal11AcdkMhalEng16acdkMhalSetStateENS_18acdkMhalState_enumE(void) {
    ALOGD("_ZN10NSAcdkMhal11AcdkMhalEng16acdkMhalSetStateENS_18acdkMhalState_enumE() called");
    return 0;
}

/* Demangled: NSACDK::surfaceView::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK11surfaceView15destroyInstanceEv(void) {
    ALOGD("_ZN6NSACDK11surfaceView15destroyInstanceEv() called");
    return 0;
}

/* Demangled: NSACDK::AcdkUtility::queryImageStride(unsigned int, unsigned int, unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK11AcdkUtility16queryImageStrideEjjjPj(void) {
    ALOGD("_ZN6NSACDK11AcdkUtility16queryImageStrideEjjjPj() called");
    return 0;
}

/* Demangled: NSACDK::AcdkUtility::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK11AcdkUtility6uninitEv(void) {
    ALOGD("_ZN6NSACDK11AcdkUtility6uninitEv() called");
    return 0;
}

/* Demangled: NSACDK::surfaceView::surfaceView() */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK11surfaceViewC1Ev(void) {
    ALOGD("_ZN6NSACDK11surfaceViewC1Ev() called");
    return 0;
}

/* Demangled: NSACDK::surfaceView::~surfaceView() */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK11surfaceViewD2Ev(void) {
    ALOGD("_ZN6NSACDK11surfaceViewD2Ev() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::NSIoPipe::FrameParams> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam8NSIoPipe11FrameParamsEEE = NULL;

/* Demangled: void std::__1::vector<NSCam::NSIoPipe::PortID, std::__1::allocator<NSCam::NSIoPipe::PortID> >::__push_back_slow_path<NSCam::NSIoPipe::PortID const&>(NSCam::NSIoPipe::PortID const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe6PortIDENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe6PortIDENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_() called");
    return 0;
}

/* Demangled: android::Vector<ImageBufferMap>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorI14ImageBufferMapE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorI14ImageBufferMapE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: MDK_OpenBypass(NSACDK::_ACDK_BYPASS_FLAG) */
extern "C" __attribute__((visibility("default"))) int _Z14MDK_OpenBypassN6NSACDK17_ACDK_BYPASS_FLAGE(void) {
    ALOGD("_Z14MDK_OpenBypassN6NSACDK17_ACDK_BYPASS_FLAGE() called");
    return 0;
}

/* Demangled: NSACDK::AcdkMain::sensorInit() */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK8AcdkMain10sensorInitEv(void) {
    ALOGD("_ZN6NSACDK8AcdkMain10sensorInitEv() called");
    return 0;
}

/* Demangled: NSACDK::AcdkMain::calcPreviewWin(unsigned int, unsigned int, unsigned int&, unsigned int&, unsigned int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK8AcdkMain14calcPreviewWinEjjRjS1_S1_S1_(void) {
    ALOGD("_ZN6NSACDK8AcdkMain14calcPreviewWinEjjRjS1_S1_S1_() called");
    return 0;
}

/* Demangled: NSACDK::AcdkMain::startPreview(void (*)(void*)) */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK8AcdkMain12startPreviewEPFvPvE(void) {
    ALOGD("_ZN6NSACDK8AcdkMain12startPreviewEPFvPvE() called");
    return 0;
}

/* Demangled: NSACDK::AcdkMain::~AcdkMain() */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK8AcdkMainD0Ev(void) {
    ALOGD("_ZN6NSACDK8AcdkMainD0Ev() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: void std::__1::vector<NSCam::IHalSensor::ConfigParam, std::__1::allocator<NSCam::IHalSensor::ConfigParam> >::__push_back_slow_path<NSCam::IHalSensor::ConfigParam const&>(NSCam::IHalSensor::ConfigParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam10IHalSensor11ConfigParamENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam10IHalSensor11ConfigParamENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_() called");
    return 0;
}

/* Demangled: android::Vector<ImageBufferMap>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorI14ImageBufferMapE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorI14ImageBufferMapE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: NSACDK::AcdkMain::GetPureRaw(unsigned int, unsigned int, void (*)(void*), unsigned int, unsigned int, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK8AcdkMain10GetPureRawEjjPFvPvEjjji(void) {
    ALOGD("_ZN6NSACDK8AcdkMain10GetPureRawEjjPFvPvEjjji() called");
    return 0;
}

/* Demangled: NSACDK::AcdkMain::makeExifHeader(unsigned int, unsigned char*, unsigned int, unsigned char*, unsigned int&, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK8AcdkMain14makeExifHeaderEjPhjS1_Rjjj(void) {
    ALOGD("_ZN6NSACDK8AcdkMain14makeExifHeaderEjPhjS1_Rjjj() called");
    return 0;
}

/* Demangled: NSACDK::AcdkMain::init() */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK8AcdkMain4initEv(void) {
    ALOGD("_ZN6NSACDK8AcdkMain4initEv() called");
    return 0;
}

/* Demangled: NSACDK::AcdkUtility::ImageallocBuffer(NSCam::IImageBuffer*&, unsigned int, unsigned int, unsigned int, AMEM_BUF_INFO) */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK11AcdkUtility16ImageallocBufferERPN5NSCam12IImageBufferEjjj13AMEM_BUF_INFO(void) {
    ALOGD("_ZN6NSACDK11AcdkUtility16ImageallocBufferERPN5NSCam12IImageBufferEjjj13AMEM_BUF_INFO() called");
    return 0;
}

/* Demangled: NSACDK::surfaceView::setOverlayInfo(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned long, unsigned long, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK11surfaceView14setOverlayInfoEjjjjjmmj(void) {
    ALOGD("_ZN6NSACDK11surfaceView14setOverlayInfoEjjjjjmmj() called");
    return 0;
}

/* Demangled: EngPreviewCb(NSCam::NSIoPipe::QParams&) */
extern "C" __attribute__((visibility("default"))) int _Z12EngPreviewCbRN5NSCam8NSIoPipe7QParamsE(void) {
    ALOGD("_Z12EngPreviewCbRN5NSCam8NSIoPipe7QParamsE() called");
    return 0;
}

/* Demangled: NSAcdkMhal::AcdkMhalEng::acdkMhalCBHandle(unsigned int, unsigned char*, unsigned char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10NSAcdkMhal11AcdkMhalEng16acdkMhalCBHandleEjPhS1_j(void) {
    ALOGD("_ZN10NSAcdkMhal11AcdkMhalEng16acdkMhalCBHandleEjPhS1_j() called");
    return 0;
}

/* Demangled: NSAcdkMhal::AcdkMhalEng::acdkMhalGetState() */
extern "C" __attribute__((visibility("default"))) int _ZN10NSAcdkMhal11AcdkMhalEng16acdkMhalGetStateEv(void) {
    ALOGD("_ZN10NSAcdkMhal11AcdkMhalEng16acdkMhalGetStateEv() called");
    return 0;
}

/* Demangled: android::sp<NSCam::ImageBufferHeap>::sp(NSCam::ImageBufferHeap*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam15ImageBufferHeapEEC2EPS2_(void) {
    ALOGD("_ZN7android2spIN5NSCam15ImageBufferHeapEEC2EPS2_() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<NSCam::NSIoPipe::ExtraParam> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorIN5NSCam8NSIoPipe10ExtraParamEEE = NULL;

/* Demangled: NSAcdkMhal::AcdkMhalPure::acdkMhalInit() */
extern "C" __attribute__((visibility("default"))) int _ZN10NSAcdkMhal12AcdkMhalPure12acdkMhalInitEv(void) {
    ALOGD("_ZN10NSAcdkMhal12AcdkMhalPure12acdkMhalInitEv() called");
    return 0;
}

/* Exported Object: vtable for android::Vector<ImageBufferMap> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android6VectorI14ImageBufferMapEE = NULL;

/* Demangled: NSACDK::AcdkUtility::queryRAWImgFormatInfo(unsigned int, unsigned int, unsigned int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK11AcdkUtility21queryRAWImgFormatInfoEjjRjS1_(void) {
    ALOGD("_ZN6NSACDK11AcdkUtility21queryRAWImgFormatInfoEjjRjS1_() called");
    return 0;
}

/* Demangled: NSACDK::AcdkMain::cameraCallback(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6NSACDK8AcdkMain14cameraCallbackEPv(void) {
    ALOGD("_ZN6NSACDK8AcdkMain14cameraCallbackEPv() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::ExtraParam>::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe10ExtraParamEE7do_copyEPvPKvm() called");
    return 0;
}

/* Demangled: android::Vector<NSCam::NSIoPipe::Input>::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android6VectorIN5NSCam8NSIoPipe5InputEE8do_splatEPvPKvm() called");
    return 0;
}

/* Exported Object: vtable for NSAcdkMhal::AcdkMhalEng */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10NSAcdkMhal11AcdkMhalEngE = NULL;

/* Demangled: PurePreviewCb(NSCam::NSIoPipe::QParams&) */
extern "C" __attribute__((visibility("default"))) int _Z13PurePreviewCbRN5NSCam8NSIoPipe7QParamsE(void) {
    ALOGD("_Z13PurePreviewCbRN5NSCam8NSIoPipe7QParamsE() called");
    return 0;
}
