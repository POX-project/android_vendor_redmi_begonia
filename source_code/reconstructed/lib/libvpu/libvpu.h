/*
 * Reverse-Engineered ABI Specification for: libvpu.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libvpu.so
 */

#ifndef BEGONIA_RE_LIBVPU_H
#define BEGONIA_RE_LIBVPU_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN10VpuAlgoImpC1Ev */
/* Demangled: VpuAlgoImp::VpuAlgoImp() */
int _ZN10VpuAlgoImpC1Ev(void);

/* Symbol: _ZN10VpuAlgoImpD0Ev */
/* Demangled: VpuAlgoImp::~VpuAlgoImp() */
int _ZN10VpuAlgoImpD0Ev(void);

/* Symbol: _ZN12VpuStreamImp5dequeEv */
/* Demangled: VpuStreamImp::deque() */
int _ZN12VpuStreamImp5dequeEv(void);

/* Symbol: _ZN12VpuStreamImp7freeMemEP12VpuMemBuffer */
/* Demangled: VpuStreamImp::freeMem(VpuMemBuffer*) */
int _ZN12VpuStreamImp7freeMemEP12VpuMemBuffer(void);

/* Symbol: _ZN13VpuRequestImp9munmapMVAEv */
/* Demangled: VpuRequestImp::munmapMVA() */
int _ZN13VpuRequestImp9munmapMVAEv(void);

/* Symbol: _ZNSt3__16vectorI9VpuStatusNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_ */
/* Demangled: void std::__1::vector<VpuStatus, std::__1::allocator<VpuStatus> >::__push_back_slow_path<VpuStatus const&>(VpuStatus const&) */
int _ZNSt3__16vectorI9VpuStatusNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void);

/* Symbol: _ZN13userAllocatorC2Ev */
/* Demangled: userAllocator::userAllocator() */
int _ZN13userAllocatorC2Ev(void);

/* Symbol: _ZN13userAllocatorD1Ev */
/* Demangled: userAllocator::~userAllocator() */
int _ZN13userAllocatorD1Ev(void);

/* Symbol: _ZN10VpuAlgoImpC2Ev */
/* Demangled: VpuAlgoImp::VpuAlgoImp() */
int _ZN10VpuAlgoImpC2Ev(void);

/* Symbol: _ZN10VpuAlgoImpD1Ev */
/* Demangled: VpuAlgoImp::~VpuAlgoImp() */
int _ZN10VpuAlgoImpD1Ev(void);

/* Symbol: _ZN12VpuStreamImp12getVpuStatusERNSt3__16vectorI9VpuStatusNS0_9allocatorIS2_EEEE */
/* Demangled: VpuStreamImp::getVpuStatus(std::__1::vector<VpuStatus, std::__1::allocator<VpuStatus> >&) */
int _ZN12VpuStreamImp12getVpuStatusERNSt3__16vectorI9VpuStatusNS0_9allocatorIS2_EEEE(void);

/* Symbol: _ZN13VpuRequestImp11setPropertyEPvi */
/* Demangled: VpuRequestImp::setProperty(void*, int) */
int _ZN13VpuRequestImp11setPropertyEPvi(void);

/* Symbol: _ZN13userAllocator7syncMemER18vpuMemMallocHandle */
/* Demangled: userAllocator::syncMem(vpuMemMallocHandle&) */
int _ZN13userAllocator7syncMemER18vpuMemMallocHandle(void);

/* Symbol: _ZN13userAllocatorD2Ev */
/* Demangled: userAllocator::~userAllocator() */
int _ZN13userAllocatorD2Ev(void);

/* Symbol: _Z16earaNotifyJobEndiyjiRii */
/* Demangled: earaNotifyJobEnd(int, unsigned long long, unsigned int, int, int&, int) */
int _Z16earaNotifyJobEndiyjiRii(void);

/* Symbol: _ZN10VpuAlgoImpD2Ev */
/* Demangled: VpuAlgoImp::~VpuAlgoImp() */
int _ZN10VpuAlgoImpD2Ev(void);

/* Symbol: _ZN12VpuStreamImp10createAlgoEPcS0_jj */
/* Demangled: VpuStreamImp::createAlgo(char*, char*, unsigned int, unsigned int) */
int _ZN12VpuStreamImp10createAlgoEPcS0_jj(void);

