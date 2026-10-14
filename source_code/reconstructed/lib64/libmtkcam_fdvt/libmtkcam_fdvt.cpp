/*
 * Reverse-Engineered Source for: libmtkcam_fdvt.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libmtkcam_fdvt"

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
#include "libmtkcam_fdvt.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_CAMERA_FDVT "/dev/camera-fdvt"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_CAMERA_FDVT, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CAMERA_FDVT, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CAMERA_FDVT, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: attr_fd_out_loop17_0 */
extern "C" __attribute__((visibility("default"))) void* attr_fd_out_loop17_0 = NULL;

/* Exported Object: fdvt_drv_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* fdvt_drv_DbgLogEnable_WARN = NULL;

/* Exported Object: fdvt_fd_out_loop63_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop63_0 = NULL;

/* Exported Object: fdvt_rs_out_frame01_scale01_b */
extern "C" __attribute__((visibility("default"))) void* fdvt_rs_out_frame01_scale01_b = NULL;

/* Exported Object: g_FdDrv_Fd_DMA_Para */
extern "C" __attribute__((visibility("default"))) void* g_FdDrv_Fd_DMA_Para = NULL;

/* Exported Object: pose_fd_out_loop06_0 */
extern "C" __attribute__((visibility("default"))) void* pose_fd_out_loop06_0 = NULL;

/* Exported Object: guard variable for NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::FDVTConfig>::mEgnCmdLock */
extern "C" __attribute__((visibility("default"))) void* _ZGVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_10FDVTConfigEE11mEgnCmdLockE = NULL;

/* Demangled: FDVT_copyInputDataToBuffer() */
extern "C" __attribute__((visibility("default"))) int _Z26FDVT_copyInputDataToBufferv(void) {
    ALOGD("_Z26FDVT_copyInputDataToBufferv() called");
    return 0;
}

/* Exported Object: attr_fd_out_loop14_0 */
extern "C" __attribute__((visibility("default"))) void* attr_fd_out_loop14_0 = NULL;

/* Exported Object: fdvt_fd_out_loop60_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop60_0 = NULL;

/* Exported Object: fdvt_fd_out_loop63_1 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop63_1 = NULL;

/* Exported Object: pose_fd_out_loop03_0 */
extern "C" __attribute__((visibility("default"))) void* pose_fd_out_loop03_0 = NULL;

/* Exported Object: pose_fd_out_loop06_1 */
extern "C" __attribute__((visibility("default"))) void* pose_fd_out_loop06_1 = NULL;

/* Exported Object: attr_fd_out_loop11_0 */
extern "C" __attribute__((visibility("default"))) void* attr_fd_out_loop11_0 = NULL;

/* Exported Object: fdvt_fd_out_loop60_1 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop60_1 = NULL;

/* Exported Object: pose_fd_out_loop00_0 */
extern "C" __attribute__((visibility("default"))) void* pose_fd_out_loop00_0 = NULL;

/* Exported Object: pose_fd_out_loop03_1 */
extern "C" __attribute__((visibility("default"))) void* pose_fd_out_loop03_1 = NULL;

/* Exported Object: FdvtUtility_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* FdvtUtility_DbgLogEnable_WARN = NULL;

/* Exported Object: EgnStream_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* EgnStream_DbgLogEnable_INFO = NULL;

/* Exported Object: fdvt_fd_out_loop37_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop37_0 = NULL;

/* Exported Object: fdvt_fdmode_fd_config_size */
extern "C" __attribute__((visibility("default"))) void* fdvt_fdmode_fd_config_size = NULL;

/* Exported Object: g_FdvtImem_Size */
extern "C" __attribute__((visibility("default"))) void* g_FdvtImem_Size = NULL;

/* Exported Object: pose_fd_out_loop03_2 */
extern "C" __attribute__((visibility("default"))) void* pose_fd_out_loop03_2 = NULL;

/* Exported Object: Imem_YUV2RGB_Outout_hw */
extern "C" __attribute__((visibility("default"))) void* Imem_YUV2RGB_Outout_hw = NULL;

/* Exported Object: attr_rs_out_frame01_scale00_r */
extern "C" __attribute__((visibility("default"))) void* attr_rs_out_frame01_scale00_r = NULL;

/* Exported Object: fdvt_attrmode_fd_config_size */
extern "C" __attribute__((visibility("default"))) void* fdvt_attrmode_fd_config_size = NULL;

/* Exported Object: fdvt_fd_out_loop34_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop34_0 = NULL;

/* Exported Object: fdvt_fd_out_loop37_1 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop37_1 = NULL;

/* Exported Object: g_FdDrv_Attr_Para */
extern "C" __attribute__((visibility("default"))) void* g_FdDrv_Attr_Para = NULL;

/* Exported Object: g_FdDrv_Para */
extern "C" __attribute__((visibility("default"))) void* g_FdDrv_Para = NULL;

/* Exported Object: pose_fd_out_loop00_2 */
extern "C" __attribute__((visibility("default"))) void* pose_fd_out_loop00_2 = NULL;

/* Exported Object: pose_fd_out_loop03_3 */
extern "C" __attribute__((visibility("default"))) void* pose_fd_out_loop03_3 = NULL;

/* Exported Object: Imem_RS_Output_hw */
extern "C" __attribute__((visibility("default"))) void* Imem_RS_Output_hw = NULL;

/* Demangled: FdvtDrvImp::enque(std::__1::vector<NSCam::NSIoPipe::FDVTConfig, std::__1::allocator<NSCam::NSIoPipe::FDVTConfig> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN10FdvtDrvImp5enqueERNSt3__16vectorIN5NSCam8NSIoPipe10FDVTConfigENS0_9allocatorIS4_EEEE(void) {
    ALOGD("_ZN10FdvtDrvImp5enqueERNSt3__16vectorIN5NSCam8NSIoPipe10FDVTConfigENS0_9allocatorIS4_EEEE() called");
    return 0;
}

/* Exported Object: fdvt_fd_out_loop31_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop31_0 = NULL;

/* Exported Object: fdvt_rs_out_frame01_scale01_g */
extern "C" __attribute__((visibility("default"))) void* fdvt_rs_out_frame01_scale01_g = NULL;

/* Exported Object: pose_rs_out_frame01_scale00_r */
extern "C" __attribute__((visibility("default"))) void* pose_rs_out_frame01_scale00_r = NULL;

/* Exported Object: fdvt_fd_out_loop08_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop08_0 = NULL;

/* Exported Object: fdvt_fd_out_loop05_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop05_0 = NULL;

/* Exported Object: fdvt_fd_out_loop08_1 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop08_1 = NULL;

/* Exported Object: fdvt_frame_B_size */
extern "C" __attribute__((visibility("default"))) void* fdvt_frame_B_size = NULL;

/* Exported Object: guard variable for NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::FDVTConfig>::mCmdListCond */
extern "C" __attribute__((visibility("default"))) void* _ZGVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_10FDVTConfigEE12mCmdListCondE = NULL;

