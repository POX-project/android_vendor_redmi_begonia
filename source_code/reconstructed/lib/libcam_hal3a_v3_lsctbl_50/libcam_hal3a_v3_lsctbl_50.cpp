/*
 * Reverse-Engineered Source for: libcam.hal3a.v3.lsctbl.50.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libcam_hal3a_v3_lsctbl_50"

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
#include "libcam_hal3a_v3_lsctbl_50.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: NSIspTuning::ILscTbl::LscTblImp::setData(void const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning7ILscTbl9LscTblImp7setDataEPKvj(void) {
    ALOGD("_ZN11NSIspTuning7ILscTbl9LscTblImp7setDataEPKvj() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: NSIspTuning::ILscTbl::cropOut(NSIspTuning::ILscTable::TransformCfg_T const&, NSIspTuning::ILscTable&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK11NSIspTuning7ILscTbl7cropOutERKNS_9ILscTable14TransformCfg_TERS1_(void) {
    ALOGD("_ZNK11NSIspTuning7ILscTbl7cropOutERKNS_9ILscTable14TransformCfg_TERS1_() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscTbl::LscTblImp::cropToGain(NSIspTuning::ILscTable::TransformCfg_T const&, NSIspTuning::ILscTable&, std::__1::vector<unsigned short*, std::__1::allocator<unsigned short*> >&, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK11NSIspTuning7ILscTbl9LscTblImp10cropToGainERKNS_9ILscTable14TransformCfg_TERS2_RNSt3__16vectorIPtNS7_9allocatorIS9_EEEEj(void) {
    ALOGD("_ZNK11NSIspTuning7ILscTbl9LscTblImp10cropToGainERKNS_9ILscTable14TransformCfg_TERS2_RNSt3__16vectorIPtNS7_9allocatorIS9_EEEEj() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >::vector(std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIhNS_9allocatorIhEEEC2ERKS3_(void) {
    ALOGD("_ZNSt3__16vectorIhNS_9allocatorIhEEEC2ERKS3_() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscTbl::LscTblImp::~LscTblImp() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning7ILscTbl9LscTblImpD2Ev(void) {
    ALOGD("_ZN11NSIspTuning7ILscTbl9LscTblImpD2Ev() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscTbl::ILscTbl(NSIspTuning::ILscTable::TBL_TYPE_T) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning7ILscTblC1ENS_9ILscTable10TBL_TYPE_TE(void) {
    ALOGD("_ZN11NSIspTuning7ILscTblC1ENS_9ILscTable10TBL_TYPE_TE() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscTbl::cropToGain(NSIspTuning::ILscTable::TransformCfg_T const&, NSIspTuning::ILscTable&, std::__1::vector<unsigned short*, std::__1::allocator<unsigned short*> >&, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK11NSIspTuning7ILscTbl10cropToGainERKNS_9ILscTable14TransformCfg_TERS1_RNSt3__16vectorIPtNS6_9allocatorIS8_EEEEj(void) {
    ALOGD("_ZNK11NSIspTuning7ILscTbl10cropToGainERKNS_9ILscTable14TransformCfg_TERS1_RNSt3__16vectorIPtNS6_9allocatorIS8_EEEEj() called");
    return 0;
}

/* Demangled: LscTblFloatImp::dump(char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK14LscTblFloatImp4dumpEPKc(void) {
    ALOGD("_ZNK14LscTblFloatImp4dumpEPKc() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >::__vallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIhNS_9allocatorIhEEE11__vallocateEj(void) {
    ALOGD("_ZNSt3__16vectorIhNS_9allocatorIhEEE11__vallocateEj() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscTbl::makeConfig(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning7ILscTbl10makeConfigEiiii(void) {
    ALOGD("_ZN11NSIspTuning7ILscTbl10makeConfigEiiii() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscTbl::LscTblImp::LscTblImp(NSIspTuning::ILscTbl::LscTblImp const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning7ILscTbl9LscTblImpC1ERKS1_(void) {
    ALOGD("_ZN11NSIspTuning7ILscTbl9LscTblImpC1ERKS1_() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscTbl::LscTblImp::LscTblImp(NSIspTuning::ILscTbl::LscTblImp const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning7ILscTbl9LscTblImpC2ERKS1_(void) {
    ALOGD("_ZN11NSIspTuning7ILscTbl9LscTblImpC2ERKS1_() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscTable::RsvdData::RsvdData() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning9ILscTable8RsvdDataC2Ev(void) {
    ALOGD("_ZN11NSIspTuning9ILscTable8RsvdDataC2Ev() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscTbl::dump(char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK11NSIspTuning7ILscTbl4dumpEPKc(void) {
    ALOGD("_ZNK11NSIspTuning7ILscTbl4dumpEPKc() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscTbl::LscTblImp::operator=(NSIspTuning::ILscTbl::LscTblImp const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning7ILscTbl9LscTblImpaSERKS1_(void) {
    ALOGD("_ZN11NSIspTuning7ILscTbl9LscTblImpaSERKS1_() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscTable::createInstance(NSIspTuning::ILscTable::TBL_TYPE_T, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning9ILscTable14createInstanceENS0_10TBL_TYPE_TEiiii(void) {
    ALOGD("_ZN11NSIspTuning9ILscTable14createInstanceENS0_10TBL_TYPE_TEiiii() called");
    return 0;
}

/* Demangled: LscRatio::LscRatio() */
extern "C" __attribute__((visibility("default"))) int _ZN8LscRatioC1Ev(void) {
    ALOGD("_ZN8LscRatioC1Ev() called");
    return 0;
}

