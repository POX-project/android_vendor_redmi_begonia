/*
 * Reverse-Engineered Source for: libmtkcam_fwkutils.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libmtkcam_fwkutils"

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
#include "libmtkcam_fwkutils.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: android::MtkCameraParameters::APP_MODE_NAME_DEFAULT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters21APP_MODE_NAME_DEFAULTE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_VIDEO_HDR_SUPPORTED */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters27KEY_ENG_VIDEO_HDR_SUPPORTEDE = NULL;

/* Demangled: android::CameraParameters::set(char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16CameraParameters3setEPKci(void) {
    ALOGD("_ZN7android16CameraParameters3setEPKci() called");
    return 0;
}

/* Exported Object: android::CameraParameters::KEY_ANTIBANDING */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters15KEY_ANTIBANDINGE = NULL;

/* Exported Object: android::MtkCameraParameters::CAMERA_MODE_MTK_VT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters18CAMERA_MODE_MTK_VTE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_FOCUS_ENG_MODE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters18KEY_FOCUS_ENG_MODEE = NULL;

/* Exported Object: android::MtkCameraParameters::RECORD */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters6RECORDE = NULL;

/* Exported Object: android::CameraParameters::KEY_VIDEO_SIZE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters14KEY_VIDEO_SIZEE = NULL;

/* Exported Object: android::MtkCameraParameters::SCENE_MODE_NORMAL */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters17SCENE_MODE_NORMALE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_FLASH_DUTY_MIN */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters22KEY_ENG_FLASH_DUTY_MINE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_FOCUS_METER */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters15KEY_FOCUS_METERE = NULL;

/* Demangled: android::CameraParameters::remove(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16CameraParameters6removeEPKc(void) {
    ALOGD("_ZN7android16CameraParameters6removeEPKc() called");
    return 0;
}

/* Exported Object: android::MtkCameraParameters::EFFECT_XPROII */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters13EFFECT_XPROIIE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_RAW_IMGO */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters16KEY_ENG_RAW_IMGOE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_STEREO_LDC_SIZE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters19KEY_STEREO_LDC_SIZEE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_SUPPORTED_CAPTURE_MODES */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters27KEY_SUPPORTED_CAPTURE_MODESE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_STEREO_CAPTURE_FRAME_RATE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters29KEY_STEREO_CAPTURE_FRAME_RATEE = NULL;

/* Exported Object: android::MtkCameraParameters::PREVIEW_DUMP_RESOLUTION_NORMAL */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters30PREVIEW_DUMP_RESOLUTION_NORMALE = NULL;

/* Exported Object: android::CameraParameters::PIXEL_FORMAT_YUV422SP */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters21PIXEL_FORMAT_YUV422SPE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_SHADING_TABLE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters21KEY_ENG_SHADING_TABLEE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_FLASH_DUTY_VALUE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters24KEY_ENG_FLASH_DUTY_VALUEE = NULL;

/* Exported Object: android::MtkCameraParameters::PIXEL_FORMAT_YUV422I_VYUY */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters25PIXEL_FORMAT_YUV422I_VYUYE = NULL;

/* Exported Object: android::CameraParameters::KEY_MAX_ZOOM */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters12KEY_MAX_ZOOME = NULL;

/* Exported Object: android::CameraParameters::KEY_MAX_EXPOSURE_COMPENSATION */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters29KEY_MAX_EXPOSURE_COMPENSATIONE = NULL;

/* Exported Object: android::CameraParameters::KEY_ZOOM */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters8KEY_ZOOME = NULL;

/* Exported Object: android::MtkCameraParameters::CAMERA_MODE_MTK_PRV */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters19CAMERA_MODE_MTK_PRVE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_STEREO_3RDPARTY_MODE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters24KEY_STEREO_3RDPARTY_MODEE = NULL;

/* Exported Object: android::MtkCameraParameters::EFFECT_SEPIA_GREEN */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters18EFFECT_SEPIA_GREENE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_STEREO_3D_MODE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters18KEY_STEREO_3D_MODEE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_STEREO_3D_TYPE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters18KEY_STEREO_3D_TYPEE = NULL;

/* Exported Object: android::MtkCameraParameters::VIDEO_HDR_MODE_ZVHDR */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters20VIDEO_HDR_MODE_ZVHDRE = NULL;

/* Exported Object: android::CameraParameters::KEY_METERING_AREAS */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters18KEY_METERING_AREASE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_MANUAL_SHUTTER_SPEED */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters28KEY_ENG_MANUAL_SHUTTER_SPEEDE = NULL;

/* Exported Object: android::MtkCameraParameters::FOCUS_METER_SPOT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters16FOCUS_METER_SPOTE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_EIS_SUPPORTED_FRAMES */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters24KEY_EIS_SUPPORTED_FRAMESE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_SHADING_TABLE_TSF */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters25KEY_ENG_SHADING_TABLE_TSFE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_HDR_MODE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters12KEY_HDR_MODEE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_EDGE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters8KEY_EDGEE = NULL;

/* Exported Object: android::CameraParameters::KEY_FOCUS_DISTANCES */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters19KEY_FOCUS_DISTANCESE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_PARAMETER3 */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters18KEY_ENG_PARAMETER3E = NULL;

/* Exported Object: android::MtkCameraParameters::EXPOSURE_METER_SPOT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters19EXPOSURE_METER_SPOTE = NULL;

/* Exported Object: android::MtkCameraParameters::PIXEL_FORMAT_YUV420SP_NV12 */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters26PIXEL_FORMAT_YUV420SP_NV12E = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_SENSOR_SHADNING_ENABLE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters30KEY_ENG_SENSOR_SHADNING_ENABLEE = NULL;

/* Exported Object: android::MtkCameraParameters::ISO_SPEED_1600 */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters14ISO_SPEED_1600E = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_PANEL_SIZE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters14KEY_PANEL_SIZEE = NULL;

/* Demangled: android::CameraParameters::~CameraParameters() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16CameraParametersD1Ev(void) {
    ALOGD("_ZN7android16CameraParametersD1Ev() called");
    return 0;
}

/* Exported Object: android::MtkCameraParameters::ISO_SPEED_100 */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters13ISO_SPEED_100E = NULL;

/* Exported Object: android::MtkCameraParameters::CAPTURE_MODE_MAV_SHOT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters21CAPTURE_MODE_MAV_SHOTE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_3ADB_FLASH_ENABLE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters25KEY_ENG_3ADB_FLASH_ENABLEE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_FB_SMOOTH_LEVEL_Default */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters27KEY_FB_SMOOTH_LEVEL_DefaultE = NULL;

/* Exported Object: android::CameraParameters::SCENE_MODE_SPORTS */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters17SCENE_MODE_SPORTSE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_STEREO_TOUCH_POSITION */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters25KEY_STEREO_TOUCH_POSITIONE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_SHADING_TABLE_HIGH */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters26KEY_ENG_SHADING_TABLE_HIGHE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_STEREO_3D_PREVIEW_SIZE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters26KEY_STEREO_3D_PREVIEW_SIZEE = NULL;

/* Exported Object: android::CameraParameters::EFFECT_NEGATIVE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters15EFFECT_NEGATIVEE = NULL;

/* Demangled: android::CameraParameters::getPictureFormat() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android16CameraParameters16getPictureFormatEv(void) {
    ALOGD("_ZNK7android16CameraParameters16getPictureFormatEv() called");
    return 0;
}

/* Exported Object: android::MtkCameraParameters::KEY_CUSTOM_HINT_3 */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters17KEY_CUSTOM_HINT_3E = NULL;

/* Exported Object: android::MtkCameraParameters::PANORAMA_DIR_DOWN */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters17PANORAMA_DIR_DOWNE = NULL;

/* Exported Object: android::CameraParameters::EFFECT_SEPIA */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters12EFFECT_SEPIAE = NULL;

/* Demangled: android::CameraParameters::flatten() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android16CameraParameters7flattenEv(void) {
    ALOGD("_ZNK7android16CameraParameters7flattenEv() called");
    return 0;
}

/* Demangled: android::CameraParameters::isEmpty() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android16CameraParameters7isEmptyEv(void) {
    ALOGD("_ZNK7android16CameraParameters7isEmptyEv() called");
    return 0;
}

/* Exported Object: android::MtkCameraParameters::KEY_HEARTBEAT_MONITOR */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters21KEY_HEARTBEAT_MONITORE = NULL;

/* Exported Object: android::CameraParameters::FOCUS_MODE_EDOF */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters15FOCUS_MODE_EDOFE = NULL;

/* Exported Object: android::CameraParameters::KEY_VIDEO_FRAME_FORMAT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters22KEY_VIDEO_FRAME_FORMATE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_RAW_DUMP_FLAG */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters17KEY_RAW_DUMP_FLAGE = NULL;

/* Exported Object: android::MtkCameraParameters::PIXEL_FORMAT_YV12_GPU */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters21PIXEL_FORMAT_YV12_GPUE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_MTK_AWB_SUPPORTED */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters25KEY_ENG_MTK_AWB_SUPPORTEDE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, NSCam::EImageFormat> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EN5NSCam12EImageFormatEEEE10do_compareEPKvS8_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EN5NSCam12EImageFormatEEEE10do_compareEPKvS8_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, NSCam::EImageFormat> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EN5NSCam12EImageFormatEEEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EN5NSCam12EImageFormatEEEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Exported Object: android::MtkCameraParameters::KEY_FB_SLIM_FACE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters16KEY_FB_SLIM_FACEE = NULL;

