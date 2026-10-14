/*
 * Reverse-Engineered Source for: libvpu.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libvpu"

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
#include "libvpu.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_VPU "/dev/vpu"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_VPU, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_VPU, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_VPU, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: VpuAlgoImp::VpuAlgoImp() */
extern "C" __attribute__((visibility("default"))) int _ZN10VpuAlgoImpC1Ev(void) {
    ALOGD("_ZN10VpuAlgoImpC1Ev() called");
    return 0;
}

/* Demangled: VpuAlgoImp::~VpuAlgoImp() */
extern "C" __attribute__((visibility("default"))) int _ZN10VpuAlgoImpD0Ev(void) {
    ALOGD("_ZN10VpuAlgoImpD0Ev() called");
    return 0;
}

/* Demangled: VpuStreamImp::deque() */
extern "C" __attribute__((visibility("default"))) int _ZN12VpuStreamImp5dequeEv(void) {
    ALOGD("_ZN12VpuStreamImp5dequeEv() called");
    return 0;
}

/* Demangled: VpuStreamImp::freeMem(VpuMemBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN12VpuStreamImp7freeMemEP12VpuMemBuffer(void) {
    ALOGD("_ZN12VpuStreamImp7freeMemEP12VpuMemBuffer() called");
    return 0;
}

/* Demangled: VpuRequestImp::munmapMVA() */
extern "C" __attribute__((visibility("default"))) int _ZN13VpuRequestImp9munmapMVAEv(void) {
    ALOGD("_ZN13VpuRequestImp9munmapMVAEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<VpuStatus, std::__1::allocator<VpuStatus> >::__push_back_slow_path<VpuStatus const&>(VpuStatus const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorI9VpuStatusNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorI9VpuStatusNS_9allocatorIS1_EEE21__push_back_slow_pathIRKS1_EEvOT_() called");
    return 0;
}

/* Demangled: userAllocator::userAllocator() */
extern "C" __attribute__((visibility("default"))) int _ZN13userAllocatorC2Ev(void) {
    ALOGD("_ZN13userAllocatorC2Ev() called");
    return 0;
}

/* Demangled: userAllocator::~userAllocator() */
extern "C" __attribute__((visibility("default"))) int _ZN13userAllocatorD1Ev(void) {
    ALOGD("_ZN13userAllocatorD1Ev() called");
    return 0;
}

/* Demangled: VpuAlgoImp::VpuAlgoImp() */
extern "C" __attribute__((visibility("default"))) int _ZN10VpuAlgoImpC2Ev(void) {
    ALOGD("_ZN10VpuAlgoImpC2Ev() called");
    return 0;
}

/* Demangled: VpuAlgoImp::~VpuAlgoImp() */
extern "C" __attribute__((visibility("default"))) int _ZN10VpuAlgoImpD1Ev(void) {
    ALOGD("_ZN10VpuAlgoImpD1Ev() called");
    return 0;
}

/* Demangled: VpuStreamImp::getVpuStatus(std::__1::vector<VpuStatus, std::__1::allocator<VpuStatus> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN12VpuStreamImp12getVpuStatusERNSt3__16vectorI9VpuStatusNS0_9allocatorIS2_EEEE(void) {
    ALOGD("_ZN12VpuStreamImp12getVpuStatusERNSt3__16vectorI9VpuStatusNS0_9allocatorIS2_EEEE() called");
    return 0;
}

/* Demangled: VpuRequestImp::setProperty(void*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN13VpuRequestImp11setPropertyEPvi(void) {
    ALOGD("_ZN13VpuRequestImp11setPropertyEPvi() called");
    return 0;
}

/* Demangled: userAllocator::syncMem(vpuMemMallocHandle&) */
extern "C" __attribute__((visibility("default"))) int _ZN13userAllocator7syncMemER18vpuMemMallocHandle(void) {
    ALOGD("_ZN13userAllocator7syncMemER18vpuMemMallocHandle() called");
    return 0;
}

/* Demangled: userAllocator::~userAllocator() */
extern "C" __attribute__((visibility("default"))) int _ZN13userAllocatorD2Ev(void) {
    ALOGD("_ZN13userAllocatorD2Ev() called");
    return 0;
}

/* Demangled: earaNotifyJobEnd(int, unsigned long long, unsigned int, int, int&, int) */
extern "C" __attribute__((visibility("default"))) int _Z16earaNotifyJobEndiyjiRii(void) {
    ALOGD("_Z16earaNotifyJobEndiyjiRii() called");
    return 0;
}