/* Symbol: _ZN13VpuRequestImp12initEaraInfoE13VpuModuleType */
/* Demangled: VpuRequestImp::initEaraInfo(VpuModuleType) */
int _ZN13VpuRequestImp12initEaraInfoE13VpuModuleType(void);

/* Symbol: _ZN13VpuRequestImp9addBufferEP7VpuPortR9VpuBuffer */
/* Demangled: VpuRequestImp::addBuffer(VpuPort*, VpuBuffer&) */
int _ZN13VpuRequestImp9addBufferEP7VpuPortR9VpuBuffer(void);

/* Symbol: _Z12closeEaraInfv */
/* Demangled: closeEaraInf() */
int _Z12closeEaraInfv(void);

/* Symbol: _Z21calcBoostvalueFromOpph */
/* Demangled: calcBoostvalueFromOpp(unsigned char) */
int _Z21calcBoostvalueFromOpph(void);

/* Symbol: _ZN10VpuAlgoImp7releaseEP10VpuRequest */
/* Demangled: VpuAlgoImp::release(VpuRequest*) */
int _ZN10VpuAlgoImp7releaseEP10VpuRequest(void);

/* Symbol: _Z21calcOppFromBoostValueh */
/* Demangled: calcOppFromBoostValue(unsigned char) */
int _Z21calcOppFromBoostValueh(void);

/* Symbol: _ZN13userAllocator8allocMemEjjR18vpuMemMallocHandle */
/* Demangled: userAllocator::allocMem(unsigned int, unsigned int, vpuMemMallocHandle&) */
int _ZN13userAllocator8allocMemEjjR18vpuMemMallocHandle(void);

/* Symbol: _ZN13VpuRequestImp13clearEaraInfoEv */
/* Demangled: VpuRequestImp::clearEaraInfo() */
int _ZN13VpuRequestImp13clearEaraInfoEv(void);

/* Symbol: _ZN15vpuMemAllocator8allocMemEjj10vpuMemType */
/* Demangled: vpuMemAllocator::allocMem(unsigned int, unsigned int, vpuMemType) */
int _ZN15vpuMemAllocator8allocMemEjj10vpuMemType(void);

/* Symbol: _ZNSt3__16vectorINS0_IiNS_9allocatorIiEEEENS1_IS3_EEE21__push_back_slow_pathIRKS3_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::vector<int, std::__1::allocator<int> >, std::__1::allocator<std::__1::vector<int, std::__1::allocator<int> > > >::__push_back_slow_path<std::__1::vector<int, std::__1::allocator<int> > const&>(std::__1::vector<int, std::__1::allocator<int> > const&) */
int _ZNSt3__16vectorINS0_IiNS_9allocatorIiEEEENS1_IS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void);

/* Symbol: _ZN12ionAllocator9importMemEijR15vpuMemIonHandle */
/* Demangled: ionAllocator::importMem(int, unsigned int, vpuMemIonHandle&) */
int _ZN12ionAllocator9importMemEijR15vpuMemIonHandle(void);

/* Symbol: _ZN12ionAllocatorC1Ev */
/* Demangled: ionAllocator::ionAllocator() */
int _ZN12ionAllocatorC1Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEP7VpuAlgoEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE4findIS7_EENS_15__tree_iteratorISA_PNS_11__tree_nodeISA_PvEEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VpuAlgo*>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VpuAlgo*>, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VpuAlgo*>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VpuAlgo*>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VpuAlgo*> > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEP7VpuAlgoEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE4findIS7_EENS_15__tree_iteratorISA_PNS_11__tree_nodeISA_PvEEiEERKT_(void);

/* Symbol: _ZN12ionAllocatorC2Ev */
/* Demangled: ionAllocator::ionAllocator() */
int _ZN12ionAllocatorC2Ev(void);

/* Symbol: _ZN12ionAllocatorD1Ev */
/* Demangled: ionAllocator::~ionAllocator() */
int _ZN12ionAllocatorD1Ev(void);

/* Symbol: _ZN13userAllocator7freeMemER18vpuMemMallocHandle */
/* Demangled: userAllocator::freeMem(vpuMemMallocHandle&) */
int _ZN13userAllocator7freeMemER18vpuMemMallocHandle(void);

