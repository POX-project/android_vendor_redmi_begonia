/*
 * Reverse-Engineered Source for: libcamalgo.dngop.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libcamalgo_dngop"

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
#include "libcamalgo_dngop.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: drvb_fc */
extern "C" __attribute__((visibility("default"))) int drvb_fc(void) {
    ALOGD("drvb_fc() called");
    return 0;
}

/* Demangled: AppUnpack::~AppUnpack() */
extern "C" __attribute__((visibility("default"))) int _ZN9AppUnpackD0Ev(void) {
    ALOGD("_ZN9AppUnpackD0Ev() called");
    return 0;
}

/* Demangled: cal_A2 */
extern "C" __attribute__((visibility("default"))) int cal_A2(void) {
    ALOGD("cal_A2() called");
    return 0;
}

/* Demangled: drvb_f1 */
extern "C" __attribute__((visibility("default"))) int drvb_f1(void) {
    ALOGD("drvb_f1() called");
    return 0;
}

/* Demangled: UnpackCore::unpack12_mp(void*, rtinfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN10UnpackCore11unpack12_mpEPvP6rtinfo(void) {
    ALOGD("_ZN10UnpackCore11unpack12_mpEPvP6rtinfo() called");
    return 0;
}

/* Demangled: PackCore::Main(DngOpImageInfo*, DngOpResultInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN8PackCore4MainEP14DngOpImageInfoP15DngOpResultInfo(void) {
    ALOGD("_ZN8PackCore4MainEP14DngOpImageInfoP15DngOpResultInfo() called");
    return 0;
}

/* Demangled: drvb_crack_heap */
extern "C" __attribute__((visibility("default"))) int drvb_crack_heap(void) {
    ALOGD("drvb_crack_heap() called");
    return 0;
}

/* Exported Object: vtable for UnpackCore */
extern "C" __attribute__((visibility("default"))) void* _ZTV10UnpackCore = NULL;

/* Exported Object: __bss_start__ */
extern "C" __attribute__((visibility("default"))) void* __bss_start__ = NULL;

/* Exported Object: sha1sum */
extern "C" __attribute__((visibility("default"))) void* sha1sum = NULL;

/* Demangled: PackCore::pack10_mp(void*, rtinfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN8PackCore9pack10_mpEPvP6rtinfo(void) {
    ALOGD("_ZN8PackCore9pack10_mpEPvP6rtinfo() called");
    return 0;
}

/* Demangled: sha1 */
extern "C" __attribute__((visibility("default"))) int sha1(void) {
    ALOGD("sha1() called");
    return 0;
}

/* Demangled: PackCore::PackCore() */
extern "C" __attribute__((visibility("default"))) int _ZN8PackCoreC2Ev(void) {
    ALOGD("_ZN8PackCoreC2Ev() called");
    return 0;
}

/* Demangled: AppDngOpTmp::~AppDngOpTmp() */
extern "C" __attribute__((visibility("default"))) int _ZN11AppDngOpTmpD0Ev(void) {
    ALOGD("_ZN11AppDngOpTmpD0Ev() called");
    return 0;
}

/* Demangled: PackCore::~PackCore() */
extern "C" __attribute__((visibility("default"))) int _ZN8PackCoreD1Ev(void) {
    ALOGD("_ZN8PackCoreD1Ev() called");
    return 0;
}

/* Demangled: MTKDngOp::~MTKDngOp() */
extern "C" __attribute__((visibility("default"))) int _ZN8MTKDngOpD0Ev(void) {
    ALOGD("_ZN8MTKDngOpD0Ev() called");
    return 0;
}

/* Demangled: unpack12(UNP_MP_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z8unpack12P13UNP_MP_STRUCT(void) {
    ALOGD("_Z8unpack12P13UNP_MP_STRUCT() called");
    return 0;
}

/* Demangled: UnpackCore::UnpackCore() */
extern "C" __attribute__((visibility("default"))) int _ZN10UnpackCoreC1Ev(void) {
    ALOGD("_ZN10UnpackCoreC1Ev() called");
    return 0;
}

/* Exported Object: vtable for AppPack */
extern "C" __attribute__((visibility("default"))) void* _ZTV7AppPack = NULL;

/* Exported Object: _bss_end__ */
extern "C" __attribute__((visibility("default"))) void* _bss_end__ = NULL;

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: AppPack::AppPack() */
extern "C" __attribute__((visibility("default"))) int _ZN7AppPackC2Ev(void) {
    ALOGD("_ZN7AppPackC2Ev() called");
    return 0;
}

/* Demangled: PackCore::destroyInstance(PackCore*) */
extern "C" __attribute__((visibility("default"))) int _ZN8PackCore15destroyInstanceEPS_(void) {
    ALOGD("_ZN8PackCore15destroyInstanceEPS_() called");
    return 0;
}