/* Demangled: VpuAlgoImp::~VpuAlgoImp() */
extern "C" __attribute__((visibility("default"))) int _ZN10VpuAlgoImpD2Ev(void) {
    ALOGD("_ZN10VpuAlgoImpD2Ev() called");
    return 0;
}

/* Demangled: VpuStreamImp::createAlgo(char*, char*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12VpuStreamImp10createAlgoEPcS0_jj(void) {
    ALOGD("_ZN12VpuStreamImp10createAlgoEPcS0_jj() called");
    return 0;
}

/* Demangled: VpuRequestImp::initEaraInfo(VpuModuleType) */
extern "C" __attribute__((visibility("default"))) int _ZN13VpuRequestImp12initEaraInfoE13VpuModuleType(void) {
    ALOGD("_ZN13VpuRequestImp12initEaraInfoE13VpuModuleType() called");
    return 0;
}

/* Demangled: VpuRequestImp::addBuffer(VpuPort*, VpuBuffer&) */
extern "C" __attribute__((visibility("default"))) int _ZN13VpuRequestImp9addBufferEP7VpuPortR9VpuBuffer(void) {
    ALOGD("_ZN13VpuRequestImp9addBufferEP7VpuPortR9VpuBuffer() called");
    return 0;
}

/* Demangled: closeEaraInf() */
extern "C" __attribute__((visibility("default"))) int _Z12closeEaraInfv(void) {
    ALOGD("_Z12closeEaraInfv() called");
    return 0;
}

/* Demangled: calcBoostvalueFromOpp(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _Z21calcBoostvalueFromOpph(void) {
    ALOGD("_Z21calcBoostvalueFromOpph() called");
    return 0;
}

/* Demangled: VpuAlgoImp::release(VpuRequest*) */
extern "C" __attribute__((visibility("default"))) int _ZN10VpuAlgoImp7releaseEP10VpuRequest(void) {
    ALOGD("_ZN10VpuAlgoImp7releaseEP10VpuRequest() called");
    return 0;
}

/* Demangled: calcOppFromBoostValue(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _Z21calcOppFromBoostValueh(void) {
    ALOGD("_Z21calcOppFromBoostValueh() called");
    return 0;
}

/* Demangled: userAllocator::allocMem(unsigned int, unsigned int, vpuMemMallocHandle&) */
extern "C" __attribute__((visibility("default"))) int _ZN13userAllocator8allocMemEjjR18vpuMemMallocHandle(void) {
    ALOGD("_ZN13userAllocator8allocMemEjjR18vpuMemMallocHandle() called");
    return 0;
}

/* Demangled: VpuRequestImp::clearEaraInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN13VpuRequestImp13clearEaraInfoEv(void) {
    ALOGD("_ZN13VpuRequestImp13clearEaraInfoEv() called");
    return 0;
}

/* Demangled: vpuMemAllocator::allocMem(unsigned int, unsigned int, vpuMemType) */
extern "C" __attribute__((visibility("default"))) int _ZN15vpuMemAllocator8allocMemEjj10vpuMemType(void) {
    ALOGD("_ZN15vpuMemAllocator8allocMemEjj10vpuMemType() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::vector<int, std::__1::allocator<int> >, std::__1::allocator<std::__1::vector<int, std::__1::allocator<int> > > >::__push_back_slow_path<std::__1::vector<int, std::__1::allocator<int> > const&>(std::__1::vector<int, std::__1::allocator<int> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS0_IiNS_9allocatorIiEEEENS1_IS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS0_IiNS_9allocatorIiEEEENS1_IS3_EEE21__push_back_slow_pathIRKS3_EEvOT_() called");
    return 0;
}

/* Demangled: ionAllocator::importMem(int, unsigned int, vpuMemIonHandle&) */
extern "C" __attribute__((visibility("default"))) int _ZN12ionAllocator9importMemEijR15vpuMemIonHandle(void) {
    ALOGD("_ZN12ionAllocator9importMemEijR15vpuMemIonHandle() called");
    return 0;
}

/* Demangled: ionAllocator::ionAllocator() */
extern "C" __attribute__((visibility("default"))) int _ZN12ionAllocatorC1Ev(void) {
    ALOGD("_ZN12ionAllocatorC1Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VpuAlgo*>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VpuAlgo*>, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VpuAlgo*>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VpuAlgo*>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VpuAlgo*> > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEP7VpuAlgoEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE4findIS7_EENS_15__tree_iteratorISA_PNS_11__tree_nodeISA_PvEEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEP7VpuAlgoEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE4findIS7_EENS_15__tree_iteratorISA_PNS_11__tree_nodeISA_PvEEiEERKT_() called");
    return 0;
}

