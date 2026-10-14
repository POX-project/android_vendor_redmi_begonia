/*
 * Reverse-Engineered ABI Specification for: libneuron_platform.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libneuron_platform.so
 */

#ifndef BEGONIA_RE_LIBNEURON_PLATFORM_H
#define BEGONIA_RE_LIBNEURON_PLATFORM_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN3xrp6memory7MemPool5AllocEjj */
/* Demangled: xrp::memory::MemPool::Alloc(unsigned int, unsigned int) */
int _ZN3xrp6memory7MemPool5AllocEjj(void);

/* Symbol: _ZN3xrp6memory7MemPool7QueryVaEj */
/* Demangled: xrp::memory::MemPool::QueryVa(unsigned int) */
int _ZN3xrp6memory7MemPool7QueryVaEj(void);

/* Symbol: _ZN3xrp20XrpIntrinsicExecutor19CreateMemoryManagerEv */
/* Demangled: xrp::XrpIntrinsicExecutor::CreateMemoryManager() */
int _ZN3xrp20XrpIntrinsicExecutor19CreateMemoryManagerEv(void);

/* Symbol: _ZN3xrp6memory15XrpIonAllocator11UnmapBufferEmm */
/* Demangled: xrp::memory::XrpIonAllocator::UnmapBuffer(unsigned long, unsigned long) */
int _ZN3xrp6memory15XrpIonAllocator11UnmapBufferEmm(void);

/* Symbol: _ZN3xrp12XrpVpuStreamD0Ev */
/* Demangled: xrp::XrpVpuStream::~XrpVpuStream() */
int _ZN3xrp12XrpVpuStreamD0Ev(void);

/* Symbol: _ZN3xrp14XrpCommandInfo23SetAllocatedDataBuffersENS_13XrpBufferKindEmjRKNS_6memory18PhysicalBufferInfoE */
/* Demangled: xrp::XrpCommandInfo::SetAllocatedDataBuffers(xrp::XrpBufferKind, unsigned long, unsigned int, xrp::memory::PhysicalBufferInfo const&) */
int _ZN3xrp14XrpCommandInfo23SetAllocatedDataBuffersENS_13XrpBufferKindEmjRKNS_6memory18PhysicalBufferInfoE(void);

/* Symbol: _ZNK3xrp12XrpIntrinsic16GetLastXrpBufferEv */
/* Demangled: xrp::XrpIntrinsic::GetLastXrpBuffer() const */
int _ZNK3xrp12XrpIntrinsic16GetLastXrpBufferEv(void);

/* Symbol: _ZN3xrp6memory16XrpMemoryManager12MapIonBufferEmRNS0_18PhysicalBufferInfoE */
/* Demangled: xrp::memory::XrpMemoryManager::MapIonBuffer(unsigned long, xrp::memory::PhysicalBufferInfo&) */
int _ZN3xrp6memory16XrpMemoryManager12MapIonBufferEmRNS0_18PhysicalBufferInfoE(void);

/* Symbol: _ZN3xrp6memory13XrpBufferDesc20UpdateHostBufferInfoEjmRKNS0_18PhysicalBufferInfoE */
/* Demangled: xrp::memory::XrpBufferDesc::UpdateHostBufferInfo(unsigned int, unsigned long, xrp::memory::PhysicalBufferInfo const&) */
int _ZN3xrp6memory13XrpBufferDesc20UpdateHostBufferInfoEjmRKNS0_18PhysicalBufferInfoE(void);

/* Symbol: _ZNK3xrp14XrpCommandInfo20IsXtensaCmdAllocatedEv */
/* Demangled: xrp::XrpCommandInfo::IsXtensaCmdAllocated() const */
int _ZNK3xrp14XrpCommandInfo20IsXtensaCmdAllocatedEv(void);

/* Symbol: _ZN3xrp14XrpCommandInfo18RegisterVpuRequestEj */
/* Demangled: xrp::XrpCommandInfo::RegisterVpuRequest(unsigned int) */
int _ZN3xrp14XrpCommandInfo18RegisterVpuRequestEj(void);

/* Symbol: _ZNK3xrp12XrpIntrinsic15GetDeviceStatusEm */
/* Demangled: xrp::XrpIntrinsic::GetDeviceStatus(unsigned long) const */
int _ZNK3xrp12XrpIntrinsic15GetDeviceStatusEm(void);

/* Symbol: _ZN3xrp6memory16XrpMemoryManager12FreeFromPoolEm */
/* Demangled: xrp::memory::XrpMemoryManager::FreeFromPool(unsigned long) */
int _ZN3xrp6memory16XrpMemoryManager12FreeFromPoolEm(void);

/* Symbol: _ZNK3xrp6memory7MemPool20PrintBlockLinkedListEPNS1_8MemBlockE */
/* Demangled: xrp::memory::MemPool::PrintBlockLinkedList(xrp::memory::MemPool::MemBlock*) const */
int _ZNK3xrp6memory7MemPool20PrintBlockLinkedListEPNS1_8MemBlockE(void);

/* Symbol: _ZN3xrp11XrpDebuggerC2Ev */
/* Demangled: xrp::XrpDebugger::XrpDebugger() */
int _ZN3xrp11XrpDebuggerC2Ev(void);

/* Symbol: _ZN3xrplsERNSt3__113basic_ostreamIcNS0_11char_traitsIcEEEERKNS_6memory13XrpBufferDescE */
/* Demangled: xrp::operator<<(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, xrp::memory::XrpBufferDesc const&) */
int _ZN3xrplsERNSt3__113basic_ostreamIcNS0_11char_traitsIcEEEERKNS_6memory13XrpBufferDescE(void);

/* Symbol: _ZN3xrp12XrpVpuStream24DefaultCreateVpuInstanceEv */
/* Demangled: xrp::XrpVpuStream::DefaultCreateVpuInstance() */
int _ZN3xrp12XrpVpuStream24DefaultCreateVpuInstanceEv(void);

/* Symbol: _ZN3xrp14XrpPatternDump20DumpXtensaOperationsEPKvm */
/* Demangled: xrp::XrpPatternDump::DumpXtensaOperations(void const*, unsigned long) */
int _ZN3xrp14XrpPatternDump20DumpXtensaOperationsEPKvm(void);

/* Symbol: _ZN3xrp6memory13XrpBufferDesc7SetKindENS_13XrpBufferKindE */
/* Demangled: xrp::memory::XrpBufferDesc::SetKind(xrp::XrpBufferKind) */
int _ZN3xrp6memory13XrpBufferDesc7SetKindENS_13XrpBufferKindE(void);

/* Symbol: _ZN3xrp12XrpIntrinsic15UpdateXrpBufferENS_13XrpBufferKindENS_14XrpAccessFlagsERKNS_10BufferInfoE */
/* Demangled: xrp::XrpIntrinsic::UpdateXrpBuffer(xrp::XrpBufferKind, xrp::XrpAccessFlags, xrp::BufferInfo const&) */
int _ZN3xrp12XrpIntrinsic15UpdateXrpBufferENS_13XrpBufferKindENS_14XrpAccessFlagsERKNS_10BufferInfoE(void);

/* Symbol: _ZN3xrp20XrpIntrinsicExecutor14SyncHostBufferEil */
/* Demangled: xrp::XrpIntrinsicExecutor::SyncHostBuffer(int, long) */
int _ZN3xrp20XrpIntrinsicExecutor14SyncHostBufferEil(void);

/* Symbol: _ZN3xrp6memory16XrpMemoryManager12AllocFromIonEmRNS0_18PhysicalBufferInfoE */
/* Demangled: xrp::memory::XrpMemoryManager::AllocFromIon(unsigned long, xrp::memory::PhysicalBufferInfo&) */
int _ZN3xrp6memory16XrpMemoryManager12AllocFromIonEmRNS0_18PhysicalBufferInfoE(void);

/* Symbol: _ZN3xrp12XrpVpuStreamD2Ev */
/* Demangled: xrp::XrpVpuStream::~XrpVpuStream() */
int _ZN3xrp12XrpVpuStreamD2Ev(void);

/* Symbol: _ZN3xrp6memory15XrpIonAllocator10SyncBufferEimmi */
/* Demangled: xrp::memory::XrpIonAllocator::SyncBuffer(int, unsigned long, unsigned long, int) */
int _ZN3xrp6memory15XrpIonAllocator10SyncBufferEimmi(void);

/* Symbol: _ZN3xrp6memory13XrpBufferDescC2ENS_13XrpBufferKindE */
/* Demangled: xrp::memory::XrpBufferDesc::XrpBufferDesc(xrp::XrpBufferKind) */
int _ZN3xrp6memory13XrpBufferDescC2ENS_13XrpBufferKindE(void);

