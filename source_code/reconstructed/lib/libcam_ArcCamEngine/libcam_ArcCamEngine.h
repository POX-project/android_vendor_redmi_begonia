/*
 * Reverse-Engineered ABI Specification for: libcam.ArcCamEngine.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libcam.ArcCamEngine.so
 */

#ifndef BEGONIA_RE_LIBCAM_ARCCAMENGINE_H
#define BEGONIA_RE_LIBCAM_ARCCAMENGINE_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: property_list */
/* Demangled: property_list */
int property_list(void);

/* Symbol: _ZN8ArcUtils9dumpImageERK20__tag_ASVL_OFFSCREENPKcS4_l */
/* Demangled: ArcUtils::dumpImage(__tag_ASVL_OFFSCREEN const&, char const*, char const*, long) */
int _ZN8ArcUtils9dumpImageERK20__tag_ASVL_OFFSCREENPKcS4_l(void);

/* Symbol: _ZN15SimpleBenchmarkC1Ev */
/* Demangled: SimpleBenchmark::SimpleBenchmark() */
int _ZN15SimpleBenchmarkC1Ev(void);

/* Symbol: _ZN18VideoRefocusEngine11checkEngineEv */
/* Demangled: VideoRefocusEngine::checkEngine() */
int _ZN18VideoRefocusEngine11checkEngineEv(void);

/* Symbol: _ZN18ImageRefocusEngine7doBokehER20__tag_ASVL_OFFSCREENiPhS1_ */
/* Demangled: ImageRefocusEngine::doBokeh(__tag_ASVL_OFFSCREEN&, int, unsigned char*, __tag_ASVL_OFFSCREEN&) */
int _ZN18ImageRefocusEngine7doBokehER20__tag_ASVL_OFFSCREENiPhS1_(void);

/* Symbol: _ZN18ImageRefocusEngine9calcDepthER20__tag_ASVL_OFFSCREENS1_S1_ */
/* Demangled: ImageRefocusEngine::calcDepth(__tag_ASVL_OFFSCREEN&, __tag_ASVL_OFFSCREEN&, __tag_ASVL_OFFSCREEN&) */
int _ZN18ImageRefocusEngine9calcDepthER20__tag_ASVL_OFFSCREENS1_S1_(void);

/* Symbol: _ZN18ImageRefocusEngineD2Ev */
/* Demangled: ImageRefocusEngine::~ImageRefocusEngine() */
int _ZN18ImageRefocusEngineD2Ev(void);