/* Symbol: _ZN12VpuStreamImp11packRequestERNSt3__16vectorIP10VpuRequestNS0_9allocatorIS3_EEEE */
/* Demangled: VpuStreamImp::packRequest(std::__1::vector<VpuRequest*, std::__1::allocator<VpuRequest*> >&) */
int _ZN12VpuStreamImp11packRequestERNSt3__16vectorIP10VpuRequestNS0_9allocatorIS3_EEEE(void);

/* Symbol: _ZN12ionAllocatorD2Ev */
/* Demangled: ionAllocator::~ionAllocator() */
int _ZN12ionAllocatorD2Ev(void);

/* Symbol: _ZN13VpuRequestImpC1EP10VpuAlgoImp */
/* Demangled: VpuRequestImp::VpuRequestImp(VpuAlgoImp*) */
int _ZN13VpuRequestImpC1EP10VpuAlgoImp(void);

/* Symbol: _ZN13VpuRequestImpC2EP10VpuAlgoImp */
/* Demangled: VpuRequestImp::VpuRequestImp(VpuAlgoImp*) */
int _ZN13VpuRequestImpC2EP10VpuAlgoImp(void);

/* Symbol: _ZN13VpuRequestImpD0Ev */
/* Demangled: VpuRequestImp::~VpuRequestImp() */
int _ZN13VpuRequestImpD0Ev(void);

/* Symbol: _ZN15vpuMemAllocator7queryPaEy */
/* Demangled: vpuMemAllocator::queryPa(unsigned long long) */
int _ZN15vpuMemAllocator7queryPaEy(void);

/* Symbol: _ZN13VpuRequestImpD1Ev */
/* Demangled: VpuRequestImp::~VpuRequestImp() */
int _ZN13VpuRequestImpD1Ev(void);

/* Symbol: _ZN12dmaAllocator7syncMemER15vpuMemDmaHandle */
/* Demangled: dmaAllocator::syncMem(vpuMemDmaHandle&) */
int _ZN12dmaAllocator7syncMemER15vpuMemDmaHandle(void);

/* Symbol: _Z19getJobIdFromPointerPv */
/* Demangled: getJobIdFromPointer(void*) */
int _Z19getJobIdFromPointerPv(void);

/* Symbol: _ZN12VpuStreamImp8tryEnqueEP10VpuRequest */
/* Demangled: VpuStreamImp::tryEnque(VpuRequest*) */
int _ZN12VpuStreamImp8tryEnqueEP10VpuRequest(void);

/* Symbol: _ZN12VpuStreamImpD0Ev */
/* Demangled: VpuStreamImp::~VpuStreamImp() */
int _ZN12VpuStreamImpD0Ev(void);

/* Symbol: _ZN13VpuRequestImpD2Ev */
/* Demangled: VpuRequestImp::~VpuRequestImp() */
int _ZN13VpuRequestImpD2Ev(void);

/* Symbol: _ZN7VpuUtilC1Ev */
/* Demangled: VpuUtil::VpuUtil() */
int _ZN7VpuUtilC1Ev(void);

/* Symbol: _ZN12VpuStreamImp13unpackRequestERNSt3__16vectorIP10VpuRequestNS0_9allocatorIS3_EEEE */
/* Demangled: VpuStreamImp::unpackRequest(std::__1::vector<VpuRequest*, std::__1::allocator<VpuRequest*> >&) */
int _ZN12VpuStreamImp13unpackRequestERNSt3__16vectorIP10VpuRequestNS0_9allocatorIS3_EEEE(void);

/* Symbol: _ZN12VpuStreamImpD1Ev */
/* Demangled: VpuStreamImp::~VpuStreamImp() */
int _ZN12VpuStreamImpD1Ev(void);

/* Symbol: _ZN13VpuRequestImp9earaBeginEv */
/* Demangled: VpuRequestImp::earaBegin() */
int _ZN13VpuRequestImp9earaBeginEv(void);

/* Symbol: _ZN15vpuMemAllocator7syncMemEP12VpuMemBuffer */
/* Demangled: vpuMemAllocator::syncMem(VpuMemBuffer*) */
int _ZN15vpuMemAllocator7syncMemEP12VpuMemBuffer(void);

/* Symbol: _ZN7VpuUtilC2Ev */
/* Demangled: VpuUtil::VpuUtil() */
int _ZN7VpuUtilC2Ev(void);

/* Symbol: _ZN7VpuUtilD1Ev */
/* Demangled: VpuUtil::~VpuUtil() */
int _ZN7VpuUtilD1Ev(void);

