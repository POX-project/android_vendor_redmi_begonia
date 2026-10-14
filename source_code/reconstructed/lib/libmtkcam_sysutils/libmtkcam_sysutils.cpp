/*
 * Reverse-Engineered Source for: libmtkcam_sysutils.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libmtkcam_sysutils"

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
#include "libmtkcam_sysutils.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: SensorListenerImp_callback(int, int, void*) */
extern "C" __attribute__((visibility("default"))) int _Z26SensorListenerImp_callbackiiPv(void) {
    ALOGD("_Z26SensorListenerImp_callbackiiPv() called");
    return 0;
}

/* Demangled: CpuCtrlImp::enable(CpuCtrl::CPU_CTRL_RANGE_INFO&) */
extern "C" __attribute__((visibility("default"))) int _ZN10CpuCtrlImp6enableERN7CpuCtrl19CPU_CTRL_RANGE_INFOE(void) {
    ALOGD("_ZN10CpuCtrlImp6enableERN7CpuCtrl19CPU_CTRL_RANGE_INFOE() called");
    return 0;
}

/* Demangled: FileCache::~FileCache() */
extern "C" __attribute__((visibility("default"))) int _ZN9FileCacheD0Ev(void) {
    ALOGD("_ZN9FileCacheD0Ev() called");
    return 0;
}