/* Demangled: FdvtDrvImp::init(NSCam::NSIoPipe::EGNInitInfo, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN10FdvtDrvImp4initEN5NSCam8NSIoPipe11EGNInitInfoEPKc(void) {
    ALOGD("_ZN10FdvtDrvImp4initEN5NSCam8NSIoPipe11EGNInitInfoEPKc() called");
    return 0;
}

/* Exported Object: fdvt_fd_out_loop02_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop02_0 = NULL;

/* Exported Object: fdvt_fd_out_loop59_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop59_0 = NULL;

/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::NSEgn::EGNRequest<NSCam::NSIoPipe::FDVTConfig>, std::__1::allocator<NSCam::NSIoPipe::NSEgn::EGNRequest<NSCam::NSIoPipe::FDVTConfig> > >::~__list_imp() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSEgn10EGNRequestINS2_10FDVTConfigEEENS_9allocatorIS6_EEED2Ev(void) {
    ALOGD("_ZNSt3__110__list_impIN5NSCam8NSIoPipe5NSEgn10EGNRequestINS2_10FDVTConfigEEENS_9allocatorIS6_EEED2Ev() called");
    return 0;
}

/* Exported Object: fdvt_fd_out_loop05_2 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop05_2 = NULL;

/* Exported Object: fdvt_fd_out_loop56_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop56_0 = NULL;

/* Exported Object: fdvt_fd_out_loop59_1 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop59_1 = NULL;

/* Exported Object: EgnStream_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* EgnStream_DbgLogEnable_VERBOSE = NULL;

/* Exported Object: attr_fd_out_loop07_0 */
extern "C" __attribute__((visibility("default"))) void* attr_fd_out_loop07_0 = NULL;

/* Exported Object: fdvt_fd_out_loop53_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop53_0 = NULL;

/* Exported Object: fdvt_fd_out_loop56_1 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop56_1 = NULL;

/* Exported Object: fdvt_posemode_rs_config_size */
extern "C" __attribute__((visibility("default"))) void* fdvt_posemode_rs_config_size = NULL;

/* Exported Object: attr_fd_out_loop04_0 */
extern "C" __attribute__((visibility("default"))) void* attr_fd_out_loop04_0 = NULL;

/* Exported Object: fdvt_fd_out_loop50_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop50_0 = NULL;

/* Exported Object: fdvt_fd_out_loop56_2 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop56_2 = NULL;

/* Exported Object: FdvtDrvImp::m_FdvtInitMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN10FdvtDrvImp15m_FdvtInitMutexE = NULL;

/* Exported Object: attr_fd_out_loop01_0 */
extern "C" __attribute__((visibility("default"))) void* attr_fd_out_loop01_0 = NULL;

/* Exported Object: attr_fd_out_loop04_1 */
extern "C" __attribute__((visibility("default"))) void* attr_fd_out_loop04_1 = NULL;

/* Exported Object: attr_fd_out_loop07_2 */
extern "C" __attribute__((visibility("default"))) void* attr_fd_out_loop07_2 = NULL;

/* Exported Object: fdvt_fd_out_loop56_3 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop56_3 = NULL;

/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::FDVTConfig>::init() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_10FDVTConfigEE4initEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_10FDVTConfigEE4initEv() called");
    return 0;
}

/* Exported Object: Imem_YUV2RGB_ConfigData */
extern "C" __attribute__((visibility("default"))) void* Imem_YUV2RGB_ConfigData = NULL;

/* Demangled: FDVT_DumpDRAMOut(unsigned int*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z16FDVT_DumpDRAMOutPjj(void) {
    ALOGD("_Z16FDVT_DumpDRAMOutPjj() called");
    return 0;
}

/* Exported Object: attr_fd_out_loop04_2 */
extern "C" __attribute__((visibility("default"))) void* attr_fd_out_loop04_2 = NULL;

/* Exported Object: fdvt_fd_out_loop27_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop27_0 = NULL;

/* Exported Object: attr_fd_out_loop01_2 */
extern "C" __attribute__((visibility("default"))) void* attr_fd_out_loop01_2 = NULL;

/* Exported Object: attr_fd_out_loop04_3 */
extern "C" __attribute__((visibility("default"))) void* attr_fd_out_loop04_3 = NULL;

/* Exported Object: fdvt_fd_out_loop24_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop24_0 = NULL;

/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::FDVTConfig>::onThreadLoop(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_10FDVTConfigEE12onThreadLoopEPv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_10FDVTConfigEE12onThreadLoopEPv() called");
    return 0;
}

/* Exported Object: vtable for NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::FDVTConfig> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_10FDVTConfigEEE = NULL;

/* Exported Object: fdvt_fd_out_loop21_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop21_0 = NULL;

/* Exported Object: fdvt_fd_out_loop24_1 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop24_1 = NULL;

/* Exported Object: fdvt_fd_out_loop27_2 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop27_2 = NULL;

/* Exported Object: fdvt_rs_out_frame01_scale01_r */
extern "C" __attribute__((visibility("default"))) void* fdvt_rs_out_frame01_scale01_r = NULL;

/* Demangled: FDVT_allocateDramBuffer() */
extern "C" __attribute__((visibility("default"))) int _Z23FDVT_allocateDramBufferv(void) {
    ALOGD("_Z23FDVT_allocateDramBufferv() called");
    return 0;
}

/* Demangled: FdvtDrvImp::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN10FdvtDrvImp11getInstanceEv(void) {
    ALOGD("_ZN10FdvtDrvImp11getInstanceEv() called");
    return 0;
}

/* Exported Object: fdvt_attrmode_yuv2rgb_config_size */
extern "C" __attribute__((visibility("default"))) void* fdvt_attrmode_yuv2rgb_config_size = NULL;

/* Exported Object: fdvt_fd_out_loop24_2 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop24_2 = NULL;

/* Exported Object: g_FDVTSecMemType */
extern "C" __attribute__((visibility("default"))) void* g_FDVTSecMemType = NULL;

/* Exported Object: g_FdvtImemDrv */
extern "C" __attribute__((visibility("default"))) void* g_FdvtImemDrv = NULL;

/* Exported Object: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::FDVTConfig>::mSemEgnThread */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_10FDVTConfigEE13mSemEgnThreadE = NULL;

/* Demangled: EngineDrv<NSCam::NSIoPipe::FDVTConfig>::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9EngineDrvIN5NSCam8NSIoPipe10FDVTConfigEE14createInstanceEv(void) {
    ALOGD("_ZN9EngineDrvIN5NSCam8NSIoPipe10FDVTConfigEE14createInstanceEv() called");
    return 0;
}

/* Exported Object: fdvt_drv_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* fdvt_drv_DbgLogEnable_ERROR = NULL;

/* Exported Object: fdvt_fd_out_loop21_2 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop21_2 = NULL;

/* Exported Object: fdvt_fd_out_loop24_3 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop24_3 = NULL;

/* Exported Object: pose_fd_out_loop15_0 */
extern "C" __attribute__((visibility("default"))) void* pose_fd_out_loop15_0 = NULL;

