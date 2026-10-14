/*
 * Reverse-Engineered Source for: libcam.halisp.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libcam_halisp"

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
#include "libcam_halisp.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: NS3Av3::HalIspImp::ConfigP1Cb() */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av39HalIspImp10ConfigP1CbEv(void) {
    ALOGD("_ZN6NS3Av39HalIspImp10ConfigP1CbEv() called");
    return 0;
}

/* Demangled: NS3Av3::HalIspImp::destroyInstance(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av39HalIspImp15destroyInstanceEPKc(void) {
    ALOGD("_ZN6NS3Av39HalIspImp15destroyInstanceEPKc() called");
    return 0;
}

/* Demangled: NS3Av3::HalIspImp::get(unsigned int, NS3Av3::MetaSet_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av39HalIspImp3getEjRNS_9MetaSet_TE(void) {
    ALOGD("_ZN6NS3Av39HalIspImp3getEjRNS_9MetaSet_TE() called");
    return 0;
}

/* Demangled: NS3Av3::HalIspImp::uninit(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av39HalIspImp6uninitEPKc(void) {
    ALOGD("_ZN6NS3Av39HalIspImp6uninitEPKc() called");
    return 0;
}

/* Demangled: NS3Av3::HalIspImp::dumpIsp(int, NS3Av3::MetaSet_T const&, NS3Av3::TuningParam*, NS3Av3::MetaSet_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av39HalIspImp7dumpIspEiRKNS_9MetaSet_TEPNS_11TuningParamEPS1_(void) {
    ALOGD("_ZN6NS3Av39HalIspImp7dumpIspEiRKNS_9MetaSet_TEPNS_11TuningParamEPS1_() called");
    return 0;
}

/* Exported Object: NS3Av3::HalIspImp::m_u4LogEn */
extern "C" __attribute__((visibility("default"))) void* _ZN6NS3Av39HalIspImp9m_u4LogEnE = NULL;

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: NS3Av3::HalIspImp::UninitP1Cb() */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av39HalIspImp10UninitP1CbEv(void) {
    ALOGD("_ZN6NS3Av39HalIspImp10UninitP1CbEv() called");
    return 0;
}

/* Demangled: NS3Av3::HalIspImp::sendIspCtrl(NS3Av3::EISPCtrl_T, long, long) */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av39HalIspImp11sendIspCtrlENS_10EISPCtrl_TEll(void) {
    ALOGD("_ZN6NS3Av39HalIspImp11sendIspCtrlENS_10EISPCtrl_TEll() called");
    return 0;
}

/* Demangled: NS3Av3::HalIspImp::detachCb() */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av39HalIspImp8detachCbEv(void) {
    ALOGD("_ZN6NS3Av39HalIspImp8detachCbEv() called");
    return 0;
}

/* Demangled: NS3Av3::HalIspImp::setP2Isp(int, NS3Av3::MetaSet_T const&, NS3Av3::TuningParam*, NS3Av3::MetaSet_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av39HalIspImp8setP2IspEiRKNS_9MetaSet_TEPNS_11TuningParamEPS1_(void) {
    ALOGD("_ZN6NS3Av39HalIspImp8setP2IspEiRKNS_9MetaSet_TEPNS_11TuningParamEPS1_() called");
    return 0;
}

/* Demangled: NS3Av3::HalIspImp::createInstance(int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av39HalIspImp14createInstanceEiPKc(void) {
    ALOGD("_ZN6NS3Av39HalIspImp14createInstanceEiPKc() called");
    return 0;
}

/* Demangled: NS3Av3::HalIspImp::HalIspImp(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av39HalIspImpC1Ei(void) {
    ALOGD("_ZN6NS3Av39HalIspImpC1Ei() called");
    return 0;
}

/* Demangled: NS3Av3::HalIspImp::setFdGamma(int, int*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av39HalIspImp10setFdGammaEiPij(void) {
    ALOGD("_ZN6NS3Av39HalIspImp10setFdGammaEiPij() called");
    return 0;
}

/* Demangled: NS3Av3::HalIspImp::init(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av39HalIspImp4initEPKc(void) {
    ALOGD("_ZN6NS3Av39HalIspImp4initEPKc() called");
    return 0;
}

/* Demangled: NS3Av3::HalIspImp::config(NS3Av3::ConfigInfo_T const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av39HalIspImp6configERKNS_12ConfigInfo_TE(void) {
    ALOGD("_ZN6NS3Av39HalIspImp6configERKNS_12ConfigInfo_TE() called");
    return 0;
}

/* Demangled: NS3Av3::HalIspImp::HalIspImp(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av39HalIspImpC2Ei(void) {
    ALOGD("_ZN6NS3Av39HalIspImpC2Ei() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: NS3Av3::HalIspImp::queryISPBufferInfo(NS3Av3::Buffer_Info&) */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av39HalIspImp18queryISPBufferInfoERNS_11Buffer_InfoE(void) {
    ALOGD("_ZN6NS3Av39HalIspImp18queryISPBufferInfoERNS_11Buffer_InfoE() called");
    return 0;
}