/* Demangled: get_ul */
extern "C" __attribute__((visibility("default"))) int get_ul(void) {
    ALOGD("get_ul() called");
    return 0;
}

/* Demangled: drvb_fc_respond */
extern "C" __attribute__((visibility("default"))) int drvb_fc_respond(void) {
    ALOGD("drvb_fc_respond() called");
    return 0;
}

/* Demangled: AppPack::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7AppPack11getInstanceEv(void) {
    ALOGD("_ZN7AppPack11getInstanceEv() called");
    return 0;
}

/* Demangled: MTKDngOp::createInstance(DRVDngOpObject_s) */
extern "C" __attribute__((visibility("default"))) int _ZN8MTKDngOp14createInstanceE16DRVDngOpObject_s(void) {
    ALOGD("_ZN8MTKDngOp14createInstanceE16DRVDngOpObject_s() called");
    return 0;
}

/* Exported Object: __bss_end__ */
extern "C" __attribute__((visibility("default"))) void* __bss_end__ = NULL;

/* Demangled: pack8(unsigned short*, unsigned short*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z5pack8PtS_jjjjj(void) {
    ALOGD("_Z5pack8PtS_jjjjj() called");
    return 0;
}

/* Demangled: AppDngOpTmp::destroyInstance(MTKDngOp*) */
extern "C" __attribute__((visibility("default"))) int _ZN11AppDngOpTmp15destroyInstanceEP8MTKDngOp(void) {
    ALOGD("_ZN11AppDngOpTmp15destroyInstanceEP8MTKDngOp() called");
    return 0;
}

/* Demangled: UnpackCore::destroyInstance(UnpackCore*) */
extern "C" __attribute__((visibility("default"))) int _ZN10UnpackCore15destroyInstanceEPS_(void) {
    ALOGD("_ZN10UnpackCore15destroyInstanceEPS_() called");
    return 0;
}

/* Demangled: PackCore::PackCore() */
extern "C" __attribute__((visibility("default"))) int _ZN8PackCoreC1Ev(void) {
    ALOGD("_ZN8PackCoreC1Ev() called");
    return 0;
}

/* Demangled: PackCore::~PackCore() */
extern "C" __attribute__((visibility("default"))) int _ZN8PackCoreD0Ev(void) {
    ALOGD("_ZN8PackCoreD0Ev() called");
    return 0;
}

/* Demangled: UnpackCore::~UnpackCore() */
extern "C" __attribute__((visibility("default"))) int _ZN10UnpackCoreD2Ev(void) {
    ALOGD("_ZN10UnpackCoreD2Ev() called");
    return 0;
}

/* Demangled: unpack10(UNP_MP_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z8unpack10P13UNP_MP_STRUCT(void) {
    ALOGD("_Z8unpack10P13UNP_MP_STRUCT() called");
    return 0;
}

/* Demangled: AppUnpack::~AppUnpack() */
extern "C" __attribute__((visibility("default"))) int _ZN9AppUnpackD1Ev(void) {
    ALOGD("_ZN9AppUnpackD1Ev() called");
    return 0;
}

/* Demangled: AppUnpack::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9AppUnpack11getInstanceEv(void) {
    ALOGD("_ZN9AppUnpack11getInstanceEv() called");
    return 0;
}

/* Demangled: AppPack::~AppPack() */
extern "C" __attribute__((visibility("default"))) int _ZN7AppPackD1Ev(void) {
    ALOGD("_ZN7AppPackD1Ev() called");
    return 0;
}

/* Demangled: AppPack::DngOpMain(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7AppPack9DngOpMainEPvS0_(void) {
    ALOGD("_ZN7AppPack9DngOpMainEPvS0_() called");
    return 0;
}

/* Demangled: set_ul */
extern "C" __attribute__((visibility("default"))) int set_ul(void) {
    ALOGD("set_ul() called");
    return 0;
}

/* Demangled: AppUnpack::destroyInstance(MTKDngOp*) */
extern "C" __attribute__((visibility("default"))) int _ZN9AppUnpack15destroyInstanceEP8MTKDngOp(void) {
    ALOGD("_ZN9AppUnpack15destroyInstanceEP8MTKDngOp() called");
    return 0;
}

/* Demangled: UnpackCore::~UnpackCore() */
extern "C" __attribute__((visibility("default"))) int _ZN10UnpackCoreD0Ev(void) {
    ALOGD("_ZN10UnpackCoreD0Ev() called");
    return 0;
}

/* Exported Object: vtable for PackCore */
extern "C" __attribute__((visibility("default"))) void* _ZTV8PackCore = NULL;