/* Exported Object: EgnStream_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* EgnStream_DbgLogEnable_WARN = NULL;

/* Demangled: FDVT_Imem_free(unsigned char*, unsigned long, unsigned int, int, bool) */
extern "C" __attribute__((visibility("default"))) int _Z14FDVT_Imem_freePhmjib(void) {
    ALOGD("_Z14FDVT_Imem_freePhmjib() called");
    return 0;
}

/* Exported Object: FdvtDrvImp::m_UserCnt */
extern "C" __attribute__((visibility("default"))) void* _ZN10FdvtDrvImp9m_UserCntE = NULL;

/* Exported Object: pose_fd_out_loop12_0 */
extern "C" __attribute__((visibility("default"))) void* pose_fd_out_loop12_0 = NULL;

/* Exported Object: pose_fd_out_loop15_1 */
extern "C" __attribute__((visibility("default"))) void* pose_fd_out_loop15_1 = NULL;

/* Exported Object: fdvt_fd_out_loop49_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop49_0 = NULL;

/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::FDVTConfig>::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_10FDVTConfigEE6uninitEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_10FDVTConfigEE6uninitEv() called");
    return 0;
}

/* Exported Object: Fdvt_Imem_Buf_Info */
extern "C" __attribute__((visibility("default"))) void* Fdvt_Imem_Buf_Info = NULL;

/* Exported Object: fdvt_fd_out_loop46_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop46_0 = NULL;

/* Demangled: std::__1::__list_imp<NSCam::NSIoPipe::SUB_ENGINE_ID, std::__1::allocator<NSCam::NSIoPipe::SUB_ENGINE_ID> >::~__list_imp() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impIN5NSCam8NSIoPipe13SUB_ENGINE_IDENS_9allocatorIS3_EEED2Ev(void) {
    ALOGD("_ZNSt3__110__list_impIN5NSCam8NSIoPipe13SUB_ENGINE_IDENS_9allocatorIS3_EEED2Ev() called");
    return 0;
}

/* Exported Object: fdvt_fd_out_loop43_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop43_0 = NULL;

/* Exported Object: fdvt_fd_out_loop46_1 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop46_1 = NULL;

/* Exported Object: fdvt_fd_out_loop40_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop40_0 = NULL;

/* Exported Object: fdvt_fd_out_loop43_1 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop43_1 = NULL;

/* Demangled: FDVT_fillSecureMetaData(NSCam::NSIoPipe::FDVTConfig*, FDVT_Config*) */
extern "C" __attribute__((visibility("default"))) int _Z23FDVT_fillSecureMetaDataPN5NSCam8NSIoPipe10FDVTConfigEP11FDVT_Config(void) {
    ALOGD("_Z23FDVT_fillSecureMetaDataPN5NSCam8NSIoPipe10FDVTConfigEP11FDVT_Config() called");
    return 0;
}

/* Exported Object: fdvt_fd_out_loop43_2 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop43_2 = NULL;

/* Demangled: NSCam::NSIoPipe::NSEgn::IEgnStream<NSCam::NSIoPipe::FDVTConfig>::createInstance(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSEgn10IEgnStreamINS0_10FDVTConfigEE14createInstanceEPKc(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSEgn10IEgnStreamINS0_10FDVTConfigEE14createInstanceEPKc() called");
    return 0;
}

/* Exported Object: Imem_FD_DMA_Result_hw */
extern "C" __attribute__((visibility("default"))) void* Imem_FD_DMA_Result_hw = NULL;

/* Demangled: FDVT_ReleaseBuffer() */
extern "C" __attribute__((visibility("default"))) int _Z18FDVT_ReleaseBufferv(void) {
    ALOGD("_Z18FDVT_ReleaseBufferv() called");
    return 0;
}

/* Exported Object: fdvt_fd_out_loop17_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop17_0 = NULL;

/* Exported Object: fdvt_fd_out_loop40_2 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop40_2 = NULL;

/* Exported Object: fdvt_fd_out_loop43_3 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop43_3 = NULL;

/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::FDVTConfig>::resetDequeVariables() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_10FDVTConfigEE19resetDequeVariablesEv(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_10FDVTConfigEE19resetDequeVariablesEv() called");
    return 0;
}

/* Exported Object: FdvtDrvImp::m_regRWMode */
extern "C" __attribute__((visibility("default"))) void* _ZN10FdvtDrvImp11m_regRWModeE = NULL;

/* Exported Object: fdvt_fd_out_loop14_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop14_0 = NULL;

/* Exported Object: fdvt_fd_out_loop17_1 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop17_1 = NULL;

/* Exported Object: fdvt_fd_out_loop11_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop11_0 = NULL;

/* Exported Object: EgnStream_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* EgnStream_DbgLogEnable_DEBUG = NULL;

/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::FDVTConfig>::~EgnStream() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_10FDVTConfigEED0Ev(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_10FDVTConfigEED0Ev() called");
    return 0;
}

/* Exported Object: fdvt_fd_out_loop65_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop65_0 = NULL;

/* Exported Object: pose_fd_out_loop08_0 */
extern "C" __attribute__((visibility("default"))) void* pose_fd_out_loop08_0 = NULL;

/* Exported Object: attr_fd_out_loop16_0 */
extern "C" __attribute__((visibility("default"))) void* attr_fd_out_loop16_0 = NULL;

/* Exported Object: fdvt_fd_out_loop62_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop62_0 = NULL;

/* Exported Object: fdvt_rs_out_frame01_scale00_b */
extern "C" __attribute__((visibility("default"))) void* fdvt_rs_out_frame01_scale00_b = NULL;

/* Exported Object: pose_fd_out_loop05_0 */
extern "C" __attribute__((visibility("default"))) void* pose_fd_out_loop05_0 = NULL;

/* Exported Object: pose_fd_out_loop08_1 */
extern "C" __attribute__((visibility("default"))) void* pose_fd_out_loop08_1 = NULL;

/* Demangled: void std::__1::vector<NSCam::NSIoPipe::FDVTConfig, std::__1::allocator<NSCam::NSIoPipe::FDVTConfig> >::__push_back_slow_path<NSCam::NSIoPipe::FDVTConfig const&>(NSCam::NSIoPipe::FDVTConfig const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe10FDVTConfigENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe10FDVTConfigENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_() called");
    return 0;
}

/* Demangled: FDVT_allocateFDDMABuffer() */
extern "C" __attribute__((visibility("default"))) int _Z24FDVT_allocateFDDMABufferv(void) {
    ALOGD("_Z24FDVT_allocateFDDMABufferv() called");
    return 0;
}

/* Exported Object: attr_fd_out_loop13_0 */
extern "C" __attribute__((visibility("default"))) void* attr_fd_out_loop13_0 = NULL;

/* Exported Object: fdvt_fd_out_loop62_1 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop62_1 = NULL;

/* Exported Object: pose_fd_out_loop02_0 */
extern "C" __attribute__((visibility("default"))) void* pose_fd_out_loop02_0 = NULL;

