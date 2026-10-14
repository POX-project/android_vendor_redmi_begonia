/*
 * Reverse-Engineered Source for: libcam.ArcCamEngine.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libcam_ArcCamEngine"

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
#include "libcam_ArcCamEngine.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: property_list */
extern "C" __attribute__((visibility("default"))) int property_list(void) {
    ALOGD("property_list() called");
    return 0;
}

/* Demangled: ArcUtils::dumpImage(__tag_ASVL_OFFSCREEN const&, char const*, char const*, long) */
extern "C" __attribute__((visibility("default"))) int _ZN8ArcUtils9dumpImageERK20__tag_ASVL_OFFSCREENPKcS4_l(void) {
    ALOGD("_ZN8ArcUtils9dumpImageERK20__tag_ASVL_OFFSCREENPKcS4_l() called");
    return 0;
}

/* Demangled: SimpleBenchmark::SimpleBenchmark() */
extern "C" __attribute__((visibility("default"))) int _ZN15SimpleBenchmarkC1Ev(void) {
    ALOGD("_ZN15SimpleBenchmarkC1Ev() called");
    return 0;
}

/* Demangled: VideoRefocusEngine::checkEngine() */
extern "C" __attribute__((visibility("default"))) int _ZN18VideoRefocusEngine11checkEngineEv(void) {
    ALOGD("_ZN18VideoRefocusEngine11checkEngineEv() called");
    return 0;
}

/* Demangled: ImageRefocusEngine::doBokeh(__tag_ASVL_OFFSCREEN&, int, unsigned char*, __tag_ASVL_OFFSCREEN&) */
extern "C" __attribute__((visibility("default"))) int _ZN18ImageRefocusEngine7doBokehER20__tag_ASVL_OFFSCREENiPhS1_(void) {
    ALOGD("_ZN18ImageRefocusEngine7doBokehER20__tag_ASVL_OFFSCREENiPhS1_() called");
    return 0;
}

/* Demangled: ImageRefocusEngine::calcDepth(__tag_ASVL_OFFSCREEN&, __tag_ASVL_OFFSCREEN&, __tag_ASVL_OFFSCREEN&) */
extern "C" __attribute__((visibility("default"))) int _ZN18ImageRefocusEngine9calcDepthER20__tag_ASVL_OFFSCREENS1_S1_(void) {
    ALOGD("_ZN18ImageRefocusEngine9calcDepthER20__tag_ASVL_OFFSCREENS1_S1_() called");
    return 0;
}

/* Demangled: ImageRefocusEngine::~ImageRefocusEngine() */
extern "C" __attribute__((visibility("default"))) int _ZN18ImageRefocusEngineD2Ev(void) {
    ALOGD("_ZN18ImageRefocusEngineD2Ev() called");
    return 0;
}

/* Demangled: ArcUtils::DrawPoint(__tag_ASVL_OFFSCREEN*, __tag_point, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN8ArcUtils9DrawPointEP20__tag_ASVL_OFFSCREEN11__tag_pointii(void) {
    ALOGD("_ZN8ArcUtils9DrawPointEP20__tag_ASVL_OFFSCREEN11__tag_pointii() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: VideoRefocusEngine::setFilterMode(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN18VideoRefocusEngine13setFilterModeEii(void) {
    ALOGD("_ZN18VideoRefocusEngine13setFilterModeEii() called");
    return 0;
}

/* Demangled: VideoRefocusEngine::setImageDegree(int) */
extern "C" __attribute__((visibility("default"))) int _ZN18VideoRefocusEngine14setImageDegreeEi(void) {
    ALOGD("_ZN18VideoRefocusEngine14setImageDegreeEi() called");
    return 0;
}

/* Demangled: ImageRefocusEngine::ImageRefocusEngine(int) */
extern "C" __attribute__((visibility("default"))) int _ZN18ImageRefocusEngineC1Ei(void) {
    ALOGD("_ZN18ImageRefocusEngineC1Ei() called");
    return 0;
}

/* Demangled: __aeabi_ldivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_ldivmod(void) {
    ALOGD("__aeabi_ldivmod() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: VideoRefocusEngine::~VideoRefocusEngine() */
