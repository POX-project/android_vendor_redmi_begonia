/*
 * Reverse-Engineered Source for: libneuron_platform.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libneuron_platform"

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
#include "libneuron_platform.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_EDMCCTL "/dev/edmcctl"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_EDMCCTL, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_EDMCCTL, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_EDMCCTL, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: xrp::memory::MemPool::Alloc(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory7MemPool5AllocEjj(void) {
    ALOGD("_ZN3xrp6memory7MemPool5AllocEjj() called");
    return 0;
}

/* Demangled: xrp::memory::MemPool::QueryVa(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory7MemPool7QueryVaEj(void) {
    ALOGD("_ZN3xrp6memory7MemPool7QueryVaEj() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicExecutor::CreateMemoryManager() */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp20XrpIntrinsicExecutor19CreateMemoryManagerEv(void) {
    ALOGD("_ZN3xrp20XrpIntrinsicExecutor19CreateMemoryManagerEv() called");
    return 0;
}

/* Demangled: xrp::memory::XrpIonAllocator::UnmapBuffer(unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory15XrpIonAllocator11UnmapBufferEmm(void) {
    ALOGD("_ZN3xrp6memory15XrpIonAllocator11UnmapBufferEmm() called");
    return 0;
}

/* Demangled: xrp::XrpVpuStream::~XrpVpuStream() */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp12XrpVpuStreamD0Ev(void) {
    ALOGD("_ZN3xrp12XrpVpuStreamD0Ev() called");
    return 0;
}

/* Demangled: xrp::XrpCommandInfo::SetAllocatedDataBuffers(xrp::XrpBufferKind, unsigned long, unsigned int, xrp::memory::PhysicalBufferInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp14XrpCommandInfo23SetAllocatedDataBuffersENS_13XrpBufferKindEmjRKNS_6memory18PhysicalBufferInfoE(void) {
    ALOGD("_ZN3xrp14XrpCommandInfo23SetAllocatedDataBuffersENS_13XrpBufferKindEmjRKNS_6memory18PhysicalBufferInfoE() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsic::GetLastXrpBuffer() const */
extern "C" __attribute__((visibility("default"))) int _ZNK3xrp12XrpIntrinsic16GetLastXrpBufferEv(void) {
    ALOGD("_ZNK3xrp12XrpIntrinsic16GetLastXrpBufferEv() called");
    return 0;
}

/* Demangled: xrp::memory::XrpMemoryManager::MapIonBuffer(unsigned long, xrp::memory::PhysicalBufferInfo&) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory16XrpMemoryManager12MapIonBufferEmRNS0_18PhysicalBufferInfoE(void) {
    ALOGD("_ZN3xrp6memory16XrpMemoryManager12MapIonBufferEmRNS0_18PhysicalBufferInfoE() called");
    return 0;
}

/* Demangled: xrp::memory::XrpBufferDesc::UpdateHostBufferInfo(unsigned int, unsigned long, xrp::memory::PhysicalBufferInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory13XrpBufferDesc20UpdateHostBufferInfoEjmRKNS0_18PhysicalBufferInfoE(void) {
    ALOGD("_ZN3xrp6memory13XrpBufferDesc20UpdateHostBufferInfoEjmRKNS0_18PhysicalBufferInfoE() called");
    return 0;
}

/* Demangled: xrp::XrpCommandInfo::IsXtensaCmdAllocated() const */
extern "C" __attribute__((visibility("default"))) int _ZNK3xrp14XrpCommandInfo20IsXtensaCmdAllocatedEv(void) {
    ALOGD("_ZNK3xrp14XrpCommandInfo20IsXtensaCmdAllocatedEv() called");
    return 0;
}

/* Demangled: xrp::XrpCommandInfo::RegisterVpuRequest(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp14XrpCommandInfo18RegisterVpuRequestEj(void) {
    ALOGD("_ZN3xrp14XrpCommandInfo18RegisterVpuRequestEj() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsic::GetDeviceStatus(unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3xrp12XrpIntrinsic15GetDeviceStatusEm(void) {
    ALOGD("_ZNK3xrp12XrpIntrinsic15GetDeviceStatusEm() called");
    return 0;
}

/* Demangled: xrp::memory::XrpMemoryManager::FreeFromPool(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory16XrpMemoryManager12FreeFromPoolEm(void) {
    ALOGD("_ZN3xrp6memory16XrpMemoryManager12FreeFromPoolEm() called");
    return 0;
}

/* Demangled: xrp::memory::MemPool::PrintBlockLinkedList(xrp::memory::MemPool::MemBlock*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3xrp6memory7MemPool20PrintBlockLinkedListEPNS1_8MemBlockE(void) {
    ALOGD("_ZNK3xrp6memory7MemPool20PrintBlockLinkedListEPNS1_8MemBlockE() called");
    return 0;
}

/* Demangled: xrp::XrpDebugger::XrpDebugger() */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp11XrpDebuggerC2Ev(void) {
    ALOGD("_ZN3xrp11XrpDebuggerC2Ev() called");
    return 0;
}

/* Demangled: xrp::operator<<(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, xrp::memory::XrpBufferDesc const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrplsERNSt3__113basic_ostreamIcNS0_11char_traitsIcEEEERKNS_6memory13XrpBufferDescE(void) {
    ALOGD("_ZN3xrplsERNSt3__113basic_ostreamIcNS0_11char_traitsIcEEEERKNS_6memory13XrpBufferDescE() called");
    return 0;
}

/* Demangled: xrp::XrpVpuStream::DefaultCreateVpuInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp12XrpVpuStream24DefaultCreateVpuInstanceEv(void) {
    ALOGD("_ZN3xrp12XrpVpuStream24DefaultCreateVpuInstanceEv() called");
    return 0;
}

/* Demangled: xrp::XrpPatternDump::DumpXtensaOperations(void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp14XrpPatternDump20DumpXtensaOperationsEPKvm(void) {
    ALOGD("_ZN3xrp14XrpPatternDump20DumpXtensaOperationsEPKvm() called");
    return 0;
}

/* Demangled: xrp::memory::XrpBufferDesc::SetKind(xrp::XrpBufferKind) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory13XrpBufferDesc7SetKindENS_13XrpBufferKindE(void) {
    ALOGD("_ZN3xrp6memory13XrpBufferDesc7SetKindENS_13XrpBufferKindE() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsic::UpdateXrpBuffer(xrp::XrpBufferKind, xrp::XrpAccessFlags, xrp::BufferInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp12XrpIntrinsic15UpdateXrpBufferENS_13XrpBufferKindENS_14XrpAccessFlagsERKNS_10BufferInfoE(void) {
    ALOGD("_ZN3xrp12XrpIntrinsic15UpdateXrpBufferENS_13XrpBufferKindENS_14XrpAccessFlagsERKNS_10BufferInfoE() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicExecutor::SyncHostBuffer(int, long) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp20XrpIntrinsicExecutor14SyncHostBufferEil(void) {
    ALOGD("_ZN3xrp20XrpIntrinsicExecutor14SyncHostBufferEil() called");
    return 0;
}

/* Demangled: xrp::memory::XrpMemoryManager::AllocFromIon(unsigned long, xrp::memory::PhysicalBufferInfo&) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory16XrpMemoryManager12AllocFromIonEmRNS0_18PhysicalBufferInfoE(void) {
    ALOGD("_ZN3xrp6memory16XrpMemoryManager12AllocFromIonEmRNS0_18PhysicalBufferInfoE() called");
    return 0;
}

/* Demangled: xrp::XrpVpuStream::~XrpVpuStream() */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp12XrpVpuStreamD2Ev(void) {
    ALOGD("_ZN3xrp12XrpVpuStreamD2Ev() called");
    return 0;
}

