/*
 * Reverse-Engineered ABI Specification for: libmtkcam_sysutils.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libmtkcam_sysutils.so
 */

#ifndef BEGONIA_RE_LIBMTKCAM_SYSUTILS_H
#define BEGONIA_RE_LIBMTKCAM_SYSUTILS_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _Z26SensorListenerImp_callbackiiPv */
/* Demangled: SensorListenerImp_callback(int, int, void*) */
int _Z26SensorListenerImp_callbackiiPv(void);

/* Symbol: _ZN10CpuCtrlImp6enableERN7CpuCtrl19CPU_CTRL_RANGE_INFOE */
/* Demangled: CpuCtrlImp::enable(CpuCtrl::CPU_CTRL_RANGE_INFO&) */
int _ZN10CpuCtrlImp6enableERN7CpuCtrl19CPU_CTRL_RANGE_INFOE(void);

/* Symbol: _ZN9FileCacheD0Ev */
/* Demangled: FileCache::~FileCache() */
int _ZN9FileCacheD0Ev(void);

/* Symbol: _ZN17SensorListenerImp4initEv */
/* Demangled: SensorListenerImp::init() */
int _ZN17SensorListenerImp4initEv(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_ */
/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__push_back_slow_path<int const&>(int const&) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_(void);

/* Symbol: _ZTVNSt3__120__packaged_task_funcINS_8functionIFvvEEENS_9allocatorIS3_EES2_EE */
/* Demangled: vtable for std::__1::__packaged_task_func<std::__1::function<void ()>, std::__1::allocator<std::__1::function<void ()> >, void ()> */
extern void* _ZTVNSt3__120__packaged_task_funcINS_8functionIFvvEEENS_9allocatorIS3_EES2_EE;

/* Symbol: _ZN10CpuCtrlImp7disableEv */
/* Demangled: CpuCtrlImp::disable() */
int _ZN10CpuCtrlImp7disableEv(void);

/* Symbol: _ZNSt3__112__deque_baseINS_10shared_ptrIN5NSCam8JobQueueIFvvELNS2_10JQPriorityE0EE7JobTaskEEENS_9allocatorIS8_EEE5clearEv */
/* Demangled: std::__1::__deque_base<std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask>, std::__1::allocator<std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask> > >::clear() */
int _ZNSt3__112__deque_baseINS_10shared_ptrIN5NSCam8JobQueueIFvvELNS2_10JQPriorityE0EE7JobTaskEEENS_9allocatorIS8_EEE5clearEv(void);

/* Symbol: _ZNSt3__113packaged_taskIFvvEEclEv */
/* Demangled: std::__1::packaged_task<void ()>::operator()() */
int _ZNSt3__113packaged_taskIFvvEEclEv(void);

/* Symbol: __aeabi_memmove */
/* Demangled: __aeabi_memmove */
int __aeabi_memmove(void);

/* Symbol: _ZN10CpuCtrlImp4initEv */
/* Demangled: CpuCtrlImp::init() */
int _ZN10CpuCtrlImp4initEv(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: _ZN14Cam3CPUCtrlImp13enterCPUBoostEiPi */
/* Demangled: Cam3CPUCtrlImp::enterCPUBoost(int, int*) */
int _ZN14Cam3CPUCtrlImp13enterCPUBoostEiPi(void);

/* Symbol: _ZN14Cam3CPUCtrlImp15enterCameraPerfEi */
/* Demangled: Cam3CPUCtrlImp::enterCameraPerf(int) */
int _ZN14Cam3CPUCtrlImp15enterCameraPerfEi(void);

/* Symbol: _ZN9FileCacheC1EPKc */
/* Demangled: FileCache::FileCache(char const*) */
int _ZN9FileCacheC1EPKc(void);

/* Symbol: _ZNSt3__112__deque_baseINS_10shared_ptrIN5NSCam8JobQueueIFvvELNS2_10JQPriorityE0EE7JobTaskEEENS_9allocatorIS8_EEED2Ev */
/* Demangled: std::__1::__deque_base<std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask>, std::__1::allocator<std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask> > >::~__deque_base() */
int _ZNSt3__112__deque_baseINS_10shared_ptrIN5NSCam8JobQueueIFvvELNS2_10JQPriorityE0EE7JobTaskEEENS_9allocatorIS8_EEED2Ev(void);

/* Symbol: _ZNSt3__114__split_bufferINS_4pairIPvjEERNS_9allocatorIS3_EEEC2EjjS6_ */
/* Demangled: std::__1::__split_buffer<std::__1::pair<void*, unsigned int>, std::__1::allocator<std::__1::pair<void*, unsigned int> >&>::__split_buffer(unsigned int, unsigned int, std::__1::allocator<std::__1::pair<void*, unsigned int> >&) */
int _ZNSt3__114__split_bufferINS_4pairIPvjEERNS_9allocatorIS3_EEEC2EjjS6_(void);

/* Symbol: _ZN9FileCache5writeEPKvj */
/* Demangled: FileCache::write(void const*, unsigned int) */
int _ZN9FileCache5writeEPKvj(void);

/* Symbol: _ZNSt3__15dequeINS_10shared_ptrIN5NSCam8JobQueueIFvvELNS2_10JQPriorityE0EE7JobTaskEEENS_9allocatorIS8_EEE8pop_backEv */
/* Demangled: std::__1::deque<std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask>, std::__1::allocator<std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask> > >::pop_back() */
int _ZNSt3__15dequeINS_10shared_ptrIN5NSCam8JobQueueIFvvELNS2_10JQPriorityE0EE7JobTaskEEENS_9allocatorIS8_EEE8pop_backEv(void);

/* Symbol: _ZTT9FileCache */
/* Demangled: VTT for FileCache */
extern void* _ZTT9FileCache;

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: _ZTV10CpuCtrlImp */
/* Demangled: vtable for CpuCtrlImp */
extern void* _ZTV10CpuCtrlImp;

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: _ZN14Cam3CPUCtrlImp14exitCameraPerfEv */
/* Demangled: Cam3CPUCtrlImp::exitCameraPerf() */
int _ZN14Cam3CPUCtrlImp14exitCameraPerfEv(void);

/* Symbol: _ZN14Cam3CPUCtrlImp15destroyInstanceEv */
/* Demangled: Cam3CPUCtrlImp::destroyInstance() */
int _ZN14Cam3CPUCtrlImp15destroyInstanceEv(void);

/* Symbol: _ZTV14Cam3CPUCtrlImp */
/* Demangled: vtable for Cam3CPUCtrlImp */
extern void* _ZTV14Cam3CPUCtrlImp;

/* Symbol: _ZN5NSCam8JobQueueIFvvELNS_10JQPriorityE0EEC2EPKc */
/* Demangled: NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobQueue(char const*) */
int _ZN5NSCam8JobQueueIFvvELNS_10JQPriorityE0EEC2EPKc(void);

/* Symbol: _ZN17SensorListenerImpC1EPKc */
/* Demangled: SensorListenerImp::SensorListenerImp(char const*) */
int _ZN17SensorListenerImpC1EPKc(void);

/* Symbol: _ZN10CpuCtrlImpD2Ev */
/* Demangled: CpuCtrlImp::~CpuCtrlImp() */
int _ZN10CpuCtrlImpD2Ev(void);

/* Symbol: _ZN14Cam3CPUCtrlImpD2Ev */
/* Demangled: Cam3CPUCtrlImp::~Cam3CPUCtrlImp() */
int _ZN14Cam3CPUCtrlImpD2Ev(void);

/* Symbol: _ZN5NSCam8JobQueueIFvvELNS_10JQPriorityE0EED2Ev */
/* Demangled: NSCam::JobQueue<void (), (NSCam::JQPriority)0>::~JobQueue() */
int _ZN5NSCam8JobQueueIFvvELNS_10JQPriorityE0EED2Ev(void);

/* Symbol: _ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam8JobQueueIFvvELNS2_10JQPriorityE0EE7JobTaskEEENS_9allocatorIS9_EEE10push_frontEOS9_ */
/* Demangled: std::__1::__split_buffer<std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask>*, std::__1::allocator<std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask>*> >::push_front(std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask>*&&) */
int _ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam8JobQueueIFvvELNS2_10JQPriorityE0EE7JobTaskEEENS_9allocatorIS9_EEE10push_frontEOS9_(void);

/* Symbol: _ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam8JobQueueIFvvELNS2_10JQPriorityE0EE7JobTaskEEENS_9allocatorIS9_EEE9push_backEOS9_ */
/* Demangled: std::__1::__split_buffer<std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask>*, std::__1::allocator<std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask>*> >::push_back(std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask>*&&) */
int _ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam8JobQueueIFvvELNS2_10JQPriorityE0EE7JobTaskEEENS_9allocatorIS9_EEE9push_backEOS9_(void);

/* Symbol: _ZTV17SensorListenerImp */
/* Demangled: vtable for SensorListenerImp */
extern void* _ZTV17SensorListenerImp;

/* Symbol: _ZN10CpuCtrlImp18cpuPerformanceModeEi */
/* Demangled: CpuCtrlImp::cpuPerformanceMode(int) */
int _ZN10CpuCtrlImp18cpuPerformanceModeEi(void);

/* Symbol: _ZN5NSCam10IFileCache4openEPKc */
/* Demangled: NSCam::IFileCache::open(char const*) */
int _ZN5NSCam10IFileCache4openEPKc(void);

/* Symbol: _ZNSt3__120__packaged_task_funcINS_8functionIFvvEEENS_9allocatorIS3_EES2_E9__move_toEPNS_20__packaged_task_baseIS2_EE */
/* Demangled: std::__1::__packaged_task_func<std::__1::function<void ()>, std::__1::allocator<std::__1::function<void ()> >, void ()>::__move_to(std::__1::__packaged_task_base<void ()>*) */
int _ZNSt3__120__packaged_task_funcINS_8functionIFvvEEENS_9allocatorIS3_EES2_E9__move_toEPNS_20__packaged_task_baseIS2_EE(void);

/* Symbol: _ZNSt3__15dequeINS_10shared_ptrIN5NSCam8JobQueueIFvvELNS2_10JQPriorityE0EE7JobTaskEEENS_9allocatorIS8_EEE20__add_front_capacityEv */
/* Demangled: std::__1::deque<std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask>, std::__1::allocator<std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask> > >::__add_front_capacity() */
int _ZNSt3__15dequeINS_10shared_ptrIN5NSCam8JobQueueIFvvELNS2_10JQPriorityE0EE7JobTaskEEENS_9allocatorIS8_EEE20__add_front_capacityEv(void);

/* Symbol: _ZNSt3__16vectorINS_4pairIPvjEENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EE */
/* Demangled: std::__1::vector<std::__1::pair<void*, unsigned int>, std::__1::allocator<std::__1::pair<void*, unsigned int> > >::__swap_out_circular_buffer(std::__1::__split_buffer<std::__1::pair<void*, unsigned int>, std::__1::allocator<std::__1::pair<void*, unsigned int> >&>&) */
int _ZNSt3__16vectorINS_4pairIPvjEENS_9allocatorIS3_EEE26__swap_out_circular_bufferERNS_14__split_bufferIS3_RS5_EE(void);

/* Symbol: __aeabi_memmove4 */
/* Demangled: __aeabi_memmove4 */
int __aeabi_memmove4(void);

/* Symbol: _ZN5NSCam8JobQueueIFvvELNS_10JQPriorityE0EE6addJobENSt3__18functionIS1_EEi */
/* Demangled: NSCam::JobQueue<void (), (NSCam::JQPriority)0>::addJob(std::__1::function<void ()>, int) */
int _ZN5NSCam8JobQueueIFvvELNS_10JQPriorityE0EE6addJobENSt3__18functionIS1_EEi(void);

/* Symbol: _ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam8JobQueueIFvvELNS2_10JQPriorityE0EE7JobTaskEEERNS_9allocatorIS9_EEE9push_backEOS9_ */
/* Demangled: std::__1::__split_buffer<std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask>*, std::__1::allocator<std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask>*>&>::push_back(std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask>*&&) */
int _ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam8JobQueueIFvvELNS2_10JQPriorityE0EE7JobTaskEEERNS_9allocatorIS9_EEE9push_backEOS9_(void);

/* Symbol: _ZTVN5NSCam8JobQueueIFvvELNS_10JQPriorityE0EEE */
/* Demangled: vtable for NSCam::JobQueue<void (), (NSCam::JQPriority)0> */
extern void* _ZTVN5NSCam8JobQueueIFvvELNS_10JQPriorityE0EEE;

/* Symbol: _ZN10CpuCtrlImpD1Ev */
/* Demangled: CpuCtrlImp::~CpuCtrlImp() */
int _ZN10CpuCtrlImpD1Ev(void);

/* Symbol: _ZN14Cam3CPUCtrlImpD1Ev */
/* Demangled: Cam3CPUCtrlImp::~Cam3CPUCtrlImp() */
int _ZN14Cam3CPUCtrlImpD1Ev(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: _ZNSt3__120__packaged_task_funcINS_8functionIFvvEEENS_9allocatorIS3_EES2_EclEv */
/* Demangled: std::__1::__packaged_task_func<std::__1::function<void ()>, std::__1::allocator<std::__1::function<void ()> >, void ()>::operator()() */
int _ZNSt3__120__packaged_task_funcINS_8functionIFvvEEENS_9allocatorIS3_EES2_EclEv(void);

/* Symbol: _ZN9FileCacheC2EPKc */
/* Demangled: FileCache::FileCache(char const*) */
int _ZN9FileCacheC2EPKc(void);

/* Symbol: _ZN10CpuCtrlImp6enableERN7CpuCtrl13CPU_CTRL_INFOE */
/* Demangled: CpuCtrlImp::enable(CpuCtrl::CPU_CTRL_INFO&) */
int _ZN10CpuCtrlImp6enableERN7CpuCtrl13CPU_CTRL_INFOE(void);

/* Symbol: _ZN14Cam3CPUCtrlImp17resetFpsGoProfileEv */
/* Demangled: Cam3CPUCtrlImp::resetFpsGoProfile() */
int _ZN14Cam3CPUCtrlImp17resetFpsGoProfileEv(void);

/* Symbol: _ZNSt3__119__async_assoc_stateIvNS_12__async_funcIZN5NSCam8JobQueueIFvvELNS2_10JQPriorityE0EEC1EPKcEUlvE_JEEEE16__on_zero_sharedEv */
/* Demangled: std::__1::__async_assoc_state<void, std::__1::__async_func<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobQueue(char const*)::{lambda()#1}> >::__on_zero_shared() */
int _ZNSt3__119__async_assoc_stateIvNS_12__async_funcIZN5NSCam8JobQueueIFvvELNS2_10JQPriorityE0EEC1EPKcEUlvE_JEEEE16__on_zero_sharedEv(void);

/* Symbol: _ZNSt3__120__packaged_task_funcINS_8functionIFvvEEENS_9allocatorIS3_EES2_E7destroyEv */
/* Demangled: std::__1::__packaged_task_func<std::__1::function<void ()>, std::__1::allocator<std::__1::function<void ()> >, void ()>::destroy() */
int _ZNSt3__120__packaged_task_funcINS_8functionIFvvEEENS_9allocatorIS3_EES2_E7destroyEv(void);

/* Symbol: __aeabi_memmove8 */
/* Demangled: __aeabi_memmove8 */
int __aeabi_memmove8(void);

/* Symbol: _ZN17SensorListenerImp9isSupportEv */
/* Demangled: SensorListenerImp::isSupport() */
int _ZN17SensorListenerImp9isSupportEv(void);

/* Symbol: _ZN17SensorListenerImpD2Ev */
/* Demangled: SensorListenerImp::~SensorListenerImp() */
int _ZN17SensorListenerImpD2Ev(void);

/* Symbol: _ZN10CpuCtrlImp12resetTimeoutEi */
/* Demangled: CpuCtrlImp::resetTimeout(int) */
int _ZN10CpuCtrlImp12resetTimeoutEi(void);

/* Symbol: _ZN10CpuCtrlImp16enablePreferIdleEv */
/* Demangled: CpuCtrlImp::enablePreferIdle() */
int _ZN10CpuCtrlImp16enablePreferIdleEv(void);

/* Symbol: _ZN10CpuCtrlImpD0Ev */
/* Demangled: CpuCtrlImp::~CpuCtrlImp() */
int _ZN10CpuCtrlImpD0Ev(void);

/* Symbol: _ZN14Cam3CPUCtrlImpD0Ev */
/* Demangled: Cam3CPUCtrlImp::~Cam3CPUCtrlImp() */
int _ZN14Cam3CPUCtrlImpD0Ev(void);

/* Symbol: _ZN5NSCam8JobQueueIFvvELNS_10JQPriorityE0EED0Ev */
/* Demangled: NSCam::JobQueue<void (), (NSCam::JQPriority)0>::~JobQueue() */
int _ZN5NSCam8JobQueueIFvvELNS_10JQPriorityE0EED0Ev(void);

/* Symbol: _ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam8JobQueueIFvvELNS2_10JQPriorityE0EE7JobTaskEEENS_9allocatorIS9_EEE10push_frontERKS9_ */
/* Demangled: std::__1::__split_buffer<std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask>*, std::__1::allocator<std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask>*> >::push_front(std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask>* const&) */
int _ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam8JobQueueIFvvELNS2_10JQPriorityE0EE7JobTaskEEENS_9allocatorIS9_EEE10push_frontERKS9_(void);

/* Symbol: _ZNSt3__124__make_async_assoc_stateIvNS_12__async_funcIZN5NSCam8JobQueueIFvvELNS2_10JQPriorityE0EEC1EPKcEUlvE_JEEEEENS_6futureIT_EEOT0_ */
/* Demangled: std::__1::future<void> std::__1::__make_async_assoc_state<void, std::__1::__async_func<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobQueue(char const*)::{lambda()#1}> >(std::__1::__async_func<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobQueue(char const*)::{lambda()#1}>&&) */
int _ZNSt3__124__make_async_assoc_stateIvNS_12__async_funcIZN5NSCam8JobQueueIFvvELNS2_10JQPriorityE0EEC1EPKcEUlvE_JEEEEENS_6futureIT_EEOT0_(void);

/* Symbol: _ZNSt3__124__packaged_task_functionIFvvEEC2INS_8functionIS1_EEEEOT_ */
/* Demangled: std::__1::__packaged_task_function<void ()>::__packaged_task_function<std::__1::function<void ()> >(std::__1::function<void ()>&&) */
int _ZNSt3__124__packaged_task_functionIFvvEEC2INS_8functionIS1_EEEEOT_(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIiEEvOT_ */
/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__push_back_slow_path<int>(int&&) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIiEEvOT_(void);

/* Symbol: _ZN11Cam3CPUCtrl14createInstanceEv */
/* Demangled: Cam3CPUCtrl::createInstance() */
int _ZN11Cam3CPUCtrl14createInstanceEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam8JobQueueIFvvELNS1_10JQPriorityE0EE7JobTaskENS_9allocatorIS6_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask, std::__1::allocator<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam8JobQueueIFvvELNS1_10JQPriorityE0EE7JobTaskENS_9allocatorIS6_EEE16__on_zero_sharedEv(void);

/* Symbol: _ZTV9FileCache */
/* Demangled: vtable for FileCache */
extern void* _ZTV9FileCache;

/* Symbol: _ZN5NSCam12NSMemoryInfo17getFreeMemorySizeEv */
/* Demangled: NSCam::NSMemoryInfo::getFreeMemorySize() */
int _ZN5NSCam12NSMemoryInfo17getFreeMemorySizeEv(void);

/* Symbol: _ZN17SensorListenerImp6uninitEv */
/* Demangled: SensorListenerImp::uninit() */
int _ZN17SensorListenerImp6uninitEv(void);

/* Symbol: _ZN17SensorListenerImpC2EPKc */
/* Demangled: SensorListenerImp::SensorListenerImp(char const*) */
int _ZN17SensorListenerImpC2EPKc(void);

/* Symbol: _ZN17SensorListenerImpD1Ev */
/* Demangled: SensorListenerImp::~SensorListenerImp() */
int _ZN17SensorListenerImpD1Ev(void);

/* Symbol: _ZN7android2spIN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerfEEaSEOS7_ */
/* Demangled: android::sp<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf>::operator=(android::sp<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf>&&) */
int _ZN7android2spIN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerfEEaSEOS7_(void);

/* Symbol: _ZNSt3__15dequeINS_10shared_ptrIN5NSCam8JobQueueIFvvELNS2_10JQPriorityE0EE7JobTaskEEENS_9allocatorIS8_EEE13emplace_frontIJRS8_EEESD_DpOT_ */
/* Demangled: std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask>& std::__1::deque<std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask>, std::__1::allocator<std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask> > >::emplace_front<std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask>&>(std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask>&) */
int _ZNSt3__15dequeINS_10shared_ptrIN5NSCam8JobQueueIFvvELNS2_10JQPriorityE0EE7JobTaskEEENS_9allocatorIS8_EEE13emplace_frontIJRS8_EEESD_DpOT_(void);

/* Symbol: _ZN17SensorListenerImp13disableSensorEN14SensorListener14SensorTypeEnumE */
/* Demangled: SensorListenerImp::disableSensor(SensorListener::SensorTypeEnum) */
int _ZN17SensorListenerImp13disableSensorEN14SensorListener14SensorTypeEnumE(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: _ZTVNSt3__119__async_assoc_stateIvNS_12__async_funcIZN5NSCam8JobQueueIFvvELNS2_10JQPriorityE0EEC1EPKcEUlvE_JEEEEE */
/* Demangled: vtable for std::__1::__async_assoc_state<void, std::__1::__async_func<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobQueue(char const*)::{lambda()#1}> > */
extern void* _ZTVNSt3__119__async_assoc_stateIvNS_12__async_funcIZN5NSCam8JobQueueIFvvELNS2_10JQPriorityE0EEC1EPKcEUlvE_JEEEEE;

/* Symbol: _ZN10CpuCtrlImp6uninitEv */
/* Demangled: CpuCtrlImp::uninit() */
int _ZN10CpuCtrlImp6uninitEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN5NSCam8JobQueueIFvvELNS1_10JQPriorityE0EE7JobTaskENS_9allocatorIS6_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask, std::__1::allocator<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN5NSCam8JobQueueIFvvELNS1_10JQPriorityE0EE7JobTaskENS_9allocatorIS6_EEE21__on_zero_shared_weakEv(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: _ZN17SensorListenerImpD0Ev */
/* Demangled: SensorListenerImp::~SensorListenerImp() */
int _ZN17SensorListenerImpD0Ev(void);

/* Symbol: _ZN14SensorListener14createInstanceEPKc */
/* Demangled: SensorListener::createInstance(char const*) */
int _ZN14SensorListener14createInstanceEPKc(void);

/* Symbol: _ZN17SensorListenerImp15destroyInstanceEv */
/* Demangled: SensorListenerImp::destroyInstance() */
int _ZN17SensorListenerImp15destroyInstanceEv(void);

/* Symbol: _ZN9FileCacheD2Ev */
/* Demangled: FileCache::~FileCache() */
int _ZN9FileCacheD2Ev(void);

/* Symbol: _ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam8JobQueueIFvvELNS2_10JQPriorityE0EE7JobTaskEEENS_9allocatorIS9_EEED2Ev */
/* Demangled: std::__1::__split_buffer<std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask>*, std::__1::allocator<std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask>*> >::~__split_buffer() */
int _ZNSt3__114__split_bufferIPNS_10shared_ptrIN5NSCam8JobQueueIFvvELNS2_10JQPriorityE0EE7JobTaskEEENS_9allocatorIS9_EEED2Ev(void);

/* Symbol: _ZNSt3__15dequeINS_10shared_ptrIN5NSCam8JobQueueIFvvELNS2_10JQPriorityE0EE7JobTaskEEENS_9allocatorIS8_EEE13emplace_frontIJDnEEERS8_DpOT_ */
/* Demangled: std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask>& std::__1::deque<std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask>, std::__1::allocator<std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask> > >::emplace_front<decltype(nullptr)>(decltype(nullptr)&&) */
int _ZNSt3__15dequeINS_10shared_ptrIN5NSCam8JobQueueIFvvELNS2_10JQPriorityE0EE7JobTaskEEENS_9allocatorIS8_EEE13emplace_frontIJDnEEERS8_DpOT_(void);

/* Symbol: _ZNSt3__16vectorINS_4pairIPvjEENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::pair<void*, unsigned int>, std::__1::allocator<std::__1::pair<void*, unsigned int> > >::__push_back_slow_path<std::__1::pair<void*, unsigned int> >(std::__1::pair<void*, unsigned int>&&) */
int _ZNSt3__16vectorINS_4pairIPvjEENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_(void);

/* Symbol: _ZTv0_n12_N9FileCacheD1Ev */
/* Demangled: virtual thunk to FileCache::~FileCache() */
int _ZTv0_n12_N9FileCacheD1Ev(void);

/* Symbol: _ZN17SensorListenerImp12enableSensorEN14SensorListener14SensorTypeEnumEj */
/* Demangled: SensorListenerImp::enableSensor(SensorListener::SensorTypeEnum, unsigned int) */
int _ZN17SensorListenerImp12enableSensorEN14SensorListener14SensorTypeEnumEj(void);

/* Symbol: _ZN14Cam3CPUCtrlImp15setFpsGoProfileEN11Cam3CPUCtrl32ENUM_CAM3_CPU_CTRL_FPSGO_PROFILEE */
/* Demangled: Cam3CPUCtrlImp::setFpsGoProfile(Cam3CPUCtrl::ENUM_CAM3_CPU_CTRL_FPSGO_PROFILE) */
int _ZN14Cam3CPUCtrlImp15setFpsGoProfileEN11Cam3CPUCtrl32ENUM_CAM3_CPU_CTRL_FPSGO_PROFILEE(void);

/* Symbol: _ZN7android2spIN5NSCam10IFileCacheEEC2I9FileCacheEEPT_ */
/* Demangled: android::sp<NSCam::IFileCache>::sp<FileCache>(FileCache*) */
int _ZN7android2spIN5NSCam10IFileCacheEEC2I9FileCacheEEPT_(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: _ZN10CpuCtrlImp15destroyInstanceEv */
/* Demangled: CpuCtrlImp::destroyInstance() */
int _ZN10CpuCtrlImp15destroyInstanceEv(void);

/* Symbol: _ZN10CpuCtrlImpC2Ev */
/* Demangled: CpuCtrlImp::CpuCtrlImp() */
int _ZN10CpuCtrlImpC2Ev(void);

/* Symbol: _ZN14Cam3CPUCtrlImpC2Ev */
/* Demangled: Cam3CPUCtrlImp::Cam3CPUCtrlImp() */
int _ZN14Cam3CPUCtrlImpC2Ev(void);

/* Symbol: _ZN7CpuCtrl14createInstanceEv */
/* Demangled: CpuCtrl::createInstance() */
int _ZN7CpuCtrl14createInstanceEv(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE26__swap_out_circular_bufferERNS_14__split_bufferIiRS2_EE */
/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::__swap_out_circular_buffer(std::__1::__split_buffer<int, std::__1::allocator<int>&>&) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE26__swap_out_circular_bufferERNS_14__split_bufferIiRS2_EE(void);

/* Symbol: _ZN9FileCacheD1Ev */
/* Demangled: FileCache::~FileCache() */
int _ZN9FileCacheD1Ev(void);

/* Symbol: _ZNSt3__119__async_assoc_stateIvNS_12__async_funcIZN5NSCam8JobQueueIFvvELNS2_10JQPriorityE0EEC1EPKcEUlvE_JEEEE9__executeEv */
/* Demangled: std::__1::__async_assoc_state<void, std::__1::__async_func<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobQueue(char const*)::{lambda()#1}> >::__execute() */
int _ZNSt3__119__async_assoc_stateIvNS_12__async_funcIZN5NSCam8JobQueueIFvvELNS2_10JQPriorityE0EEC1EPKcEUlvE_JEEEE9__executeEv(void);

/* Symbol: _ZNSt3__120__packaged_task_funcINS_8functionIFvvEEENS_9allocatorIS3_EES2_E18destroy_deallocateEv */
/* Demangled: std::__1::__packaged_task_func<std::__1::function<void ()>, std::__1::allocator<std::__1::function<void ()> >, void ()>::destroy_deallocate() */
int _ZNSt3__120__packaged_task_funcINS_8functionIFvvEEENS_9allocatorIS3_EES2_E18destroy_deallocateEv(void);

/* Symbol: _ZTC9FileCache0_N5NSCam10IFileCacheE */
/* Demangled: construction vtable for NSCam::IFileCache-in-FileCache */
extern void* _ZTC9FileCache0_N5NSCam10IFileCacheE;

/* Symbol: _ZTv0_n12_N9FileCacheD0Ev */
/* Demangled: virtual thunk to FileCache::~FileCache() */
int _ZTv0_n12_N9FileCacheD0Ev(void);

/* Symbol: _ZN17SensorListenerImp11setListenerEPFvvE */
/* Demangled: SensorListenerImp::setListener(void (*)()) */
int _ZN17SensorListenerImp11setListenerEPFvvE(void);

/* Symbol: _ZN10CpuCtrlImp11enableBoostEi */
/* Demangled: CpuCtrlImp::enableBoost(int) */
int _ZN10CpuCtrlImp11enableBoostEi(void);

/* Symbol: _ZN7android2spIN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerfEEaSEPS6_ */
/* Demangled: android::sp<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf>::operator=(vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf*) */
int _ZN7android2spIN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerfEEaSEPS6_(void);

/* Symbol: _ZN14Cam3CPUCtrlImp12exitCPUBoostEPi */
/* Demangled: Cam3CPUCtrlImp::exitCPUBoost(int*) */
int _ZN14Cam3CPUCtrlImp12exitCPUBoostEPi(void);

/* Symbol: _Z11writeToFilePcPNSt3__16vectorINS0_4pairIPvjEENS0_9allocatorIS4_EEEE */
/* Demangled: writeToFile(char*, std::__1::vector<std::__1::pair<void*, unsigned int>, std::__1::allocator<std::__1::pair<void*, unsigned int> > >*) */
int _Z11writeToFilePcPNSt3__16vectorINS0_4pairIPvjEENS0_9allocatorIS4_EEEE(void);

/* Symbol: _ZNSt3__110shared_ptrIN5NSCam8JobQueueIFvvELNS1_10JQPriorityE0EE7JobTaskEED2Ev */
/* Demangled: std::__1::shared_ptr<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN5NSCam8JobQueueIFvvELNS1_10JQPriorityE0EE7JobTaskEED2Ev(void);

/* Symbol: _ZNSt3__114__thread_proxyINS_5tupleIJNS_10unique_ptrINS_15__thread_structENS_14default_deleteIS3_EEEEMNS_19__async_assoc_stateIvNS_12__async_funcIZN5NSCam8JobQueueIFvvELNS9_10JQPriorityE0EEC1EPKcEUlvE_JEEEEEFvvEPSI_EEEEEPvSN_ */
/* Demangled: void* std::__1::__thread_proxy<std::__1::tuple<std::__1::unique_ptr<std::__1::__thread_struct, std::__1::default_delete<std::__1::__thread_struct> >, void (std::__1::__async_assoc_state<void, std::__1::__async_func<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobQueue(char const*)::{lambda()#1}> >::*)(), std::__1::__async_func<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobQueue(char const*)::{lambda()#1}>*> >(std::__1::tuple<std::__1::unique_ptr<std::__1::__thread_struct, std::__1::default_delete<std::__1::__thread_struct> >, void (std::__1::__async_assoc_state<void, std::__1::__async_func<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobQueue(char const*)::{lambda()#1}> >::*)(), std::__1::__async_func<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobQueue(char const*)::{lambda()#1}>*>) */
int _ZNSt3__114__thread_proxyINS_5tupleIJNS_10unique_ptrINS_15__thread_structENS_14default_deleteIS3_EEEEMNS_19__async_assoc_stateIvNS_12__async_funcIZN5NSCam8JobQueueIFvvELNS9_10JQPriorityE0EEC1EPKcEUlvE_JEEEEEFvvEPSI_EEEEEPvSN_(void);

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam8JobQueueIFvvELNS1_10JQPriorityE0EE7JobTaskENS_9allocatorIS6_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask, std::__1::allocator<NSCam::JobQueue<void (), (NSCam::JQPriority)0>::JobTask> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN5NSCam8JobQueueIFvvELNS1_10JQPriorityE0EE7JobTaskENS_9allocatorIS6_EEEE;

/* Symbol: _ZN17SensorListenerImp9getEventsEv */
/* Demangled: SensorListenerImp::getEvents() */
int _ZN17SensorListenerImp9getEventsEv(void);

/* Symbol: _ZN10CpuCtrlImpC1Ev */
/* Demangled: CpuCtrlImp::CpuCtrlImp() */
int _ZN10CpuCtrlImpC1Ev(void);

/* Symbol: _ZN14Cam3CPUCtrlImp8setFpsGoEN11Cam3CPUCtrl10FpsGoParamE */
/* Demangled: Cam3CPUCtrlImp::setFpsGo(Cam3CPUCtrl::FpsGoParam) */
int _ZN14Cam3CPUCtrlImp8setFpsGoEN11Cam3CPUCtrl10FpsGoParamE(void);

/* Symbol: _ZN14Cam3CPUCtrlImpC1Ev */
/* Demangled: Cam3CPUCtrlImp::Cam3CPUCtrlImp() */
int _ZN14Cam3CPUCtrlImpC1Ev(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBMTKCAM_SYSUTILS_H */