/* Symbol: _ZN8ArcUtils9DrawPointEP20__tag_ASVL_OFFSCREEN11__tag_pointii */
/* Demangled: ArcUtils::DrawPoint(__tag_ASVL_OFFSCREEN*, __tag_point, int, int) */
int _ZN8ArcUtils9DrawPointEP20__tag_ASVL_OFFSCREEN11__tag_pointii(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: _ZN18VideoRefocusEngine13setFilterModeEii */
/* Demangled: VideoRefocusEngine::setFilterMode(int, int) */
int _ZN18VideoRefocusEngine13setFilterModeEii(void);

/* Symbol: _ZN18VideoRefocusEngine14setImageDegreeEi */
/* Demangled: VideoRefocusEngine::setImageDegree(int) */
int _ZN18VideoRefocusEngine14setImageDegreeEi(void);

/* Symbol: _ZN18ImageRefocusEngineC1Ei */
/* Demangled: ImageRefocusEngine::ImageRefocusEngine(int) */
int _ZN18ImageRefocusEngineC1Ei(void);

/* Symbol: __aeabi_ldivmod */
/* Demangled: __aeabi_ldivmod */
int __aeabi_ldivmod(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: _ZN18VideoRefocusEngineD1Ev */
/* Demangled: VideoRefocusEngine::~VideoRefocusEngine() */
int _ZN18VideoRefocusEngineD1Ev(void);

/* Symbol: property_set */
/* Demangled: property_set */
int property_set(void);

/* Symbol: __aeabi_uidiv */
/* Demangled: __aeabi_uidiv */
int __aeabi_uidiv(void);

/* Symbol: __aeabi_uidivmod */
/* Demangled: __aeabi_uidivmod */
int __aeabi_uidivmod(void);

/* Symbol: __udivsi3 */
/* Demangled: __udivsi3 */
int __udivsi3(void);

/* Symbol: __divdi3 */
/* Demangled: __divdi3 */
int __divdi3(void);

/* Symbol: _ZN8ArcUtils12intersectionERK10__tag_rectS2_ */
/* Demangled: ArcUtils::intersection(__tag_rect const&, __tag_rect const&) */
int _ZN8ArcUtils12intersectionERK10__tag_rectS2_(void);

/* Symbol: _ZN8ArcUtils19getCurrentTimeStampEv */
/* Demangled: ArcUtils::getCurrentTimeStamp() */
int _ZN8ArcUtils19getCurrentTimeStampEv(void);

/* Symbol: _ZN8ArcUtils9dumpImageERK20__tag_ASVL_OFFSCREENPKcS4_il */
/* Demangled: ArcUtils::dumpImage(__tag_ASVL_OFFSCREEN const&, char const*, char const*, int, long) */
int _ZN8ArcUtils9dumpImageERK20__tag_ASVL_OFFSCREENPKcS4_il(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: _ZN18ImageRefocusEngine15getDefaultParamER19_tag_ARC_DCIR_PARAM */
/* Demangled: ImageRefocusEngine::getDefaultParam(_tag_ARC_DCIR_PARAM&) */
int _ZN18ImageRefocusEngine15getDefaultParamER19_tag_ARC_DCIR_PARAM(void);

/* Symbol: __udivmodsi4 */
/* Demangled: __udivmodsi4 */
int __udivmodsi4(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: _ZN18VideoRefocusEngine11setCaliDataEP18_tagARC_DC_CALDATA */
/* Demangled: VideoRefocusEngine::setCaliData(_tagARC_DC_CALDATA*) */
int _ZN18VideoRefocusEngine11setCaliDataEP18_tagARC_DC_CALDATA(void);

/* Symbol: _ZN18VideoRefocusEngine5resetEv */
/* Demangled: VideoRefocusEngine::reset() */
int _ZN18VideoRefocusEngine5resetEv(void);

/* Symbol: _ZN18VideoRefocusEngineC1Ev */
/* Demangled: VideoRefocusEngine::VideoRefocusEngine() */
int _ZN18VideoRefocusEngineC1Ev(void);

/* Symbol: property_get_bool */
/* Demangled: property_get_bool */
int property_get_bool(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: _ZN8ArcUtils8DrawRectEP20__tag_ASVL_OFFSCREEN10__tag_rectii */
/* Demangled: ArcUtils::DrawRect(__tag_ASVL_OFFSCREEN*, __tag_rect, int, int) */
int _ZN8ArcUtils8DrawRectEP20__tag_ASVL_OFFSCREEN10__tag_rectii(void);

/* Symbol: _ZN14ArcCalibration15mArcCalibrationE */
/* Demangled: ArcCalibration::mArcCalibration */
extern void* _ZN14ArcCalibration15mArcCalibrationE;

/* Symbol: _ZN18VideoRefocusEngine19processAndGetResultEP20__tag_ASVL_OFFSCREENS1_S1_S1_ */
/* Demangled: VideoRefocusEngine::processAndGetResult(__tag_ASVL_OFFSCREEN*, __tag_ASVL_OFFSCREEN*, __tag_ASVL_OFFSCREEN*, __tag_ASVL_OFFSCREEN*) */
int _ZN18VideoRefocusEngine19processAndGetResultEP20__tag_ASVL_OFFSCREENS1_S1_S1_(void);

/* Symbol: _ZN18ImageRefocusEngine6unInitEv */
/* Demangled: ImageRefocusEngine::unInit() */
int _ZN18ImageRefocusEngine6unInitEv(void);

/* Symbol: _ZN14ArcCalibration17getMTKCalibrationEPPvRj */
/* Demangled: ArcCalibration::getMTKCalibration(void**, unsigned int&) */
int _ZN14ArcCalibration17getMTKCalibrationEPPvRj(void);

/* Symbol: _ZN14ArcCalibration21setArcSoftCalibrationEPhi */
/* Demangled: ArcCalibration::setArcSoftCalibration(unsigned char*, int) */
int _ZN14ArcCalibration21setArcSoftCalibrationEPhi(void);

/* Symbol: _ZN18ImageRefocusEngine17setDistortionCoefEPfS0_ */
/* Demangled: ImageRefocusEngine::setDistortionCoef(float*, float*) */
int _ZN18ImageRefocusEngine17setDistortionCoefEPfS0_(void);

/* Symbol: _ZN14ArcCalibration12mbIntializedE */
/* Demangled: ArcCalibration::mbIntialized */
extern void* _ZN14ArcCalibration12mbIntializedE;

/* Symbol: _ZN18ImageRefocusEngine18setCameraImageInfoE32_tagARC_REFOCUSCAMERAIMAGE_PARAM */
/* Demangled: ImageRefocusEngine::setCameraImageInfo(_tagARC_REFOCUSCAMERAIMAGE_PARAM) */
int _ZN18ImageRefocusEngine18setCameraImageInfoE32_tagARC_REFOCUSCAMERAIMAGE_PARAM(void);

/* Symbol: _ZN18ImageRefocusEngine8setParamERK19_tag_ARC_DCIR_PARAM */
/* Demangled: ImageRefocusEngine::setParam(_tag_ARC_DCIR_PARAM const&) */
int _ZN18ImageRefocusEngine8setParamERK19_tag_ARC_DCIR_PARAM(void);

/* Symbol: _ZN15SimpleBenchmarkC2Ev */
/* Demangled: SimpleBenchmark::SimpleBenchmark() */
int _ZN15SimpleBenchmarkC2Ev(void);

/* Symbol: __floatdisf */
/* Demangled: __floatdisf */
int __floatdisf(void);

/* Symbol: _ZN8ArcUtils19readArcsoftCaliDataEPcPKc */
/* Demangled: ArcUtils::readArcsoftCaliData(char*, char const*) */
int _ZN8ArcUtils19readArcsoftCaliDataEPcPKc(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: _ZN15SimpleBenchmark4stopEv */
/* Demangled: SimpleBenchmark::stop() */
int _ZN15SimpleBenchmark4stopEv(void);

/* Symbol: _ZN18ImageRefocusEngine11setCaliDataEP18_tagARC_DC_CALDATA */
/* Demangled: ImageRefocusEngine::setCaliData(_tagARC_DC_CALDATA*) */
int _ZN18ImageRefocusEngine11setCaliDataEP18_tagARC_DC_CALDATA(void);

/* Symbol: _ZN18ImageRefocusEngine15setRefocusParamE27_tag_ARC_DCIR_REFOCUS_PARAM */
/* Demangled: ImageRefocusEngine::setRefocusParam(_tag_ARC_DCIR_REFOCUS_PARAM) */
int _ZN18ImageRefocusEngine15setRefocusParamE27_tag_ARC_DCIR_REFOCUS_PARAM(void);

/* Symbol: _ZN18ImageRefocusEngine4initEv */
/* Demangled: ImageRefocusEngine::init() */
int _ZN18ImageRefocusEngine4initEv(void);

/* Symbol: _ZN18ImageRefocusEngine7doBokehER20__tag_ASVL_OFFSCREENS1_S1_ */
/* Demangled: ImageRefocusEngine::doBokeh(__tag_ASVL_OFFSCREEN&, __tag_ASVL_OFFSCREEN&, __tag_ASVL_OFFSCREEN&) */
int _ZN18ImageRefocusEngine7doBokehER20__tag_ASVL_OFFSCREENS1_S1_(void);

/* Symbol: _ZN18ImageRefocusEngineC2Ei */
/* Demangled: ImageRefocusEngine::ImageRefocusEngine(int) */
int _ZN18ImageRefocusEngineC2Ei(void);

/* Symbol: property_get_int32 */
/* Demangled: property_get_int32 */
int property_get_int32(void);

/* Symbol: __udivmoddi4 */
/* Demangled: __udivmoddi4 */
int __udivmoddi4(void);

/* Symbol: _ZN18ImageRefocusEngine15getDepthMapSizeERi */
/* Demangled: ImageRefocusEngine::getDepthMapSize(int&) */
int _ZN18ImageRefocusEngine15getDepthMapSizeERi(void);

/* Symbol: _ZN18ImageRefocusEngine24processAndGetBokehResultER20__tag_ASVL_OFFSCREENS1_S1_ */
/* Demangled: ImageRefocusEngine::processAndGetBokehResult(__tag_ASVL_OFFSCREEN&, __tag_ASVL_OFFSCREEN&, __tag_ASVL_OFFSCREEN&) */
int _ZN18ImageRefocusEngine24processAndGetBokehResultER20__tag_ASVL_OFFSCREENS1_S1_(void);

/* Symbol: _ZN18ImageRefocusEngineD1Ev */
/* Demangled: ImageRefocusEngine::~ImageRefocusEngine() */
int _ZN18ImageRefocusEngineD1Ev(void);

/* Symbol: property_get_int64 */
/* Demangled: property_get_int64 */
int property_get_int64(void);

/* Symbol: _ZN18VideoRefocusEngineD2Ev */
/* Demangled: VideoRefocusEngine::~VideoRefocusEngine() */
int _ZN18VideoRefocusEngineD2Ev(void);

/* Symbol: _ZN14ArcCalibration14mArcCaliBufferE */
/* Demangled: ArcCalibration::mArcCaliBuffer */
extern void* _ZN14ArcCalibration14mArcCaliBufferE;

/* Symbol: _ZN15SimpleBenchmark5startENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE */
/* Demangled: SimpleBenchmark::start(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN15SimpleBenchmark5startENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void);

/* Symbol: _ZN18VideoRefocusEngine18setCameraImageInfoEP32_tagARC_REFOCUSCAMERAIMAGE_PARAM */
/* Demangled: VideoRefocusEngine::setCameraImageInfo(_tagARC_REFOCUSCAMERAIMAGE_PARAM*) */
int _ZN18VideoRefocusEngine18setCameraImageInfoEP32_tagARC_REFOCUSCAMERAIMAGE_PARAM(void);

/* Symbol: _ZN18ImageRefocusEngine9calcDepthER20__tag_ASVL_OFFSCREENS1_ */
/* Demangled: ImageRefocusEngine::calcDepth(__tag_ASVL_OFFSCREEN&, __tag_ASVL_OFFSCREEN&) */
int _ZN18ImageRefocusEngine9calcDepthER20__tag_ASVL_OFFSCREENS1_(void);

/* Symbol: __divmoddi4 */
/* Demangled: __divmoddi4 */
int __divmoddi4(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _ZN8ArcUtils14buildOffscreenEPN5NSCam12IImageBufferER20__tag_ASVL_OFFSCREEN */
/* Demangled: ArcUtils::buildOffscreen(NSCam::IImageBuffer*, __tag_ASVL_OFFSCREEN&) */
int _ZN8ArcUtils14buildOffscreenEPN5NSCam12IImageBufferER20__tag_ASVL_OFFSCREEN(void);

/* Symbol: __aeabi_l2f */
/* Demangled: __aeabi_l2f */
int __aeabi_l2f(void);

/* Symbol: _ZN8ArcUtils15buildOffscreen2EPN5NSCam12IImageBufferER20__tag_ASVL_OFFSCREENii */
/* Demangled: ArcUtils::buildOffscreen2(NSCam::IImageBuffer*, __tag_ASVL_OFFSCREEN&, int, int) */
int _ZN8ArcUtils15buildOffscreen2EPN5NSCam12IImageBufferER20__tag_ASVL_OFFSCREENii(void);

/* Symbol: property_get */
/* Demangled: property_get */
int property_get(void);

/* Symbol: _ZN18VideoRefocusEngineC2Ev */
/* Demangled: VideoRefocusEngine::VideoRefocusEngine() */
int _ZN18VideoRefocusEngineC2Ev(void);

/* Symbol: _ZN18ImageRefocusEngine15getDepthMapDataEPh */
/* Demangled: ImageRefocusEngine::getDepthMapData(unsigned char*) */
int _ZN18ImageRefocusEngine15getDepthMapDataEPh(void);

/* Symbol: _ZN18VideoRefocusEngine15getDefaultParamEP19_tag_ARC_DCVR_PARAM */
/* Demangled: VideoRefocusEngine::getDefaultParam(_tag_ARC_DCVR_PARAM*) */
int _ZN18VideoRefocusEngine15getDefaultParamEP19_tag_ARC_DCVR_PARAM(void);

/* Symbol: _ZN18VideoRefocusEngine19processAndGetResultEP20__tag_ASVL_OFFSCREENS1_S1_ */
/* Demangled: VideoRefocusEngine::processAndGetResult(__tag_ASVL_OFFSCREEN*, __tag_ASVL_OFFSCREEN*, __tag_ASVL_OFFSCREEN*) */
int _ZN18VideoRefocusEngine19processAndGetResultEP20__tag_ASVL_OFFSCREENS1_S1_(void);

/* Symbol: _ZN8ArcUtils8makePathEPKcj */
/* Demangled: ArcUtils::makePath(char const*, unsigned int) */
int _ZN8ArcUtils8makePathEPKcj(void);

/* Symbol: _ZN14ArcCalibration11calDataSizeE */
/* Demangled: ArcCalibration::calDataSize */
extern void* _ZN14ArcCalibration11calDataSizeE;

/* Symbol: _ZN14ArcCalibration15mMtkCalibrationE */
/* Demangled: ArcCalibration::mMtkCalibration */
extern void* _ZN14ArcCalibration15mMtkCalibrationE;

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

__END_DECLS

#endif /* BEGONIA_RE_LIBCAM_ARCCAMENGINE_H */