extern "C" __attribute__((visibility("default"))) int _ZN18VideoRefocusEngineD1Ev(void) {
    ALOGD("_ZN18VideoRefocusEngineD1Ev() called");
    return 0;
}

/* Demangled: property_set */
extern "C" __attribute__((visibility("default"))) int property_set(void) {
    ALOGD("property_set() called");
    return 0;
}

/* Demangled: __aeabi_uidiv */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidiv(void) {
    ALOGD("__aeabi_uidiv() called");
    return 0;
}

/* Demangled: __aeabi_uidivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidivmod(void) {
    ALOGD("__aeabi_uidivmod() called");
    return 0;
}

/* Demangled: __udivsi3 */
extern "C" __attribute__((visibility("default"))) int __udivsi3(void) {
    ALOGD("__udivsi3() called");
    return 0;
}

/* Demangled: __divdi3 */
extern "C" __attribute__((visibility("default"))) int __divdi3(void) {
    ALOGD("__divdi3() called");
    return 0;
}

/* Demangled: ArcUtils::intersection(__tag_rect const&, __tag_rect const&) */
extern "C" __attribute__((visibility("default"))) int _ZN8ArcUtils12intersectionERK10__tag_rectS2_(void) {
    ALOGD("_ZN8ArcUtils12intersectionERK10__tag_rectS2_() called");
    return 0;
}

/* Demangled: ArcUtils::getCurrentTimeStamp() */
extern "C" __attribute__((visibility("default"))) int _ZN8ArcUtils19getCurrentTimeStampEv(void) {
    ALOGD("_ZN8ArcUtils19getCurrentTimeStampEv() called");
    return 0;
}