/* Symbol: _ZNSt3__14listIP13VpuRequestImpNS_9allocatorIS2_EEE6removeERKS2_ */
/* Demangled: std::__1::list<VpuRequestImp*, std::__1::allocator<VpuRequestImp*> >::remove(VpuRequestImp* const&) */
int _ZNSt3__14listIP13VpuRequestImpNS_9allocatorIS2_EEE6removeERKS2_(void);

/* Symbol: _Z18earaNotifyJobBeginiRy */
/* Demangled: earaNotifyJobBegin(int, unsigned long long&) */
int _Z18earaNotifyJobBeginiRy(void);

/* Symbol: _ZN10VpuAlgoImp7acquireEv */
/* Demangled: VpuAlgoImp::acquire() */
int _ZN10VpuAlgoImp7acquireEv(void);

/* Symbol: _ZN12VpuStreamImpD2Ev */
/* Demangled: VpuStreamImp::~VpuStreamImp() */
int _ZN12VpuStreamImpD2Ev(void);

/* Symbol: _ZN13VpuRequestImp5resetEv */
/* Demangled: VpuRequestImp::reset() */
int _ZN13VpuRequestImp5resetEv(void);

/* Symbol: _ZN7VpuUtilD2Ev */
/* Demangled: VpuUtil::~VpuUtil() */
int _ZN7VpuUtilD2Ev(void);

/* Symbol: _ZTV10VpuAlgoImp */
/* Demangled: vtable for VpuAlgoImp */
extern void* _ZTV10VpuAlgoImp;

/* Symbol: _ZN12dmaAllocator8allocMemEjjR15vpuMemDmaHandle */
/* Demangled: dmaAllocator::allocMem(unsigned int, unsigned int, vpuMemDmaHandle&) */
int _ZN12dmaAllocator8allocMemEjjR15vpuMemDmaHandle(void);

/* Symbol: _Z14getVpuLogLevelv */
/* Demangled: getVpuLogLevel() */
int _Z14getVpuLogLevelv(void);

/* Symbol: _ZN12VpuStreamImp5flushEv */
/* Demangled: VpuStreamImp::flush() */
int _ZN12VpuStreamImp5flushEv(void);

/* Symbol: _ZN12VpuStreamImp7acquireEP7VpuAlgo13VpuModuleType */
/* Demangled: VpuStreamImp::acquire(VpuAlgo*, VpuModuleType) */
int _ZN12VpuStreamImp7acquireEP7VpuAlgo13VpuModuleType(void);

/* Symbol: _ZN12VpuStreamImp7getAlgoEPc */
/* Demangled: VpuStreamImp::getAlgo(char*) */
int _ZN12VpuStreamImp7getAlgoEPc(void);

/* Symbol: _ZN12VpuStreamImp7releaseEP10VpuRequest */
/* Demangled: VpuStreamImp::release(VpuRequest*) */
int _ZN12VpuStreamImp7releaseEP10VpuRequest(void);

/* Symbol: _ZN12VpuStreamImp8setPowerER8VpuPowerj */
/* Demangled: VpuStreamImp::setPower(VpuPower&, unsigned int) */
int _ZN12VpuStreamImp8setPowerER8VpuPowerj(void);

/* Symbol: _ZN13VpuRequestImp9setPackedEb */
/* Demangled: VpuRequestImp::setPacked(bool) */
int _ZN13VpuRequestImp9setPackedEb(void);

/* Symbol: _ZN7VpuUtil11getInstanceEv */
/* Demangled: VpuUtil::getInstance() */
int _ZN7VpuUtil11getInstanceEv(void);

/* Symbol: _ZN10VpuAlgoImp11getPropertyEPKcR11VpuProperty */
/* Demangled: VpuAlgoImp::getProperty(char const*, VpuProperty&) */
int _ZN10VpuAlgoImp11getPropertyEPKcR11VpuProperty(void);

/* Symbol: _ZN13VpuRequestImp11setPropertyEPKcRK11VpuProperty */
/* Demangled: VpuRequestImp::setProperty(char const*, VpuProperty const&) */
int _ZN13VpuRequestImp11setPropertyEPKcRK11VpuProperty(void);

/* Symbol: _ZN13VpuRequestImp7earaEndEi */
/* Demangled: VpuRequestImp::earaEnd(int) */
int _ZN13VpuRequestImp7earaEndEi(void);