/* Demangled: android::CameraParameters::getPreviewSize(int*, int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android16CameraParameters14getPreviewSizeEPiS1_(void) {
    ALOGD("_ZNK7android16CameraParameters14getPreviewSizeEPiS1_() called");
    return 0;
}

/* Exported Object: android::CameraParameters::SCENE_MODE_PORTRAIT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters19SCENE_MODE_PORTRAITE = NULL;

/* Exported Object: android::CameraParameters::KEY_JPEG_THUMBNAIL_WIDTH */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters24KEY_JPEG_THUMBNAIL_WIDTHE = NULL;

/* Exported Object: android::CameraParameters::KEY_GPS_PROCESSING_METHOD */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters25KEY_GPS_PROCESSING_METHODE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_FB_FACE_POS */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters15KEY_FB_FACE_POSE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_SENSOR_TYPE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters15KEY_SENSOR_TYPEE = NULL;

/* Exported Object: android::MtkCameraParameters::HDR_MODE_VIDEO_AUTO */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters19HDR_MODE_VIDEO_AUTOE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_PREVIEW_DUMP_RESOLUTION */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters27KEY_PREVIEW_DUMP_RESOLUTIONE = NULL;

/* Exported Object: android::CameraParameters::KEY_PICTURE_FORMAT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters18KEY_PICTURE_FORMATE = NULL;

/* Demangled: android::CameraParameters::getPreferredPreviewSizeForVideo(int*, int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android16CameraParameters31getPreferredPreviewSizeForVideoEPiS1_(void) {
    ALOGD("_ZNK7android16CameraParameters31getPreferredPreviewSizeForVideoEPiS1_() called");
    return 0;
}

/* Exported Object: android::MtkCameraParameters::CAPTURE_MODE_BEST_SHOT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters22CAPTURE_MODE_BEST_SHOTE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_FOCUS_FULLSCAN_FRAME_INTERVAL_MAX */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters41KEY_ENG_FOCUS_FULLSCAN_FRAME_INTERVAL_MAXE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_VR_BUFFER_COUNT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters19KEY_VR_BUFFER_COUNTE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_SINGLE_FRAME_CAPTURE_HDR_SUPPORTED */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters38KEY_SINGLE_FRAME_CAPTURE_HDR_SUPPORTEDE = NULL;

/* Exported Object: android::CameraParameters::FOCUS_MODE_CONTINUOUS_VIDEO */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters27FOCUS_MODE_CONTINUOUS_VIDEOE = NULL;

/* Demangled: android::CameraParameters::~CameraParameters() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16CameraParametersD2Ev(void) {
    ALOGD("_ZN7android16CameraParametersD2Ev() called");
    return 0;
}

/* Demangled: android::CameraParameters::getSupportedPreviewSizes(android::Vector<android::Size>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android16CameraParameters24getSupportedPreviewSizesERNS_6VectorINS_4SizeEEE(void) {
    ALOGD("_ZNK7android16CameraParameters24getSupportedPreviewSizesERNS_6VectorINS_4SizeEEE() called");
    return 0;
}

/* Exported Object: android::MtkCameraParameters::KEY_SUPPORT_MZAF_FEATURE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters24KEY_SUPPORT_MZAF_FEATUREE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_FOCUS_FULLSCAN_FRAME_INTERVAL */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters37KEY_ENG_FOCUS_FULLSCAN_FRAME_INTERVALE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, NSCam::EImageFormat> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EN5NSCam12EImageFormatEEEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EN5NSCam12EImageFormatEEEE12do_constructEPvm() called");
    return 0;
}

/* Exported Object: android::CameraParameters::KEY_FOCAL_LENGTH */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters16KEY_FOCAL_LENGTHE = NULL;

/* Exported Object: android::CameraParameters::WHITE_BALANCE_CLOUDY_DAYLIGHT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters29WHITE_BALANCE_CLOUDY_DAYLIGHTE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_DNG_SUPPORTED */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters17KEY_DNG_SUPPORTEDE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, NSCam::EImageFormat> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EN5NSCam12EImageFormatEEEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EN5NSCam12EImageFormatEEEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: android::CameraParameters::KEY_SUPPORTED_WHITE_BALANCE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters27KEY_SUPPORTED_WHITE_BALANCEE = NULL;

/* Exported Object: android::MtkCameraParameters::HIGH */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters4HIGHE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_FB_SKIN_COLOR_MAX */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters21KEY_FB_SKIN_COLOR_MAXE = NULL;

/* Exported Object: android::MtkCameraParameters::PREVIEW_DUMP_RESOLUTION_CROP */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters28PREVIEW_DUMP_RESOLUTION_CROPE = NULL;

/* Exported Object: android::CameraParameters::KEY_SUPPORTED_FOCUS_MODES */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters25KEY_SUPPORTED_FOCUS_MODESE = NULL;

/* Exported Object: android::CameraParameters::KEY_VIDEO_STABILIZATION_SUPPORTED */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters33KEY_VIDEO_STABILIZATION_SUPPORTEDE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_HDR_DETECTION_SUPPORTED */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters27KEY_HDR_DETECTION_SUPPORTEDE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_DYNAMIC_SWITCH_SENSOR_MODE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters30KEY_DYNAMIC_SWITCH_SENSOR_MODEE = NULL;

/* Demangled: android::CameraParameters::getPictureSize(int*, int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android16CameraParameters14getPictureSizeEPiS1_(void) {
    ALOGD("_ZNK7android16CameraParameters14getPictureSizeEPiS1_() called");
    return 0;
}

/* Exported Object: android::MtkCameraParameters::CAPTURE_MODE_GESTURE_SHOT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters25CAPTURE_MODE_GESTURE_SHOTE = NULL;

/* Exported Object: android::MtkCameraParameters::CAPTURE_MODE_EV_BRACKET_SHOT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters28CAPTURE_MODE_EV_BRACKET_SHOTE = NULL;

/* Exported Object: android::CameraParameters::KEY_GPS_LATITUDE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters16KEY_GPS_LATITUDEE = NULL;

/* Exported Object: android::CameraParameters::KEY_SMOOTH_ZOOM_SUPPORTED */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters25KEY_SMOOTH_ZOOM_SUPPORTEDE = NULL;

/* Exported Object: android::CameraParameters::KEY_SUPPORTED_ANTIBANDING */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters25KEY_SUPPORTED_ANTIBANDINGE = NULL;

/* Exported Object: android::MtkCameraParameters::HDR_MODE_VIDEO_ON */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters17HDR_MODE_VIDEO_ONE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_SENOSR_MODE_SUPPORTED */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters29KEY_ENG_SENOSR_MODE_SUPPORTEDE = NULL;

/* Exported Object: android::CameraParameters::KEY_AUTO_EXPOSURE_LOCK */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters22KEY_AUTO_EXPOSURE_LOCKE = NULL;

/* Exported Object: android::MtkCameraParameters::FPS_MODE_FIX */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters12FPS_MODE_FIXE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_MANUAL_CAP */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters14KEY_MANUAL_CAPE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_POST_VIEW_FMT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters17KEY_POST_VIEW_FMTE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_DUALCAM_SWITCH_ZOOM_RATIO */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters29KEY_DUALCAM_SWITCH_ZOOM_RATIOE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_SENSOR_AWB_ENABLE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters25KEY_ENG_SENSOR_AWB_ENABLEE = NULL;

/* Exported Object: android::CameraParameters::KEY_GPS_ALTITUDE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters16KEY_GPS_ALTITUDEE = NULL;

/* Exported Object: android::CameraParameters::PIXEL_FORMAT_JPEG */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters17PIXEL_FORMAT_JPEGE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ADV_EIS */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters11KEY_ADV_EISE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_FOCUS_FULLSCAN_FRAME_INTERVAL_MIN */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters41KEY_ENG_FOCUS_FULLSCAN_FRAME_INTERVAL_MINE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_VIDEO_RAW_DUMP_RESIZE_TO_4K2K_SUPPORTED */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters47KEY_ENG_VIDEO_RAW_DUMP_RESIZE_TO_4K2K_SUPPORTEDE = NULL;

/* Exported Object: android::CameraParameters::KEY_HORIZONTAL_VIEW_ANGLE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters25KEY_HORIZONTAL_VIEW_ANGLEE = NULL;

/* Exported Object: android::MtkCameraParameters::PANORAMA_DIR_LEFT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters17PANORAMA_DIR_LEFTE = NULL;

/* Exported Object: android::MtkCameraParameters::CAPTURE_MODE_MULTI_MOTION */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters25CAPTURE_MODE_MULTI_MOTIONE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_NON_SLOWMOTION_PREVIEW_LIMIT_MAX_FPS */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters40KEY_NON_SLOWMOTION_PREVIEW_LIMIT_MAX_FPSE = NULL;

/* Exported Object: android::g_nLastPreviewWidth */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19g_nLastPreviewWidthE = NULL;

/* Exported Object: android::CameraParameters::ANTIBANDING_50HZ */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters16ANTIBANDING_50HZE = NULL;

/* Exported Object: android::CameraParameters::KEY_PICTURE_SIZE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters16KEY_PICTURE_SIZEE = NULL;

/* Exported Object: android::MtkCameraParameters::HDR_MODE_OFF */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters12HDR_MODE_OFFE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_MFB_MODE_AIS */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters16KEY_MFB_MODE_AISE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_HSVR_SIZE_FPS */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters17KEY_HSVR_SIZE_FPSE = NULL;