/* Symbol: _ZN3xrp6memory13XrpBufferDescC1ENS_13XrpBufferKindEjmNS_14XrpAccessFlagsE */
/* Demangled: xrp::memory::XrpBufferDesc::XrpBufferDesc(xrp::XrpBufferKind, unsigned int, unsigned long, xrp::XrpAccessFlags) */
int _ZN3xrp6memory13XrpBufferDescC1ENS_13XrpBufferKindEjmNS_14XrpAccessFlagsE(void);

/* Symbol: _ZN3xrp12XrpIntrinsicC2Ei */
/* Demangled: xrp::XrpIntrinsic::XrpIntrinsic(int) */
int _ZN3xrp12XrpIntrinsicC2Ei(void);

/* Symbol: _ZNK3xrp12XrpIntrinsic12GetXrpBufferEl */
/* Demangled: xrp::XrpIntrinsic::GetXrpBuffer(long) const */
int _ZNK3xrp12XrpIntrinsic12GetXrpBufferEl(void);

/* Symbol: _ZN3xrp6memory16XrpMemoryManager12QueryIonInfoEm */
/* Demangled: xrp::memory::XrpMemoryManager::QueryIonInfo(unsigned long) */
int _ZN3xrp6memory16XrpMemoryManager12QueryIonInfoEm(void);

/* Symbol: _ZN3xrp14XrpCommandInfo18CreateDspCmdHandleEjmNS_14XrpAccessFlagsE */
/* Demangled: xrp::XrpCommandInfo::CreateDspCmdHandle(unsigned int, unsigned long, xrp::XrpAccessFlags) */
int _ZN3xrp14XrpCommandInfo18CreateDspCmdHandleEjmNS_14XrpAccessFlagsE(void);

/* Symbol: _ZN3xrp11XrpDebuggerD2Ev */
/* Demangled: xrp::XrpDebugger::~XrpDebugger() */
int _ZN3xrp11XrpDebuggerD2Ev(void);

/* Symbol: _ZN3xrp12XrpIntrinsic18FinalizeXrpCommandEm */
/* Demangled: xrp::XrpIntrinsic::FinalizeXrpCommand(unsigned long) */
int _ZN3xrp12XrpIntrinsic18FinalizeXrpCommandEm(void);

/* Symbol: _ZN3xrp6memory16XrpMemoryManager11FreeFromIonEmRNS0_18PhysicalBufferInfoE */
/* Demangled: xrp::memory::XrpMemoryManager::FreeFromIon(unsigned long, xrp::memory::PhysicalBufferInfo&) */
int _ZN3xrp6memory16XrpMemoryManager11FreeFromIonEmRNS0_18PhysicalBufferInfoE(void);

/* Symbol: _ZN3xrp12XrpVpuStream19DefaultPackRequestsERKNSt3__16vectorIjNS1_9allocatorIjEEEE */
/* Demangled: xrp::XrpVpuStream::DefaultPackRequests(std::__1::vector<unsigned int, std::__1::allocator<unsigned int> > const&) */
int _ZN3xrp12XrpVpuStream19DefaultPackRequestsERKNSt3__16vectorIjNS1_9allocatorIjEEEE(void);

/* Symbol: _ZN3xrp14XrpCommandInfoC2Ej */
/* Demangled: xrp::XrpCommandInfo::XrpCommandInfo(unsigned int) */
int _ZN3xrp14XrpCommandInfoC2Ej(void);

/* Symbol: _ZN3xrplsERNSt3__113basic_ostreamIcNS0_11char_traitsIcEEEERKNS_14XrpCommandInfoE */
/* Demangled: xrp::operator<<(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, xrp::XrpCommandInfo const&) */
int _ZN3xrplsERNSt3__113basic_ostreamIcNS0_11char_traitsIcEEEERKNS_14XrpCommandInfoE(void);

/* Symbol: _ZN3xrp20XrpIntrinsicExecutor19PrepareOutputBufferEm */
/* Demangled: xrp::XrpIntrinsicExecutor::PrepareOutputBuffer(unsigned long) */
int _ZN3xrp20XrpIntrinsicExecutor19PrepareOutputBufferEm(void);

/* Symbol: _ZN3xrp20XrpIntrinsicExecutor12SetOppLevelsEmRKNS_13InferenceInfoE */
/* Demangled: xrp::XrpIntrinsicExecutor::SetOppLevels(unsigned long, xrp::InferenceInfo const&) */
int _ZN3xrp20XrpIntrinsicExecutor12SetOppLevelsEmRKNS_13InferenceInfoE(void);

/* Symbol: _ZN3xrp12XrpVpuStream23DefaultCreateVpuRequestEij */
/* Demangled: xrp::XrpVpuStream::DefaultCreateVpuRequest(int, unsigned int) */
int _ZN3xrp12XrpVpuStream23DefaultCreateVpuRequestEij(void);

/* Symbol: edmc_exit */
/* Demangled: edmc_exit */
int edmc_exit(void);

/* Symbol: _ZN3xrp14XrpCommandInfo17SetDspCmdReleasedEv */
/* Demangled: xrp::XrpCommandInfo::SetDspCmdReleased() */
int _ZN3xrp14XrpCommandInfo17SetDspCmdReleasedEv(void);

/* Symbol: _ZN3xrp11XrpDebugger18PrintXrpDspCommandEPKvN7android4base11LogSeverityE */
/* Demangled: xrp::XrpDebugger::PrintXrpDspCommand(void const*, android::base::LogSeverity) */
int _ZN3xrp11XrpDebugger18PrintXrpDspCommandEPKvN7android4base11LogSeverityE(void);

/* Symbol: _ZN3xrp20XrpIntrinsicExecutor14FreeAllBuffersEv */
/* Demangled: xrp::XrpIntrinsicExecutor::FreeAllBuffers() */
int _ZN3xrp20XrpIntrinsicExecutor14FreeAllBuffersEv(void);

/* Symbol: _ZN3xrp20XrpIntrinsicExecutorD2Ev */
/* Demangled: xrp::XrpIntrinsicExecutor::~XrpIntrinsicExecutor() */
int _ZN3xrp20XrpIntrinsicExecutorD2Ev(void);

/* Symbol: _ZN3xrp20XrpIntrinsicExecutor11SendRequestEmRNS_13InferenceInfoE */
/* Demangled: xrp::XrpIntrinsicExecutor::SendRequest(unsigned long, xrp::InferenceInfo&) */
int _ZN3xrp20XrpIntrinsicExecutor11SendRequestEmRNS_13InferenceInfoE(void);

/* Symbol: _ZNK3xrp20XrpIntrinsicExecutor20PrintXrpCommandInfosEv */
/* Demangled: xrp::XrpIntrinsicExecutor::PrintXrpCommandInfos() const */
int _ZNK3xrp20XrpIntrinsicExecutor20PrintXrpCommandInfosEv(void);

/* Symbol: _ZN3xrp6memory13XrpBufferDesc18UpdatePhysicalInfoERKNS0_18PhysicalBufferInfoE */
/* Demangled: xrp::memory::XrpBufferDesc::UpdatePhysicalInfo(xrp::memory::PhysicalBufferInfo const&) */
int _ZN3xrp6memory13XrpBufferDesc18UpdatePhysicalInfoERKNS0_18PhysicalBufferInfoE(void);

/* Symbol: _ZN3xrp14XrpCommandInfo18SetAllocatedOutputENS_13XrpBufferKindEmjRKNS_6memory18PhysicalBufferInfoE */
/* Demangled: xrp::XrpCommandInfo::SetAllocatedOutput(xrp::XrpBufferKind, unsigned long, unsigned int, xrp::memory::PhysicalBufferInfo const&) */
int _ZN3xrp14XrpCommandInfo18SetAllocatedOutputENS_13XrpBufferKindEmjRKNS_6memory18PhysicalBufferInfoE(void);

/* Symbol: _ZNK3xrp12XrpIntrinsic13RunXrpCommandEmRNS_13InferenceInfoE */
/* Demangled: xrp::XrpIntrinsic::RunXrpCommand(unsigned long, xrp::InferenceInfo&) const */
int _ZNK3xrp12XrpIntrinsic13RunXrpCommandEmRNS_13InferenceInfoE(void);

/* Symbol: _ZNK3xrp20XrpIntrinsicExecutor19GetVpuRequestsCountEm */
/* Demangled: xrp::XrpIntrinsicExecutor::GetVpuRequestsCount(unsigned long) const */
int _ZNK3xrp20XrpIntrinsicExecutor19GetVpuRequestsCountEm(void);