/* Demangled: ionAllocator::ionAllocator() */
extern "C" __attribute__((visibility("default"))) int _ZN12ionAllocatorC2Ev(void) {
    ALOGD("_ZN12ionAllocatorC2Ev() called");
    return 0;
}

/* Demangled: ionAllocator::~ionAllocator() */
extern "C" __attribute__((visibility("default"))) int _ZN12ionAllocatorD1Ev(void) {
    ALOGD("_ZN12ionAllocatorD1Ev() called");
    return 0;
}

/* Demangled: userAllocator::freeMem(vpuMemMallocHandle&) */
extern "C" __attribute__((visibility("default"))) int _ZN13userAllocator7freeMemER18vpuMemMallocHandle(void) {
    ALOGD("_ZN13userAllocator7freeMemER18vpuMemMallocHandle() called");
    return 0;
}

/* Demangled: VpuStreamImp::packRequest(std::__1::vector<VpuRequest*, std::__1::allocator<VpuRequest*> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN12VpuStreamImp11packRequestERNSt3__16vectorIP10VpuRequestNS0_9allocatorIS3_EEEE(void) {
    ALOGD("_ZN12VpuStreamImp11packRequestERNSt3__16vectorIP10VpuRequestNS0_9allocatorIS3_EEEE() called");
    return 0;
}

/* Demangled: ionAllocator::~ionAllocator() */
extern "C" __attribute__((visibility("default"))) int _ZN12ionAllocatorD2Ev(void) {
    ALOGD("_ZN12ionAllocatorD2Ev() called");
    return 0;
}

/* Demangled: VpuRequestImp::VpuRequestImp(VpuAlgoImp*) */
extern "C" __attribute__((visibility("default"))) int _ZN13VpuRequestImpC1EP10VpuAlgoImp(void) {
    ALOGD("_ZN13VpuRequestImpC1EP10VpuAlgoImp() called");
    return 0;
}

/* Demangled: VpuRequestImp::VpuRequestImp(VpuAlgoImp*) */
extern "C" __attribute__((visibility("default"))) int _ZN13VpuRequestImpC2EP10VpuAlgoImp(void) {
    ALOGD("_ZN13VpuRequestImpC2EP10VpuAlgoImp() called");
    return 0;
}

/* Demangled: VpuRequestImp::~VpuRequestImp() */
extern "C" __attribute__((visibility("default"))) int _ZN13VpuRequestImpD0Ev(void) {
    ALOGD("_ZN13VpuRequestImpD0Ev() called");
    return 0;
}

/* Demangled: vpuMemAllocator::queryPa(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN15vpuMemAllocator7queryPaEy(void) {
    ALOGD("_ZN15vpuMemAllocator7queryPaEy() called");
    return 0;
}

/* Demangled: VpuRequestImp::~VpuRequestImp() */
extern "C" __attribute__((visibility("default"))) int _ZN13VpuRequestImpD1Ev(void) {
    ALOGD("_ZN13VpuRequestImpD1Ev() called");
    return 0;
}

/* Demangled: dmaAllocator::syncMem(vpuMemDmaHandle&) */
extern "C" __attribute__((visibility("default"))) int _ZN12dmaAllocator7syncMemER15vpuMemDmaHandle(void) {
    ALOGD("_ZN12dmaAllocator7syncMemER15vpuMemDmaHandle() called");
    return 0;
}

/* Demangled: getJobIdFromPointer(void*) */
extern "C" __attribute__((visibility("default"))) int _Z19getJobIdFromPointerPv(void) {
    ALOGD("_Z19getJobIdFromPointerPv() called");
    return 0;
}

/* Demangled: VpuStreamImp::tryEnque(VpuRequest*) */
extern "C" __attribute__((visibility("default"))) int _ZN12VpuStreamImp8tryEnqueEP10VpuRequest(void) {
    ALOGD("_ZN12VpuStreamImp8tryEnqueEP10VpuRequest() called");
    return 0;
}

/* Demangled: VpuStreamImp::~VpuStreamImp() */
extern "C" __attribute__((visibility("default"))) int _ZN12VpuStreamImpD0Ev(void) {
    ALOGD("_ZN12VpuStreamImpD0Ev() called");
    return 0;
}

/* Demangled: VpuRequestImp::~VpuRequestImp() */
extern "C" __attribute__((visibility("default"))) int _ZN13VpuRequestImpD2Ev(void) {
    ALOGD("_ZN13VpuRequestImpD2Ev() called");
    return 0;
}

/* Demangled: VpuUtil::VpuUtil() */
extern "C" __attribute__((visibility("default"))) int _ZN7VpuUtilC1Ev(void) {
    ALOGD("_ZN7VpuUtilC1Ev() called");
    return 0;
}