/* Exported Object: android::CameraParameters::KEY_SUPPORTED_PREVIEW_FPS_RANGE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters31KEY_SUPPORTED_PREVIEW_FPS_RANGEE = NULL;

/* Exported Object: android::CameraParameters::KEY_AUTO_WHITEBALANCE_LOCK_SUPPORTED */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters36KEY_AUTO_WHITEBALANCE_LOCK_SUPPORTEDE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_FB_SMOOTH_LEVEL_MAX */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters23KEY_FB_SMOOTH_LEVEL_MAXE = NULL;

/* Demangled: android::CameraParameters::setPictureSize(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16CameraParameters14setPictureSizeEii(void) {
    ALOGD("_ZN7android16CameraParameters14setPictureSizeEii() called");
    return 0;
}

/* Exported Object: android::MtkCameraParameters::VIDEO_HDR_SIZE_DEVISOR */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters22VIDEO_HDR_SIZE_DEVISORE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_REFOCUS_JPS_FILE_NAME */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters25KEY_REFOCUS_JPS_FILE_NAMEE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_FB_SKIN_COLOR_MIN */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters21KEY_FB_SKIN_COLOR_MINE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_DUALCAM_DEVICE_STATE_RECORDING */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters34KEY_DUALCAM_DEVICE_STATE_RECORDINGE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_SENOSR_MODE_SLIM_VIDEO1_SUPPORTED */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters41KEY_ENG_SENOSR_MODE_SLIM_VIDEO1_SUPPORTEDE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_AE_MODE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters11KEY_AE_MODEE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_MAX_EXPOSURE_TIME */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters21KEY_MAX_EXPOSURE_TIMEE = NULL;

/* Exported Object: android::MtkCameraParameters::PIXEL_FORMAT_YCrCb_420_SP */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters25PIXEL_FORMAT_YCrCb_420_SPE = NULL;

/* Exported Object: android::MtkCameraParameters::PIXEL_FORMAT_BITSTREAM */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters22PIXEL_FORMAT_BITSTREAME = NULL;

/* Exported Object: android::CameraParameters::WHITE_BALANCE_AUTO */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters18WHITE_BALANCE_AUTOE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE8do_splatEPvPKvm() called");
    return 0;
}

/* Exported Object: android::MtkCameraParameters::EFFECT_KELVIN */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters13EFFECT_KELVINE = NULL;

/* Exported Object: android::MtkCameraParameters::ISO_SPEED_200 */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters13ISO_SPEED_200E = NULL;

/* Exported Object: android::MtkCameraParameters::FPS_MODE_NORMAL */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters15FPS_MODE_NORMALE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_DYNAMIC_FRAME_RATE_SUPPORTED */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters32KEY_DYNAMIC_FRAME_RATE_SUPPORTEDE = NULL;

/* Exported Object: android::MtkCameraParameters::ENABLE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters6ENABLEE = NULL;

/* Exported Object: android::CameraParameters::KEY_VERTICAL_VIEW_ANGLE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters23KEY_VERTICAL_VIEW_ANGLEE = NULL;

/* Exported Object: android::CameraParameters::PIXEL_FORMAT_BAYER_RGGB */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters23PIXEL_FORMAT_BAYER_RGGBE = NULL;

/* Exported Object: android::CameraParameters::KEY_MAX_NUM_DETECTED_FACES_SW */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters29KEY_MAX_NUM_DETECTED_FACES_SWE = NULL;

/* Exported Object: android::MtkCameraParameters::EFFECT_HEFE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters11EFFECT_HEFEE = NULL;

/* Exported Object: android::CameraParameters::EFFECT_MONO */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters11EFFECT_MONOE = NULL;

/* Exported Object: android::CameraParameters::FOCUS_DISTANCE_INFINITY */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters23FOCUS_DISTANCE_INFINITYE = NULL;

/* Exported Object: android::MtkCameraParameters::APP_MODE_NAME_MTK_VT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters20APP_MODE_NAME_MTK_VTE = NULL;

/* Exported Object: android::MtkCameraParameters::APP_MODE_NAME_MTK_DUALCAM */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters25APP_MODE_NAME_MTK_DUALCAME = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_3DNR_QUALITY_SUPPORTED */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters26KEY_3DNR_QUALITY_SUPPORTEDE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_DUALCAM_DEVICE_STATE_PREVIEWING */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters35KEY_DUALCAM_DEVICE_STATE_PREVIEWINGE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_AF_X */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters8KEY_AF_XE = NULL;

/* Exported Object: android::CameraParameters::KEY_MAX_NUM_METERING_AREAS */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters26KEY_MAX_NUM_METERING_AREASE = NULL;

/* Exported Object: android::CameraParameters::PIXEL_FORMAT_YUV420P */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters20PIXEL_FORMAT_YUV420PE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_STEREO_VSDOF_MODE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters21KEY_STEREO_VSDOF_MODEE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_STEREO_3D_IMAGE_FORMAT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters26KEY_STEREO_3D_IMAGE_FORMATE = NULL;

/* Exported Object: android::MtkCameraParameters::OFF */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters3OFFE = NULL;

/* Exported Object: android::CameraParameters::SCENE_MODE_FIREWORKS */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters20SCENE_MODE_FIREWORKSE = NULL;

/* Exported Object: android::CameraParameters::KEY_JPEG_THUMBNAIL_HEIGHT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters25KEY_JPEG_THUMBNAIL_HEIGHTE = NULL;

/* Demangled: android::CameraParameters::getVideoSize(int*, int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android16CameraParameters12getVideoSizeEPiS1_(void) {
    ALOGD("_ZNK7android16CameraParameters12getVideoSizeEPiS1_() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<android::String8, android::String8> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEEE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_RAW_PATH */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters12KEY_RAW_PATHE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_PREVIEW_ISO */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters19KEY_ENG_PREVIEW_ISOE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_FOCUS_FULLSCAN_FRAME_INTERVAL_MIN_DEFAULT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters49KEY_ENG_FOCUS_FULLSCAN_FRAME_INTERVAL_MIN_DEFAULTE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_FOCUS_FULLSCAN_FRAME_INTERVAL_MAX_DEFAULT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters49KEY_ENG_FOCUS_FULLSCAN_FRAME_INTERVAL_MAX_DEFAULTE = NULL;

/* Exported Object: android::CameraParameters::SCENE_MODE_NIGHT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters16SCENE_MODE_NIGHTE = NULL;

/* Exported Object: android::CameraParameters::KEY_AUTO_EXPOSURE_LOCK_SUPPORTED */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters32KEY_AUTO_EXPOSURE_LOCK_SUPPORTEDE = NULL;

/* Demangled: android::CameraParameters::set(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16CameraParameters3setEPKcS2_(void) {
    ALOGD("_ZN7android16CameraParameters3setEPKcS2_() called");
    return 0;
}

/* Exported Object: android::MtkCameraParameters::KEY_HSVR_PRV_FPS */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters16KEY_HSVR_PRV_FPSE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_ZSD_ENABLE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters18KEY_ENG_ZSD_ENABLEE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_MTK_SHADING_ENABLE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters26KEY_ENG_MTK_SHADING_ENABLEE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_GIS_CALIBRATION_SUPPORTED */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters33KEY_ENG_GIS_CALIBRATION_SUPPORTEDE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_VIDEO_RAW_DUMP_MANUAL_FRAME_RATE_MAX */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters44KEY_ENG_VIDEO_RAW_DUMP_MANUAL_FRAME_RATE_MAXE = NULL;

/* Demangled: android::CameraParameters::dump() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android16CameraParameters4dumpEv(void) {
    ALOGD("_ZNK7android16CameraParameters4dumpEv() called");
    return 0;
}

/* Exported Object: android::MtkCameraParameters::KEY_FB_SMOOTH_LEVEL_MIN */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters23KEY_FB_SMOOTH_LEVEL_MINE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_SHADING_TABLE_LOW */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters25KEY_ENG_SHADING_TABLE_LOWE = NULL;

/* Demangled: android::MtkCameraParameters::queryImageFormat(android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android19MtkCameraParameters16queryImageFormatERKNS_7String8E(void) {
    ALOGD("_ZN7android19MtkCameraParameters16queryImageFormatERKNS_7String8E() called");
    return 0;
}

/* Exported Object: android::MtkCameraParameters::KEY_CUSTOM_HINT_4 */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters17KEY_CUSTOM_HINT_4E = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_FOCUS_ENG_STEP */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters18KEY_FOCUS_ENG_STEPE = NULL;

/* Exported Object: android::CameraParameters::FLASH_MODE_AUTO */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters15FLASH_MODE_AUTOE = NULL;

/* Exported Object: android::CameraParameters::SCENE_MODE_PARTY */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters16SCENE_MODE_PARTYE = NULL;

/* Exported Object: android::CameraParameters::EFFECT_BLACKBOARD */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters17EFFECT_BLACKBOARDE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_PDAF_SUPPORTED */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters18KEY_PDAF_SUPPORTEDE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_MFLL_SUPPORTED */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters22KEY_ENG_MFLL_SUPPORTEDE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_DUALCAM_DEVICE_STATE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters24KEY_DUALCAM_DEVICE_STATEE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_STEREO_SUPPORTED_DOF_LEVEL */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters30KEY_STEREO_SUPPORTED_DOF_LEVELE = NULL;

/* Exported Object: android::CameraParameters::FLASH_MODE_ON */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters13FLASH_MODE_ONE = NULL;

/* Exported Object: android::CameraParameters::SCENE_MODE_HDR */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters14SCENE_MODE_HDRE = NULL;