/* Symbol: _ZN3xrp20XrpIntrinsicExecutor17SendMultiRequestsEv */
/* Demangled: xrp::XrpIntrinsicExecutor::SendMultiRequests() */
int _ZN3xrp20XrpIntrinsicExecutor17SendMultiRequestsEv(void);

/* Symbol: _ZN3xrp6memory7MemPool7IsEmptyEv */
/* Demangled: xrp::memory::MemPool::IsEmpty() */
int _ZN3xrp6memory7MemPool7IsEmptyEv(void);

/* Symbol: _ZN3xrp6memory13XrpBufferDesc9SetRawPtrEm */
/* Demangled: xrp::memory::XrpBufferDesc::SetRawPtr(unsigned long) */
int _ZN3xrp6memory13XrpBufferDesc9SetRawPtrEm(void);

/* Symbol: _ZN3xrp20XrpIntrinsicExecutor22FreeInternalCmdBuffersEv */
/* Demangled: xrp::XrpIntrinsicExecutor::FreeInternalCmdBuffers() */
int _ZN3xrp20XrpIntrinsicExecutor22FreeInternalCmdBuffersEv(void);

/* Symbol: _ZN3xrp14XrpCommandInfo18CreateOutputHandleEjmNS_14XrpAccessFlagsE */
/* Demangled: xrp::XrpCommandInfo::CreateOutputHandle(unsigned int, unsigned long, xrp::XrpAccessFlags) */
int _ZN3xrp14XrpCommandInfo18CreateOutputHandleEjmNS_14XrpAccessFlagsE(void);

/* Symbol: _ZN3xrp20XrpIntrinsicExecutor17DestroyXrpCommandEm */
/* Demangled: xrp::XrpIntrinsicExecutor::DestroyXrpCommand(unsigned long) */
int _ZN3xrp20XrpIntrinsicExecutor17DestroyXrpCommandEm(void);

/* Symbol: _ZN3xrp20XrpIntrinsicExecutor20HintXrpCommandOutputEmjmNS_14XrpAccessFlagsE */
/* Demangled: xrp::XrpIntrinsicExecutor::HintXrpCommandOutput(unsigned long, unsigned int, unsigned long, xrp::XrpAccessFlags) */
int _ZN3xrp20XrpIntrinsicExecutor20HintXrpCommandOutputEmjmNS_14XrpAccessFlagsE(void);

/* Symbol: _ZN3xrp6memory15XrpIonAllocator14AllocateBufferEmm */
/* Demangled: xrp::memory::XrpIonAllocator::AllocateBuffer(unsigned long, unsigned long) */
int _ZN3xrp6memory15XrpIonAllocator14AllocateBufferEmm(void);

/* Symbol: _ZN3xrp6memory16XrpMemoryManager15ImportIonBufferEmRNS0_18PhysicalBufferInfoE */
/* Demangled: xrp::memory::XrpMemoryManager::ImportIonBuffer(unsigned long, xrp::memory::PhysicalBufferInfo&) */
int _ZN3xrp6memory16XrpMemoryManager15ImportIonBufferEmRNS0_18PhysicalBufferInfoE(void);

/* Symbol: _ZN3xrp12XrpVpuStream10SetOppStepERKNS_13InferenceInfoEj */
/* Demangled: xrp::XrpVpuStream::SetOppStep(xrp::InferenceInfo const&, unsigned int) */
int _ZN3xrp12XrpVpuStream10SetOppStepERKNS_13InferenceInfoEj(void);

/* Symbol: _ZNK3xrp20XrpIntrinsicExecutor17WaitSingleRequestEj */
/* Demangled: xrp::XrpIntrinsicExecutor::WaitSingleRequest(unsigned int) const */
int _ZNK3xrp20XrpIntrinsicExecutor17WaitSingleRequestEj(void);

/* Symbol: _ZN3xrp12XrpVpuStream24DefaultRunPackedRequestsEv */
/* Demangled: xrp::XrpVpuStream::DefaultRunPackedRequests() */
int _ZN3xrp12XrpVpuStream24DefaultRunPackedRequestsEv(void);

/* Symbol: _ZN3xrp12XrpVpuStream20DefaultSetExtraParamER13VpuExtraParamRKNS_13InferenceInfoE */
/* Demangled: xrp::XrpVpuStream::DefaultSetExtraParam(VpuExtraParam&, xrp::InferenceInfo const&) */
int _ZN3xrp12XrpVpuStream20DefaultSetExtraParamER13VpuExtraParamRKNS_13InferenceInfoE(void);

/* Symbol: _ZN3xrp12XrpVpuStream12GetVpuStatusERNSt3__16vectorI9VpuStatusNS1_9allocatorIS3_EEEE */
/* Demangled: xrp::XrpVpuStream::GetVpuStatus(std::__1::vector<VpuStatus, std::__1::allocator<VpuStatus> >&) */
int _ZN3xrp12XrpVpuStream12GetVpuStatusERNSt3__16vectorI9VpuStatusNS1_9allocatorIS3_EEEE(void);

/* Symbol: _ZNSt3__16vectorIP10VpuRequestNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_ */
/* Demangled: void std::__1::vector<VpuRequest*, std::__1::allocator<VpuRequest*> >::__push_back_slow_path<VpuRequest* const&>(VpuRequest* const&) */
int _ZNSt3__16vectorIP10VpuRequestNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void);

/* Symbol: edmc_fp32tofix8 */
/* Demangled: edmc_fp32tofix8 */
int edmc_fp32tofix8(void);

/* Symbol: _ZN3xrp20XrpIntrinsicExecutor11AllocBufferEmNS_14XrpAccessFlagsEi */
/* Demangled: xrp::XrpIntrinsicExecutor::AllocBuffer(unsigned long, xrp::XrpAccessFlags, int) */
int _ZN3xrp20XrpIntrinsicExecutor11AllocBufferEmNS_14XrpAccessFlagsEi(void);

/* Symbol: _ZN3xrp12XrpVpuStream22AssignDspCommandBufferENS0_10BufferKindEmjj */
/* Demangled: xrp::XrpVpuStream::AssignDspCommandBuffer(xrp::XrpVpuStream::BufferKind, unsigned long, unsigned int, unsigned int) */
int _ZN3xrp12XrpVpuStream22AssignDspCommandBufferENS0_10BufferKindEmjj(void);

/* Symbol: _ZN3xrp6memory15XrpIonAllocatorC1Ev */
/* Demangled: xrp::memory::XrpIonAllocator::XrpIonAllocator() */
int _ZN3xrp6memory15XrpIonAllocatorC1Ev(void);

/* Symbol: _ZN3xrp12XrpIntrinsic14SetupXrpDeviceEv */
/* Demangled: xrp::XrpIntrinsic::SetupXrpDevice() */
int _ZN3xrp12XrpIntrinsic14SetupXrpDeviceEv(void);

/* Symbol: _ZN3xrp20XrpIntrinsicExecutor18InitXrpCommandInfoEm */
/* Demangled: xrp::XrpIntrinsicExecutor::InitXrpCommandInfo(unsigned long) */
int _ZN3xrp20XrpIntrinsicExecutor18InitXrpCommandInfoEm(void);

/* Symbol: _ZN3xrp20XrpIntrinsicExecutor13GetXrpCommandEm */
/* Demangled: xrp::XrpIntrinsicExecutor::GetXrpCommand(unsigned long) */
int _ZN3xrp20XrpIntrinsicExecutor13GetXrpCommandEm(void);

/* Symbol: _ZN3xrp6memory16XrpMemoryManager14UnmapIonBufferEmRNS0_18PhysicalBufferInfoE */
/* Demangled: xrp::memory::XrpMemoryManager::UnmapIonBuffer(unsigned long, xrp::memory::PhysicalBufferInfo&) */
int _ZN3xrp6memory16XrpMemoryManager14UnmapIonBufferEmRNS0_18PhysicalBufferInfoE(void);

/* Symbol: _ZN3xrp6memory7MemPool11GetPropertyERNS1_8PropertyE */
/* Demangled: xrp::memory::MemPool::GetProperty(xrp::memory::MemPool::Property&) */
int _ZN3xrp6memory7MemPool11GetPropertyERNS1_8PropertyE(void);

/* Symbol: _ZN3xrp20XrpIntrinsicExecutor10RunCommandEmRNS_13InferenceInfoE */
/* Demangled: xrp::XrpIntrinsicExecutor::RunCommand(unsigned long, xrp::InferenceInfo&) */
int _ZN3xrp20XrpIntrinsicExecutor10RunCommandEmRNS_13InferenceInfoE(void);