/* Symbol: _ZN12dmaAllocator7freeMemER15vpuMemDmaHandle */
/* Demangled: dmaAllocator::freeMem(vpuMemDmaHandle&) */
int _ZN12dmaAllocator7freeMemER15vpuMemDmaHandle(void);

/* Symbol: _ZN15vpuMemAllocator7queryVaEy */
/* Demangled: vpuMemAllocator::queryVa(unsigned long long) */
int _ZN15vpuMemAllocator7queryVaEy(void);

/* Symbol: _Z13vpuMapPhyAddri */
/* Demangled: vpuMapPhyAddr(int) */
int _Z13vpuMapPhyAddri(void);

/* Symbol: _Z19printWarnForVersionv */
/* Demangled: printWarnForVersion() */
int _Z19printWarnForVersionv(void);

/* Symbol: _ZN10VpuAlgoImp7getPortEPKc */
/* Demangled: VpuAlgoImp::getPort(char const*) */
int _ZN10VpuAlgoImp7getPortEPKc(void);

/* Symbol: _ZN13VpuRequestImp16getInferenceInfoER16VpuInferenceInfo */
/* Demangled: VpuRequestImp::getInferenceInfo(VpuInferenceInfo&) */
int _ZN13VpuRequestImp16getInferenceInfoER16VpuInferenceInfo(void);

/* Symbol: _ZN15vpuMemAllocator7freeMemEP12VpuMemBuffer */
/* Demangled: vpuMemAllocator::freeMem(VpuMemBuffer*) */
int _ZN15vpuMemAllocator7freeMemEP12VpuMemBuffer(void);

/* Symbol: _ZN12dmaAllocatorC1Ev */
/* Demangled: dmaAllocator::dmaAllocator() */
int _ZN12dmaAllocatorC1Ev(void);

/* Symbol: _ZN11VpuAlgoPool7getAlgoENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEi */
/* Demangled: VpuAlgoPool::getAlgo(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int) */
int _ZN11VpuAlgoPool7getAlgoENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEi(void);

/* Symbol: _ZN12dmaAllocatorC2Ev */
/* Demangled: dmaAllocator::dmaAllocator() */
int _ZN12dmaAllocatorC2Ev(void);

/* Symbol: _ZN12dmaAllocatorD1Ev */
/* Demangled: dmaAllocator::~dmaAllocator() */
int _ZN12dmaAllocatorD1Ev(void);

/* Symbol: _ZN12ionAllocator7syncMemER15vpuMemIonHandle */
/* Demangled: ionAllocator::syncMem(vpuMemIonHandle&) */
int _ZN12ionAllocator7syncMemER15vpuMemIonHandle(void);

/* Symbol: _ZN12VpuStreamImp5enqueEP10VpuRequestj */
/* Demangled: VpuStreamImp::enque(VpuRequest*, unsigned int) */
int _ZN12VpuStreamImp5enqueEP10VpuRequestj(void);

/* Symbol: _ZN12VpuStreamImpC1EPKc */
/* Demangled: VpuStreamImp::VpuStreamImp(char const*) */
int _ZN12VpuStreamImpC1EPKc(void);

/* Symbol: _ZN13VpuRequestImp12cacheInvalidEv */
/* Demangled: VpuRequestImp::cacheInvalid() */
int _ZN13VpuRequestImp12cacheInvalidEv(void);

/* Symbol: _ZN12dmaAllocatorD2Ev */
/* Demangled: dmaAllocator::~dmaAllocator() */
int _ZN12dmaAllocatorD2Ev(void);

/* Symbol: _ZN12VpuStreamImp8allocMemEjj10vpuMemType */
/* Demangled: VpuStreamImp::allocMem(unsigned int, unsigned int, vpuMemType) */
int _ZN12VpuStreamImp8allocMemEjj10vpuMemType(void);

/* Symbol: _ZN12VpuStreamImpC2EPKc */
/* Demangled: VpuStreamImp::VpuStreamImp(char const*) */
int _ZN12VpuStreamImpC2EPKc(void);

/* Symbol: _ZN13userAllocator9importMemEijR18vpuMemMallocHandle */
/* Demangled: userAllocator::importMem(int, unsigned int, vpuMemMallocHandle&) */
int _ZN13userAllocator9importMemEijR18vpuMemMallocHandle(void);