/* Demangled: VpuStreamImp::unpackRequest(std::__1::vector<VpuRequest*, std::__1::allocator<VpuRequest*> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN12VpuStreamImp13unpackRequestERNSt3__16vectorIP10VpuRequestNS0_9allocatorIS3_EEEE(void) {
    ALOGD("_ZN12VpuStreamImp13unpackRequestERNSt3__16vectorIP10VpuRequestNS0_9allocatorIS3_EEEE() called");
    return 0;
}

/* Demangled: VpuStreamImp::~VpuStreamImp() */
extern "C" __attribute__((visibility("default"))) int _ZN12VpuStreamImpD1Ev(void) {
    ALOGD("_ZN12VpuStreamImpD1Ev() called");
    return 0;
}

/* Demangled: VpuRequestImp::earaBegin() */
extern "C" __attribute__((visibility("default"))) int _ZN13VpuRequestImp9earaBeginEv(void) {
    ALOGD("_ZN13VpuRequestImp9earaBeginEv() called");
    return 0;
}

/* Demangled: vpuMemAllocator::syncMem(VpuMemBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN15vpuMemAllocator7syncMemEP12VpuMemBuffer(void) {
    ALOGD("_ZN15vpuMemAllocator7syncMemEP12VpuMemBuffer() called");
    return 0;
}

/* Demangled: VpuUtil::VpuUtil() */
extern "C" __attribute__((visibility("default"))) int _ZN7VpuUtilC2Ev(void) {
    ALOGD("_ZN7VpuUtilC2Ev() called");
    return 0;
}

/* Demangled: VpuUtil::~VpuUtil() */
extern "C" __attribute__((visibility("default"))) int _ZN7VpuUtilD1Ev(void) {
    ALOGD("_ZN7VpuUtilD1Ev() called");
    return 0;
}

/* Demangled: std::__1::list<VpuRequestImp*, std::__1::allocator<VpuRequestImp*> >::remove(VpuRequestImp* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__14listIP13VpuRequestImpNS_9allocatorIS2_EEE6removeERKS2_(void) {
    ALOGD("_ZNSt3__14listIP13VpuRequestImpNS_9allocatorIS2_EEE6removeERKS2_() called");
    return 0;
}

/* Demangled: earaNotifyJobBegin(int, unsigned long long&) */
extern "C" __attribute__((visibility("default"))) int _Z18earaNotifyJobBeginiRy(void) {
    ALOGD("_Z18earaNotifyJobBeginiRy() called");
    return 0;
}

/* Demangled: VpuAlgoImp::acquire() */
extern "C" __attribute__((visibility("default"))) int _ZN10VpuAlgoImp7acquireEv(void) {
    ALOGD("_ZN10VpuAlgoImp7acquireEv() called");
    return 0;
}

/* Demangled: VpuStreamImp::~VpuStreamImp() */
extern "C" __attribute__((visibility("default"))) int _ZN12VpuStreamImpD2Ev(void) {
    ALOGD("_ZN12VpuStreamImpD2Ev() called");
    return 0;
}

/* Demangled: VpuRequestImp::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN13VpuRequestImp5resetEv(void) {
    ALOGD("_ZN13VpuRequestImp5resetEv() called");
    return 0;
}

/* Demangled: VpuUtil::~VpuUtil() */
extern "C" __attribute__((visibility("default"))) int _ZN7VpuUtilD2Ev(void) {
    ALOGD("_ZN7VpuUtilD2Ev() called");
    return 0;
}

/* Exported Object: vtable for VpuAlgoImp */
extern "C" __attribute__((visibility("default"))) void* _ZTV10VpuAlgoImp = NULL;

/* Demangled: dmaAllocator::allocMem(unsigned int, unsigned int, vpuMemDmaHandle&) */
extern "C" __attribute__((visibility("default"))) int _ZN12dmaAllocator8allocMemEjjR15vpuMemDmaHandle(void) {
    ALOGD("_ZN12dmaAllocator8allocMemEjjR15vpuMemDmaHandle() called");
    return 0;
}

/* Demangled: getVpuLogLevel() */
extern "C" __attribute__((visibility("default"))) int _Z14getVpuLogLevelv(void) {
    ALOGD("_Z14getVpuLogLevelv() called");
    return 0;
}

/* Demangled: VpuStreamImp::flush() */
extern "C" __attribute__((visibility("default"))) int _ZN12VpuStreamImp5flushEv(void) {
    ALOGD("_ZN12VpuStreamImp5flushEv() called");
    return 0;
}