/* Symbol: _ZN3xrp6memory16XrpMemoryManager13SyncIonBufferEimmi */
/* Demangled: xrp::memory::XrpMemoryManager::SyncIonBuffer(int, unsigned long, unsigned long, int) */
int _ZN3xrp6memory16XrpMemoryManager13SyncIonBufferEimmi(void);

/* Symbol: _ZN3xrp6memory16XrpMemoryManager20CloseIonSharedBufferERNS0_18PhysicalBufferInfoE */
/* Demangled: xrp::memory::XrpMemoryManager::CloseIonSharedBuffer(xrp::memory::PhysicalBufferInfo&) */
int _ZN3xrp6memory16XrpMemoryManager20CloseIonSharedBufferERNS0_18PhysicalBufferInfoE(void);

/* Symbol: _ZN3xrp14XrpPatternDump10DumpDspCmdEPKv */
/* Demangled: xrp::XrpPatternDump::DumpDspCmd(void const*) */
int _ZN3xrp14XrpPatternDump10DumpDspCmdEPKv(void);

/* Symbol: _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m */
/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned long) */
int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m(void);

/* Symbol: _ZN3xrp6memory13XrpBufferDesc12SetAlignmentEj */
/* Demangled: xrp::memory::XrpBufferDesc::SetAlignment(unsigned int) */
int _ZN3xrp6memory13XrpBufferDesc12SetAlignmentEj(void);

/* Symbol: _ZN3xrp20XrpIntrinsicExecutor21CreateEmptyBufferDescEv */
/* Demangled: xrp::XrpIntrinsicExecutor::CreateEmptyBufferDesc() */
int _ZN3xrp20XrpIntrinsicExecutor21CreateEmptyBufferDescEv(void);

/* Symbol: _ZN3xrp6memory15XrpIonAllocatorD1Ev */
/* Demangled: xrp::memory::XrpIonAllocator::~XrpIonAllocator() */
int _ZN3xrp6memory15XrpIonAllocatorD1Ev(void);

/* Symbol: _ZN3xrp6memory7MemPoolD2Ev */
/* Demangled: xrp::memory::MemPool::~MemPool() */
int _ZN3xrp6memory7MemPoolD2Ev(void);

/* Symbol: _ZN3xrp6memory15XrpIonAllocator12ImportBufferEi */
/* Demangled: xrp::memory::XrpIonAllocator::ImportBuffer(int) */
int _ZN3xrp6memory15XrpIonAllocator12ImportBufferEi(void);

/* Symbol: _ZN3xrp6memory16XrpMemoryManager11FreeFromIonERNS0_13XrpBufferDescE */
/* Demangled: xrp::memory::XrpMemoryManager::FreeFromIon(xrp::memory::XrpBufferDesc&) */
int _ZN3xrp6memory16XrpMemoryManager11FreeFromIonERNS0_13XrpBufferDescE(void);

/* Symbol: _ZN3xrp12XrpVpuStream21DefaultUnpackRequestsEv */
/* Demangled: xrp::XrpVpuStream::DefaultUnpackRequests() */
int _ZN3xrp12XrpVpuStream21DefaultUnpackRequestsEv(void);

/* Symbol: _ZN3xrp6memory15XrpIonAllocator10FreeBufferEi */
/* Demangled: xrp::memory::XrpIonAllocator::FreeBuffer(int) */
int _ZN3xrp6memory15XrpIonAllocator10FreeBufferEi(void);

/* Symbol: _ZN3xrp6memory16XrpMemoryManagerC2Ev */
/* Demangled: xrp::memory::XrpMemoryManager::XrpMemoryManager() */
int _ZN3xrp6memory16XrpMemoryManagerC2Ev(void);

/* Symbol: _ZTVN3xrp12XrpVpuStreamE */
/* Demangled: vtable for xrp::XrpVpuStream */
extern void* _ZTVN3xrp12XrpVpuStreamE;

/* Symbol: _ZN3xrp6memory13XrpBufferDescD2Ev */
/* Demangled: xrp::memory::XrpBufferDesc::~XrpBufferDesc() */
int _ZN3xrp6memory13XrpBufferDescD2Ev(void);

/* Symbol: _ZN3xrplsERNSt3__113basic_ostreamIcNS0_11char_traitsIcEEEERKNS_13InferenceInfoE */
/* Demangled: xrp::operator<<(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, xrp::InferenceInfo const&) */
int _ZN3xrplsERNSt3__113basic_ostreamIcNS0_11char_traitsIcEEEERKNS_13InferenceInfoE(void);

/* Symbol: _ZNK3xrp20XrpIntrinsicExecutor13GetVpuRequestEmmRNS_14VpuRequestInfoE */
/* Demangled: xrp::XrpIntrinsicExecutor::GetVpuRequest(unsigned long, unsigned long, xrp::VpuRequestInfo&) const */
int _ZNK3xrp20XrpIntrinsicExecutor13GetVpuRequestEmmRNS_14VpuRequestInfoE(void);

/* Symbol: _ZN3xrp20XrpIntrinsicExecutor16WritebackCommandEm */
/* Demangled: xrp::XrpIntrinsicExecutor::WritebackCommand(unsigned long) */
int _ZN3xrp20XrpIntrinsicExecutor16WritebackCommandEm(void);

/* Symbol: _ZN3xrp6memory13XrpBufferDesc12SetAllocatedEmjRKNS0_18PhysicalBufferInfoE */
/* Demangled: xrp::memory::XrpBufferDesc::SetAllocated(unsigned long, unsigned int, xrp::memory::PhysicalBufferInfo const&) */
int _ZN3xrp6memory13XrpBufferDesc12SetAllocatedEmjRKNS0_18PhysicalBufferInfoE(void);

/* Symbol: _ZN3xrp12XrpIntrinsicD2Ev */
/* Demangled: xrp::XrpIntrinsic::~XrpIntrinsic() */
int _ZN3xrp12XrpIntrinsicD2Ev(void);

/* Symbol: _ZN3xrp6memory16XrpMemoryManager7QueryPaEm */
/* Demangled: xrp::memory::XrpMemoryManager::QueryPa(unsigned long) */
int _ZN3xrp6memory16XrpMemoryManager7QueryPaEm(void);

/* Symbol: _ZNK3xrp6memory16XrpMemoryManager11GetPoolSizeEv */
/* Demangled: xrp::memory::XrpMemoryManager::GetPoolSize() const */
int _ZNK3xrp6memory16XrpMemoryManager11GetPoolSizeEv(void);

/* Symbol: _ZN3xrplsERNSt3__113basic_ostreamIcNS0_11char_traitsIcEEEERKNS_13XrpBufferKindE */
/* Demangled: xrp::operator<<(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, xrp::XrpBufferKind const&) */
int _ZN3xrplsERNSt3__113basic_ostreamIcNS0_11char_traitsIcEEEERKNS_13XrpBufferKindE(void);

/* Symbol: _ZN3xrp14XrpCommandInfoD2Ev */
/* Demangled: xrp::XrpCommandInfo::~XrpCommandInfo() */
int _ZN3xrp14XrpCommandInfoD2Ev(void);

/* Symbol: _ZN3xrplsERNSt3__113basic_ostreamIcNS0_11char_traitsIcEEEERKNS_6memory18PhysicalBufferInfoE */
/* Demangled: xrp::operator<<(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, xrp::memory::PhysicalBufferInfo const&) */
int _ZN3xrplsERNSt3__113basic_ostreamIcNS0_11char_traitsIcEEEERKNS_6memory18PhysicalBufferInfoE(void);

/* Symbol: _ZN3xrp6memory16XrpMemoryManagerD2Ev */
/* Demangled: xrp::memory::XrpMemoryManager::~XrpMemoryManager() */
int _ZN3xrp6memory16XrpMemoryManagerD2Ev(void);

/* Symbol: _ZN3xrp20XrpIntrinsicExecutor17PrepareDataBufferEm */
/* Demangled: xrp::XrpIntrinsicExecutor::PrepareDataBuffer(unsigned long) */
int _ZN3xrp20XrpIntrinsicExecutor17PrepareDataBufferEm(void);

/* Symbol: _ZN3xrp6memory16XrpMemoryManager8IonSetupEv */
/* Demangled: xrp::memory::XrpMemoryManager::IonSetup() */
int _ZN3xrp6memory16XrpMemoryManager8IonSetupEv(void);

/* Symbol: _ZN3xrp12XrpVpuStream21CleanDspCommandBufferEm */
/* Demangled: xrp::XrpVpuStream::CleanDspCommandBuffer(unsigned long) */
int _ZN3xrp12XrpVpuStream21CleanDspCommandBufferEm(void);