/* Demangled: NS3Av3::HalIspImp::setFDEnable(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av39HalIspImp11setFDEnableEi(void) {
    ALOGD("_ZN6NS3Av39HalIspImp11setFDEnableEi() called");
    return 0;
}

/* Demangled: NS3Av3::HalIspImp::setSensorMode(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av39HalIspImp13setSensorModeEi(void) {
    ALOGD("_ZN6NS3Av39HalIspImp13setSensorModeEi() called");
    return 0;
}

/* Demangled: NS3Av3::HalIspImp::stop() */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av39HalIspImp4stopEv(void) {
    ALOGD("_ZN6NS3Av39HalIspImp4stopEv() called");
    return 0;
}

/* Demangled: NS3Av3::HalIspImp::getCur(unsigned int, NS3Av3::MetaSet_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av39HalIspImp6getCurEjRNS_9MetaSet_TE(void) {
    ALOGD("_ZN6NS3Av39HalIspImp6getCurEjRNS_9MetaSet_TE() called");
    return 0;
}

/* Demangled: NS3Av3::HalIspImp::resume(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av39HalIspImp6resumeEi(void) {
    ALOGD("_ZN6NS3Av39HalIspImp6resumeEi() called");
    return 0;
}

/* Demangled: NS3Av3::HalIspImp::InitP1Cb() */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av39HalIspImp8InitP1CbEv(void) {
    ALOGD("_ZN6NS3Av39HalIspImp8InitP1CbEv() called");
    return 0;
}

/* Demangled: NS3Av3::HalIspImp::attachCb() */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av39HalIspImp8attachCbEv(void) {
    ALOGD("_ZN6NS3Av39HalIspImp8attachCbEv() called");
    return 0;
}

/* Demangled: createInstance_HalISP */
extern "C" __attribute__((visibility("default"))) int createInstance_HalISP(void) {
    ALOGD("createInstance_HalISP() called");
    return 0;
}

/* Demangled: NS3Av3::HalIspImp::start() */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av39HalIspImp5startEv(void) {
    ALOGD("_ZN6NS3Av39HalIspImp5startEv() called");
    return 0;
}

/* Demangled: NS3Av3::HalIspImp::setFDInfo(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av39HalIspImp9setFDInfoEPv(void) {
    ALOGD("_ZN6NS3Av39HalIspImp9setFDInfoEPv() called");
    return 0;
}

/* Demangled: NS3Av3::HalIspImp::setP1Isp(std::__1::vector<NS3Av3::MetaSet_T*, std::__1::allocator<NS3Av3::MetaSet_T*> > const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av39HalIspImp8setP1IspERKNSt3__16vectorIPNS_9MetaSet_TENS1_9allocatorIS4_EEEEi(void) {
    ALOGD("_ZN6NS3Av39HalIspImp8setP1IspERKNSt3__16vectorIPNS_9MetaSet_TENS1_9allocatorIS4_EEEEi() called");
    return 0;
}

/* Demangled: NS3Av3::HalIspImp::setOTInfo(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6NS3Av39HalIspImp9setOTInfoEPv(void) {
    ALOGD("_ZN6NS3Av39HalIspImp9setOTInfoEPv() called");
    return 0;
}

/* Exported Object: vtable for NS3Av3::HalIspImp */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6NS3Av39HalIspImpE = NULL;