/* Demangled: android::CameraParameters::getSupportedVideoSizes(android::Vector<android::Size>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android16CameraParameters22getSupportedVideoSizesERNS_6VectorINS_4SizeEEE(void) {
    ALOGD("_ZNK7android16CameraParameters22getSupportedVideoSizesERNS_6VectorINS_4SizeEEE() called");
    return 0;
}

/* Exported Object: android::MtkCameraParameters::KEY_ENG_ISP_PREVIEW */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters19KEY_ENG_ISP_PREVIEWE = NULL;

/* Exported Object: android::MtkCameraParameters::CAPTURE_MODE_ZSD_SHOT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters21CAPTURE_MODE_ZSD_SHOTE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_PREVIEW_INT_FORMAT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters22KEY_PREVIEW_INT_FORMATE = NULL;

/* Exported Object: android::CameraParameters::KEY_PREVIEW_FPS_RANGE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters21KEY_PREVIEW_FPS_RANGEE = NULL;

/* Exported Object: android::CameraParameters::KEY_SUPPORTED_FLASH_MODES */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters25KEY_SUPPORTED_FLASH_MODESE = NULL;

/* Exported Object: android::CameraParameters::WHITE_BALANCE_WARM_FLUORESCENT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters30WHITE_BALANCE_WARM_FLUORESCENTE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_CUSTOM_HINT_0 */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters17KEY_CUSTOM_HINT_0E = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_FB_SLIM_FACE_MAX */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters20KEY_FB_SLIM_FACE_MAXE = NULL;

/* Exported Object: android::CameraParameters::PIXEL_FORMAT_ANDROID_OPAQUE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters27PIXEL_FORMAT_ANDROID_OPAQUEE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_AE_ENABLE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters17KEY_ENG_AE_ENABLEE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_HSVR_PRV_SIZE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters17KEY_HSVR_PRV_SIZEE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_FOCUS_ENG_BEST_STEP */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters23KEY_FOCUS_ENG_BEST_STEPE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_MAX_NUM_DETECTED_OBJECT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters27KEY_MAX_NUM_DETECTED_OBJECTE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_MANUAL_MULTI_NR_SUPPORTED */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters33KEY_ENG_MANUAL_MULTI_NR_SUPPORTEDE = NULL;

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<android::String8, NSCam::EImageFormat> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_7String8EN5NSCam12EImageFormatEEEEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_destroyEPvm() called");
    return 0;
}

/* Exported Object: android::MtkCameraParameters::KEY_HDR_AUTO_MODE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters17KEY_HDR_AUTO_MODEE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_EV_CALBRATION_OFFSET_VALUE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters34KEY_ENG_EV_CALBRATION_OFFSET_VALUEE = NULL;

/* Exported Object: android::MtkCameraParameters::DISABLE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters7DISABLEE = NULL;

/* Exported Object: android::MtkCameraParameters::EFFECT_SEPIA_BLUE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters17EFFECT_SEPIA_BLUEE = NULL;

/* Exported Object: android::MtkCameraParameters::PIXEL_FORMAT_YUV420I */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters20PIXEL_FORMAT_YUV420IE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_MZAF_ENABLE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters15KEY_MZAF_ENABLEE = NULL;

/* Exported Object: android::CameraParameters::KEY_PREVIEW_SIZE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters16KEY_PREVIEW_SIZEE = NULL;

/* Exported Object: android::MtkCameraParameters::APP_MODE_NAME_MTK_ZSD */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters21APP_MODE_NAME_MTK_ZSDE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_FOCUS_ENG_MAX_STEP */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters22KEY_FOCUS_ENG_MAX_STEPE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_SUPPORTED_ZSD_MODE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters22KEY_SUPPORTED_ZSD_MODEE = NULL;

/* Exported Object: android::MtkCameraParameters::REAR */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters4REARE = NULL;

/* Exported Object: android::MtkCameraParameters::EFFECT_SIERRA */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters13EFFECT_SIERRAE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_VIDEO_RAW_DUMP_MANUAL_FRAME_RATE_MIN */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters44KEY_ENG_VIDEO_RAW_DUMP_MANUAL_FRAME_RATE_MINE = NULL;

/* Exported Object: android::CameraParameters::KEY_PREVIEW_FORMAT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters18KEY_PREVIEW_FORMATE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_FB_SHARP_MAX */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters16KEY_FB_SHARP_MAXE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_VIDEO_HDR_MODE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters18KEY_VIDEO_HDR_MODEE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_ISP_CAPTURE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters19KEY_ENG_ISP_CAPTUREE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_FAST_CONTINUOUS_SHOT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters24KEY_FAST_CONTINUOUS_SHOTE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, NSCam::EImageFormat> >::do_splat(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EN5NSCam12EImageFormatEEEE8do_splatEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EN5NSCam12EImageFormatEEEE8do_splatEPvPKvm() called");
    return 0;
}

/* Exported Object: android::MtkCameraParameters::KEY_FB_TOUCH_POS */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters16KEY_FB_TOUCH_POSE = NULL;

/* Exported Object: android::MtkCameraParameters::VIDEO_HDR_MODE_IVHDR */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters20VIDEO_HDR_MODE_IVHDRE = NULL;

/* Exported Object: android::CameraParameters::SCENE_MODE_LANDSCAPE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters20SCENE_MODE_LANDSCAPEE = NULL;

/* Exported Object: android::CameraParameters::KEY_SUPPORTED_JPEG_THUMBNAIL_SIZES */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters34KEY_SUPPORTED_JPEG_THUMBNAIL_SIZESE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_copy(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE7do_copyEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE7do_copyEPvPKvm() called");
    return 0;
}

/* Exported Object: android::MtkCameraParameters::KEY_ENG_RAW_OUTPUT_PORT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters23KEY_ENG_RAW_OUTPUT_PORTE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_DUALCAM_CAPTURE_MODE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters24KEY_DUALCAM_CAPTURE_MODEE = NULL;

/* Exported Object: android::MtkCameraParameters::PREVIEW */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters7PREVIEWE = NULL;

/* Exported Object: android::CameraParameters::KEY_FOCUS_MODE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters14KEY_FOCUS_MODEE = NULL;

/* Exported Object: android::MtkCameraParameters::PANORAMA_DIR_RIGHT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters18PANORAMA_DIR_RIGHTE = NULL;

/* Exported Object: android::MtkCameraParameters::ON */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters2ONE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_MANUAL_MULTI_NR_ENABLE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters30KEY_ENG_MANUAL_MULTI_NR_ENABLEE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_VIDEO_RAW_DUMP_CROP_CENTER_2M_SUPPORTED */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters47KEY_ENG_VIDEO_RAW_DUMP_CROP_CENTER_2M_SUPPORTEDE = NULL;

/* Exported Object: android::CameraParameters::EFFECT_NONE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters11EFFECT_NONEE = NULL;

/* Exported Object: android::CameraParameters::SCENE_MODE_AUTO */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters15SCENE_MODE_AUTOE = NULL;

/* Exported Object: android::CameraParameters::EFFECT_WHITEBOARD */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters17EFFECT_WHITEBOARDE = NULL;

/* Exported Object: android::CameraParameters::PIXEL_FORMAT_RGB565 */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters19PIXEL_FORMAT_RGB565E = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_FB_SLIM_FACE_MIN */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters20KEY_FB_SLIM_FACE_MINE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_BURST_SHOT_NUM */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters18KEY_BURST_SHOT_NUME = NULL;

/* Exported Object: android::MtkCameraParameters::LOW */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters3LOWE = NULL;

/* Demangled: android::CameraParameters::getFloat(char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android16CameraParameters8getFloatEPKc(void) {
    ALOGD("_ZNK7android16CameraParameters8getFloatEPKc() called");
    return 0;
}

/* Exported Object: android::MtkCameraParameters::KEY_PIP_MAX_FRAME_RATE_ZSD_ON */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters29KEY_PIP_MAX_FRAME_RATE_ZSD_ONE = NULL;

/* Exported Object: android::CameraParameters::SCENE_MODE_SNOW */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters15SCENE_MODE_SNOWE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_MFB_MODE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters12KEY_MFB_MODEE = NULL;

/* Demangled: android::MtkCameraParameters::queryImageFormat(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android19MtkCameraParameters16queryImageFormatEPKc(void) {
    ALOGD("_ZN7android19MtkCameraParameters16queryImageFormatEPKc() called");
    return 0;
}

/* Exported Object: android::MtkCameraParameters::KEY_MATV_PREVIEW_DELAY */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters22KEY_MATV_PREVIEW_DELAYE = NULL;

/* Exported Object: android::MtkCameraParameters::CAPTURE_MODE_SMILE_SHOT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters23CAPTURE_MODE_SMILE_SHOTE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_NATIVE_PIP_SUPPORTED */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters24KEY_NATIVE_PIP_SUPPORTEDE = NULL;

/* Exported Object: android::CameraParameters::KEY_WHITE_BALANCE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters17KEY_WHITE_BALANCEE = NULL;

/* Exported Object: android::MtkCameraParameters::ISO_SPEED_800 */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters13ISO_SPEED_800E = NULL;

/* Exported Object: android::MtkCameraParameters::PIXEL_FORMAT_BAYER10 */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters20PIXEL_FORMAT_BAYER10E = NULL;

/* Exported Object: android::MtkCameraParameters::PIXEL_FORMAT_YUV422I_UYVY */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters25PIXEL_FORMAT_YUV422I_UYVYE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_MTK_SHADING_SUPPORTED */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters29KEY_ENG_MTK_SHADING_SUPPORTEDE = NULL;

