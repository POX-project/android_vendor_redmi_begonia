/*
 * Reverse-Engineered ABI Specification for: libcam.halisp.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libcam.halisp.so
 */

#ifndef BEGONIA_RE_LIBCAM_HALISP_H
#define BEGONIA_RE_LIBCAM_HALISP_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6NS3Av39HalIspImp10ConfigP1CbEv */
/* Demangled: NS3Av3::HalIspImp::ConfigP1Cb() */
int _ZN6NS3Av39HalIspImp10ConfigP1CbEv(void);

/* Symbol: _ZN6NS3Av39HalIspImp15destroyInstanceEPKc */
/* Demangled: NS3Av3::HalIspImp::destroyInstance(char const*) */
int _ZN6NS3Av39HalIspImp15destroyInstanceEPKc(void);

/* Symbol: _ZN6NS3Av39HalIspImp3getEjRNS_9MetaSet_TE */
/* Demangled: NS3Av3::HalIspImp::get(unsigned int, NS3Av3::MetaSet_T&) */
int _ZN6NS3Av39HalIspImp3getEjRNS_9MetaSet_TE(void);

/* Symbol: _ZN6NS3Av39HalIspImp6uninitEPKc */
/* Demangled: NS3Av3::HalIspImp::uninit(char const*) */
int _ZN6NS3Av39HalIspImp6uninitEPKc(void);

/* Symbol: _ZN6NS3Av39HalIspImp7dumpIspEiRKNS_9MetaSet_TEPNS_11TuningParamEPS1_ */
/* Demangled: NS3Av3::HalIspImp::dumpIsp(int, NS3Av3::MetaSet_T const&, NS3Av3::TuningParam*, NS3Av3::MetaSet_T*) */
int _ZN6NS3Av39HalIspImp7dumpIspEiRKNS_9MetaSet_TEPNS_11TuningParamEPS1_(void);

/* Symbol: _ZN6NS3Av39HalIspImp9m_u4LogEnE */
/* Demangled: NS3Av3::HalIspImp::m_u4LogEn */
extern void* _ZN6NS3Av39HalIspImp9m_u4LogEnE;

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _ZN6NS3Av39HalIspImp10UninitP1CbEv */
/* Demangled: NS3Av3::HalIspImp::UninitP1Cb() */
int _ZN6NS3Av39HalIspImp10UninitP1CbEv(void);

/* Symbol: _ZN6NS3Av39HalIspImp11sendIspCtrlENS_10EISPCtrl_TEll */
/* Demangled: NS3Av3::HalIspImp::sendIspCtrl(NS3Av3::EISPCtrl_T, long, long) */
int _ZN6NS3Av39HalIspImp11sendIspCtrlENS_10EISPCtrl_TEll(void);

/* Symbol: _ZN6NS3Av39HalIspImp8detachCbEv */
/* Demangled: NS3Av3::HalIspImp::detachCb() */
int _ZN6NS3Av39HalIspImp8detachCbEv(void);

/* Symbol: _ZN6NS3Av39HalIspImp8setP2IspEiRKNS_9MetaSet_TEPNS_11TuningParamEPS1_ */
/* Demangled: NS3Av3::HalIspImp::setP2Isp(int, NS3Av3::MetaSet_T const&, NS3Av3::TuningParam*, NS3Av3::MetaSet_T*) */
int _ZN6NS3Av39HalIspImp8setP2IspEiRKNS_9MetaSet_TEPNS_11TuningParamEPS1_(void);

/* Symbol: _ZN6NS3Av39HalIspImp14createInstanceEiPKc */
/* Demangled: NS3Av3::HalIspImp::createInstance(int, char const*) */
int _ZN6NS3Av39HalIspImp14createInstanceEiPKc(void);

/* Symbol: _ZN6NS3Av39HalIspImpC1Ei */
/* Demangled: NS3Av3::HalIspImp::HalIspImp(int) */
int _ZN6NS3Av39HalIspImpC1Ei(void);

/* Symbol: _ZN6NS3Av39HalIspImp10setFdGammaEiPij */
/* Demangled: NS3Av3::HalIspImp::setFdGamma(int, int*, unsigned int) */
int _ZN6NS3Av39HalIspImp10setFdGammaEiPij(void);

/* Symbol: _ZN6NS3Av39HalIspImp4initEPKc */
/* Demangled: NS3Av3::HalIspImp::init(char const*) */
int _ZN6NS3Av39HalIspImp4initEPKc(void);