/* Demangled: UnpackCore::Main(DngOpImageInfo*, DngOpResultInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN10UnpackCore4MainEP14DngOpImageInfoP15DngOpResultInfo(void) {
    ALOGD("_ZN10UnpackCore4MainEP14DngOpImageInfoP15DngOpResultInfo() called");
    return 0;
}

/* Exported Object: vtable for AppDngOpTmp */
extern "C" __attribute__((visibility("default"))) void* _ZTV11AppDngOpTmp = NULL;

/* Demangled: get_heap_offset */
extern "C" __attribute__((visibility("default"))) int get_heap_offset(void) {
    ALOGD("get_heap_offset() called");
    return 0;
}

/* Exported Object: vtable for MTKDngOp */
extern "C" __attribute__((visibility("default"))) void* _ZTV8MTKDngOp = NULL;

/* Demangled: cal_P */
extern "C" __attribute__((visibility("default"))) int cal_P(void) {
    ALOGD("cal_P() called");
    return 0;
}

/* Demangled: unpack12_with_rounding(UNP_MP_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z22unpack12_with_roundingP13UNP_MP_STRUCT(void) {
    ALOGD("_Z22unpack12_with_roundingP13UNP_MP_STRUCT() called");
    return 0;
}

/* Demangled: drvb_gettimeofday */
extern "C" __attribute__((visibility("default"))) int drvb_gettimeofday(void) {
    ALOGD("drvb_gettimeofday() called");
    return 0;
}

/* Demangled: PackCore::Uninit(DngOpResultInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN8PackCore6UninitEP15DngOpResultInfo(void) {
    ALOGD("_ZN8PackCore6UninitEP15DngOpResultInfo() called");
    return 0;
}

/* Demangled: unpack14(unsigned char*, unsigned short*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z8unpack14PhPtjjjjj(void) {
    ALOGD("_Z8unpack14PhPtjjjjj() called");
    return 0;
}

/* Demangled: PackCore::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN8PackCore11getInstanceEv(void) {
    ALOGD("_ZN8PackCore11getInstanceEv() called");
    return 0;
}

/* Demangled: drvb_f2 */
extern "C" __attribute__((visibility("default"))) int drvb_f2(void) {
    ALOGD("drvb_f2() called");
    return 0;
}

/* Demangled: drvb_f0 */
extern "C" __attribute__((visibility("default"))) int drvb_f0(void) {
    ALOGD("drvb_f0() called");
    return 0;
}

/* Demangled: AppPack::~AppPack() */
extern "C" __attribute__((visibility("default"))) int _ZN7AppPackD0Ev(void) {
    ALOGD("_ZN7AppPackD0Ev() called");
    return 0;
}

/* Demangled: UnpackCore::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN10UnpackCore11getInstanceEv(void) {
    ALOGD("_ZN10UnpackCore11getInstanceEv() called");
    return 0;
}

/* Exported Object: start_time */
extern "C" __attribute__((visibility("default"))) void* start_time = NULL;

/* Demangled: UnpackCore::Uninit(DngOpResultInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN10UnpackCore6UninitEP15DngOpResultInfo(void) {
    ALOGD("_ZN10UnpackCore6UninitEP15DngOpResultInfo() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: AppPack::destroyInstance(MTKDngOp*) */
extern "C" __attribute__((visibility("default"))) int _ZN7AppPack15destroyInstanceEP8MTKDngOp(void) {
    ALOGD("_ZN7AppPack15destroyInstanceEP8MTKDngOp() called");
    return 0;
}

/* Demangled: UnpackCore::~UnpackCore() */
extern "C" __attribute__((visibility("default"))) int _ZN10UnpackCoreD1Ev(void) {
    ALOGD("_ZN10UnpackCoreD1Ev() called");
    return 0;
}

/* Demangled: UnpackCore::unpack10_mp(void*, rtinfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN10UnpackCore11unpack10_mpEPvP6rtinfo(void) {
    ALOGD("_ZN10UnpackCore11unpack10_mpEPvP6rtinfo() called");
    return 0;
}

/* Demangled: pack10(unsigned short*, unsigned short*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z6pack10PtS_jjjjjj(void) {
    ALOGD("_Z6pack10PtS_jjjjjj() called");
    return 0;
}

/* Exported Object: __end__ */
extern "C" __attribute__((visibility("default"))) void* __end__ = NULL;

/* Demangled: AppUnpack::AppUnpack() */
extern "C" __attribute__((visibility("default"))) int _ZN9AppUnpackC1Ev(void) {
    ALOGD("_ZN9AppUnpackC1Ev() called");
    return 0;
}

/* Demangled: drvb_error */
extern "C" __attribute__((visibility("default"))) int drvb_error(void) {
    ALOGD("drvb_error() called");
    return 0;
}