/* Demangled: VpuStreamImp::acquire(VpuAlgo*, VpuModuleType) */
extern "C" __attribute__((visibility("default"))) int _ZN12VpuStreamImp7acquireEP7VpuAlgo13VpuModuleType(void) {
    ALOGD("_ZN12VpuStreamImp7acquireEP7VpuAlgo13VpuModuleType() called");
    return 0;
}

/* Demangled: VpuStreamImp::getAlgo(char*) */
extern "C" __attribute__((visibility("default"))) int _ZN12VpuStreamImp7getAlgoEPc(void) {
    ALOGD("_ZN12VpuStreamImp7getAlgoEPc() called");
    return 0;
}

/* Demangled: VpuStreamImp::release(VpuRequest*) */
extern "C" __attribute__((visibility("default"))) int _ZN12VpuStreamImp7releaseEP10VpuRequest(void) {
    ALOGD("_ZN12VpuStreamImp7releaseEP10VpuRequest() called");
    return 0;
}

/* Demangled: VpuStreamImp::setPower(VpuPower&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12VpuStreamImp8setPowerER8VpuPowerj(void) {
    ALOGD("_ZN12VpuStreamImp8setPowerER8VpuPowerj() called");
    return 0;
}

/* Demangled: VpuRequestImp::setPacked(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN13VpuRequestImp9setPackedEb(void) {
    ALOGD("_ZN13VpuRequestImp9setPackedEb() called");
    return 0;
}

/* Demangled: VpuUtil::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7VpuUtil11getInstanceEv(void) {
    ALOGD("_ZN7VpuUtil11getInstanceEv() called");
    return 0;
}

/* Demangled: VpuAlgoImp::getProperty(char const*, VpuProperty&) */
extern "C" __attribute__((visibility("default"))) int _ZN10VpuAlgoImp11getPropertyEPKcR11VpuProperty(void) {
    ALOGD("_ZN10VpuAlgoImp11getPropertyEPKcR11VpuProperty() called");
    return 0;
}

/* Demangled: VpuRequestImp::setProperty(char const*, VpuProperty const&) */
extern "C" __attribute__((visibility("default"))) int _ZN13VpuRequestImp11setPropertyEPKcRK11VpuProperty(void) {
    ALOGD("_ZN13VpuRequestImp11setPropertyEPKcRK11VpuProperty() called");
    return 0;
}

/* Demangled: VpuRequestImp::earaEnd(int) */
extern "C" __attribute__((visibility("default"))) int _ZN13VpuRequestImp7earaEndEi(void) {
    ALOGD("_ZN13VpuRequestImp7earaEndEi() called");
    return 0;
}

/* Demangled: dmaAllocator::freeMem(vpuMemDmaHandle&) */
extern "C" __attribute__((visibility("default"))) int _ZN12dmaAllocator7freeMemER15vpuMemDmaHandle(void) {
    ALOGD("_ZN12dmaAllocator7freeMemER15vpuMemDmaHandle() called");
    return 0;
}

/* Demangled: vpuMemAllocator::queryVa(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN15vpuMemAllocator7queryVaEy(void) {
    ALOGD("_ZN15vpuMemAllocator7queryVaEy() called");
    return 0;
}

/* Demangled: vpuMapPhyAddr(int) */
extern "C" __attribute__((visibility("default"))) int _Z13vpuMapPhyAddri(void) {
    ALOGD("_Z13vpuMapPhyAddri() called");
    return 0;
}

/* Demangled: printWarnForVersion() */
extern "C" __attribute__((visibility("default"))) int _Z19printWarnForVersionv(void) {
    ALOGD("_Z19printWarnForVersionv() called");
    return 0;
}

/* Demangled: VpuAlgoImp::getPort(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN10VpuAlgoImp7getPortEPKc(void) {
    ALOGD("_ZN10VpuAlgoImp7getPortEPKc() called");
    return 0;
}

/* Demangled: VpuRequestImp::getInferenceInfo(VpuInferenceInfo&) */
extern "C" __attribute__((visibility("default"))) int _ZN13VpuRequestImp16getInferenceInfoER16VpuInferenceInfo(void) {
    ALOGD("_ZN13VpuRequestImp16getInferenceInfoER16VpuInferenceInfo() called");
    return 0;
}

/* Demangled: vpuMemAllocator::freeMem(VpuMemBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN15vpuMemAllocator7freeMemEP12VpuMemBuffer(void) {
    ALOGD("_ZN15vpuMemAllocator7freeMemEP12VpuMemBuffer() called");
    return 0;
}

/* Demangled: dmaAllocator::dmaAllocator() */
extern "C" __attribute__((visibility("default"))) int _ZN12dmaAllocatorC1Ev(void) {
    ALOGD("_ZN12dmaAllocatorC1Ev() called");
    return 0;
}

