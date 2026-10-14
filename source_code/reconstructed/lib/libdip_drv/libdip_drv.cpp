/*
 * Reverse-Engineered Source for: libdip_drv.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libdip_drv"

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
#include "libdip_drv.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_CAMERA_DIP "/dev/camera-dip"
#define DEV_DEV_CAMERA_WPE "/dev/camera-wpe"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_CAMERA_DIP, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CAMERA_DIP, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CAMERA_DIP, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CAMERA_WPE, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CAMERA_WPE, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CAMERA_WPE, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: VirDipDrvImp::getCQModuleInfo(unsigned int, unsigned int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN12VirDipDrvImp15getCQModuleInfoEjRjS0_(void) {
    ALOGD("_ZN12VirDipDrvImp15getCQModuleInfoEjRjS0_() called");
    return 0;
}

/* Demangled: VirDipDrvImp::getCQDescBufVirAddr() */
extern "C" __attribute__((visibility("default"))) int _ZN12VirDipDrvImp19getCQDescBufVirAddrEv(void) {
    ALOGD("_ZN12VirDipDrvImp19getCQDescBufVirAddrEv() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Exported Object: isp_drv_dip_phy_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* isp_drv_dip_phy_DbgLogEnable_INFO = NULL;

/* Demangled: WpeDrvImp::readReg(unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9WpeDrvImp7readRegEji(void) {
    ALOGD("_ZN9WpeDrvImp7readRegEji() called");
    return 0;
}

/* Demangled: VirDipDrvImp::getCQDescBufOft() */
extern "C" __attribute__((visibility("default"))) int _ZN12VirDipDrvImp15getCQDescBufOftEv(void) {
    ALOGD("_ZN12VirDipDrvImp15getCQDescBufOftEv() called");
    return 0;
}

/* Demangled: VirDipDrvImp::setIspVirRegVirAddr(unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN12VirDipDrvImp19setIspVirRegVirAddrEPj(void) {
    ALOGD("_ZN12VirDipDrvImp19setIspVirRegVirAddrEPj() called");
    return 0;
}

/* Exported Object: crz_drv_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* crz_drv_DbgLogEnable_INFO = NULL;

/* Demangled: VirDipDrvImp::cqDelModule(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12VirDipDrvImp11cqDelModuleEj(void) {
    ALOGD("_ZN12VirDipDrvImp11cqDelModuleEj() called");
    return 0;
}

/* Demangled: CrzDrvImp::CDRZ_Config(CRZ_DRV_MODE_ENUM, CRZ_DRV_IMG_SIZE_STRUCT, CRZ_DRV_IMG_SIZE_STRUCT, CRZ_DRV_IMG_CROP_STRUCT) */
extern "C" __attribute__((visibility("default"))) int _ZN9CrzDrvImp11CDRZ_ConfigE17CRZ_DRV_MODE_ENUM23CRZ_DRV_IMG_SIZE_STRUCTS1_23CRZ_DRV_IMG_CROP_STRUCT(void) {
    ALOGD("_ZN9CrzDrvImp11CDRZ_ConfigE17CRZ_DRV_MODE_ENUM23CRZ_DRV_IMG_SIZE_STRUCTS1_23CRZ_DRV_IMG_CROP_STRUCT() called");
    return 0;
}

/* Exported Object: wpe_drv_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* wpe_drv_DbgLogEnable_DEBUG = NULL;

/* Exported Object: vtable for CrzDrvImp */
extern "C" __attribute__((visibility("default"))) void* _ZTV9CrzDrvImp = NULL;

/* Demangled: WpeDrvImp::init(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9WpeDrvImp4initEPKc(void) {
    ALOGD("_ZN9WpeDrvImp4initEPKc() called");
    return 0;
}

/* Exported Object: wpe_drv_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* wpe_drv_DbgLogEnable_WARN = NULL;

/* Demangled: CrzDrvImp::~CrzDrvImp() */
extern "C" __attribute__((visibility("default"))) int _ZN9CrzDrvImpD0Ev(void) {
    ALOGD("_ZN9CrzDrvImpD0Ev() called");
    return 0;
}

/* Exported Object: crz_drv_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* crz_drv_DbgLogEnable_VERBOSE = NULL;

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Exported Object: isp_drv_dip_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* isp_drv_dip_DbgLogEnable_WARN = NULL;

/* Demangled: PhyDipDrvImp::writeRegs(unsigned int, unsigned int, unsigned int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12PhyDipDrvImp9writeRegsEjjPji(void) {
    ALOGD("_ZN12PhyDipDrvImp9writeRegsEjjPji() called");
    return 0;
}

/* Demangled: CrzDrvImp::~CrzDrvImp() */
extern "C" __attribute__((visibility("default"))) int _ZN9CrzDrvImpD1Ev(void) {
    ALOGD("_ZN9CrzDrvImpD1Ev() called");
    return 0;
}

/* Demangled: WpeDrvImp::waitDeque() */
extern "C" __attribute__((visibility("default"))) int _ZN9WpeDrvImp9waitDequeEv(void) {
    ALOGD("_ZN9WpeDrvImp9waitDequeEv() called");
    return 0;
}

/* Demangled: WpeDrvImp::WpeDrvImp() */
extern "C" __attribute__((visibility("default"))) int _ZN9WpeDrvImpC1Ev(void) {
    ALOGD("_ZN9WpeDrvImpC1Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<WPE_Config, std::__1::allocator<WPE_Config> >::__push_back_slow_path<WPE_Config const&>(WPE_Config const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI10WPE_ConfigNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorI10WPE_ConfigNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_() called");
    return 0;
}

/* Demangled: VirDipDrvImp::setCQDescBufOft(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12VirDipDrvImp15setCQDescBufOftEj(void) {
    ALOGD("_ZN12VirDipDrvImp15setCQDescBufOftEj() called");
    return 0;
}

/* Demangled: VirDipDrvImp::getIspVirRegVirAddr() */
extern "C" __attribute__((visibility("default"))) int _ZN12VirDipDrvImp19getIspVirRegVirAddrEv(void) {
    ALOGD("_ZN12VirDipDrvImp19getIspVirRegVirAddrEv() called");
    return 0;
}

/* Demangled: CrzDrvImp::CrzDrvImp() */
extern "C" __attribute__((visibility("default"))) int _ZN9CrzDrvImpC1Ev(void) {
    ALOGD("_ZN9CrzDrvImpC1Ev() called");
    return 0;
}

/* Demangled: CrzDrvImp::~CrzDrvImp() */
extern "C" __attribute__((visibility("default"))) int _ZN9CrzDrvImpD2Ev(void) {
    ALOGD("_ZN9CrzDrvImpD2Ev() called");
    return 0;
}

/* Exported Object: crz_drv_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* crz_drv_DbgLogEnable_ASSERT = NULL;

/* Exported Object: WpeDrv::m_Fd */
extern "C" __attribute__((visibility("default"))) void* _ZN6WpeDrv4m_FdE = NULL;

/* Demangled: WpeDrvImp::getRWMode() */
extern "C" __attribute__((visibility("default"))) int _ZN9WpeDrvImp9getRWModeEv(void) {
    ALOGD("_ZN9WpeDrvImp9getRWModeEv() called");
    return 0;
}

/* Demangled: WpeDrvImp::WpeDrvImp() */
extern "C" __attribute__((visibility("default"))) int _ZN9WpeDrvImpC2Ev(void) {
    ALOGD("_ZN9WpeDrvImpC2Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<WPE_Config, std::__1::allocator<WPE_Config>&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<WPE_Config>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferI10WPE_ConfigRNS_9allocatorIS1_EEEC2EjjS4_(void) {
    ALOGD("_ZNSt3__114__split_bufferI10WPE_ConfigRNS_9allocatorIS1_EEEC2EjjS4_() called");
    return 0;
}

/* Demangled: VirDipDrvImp::readReg(unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12VirDipDrvImp7readRegEji(void) {
    ALOGD("_ZN12VirDipDrvImp7readRegEji() called");
    return 0;
}

/* Exported Object: isp_drv_dip_phy_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* isp_drv_dip_phy_DbgLogEnable_ERROR = NULL;

/* Demangled: CrzDrvImp::CrzDrvImp() */
extern "C" __attribute__((visibility("default"))) int _ZN9CrzDrvImpC2Ev(void) {
    ALOGD("_ZN9CrzDrvImpC2Ev() called");
    return 0;
}

/* Demangled: WpeDrvImp::setRWMode(WPE_DRV_RW_MODE) */
extern "C" __attribute__((visibility("default"))) int _ZN9WpeDrvImp9setRWModeE15WPE_DRV_RW_MODE(void) {
    ALOGD("_ZN9WpeDrvImp9setRWModeE15WPE_DRV_RW_MODE() called");
    return 0;
}

/* Demangled: WpeDrvImp::writeRegs(WPE_DRV_REG_IO_STRUCT*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9WpeDrvImp9writeRegsEP21WPE_DRV_REG_IO_STRUCTji(void) {
    ALOGD("_ZN9WpeDrvImp9writeRegsEP21WPE_DRV_REG_IO_STRUCTji() called");
    return 0;
}

/* Demangled: VirDipDrvImp::getIspVirRegPhyAddr() */
extern "C" __attribute__((visibility("default"))) int _ZN12VirDipDrvImp19getIspVirRegPhyAddrEv(void) {
    ALOGD("_ZN12VirDipDrvImp19getIspVirRegPhyAddrEv() called");
    return 0;
}

/* Demangled: PhyDipDrvImp::setDeviceInfo(E_DEVICE_INFO, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN12PhyDipDrvImp13setDeviceInfoE13E_DEVICE_INFOPh(void) {
    ALOGD("_ZN12PhyDipDrvImp13setDeviceInfoE13E_DEVICE_INFOPh() called");
    return 0;
}

/* Demangled: PhyDipDrvImp::writeReg(unsigned int, unsigned long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12PhyDipDrvImp8writeRegEjmi(void) {
    ALOGD("_ZN12PhyDipDrvImp8writeRegEjmi() called");
    return 0;
}

/* Demangled: CrzDrvImp::SetIspDrv(DipDrv*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CrzDrvImp9SetIspDrvEP6DipDrv(void) {
    ALOGD("_ZN9CrzDrvImp9SetIspDrvEP6DipDrv() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: CrzDrvImp::ResetDefault() */
extern "C" __attribute__((visibility("default"))) int _ZN9CrzDrvImp12ResetDefaultEv(void) {
    ALOGD("_ZN9CrzDrvImp12ResetDefaultEv() called");
    return 0;
}

/* Exported Object: crz_drv_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* crz_drv_DbgLogEnable_DEBUG = NULL;

/* Demangled: WpeDrvImp::dequeWPE(std::__1::vector<WPE_Config, std::__1::allocator<WPE_Config> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN9WpeDrvImp8dequeWPEERNSt3__16vectorI10WPE_ConfigNS0_9allocatorIS2_EEEE(void) {
    ALOGD("_ZN9WpeDrvImp8dequeWPEERNSt3__16vectorI10WPE_ConfigNS0_9allocatorIS2_EEEE() called");
    return 0;
}

/* Exported Object: wpe_drv_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* wpe_drv_DbgLogEnable_INFO = NULL;

/* Exported Object: wpe_drv_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* wpe_drv_DbgLogEnable_VERBOSE = NULL;

/* Demangled: DipDrv::getVirDipDrvInstance(DIP_HW_MODULE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6DipDrv20getVirDipDrvInstanceE13DIP_HW_MODULEPv(void) {
    ALOGD("_ZN6DipDrv20getVirDipDrvInstanceE13DIP_HW_MODULEPv() called");
    return 0;
}

/* Exported Object: vtable for PhyDipDrvImp */
extern "C" __attribute__((visibility("default"))) void* _ZTV12PhyDipDrvImp = NULL;

/* Demangled: PhyDipDrvImp::createInstance(DIP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN12PhyDipDrvImp14createInstanceE13DIP_HW_MODULE(void) {
    ALOGD("_ZN12PhyDipDrvImp14createInstanceE13DIP_HW_MODULE() called");
    return 0;
}

/* Demangled: DipDrv::createInstance(DIP_HW_MODULE) */
extern "C" __attribute__((visibility("default"))) int _ZN6DipDrv14createInstanceE13DIP_HW_MODULE(void) {
    ALOGD("_ZN6DipDrv14createInstanceE13DIP_HW_MODULE() called");
    return 0;
}

/* Demangled: VirDipDrvImp::setCQDescBufPhyAddr(unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN12VirDipDrvImp19setCQDescBufPhyAddrEPj(void) {
    ALOGD("_ZN12VirDipDrvImp19setCQDescBufPhyAddrEPj() called");
    return 0;
}

/* Exported Object: isp_drv_dip_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* isp_drv_dip_DbgLogEnable_INFO = NULL;

/* Demangled: PhyDipDrvImp::dumpDipHwReg(IspDumpDbgLogDipPackage*) */
extern "C" __attribute__((visibility("default"))) int _ZN12PhyDipDrvImp12dumpDipHwRegEP23IspDumpDbgLogDipPackage(void) {
    ALOGD("_ZN12PhyDipDrvImp12dumpDipHwRegEP23IspDumpDbgLogDipPackage() called");
    return 0;
}

/* Demangled: CrzDrv::CreateInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6CrzDrv14CreateInstanceEv(void) {
    ALOGD("_ZN6CrzDrv14CreateInstanceEv() called");
    return 0;
}

/* Demangled: WpeDrvImp::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9WpeDrvImp11getInstanceEv(void) {
    ALOGD("_ZN9WpeDrvImp11getInstanceEv() called");
    return 0;
}

/* Demangled: VirDipDrvImp::writeRegs(unsigned int, unsigned int, unsigned int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12VirDipDrvImp9writeRegsEjjPji(void) {
    ALOGD("_ZN12VirDipDrvImp9writeRegsEjjPji() called");
    return 0;
}

/* Demangled: CrzDrvImp::GetInstance(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN9CrzDrvImp11GetInstanceEb(void) {
    ALOGD("_ZN9CrzDrvImp11GetInstanceEb() called");
    return 0;
}

/* Demangled: WpeDrvImp::enqueWPE(std::__1::vector<WPE_Config, std::__1::allocator<WPE_Config> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN9WpeDrvImp8enqueWPEERNSt3__16vectorI10WPE_ConfigNS0_9allocatorIS2_EEEE(void) {
    ALOGD("_ZN9WpeDrvImp8enqueWPEERNSt3__16vectorI10WPE_ConfigNS0_9allocatorIS2_EEEE() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: CrzDrvImp::Reset() */
extern "C" __attribute__((visibility("default"))) int _ZN9CrzDrvImp5ResetEv(void) {
    ALOGD("_ZN9CrzDrvImp5ResetEv() called");
    return 0;
}

/* Exported Object: WpeDrvImp::m_UserCnt */
extern "C" __attribute__((visibility("default"))) void* _ZN9WpeDrvImp9m_UserCntE = NULL;

/* Demangled: VirDipDrvImp::dumpCQTable() */
extern "C" __attribute__((visibility("default"))) int _ZN12VirDipDrvImp11dumpCQTableEv(void) {
    ALOGD("_ZN12VirDipDrvImp11dumpCQTableEv() called");
    return 0;
}

/* Demangled: VirDipDrvImp::writeRegs(ISP_DRV_REG_IO_STRUCT*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12VirDipDrvImp9writeRegsEP21ISP_DRV_REG_IO_STRUCTji(void) {
    ALOGD("_ZN12VirDipDrvImp9writeRegsEP21ISP_DRV_REG_IO_STRUCTji() called");
    return 0;
}

/* Exported Object: isp_drv_dip_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* isp_drv_dip_DbgLogEnable_VERBOSE = NULL;

/* Demangled: PhyDipDrvImp::setRWMode(ISP_DRV_RW_MODE) */
extern "C" __attribute__((visibility("default"))) int _ZN12PhyDipDrvImp9setRWModeE15ISP_DRV_RW_MODE(void) {
    ALOGD("_ZN12PhyDipDrvImp9setRWModeE15ISP_DRV_RW_MODE() called");
    return 0;
}

/* Demangled: CrzDrvImp::CDRZ_Unconfig() */
extern "C" __attribute__((visibility("default"))) int _ZN9CrzDrvImp13CDRZ_UnconfigEv(void) {
    ALOGD("_ZN9CrzDrvImp13CDRZ_UnconfigEv() called");
    return 0;
}

/* Demangled: VirDipDrvImp::setIspVirRegPhyAddr(unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN12VirDipDrvImp19setIspVirRegPhyAddrEPj(void) {
    ALOGD("_ZN12VirDipDrvImp19setIspVirRegPhyAddrEPj() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: CrzDrvImp::Init() */
extern "C" __attribute__((visibility("default"))) int _ZN9CrzDrvImp4InitEv(void) {
    ALOGD("_ZN9CrzDrvImp4InitEv() called");
    return 0;
}

/* Demangled: CrzDrvImp::CalOffset(CRZ_DRV_ALGO_ENUM, int, unsigned int, float, unsigned int*, unsigned int*, unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CrzDrvImp9CalOffsetE17CRZ_DRV_ALGO_ENUMijfPjS1_S1_S1_(void) {
    ALOGD("_ZN9CrzDrvImp9CalOffsetE17CRZ_DRV_ALGO_ENUMijfPjS1_S1_S1_() called");
    return 0;
}

/* Exported Object: isp_drv_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* isp_drv_DbgLogEnable_ERROR = NULL;

/* Exported Object: isp_drv_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* isp_drv_DbgLogEnable_VERBOSE = NULL;

/* Demangled: VirDipDrvImp::getIspVirRegOft() */
extern "C" __attribute__((visibility("default"))) int _ZN12VirDipDrvImp15getIspVirRegOftEv(void) {
    ALOGD("_ZN12VirDipDrvImp15getIspVirRegOftEv() called");
    return 0;
}

/* Exported Object: isp_drv_dip_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* isp_drv_dip_DbgLogEnable_ERROR = NULL;

/* Demangled: WpeDrvImp::waitWPEFrameDone(unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9WpeDrvImp16waitWPEFrameDoneEji(void) {
    ALOGD("_ZN9WpeDrvImp16waitWPEFrameDoneEji() called");
    return 0;
}

/* Exported Object: wpe_drv_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* wpe_drv_DbgLogEnable_ASSERT = NULL;

/* Demangled: PhyDipDrvImp::setMemInfo(unsigned int, unsigned long, unsigned int*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12PhyDipDrvImp10setMemInfoEjmPjj(void) {
    ALOGD("_ZN12PhyDipDrvImp10setMemInfoEjmPjj() called");
    return 0;
}

/* Demangled: CrzDrvImp::CheckReady() */
extern "C" __attribute__((visibility("default"))) int _ZN9CrzDrvImp10CheckReadyEv(void) {
    ALOGD("_ZN9CrzDrvImp10CheckReadyEv() called");
    return 0;
}

/* Demangled: VirDipDrvImp::getCQDescBufPhyAddr() */
extern "C" __attribute__((visibility("default"))) int _ZN12VirDipDrvImp19getCQDescBufPhyAddrEv(void) {
    ALOGD("_ZN12VirDipDrvImp19getCQDescBufPhyAddrEv() called");
    return 0;
}

/* Demangled: VirDipDrvImp::setCQDescBufVirAddr(cq_desc_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN12VirDipDrvImp19setCQDescBufVirAddrEP9cq_desc_t(void) {
    ALOGD("_ZN12VirDipDrvImp19setCQDescBufVirAddrEP9cq_desc_t() called");
    return 0;
}

/* Demangled: PhyDipDrvImp::loadInitSetting() */
extern "C" __attribute__((visibility("default"))) int _ZN12PhyDipDrvImp15loadInitSettingEv(void) {
    ALOGD("_ZN12PhyDipDrvImp15loadInitSettingEv() called");
    return 0;
}

/* Demangled: PhyDipDrvImp::readReg(unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12PhyDipDrvImp7readRegEji(void) {
    ALOGD("_ZN12PhyDipDrvImp7readRegEji() called");
    return 0;
}

/* Demangled: PhyDipDrvImp::waitIrq(DIP_WAIT_IRQ_ST*) */
extern "C" __attribute__((visibility("default"))) int _ZN12PhyDipDrvImp7waitIrqEP15DIP_WAIT_IRQ_ST(void) {
    ALOGD("_ZN12PhyDipDrvImp7waitIrqEP15DIP_WAIT_IRQ_ST() called");
    return 0;
}

/* Demangled: PhyDipDrvImp::readRegs(ISP_DRV_REG_IO_STRUCT*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12PhyDipDrvImp8readRegsEP21ISP_DRV_REG_IO_STRUCTji(void) {
    ALOGD("_ZN12PhyDipDrvImp8readRegsEP21ISP_DRV_REG_IO_STRUCTji() called");
    return 0;
}

/* Exported Object: isp_drv_dip_phy_DbgLogEnable_VERBOSE */
extern "C" __attribute__((visibility("default"))) void* isp_drv_dip_phy_DbgLogEnable_VERBOSE = NULL;

/* Exported Object: NSCam::NSIoPipe::g_WPE_UnitTest_Num */
extern "C" __attribute__((visibility("default"))) void* _ZN5NSCam8NSIoPipe18g_WPE_UnitTest_NumE = NULL;

/* Demangled: PhyDipDrvImp::getCurHWRegValues() */
extern "C" __attribute__((visibility("default"))) int _ZN12PhyDipDrvImp17getCurHWRegValuesEv(void) {
    ALOGD("_ZN12PhyDipDrvImp17getCurHWRegValuesEv() called");
    return 0;
}

/* Exported Object: isp_drv_dip_phy_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* isp_drv_dip_phy_DbgLogEnable_DEBUG = NULL;

/* Demangled: WpeDrv::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6WpeDrv14createInstanceEv(void) {
    ALOGD("_ZN6WpeDrv14createInstanceEv() called");
    return 0;
}

/* Demangled: WpeDrvImp::uninit(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9WpeDrvImp6uninitEPKc(void) {
    ALOGD("_ZN9WpeDrvImp6uninitEPKc() called");
    return 0;
}

/* Demangled: VirDipDrvImp::VirDipDrvImp() */
extern "C" __attribute__((visibility("default"))) int _ZN12VirDipDrvImpC1Ev(void) {
    ALOGD("_ZN12VirDipDrvImpC1Ev() called");
    return 0;
}

/* Demangled: PhyDipDrvImp::init(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN12PhyDipDrvImp4initEPKc(void) {
    ALOGD("_ZN12PhyDipDrvImp4initEPKc() called");
    return 0;
}

/* Demangled: CrzDrvImp::CalAlgoAndCStep(CRZ_DRV_MODE_ENUM, CRZ_DRV_RZ_ENUM, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, CRZ_DRV_ALGO_ENUM*, CRZ_DRV_ALGO_ENUM*, unsigned int*, unsigned int*, unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CrzDrvImp15CalAlgoAndCStepE17CRZ_DRV_MODE_ENUM15CRZ_DRV_RZ_ENUMjjjjjjP17CRZ_DRV_ALGO_ENUMS3_PjS4_S4_S4_(void) {
    ALOGD("_ZN9CrzDrvImp15CalAlgoAndCStepE17CRZ_DRV_MODE_ENUM15CRZ_DRV_RZ_ENUMjjjjjjP17CRZ_DRV_ALGO_ENUMS3_PjS4_S4_S4_() called");
    return 0;
}

/* Demangled: VirDipDrvImp::VirDipDrvImp() */
extern "C" __attribute__((visibility("default"))) int _ZN12VirDipDrvImpC2Ev(void) {
    ALOGD("_ZN12VirDipDrvImpC2Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<WPE_Config, std::__1::allocator<WPE_Config> >::__swap_out_circular_buffer(std::__1::__split_buffer<WPE_Config, std::__1::allocator<WPE_Config>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI10WPE_ConfigNS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE(void) {
    ALOGD("_ZNSt3__16vectorI10WPE_ConfigNS_9allocatorIS1_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS1_RS3_EE() called");
    return 0;
}

/* Exported Object: isp_drv_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* isp_drv_DbgLogEnable_WARN = NULL;

/* Demangled: VirDipDrvImp::setIspVirRegOft(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12VirDipDrvImp15setIspVirRegOftEj(void) {
    ALOGD("_ZN12VirDipDrvImp15setIspVirRegOftEj() called");
    return 0;
}

/* Demangled: CrzDrvImp::Uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN9CrzDrvImp6UninitEv(void) {
    ALOGD("_ZN9CrzDrvImp6UninitEv() called");
    return 0;
}

/* Demangled: WpeDrvImp::readRegs(WPE_DRV_REG_IO_STRUCT*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9WpeDrvImp8readRegsEP21WPE_DRV_REG_IO_STRUCTji(void) {
    ALOGD("_ZN9WpeDrvImp8readRegsEP21WPE_DRV_REG_IO_STRUCTji() called");
    return 0;
}

/* Exported Object: wpe_drv_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* wpe_drv_DbgLogEnable_ERROR = NULL;

/* Demangled: VirDipDrvImp::cqAddModule(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12VirDipDrvImp11cqAddModuleEj(void) {
    ALOGD("_ZN12VirDipDrvImp11cqAddModuleEj() called");
    return 0;
}

/* Demangled: PhyDipDrvImp::uninit(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN12PhyDipDrvImp6uninitEPKc(void) {
    ALOGD("_ZN12PhyDipDrvImp6uninitEPKc() called");
    return 0;
}

/* Demangled: VirDipDrvImp::readRegs(ISP_DRV_REG_IO_STRUCT*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12VirDipDrvImp8readRegsEP21ISP_DRV_REG_IO_STRUCTji(void) {
    ALOGD("_ZN12VirDipDrvImp8readRegsEP21ISP_DRV_REG_IO_STRUCTji() called");
    return 0;
}

/* Exported Object: isp_drv_dip_phy_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* isp_drv_dip_phy_DbgLogEnable_ASSERT = NULL;

/* Demangled: CrzDrvImp::DestroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9CrzDrvImp15DestroyInstanceEv(void) {
    ALOGD("_ZN9CrzDrvImp15DestroyInstanceEv() called");
    return 0;
}

/* Demangled: CrzDrvImp::DumpReg() */
extern "C" __attribute__((visibility("default"))) int _ZN9CrzDrvImp7DumpRegEv(void) {
    ALOGD("_ZN9CrzDrvImp7DumpRegEv() called");
    return 0;
}

/* Demangled: WpeDrvImp::setDeviceInfo(E_WPE_DEVICE_INFO, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN9WpeDrvImp13setDeviceInfoE17E_WPE_DEVICE_INFOPh(void) {
    ALOGD("_ZN9WpeDrvImp13setDeviceInfoE17E_WPE_DEVICE_INFOPh() called");
    return 0;
}

/* Exported Object: WpeDrvImp::m_UserName */
extern "C" __attribute__((visibility("default"))) void* _ZN9WpeDrvImp10m_UserNameE = NULL;

/* Demangled: WpeDrvImp::waitIrq(WPE_WAIT_IRQ_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN9WpeDrvImp7waitIrqEP19WPE_WAIT_IRQ_STRUCT(void) {
    ALOGD("_ZN9WpeDrvImp7waitIrqEP19WPE_WAIT_IRQ_STRUCT() called");
    return 0;
}

/* Demangled: WpeDrvImp::writeReg(unsigned int, unsigned long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9WpeDrvImp8writeRegEjmi(void) {
    ALOGD("_ZN9WpeDrvImp8writeRegEjmi() called");
    return 0;
}

/* Exported Object: vtable for WpeDrvImp */
extern "C" __attribute__((visibility("default"))) void* _ZTV9WpeDrvImp = NULL;

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: PhyDipDrvImp::getDipDumpInfo(unsigned int&, unsigned int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN12PhyDipDrvImp14getDipDumpInfoERjS0_S0_(void) {
    ALOGD("_ZN12PhyDipDrvImp14getDipDumpInfoERjS0_S0_() called");
    return 0;
}

/* Demangled: PhyDipDrvImp::clearIrq(DIP_CLEAR_IRQ_ST*) */
extern "C" __attribute__((visibility("default"))) int _ZN12PhyDipDrvImp8clearIrqEP16DIP_CLEAR_IRQ_ST(void) {
    ALOGD("_ZN12PhyDipDrvImp8clearIrqEP16DIP_CLEAR_IRQ_ST() called");
    return 0;
}

/* Exported Object: isp_drv_dip_phy_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* isp_drv_dip_phy_DbgLogEnable_WARN = NULL;

/* Exported Object: WpeDrvImp::m_WpeInitMutex */
extern "C" __attribute__((visibility("default"))) void* _ZN9WpeDrvImp14m_WpeInitMutexE = NULL;

/* Exported Object: WpeDrvImp::m_pWpeHwRegAddr */
extern "C" __attribute__((visibility("default"))) void* _ZN9WpeDrvImp15m_pWpeHwRegAddrE = NULL;

/* Demangled: VirDipDrvImp::writeReg(unsigned int, unsigned long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12VirDipDrvImp8writeRegEjmi(void) {
    ALOGD("_ZN12VirDipDrvImp8writeRegEjmi() called");
    return 0;
}

/* Demangled: PhyDipDrvImp::signalIrq(DIP_WAIT_IRQ_ST*) */
extern "C" __attribute__((visibility("default"))) int _ZN12PhyDipDrvImp9signalIrqEP15DIP_WAIT_IRQ_ST(void) {
    ALOGD("_ZN12PhyDipDrvImp9signalIrqEP15DIP_WAIT_IRQ_ST() called");
    return 0;
}

/* Exported Object: crz_drv_DbgLogEnable_WARN */
extern "C" __attribute__((visibility("default"))) void* crz_drv_DbgLogEnable_WARN = NULL;

/* Demangled: VirDipDrvImp::createInstance(DIP_HW_MODULE, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN12VirDipDrvImp14createInstanceE13DIP_HW_MODULEPv(void) {
    ALOGD("_ZN12VirDipDrvImp14createInstanceE13DIP_HW_MODULEPv() called");
    return 0;
}

/* Exported Object: isp_drv_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* isp_drv_DbgLogEnable_ASSERT = NULL;

/* Exported Object: isp_drv_DbgLogEnable_INFO */
extern "C" __attribute__((visibility("default"))) void* isp_drv_DbgLogEnable_INFO = NULL;

/* Exported Object: isp_drv_dip_DbgLogEnable_ASSERT */
extern "C" __attribute__((visibility("default"))) void* isp_drv_dip_DbgLogEnable_ASSERT = NULL;

/* Demangled: PhyDipDrvImp::PhyDipDrvImp() */
extern "C" __attribute__((visibility("default"))) int _ZN12PhyDipDrvImpC1Ev(void) {
    ALOGD("_ZN12PhyDipDrvImpC1Ev() called");
    return 0;
}

/* Demangled: WpeDrvImp::clearIrq(WPE_CLEAR_IRQ_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN9WpeDrvImp8clearIrqEP20WPE_CLEAR_IRQ_STRUCT(void) {
    ALOGD("_ZN9WpeDrvImp8clearIrqEP20WPE_CLEAR_IRQ_STRUCT() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Exported Object: isp_drv_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* isp_drv_DbgLogEnable_DEBUG = NULL;

/* Demangled: VirDipDrvImp::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN12VirDipDrvImp15destroyInstanceEv(void) {
    ALOGD("_ZN12VirDipDrvImp15destroyInstanceEv() called");
    return 0;
}

/* Exported Object: isp_drv_dip_DbgLogEnable_DEBUG */
extern "C" __attribute__((visibility("default"))) void* isp_drv_dip_DbgLogEnable_DEBUG = NULL;

/* Demangled: PhyDipDrvImp::getRWMode() */
extern "C" __attribute__((visibility("default"))) int _ZN12PhyDipDrvImp9getRWModeEv(void) {
    ALOGD("_ZN12PhyDipDrvImp9getRWModeEv() called");
    return 0;
}

/* Demangled: PhyDipDrvImp::PhyDipDrvImp() */
extern "C" __attribute__((visibility("default"))) int _ZN12PhyDipDrvImpC2Ev(void) {
    ALOGD("_ZN12PhyDipDrvImpC2Ev() called");
    return 0;
}

/* Exported Object: crz_drv_DbgLogEnable_ERROR */
extern "C" __attribute__((visibility("default"))) void* crz_drv_DbgLogEnable_ERROR = NULL;

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: PhyDipDrvImp::writeRegs(ISP_DRV_REG_IO_STRUCT*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12PhyDipDrvImp9writeRegsEP21ISP_DRV_REG_IO_STRUCTji(void) {
    ALOGD("_ZN12PhyDipDrvImp9writeRegsEP21ISP_DRV_REG_IO_STRUCTji() called");
    return 0;
}

/* Exported Object: vtable for VirDipDrvImp */
extern "C" __attribute__((visibility("default"))) void* _ZTV12VirDipDrvImp = NULL;

/* Exported Object: WpeDrv::m_regRWMode */
extern "C" __attribute__((visibility("default"))) void* _ZN6WpeDrv11m_regRWModeE = NULL;