/* Demangled: pack14(unsigned short*, unsigned short*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z6pack14PtS_jjjjj(void) {
    ALOGD("_Z6pack14PtS_jjjjj() called");
    return 0;
}

/* Demangled: AppUnpack::~AppUnpack() */
extern "C" __attribute__((visibility("default"))) int _ZN9AppUnpackD2Ev(void) {
    ALOGD("_ZN9AppUnpackD2Ev() called");
    return 0;
}

/* Demangled: AppUnpack::DngOpMain(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN9AppUnpack9DngOpMainEPvS0_(void) {
    ALOGD("_ZN9AppUnpack9DngOpMainEPvS0_() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: MTKDngOp::~MTKDngOp() */
extern "C" __attribute__((visibility("default"))) int _ZN8MTKDngOpD2Ev(void) {
    ALOGD("_ZN8MTKDngOpD2Ev() called");
    return 0;
}

/* Demangled: dump_buf */
extern "C" __attribute__((visibility("default"))) int dump_buf(void) {
    ALOGD("dump_buf() called");
    return 0;
}

/* Demangled: hash_update */
extern "C" __attribute__((visibility("default"))) int hash_update(void) {
    ALOGD("hash_update() called");
    return 0;
}

/* Demangled: hash_starts */
extern "C" __attribute__((visibility("default"))) int hash_starts(void) {
    ALOGD("hash_starts() called");
    return 0;
}

/* Demangled: unpack10_with_rounding(UNP_MP_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _Z22unpack10_with_roundingP13UNP_MP_STRUCT(void) {
    ALOGD("_Z22unpack10_with_roundingP13UNP_MP_STRUCT() called");
    return 0;
}

/* Exported Object: vtable for AppUnpack */
extern "C" __attribute__((visibility("default"))) void* _ZTV9AppUnpack = NULL;

/* Demangled: UnpackCore::UnpackCore() */
extern "C" __attribute__((visibility("default"))) int _ZN10UnpackCoreC2Ev(void) {
    ALOGD("_ZN10UnpackCoreC2Ev() called");
    return 0;
}

/* Demangled: MTKDngOp::DngOpMain(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN8MTKDngOp9DngOpMainEPvS0_(void) {
    ALOGD("_ZN8MTKDngOp9DngOpMainEPvS0_() called");
    return 0;
}

/* Exported Object: elapse_time */
extern "C" __attribute__((visibility("default"))) void* elapse_time = NULL;

/* Demangled: AppDngOpTmp::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN11AppDngOpTmp11getInstanceEv(void) {
    ALOGD("_ZN11AppDngOpTmp11getInstanceEv() called");
    return 0;
}

/* Demangled: AppUnpack::AppUnpack() */
extern "C" __attribute__((visibility("default"))) int _ZN9AppUnpackC2Ev(void) {
    ALOGD("_ZN9AppUnpackC2Ev() called");
    return 0;
}

/* Demangled: PackCore::~PackCore() */
extern "C" __attribute__((visibility("default"))) int _ZN8PackCoreD2Ev(void) {
    ALOGD("_ZN8PackCoreD2Ev() called");
    return 0;
}

/* Demangled: drvb_fc_prepare */
extern "C" __attribute__((visibility("default"))) int drvb_fc_prepare(void) {
    ALOGD("drvb_fc_prepare() called");
    return 0;
}

/* Demangled: PackCore::pack12_mp(void*, rtinfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN8PackCore9pack12_mpEPvP6rtinfo(void) {
    ALOGD("_ZN8PackCore9pack12_mpEPvP6rtinfo() called");
    return 0;
}

/* Demangled: unpack8(unsigned char*, unsigned short*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z7unpack8PhPtjjjjj(void) {
    ALOGD("_Z7unpack8PhPtjjjjj() called");
    return 0;
}

/* Demangled: pack12(unsigned short*, unsigned short*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z6pack12PtS_jjjjjj(void) {
    ALOGD("_Z6pack12PtS_jjjjjj() called");
    return 0;
}

/* Demangled: hash_finish */
extern "C" __attribute__((visibility("default"))) int hash_finish(void) {
    ALOGD("hash_finish() called");
    return 0;
}

/* Demangled: cal_S */
extern "C" __attribute__((visibility("default"))) int cal_S(void) {
    ALOGD("cal_S() called");
    return 0;
}

/* Exported Object: end_time */
extern "C" __attribute__((visibility("default"))) void* end_time = NULL;

/* Demangled: AppPack::AppPack() */
extern "C" __attribute__((visibility("default"))) int _ZN7AppPackC1Ev(void) {
    ALOGD("_ZN7AppPackC1Ev() called");
    return 0;
}

/* Demangled: AppPack::~AppPack() */
extern "C" __attribute__((visibility("default"))) int _ZN7AppPackD2Ev(void) {
    ALOGD("_ZN7AppPackD2Ev() called");
    return 0;
}