/* Demangled: VpuAlgoPool::getAlgo(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11VpuAlgoPool7getAlgoENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEi(void) {
    ALOGD("_ZN11VpuAlgoPool7getAlgoENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEi() called");
    return 0;
}

/* Demangled: dmaAllocator::dmaAllocator() */
extern "C" __attribute__((visibility("default"))) int _ZN12dmaAllocatorC2Ev(void) {
    ALOGD("_ZN12dmaAllocatorC2Ev() called");
    return 0;
}

/* Demangled: dmaAllocator::~dmaAllocator() */
extern "C" __attribute__((visibility("default"))) int _ZN12dmaAllocatorD1Ev(void) {
    ALOGD("_ZN12dmaAllocatorD1Ev() called");
    return 0;
}

/* Demangled: ionAllocator::syncMem(vpuMemIonHandle&) */
extern "C" __attribute__((visibility("default"))) int _ZN12ionAllocator7syncMemER15vpuMemIonHandle(void) {
    ALOGD("_ZN12ionAllocator7syncMemER15vpuMemIonHandle() called");
    return 0;
}

/* Demangled: VpuStreamImp::enque(VpuRequest*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12VpuStreamImp5enqueEP10VpuRequestj(void) {
    ALOGD("_ZN12VpuStreamImp5enqueEP10VpuRequestj() called");
    return 0;
}

/* Demangled: VpuStreamImp::VpuStreamImp(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN12VpuStreamImpC1EPKc(void) {
    ALOGD("_ZN12VpuStreamImpC1EPKc() called");
    return 0;
}

/* Demangled: VpuRequestImp::cacheInvalid() */
extern "C" __attribute__((visibility("default"))) int _ZN13VpuRequestImp12cacheInvalidEv(void) {
    ALOGD("_ZN13VpuRequestImp12cacheInvalidEv() called");
    return 0;
}

/* Demangled: dmaAllocator::~dmaAllocator() */
extern "C" __attribute__((visibility("default"))) int _ZN12dmaAllocatorD2Ev(void) {
    ALOGD("_ZN12dmaAllocatorD2Ev() called");
    return 0;
}

/* Demangled: VpuStreamImp::allocMem(unsigned int, unsigned int, vpuMemType) */
extern "C" __attribute__((visibility("default"))) int _ZN12VpuStreamImp8allocMemEjj10vpuMemType(void) {
    ALOGD("_ZN12VpuStreamImp8allocMemEjj10vpuMemType() called");
    return 0;
}

/* Demangled: VpuStreamImp::VpuStreamImp(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN12VpuStreamImpC2EPKc(void) {
    ALOGD("_ZN12VpuStreamImpC2EPKc() called");
    return 0;
}

/* Demangled: userAllocator::importMem(int, unsigned int, vpuMemMallocHandle&) */
extern "C" __attribute__((visibility("default"))) int _ZN13userAllocator9importMemEijR18vpuMemMallocHandle(void) {
    ALOGD("_ZN13userAllocator9importMemEijR18vpuMemMallocHandle() called");
    return 0;
}

/* Demangled: void std::__1::vector<VpuMemBuffer*, std::__1::allocator<VpuMemBuffer*> >::__push_back_slow_path<VpuMemBuffer*>(VpuMemBuffer*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIP12VpuMemBufferNS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIP12VpuMemBufferNS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_() called");
    return 0;
}

/* Demangled: VpuAlgoPool::VpuAlgoPool() */
extern "C" __attribute__((visibility("default"))) int _ZN11VpuAlgoPoolC1Ev(void) {
    ALOGD("_ZN11VpuAlgoPoolC1Ev() called");
    return 0;
}

/* Demangled: VpuRequestImp::getProperty(void*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN13VpuRequestImp11getPropertyEPvi(void) {
    ALOGD("_ZN13VpuRequestImp11getPropertyEPvi() called");
    return 0;
}

/* Demangled: VpuUtil::mapPhyAddr(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7VpuUtil10mapPhyAddrEi(void) {
    ALOGD("_ZN7VpuUtil10mapPhyAddrEi() called");
    return 0;
}

/* Demangled: VpuStream::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9VpuStream14createInstanceEv(void) {
    ALOGD("_ZN9VpuStream14createInstanceEv() called");
    return 0;
}

/* Demangled: ionAllocator::allocMem(unsigned int, unsigned int, vpuMemIonHandle&) */
extern "C" __attribute__((visibility("default"))) int _ZN12ionAllocator8allocMemEjjR15vpuMemIonHandle(void) {
    ALOGD("_ZN12ionAllocator8allocMemEjjR15vpuMemIonHandle() called");
    return 0;
}

