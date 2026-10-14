/*
 * Reverse-Engineered Source for: libmtkcam_stdutils.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libmtkcam_stdutils"

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
#include "libmtkcam_stdutils.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtFG_BAYER14>(NSCam::Utils::Format::CImgFmtFG_BAYER14*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_17CImgFmtFG_BAYER14EEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_17CImgFmtFG_BAYER14EEEPT_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtYUV_P010_3PLANE */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format22CImgFmtYUV_P010_3PLANEE = NULL;

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtYUV_P210_3PLANE */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format22CImgFmtYUV_P210_3PLANEE = NULL;

/* Demangled: NSCam::Utils::CamProfile::CamProfile(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils10CamProfileC1EPKcS3_(void) {
    ALOGD("_ZN5NSCam5Utils10CamProfileC1EPKcS3_() called");
    return 0;
}

/* Demangled: NSCam::Utils::LogTool::getFormattedLogTime() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils7LogTool19getFormattedLogTimeEv(void) {
    ALOGD("_ZN5NSCam5Utils7LogTool19getFormattedLogTimeEv() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtRGBA8888>(NSCam::Utils::Format::CImgFmtRGBA8888*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_15CImgFmtRGBA8888EEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_15CImgFmtRGBA8888EEEPT_() called");
    return 0;
}

/* Demangled: NSCam::Utils::FrameController::~FrameController() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils15FrameControllerD0Ev(void) {
    ALOGD("_ZN5NSCam5Utils15FrameControllerD0Ev() called");
    return 0;
}

/* Demangled: NSCam::Utils::Format::queryImageBitsPerPixel(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils6Format22queryImageBitsPerPixelEi(void) {
    ALOGD("_ZN5NSCam5Utils6Format22queryImageBitsPerPixelEi() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtBAYER8>(NSCam::Utils::Format::CImgFmtBAYER8*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_13CImgFmtBAYER8EEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_13CImgFmtBAYER8EEEPT_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Utils::FrameController */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils15FrameControllerE = NULL;

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtWARP_3PLANE */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format18CImgFmtWARP_3PLANEE = NULL;

/* Demangled: NSCam::Utils::Format::queryPlaneBitsPerPixel(int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils6Format22queryPlaneBitsPerPixelEij(void) {
    ALOGD("_ZN5NSCam5Utils6Format22queryPlaneBitsPerPixelEij() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtARGB8888>(NSCam::Utils::Format::CImgFmtARGB8888*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_15CImgFmtARGB8888EEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_15CImgFmtARGB8888EEEPT_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtCAMERA_OPAQUE */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format20CImgFmtCAMERA_OPAQUEE = NULL;