/* Exported Object: android::CameraParameters::KEY_MIN_EXPOSURE_COMPENSATION */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters29KEY_MIN_EXPOSURE_COMPENSATIONE = NULL;

/* Exported Object: android::CameraParameters::PIXEL_FORMAT_RGBA8888 */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters21PIXEL_FORMAT_RGBA8888E = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_CONTRAST */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters12KEY_CONTRASTE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_PREVIEW_FPS */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters19KEY_ENG_PREVIEW_FPSE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_SENOSR_MODE_SLIM_VIDEO2_SUPPORTED */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters41KEY_ENG_SENOSR_MODE_SLIM_VIDEO2_SUPPORTEDE = NULL;

/* Exported Object: android::g_nLastPreviewHeight */
extern "C" __attribute__((visibility("default"))) void* _ZN7android20g_nLastPreviewHeightE = NULL;

/* Exported Object: android::CameraParameters::KEY_ZOOM_SUPPORTED */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters18KEY_ZOOM_SUPPORTEDE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_VIDEO_HDR */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters13KEY_VIDEO_HDRE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_STEREO_DEPTH_SIZE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters21KEY_STEREO_DEPTH_SIZEE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_PDAF */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters8KEY_PDAFE = NULL;

/* Exported Object: android::CameraParameters::KEY_ZOOM_RATIOS */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters15KEY_ZOOM_RATIOSE = NULL;

/* Exported Object: android::CameraParameters::WHITE_BALANCE_TWILIGHT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters22WHITE_BALANCE_TWILIGHTE = NULL;

/* Exported Object: android::CameraParameters::KEY_EXPOSURE_COMPENSATION */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters25KEY_EXPOSURE_COMPENSATIONE = NULL;

/* Exported Object: android::MtkCameraParameters::EXPOSURE_METER_CENTER */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters21EXPOSURE_METER_CENTERE = NULL;

/* Exported Object: android::MtkCameraParameters::PIXEL_FORMAT_YUV422I_YVYU */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters25PIXEL_FORMAT_YUV422I_YVYUE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_SUPPORTED_HSVR_SIZE_FPS */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters27KEY_SUPPORTED_HSVR_SIZE_FPSE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_HUE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters7KEY_HUEE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_FB_SHARP_MIN */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters16KEY_FB_SHARP_MINE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_FLASH_CALIBRATION */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters25KEY_ENG_FLASH_CALIBRATIONE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_STEREO_PREVIEW_ENABLE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters25KEY_STEREO_PREVIEW_ENABLEE = NULL;

/* Exported Object: android::CameraParameters::EFFECT_POSTERIZE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters16EFFECT_POSTERIZEE = NULL;

/* Exported Object: android::CameraParameters::SCENE_MODE_THEATRE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters18SCENE_MODE_THEATREE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ZSD_MODE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters12KEY_ZSD_MODEE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_EXPOSURE_TIME */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters17KEY_EXPOSURE_TIMEE = NULL;

/* Exported Object: android::MtkCameraParameters::EXPOSURE_TIME_AUTO */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters18EXPOSURE_TIME_AUTOE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_STEREO_PICTURE_SIZE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters23KEY_STEREO_PICTURE_SIZEE = NULL;

/* Exported Object: android::CameraParameters::ANTIBANDING_OFF */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters15ANTIBANDING_OFFE = NULL;

/* Exported Object: android::CameraParameters::KEY_GPS_TIMESTAMP */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters17KEY_GPS_TIMESTAMPE = NULL;

/* Demangled: android::CameraParameters::setFloat(char const*, float) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16CameraParameters8setFloatEPKcf(void) {
    ALOGD("_ZN7android16CameraParameters8setFloatEPKcf() called");
    return 0;
}

/* Demangled: android::CameraParameters::get(char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android16CameraParameters3getEPKc(void) {
    ALOGD("_ZNK7android16CameraParameters3getEPKc() called");
    return 0;
}

/* Exported Object: android::MtkCameraParameters::EFFECT_NASHVILLE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters16EFFECT_NASHVILLEE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_SUPPORTED_STEREO_POSTVIEW_SIZE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters34KEY_SUPPORTED_STEREO_POSTVIEW_SIZEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, NSCam::EImageFormat> >::do_destroy(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EN5NSCam12EImageFormatEEEE10do_destroyEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EN5NSCam12EImageFormatEEEE10do_destroyEPvm() called");
    return 0;
}

/* Exported Object: android::MtkCameraParameters::APP_MODE_NAME_MTK_STEREO */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters24APP_MODE_NAME_MTK_STEREOE = NULL;

/* Exported Object: android::CameraParameters::EFFECT_AQUA */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters11EFFECT_AQUAE = NULL;

/* Exported Object: android::CameraParameters::KEY_FOCUS_AREAS */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters15KEY_FOCUS_AREASE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_AF_Y */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters8KEY_AF_YE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_STEREO_PREVIEW_FRAME_RATE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters29KEY_STEREO_PREVIEW_FRAME_RATEE = NULL;

/* Exported Object: android::CameraParameters::KEY_MAX_NUM_DETECTED_FACES_HW */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters29KEY_MAX_NUM_DETECTED_FACES_HWE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_FOCUS_DRAW */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters14KEY_FOCUS_DRAWE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_STEREO_EXTRA_SIZE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters21KEY_STEREO_EXTRA_SIZEE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_FOCUS_FULLSCAN_DAC_STEP */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters31KEY_ENG_FOCUS_FULLSCAN_DAC_STEPE = NULL;

/* Exported Object: android::MtkCameraParameters::MIDDLE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters6MIDDLEE = NULL;

/* Exported Object: android::MtkCameraParameters::CAPTURE_MODE_PANO_3D */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters20CAPTURE_MODE_PANO_3DE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_HIGH_FPS_CAPTURE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters20KEY_HIGH_FPS_CAPTUREE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_VIDEO_RAW_DUMP_MANUAL_FRAME_RATE_ENABLE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters47KEY_ENG_VIDEO_RAW_DUMP_MANUAL_FRAME_RATE_ENABLEE = NULL;

/* Demangled: android::CameraParameters::getSupportedPreviewFormats(android::Vector<int>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android16CameraParameters26getSupportedPreviewFormatsERNS_6VectorIiEE(void) {
    ALOGD("_ZNK7android16CameraParameters26getSupportedPreviewFormatsERNS_6VectorIiEE() called");
    return 0;
}

/* Exported Object: android::MtkCameraParameters::KEY_ENG_PARAMETER1 */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters18KEY_ENG_PARAMETER1E = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_CSHOT_INDICATOR */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters19KEY_CSHOT_INDICATORE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_SAVE_SHADING_TABLE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters26KEY_ENG_SAVE_SHADING_TABLEE = NULL;

/* Demangled: android::CameraParameters::unflatten(android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16CameraParameters9unflattenERKNS_7String8E(void) {
    ALOGD("_ZN7android16CameraParameters9unflattenERKNS_7String8E() called");
    return 0;
}

/* Exported Object: android::MtkCameraParameters::CAMERA_MODE_MTK_VDO */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters19CAMERA_MODE_MTK_VDOE = NULL;

/* Exported Object: android::MtkCameraParameters::CAPTURE_MODE_BURST_SHOT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters23CAPTURE_MODE_BURST_SHOTE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_VSDOF_SCENE_MODE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters20KEY_VSDOF_SCENE_MODEE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_PREVIEW_ISP_GAIN */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters24KEY_ENG_PREVIEW_ISP_GAINE = NULL;

/* Exported Object: android::CameraParameters::FLASH_MODE_OFF */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters14FLASH_MODE_OFFE = NULL;

/* Exported Object: android::CameraParameters::KEY_VIDEO_STABILIZATION */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters23KEY_VIDEO_STABILIZATIONE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_FB_EXTREME_BEAUTY */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters21KEY_FB_EXTREME_BEAUTYE = NULL;

/* Exported Object: android::CameraParameters::FOCUS_MODE_INFINITY */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters19FOCUS_MODE_INFINITYE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_FB_ENLARGE_EYE_MAX */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters22KEY_FB_ENLARGE_EYE_MAXE = NULL;

/* Exported Object: android::MtkCameraParameters::APP_MODE_NAME_MTK_PHOTO */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters23APP_MODE_NAME_MTK_PHOTOE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_FB_SKIN_COLOR_Default */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters25KEY_FB_SKIN_COLOR_DefaultE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_SUPPORTED_STEREO_PICTURE_SIZE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters33KEY_SUPPORTED_STEREO_PICTURE_SIZEE = NULL;

/* Exported Object: android::CameraParameters::FLASH_MODE_TORCH */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters16FLASH_MODE_TORCHE = NULL;

/* Exported Object: android::CameraParameters::KEY_GPS_LONGITUDE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters17KEY_GPS_LONGITUDEE = NULL;

/* Exported Object: android::CameraParameters::KEY_RECORDING_HINT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters18KEY_RECORDING_HINTE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_CUSTOM_HINT_1 */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters17KEY_CUSTOM_HINT_1E = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_STEREO_N3D_SIZE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters19KEY_STEREO_N3D_SIZEE = NULL;

/* Exported Object: android::MtkCameraParameters::APP_MODE_NAME_MTK_ENG */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters21APP_MODE_NAME_MTK_ENGE = NULL;