/* Symbol: _ZN3xrp20XrpIntrinsicExecutor27UpdateDataBufferCommandInfoEijj */
/* Demangled: xrp::XrpIntrinsicExecutor::UpdateDataBufferCommandInfo(int, unsigned int, unsigned int) */
int _ZN3xrp20XrpIntrinsicExecutor27UpdateDataBufferCommandInfoEijj(void);

/* Symbol: _ZN3xrp6memory15XrpIonAllocator14SyncBufferByFdEimmi */
/* Demangled: xrp::memory::XrpIonAllocator::SyncBufferByFd(int, unsigned long, unsigned long, int) */
int _ZN3xrp6memory15XrpIonAllocator14SyncBufferByFdEimmi(void);

/* Symbol: _ZN3xrp14XrpCommandInfo7SetNsidEjm */
/* Demangled: xrp::XrpCommandInfo::SetNsid(unsigned int, unsigned long) */
int _ZN3xrp14XrpCommandInfo7SetNsidEjm(void);

/* Symbol: _ZN3xrp6memory15XrpIonAllocator11ShareBufferEi */
/* Demangled: xrp::memory::XrpIonAllocator::ShareBuffer(int) */
int _ZN3xrp6memory15XrpIonAllocator11ShareBufferEi(void);

/* Symbol: _ZNK3xrp20XrpIntrinsicExecutor17WaitMultiRequestsEv */
/* Demangled: xrp::XrpIntrinsicExecutor::WaitMultiRequests() const */
int _ZNK3xrp20XrpIntrinsicExecutor17WaitMultiRequestsEv(void);

/* Symbol: _ZNK3xrp20XrpIntrinsicExecutor14UpdateEaraInfoEjRNS_13InferenceInfoE */
/* Demangled: xrp::XrpIntrinsicExecutor::UpdateEaraInfo(unsigned int, xrp::InferenceInfo&) const */
int _ZNK3xrp20XrpIntrinsicExecutor14UpdateEaraInfoEjRNS_13InferenceInfoE(void);

/* Symbol: _ZN3xrp11XrpDebuggerC1Ev */
/* Demangled: xrp::XrpDebugger::XrpDebugger() */
int _ZN3xrp11XrpDebuggerC1Ev(void);

/* Symbol: _ZNK3xrp12XrpVpuStream19GetVpuInferenceInfoER16VpuInferenceInfoj */
/* Demangled: xrp::XrpVpuStream::GetVpuInferenceInfo(VpuInferenceInfo&, unsigned int) const */
int _ZNK3xrp12XrpVpuStream19GetVpuInferenceInfoER16VpuInferenceInfoj(void);

/* Symbol: edmc_reset */
/* Demangled: edmc_reset */
int edmc_reset(void);

/* Symbol: _ZN3xrp14XrpCommandInfo20SetXtensaCmdReleasedEv */
/* Demangled: xrp::XrpCommandInfo::SetXtensaCmdReleased() */
int _ZN3xrp14XrpCommandInfo20SetXtensaCmdReleasedEv(void);

/* Symbol: _ZN3xrp14XrpCommandInfo17SetOutputReleasedEv */
/* Demangled: xrp::XrpCommandInfo::SetOutputReleased() */
int _ZN3xrp14XrpCommandInfo17SetOutputReleasedEv(void);

/* Symbol: _ZN3xrp11XrpDebugger21PrintXtensaOperationsEPKvmN7android4base11LogSeverityE */
/* Demangled: xrp::XrpDebugger::PrintXtensaOperations(void const*, unsigned long, android::base::LogSeverity) */
int _ZN3xrp11XrpDebugger21PrintXtensaOperationsEPKvmN7android4base11LogSeverityE(void);

/* Symbol: _ZN3xrp12XrpIntrinsic16CreateXrpCommandEm */
/* Demangled: xrp::XrpIntrinsic::CreateXrpCommand(unsigned long) */
int _ZN3xrp12XrpIntrinsic16CreateXrpCommandEm(void);

/* Symbol: _ZN3xrp20XrpIntrinsicExecutorC2ENSt3__110unique_ptrINS_10XrpOptionsENS1_14default_deleteIS3_EEEE */
/* Demangled: xrp::XrpIntrinsicExecutor::XrpIntrinsicExecutor(std::__1::unique_ptr<xrp::XrpOptions, std::__1::default_delete<xrp::XrpOptions> >) */
int _ZN3xrp20XrpIntrinsicExecutorC2ENSt3__110unique_ptrINS_10XrpOptionsENS1_14default_deleteIS3_EEEE(void);

/* Symbol: _ZN3xrp6memory15XrpIonAllocator5SetupEv */
/* Demangled: xrp::memory::XrpIonAllocator::Setup() */
int _ZN3xrp6memory15XrpIonAllocator5SetupEv(void);

/* Symbol: _ZN3xrp6memory16XrpMemoryManager17GetMemPoolIdxByPaEj */
/* Demangled: xrp::memory::XrpMemoryManager::GetMemPoolIdxByPa(unsigned int) */
int _ZN3xrp6memory16XrpMemoryManager17GetMemPoolIdxByPaEj(void);

/* Symbol: _ZN3xrp12XrpVpuStreamD1Ev */
/* Demangled: xrp::XrpVpuStream::~XrpVpuStream() */
int _ZN3xrp12XrpVpuStreamD1Ev(void);

/* Symbol: _ZN3xrp12XrpIntrinsicC1Ei */
/* Demangled: xrp::XrpIntrinsic::XrpIntrinsic(int) */
int _ZN3xrp12XrpIntrinsicC1Ei(void);

/* Symbol: _ZNK3xrp12XrpVpuStream19GetNumberOfRequestsEv */
/* Demangled: xrp::XrpVpuStream::GetNumberOfRequests() const */
int _ZNK3xrp12XrpVpuStream19GetNumberOfRequestsEv(void);

/* Symbol: edmc_copy */
/* Demangled: edmc_copy */
int edmc_copy(void);

/* Symbol: _ZN3xrp11XrpDebuggerD1Ev */
/* Demangled: xrp::XrpDebugger::~XrpDebugger() */
int _ZN3xrp11XrpDebuggerD1Ev(void);

/* Symbol: _ZN3xrp6memory16XrpMemoryManager13FreeIonBufferERNS0_18PhysicalBufferInfoE */
/* Demangled: xrp::memory::XrpMemoryManager::FreeIonBuffer(xrp::memory::PhysicalBufferInfo&) */
int _ZN3xrp6memory16XrpMemoryManager13FreeIonBufferERNS0_18PhysicalBufferInfoE(void);

/* Symbol: edmc_wait */
/* Demangled: edmc_wait */
int edmc_wait(void);

/* Symbol: _ZN3xrp14XrpCommandInfoC1Ej */
/* Demangled: xrp::XrpCommandInfo::XrpCommandInfo(unsigned int) */
int _ZN3xrp14XrpCommandInfoC1Ej(void);

/* Symbol: _ZN3xrp12XrpIntrinsic15CreateXrpBufferENS_13XrpBufferKindENS_14XrpAccessFlagsERKNS_10BufferInfoE */
/* Demangled: xrp::XrpIntrinsic::CreateXrpBuffer(xrp::XrpBufferKind, xrp::XrpAccessFlags, xrp::BufferInfo const&) */
int _ZN3xrp12XrpIntrinsic15CreateXrpBufferENS_13XrpBufferKindENS_14XrpAccessFlagsERKNS_10BufferInfoE(void);

/* Symbol: _ZN3xrp20XrpIntrinsicExecutor19HintXrpCommandInputEmjmNS_14XrpAccessFlagsE */
/* Demangled: xrp::XrpIntrinsicExecutor::HintXrpCommandInput(unsigned long, unsigned int, unsigned long, xrp::XrpAccessFlags) */
int _ZN3xrp20XrpIntrinsicExecutor19HintXrpCommandInputEmjmNS_14XrpAccessFlagsE(void);

/* Symbol: _ZN3xrp6memory15XrpIonAllocator9MapBufferEmi */
/* Demangled: xrp::memory::XrpIonAllocator::MapBuffer(unsigned long, int) */
int _ZN3xrp6memory15XrpIonAllocator9MapBufferEmi(void);

/* Symbol: _ZNK3xrp12XrpVpuStream13GetOutputIovaEm */
/* Demangled: xrp::XrpVpuStream::GetOutputIova(unsigned long) const */
int _ZNK3xrp12XrpVpuStream13GetOutputIovaEm(void);