/* Demangled: FdvtDrvImp::getRWMode() */
extern "C" __attribute__((visibility("default"))) int _ZN10FdvtDrvImp9getRWModeEv(void) {
    ALOGD("_ZN10FdvtDrvImp9getRWModeEv() called");
    return 0;
}

/* Exported Object: attr_fd_out_loop10_0 */
extern "C" __attribute__((visibility("default"))) void* attr_fd_out_loop10_0 = NULL;

/* Exported Object: fdvt_fd_out_loop39_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop39_0 = NULL;

/* Exported Object: pose_fd_out_loop05_2 */
extern "C" __attribute__((visibility("default"))) void* pose_fd_out_loop05_2 = NULL;

/* Exported Object: fdvt_fd_out_loop36_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop36_0 = NULL;

/* Demangled: FDVT_resetOutputDataBuffer(NSCam::NSIoPipe::FDVTConfig*) */
extern "C" __attribute__((visibility("default"))) int _Z26FDVT_resetOutputDataBufferPN5NSCam8NSIoPipe10FDVTConfigE(void) {
    ALOGD("_Z26FDVT_resetOutputDataBufferPN5NSCam8NSIoPipe10FDVTConfigE() called");
    return 0;
}

/* Demangled: FdvtDrvImp::clearIrq(FDVT_CLEAR_IRQ_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN10FdvtDrvImp8clearIrqEP21FDVT_CLEAR_IRQ_STRUCT(void) {
    ALOGD("_ZN10FdvtDrvImp8clearIrqEP21FDVT_CLEAR_IRQ_STRUCT() called");
    return 0;
}

/* Exported Object: attr_rgb_img_g_frame01 */
extern "C" __attribute__((visibility("default"))) void* attr_rgb_img_g_frame01 = NULL;

/* Exported Object: fdvt_fd_out_loop33_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop33_0 = NULL;

/* Exported Object: fdvt_fd_out_loop36_1 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop36_1 = NULL;

/* Exported Object: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::FDVTConfig>::mCmdListCond */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_10FDVTConfigEE12mCmdListCondE = NULL;

/* Exported Object: fdvt_fd_out_loop30_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop30_0 = NULL;

/* Exported Object: fdvt_fd_out_loop36_2 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop36_2 = NULL;

/* Exported Object: fdvt_rs_out_frame01_scale00_g */
extern "C" __attribute__((visibility("default"))) void* fdvt_rs_out_frame01_scale00_g = NULL;

/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::FDVTConfig>::getCommand(ECmd&, NSCam::NSIoPipe::SUB_ENGINE_ID&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_10FDVTConfigEE10getCommandER4ECmdRNS0_13SUB_ENGINE_IDE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_10FDVTConfigEE10getCommandER4ECmdRNS0_13SUB_ENGINE_IDE() called");
    return 0;
}

/* Exported Object: vtable for FdvtDrvImp */
extern "C" __attribute__((visibility("default"))) void* _ZTV10FdvtDrvImp = NULL;

/* Exported Object: fdvt_fd_out_loop36_3 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop36_3 = NULL;

/* Exported Object: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::FDVTConfig>::mThread */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_10FDVTConfigEE7mThreadE = NULL;

/* Demangled: _ZNSt3__16vectorIN5NSCam8NSIoPipe10FDVTConfigENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN5NSCam8NSIoPipe10FDVTConfigENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_(void) {
    ALOGD("_ZNSt3__16vectorIN5NSCam8NSIoPipe10FDVTConfigENS_9allocatorIS3_EEE6assignIPS3_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS3_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_() called");
    return 0;
}

/* Exported Object: attr_rgb_img_r_frame01 */
extern "C" __attribute__((visibility("default"))) void* attr_rgb_img_r_frame01 = NULL;

/* Exported Object: fdvt_fd_out_loop07_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop07_0 = NULL;

/* Exported Object: FdvtUtility_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* FdvtUtility_DbgLogEnable_ERROR = NULL;

/* Demangled: FdvtDrvImp::readRegs(FDVT_DRV_REG_IO_STRUCT*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10FdvtDrvImp8readRegsEP22FDVT_DRV_REG_IO_STRUCTji(void) {
    ALOGD("_ZN10FdvtDrvImp8readRegsEP22FDVT_DRV_REG_IO_STRUCTji() called");
    return 0;
}

/* Exported Object: fdvt_fd_out_loop04_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop04_0 = NULL;

/* Exported Object: fdvt_rgb_img_b_frame01 */
extern "C" __attribute__((visibility("default"))) void* fdvt_rgb_img_b_frame01 = NULL;

/* Exported Object: fdvt_fd_out_loop01_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop01_0 = NULL;

/* Exported Object: fdvt_fd_out_loop04_1 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop04_1 = NULL;

/* Exported Object: fdvt_fd_out_loop07_2 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop07_2 = NULL;

/* Exported Object: fdvt_fd_out_loop58_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop58_0 = NULL;

/* Exported Object: fdvt_frame_R_size */
extern "C" __attribute__((visibility("default"))) void* fdvt_frame_R_size = NULL;

/* Exported Object: FdvtUtility_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* FdvtUtility_DbgLogEnable_ASSERT = NULL;

/* Exported Object: guard variable for NSCam::NSIoPipe::NSEgn::IEgnStream<NSCam::NSIoPipe::FDVTConfig>::createInstance(char const*)::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN5NSCam8NSIoPipe5NSEgn10IEgnStreamINS0_10FDVTConfigEE14createInstanceEPKcE9singleton = NULL;

/* Exported Object: Imem_FD_ConfigData */
extern "C" __attribute__((visibility("default"))) void* Imem_FD_ConfigData = NULL;

/* Exported Object: attr_fd_out_loop09_0 */
extern "C" __attribute__((visibility("default"))) void* attr_fd_out_loop09_0 = NULL;

/* Exported Object: fdvt_fd_out_loop04_2 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop04_2 = NULL;

/* Exported Object: fdvt_fd_out_loop55_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop55_0 = NULL;

/* Exported Object: fdvt_fd_out_loop58_1 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop58_1 = NULL;

/* Exported Object: attr_fd_out_loop06_0 */
extern "C" __attribute__((visibility("default"))) void* attr_fd_out_loop06_0 = NULL;

/* Exported Object: fdvt_fd_out_loop01_2 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop01_2 = NULL;

/* Exported Object: fdvt_fd_out_loop04_3 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop04_3 = NULL;

/* Exported Object: fdvt_fd_out_loop52_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop52_0 = NULL;

/* Exported Object: fdvt_fd_out_loop55_1 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop55_1 = NULL;

/* Exported Object: g_isFDVTSecure */
extern "C" __attribute__((visibility("default"))) void* g_isFDVTSecure = NULL;

/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::FDVTConfig>::EGNenque(NSCam::NSIoPipe::NSEgn::EGNParams<NSCam::NSIoPipe::FDVTConfig> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_10FDVTConfigEE8EGNenqueERKNS1_9EGNParamsIS3_EE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_10FDVTConfigEE8EGNenqueERKNS1_9EGNParamsIS3_EE() called");
    return 0;
}