/* Exported Object: android::CameraParameters::SCENE_MODE_NIGHT_PORTRAIT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters25SCENE_MODE_NIGHT_PORTRAITE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Demangled: android::CameraParameters::setPreviewSize(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16CameraParameters14setPreviewSizeEii(void) {
    ALOGD("_ZN7android16CameraParameters14setPreviewSizeEii() called");
    return 0;
}

/* Exported Object: android::CameraParameters::PIXEL_FORMAT_YUV420SP */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters21PIXEL_FORMAT_YUV420SPE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_CAPTURE_PATH */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters16KEY_CAPTURE_PATHE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_STEREO_SENSOR_INDEX_MAIN */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters28KEY_STEREO_SENSOR_INDEX_MAINE = NULL;

/* Exported Object: android::CameraParameters::KEY_JPEG_QUALITY */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters16KEY_JPEG_QUALITYE = NULL;

/* Demangled: android::CameraParameters::setPreviewFormat(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16CameraParameters16setPreviewFormatEPKc(void) {
    ALOGD("_ZN7android16CameraParameters16setPreviewFormatEPKc() called");
    return 0;
}

/* Exported Object: android::CameraParameters::FLASH_MODE_RED_EYE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters18FLASH_MODE_RED_EYEE = NULL;

/* Demangled: android::CameraParameters::previewFormatToEnum(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16CameraParameters19previewFormatToEnumEPKc(void) {
    ALOGD("_ZN7android16CameraParameters19previewFormatToEnumEPKc() called");
    return 0;
}

/* Exported Object: android::CameraParameters::KEY_SUPPORTED_SCENE_MODES */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters25KEY_SUPPORTED_SCENE_MODESE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_compareEPKvS6_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_compareEPKvS6_() called");
    return 0;
}

/* Exported Object: android::MtkCameraParameters::KEY_FB_SHARP */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters12KEY_FB_SHARPE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_CAMERA_MODE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters15KEY_CAMERA_MODEE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_FACE_BEAUTY */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters15KEY_FACE_BEAUTYE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_MFLL_ENABLE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters19KEY_ENG_MFLL_ENABLEE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_STEREO_REFOCUS_MODE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters23KEY_STEREO_REFOCUS_MODEE = NULL;

/* Exported Object: android::MtkCameraParameters::CAPTURE_MODE_PANORAMA_SHOT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters26CAPTURE_MODE_PANORAMA_SHOTE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_VIDEO_RAW_DUMP_RESIZE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters29KEY_ENG_VIDEO_RAW_DUMP_RESIZEE = NULL;

/* Exported Object: android::MtkCameraParameters::CAMERA_MODE_NORMAL */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters18CAMERA_MODE_NORMALE = NULL;

/* Exported Object: android::MtkCameraParameters::CAPTURE_MODE_NORMAL */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters19CAPTURE_MODE_NORMALE = NULL;

/* Exported Object: android::MtkCameraParameters::VIDEO_HDR_MODE_MVHDR */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters20VIDEO_HDR_MODE_MVHDRE = NULL;

/* Demangled: android::MtkCameraParameters::getPreviewSize(int*, int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android19MtkCameraParameters14getPreviewSizeEPiS1_(void) {
    ALOGD("_ZNK7android19MtkCameraParameters14getPreviewSizeEPiS1_() called");
    return 0;
}

/* Exported Object: android::CameraParameters::KEY_SUPPORTED_PREVIEW_FRAME_RATES */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters33KEY_SUPPORTED_PREVIEW_FRAME_RATESE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_SUPPORTED_HSVR_PRV_SIZE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters27KEY_SUPPORTED_HSVR_PRV_SIZEE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_DUALCAM_CALLBACK_BUFFERS */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters28KEY_DUALCAM_CALLBACK_BUFFERSE = NULL;

/* Exported Object: android::CameraParameters::FOCUS_MODE_AUTO */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters15FOCUS_MODE_AUTOE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_EV_VALUE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters16KEY_ENG_EV_VALUEE = NULL;

/* Exported Object: android::MtkCameraParameters::CAPTURE_MODE_SINGLE_3D */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters22CAPTURE_MODE_SINGLE_3DE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_STEREO_DEPTHAF_MODE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters23KEY_STEREO_DEPTHAF_MODEE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_STEREO_VSDOF_SUPPORTED_MODULE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters33KEY_STEREO_VSDOF_SUPPORTED_MODULEE = NULL;

/* Demangled: android::CameraParameters::setVideoSize(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16CameraParameters12setVideoSizeEii(void) {
    ALOGD("_ZN7android16CameraParameters12setVideoSizeEii() called");
    return 0;
}

/* Exported Object: android::MtkCameraParameters::KEY_NATIVE_PIP */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters14KEY_NATIVE_PIPE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_MFB_MODE_MFLL */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters17KEY_MFB_MODE_MFLLE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_EXPOSURE_METER */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters18KEY_EXPOSURE_METERE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_FOCUS_ENG_MIN_STEP */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters22KEY_FOCUS_ENG_MIN_STEPE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_DISPLAY_ROTATION_SUPPORTED */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters30KEY_DISPLAY_ROTATION_SUPPORTEDE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_FLASH_DUTY_DEFAULT_VALUE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters32KEY_ENG_FLASH_DUTY_DEFAULT_VALUEE = NULL;

/* Exported Object: android::MtkCameraParameters::VAL_MTK_BACKGROUND_SERVICE_DISABLE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters34VAL_MTK_BACKGROUND_SERVICE_DISABLEE = NULL;

/* Exported Object: android::MtkCameraParameters::EFFECT_LOFI */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters11EFFECT_LOFIE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_STEREO_RESULT_DOF_LEVEL */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters27KEY_STEREO_RESULT_DOF_LEVELE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_PIP_MAX_FRAME_RATE_ZSD_OFF */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters30KEY_PIP_MAX_FRAME_RATE_ZSD_OFFE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_STEREO_CAPTURE_SUPPORTED_MODULE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters35KEY_STEREO_CAPTURE_SUPPORTED_MODULEE = NULL;

/* Exported Object: android::CameraParameters::KEY_EFFECT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters10KEY_EFFECTE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_RAW_RRZO */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters16KEY_ENG_RAW_RRZOE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_FLASH_STEP_MAX */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters22KEY_ENG_FLASH_STEP_MAXE = NULL;

/* Exported Object: android::MtkCameraParameters::CAPTURE_MODE_AUTO_PANORAMA_SHOT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters31CAPTURE_MODE_AUTO_PANORAMA_SHOTE = NULL;

/* Demangled: android::CameraParameters::setPictureFormat(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16CameraParameters16setPictureFormatEPKc(void) {
    ALOGD("_ZN7android16CameraParameters16setPictureFormatEPKc() called");
    return 0;
}

/* Exported Object: android::CameraParameters::SCENE_MODE_BARCODE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters18SCENE_MODE_BARCODEE = NULL;

/* Exported Object: android::MtkCameraParameters::ISO_SPEED_400 */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters13ISO_SPEED_400E = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_GESTURE_SHOT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters16KEY_GESTURE_SHOTE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_MFLL_PICTURE_COUNT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters26KEY_ENG_MFLL_PICTURE_COUNTE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, NSCam::EImageFormat> >::do_move_forward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EN5NSCam12EImageFormatEEEE15do_move_forwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8EN5NSCam12EImageFormatEEEE15do_move_forwardEPvPKvm() called");
    return 0;
}

/* Exported Object: android::CameraParameters::KEY_SCENE_MODE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters14KEY_SCENE_MODEE = NULL;

/* Exported Object: android::CameraParameters::FOCUS_MODE_FIXED */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters16FOCUS_MODE_FIXEDE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_FB_ENLARGE_EYE_MIN */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters22KEY_FB_ENLARGE_EYE_MINE = NULL;

/* Exported Object: android::CameraParameters::SCENE_MODE_CANDLELIGHT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters22SCENE_MODE_CANDLELIGHTE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_SENSOR_AWB_SUPPORTED */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters28KEY_ENG_SENSOR_AWB_SUPPORTEDE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_STEREO_DENOISE_SUPPORTED_MODULE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters35KEY_STEREO_DENOISE_SUPPORTED_MODULEE = NULL;

/* Exported Object: android::MtkCameraParameters::HDR_MODE_ON */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters11HDR_MODE_ONE = NULL;

/* Exported Object: android::MtkCameraParameters::ISO_SPEED_ENG */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters13ISO_SPEED_ENGE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_PANORAMA_DIR */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters16KEY_PANORAMA_DIRE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_SUPPORTED_HSVR_PRV_FPS */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters26KEY_SUPPORTED_HSVR_PRV_FPSE = NULL;

/* Exported Object: android::CameraParameters::KEY_JPEG_THUMBNAIL_QUALITY */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters26KEY_JPEG_THUMBNAIL_QUALITYE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_MSG */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters11KEY_ENG_MSGE = NULL;

/* Exported Object: android::MtkCameraParameters::PANORAMA_DIR_TOP */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters16PANORAMA_DIR_TOPE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_VIDEO_RAW_DUMP_MANUAL_FRAME_RATE_RANGE_LOW */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters50KEY_ENG_VIDEO_RAW_DUMP_MANUAL_FRAME_RATE_RANGE_LOWE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_BRIGHTNESS */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters14KEY_BRIGHTNESSE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_SATURATION */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters14KEY_SATURATIONE = NULL;