/* Symbol: _ZN3xrplsERNSt3__113basic_ostreamIcNS0_11char_traitsIcEEEERKNS_14XrpAccessFlagsE */
/* Demangled: xrp::operator<<(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, xrp::XrpAccessFlags const&) */
int _ZN3xrplsERNSt3__113basic_ostreamIcNS0_11char_traitsIcEEEERKNS_14XrpAccessFlagsE(void);

/* Symbol: _ZN3xrp14XrpCommandInfo18RegisterDataBufferEl */
/* Demangled: xrp::XrpCommandInfo::RegisterDataBuffer(long) */
int _ZN3xrp14XrpCommandInfo18RegisterDataBufferEl(void);

/* Symbol: _ZN3xrp12XrpIntrinsic13SyncXrpBufferEiRKNS_10BufferInfoE */
/* Demangled: xrp::XrpIntrinsic::SyncXrpBuffer(int, xrp::BufferInfo const&) */
int _ZN3xrp12XrpIntrinsic13SyncXrpBufferEiRKNS_10BufferInfoE(void);

/* Symbol: _ZN3xrp20XrpIntrinsicExecutorD1Ev */
/* Demangled: xrp::XrpIntrinsicExecutor::~XrpIntrinsicExecutor() */
int _ZN3xrp20XrpIntrinsicExecutorD1Ev(void);

/* Symbol: _ZNK3xrp20XrpIntrinsicExecutor13GetXrpCommandEm */
/* Demangled: xrp::XrpIntrinsicExecutor::GetXrpCommand(unsigned long) const */
int _ZNK3xrp20XrpIntrinsicExecutor13GetXrpCommandEm(void);

/* Symbol: _ZNK3xrp12XrpVpuStream8GetFlagsEm */
/* Demangled: xrp::XrpVpuStream::GetFlags(unsigned long) const */
int _ZNK3xrp12XrpVpuStream8GetFlagsEm(void);

/* Symbol: _ZN3xrp12XrpVpuStream17DefaultRunRequestEj */
/* Demangled: xrp::XrpVpuStream::DefaultRunRequest(unsigned int) */
int _ZN3xrp12XrpVpuStream17DefaultRunRequestEj(void);

/* Symbol: edmc_rgb2rgba */
/* Demangled: edmc_rgb2rgba */
int edmc_rgb2rgba(void);

/* Symbol: _ZN3xrp20XrpIntrinsicExecutor12ImportBufferERKNS_10BufferInfoENS_14XrpAccessFlagsEi */
/* Demangled: xrp::XrpIntrinsicExecutor::ImportBuffer(xrp::BufferInfo const&, xrp::XrpAccessFlags, int) */
int _ZN3xrp20XrpIntrinsicExecutor12ImportBufferERKNS_10BufferInfoENS_14XrpAccessFlagsEi(void);

/* Symbol: _ZN3xrp6memory16XrpMemoryManager13AllocFromPoolEjj */
/* Demangled: xrp::memory::XrpMemoryManager::AllocFromPool(unsigned int, unsigned int) */
int _ZN3xrp6memory16XrpMemoryManager13AllocFromPoolEjj(void);

/* Symbol: _ZNK3xrp14XrpCommandInfo17IsDspCmdAllocatedEv */
/* Demangled: xrp::XrpCommandInfo::IsDspCmdAllocated() const */
int _ZNK3xrp14XrpCommandInfo17IsDspCmdAllocatedEv(void);

/* Symbol: _ZN3xrp12XrpIntrinsic17PrepareXrpCommandEml */
/* Demangled: xrp::XrpIntrinsic::PrepareXrpCommand(unsigned long, long) */
int _ZN3xrp12XrpIntrinsic17PrepareXrpCommandEml(void);

/* Symbol: _ZN3xrp6memory16XrpMemoryManager18FreeImportedBufferERNS0_13XrpBufferDescE */
/* Demangled: xrp::memory::XrpMemoryManager::FreeImportedBuffer(xrp::memory::XrpBufferDesc&) */
int _ZN3xrp6memory16XrpMemoryManager18FreeImportedBufferERNS0_13XrpBufferDescE(void);

/* Symbol: _ZN3xrp6memory7MemPool11GetFreeSizeEv */
/* Demangled: xrp::memory::MemPool::GetFreeSize() */
int _ZN3xrp6memory7MemPool11GetFreeSizeEv(void);

/* Symbol: _ZN3xrp20XrpIntrinsicExecutor18FreeMemoryFromPoolEm */
/* Demangled: xrp::XrpIntrinsicExecutor::FreeMemoryFromPool(unsigned long) */
int _ZN3xrp20XrpIntrinsicExecutor18FreeMemoryFromPoolEm(void);

/* Symbol: _ZNK3xrp12XrpVpuStream11GetOutputVaEm */
/* Demangled: xrp::XrpVpuStream::GetOutputVa(unsigned long) const */
int _ZNK3xrp12XrpVpuStream11GetOutputVaEm(void);

/* Symbol: _ZN3xrp6memory15XrpIonAllocator13QueryPhysicalEi */
/* Demangled: xrp::memory::XrpIonAllocator::QueryPhysical(int) */
int _ZN3xrp6memory15XrpIonAllocator13QueryPhysicalEi(void);

/* Symbol: _ZN3xrp6memory16XrpMemoryManager7QueryVaEj */
/* Demangled: xrp::memory::XrpMemoryManager::QueryVa(unsigned int) */
int _ZN3xrp6memory16XrpMemoryManager7QueryVaEj(void);

/* Symbol: _ZN3xrp6memory7MemPool7QueryPaEm */
/* Demangled: xrp::memory::MemPool::QueryPa(unsigned long) */
int _ZN3xrp6memory7MemPool7QueryPaEm(void);

/* Symbol: _ZN3xrp6memory7MemPoolC1Ejmjjj */
/* Demangled: xrp::memory::MemPool::MemPool(unsigned int, unsigned long, unsigned int, unsigned int, unsigned int) */
int _ZN3xrp6memory7MemPoolC1Ejmjjj(void);

/* Symbol: _ZN3xrp20XrpIntrinsicExecutor17SendSingleRequestEj */
/* Demangled: xrp::XrpIntrinsicExecutor::SendSingleRequest(unsigned int) */
int _ZN3xrp20XrpIntrinsicExecutor17SendSingleRequestEj(void);

/* Symbol: edmc_fill */
/* Demangled: edmc_fill */
int edmc_fill(void);

/* Symbol: _ZNK3xrp20XrpIntrinsicExecutor16GetCommandStatusEm */
/* Demangled: xrp::XrpIntrinsicExecutor::GetCommandStatus(unsigned long) const */
int _ZNK3xrp20XrpIntrinsicExecutor16GetCommandStatusEm(void);

/* Symbol: _ZNSt3__1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE */
/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::operator<< <char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE(void);

/* Symbol: _ZN3xrp20XrpIntrinsicExecutor25SetOtherDevicesBufferInfoElRKNS_10BufferInfoE */
/* Demangled: xrp::XrpIntrinsicExecutor::SetOtherDevicesBufferInfo(long, xrp::BufferInfo const&) */
int _ZN3xrp20XrpIntrinsicExecutor25SetOtherDevicesBufferInfoElRKNS_10BufferInfoE(void);

/* Symbol: _ZN3xrp12XrpVpuStream25DefaultWaitPackedRequestsEv */
/* Demangled: xrp::XrpVpuStream::DefaultWaitPackedRequests() */
int _ZN3xrp12XrpVpuStream25DefaultWaitPackedRequestsEv(void);

/* Symbol: _ZN3xrp14XrpCommandInfo22SetDataBuffersReleasedEv */
/* Demangled: xrp::XrpCommandInfo::SetDataBuffersReleased() */
int _ZN3xrp14XrpCommandInfo22SetDataBuffersReleasedEv(void);

/* Symbol: _ZNK3xrp12XrpIntrinsic24GetPreparedRequestsCountEm */
/* Demangled: xrp::XrpIntrinsic::GetPreparedRequestsCount(unsigned long) const */
int _ZNK3xrp12XrpIntrinsic24GetPreparedRequestsCountEm(void);

/* Symbol: _ZN3xrp6memory16XrpMemoryManager23GetMemPoolIdxByFreeSizeEj */
/* Demangled: xrp::memory::XrpMemoryManager::GetMemPoolIdxByFreeSize(unsigned int) */
int _ZN3xrp6memory16XrpMemoryManager23GetMemPoolIdxByFreeSizeEj(void);