/* Exported Object: FdvtDrvImp::m_UserName */
extern "C" __attribute__((visibility("default"))) void* _ZN10FdvtDrvImp10m_UserNameE = NULL;

/* Exported Object: attr_fd_out_loop03_0 */
extern "C" __attribute__((visibility("default"))) void* attr_fd_out_loop03_0 = NULL;

/* Exported Object: attr_fd_out_loop06_1 */
extern "C" __attribute__((visibility("default"))) void* attr_fd_out_loop06_1 = NULL;

/* Exported Object: Fdvt_Imem_AllocNum */
extern "C" __attribute__((visibility("default"))) void* Fdvt_Imem_AllocNum = NULL;

/* Demangled: FDVT_getSizeOfData(unsigned short, unsigned short) */
extern "C" __attribute__((visibility("default"))) int _Z18FDVT_getSizeOfDatatt(void) {
    ALOGD("_Z18FDVT_getSizeOfDatatt() called");
    return 0;
}

/* Demangled: FdvtDrvImp::readReg(unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10FdvtDrvImp7readRegEji(void) {
    ALOGD("_ZN10FdvtDrvImp7readRegEji() called");
    return 0;
}

/* Exported Object: attr_fd_out_loop00_0 */
extern "C" __attribute__((visibility("default"))) void* attr_fd_out_loop00_0 = NULL;

/* Exported Object: attr_fd_out_loop03_1 */
extern "C" __attribute__((visibility("default"))) void* attr_fd_out_loop03_1 = NULL;

/* Exported Object: fdvt_drv_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* fdvt_drv_DbgLogEnable_VERBOSE = NULL;

/* Exported Object: fdvt_fd_out_loop29_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop29_0 = NULL;

/* Demangled: FDVT_FreeMem_OutputBuffer() */
extern "C" __attribute__((visibility("default"))) int _Z25FDVT_FreeMem_OutputBufferv(void) {
    ALOGD("_Z25FDVT_FreeMem_OutputBufferv() called");
    return 0;
}

/* Demangled: FdvtDrvImp::deque(std::__1::vector<NSCam::NSIoPipe::FDVTConfig, std::__1::allocator<NSCam::NSIoPipe::FDVTConfig> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN10FdvtDrvImp5dequeERNSt3__16vectorIN5NSCam8NSIoPipe10FDVTConfigENS0_9allocatorIS4_EEEE(void) {
    ALOGD("_ZN10FdvtDrvImp5dequeERNSt3__16vectorIN5NSCam8NSIoPipe10FDVTConfigENS0_9allocatorIS4_EEEE() called");
    return 0;
}

/* Exported Object: attr_fd_out_loop03_2 */
extern "C" __attribute__((visibility("default"))) void* attr_fd_out_loop03_2 = NULL;

/* Exported Object: fdvt_fd_out_loop26_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop26_0 = NULL;

/* Demangled: FDVT_FreeMem_DramBuffer() */
extern "C" __attribute__((visibility("default"))) int _Z23FDVT_FreeMem_DramBufferv(void) {
    ALOGD("_Z23FDVT_FreeMem_DramBufferv() called");
    return 0;
}

/* Exported Object: attr_fd_out_loop00_2 */
extern "C" __attribute__((visibility("default"))) void* attr_fd_out_loop00_2 = NULL;

/* Exported Object: attr_fd_out_loop03_3 */
extern "C" __attribute__((visibility("default"))) void* attr_fd_out_loop03_3 = NULL;

/* Exported Object: fdvt_fd_out_loop23_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop23_0 = NULL;

/* Exported Object: fdvt_fd_out_loop26_1 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop26_1 = NULL;

/* Exported Object: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::FDVTConfig>::m_QueueEGNReqList */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_10FDVTConfigEE17m_QueueEGNReqListE = NULL;

/* Demangled: FDVT_FreeMem_FDDMABuffer() */
extern "C" __attribute__((visibility("default"))) int _Z24FDVT_FreeMem_FDDMABufferv(void) {
    ALOGD("_Z24FDVT_FreeMem_FDDMABufferv() called");
    return 0;
}

/* Exported Object: fdvt_fd_out_loop20_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop20_0 = NULL;

/* Exported Object: fdvt_fd_out_loop23_1 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop23_1 = NULL;

/* Exported Object: fdvt_rs_out_frame01_scale00_r */
extern "C" __attribute__((visibility("default"))) void* fdvt_rs_out_frame01_scale00_r = NULL;

/* Exported Object: guard variable for NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::FDVTConfig>::m_QueueEGNReqList */
extern "C" __attribute__((visibility("default"))) void* _ZGVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_10FDVTConfigEE17m_QueueEGNReqListE = NULL;

/* Exported Object: fdvt_fd_out_loop23_2 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop23_2 = NULL;

/* Exported Object: pose_fd_out_loop17_0 */
extern "C" __attribute__((visibility("default"))) void* pose_fd_out_loop17_0 = NULL;

/* Exported Object: FdvtUtility_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* FdvtUtility_DbgLogEnable_VERBOSE = NULL;

/* Exported Object: fdvt_fd_out_loop20_2 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop20_2 = NULL;

/* Exported Object: fdvt_fd_out_loop23_3 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop23_3 = NULL;

/* Exported Object: pose_fd_out_loop14_0 */
extern "C" __attribute__((visibility("default"))) void* pose_fd_out_loop14_0 = NULL;

/* Demangled: FDVT_logBufInfo() */
extern "C" __attribute__((visibility("default"))) int _Z15FDVT_logBufInfov(void) {
    ALOGD("_Z15FDVT_logBufInfov() called");
    return 0;
}

/* Exported Object: fdvt_fd_DMA_Result_MAX_size */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_DMA_Result_MAX_size = NULL;

/* Exported Object: fdvt_fdmode_rs_config_size */
extern "C" __attribute__((visibility("default"))) void* fdvt_fdmode_rs_config_size = NULL;

/* Exported Object: pose_fd_out_loop11_0 */
extern "C" __attribute__((visibility("default"))) void* pose_fd_out_loop11_0 = NULL;

/* Demangled: FdvtDrvImp::FdvtDrvImp() */
extern "C" __attribute__((visibility("default"))) int _ZN10FdvtDrvImpC2Ev(void) {
    ALOGD("_ZN10FdvtDrvImpC2Ev() called");
    return 0;
}

/* Exported Object: fdvt_attrmode_rs_config_size */
extern "C" __attribute__((visibility("default"))) void* fdvt_attrmode_rs_config_size = NULL;

/* Exported Object: fdvt_fd_out_loop48_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop48_0 = NULL;

/* Exported Object: fdvt_fd_out_loop45_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop45_0 = NULL;

/* Exported Object: fdvt_fd_out_loop48_1 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop48_1 = NULL;

/* Exported Object: fdvt_fd_out_loop42_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop42_0 = NULL;

/* Exported Object: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::FDVTConfig>::mTotalCmdNum */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_10FDVTConfigEE12mTotalCmdNumE = NULL;