/* Demangled: LscRatio::~LscRatio() */
extern "C" __attribute__((visibility("default"))) int _ZN8LscRatioD1Ev(void) {
    ALOGD("_ZN8LscRatioD1Ev() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscTbl::toBuf(NSIspTuning::ILscBuf&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK11NSIspTuning7ILscTbl5toBufERNS_7ILscBufE(void) {
    ALOGD("_ZNK11NSIspTuning7ILscTbl5toBufERNS_7ILscBufE() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscTbl::LscTblImp::getSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK11NSIspTuning7ILscTbl9LscTblImp7getSizeEv(void) {
    ALOGD("_ZNK11NSIspTuning7ILscTbl9LscTblImp7getSizeEv() called");
    return 0;
}

/* Demangled: LscTblFloatImp::cropOut(NSIspTuning::ILscTable::TransformCfg_T const&, NSIspTuning::ILscTable&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK14LscTblFloatImp7cropOutERKN11NSIspTuning9ILscTable14TransformCfg_TERS1_(void) {
    ALOGD("_ZNK14LscTblFloatImp7cropOutERKN11NSIspTuning9ILscTable14TransformCfg_TERS1_() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscTbl::shadingAlign(NSIspTuning::ILscTbl const&, NSIspTuning::ILscTbl const&, NSIspTuning::ILscTbl const&, NSIspTuning::ILscTbl&, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning7ILscTbl12shadingAlignERKS0_S2_S2_RS0_h(void) {
    ALOGD("_ZN11NSIspTuning7ILscTbl12shadingAlignERKS0_S2_S2_RS0_h() called");
    return 0;
}

/* Demangled: LscTblFloatImp::LscTblFloatImp(NSIspTuning::ILscTbl::LscTblImp const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14LscTblFloatImpC1ERKN11NSIspTuning7ILscTbl9LscTblImpE(void) {
    ALOGD("_ZN14LscTblFloatImpC1ERKN11NSIspTuning7ILscTbl9LscTblImpE() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscTbl::LscTblImp::dump(char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK11NSIspTuning7ILscTbl9LscTblImp4dumpEPKc(void) {
    ALOGD("_ZNK11NSIspTuning7ILscTbl9LscTblImp4dumpEPKc() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscTbl::LscTblImp::cropOut(NSIspTuning::ILscTable::TransformCfg_T const&, NSIspTuning::ILscTable&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK11NSIspTuning7ILscTbl9LscTblImp7cropOutERKNS_9ILscTable14TransformCfg_TERS2_(void) {
    ALOGD("_ZNK11NSIspTuning7ILscTbl9LscTblImp7cropOutERKNS_9ILscTable14TransformCfg_TERS2_() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscTbl::setBayer(NSIspTuning::ILscTable::TBL_BAYER_T) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning7ILscTbl8setBayerENS_9ILscTable11TBL_BAYER_TE(void) {
    ALOGD("_ZN11NSIspTuning7ILscTbl8setBayerENS_9ILscTable11TBL_BAYER_TE() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscTbl::LscTblImp::LscTblImp(NSIspTuning::ILscTable::TBL_TYPE_T) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning7ILscTbl9LscTblImpC2ENS_9ILscTable10TBL_TYPE_TE(void) {
    ALOGD("_ZN11NSIspTuning7ILscTbl9LscTblImpC2ENS_9ILscTable10TBL_TYPE_TE() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscTbl::setConfig(NSIspTuning::ILscTable::Config const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning7ILscTbl9setConfigERKNS_9ILscTable6ConfigE(void) {
    ALOGD("_ZN11NSIspTuning7ILscTbl9setConfigERKNS_9ILscTable6ConfigE() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscTbl::getSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK11NSIspTuning7ILscTbl7getSizeEv(void) {
    ALOGD("_ZNK11NSIspTuning7ILscTbl7getSizeEv() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscTbl::getType() const */
extern "C" __attribute__((visibility("default"))) int _ZNK11NSIspTuning7ILscTbl7getTypeEv(void) {
    ALOGD("_ZNK11NSIspTuning7ILscTbl7getTypeEv() called");
    return 0;
}

/* Demangled: __aeabi_memmove */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove(void) {
    ALOGD("__aeabi_memmove() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscTbl::ILscTbl() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning7ILscTblC1Ev(void) {
    ALOGD("_ZN11NSIspTuning7ILscTblC1Ev() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscTbl::~ILscTbl() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning7ILscTblD1Ev(void) {
    ALOGD("_ZN11NSIspTuning7ILscTblD1Ev() called");
    return 0;
}

/* Exported Object: vtable for NSIspTuning::ILscTbl::LscTblImp */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11NSIspTuning7ILscTbl9LscTblImpE = NULL;

/* Demangled: __aeabi_memmove4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove4(void) {
    ALOGD("__aeabi_memmove4() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscTbl::LscTblImp::setBayer(NSIspTuning::ILscTable::TBL_BAYER_T) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning7ILscTbl9LscTblImp8setBayerENS_9ILscTable11TBL_BAYER_TE(void) {
    ALOGD("_ZN11NSIspTuning7ILscTbl9LscTblImp8setBayerENS_9ILscTable11TBL_BAYER_TE() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscTbl::editData(int) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning7ILscTbl8editDataEi(void) {
    ALOGD("_ZN11NSIspTuning7ILscTbl8editDataEi() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscTbl::setConfig(NSIspTuning::ILscTable::ConfigBlk const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning7ILscTbl9setConfigERKNS_9ILscTable9ConfigBlkE(void) {
    ALOGD("_ZN11NSIspTuning7ILscTbl9setConfigERKNS_9ILscTable9ConfigBlkE() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscTable::RsvdData::RsvdData(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning9ILscTable8RsvdDataC1Ej(void) {
    ALOGD("_ZN11NSIspTuning9ILscTable8RsvdDataC1Ej() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: NSIspTuning::ILscTbl::LscTblImp::LscTblImp(NSIspTuning::ILscTable::TBL_TYPE_T, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning7ILscTbl9LscTblImpC2ENS_9ILscTable10TBL_TYPE_TEiiii(void) {
    ALOGD("_ZN11NSIspTuning7ILscTbl9LscTblImpC2ENS_9ILscTable10TBL_TYPE_TEiiii() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >::__swap_out_circular_buffer(std::__1::__split_buffer<unsigned char, std::__1::allocator<unsigned char>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIhNS_9allocatorIhEEE26__swap_out_circular_bufferERNS_14__split_bufferIhRS2_EE(void) {
    ALOGD("_ZNSt3__16vectorIhNS_9allocatorIhEEE26__swap_out_circular_bufferERNS_14__split_bufferIhRS2_EE() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscTbl::LscTblImp::~LscTblImp() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning7ILscTbl9LscTblImpD0Ev(void) {
    ALOGD("_ZN11NSIspTuning7ILscTbl9LscTblImpD0Ev() called");
    return 0;
}

/* Exported Object: vtable for LscTblFloatImp */
extern "C" __attribute__((visibility("default"))) void* _ZTV14LscTblFloatImp = NULL;

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: __aeabi_memmove8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove8(void) {
    ALOGD("__aeabi_memmove8() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscTbl::LscTblImp::editData(int) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning7ILscTbl9LscTblImp8editDataEi(void) {
    ALOGD("_ZN11NSIspTuning7ILscTbl9LscTblImp8editDataEi() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscTbl::LscTblImp::LscTblImp(NSIspTuning::ILscTable::TBL_TYPE_T, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning7ILscTbl9LscTblImpC1ENS_9ILscTable10TBL_TYPE_TEiiii(void) {
    ALOGD("_ZN11NSIspTuning7ILscTbl9LscTblImpC1ENS_9ILscTable10TBL_TYPE_TEiiii() called");
    return 0;
}

/* Exported Object: vtable for LscRatio */
extern "C" __attribute__((visibility("default"))) void* _ZTV8LscRatio = NULL;

/* Demangled: NSIspTuning::ILscTbl::setRsvdData(NSIspTuning::ILscTable::RsvdData const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning7ILscTbl11setRsvdDataERKNS_9ILscTable8RsvdDataE(void) {
    ALOGD("_ZN11NSIspTuning7ILscTbl11setRsvdDataERKNS_9ILscTable8RsvdDataE() called");
    return 0;
}

/* Demangled: LscRatio::updateCfg(NSIspTuning::ILscTable::Config const&) */
extern "C" __attribute__((visibility("default"))) int _ZN8LscRatio9updateCfgERKN11NSIspTuning9ILscTable6ConfigE(void) {
    ALOGD("_ZN8LscRatio9updateCfgERKN11NSIspTuning9ILscTable6ConfigE() called");
    return 0;
}

/* Demangled: LscRatio::LscRatio() */
extern "C" __attribute__((visibility("default"))) int _ZN8LscRatioC2Ev(void) {
    ALOGD("_ZN8LscRatioC2Ev() called");
    return 0;
}

/* Demangled: LscRatio::~LscRatio() */
extern "C" __attribute__((visibility("default"))) int _ZN8LscRatioD2Ev(void) {
    ALOGD("_ZN8LscRatioD2Ev() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscTbl::getBayer() const */
extern "C" __attribute__((visibility("default"))) int _ZNK11NSIspTuning7ILscTbl8getBayerEv(void) {
    ALOGD("_ZNK11NSIspTuning7ILscTbl8getBayerEv() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscTbl::LscTblImp::LscTblImp(NSIspTuning::ILscTable::TBL_TYPE_T) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning7ILscTbl9LscTblImpC1ENS_9ILscTable10TBL_TYPE_TE(void) {
    ALOGD("_ZN11NSIspTuning7ILscTbl9LscTblImpC1ENS_9ILscTable10TBL_TYPE_TE() called");
    return 0;
}

/* Demangled: LscTblFloatImp::reorder(NSIspTuning::ILscTable::TBL_BAYER_T) */
extern "C" __attribute__((visibility("default"))) int _ZN14LscTblFloatImp7reorderEN11NSIspTuning9ILscTable11TBL_BAYER_TE(void) {
    ALOGD("_ZN14LscTblFloatImp7reorderEN11NSIspTuning9ILscTable11TBL_BAYER_TE() called");
    return 0;
}

/* Demangled: LscTblFloatImp::LscTblFloatImp() */
extern "C" __attribute__((visibility("default"))) int _ZN14LscTblFloatImpC1Ev(void) {
    ALOGD("_ZN14LscTblFloatImpC1Ev() called");
    return 0;
}

/* Demangled: LscTblFloatImp::cropToGain(NSIspTuning::ILscTable::TransformCfg_T const&, NSIspTuning::ILscTable&, std::__1::vector<unsigned short*, std::__1::allocator<unsigned short*> >&, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK14LscTblFloatImp10cropToGainERKN11NSIspTuning9ILscTable14TransformCfg_TERS1_RNSt3__16vectorIPtNS6_9allocatorIS8_EEEEj(void) {
    ALOGD("_ZNK14LscTblFloatImp10cropToGainERKN11NSIspTuning9ILscTable14TransformCfg_TERS1_RNSt3__16vectorIPtNS6_9allocatorIS8_EEEEj() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: LscRatio::genHwTbl(unsigned int, unsigned int const*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN8LscRatio8genHwTblEjPKjPj(void) {
    ALOGD("_ZN8LscRatio8genHwTblEjPKjPj() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscTbl::ILscTbl(NSIspTuning::ILscTable::TBL_TYPE_T, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning7ILscTblC1ENS_9ILscTable10TBL_TYPE_TEiiii(void) {
    ALOGD("_ZN11NSIspTuning7ILscTblC1ENS_9ILscTable10TBL_TYPE_TEiiii() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscTbl::ILscTbl() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning7ILscTblC2Ev(void) {
    ALOGD("_ZN11NSIspTuning7ILscTblC2Ev() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscTbl::~ILscTbl() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning7ILscTblD2Ev(void) {
    ALOGD("_ZN11NSIspTuning7ILscTblD2Ev() called");
    return 0;
}

/* Demangled: LscRatio::genGainTbl(unsigned int, unsigned int const*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN8LscRatio10genGainTblEjPKjPj(void) {
    ALOGD("_ZN8LscRatio10genGainTblEjPKjPj() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: NSIspTuning::ILscTbl::editRsvdData() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning7ILscTbl12editRsvdDataEv(void) {
    ALOGD("_ZN11NSIspTuning7ILscTbl12editRsvdDataEv() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscTbl::ILscTbl(NSIspTuning::ILscTbl const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning7ILscTblC1ERKS0_(void) {
    ALOGD("_ZN11NSIspTuning7ILscTblC1ERKS0_() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscTbl::ILscTbl(NSIspTuning::ILscTbl const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning7ILscTblC2ERKS0_(void) {
    ALOGD("_ZN11NSIspTuning7ILscTblC2ERKS0_() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIhNS_9allocatorIhEEE6assignIPhEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIhNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIhNS_9allocatorIhEEE6assignIPhEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIhNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void) {
    ALOGD("_ZNSt3__16vectorIhNS_9allocatorIhEEE6assignIPhEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIhNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscTbl::operator=(NSIspTuning::ILscTbl const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning7ILscTblaSERKS0_(void) {
    ALOGD("_ZN11NSIspTuning7ILscTblaSERKS0_() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscTable::RsvdData::RsvdData(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning9ILscTable8RsvdDataC2Ej(void) {
    ALOGD("_ZN11NSIspTuning9ILscTable8RsvdDataC2Ej() called");
    return 0;
}

/* Demangled: LscTblFloatImp::convert(NSIspTuning::ILscTable&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK14LscTblFloatImp7convertERN11NSIspTuning9ILscTableE(void) {
    ALOGD("_ZNK14LscTblFloatImp7convertERN11NSIspTuning9ILscTableE() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscTbl::ILscTbl(NSIspTuning::ILscTable::TBL_TYPE_T, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning7ILscTblC2ENS_9ILscTable10TBL_TYPE_TEiiii(void) {
    ALOGD("_ZN11NSIspTuning7ILscTblC2ENS_9ILscTable10TBL_TYPE_TEiiii() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscTbl::convert(NSIspTuning::ILscTable&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK11NSIspTuning7ILscTbl7convertERNS_9ILscTableE(void) {
    ALOGD("_ZNK11NSIspTuning7ILscTbl7convertERNS_9ILscTableE() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscTbl::LscTblImp::~LscTblImp() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning7ILscTbl9LscTblImpD1Ev(void) {
    ALOGD("_ZN11NSIspTuning7ILscTbl9LscTblImpD1Ev() called");
    return 0;
}

/* Demangled: LscTblFloatImp::LscTblFloatImp(NSIspTuning::ILscTbl::LscTblImp const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14LscTblFloatImpC2ERKN11NSIspTuning7ILscTbl9LscTblImpE(void) {
    ALOGD("_ZN14LscTblFloatImpC2ERKN11NSIspTuning7ILscTbl9LscTblImpE() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscTbl::setConfig(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning7ILscTbl9setConfigEiiii(void) {
    ALOGD("_ZN11NSIspTuning7ILscTbl9setConfigEiiii() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscTable::RsvdData::RsvdData() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning9ILscTable8RsvdDataC1Ev(void) {
    ALOGD("_ZN11NSIspTuning9ILscTable8RsvdDataC1Ev() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscTbl::LscTblImp::toBuf(NSIspTuning::ILscBuf&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK11NSIspTuning7ILscTbl9LscTblImp5toBufERNS_7ILscBufE(void) {
    ALOGD("_ZNK11NSIspTuning7ILscTbl9LscTblImp5toBufERNS_7ILscBufE() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscTbl::getConfig() const */
extern "C" __attribute__((visibility("default"))) int _ZNK11NSIspTuning7ILscTbl9getConfigEv(void) {
    ALOGD("_ZNK11NSIspTuning7ILscTbl9getConfigEv() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscTbl::reorder(NSIspTuning::ILscTable::TBL_BAYER_T) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning7ILscTbl7reorderENS_9ILscTable11TBL_BAYER_TE(void) {
    ALOGD("_ZN11NSIspTuning7ILscTbl7reorderENS_9ILscTable11TBL_BAYER_TE() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscTbl::editData() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning7ILscTbl8editDataEv(void) {
    ALOGD("_ZN11NSIspTuning7ILscTbl8editDataEv() called");
    return 0;
}

/* Demangled: LscRatio::~LscRatio() */
extern "C" __attribute__((visibility("default"))) int _ZN8LscRatioD0Ev(void) {
    ALOGD("_ZN8LscRatioD0Ev() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscTbl::getRsvdData() const */
extern "C" __attribute__((visibility("default"))) int _ZNK11NSIspTuning7ILscTbl11getRsvdDataEv(void) {
    ALOGD("_ZNK11NSIspTuning7ILscTbl11getRsvdDataEv() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscTbl::getRaTbl(unsigned int, NSIspTuning::ILscTable&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK11NSIspTuning7ILscTbl8getRaTblEjRNS_9ILscTableE(void) {
    ALOGD("_ZNK11NSIspTuning7ILscTbl8getRaTblEjRNS_9ILscTableE() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscTbl::LscTblImp::getData() const */
extern "C" __attribute__((visibility("default"))) int _ZNK11NSIspTuning7ILscTbl9LscTblImp7getDataEv(void) {
    ALOGD("_ZNK11NSIspTuning7ILscTbl9LscTblImp7getDataEv() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscTbl::LscTblImp::setConfig(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning7ILscTbl9LscTblImp9setConfigEiiii(void) {
    ALOGD("_ZN11NSIspTuning7ILscTbl9LscTblImp9setConfigEiiii() called");
    return 0;
}

/* Demangled: LscTblFloatImp::LscTblFloatImp() */
extern "C" __attribute__((visibility("default"))) int _ZN14LscTblFloatImpC2Ev(void) {
    ALOGD("_ZN14LscTblFloatImpC2Ev() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscTbl::LscTblImp::reorder(NSIspTuning::ILscTable::TBL_BAYER_T) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning7ILscTbl9LscTblImp7reorderENS_9ILscTable11TBL_BAYER_TE(void) {
    ALOGD("_ZN11NSIspTuning7ILscTbl9LscTblImp7reorderENS_9ILscTable11TBL_BAYER_TE() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscTbl::getData() const */
extern "C" __attribute__((visibility("default"))) int _ZNK11NSIspTuning7ILscTbl7getDataEv(void) {
    ALOGD("_ZNK11NSIspTuning7ILscTbl7getDataEv() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscTbl::LscTblImp::editData() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning7ILscTbl9LscTblImp8editDataEv(void) {
    ALOGD("_ZN11NSIspTuning7ILscTbl9LscTblImp8editDataEv() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscTbl::~ILscTbl() */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning7ILscTblD0Ev(void) {
    ALOGD("_ZN11NSIspTuning7ILscTblD0Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >::__append(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIhNS_9allocatorIhEEE8__appendEj(void) {
    ALOGD("_ZNSt3__16vectorIhNS_9allocatorIhEEE8__appendEj() called");
    return 0;
}

/* Exported Object: vtable for NSIspTuning::ILscTbl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN11NSIspTuning7ILscTblE = NULL;

/* Demangled: NSIspTuning::ILscTbl::setData(void const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning7ILscTbl7setDataEPKvj(void) {
    ALOGD("_ZN11NSIspTuning7ILscTbl7setDataEPKvj() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscTbl::ILscTbl(NSIspTuning::ILscTable::TBL_TYPE_T) */
extern "C" __attribute__((visibility("default"))) int _ZN11NSIspTuning7ILscTblC2ENS_9ILscTable10TBL_TYPE_TE(void) {
    ALOGD("_ZN11NSIspTuning7ILscTblC2ENS_9ILscTable10TBL_TYPE_TE() called");
    return 0;
}

/* Demangled: LscTblFloatImp::LscTblFloatImp(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14LscTblFloatImpC1Eiiii(void) {
    ALOGD("_ZN14LscTblFloatImpC1Eiiii() called");
    return 0;
}

/* Demangled: LscTblFloatImp::LscTblFloatImp(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14LscTblFloatImpC2Eiiii(void) {
    ALOGD("_ZN14LscTblFloatImpC2Eiiii() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscTbl::LscTblImp::convert(NSIspTuning::ILscTable&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK11NSIspTuning7ILscTbl9LscTblImp7convertERNS_9ILscTableE(void) {
    ALOGD("_ZNK11NSIspTuning7ILscTbl9LscTblImp7convertERNS_9ILscTableE() called");
    return 0;
}

/* Demangled: NSIspTuning::ILscTbl::LscTblImp::getRaTbl(unsigned int, NSIspTuning::ILscTable&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK11NSIspTuning7ILscTbl9LscTblImp8getRaTblEjRNS_9ILscTableE(void) {
    ALOGD("_ZNK11NSIspTuning7ILscTbl9LscTblImp8getRaTblEjRNS_9ILscTableE() called");
    return 0;
}