/* Demangled: SensorListenerImp::init() */
extern "C" __attribute__((visibility("default"))) int _ZN17SensorListenerImp4initEv(void) {
    ALOGD("_ZN17SensorListenerImp4initEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__push_back_slow_path<int const&>(int const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__packaged_task_func<std::__1::function<void ()>, std::__1::allocator<std::__1::function<void ()> >, void ()> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__packaged_task_funcINS_8functionIFvvEEENS_9allocatorIS3_EES2_EE = NULL;

/* Demangled: CpuCtrlImp::disable() */
extern "C" __attribute__((visibility("default"))) int _ZN10CpuCtrlImp7disableEv(void) {
    ALOGD("_ZN10CpuCtrlImp7disableEv() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask>, std::__1::allocator<std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask> > >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseINS_10shared_ptrIN5NSCam8JobQueueIFvvELNS2_10JQPriorityE0EE7JobTaskEEENS_9allocatorIS8_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseINS_10shared_ptrIN5NSCam8JobQueueIFvvELNS2_10JQPriorityE0EE7JobTaskEEENS_9allocatorIS8_EEE5clearEv() called");
    return 0;
}

/* Demangled: std::__1::packaged_task<void ()>::operator()() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113packaged_taskIFvvEEclEv(void) {
    ALOGD("_ZNSt3__113packaged_taskIFvvEEclEv() called");
    return 0;
}

/* Demangled: __aeabi_memmove */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove(void) {
    ALOGD("__aeabi_memmove() called");
    return 0;
}

/* Demangled: CpuCtrlImp::init() */
extern "C" __attribute__((visibility("default"))) int _ZN10CpuCtrlImp4initEv(void) {
    ALOGD("_ZN10CpuCtrlImp4initEv() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: Cam3CPUCtrlImp::enterCPUBoost(int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN14Cam3CPUCtrlImp13enterCPUBoostEiPi(void) {
    ALOGD("_ZN14Cam3CPUCtrlImp13enterCPUBoostEiPi() called");
    return 0;
}

/* Demangled: Cam3CPUCtrlImp::enterCameraPerf(int) */
extern "C" __attribute__((visibility("default"))) int _ZN14Cam3CPUCtrlImp15enterCameraPerfEi(void) {
    ALOGD("_ZN14Cam3CPUCtrlImp15enterCameraPerfEi() called");
    return 0;
}

/* Demangled: FileCache::FileCache(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9FileCacheC1EPKc(void) {
    ALOGD("_ZN9FileCacheC1EPKc() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask>, std::__1::allocator<std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask> > >::~__deque_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseINS_10shared_ptrIN5NSCam8JobQueueIFvvELNS2_10JQPriorityE0EE7JobTaskEEENS_9allocatorIS8_EEED2Ev(void) {
    ALOGD("_ZNSt3__112__deque_baseINS_10shared_ptrIN5NSCam8JobQueueIFvvELNS2_10JQPriorityE0EE7JobTaskEEENS_9allocatorIS8_EEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::pair<void*, unsigned int>, std::__1::allocator<std::__1::pair<void*, unsigned int> >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<std::__1::pair<void*, unsigned int> >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferINS_4pairIPvjEERNS_9allocatorIS3_EEEC2EjjS6_(void) {
    ALOGD("_ZNSt3__114__split_bufferINS_4pairIPvjEERNS_9allocatorIS3_EEEC2EjjS6_() called");
    return 0;
}

/* Demangled: FileCache::write(void const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9FileCache5writeEPKvj(void) {
    ALOGD("_ZN9FileCache5writeEPKvj() called");
    return 0;
}

/* Demangled: std::__1::deque<std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask>, std::__1::allocator<std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask> > >::pop_back() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeINS_10shared_ptrIN5NSCam8JobQueueIFvvELNS2_10JQPriorityE0EE7JobTaskEEENS_9allocatorIS8_EEE8pop_backEv(void) {
    ALOGD("_ZNSt3__15dequeINS_10shared_ptrIN5NSCam8JobQueueIFvvELNS2_10JQPriorityE0EE7JobTaskEEENS_9allocatorIS8_EEE8pop_backEv() called");
    return 0;
}

/* Exported Object: VTT for FileCache */
extern "C" __attribute__((visibility("default"))) void* _ZTT9FileCache = NULL;

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Exported Object: vtable for CpuCtrlImp */
extern "C" __attribute__((visibility("default"))) void* _ZTV10CpuCtrlImp = NULL;

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: Cam3CPUCtrlImp::exitCameraPerf() */
extern "C" __attribute__((visibility("default"))) int _ZN14Cam3CPUCtrlImp14exitCameraPerfEv(void) {
    ALOGD("_ZN14Cam3CPUCtrlImp14exitCameraPerfEv() called");
    return 0;
}

/* Demangled: Cam3CPUCtrlImp::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN14Cam3CPUCtrlImp15destroyInstanceEv(void) {
    ALOGD("_ZN14Cam3CPUCtrlImp15destroyInstanceEv() called");
    return 0;
}

/* Exported Object: vtable for Cam3CPUCtrlImp */
extern "C" __attribute__((visibility("default"))) void* _ZTV14Cam3CPUCtrlImp = NULL;

/* Demangled: NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobQueue(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8JobQueueIFvvELNS_10JQPriorityE0EEC2EPKc(void) {
    ALOGD("_ZN5NSCam8JobQueueIFvvELNS_10JQPriorityE0EEC2EPKc() called");
    return 0;
}

/* Demangled: SensorListenerImp::SensorListenerImp(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN17SensorListenerImpC1EPKc(void) {
    ALOGD("_ZN17SensorListenerImpC1EPKc() called");
    return 0;
}

/* Demangled: CpuCtrlImp::~CpuCtrlImp() */
extern "C" __attribute__((visibility("default"))) int _ZN10CpuCtrlImpD2Ev(void) {
    ALOGD("_ZN10CpuCtrlImpD2Ev() called");
    return 0;
}

/* Demangled: Cam3CPUCtrlImp::~Cam3CPUCtrlImp() */
extern "C" __attribute__((visibility("default"))) int _ZN14Cam3CPUCtrlImpD2Ev(void) {
    ALOGD("_ZN14Cam3CPUCtrlImpD2Ev() called");
    return 0;
}

/* Demangled: NSCam::JobQueue<void (), (NSCam::JQPriority)0>::~JobQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8JobQueueIFvvELNS_10JQPriorityE0EED2Ev(void) {
    ALOGD("_ZN5NSCam8JobQueueIFvvELNS_10JQPriorityE0EED2Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask>*, std::__1::allocator<std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask>*> >::push_front(std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam8JobQueueIFvvELNS2_10JQPriorityE0EE7JobTaskEEENS_9allocatorIS9_EEE10push_frontEOS9_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam8JobQueueIFvvELNS2_10JQPriorityE0EE7JobTaskEEENS_9allocatorIS9_EEE10push_frontEOS9_() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask>*, std::__1::allocator<std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask>*> >::push_back(std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam8JobQueueIFvvELNS2_10JQPriorityE0EE7JobTaskEEENS_9allocatorIS9_EEE9push_backEOS9_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam8JobQueueIFvvELNS2_10JQPriorityE0EE7JobTaskEEENS_9allocatorIS9_EEE9push_backEOS9_() called");
    return 0;
}

/* Exported Object: vtable for SensorListenerImp */
extern "C" __attribute__((visibility("default"))) void* _ZTV17SensorListenerImp = NULL;

/* Demangled: CpuCtrlImp::cpuPerformanceMode(int) */
extern "C" __attribute__((visibility("default"))) int _ZN10CpuCtrlImp18cpuPerformanceModeEi(void) {
    ALOGD("_ZN10CpuCtrlImp18cpuPerformanceModeEi() called");
    return 0;
}

/* Demangled: NSCam::IFileCache::open(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam10IFileCache4openEPKc(void) {
    ALOGD("_ZN5NSCam10IFileCache4openEPKc() called");
    return 0;
}

/* Demangled: std::__1::__packaged_task_func<std::__1::function<void ()>, std::__1::allocator<std::__1::function<void ()> >, void ()>::__move_to(std::__1::__packaged_task_base<void ()>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__packaged_task_funcINS_8functionIFvvEEENS_9allocatorIS3_EES2_E9__move_toEPNS_20__packaged_task_baseIS2_EE(void) {
    ALOGD("_ZNSt3__120__packaged_task_funcINS_8functionIFvvEEENS_9allocatorIS3_EES2_E9__move_toEPNS_20__packaged_task_baseIS2_EE() called");
    return 0;
}

/* Demangled: std::__1::deque<std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask>, std::__1::allocator<std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask> > >::__add_front_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeINS_10shared_ptrIN5NSCam8JobQueueIFvvELNS2_10JQPriorityE0EE7JobTaskEEENS_9allocatorIS8_EEE20__add_front_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeINS_10shared_ptrIN5NSCam8JobQueueIFvvELNS2_10JQPriorityE0EE7JobTaskEEENS_9allocatorIS8_EEE20__add_front_capacityEv() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::pair<void*, unsigned int>, std::__1::allocator<std::__1::pair<void*, unsigned int> > >::__swap_out_circular_buffer(std::__1::__split_buffer<std::__1::pair<void*, unsigned int>, std::__1::allocator<std::__1::pair<void*, unsigned int> >&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_4pairIPvjEENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EE(void) {
    ALOGD("_ZNSt3__16vectorINS_4pairIPvjEENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EE() called");
    return 0;
}

/* Demangled: __aeabi_memmove4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove4(void) {
    ALOGD("__aeabi_memmove4() called");
    return 0;
}

/* Demangled: NSCam::JobQueue<void (), (NSCam::JQPriority)0>::addJob(std::__1::function<void ()>, int) */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8JobQueueIFvvELNS_10JQPriorityE0EE6addJobENSt3__18functionIS1_EEi(void) {
    ALOGD("_ZN5NSCam8JobQueueIFvvELNS_10JQPriorityE0EE6addJobENSt3__18functionIS1_EEi() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask>*, std::__1::allocator<std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask>*>&>::push_back(std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam8JobQueueIFvvELNS2_10JQPriorityE0EE7JobTaskEEERNS_9allocatorIS9_EEE9push_backEOS9_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam8JobQueueIFvvELNS2_10JQPriorityE0EE7JobTaskEEERNS_9allocatorIS9_EEE9push_backEOS9_() called");
    return 0;
}

/* Exported Object: vtable for NSCam::JobQueue<void (), (NSCam::JQPriority)0> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN5NSCam8JobQueueIFvvELNS_10JQPriorityE0EEE = NULL;

/* Demangled: CpuCtrlImp::~CpuCtrlImp() */
extern "C" __attribute__((visibility("default"))) int _ZN10CpuCtrlImpD1Ev(void) {
    ALOGD("_ZN10CpuCtrlImpD1Ev() called");
    return 0;
}

/* Demangled: Cam3CPUCtrlImp::~Cam3CPUCtrlImp() */
extern "C" __attribute__((visibility("default"))) int _ZN14Cam3CPUCtrlImpD1Ev(void) {
    ALOGD("_ZN14Cam3CPUCtrlImpD1Ev() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: std::__1::__packaged_task_func<std::__1::function<void ()>, std::__1::allocator<std::__1::function<void ()> >, void ()>::operator()() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__packaged_task_funcINS_8functionIFvvEEENS_9allocatorIS3_EES2_EclEv(void) {
    ALOGD("_ZNSt3__120__packaged_task_funcINS_8functionIFvvEEENS_9allocatorIS3_EES2_EclEv() called");
    return 0;
}

/* Demangled: FileCache::FileCache(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN9FileCacheC2EPKc(void) {
    ALOGD("_ZN9FileCacheC2EPKc() called");
    return 0;
}

/* Demangled: CpuCtrlImp::enable(CpuCtrl::CPU_CTRL_INFO&) */
extern "C" __attribute__((visibility("default"))) int _ZN10CpuCtrlImp6enableERN7CpuCtrl13CPU_CTRL_INFOE(void) {
    ALOGD("_ZN10CpuCtrlImp6enableERN7CpuCtrl13CPU_CTRL_INFOE() called");
    return 0;
}

/* Demangled: Cam3CPUCtrlImp::resetFpsGoProfile() */
extern "C" __attribute__((visibility("default"))) int _ZN14Cam3CPUCtrlImp17resetFpsGoProfileEv(void) {
    ALOGD("_ZN14Cam3CPUCtrlImp17resetFpsGoProfileEv() called");
    return 0;
}

/* Demangled: std::__1::__async_assoc_state<void, std::__1::__async_func<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobQueue(char const*)::{lambda()#1}> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__119__async_assoc_stateIvNS_12__async_funcIZN5NSCam8JobQueueIFvvELNS2_10JQPriorityE0EEC1EPKcEUlvE_JEEEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__119__async_assoc_stateIvNS_12__async_funcIZN5NSCam8JobQueueIFvvELNS2_10JQPriorityE0EEC1EPKcEUlvE_JEEEE16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: std::__1::__packaged_task_func<std::__1::function<void ()>, std::__1::allocator<std::__1::function<void ()> >, void ()>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__packaged_task_funcINS_8functionIFvvEEENS_9allocatorIS3_EES2_E7destroyEv(void) {
    ALOGD("_ZNSt3__120__packaged_task_funcINS_8functionIFvvEEENS_9allocatorIS3_EES2_E7destroyEv() called");
    return 0;
}

/* Demangled: __aeabi_memmove8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove8(void) {
    ALOGD("__aeabi_memmove8() called");
    return 0;
}

/* Demangled: SensorListenerImp::isSupport() */
extern "C" __attribute__((visibility("default"))) int _ZN17SensorListenerImp9isSupportEv(void) {
    ALOGD("_ZN17SensorListenerImp9isSupportEv() called");
    return 0;
}

/* Demangled: SensorListenerImp::~SensorListenerImp() */
extern "C" __attribute__((visibility("default"))) int _ZN17SensorListenerImpD2Ev(void) {
    ALOGD("_ZN17SensorListenerImpD2Ev() called");
    return 0;
}

/* Demangled: CpuCtrlImp::resetTimeout(int) */
extern "C" __attribute__((visibility("default"))) int _ZN10CpuCtrlImp12resetTimeoutEi(void) {
    ALOGD("_ZN10CpuCtrlImp12resetTimeoutEi() called");
    return 0;
}

/* Demangled: CpuCtrlImp::enablePreferIdle() */
extern "C" __attribute__((visibility("default"))) int _ZN10CpuCtrlImp16enablePreferIdleEv(void) {
    ALOGD("_ZN10CpuCtrlImp16enablePreferIdleEv() called");
    return 0;
}

/* Demangled: CpuCtrlImp::~CpuCtrlImp() */
extern "C" __attribute__((visibility("default"))) int _ZN10CpuCtrlImpD0Ev(void) {
    ALOGD("_ZN10CpuCtrlImpD0Ev() called");
    return 0;
}

/* Demangled: Cam3CPUCtrlImp::~Cam3CPUCtrlImp() */
extern "C" __attribute__((visibility("default"))) int _ZN14Cam3CPUCtrlImpD0Ev(void) {
    ALOGD("_ZN14Cam3CPUCtrlImpD0Ev() called");
    return 0;
}

/* Demangled: NSCam::JobQueue<void (), (NSCam::JQPriority)0>::~JobQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam8JobQueueIFvvELNS_10JQPriorityE0EED0Ev(void) {
    ALOGD("_ZN5NSCam8JobQueueIFvvELNS_10JQPriorityE0EED0Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask>*, std::__1::allocator<std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask>*> >::push_front(std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask>* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam8JobQueueIFvvELNS2_10JQPriorityE0EE7JobTaskEEENS_9allocatorIS9_EEE10push_frontERKS9_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam8JobQueueIFvvELNS2_10JQPriorityE0EE7JobTaskEEENS_9allocatorIS9_EEE10push_frontERKS9_() called");
    return 0;
}

/* Demangled: std::__1::future<void> std::__1::__make_async_assoc_state<void, std::__1::__async_func<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobQueue(char const*)::{lambda()#1}> >(std::__1::__async_func<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobQueue(char const*)::{lambda()#1}>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__124__make_async_assoc_stateIvNS_12__async_funcIZN5NSCam8JobQueueIFvvELNS2_10JQPriorityE0EEC1EPKcEUlvE_JEEEEENS_6futureIT_EEOT0_(void) {
    ALOGD("_ZNSt3__124__make_async_assoc_stateIvNS_12__async_funcIZN5NSCam8JobQueueIFvvELNS2_10JQPriorityE0EEC1EPKcEUlvE_JEEEEENS_6futureIT_EEOT0_() called");
    return 0;
}

/* Demangled: std::__1::__packaged_task_function<void ()>::__packaged_task_function<std::__1::function<void ()> >(std::__1::function<void ()>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__124__packaged_task_functionIFvvEEC2INS_8functionIS1_EEEEOT_(void) {
    ALOGD("_ZNSt3__124__packaged_task_functionIFvvEEC2INS_8functionIS1_EEEEOT_() called");
    return 0;
}

/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__push_back_slow_path<int>(int&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIiEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIiEEvOT_() called");
    return 0;
}

/* Demangled: Cam3CPUCtrl::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN11Cam3CPUCtrl14createInstanceEv(void) {
    ALOGD("_ZN11Cam3CPUCtrl14createInstanceEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask, std::__1::allocator<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam8JobQueueIFvvELNS1_10JQPriorityE0EE7JobTaskENS_9allocatorIS6_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam8JobQueueIFvvELNS1_10JQPriorityE0EE7JobTaskENS_9allocatorIS6_EEE16__on_zero_sharedEv() called");
    return 0;
}

/* Exported Object: vtable for FileCache */
extern "C" __attribute__((visibility("default"))) void* _ZTV9FileCache = NULL;

/* Demangled: NSCam::NSMemoryInfo::getFreeMemorySize() */
extern "C" __attribute__((visibility("default"))) int _ZN5NSCam12NSMemoryInfo17getFreeMemorySizeEv(void) {
    ALOGD("_ZN5NSCam12NSMemoryInfo17getFreeMemorySizeEv() called");
    return 0;
}

/* Demangled: SensorListenerImp::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN17SensorListenerImp6uninitEv(void) {
    ALOGD("_ZN17SensorListenerImp6uninitEv() called");
    return 0;
}

/* Demangled: SensorListenerImp::SensorListenerImp(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN17SensorListenerImpC2EPKc(void) {
    ALOGD("_ZN17SensorListenerImpC2EPKc() called");
    return 0;
}

/* Demangled: SensorListenerImp::~SensorListenerImp() */
extern "C" __attribute__((visibility("default"))) int _ZN17SensorListenerImpD1Ev(void) {
    ALOGD("_ZN17SensorListenerImpD1Ev() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf>::operator=(android::sp<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf>&&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerfEEaSEOS7_(void) {
    ALOGD("_ZN7android2spIN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerfEEaSEOS7_() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask>& std::__1::deque<std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask>, std::__1::allocator<std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask> > >::emplace_front<std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask>&>(std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeINS_10shared_ptrIN5NSCam8JobQueueIFvvELNS2_10JQPriorityE0EE7JobTaskEEENS_9allocatorIS8_EEE13emplace_frontIJRS8_EEESD_DpOT_(void) {
    ALOGD("_ZNSt3__15dequeINS_10shared_ptrIN5NSCam8JobQueueIFvvELNS2_10JQPriorityE0EE7JobTaskEEENS_9allocatorIS8_EEE13emplace_frontIJRS8_EEESD_DpOT_() called");
    return 0;
}

/* Demangled: SensorListenerImp::disableSensor(SensorListener::SensorTypeEnum) */
extern "C" __attribute__((visibility("default"))) int _ZN17SensorListenerImp13disableSensorEN14SensorListener14SensorTypeEnumE(void) {
    ALOGD("_ZN17SensorListenerImp13disableSensorEN14SensorListener14SensorTypeEnumE() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__async_assoc_state<void, std::__1::__async_func<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobQueue(char const*)::{lambda()#1}> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__119__async_assoc_stateIvNS_12__async_funcIZN5NSCam8JobQueueIFvvELNS2_10JQPriorityE0EEC1EPKcEUlvE_JEEEEE = NULL;

/* Demangled: CpuCtrlImp::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN10CpuCtrlImp6uninitEv(void) {
    ALOGD("_ZN10CpuCtrlImp6uninitEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask, std::__1::allocator<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN5NSCam8JobQueueIFvvELNS1_10JQPriorityE0EE7JobTaskENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN5NSCam8JobQueueIFvvELNS1_10JQPriorityE0EE7JobTaskENS_9allocatorIS6_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: SensorListenerImp::~SensorListenerImp() */
extern "C" __attribute__((visibility("default"))) int _ZN17SensorListenerImpD0Ev(void) {
    ALOGD("_ZN17SensorListenerImpD0Ev() called");
    return 0;
}

/* Demangled: SensorListener::createInstance(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN14SensorListener14createInstanceEPKc(void) {
    ALOGD("_ZN14SensorListener14createInstanceEPKc() called");
    return 0;
}

/* Demangled: SensorListenerImp::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN17SensorListenerImp15destroyInstanceEv(void) {
    ALOGD("_ZN17SensorListenerImp15destroyInstanceEv() called");
    return 0;
}

/* Demangled: FileCache::~FileCache() */
extern "C" __attribute__((visibility("default"))) int _ZN9FileCacheD2Ev(void) {
    ALOGD("_ZN9FileCacheD2Ev() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask>*, std::__1::allocator<std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask>*> >::~__split_buffer() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam8JobQueueIFvvELNS2_10JQPriorityE0EE7JobTaskEEENS_9allocatorIS9_EEED2Ev(void) {
    ALOGD("_ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam8JobQueueIFvvELNS2_10JQPriorityE0EE7JobTaskEEENS_9allocatorIS9_EEED2Ev() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask>& std::__1::deque<std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask>, std::__1::allocator<std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask> > >::emplace_front<decltype(nullptr)>(decltype(nullptr)&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeINS_10shared_ptrIN5NSCam8JobQueueIFvvELNS2_10JQPriorityE0EE7JobTaskEEENS_9allocatorIS8_EEE13emplace_frontIJDnEEERS8_DpOT_(void) {
    ALOGD("_ZNSt3__15dequeINS_10shared_ptrIN5NSCam8JobQueueIFvvELNS2_10JQPriorityE0EE7JobTaskEEENS_9allocatorIS8_EEE13emplace_frontIJDnEEERS8_DpOT_() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::pair<void*, unsigned int>, std::__1::allocator<std::__1::pair<void*, unsigned int> > >::__push_back_slow_path<std::__1::pair<void*, unsigned int> >(std::__1::pair<void*, unsigned int>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_4pairIPvjEENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_4pairIPvjEENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_() called");
    return 0;
}

/* Demangled: virtual thunk to FileCache::~FileCache() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N9FileCacheD1Ev(void) {
    ALOGD("_ZTv0_n12_N9FileCacheD1Ev() called");
    return 0;
}

/* Demangled: SensorListenerImp::enableSensor(SensorListener::SensorTypeEnum, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN17SensorListenerImp12enableSensorEN14SensorListener14SensorTypeEnumEj(void) {
    ALOGD("_ZN17SensorListenerImp12enableSensorEN14SensorListener14SensorTypeEnumEj() called");
    return 0;
}

/* Demangled: Cam3CPUCtrlImp::setFpsGoProfile(Cam3CPUCtrl::ENUM_CAM3_CPU_CTRL_FPSGO_PROFILE) */
extern "C" __attribute__((visibility("default"))) int _ZN14Cam3CPUCtrlImp15setFpsGoProfileEN11Cam3CPUCtrl32ENUM_CAM3_CPU_CTRL_FPSGO_PROFILEE(void) {
    ALOGD("_ZN14Cam3CPUCtrlImp15setFpsGoProfileEN11Cam3CPUCtrl32ENUM_CAM3_CPU_CTRL_FPSGO_PROFILEE() called");
    return 0;
}

/* Demangled: android::sp<NSCam::IFileCache>::sp<FileCache>(FileCache*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN5NSCam10IFileCacheEEC2I9FileCacheEEPT_(void) {
    ALOGD("_ZN7android2spIN5NSCam10IFileCacheEEC2I9FileCacheEEPT_() called");
    return 0;
}

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

/* Demangled: CpuCtrlImp::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN10CpuCtrlImp15destroyInstanceEv(void) {
    ALOGD("_ZN10CpuCtrlImp15destroyInstanceEv() called");
    return 0;
}

/* Demangled: CpuCtrlImp::CpuCtrlImp() */
extern "C" __attribute__((visibility("default"))) int _ZN10CpuCtrlImpC2Ev(void) {
    ALOGD("_ZN10CpuCtrlImpC2Ev() called");
    return 0;
}

/* Demangled: Cam3CPUCtrlImp::Cam3CPUCtrlImp() */
extern "C" __attribute__((visibility("default"))) int _ZN14Cam3CPUCtrlImpC2Ev(void) {
    ALOGD("_ZN14Cam3CPUCtrlImpC2Ev() called");
    return 0;
}

/* Demangled: CpuCtrl::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7CpuCtrl14createInstanceEv(void) {
    ALOGD("_ZN7CpuCtrl14createInstanceEv() called");
    return 0;
}

/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::__swap_out_circular_buffer(std::__1::__split_buffer<int, std::__1::allocator<int>&>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE26__swap_out_circular_bufferERNS_14__split_bufferIiRS2_EE(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE26__swap_out_circular_bufferERNS_14__split_bufferIiRS2_EE() called");
    return 0;
}

/* Demangled: FileCache::~FileCache() */
extern "C" __attribute__((visibility("default"))) int _ZN9FileCacheD1Ev(void) {
    ALOGD("_ZN9FileCacheD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__async_assoc_state<void, std::__1::__async_func<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobQueue(char const*)::{lambda()#1}> >::__execute() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__119__async_assoc_stateIvNS_12__async_funcIZN5NSCam8JobQueueIFvvELNS2_10JQPriorityE0EEC1EPKcEUlvE_JEEEE9__executeEv(void) {
    ALOGD("_ZNSt3__119__async_assoc_stateIvNS_12__async_funcIZN5NSCam8JobQueueIFvvELNS2_10JQPriorityE0EEC1EPKcEUlvE_JEEEE9__executeEv() called");
    return 0;
}

/* Demangled: std::__1::__packaged_task_func<std::__1::function<void ()>, std::__1::allocator<std::__1::function<void ()> >, void ()>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__packaged_task_funcINS_8functionIFvvEEENS_9allocatorIS3_EES2_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__120__packaged_task_funcINS_8functionIFvvEEENS_9allocatorIS3_EES2_E18destroy_deallocateEv() called");
    return 0;
}

/* Exported Object: construction vtable for NSCam::IFileCache-in-FileCache */
extern "C" __attribute__((visibility("default"))) void* _ZTC9FileCache0_N5NSCam10IFileCacheE = NULL;

/* Demangled: virtual thunk to FileCache::~FileCache() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N9FileCacheD0Ev(void) {
    ALOGD("_ZTv0_n12_N9FileCacheD0Ev() called");
    return 0;
}

/* Demangled: SensorListenerImp::setListener(void (*)()) */
extern "C" __attribute__((visibility("default"))) int _ZN17SensorListenerImp11setListenerEPFvvE(void) {
    ALOGD("_ZN17SensorListenerImp11setListenerEPFvvE() called");
    return 0;
}

/* Demangled: CpuCtrlImp::enableBoost(int) */
extern "C" __attribute__((visibility("default"))) int _ZN10CpuCtrlImp11enableBoostEi(void) {
    ALOGD("_ZN10CpuCtrlImp11enableBoostEi() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf>::operator=(vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerfEEaSEPS6_(void) {
    ALOGD("_ZN7android2spIN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerfEEaSEPS6_() called");
    return 0;
}

/* Demangled: Cam3CPUCtrlImp::exitCPUBoost(int*) */
extern "C" __attribute__((visibility("default"))) int _ZN14Cam3CPUCtrlImp12exitCPUBoostEPi(void) {
    ALOGD("_ZN14Cam3CPUCtrlImp12exitCPUBoostEPi() called");
    return 0;
}

/* Demangled: writeToFile(char*, std::__1::vector<std::__1::pair<void*, unsigned int>, std::__1::allocator<std::__1::pair<void*, unsigned int> > >*) */
extern "C" __attribute__((visibility("default"))) int _Z11writeToFilePcPNSt3__16vectorINS0_4pairIPvjEENS0_9allocatorIS4_EEEE(void) {
    ALOGD("_Z11writeToFilePcPNSt3__16vectorINS0_4pairIPvjEENS0_9allocatorIS4_EEEE() called");
    return 0;
}

/* Demangled: std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN5NSCam8JobQueueIFvvELNS1_10JQPriorityE0EE7JobTaskEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN5NSCam8JobQueueIFvvELNS1_10JQPriorityE0EE7JobTaskEED2Ev() called");
    return 0;
}

/* Demangled: void* std::__1::__thread_proxy<std::__1::tuple<std::__1::unique_ptr<std::__1::__thread_struct, std::__1::default_delete<std::__1::__thread_struct> >, void (std::__1::__async_assoc_state<void, std::__1::__async_func<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobQueue(char const*)::{lambda()#1}> >::*)(), std::__1::__async_func<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobQueue(char const*)::{lambda()#1}>*> >(std::__1::tuple<std::__1::unique_ptr<std::__1::__thread_struct, std::__1::default_delete<std::__1::__thread_struct> >, void (std::__1::__async_assoc_state<void, std::__1::__async_func<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobQueue(char const*)::{lambda()#1}> >::*)(), std::__1::__async_func<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobQueue(char const*)::{lambda()#1}>*>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__thread_proxyINS_5tupleIJNS_10unique_ptrINS_15__thread_structENS_14default_deleteIS3_EEEEMNS_19__async_assoc_stateIvNS_12__async_funcIZN5NSCam8JobQueueIFvvELNS9_10JQPriorityE0EEC1EPKcEUlvE_JEEEEEFvvEPSI_EEEEEPvSN_(void) {
    ALOGD("_ZNSt3__114__thread_proxyINS_5tupleIJNS_10unique_ptrINS_15__thread_structENS_14default_deleteIS3_EEEEMNS_19__async_assoc_stateIvNS_12__async_funcIZN5NSCam8JobQueueIFvvELNS9_10JQPriorityE0EEC1EPKcEUlvE_JEEEEEFvvEPSI_EEEEEPvSN_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask, std::__1::allocator<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam8JobQueueIFvvELNS1_10JQPriorityE0EE7JobTaskENS_9allocatorIS6_EEEE = NULL;

/* Demangled: SensorListenerImp::getEvents() */
extern "C" __attribute__((visibility("default"))) int _ZN17SensorListenerImp9getEventsEv(void) {
    ALOGD("_ZN17SensorListenerImp9getEventsEv() called");
    return 0;
}

/* Demangled: CpuCtrlImp::CpuCtrlImp() */
extern "C" __attribute__((visibility("default"))) int _ZN10CpuCtrlImpC1Ev(void) {
    ALOGD("_ZN10CpuCtrlImpC1Ev() called");
    return 0;
}

/* Demangled: Cam3CPUCtrlImp::setFpsGo(Cam3CPUCtrl::FpsGoParam) */
extern "C" __attribute__((visibility("default"))) int _ZN14Cam3CPUCtrlImp8setFpsGoEN11Cam3CPUCtrl10FpsGoParamE(void) {
    ALOGD("_ZN14Cam3CPUCtrlImp8setFpsGoEN11Cam3CPUCtrl10FpsGoParamE() called");
    return 0;
}

/* Demangled: Cam3CPUCtrlImp::Cam3CPUCtrlImp() */
extern "C" __attribute__((visibility("default"))) int _ZN14Cam3CPUCtrlImpC1Ev(void) {
    ALOGD("_ZN14Cam3CPUCtrlImpC1Ev() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}