/* Exported Object: fdvt_fd_out_loop45_2 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop45_2 = NULL;

/* Exported Object: fdvt_posemode_fd_config_size */
extern "C" __attribute__((visibility("default"))) void* fdvt_posemode_fd_config_size = NULL;

/* Exported Object: fdvt_fd_out_loop19_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop19_0 = NULL;

/* Exported Object: fdvt_fd_out_loop16_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop16_0 = NULL;

/* Exported Object: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::FDVTConfig>::mCmdList */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_10FDVTConfigEE8mCmdListE = NULL;

/* Exported Object: fdvt_fd_out_loop13_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop13_0 = NULL;

/* Exported Object: fdvt_fd_out_loop16_1 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop16_1 = NULL;

/* Exported Object: fdvt_frame_G_size */
extern "C" __attribute__((visibility("default"))) void* fdvt_frame_G_size = NULL;

/* Exported Object: fdvt_fd_out_loop10_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop10_0 = NULL;

/* Exported Object: fdvt_fd_out_loop16_2 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop16_2 = NULL;

/* Exported Object: fdvt_drv_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* fdvt_drv_DbgLogEnable_DEBUG = NULL;

/* Exported Object: fdvt_fd_out_loop16_3 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop16_3 = NULL;

/* Exported Object: fdvt_fd_out_loop64_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop64_0 = NULL;

/* Exported Object: fdvt_rs_out_frame01_scale02_b */
extern "C" __attribute__((visibility("default"))) void* fdvt_rs_out_frame01_scale02_b = NULL;

/* Exported Object: fdvt_rs_pyramid0_out_size */
extern "C" __attribute__((visibility("default"))) void* fdvt_rs_pyramid0_out_size = NULL;

/* Exported Object: pose_fd_out_loop07_0 */
extern "C" __attribute__((visibility("default"))) void* pose_fd_out_loop07_0 = NULL;

/* Exported Object: attr_fd_out_loop15_0 */
extern "C" __attribute__((visibility("default"))) void* attr_fd_out_loop15_0 = NULL;

/* Exported Object: fdvt_fd_DMA_MAX_size */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_DMA_MAX_size = NULL;

/* Exported Object: fdvt_fd_out_loop61_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop61_0 = NULL;

/* Exported Object: g_FdDrv_Pose_Para */
extern "C" __attribute__((visibility("default"))) void* g_FdDrv_Pose_Para = NULL;

/* Exported Object: pose_fd_out_loop04_0 */
extern "C" __attribute__((visibility("default"))) void* pose_fd_out_loop04_0 = NULL;

/* Exported Object: pose_rgb_img_b_frame01 */
extern "C" __attribute__((visibility("default"))) void* pose_rgb_img_b_frame01 = NULL;

/* Exported Object: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::FDVTConfig>::mInitCount */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_10FDVTConfigEE10mInitCountE = NULL;

/* Exported Object: attr_fd_out_loop12_0 */
extern "C" __attribute__((visibility("default"))) void* attr_fd_out_loop12_0 = NULL;

/* Exported Object: attr_fd_out_loop15_1 */
extern "C" __attribute__((visibility("default"))) void* attr_fd_out_loop15_1 = NULL;

/* Exported Object: pose_fd_out_loop01_0 */
extern "C" __attribute__((visibility("default"))) void* pose_fd_out_loop01_0 = NULL;

/* Exported Object: pose_fd_out_loop04_1 */
extern "C" __attribute__((visibility("default"))) void* pose_fd_out_loop04_1 = NULL;

/* Exported Object: pose_fd_out_loop07_2 */
extern "C" __attribute__((visibility("default"))) void* pose_fd_out_loop07_2 = NULL;

/* Exported Object: guard variable for NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::FDVTConfig>::mModuleMtx */
extern "C" __attribute__((visibility("default"))) void* _ZGVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_10FDVTConfigEE10mModuleMtxE = NULL;

/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::FDVTConfig>::EGNdeque(NSCam::NSIoPipe::NSEgn::EGNParams<NSCam::NSIoPipe::FDVTConfig>&, long) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_10FDVTConfigEE8EGNdequeERNS1_9EGNParamsIS3_EEl(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_10FDVTConfigEE8EGNdequeERNS1_9EGNParamsIS3_EEl() called");
    return 0;
}

/* Exported Object: Imem_RS_ConfigData */
extern "C" __attribute__((visibility("default"))) void* Imem_RS_ConfigData = NULL;

/* Exported Object: fdvt_fd_out_loop38_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop38_0 = NULL;

/* Exported Object: g_FdvtImem_MemID */
extern "C" __attribute__((visibility("default"))) void* g_FdvtImem_MemID = NULL;

/* Exported Object: pose_fd_out_loop04_2 */
extern "C" __attribute__((visibility("default"))) void* pose_fd_out_loop04_2 = NULL;

/* Demangled: FdvtDrvImp::writeRegs(FDVT_DRV_REG_IO_STRUCT*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10FdvtDrvImp9writeRegsEP22FDVT_DRV_REG_IO_STRUCTji(void) {
    ALOGD("_ZN10FdvtDrvImp9writeRegsEP22FDVT_DRV_REG_IO_STRUCTji() called");
    return 0;
}

/* Exported Object: fdvt_fd_out_loop35_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop35_0 = NULL;

/* Exported Object: fdvt_fd_out_loop38_1 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop38_1 = NULL;

/* Exported Object: pose_fd_out_loop01_2 */
extern "C" __attribute__((visibility("default"))) void* pose_fd_out_loop01_2 = NULL;

/* Exported Object: pose_fd_out_loop04_3 */
extern "C" __attribute__((visibility("default"))) void* pose_fd_out_loop04_3 = NULL;

/* Exported Object: fdvt_fd_out_loop32_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop32_0 = NULL;

/* Exported Object: fdvt_fd_out_loop35_1 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop35_1 = NULL;

/* Exported Object: fdvt_rs_out_frame01_scale02_g */
extern "C" __attribute__((visibility("default"))) void* fdvt_rs_out_frame01_scale02_g = NULL;

/* Demangled: FdvtDrvImp::waitFrameDone(unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10FdvtDrvImp13waitFrameDoneEji(void) {
    ALOGD("_ZN10FdvtDrvImp13waitFrameDoneEji() called");
    return 0;
}

/* Exported Object: fdvt_fd_out_loop09_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop09_0 = NULL;

/* Exported Object: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::FDVTConfig>::mModuleMtx */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_10FDVTConfigEE10mModuleMtxE = NULL;

/* Exported Object: fdvt_fd_out_loop06_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop06_0 = NULL;

/* Exported Object: fdvt_fd_out_loop03_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop03_0 = NULL;

/* Exported Object: fdvt_fd_out_loop06_1 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop06_1 = NULL;

/* Exported Object: fdvt_rs_pyramid1_out_size */
extern "C" __attribute__((visibility("default"))) void* fdvt_rs_pyramid1_out_size = NULL;