/* Demangled: ArcUtils::dumpImage(__tag_ASVL_OFFSCREEN const&, char const*, char const*, int, long) */
extern "C" __attribute__((visibility("default"))) int _ZN8ArcUtils9dumpImageERK20__tag_ASVL_OFFSCREENPKcS4_il(void) {
    ALOGD("_ZN8ArcUtils9dumpImageERK20__tag_ASVL_OFFSCREENPKcS4_il() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: ImageRefocusEngine::getDefaultParam(_tag_ARC_DCIR_PARAM&) */
extern "C" __attribute__((visibility("default"))) int _ZN18ImageRefocusEngine15getDefaultParamER19_tag_ARC_DCIR_PARAM(void) {
    ALOGD("_ZN18ImageRefocusEngine15getDefaultParamER19_tag_ARC_DCIR_PARAM() called");
    return 0;
}

/* Demangled: __udivmodsi4 */
extern "C" __attribute__((visibility("default"))) int __udivmodsi4(void) {
    ALOGD("__udivmodsi4() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: VideoRefocusEngine::setCaliData(_tagARC_DC_CALDATA*) */
extern "C" __attribute__((visibility("default"))) int _ZN18VideoRefocusEngine11setCaliDataEP18_tagARC_DC_CALDATA(void) {
    ALOGD("_ZN18VideoRefocusEngine11setCaliDataEP18_tagARC_DC_CALDATA() called");
    return 0;
}

/* Demangled: VideoRefocusEngine::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN18VideoRefocusEngine5resetEv(void) {
    ALOGD("_ZN18VideoRefocusEngine5resetEv() called");
    return 0;
}

/* Demangled: VideoRefocusEngine::VideoRefocusEngine() */
extern "C" __attribute__((visibility("default"))) int _ZN18VideoRefocusEngineC1Ev(void) {
    ALOGD("_ZN18VideoRefocusEngineC1Ev() called");
    return 0;
}

/* Demangled: property_get_bool */
extern "C" __attribute__((visibility("default"))) int property_get_bool(void) {
    ALOGD("property_get_bool() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: ArcUtils::DrawRect(__tag_ASVL_OFFSCREEN*, __tag_rect, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN8ArcUtils8DrawRectEP20__tag_ASVL_OFFSCREEN10__tag_rectii(void) {
    ALOGD("_ZN8ArcUtils8DrawRectEP20__tag_ASVL_OFFSCREEN10__tag_rectii() called");
    return 0;
}

/* Exported Object: ArcCalibration::mArcCalibration */
extern "C" __attribute__((visibility("default"))) void* _ZN14ArcCalibration15mArcCalibrationE = NULL;

/* Demangled: VideoRefocusEngine::processAndGetResult(__tag_ASVL_OFFSCREEN*, __tag_ASVL_OFFSCREEN*, __tag_ASVL_OFFSCREEN*, __tag_ASVL_OFFSCREEN*) */
extern "C" __attribute__((visibility("default"))) int _ZN18VideoRefocusEngine19processAndGetResultEP20__tag_ASVL_OFFSCREENS1_S1_S1_(void) {
    ALOGD("_ZN18VideoRefocusEngine19processAndGetResultEP20__tag_ASVL_OFFSCREENS1_S1_S1_() called");
    return 0;
}

/* Demangled: ImageRefocusEngine::unInit() */
extern "C" __attribute__((visibility("default"))) int _ZN18ImageRefocusEngine6unInitEv(void) {
    ALOGD("_ZN18ImageRefocusEngine6unInitEv() called");
    return 0;
}

/* Demangled: ArcCalibration::getMTKCalibration(void**, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN14ArcCalibration17getMTKCalibrationEPPvRj(void) {
    ALOGD("_ZN14ArcCalibration17getMTKCalibrationEPPvRj() called");
    return 0;
}

/* Demangled: ArcCalibration::setArcSoftCalibration(unsigned char*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14ArcCalibration21setArcSoftCalibrationEPhi(void) {
    ALOGD("_ZN14ArcCalibration21setArcSoftCalibrationEPhi() called");
    return 0;
}

/* Demangled: ImageRefocusEngine::setDistortionCoef(float*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN18ImageRefocusEngine17setDistortionCoefEPfS0_(void) {
    ALOGD("_ZN18ImageRefocusEngine17setDistortionCoefEPfS0_() called");
    return 0;
}

/* Exported Object: ArcCalibration::mbIntialized */
extern "C" __attribute__((visibility("default"))) void* _ZN14ArcCalibration12mbIntializedE = NULL;

/* Demangled: ImageRefocusEngine::setCameraImageInfo(_tagARC_REFOCUSCAMERAIMAGE_PARAM) */
extern "C" __attribute__((visibility("default"))) int _ZN18ImageRefocusEngine18setCameraImageInfoE32_tagARC_REFOCUSCAMERAIMAGE_PARAM(void) {
    ALOGD("_ZN18ImageRefocusEngine18setCameraImageInfoE32_tagARC_REFOCUSCAMERAIMAGE_PARAM() called");
    return 0;
}

/* Demangled: ImageRefocusEngine::setParam(_tag_ARC_DCIR_PARAM const&) */
extern "C" __attribute__((visibility("default"))) int _ZN18ImageRefocusEngine8setParamERK19_tag_ARC_DCIR_PARAM(void) {
    ALOGD("_ZN18ImageRefocusEngine8setParamERK19_tag_ARC_DCIR_PARAM() called");
    return 0;
}

/* Demangled: SimpleBenchmark::SimpleBenchmark() */
extern "C" __attribute__((visibility("default"))) int _ZN15SimpleBenchmarkC2Ev(void) {
    ALOGD("_ZN15SimpleBenchmarkC2Ev() called");
    return 0;
}

/* Demangled: __floatdisf */
extern "C" __attribute__((visibility("default"))) int __floatdisf(void) {
    ALOGD("__floatdisf() called");
    return 0;
}

/* Demangled: ArcUtils::readArcsoftCaliData(char*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN8ArcUtils19readArcsoftCaliDataEPcPKc(void) {
    ALOGD("_ZN8ArcUtils19readArcsoftCaliDataEPcPKc() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: SimpleBenchmark::stop() */
extern "C" __attribute__((visibility("default"))) int _ZN15SimpleBenchmark4stopEv(void) {
    ALOGD("_ZN15SimpleBenchmark4stopEv() called");
    return 0;
}

/* Demangled: ImageRefocusEngine::setCaliData(_tagARC_DC_CALDATA*) */
extern "C" __attribute__((visibility("default"))) int _ZN18ImageRefocusEngine11setCaliDataEP18_tagARC_DC_CALDATA(void) {
    ALOGD("_ZN18ImageRefocusEngine11setCaliDataEP18_tagARC_DC_CALDATA() called");
    return 0;
}

/* Demangled: ImageRefocusEngine::setRefocusParam(_tag_ARC_DCIR_REFOCUS_PARAM) */
extern "C" __attribute__((visibility("default"))) int _ZN18ImageRefocusEngine15setRefocusParamE27_tag_ARC_DCIR_REFOCUS_PARAM(void) {
    ALOGD("_ZN18ImageRefocusEngine15setRefocusParamE27_tag_ARC_DCIR_REFOCUS_PARAM() called");
    return 0;
}

/* Demangled: ImageRefocusEngine::init() */
extern "C" __attribute__((visibility("default"))) int _ZN18ImageRefocusEngine4initEv(void) {
    ALOGD("_ZN18ImageRefocusEngine4initEv() called");
    return 0;
}

/* Demangled: ImageRefocusEngine::doBokeh(__tag_ASVL_OFFSCREEN&, __tag_ASVL_OFFSCREEN&, __tag_ASVL_OFFSCREEN&) */
extern "C" __attribute__((visibility("default"))) int _ZN18ImageRefocusEngine7doBokehER20__tag_ASVL_OFFSCREENS1_S1_(void) {
    ALOGD("_ZN18ImageRefocusEngine7doBokehER20__tag_ASVL_OFFSCREENS1_S1_() called");
    return 0;
}

/* Demangled: ImageRefocusEngine::ImageRefocusEngine(int) */
extern "C" __attribute__((visibility("default"))) int _ZN18ImageRefocusEngineC2Ei(void) {
    ALOGD("_ZN18ImageRefocusEngineC2Ei() called");
    return 0;
}

/* Demangled: property_get_int32 */
extern "C" __attribute__((visibility("default"))) int property_get_int32(void) {
    ALOGD("property_get_int32() called");
    return 0;
}

/* Demangled: __udivmoddi4 */
extern "C" __attribute__((visibility("default"))) int __udivmoddi4(void) {
    ALOGD("__udivmoddi4() called");
    return 0;
}

/* Demangled: ImageRefocusEngine::getDepthMapSize(int&) */
extern "C" __attribute__((visibility("default"))) int _ZN18ImageRefocusEngine15getDepthMapSizeERi(void) {
    ALOGD("_ZN18ImageRefocusEngine15getDepthMapSizeERi() called");
    return 0;
}

/* Demangled: ImageRefocusEngine::processAndGetBokehResult(__tag_ASVL_OFFSCREEN&, __tag_ASVL_OFFSCREEN&, __tag_ASVL_OFFSCREEN&) */
extern "C" __attribute__((visibility("default"))) int _ZN18ImageRefocusEngine24processAndGetBokehResultER20__tag_ASVL_OFFSCREENS1_S1_(void) {
    ALOGD("_ZN18ImageRefocusEngine24processAndGetBokehResultER20__tag_ASVL_OFFSCREENS1_S1_() called");
    return 0;
}

/* Demangled: ImageRefocusEngine::~ImageRefocusEngine() */
extern "C" __attribute__((visibility("default"))) int _ZN18ImageRefocusEngineD1Ev(void) {
    ALOGD("_ZN18ImageRefocusEngineD1Ev() called");
    return 0;
}

/* Demangled: property_get_int64 */
extern "C" __attribute__((visibility("default"))) int property_get_int64(void) {
    ALOGD("property_get_int64() called");
    return 0;
}

/* Demangled: VideoRefocusEngine::~VideoRefocusEngine() */
extern "C" __attribute__((visibility("default"))) int _ZN18VideoRefocusEngineD2Ev(void) {
    ALOGD("_ZN18VideoRefocusEngineD2Ev() called");
    return 0;
}

/* Exported Object: ArcCalibration::mArcCaliBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZN14ArcCalibration14mArcCaliBufferE = NULL;

/* Demangled: SimpleBenchmark::start(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN15SimpleBenchmark5startENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZN15SimpleBenchmark5startENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: VideoRefocusEngine::setCameraImageInfo(_tagARC_REFOCUSCAMERAIMAGE_PARAM*) */
extern "C" __attribute__((visibility("default"))) int _ZN18VideoRefocusEngine18setCameraImageInfoEP32_tagARC_REFOCUSCAMERAIMAGE_PARAM(void) {
    ALOGD("_ZN18VideoRefocusEngine18setCameraImageInfoEP32_tagARC_REFOCUSCAMERAIMAGE_PARAM() called");
    return 0;
}

/* Demangled: ImageRefocusEngine::calcDepth(__tag_ASVL_OFFSCREEN&, __tag_ASVL_OFFSCREEN&) */
extern "C" __attribute__((visibility("default"))) int _ZN18ImageRefocusEngine9calcDepthER20__tag_ASVL_OFFSCREENS1_(void) {
    ALOGD("_ZN18ImageRefocusEngine9calcDepthER20__tag_ASVL_OFFSCREENS1_() called");
    return 0;
}

/* Demangled: __divmoddi4 */
extern "C" __attribute__((visibility("default"))) int __divmoddi4(void) {
    ALOGD("__divmoddi4() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: ArcUtils::buildOffscreen(NSCam::IImageBuffer*, __tag_ASVL_OFFSCREEN&) */
extern "C" __attribute__((visibility("default"))) int _ZN8ArcUtils14buildOffscreenEPN5NSCam12IImageBufferER20__tag_ASVL_OFFSCREEN(void) {
    ALOGD("_ZN8ArcUtils14buildOffscreenEPN5NSCam12IImageBufferER20__tag_ASVL_OFFSCREEN() called");
    return 0;
}

/* Demangled: __aeabi_l2f */
extern "C" __attribute__((visibility("default"))) int __aeabi_l2f(void) {
    ALOGD("__aeabi_l2f() called");
    return 0;
}

/* Demangled: ArcUtils::buildOffscreen2(NSCam::IImageBuffer*, __tag_ASVL_OFFSCREEN&, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN8ArcUtils15buildOffscreen2EPN5NSCam12IImageBufferER20__tag_ASVL_OFFSCREENii(void) {
    ALOGD("_ZN8ArcUtils15buildOffscreen2EPN5NSCam12IImageBufferER20__tag_ASVL_OFFSCREENii() called");
    return 0;
}

/* Demangled: property_get */
extern "C" __attribute__((visibility("default"))) int property_get(void) {
    ALOGD("property_get() called");
    return 0;
}

/* Demangled: VideoRefocusEngine::VideoRefocusEngine() */
extern "C" __attribute__((visibility("default"))) int _ZN18VideoRefocusEngineC2Ev(void) {
    ALOGD("_ZN18VideoRefocusEngineC2Ev() called");
    return 0;
}

/* Demangled: ImageRefocusEngine::getDepthMapData(unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN18ImageRefocusEngine15getDepthMapDataEPh(void) {
    ALOGD("_ZN18ImageRefocusEngine15getDepthMapDataEPh() called");
    return 0;
}

/* Demangled: VideoRefocusEngine::getDefaultParam(_tag_ARC_DCVR_PARAM*) */
extern "C" __attribute__((visibility("default"))) int _ZN18VideoRefocusEngine15getDefaultParamEP19_tag_ARC_DCVR_PARAM(void) {
    ALOGD("_ZN18VideoRefocusEngine15getDefaultParamEP19_tag_ARC_DCVR_PARAM() called");
    return 0;
}

/* Demangled: VideoRefocusEngine::processAndGetResult(__tag_ASVL_OFFSCREEN*, __tag_ASVL_OFFSCREEN*, __tag_ASVL_OFFSCREEN*) */
extern "C" __attribute__((visibility("default"))) int _ZN18VideoRefocusEngine19processAndGetResultEP20__tag_ASVL_OFFSCREENS1_S1_(void) {
    ALOGD("_ZN18VideoRefocusEngine19processAndGetResultEP20__tag_ASVL_OFFSCREENS1_S1_() called");
    return 0;
}

/* Demangled: ArcUtils::makePath(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN8ArcUtils8makePathEPKcj(void) {
    ALOGD("_ZN8ArcUtils8makePathEPKcj() called");
    return 0;
}

/* Exported Object: ArcCalibration::calDataSize */
extern "C" __attribute__((visibility("default"))) void* _ZN14ArcCalibration11calDataSizeE = NULL;

/* Exported Object: ArcCalibration::mMtkCalibration */
extern "C" __attribute__((visibility("default"))) void* _ZN14ArcCalibration15mMtkCalibrationE = NULL;

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;