/* Symbol: _ZN3xrp6memory13XrpBufferDescC2ENS_13XrpBufferKindEjmNS_14XrpAccessFlagsE */
/* Demangled: xrp::memory::XrpBufferDesc::XrpBufferDesc(xrp::XrpBufferKind, unsigned int, unsigned long, xrp::XrpAccessFlags) */
int _ZN3xrp6memory13XrpBufferDescC2ENS_13XrpBufferKindEjmNS_14XrpAccessFlagsE(void);

/* Symbol: _ZNK3xrp20XrpIntrinsicExecutor18DebugAllXrpBuffersEb */
/* Demangled: xrp::XrpIntrinsicExecutor::DebugAllXrpBuffers(bool) const */
int _ZNK3xrp20XrpIntrinsicExecutor18DebugAllXrpBuffersEb(void);

/* Symbol: _ZN3xrp6memory7MemPoolD1Ev */
/* Demangled: xrp::memory::MemPool::~MemPool() */
int _ZN3xrp6memory7MemPoolD1Ev(void);

/* Symbol: _ZN3xrplsERNSt3__113basic_ostreamIcNS0_11char_traitsIcEEEERKNS_9XrpStatusE */
/* Demangled: xrp::operator<<(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, xrp::XrpStatus const&) */
int _ZN3xrplsERNSt3__113basic_ostreamIcNS0_11char_traitsIcEEEERKNS_9XrpStatusE(void);

/* Symbol: _ZN3xrp20XrpIntrinsicExecutor15CreateVpuStreamEv */
/* Demangled: xrp::XrpIntrinsicExecutor::CreateVpuStream() */
int _ZN3xrp20XrpIntrinsicExecutor15CreateVpuStreamEv(void);

/* Symbol: _ZN3xrp20XrpIntrinsicExecutor18FinalizeDataBufferEm */
/* Demangled: xrp::XrpIntrinsicExecutor::FinalizeDataBuffer(unsigned long) */
int _ZN3xrp20XrpIntrinsicExecutor18FinalizeDataBufferEm(void);

/* Symbol: _ZN3xrp20XrpIntrinsicExecutor16CreateVpuRequestEm */
/* Demangled: xrp::XrpIntrinsicExecutor::CreateVpuRequest(unsigned long) */
int _ZN3xrp20XrpIntrinsicExecutor16CreateVpuRequestEm(void);

/* Symbol: _ZN3xrp20XrpIntrinsicExecutor17DestroyVpuRequestEm */
/* Demangled: xrp::XrpIntrinsicExecutor::DestroyVpuRequest(unsigned long) */
int _ZN3xrp20XrpIntrinsicExecutor17DestroyVpuRequestEm(void);

/* Symbol: _ZNK3xrp12XrpVpuStream16GetNativeRequestERNS_14VpuRequestInfoE */
/* Demangled: xrp::XrpVpuStream::GetNativeRequest(xrp::VpuRequestInfo&) const */
int _ZNK3xrp12XrpVpuStream16GetNativeRequestERNS_14VpuRequestInfoE(void);

/* Symbol: _ZN3xrp20XrpIntrinsicExecutor16CreateXrpCommandEmmNS_14XrpAccessFlagsE */
/* Demangled: xrp::XrpIntrinsicExecutor::CreateXrpCommand(unsigned long, unsigned long, xrp::XrpAccessFlags) */
int _ZN3xrp20XrpIntrinsicExecutor16CreateXrpCommandEmmNS_14XrpAccessFlagsE(void);

/* Symbol: _ZNK3xrp20XrpIntrinsicExecutor9GetBufferEl */
/* Demangled: xrp::XrpIntrinsicExecutor::GetBuffer(long) const */
int _ZNK3xrp20XrpIntrinsicExecutor9GetBufferEl(void);

/* Symbol: _ZN3xrp6memory16XrpMemoryManagerC1Ev */
/* Demangled: xrp::memory::XrpMemoryManager::XrpMemoryManager() */
int _ZN3xrp6memory16XrpMemoryManagerC1Ev(void);

/* Symbol: _ZN3xrp12XrpVpuStream25DefaultReleaseVpuRequestsEjj */
/* Demangled: xrp::XrpVpuStream::DefaultReleaseVpuRequests(unsigned int, unsigned int) */
int _ZN3xrp12XrpVpuStream25DefaultReleaseVpuRequestsEjj(void);

/* Symbol: _ZN3xrp6memory15XrpIonAllocatorC2Ev */
/* Demangled: xrp::memory::XrpIonAllocator::XrpIonAllocator() */
int _ZN3xrp6memory15XrpIonAllocatorC2Ev(void);

/* Symbol: _ZN3xrp6memory13XrpBufferDescD1Ev */
/* Demangled: xrp::memory::XrpBufferDesc::~XrpBufferDesc() */
int _ZN3xrp6memory13XrpBufferDescD1Ev(void);

/* Symbol: _ZN3xrp14XrpCommandInfo21CreateXtensaCmdHandleEjmNS_14XrpAccessFlagsE */
/* Demangled: xrp::XrpCommandInfo::CreateXtensaCmdHandle(unsigned int, unsigned long, xrp::XrpAccessFlags) */
int _ZN3xrp14XrpCommandInfo21CreateXtensaCmdHandleEjmNS_14XrpAccessFlagsE(void);

/* Symbol: _ZNK3xrp14XrpCommandInfo17IsOutputAllocatedEv */
/* Demangled: xrp::XrpCommandInfo::IsOutputAllocated() const */
int _ZNK3xrp14XrpCommandInfo17IsOutputAllocatedEv(void);

/* Symbol: _ZN3xrp20XrpIntrinsicExecutor22AllocInternalCmdBufferEm */
/* Demangled: xrp::XrpIntrinsicExecutor::AllocInternalCmdBuffer(unsigned long) */
int _ZN3xrp20XrpIntrinsicExecutor22AllocInternalCmdBufferEm(void);

/* Symbol: _ZN3xrp20XrpIntrinsicExecutorC1ENSt3__110unique_ptrINS_10XrpOptionsENS1_14default_deleteIS3_EEEE */
/* Demangled: xrp::XrpIntrinsicExecutor::XrpIntrinsicExecutor(std::__1::unique_ptr<xrp::XrpOptions, std::__1::default_delete<xrp::XrpOptions> >) */
int _ZN3xrp20XrpIntrinsicExecutorC1ENSt3__110unique_ptrINS_10XrpOptionsENS1_14default_deleteIS3_EEEE(void);

/* Symbol: _ZN3xrp12XrpIntrinsicD1Ev */
/* Demangled: xrp::XrpIntrinsic::~XrpIntrinsic() */
int _ZN3xrp12XrpIntrinsicD1Ev(void);

/* Symbol: _ZN3xrp20XrpIntrinsicExecutor19AllocMemoryFromPoolEjRNS_6memory18PhysicalBufferInfoE */
/* Demangled: xrp::XrpIntrinsicExecutor::AllocMemoryFromPool(unsigned int, xrp::memory::PhysicalBufferInfo&) */
int _ZN3xrp20XrpIntrinsicExecutor19AllocMemoryFromPoolEjRNS_6memory18PhysicalBufferInfoE(void);

/* Symbol: _ZN3xrp12XrpVpuStream17SetMultiVpuParamsEmjj */
/* Demangled: xrp::XrpVpuStream::SetMultiVpuParams(unsigned long, unsigned int, unsigned int) */
int _ZN3xrp12XrpVpuStream17SetMultiVpuParamsEmjj(void);

/* Symbol: _ZN3xrp12XrpVpuStream20DefaultCreateVpuAlgoEv */
/* Demangled: xrp::XrpVpuStream::DefaultCreateVpuAlgo() */
int _ZN3xrp12XrpVpuStream20DefaultCreateVpuAlgoEv(void);

/* Symbol: _ZN3xrp6memory7MemPoolC2Ejmjjj */
/* Demangled: xrp::memory::MemPool::MemPool(unsigned int, unsigned long, unsigned int, unsigned int, unsigned int) */
int _ZN3xrp6memory7MemPoolC2Ejmjjj(void);

/* Symbol: _ZN3xrp14XrpCommandInfo21SetAllocatedXtensaCmdENS_13XrpBufferKindEmjRKNS_6memory18PhysicalBufferInfoE */
/* Demangled: xrp::XrpCommandInfo::SetAllocatedXtensaCmd(xrp::XrpBufferKind, unsigned long, unsigned int, xrp::memory::PhysicalBufferInfo const&) */
int _ZN3xrp14XrpCommandInfo21SetAllocatedXtensaCmdENS_13XrpBufferKindEmjRKNS_6memory18PhysicalBufferInfoE(void);

/* Symbol: _ZN3xrp14XrpCommandInfoD1Ev */
/* Demangled: xrp::XrpCommandInfo::~XrpCommandInfo() */
int _ZN3xrp14XrpCommandInfoD1Ev(void);