/* Demangled: NSCam::Utils::Sync::ITimeline::create(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4Sync9ITimeline6createEPKc(void) {
    ALOGD("_ZN5NSCam5Utils4Sync9ITimeline6createEPKc() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtJPEG>(NSCam::Utils::Format::CImgFmtJPEG*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_11CImgFmtJPEGEEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_11CImgFmtJPEGEEEPT_() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtYUV_P010_3PLANE>(NSCam::Utils::Format::CImgFmtYUV_P010_3PLANE*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_22CImgFmtYUV_P010_3PLANEEEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_22CImgFmtYUV_P010_3PLANEEEEPT_() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtMTK_YUV_P010>(NSCam::Utils::Format::CImgFmtMTK_YUV_P010*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_19CImgFmtMTK_YUV_P010EEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_19CImgFmtMTK_YUV_P010EEEPT_() called");
    return 0;
}

/* Demangled: NSCam::Utils::DurationTool::DurationTool(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils12DurationToolC1EPKc(void) {
    ALOGD("_ZN5NSCam5Utils12DurationToolC1EPKc() called");
    return 0;
}

/* Demangled: NSCam::Utils::LogTool::convertToFormattedLogTime(timespec const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils7LogTool25convertToFormattedLogTimeEPK8timespec(void) {
    ALOGD("_ZN5NSCam5Utils7LogTool25convertToFormattedLogTimeEPK8timespec() called");
    return 0;
}

/* Exported Object: vtable for std::__1::bad_function_call */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__117bad_function_callE = NULL;

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtI420>(NSCam::Utils::Format::CImgFmtI420*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_11CImgFmtI420EEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_11CImgFmtI420EEEPT_() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtFG_BAYER8>(NSCam::Utils::Format::CImgFmtFG_BAYER8*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_16CImgFmtFG_BAYER8EEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_16CImgFmtFG_BAYER8EEEPT_() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtMTK_YUV_P210_3PLANE>(NSCam::Utils::Format::CImgFmtMTK_YUV_P210_3PLANE*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_26CImgFmtMTK_YUV_P210_3PLANEEEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_26CImgFmtMTK_YUV_P210_3PLANEEEEPT_() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtRGBX8888>(NSCam::Utils::Format::CImgFmtRGBX8888*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_15CImgFmtRGBX8888EEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_15CImgFmtRGBX8888EEEPT_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtYVU_P210 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format15CImgFmtYVU_P210E = NULL;

/* Demangled: NSCam::Utils::CamProfile::print(char const*, ...) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam5Utils10CamProfile5printEPKcz(void) {
    ALOGD("_ZNK5NSCam5Utils10CamProfile5printEPKcz() called");
    return 0;
}

/* Demangled: NSCam::Utils::Format::checkValidFormat(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils6Format16checkValidFormatEi(void) {
    ALOGD("_ZN5NSCam5Utils6Format16checkValidFormatEi() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::Utils::Format::IImgFmt> > >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam5Utils6Format7IImgFmtEEEEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam5Utils6Format7IImgFmtEEEEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: DebugScanLineImp::~DebugScanLineImp() */
extern "C" __attribute__((visibility("default"))) int _ZN16DebugScanLineImpD0Ev(void) {
    ALOGD("_ZN16DebugScanLineImpD0Ev() called");
    return 0;
}

/* Demangled: NSCam::Utils::Format::getMapMgr() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils6Format9getMapMgrEv(void) {
    ALOGD("_ZN5NSCam5Utils6Format9getMapMgrEv() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtUFO_FG_BAYER12>(NSCam::Utils::Format::CImgFmtUFO_FG_BAYER12*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_21CImgFmtUFO_FG_BAYER12EEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_21CImgFmtUFO_FG_BAYER12EEEPT_() called");
    return 0;
}

/* Demangled: NSCam::Utils::TimeTool::getReadableTime() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils8TimeTool15getReadableTimeEv(void) {
    ALOGD("_ZN5NSCam5Utils8TimeTool15getReadableTimeEv() called");
    return 0;
}

/* Demangled: NSCam::ScopeWorker::~ScopeWorker() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11ScopeWorkerD1Ev(void) {
    ALOGD("_ZN5NSCam11ScopeWorkerD1Ev() called");
    return 0;
}

/* Demangled: __divmoddi4 */
extern "C" __attribute__((visibility("default"))) int __divmoddi4(void) {
    ALOGD("__divmoddi4() called");
    return 0;
}

/* Demangled: __floatdisf */
extern "C" __attribute__((visibility("default"))) int __floatdisf(void) {
    ALOGD("__floatdisf() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtYVU_P010>(NSCam::Utils::Format::CImgFmtYVU_P010*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_15CImgFmtYVU_P010EEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_15CImgFmtYVU_P010EEEPT_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtSTA_4BYTE */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format16CImgFmtSTA_4BYTEE = NULL;

/* Demangled: NSCam::Utils::Property::set(android::String8 const&, android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils8Property3setERKN7android7String8ES5_(void) {
    ALOGD("_ZN5NSCam5Utils8Property3setERKN7android7String8ES5_() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtYUY2>(NSCam::Utils::Format::CImgFmtYUY2*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_11CImgFmtYUY2EEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_11CImgFmtYUY2EEEPT_() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtSTA_2BYTE>(NSCam::Utils::Format::CImgFmtSTA_2BYTE*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_16CImgFmtSTA_2BYTEEEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_16CImgFmtSTA_2BYTEEEEPT_() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtBAYER8_UNPAK>(NSCam::Utils::Format::CImgFmtBAYER8_UNPAK*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_19CImgFmtBAYER8_UNPAKEEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_19CImgFmtBAYER8_UNPAKEEEPT_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtBAYER15_UNPAK */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format20CImgFmtBAYER15_UNPAKE = NULL;

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtMTK_UYVY_Y210 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format20CImgFmtMTK_UYVY_Y210E = NULL;

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtMTK_VYUY_Y210 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format20CImgFmtMTK_VYUY_Y210E = NULL;

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: bool NSCam::Utils::lockNoexcept<android::Mutex>(std::__1::unique_lock<android::Mutex>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils12lockNoexceptIN7android5MutexEEEbRNSt3__111unique_lockIT_EE(void) {
    ALOGD("_ZN5NSCam5Utils12lockNoexceptIN7android5MutexEEEbRNSt3__111unique_lockIT_EE() called");
    return 0;
}

/* Demangled: NSCam::Utils::Format::queryPlaneWidthInPixels(int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils6Format23queryPlaneWidthInPixelsEijj(void) {
    ALOGD("_ZN5NSCam5Utils6Format23queryPlaneWidthInPixelsEijj() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtBLOB>(NSCam::Utils::Format::CImgFmtBLOB*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_11CImgFmtBLOBEEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_11CImgFmtBLOBEEEPT_() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtSTA_4BYTE>(NSCam::Utils::Format::CImgFmtSTA_4BYTE*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_16CImgFmtSTA_4BYTEEEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_16CImgFmtSTA_4BYTEEEEPT_() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtUFO_BAYER12>(NSCam::Utils::Format::CImgFmtUFO_BAYER12*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_18CImgFmtUFO_BAYER12EEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_18CImgFmtUFO_BAYER12EEEPT_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::Utils::Format::IImgFmt> > >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam5Utils6Format7IImgFmtEEEEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam5Utils6Format7IImgFmtEEEEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtMTK_YVYU_Y210 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format20CImgFmtMTK_YVYU_Y210E = NULL;

/* Demangled: NSCam::Utils::DurationTool::DurationTool(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils12DurationToolC2EPKc(void) {
    ALOGD("_ZN5NSCam5Utils12DurationToolC2EPKc() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtBGRA8888 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format15CImgFmtBGRA8888E = NULL;

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtMTK_YVU_P010 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format19CImgFmtMTK_YVU_P010E = NULL;

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtBAYER14_UNPAK */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format20CImgFmtBAYER14_UNPAKE = NULL;

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtY8 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format9CImgFmtY8E = NULL;

/* Demangled: NSCam::Utils::setThreadPriority(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils17setThreadPriorityEii(void) {
    ALOGD("_ZN5NSCam5Utils17setThreadPriorityEii() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtI422 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format11CImgFmtI422E = NULL;

/* Demangled: DebugDrawID::draw(unsigned int, char*, unsigned int, unsigned int, unsigned int, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK11DebugDrawID4drawEjPcjjjj(void) {
    ALOGD("_ZNK11DebugDrawID4drawEjPcjjjj() called");
    return 0;
}

/* Demangled: NSCam::Utils::triggerAeeWarning(char const*, char const*, char const*, ...) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils17triggerAeeWarningEPKcS2_S2_z(void) {
    ALOGD("_ZN5NSCam5Utils17triggerAeeWarningEPKcS2_S2_z() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtBAYER10>(NSCam::Utils::Format::CImgFmtBAYER10*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_14CImgFmtBAYER10EEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_14CImgFmtBAYER10EEEPT_() called");
    return 0;
}

/* Demangled: DebugDrawID::needDraw() const */
extern "C" __attribute__((visibility("default"))) int _ZNK11DebugDrawID8needDrawEv(void) {
    ALOGD("_ZNK11DebugDrawID8needDrawEv() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtNV16>(NSCam::Utils::Format::CImgFmtNV16*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_11CImgFmtNV16EEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_11CImgFmtNV16EEEPT_() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtYV12>(NSCam::Utils::Format::CImgFmtYV12*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_11CImgFmtYV12EEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_11CImgFmtYV12EEEPT_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtMTK_YUV_P210 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format19CImgFmtMTK_YUV_P210E = NULL;

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtBAYER12_UNPAK */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format20CImgFmtBAYER12_UNPAKE = NULL;

/* Demangled: __aeabi_ldivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_ldivmod(void) {
    ALOGD("__aeabi_ldivmod() called");
    return 0;
}

/* Demangled: NSCam::Utils::Property::tryGet(android::String8 const&, android::String8&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils8Property6tryGetERKN7android7String8ERS3_(void) {
    ALOGD("_ZN5NSCam5Utils8Property6tryGetERKN7android7String8ERS3_() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtBAYER12_UNPAK>(NSCam::Utils::Format::CImgFmtBAYER12_UNPAK*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_20CImgFmtBAYER12_UNPAKEEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_20CImgFmtBAYER12_UNPAKEEEPT_() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtUFO_FG_BAYER8>(NSCam::Utils::Format::CImgFmtUFO_FG_BAYER8*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_20CImgFmtUFO_FG_BAYER8EEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_20CImgFmtUFO_FG_BAYER8EEEPT_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtUFO_BAYER14 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format18CImgFmtUFO_BAYER14E = NULL;

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtUFO_FG_BAYER14 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format21CImgFmtUFO_FG_BAYER14E = NULL;

/* Demangled: NSCam::Utils::loadFileToBuf(char const*, unsigned char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils13loadFileToBufEPKcPhj(void) {
    ALOGD("_ZN5NSCam5Utils13loadFileToBufEPKcPhj() called");
    return 0;
}

/* Demangled: NSCam::Utils::getThreadPriority(int&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils17getThreadPriorityERiS1_(void) {
    ALOGD("_ZN5NSCam5Utils17getThreadPriorityERiS1_() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtYUV_P210>(NSCam::Utils::Format::CImgFmtYUV_P210*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_15CImgFmtYUV_P210EEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_15CImgFmtYUV_P210EEEPT_() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtFG_BAYER10>(NSCam::Utils::Format::CImgFmtFG_BAYER10*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_17CImgFmtFG_BAYER10EEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_17CImgFmtFG_BAYER10EEEPT_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtI420 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format11CImgFmtI420E = NULL;

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtRGBX8888 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format15CImgFmtRGBX8888E = NULL;

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtYUV_P210_3PLANE>(NSCam::Utils::Format::CImgFmtYUV_P210_3PLANE*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_22CImgFmtYUV_P210_3PLANEEEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_22CImgFmtYUV_P210_3PLANEEEEPT_() called");
    return 0;
}

/* Demangled: DebugScanLineImp::DebugScanLineImp() */
extern "C" __attribute__((visibility("default"))) int _ZN16DebugScanLineImpC1Ev(void) {
    ALOGD("_ZN16DebugScanLineImpC1Ev() called");
    return 0;
}

/* Demangled: NSCam::Utils::dumpCallStack(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils13dumpCallStackEPKc(void) {
    ALOGD("_ZN5NSCam5Utils13dumpCallStackEPKc() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtY16>(NSCam::Utils::Format::CImgFmtY16*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_10CImgFmtY16EEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_10CImgFmtY16EEEPT_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtYUY2 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format11CImgFmtYUY2E = NULL;

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtBAYER10_UNPAK */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format20CImgFmtBAYER10_UNPAKE = NULL;

/* Demangled: DebugDrawID::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN11DebugDrawID14createInstanceEv(void) {
    ALOGD("_ZN11DebugDrawID14createInstanceEv() called");
    return 0;
}

/* Demangled: NSCam::Utils::FrameController::getName() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils15FrameController7getNameEv(void) {
    ALOGD("_ZN5NSCam5Utils15FrameController7getNameEv() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtMTK_YUYV_Y210>(NSCam::Utils::Format::CImgFmtMTK_YUYV_Y210*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_20CImgFmtMTK_YUYV_Y210EEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_20CImgFmtMTK_YUYV_Y210EEEPT_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtNV21_BLK */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format15CImgFmtNV21_BLKE = NULL;

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtWARP_2PLANE */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format18CImgFmtWARP_2PLANEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::Utils::Format::IImgFmt> > >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam5Utils6Format7IImgFmtEEEEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam5Utils6Format7IImgFmtEEEEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtNV12_BLK */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format15CImgFmtNV12_BLKE = NULL;

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtUFO_BAYER12 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format18CImgFmtUFO_BAYER12E = NULL;

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtUFO_FG_BAYER8 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format20CImgFmtUFO_FG_BAYER8E = NULL;

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtUFO_FG_BAYER12 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format21CImgFmtUFO_FG_BAYER12E = NULL;

/* Demangled: NSCam::Utils::Sync::IFence::merge(char const*, android::sp<NSCam::Utils::Sync::IFence> const&, android::sp<NSCam::Utils::Sync::IFence> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4Sync6IFence5mergeEPKcRKN7android2spIS2_EES9_(void) {
    ALOGD("_ZN5NSCam5Utils4Sync6IFence5mergeEPKcRKN7android2spIS2_EES9_() called");
    return 0;
}

/* Demangled: NSCam::Utils::FrameController::~FrameController() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils15FrameControllerD1Ev(void) {
    ALOGD("_ZN5NSCam5Utils15FrameControllerD1Ev() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtY8>(NSCam::Utils::Format::CImgFmtY8*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_9CImgFmtY8EEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_9CImgFmtY8EEEPT_() called");
    return 0;
}

/* Demangled: DebugScanLine::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN13DebugScanLine14createInstanceEv(void) {
    ALOGD("_ZN13DebugScanLine14createInstanceEv() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtI422>(NSCam::Utils::Format::CImgFmtI422*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_11CImgFmtI422EEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_11CImgFmtI422EEEPT_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtVYUY */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format11CImgFmtVYUYE = NULL;

/* Demangled: virtual thunk to NSCam::Utils::FrameController::~FrameController() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N5NSCam5Utils15FrameControllerD0Ev(void) {
    ALOGD("_ZTv0_n12_N5NSCam5Utils15FrameControllerD0Ev() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtRGB565>(NSCam::Utils::Format::CImgFmtRGB565*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_13CImgFmtRGB565EEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_13CImgFmtRGB565EEEPT_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtBLOB */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format11CImgFmtBLOBE = NULL;

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtBAYER8 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format13CImgFmtBAYER8E = NULL;

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtRGB565 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format13CImgFmtRGB565E = NULL;

/* Demangled: mtkcam_testLog */
extern "C" __attribute__((visibility("default"))) int mtkcam_testLog(void) {
    ALOGD("mtkcam_testLog() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtUYVY_Y210>(NSCam::Utils::Format::CImgFmtUYVY_Y210*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_16CImgFmtUYVY_Y210EEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_16CImgFmtUYVY_Y210EEEPT_() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtYVYU_Y210>(NSCam::Utils::Format::CImgFmtYVYU_Y210*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_16CImgFmtYVYU_Y210EEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_16CImgFmtYVYU_Y210EEEPT_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::Utils::Format::IImgFmt> > >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam5Utils6Format7IImgFmtEEEEEE10do_compareEPKvSB_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam5Utils6Format7IImgFmtEEEEEE10do_compareEPKvSB_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtUFO_FG */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format13CImgFmtUFO_FGE = NULL;

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtUFO_BAYER10 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format18CImgFmtUFO_BAYER10E = NULL;

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtUFO_FG_BAYER10 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format21CImgFmtUFO_FG_BAYER10E = NULL;

/* Demangled: NSCam::Utils::LogTool::getCurrentLogTime(timespec*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils7LogTool17getCurrentLogTimeEP8timespec(void) {
    ALOGD("_ZN5NSCam5Utils7LogTool17getCurrentLogTimeEP8timespec() called");
    return 0;
}

/* Demangled: NSCam::Utils::Format::dumpMapInformation() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils6Format18dumpMapInformationEv(void) {
    ALOGD("_ZN5NSCam5Utils6Format18dumpMapInformationEv() called");
    return 0;
}

/* Demangled: NSCam::Utils::Format::queryImageFormatName(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils6Format20queryImageFormatNameEi(void) {
    ALOGD("_ZN5NSCam5Utils6Format20queryImageFormatNameEi() called");
    return 0;
}

/* Demangled: NSCam::Utils::Property::tryGet(android::String8 const&, bool&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils8Property6tryGetERKN7android7String8ERb(void) {
    ALOGD("_ZN5NSCam5Utils8Property6tryGetERKN7android7String8ERb() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: NSCam::Utils::FrameController::FrameController(android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils15FrameControllerC2EN7android7String8E(void) {
    ALOGD("_ZN5NSCam5Utils15FrameControllerC2EN7android7String8E() called");
    return 0;
}

/* Demangled: NSCam::Utils::saveBufToFile(char const*, unsigned char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils13saveBufToFileEPKcPhj(void) {
    ALOGD("_ZN5NSCam5Utils13saveBufToFileEPKcPhj() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtMTK_YUYV_Y210 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format20CImgFmtMTK_YUYV_Y210E = NULL;

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtCAMERA_OPAQUE>(NSCam::Utils::Format::CImgFmtCAMERA_OPAQUE*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_20CImgFmtCAMERA_OPAQUEEEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_20CImgFmtCAMERA_OPAQUEEEEPT_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::Utils::Format::IImgFmt> > >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam5Utils6Format7IImgFmtEEEEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam5Utils6Format7IImgFmtEEEEEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: DebugScanLineImp::~DebugScanLineImp() */
extern "C" __attribute__((visibility("default"))) int _ZN16DebugScanLineImpD1Ev(void) {
    ALOGD("_ZN16DebugScanLineImpD1Ev() called");
    return 0;
}

/* Demangled: __udivmoddi4 */
extern "C" __attribute__((visibility("default"))) int __udivmoddi4(void) {
    ALOGD("__udivmoddi4() called");
    return 0;
}

/* Demangled: DebugDrawID::draw(unsigned int, unsigned int, unsigned int, unsigned int, char*, unsigned int, unsigned int, unsigned int, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK11DebugDrawID4drawEjjjjPcjjjj(void) {
    ALOGD("_ZNK11DebugDrawID4drawEjjjjPcjjjj() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtVYUY_Y210>(NSCam::Utils::Format::CImgFmtVYUY_Y210*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_16CImgFmtVYUY_Y210EEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_16CImgFmtVYUY_Y210EEEPT_() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::operator=(android::sp<NSCam::Utils::Format::IImgFmt> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEaSERKS5_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEaSERKS5_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtRAW16 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format12CImgFmtRAW16E = NULL;

/* Demangled: NSCam::Utils::Property::tryGet(android::String8 const&, float&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils8Property6tryGetERKN7android7String8ERf(void) {
    ALOGD("_ZN5NSCam5Utils8Property6tryGetERKN7android7String8ERf() called");
    return 0;
}

/* Demangled: NSCam::ScopeWorker::~ScopeWorker() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam11ScopeWorkerD2Ev(void) {
    ALOGD("_ZN5NSCam11ScopeWorkerD2Ev() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtMTK_YVU_P210>(NSCam::Utils::Format::CImgFmtMTK_YVU_P210*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_19CImgFmtMTK_YVU_P210EEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_19CImgFmtMTK_YVU_P210EEEPT_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtFG_BAYER14 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format17CImgFmtFG_BAYER14E = NULL;

/* Demangled: __aeabi_l2f */
extern "C" __attribute__((visibility("default"))) int __aeabi_l2f(void) {
    ALOGD("__aeabi_l2f() called");
    return 0;
}

/* Demangled: __udivsi3 */
extern "C" __attribute__((visibility("default"))) int __udivsi3(void) {
    ALOGD("__udivsi3() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtYUV_P010>(NSCam::Utils::Format::CImgFmtYUV_P010*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_15CImgFmtYUV_P010EEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_15CImgFmtYUV_P010EEEPT_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtUYVY_Y210 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format16CImgFmtUYVY_Y210E = NULL;

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtVYUY_Y210 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format16CImgFmtVYUY_Y210E = NULL;

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtMTK_YVU_P210 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format19CImgFmtMTK_YVU_P210E = NULL;

/* Demangled: NSCam::Utils::DurationTool::DurationTool(char const*, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils12DurationToolC2EPKcx(void) {
    ALOGD("_ZN5NSCam5Utils12DurationToolC2EPKcx() called");
    return 0;
}

/* Demangled: NSCam::Utils::DurationTool::showFps() const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam5Utils12DurationTool7showFpsEv(void) {
    ALOGD("_ZNK5NSCam5Utils12DurationTool7showFpsEv() called");
    return 0;
}

/* Demangled: DebugDrawID::draw(unsigned int, unsigned int, unsigned int, unsigned int, char*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char, char) */
extern "C" __attribute__((visibility("default"))) int _ZN11DebugDrawID4drawEjjjjPcjjjjjcc(void) {
    ALOGD("_ZN11DebugDrawID4drawEjjjjPcjjjjjcc() called");
    return 0;
}

/* Demangled: NSCam::Utils::triggerAeeException(char const*, char const*, char const*, ...) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils19triggerAeeExceptionEPKcS2_S2_z(void) {
    ALOGD("_ZN5NSCam5Utils19triggerAeeExceptionEPKcS2_S2_z() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtRGB48>(NSCam::Utils::Format::CImgFmtRGB48*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_12CImgFmtRGB48EEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_12CImgFmtRGB48EEEPT_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Utils::Format::CBaseImgFmt */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format11CBaseImgFmtE = NULL;

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtYUV_P010 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format15CImgFmtYUV_P010E = NULL;

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtYVYU_Y210 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format16CImgFmtYVYU_Y210E = NULL;

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtUFO_BAYER8 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format17CImgFmtUFO_BAYER8E = NULL;

/* Demangled: NSCam::Utils::Property::tryGet(android::String8 const&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils8Property6tryGetERKN7android7String8ERi(void) {
    ALOGD("_ZN5NSCam5Utils8Property6tryGetERKN7android7String8ERi() called");
    return 0;
}

/* Demangled: __udivmodsi4 */
extern "C" __attribute__((visibility("default"))) int __udivmodsi4(void) {
    ALOGD("__udivmodsi4() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtRGB888>(NSCam::Utils::Format::CImgFmtRGB888*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_13CImgFmtRGB888EEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_13CImgFmtRGB888EEEPT_() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtNV12_BLK>(NSCam::Utils::Format::CImgFmtNV12_BLK*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_15CImgFmtNV12_BLKEEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_15CImgFmtNV12_BLKEEEPT_() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtUFO_FG_BAYER14>(NSCam::Utils::Format::CImgFmtUFO_FG_BAYER14*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_21CImgFmtUFO_FG_BAYER14EEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_21CImgFmtUFO_FG_BAYER14EEEPT_() called");
    return 0;
}

/* Demangled: DebugDrawID::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN11DebugDrawID15destroyInstanceEv(void) {
    ALOGD("_ZN11DebugDrawID15destroyInstanceEv() called");
    return 0;
}

/* Demangled: __aeabi_uldivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uldivmod(void) {
    ALOGD("__aeabi_uldivmod() called");
    return 0;
}

/* Demangled: setLogLevelToEngLoad */
extern "C" __attribute__((visibility("default"))) int setLogLevelToEngLoad(void) {
    ALOGD("setLogLevelToEngLoad() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtUFO_FG>(NSCam::Utils::Format::CImgFmtUFO_FG*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_13CImgFmtUFO_FGEEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_13CImgFmtUFO_FGEEEPT_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtNV16 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format11CImgFmtNV16E = NULL;

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtSTA_BYTE */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format15CImgFmtSTA_BYTEE = NULL;

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtFG_BAYER12 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format17CImgFmtFG_BAYER12E = NULL;

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: __aeabi_uidivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidivmod(void) {
    ALOGD("__aeabi_uidivmod() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtNV21 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format11CImgFmtNV21E = NULL;

/* Demangled: NSCam::Utils::DurationTool::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils12DurationTool5resetEv(void) {
    ALOGD("_ZN5NSCam5Utils12DurationTool5resetEv() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtUFO_BAYER14>(NSCam::Utils::Format::CImgFmtUFO_BAYER14*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_18CImgFmtUFO_BAYER14EEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_18CImgFmtUFO_BAYER14EEEPT_() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtBAYER15_UNPAK>(NSCam::Utils::Format::CImgFmtBAYER15_UNPAK*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_20CImgFmtBAYER15_UNPAKEEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_20CImgFmtBAYER15_UNPAKEEEPT_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtUYVY */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format11CImgFmtUYVYE = NULL;

/* Demangled: NSCam::Utils::Format::checkValidBufferInfo(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils6Format20checkValidBufferInfoEi(void) {
    ALOGD("_ZN5NSCam5Utils6Format20checkValidBufferInfoEi() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtWARP_1PLANE>(NSCam::Utils::Format::CImgFmtWARP_1PLANE*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_18CImgFmtWARP_1PLANEEEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_18CImgFmtWARP_1PLANEEEEPT_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtBAYER16_APPLY_LSC */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format24CImgFmtBAYER16_APPLY_LSCE = NULL;

/* Demangled: NSCam::Utils::DurationTool::reset(long long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils12DurationTool5resetEx(void) {
    ALOGD("_ZN5NSCam5Utils12DurationTool5resetEx() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: __divdi3 */
extern "C" __attribute__((visibility("default"))) int __divdi3(void) {
    ALOGD("__divdi3() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtBAYER12>(NSCam::Utils::Format::CImgFmtBAYER12*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_14CImgFmtBAYER12EEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_14CImgFmtBAYER12EEEPT_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtFG_BAYER10 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format17CImgFmtFG_BAYER10E = NULL;

/* Demangled: DebugScanLineImp::DebugScanLineImp() */
extern "C" __attribute__((visibility("default"))) int _ZN16DebugScanLineImpC2Ev(void) {
    ALOGD("_ZN16DebugScanLineImpC2Ev() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtSTA_BYTE>(NSCam::Utils::Format::CImgFmtSTA_BYTE*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_15CImgFmtSTA_BYTEEEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_15CImgFmtSTA_BYTEEEEPT_() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtBAYER10_MIPI>(NSCam::Utils::Format::CImgFmtBAYER10_MIPI*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_19CImgFmtBAYER10_MIPIEEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_19CImgFmtBAYER10_MIPIEEEPT_() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::Utils::Format::IImgFmt> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam5Utils6Format7IImgFmtEEEEEEE = NULL;

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtFG_BAYER8 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format16CImgFmtFG_BAYER8E = NULL;

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtSTA_10BIT */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format16CImgFmtSTA_10BITE = NULL;

/* Exported Object: NSCam::Utils::Sync::IFence::NO_FENCE */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam5Utils4Sync6IFence8NO_FENCEE = NULL;

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtNV12>(NSCam::Utils::Format::CImgFmtNV12*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_11CImgFmtNV12EEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_11CImgFmtNV12EEEPT_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtMTK_YUV_P010_3PLANE */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format26CImgFmtMTK_YUV_P010_3PLANEE = NULL;

/* Exported Object: typeinfo name for std::__1::bad_function_call */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt3__117bad_function_callE = NULL;

/* Demangled: NSCam::Utils::FrameController::~FrameController() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils15FrameControllerD2Ev(void) {
    ALOGD("_ZN5NSCam5Utils15FrameControllerD2Ev() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtRAW16>(NSCam::Utils::Format::CImgFmtRAW16*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_12CImgFmtRAW16EEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_12CImgFmtRAW16EEEPT_() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtFG_BAYER12>(NSCam::Utils::Format::CImgFmtFG_BAYER12*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_17CImgFmtFG_BAYER12EEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_17CImgFmtFG_BAYER12EEEPT_() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtBAYER16_APPLY_LSC>(NSCam::Utils::Format::CImgFmtBAYER16_APPLY_LSC*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_24CImgFmtBAYER16_APPLY_LSCEEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_24CImgFmtBAYER16_APPLY_LSCEEEPT_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtMTK_YUV_P210_3PLANE */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format26CImgFmtMTK_YUV_P210_3PLANEE = NULL;

/* Demangled: NSCam::Utils::LogTool::get() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils7LogTool3getEv(void) {
    ALOGD("_ZN5NSCam5Utils7LogTool3getEv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtNV12 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format11CImgFmtNV12E = NULL;

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtBAYER10_MIPI */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format19CImgFmtBAYER10_MIPIE = NULL;

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtBAYER8_UNPAK */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format19CImgFmtBAYER8_UNPAKE = NULL;

/* Demangled: NSCam::Utils::FrameController::bufferControl(long long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils15FrameController13bufferControlEx(void) {
    ALOGD("_ZN5NSCam5Utils15FrameController13bufferControlEx() called");
    return 0;
}

/* Demangled: virtual thunk to NSCam::Utils::FrameController::~FrameController() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N5NSCam5Utils15FrameControllerD1Ev(void) {
    ALOGD("_ZTv0_n12_N5NSCam5Utils15FrameControllerD1Ev() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtMTK_YVU_P010>(NSCam::Utils::Format::CImgFmtMTK_YVU_P010*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_19CImgFmtMTK_YVU_P010EEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_19CImgFmtMTK_YVU_P010EEEPT_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtSTA_2BYTE */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format16CImgFmtSTA_2BYTEE = NULL;

/* Demangled: NSCam::Utils::CameraProfile::CameraProfile(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils13CameraProfileC2EPKcS3_(void) {
    ALOGD("_ZN5NSCam5Utils13CameraProfileC2EPKcS3_() called");
    return 0;
}

/* Exported Object: vtable for DebugScanLineImp */
extern "C" __attribute__((visibility("default"))) void* _ZTV16DebugScanLineImp = NULL;

/* Exported Object: typeinfo name for std::exception */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt9exception = NULL;

/* Demangled: NSCam::Utils::makePath(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils8makePathEPKcj(void) {
    ALOGD("_ZN5NSCam5Utils8makePathEPKcj() called");
    return 0;
}

/* Demangled: NSCam::Utils::Format::queryPlaneHeightInPixels(int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils6Format24queryPlaneHeightInPixelsEijj(void) {
    ALOGD("_ZN5NSCam5Utils6Format24queryPlaneHeightInPixelsEijj() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtYVYU */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format11CImgFmtYVYUE = NULL;

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtBAYER14 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format14CImgFmtBAYER14E = NULL;

/* Demangled: NSCam::Utils::Property::clear() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils8Property5clearEv(void) {
    ALOGD("_ZN5NSCam5Utils8Property5clearEv() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtUFO_BAYER8>(NSCam::Utils::Format::CImgFmtUFO_BAYER8*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_17CImgFmtUFO_BAYER8EEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_17CImgFmtUFO_BAYER8EEEPT_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtWARP_1PLANE */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format18CImgFmtWARP_1PLANEE = NULL;

/* Demangled: NSCam::Utils::DurationTool::update() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils12DurationTool6updateEv(void) {
    ALOGD("_ZN5NSCam5Utils12DurationTool6updateEv() called");
    return 0;
}

/* Demangled: NSCam::Utils::CameraProfile::CameraProfile(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils13CameraProfileC1EPKcS3_(void) {
    ALOGD("_ZN5NSCam5Utils13CameraProfileC1EPKcS3_() called");
    return 0;
}

/* Demangled: NSCam::Utils::CamProfile::print_overtime(int, char const*, ...) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam5Utils10CamProfile14print_overtimeEiPKcz(void) {
    ALOGD("_ZNK5NSCam5Utils10CamProfile14print_overtimeEiPKcz() called");
    return 0;
}

/* Demangled: DebugDrawID::DebugDrawID(unsigned int, unsigned int, unsigned int, unsigned int, char, char) */
extern "C" __attribute__((visibility("default"))) int _ZN11DebugDrawIDC2Ejjjjcc(void) {
    ALOGD("_ZN11DebugDrawIDC2Ejjjjcc() called");
    return 0;
}

/* Demangled: NSCam::Utils::Format::queryPlaneCount(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils6Format15queryPlaneCountEi(void) {
    ALOGD("_ZN5NSCam5Utils6Format15queryPlaneCountEi() called");
    return 0;
}

/* Demangled: NSCam::Utils::Format::getMapper() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils6Format9getMapperEv(void) {
    ALOGD("_ZN5NSCam5Utils6Format9getMapperEv() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtNV21_BLK>(NSCam::Utils::Format::CImgFmtNV21_BLK*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_15CImgFmtNV21_BLKEEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_15CImgFmtNV21_BLKEEEPT_() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtBAYER10_UNPAK>(NSCam::Utils::Format::CImgFmtBAYER10_UNPAK*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_20CImgFmtBAYER10_UNPAKEEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_20CImgFmtBAYER10_UNPAKEEEPT_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtY16 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format10CImgFmtY16E = NULL;

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtRGBA8888 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format15CImgFmtRGBA8888E = NULL;

/* Demangled: NSCam::Utils::Sync::IFence::create(int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils4Sync6IFence6createEi(void) {
    ALOGD("_ZN5NSCam5Utils4Sync6IFence6createEi() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtWARP_2PLANE>(NSCam::Utils::Format::CImgFmtWARP_2PLANE*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_18CImgFmtWARP_2PLANEEEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_18CImgFmtWARP_2PLANEEEEPT_() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtBAYER14_UNPAK>(NSCam::Utils::Format::CImgFmtBAYER14_UNPAK*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_20CImgFmtBAYER14_UNPAKEEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_20CImgFmtBAYER14_UNPAKEEEPT_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtYUYV_Y210 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format16CImgFmtYUYV_Y210E = NULL;

/* Demangled: NSCam::Utils::DurationTool::update(long long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils12DurationTool6updateEx(void) {
    ALOGD("_ZN5NSCam5Utils12DurationTool6updateEx() called");
    return 0;
}

/* Demangled: DebugScanLineImp::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN16DebugScanLineImp15destroyInstanceEv(void) {
    ALOGD("_ZN16DebugScanLineImp15destroyInstanceEv() called");
    return 0;
}

/* Demangled: DebugDrawID::DebugDrawID(unsigned int, unsigned int, unsigned int, unsigned int, char, char) */
extern "C" __attribute__((visibility("default"))) int _ZN11DebugDrawIDC1Ejjjjcc(void) {
    ALOGD("_ZN11DebugDrawIDC1Ejjjjcc() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtBGRA8888>(NSCam::Utils::Format::CImgFmtBGRA8888*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_15CImgFmtBGRA8888EEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_15CImgFmtBGRA8888EEEPT_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::Utils::Format::IImgFmt> > >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam5Utils6Format7IImgFmtEEEEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam5Utils6Format7IImgFmtEEEEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtYVU_P010 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format15CImgFmtYVU_P010E = NULL;

/* Demangled: NSCam::Utils::DurationTool::DurationTool(char const*, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils12DurationToolC1EPKcx(void) {
    ALOGD("_ZN5NSCam5Utils12DurationToolC1EPKcx() called");
    return 0;
}

/* Demangled: DebugScanLineImp::~DebugScanLineImp() */
extern "C" __attribute__((visibility("default"))) int _ZN16DebugScanLineImpD2Ev(void) {
    ALOGD("_ZN16DebugScanLineImpD2Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtYV16 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format11CImgFmtYV16E = NULL;

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtBAYER12 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format14CImgFmtBAYER12E = NULL;

/* Exported Object: VTT for NSCam::Utils::FrameController */
extern "C" __attribute__((visibility("default"))) void* _ZTTN5NSCam5Utils15FrameControllerE = NULL;

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtSTA_12BIT>(NSCam::Utils::Format::CImgFmtSTA_12BIT*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_16CImgFmtSTA_12BITEEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_16CImgFmtSTA_12BITEEEPT_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, android::sp<NSCam::Utils::Format::IImgFmt> > >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam5Utils6Format7IImgFmtEEEEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiNS_2spIN5NSCam5Utils6Format7IImgFmtEEEEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: NSCam::Utils::CameraProfile::print(char, char const*, ...) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam5Utils13CameraProfile5printEcPKcz(void) {
    ALOGD("_ZNK5NSCam5Utils13CameraProfile5printEcPKcz() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Sync::IFence>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils4Sync6IFenceEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils4Sync6IFenceEED2Ev() called");
    return 0;
}

/* Exported Object: typeinfo for std::__1::bad_function_call */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt3__117bad_function_callE = NULL;

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtNV61>(NSCam::Utils::Format::CImgFmtNV61*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_11CImgFmtNV61EEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_11CImgFmtNV61EEEPT_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtYUV_P210 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format15CImgFmtYUV_P210E = NULL;

/* Demangled: NSCam::Utils::CameraProfile::stopWatch() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils13CameraProfile9stopWatchEv(void) {
    ALOGD("_ZN5NSCam5Utils13CameraProfile9stopWatchEv() called");
    return 0;
}

/* Demangled: DebugScanLineImp::drawScanLine(int, int, void*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN16DebugScanLineImp12drawScanLineEiiPvii(void) {
    ALOGD("_ZN16DebugScanLineImp12drawScanLineEiiPvii() called");
    return 0;
}

/* Demangled: bool NSCam::Utils::lockNoexcept<std::__1::mutex>(std::__1::unique_lock<std::__1::mutex>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils12lockNoexceptINSt3__15mutexEEEbRNS2_11unique_lockIT_EE(void) {
    ALOGD("_ZN5NSCam5Utils12lockNoexceptINSt3__15mutexEEEbRNS2_11unique_lockIT_EE() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtMTK_YUV_P210>(NSCam::Utils::Format::CImgFmtMTK_YUV_P210*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_19CImgFmtMTK_YUV_P210EEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_19CImgFmtMTK_YUV_P210EEEPT_() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtMTK_UYVY_Y210>(NSCam::Utils::Format::CImgFmtMTK_UYVY_Y210*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_20CImgFmtMTK_UYVY_Y210EEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_20CImgFmtMTK_UYVY_Y210EEEPT_() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtMTK_YVYU_Y210>(NSCam::Utils::Format::CImgFmtMTK_YVYU_Y210*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_20CImgFmtMTK_YVYU_Y210EEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_20CImgFmtMTK_YVYU_Y210EEEPT_() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtUFO_FG_BAYER10>(NSCam::Utils::Format::CImgFmtUFO_FG_BAYER10*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_21CImgFmtUFO_FG_BAYER10EEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_21CImgFmtUFO_FG_BAYER10EEEPT_() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtMTK_YUV_P010_3PLANE>(NSCam::Utils::Format::CImgFmtMTK_YUV_P010_3PLANE*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_26CImgFmtMTK_YUV_P010_3PLANEEEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_26CImgFmtMTK_YUV_P010_3PLANEEEEPT_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtJPEG */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format11CImgFmtJPEGE = NULL;

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtRGB48 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format12CImgFmtRGB48E = NULL;

/* Demangled: NSCam::Utils::CameraProfile::print_overtime(char, long long, char const*, ...) const */
extern "C" __attribute__((visibility("default"))) int _ZNK5NSCam5Utils13CameraProfile14print_overtimeEcxPKcz(void) {
    ALOGD("_ZNK5NSCam5Utils13CameraProfile14print_overtimeEcxPKcz() called");
    return 0;
}

/* Demangled: NSCam::Utils::Property::hasKey(android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils8Property6hasKeyERKN7android7String8E(void) {
    ALOGD("_ZN5NSCam5Utils8Property6hasKeyERKN7android7String8E() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtUYVY>(NSCam::Utils::Format::CImgFmtUYVY*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_11CImgFmtUYVYEEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_11CImgFmtUYVYEEEPT_() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtVYUY>(NSCam::Utils::Format::CImgFmtVYUY*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_11CImgFmtVYUYEEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_11CImgFmtVYUYEEEPT_() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtYVYU>(NSCam::Utils::Format::CImgFmtYVYU*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_11CImgFmtYVYUEEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_11CImgFmtYVYUEEEPT_() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtSTA_10BIT>(NSCam::Utils::Format::CImgFmtSTA_10BIT*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_16CImgFmtSTA_10BITEEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_16CImgFmtSTA_10BITEEEPT_() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEED2Ev(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEED2Ev() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtBAYER10 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format14CImgFmtBAYER10E = NULL;

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtYUYV_Y210>(NSCam::Utils::Format::CImgFmtYUYV_Y210*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_16CImgFmtYUYV_Y210EEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_16CImgFmtYUYV_Y210EEEPT_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtSTA_12BIT */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format16CImgFmtSTA_12BITE = NULL;

/* Demangled: std::__1::unique_lock<std::__1::mutex>::lock() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__111unique_lockINS_5mutexEE4lockEv(void) {
    ALOGD("_ZNSt3__111unique_lockINS_5mutexEE4lockEv() called");
    return 0;
}

/* Demangled: std::__1::function<void (void*)>::~function() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__18functionIFvPvEED2Ev(void) {
    ALOGD("_ZNSt3__18functionIFvPvEED2Ev() called");
    return 0;
}

/* Demangled: __aeabi_uidiv */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidiv(void) {
    ALOGD("__aeabi_uidiv() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtUFO_BAYER10>(NSCam::Utils::Format::CImgFmtUFO_BAYER10*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_18CImgFmtUFO_BAYER10EEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_18CImgFmtUFO_BAYER10EEEPT_() called");
    return 0;
}

/* Demangled: NSCam::Utils::FrameController::FrameController(android::String8) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils15FrameControllerC1EN7android7String8E(void) {
    ALOGD("_ZN5NSCam5Utils15FrameControllerC1EN7android7String8E() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtBAYER14>(NSCam::Utils::Format::CImgFmtBAYER14*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_14CImgFmtBAYER14EEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_14CImgFmtBAYER14EEEPT_() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtMTK_VYUY_Y210>(NSCam::Utils::Format::CImgFmtMTK_VYUY_Y210*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_20CImgFmtMTK_VYUY_Y210EEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_20CImgFmtMTK_VYUY_Y210EEEPT_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtARGB8888 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format15CImgFmtARGB8888E = NULL;

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtYV16>(NSCam::Utils::Format::CImgFmtYV16*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_11CImgFmtYV16EEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_11CImgFmtYV16EEEPT_() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtYVU_P210>(NSCam::Utils::Format::CImgFmtYVU_P210*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_15CImgFmtYVU_P210EEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_15CImgFmtYVU_P210EEEPT_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtNV61 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format11CImgFmtNV61E = NULL;

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtRGB888 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format13CImgFmtRGB888E = NULL;

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtMTK_YUV_P010 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format19CImgFmtMTK_YUV_P010E = NULL;

/* Exported Object: typeinfo for std::exception */
extern "C" __attribute__((visibility("default"))) void* _ZTISt9exception = NULL;

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtNV21>(NSCam::Utils::Format::CImgFmtNV21*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_11CImgFmtNV21EEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_11CImgFmtNV21EEEPT_() called");
    return 0;
}

/* Demangled: android::sp<NSCam::Utils::Format::IImgFmt>::sp<NSCam::Utils::Format::CImgFmtWARP_3PLANE>(NSCam::Utils::Format::CImgFmtWARP_3PLANE*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_18CImgFmtWARP_3PLANEEEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam5Utils6Format7IImgFmtEEC2INS3_18CImgFmtWARP_3PLANEEEEPT_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::Utils::Format::CImgFmtYV12 */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam5Utils6Format11CImgFmtYV12E = NULL;

/* Demangled: NSCam::Utils::CamProfile::CamProfile(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam5Utils10CamProfileC2EPKcS3_(void) {
    ALOGD("_ZN5NSCam5Utils10CamProfileC2EPKcS3_() called");
    return 0;
}

/* Demangled: NSCam::JobQueueStatic::lock(std::__1::unique_lock<std::__1::mutex>&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam14JobQueueStatic4lockERNSt3__111unique_lockINS1_5mutexEEE(void) {
    ALOGD("_ZN5NSCam14JobQueueStatic4lockERNSt3__111unique_lockINS1_5mutexEEE() called");
    return 0;
}
