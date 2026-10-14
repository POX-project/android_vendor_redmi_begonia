/*
 * Reverse-Engineered ABI Specification for: libcam.hal3a.v3.lsctbl.50.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libcam.hal3a.v3.lsctbl.50.so
 */

#ifndef BEGONIA_RE_LIBCAM_HAL3A_V3_LSCTBL_50_H
#define BEGONIA_RE_LIBCAM_HAL3A_V3_LSCTBL_50_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN11NSIspTuning7ILscTbl9LscTblImp7setDataEPKvj */
/* Demangled: NSIspTuning::ILscTbl::LscTblImp::setData(void const*, unsigned int) */
int _ZN11NSIspTuning7ILscTbl9LscTblImp7setDataEPKvj(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _ZNK11NSIspTuning7ILscTbl7cropOutERKNS_9ILscTable14TransformCfg_TERS1_ */
/* Demangled: NSIspTuning::ILscTbl::cropOut(NSIspTuning::ILscTable::TransformCfg_T const&, NSIspTuning::ILscTable&) const */
int _ZNK11NSIspTuning7ILscTbl7cropOutERKNS_9ILscTable14TransformCfg_TERS1_(void);

/* Symbol: _ZNK11NSIspTuning7ILscTbl9LscTblImp10cropToGainERKNS_9ILscTable14TransformCfg_TERS2_RNSt3__16vectorIPtNS7_9allocatorIS9_EEEEj */
/* Demangled: NSIspTuning::ILscTbl::LscTblImp::cropToGain(NSIspTuning::ILscTable::TransformCfg_T const&, NSIspTuning::ILscTable&, std::__1::vector<unsigned short*, std::__1::allocator<unsigned short*> >&, unsigned int) const */
int _ZNK11NSIspTuning7ILscTbl9LscTblImp10cropToGainERKNS_9ILscTable14TransformCfg_TERS2_RNSt3__16vectorIPtNS7_9allocatorIS9_EEEEj(void);

/* Symbol: _ZNSt3__16vectorIhNS_9allocatorIhEEEC2ERKS3_ */
/* Demangled: std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >::vector(std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > const&) */
int _ZNSt3__16vectorIhNS_9allocatorIhEEEC2ERKS3_(void);

/* Symbol: _ZN11NSIspTuning7ILscTbl9LscTblImpD2Ev */
/* Demangled: NSIspTuning::ILscTbl::LscTblImp::~LscTblImp() */
int _ZN11NSIspTuning7ILscTbl9LscTblImpD2Ev(void);

/* Symbol: _ZN11NSIspTuning7ILscTblC1ENS_9ILscTable10TBL_TYPE_TE */
/* Demangled: NSIspTuning::ILscTbl::ILscTbl(NSIspTuning::ILscTable::TBL_TYPE_T) */
int _ZN11NSIspTuning7ILscTblC1ENS_9ILscTable10TBL_TYPE_TE(void);

/* Symbol: _ZNK11NSIspTuning7ILscTbl10cropToGainERKNS_9ILscTable14TransformCfg_TERS1_RNSt3__16vectorIPtNS6_9allocatorIS8_EEEEj */
/* Demangled: NSIspTuning::ILscTbl::cropToGain(NSIspTuning::ILscTable::TransformCfg_T const&, NSIspTuning::ILscTable&, std::__1::vector<unsigned short*, std::__1::allocator<unsigned short*> >&, unsigned int) const */
int _ZNK11NSIspTuning7ILscTbl10cropToGainERKNS_9ILscTable14TransformCfg_TERS1_RNSt3__16vectorIPtNS6_9allocatorIS8_EEEEj(void);

/* Symbol: _ZNK14LscTblFloatImp4dumpEPKc */
/* Demangled: LscTblFloatImp::dump(char const*) const */
int _ZNK14LscTblFloatImp4dumpEPKc(void);

/* Symbol: _ZNSt3__16vectorIhNS_9allocatorIhEEE11__vallocateEj */
/* Demangled: std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >::__vallocate(unsigned int) */
int _ZNSt3__16vectorIhNS_9allocatorIhEEE11__vallocateEj(void);

/* Symbol: _ZN11NSIspTuning7ILscTbl10makeConfigEiiii */
/* Demangled: NSIspTuning::ILscTbl::makeConfig(int, int, int, int) */
int _ZN11NSIspTuning7ILscTbl10makeConfigEiiii(void);

/* Symbol: _ZN11NSIspTuning7ILscTbl9LscTblImpC1ERKS1_ */
/* Demangled: NSIspTuning::ILscTbl::LscTblImp::LscTblImp(NSIspTuning::ILscTbl::LscTblImp const&) */
int _ZN11NSIspTuning7ILscTbl9LscTblImpC1ERKS1_(void);

/* Symbol: _ZN11NSIspTuning7ILscTbl9LscTblImpC2ERKS1_ */
/* Demangled: NSIspTuning::ILscTbl::LscTblImp::LscTblImp(NSIspTuning::ILscTbl::LscTblImp const&) */
int _ZN11NSIspTuning7ILscTbl9LscTblImpC2ERKS1_(void);

/* Symbol: _ZN11NSIspTuning9ILscTable8RsvdDataC2Ev */
/* Demangled: NSIspTuning::ILscTable::RsvdData::RsvdData() */
int _ZN11NSIspTuning9ILscTable8RsvdDataC2Ev(void);

/* Symbol: _ZNK11NSIspTuning7ILscTbl4dumpEPKc */
/* Demangled: NSIspTuning::ILscTbl::dump(char const*) const */
int _ZNK11NSIspTuning7ILscTbl4dumpEPKc(void);

/* Symbol: _ZN11NSIspTuning7ILscTbl9LscTblImpaSERKS1_ */
/* Demangled: NSIspTuning::ILscTbl::LscTblImp::operator=(NSIspTuning::ILscTbl::LscTblImp const&) */
int _ZN11NSIspTuning7ILscTbl9LscTblImpaSERKS1_(void);

/* Symbol: _ZN11NSIspTuning9ILscTable14createInstanceENS0_10TBL_TYPE_TEiiii */
/* Demangled: NSIspTuning::ILscTable::createInstance(NSIspTuning::ILscTable::TBL_TYPE_T, int, int, int, int) */
int _ZN11NSIspTuning9ILscTable14createInstanceENS0_10TBL_TYPE_TEiiii(void);

/* Symbol: _ZN8LscRatioC1Ev */
/* Demangled: LscRatio::LscRatio() */
int _ZN8LscRatioC1Ev(void);

/* Symbol: _ZN8LscRatioD1Ev */
/* Demangled: LscRatio::~LscRatio() */
int _ZN8LscRatioD1Ev(void);

/* Symbol: _ZNK11NSIspTuning7ILscTbl5toBufERNS_7ILscBufE */
/* Demangled: NSIspTuning::ILscTbl::toBuf(NSIspTuning::ILscBuf&) const */
int _ZNK11NSIspTuning7ILscTbl5toBufERNS_7ILscBufE(void);

/* Symbol: _ZNK11NSIspTuning7ILscTbl9LscTblImp7getSizeEv */
/* Demangled: NSIspTuning::ILscTbl::LscTblImp::getSize() const */
int _ZNK11NSIspTuning7ILscTbl9LscTblImp7getSizeEv(void);

/* Symbol: _ZNK14LscTblFloatImp7cropOutERKN11NSIspTuning9ILscTable14TransformCfg_TERS1_ */
/* Demangled: LscTblFloatImp::cropOut(NSIspTuning::ILscTable::TransformCfg_T const&, NSIspTuning::ILscTable&) const */
int _ZNK14LscTblFloatImp7cropOutERKN11NSIspTuning9ILscTable14TransformCfg_TERS1_(void);

/* Symbol: _ZN11NSIspTuning7ILscTbl12shadingAlignERKS0_S2_S2_RS0_h */
/* Demangled: NSIspTuning::ILscTbl::shadingAlign(NSIspTuning::ILscTbl const&, NSIspTuning::ILscTbl const&, NSIspTuning::ILscTbl const&, NSIspTuning::ILscTbl&, unsigned char) */
int _ZN11NSIspTuning7ILscTbl12shadingAlignERKS0_S2_S2_RS0_h(void);

/* Symbol: _ZN14LscTblFloatImpC1ERKN11NSIspTuning7ILscTbl9LscTblImpE */
/* Demangled: LscTblFloatImp::LscTblFloatImp(NSIspTuning::ILscTbl::LscTblImp const&) */
int _ZN14LscTblFloatImpC1ERKN11NSIspTuning7ILscTbl9LscTblImpE(void);

/* Symbol: _ZNK11NSIspTuning7ILscTbl9LscTblImp4dumpEPKc */
/* Demangled: NSIspTuning::ILscTbl::LscTblImp::dump(char const*) const */
int _ZNK11NSIspTuning7ILscTbl9LscTblImp4dumpEPKc(void);

/* Symbol: _ZNK11NSIspTuning7ILscTbl9LscTblImp7cropOutERKNS_9ILscTable14TransformCfg_TERS2_ */
/* Demangled: NSIspTuning::ILscTbl::LscTblImp::cropOut(NSIspTuning::ILscTable::TransformCfg_T const&, NSIspTuning::ILscTable&) const */
int _ZNK11NSIspTuning7ILscTbl9LscTblImp7cropOutERKNS_9ILscTable14TransformCfg_TERS2_(void);

/* Symbol: _ZN11NSIspTuning7ILscTbl8setBayerENS_9ILscTable11TBL_BAYER_TE */
/* Demangled: NSIspTuning::ILscTbl::setBayer(NSIspTuning::ILscTable::TBL_BAYER_T) */
int _ZN11NSIspTuning7ILscTbl8setBayerENS_9ILscTable11TBL_BAYER_TE(void);

/* Symbol: _ZN11NSIspTuning7ILscTbl9LscTblImpC2ENS_9ILscTable10TBL_TYPE_TE */
/* Demangled: NSIspTuning::ILscTbl::LscTblImp::LscTblImp(NSIspTuning::ILscTable::TBL_TYPE_T) */
int _ZN11NSIspTuning7ILscTbl9LscTblImpC2ENS_9ILscTable10TBL_TYPE_TE(void);

/* Symbol: _ZN11NSIspTuning7ILscTbl9setConfigERKNS_9ILscTable6ConfigE */
/* Demangled: NSIspTuning::ILscTbl::setConfig(NSIspTuning::ILscTable::Config const&) */
int _ZN11NSIspTuning7ILscTbl9setConfigERKNS_9ILscTable6ConfigE(void);

/* Symbol: _ZNK11NSIspTuning7ILscTbl7getSizeEv */
/* Demangled: NSIspTuning::ILscTbl::getSize() const */
int _ZNK11NSIspTuning7ILscTbl7getSizeEv(void);

/* Symbol: _ZNK11NSIspTuning7ILscTbl7getTypeEv */
/* Demangled: NSIspTuning::ILscTbl::getType() const */
int _ZNK11NSIspTuning7ILscTbl7getTypeEv(void);

/* Symbol: __aeabi_memmove */
/* Demangled: __aeabi_memmove */
int __aeabi_memmove(void);

/* Symbol: _ZN11NSIspTuning7ILscTblC1Ev */
/* Demangled: NSIspTuning::ILscTbl::ILscTbl() */
int _ZN11NSIspTuning7ILscTblC1Ev(void);

/* Symbol: _ZN11NSIspTuning7ILscTblD1Ev */
/* Demangled: NSIspTuning::ILscTbl::~ILscTbl() */
int _ZN11NSIspTuning7ILscTblD1Ev(void);

/* Symbol: _ZTVN11NSIspTuning7ILscTbl9LscTblImpE */
/* Demangled: vtable for NSIspTuning::ILscTbl::LscTblImp */
extern void* _ZTVN11NSIspTuning7ILscTbl9LscTblImpE;

/* Symbol: __aeabi_memmove4 */
/* Demangled: __aeabi_memmove4 */
int __aeabi_memmove4(void);

/* Symbol: _ZN11NSIspTuning7ILscTbl9LscTblImp8setBayerENS_9ILscTable11TBL_BAYER_TE */
/* Demangled: NSIspTuning::ILscTbl::LscTblImp::setBayer(NSIspTuning::ILscTable::TBL_BAYER_T) */
int _ZN11NSIspTuning7ILscTbl9LscTblImp8setBayerENS_9ILscTable11TBL_BAYER_TE(void);

/* Symbol: _ZN11NSIspTuning7ILscTbl8editDataEi */
/* Demangled: NSIspTuning::ILscTbl::editData(int) */
int _ZN11NSIspTuning7ILscTbl8editDataEi(void);

/* Symbol: _ZN11NSIspTuning7ILscTbl9setConfigERKNS_9ILscTable9ConfigBlkE */
/* Demangled: NSIspTuning::ILscTbl::setConfig(NSIspTuning::ILscTable::ConfigBlk const&) */
int _ZN11NSIspTuning7ILscTbl9setConfigERKNS_9ILscTable9ConfigBlkE(void);

/* Symbol: _ZN11NSIspTuning9ILscTable8RsvdDataC1Ej */
/* Demangled: NSIspTuning::ILscTable::RsvdData::RsvdData(unsigned int) */
int _ZN11NSIspTuning9ILscTable8RsvdDataC1Ej(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _ZN11NSIspTuning7ILscTbl9LscTblImpC2ENS_9ILscTable10TBL_TYPE_TEiiii */
/* Demangled: NSIspTuning::ILscTbl::LscTblImp::LscTblImp(NSIspTuning::ILscTable::TBL_TYPE_T, int, int, int, int) */
int _ZN11NSIspTuning7ILscTbl9LscTblImpC2ENS_9ILscTable10TBL_TYPE_TEiiii(void);

/* Symbol: _ZNSt3__16vectorIhNS_9allocatorIhEEE26__swap_out_circular_bufferERNS_14__split_bufferIhRS2_EE */
/* Demangled: std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >::__swap_out_circular_buffer(std::__1::__split_buffer<unsigned char, std::__1::allocator<unsigned char>&>&) */
int _ZNSt3__16vectorIhNS_9allocatorIhEEE26__swap_out_circular_bufferERNS_14__split_bufferIhRS2_EE(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: _ZN11NSIspTuning7ILscTbl9LscTblImpD0Ev */
/* Demangled: NSIspTuning::ILscTbl::LscTblImp::~LscTblImp() */
int _ZN11NSIspTuning7ILscTbl9LscTblImpD0Ev(void);

/* Symbol: _ZTV14LscTblFloatImp */
/* Demangled: vtable for LscTblFloatImp */
extern void* _ZTV14LscTblFloatImp;

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: __aeabi_memmove8 */
/* Demangled: __aeabi_memmove8 */
int __aeabi_memmove8(void);

/* Symbol: _ZN11NSIspTuning7ILscTbl9LscTblImp8editDataEi */
/* Demangled: NSIspTuning::ILscTbl::LscTblImp::editData(int) */
int _ZN11NSIspTuning7ILscTbl9LscTblImp8editDataEi(void);

/* Symbol: _ZN11NSIspTuning7ILscTbl9LscTblImpC1ENS_9ILscTable10TBL_TYPE_TEiiii */
/* Demangled: NSIspTuning::ILscTbl::LscTblImp::LscTblImp(NSIspTuning::ILscTable::TBL_TYPE_T, int, int, int, int) */
int _ZN11NSIspTuning7ILscTbl9LscTblImpC1ENS_9ILscTable10TBL_TYPE_TEiiii(void);

/* Symbol: _ZTV8LscRatio */
/* Demangled: vtable for LscRatio */
extern void* _ZTV8LscRatio;

/* Symbol: _ZN11NSIspTuning7ILscTbl11setRsvdDataERKNS_9ILscTable8RsvdDataE */
/* Demangled: NSIspTuning::ILscTbl::setRsvdData(NSIspTuning::ILscTable::RsvdData const&) */
int _ZN11NSIspTuning7ILscTbl11setRsvdDataERKNS_9ILscTable8RsvdDataE(void);

/* Symbol: _ZN8LscRatio9updateCfgERKN11NSIspTuning9ILscTable6ConfigE */
/* Demangled: LscRatio::updateCfg(NSIspTuning::ILscTable::Config const&) */
int _ZN8LscRatio9updateCfgERKN11NSIspTuning9ILscTable6ConfigE(void);

/* Symbol: _ZN8LscRatioC2Ev */
/* Demangled: LscRatio::LscRatio() */
int _ZN8LscRatioC2Ev(void);

/* Symbol: _ZN8LscRatioD2Ev */
/* Demangled: LscRatio::~LscRatio() */
int _ZN8LscRatioD2Ev(void);

/* Symbol: _ZNK11NSIspTuning7ILscTbl8getBayerEv */
/* Demangled: NSIspTuning::ILscTbl::getBayer() const */
int _ZNK11NSIspTuning7ILscTbl8getBayerEv(void);

/* Symbol: _ZN11NSIspTuning7ILscTbl9LscTblImpC1ENS_9ILscTable10TBL_TYPE_TE */
/* Demangled: NSIspTuning::ILscTbl::LscTblImp::LscTblImp(NSIspTuning::ILscTable::TBL_TYPE_T) */
int _ZN11NSIspTuning7ILscTbl9LscTblImpC1ENS_9ILscTable10TBL_TYPE_TE(void);

/* Symbol: _ZN14LscTblFloatImp7reorderEN11NSIspTuning9ILscTable11TBL_BAYER_TE */
/* Demangled: LscTblFloatImp::reorder(NSIspTuning::ILscTable::TBL_BAYER_T) */
int _ZN14LscTblFloatImp7reorderEN11NSIspTuning9ILscTable11TBL_BAYER_TE(void);

/* Symbol: _ZN14LscTblFloatImpC1Ev */
/* Demangled: LscTblFloatImp::LscTblFloatImp() */
int _ZN14LscTblFloatImpC1Ev(void);

/* Symbol: _ZNK14LscTblFloatImp10cropToGainERKN11NSIspTuning9ILscTable14TransformCfg_TERS1_RNSt3__16vectorIPtNS6_9allocatorIS8_EEEEj */
/* Demangled: LscTblFloatImp::cropToGain(NSIspTuning::ILscTable::TransformCfg_T const&, NSIspTuning::ILscTable&, std::__1::vector<unsigned short*, std::__1::allocator<unsigned short*> >&, unsigned int) const */
int _ZNK14LscTblFloatImp10cropToGainERKN11NSIspTuning9ILscTable14TransformCfg_TERS1_RNSt3__16vectorIPtNS6_9allocatorIS8_EEEEj(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: _ZN8LscRatio8genHwTblEjPKjPj */
/* Demangled: LscRatio::genHwTbl(unsigned int, unsigned int const*, unsigned int*) */
int _ZN8LscRatio8genHwTblEjPKjPj(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: _ZN11NSIspTuning7ILscTblC1ENS_9ILscTable10TBL_TYPE_TEiiii */
/* Demangled: NSIspTuning::ILscTbl::ILscTbl(NSIspTuning::ILscTable::TBL_TYPE_T, int, int, int, int) */
int _ZN11NSIspTuning7ILscTblC1ENS_9ILscTable10TBL_TYPE_TEiiii(void);

/* Symbol: _ZN11NSIspTuning7ILscTblC2Ev */
/* Demangled: NSIspTuning::ILscTbl::ILscTbl() */
int _ZN11NSIspTuning7ILscTblC2Ev(void);

/* Symbol: _ZN11NSIspTuning7ILscTblD2Ev */
/* Demangled: NSIspTuning::ILscTbl::~ILscTbl() */
int _ZN11NSIspTuning7ILscTblD2Ev(void);

/* Symbol: _ZN8LscRatio10genGainTblEjPKjPj */
/* Demangled: LscRatio::genGainTbl(unsigned int, unsigned int const*, unsigned int*) */
int _ZN8LscRatio10genGainTblEjPKjPj(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _ZN11NSIspTuning7ILscTbl12editRsvdDataEv */
/* Demangled: NSIspTuning::ILscTbl::editRsvdData() */
int _ZN11NSIspTuning7ILscTbl12editRsvdDataEv(void);

/* Symbol: _ZN11NSIspTuning7ILscTblC1ERKS0_ */
/* Demangled: NSIspTuning::ILscTbl::ILscTbl(NSIspTuning::ILscTbl const&) */
int _ZN11NSIspTuning7ILscTblC1ERKS0_(void);

/* Symbol: _ZN11NSIspTuning7ILscTblC2ERKS0_ */
/* Demangled: NSIspTuning::ILscTbl::ILscTbl(NSIspTuning::ILscTbl const&) */
int _ZN11NSIspTuning7ILscTblC2ERKS0_(void);

/* Symbol: _ZNSt3__16vectorIhNS_9allocatorIhEEE6assignIPhEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIhNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
/* Demangled: _ZNSt3__16vectorIhNS_9allocatorIhEEE6assignIPhEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIhNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
int _ZNSt3__16vectorIhNS_9allocatorIhEEE6assignIPhEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIhNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: _ZN11NSIspTuning7ILscTblaSERKS0_ */
/* Demangled: NSIspTuning::ILscTbl::operator=(NSIspTuning::ILscTbl const&) */
int _ZN11NSIspTuning7ILscTblaSERKS0_(void);

/* Symbol: _ZN11NSIspTuning9ILscTable8RsvdDataC2Ej */
/* Demangled: NSIspTuning::ILscTable::RsvdData::RsvdData(unsigned int) */
int _ZN11NSIspTuning9ILscTable8RsvdDataC2Ej(void);

/* Symbol: _ZNK14LscTblFloatImp7convertERN11NSIspTuning9ILscTableE */
/* Demangled: LscTblFloatImp::convert(NSIspTuning::ILscTable&) const */
int _ZNK14LscTblFloatImp7convertERN11NSIspTuning9ILscTableE(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: _ZN11NSIspTuning7ILscTblC2ENS_9ILscTable10TBL_TYPE_TEiiii */
/* Demangled: NSIspTuning::ILscTbl::ILscTbl(NSIspTuning::ILscTable::TBL_TYPE_T, int, int, int, int) */
int _ZN11NSIspTuning7ILscTblC2ENS_9ILscTable10TBL_TYPE_TEiiii(void);

/* Symbol: _ZNK11NSIspTuning7ILscTbl7convertERNS_9ILscTableE */
/* Demangled: NSIspTuning::ILscTbl::convert(NSIspTuning::ILscTable&) const */
int _ZNK11NSIspTuning7ILscTbl7convertERNS_9ILscTableE(void);

/* Symbol: _ZN11NSIspTuning7ILscTbl9LscTblImpD1Ev */
/* Demangled: NSIspTuning::ILscTbl::LscTblImp::~LscTblImp() */
int _ZN11NSIspTuning7ILscTbl9LscTblImpD1Ev(void);

/* Symbol: _ZN14LscTblFloatImpC2ERKN11NSIspTuning7ILscTbl9LscTblImpE */
/* Demangled: LscTblFloatImp::LscTblFloatImp(NSIspTuning::ILscTbl::LscTblImp const&) */
int _ZN14LscTblFloatImpC2ERKN11NSIspTuning7ILscTbl9LscTblImpE(void);

/* Symbol: _ZN11NSIspTuning7ILscTbl9setConfigEiiii */
/* Demangled: NSIspTuning::ILscTbl::setConfig(int, int, int, int) */
int _ZN11NSIspTuning7ILscTbl9setConfigEiiii(void);

/* Symbol: _ZN11NSIspTuning9ILscTable8RsvdDataC1Ev */
/* Demangled: NSIspTuning::ILscTable::RsvdData::RsvdData() */
int _ZN11NSIspTuning9ILscTable8RsvdDataC1Ev(void);

/* Symbol: _ZNK11NSIspTuning7ILscTbl9LscTblImp5toBufERNS_7ILscBufE */
/* Demangled: NSIspTuning::ILscTbl::LscTblImp::toBuf(NSIspTuning::ILscBuf&) const */
int _ZNK11NSIspTuning7ILscTbl9LscTblImp5toBufERNS_7ILscBufE(void);

/* Symbol: _ZNK11NSIspTuning7ILscTbl9getConfigEv */
/* Demangled: NSIspTuning::ILscTbl::getConfig() const */
int _ZNK11NSIspTuning7ILscTbl9getConfigEv(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: _ZN11NSIspTuning7ILscTbl7reorderENS_9ILscTable11TBL_BAYER_TE */
/* Demangled: NSIspTuning::ILscTbl::reorder(NSIspTuning::ILscTable::TBL_BAYER_T) */
int _ZN11NSIspTuning7ILscTbl7reorderENS_9ILscTable11TBL_BAYER_TE(void);

/* Symbol: _ZN11NSIspTuning7ILscTbl8editDataEv */
/* Demangled: NSIspTuning::ILscTbl::editData() */
int _ZN11NSIspTuning7ILscTbl8editDataEv(void);

/* Symbol: _ZN8LscRatioD0Ev */
/* Demangled: LscRatio::~LscRatio() */
int _ZN8LscRatioD0Ev(void);

/* Symbol: _ZNK11NSIspTuning7ILscTbl11getRsvdDataEv */
/* Demangled: NSIspTuning::ILscTbl::getRsvdData() const */
int _ZNK11NSIspTuning7ILscTbl11getRsvdDataEv(void);

/* Symbol: _ZNK11NSIspTuning7ILscTbl8getRaTblEjRNS_9ILscTableE */
/* Demangled: NSIspTuning::ILscTbl::getRaTbl(unsigned int, NSIspTuning::ILscTable&) const */
int _ZNK11NSIspTuning7ILscTbl8getRaTblEjRNS_9ILscTableE(void);

/* Symbol: _ZNK11NSIspTuning7ILscTbl9LscTblImp7getDataEv */
/* Demangled: NSIspTuning::ILscTbl::LscTblImp::getData() const */
int _ZNK11NSIspTuning7ILscTbl9LscTblImp7getDataEv(void);

/* Symbol: _ZN11NSIspTuning7ILscTbl9LscTblImp9setConfigEiiii */
/* Demangled: NSIspTuning::ILscTbl::LscTblImp::setConfig(int, int, int, int) */
int _ZN11NSIspTuning7ILscTbl9LscTblImp9setConfigEiiii(void);

/* Symbol: _ZN14LscTblFloatImpC2Ev */
/* Demangled: LscTblFloatImp::LscTblFloatImp() */
int _ZN14LscTblFloatImpC2Ev(void);

/* Symbol: _ZN11NSIspTuning7ILscTbl9LscTblImp7reorderENS_9ILscTable11TBL_BAYER_TE */
/* Demangled: NSIspTuning::ILscTbl::LscTblImp::reorder(NSIspTuning::ILscTable::TBL_BAYER_T) */
int _ZN11NSIspTuning7ILscTbl9LscTblImp7reorderENS_9ILscTable11TBL_BAYER_TE(void);

/* Symbol: _ZNK11NSIspTuning7ILscTbl7getDataEv */
/* Demangled: NSIspTuning::ILscTbl::getData() const */
int _ZNK11NSIspTuning7ILscTbl7getDataEv(void);

/* Symbol: _ZN11NSIspTuning7ILscTbl9LscTblImp8editDataEv */
/* Demangled: NSIspTuning::ILscTbl::LscTblImp::editData() */
int _ZN11NSIspTuning7ILscTbl9LscTblImp8editDataEv(void);

/* Symbol: _ZN11NSIspTuning7ILscTblD0Ev */
/* Demangled: NSIspTuning::ILscTbl::~ILscTbl() */
int _ZN11NSIspTuning7ILscTblD0Ev(void);

/* Symbol: _ZNSt3__16vectorIhNS_9allocatorIhEEE8__appendEj */
/* Demangled: std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >::__append(unsigned int) */
int _ZNSt3__16vectorIhNS_9allocatorIhEEE8__appendEj(void);

/* Symbol: _ZTVN11NSIspTuning7ILscTblE */
/* Demangled: vtable for NSIspTuning::ILscTbl */
extern void* _ZTVN11NSIspTuning7ILscTblE;

/* Symbol: _ZN11NSIspTuning7ILscTbl7setDataEPKvj */
/* Demangled: NSIspTuning::ILscTbl::setData(void const*, unsigned int) */
int _ZN11NSIspTuning7ILscTbl7setDataEPKvj(void);

/* Symbol: _ZN11NSIspTuning7ILscTblC2ENS_9ILscTable10TBL_TYPE_TE */
/* Demangled: NSIspTuning::ILscTbl::ILscTbl(NSIspTuning::ILscTable::TBL_TYPE_T) */
int _ZN11NSIspTuning7ILscTblC2ENS_9ILscTable10TBL_TYPE_TE(void);

/* Symbol: _ZN14LscTblFloatImpC1Eiiii */
/* Demangled: LscTblFloatImp::LscTblFloatImp(int, int, int, int) */
int _ZN14LscTblFloatImpC1Eiiii(void);

/* Symbol: _ZN14LscTblFloatImpC2Eiiii */
/* Demangled: LscTblFloatImp::LscTblFloatImp(int, int, int, int) */
int _ZN14LscTblFloatImpC2Eiiii(void);

/* Symbol: _ZNK11NSIspTuning7ILscTbl9LscTblImp7convertERNS_9ILscTableE */
/* Demangled: NSIspTuning::ILscTbl::LscTblImp::convert(NSIspTuning::ILscTable&) const */
int _ZNK11NSIspTuning7ILscTbl9LscTblImp7convertERNS_9ILscTableE(void);

/* Symbol: _ZNK11NSIspTuning7ILscTbl9LscTblImp8getRaTblEjRNS_9ILscTableE */
/* Demangled: NSIspTuning::ILscTbl::LscTblImp::getRaTbl(unsigned int, NSIspTuning::ILscTable&) const */
int _ZNK11NSIspTuning7ILscTbl9LscTblImp8getRaTblEjRNS_9ILscTableE(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBCAM_HAL3A_V3_LSCTBL_50_H */