/* Symbol: _ZN6NS3Av39HalIspImp6configERKNS_12ConfigInfo_TE */
/* Demangled: NS3Av3::HalIspImp::config(NS3Av3::ConfigInfo_T const&) */
int _ZN6NS3Av39HalIspImp6configERKNS_12ConfigInfo_TE(void);

/* Symbol: _ZN6NS3Av39HalIspImpC2Ei */
/* Demangled: NS3Av3::HalIspImp::HalIspImp(int) */
int _ZN6NS3Av39HalIspImpC2Ei(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _ZN6NS3Av39HalIspImp18queryISPBufferInfoERNS_11Buffer_InfoE */
/* Demangled: NS3Av3::HalIspImp::queryISPBufferInfo(NS3Av3::Buffer_Info&) */
int _ZN6NS3Av39HalIspImp18queryISPBufferInfoERNS_11Buffer_InfoE(void);

/* Symbol: _ZN6NS3Av39HalIspImp11setFDEnableEi */
/* Demangled: NS3Av3::HalIspImp::setFDEnable(int) */
int _ZN6NS3Av39HalIspImp11setFDEnableEi(void);

/* Symbol: _ZN6NS3Av39HalIspImp13setSensorModeEi */
/* Demangled: NS3Av3::HalIspImp::setSensorMode(int) */
int _ZN6NS3Av39HalIspImp13setSensorModeEi(void);

/* Symbol: _ZN6NS3Av39HalIspImp4stopEv */
/* Demangled: NS3Av3::HalIspImp::stop() */
int _ZN6NS3Av39HalIspImp4stopEv(void);

/* Symbol: _ZN6NS3Av39HalIspImp6getCurEjRNS_9MetaSet_TE */
/* Demangled: NS3Av3::HalIspImp::getCur(unsigned int, NS3Av3::MetaSet_T&) */
int _ZN6NS3Av39HalIspImp6getCurEjRNS_9MetaSet_TE(void);

/* Symbol: _ZN6NS3Av39HalIspImp6resumeEi */
/* Demangled: NS3Av3::HalIspImp::resume(int) */
int _ZN6NS3Av39HalIspImp6resumeEi(void);

/* Symbol: _ZN6NS3Av39HalIspImp8InitP1CbEv */
/* Demangled: NS3Av3::HalIspImp::InitP1Cb() */
int _ZN6NS3Av39HalIspImp8InitP1CbEv(void);

/* Symbol: _ZN6NS3Av39HalIspImp8attachCbEv */
/* Demangled: NS3Av3::HalIspImp::attachCb() */
int _ZN6NS3Av39HalIspImp8attachCbEv(void);

/* Symbol: createInstance_HalISP */
/* Demangled: createInstance_HalISP */
int createInstance_HalISP(void);

/* Symbol: _ZN6NS3Av39HalIspImp5startEv */
/* Demangled: NS3Av3::HalIspImp::start() */
int _ZN6NS3Av39HalIspImp5startEv(void);

/* Symbol: _ZN6NS3Av39HalIspImp9setFDInfoEPv */
/* Demangled: NS3Av3::HalIspImp::setFDInfo(void*) */
int _ZN6NS3Av39HalIspImp9setFDInfoEPv(void);

/* Symbol: _ZN6NS3Av39HalIspImp8setP1IspERKNSt3__16vectorIPNS_9MetaSet_TENS1_9allocatorIS4_EEEEi */
/* Demangled: NS3Av3::HalIspImp::setP1Isp(std::__1::vector<NS3Av3::MetaSet_T*, std::__1::allocator<NS3Av3::MetaSet_T*> > const&, int) */
int _ZN6NS3Av39HalIspImp8setP1IspERKNSt3__16vectorIPNS_9MetaSet_TENS1_9allocatorIS4_EEEEi(void);

/* Symbol: _ZN6NS3Av39HalIspImp9setOTInfoEPv */
/* Demangled: NS3Av3::HalIspImp::setOTInfo(void*) */
int _ZN6NS3Av39HalIspImp9setOTInfoEPv(void);

/* Symbol: _ZTVN6NS3Av39HalIspImpE */
/* Demangled: vtable for NS3Av3::HalIspImp */
extern void* _ZTVN6NS3Av39HalIspImpE;

__END_DECLS

#endif /* BEGONIA_RE_LIBCAM_HALISP_H */