/* Symbol: _ZNSt3__16vectorIP12VpuMemBufferNS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_ */
/* Demangled: void std::__1::vector<VpuMemBuffer*, std::__1::allocator<VpuMemBuffer*> >::__push_back_slow_path<VpuMemBuffer*>(VpuMemBuffer*&&) */
int _ZNSt3__16vectorIP12VpuMemBufferNS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void);

/* Symbol: _ZN11VpuAlgoPoolC1Ev */
/* Demangled: VpuAlgoPool::VpuAlgoPool() */
int _ZN11VpuAlgoPoolC1Ev(void);

/* Symbol: _ZN13VpuRequestImp11getPropertyEPvi */
/* Demangled: VpuRequestImp::getProperty(void*, int) */
int _ZN13VpuRequestImp11getPropertyEPvi(void);

/* Symbol: _ZN7VpuUtil10mapPhyAddrEi */
/* Demangled: VpuUtil::mapPhyAddr(int) */
int _ZN7VpuUtil10mapPhyAddrEi(void);

/* Symbol: _ZN9VpuStream14createInstanceEv */
/* Demangled: VpuStream::createInstance() */
int _ZN9VpuStream14createInstanceEv(void);

/* Symbol: _ZN12ionAllocator8allocMemEjjR15vpuMemIonHandle */
/* Demangled: ionAllocator::allocMem(unsigned int, unsigned int, vpuMemIonHandle&) */
int _ZN12ionAllocator8allocMemEjjR15vpuMemIonHandle(void);

/* Symbol: _ZN15vpuMemAllocator9importMemEij10vpuMemType */
/* Demangled: vpuMemAllocator::importMem(int, unsigned int, vpuMemType) */
int _ZN15vpuMemAllocator9importMemEij10vpuMemType(void);

/* Symbol: _ZN11VpuAlgoPoolC2Ev */
/* Demangled: VpuAlgoPool::VpuAlgoPool() */
int _ZN11VpuAlgoPoolC2Ev(void);

/* Symbol: _ZN11VpuAlgoPoolD1Ev */
/* Demangled: VpuAlgoPool::~VpuAlgoPool() */
int _ZN11VpuAlgoPoolD1Ev(void);