/* Demangled: xrp::memory::XrpIonAllocator::SyncBuffer(int, unsigned long, unsigned long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory15XrpIonAllocator10SyncBufferEimmi(void) {
    ALOGD("_ZN3xrp6memory15XrpIonAllocator10SyncBufferEimmi() called");
    return 0;
}

/* Demangled: xrp::memory::XrpBufferDesc::XrpBufferDesc(xrp::XrpBufferKind) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory13XrpBufferDescC2ENS_13XrpBufferKindE(void) {
    ALOGD("_ZN3xrp6memory13XrpBufferDescC2ENS_13XrpBufferKindE() called");
    return 0;
}

/* Demangled: xrp::memory::XrpBufferDesc::XrpBufferDesc(xrp::XrpBufferKind, unsigned int, unsigned long, xrp::XrpAccessFlags) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory13XrpBufferDescC1ENS_13XrpBufferKindEjmNS_14XrpAccessFlagsE(void) {
    ALOGD("_ZN3xrp6memory13XrpBufferDescC1ENS_13XrpBufferKindEjmNS_14XrpAccessFlagsE() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsic::XrpIntrinsic(int) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp12XrpIntrinsicC2Ei(void) {
    ALOGD("_ZN3xrp12XrpIntrinsicC2Ei() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsic::GetXrpBuffer(long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3xrp12XrpIntrinsic12GetXrpBufferEl(void) {
    ALOGD("_ZNK3xrp12XrpIntrinsic12GetXrpBufferEl() called");
    return 0;
}

/* Demangled: xrp::memory::XrpMemoryManager::QueryIonInfo(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory16XrpMemoryManager12QueryIonInfoEm(void) {
    ALOGD("_ZN3xrp6memory16XrpMemoryManager12QueryIonInfoEm() called");
    return 0;
}

/* Demangled: xrp::XrpCommandInfo::CreateDspCmdHandle(unsigned int, unsigned long, xrp::XrpAccessFlags) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp14XrpCommandInfo18CreateDspCmdHandleEjmNS_14XrpAccessFlagsE(void) {
    ALOGD("_ZN3xrp14XrpCommandInfo18CreateDspCmdHandleEjmNS_14XrpAccessFlagsE() called");
    return 0;
}

/* Demangled: xrp::XrpDebugger::~XrpDebugger() */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp11XrpDebuggerD2Ev(void) {
    ALOGD("_ZN3xrp11XrpDebuggerD2Ev() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsic::FinalizeXrpCommand(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp12XrpIntrinsic18FinalizeXrpCommandEm(void) {
    ALOGD("_ZN3xrp12XrpIntrinsic18FinalizeXrpCommandEm() called");
    return 0;
}

/* Demangled: xrp::memory::XrpMemoryManager::FreeFromIon(unsigned long, xrp::memory::PhysicalBufferInfo&) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory16XrpMemoryManager11FreeFromIonEmRNS0_18PhysicalBufferInfoE(void) {
    ALOGD("_ZN3xrp6memory16XrpMemoryManager11FreeFromIonEmRNS0_18PhysicalBufferInfoE() called");
    return 0;
}

/* Demangled: xrp::XrpVpuStream::DefaultPackRequests(std::__1::vector<unsigned int, std::__1::allocator<unsigned int> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp12XrpVpuStream19DefaultPackRequestsERKNSt3__16vectorIjNS1_9allocatorIjEEEE(void) {
    ALOGD("_ZN3xrp12XrpVpuStream19DefaultPackRequestsERKNSt3__16vectorIjNS1_9allocatorIjEEEE() called");
    return 0;
}

/* Demangled: xrp::XrpCommandInfo::XrpCommandInfo(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp14XrpCommandInfoC2Ej(void) {
    ALOGD("_ZN3xrp14XrpCommandInfoC2Ej() called");
    return 0;
}

/* Demangled: xrp::operator<<(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, xrp::XrpCommandInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrplsERNSt3__113basic_ostreamIcNS0_11char_traitsIcEEEERKNS_14XrpCommandInfoE(void) {
    ALOGD("_ZN3xrplsERNSt3__113basic_ostreamIcNS0_11char_traitsIcEEEERKNS_14XrpCommandInfoE() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicExecutor::PrepareOutputBuffer(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp20XrpIntrinsicExecutor19PrepareOutputBufferEm(void) {
    ALOGD("_ZN3xrp20XrpIntrinsicExecutor19PrepareOutputBufferEm() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicExecutor::SetOppLevels(unsigned long, xrp::InferenceInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp20XrpIntrinsicExecutor12SetOppLevelsEmRKNS_13InferenceInfoE(void) {
    ALOGD("_ZN3xrp20XrpIntrinsicExecutor12SetOppLevelsEmRKNS_13InferenceInfoE() called");
    return 0;
}

/* Demangled: xrp::XrpVpuStream::DefaultCreateVpuRequest(int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp12XrpVpuStream23DefaultCreateVpuRequestEij(void) {
    ALOGD("_ZN3xrp12XrpVpuStream23DefaultCreateVpuRequestEij() called");
    return 0;
}

/* Demangled: edmc_exit */
extern "C" __attribute__((visibility("default"))) int edmc_exit(void) {
    ALOGD("edmc_exit() called");
    return 0;
}

/* Demangled: xrp::XrpCommandInfo::SetDspCmdReleased() */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp14XrpCommandInfo17SetDspCmdReleasedEv(void) {
    ALOGD("_ZN3xrp14XrpCommandInfo17SetDspCmdReleasedEv() called");
    return 0;
}

/* Demangled: xrp::XrpDebugger::PrintXrpDspCommand(void const*, android::base::LogSeverity) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp11XrpDebugger18PrintXrpDspCommandEPKvN7android4base11LogSeverityE(void) {
    ALOGD("_ZN3xrp11XrpDebugger18PrintXrpDspCommandEPKvN7android4base11LogSeverityE() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicExecutor::FreeAllBuffers() */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp20XrpIntrinsicExecutor14FreeAllBuffersEv(void) {
    ALOGD("_ZN3xrp20XrpIntrinsicExecutor14FreeAllBuffersEv() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicExecutor::~XrpIntrinsicExecutor() */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp20XrpIntrinsicExecutorD2Ev(void) {
    ALOGD("_ZN3xrp20XrpIntrinsicExecutorD2Ev() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicExecutor::SendRequest(unsigned long, xrp::InferenceInfo&) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp20XrpIntrinsicExecutor11SendRequestEmRNS_13InferenceInfoE(void) {
    ALOGD("_ZN3xrp20XrpIntrinsicExecutor11SendRequestEmRNS_13InferenceInfoE() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicExecutor::PrintXrpCommandInfos() const */
extern "C" __attribute__((visibility("default"))) int _ZNK3xrp20XrpIntrinsicExecutor20PrintXrpCommandInfosEv(void) {
    ALOGD("_ZNK3xrp20XrpIntrinsicExecutor20PrintXrpCommandInfosEv() called");
    return 0;
}

/* Demangled: xrp::memory::XrpBufferDesc::UpdatePhysicalInfo(xrp::memory::PhysicalBufferInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory13XrpBufferDesc18UpdatePhysicalInfoERKNS0_18PhysicalBufferInfoE(void) {
    ALOGD("_ZN3xrp6memory13XrpBufferDesc18UpdatePhysicalInfoERKNS0_18PhysicalBufferInfoE() called");
    return 0;
}

/* Demangled: xrp::XrpCommandInfo::SetAllocatedOutput(xrp::XrpBufferKind, unsigned long, unsigned int, xrp::memory::PhysicalBufferInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp14XrpCommandInfo18SetAllocatedOutputENS_13XrpBufferKindEmjRKNS_6memory18PhysicalBufferInfoE(void) {
    ALOGD("_ZN3xrp14XrpCommandInfo18SetAllocatedOutputENS_13XrpBufferKindEmjRKNS_6memory18PhysicalBufferInfoE() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsic::RunXrpCommand(unsigned long, xrp::InferenceInfo&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3xrp12XrpIntrinsic13RunXrpCommandEmRNS_13InferenceInfoE(void) {
    ALOGD("_ZNK3xrp12XrpIntrinsic13RunXrpCommandEmRNS_13InferenceInfoE() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicExecutor::GetVpuRequestsCount(unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3xrp20XrpIntrinsicExecutor19GetVpuRequestsCountEm(void) {
    ALOGD("_ZNK3xrp20XrpIntrinsicExecutor19GetVpuRequestsCountEm() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicExecutor::SendMultiRequests() */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp20XrpIntrinsicExecutor17SendMultiRequestsEv(void) {
    ALOGD("_ZN3xrp20XrpIntrinsicExecutor17SendMultiRequestsEv() called");
    return 0;
}

/* Demangled: xrp::memory::MemPool::IsEmpty() */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory7MemPool7IsEmptyEv(void) {
    ALOGD("_ZN3xrp6memory7MemPool7IsEmptyEv() called");
    return 0;
}

/* Demangled: xrp::memory::XrpBufferDesc::SetRawPtr(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory13XrpBufferDesc9SetRawPtrEm(void) {
    ALOGD("_ZN3xrp6memory13XrpBufferDesc9SetRawPtrEm() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicExecutor::FreeInternalCmdBuffers() */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp20XrpIntrinsicExecutor22FreeInternalCmdBuffersEv(void) {
    ALOGD("_ZN3xrp20XrpIntrinsicExecutor22FreeInternalCmdBuffersEv() called");
    return 0;
}

/* Demangled: xrp::XrpCommandInfo::CreateOutputHandle(unsigned int, unsigned long, xrp::XrpAccessFlags) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp14XrpCommandInfo18CreateOutputHandleEjmNS_14XrpAccessFlagsE(void) {
    ALOGD("_ZN3xrp14XrpCommandInfo18CreateOutputHandleEjmNS_14XrpAccessFlagsE() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicExecutor::DestroyXrpCommand(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp20XrpIntrinsicExecutor17DestroyXrpCommandEm(void) {
    ALOGD("_ZN3xrp20XrpIntrinsicExecutor17DestroyXrpCommandEm() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicExecutor::HintXrpCommandOutput(unsigned long, unsigned int, unsigned long, xrp::XrpAccessFlags) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp20XrpIntrinsicExecutor20HintXrpCommandOutputEmjmNS_14XrpAccessFlagsE(void) {
    ALOGD("_ZN3xrp20XrpIntrinsicExecutor20HintXrpCommandOutputEmjmNS_14XrpAccessFlagsE() called");
    return 0;
}

/* Demangled: xrp::memory::XrpIonAllocator::AllocateBuffer(unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory15XrpIonAllocator14AllocateBufferEmm(void) {
    ALOGD("_ZN3xrp6memory15XrpIonAllocator14AllocateBufferEmm() called");
    return 0;
}

/* Demangled: xrp::memory::XrpMemoryManager::ImportIonBuffer(unsigned long, xrp::memory::PhysicalBufferInfo&) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory16XrpMemoryManager15ImportIonBufferEmRNS0_18PhysicalBufferInfoE(void) {
    ALOGD("_ZN3xrp6memory16XrpMemoryManager15ImportIonBufferEmRNS0_18PhysicalBufferInfoE() called");
    return 0;
}

/* Demangled: xrp::XrpVpuStream::SetOppStep(xrp::InferenceInfo const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp12XrpVpuStream10SetOppStepERKNS_13InferenceInfoEj(void) {
    ALOGD("_ZN3xrp12XrpVpuStream10SetOppStepERKNS_13InferenceInfoEj() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicExecutor::WaitSingleRequest(unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3xrp20XrpIntrinsicExecutor17WaitSingleRequestEj(void) {
    ALOGD("_ZNK3xrp20XrpIntrinsicExecutor17WaitSingleRequestEj() called");
    return 0;
}

/* Demangled: xrp::XrpVpuStream::DefaultRunPackedRequests() */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp12XrpVpuStream24DefaultRunPackedRequestsEv(void) {
    ALOGD("_ZN3xrp12XrpVpuStream24DefaultRunPackedRequestsEv() called");
    return 0;
}

/* Demangled: xrp::XrpVpuStream::DefaultSetExtraParam(VpuExtraParam&, xrp::InferenceInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp12XrpVpuStream20DefaultSetExtraParamER13VpuExtraParamRKNS_13InferenceInfoE(void) {
    ALOGD("_ZN3xrp12XrpVpuStream20DefaultSetExtraParamER13VpuExtraParamRKNS_13InferenceInfoE() called");
    return 0;
}

/* Demangled: xrp::XrpVpuStream::GetVpuStatus(std::__1::vector<VpuStatus, std::__1::allocator<VpuStatus> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp12XrpVpuStream12GetVpuStatusERNSt3__16vectorI9VpuStatusNS1_9allocatorIS3_EEEE(void) {
    ALOGD("_ZN3xrp12XrpVpuStream12GetVpuStatusERNSt3__16vectorI9VpuStatusNS1_9allocatorIS3_EEEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<VpuRequest*, std::__1::allocator<VpuRequest*> >::__push_back_slow_path<VpuRequest* const&>(VpuRequest* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIP10VpuRequestNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIP10VpuRequestNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_() called");
    return 0;
}

/* Demangled: edmc_fp32tofix8 */
extern "C" __attribute__((visibility("default"))) int edmc_fp32tofix8(void) {
    ALOGD("edmc_fp32tofix8() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicExecutor::AllocBuffer(unsigned long, xrp::XrpAccessFlags, int) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp20XrpIntrinsicExecutor11AllocBufferEmNS_14XrpAccessFlagsEi(void) {
    ALOGD("_ZN3xrp20XrpIntrinsicExecutor11AllocBufferEmNS_14XrpAccessFlagsEi() called");
    return 0;
}

/* Demangled: xrp::XrpVpuStream::AssignDspCommandBuffer(xrp::XrpVpuStream::BufferKind, unsigned long, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp12XrpVpuStream22AssignDspCommandBufferENS0_10BufferKindEmjj(void) {
    ALOGD("_ZN3xrp12XrpVpuStream22AssignDspCommandBufferENS0_10BufferKindEmjj() called");
    return 0;
}

/* Demangled: xrp::memory::XrpIonAllocator::XrpIonAllocator() */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory15XrpIonAllocatorC1Ev(void) {
    ALOGD("_ZN3xrp6memory15XrpIonAllocatorC1Ev() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsic::SetupXrpDevice() */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp12XrpIntrinsic14SetupXrpDeviceEv(void) {
    ALOGD("_ZN3xrp12XrpIntrinsic14SetupXrpDeviceEv() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicExecutor::InitXrpCommandInfo(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp20XrpIntrinsicExecutor18InitXrpCommandInfoEm(void) {
    ALOGD("_ZN3xrp20XrpIntrinsicExecutor18InitXrpCommandInfoEm() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicExecutor::GetXrpCommand(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp20XrpIntrinsicExecutor13GetXrpCommandEm(void) {
    ALOGD("_ZN3xrp20XrpIntrinsicExecutor13GetXrpCommandEm() called");
    return 0;
}

/* Demangled: xrp::memory::XrpMemoryManager::UnmapIonBuffer(unsigned long, xrp::memory::PhysicalBufferInfo&) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory16XrpMemoryManager14UnmapIonBufferEmRNS0_18PhysicalBufferInfoE(void) {
    ALOGD("_ZN3xrp6memory16XrpMemoryManager14UnmapIonBufferEmRNS0_18PhysicalBufferInfoE() called");
    return 0;
}

/* Demangled: xrp::memory::MemPool::GetProperty(xrp::memory::MemPool::Property&) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory7MemPool11GetPropertyERNS1_8PropertyE(void) {
    ALOGD("_ZN3xrp6memory7MemPool11GetPropertyERNS1_8PropertyE() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicExecutor::RunCommand(unsigned long, xrp::InferenceInfo&) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp20XrpIntrinsicExecutor10RunCommandEmRNS_13InferenceInfoE(void) {
    ALOGD("_ZN3xrp20XrpIntrinsicExecutor10RunCommandEmRNS_13InferenceInfoE() called");
    return 0;
}

/* Demangled: xrp::memory::XrpMemoryManager::SyncIonBuffer(int, unsigned long, unsigned long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory16XrpMemoryManager13SyncIonBufferEimmi(void) {
    ALOGD("_ZN3xrp6memory16XrpMemoryManager13SyncIonBufferEimmi() called");
    return 0;
}

/* Demangled: xrp::memory::XrpMemoryManager::CloseIonSharedBuffer(xrp::memory::PhysicalBufferInfo&) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory16XrpMemoryManager20CloseIonSharedBufferERNS0_18PhysicalBufferInfoE(void) {
    ALOGD("_ZN3xrp6memory16XrpMemoryManager20CloseIonSharedBufferERNS0_18PhysicalBufferInfoE() called");
    return 0;
}

/* Demangled: xrp::XrpPatternDump::DumpDspCmd(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp14XrpPatternDump10DumpDspCmdEPKv(void) {
    ALOGD("_ZN3xrp14XrpPatternDump10DumpDspCmdEPKv() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m(void) {
    ALOGD("_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m() called");
    return 0;
}

/* Demangled: xrp::memory::XrpBufferDesc::SetAlignment(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory13XrpBufferDesc12SetAlignmentEj(void) {
    ALOGD("_ZN3xrp6memory13XrpBufferDesc12SetAlignmentEj() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicExecutor::CreateEmptyBufferDesc() */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp20XrpIntrinsicExecutor21CreateEmptyBufferDescEv(void) {
    ALOGD("_ZN3xrp20XrpIntrinsicExecutor21CreateEmptyBufferDescEv() called");
    return 0;
}

/* Demangled: xrp::memory::XrpIonAllocator::~XrpIonAllocator() */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory15XrpIonAllocatorD1Ev(void) {
    ALOGD("_ZN3xrp6memory15XrpIonAllocatorD1Ev() called");
    return 0;
}

/* Demangled: xrp::memory::MemPool::~MemPool() */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory7MemPoolD2Ev(void) {
    ALOGD("_ZN3xrp6memory7MemPoolD2Ev() called");
    return 0;
}

/* Demangled: xrp::memory::XrpIonAllocator::ImportBuffer(int) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory15XrpIonAllocator12ImportBufferEi(void) {
    ALOGD("_ZN3xrp6memory15XrpIonAllocator12ImportBufferEi() called");
    return 0;
}

/* Demangled: xrp::memory::XrpMemoryManager::FreeFromIon(xrp::memory::XrpBufferDesc&) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory16XrpMemoryManager11FreeFromIonERNS0_13XrpBufferDescE(void) {
    ALOGD("_ZN3xrp6memory16XrpMemoryManager11FreeFromIonERNS0_13XrpBufferDescE() called");
    return 0;
}

/* Demangled: xrp::XrpVpuStream::DefaultUnpackRequests() */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp12XrpVpuStream21DefaultUnpackRequestsEv(void) {
    ALOGD("_ZN3xrp12XrpVpuStream21DefaultUnpackRequestsEv() called");
    return 0;
}

/* Demangled: xrp::memory::XrpIonAllocator::FreeBuffer(int) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory15XrpIonAllocator10FreeBufferEi(void) {
    ALOGD("_ZN3xrp6memory15XrpIonAllocator10FreeBufferEi() called");
    return 0;
}

/* Demangled: xrp::memory::XrpMemoryManager::XrpMemoryManager() */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory16XrpMemoryManagerC2Ev(void) {
    ALOGD("_ZN3xrp6memory16XrpMemoryManagerC2Ev() called");
    return 0;
}

/* Exported Object: vtable for xrp::XrpVpuStream */
extern "C" __attribute__((visibility("default"))) void* _ZTVN3xrp12XrpVpuStreamE = NULL;

/* Demangled: xrp::memory::XrpBufferDesc::~XrpBufferDesc() */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory13XrpBufferDescD2Ev(void) {
    ALOGD("_ZN3xrp6memory13XrpBufferDescD2Ev() called");
    return 0;
}

/* Demangled: xrp::operator<<(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, xrp::InferenceInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrplsERNSt3__113basic_ostreamIcNS0_11char_traitsIcEEEERKNS_13InferenceInfoE(void) {
    ALOGD("_ZN3xrplsERNSt3__113basic_ostreamIcNS0_11char_traitsIcEEEERKNS_13InferenceInfoE() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicExecutor::GetVpuRequest(unsigned long, unsigned long, xrp::VpuRequestInfo&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3xrp20XrpIntrinsicExecutor13GetVpuRequestEmmRNS_14VpuRequestInfoE(void) {
    ALOGD("_ZNK3xrp20XrpIntrinsicExecutor13GetVpuRequestEmmRNS_14VpuRequestInfoE() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicExecutor::WritebackCommand(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp20XrpIntrinsicExecutor16WritebackCommandEm(void) {
    ALOGD("_ZN3xrp20XrpIntrinsicExecutor16WritebackCommandEm() called");
    return 0;
}

/* Demangled: xrp::memory::XrpBufferDesc::SetAllocated(unsigned long, unsigned int, xrp::memory::PhysicalBufferInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory13XrpBufferDesc12SetAllocatedEmjRKNS0_18PhysicalBufferInfoE(void) {
    ALOGD("_ZN3xrp6memory13XrpBufferDesc12SetAllocatedEmjRKNS0_18PhysicalBufferInfoE() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsic::~XrpIntrinsic() */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp12XrpIntrinsicD2Ev(void) {
    ALOGD("_ZN3xrp12XrpIntrinsicD2Ev() called");
    return 0;
}

/* Demangled: xrp::memory::XrpMemoryManager::QueryPa(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory16XrpMemoryManager7QueryPaEm(void) {
    ALOGD("_ZN3xrp6memory16XrpMemoryManager7QueryPaEm() called");
    return 0;
}

/* Demangled: xrp::memory::XrpMemoryManager::GetPoolSize() const */
extern "C" __attribute__((visibility("default"))) int _ZNK3xrp6memory16XrpMemoryManager11GetPoolSizeEv(void) {
    ALOGD("_ZNK3xrp6memory16XrpMemoryManager11GetPoolSizeEv() called");
    return 0;
}

/* Demangled: xrp::operator<<(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, xrp::XrpBufferKind const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrplsERNSt3__113basic_ostreamIcNS0_11char_traitsIcEEEERKNS_13XrpBufferKindE(void) {
    ALOGD("_ZN3xrplsERNSt3__113basic_ostreamIcNS0_11char_traitsIcEEEERKNS_13XrpBufferKindE() called");
    return 0;
}

/* Demangled: xrp::XrpCommandInfo::~XrpCommandInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp14XrpCommandInfoD2Ev(void) {
    ALOGD("_ZN3xrp14XrpCommandInfoD2Ev() called");
    return 0;
}

/* Demangled: xrp::operator<<(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, xrp::memory::PhysicalBufferInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrplsERNSt3__113basic_ostreamIcNS0_11char_traitsIcEEEERKNS_6memory18PhysicalBufferInfoE(void) {
    ALOGD("_ZN3xrplsERNSt3__113basic_ostreamIcNS0_11char_traitsIcEEEERKNS_6memory18PhysicalBufferInfoE() called");
    return 0;
}

/* Demangled: xrp::memory::XrpMemoryManager::~XrpMemoryManager() */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory16XrpMemoryManagerD2Ev(void) {
    ALOGD("_ZN3xrp6memory16XrpMemoryManagerD2Ev() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicExecutor::PrepareDataBuffer(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp20XrpIntrinsicExecutor17PrepareDataBufferEm(void) {
    ALOGD("_ZN3xrp20XrpIntrinsicExecutor17PrepareDataBufferEm() called");
    return 0;
}

/* Demangled: xrp::memory::XrpMemoryManager::IonSetup() */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory16XrpMemoryManager8IonSetupEv(void) {
    ALOGD("_ZN3xrp6memory16XrpMemoryManager8IonSetupEv() called");
    return 0;
}

/* Demangled: xrp::XrpVpuStream::CleanDspCommandBuffer(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp12XrpVpuStream21CleanDspCommandBufferEm(void) {
    ALOGD("_ZN3xrp12XrpVpuStream21CleanDspCommandBufferEm() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicExecutor::UpdateDataBufferCommandInfo(int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp20XrpIntrinsicExecutor27UpdateDataBufferCommandInfoEijj(void) {
    ALOGD("_ZN3xrp20XrpIntrinsicExecutor27UpdateDataBufferCommandInfoEijj() called");
    return 0;
}

/* Demangled: xrp::memory::XrpIonAllocator::SyncBufferByFd(int, unsigned long, unsigned long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory15XrpIonAllocator14SyncBufferByFdEimmi(void) {
    ALOGD("_ZN3xrp6memory15XrpIonAllocator14SyncBufferByFdEimmi() called");
    return 0;
}

/* Demangled: xrp::XrpCommandInfo::SetNsid(unsigned int, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp14XrpCommandInfo7SetNsidEjm(void) {
    ALOGD("_ZN3xrp14XrpCommandInfo7SetNsidEjm() called");
    return 0;
}

/* Demangled: xrp::memory::XrpIonAllocator::ShareBuffer(int) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory15XrpIonAllocator11ShareBufferEi(void) {
    ALOGD("_ZN3xrp6memory15XrpIonAllocator11ShareBufferEi() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicExecutor::WaitMultiRequests() const */
extern "C" __attribute__((visibility("default"))) int _ZNK3xrp20XrpIntrinsicExecutor17WaitMultiRequestsEv(void) {
    ALOGD("_ZNK3xrp20XrpIntrinsicExecutor17WaitMultiRequestsEv() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicExecutor::UpdateEaraInfo(unsigned int, xrp::InferenceInfo&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3xrp20XrpIntrinsicExecutor14UpdateEaraInfoEjRNS_13InferenceInfoE(void) {
    ALOGD("_ZNK3xrp20XrpIntrinsicExecutor14UpdateEaraInfoEjRNS_13InferenceInfoE() called");
    return 0;
}

/* Demangled: xrp::XrpDebugger::XrpDebugger() */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp11XrpDebuggerC1Ev(void) {
    ALOGD("_ZN3xrp11XrpDebuggerC1Ev() called");
    return 0;
}

/* Demangled: xrp::XrpVpuStream::GetVpuInferenceInfo(VpuInferenceInfo&, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3xrp12XrpVpuStream19GetVpuInferenceInfoER16VpuInferenceInfoj(void) {
    ALOGD("_ZNK3xrp12XrpVpuStream19GetVpuInferenceInfoER16VpuInferenceInfoj() called");
    return 0;
}

/* Demangled: edmc_reset */
extern "C" __attribute__((visibility("default"))) int edmc_reset(void) {
    ALOGD("edmc_reset() called");
    return 0;
}

/* Demangled: xrp::XrpCommandInfo::SetXtensaCmdReleased() */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp14XrpCommandInfo20SetXtensaCmdReleasedEv(void) {
    ALOGD("_ZN3xrp14XrpCommandInfo20SetXtensaCmdReleasedEv() called");
    return 0;
}

/* Demangled: xrp::XrpCommandInfo::SetOutputReleased() */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp14XrpCommandInfo17SetOutputReleasedEv(void) {
    ALOGD("_ZN3xrp14XrpCommandInfo17SetOutputReleasedEv() called");
    return 0;
}

/* Demangled: xrp::XrpDebugger::PrintXtensaOperations(void const*, unsigned long, android::base::LogSeverity) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp11XrpDebugger21PrintXtensaOperationsEPKvmN7android4base11LogSeverityE(void) {
    ALOGD("_ZN3xrp11XrpDebugger21PrintXtensaOperationsEPKvmN7android4base11LogSeverityE() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsic::CreateXrpCommand(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp12XrpIntrinsic16CreateXrpCommandEm(void) {
    ALOGD("_ZN3xrp12XrpIntrinsic16CreateXrpCommandEm() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicExecutor::XrpIntrinsicExecutor(std::__1::unique_ptr<xrp::XrpOptions, std::__1::default_delete<xrp::XrpOptions> >) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp20XrpIntrinsicExecutorC2ENSt3__110unique_ptrINS_10XrpOptionsENS1_14default_deleteIS3_EEEE(void) {
    ALOGD("_ZN3xrp20XrpIntrinsicExecutorC2ENSt3__110unique_ptrINS_10XrpOptionsENS1_14default_deleteIS3_EEEE() called");
    return 0;
}

/* Demangled: xrp::memory::XrpIonAllocator::Setup() */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory15XrpIonAllocator5SetupEv(void) {
    ALOGD("_ZN3xrp6memory15XrpIonAllocator5SetupEv() called");
    return 0;
}

/* Demangled: xrp::memory::XrpMemoryManager::GetMemPoolIdxByPa(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory16XrpMemoryManager17GetMemPoolIdxByPaEj(void) {
    ALOGD("_ZN3xrp6memory16XrpMemoryManager17GetMemPoolIdxByPaEj() called");
    return 0;
}

/* Demangled: xrp::XrpVpuStream::~XrpVpuStream() */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp12XrpVpuStreamD1Ev(void) {
    ALOGD("_ZN3xrp12XrpVpuStreamD1Ev() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsic::XrpIntrinsic(int) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp12XrpIntrinsicC1Ei(void) {
    ALOGD("_ZN3xrp12XrpIntrinsicC1Ei() called");
    return 0;
}

/* Demangled: xrp::XrpVpuStream::GetNumberOfRequests() const */
extern "C" __attribute__((visibility("default"))) int _ZNK3xrp12XrpVpuStream19GetNumberOfRequestsEv(void) {
    ALOGD("_ZNK3xrp12XrpVpuStream19GetNumberOfRequestsEv() called");
    return 0;
}

/* Demangled: edmc_copy */
extern "C" __attribute__((visibility("default"))) int edmc_copy(void) {
    ALOGD("edmc_copy() called");
    return 0;
}

/* Demangled: xrp::XrpDebugger::~XrpDebugger() */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp11XrpDebuggerD1Ev(void) {
    ALOGD("_ZN3xrp11XrpDebuggerD1Ev() called");
    return 0;
}

/* Demangled: xrp::memory::XrpMemoryManager::FreeIonBuffer(xrp::memory::PhysicalBufferInfo&) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory16XrpMemoryManager13FreeIonBufferERNS0_18PhysicalBufferInfoE(void) {
    ALOGD("_ZN3xrp6memory16XrpMemoryManager13FreeIonBufferERNS0_18PhysicalBufferInfoE() called");
    return 0;
}

/* Demangled: edmc_wait */
extern "C" __attribute__((visibility("default"))) int edmc_wait(void) {
    ALOGD("edmc_wait() called");
    return 0;
}

/* Demangled: xrp::XrpCommandInfo::XrpCommandInfo(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp14XrpCommandInfoC1Ej(void) {
    ALOGD("_ZN3xrp14XrpCommandInfoC1Ej() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsic::CreateXrpBuffer(xrp::XrpBufferKind, xrp::XrpAccessFlags, xrp::BufferInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp12XrpIntrinsic15CreateXrpBufferENS_13XrpBufferKindENS_14XrpAccessFlagsERKNS_10BufferInfoE(void) {
    ALOGD("_ZN3xrp12XrpIntrinsic15CreateXrpBufferENS_13XrpBufferKindENS_14XrpAccessFlagsERKNS_10BufferInfoE() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicExecutor::HintXrpCommandInput(unsigned long, unsigned int, unsigned long, xrp::XrpAccessFlags) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp20XrpIntrinsicExecutor19HintXrpCommandInputEmjmNS_14XrpAccessFlagsE(void) {
    ALOGD("_ZN3xrp20XrpIntrinsicExecutor19HintXrpCommandInputEmjmNS_14XrpAccessFlagsE() called");
    return 0;
}

/* Demangled: xrp::memory::XrpIonAllocator::MapBuffer(unsigned long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory15XrpIonAllocator9MapBufferEmi(void) {
    ALOGD("_ZN3xrp6memory15XrpIonAllocator9MapBufferEmi() called");
    return 0;
}

/* Demangled: xrp::XrpVpuStream::GetOutputIova(unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3xrp12XrpVpuStream13GetOutputIovaEm(void) {
    ALOGD("_ZNK3xrp12XrpVpuStream13GetOutputIovaEm() called");
    return 0;
}

/* Demangled: xrp::operator<<(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, xrp::XrpAccessFlags const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrplsERNSt3__113basic_ostreamIcNS0_11char_traitsIcEEEERKNS_14XrpAccessFlagsE(void) {
    ALOGD("_ZN3xrplsERNSt3__113basic_ostreamIcNS0_11char_traitsIcEEEERKNS_14XrpAccessFlagsE() called");
    return 0;
}

/* Demangled: xrp::XrpCommandInfo::RegisterDataBuffer(long) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp14XrpCommandInfo18RegisterDataBufferEl(void) {
    ALOGD("_ZN3xrp14XrpCommandInfo18RegisterDataBufferEl() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsic::SyncXrpBuffer(int, xrp::BufferInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp12XrpIntrinsic13SyncXrpBufferEiRKNS_10BufferInfoE(void) {
    ALOGD("_ZN3xrp12XrpIntrinsic13SyncXrpBufferEiRKNS_10BufferInfoE() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicExecutor::~XrpIntrinsicExecutor() */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp20XrpIntrinsicExecutorD1Ev(void) {
    ALOGD("_ZN3xrp20XrpIntrinsicExecutorD1Ev() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicExecutor::GetXrpCommand(unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3xrp20XrpIntrinsicExecutor13GetXrpCommandEm(void) {
    ALOGD("_ZNK3xrp20XrpIntrinsicExecutor13GetXrpCommandEm() called");
    return 0;
}

/* Demangled: xrp::XrpVpuStream::GetFlags(unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3xrp12XrpVpuStream8GetFlagsEm(void) {
    ALOGD("_ZNK3xrp12XrpVpuStream8GetFlagsEm() called");
    return 0;
}

/* Demangled: xrp::XrpVpuStream::DefaultRunRequest(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp12XrpVpuStream17DefaultRunRequestEj(void) {
    ALOGD("_ZN3xrp12XrpVpuStream17DefaultRunRequestEj() called");
    return 0;
}

/* Demangled: edmc_rgb2rgba */
extern "C" __attribute__((visibility("default"))) int edmc_rgb2rgba(void) {
    ALOGD("edmc_rgb2rgba() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicExecutor::ImportBuffer(xrp::BufferInfo const&, xrp::XrpAccessFlags, int) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp20XrpIntrinsicExecutor12ImportBufferERKNS_10BufferInfoENS_14XrpAccessFlagsEi(void) {
    ALOGD("_ZN3xrp20XrpIntrinsicExecutor12ImportBufferERKNS_10BufferInfoENS_14XrpAccessFlagsEi() called");
    return 0;
}

/* Demangled: xrp::memory::XrpMemoryManager::AllocFromPool(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory16XrpMemoryManager13AllocFromPoolEjj(void) {
    ALOGD("_ZN3xrp6memory16XrpMemoryManager13AllocFromPoolEjj() called");
    return 0;
}

/* Demangled: xrp::XrpCommandInfo::IsDspCmdAllocated() const */
extern "C" __attribute__((visibility("default"))) int _ZNK3xrp14XrpCommandInfo17IsDspCmdAllocatedEv(void) {
    ALOGD("_ZNK3xrp14XrpCommandInfo17IsDspCmdAllocatedEv() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsic::PrepareXrpCommand(unsigned long, long) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp12XrpIntrinsic17PrepareXrpCommandEml(void) {
    ALOGD("_ZN3xrp12XrpIntrinsic17PrepareXrpCommandEml() called");
    return 0;
}

/* Demangled: xrp::memory::XrpMemoryManager::FreeImportedBuffer(xrp::memory::XrpBufferDesc&) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory16XrpMemoryManager18FreeImportedBufferERNS0_13XrpBufferDescE(void) {
    ALOGD("_ZN3xrp6memory16XrpMemoryManager18FreeImportedBufferERNS0_13XrpBufferDescE() called");
    return 0;
}

/* Demangled: xrp::memory::MemPool::GetFreeSize() */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory7MemPool11GetFreeSizeEv(void) {
    ALOGD("_ZN3xrp6memory7MemPool11GetFreeSizeEv() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicExecutor::FreeMemoryFromPool(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp20XrpIntrinsicExecutor18FreeMemoryFromPoolEm(void) {
    ALOGD("_ZN3xrp20XrpIntrinsicExecutor18FreeMemoryFromPoolEm() called");
    return 0;
}

/* Demangled: xrp::XrpVpuStream::GetOutputVa(unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3xrp12XrpVpuStream11GetOutputVaEm(void) {
    ALOGD("_ZNK3xrp12XrpVpuStream11GetOutputVaEm() called");
    return 0;
}

/* Demangled: xrp::memory::XrpIonAllocator::QueryPhysical(int) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory15XrpIonAllocator13QueryPhysicalEi(void) {
    ALOGD("_ZN3xrp6memory15XrpIonAllocator13QueryPhysicalEi() called");
    return 0;
}

/* Demangled: xrp::memory::XrpMemoryManager::QueryVa(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory16XrpMemoryManager7QueryVaEj(void) {
    ALOGD("_ZN3xrp6memory16XrpMemoryManager7QueryVaEj() called");
    return 0;
}

/* Demangled: xrp::memory::MemPool::QueryPa(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory7MemPool7QueryPaEm(void) {
    ALOGD("_ZN3xrp6memory7MemPool7QueryPaEm() called");
    return 0;
}

/* Demangled: xrp::memory::MemPool::MemPool(unsigned int, unsigned long, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory7MemPoolC1Ejmjjj(void) {
    ALOGD("_ZN3xrp6memory7MemPoolC1Ejmjjj() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicExecutor::SendSingleRequest(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp20XrpIntrinsicExecutor17SendSingleRequestEj(void) {
    ALOGD("_ZN3xrp20XrpIntrinsicExecutor17SendSingleRequestEj() called");
    return 0;
}

/* Demangled: edmc_fill */
extern "C" __attribute__((visibility("default"))) int edmc_fill(void) {
    ALOGD("edmc_fill() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicExecutor::GetCommandStatus(unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3xrp20XrpIntrinsicExecutor16GetCommandStatusEm(void) {
    ALOGD("_ZNK3xrp20XrpIntrinsicExecutor16GetCommandStatusEm() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::operator<< <char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE(void) {
    ALOGD("_ZNSt3__1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicExecutor::SetOtherDevicesBufferInfo(long, xrp::BufferInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp20XrpIntrinsicExecutor25SetOtherDevicesBufferInfoElRKNS_10BufferInfoE(void) {
    ALOGD("_ZN3xrp20XrpIntrinsicExecutor25SetOtherDevicesBufferInfoElRKNS_10BufferInfoE() called");
    return 0;
}

/* Demangled: xrp::XrpVpuStream::DefaultWaitPackedRequests() */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp12XrpVpuStream25DefaultWaitPackedRequestsEv(void) {
    ALOGD("_ZN3xrp12XrpVpuStream25DefaultWaitPackedRequestsEv() called");
    return 0;
}

/* Demangled: xrp::XrpCommandInfo::SetDataBuffersReleased() */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp14XrpCommandInfo22SetDataBuffersReleasedEv(void) {
    ALOGD("_ZN3xrp14XrpCommandInfo22SetDataBuffersReleasedEv() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsic::GetPreparedRequestsCount(unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3xrp12XrpIntrinsic24GetPreparedRequestsCountEm(void) {
    ALOGD("_ZNK3xrp12XrpIntrinsic24GetPreparedRequestsCountEm() called");
    return 0;
}

/* Demangled: xrp::memory::XrpMemoryManager::GetMemPoolIdxByFreeSize(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory16XrpMemoryManager23GetMemPoolIdxByFreeSizeEj(void) {
    ALOGD("_ZN3xrp6memory16XrpMemoryManager23GetMemPoolIdxByFreeSizeEj() called");
    return 0;
}

/* Demangled: xrp::memory::XrpBufferDesc::XrpBufferDesc(xrp::XrpBufferKind, unsigned int, unsigned long, xrp::XrpAccessFlags) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory13XrpBufferDescC2ENS_13XrpBufferKindEjmNS_14XrpAccessFlagsE(void) {
    ALOGD("_ZN3xrp6memory13XrpBufferDescC2ENS_13XrpBufferKindEjmNS_14XrpAccessFlagsE() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicExecutor::DebugAllXrpBuffers(bool) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3xrp20XrpIntrinsicExecutor18DebugAllXrpBuffersEb(void) {
    ALOGD("_ZNK3xrp20XrpIntrinsicExecutor18DebugAllXrpBuffersEb() called");
    return 0;
}

/* Demangled: xrp::memory::MemPool::~MemPool() */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory7MemPoolD1Ev(void) {
    ALOGD("_ZN3xrp6memory7MemPoolD1Ev() called");
    return 0;
}

/* Demangled: xrp::operator<<(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, xrp::XrpStatus const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrplsERNSt3__113basic_ostreamIcNS0_11char_traitsIcEEEERKNS_9XrpStatusE(void) {
    ALOGD("_ZN3xrplsERNSt3__113basic_ostreamIcNS0_11char_traitsIcEEEERKNS_9XrpStatusE() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicExecutor::CreateVpuStream() */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp20XrpIntrinsicExecutor15CreateVpuStreamEv(void) {
    ALOGD("_ZN3xrp20XrpIntrinsicExecutor15CreateVpuStreamEv() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicExecutor::FinalizeDataBuffer(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp20XrpIntrinsicExecutor18FinalizeDataBufferEm(void) {
    ALOGD("_ZN3xrp20XrpIntrinsicExecutor18FinalizeDataBufferEm() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicExecutor::CreateVpuRequest(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp20XrpIntrinsicExecutor16CreateVpuRequestEm(void) {
    ALOGD("_ZN3xrp20XrpIntrinsicExecutor16CreateVpuRequestEm() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicExecutor::DestroyVpuRequest(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp20XrpIntrinsicExecutor17DestroyVpuRequestEm(void) {
    ALOGD("_ZN3xrp20XrpIntrinsicExecutor17DestroyVpuRequestEm() called");
    return 0;
}

/* Demangled: xrp::XrpVpuStream::GetNativeRequest(xrp::VpuRequestInfo&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3xrp12XrpVpuStream16GetNativeRequestERNS_14VpuRequestInfoE(void) {
    ALOGD("_ZNK3xrp12XrpVpuStream16GetNativeRequestERNS_14VpuRequestInfoE() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicExecutor::CreateXrpCommand(unsigned long, unsigned long, xrp::XrpAccessFlags) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp20XrpIntrinsicExecutor16CreateXrpCommandEmmNS_14XrpAccessFlagsE(void) {
    ALOGD("_ZN3xrp20XrpIntrinsicExecutor16CreateXrpCommandEmmNS_14XrpAccessFlagsE() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicExecutor::GetBuffer(long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3xrp20XrpIntrinsicExecutor9GetBufferEl(void) {
    ALOGD("_ZNK3xrp20XrpIntrinsicExecutor9GetBufferEl() called");
    return 0;
}

/* Demangled: xrp::memory::XrpMemoryManager::XrpMemoryManager() */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory16XrpMemoryManagerC1Ev(void) {
    ALOGD("_ZN3xrp6memory16XrpMemoryManagerC1Ev() called");
    return 0;
}

/* Demangled: xrp::XrpVpuStream::DefaultReleaseVpuRequests(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp12XrpVpuStream25DefaultReleaseVpuRequestsEjj(void) {
    ALOGD("_ZN3xrp12XrpVpuStream25DefaultReleaseVpuRequestsEjj() called");
    return 0;
}

/* Demangled: xrp::memory::XrpIonAllocator::XrpIonAllocator() */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory15XrpIonAllocatorC2Ev(void) {
    ALOGD("_ZN3xrp6memory15XrpIonAllocatorC2Ev() called");
    return 0;
}

/* Demangled: xrp::memory::XrpBufferDesc::~XrpBufferDesc() */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory13XrpBufferDescD1Ev(void) {
    ALOGD("_ZN3xrp6memory13XrpBufferDescD1Ev() called");
    return 0;
}

/* Demangled: xrp::XrpCommandInfo::CreateXtensaCmdHandle(unsigned int, unsigned long, xrp::XrpAccessFlags) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp14XrpCommandInfo21CreateXtensaCmdHandleEjmNS_14XrpAccessFlagsE(void) {
    ALOGD("_ZN3xrp14XrpCommandInfo21CreateXtensaCmdHandleEjmNS_14XrpAccessFlagsE() called");
    return 0;
}

/* Demangled: xrp::XrpCommandInfo::IsOutputAllocated() const */
extern "C" __attribute__((visibility("default"))) int _ZNK3xrp14XrpCommandInfo17IsOutputAllocatedEv(void) {
    ALOGD("_ZNK3xrp14XrpCommandInfo17IsOutputAllocatedEv() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicExecutor::AllocInternalCmdBuffer(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp20XrpIntrinsicExecutor22AllocInternalCmdBufferEm(void) {
    ALOGD("_ZN3xrp20XrpIntrinsicExecutor22AllocInternalCmdBufferEm() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicExecutor::XrpIntrinsicExecutor(std::__1::unique_ptr<xrp::XrpOptions, std::__1::default_delete<xrp::XrpOptions> >) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp20XrpIntrinsicExecutorC1ENSt3__110unique_ptrINS_10XrpOptionsENS1_14default_deleteIS3_EEEE(void) {
    ALOGD("_ZN3xrp20XrpIntrinsicExecutorC1ENSt3__110unique_ptrINS_10XrpOptionsENS1_14default_deleteIS3_EEEE() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsic::~XrpIntrinsic() */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp12XrpIntrinsicD1Ev(void) {
    ALOGD("_ZN3xrp12XrpIntrinsicD1Ev() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicExecutor::AllocMemoryFromPool(unsigned int, xrp::memory::PhysicalBufferInfo&) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp20XrpIntrinsicExecutor19AllocMemoryFromPoolEjRNS_6memory18PhysicalBufferInfoE(void) {
    ALOGD("_ZN3xrp20XrpIntrinsicExecutor19AllocMemoryFromPoolEjRNS_6memory18PhysicalBufferInfoE() called");
    return 0;
}

/* Demangled: xrp::XrpVpuStream::SetMultiVpuParams(unsigned long, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp12XrpVpuStream17SetMultiVpuParamsEmjj(void) {
    ALOGD("_ZN3xrp12XrpVpuStream17SetMultiVpuParamsEmjj() called");
    return 0;
}

/* Demangled: xrp::XrpVpuStream::DefaultCreateVpuAlgo() */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp12XrpVpuStream20DefaultCreateVpuAlgoEv(void) {
    ALOGD("_ZN3xrp12XrpVpuStream20DefaultCreateVpuAlgoEv() called");
    return 0;
}

/* Demangled: xrp::memory::MemPool::MemPool(unsigned int, unsigned long, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory7MemPoolC2Ejmjjj(void) {
    ALOGD("_ZN3xrp6memory7MemPoolC2Ejmjjj() called");
    return 0;
}

/* Demangled: xrp::XrpCommandInfo::SetAllocatedXtensaCmd(xrp::XrpBufferKind, unsigned long, unsigned int, xrp::memory::PhysicalBufferInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp14XrpCommandInfo21SetAllocatedXtensaCmdENS_13XrpBufferKindEmjRKNS_6memory18PhysicalBufferInfoE(void) {
    ALOGD("_ZN3xrp14XrpCommandInfo21SetAllocatedXtensaCmdENS_13XrpBufferKindEmjRKNS_6memory18PhysicalBufferInfoE() called");
    return 0;
}

/* Demangled: xrp::XrpCommandInfo::~XrpCommandInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp14XrpCommandInfoD1Ev(void) {
    ALOGD("_ZN3xrp14XrpCommandInfoD1Ev() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicExecutor::PrepareXtensaCommandBuffer(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp20XrpIntrinsicExecutor26PrepareXtensaCommandBufferEm(void) {
    ALOGD("_ZN3xrp20XrpIntrinsicExecutor26PrepareXtensaCommandBufferEm() called");
    return 0;
}

/* Demangled: xrp::memory::XrpMemoryManager::~XrpMemoryManager() */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory16XrpMemoryManagerD1Ev(void) {
    ALOGD("_ZN3xrp6memory16XrpMemoryManagerD1Ev() called");
    return 0;
}

/* Demangled: xrp::XrpVpuStream::DefaultWaitRequest(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp12XrpVpuStream18DefaultWaitRequestEj(void) {
    ALOGD("_ZN3xrp12XrpVpuStream18DefaultWaitRequestEj() called");
    return 0;
}

/* Demangled: xrp::memory::XrpIonAllocator::~XrpIonAllocator() */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory15XrpIonAllocatorD2Ev(void) {
    ALOGD("_ZN3xrp6memory15XrpIonAllocatorD2Ev() called");
    return 0;
}

/* Demangled: edmc_get_status */
extern "C" __attribute__((visibility("default"))) int edmc_get_status(void) {
    ALOGD("edmc_get_status() called");
    return 0;
}

/* Demangled: edmc_fix8tofp32 */
extern "C" __attribute__((visibility("default"))) int edmc_fix8tofp32(void) {
    ALOGD("edmc_fix8tofp32() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsic::PrepareInternalCommand(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp12XrpIntrinsic22PrepareInternalCommandEjj(void) {
    ALOGD("_ZN3xrp12XrpIntrinsic22PrepareInternalCommandEjj() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicExecutor::PrepareInternalCommandBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp20XrpIntrinsicExecutor28PrepareInternalCommandBufferEv(void) {
    ALOGD("_ZN3xrp20XrpIntrinsicExecutor28PrepareInternalCommandBufferEv() called");
    return 0;
}

/* Demangled: edmc_init */
extern "C" __attribute__((visibility("default"))) int edmc_init(void) {
    ALOGD("edmc_init() called");
    return 0;
}

/* Demangled: xrp::memory::MemPool::Free(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory7MemPool4FreeEm(void) {
    ALOGD("_ZN3xrp6memory7MemPool4FreeEm() called");
    return 0;
}

/* Demangled: xrp::memory::MemPool::PrintMemoryBlock(xrp::memory::MemPool::MemBlock*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3xrp6memory7MemPool16PrintMemoryBlockEPNS1_8MemBlockE(void) {
    ALOGD("_ZNK3xrp6memory7MemPool16PrintMemoryBlockEPNS1_8MemBlockE() called");
    return 0;
}

/* Demangled: xrp::memory::XrpBufferDesc::XrpBufferDesc(xrp::XrpBufferKind) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory13XrpBufferDescC1ENS_13XrpBufferKindE(void) {
    ALOGD("_ZN3xrp6memory13XrpBufferDescC1ENS_13XrpBufferKindE() called");
    return 0;
}

/* Demangled: xrp::operator<<(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, xrp::BufferInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrplsERNSt3__113basic_ostreamIcNS0_11char_traitsIcEEEERKNS_10BufferInfoE(void) {
    ALOGD("_ZN3xrplsERNSt3__113basic_ostreamIcNS0_11char_traitsIcEEEERKNS_10BufferInfoE() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsic::GetPreparedRequest(unsigned long, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNK3xrp12XrpIntrinsic18GetPreparedRequestEmm(void) {
    ALOGD("_ZNK3xrp12XrpIntrinsic18GetPreparedRequestEmm() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicExecutor::UpdateDataBufferCommandInfo(int) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp20XrpIntrinsicExecutor27UpdateDataBufferCommandInfoEi(void) {
    ALOGD("_ZN3xrp20XrpIntrinsicExecutor27UpdateDataBufferCommandInfoEi() called");
    return 0;
}

/* Demangled: xrp::XrpVpuStream::SetDspCommandFlags(unsigned long, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp12XrpVpuStream18SetDspCommandFlagsEmj(void) {
    ALOGD("_ZN3xrp12XrpVpuStream18SetDspCommandFlagsEmj() called");
    return 0;
}

/* Demangled: xrp::memory::XrpMemoryManager::GetMemPoolIdxByVa(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory16XrpMemoryManager17GetMemPoolIdxByVaEm(void) {
    ALOGD("_ZN3xrp6memory16XrpMemoryManager17GetMemPoolIdxByVaEm() called");
    return 0;
}

/* Demangled: xrp::memory::XrpMemoryManager::Flush(unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory16XrpMemoryManager5FlushEmm(void) {
    ALOGD("_ZN3xrp6memory16XrpMemoryManager5FlushEmm() called");
    return 0;
}

/* Demangled: xrp::memory::XrpBufferDesc::SetReleased() */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory13XrpBufferDesc11SetReleasedEv(void) {
    ALOGD("_ZN3xrp6memory13XrpBufferDesc11SetReleasedEv() called");
    return 0;
}

/* Demangled: xrp::XrpCommandInfo::IsDataBuffersAllocated() const */
extern "C" __attribute__((visibility("default"))) int _ZNK3xrp14XrpCommandInfo22IsDataBuffersAllocatedEv(void) {
    ALOGD("_ZNK3xrp14XrpCommandInfo22IsDataBuffersAllocatedEv() called");
    return 0;
}

/* Demangled: xrp::XrpIntrinsicExecutor::SetXrpBufferKind(long, xrp::XrpBufferKind) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp20XrpIntrinsicExecutor16SetXrpBufferKindElNS_13XrpBufferKindE(void) {
    ALOGD("_ZN3xrp20XrpIntrinsicExecutor16SetXrpBufferKindElNS_13XrpBufferKindE() called");
    return 0;
}

/* Demangled: xrp::memory::XrpMemoryManager::ShareIonBuffer(xrp::memory::PhysicalBufferInfo&) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory16XrpMemoryManager14ShareIonBufferERNS0_18PhysicalBufferInfoE(void) {
    ALOGD("_ZN3xrp6memory16XrpMemoryManager14ShareIonBufferERNS0_18PhysicalBufferInfoE() called");
    return 0;
}

/* Demangled: xrp::XrpPatternDump::DumpXrpBuffer(xrp::memory::XrpBufferDesc const&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp14XrpPatternDump13DumpXrpBufferERKNS_6memory13XrpBufferDescEj(void) {
    ALOGD("_ZN3xrp14XrpPatternDump13DumpXrpBufferERKNS_6memory13XrpBufferDescEj() called");
    return 0;
}

/* Demangled: xrp::XrpCommandInfo::CreateDataBuffersHandle(unsigned int, unsigned long, xrp::XrpAccessFlags) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp14XrpCommandInfo23CreateDataBuffersHandleEjmNS_14XrpAccessFlagsE(void) {
    ALOGD("_ZN3xrp14XrpCommandInfo23CreateDataBuffersHandleEjmNS_14XrpAccessFlagsE() called");
    return 0;
}

/* Demangled: xrp::XrpCommandInfo::SetAllocatedDspCmd(xrp::XrpBufferKind, unsigned long, unsigned int, xrp::memory::PhysicalBufferInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp14XrpCommandInfo18SetAllocatedDspCmdENS_13XrpBufferKindEmjRKNS_6memory18PhysicalBufferInfoE(void) {
    ALOGD("_ZN3xrp14XrpCommandInfo18SetAllocatedDspCmdENS_13XrpBufferKindEmjRKNS_6memory18PhysicalBufferInfoE() called");
    return 0;
}

/* Demangled: xrp::XrpVpuStream::FillDspCommandBuffer(xrp::XrpVpuStream::BufferKind, unsigned long, unsigned int, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp12XrpVpuStream20FillDspCommandBufferENS0_10BufferKindEmjm(void) {
    ALOGD("_ZN3xrp12XrpVpuStream20FillDspCommandBufferENS0_10BufferKindEmjm() called");
    return 0;
}

/* Demangled: xrp::memory::XrpIonAllocator::CloseShareFd(int) */
extern "C" __attribute__((visibility("default"))) int _ZN3xrp6memory15XrpIonAllocator12CloseShareFdEi(void) {
    ALOGD("_ZN3xrp6memory15XrpIonAllocator12CloseShareFdEi() called");
    return 0;
}