/* Symbol: _ZN3xrp20XrpIntrinsicExecutor26PrepareXtensaCommandBufferEm */
/* Demangled: xrp::XrpIntrinsicExecutor::PrepareXtensaCommandBuffer(unsigned long) */
int _ZN3xrp20XrpIntrinsicExecutor26PrepareXtensaCommandBufferEm(void);

/* Symbol: _ZN3xrp6memory16XrpMemoryManagerD1Ev */
/* Demangled: xrp::memory::XrpMemoryManager::~XrpMemoryManager() */
int _ZN3xrp6memory16XrpMemoryManagerD1Ev(void);

/* Symbol: _ZN3xrp12XrpVpuStream18DefaultWaitRequestEj */
/* Demangled: xrp::XrpVpuStream::DefaultWaitRequest(unsigned int) */
int _ZN3xrp12XrpVpuStream18DefaultWaitRequestEj(void);

/* Symbol: _ZN3xrp6memory15XrpIonAllocatorD2Ev */
/* Demangled: xrp::memory::XrpIonAllocator::~XrpIonAllocator() */
int _ZN3xrp6memory15XrpIonAllocatorD2Ev(void);

/* Symbol: edmc_get_status */
/* Demangled: edmc_get_status */
int edmc_get_status(void);

/* Symbol: edmc_fix8tofp32 */
/* Demangled: edmc_fix8tofp32 */
int edmc_fix8tofp32(void);

/* Symbol: _ZN3xrp12XrpIntrinsic22PrepareInternalCommandEjj */
/* Demangled: xrp::XrpIntrinsic::PrepareInternalCommand(unsigned int, unsigned int) */
int _ZN3xrp12XrpIntrinsic22PrepareInternalCommandEjj(void);

/* Symbol: _ZN3xrp20XrpIntrinsicExecutor28PrepareInternalCommandBufferEv */
/* Demangled: xrp::XrpIntrinsicExecutor::PrepareInternalCommandBuffer() */
int _ZN3xrp20XrpIntrinsicExecutor28PrepareInternalCommandBufferEv(void);

/* Symbol: edmc_init */
/* Demangled: edmc_init */
int edmc_init(void);

/* Symbol: _ZN3xrp6memory7MemPool4FreeEm */
/* Demangled: xrp::memory::MemPool::Free(unsigned long) */
int _ZN3xrp6memory7MemPool4FreeEm(void);

/* Symbol: _ZNK3xrp6memory7MemPool16PrintMemoryBlockEPNS1_8MemBlockE */
/* Demangled: xrp::memory::MemPool::PrintMemoryBlock(xrp::memory::MemPool::MemBlock*) const */
int _ZNK3xrp6memory7MemPool16PrintMemoryBlockEPNS1_8MemBlockE(void);

/* Symbol: _ZN3xrp6memory13XrpBufferDescC1ENS_13XrpBufferKindE */
/* Demangled: xrp::memory::XrpBufferDesc::XrpBufferDesc(xrp::XrpBufferKind) */
int _ZN3xrp6memory13XrpBufferDescC1ENS_13XrpBufferKindE(void);

/* Symbol: _ZN3xrplsERNSt3__113basic_ostreamIcNS0_11char_traitsIcEEEERKNS_10BufferInfoE */
/* Demangled: xrp::operator<<(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, xrp::BufferInfo const&) */
int _ZN3xrplsERNSt3__113basic_ostreamIcNS0_11char_traitsIcEEEERKNS_10BufferInfoE(void);

/* Symbol: _ZNK3xrp12XrpIntrinsic18GetPreparedRequestEmm */
/* Demangled: xrp::XrpIntrinsic::GetPreparedRequest(unsigned long, unsigned long) const */
int _ZNK3xrp12XrpIntrinsic18GetPreparedRequestEmm(void);

/* Symbol: _ZN3xrp20XrpIntrinsicExecutor27UpdateDataBufferCommandInfoEi */
/* Demangled: xrp::XrpIntrinsicExecutor::UpdateDataBufferCommandInfo(int) */
int _ZN3xrp20XrpIntrinsicExecutor27UpdateDataBufferCommandInfoEi(void);

/* Symbol: _ZN3xrp12XrpVpuStream18SetDspCommandFlagsEmj */
/* Demangled: xrp::XrpVpuStream::SetDspCommandFlags(unsigned long, unsigned int) */
int _ZN3xrp12XrpVpuStream18SetDspCommandFlagsEmj(void);

/* Symbol: _ZN3xrp6memory16XrpMemoryManager17GetMemPoolIdxByVaEm */
/* Demangled: xrp::memory::XrpMemoryManager::GetMemPoolIdxByVa(unsigned long) */
int _ZN3xrp6memory16XrpMemoryManager17GetMemPoolIdxByVaEm(void);

/* Symbol: _ZN3xrp6memory16XrpMemoryManager5FlushEmm */
/* Demangled: xrp::memory::XrpMemoryManager::Flush(unsigned long, unsigned long) */
int _ZN3xrp6memory16XrpMemoryManager5FlushEmm(void);

/* Symbol: _ZN3xrp6memory13XrpBufferDesc11SetReleasedEv */
/* Demangled: xrp::memory::XrpBufferDesc::SetReleased() */
int _ZN3xrp6memory13XrpBufferDesc11SetReleasedEv(void);

/* Symbol: _ZNK3xrp14XrpCommandInfo22IsDataBuffersAllocatedEv */
/* Demangled: xrp::XrpCommandInfo::IsDataBuffersAllocated() const */
int _ZNK3xrp14XrpCommandInfo22IsDataBuffersAllocatedEv(void);

/* Symbol: _ZN3xrp20XrpIntrinsicExecutor16SetXrpBufferKindElNS_13XrpBufferKindE */
/* Demangled: xrp::XrpIntrinsicExecutor::SetXrpBufferKind(long, xrp::XrpBufferKind) */
int _ZN3xrp20XrpIntrinsicExecutor16SetXrpBufferKindElNS_13XrpBufferKindE(void);

/* Symbol: _ZN3xrp6memory16XrpMemoryManager14ShareIonBufferERNS0_18PhysicalBufferInfoE */
/* Demangled: xrp::memory::XrpMemoryManager::ShareIonBuffer(xrp::memory::PhysicalBufferInfo&) */
int _ZN3xrp6memory16XrpMemoryManager14ShareIonBufferERNS0_18PhysicalBufferInfoE(void);

/* Symbol: _ZN3xrp14XrpPatternDump13DumpXrpBufferERKNS_6memory13XrpBufferDescEj */
/* Demangled: xrp::XrpPatternDump::DumpXrpBuffer(xrp::memory::XrpBufferDesc const&, unsigned int) */
int _ZN3xrp14XrpPatternDump13DumpXrpBufferERKNS_6memory13XrpBufferDescEj(void);

/* Symbol: _ZN3xrp14XrpCommandInfo23CreateDataBuffersHandleEjmNS_14XrpAccessFlagsE */
/* Demangled: xrp::XrpCommandInfo::CreateDataBuffersHandle(unsigned int, unsigned long, xrp::XrpAccessFlags) */
int _ZN3xrp14XrpCommandInfo23CreateDataBuffersHandleEjmNS_14XrpAccessFlagsE(void);

/* Symbol: _ZN3xrp14XrpCommandInfo18SetAllocatedDspCmdENS_13XrpBufferKindEmjRKNS_6memory18PhysicalBufferInfoE */
/* Demangled: xrp::XrpCommandInfo::SetAllocatedDspCmd(xrp::XrpBufferKind, unsigned long, unsigned int, xrp::memory::PhysicalBufferInfo const&) */
int _ZN3xrp14XrpCommandInfo18SetAllocatedDspCmdENS_13XrpBufferKindEmjRKNS_6memory18PhysicalBufferInfoE(void);

/* Symbol: _ZN3xrp12XrpVpuStream20FillDspCommandBufferENS0_10BufferKindEmjm */
/* Demangled: xrp::XrpVpuStream::FillDspCommandBuffer(xrp::XrpVpuStream::BufferKind, unsigned long, unsigned int, unsigned long) */
int _ZN3xrp12XrpVpuStream20FillDspCommandBufferENS0_10BufferKindEmjm(void);

/* Symbol: _ZN3xrp6memory15XrpIonAllocator12CloseShareFdEi */
/* Demangled: xrp::memory::XrpIonAllocator::CloseShareFd(int) */
int _ZN3xrp6memory15XrpIonAllocator12CloseShareFdEi(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBNEURON_PLATFORM_H */