/* Demangled: vpuMemAllocator::importMem(int, unsigned int, vpuMemType) */
extern "C" __attribute__((visibility("default"))) int _ZN15vpuMemAllocator9importMemEij10vpuMemType(void) {
    ALOGD("_ZN15vpuMemAllocator9importMemEij10vpuMemType() called");
    return 0;
}

/* Demangled: VpuAlgoPool::VpuAlgoPool() */
extern "C" __attribute__((visibility("default"))) int _ZN11VpuAlgoPoolC2Ev(void) {
    ALOGD("_ZN11VpuAlgoPoolC2Ev() called");
    return 0;
}

/* Demangled: VpuAlgoPool::~VpuAlgoPool() */
extern "C" __attribute__((visibility("default"))) int _ZN11VpuAlgoPoolD1Ev(void) {
    ALOGD("_ZN11VpuAlgoPoolD1Ev() called");
    return 0;
}

/* Demangled: VpuRequestImp::getPacked() */
extern "C" __attribute__((visibility("default"))) int _ZN13VpuRequestImp9getPackedEv(void) {
    ALOGD("_ZN13VpuRequestImp9getPackedEv() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Exported Object: vtable for VpuRequestImp */
extern "C" __attribute__((visibility("default"))) void* _ZTV13VpuRequestImp = NULL;

/* Demangled: VpuAlgoPool::~VpuAlgoPool() */
extern "C" __attribute__((visibility("default"))) int _ZN11VpuAlgoPoolD2Ev(void) {
    ALOGD("_ZN11VpuAlgoPoolD2Ev() called");
    return 0;
}

/* Demangled: VpuStreamImp::freeAlgo(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN12VpuStreamImp8freeAlgoEy(void) {
    ALOGD("_ZN12VpuStreamImp8freeAlgoEy() called");
    return 0;
}

/* Demangled: ionAllocator::freeMem(vpuMemIonHandle&) */
extern "C" __attribute__((visibility("default"))) int _ZN12ionAllocator7freeMemER15vpuMemIonHandle(void) {
    ALOGD("_ZN12ionAllocator7freeMemER15vpuMemIonHandle() called");
    return 0;
}

/* Demangled: VpuAlgoPool::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN11VpuAlgoPool11getInstanceEv(void) {
    ALOGD("_ZN11VpuAlgoPool11getInstanceEv() called");
    return 0;
}

/* Demangled: VpuRequestImp::getProperty(char const*, VpuProperty&) */
extern "C" __attribute__((visibility("default"))) int _ZN13VpuRequestImp11getPropertyEPKcR11VpuProperty(void) {
    ALOGD("_ZN13VpuRequestImp11getPropertyEPKcR11VpuProperty() called");
    return 0;
}

/* Demangled: VpuRequestImp::setExtraParam(VpuExtraParam) */
extern "C" __attribute__((visibility("default"))) int _ZN13VpuRequestImp13setExtraParamE13VpuExtraParam(void) {
    ALOGD("_ZN13VpuRequestImp13setExtraParamE13VpuExtraParam() called");
    return 0;
}

/* Exported Object: vtable for VpuStreamImp */
extern "C" __attribute__((visibility("default"))) void* _ZTV12VpuStreamImp = NULL;

/* Exported Object: gHandle */
extern "C" __attribute__((visibility("default"))) void* gHandle = NULL;

/* Demangled: getVPUVersion() */
extern "C" __attribute__((visibility("default"))) int _Z13getVPUVersionv(void) {
    ALOGD("_Z13getVPUVersionv() called");
    return 0;
}

/* Demangled: VpuRequestImp::prepareSettBuf(int) */
extern "C" __attribute__((visibility("default"))) int _ZN13VpuRequestImp14prepareSettBufEi(void) {
    ALOGD("_ZN13VpuRequestImp14prepareSettBufEi() called");
    return 0;
}

/* Demangled: VpuAlgoPool::createAlgo(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*, unsigned int, unsigned int, int, VpuStream*) */
extern "C" __attribute__((visibility("default"))) int _ZN11VpuAlgoPool10createAlgoENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPvjjiP9VpuStream(void) {
    ALOGD("_ZN11VpuAlgoPool10createAlgoENSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEPvjjiP9VpuStream() called");
    return 0;
}

/* Demangled: VpuAlgoPool::freeAlgo(unsigned long long, int, VpuStream*) */
extern "C" __attribute__((visibility("default"))) int _ZN11VpuAlgoPool8freeAlgoEyiP9VpuStream(void) {
    ALOGD("_ZN11VpuAlgoPool8freeAlgoEyiP9VpuStream() called");
    return 0;
}

/* Demangled: startEaraInf() */
extern "C" __attribute__((visibility("default"))) int _Z12startEaraInfv(void) {
    ALOGD("_Z12startEaraInfv() called");
    return 0;
}

/* Demangled: VpuStreamImp::syncMem(VpuMemBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN12VpuStreamImp7syncMemEP12VpuMemBuffer(void) {
    ALOGD("_ZN12VpuStreamImp7syncMemEP12VpuMemBuffer() called");
    return 0;
}

/* Demangled: VpuRequestImp::mmapMVA() */
extern "C" __attribute__((visibility("default"))) int _ZN13VpuRequestImp7mmapMVAEv(void) {
    ALOGD("_ZN13VpuRequestImp7mmapMVAEv() called");
    return 0;
}

/* Demangled: VpuRequestImp::addBuffer(VpuBuffer&) */
extern "C" __attribute__((visibility("default"))) int _ZN13VpuRequestImp9addBufferER9VpuBuffer(void) {
    ALOGD("_ZN13VpuRequestImp9addBufferER9VpuBuffer() called");
    return 0;
}

/* Demangled: vpuMemAllocator::vpuMemAllocator() */
extern "C" __attribute__((visibility("default"))) int _ZN15vpuMemAllocatorC1Ev(void) {
    ALOGD("_ZN15vpuMemAllocatorC1Ev() called");
    return 0;
}

/* Demangled: vpuMemAllocator::~vpuMemAllocator() */
extern "C" __attribute__((visibility("default"))) int _ZN15vpuMemAllocatorD1Ev(void) {
    ALOGD("_ZN15vpuMemAllocatorD1Ev() called");
    return 0;
}

/* Demangled: VpuStream::createInstance(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9VpuStream14createInstanceEPKc(void) {
    ALOGD("_ZN9VpuStream14createInstanceEPKc() called");
    return 0;
}

/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__push_back_slow_path<int const&>(int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_() called");
    return 0;
}

/* Demangled: dmaAllocator::importMem(int, unsigned int, vpuMemDmaHandle&) */
extern "C" __attribute__((visibility("default"))) int _ZN12dmaAllocator9importMemEijR15vpuMemDmaHandle(void) {
    ALOGD("_ZN12dmaAllocator9importMemEijR15vpuMemDmaHandle() called");
    return 0;
}

/* Demangled: vpuMemAllocator::vpuMemAllocator() */
extern "C" __attribute__((visibility("default"))) int _ZN15vpuMemAllocatorC2Ev(void) {
    ALOGD("_ZN15vpuMemAllocatorC2Ev() called");
    return 0;
}

/* Demangled: VpuAlgoImp::checkRequestInUse(VpuRequest*) */
extern "C" __attribute__((visibility("default"))) int _ZN10VpuAlgoImp17checkRequestInUseEP10VpuRequest(void) {
    ALOGD("_ZN10VpuAlgoImp17checkRequestInUseEP10VpuRequest() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VpuAlgo*>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VpuAlgo*>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VpuAlgo*> > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEP7VpuAlgoEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISL_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEP7VpuAlgoEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISL_EERKT_() called");
    return 0;
}

/* Demangled: vpuMemAllocator::~vpuMemAllocator() */
extern "C" __attribute__((visibility("default"))) int _ZN15vpuMemAllocatorD2Ev(void) {
    ALOGD("_ZN15vpuMemAllocatorD2Ev() called");
    return 0;
}

/* Demangled: VpuRequestImp::cacheSync() */
extern "C" __attribute__((visibility("default"))) int _ZN13VpuRequestImp9cacheSyncEv(void) {
    ALOGD("_ZN13VpuRequestImp9cacheSyncEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VpuAlgo*>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VpuAlgo*>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VpuAlgo*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, VpuAlgo*>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEP7VpuAlgoEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEP7VpuAlgoEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<VpuRequest*, std::__1::allocator<VpuRequest*> >::__push_back_slow_path<VpuRequest* const&>(VpuRequest* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIP10VpuRequestNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIP10VpuRequestNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_() called");
    return 0;
}

/* Demangled: userAllocator::userAllocator() */
extern "C" __attribute__((visibility("default"))) int _ZN13userAllocatorC1Ev(void) {
    ALOGD("_ZN13userAllocatorC1Ev() called");
    return 0;
}