/* Exported Object: android::MtkCameraParameters::EFFECT_VALENCIA */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters15EFFECT_VALENCIAE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_STEREO_DISTANCE_MODE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters24KEY_STEREO_DISTANCE_MODEE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_VIDEO_FACE_BEAUTY_SUPPORTED */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters31KEY_VIDEO_FACE_BEAUTY_SUPPORTEDE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_LOW_LIGHT_CAPTURE_USE_PREVIEW_MODE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters38KEY_LOW_LIGHT_CAPTURE_USE_PREVIEW_MODEE = NULL;

/* Exported Object: android::CameraParameters::PIXEL_FORMAT_YUV422I */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters20PIXEL_FORMAT_YUV422IE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_3DNR_MODE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters13KEY_3DNR_MODEE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_MFB_MODE_AUTO */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters17KEY_MFB_MODE_AUTOE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_EVB_ENABLE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters18KEY_ENG_EVB_ENABLEE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_FB_SMOOTH_LEVEL */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters19KEY_FB_SMOOTH_LEVELE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_MTK_AWB_ENABLE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters22KEY_ENG_MTK_AWB_ENABLEE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_CAPTURE_ISP_GAIN */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters24KEY_ENG_CAPTURE_ISP_GAINE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_SUPPORTED_REFOCUS_PICTURE_SIZE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters34KEY_SUPPORTED_REFOCUS_PICTURE_SIZEE = NULL;

/* Exported Object: android::CameraParameters::EFFECT_SOLARIZE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters15EFFECT_SOLARIZEE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_move_backward(void*, void const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE16do_move_backwardEPvPKvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE16do_move_backwardEPvPKvm() called");
    return 0;
}

/* Exported Object: android::MtkCameraParameters::CAPTURE_MODE_CONTINUOUS_SHOT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters28CAPTURE_MODE_CONTINUOUS_SHOTE = NULL;

/* Exported Object: android::CameraParameters::WHITE_BALANCE_DAYLIGHT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters22WHITE_BALANCE_DAYLIGHTE = NULL;

/* Exported Object: android::CameraParameters::KEY_SUPPORTED_PREVIEW_SIZES */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters27KEY_SUPPORTED_PREVIEW_SIZESE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_STEREO_DENOISE_MODE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters23KEY_STEREO_DENOISE_MODEE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_HEARTBEAT_MONITOR_SUPPORTED */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters31KEY_HEARTBEAT_MONITOR_SUPPORTEDE = NULL;

/* Exported Object: android::CameraParameters::KEY_LIGHTFX */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters11KEY_LIGHTFXE = NULL;

/* Exported Object: android::CameraParameters::LIGHTFX_HDR */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters11LIGHTFX_HDRE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_EXPOSURE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters12KEY_EXPOSUREE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_SENSOR_SHADNING_SUPPORTED */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters33KEY_ENG_SENSOR_SHADNING_SUPPORTEDE = NULL;

/* Exported Object: android::CameraParameters::LIGHTFX_LOWLIGHT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters16LIGHTFX_LOWLIGHTE = NULL;

/* Exported Object: android::CameraParameters::KEY_SUPPORTED_VIDEO_SIZES */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters25KEY_SUPPORTED_VIDEO_SIZESE = NULL;

/* Exported Object: android::CameraParameters::KEY_SUPPORTED_PREVIEW_FORMATS */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters29KEY_SUPPORTED_PREVIEW_FORMATSE = NULL;

/* Exported Object: android::MtkCameraParameters::EFFECT_WALDEN */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters13EFFECT_WALDENE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_STEREO_DOF_LEVEL */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters20KEY_STEREO_DOF_LEVELE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_FLASH_STEP_MIN */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters22KEY_ENG_FLASH_STEP_MINE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_PREVIEW_AE_INDEX */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters24KEY_ENG_PREVIEW_AE_INDEXE = NULL;

/* Exported Object: android::CameraParameters::KEY_PREVIEW_FRAME_RATE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters22KEY_PREVIEW_FRAME_RATEE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_FEATURE_MAX_FPS */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters19KEY_FEATURE_MAX_FPSE = NULL;

/* Exported Object: android::MtkCameraParameters::CAPTURE_MODE_ASD_SHOT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters21CAPTURE_MODE_ASD_SHOTE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_VIDEO_HDR_RATIO */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters23KEY_ENG_VIDEO_HDR_RATIOE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_VIDEO_RAW_DUMP_MANUAL_FRAME_RATE_RANGE_HIGH */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters51KEY_ENG_VIDEO_RAW_DUMP_MANUAL_FRAME_RATE_RANGE_HIGHE = NULL;

/* Exported Object: android::CameraParameters::KEY_PREFERRED_PREVIEW_SIZE_FOR_VIDEO */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters36KEY_PREFERRED_PREVIEW_SIZE_FOR_VIDEOE = NULL;

/* Exported Object: android::MtkCameraParameters::HDR_MODE_AUTO */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters13HDR_MODE_AUTOE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_IS_SUPPORT_MZAF */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters19KEY_IS_SUPPORT_MZAFE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_BRIGHTNESS_VALUE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters20KEY_BRIGHTNESS_VALUEE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_REFOCUS_PICTURE_SIZE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters24KEY_REFOCUS_PICTURE_SIZEE = NULL;

/* Exported Object: android::CameraParameters::TRUE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters4TRUEE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_RAW_SAVE_MODE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters17KEY_RAW_SAVE_MODEE = NULL;

/* Exported Object: android::MtkCameraParameters::VIDEO_HDR_MODE_NONE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters19VIDEO_HDR_MODE_NONEE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_STEREO_CAPTURE_MODE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters23KEY_STEREO_CAPTURE_MODEE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_PREVIEW_SENSOR_GAIN */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters27KEY_ENG_PREVIEW_SENSOR_GAINE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_SHADING_TABLE_MIDDLE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters28KEY_ENG_SHADING_TABLE_MIDDLEE = NULL;

/* Exported Object: android::MtkCameraParameters::FOCUS_METER_MULTI */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters17FOCUS_METER_MULTIE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_CAPTURE_ISO */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters19KEY_ENG_CAPTURE_ISOE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_MANUAL_SENSOR_GAIN */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters26KEY_ENG_MANUAL_SENSOR_GAINE = NULL;

/* Exported Object: android::MtkCameraParameters::APP_MODE_NAME_MTK_VIDEO */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters23APP_MODE_NAME_MTK_VIDEOE = NULL;

/* Exported Object: android::MtkCameraParameters::CAPTURE_MODE_MOTION_TRACK_SHOT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters30CAPTURE_MODE_MOTION_TRACK_SHOTE = NULL;

/* Exported Object: android::CameraParameters::KEY_SUPPORTED_PICTURE_SIZES */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters27KEY_SUPPORTED_PICTURE_SIZESE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_PREVIEW_FRAME_INTERVAL_IN_US */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters36KEY_ENG_PREVIEW_FRAME_INTERVAL_IN_USE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_VIDEO_RAW_DUMP_RESIZE_TO_2M_SUPPORTED */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters45KEY_ENG_VIDEO_RAW_DUMP_RESIZE_TO_2M_SUPPORTEDE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_CAPTURE_MODE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters16KEY_CAPTURE_MODEE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_PARAMETER2 */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters18KEY_ENG_PARAMETER2E = NULL;

/* Exported Object: android::CameraParameters::KEY_VIDEO_SNAPSHOT_SUPPORTED */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters28KEY_VIDEO_SNAPSHOT_SUPPORTEDE = NULL;

/* Demangled: android::CameraParameters::getInt(char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android16CameraParameters6getIntEPKc(void) {
    ALOGD("_ZNK7android16CameraParameters6getIntEPKc() called");
    return 0;
}

/* Exported Object: android::MtkCameraParameters::KEY_AF_LAMP_MODE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters16KEY_AF_LAMP_MODEE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_FB_SKIN_COLOR */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters17KEY_FB_SKIN_COLORE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_ISP_PROFILE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters19KEY_ENG_ISP_PROFILEE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_SUPCAM_ZOOM_RATIO */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters21KEY_SUPCAM_ZOOM_RATIOE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_MTK_BACKGROUND_SERVICE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters26KEY_MTK_BACKGROUND_SERVICEE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_MANUAL_MULTI_NR_TYPE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters28KEY_ENG_MANUAL_MULTI_NR_TYPEE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_STEREO_SENSOR_INDEX_MAIN2 */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters29KEY_STEREO_SENSOR_INDEX_MAIN2E = NULL;

/* Exported Object: android::MtkCameraParameters::FRONT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters5FRONTE = NULL;

/* Demangled: android::CameraParameters::setPreviewFrameRate(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16CameraParameters19setPreviewFrameRateEi(void) {
    ALOGD("_ZN7android16CameraParameters19setPreviewFrameRateEi() called");
    return 0;
}

/* Demangled: android::CameraParameters::dump(int, android::Vector<android::String16> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android16CameraParameters4dumpEiRKNS_6VectorINS_8String16EEE(void) {
    ALOGD("_ZNK7android16CameraParameters4dumpEiRKNS_6VectorINS_8String16EEE() called");
    return 0;
}

/* Exported Object: android::MtkCameraParameters::KEY_FB_EXTREME_SUPPORTED */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters24KEY_FB_EXTREME_SUPPORTEDE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_MTK_1to3_SHADING_SUPPORTED */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters34KEY_ENG_MTK_1to3_SHADING_SUPPORTEDE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_VIDEO_RAW_DUMP_MANUAL_FRAME_RATE_SUPPORTED */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters50KEY_ENG_VIDEO_RAW_DUMP_MANUAL_FRAME_RATE_SUPPORTEDE = NULL;