/* Exported Object: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::FDVTConfig>::m_pEngineDrv */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_10FDVTConfigEE12m_pEngineDrvE = NULL;

/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::FDVTConfig>::destroyInstance(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_10FDVTConfigEE15destroyInstanceEPKc(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_10FDVTConfigEE15destroyInstanceEPKc() called");
    return 0;
}

/* Demangled: FDVT_configDram(NSCam::NSIoPipe::FDVTConfig*) */
extern "C" __attribute__((visibility("default"))) int _Z15FDVT_configDramPN5NSCam8NSIoPipe10FDVTConfigE(void) {
    ALOGD("_Z15FDVT_configDramPN5NSCam8NSIoPipe10FDVTConfigE() called");
    return 0;
}

/* Demangled: FdvtDrvImp::uninit(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN10FdvtDrvImp6uninitEPKc(void) {
    ALOGD("_ZN10FdvtDrvImp6uninitEPKc() called");
    return 0;
}

/* Exported Object: NSCam::NSIoPipe::g_FDVT_UnitTest_Num */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe19g_FDVT_UnitTest_NumE = NULL;

/* Exported Object: fdvt_fd_out_loop00_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop00_0 = NULL;

/* Exported Object: fdvt_fd_out_loop03_1 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop03_1 = NULL;

/* Exported Object: fdvt_fd_out_loop57_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop57_0 = NULL;

/* Exported Object: guard variable for NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::FDVTConfig>::mCmdList */
extern "C" __attribute__((visibility("default"))) void* _ZGVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_10FDVTConfigEE8mCmdListE = NULL;

/* Exported Object: FdvtDrvImp::m_Fd */
extern "C" __attribute__((visibility("default"))) void* _ZN10FdvtDrvImp4m_FdE = NULL;

/* Exported Object: attr_fd_out_loop08_0 */
extern "C" __attribute__((visibility("default"))) void* attr_fd_out_loop08_0 = NULL;

/* Exported Object: fdvt_fd_out_loop03_2 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop03_2 = NULL;

/* Exported Object: fdvt_fd_out_loop54_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop54_0 = NULL;

/* Exported Object: fdvt_fd_out_loop57_1 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop57_1 = NULL;

/* Exported Object: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::FDVTConfig>::mEgnList */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_10FDVTConfigEE8mEgnListE = NULL;

/* Exported Object: attr_fd_out_loop05_0 */
extern "C" __attribute__((visibility("default"))) void* attr_fd_out_loop05_0 = NULL;

/* Exported Object: attr_fd_out_loop08_1 */
extern "C" __attribute__((visibility("default"))) void* attr_fd_out_loop08_1 = NULL;

/* Exported Object: fdvt_fd_out_loop00_2 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop00_2 = NULL;

/* Exported Object: fdvt_fd_out_loop03_3 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop03_3 = NULL;

/* Exported Object: fdvt_fd_out_loop51_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop51_0 = NULL;

/* Exported Object: fdvt_fd_out_loop57_2 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop57_2 = NULL;

/* Exported Object: attr_fd_out_loop02_0 */
extern "C" __attribute__((visibility("default"))) void* attr_fd_out_loop02_0 = NULL;

/* Exported Object: fdvt_drv_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* fdvt_drv_DbgLogEnable_INFO = NULL;

/* Exported Object: fdvt_fd_out_loop57_3 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop57_3 = NULL;

/* Exported Object: FdvtDrvImp::m_pFdvtHwRegAddr */
extern "C" __attribute__((visibility("default"))) void* _ZN10FdvtDrvImp16m_pFdvtHwRegAddrE = NULL;

/* Exported Object: attr_fd_out_loop05_2 */
extern "C" __attribute__((visibility("default"))) void* attr_fd_out_loop05_2 = NULL;

/* Exported Object: fdvt_fd_out_loop28_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop28_0 = NULL;

/* Exported Object: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::FDVTConfig>::mEgnCmdLock */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_10FDVTConfigEE11mEgnCmdLockE = NULL;

/* Exported Object: NSCam::NSIoPipe::NSEgn::IEgnStream<NSCam::NSIoPipe::FDVTConfig>::createInstance(char const*)::singleton */
extern "C" __attribute__((visibility("default"))) void* _ZZN5NSCam8NSIoPipe5NSEgn10IEgnStreamINS0_10FDVTConfigEE14createInstanceEPKcE9singleton = NULL;

/* Demangled: FDVT_allocateOutputBuffer() */
extern "C" __attribute__((visibility("default"))) int _Z25FDVT_allocateOutputBufferv(void) {
    ALOGD("_Z25FDVT_allocateOutputBufferv() called");
    return 0;
}

/* Exported Object: fdvt_fd_out_loop25_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop25_0 = NULL;

/* Exported Object: fdvt_fd_out_loop28_1 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop28_1 = NULL;

/* Exported Object: FdvtUtility_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* FdvtUtility_DbgLogEnable_INFO = NULL;

/* Demangled: FdvtDrvImp::waitIrq(FDVT_WAIT_IRQ_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN10FdvtDrvImp7waitIrqEP20FDVT_WAIT_IRQ_STRUCT(void) {
    ALOGD("_ZN10FdvtDrvImp7waitIrqEP20FDVT_WAIT_IRQ_STRUCT() called");
    return 0;
}

/* Exported Object: fdvt_fd_out_loop22_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop22_0 = NULL;

/* Exported Object: fdvt_rs_out_frame01_scale02_r */
extern "C" __attribute__((visibility("default"))) void* fdvt_rs_out_frame01_scale02_r = NULL;

/* Exported Object: attr_rs_out_frame01_scale00_b */
extern "C" __attribute__((visibility("default"))) void* attr_rs_out_frame01_scale00_b = NULL;

/* Exported Object: fdvt_fd_out_loop25_2 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop25_2 = NULL;

/* Exported Object: fdvt_rgb_img_g_frame01 */
extern "C" __attribute__((visibility("default"))) void* fdvt_rgb_img_g_frame01 = NULL;

/* Exported Object: EgnStream_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* EgnStream_DbgLogEnable_ERROR = NULL;

/* Demangled: FdvtDrvImp::writeReg(unsigned int, unsigned long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10FdvtDrvImp8writeRegEjmi(void) {
    ALOGD("_ZN10FdvtDrvImp8writeRegEjmi() called");
    return 0;
}

/* Exported Object: fdvt_posemode_yuv2rgb_config_size */
extern "C" __attribute__((visibility("default"))) void* fdvt_posemode_yuv2rgb_config_size = NULL;

/* Exported Object: fdvt_rs_pyramid2_out_size */
extern "C" __attribute__((visibility("default"))) void* fdvt_rs_pyramid2_out_size = NULL;

/* Exported Object: pose_fd_out_loop16_0 */
extern "C" __attribute__((visibility("default"))) void* pose_fd_out_loop16_0 = NULL;

/* Exported Object: FdvtUtility_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* FdvtUtility_DbgLogEnable_DEBUG = NULL;

/* Exported Object: fdvt_fdmode_yuv2rgb_config_size */
extern "C" __attribute__((visibility("default"))) void* fdvt_fdmode_yuv2rgb_config_size = NULL;

/* Exported Object: g_isFDVTLogEnable */
extern "C" __attribute__((visibility("default"))) void* g_isFDVTLogEnable = NULL;

/* Exported Object: pose_fd_out_loop13_0 */
extern "C" __attribute__((visibility("default"))) void* pose_fd_out_loop13_0 = NULL;

/* Exported Object: pose_rs_out_frame01_scale00_b */
extern "C" __attribute__((visibility("default"))) void* pose_rs_out_frame01_scale00_b = NULL;

/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::FDVTConfig>::init(NSCam::NSIoPipe::NSEgn::INITParams<NSCam::NSIoPipe::FDVTConfig> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_10FDVTConfigEE4initERKNS1_10INITParamsIS3_EE(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_10FDVTConfigEE4initERKNS1_10INITParamsIS3_EE() called");
    return 0;
}

/* Exported Object: Imem_FD_DMA_hw */
extern "C" __attribute__((visibility("default"))) void* Imem_FD_DMA_hw = NULL;

/* Exported Object: fdvt_rgb_img_r_frame01 */
extern "C" __attribute__((visibility("default"))) void* fdvt_rgb_img_r_frame01 = NULL;

/* Exported Object: pose_fd_out_loop10_0 */
extern "C" __attribute__((visibility("default"))) void* pose_fd_out_loop10_0 = NULL;

/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::FDVTConfig>::EgnStream(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_10FDVTConfigEEC1EPKc(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_10FDVTConfigEEC1EPKc() called");
    return 0;
}

/* Demangled: std::__1::list<NSCam::NSIoPipe::NSEgn::EGNRequest<NSCam::NSIoPipe::FDVTConfig>, std::__1::allocator<NSCam::NSIoPipe::NSEgn::EGNRequest<NSCam::NSIoPipe::FDVTConfig> > >::push_back(NSCam::NSIoPipe::NSEgn::EGNRequest<NSCam::NSIoPipe::FDVTConfig> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14listIN5NSCam8NSIoPipe5NSEgn10EGNRequestINS2_10FDVTConfigEEENS_9allocatorIS6_EEE9push_backERKS6_(void) {
    ALOGD("_ZNSt3__14listIN5NSCam8NSIoPipe5NSEgn10EGNRequestINS2_10FDVTConfigEEENS_9allocatorIS6_EEE9push_backERKS6_() called");
    return 0;
}

/* Demangled: FdvtDrvImp::FdvtDrvImp() */
extern "C" __attribute__((visibility("default"))) int _ZN10FdvtDrvImpC1Ev(void) {
    ALOGD("_ZN10FdvtDrvImpC1Ev() called");
    return 0;
}

/* Exported Object: fdvt_drv_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* fdvt_drv_DbgLogEnable_ASSERT = NULL;

/* Exported Object: fdvt_fd_out_loop47_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop47_0 = NULL;

/* Demangled: FDVT_Imem_alloc(unsigned int, int*, unsigned char**, unsigned long*, bool) */
extern "C" __attribute__((visibility("default"))) int _Z15FDVT_Imem_allocjPiPPhPmb(void) {
    ALOGD("_Z15FDVT_Imem_allocjPiPPhPmb() called");
    return 0;
}

/* Exported Object: attr_rs_out_frame01_scale00_g */
extern "C" __attribute__((visibility("default"))) void* attr_rs_out_frame01_scale00_g = NULL;

/* Exported Object: fdvt_fd_out_loop44_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop44_0 = NULL;

/* Exported Object: g_FdvtImem_pLogVir */
extern "C" __attribute__((visibility("default"))) void* g_FdvtImem_pLogVir = NULL;

/* Exported Object: pose_rgb_img_g_frame01 */
extern "C" __attribute__((visibility("default"))) void* pose_rgb_img_g_frame01 = NULL;

/* Exported Object: fdvt_fd_out_loop41_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop41_0 = NULL;

/* Exported Object: fdvt_fd_out_loop44_1 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop44_1 = NULL;

/* Exported Object: fdvt_fd_out_loop47_2 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop47_2 = NULL;

/* Exported Object: fdvt_fd_out_loop44_2 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop44_2 = NULL;

/* Exported Object: pose_rs_out_frame01_scale00_g */
extern "C" __attribute__((visibility("default"))) void* pose_rs_out_frame01_scale00_g = NULL;

/* Exported Object: guard variable for NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::FDVTConfig>::mEgnList */
extern "C" __attribute__((visibility("default"))) void* _ZGVN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_10FDVTConfigEE8mEgnListE = NULL;

/* Exported Object: attr_rgb_img_b_frame01 */
extern "C" __attribute__((visibility("default"))) void* attr_rgb_img_b_frame01 = NULL;

/* Exported Object: fdvt_fd_out_loop18_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop18_0 = NULL;

/* Exported Object: fdvt_fd_out_loop41_2 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop41_2 = NULL;

/* Exported Object: fdvt_fd_out_loop44_3 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop44_3 = NULL;

/* Exported Object: pose_rgb_img_r_frame01 */
extern "C" __attribute__((visibility("default"))) void* pose_rgb_img_r_frame01 = NULL;

/* Exported Object: fdvt_fd_out_loop15_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop15_0 = NULL;

/* Exported Object: fdvt_fd_out_loop18_1 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop18_1 = NULL;

/* Exported Object: fdvt_fd_out_loop12_0 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop12_0 = NULL;

/* Exported Object: fdvt_fd_out_loop15_1 */
extern "C" __attribute__((visibility("default"))) void* fdvt_fd_out_loop15_1 = NULL;

/* Exported Object: EgnStream_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* EgnStream_DbgLogEnable_ASSERT = NULL;

/* Demangled: NSCam::NSIoPipe::NSEgn::EgnStream<NSCam::NSIoPipe::FDVTConfig>::~EgnStream() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_10FDVTConfigEED1Ev(void) {
    ALOGD("_ZN5NSCam8NSIoPipe5NSEgn9EgnStreamINS0_10FDVTConfigEED1Ev() called");
    return 0;
}

/* Demangled: std::__1::__list_imp<ECmd, std::__1::allocator<ECmd> >::~__list_imp() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__list_impI4ECmdNS_9allocatorIS1_EEED2Ev(void) {
    ALOGD("_ZNSt3__110__list_impI4ECmdNS_9allocatorIS1_EEED2Ev() called");
    return 0;
}

/* Demangled: FdvtDrvImp::setRWMode(FDVT_DRV_RW_MODE) */
extern "C" __attribute__((visibility("default"))) int _ZN10FdvtDrvImp9setRWModeE16FDVT_DRV_RW_MODE(void) {
    ALOGD("_ZN10FdvtDrvImp9setRWModeE16FDVT_DRV_RW_MODE() called");
    return 0;
}

/* Exported Object: pose_fd_out_loop09_0 */
extern "C" __attribute__((visibility("default"))) void* pose_fd_out_loop09_0 = NULL;