/* Symbol: _ZN13VpuRequestImp9getPackedEv */
/* Demangled: VpuRequestImp::getPacked() */
int _ZN13VpuRequestImp9getPackedEv(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZTV13VpuRequestImp */
/* Demangled: vtable for VpuRequestImp */
extern void* _ZTV13VpuRequestImp;

/* Symbol: _ZN11VpuAlgoPoolD2Ev */
/* Demangled: VpuAlgoPool::~VpuAlgoPool() */
int _ZN11VpuAlgoPoolD2Ev(void);

/* Symbol: _ZN12VpuStreamImp8freeAlgoEy */
/* Demangled: VpuStreamImp::freeAlgo(unsigned long long) */
int _ZN12VpuStreamImp8freeAlgoEy(void);

/* Symbol: _ZN12ionAllocator7freeMemER15vpuMemIonHandle */
/* Demangled: ionAllocator::freeMem(vpuMemIonHandle&) */
int _ZN12ionAllocator7freeMemER15vpuMemIonHandle(void);

/* Symbol: _ZN11VpuAlgoPool11getInstanceEv */
/* Demangled: VpuAlgoPool::getInstance() */
int _ZN11VpuAlgoPool11getInstanceEv(void);

/* Symbol: _ZN13VpuRequestImp11getPropertyEPKcR11VpuProperty */
/* Demangled: VpuRequestImp::getProperty(char const*, VpuProperty&) */
int _ZN13VpuRequestImp11getPropertyEPKcR11VpuProperty(void);

/* Symbol: _ZN13VpuRequestImp13setExtraParamE13VpuExtraParam */
/* Demangled: VpuRequestImp::setExtraParam(VpuExtraParam) */
int _ZN13VpuRequestImp13setExtraParamE13VpuExtraParam(void);

/* Symbol: _ZTV12VpuStreamImp */
/* Demangled: vtable for VpuStreamImp */
extern void* _ZTV12VpuStreamImp;

/* Symbol: gHandle */
/* Demangled: gHandle */
extern void* gHandle;

/* Symbol: _Z13getVPUVersionv */
/* Demangled: getVPUVersion() */
int _Z13getVPUVersionv(void);

/* Symbol: _ZN13VpuRequestImp14prepareSettBufEi */
/* Demangled: VpuRequestImp::prepareSettBuf(int) */
int _ZN13VpuRequestImp14prepareSettBufEi(void);

/* Symbol: _ZN11VpuAlgoPool10createAlgoENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPvjjiP9VpuStream */
/* Demangled: VpuAlgoPool::createAlgo(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*, unsigned int, unsigned int, int, VpuStream*) */
int _ZN11VpuAlgoPool10createAlgoENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPvjjiP9VpuStream(void);

/* Symbol: _ZN11VpuAlgoPool8freeAlgoEyiP9VpuStream */
/* Demangled: VpuAlgoPool::freeAlgo(unsigned long long, int, VpuStream*) */
int _ZN11VpuAlgoPool8freeAlgoEyiP9VpuStream(void);

/* Symbol: _Z12startEaraInfv */
/* Demangled: startEaraInf() */
int _Z12startEaraInfv(void);

/* Symbol: _ZN12VpuStreamImp7syncMemEP12VpuMemBuffer */
/* Demangled: VpuStreamImp::syncMem(VpuMemBuffer*) */
int _ZN12VpuStreamImp7syncMemEP12VpuMemBuffer(void);

/* Symbol: _ZN13VpuRequestImp7mmapMVAEv */
/* Demangled: VpuRequestImp::mmapMVA() */
int _ZN13VpuRequestImp7mmapMVAEv(void);

/* Symbol: _ZN13VpuRequestImp9addBufferER9VpuBuffer */
/* Demangled: VpuRequestImp::addBuffer(VpuBuffer&) */
int _ZN13VpuRequestImp9addBufferER9VpuBuffer(void);

/* Symbol: _ZN15vpuMemAllocatorC1Ev */
/* Demangled: vpuMemAllocator::vpuMemAllocator() */
int _ZN15vpuMemAllocatorC1Ev(void);

/* Symbol: _ZN15vpuMemAllocatorD1Ev */
/* Demangled: vpuMemAllocator::~vpuMemAllocator() */
int _ZN15vpuMemAllocatorD1Ev(void);

/* Symbol: _ZN9VpuStream14createInstanceEPKc */
/* Demangled: VpuStream::createInstance(char const*) */
int _ZN9VpuStream14createInstanceEPKc(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_ */
/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__push_back_slow_path<int const&>(int const&) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_(void);

/* Symbol: _ZN12dmaAllocator9importMemEijR15vpuMemDmaHandle */
/* Demangled: dmaAllocator::importMem(int, unsigned int, vpuMemDmaHandle&) */
int _ZN12dmaAllocator9importMemEijR15vpuMemDmaHandle(void);

/* Symbol: _ZN15vpuMemAllocatorC2Ev */
/* Demangled: vpuMemAllocator::vpuMemAllocator() */
int _ZN15vpuMemAllocatorC2Ev(void);

/* Symbol: _ZN10VpuAlgoImp17checkRequestInUseEP10VpuRequest */
/* Demangled: VpuAlgoImp::checkRequestInUse(VpuRequest*) */
int _ZN10VpuAlgoImp17checkRequestInUseEP10VpuRequest(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEP7VpuAlgoEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISL_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VpuAlgo*>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VpuAlgo*>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VpuAlgo*> > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEP7VpuAlgoEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISL_EERKT_(void);

/* Symbol: _ZN15vpuMemAllocatorD2Ev */
/* Demangled: vpuMemAllocator::~vpuMemAllocator() */
int _ZN15vpuMemAllocatorD2Ev(void);

/* Symbol: _ZN13VpuRequestImp9cacheSyncEv */
/* Demangled: VpuRequestImp::cacheSync() */
int _ZN13VpuRequestImp9cacheSyncEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEP7VpuAlgoEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VpuAlgo*>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VpuAlgo*>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VpuAlgo*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VpuAlgo*>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEP7VpuAlgoEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE(void);

/* Symbol: _ZNSt3__16vectorIP10VpuRequestNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_ */
/* Demangled: void std::__1::vector<VpuRequest*, std::__1::allocator<VpuRequest*> >::__push_back_slow_path<VpuRequest* const&>(VpuRequest* const&) */
int _ZNSt3__16vectorIP10VpuRequestNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void);

/* Symbol: _ZN13userAllocatorC1Ev */
/* Demangled: userAllocator::userAllocator() */
int _ZN13userAllocatorC1Ev(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBVPU_H */