/* Exported Object: android::CameraParameters::ANTIBANDING_60HZ */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters16ANTIBANDING_60HZE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_FPS_MODE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters12KEY_FPS_MODEE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_PANORAMA_IDX */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters16KEY_PANORAMA_IDXE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_VIDEO_HDR_MODE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters22KEY_ENG_VIDEO_HDR_MODEE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_CAPTURE_SHUTTER_SPEED */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters29KEY_ENG_CAPTURE_SHUTTER_SPEEDE = NULL;

/* Exported Object: android::CameraParameters::FOCUS_MODE_MACRO */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters16FOCUS_MODE_MACROE = NULL;

/* Exported Object: android::CameraParameters::WHITE_BALANCE_FLUORESCENT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters25WHITE_BALANCE_FLUORESCENTE = NULL;

/* Exported Object: android::CameraParameters::KEY_SUPPORTED_PICTURE_FORMATS */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters29KEY_SUPPORTED_PICTURE_FORMATSE = NULL;

/* Exported Object: android::MtkCameraParameters::EFFECT_F1977 */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters12EFFECT_F1977E = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ISO_SPEED */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters13KEY_ISO_SPEEDE = NULL;

/* Exported Object: android::CameraParameters::SCENE_MODE_STEADYPHOTO */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters22SCENE_MODE_STEADYPHOTOE = NULL;

/* Demangled: android::CameraParameters::getPreviewFrameRate() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android16CameraParameters19getPreviewFrameRateEv(void) {
    ALOGD("_ZNK7android16CameraParameters19getPreviewFrameRateEv() called");
    return 0;
}

/* Exported Object: android::MtkCameraParameters::ISO_SPEED_AUTO */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters14ISO_SPEED_AUTOE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_CUSTOM_HINT_2 */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters17KEY_CUSTOM_HINT_2E = NULL;

/* Exported Object: android::CameraParameters::SCENE_MODE_BEACH */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters16SCENE_MODE_BEACHE = NULL;

/* Exported Object: android::CameraParameters::WHITE_BALANCE_INCANDESCENT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters26WHITE_BALANCE_INCANDESCENTE = NULL;

/* Exported Object: android::CameraParameters::FOCUS_MODE_CONTINUOUS_PICTURE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters29FOCUS_MODE_CONTINUOUS_PICTUREE = NULL;

/* Exported Object: android::CameraParameters::KEY_FLASH_MODE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters14KEY_FLASH_MODEE = NULL;

/* Exported Object: android::CameraParameters::KEY_EXPOSURE_COMPENSATION_STEP */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters30KEY_EXPOSURE_COMPENSATION_STEPE = NULL;

/* Exported Object: android::MtkCameraParameters::PIXEL_FORMAT_RGB_888 */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters20PIXEL_FORMAT_RGB_888E = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_SHADING_TABLE_AUTO */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters26KEY_ENG_SHADING_TABLE_AUTOE = NULL;

/* Exported Object: android::MtkCameraParameters::APP_MODE_NAME_MTK_ATV */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters21APP_MODE_NAME_MTK_ATVE = NULL;

/* Exported Object: android::CameraParameters::FALSE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters5FALSEE = NULL;

/* Demangled: android::CameraParameters::CameraParameters() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16CameraParametersC1Ev(void) {
    ALOGD("_ZN7android16CameraParametersC1Ev() called");
    return 0;
}

/* Exported Object: android::MtkCameraParameters::KEY_ISP_MODE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters12KEY_ISP_MODEE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_ISP_VIDEO */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters17KEY_ENG_ISP_VIDEOE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_FLASH_STEP_DEFAULT_VALUE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters32KEY_ENG_FLASH_STEP_DEFAULT_VALUEE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_CUSTOM_HINT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters15KEY_CUSTOM_HINTE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_VSDOF_SCENARIO */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters18KEY_VSDOF_SCENARIOE = NULL;

/* Exported Object: android::MtkCameraParameters::CAPTURE_MODE_HDR_SHOT */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters21CAPTURE_MODE_HDR_SHOTE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_VIDEO_RAW_DUMP_SUPPORTED */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters32KEY_ENG_VIDEO_RAW_DUMP_SUPPORTEDE = NULL;

/* Exported Object: android::MtkCameraParameters::WHITE_BALANCE_TUNGSTEN */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters22WHITE_BALANCE_TUNGSTENE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_DUALCAM_DEVICE_STATE_IDLE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters29KEY_DUALCAM_DEVICE_STATE_IDLEE = NULL;

/* Exported Object: android::MtkCameraParameters::VAL_MTK_BACKGROUND_SERVICE_ENABLE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters33VAL_MTK_BACKGROUND_SERVICE_ENABLEE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_EIS25_MODE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters14KEY_EIS25_MODEE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_FLASH_DUTY_MAX */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters22KEY_ENG_FLASH_DUTY_MAXE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_PREVIEW_SHUTTER_SPEED */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters29KEY_ENG_PREVIEW_SHUTTER_SPEEDE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_construct(void*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE12do_constructEPvm(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE12do_constructEPvm() called");
    return 0;
}

/* Demangled: android::CameraParameters::getPreviewFpsRange(int*, int*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android16CameraParameters18getPreviewFpsRangeEPiS1_(void) {
    ALOGD("_ZNK7android16CameraParameters18getPreviewFpsRangeEPiS1_() called");
    return 0;
}

/* Demangled: android::CameraParameters::getSupportedPictureSizes(android::Vector<android::Size>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android16CameraParameters24getSupportedPictureSizesERNS_6VectorINS_4SizeEEE(void) {
    ALOGD("_ZNK7android16CameraParameters24getSupportedPictureSizesERNS_6VectorINS_4SizeEEE() called");
    return 0;
}

/* Exported Object: android::MtkCameraParameters::KEY_STEREO_3D_PICTURE_SIZE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters26KEY_STEREO_3D_PICTURE_SIZEE = NULL;

/* Exported Object: android::MtkCameraParameters::PROPERTY_KEY_CLIENT_APPMODE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters27PROPERTY_KEY_CLIENT_APPMODEE = NULL;

/* Exported Object: android::CameraParameters::KEY_SUPPORTED_EFFECTS */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters21KEY_SUPPORTED_EFFECTSE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_STEREO_3RDPARTY_SUPPORTED_MODULE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters36KEY_STEREO_3RDPARTY_SUPPORTED_MODULEE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_DYNAMIC_FRAME_RATE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters22KEY_DYNAMIC_FRAME_RATEE = NULL;

/* Exported Object: android::CameraParameters::SCENE_MODE_SUNSET */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters17SCENE_MODE_SUNSETE = NULL;

/* Demangled: android::MtkCameraParameters::setPreviewSize(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android19MtkCameraParameters14setPreviewSizeEii(void) {
    ALOGD("_ZN7android19MtkCameraParameters14setPreviewSizeEii() called");
    return 0;
}

/* Exported Object: android::MtkCameraParameters::KEY_FB_ENLARGE_EYE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters18KEY_FB_ENLARGE_EYEE = NULL;

/* Exported Object: android::MtkCameraParameters::PIXEL_FORMAT_BAYER8 */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters19PIXEL_FORMAT_BAYER8E = NULL;

/* Exported Object: android::MtkCameraParameters::EXPOSURE_METER_AVERAGE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters22EXPOSURE_METER_AVERAGEE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_CAPTURE_SENSOR_GAIN */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters27KEY_ENG_CAPTURE_SENSOR_GAINE = NULL;

/* Exported Object: android::CameraParameters::WHITE_BALANCE_SHADE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters19WHITE_BALANCE_SHADEE = NULL;

/* Exported Object: android::MtkCameraParameters::CAPTURE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters7CAPTUREE = NULL;

/* Exported Object: android::CameraParameters::ANTIBANDING_AUTO */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters16ANTIBANDING_AUTOE = NULL;

/* Exported Object: android::CameraParameters::SCENE_MODE_ACTION */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters17SCENE_MODE_ACTIONE = NULL;

/* Demangled: android::CameraParameters::CameraParameters() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16CameraParametersC2Ev(void) {
    ALOGD("_ZN7android16CameraParametersC2Ev() called");
    return 0;
}

/* Demangled: android::CameraParameters::getPreviewFormat() const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android16CameraParameters16getPreviewFormatEv(void) {
    ALOGD("_ZNK7android16CameraParameters16getPreviewFormatEv() called");
    return 0;
}

/* Exported Object: android::MtkCameraParameters::CAPTURE_MODE_FACE_BEAUTY */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters24CAPTURE_MODE_FACE_BEAUTYE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_GESTURE_SHOT_SUPPORTED */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters26KEY_GESTURE_SHOT_SUPPORTEDE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_ENG_MTK_1to3_SHADING_ENABLE */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters31KEY_ENG_MTK_1to3_SHADING_ENABLEE = NULL;

/* Exported Object: android::CameraParameters::KEY_MAX_NUM_FOCUS_AREAS */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters23KEY_MAX_NUM_FOCUS_AREASE = NULL;

/* Exported Object: android::CameraParameters::KEY_AUTO_WHITEBALANCE_LOCK */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters26KEY_AUTO_WHITEBALANCE_LOCKE = NULL;

/* Exported Object: android::MtkCameraParameters::KEY_AWB2PASS */
extern "C" __attribute__((visibility("default"))) void* _ZN7android19MtkCameraParameters12KEY_AWB2PASSE = NULL;

/* Exported Object: android::CameraParameters::KEY_ROTATION */
extern "C" __attribute__((visibility("default"))) void* _ZN7android16CameraParameters12KEY_ROTATIONE = NULL;
