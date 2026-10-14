/*
 * Reverse-Engineered Source for: libcmdl.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libcmdl"

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
#include "libcmdl.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: MK::CCLRetainCommandQueue::GetMemoryUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK21CCLRetainCommandQueue13GetMemoryUsedEv(void) {
    ALOGD("_ZNK2MK21CCLRetainCommandQueue13GetMemoryUsedEv() called");
    return 0;
}

/* Demangled: MK::CCLSetKernelArg::~CCLSetKernelArg() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLSetKernelArgD2Ev(void) {
    ALOGD("_ZN2MK15CCLSetKernelArgD2Ev() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_program*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_program*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_program*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP11_cl_programP13_cl_device_idjmPvPmENS_9allocatorIS9_EES8_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP11_cl_programP13_cl_device_idjmPvPmENS_9allocatorIS9_EES8_E7destroyEv() called");
    return 0;
}

/* Demangled: MK::COutputTensors::Factory(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14COutputTensors7FactoryERNS_7CStreamE(void) {
    ALOGD("_ZN2MK14COutputTensors7FactoryERNS_7CStreamE() called");
    return 0;
}

/* Exported Object: MK::CVersion::MAJOR */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK8CVersion5MAJORE = NULL;

/* Demangled: MK::CCLRetainContext::Link(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLRetainContext4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK16CCLRetainContext4LinkERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<int (*)(_cl_kernel*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_kernel*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_kernel*, unsigned int, unsigned long, void*, unsigned long*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFiP10_cl_kerneljmPvPmENS_9allocatorIS7_EES6_EE = NULL;

/* Demangled: MK::CCLCreateKernelsInProgram::RegisterUniqueObject(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK25CCLCreateKernelsInProgram20RegisterUniqueObjectERNS_7CStreamE(void) {
    ALOGD("_ZN2MK25CCLCreateKernelsInProgram20RegisterUniqueObjectERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CCLReleaseProgram::CCLReleaseProgram() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK17CCLReleaseProgramC1Ev(void) {
    ALOGD("_ZN2MK17CCLReleaseProgramC1Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::pair<int, MK::CPointer<MK::CStaticData> >, std::__1::allocator<std::__1::pair<int, MK::CPointer<MK::CStaticData> > > >::__push_back_slow_path<std::__1::pair<int, MK::CPointer<MK::CStaticData> > >(std::__1::pair<int, MK::CPointer<MK::CStaticData> >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_4pairIiN2MK8CPointerINS2_11CStaticDataEEEEENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_4pairIiN2MK8CPointerINS2_11CStaticDataEEEEENS_9allocatorIS6_EEE21__push_back_slow_pathIS6_EEvOT_() called");
    return 0;
}

/* Demangled: CmdL_AttachclEnqueueMarkerWithWaitList */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclEnqueueMarkerWithWaitList(void) {
    ALOGD("CmdL_AttachclEnqueueMarkerWithWaitList() called");
    return 0;
}

/* Demangled: MK::clGetImageInfo(_cl_mem*, unsigned int, unsigned long, void*, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14clGetImageInfoEP7_cl_memjmPvPm(void) {
    ALOGD("_ZN2MK14clGetImageInfoEP7_cl_memjmPvPm() called");
    return 0;
}

/* Demangled: clReleaseCommandQueue */
extern "C" __attribute__((visibility("default"))) int clReleaseCommandQueue(void) {
    ALOGD("clReleaseCommandQueue() called");
    return 0;
}

/* Demangled: MK::CCLFinish::RegisterUniqueObject(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK9CCLFinish20RegisterUniqueObjectERNS_7CStreamE(void) {
    ALOGD("_ZN2MK9CCLFinish20RegisterUniqueObjectERNS_7CStreamE() called");
    return 0;
}

/* Demangled: void std::__1::vector<MK::CObject*, std::__1::allocator<MK::CObject*> >::__push_back_slow_path<MK::CObject* const&>(MK::CObject* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN2MK7CObjectENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPN2MK7CObjectENS_9allocatorIS3_EEE21__push_back_slow_pathIRKS3_EEvOT_() called");
    return 0;
}

/* Demangled: MK::CCLRetainKernel::CCLRetainKernel() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLRetainKernelC2Ev(void) {
    ALOGD("_ZN2MK15CCLRetainKernelC2Ev() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, void const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, void const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, void const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>::__clone(std::__1::__function::__base<int (_cl_command_queue*, _cl_mem*, void const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPKvPKmS9_jPKP9_cl_eventPSB_ENS_9allocatorISG_EESF_E7__cloneEPNS0_6__baseISF_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPKvPKmS9_jPKP9_cl_eventPSB_ENS_9allocatorISG_EESF_E7__cloneEPNS0_6__baseISF_EE() called");
    return 0;
}

/* Demangled: clGetKernelArgInfo */
extern "C" __attribute__((visibility("default"))) int clGetKernelArgInfo(void) {
    ALOGD("clGetKernelArgInfo() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<void* (*)(_cl_context*, unsigned long, unsigned long, unsigned int), std::__1::allocator<void* (*)(_cl_context*, unsigned long, unsigned long, unsigned int)>, void* (_cl_context*, unsigned long, unsigned long, unsigned int)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFPvP11_cl_contextmmjENS_9allocatorIS6_EES5_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFPvP11_cl_contextmmjENS_9allocatorIS6_EES5_E7destroyEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<_cl_context* (*)(long const*, unsigned long, void (*)(char const*, void const*, unsigned long, void*), void*, int*), std::__1::allocator<_cl_context* (*)(long const*, unsigned long, void (*)(char const*, void const*, unsigned long, void*), void*, int*)>, _cl_context* (long const*, unsigned long, void (*)(char const*, void const*, unsigned long, void*), void*, int*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFP11_cl_contextPKlmPFvPKcPKvmPvESA_PiENS_9allocatorISF_EESE_EE = NULL;

/* Demangled: MK::CStream::InsertInLinkMap(MK::CObject*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK7CStream15InsertInLinkMapEPNS_7CObjectEPv(void) {
    ALOGD("_ZN2MK7CStream15InsertInLinkMapEPNS_7CObjectEPv() called");
    return 0;
}

/* Demangled: MK::clSetUserEventStatus(_cl_event*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK20clSetUserEventStatusEP9_cl_eventi(void) {
    ALOGD("_ZN2MK20clSetUserEventStatusEP9_cl_eventi() called");
    return 0;
}

/* Demangled: MK::CCLReleaseProgram::~CCLReleaseProgram() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK17CCLReleaseProgramD0Ev(void) {
    ALOGD("_ZN2MK17CCLReleaseProgramD0Ev() called");
    return 0;
}

/* Demangled: MK::CCLRetainProgram::GetDiskUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK16CCLRetainProgram11GetDiskUsedEv(void) {
    ALOGD("_ZNK2MK16CCLRetainProgram11GetDiskUsedEv() called");
    return 0;
}

/* Demangled: MK::CCLSVMFree::Save(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK10CCLSVMFree4SaveERNS_7CStreamE(void) {
    ALOGD("_ZN2MK10CCLSVMFree4SaveERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CCLProfileKernelJob::CCLProfileKernelJob(MK::CCLProfileKernelJob const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK19CCLProfileKernelJobC2ERKS0_(void) {
    ALOGD("_ZN2MK19CCLProfileKernelJobC2ERKS0_() called");
    return 0;
}

/* Demangled: MKProgram_AttachCLEnqueueMemoryCopy */
extern "C" __attribute__((visibility("default"))) int MKProgram_AttachCLEnqueueMemoryCopy(void) {
    ALOGD("MKProgram_AttachCLEnqueueMemoryCopy() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>::operator()(_cl_command_queue*&&, _cl_mem*&&, _cl_mem*&&, unsigned long const*&&, unsigned long const*&&, unsigned long const*&&, unsigned int&&, _cl_event* const*&&, _cl_event**&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_S7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EclEOS3_OS5_SJ_OS7_SK_SK_OjOSB_OSC_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_S7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EclEOS3_OS5_SJ_OS7_SK_SK_OjOSB_OSC_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<int (*)(_cl_sampler*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_sampler*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_sampler*, unsigned int, unsigned long, void*, unsigned long*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFiP11_cl_samplerjmPvPmENS_9allocatorIS7_EES6_EE = NULL;

/* Exported Object: MK::CCLCreateCommandQueue::ms_kRTTI */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK21CCLCreateCommandQueue8ms_kRTTIE = NULL;

/* Demangled: CmdL_AttachclEnqueueCopyImageToBuffer */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclEnqueueCopyImageToBuffer(void) {
    ALOGD("CmdL_AttachclEnqueueCopyImageToBuffer() called");
    return 0;
}

/* Demangled: MK::CCLPrepareMemoryCopy::RegisterFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK20CCLPrepareMemoryCopy15RegisterFactoryEv(void) {
    ALOGD("_ZN2MK20CCLPrepareMemoryCopy15RegisterFactoryEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_event*, int), std::__1::allocator<int (*)(_cl_event*, int)>, int (_cl_event*, int)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP9_cl_eventiENS_9allocatorIS5_EES4_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP9_cl_eventiENS_9allocatorIS5_EES4_E7__cloneEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<void (*)(int, void*), std::__1::allocator<void (*)(int, void*)>, void (int, void*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFviPvENS_9allocatorIS4_EES3_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFviPvENS_9allocatorIS4_EES3_E7__cloneEv() called");
    return 0;
}

/* Demangled: MK::CCLCreateCommandQueue::CCLCreateCommandQueue(MK::CCLCreateCommandQueue const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK21CCLCreateCommandQueueC2ERKS0_(void) {
    ALOGD("_ZN2MK21CCLCreateCommandQueueC2ERKS0_() called");
    return 0;
}

/* Demangled: MK::CCLRetainKernel::CCLRetainKernel(MK::CCLRetainKernel const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLRetainKernelC1ERKS0_(void) {
    ALOGD("_ZN2MK15CCLRetainKernelC1ERKS0_() called");
    return 0;
}

/* Demangled: MK::CCLRetainKernel::~CCLRetainKernel() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLRetainKernelD1Ev(void) {
    ALOGD("_ZN2MK15CCLRetainKernelD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_mmPKvjPKP9_cl_eventPSB_ENS_9allocatorISG_EESF_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_mmPKvjPKP9_cl_eventPSB_ENS_9allocatorISG_EESF_E7destroyEv() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMemoryCopy::CCLEnqueueMemoryCopy() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK20CCLEnqueueMemoryCopyC1Ev(void) {
    ALOGD("_ZN2MK20CCLEnqueueMemoryCopyC1Ev() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, void (*)(_cl_program*, void*), void*, int*), std::__1::allocator<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, void (*)(_cl_program*, void*), void*, int*)>, _cl_program* (_cl_context*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, void (*)(_cl_program*, void*), void*, int*)>::operator()(_cl_context*&&, unsigned int&&, _cl_device_id* const*&&, char const*&&, unsigned int&&, _cl_program* const*&&, void (*&&)(_cl_program*, void*), void*&&, int*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKcjPKS3_PFvS3_PvESE_PiENS_9allocatorISJ_EESI_EclEOS5_OjOS9_OSB_SO_OSD_OSG_OSE_OSH_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKcjPKS3_PFvS3_PvESE_PiENS_9allocatorISJ_EESI_EclEOS5_OjOS9_OSB_SO_OSD_OSG_OSE_OSH_() called");
    return 0;
}

/* Exported Object: vtable for MK::CLUtils */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK7CLUtilsE = NULL;

/* Demangled: MK::CCLRetainContext::Log(MK::CJsonLog&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK16CCLRetainContext3LogERNS_8CJsonLogE(void) {
    ALOGD("_ZNK2MK16CCLRetainContext3LogERNS_8CJsonLogE() called");
    return 0;
}

/* Exported Object: MK::CUpdateBool::ms_kRTTI */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK11CUpdateBool8ms_kRTTIE = NULL;

/* Demangled: MK::CLUtils::GetOpenCLDeviceInfo(std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK7CLUtils19GetOpenCLDeviceInfoERNSt3__13mapINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES8_NS1_4lessIS8_EENS6_INS1_4pairIKS8_S8_EEEEEE(void) {
    ALOGD("_ZN2MK7CLUtils19GetOpenCLDeviceInfoERNSt3__13mapINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES8_NS1_4lessIS8_EENS6_INS1_4pairIKS8_S8_EEEEEE() called");
    return 0;
}

/* Exported Object: vtable for MK::CCLCreateImage */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK14CCLCreateImageE = NULL;

/* Demangled: MK::CCLWaitForEvents::RegisterUniqueObject(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLWaitForEvents20RegisterUniqueObjectERNS_7CStreamE(void) {
    ALOGD("_ZN2MK16CCLWaitForEvents20RegisterUniqueObjectERNS_7CStreamE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_program*, unsigned int, _cl_device_id* const*, char const*, void (*)(_cl_program*, void*), void*), std::__1::allocator<int (*)(_cl_program*, unsigned int, _cl_device_id* const*, char const*, void (*)(_cl_program*, void*), void*)>, int (_cl_program*, unsigned int, _cl_device_id* const*, char const*, void (*)(_cl_program*, void*), void*)>::operator()(_cl_program*&&, unsigned int&&, _cl_device_id* const*&&, char const*&&, void (*&&)(_cl_program*, void*), void*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP11_cl_programjPKP13_cl_device_idPKcPFvS3_PvESA_ENS_9allocatorISE_EESD_EclEOS3_OjOS7_OS9_OSC_OSA_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP11_cl_programjPKP13_cl_device_idPKcPFvS3_PvESA_ENS_9allocatorISE_EESD_EclEOS3_OjOS7_OS9_OSC_OSA_() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<MK::CPointer<MK::CJob>, std::__1::allocator<MK::CPointer<MK::CJob> > >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseIN2MK8CPointerINS1_4CJobEEENS_9allocatorIS4_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseIN2MK8CPointerINS1_4CJobEEENS_9allocatorIS4_EEE5clearEv() called");
    return 0;
}

/* Demangled: MK::CCLCreateCommandQueue::Factory(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK21CCLCreateCommandQueue7FactoryERNS_7CStreamE(void) {
    ALOGD("_ZN2MK21CCLCreateCommandQueue7FactoryERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueWriteBuffer::GetMemoryUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK21CCLEnqueueWriteBuffer13GetMemoryUsedEv(void) {
    ALOGD("_ZNK2MK21CCLEnqueueWriteBuffer13GetMemoryUsedEv() called");
    return 0;
}

/* Demangled: MK::CCLFinish::Run(MKProgramType, MK::CContextLocal*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK9CCLFinish3RunE13MKProgramTypePNS_13CContextLocalE(void) {
    ALOGD("_ZN2MK9CCLFinish3RunE13MKProgramTypePNS_13CContextLocalE() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMemoryCopy::~CCLEnqueueMemoryCopy() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK20CCLEnqueueMemoryCopyD0Ev(void) {
    ALOGD("_ZN2MK20CCLEnqueueMemoryCopyD0Ev() called");
    return 0;
}

/* Demangled: MK::clRetainContext(_cl_context*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15clRetainContextEP11_cl_context(void) {
    ALOGD("_ZN2MK15clRetainContextEP11_cl_context() called");
    return 0;
}

/* Demangled: clSVMFree */
extern "C" __attribute__((visibility("default"))) int clSVMFree(void) {
    ALOGD("clSVMFree() called");
    return 0;
}

/* Demangled: MK::CCLReleaseMemObject::CCLReleaseMemObject(MK::CCLReleaseMemObject const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK19CCLReleaseMemObjectC2ERKS0_(void) {
    ALOGD("_ZN2MK19CCLReleaseMemObjectC2ERKS0_() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueSVMMap::CCLEnqueueSVMMap(MK::CCLEnqueueSVMMap const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLEnqueueSVMMapC2ERKS0_(void) {
    ALOGD("_ZN2MK16CCLEnqueueSVMMapC2ERKS0_() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_event*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_event*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_event*, unsigned int, unsigned long, void*, unsigned long*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP9_cl_eventjmPvPmENS_9allocatorIS7_EES6_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP9_cl_eventjmPvPmENS_9allocatorIS7_EES6_E7__cloneEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_event*), std::__1::allocator<int (*)(_cl_event*)>, int (_cl_event*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP9_cl_eventENS_9allocatorIS5_EES4_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP9_cl_eventENS_9allocatorIS5_EES4_E7destroyEv() called");
    return 0;
}

/* Demangled: MK::CMemoryCopy::Log(MK::CJsonLog&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK11CMemoryCopy3LogERNS_8CJsonLogE(void) {
    ALOGD("_ZNK2MK11CMemoryCopy3LogERNS_8CJsonLogE() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<MK::CPointer<MK::CProgram>*, std::__1::allocator<MK::CPointer<MK::CProgram>*>&>::push_front(MK::CPointer<MK::CProgram>* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN2MK8CPointerINS1_8CProgramEEERNS_9allocatorIS5_EEE10push_frontERKS5_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN2MK8CPointerINS1_8CProgramEEERNS_9allocatorIS5_EEE10push_frontERKS5_() called");
    return 0;
}

/* Exported Object: MK::CCLEnqueueNDRangeKernel::ms_kRTTI */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK23CCLEnqueueNDRangeKernel8ms_kRTTIE = NULL;

/* Demangled: MK::CCLFinish::Log(MK::CJsonLog&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK9CCLFinish3LogERNS_8CJsonLogE(void) {
    ALOGD("_ZNK2MK9CCLFinish3LogERNS_8CJsonLogE() called");
    return 0;
}

/* Demangled: MK::CCLFlush::Load(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK8CCLFlush4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK8CCLFlush4LoadERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueSVMMap::Save(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLEnqueueSVMMap4SaveERNS_7CStreamE(void) {
    ALOGD("_ZN2MK16CCLEnqueueSVMMap4SaveERNS_7CStreamE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_context* (*)(long const*, unsigned long, void (*)(char const*, void const*, unsigned long, void*), void*, int*), std::__1::allocator<_cl_context* (*)(long const*, unsigned long, void (*)(char const*, void const*, unsigned long, void*), void*, int*)>, _cl_context* (long const*, unsigned long, void (*)(char const*, void const*, unsigned long, void*), void*, int*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFP11_cl_contextPKlmPFvPKcPKvmPvESA_PiENS_9allocatorISF_EESE_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFP11_cl_contextPKlmPFvPKcPKvmPvESA_PiENS_9allocatorISF_EESE_E7__cloneEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_kernel*, unsigned int, unsigned long, void const*), std::__1::allocator<int (*)(_cl_kernel*, unsigned int, unsigned long, void const*)>, int (_cl_kernel*, unsigned int, unsigned long, void const*)>::operator()(_cl_kernel*&&, unsigned int&&, unsigned long&&, void const*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP10_cl_kerneljmPKvENS_9allocatorIS7_EES6_EclEOS3_OjOmOS5_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP10_cl_kerneljmPKvENS_9allocatorIS7_EES6_EclEOS3_OjOmOS5_() called");
    return 0;
}

/* Demangled: MK::CCLCreateBuffer::CCLCreateBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLCreateBufferC1Ev(void) {
    ALOGD("_ZN2MK15CCLCreateBufferC1Ev() called");
    return 0;
}

/* Demangled: MK::CCLCreateImage::Save(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14CCLCreateImage4SaveERNS_7CStreamE(void) {
    ALOGD("_ZN2MK14CCLCreateImage4SaveERNS_7CStreamE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_program*), std::__1::allocator<int (*)(_cl_program*)>, int (_cl_program*)>::operator()(_cl_program*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP11_cl_programENS_9allocatorIS5_EES4_EclEOS3_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP11_cl_programENS_9allocatorIS5_EES4_EclEOS3_() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMarkerWithWaitList::Record(_cl_command_queue*, unsigned int, _cl_event* const*, _cl_event*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK28CCLEnqueueMarkerWithWaitList6RecordEP17_cl_command_queuejPKP9_cl_eventS4_(void) {
    ALOGD("_ZN2MK28CCLEnqueueMarkerWithWaitList6RecordEP17_cl_command_queuejPKP9_cl_eventS4_() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueSVMMap::Factory(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLEnqueueSVMMap7FactoryERNS_7CStreamE(void) {
    ALOGD("_ZN2MK16CCLEnqueueSVMMap7FactoryERNS_7CStreamE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<std::__1::function<int (unsigned long, void*)>, std::__1::allocator<std::__1::function<int (unsigned long, void*)> >, int (unsigned int, void*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcINS_8functionIFimPvEEENS_9allocatorIS5_EEFijS3_EE7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcINS_8functionIFimPvEEENS_9allocatorIS5_EEFijS3_EE7destroyEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_program*), std::__1::allocator<int (*)(_cl_program*)>, int (_cl_program*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP11_cl_programENS_9allocatorIS5_EES4_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP11_cl_programENS_9allocatorIS5_EES4_E7destroyEv() called");
    return 0;
}

/* Demangled: MK::CProgram::CProgram(MK::CProgram const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK8CProgramC1ERKS0_(void) {
    ALOGD("_ZN2MK8CProgramC1ERKS0_() called");
    return 0;
}

/* Demangled: MK::CRegisterFactory::CRegisterFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CRegisterFactoryC2Ev(void) {
    ALOGD("_ZN2MK16CRegisterFactoryC2Ev() called");
    return 0;
}

/* Demangled: MK::CCLRetainEvent::Record(_cl_event*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14CCLRetainEvent6RecordEP9_cl_event(void) {
    ALOGD("_ZN2MK14CCLRetainEvent6RecordEP9_cl_event() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIP13_cl_device_idNS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIP13_cl_device_idNS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_(void) {
    ALOGD("_ZNSt3__16vectorIP13_cl_device_idNS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_context*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_context*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_context*, unsigned int, unsigned long, void*, unsigned long*)>::__clone(std::__1::__function::__base<int (_cl_context*, unsigned int, unsigned long, void*, unsigned long*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP11_cl_contextjmPvPmENS_9allocatorIS7_EES6_E7__cloneEPNS0_6__baseIS6_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP11_cl_contextjmPvPmENS_9allocatorIS7_EES6_E7__cloneEPNS0_6__baseIS6_EE() called");
    return 0;
}

/* Exported Object: MK::CDummyCommand::ms_kRTTI */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK13CDummyCommand8ms_kRTTIE = NULL;

/* Demangled: MK::CDummyCommand::GetMemoryUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK13CDummyCommand13GetMemoryUsedEv(void) {
    ALOGD("_ZNK2MK13CDummyCommand13GetMemoryUsedEv() called");
    return 0;
}

/* Demangled: MK::CCLCreateBuffer::~CCLCreateBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLCreateBufferD0Ev(void) {
    ALOGD("_ZN2MK15CCLCreateBufferD0Ev() called");
    return 0;
}

/* Demangled: MK::CCLBuildProgram::Factory(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLBuildProgram7FactoryERNS_7CStreamE(void) {
    ALOGD("_ZN2MK15CCLBuildProgram7FactoryERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CCLProfileJob::CCLProfileJob(char const*, _cl_event*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK13CCLProfileJobC1EPKcP9_cl_event(void) {
    ALOGD("_ZN2MK13CCLProfileJobC1EPKcP9_cl_event() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, void*, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, void*, int*)>, _cl_mem* (_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, void*, int*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatmmmPvPiENS_9allocatorISC_EESB_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatmmmPvPiENS_9allocatorISC_EESB_E7__cloneEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, void*, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, void*, int*)>, _cl_mem* (_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, void*, int*)>::__clone(std::__1::__function::__base<_cl_mem* (_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, void*, int*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatmmmmmPvPiENS_9allocatorISC_EESB_E7__cloneEPNS0_6__baseISB_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatmmmmmPvPiENS_9allocatorISC_EESB_E7__cloneEPNS0_6__baseISB_EE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_event* (*)(_cl_context*, int*), std::__1::allocator<_cl_event* (*)(_cl_context*, int*)>, _cl_event* (_cl_context*, int*)>::__clone(std::__1::__function::__base<_cl_event* (_cl_context*, int*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFP9_cl_eventP11_cl_contextPiENS_9allocatorIS8_EES7_E7__cloneEPNS0_6__baseIS7_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFP9_cl_eventP11_cl_contextPiENS_9allocatorIS8_EES7_E7__cloneEPNS0_6__baseIS7_EE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, _cl_image_desc const*, void*, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, _cl_image_desc const*, void*, int*)>, _cl_mem* (_cl_context*, unsigned long, _cl_image_format const*, _cl_image_desc const*, void*, int*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatPK14_cl_image_descPvPiENS_9allocatorISF_EESE_EE = NULL;

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*, long>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS8_PNS_11__tree_nodeIS8_SH_EElEERPNS_15__tree_end_nodeISJ_EESK_RKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS8_PNS_11__tree_nodeIS8_SH_EElEERPNS_15__tree_end_nodeISJ_EESK_RKT_() called");
    return 0;
}

/* Demangled: MK::CCLReleaseMemObject::CCLReleaseMemObject() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK19CCLReleaseMemObjectC1Ev(void) {
    ALOGD("_ZN2MK19CCLReleaseMemObjectC1Ev() called");
    return 0;
}

/* Demangled: MK::CCLCreateProgramWithBinary::Log(MK::CJsonLog&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK26CCLCreateProgramWithBinary3LogERNS_8CJsonLogE(void) {
    ALOGD("_ZNK2MK26CCLCreateProgramWithBinary3LogERNS_8CJsonLogE() called");
    return 0;
}

/* Exported Object: vtable for MK::CCLEnqueueMarker */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK16CCLEnqueueMarkerE = NULL;

/* Demangled: MK::CContextGlobal::GetKernelMemObjects(_cl_kernel*, std::__1::vector<_cl_mem*, std::__1::allocator<_cl_mem*> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14CContextGlobal19GetKernelMemObjectsEP10_cl_kernelRNSt3__16vectorIP7_cl_memNS3_9allocatorIS6_EEEE(void) {
    ALOGD("_ZN2MK14CContextGlobal19GetKernelMemObjectsEP10_cl_kernelRNSt3__16vectorIP7_cl_memNS3_9allocatorIS6_EEEE() called");
    return 0;
}

/* Demangled: MKProgram_AttachCLRetainKernel */
extern "C" __attribute__((visibility("default"))) int MKProgram_AttachCLRetainKernel(void) {
    ALOGD("MKProgram_AttachCLRetainKernel() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(unsigned int, _cl_platform_id**, unsigned int*), std::__1::allocator<int (*)(unsigned int, _cl_platform_id**, unsigned int*)>, int (unsigned int, _cl_platform_id**, unsigned int*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFijPP15_cl_platform_idPjENS_9allocatorIS7_EES6_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFijPP15_cl_platform_idPjENS_9allocatorIS7_EES6_E7destroyEv() called");
    return 0;
}

/* Demangled: MK::CInputTensors::Link(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK13CInputTensors4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK13CInputTensors4LinkERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: MK::CMemoryCopy::Link(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CMemoryCopy4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK11CMemoryCopy4LinkERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: MK::CProgram::Run(MKProgramType, MK::CContextLocal*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK8CProgram3RunE13MKProgramTypePNS_13CContextLocalE(void) {
    ALOGD("_ZN2MK8CProgram3RunE13MKProgramTypePNS_13CContextLocalE() called");
    return 0;
}

/* Demangled: MK::CCLCreateImage::Load(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14CCLCreateImage4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK14CCLCreateImage4LoadERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueWriteBuffer::CCLEnqueueWriteBuffer(MK::CCLEnqueueWriteBuffer const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK21CCLEnqueueWriteBufferC2ERKS0_(void) {
    ALOGD("_ZN2MK21CCLEnqueueWriteBufferC2ERKS0_() called");
    return 0;
}

/* Demangled: MK::CCLSVMFree::GetDiskUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK10CCLSVMFree11GetDiskUsedEv(void) {
    ALOGD("_ZNK2MK10CCLSVMFree11GetDiskUsedEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_S7_mmmmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_S7_mmmmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: MK::CDummyCommand::Factory(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK13CDummyCommand7FactoryERNS_7CStreamE(void) {
    ALOGD("_ZN2MK13CDummyCommand7FactoryERNS_7CStreamE() called");
    return 0;
}

/* Demangled: clGetDeviceIDs */
extern "C" __attribute__((visibility("default"))) int clGetDeviceIDs(void) {
    ALOGD("clGetDeviceIDs() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>::__clone(std::__1::__function::__base<int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_S7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEPNS0_6__baseISD_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_S7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEPNS0_6__baseISD_EE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<int (*)(_cl_mem*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_mem*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_mem*, unsigned int, unsigned long, void*, unsigned long*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFiP7_cl_memjmPvPmENS_9allocatorIS7_EES6_EE = NULL;

/* Demangled: CmdL_AttachclCreateImage */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclCreateImage(void) {
    ALOGD("CmdL_AttachclCreateImage() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMarkerWithWaitList::CCLEnqueueMarkerWithWaitList() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK28CCLEnqueueMarkerWithWaitListC2Ev(void) {
    ALOGD("_ZN2MK28CCLEnqueueMarkerWithWaitListC2Ev() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_kernel*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_kernel*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_kernel*, unsigned int, unsigned long, void*, unsigned long*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP10_cl_kerneljmPvPmENS_9allocatorIS7_EES6_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP10_cl_kerneljmPvPmENS_9allocatorIS7_EES6_E7destroyEv() called");
    return 0;
}

/* Exported Object: MK::CMemoryCopy::ms_kRTTI */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK11CMemoryCopy8ms_kRTTIE = NULL;

/* Demangled: CmdL_AttachclEnqueueSVMMemFill */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclEnqueueSVMMemFill(void) {
    ALOGD("CmdL_AttachclEnqueueSVMMemFill() called");
    return 0;
}

/* Demangled: MK::CCLReleaseMemObject::~CCLReleaseMemObject() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK19CCLReleaseMemObjectD0Ev(void) {
    ALOGD("_ZN2MK19CCLReleaseMemObjectD0Ev() called");
    return 0;
}

/* Demangled: CmdL_AttachclEnqueueWriteBuffer */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclEnqueueWriteBuffer(void) {
    ALOGD("CmdL_AttachclEnqueueWriteBuffer() called");
    return 0;
}

/* Demangled: clCreateKernel */
extern "C" __attribute__((visibility("default"))) int clCreateKernel(void) {
    ALOGD("clCreateKernel() called");
    return 0;
}

/* Demangled: MK::CCLCreateProgramWithSource::GetMemoryUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK26CCLCreateProgramWithSource13GetMemoryUsedEv(void) {
    ALOGD("_ZNK2MK26CCLCreateProgramWithSource13GetMemoryUsedEv() called");
    return 0;
}

/* Demangled: MK::CCLSetKernelArg::CCLSetKernelArg() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLSetKernelArgC2Ev(void) {
    ALOGD("_ZN2MK15CCLSetKernelArgC2Ev() called");
    return 0;
}

/* Demangled: MK::CCLSetKernelArg::GetDiskUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK15CCLSetKernelArg11GetDiskUsedEv(void) {
    ALOGD("_ZNK2MK15CCLSetKernelArg11GetDiskUsedEv() called");
    return 0;
}

/* Demangled: MKProgram_AttachStaticData */
extern "C" __attribute__((visibility("default"))) int MKProgram_AttachStaticData(void) {
    ALOGD("MKProgram_AttachStaticData() called");
    return 0;
}

/* Demangled: MK::CCLReleaseMemObject::Record(_cl_mem*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK19CCLReleaseMemObject6RecordEP7_cl_mem(void) {
    ALOGD("_ZN2MK19CCLReleaseMemObject6RecordEP7_cl_mem() called");
    return 0;
}

/* Demangled: MK::CCLReleaseKernel::Save(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLReleaseKernel4SaveERNS_7CStreamE(void) {
    ALOGD("_ZN2MK16CCLReleaseKernel4SaveERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CCLReleaseProgram::Save(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK17CCLReleaseProgram4SaveERNS_7CStreamE(void) {
    ALOGD("_ZN2MK17CCLReleaseProgram4SaveERNS_7CStreamE() called");
    return 0;
}

/* Exported Object: MK::CCLRetainCommandQueue::ms_kRTTI */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK21CCLRetainCommandQueue8ms_kRTTIE = NULL;

/* Demangled: MKStream_Create */
extern "C" __attribute__((visibility("default"))) int MKStream_Create(void) {
    ALOGD("MKStream_Create() called");
    return 0;
}

/* Demangled: clGetPlatformIDs */
extern "C" __attribute__((visibility("default"))) int clGetPlatformIDs(void) {
    ALOGD("clGetPlatformIDs() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<_cl_kernel*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<_cl_kernel*, std::__1::__value_type<_cl_kernel*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<_cl_kernel*>, true>, std::__1::allocator<std::__1::__value_type<_cl_kernel*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<_cl_kernel*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIP10_cl_kernelNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS_19__map_value_compareIS3_SA_NS_4lessIS3_EELb1EEENS7_ISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIP10_cl_kernelNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS_19__map_value_compareIS3_SA_NS_4lessIS3_EELb1EEENS7_ISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMarkerWithWaitList::~CCLEnqueueMarkerWithWaitList() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK28CCLEnqueueMarkerWithWaitListD1Ev(void) {
    ALOGD("_ZN2MK28CCLEnqueueMarkerWithWaitListD1Ev() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMemoryCopy::Log(MK::CJsonLog&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK20CCLEnqueueMemoryCopy3LogERNS_8CJsonLogE(void) {
    ALOGD("_ZNK2MK20CCLEnqueueMemoryCopy3LogERNS_8CJsonLogE() called");
    return 0;
}

/* Demangled: MK::CCLRetainMemObject::RegisterUniqueObject(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK18CCLRetainMemObject20RegisterUniqueObjectERNS_7CStreamE(void) {
    ALOGD("_ZN2MK18CCLRetainMemObject20RegisterUniqueObjectERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MKProgram_AttachCLReleaseProgram */
extern "C" __attribute__((visibility("default"))) int MKProgram_AttachCLReleaseProgram(void) {
    ALOGD("MKProgram_AttachCLReleaseProgram() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_kernel*, unsigned int, unsigned long, void const*), std::__1::allocator<int (*)(_cl_kernel*, unsigned int, unsigned long, void const*)>, int (_cl_kernel*, unsigned int, unsigned long, void const*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP10_cl_kerneljmPKvENS_9allocatorIS7_EES6_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP10_cl_kerneljmPKvENS_9allocatorIS7_EES6_E7__cloneEv() called");
    return 0;
}

/* Demangled: clEnqueueMapBuffer */
extern "C" __attribute__((visibility("default"))) int clEnqueueMapBuffer(void) {
    ALOGD("clEnqueueMapBuffer() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueSVMUnmap::GetMemoryUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK18CCLEnqueueSVMUnmap13GetMemoryUsedEv(void) {
    ALOGD("_ZNK2MK18CCLEnqueueSVMUnmap13GetMemoryUsedEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjmmPKvjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjmmPKvjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7destroyEv() called");
    return 0;
}

/* Demangled: MK::CObject::Factory(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK7CObject7FactoryERNS_7CStreamE(void) {
    ALOGD("_ZN2MK7CObject7FactoryERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CCLSetKernelArg::~CCLSetKernelArg() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLSetKernelArgD1Ev(void) {
    ALOGD("_ZN2MK15CCLSetKernelArgD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_sampler*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_sampler*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_sampler*, unsigned int, unsigned long, void*, unsigned long*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP11_cl_samplerjmPvPmENS_9allocatorIS7_EES6_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP11_cl_samplerjmPvPmENS_9allocatorIS7_EES6_E7__cloneEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, void*, void const*, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, void*, void const*, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, void*, void const*, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::__clone(std::__1::__function::__base<int (_cl_command_queue*, void*, void const*, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuePvPKvmmjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E7__cloneEPNS0_6__baseISC_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP17_cl_command_queuePvPKvmmjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E7__cloneEPNS0_6__baseISC_EE() called");
    return 0;
}

/* Demangled: MK::clCreateSubDevices(_cl_device_id*, long const*, unsigned int, _cl_device_id**, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK18clCreateSubDevicesEP13_cl_device_idPKljPS1_Pj(void) {
    ALOGD("_ZN2MK18clCreateSubDevicesEP13_cl_device_idPKljPS1_Pj() called");
    return 0;
}

/* Demangled: MK::clGetKernelArgInfo(_cl_kernel*, unsigned int, unsigned int, unsigned long, void*, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK18clGetKernelArgInfoEP10_cl_kerneljjmPvPm(void) {
    ALOGD("_ZN2MK18clGetKernelArgInfoEP10_cl_kerneljjmPvPm() called");
    return 0;
}

/* Demangled: MK::CCLCreateProgramWithBinary::GetMemoryUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK26CCLCreateProgramWithBinary13GetMemoryUsedEv(void) {
    ALOGD("_ZNK2MK26CCLCreateProgramWithBinary13GetMemoryUsedEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_sampler* (*)(_cl_context*, unsigned long const*, int*), std::__1::allocator<_cl_sampler* (*)(_cl_context*, unsigned long const*, int*)>, _cl_sampler* (_cl_context*, unsigned long const*, int*)>::__clone(std::__1::__function::__base<_cl_sampler* (_cl_context*, unsigned long const*, int*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFP11_cl_samplerP11_cl_contextPKmPiENS_9allocatorISA_EES9_E7__cloneEPNS0_6__baseIS9_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFP11_cl_samplerP11_cl_contextPKmPiENS_9allocatorISA_EES9_E7__cloneEPNS0_6__baseIS9_EE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_event**)>, int (_cl_command_queue*, _cl_event**)>::operator()(_cl_command_queue*&&, _cl_event**&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuePP9_cl_eventENS_9allocatorIS8_EES7_EclEOS3_OS6_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queuePP9_cl_eventENS_9allocatorIS8_EES7_EclEOS3_OS6_() called");
    return 0;
}

/* Demangled: MK::CCLPrepareMemoryCopy::Load(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK20CCLPrepareMemoryCopy4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK20CCLPrepareMemoryCopy4LoadERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Exported Object: vtable for MK::CCLSetKernelArg */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK15CCLSetKernelArgE = NULL;

/* Demangled: std::__1::__function::__func<void* (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long const*, unsigned long const*, unsigned long*, unsigned long*, unsigned int, _cl_event* const*, _cl_event**, int*), std::__1::allocator<void* (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long const*, unsigned long const*, unsigned long*, unsigned long*, unsigned int, _cl_event* const*, _cl_event**, int*)>, void* (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long const*, unsigned long const*, unsigned long*, unsigned long*, unsigned int, _cl_event* const*, _cl_event**, int*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFPvP17_cl_command_queueP7_cl_memjmPKmS8_PmS9_jPKP9_cl_eventPSB_PiENS_9allocatorISH_EESG_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFPvP17_cl_command_queueP7_cl_memjmPKmS8_PmS9_jPKP9_cl_eventPSB_PiENS_9allocatorISH_EESG_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: MKDebug_SetLevel */
extern "C" __attribute__((visibility("default"))) int MKDebug_SetLevel(void) {
    ALOGD("MKDebug_SetLevel() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueSVMUnmap::Link(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK18CCLEnqueueSVMUnmap4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK18CCLEnqueueSVMUnmap4LinkERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIP9_cl_eventNS_9allocatorIS2_EEE6assignIPKS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIP9_cl_eventNS_9allocatorIS2_EEE6assignIPKS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_(void) {
    ALOGD("_ZNSt3__16vectorIP9_cl_eventNS_9allocatorIS2_EEE6assignIPKS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_() called");
    return 0;
}

/* Demangled: MK::CCLRetainContext::Save(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLRetainContext4SaveERNS_7CStreamE(void) {
    ALOGD("_ZN2MK16CCLRetainContext4SaveERNS_7CStreamE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_program*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_program*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_program*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>::operator()(_cl_program*&&, _cl_device_id*&&, unsigned int&&, unsigned long&&, void*&&, unsigned long*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP11_cl_programP13_cl_device_idjmPvPmENS_9allocatorIS9_EES8_EclEOS3_OS5_OjOmOS6_OS7_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP11_cl_programP13_cl_device_idjmPvPmENS_9allocatorIS9_EES8_EclEOS3_OS5_OjOmOS6_OS7_() called");
    return 0;
}

/* Demangled: MK::CStream::ReadDynamicString(char*&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK7CStream17ReadDynamicStringERPc(void) {
    ALOGD("_ZN2MK7CStream17ReadDynamicStringERPc() called");
    return 0;
}

/* Demangled: MK::CCLRetainKernel::CCLRetainKernel() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLRetainKernelC1Ev(void) {
    ALOGD("_ZN2MK15CCLRetainKernelC1Ev() called");
    return 0;
}

/* Demangled: MK::CCLCreateContext::Log(MK::CJsonLog&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK16CCLCreateContext3LogERNS_8CJsonLogE(void) {
    ALOGD("_ZNK2MK16CCLCreateContext3LogERNS_8CJsonLogE() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueUnmapMemObject::RegisterFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK24CCLEnqueueUnmapMemObject15RegisterFactoryEv(void) {
    ALOGD("_ZN2MK24CCLEnqueueUnmapMemObject15RegisterFactoryEv() called");
    return 0;
}

/* Demangled: MK::CCLFlush::Run(MKProgramType, MK::CContextLocal*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK8CCLFlush3RunE13MKProgramTypePNS_13CContextLocalE(void) {
    ALOGD("_ZN2MK8CCLFlush3RunE13MKProgramTypePNS_13CContextLocalE() called");
    return 0;
}

/* Demangled: MKProgram_AttachCLSetKernelArg */
extern "C" __attribute__((visibility("default"))) int MKProgram_AttachCLSetKernelArg(void) {
    ALOGD("MKProgram_AttachCLSetKernelArg() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_kernel*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_kernel*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_kernel*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>::__clone(std::__1::__function::__base<int (_cl_command_queue*, _cl_kernel*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP10_cl_kerneljPKmS7_S7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEPNS0_6__baseISD_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP10_cl_kerneljPKmS7_S7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEPNS0_6__baseISD_EE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<void* (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**, int*), std::__1::allocator<void* (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**, int*)>, void* (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**, int*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFPvP17_cl_command_queueP7_cl_memjmmmjPKP9_cl_eventPS8_PiENS_9allocatorISE_EESD_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFPvP17_cl_command_queueP7_cl_memjmmmjPKP9_cl_eventPS8_PiENS_9allocatorISE_EESD_E7destroyEv() called");
    return 0;
}

/* Demangled: CmdL_AttachclSetKernelExecInfo */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclSetKernelExecInfo(void) {
    ALOGD("CmdL_AttachclSetKernelExecInfo() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__append(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE8__appendEm(void) {
    ALOGD("_ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE8__appendEm() called");
    return 0;
}

/* Demangled: MK::CCLCreateCommandQueue::Run(MKProgramType, MK::CContextLocal*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK21CCLCreateCommandQueue3RunE13MKProgramTypePNS_13CContextLocalE(void) {
    ALOGD("_ZN2MK21CCLCreateCommandQueue3RunE13MKProgramTypePNS_13CContextLocalE() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueCopyBufferToImage::Record(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK27CCLEnqueueCopyBufferToImage6RecordEP17_cl_command_queueP7_cl_memS4_mPKmS6_jPKP9_cl_eventS8_(void) {
    ALOGD("_ZN2MK27CCLEnqueueCopyBufferToImage6RecordEP17_cl_command_queueP7_cl_memS4_mPKmS6_jPKP9_cl_eventS8_() called");
    return 0;
}

/* Exported Object: MK::CCLCreateProgramWithBinary::ms_kRTTI */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK26CCLCreateProgramWithBinary8ms_kRTTIE = NULL;

/* Demangled: MK::CCLReleaseKernel::CCLReleaseKernel(MK::CCLReleaseKernel const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLReleaseKernelC1ERKS0_(void) {
    ALOGD("_ZN2MK16CCLReleaseKernelC1ERKS0_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queuejmPvPmENS_9allocatorIS7_EES6_EE = NULL;

/* Exported Object: vtable for std::__1::__function::__func<int (*)(), std::__1::allocator<int (*)()>, int ()> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFivENS_9allocatorIS3_EES2_EE = NULL;

/* Demangled: std::__1::__function::__func<int (*)(_cl_context*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_context*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_context*, unsigned int, unsigned long, void*, unsigned long*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP11_cl_contextjmPvPmENS_9allocatorIS7_EES6_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP11_cl_contextjmPvPmENS_9allocatorIS7_EES6_E7__cloneEv() called");
    return 0;
}

/* Demangled: MK::CCLCreateBuffer::RegisterUniqueObject(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLCreateBuffer20RegisterUniqueObjectERNS_7CStreamE(void) {
    ALOGD("_ZN2MK15CCLCreateBuffer20RegisterUniqueObjectERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CCLCreateContext::Factory(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLCreateContext7FactoryERNS_7CStreamE(void) {
    ALOGD("_ZN2MK16CCLCreateContext7FactoryERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CCLRetainKernel::~CCLRetainKernel() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLRetainKernelD0Ev(void) {
    ALOGD("_ZN2MK15CCLRetainKernelD0Ev() called");
    return 0;
}

/* Demangled: handleEnqueueNDRangeKernelNULL(_cl_kernel*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z30handleEnqueueNDRangeKernelNULLP10_cl_kernelj(void) {
    ALOGD("_Z30handleEnqueueNDRangeKernelNULLP10_cl_kernelj() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<int (*)(_cl_platform_id*), std::__1::allocator<int (*)(_cl_platform_id*)>, int (_cl_platform_id*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFiP15_cl_platform_idENS_9allocatorIS5_EES4_EE = NULL;

/* Exported Object: vtable for MK::CCLEnqueueSVMMap */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK16CCLEnqueueSVMMapE = NULL;

/* Demangled: MK::CProgram::Save(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK8CProgram4SaveERNS_7CStreamE(void) {
    ALOGD("_ZN2MK8CProgram4SaveERNS_7CStreamE() called");
    return 0;
}

/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::__append(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE8__appendEm(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE8__appendEm() called");
    return 0;
}

/* Demangled: MK::CCLWaitForEvents::CopyConstructTo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK16CCLWaitForEvents15CopyConstructToEv(void) {
    ALOGD("_ZNK2MK16CCLWaitForEvents15CopyConstructToEv() called");
    return 0;
}

/* Demangled: MK::CObject::Log(MK::CJsonLog&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK7CObject3LogERNS_8CJsonLogE(void) {
    ALOGD("_ZNK2MK7CObject3LogERNS_8CJsonLogE() called");
    return 0;
}

/* Demangled: MK::CCLReleaseMemObject::Run(MKProgramType, MK::CContextLocal*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK19CCLReleaseMemObject3RunE13MKProgramTypePNS_13CContextLocalE(void) {
    ALOGD("_ZN2MK19CCLReleaseMemObject3RunE13MKProgramTypePNS_13CContextLocalE() called");
    return 0;
}

/* Demangled: clSaveKernelName(_cl_kernel*, char const*) */
extern "C" __attribute__((visibility("default"))) int _Z16clSaveKernelNameP10_cl_kernelPKc(void) {
    ALOGD("_Z16clSaveKernelNameP10_cl_kernelPKc() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::operator()(_cl_command_queue*&&, _cl_mem*&&, _cl_mem*&&, unsigned long const*&&, unsigned long const*&&, unsigned long const*&&, unsigned long&&, unsigned long&&, unsigned long&&, unsigned long&&, unsigned int&&, _cl_event* const*&&, _cl_event**&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_S7_mmmmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EclEOS3_OS5_SJ_OS7_SK_SK_OmSL_SL_SL_OjOSB_OSC_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_S7_mmmmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EclEOS3_OS5_SJ_OS7_SK_SK_OmSL_SL_SL_OjOSB_OSC_() called");
    return 0;
}

/* Demangled: MKConfig_StartProfileCL */
extern "C" __attribute__((visibility("default"))) int MKConfig_StartProfileCL(void) {
    ALOGD("MKConfig_StartProfileCL() called");
    return 0;
}

/* Demangled: CmdL_AttachclCreateSamplerWithProperties */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclCreateSamplerWithProperties(void) {
    ALOGD("CmdL_AttachclCreateSamplerWithProperties() called");
    return 0;
}

/* Demangled: MK::CCLCommand::~CCLCommand() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK10CCLCommandD2Ev(void) {
    ALOGD("_ZN2MK10CCLCommandD2Ev() called");
    return 0;
}

/* Demangled: MK::CCLBuildProgram::Save(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLBuildProgram4SaveERNS_7CStreamE(void) {
    ALOGD("_ZN2MK15CCLBuildProgram4SaveERNS_7CStreamE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_mem*, unsigned long, unsigned int, void const*, int*), std::__1::allocator<_cl_mem* (*)(_cl_mem*, unsigned long, unsigned int, void const*, int*)>, _cl_mem* (_cl_mem*, unsigned long, unsigned int, void const*, int*)>::operator()(_cl_mem*&&, unsigned long&&, unsigned int&&, void const*&&, int*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFP7_cl_memS3_mjPKvPiENS_9allocatorIS8_EES7_EclEOS3_OmOjOS5_OS6_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFP7_cl_memS3_mjPKvPiENS_9allocatorIS8_EES7_EclEOS3_OmOjOS5_OS6_() called");
    return 0;
}

/* Demangled: MK::CProgram::Load(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK8CProgram4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK8CProgram4LoadERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: MK::clEnqueueSVMMemcpy(_cl_command_queue*, unsigned int, void*, void const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK18clEnqueueSVMMemcpyEP17_cl_command_queuejPvPKvmjPKP9_cl_eventPS6_(void) {
    ALOGD("_ZN2MK18clEnqueueSVMMemcpyEP17_cl_command_queuejPvPKvmjPKP9_cl_eventPS6_() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueWriteBuffer::Load(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK21CCLEnqueueWriteBuffer4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK21CCLEnqueueWriteBuffer4LoadERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueWriteBuffer::Factory(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK21CCLEnqueueWriteBuffer7FactoryERNS_7CStreamE(void) {
    ALOGD("_ZN2MK21CCLEnqueueWriteBuffer7FactoryERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueSVMUnmap::Factory(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK18CCLEnqueueSVMUnmap7FactoryERNS_7CStreamE(void) {
    ALOGD("_ZN2MK18CCLEnqueueSVMUnmap7FactoryERNS_7CStreamE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_event* (*)(_cl_context*, int*), std::__1::allocator<_cl_event* (*)(_cl_context*, int*)>, _cl_event* (_cl_context*, int*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFP9_cl_eventP11_cl_contextPiENS_9allocatorIS8_EES7_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFP9_cl_eventP11_cl_contextPiENS_9allocatorIS8_EES7_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: MK::CVersion::CVersion(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK8CVersionC2Eii(void) {
    ALOGD("_ZN2MK8CVersionC2Eii() called");
    return 0;
}

/* Demangled: CmdL_SaveToBuffer */
extern "C" __attribute__((visibility("default"))) int CmdL_SaveToBuffer(void) {
    ALOGD("CmdL_SaveToBuffer() called");
    return 0;
}

/* Exported Object: MK::CCLEnqueueReadBuffer::ms_kRTTI */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK20CCLEnqueueReadBuffer8ms_kRTTIE = NULL;

/* Demangled: MKProgram_AttachCLImportMemory */
extern "C" __attribute__((visibility("default"))) int MKProgram_AttachCLImportMemory(void) {
    ALOGD("MKProgram_AttachCLImportMemory() called");
    return 0;
}

/* Demangled: MK::CStaticData::Log(MK::CJsonLog&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK11CStaticData3LogERNS_8CJsonLogE(void) {
    ALOGD("_ZNK2MK11CStaticData3LogERNS_8CJsonLogE() called");
    return 0;
}

/* Demangled: MK::CLog::Save(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK4CLog4SaveEPKc(void) {
    ALOGD("_ZN2MK4CLog4SaveEPKc() called");
    return 0;
}

/* Demangled: MK::CCLCreateKernelsInProgram::Run(MKProgramType, MK::CContextLocal*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK25CCLCreateKernelsInProgram3RunE13MKProgramTypePNS_13CContextLocalE(void) {
    ALOGD("_ZN2MK25CCLCreateKernelsInProgram3RunE13MKProgramTypePNS_13CContextLocalE() called");
    return 0;
}

/* Demangled: MK::CCLFinish::~CCLFinish() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK9CCLFinishD2Ev(void) {
    ALOGD("_ZN2MK9CCLFinishD2Ev() called");
    return 0;
}

/* Exported Object: MK::CCLReleaseKernel::ms_kRTTI */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK16CCLReleaseKernel8ms_kRTTIE = NULL;

/* Demangled: MK::CCLSVMAlloc::GetMemoryUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK11CCLSVMAlloc13GetMemoryUsedEv(void) {
    ALOGD("_ZNK2MK11CCLSVMAlloc13GetMemoryUsedEv() called");
    return 0;
}

/* Demangled: MK::CInputTensors::GetDiskUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK13CInputTensors11GetDiskUsedEv(void) {
    ALOGD("_ZNK2MK13CInputTensors11GetDiskUsedEv() called");
    return 0;
}

/* Demangled: CmdL_SetHostPtr */
extern "C" __attribute__((visibility("default"))) int CmdL_SetHostPtr(void) {
    ALOGD("CmdL_SetHostPtr() called");
    return 0;
}

/* Demangled: CmdL_AttachclCreatePipe */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclCreatePipe(void) {
    ALOGD("CmdL_AttachclCreatePipe() called");
    return 0;
}

/* Demangled: MK::clLinkProgram(_cl_context*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, void (*)(_cl_program*, void*), void*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK13clLinkProgramEP11_cl_contextjPKP13_cl_device_idPKcjPKP11_cl_programPFvS9_PvESC_Pi(void) {
    ALOGD("_ZN2MK13clLinkProgramEP11_cl_contextjPKP13_cl_device_idPKcjPKP11_cl_programPFvS9_PvESC_Pi() called");
    return 0;
}

/* Demangled: MK::CCLCreateKernelsInProgram::GetDiskUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK25CCLCreateKernelsInProgram11GetDiskUsedEv(void) {
    ALOGD("_ZNK2MK25CCLCreateKernelsInProgram11GetDiskUsedEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<char const*, std::__1::allocator<char const*> >::__push_back_slow_path<char const*>(char const*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPKcNS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPKcNS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_context* (*)(long const*, unsigned int, _cl_device_id* const*, void (*)(char const*, void const*, unsigned long, void*), void*, int*), std::__1::allocator<_cl_context* (*)(long const*, unsigned int, _cl_device_id* const*, void (*)(char const*, void const*, unsigned long, void*), void*, int*)>, _cl_context* (long const*, unsigned int, _cl_device_id* const*, void (*)(char const*, void const*, unsigned long, void*), void*, int*)>::operator()(long const*&&, unsigned int&&, _cl_device_id* const*&&, void (*&&)(char const*, void const*, unsigned long, void*), void*&&, int*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFP11_cl_contextPKljPKP13_cl_device_idPFvPKcPKvmPvESE_PiENS_9allocatorISJ_EESI_EclEOS5_OjOS9_OSG_OSE_OSH_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFP11_cl_contextPKljPKP13_cl_device_idPFvPKcPKvmPvESE_PiENS_9allocatorISJ_EESI_EclEOS5_OjOS9_OSG_OSE_OSH_() called");
    return 0;
}

/* Exported Object: vtable for MK::CLog */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK4CLogE = NULL;

/* Exported Object: vtable for MK::CCLEnqueueNDRangeKernel */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK23CCLEnqueueNDRangeKernelE = NULL;

/* Demangled: MK::CCLSVMAlloc::RegisterUniqueObject(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CCLSVMAlloc20RegisterUniqueObjectERNS_7CStreamE(void) {
    ALOGD("_ZN2MK11CCLSVMAlloc20RegisterUniqueObjectERNS_7CStreamE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_mmPvjPKP9_cl_eventPSA_ENS_9allocatorISF_EESE_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_mmPvjPKP9_cl_eventPSA_ENS_9allocatorISF_EESE_E7destroyEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, void*, unsigned int, _cl_event* const*, _cl_event**)>::operator()(_cl_command_queue*&&, void*&&, unsigned int&&, _cl_event* const*&&, _cl_event**&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuePvjPKP9_cl_eventPS6_ENS_9allocatorISB_EESA_EclEOS3_OS4_OjOS8_OS9_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queuePvjPKP9_cl_eventPS6_ENS_9allocatorISB_EESA_EclEOS3_OS4_OjOS8_OS9_() called");
    return 0;
}

/* Demangled: MK::COutputTensors::Save(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14COutputTensors4SaveERNS_7CStreamE(void) {
    ALOGD("_ZN2MK14COutputTensors4SaveERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CRegisterFactory::CRegisterFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CRegisterFactoryC1Ev(void) {
    ALOGD("_ZN2MK16CRegisterFactoryC1Ev() called");
    return 0;
}

/* Demangled: CmdL_Reset */
extern "C" __attribute__((visibility("default"))) int CmdL_Reset(void) {
    ALOGD("CmdL_Reset() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_mem*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_mem*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_mem*, unsigned int, unsigned long, void*, unsigned long*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP7_cl_memjmPvPmENS_9allocatorIS7_EES6_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP7_cl_memjmPvPmENS_9allocatorIS7_EES6_E7destroyEv() called");
    return 0;
}

/* Demangled: MK::CCLCreateCommandQueue::CopyConstructTo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK21CCLCreateCommandQueue15CopyConstructToEv(void) {
    ALOGD("_ZNK2MK21CCLCreateCommandQueue15CopyConstructToEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_program*, unsigned int, _cl_kernel**, unsigned int*), std::__1::allocator<int (*)(_cl_program*, unsigned int, _cl_kernel**, unsigned int*)>, int (_cl_program*, unsigned int, _cl_kernel**, unsigned int*)>::operator()(_cl_program*&&, unsigned int&&, _cl_kernel**&&, unsigned int*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP11_cl_programjPP10_cl_kernelPjENS_9allocatorIS9_EES8_EclEOS3_OjOS6_OS7_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP11_cl_programjPP10_cl_kernelPjENS_9allocatorIS9_EES8_EclEOS3_OjOS6_OS7_() called");
    return 0;
}

/* Demangled: clEnqueueBarrier */
extern "C" __attribute__((visibility("default"))) int clEnqueueBarrier(void) {
    ALOGD("clEnqueueBarrier() called");
    return 0;
}

/* Demangled: MK::CCLCreateContext::Record(long const*, unsigned int, _cl_device_id* const*, _cl_context*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLCreateContext6RecordEPKljPKP13_cl_device_idP11_cl_context(void) {
    ALOGD("_ZN2MK16CCLCreateContext6RecordEPKljPKP13_cl_device_idP11_cl_context() called");
    return 0;
}

/* Demangled: MK::CCLReleaseCommandQueue::Record(_cl_command_queue*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK22CCLReleaseCommandQueue6RecordEP17_cl_command_queue(void) {
    ALOGD("_ZN2MK22CCLReleaseCommandQueue6RecordEP17_cl_command_queue() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueWriteBuffer::CopyConstructTo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK21CCLEnqueueWriteBuffer15CopyConstructToEv(void) {
    ALOGD("_ZNK2MK21CCLEnqueueWriteBuffer15CopyConstructToEv() called");
    return 0;
}

/* Demangled: MK::CCLReleaseKernel::GetMemoryUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK16CCLReleaseKernel13GetMemoryUsedEv(void) {
    ALOGD("_ZNK2MK16CCLReleaseKernel13GetMemoryUsedEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_device_id*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>::__clone(std::__1::__function::__base<int (_cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP13_cl_device_idjmPvPmENS_9allocatorIS7_EES6_E7__cloneEPNS0_6__baseIS6_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP13_cl_device_idjmPvPmENS_9allocatorIS7_EES6_E7__cloneEPNS0_6__baseIS6_EE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(unsigned int, _cl_event* const*), std::__1::allocator<int (*)(unsigned int, _cl_event* const*)>, int (unsigned int, _cl_event* const*)>::__clone(std::__1::__function::__base<int (unsigned int, _cl_event* const*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFijPKP9_cl_eventENS_9allocatorIS7_EES6_E7__cloneEPNS0_6__baseIS6_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFijPKP9_cl_eventENS_9allocatorIS7_EES6_E7__cloneEPNS0_6__baseIS6_EE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_kernel*), std::__1::allocator<int (*)(_cl_kernel*)>, int (_cl_kernel*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP10_cl_kernelENS_9allocatorIS5_EES4_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP10_cl_kernelENS_9allocatorIS5_EES4_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: MKProgram_Run */
extern "C" __attribute__((visibility("default"))) int MKProgram_Run(void) {
    ALOGD("MKProgram_Run() called");
    return 0;
}

/* Demangled: clEnqueueFillImage */
extern "C" __attribute__((visibility("default"))) int clEnqueueFillImage(void) {
    ALOGD("clEnqueueFillImage() called");
    return 0;
}

/* Exported Object: vtable for MK::CCLEnqueueMarkerWithWaitList */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK28CCLEnqueueMarkerWithWaitListE = NULL;

/* Demangled: MK::CCLProfileJob::CCLProfileJob(char const*, _cl_event*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK13CCLProfileJobC2EPKcP9_cl_event(void) {
    ALOGD("_ZN2MK13CCLProfileJobC2EPKcP9_cl_event() called");
    return 0;
}

/* Demangled: CmdL_LoadByBuffer */
extern "C" __attribute__((visibility("default"))) int CmdL_LoadByBuffer(void) {
    ALOGD("CmdL_LoadByBuffer() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIhNS_9allocatorIhEEE6assignIPKhEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIhNS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIhNS_9allocatorIhEEE6assignIPKhEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIhNS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_(void) {
    ALOGD("_ZNSt3__16vectorIhNS_9allocatorIhEEE6assignIPKhEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIhNS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIP9_cl_eventNS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIP9_cl_eventNS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_(void) {
    ALOGD("_ZNSt3__16vectorIP9_cl_eventNS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_() called");
    return 0;
}

/* Exported Object: vtable for MK::CCLEnqueueMapBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK19CCLEnqueueMapBufferE = NULL;

/* Demangled: MK::CCLRetainKernel::Log(MK::CJsonLog&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK15CCLRetainKernel3LogERNS_8CJsonLogE(void) {
    ALOGD("_ZNK2MK15CCLRetainKernel3LogERNS_8CJsonLogE() called");
    return 0;
}

/* Demangled: MK::CCLRetainEvent::Run(MKProgramType, MK::CContextLocal*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14CCLRetainEvent3RunE13MKProgramTypePNS_13CContextLocalE(void) {
    ALOGD("_ZN2MK14CCLRetainEvent3RunE13MKProgramTypePNS_13CContextLocalE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_program*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, char const**, void (*)(_cl_program*, void*), void*), std::__1::allocator<int (*)(_cl_program*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, char const**, void (*)(_cl_program*, void*), void*)>, int (_cl_program*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, char const**, void (*)(_cl_program*, void*), void*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP11_cl_programjPKP13_cl_device_idPKcjPKS3_PS9_PFvS3_PvESD_ENS_9allocatorISH_EESG_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP11_cl_programjPKP13_cl_device_idPKcjPKS3_PS9_PFvS3_PvESD_ENS_9allocatorISH_EESG_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_device_id*), std::__1::allocator<int (*)(_cl_device_id*)>, int (_cl_device_id*)>::operator()(_cl_device_id*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP13_cl_device_idENS_9allocatorIS5_EES4_EclEOS3_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP13_cl_device_idENS_9allocatorIS5_EES4_EclEOS3_() called");
    return 0;
}

/* Demangled: MK::CBool::CopyConstructTo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK5CBool15CopyConstructToEv(void) {
    ALOGD("_ZNK2MK5CBool15CopyConstructToEv() called");
    return 0;
}

/* Demangled: MK::CVersion::operator!=(MK::CVersion const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK8CVersionneERKS0_(void) {
    ALOGD("_ZNK2MK8CVersionneERKS0_() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMarkerWithWaitList::CCLEnqueueMarkerWithWaitList() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK28CCLEnqueueMarkerWithWaitListC1Ev(void) {
    ALOGD("_ZN2MK28CCLEnqueueMarkerWithWaitListC1Ev() called");
    return 0;
}

/* Demangled: MK::CCLReleaseCommandQueue::Link(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK22CCLReleaseCommandQueue4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK22CCLReleaseCommandQueue4LinkERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: MK::CCLWaitForEvents::RegisterFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLWaitForEvents15RegisterFactoryEv(void) {
    ALOGD("_ZN2MK16CCLWaitForEvents15RegisterFactoryEv() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMarker::RegisterFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLEnqueueMarker15RegisterFactoryEv(void) {
    ALOGD("_ZN2MK16CCLEnqueueMarker15RegisterFactoryEv() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMarker::GetDiskUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK16CCLEnqueueMarker11GetDiskUsedEv(void) {
    ALOGD("_ZNK2MK16CCLEnqueueMarker11GetDiskUsedEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_command_queue* (*)(_cl_context*, _cl_device_id*, unsigned long, int*), std::__1::allocator<_cl_command_queue* (*)(_cl_context*, _cl_device_id*, unsigned long, int*)>, _cl_command_queue* (_cl_context*, _cl_device_id*, unsigned long, int*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFP17_cl_command_queueP11_cl_contextP13_cl_device_idmPiENS_9allocatorISA_EES9_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFP17_cl_command_queueP11_cl_contextP13_cl_device_idmPiENS_9allocatorISA_EES9_E7destroyEv() called");
    return 0;
}

/* Demangled: MK::CCLSetKernelArg::CCLSetKernelArg() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLSetKernelArgC1Ev(void) {
    ALOGD("_ZN2MK15CCLSetKernelArgC1Ev() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_program*), std::__1::allocator<int (*)(_cl_program*)>, int (_cl_program*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP11_cl_programENS_9allocatorIS5_EES4_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP11_cl_programENS_9allocatorIS5_EES4_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIlNS_9allocatorIlEEE6assignIPKlEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIlNS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIlNS_9allocatorIlEEE6assignIPKlEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIlNS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_(void) {
    ALOGD("_ZNSt3__16vectorIlNS_9allocatorIlEEE6assignIPKlEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIlNS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueCopyBufferToImage::Run(MKProgramType, MK::CContextLocal*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK27CCLEnqueueCopyBufferToImage3RunE13MKProgramTypePNS_13CContextLocalE(void) {
    ALOGD("_ZN2MK27CCLEnqueueCopyBufferToImage3RunE13MKProgramTypePNS_13CContextLocalE() called");
    return 0;
}

/* Demangled: MK::CCLWaitForEvents::Load(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLWaitForEvents4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK16CCLWaitForEvents4LoadERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: MK::CBool::Link(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK5CBool4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK5CBool4LinkERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: MK::clEnqueueWaitForEvents(_cl_command_queue*, unsigned int, _cl_event* const*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK22clEnqueueWaitForEventsEP17_cl_command_queuejPKP9_cl_event(void) {
    ALOGD("_ZN2MK22clEnqueueWaitForEventsEP17_cl_command_queuejPKP9_cl_event() called");
    return 0;
}

/* Demangled: MK::CCLCreateProgramWithBinary::CCLCreateProgramWithBinary(MK::CCLCreateProgramWithBinary const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK26CCLCreateProgramWithBinaryC2ERKS0_(void) {
    ALOGD("_ZN2MK26CCLCreateProgramWithBinaryC2ERKS0_() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMarkerWithWaitList::~CCLEnqueueMarkerWithWaitList() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK28CCLEnqueueMarkerWithWaitListD0Ev(void) {
    ALOGD("_ZN2MK28CCLEnqueueMarkerWithWaitListD0Ev() called");
    return 0;
}

/* Exported Object: vtable for MK::CCLReleaseProgram */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK17CCLReleaseProgramE = NULL;

/* Demangled: MK::CCLCreateContext::Save(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLCreateContext4SaveERNS_7CStreamE(void) {
    ALOGD("_ZN2MK16CCLCreateContext4SaveERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CCLRetainCommandQueue::Link(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK21CCLRetainCommandQueue4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK21CCLRetainCommandQueue4LinkERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: MK::clEnqueueMapBuffer(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK18clEnqueueMapBufferEP17_cl_command_queueP7_cl_memjmmmjPKP9_cl_eventPS5_Pi(void) {
    ALOGD("_ZN2MK18clEnqueueMapBufferEP17_cl_command_queueP7_cl_memjmmmjPKP9_cl_eventPS5_Pi() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueUnmapMemObject::~CCLEnqueueUnmapMemObject() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK24CCLEnqueueUnmapMemObjectD2Ev(void) {
    ALOGD("_ZN2MK24CCLEnqueueUnmapMemObjectD2Ev() called");
    return 0;
}

/* Demangled: MK::CCLReleaseProgram::Factory(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK17CCLReleaseProgram7FactoryERNS_7CStreamE(void) {
    ALOGD("_ZN2MK17CCLReleaseProgram7FactoryERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CCLSetKernelArg::~CCLSetKernelArg() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLSetKernelArgD0Ev(void) {
    ALOGD("_ZN2MK15CCLSetKernelArgD0Ev() called");
    return 0;
}

/* Demangled: MK::CCLSVMAlloc::Save(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CCLSVMAlloc4SaveERNS_7CStreamE(void) {
    ALOGD("_ZN2MK11CCLSVMAlloc4SaveERNS_7CStreamE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_platform_id*, unsigned long, unsigned int, _cl_device_id**, unsigned int*), std::__1::allocator<int (*)(_cl_platform_id*, unsigned long, unsigned int, _cl_device_id**, unsigned int*)>, int (_cl_platform_id*, unsigned long, unsigned int, _cl_device_id**, unsigned int*)>::__clone(std::__1::__function::__base<int (_cl_platform_id*, unsigned long, unsigned int, _cl_device_id**, unsigned int*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP15_cl_platform_idmjPP13_cl_device_idPjENS_9allocatorIS9_EES8_E7__cloneEPNS0_6__baseIS8_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP15_cl_platform_idmjPP13_cl_device_idPjENS_9allocatorIS9_EES8_E7__cloneEPNS0_6__baseIS8_EE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjmmPKvjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EE = NULL;

/* Demangled: MK::clEnqueueBarrier(_cl_command_queue*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16clEnqueueBarrierEP17_cl_command_queue(void) {
    ALOGD("_ZN2MK16clEnqueueBarrierEP17_cl_command_queue() called");
    return 0;
}

/* Demangled: MK::CCLSVMAlloc::Link(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CCLSVMAlloc4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK11CCLSVMAlloc4LinkERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_platform_id*), std::__1::allocator<int (*)(_cl_platform_id*)>, int (_cl_platform_id*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP15_cl_platform_idENS_9allocatorIS5_EES4_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP15_cl_platform_idENS_9allocatorIS5_EES4_E7__cloneEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_platform_id*, unsigned long, unsigned int, _cl_device_id**, unsigned int*), std::__1::allocator<int (*)(_cl_platform_id*, unsigned long, unsigned int, _cl_device_id**, unsigned int*)>, int (_cl_platform_id*, unsigned long, unsigned int, _cl_device_id**, unsigned int*)>::operator()(_cl_platform_id*&&, unsigned long&&, unsigned int&&, _cl_device_id**&&, unsigned int*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP15_cl_platform_idmjPP13_cl_device_idPjENS_9allocatorIS9_EES8_EclEOS3_OmOjOS6_OS7_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP15_cl_platform_idmjPP13_cl_device_idPjENS_9allocatorIS9_EES8_EclEOS3_OmOjOS6_OS7_() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*), std::__1::allocator<int (*)(_cl_command_queue*)>, int (_cl_command_queue*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueENS_9allocatorIS5_EES4_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queueENS_9allocatorIS5_EES4_E7destroyEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(), std::__1::allocator<int (*)()>, int ()>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFivENS_9allocatorIS3_EES2_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFivENS_9allocatorIS3_EES2_E7destroyEv() called");
    return 0;
}

/* Demangled: MKStream_SaveToFile */
extern "C" __attribute__((visibility("default"))) int MKStream_SaveToFile(void) {
    ALOGD("MKStream_SaveToFile() called");
    return 0;
}

/* Demangled: CmdL_AttachclRetainProgram */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclRetainProgram(void) {
    ALOGD("CmdL_AttachclRetainProgram() called");
    return 0;
}

/* Demangled: MK::CCLRetainProgram::Log(MK::CJsonLog&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK16CCLRetainProgram3LogERNS_8CJsonLogE(void) {
    ALOGD("_ZNK2MK16CCLRetainProgram3LogERNS_8CJsonLogE() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueSVMMap::GetDiskUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK16CCLEnqueueSVMMap11GetDiskUsedEv(void) {
    ALOGD("_ZNK2MK16CCLEnqueueSVMMap11GetDiskUsedEv() called");
    return 0;
}

/* Demangled: MK::CCLProfileJob::~CCLProfileJob() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK13CCLProfileJobD2Ev(void) {
    ALOGD("_ZN2MK13CCLProfileJobD2Ev() called");
    return 0;
}

/* Demangled: MK::clWaitForEvents(unsigned int, _cl_event* const*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15clWaitForEventsEjPKP9_cl_event(void) {
    ALOGD("_ZN2MK15clWaitForEventsEjPKP9_cl_event() called");
    return 0;
}

/* Demangled: MK::CDynamicData::Run(MKProgramType, MK::CContextLocal*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK12CDynamicData3RunE13MKProgramTypePNS_13CContextLocalE(void) {
    ALOGD("_ZN2MK12CDynamicData3RunE13MKProgramTypePNS_13CContextLocalE() called");
    return 0;
}

/* Demangled: MK::CStaticData::Save(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CStaticData4SaveERNS_7CStreamE(void) {
    ALOGD("_ZN2MK11CStaticData4SaveERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MKStream_GetObjectCount */
extern "C" __attribute__((visibility("default"))) int MKStream_GetObjectCount(void) {
    ALOGD("MKStream_GetObjectCount() called");
    return 0;
}

/* Exported Object: MK::COutputTensors::ms_kRTTI */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK14COutputTensors8ms_kRTTIE = NULL;

/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, unsigned long, void*, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, unsigned long, void*, int*)>, _cl_mem* (_cl_context*, unsigned long, unsigned long, void*, int*)>::operator()(_cl_context*&&, unsigned long&&, unsigned long&&, void*&&, int*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmmPvPiENS_9allocatorIS9_EES8_EclEOS5_OmSE_OS6_OS7_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmmPvPiENS_9allocatorIS9_EES8_EclEOS5_OmSE_OS6_OS7_() called");
    return 0;
}

/* Demangled: MK::CDummyCommand::Run(MKProgramType, MK::CContextLocal*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK13CDummyCommand3RunE13MKProgramTypePNS_13CContextLocalE(void) {
    ALOGD("_ZN2MK13CDummyCommand3RunE13MKProgramTypePNS_13CContextLocalE() called");
    return 0;
}

/* Demangled: MK::CCLCreateCommandQueue::Load(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK21CCLCreateCommandQueue4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK21CCLCreateCommandQueue4LoadERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>::__clone(std::__1::__function::__base<int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_mPKmS7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEPNS0_6__baseISD_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_mPKmS7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEPNS0_6__baseISD_EE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<void (*)(_cl_context*, void*), std::__1::allocator<void (*)(_cl_context*, void*)>, void (_cl_context*, void*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFvP11_cl_contextPvENS_9allocatorIS6_EES5_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFvP11_cl_contextPvENS_9allocatorIS6_EES5_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: MK::CDummyCommand::CDummyCommand(MK::CDummyCommand const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK13CDummyCommandC1ERKS0_(void) {
    ALOGD("_ZN2MK13CDummyCommandC1ERKS0_() called");
    return 0;
}

/* Demangled: MK::CProgram::RegisterUniqueObject(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK8CProgram20RegisterUniqueObjectERNS_7CStreamE(void) {
    ALOGD("_ZN2MK8CProgram20RegisterUniqueObjectERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CCLCreateContext::Load(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLCreateContext4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK16CCLCreateContext4LoadERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMemoryCopy::Factory(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK20CCLEnqueueMemoryCopy7FactoryERNS_7CStreamE(void) {
    ALOGD("_ZN2MK20CCLEnqueueMemoryCopy7FactoryERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CCLReleaseEvent::GetDiskUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK15CCLReleaseEvent11GetDiskUsedEv(void) {
    ALOGD("_ZNK2MK15CCLReleaseEvent11GetDiskUsedEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned long, unsigned int, unsigned long*), std::__1::allocator<int (*)(_cl_command_queue*, unsigned long, unsigned int, unsigned long*)>, int (_cl_command_queue*, unsigned long, unsigned int, unsigned long*)>::__clone(std::__1::__function::__base<int (_cl_command_queue*, unsigned long, unsigned int, unsigned long*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuemjPmENS_9allocatorIS6_EES5_E7__cloneEPNS0_6__baseIS5_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP17_cl_command_queuemjPmENS_9allocatorIS6_EES5_E7__cloneEPNS0_6__baseIS5_EE() called");
    return 0;
}

/* Demangled: MK::CStaticData::CStaticData(MK::CStaticData const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CStaticDataC1ERKS0_(void) {
    ALOGD("_ZN2MK11CStaticDataC1ERKS0_() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMarker::~CCLEnqueueMarker() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLEnqueueMarkerD2Ev(void) {
    ALOGD("_ZN2MK16CCLEnqueueMarkerD2Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::pair<_cl_mem*, MK::CPointer<MK::CStaticData> >, std::__1::allocator<std::__1::pair<_cl_mem*, MK::CPointer<MK::CStaticData> > > >::__push_back_slow_path<std::__1::pair<_cl_mem*, MK::CPointer<MK::CStaticData> > >(std::__1::pair<_cl_mem*, MK::CPointer<MK::CStaticData> >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_4pairIP7_cl_memN2MK8CPointerINS4_11CStaticDataEEEEENS_9allocatorIS8_EEE21__push_back_slow_pathIS8_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_4pairIP7_cl_memN2MK8CPointerINS4_11CStaticDataEEEEENS_9allocatorIS8_EEE21__push_back_slow_pathIS8_EEvOT_() called");
    return 0;
}

/* Demangled: MK::CContextGlobal::GetKernelName(_cl_kernel*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14CContextGlobal13GetKernelNameEP10_cl_kernel(void) {
    ALOGD("_ZN2MK14CContextGlobal13GetKernelNameEP10_cl_kernel() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, char const*, int*), std::__1::allocator<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, char const*, int*)>, _cl_program* (_cl_context*, unsigned int, _cl_device_id* const*, char const*, int*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKcPiENS_9allocatorISE_EESD_EE = NULL;

/* Demangled: CmdL_TreeNodeDumpJsonFile */
extern "C" __attribute__((visibility("default"))) int CmdL_TreeNodeDumpJsonFile(void) {
    ALOGD("CmdL_TreeNodeDumpJsonFile() called");
    return 0;
}

/* Exported Object: MK::CCLCommand::ms_kRTTI */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK10CCLCommand8ms_kRTTIE = NULL;

/* Demangled: MK::CCLCommand::CCLCommand() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK10CCLCommandC2Ev(void) {
    ALOGD("_ZN2MK10CCLCommandC2Ev() called");
    return 0;
}

/* Demangled: MK::CCLCreateProgramWithBinary::Load(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK26CCLCreateProgramWithBinary4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK26CCLCreateProgramWithBinary4LoadERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueSVMUnmap::GetDiskUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK18CCLEnqueueSVMUnmap11GetDiskUsedEv(void) {
    ALOGD("_ZNK2MK18CCLEnqueueSVMUnmap11GetDiskUsedEv() called");
    return 0;
}

/* Demangled: MK::clCreateCommandQueue(_cl_context*, _cl_device_id*, unsigned long, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK20clCreateCommandQueueEP11_cl_contextP13_cl_device_idmPi(void) {
    ALOGD("_ZN2MK20clCreateCommandQueueEP11_cl_contextP13_cl_device_idmPi() called");
    return 0;
}

/* Demangled: MK::CCLRetainEvent::Log(MK::CJsonLog&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK14CCLRetainEvent3LogERNS_8CJsonLogE(void) {
    ALOGD("_ZNK2MK14CCLRetainEvent3LogERNS_8CJsonLogE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_command_queue* (*)(_cl_context*, _cl_device_id*, unsigned long, int*), std::__1::allocator<_cl_command_queue* (*)(_cl_context*, _cl_device_id*, unsigned long, int*)>, _cl_command_queue* (_cl_context*, _cl_device_id*, unsigned long, int*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFP17_cl_command_queueP11_cl_contextP13_cl_device_idmPiENS_9allocatorISA_EES9_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFP17_cl_command_queueP11_cl_contextP13_cl_device_idmPiENS_9allocatorISA_EES9_E7__cloneEv() called");
    return 0;
}

/* Demangled: MKProgram_AttachMemoryCopy */
extern "C" __attribute__((visibility("default"))) int MKProgram_AttachMemoryCopy(void) {
    ALOGD("MKProgram_AttachMemoryCopy() called");
    return 0;
}

/* Demangled: MK::CUpdateBool::CUpdateBool(MK::CBool*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CUpdateBoolC2EPNS_5CBoolEb(void) {
    ALOGD("_ZN2MK11CUpdateBoolC2EPNS_5CBoolEb() called");
    return 0;
}

/* Exported Object: guard variable for MK::CConfig::GetInstance()::gs_kInstance */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN2MK7CConfig11GetInstanceEvE12gs_kInstance = NULL;

/* Demangled: MKCommand_Release */
extern "C" __attribute__((visibility("default"))) int MKCommand_Release(void) {
    ALOGD("MKCommand_Release() called");
    return 0;
}

/* Demangled: MK::CUpdateBool::RegisterFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CUpdateBool15RegisterFactoryEv(void) {
    ALOGD("_ZN2MK11CUpdateBool15RegisterFactoryEv() called");
    return 0;
}

/* Demangled: MK::CVersion::CVersion(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK8CVersionC1Eii(void) {
    ALOGD("_ZN2MK8CVersionC1Eii() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjmmPvjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_EE = NULL;

/* Demangled: MK::CCLBuildProgram::CCLBuildProgram(MK::CCLBuildProgram const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLBuildProgramC1ERKS0_(void) {
    ALOGD("_ZN2MK15CCLBuildProgramC1ERKS0_() called");
    return 0;
}

/* Demangled: MK::CCLCommand::~CCLCommand() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK10CCLCommandD1Ev(void) {
    ALOGD("_ZN2MK10CCLCommandD1Ev() called");
    return 0;
}

/* Demangled: MK::CCLCreateBuffer::RegisterFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLCreateBuffer15RegisterFactoryEv(void) {
    ALOGD("_ZN2MK15CCLCreateBuffer15RegisterFactoryEv() called");
    return 0;
}

/* Demangled: MK::CCLFinish::CCLFinish() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK9CCLFinishC2Ev(void) {
    ALOGD("_ZN2MK9CCLFinishC2Ev() called");
    return 0;
}

/* Demangled: MK::CCLSetKernelArg::Link(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLSetKernelArg4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK15CCLSetKernelArg4LinkERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Exported Object: vtable for MK::CThreadJobQ */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK11CThreadJobQE = NULL;

/* Demangled: MK::CStream::ReadDynamicString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK7CStream17ReadDynamicStringERNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN2MK7CStream17ReadDynamicStringERNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueUnmapMemObject::RegisterUniqueObject(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK24CCLEnqueueUnmapMemObject20RegisterUniqueObjectERNS_7CStreamE(void) {
    ALOGD("_ZN2MK24CCLEnqueueUnmapMemObject20RegisterUniqueObjectERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CObject::Link(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK7CObject4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK7CObject4LinkERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_mmPKvjPKP9_cl_eventPSB_ENS_9allocatorISG_EESF_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_mmPKvjPKP9_cl_eventPSB_ENS_9allocatorISG_EESF_E7__cloneEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_mPKmS7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_mPKmS7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7destroyEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(), std::__1::allocator<int (*)()>, int ()>::operator()() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFivENS_9allocatorIS3_EES2_EclEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFivENS_9allocatorIS3_EES2_EclEv() called");
    return 0;
}

/* Demangled: std::__1::deque<bool, std::__1::allocator<bool> >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIbNS_9allocatorIbEEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeIbNS_9allocatorIbEEE19__add_back_capacityEv() called");
    return 0;
}

/* Exported Object: vtable for MK::CMemoryCopy */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK11CMemoryCopyE = NULL;

/* Demangled: CmdL_TreeNodePopStack */
extern "C" __attribute__((visibility("default"))) int CmdL_TreeNodePopStack(void) {
    ALOGD("CmdL_TreeNodePopStack() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMapBuffer::Run(MKProgramType, MK::CContextLocal*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK19CCLEnqueueMapBuffer3RunE13MKProgramTypePNS_13CContextLocalE(void) {
    ALOGD("_ZN2MK19CCLEnqueueMapBuffer3RunE13MKProgramTypePNS_13CContextLocalE() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorImNS_9allocatorImEEE6assignIPmEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleImNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorImNS_9allocatorImEEE6assignIPmEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleImNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void) {
    ALOGD("_ZNSt3__16vectorImNS_9allocatorImEEE6assignIPmEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleImNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueReadBuffer::Save(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK20CCLEnqueueReadBuffer4SaveERNS_7CStreamE(void) {
    ALOGD("_ZN2MK20CCLEnqueueReadBuffer4SaveERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CCLFinish::Save(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK9CCLFinish4SaveERNS_7CStreamE(void) {
    ALOGD("_ZN2MK9CCLFinish4SaveERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CCLReleaseContext::CCLReleaseContext(MK::CCLReleaseContext const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK17CCLReleaseContextC2ERKS0_(void) {
    ALOGD("_ZN2MK17CCLReleaseContextC2ERKS0_() called");
    return 0;
}

/* Demangled: MKBool_Release */
extern "C" __attribute__((visibility("default"))) int MKBool_Release(void) {
    ALOGD("MKBool_Release() called");
    return 0;
}

/* Demangled: MK::CObject::CObject(MK::CObject const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK7CObjectC1ERKS0_(void) {
    ALOGD("_ZN2MK7CObjectC1ERKS0_() called");
    return 0;
}

/* Demangled: MK::CCLFinish::~CCLFinish() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK9CCLFinishD1Ev(void) {
    ALOGD("_ZN2MK9CCLFinishD1Ev() called");
    return 0;
}

/* Demangled: MK::CCLSVMAlloc::Run(MKProgramType, MK::CContextLocal*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CCLSVMAlloc3RunE13MKProgramTypePNS_13CContextLocalE(void) {
    ALOGD("_ZN2MK11CCLSVMAlloc3RunE13MKProgramTypePNS_13CContextLocalE() called");
    return 0;
}

/* Exported Object: vtable for MK::CStaticData */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK11CStaticDataE = NULL;

/* Demangled: std::__1::__split_buffer<MK::CPointer<MK::CProgram>*, std::__1::allocator<MK::CPointer<MK::CProgram>*>&>::push_back(MK::CPointer<MK::CProgram>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN2MK8CPointerINS1_8CProgramEEERNS_9allocatorIS5_EEE9push_backEOS5_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN2MK8CPointerINS1_8CProgramEEERNS_9allocatorIS5_EEE9push_backEOS5_() called");
    return 0;
}

/* Demangled: MK::CCLCreateKernelsInProgram::CopyConstructTo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK25CCLCreateKernelsInProgram15CopyConstructToEv(void) {
    ALOGD("_ZNK2MK25CCLCreateKernelsInProgram15CopyConstructToEv() called");
    return 0;
}

/* Demangled: MK::CCLRetainKernel::Save(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLRetainKernel4SaveERNS_7CStreamE(void) {
    ALOGD("_ZN2MK15CCLRetainKernel4SaveERNS_7CStreamE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, void*, unsigned int, _cl_event* const*, _cl_event**)>::__clone(std::__1::__function::__base<int (_cl_command_queue*, _cl_mem*, void*, unsigned int, _cl_event* const*, _cl_event**)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPvjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E7__cloneEPNS0_6__baseISC_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPvjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E7__cloneEPNS0_6__baseISC_EE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_platform_id*), std::__1::allocator<int (*)(_cl_platform_id*)>, int (_cl_platform_id*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP15_cl_platform_idENS_9allocatorIS5_EES4_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP15_cl_platform_idENS_9allocatorIS5_EES4_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_mmPvjPKP9_cl_eventPSA_ENS_9allocatorISF_EESE_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_mmPvjPKP9_cl_eventPSA_ENS_9allocatorISF_EESE_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: MK::clGetProgramInfo(_cl_program*, unsigned int, unsigned long, void*, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16clGetProgramInfoEP11_cl_programjmPvPm(void) {
    ALOGD("_ZN2MK16clGetProgramInfoEP11_cl_programjmPvPm() called");
    return 0;
}

/* Demangled: MK::CCLCreateProgramWithSource::RegisterUniqueObject(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK26CCLCreateProgramWithSource20RegisterUniqueObjectERNS_7CStreamE(void) {
    ALOGD("_ZN2MK26CCLCreateProgramWithSource20RegisterUniqueObjectERNS_7CStreamE() called");
    return 0;
}

/* Demangled: void std::__1::vector<unsigned long, std::__1::allocator<unsigned long> >::__push_back_slow_path<unsigned long>(unsigned long&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorImNS_9allocatorImEEE21__push_back_slow_pathImEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorImNS_9allocatorImEEE21__push_back_slow_pathImEEvOT_() called");
    return 0;
}

/* Demangled: MK::CCLFlush::GetDiskUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK8CCLFlush11GetDiskUsedEv(void) {
    ALOGD("_ZNK2MK8CCLFlush11GetDiskUsedEv() called");
    return 0;
}

/* Exported Object: MK::CCLReleaseContext::ms_kRTTI */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK17CCLReleaseContext8ms_kRTTIE = NULL;

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned long, unsigned int, unsigned long*), std::__1::allocator<int (*)(_cl_command_queue*, unsigned long, unsigned int, unsigned long*)>, int (_cl_command_queue*, unsigned long, unsigned int, unsigned long*)>::operator()(_cl_command_queue*&&, unsigned long&&, unsigned int&&, unsigned long*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuemjPmENS_9allocatorIS6_EES5_EclEOS3_OmOjOS4_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queuemjPmENS_9allocatorIS6_EES5_EclEOS3_OmOjOS4_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: CmdL_SetDebugLevel */
extern "C" __attribute__((visibility("default"))) int CmdL_SetDebugLevel(void) {
    ALOGD("CmdL_SetDebugLevel() called");
    return 0;
}

/* Demangled: CmdL_AttachclRetainCommandQueue */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclRetainCommandQueue(void) {
    ALOGD("CmdL_AttachclRetainCommandQueue() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<int (*)(_cl_event*), std::__1::allocator<int (*)(_cl_event*)>, int (_cl_event*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFiP9_cl_eventENS_9allocatorIS5_EES4_EE = NULL;

/* Demangled: void std::__1::vector<_cl_mem*, std::__1::allocator<_cl_mem*> >::__push_back_slow_path<_cl_mem* const&>(_cl_mem* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIP7_cl_memNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIP7_cl_memNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_() called");
    return 0;
}

/* Demangled: MK::CDynamicData::GetMemoryUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK12CDynamicData13GetMemoryUsedEv(void) {
    ALOGD("_ZNK2MK12CDynamicData13GetMemoryUsedEv() called");
    return 0;
}

/* Demangled: CmdL_AttachclEnqueueMigrateMemObjects */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclEnqueueMigrateMemObjects(void) {
    ALOGD("CmdL_AttachclEnqueueMigrateMemObjects() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, void*, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, void*, int*)>, _cl_mem* (_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, void*, int*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatmmmPvPiENS_9allocatorISC_EESB_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatmmmPvPiENS_9allocatorISC_EESB_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: MK::clEnqueueMigrateMemObjects(_cl_command_queue*, unsigned int, _cl_mem* const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK26clEnqueueMigrateMemObjectsEP17_cl_command_queuejPKP7_cl_memmjPKP9_cl_eventPS7_(void) {
    ALOGD("_ZN2MK26clEnqueueMigrateMemObjectsEP17_cl_command_queuejPKP7_cl_memmjPKP9_cl_eventPS7_() called");
    return 0;
}

/* Demangled: MK::CCLRetainKernel::CCLRetainKernel(MK::CCLRetainKernel const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLRetainKernelC2ERKS0_(void) {
    ALOGD("_ZN2MK15CCLRetainKernelC2ERKS0_() called");
    return 0;
}

/* Demangled: MK::CCLRetainMemObject::Load(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK18CCLRetainMemObject4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK18CCLRetainMemObject4LoadERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, void const*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, void const*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, void const*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::operator()(_cl_command_queue*&&, _cl_mem*&&, void const*&&, unsigned long&&, unsigned long&&, unsigned long&&, unsigned int&&, _cl_event* const*&&, _cl_event**&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPKvmmmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EclEOS3_OS5_OS7_OmSL_SL_OjOSB_OSC_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPKvmmmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EclEOS3_OS5_OS7_OmSL_SL_OjOSB_OSC_() called");
    return 0;
}

/* Demangled: MK::CCLReleaseEvent::Link(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLReleaseEvent4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK15CCLReleaseEvent4LinkERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_mPKmS7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_mPKmS7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_kernel*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_kernel*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_kernel*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>::operator()(_cl_kernel*&&, _cl_device_id*&&, unsigned int&&, unsigned long&&, void*&&, unsigned long*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP10_cl_kernelP13_cl_device_idjmPvPmENS_9allocatorIS9_EES8_EclEOS3_OS5_OjOmOS6_OS7_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP10_cl_kernelP13_cl_device_idjmPvPmENS_9allocatorIS9_EES8_EclEOS3_OS5_OjOmOS6_OS7_() called");
    return 0;
}

/* Demangled: clEnqueueMapImage */
extern "C" __attribute__((visibility("default"))) int clEnqueueMapImage(void) {
    ALOGD("clEnqueueMapImage() called");
    return 0;
}

/* Exported Object: MK::CCLCreateKernel::ms_kRTTI */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK15CCLCreateKernel8ms_kRTTIE = NULL;

/* Demangled: MK::CCLReleaseProgram::CCLReleaseProgram(MK::CCLReleaseProgram const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK17CCLReleaseProgramC1ERKS0_(void) {
    ALOGD("_ZN2MK17CCLReleaseProgramC1ERKS0_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<int (*)(_cl_program*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_program*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_program*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFiP11_cl_programP13_cl_device_idjmPvPmENS_9allocatorIS9_EES8_EE = NULL;

/* Demangled: std::__1::__function::__func<int (*)(unsigned long, void*), std::__1::allocator<int (*)(unsigned long, void*)>, int (unsigned long, void*)>::__clone(std::__1::__function::__base<int (unsigned long, void*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFimPvENS_9allocatorIS4_EES3_E7__cloneEPNS0_6__baseIS3_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFimPvENS_9allocatorIS4_EES3_E7__cloneEPNS0_6__baseIS3_EE() called");
    return 0;
}

/* Demangled: MKProgram_AttachCLReleaseKernel */
extern "C" __attribute__((visibility("default"))) int MKProgram_AttachCLReleaseKernel(void) {
    ALOGD("MKProgram_AttachCLReleaseKernel() called");
    return 0;
}

/* Demangled: MK::CDynamicData::Load(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK12CDynamicData4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK12CDynamicData4LoadERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: CmdL_GetTreeNodeCount */
extern "C" __attribute__((visibility("default"))) int CmdL_GetTreeNodeCount(void) {
    ALOGD("CmdL_GetTreeNodeCount() called");
    return 0;
}

/* Demangled: MK::CJsonLog::Log(char const*, char const*, ...) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK8CJsonLog3LogEPKcS2_z(void) {
    ALOGD("_ZN2MK8CJsonLog3LogEPKcS2_z() called");
    return 0;
}

/* Demangled: MKProgram_GetCLCommandQueue */
extern "C" __attribute__((visibility("default"))) int MKProgram_GetCLCommandQueue(void) {
    ALOGD("MKProgram_GetCLCommandQueue() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, unsigned long, void*, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, unsigned long, void*, int*)>, _cl_mem* (_cl_context*, unsigned long, unsigned long, void*, int*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmmPvPiENS_9allocatorIS9_EES8_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmmPvPiENS_9allocatorIS9_EES8_E7__cloneEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, _cl_mem* const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, _cl_mem* const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, unsigned int, _cl_mem* const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejPKP7_cl_memmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queuejPKP7_cl_memmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7destroyEv() called");
    return 0;
}

/* Demangled: MK::CCLCreateProgramWithBinary::Factory(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK26CCLCreateProgramWithBinary7FactoryERNS_7CStreamE(void) {
    ALOGD("_ZN2MK26CCLCreateProgramWithBinary7FactoryERNS_7CStreamE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_program*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, char const**, void (*)(_cl_program*, void*), void*), std::__1::allocator<int (*)(_cl_program*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, char const**, void (*)(_cl_program*, void*), void*)>, int (_cl_program*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, char const**, void (*)(_cl_program*, void*), void*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP11_cl_programjPKP13_cl_device_idPKcjPKS3_PS9_PFvS3_PvESD_ENS_9allocatorISH_EESG_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP11_cl_programjPKP13_cl_device_idPKcjPKS3_PS9_PFvS3_PvESD_ENS_9allocatorISH_EESG_E7__cloneEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_mem*, void (*)(_cl_mem*, void*), void*), std::__1::allocator<int (*)(_cl_mem*, void (*)(_cl_mem*, void*), void*)>, int (_cl_mem*, void (*)(_cl_mem*, void*), void*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP7_cl_memPFvS3_PvES4_ENS_9allocatorIS8_EES7_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP7_cl_memPFvS3_PvES4_ENS_9allocatorIS8_EES7_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: MKStream_SaveToBuffer */
extern "C" __attribute__((visibility("default"))) int MKStream_SaveToBuffer(void) {
    ALOGD("MKStream_SaveToBuffer() called");
    return 0;
}

/* Demangled: MK::clEnqueueWriteBufferRect(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK24clEnqueueWriteBufferRectEP17_cl_command_queueP7_cl_memjPKmS5_S5_mmmmPvjPKP9_cl_eventPS8_(void) {
    ALOGD("_ZN2MK24clEnqueueWriteBufferRectEP17_cl_command_queueP7_cl_memjPKmS5_S5_mmmmPvjPKP9_cl_eventPS8_() called");
    return 0;
}

/* Demangled: MK::CObject::GetDiskUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK7CObject11GetDiskUsedEv(void) {
    ALOGD("_ZNK2MK7CObject11GetDiskUsedEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, void*, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, void*, int*)>, _cl_mem* (_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, void*, int*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatmmmmmPvPiENS_9allocatorISC_EESB_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatmmmmmPvPiENS_9allocatorISC_EESB_E7destroyEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, void**, void (*)(_cl_command_queue*, unsigned int, void**, void*), void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, void**, void (*)(_cl_command_queue*, unsigned int, void**, void*), void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, unsigned int, void**, void (*)(_cl_command_queue*, unsigned int, void**, void*), void*, unsigned int, _cl_event* const*, _cl_event**)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejPPvPFvS3_jS5_S4_ES4_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queuejPPvPFvS3_jS5_S4_ES4_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7destroyEv() called");
    return 0;
}

/* Demangled: MK::clCreateCommandQueueWithProperties(_cl_context*, _cl_device_id*, unsigned long const*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK34clCreateCommandQueueWithPropertiesEP11_cl_contextP13_cl_device_idPKmPi(void) {
    ALOGD("_ZN2MK34clCreateCommandQueueWithPropertiesEP11_cl_contextP13_cl_device_idPKmPi() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueUnmapMemObject::CopyConstructTo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK24CCLEnqueueUnmapMemObject15CopyConstructToEv(void) {
    ALOGD("_ZNK2MK24CCLEnqueueUnmapMemObject15CopyConstructToEv() called");
    return 0;
}

/* Demangled: MK::CCLFinish::CCLFinish(MK::CCLFinish const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK9CCLFinishC1ERKS0_(void) {
    ALOGD("_ZN2MK9CCLFinishC1ERKS0_() called");
    return 0;
}

/* Demangled: MK::CCLReleaseCommandQueue::~CCLReleaseCommandQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK22CCLReleaseCommandQueueD2Ev(void) {
    ALOGD("_ZN2MK22CCLReleaseCommandQueueD2Ev() called");
    return 0;
}

/* Exported Object: vtable for MK::COutputTensors */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK14COutputTensorsE = NULL;

/* Demangled: MK::clGetPlatformInfo(_cl_platform_id*, unsigned int, unsigned long, void*, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK17clGetPlatformInfoEP15_cl_platform_idjmPvPm(void) {
    ALOGD("_ZN2MK17clGetPlatformInfoEP15_cl_platform_idjmPvPm() called");
    return 0;
}

/* Demangled: MK::CCLCreateBuffer::Record(_cl_context*, unsigned long, unsigned long, void*, _cl_mem*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLCreateBuffer6RecordEP11_cl_contextmmPvP7_cl_mem(void) {
    ALOGD("_ZN2MK15CCLCreateBuffer6RecordEP11_cl_contextmmPvP7_cl_mem() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueUnmapMemObject::CCLEnqueueUnmapMemObject() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK24CCLEnqueueUnmapMemObjectC2Ev(void) {
    ALOGD("_ZN2MK24CCLEnqueueUnmapMemObjectC2Ev() called");
    return 0;
}

/* Demangled: MK::CCLRetainProgram::Save(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLRetainProgram4SaveERNS_7CStreamE(void) {
    ALOGD("_ZN2MK16CCLRetainProgram4SaveERNS_7CStreamE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuejmPvmjPKP9_cl_eventPS6_ENS_9allocatorISB_EESA_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP17_cl_command_queuejmPvmjPKP9_cl_eventPS6_ENS_9allocatorISB_EESA_E7__cloneEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_mem*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_mem*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_mem*, unsigned int, unsigned long, void*, unsigned long*)>::operator()(_cl_mem*&&, unsigned int&&, unsigned long&&, void*&&, unsigned long*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP7_cl_memjmPvPmENS_9allocatorIS7_EES6_EclEOS3_OjOmOS4_OS5_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP7_cl_memjmPvPmENS_9allocatorIS7_EES6_EclEOS3_OjOmOS4_OS5_() called");
    return 0;
}

/* Demangled: MK::CCLReleaseProgram::Record(_cl_program*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK17CCLReleaseProgram6RecordEP11_cl_program(void) {
    ALOGD("_ZN2MK17CCLReleaseProgram6RecordEP11_cl_program() called");
    return 0;
}

/* Demangled: MK::CCLFinish::GetDiskUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK9CCLFinish11GetDiskUsedEv(void) {
    ALOGD("_ZNK2MK9CCLFinish11GetDiskUsedEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long*)>::__clone(std::__1::__function::__base<int (_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuejmPvPmENS_9allocatorIS7_EES6_E7__cloneEPNS0_6__baseIS6_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP17_cl_command_queuejmPvPmENS_9allocatorIS7_EES6_E7__cloneEPNS0_6__baseIS6_EE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<_cl_context* (*)(long const*, unsigned int, _cl_device_id* const*, void (*)(char const*, void const*, unsigned long, void*), void*, int*), std::__1::allocator<_cl_context* (*)(long const*, unsigned int, _cl_device_id* const*, void (*)(char const*, void const*, unsigned long, void*), void*, int*)>, _cl_context* (long const*, unsigned int, _cl_device_id* const*, void (*)(char const*, void const*, unsigned long, void*), void*, int*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFP11_cl_contextPKljPKP13_cl_device_idPFvPKcPKvmPvESE_PiENS_9allocatorISJ_EESI_EE = NULL;

/* Demangled: MK::CCLBuildProgram::Load(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLBuildProgram4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK15CCLBuildProgram4LoadERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: MK::CCLCreateImage::~CCLCreateImage() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14CCLCreateImageD2Ev(void) {
    ALOGD("_ZN2MK14CCLCreateImageD2Ev() called");
    return 0;
}

/* Demangled: MK::CCLRetainKernel::Run(MKProgramType, MK::CContextLocal*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLRetainKernel3RunE13MKProgramTypePNS_13CContextLocalE(void) {
    ALOGD("_ZN2MK15CCLRetainKernel3RunE13MKProgramTypePNS_13CContextLocalE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<int (*)(_cl_program*, unsigned int, _cl_kernel**, unsigned int*), std::__1::allocator<int (*)(_cl_program*, unsigned int, _cl_kernel**, unsigned int*)>, int (_cl_program*, unsigned int, _cl_kernel**, unsigned int*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFiP11_cl_programjPP10_cl_kernelPjENS_9allocatorIS9_EES8_EE = NULL;

/* Demangled: MK::CCLCreateProgramWithBinary::~CCLCreateProgramWithBinary() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK26CCLCreateProgramWithBinaryD2Ev(void) {
    ALOGD("_ZN2MK26CCLCreateProgramWithBinaryD2Ev() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, void (*)(void*), void*, unsigned long, unsigned int, _cl_mem* const*, void const**, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, void (*)(void*), void*, unsigned long, unsigned int, _cl_mem* const*, void const**, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, void (*)(void*), void*, unsigned long, unsigned int, _cl_mem* const*, void const**, unsigned int, _cl_event* const*, _cl_event**)>::operator()(_cl_command_queue*&&, void (*&&)(void*), void*&&, unsigned long&&, unsigned int&&, _cl_mem* const*&&, void const**&&, unsigned int&&, _cl_event* const*&&, _cl_event**&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuePFvPvES4_mjPKP7_cl_memPPKvjPKP9_cl_eventPSF_ENS_9allocatorISK_EESJ_EclEOS3_OS6_OS4_OmOjOSA_OSD_SS_OSH_OSI_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queuePFvPvES4_mjPKP7_cl_memPPKvjPKP9_cl_eventPSF_ENS_9allocatorISK_EESJ_EclEOS3_OS6_OS4_OmOjOSA_OSD_SS_OSH_OSI_() called");
    return 0;
}

/* Demangled: MK::COutputTensors::~COutputTensors() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14COutputTensorsD2Ev(void) {
    ALOGD("_ZN2MK14COutputTensorsD2Ev() called");
    return 0;
}

/* Demangled: MK::CProgram::CProgram(MK::CProgram const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK8CProgramC2ERKS0_(void) {
    ALOGD("_ZN2MK8CProgramC2ERKS0_() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueUnmapMemObject::~CCLEnqueueUnmapMemObject() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK24CCLEnqueueUnmapMemObjectD1Ev(void) {
    ALOGD("_ZN2MK24CCLEnqueueUnmapMemObjectD1Ev() called");
    return 0;
}

/* Exported Object: vtable for MK::CCLRetainKernel */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK15CCLRetainKernelE = NULL;

/* Demangled: std::__1::__function::__func<int (*)(_cl_program*), std::__1::allocator<int (*)(_cl_program*)>, int (_cl_program*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP11_cl_programENS_9allocatorIS5_EES4_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP11_cl_programENS_9allocatorIS5_EES4_E7__cloneEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, void*, unsigned int, _cl_event* const*, _cl_event**)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuePvjPKP9_cl_eventPS6_ENS_9allocatorISB_EESA_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queuePvjPKP9_cl_eventPS6_ENS_9allocatorISB_EESA_E7destroyEv() called");
    return 0;
}

/* Demangled: MK::CCommand::CCommand() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK8CCommandC2Ev(void) {
    ALOGD("_ZN2MK8CCommandC2Ev() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>::operator()(_cl_command_queue*&&, _cl_mem*&&, unsigned int&&, unsigned long const*&&, unsigned long const*&&, unsigned long const*&&, unsigned long&&, unsigned long&&, unsigned long&&, unsigned long&&, void*&&, unsigned int&&, _cl_event* const*&&, _cl_event**&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_S7_mmmmPvjPKP9_cl_eventPSA_ENS_9allocatorISF_EESE_EclEOS3_OS5_OjOS7_SM_SM_OmSN_SN_SN_OS8_SL_OSC_OSD_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_S7_mmmmPvjPKP9_cl_eventPSA_ENS_9allocatorISF_EESE_EclEOS3_OS5_OjOS7_SM_SM_OmSN_SN_SN_OS8_SL_OSC_OSD_() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_event*, int, void (*)(_cl_event*, int, void*), void*), std::__1::allocator<int (*)(_cl_event*, int, void (*)(_cl_event*, int, void*), void*)>, int (_cl_event*, int, void (*)(_cl_event*, int, void*), void*)>::operator()(_cl_event*&&, int&&, void (*&&)(_cl_event*, int, void*), void*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP9_cl_eventiPFvS3_iPvES4_ENS_9allocatorIS8_EES7_EclEOS3_OiOS6_OS4_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP9_cl_eventiPFvS3_iPvES4_ENS_9allocatorIS8_EES7_EclEOS3_OiOS6_OS4_() called");
    return 0;
}

/* Demangled: MK::CCLCreateProgramWithSource::RegisterFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK26CCLCreateProgramWithSource15RegisterFactoryEv(void) {
    ALOGD("_ZN2MK26CCLCreateProgramWithSource15RegisterFactoryEv() called");
    return 0;
}

/* Demangled: MK::CProfileDataJob::CProfileDataJob(MK::CProfileDataJob const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CProfileDataJobC1ERKS0_(void) {
    ALOGD("_ZN2MK15CProfileDataJobC1ERKS0_() called");
    return 0;
}

/* Demangled: clCreateCommandQueue */
extern "C" __attribute__((visibility("default"))) int clCreateCommandQueue(void) {
    ALOGD("clCreateCommandQueue() called");
    return 0;
}

/* Demangled: MK::CCLReleaseEvent::CopyConstructTo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK15CCLReleaseEvent15CopyConstructToEv(void) {
    ALOGD("_ZNK2MK15CCLReleaseEvent15CopyConstructToEv() called");
    return 0;
}

/* Demangled: MK::CCLSetKernelArg::Log(MK::CJsonLog&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK15CCLSetKernelArg3LogERNS_8CJsonLogE(void) {
    ALOGD("_ZNK2MK15CCLSetKernelArg3LogERNS_8CJsonLogE() called");
    return 0;
}

/* Demangled: MK::CCLProfileJob::~CCLProfileJob() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK13CCLProfileJobD1Ev(void) {
    ALOGD("_ZN2MK13CCLProfileJobD1Ev() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMarker::CCLEnqueueMarker() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLEnqueueMarkerC2Ev(void) {
    ALOGD("_ZN2MK16CCLEnqueueMarkerC2Ev() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::operator()(_cl_command_queue*&&, _cl_mem*&&, _cl_mem*&&, unsigned long const*&&, unsigned long const*&&, unsigned long&&, unsigned int&&, _cl_event* const*&&, _cl_event**&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_mjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EclEOS3_OS5_SJ_OS7_SK_OmOjOSB_OSC_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_mjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EclEOS3_OS5_SJ_OS7_SK_OmOjOSB_OSC_() called");
    return 0;
}

/* Demangled: MK::clRetainSampler(_cl_sampler*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15clRetainSamplerEP11_cl_sampler(void) {
    ALOGD("_ZN2MK15clRetainSamplerEP11_cl_sampler() called");
    return 0;
}

/* Demangled: MK::CCLReleaseKernel::Record(_cl_kernel*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLReleaseKernel6RecordEP10_cl_kernel(void) {
    ALOGD("_ZN2MK16CCLReleaseKernel6RecordEP10_cl_kernel() called");
    return 0;
}

/* Demangled: MK::CCLReleaseProgram::Run(MKProgramType, MK::CContextLocal*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK17CCLReleaseProgram3RunE13MKProgramTypePNS_13CContextLocalE(void) {
    ALOGD("_ZN2MK17CCLReleaseProgram3RunE13MKProgramTypePNS_13CContextLocalE() called");
    return 0;
}

/* Demangled: MK::CCLSVMFree::GetMemoryUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK10CCLSVMFree13GetMemoryUsedEv(void) {
    ALOGD("_ZNK2MK10CCLSVMFree13GetMemoryUsedEv() called");
    return 0;
}

/* Demangled: MK::CProgram::GetAllObjectsByNameRTTI(std::__1::vector<MK::CObject*, std::__1::allocator<MK::CObject*> >&, char const*, MK::CRTTI const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK8CProgram23GetAllObjectsByNameRTTIERNSt3__16vectorIPNS_7CObjectENS1_9allocatorIS4_EEEEPKcPKNS_5CRTTIEb(void) {
    ALOGD("_ZN2MK8CProgram23GetAllObjectsByNameRTTIERNSt3__16vectorIPNS_7CObjectENS1_9allocatorIS4_EEEEPKcPKNS_5CRTTIEb() called");
    return 0;
}

/* Demangled: MK::CCLFlush::Record(_cl_command_queue*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK8CCLFlush6RecordEP17_cl_command_queue(void) {
    ALOGD("_ZN2MK8CCLFlush6RecordEP17_cl_command_queue() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjmmPKvjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjmmPKvjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEv() called");
    return 0;
}

/* Demangled: CmdL_AttachclRetainSampler */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclRetainSampler(void) {
    ALOGD("CmdL_AttachclRetainSampler() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMarker::CCLEnqueueMarker(MK::CCLEnqueueMarker const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLEnqueueMarkerC1ERKS0_(void) {
    ALOGD("_ZN2MK16CCLEnqueueMarkerC1ERKS0_() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMarker::~CCLEnqueueMarker() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLEnqueueMarkerD1Ev(void) {
    ALOGD("_ZN2MK16CCLEnqueueMarkerD1Ev() called");
    return 0;
}

/* Demangled: MK::CCLReleaseCommandQueue::CCLReleaseCommandQueue(MK::CCLReleaseCommandQueue const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK22CCLReleaseCommandQueueC1ERKS0_(void) {
    ALOGD("_ZN2MK22CCLReleaseCommandQueueC1ERKS0_() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, char const*, int*), std::__1::allocator<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, char const*, int*)>, _cl_program* (_cl_context*, unsigned int, _cl_device_id* const*, char const*, int*)>::__clone(std::__1::__function::__base<_cl_program* (_cl_context*, unsigned int, _cl_device_id* const*, char const*, int*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKcPiENS_9allocatorISE_EESD_E7__cloneEPNS0_6__baseISD_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKcPiENS_9allocatorISE_EESD_E7__cloneEPNS0_6__baseISD_EE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::__clone(std::__1::__function::__base<int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_mmmjPKP9_cl_eventPS7_ENS_9allocatorISC_EESB_E7__cloneEPNS0_6__baseISB_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_mmmjPKP9_cl_eventPS7_ENS_9allocatorISC_EESB_E7__cloneEPNS0_6__baseISB_EE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_sampler* (*)(_cl_context*, unsigned long const*, int*), std::__1::allocator<_cl_sampler* (*)(_cl_context*, unsigned long const*, int*)>, _cl_sampler* (_cl_context*, unsigned long const*, int*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFP11_cl_samplerP11_cl_contextPKmPiENS_9allocatorISA_EES9_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFP11_cl_samplerP11_cl_contextPKmPiENS_9allocatorISA_EES9_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, long const*, void*, unsigned long, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, long const*, void*, unsigned long, int*)>, _cl_mem* (_cl_context*, unsigned long, long const*, void*, unsigned long, int*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPKlPvmPiENS_9allocatorISB_EESA_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPKlPvmPiENS_9allocatorISB_EESA_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: MK::clReleaseDevice(_cl_device_id*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15clReleaseDeviceEP13_cl_device_id(void) {
    ALOGD("_ZN2MK15clReleaseDeviceEP13_cl_device_id() called");
    return 0;
}

/* Exported Object: vtable for MK::CCLCreateProgramWithSource */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK26CCLCreateProgramWithSourceE = NULL;

/* Demangled: MK::CCLReleaseCommandQueue::Factory(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK22CCLReleaseCommandQueue7FactoryERNS_7CStreamE(void) {
    ALOGD("_ZN2MK22CCLReleaseCommandQueue7FactoryERNS_7CStreamE() called");
    return 0;
}

/* Exported Object: vtable for MK::CCLReleaseEvent */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK15CCLReleaseEventE = NULL;

/* Demangled: CmdL_LoadByFile */
extern "C" __attribute__((visibility("default"))) int CmdL_LoadByFile(void) {
    ALOGD("CmdL_LoadByFile() called");
    return 0;
}

/* Demangled: CmdL_AttachclCreateProgramWithBinary */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclCreateProgramWithBinary(void) {
    ALOGD("CmdL_AttachclCreateProgramWithBinary() called");
    return 0;
}

/* Demangled: MK::CCLCreateKernel::RegisterFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLCreateKernel15RegisterFactoryEv(void) {
    ALOGD("_ZN2MK15CCLCreateKernel15RegisterFactoryEv() called");
    return 0;
}

/* Demangled: MK::CCLRetainEvent::RegisterUniqueObject(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14CCLRetainEvent20RegisterUniqueObjectERNS_7CStreamE(void) {
    ALOGD("_ZN2MK14CCLRetainEvent20RegisterUniqueObjectERNS_7CStreamE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, void*, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, void*, int*)>, _cl_mem* (_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, void*, int*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatmmmmmPvPiENS_9allocatorISC_EESB_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatmmmmmPvPiENS_9allocatorISC_EESB_E7__cloneEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<int (*)(_cl_platform_id*, unsigned long, unsigned int, _cl_device_id**, unsigned int*), std::__1::allocator<int (*)(_cl_platform_id*, unsigned long, unsigned int, _cl_device_id**, unsigned int*)>, int (_cl_platform_id*, unsigned long, unsigned int, _cl_device_id**, unsigned int*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFiP15_cl_platform_idmjPP13_cl_device_idPjENS_9allocatorIS9_EES8_EE = NULL;

/* Exported Object: vtable for MK::CCLRetainContext */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK16CCLRetainContextE = NULL;

/* Demangled: MK::CCLWaitForEvents::CCLWaitForEvents(MK::CCLWaitForEvents const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLWaitForEventsC1ERKS0_(void) {
    ALOGD("_ZN2MK16CCLWaitForEventsC1ERKS0_() called");
    return 0;
}

/* Demangled: MKProgram_AttachCLEnqueueSVMMap */
extern "C" __attribute__((visibility("default"))) int MKProgram_AttachCLEnqueueSVMMap(void) {
    ALOGD("MKProgram_AttachCLEnqueueSVMMap() called");
    return 0;
}

/* Demangled: MKProgram_AttachCLRetainContext */
extern "C" __attribute__((visibility("default"))) int MKProgram_AttachCLRetainContext(void) {
    ALOGD("MKProgram_AttachCLRetainContext() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, char const*, int*), std::__1::allocator<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, char const*, int*)>, _cl_program* (_cl_context*, unsigned int, _cl_device_id* const*, char const*, int*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKcPiENS_9allocatorISE_EESD_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKcPiENS_9allocatorISE_EESD_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: MK::CStream::Save(char*&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK7CStream4SaveERPcRi(void) {
    ALOGD("_ZN2MK7CStream4SaveERPcRi() called");
    return 0;
}

/* Demangled: clCreateImage */
extern "C" __attribute__((visibility("default"))) int clCreateImage(void) {
    ALOGD("clCreateImage() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<_cl_program*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<_cl_program*, std::__1::__value_type<_cl_program*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<_cl_program*>, true>, std::__1::allocator<std::__1::__value_type<_cl_program*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<_cl_program*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIP11_cl_programNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS_19__map_value_compareIS3_SA_NS_4lessIS3_EELb1EEENS7_ISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIP11_cl_programNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS_19__map_value_compareIS3_SA_NS_4lessIS3_EELb1EEENS7_ISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE() called");
    return 0;
}

/* Demangled: MK::CCLReleaseCommandQueue::GetMemoryUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK22CCLReleaseCommandQueue13GetMemoryUsedEv(void) {
    ALOGD("_ZNK2MK22CCLReleaseCommandQueue13GetMemoryUsedEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<int (*)(_cl_event*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_event*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_event*, unsigned int, unsigned long, void*, unsigned long*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFiP9_cl_eventjmPvPmENS_9allocatorIS7_EES6_EE = NULL;

/* Demangled: MKSysTrace_Exit() */
extern "C" __attribute__((visibility("default"))) int _Z15MKSysTrace_Exitv(void) {
    ALOGD("_Z15MKSysTrace_Exitv() called");
    return 0;
}

/* Demangled: MK::CUpdateBool::Load(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CUpdateBool4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK11CUpdateBool4LoadERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: CmdL_AttachclFlush */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclFlush(void) {
    ALOGD("CmdL_AttachclFlush() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<int (*)(_cl_program*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_program*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_program*, unsigned int, unsigned long, void*, unsigned long*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFiP11_cl_programjmPvPmENS_9allocatorIS7_EES6_EE = NULL;

/* Exported Object: vtable for MK::CInputTensors */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK13CInputTensorsE = NULL;

/* Demangled: MK::CStream::Load(char const*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK7CStream4LoadEPKcii(void) {
    ALOGD("_ZN2MK7CStream4LoadEPKcii() called");
    return 0;
}

/* Demangled: MK::CCLFinish::CCLFinish() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK9CCLFinishC1Ev(void) {
    ALOGD("_ZN2MK9CCLFinishC1Ev() called");
    return 0;
}

/* Demangled: MK::CCLCommand::CCLCommand(MK::CCLCommand const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK10CCLCommandC2ERKS0_(void) {
    ALOGD("_ZN2MK10CCLCommandC2ERKS0_() called");
    return 0;
}

/* Demangled: MK::CCLCommand::~CCLCommand() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK10CCLCommandD0Ev(void) {
    ALOGD("_ZN2MK10CCLCommandD0Ev() called");
    return 0;
}

/* Exported Object: vtable for MK::CCLRetainMemObject */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK18CCLRetainMemObjectE = NULL;

/* Demangled: MK::CCLRetainCommandQueue::CCLRetainCommandQueue(MK::CCLRetainCommandQueue const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK21CCLRetainCommandQueueC2ERKS0_(void) {
    ALOGD("_ZN2MK21CCLRetainCommandQueueC2ERKS0_() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueSVMUnmap::~CCLEnqueueSVMUnmap() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK18CCLEnqueueSVMUnmapD2Ev(void) {
    ALOGD("_ZN2MK18CCLEnqueueSVMUnmapD2Ev() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(unsigned long, void*), std::__1::allocator<int (*)(unsigned long, void*)>, int (unsigned long, void*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFimPvENS_9allocatorIS4_EES3_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFimPvENS_9allocatorIS4_EES3_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: MK::CCLCreateCommandQueue::Save(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK21CCLCreateCommandQueue4SaveERNS_7CStreamE(void) {
    ALOGD("_ZN2MK21CCLCreateCommandQueue4SaveERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CCLReleaseMemObject::Log(MK::CJsonLog&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK19CCLReleaseMemObject3LogERNS_8CJsonLogE(void) {
    ALOGD("_ZNK2MK19CCLReleaseMemObject3LogERNS_8CJsonLogE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<int (*)(_cl_command_queue*, void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, void*, unsigned int, _cl_event* const*, _cl_event**)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queuePvjPKP9_cl_eventPS6_ENS_9allocatorISB_EESA_EE = NULL;

/* Demangled: MK::CProgram::DetachCommandAt(int) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK8CProgram15DetachCommandAtEi(void) {
    ALOGD("_ZN2MK8CProgram15DetachCommandAtEi() called");
    return 0;
}

/* Demangled: CmdL_AttachclCreateImage2D */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclCreateImage2D(void) {
    ALOGD("CmdL_AttachclCreateImage2D() called");
    return 0;
}

/* Demangled: MK::clEnqueueWriteBuffer(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK20clEnqueueWriteBufferEP17_cl_command_queueP7_cl_memjmmPKvjPKP9_cl_eventPS7_(void) {
    ALOGD("_ZN2MK20clEnqueueWriteBufferEP17_cl_command_queueP7_cl_memjmmPKvjPKP9_cl_eventPS7_() called");
    return 0;
}

/* Demangled: MK::clEnqueueNativeKernel(_cl_command_queue*, void (*)(void*), void*, unsigned long, unsigned int, _cl_mem* const*, void const**, unsigned int, _cl_event* const*, _cl_event**) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK21clEnqueueNativeKernelEP17_cl_command_queuePFvPvES2_mjPKP7_cl_memPPKvjPKP9_cl_eventPSD_(void) {
    ALOGD("_ZN2MK21clEnqueueNativeKernelEP17_cl_command_queuePFvPvES2_mjPKP7_cl_memPPKvjPKP9_cl_eventPSD_() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueCopyBufferToImage::Log(MK::CJsonLog&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK27CCLEnqueueCopyBufferToImage3LogERNS_8CJsonLogE(void) {
    ALOGD("_ZNK2MK27CCLEnqueueCopyBufferToImage3LogERNS_8CJsonLogE() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueWriteBuffer::Save(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK21CCLEnqueueWriteBuffer4SaveERNS_7CStreamE(void) {
    ALOGD("_ZN2MK21CCLEnqueueWriteBuffer4SaveERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MKProgram_AttachCLReleaseEvent */
extern "C" __attribute__((visibility("default"))) int MKProgram_AttachCLReleaseEvent(void) {
    ALOGD("MKProgram_AttachCLReleaseEvent() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_context* (*)(long const*, unsigned int, _cl_device_id* const*, void (*)(char const*, void const*, unsigned long, void*), void*, int*), std::__1::allocator<_cl_context* (*)(long const*, unsigned int, _cl_device_id* const*, void (*)(char const*, void const*, unsigned long, void*), void*, int*)>, _cl_context* (long const*, unsigned int, _cl_device_id* const*, void (*)(char const*, void const*, unsigned long, void*), void*, int*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFP11_cl_contextPKljPKP13_cl_device_idPFvPKcPKvmPvESE_PiENS_9allocatorISJ_EESI_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFP11_cl_contextPKljPKP13_cl_device_idPFvPKcPKvmPvESE_PiENS_9allocatorISJ_EESI_E7destroyEv() called");
    return 0;
}

/* Demangled: MK::CProfileDataJob::CProfileDataJob(char const*, float) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CProfileDataJobC2EPKcf(void) {
    ALOGD("_ZN2MK15CProfileDataJobC2EPKcf() called");
    return 0;
}

/* Demangled: MK::clSetMemObjectDestructorCallback(_cl_mem*, void (*)(_cl_mem*, void*), void*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK32clSetMemObjectDestructorCallbackEP7_cl_memPFvS1_PvES2_(void) {
    ALOGD("_ZN2MK32clSetMemObjectDestructorCallbackEP7_cl_memPFvS1_PvES2_() called");
    return 0;
}

/* Exported Object: MK::CVersion::MINOR */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK8CVersion5MINORE = NULL;

/* Demangled: _ZNSt3__16vectorIlNS_9allocatorIlEEE6assignIPlEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIlNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIlNS_9allocatorIlEEE6assignIPlEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIlNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void) {
    ALOGD("_ZNSt3__16vectorIlNS_9allocatorIlEEE6assignIPlEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIlNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_() called");
    return 0;
}

/* Demangled: MK::CCLFinish::Load(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK9CCLFinish4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK9CCLFinish4LoadERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: MK::CCLFinish::~CCLFinish() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK9CCLFinishD0Ev(void) {
    ALOGD("_ZN2MK9CCLFinishD0Ev() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMapBuffer::CCLEnqueueMapBuffer(MK::CCLEnqueueMapBuffer const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK19CCLEnqueueMapBufferC1ERKS0_(void) {
    ALOGD("_ZN2MK19CCLEnqueueMapBufferC1ERKS0_() called");
    return 0;
}

/* Demangled: MK::CCLImportMemory::RegisterFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLImportMemory15RegisterFactoryEv(void) {
    ALOGD("_ZN2MK15CCLImportMemory15RegisterFactoryEv() called");
    return 0;
}

/* Demangled: MK::CCLPrepareMemoryCopy::Run(MKProgramType, MK::CContextLocal*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK20CCLPrepareMemoryCopy3RunE13MKProgramTypePNS_13CContextLocalE(void) {
    ALOGD("_ZN2MK20CCLPrepareMemoryCopy3RunE13MKProgramTypePNS_13CContextLocalE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, void const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, void const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, void const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPKvPKmS9_jPKP9_cl_eventPSB_ENS_9allocatorISG_EESF_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPKvPKmS9_jPKP9_cl_eventPSB_ENS_9allocatorISG_EESF_E7destroyEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejmPvmjPKP9_cl_eventPS6_ENS_9allocatorISB_EESA_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queuejmPvmjPKP9_cl_eventPS6_ENS_9allocatorISB_EESA_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(unsigned int, _cl_event* const*), std::__1::allocator<int (*)(unsigned int, _cl_event* const*)>, int (unsigned int, _cl_event* const*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFijPKP9_cl_eventENS_9allocatorIS7_EES6_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFijPKP9_cl_eventENS_9allocatorIS7_EES6_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: MK::CStaticData::~CStaticData() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CStaticDataD2Ev(void) {
    ALOGD("_ZN2MK11CStaticDataD2Ev() called");
    return 0;
}

/* Demangled: CmdL_TreeNodeRelease */
extern "C" __attribute__((visibility("default"))) int CmdL_TreeNodeRelease(void) {
    ALOGD("CmdL_TreeNodeRelease() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_context*, unsigned long, unsigned int, unsigned int, _cl_image_format*, unsigned int*), std::__1::allocator<int (*)(_cl_context*, unsigned long, unsigned int, unsigned int, _cl_image_format*, unsigned int*)>, int (_cl_context*, unsigned long, unsigned int, unsigned int, _cl_image_format*, unsigned int*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP11_cl_contextmjjP16_cl_image_formatPjENS_9allocatorIS8_EES7_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP11_cl_contextmjjP16_cl_image_formatPjENS_9allocatorIS8_EES7_E7__cloneEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_context*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_context*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_context*, unsigned int, unsigned long, void*, unsigned long*)>::operator()(_cl_context*&&, unsigned int&&, unsigned long&&, void*&&, unsigned long*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP11_cl_contextjmPvPmENS_9allocatorIS7_EES6_EclEOS3_OjOmOS4_OS5_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP11_cl_contextjmPvPmENS_9allocatorIS7_EES6_EclEOS3_OjOmOS4_OS5_() called");
    return 0;
}

/* Demangled: CmdL_AttachclEnqueueMapImage */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclEnqueueMapImage(void) {
    ALOGD("CmdL_AttachclEnqueueMapImage() called");
    return 0;
}

/* Demangled: MK::clCreateKernelsInProgram(_cl_program*, unsigned int, _cl_kernel**, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK24clCreateKernelsInProgramEP11_cl_programjPP10_cl_kernelPj(void) {
    ALOGD("_ZN2MK24clCreateKernelsInProgramEP11_cl_programjPP10_cl_kernelPj() called");
    return 0;
}

/* Demangled: MK::CCLRetainCommandQueue::~CCLRetainCommandQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK21CCLRetainCommandQueueD2Ev(void) {
    ALOGD("_ZN2MK21CCLRetainCommandQueueD2Ev() called");
    return 0;
}

/* Demangled: MKProgram_AttachCLEnqueueWriteBuffer */
extern "C" __attribute__((visibility("default"))) int MKProgram_AttachCLEnqueueWriteBuffer(void) {
    ALOGD("MKProgram_AttachCLEnqueueWriteBuffer() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_event*, int, void (*)(_cl_event*, int, void*), void*), std::__1::allocator<int (*)(_cl_event*, int, void (*)(_cl_event*, int, void*), void*)>, int (_cl_event*, int, void (*)(_cl_event*, int, void*), void*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP9_cl_eventiPFvS3_iPvES4_ENS_9allocatorIS8_EES7_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP9_cl_eventiPFvS3_iPvES4_ENS_9allocatorIS8_EES7_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: MK::CDummyCommand::Save(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK13CDummyCommand4SaveERNS_7CStreamE(void) {
    ALOGD("_ZN2MK13CDummyCommand4SaveERNS_7CStreamE() called");
    return 0;
}

/* Demangled: void std::__1::vector<MK::CObject*, std::__1::allocator<MK::CObject*> >::__push_back_slow_path<MK::CObject*>(MK::CObject*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN2MK7CObjectENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPN2MK7CObjectENS_9allocatorIS3_EEE21__push_back_slow_pathIS3_EEvOT_() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, void*, unsigned int, _cl_event* const*, _cl_event**)>::__clone(std::__1::__function::__base<int (_cl_command_queue*, void*, unsigned int, _cl_event* const*, _cl_event**)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuePvjPKP9_cl_eventPS6_ENS_9allocatorISB_EESA_E7__cloneEPNS0_6__baseISA_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP17_cl_command_queuePvjPKP9_cl_eventPS6_ENS_9allocatorISB_EESA_E7__cloneEPNS0_6__baseISA_EE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, void*, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, void*, int*)>, _cl_mem* (_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, void*, int*)>::operator()(_cl_context*&&, unsigned long&&, _cl_image_format const*&&, unsigned long&&, unsigned long&&, unsigned long&&, void*&&, int*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatmmmPvPiENS_9allocatorISC_EESB_EclEOS5_OmOS8_SH_SH_SH_OS9_OSA_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatmmmPvPiENS_9allocatorISC_EESB_EclEOS5_OmOS8_SH_SH_SH_OS9_OSA_() called");
    return 0;
}

/* Demangled: MK::CVersion::CVersion(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK8CVersionC1EPKc(void) {
    ALOGD("_ZN2MK8CVersionC1EPKc() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueSVMUnmap::RegisterUniqueObject(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK18CCLEnqueueSVMUnmap20RegisterUniqueObjectERNS_7CStreamE(void) {
    ALOGD("_ZN2MK18CCLEnqueueSVMUnmap20RegisterUniqueObjectERNS_7CStreamE() called");
    return 0;
}

/* Exported Object: vtable for MK::CCLProfileJob */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK13CCLProfileJobE = NULL;

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, void*, void const*, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, void*, void const*, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, void*, void const*, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuePvPKvmmjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queuePvPKvmmjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E18destroy_deallocateEv() called");
    return 0;
}

/* Exported Object: MK::CDynamicData::ms_kRTTI */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK12CDynamicData8ms_kRTTIE = NULL;

/* Demangled: MK::CCLFlush::CCLFlush(MK::CCLFlush const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK8CCLFlushC1ERKS0_(void) {
    ALOGD("_ZN2MK8CCLFlushC1ERKS0_() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueNDRangeKernel::CCLEnqueueNDRangeKernel(MK::CCLEnqueueNDRangeKernel const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK23CCLEnqueueNDRangeKernelC1ERKS0_(void) {
    ALOGD("_ZN2MK23CCLEnqueueNDRangeKernelC1ERKS0_() called");
    return 0;
}

/* Demangled: MK::CCLFinish::CopyConstructTo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK9CCLFinish15CopyConstructToEv(void) {
    ALOGD("_ZNK2MK9CCLFinish15CopyConstructToEv() called");
    return 0;
}

/* Demangled: MK::CCLReleaseCommandQueue::CCLReleaseCommandQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK22CCLReleaseCommandQueueC2Ev(void) {
    ALOGD("_ZN2MK22CCLReleaseCommandQueueC2Ev() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, _cl_mem* const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, _cl_mem* const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, unsigned int, _cl_mem* const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::operator()(_cl_command_queue*&&, unsigned int&&, _cl_mem* const*&&, unsigned long&&, unsigned int&&, _cl_event* const*&&, _cl_event**&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejPKP7_cl_memmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EclEOS3_OjOS7_OmSJ_OSB_OSC_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queuejPKP7_cl_memmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EclEOS3_OjOS7_OmSJ_OSB_OSC_() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, unsigned int, _cl_event* const*, _cl_event**)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejPKP9_cl_eventPS5_ENS_9allocatorISA_EES9_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queuejPKP9_cl_eventPS5_ENS_9allocatorISA_EES9_E7destroyEv() called");
    return 0;
}

/* Demangled: MK::CCLRetainEvent::RegisterFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14CCLRetainEvent15RegisterFactoryEv(void) {
    ALOGD("_ZN2MK14CCLRetainEvent15RegisterFactoryEv() called");
    return 0;
}

/* Demangled: CmdL_AttachclCreateProgramWithBuiltInKernels */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclCreateProgramWithBuiltInKernels(void) {
    ALOGD("CmdL_AttachclCreateProgramWithBuiltInKernels() called");
    return 0;
}

/* Demangled: clCreateUserEvent */
extern "C" __attribute__((visibility("default"))) int clCreateUserEvent(void) {
    ALOGD("clCreateUserEvent() called");
    return 0;
}

/* Demangled: MK::CCLWaitForEvents::Run(MKProgramType, MK::CContextLocal*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLWaitForEvents3RunE13MKProgramTypePNS_13CContextLocalE(void) {
    ALOGD("_ZN2MK16CCLWaitForEvents3RunE13MKProgramTypePNS_13CContextLocalE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_context*), std::__1::allocator<int (*)(_cl_context*)>, int (_cl_context*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP11_cl_contextENS_9allocatorIS5_EES4_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP11_cl_contextENS_9allocatorIS5_EES4_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: MK::CProgram::GetDiskUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK8CProgram11GetDiskUsedEv(void) {
    ALOGD("_ZNK2MK8CProgram11GetDiskUsedEv() called");
    return 0;
}

/* Demangled: MK::clCreateKernel(_cl_program*, char const*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14clCreateKernelEP11_cl_programPKcPi(void) {
    ALOGD("_ZN2MK14clCreateKernelEP11_cl_programPKcPi() called");
    return 0;
}

/* Demangled: MK::CCLCreateImage::CCLCreateImage() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14CCLCreateImageC2Ev(void) {
    ALOGD("_ZN2MK14CCLCreateImageC2Ev() called");
    return 0;
}

/* Demangled: MK::CCLImportMemory::Record(_cl_context*, unsigned long, long const*, void*, unsigned long, _cl_mem*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLImportMemory6RecordEP11_cl_contextmPKlPvmP7_cl_mem(void) {
    ALOGD("_ZN2MK15CCLImportMemory6RecordEP11_cl_contextmPKlPvmP7_cl_mem() called");
    return 0;
}

/* Demangled: MK::CCLSetKernelArg::Save(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLSetKernelArg4SaveERNS_7CStreamE(void) {
    ALOGD("_ZN2MK15CCLSetKernelArg4SaveERNS_7CStreamE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, unsigned long const*, unsigned char const**, int*, int*), std::__1::allocator<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, unsigned long const*, unsigned char const**, int*, int*)>, _cl_program* (_cl_context*, unsigned int, _cl_device_id* const*, unsigned long const*, unsigned char const**, int*, int*)>::operator()(_cl_context*&&, unsigned int&&, _cl_device_id* const*&&, unsigned long const*&&, unsigned char const**&&, int*&&, int*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKmPPKhPiSF_ENS_9allocatorISH_EESG_EclEOS5_OjOS9_OSB_OSE_OSF_SQ_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKmPPKhPiSF_ENS_9allocatorISH_EESG_EclEOS5_OjOS9_OSB_OSE_OSF_SQ_() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, void (*)(void*), void*, unsigned long, unsigned int, _cl_mem* const*, void const**, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, void (*)(void*), void*, unsigned long, unsigned int, _cl_mem* const*, void const**, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, void (*)(void*), void*, unsigned long, unsigned int, _cl_mem* const*, void const**, unsigned int, _cl_event* const*, _cl_event**)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuePFvPvES4_mjPKP7_cl_memPPKvjPKP9_cl_eventPSF_ENS_9allocatorISK_EESJ_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queuePFvPvES4_mjPKP7_cl_memPPKvjPKP9_cl_eventPSF_ENS_9allocatorISK_EESJ_E7destroyEv() called");
    return 0;
}

/* Demangled: MK::clEnqueueCopyBufferToImage(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK26clEnqueueCopyBufferToImageEP17_cl_command_queueP7_cl_memS3_mPKmS5_jPKP9_cl_eventPS7_(void) {
    ALOGD("_ZN2MK26clEnqueueCopyBufferToImageEP17_cl_command_queueP7_cl_memS3_mPKmS5_jPKP9_cl_eventPS7_() called");
    return 0;
}

/* Demangled: MK::CCLCreateProgramWithBinary::CCLCreateProgramWithBinary() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK26CCLCreateProgramWithBinaryC2Ev(void) {
    ALOGD("_ZN2MK26CCLCreateProgramWithBinaryC2Ev() called");
    return 0;
}

/* Demangled: MK::CCLReleaseCommandQueue::~CCLReleaseCommandQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK22CCLReleaseCommandQueueD1Ev(void) {
    ALOGD("_ZN2MK22CCLReleaseCommandQueueD1Ev() called");
    return 0;
}

/* Demangled: MK::CCLRetainContext::GetDiskUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK16CCLRetainContext11GetDiskUsedEv(void) {
    ALOGD("_ZNK2MK16CCLRetainContext11GetDiskUsedEv() called");
    return 0;
}

/* Demangled: MK::COutputTensors::COutputTensors() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14COutputTensorsC2Ev(void) {
    ALOGD("_ZN2MK14COutputTensorsC2Ev() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueUnmapMemObject::CCLEnqueueUnmapMemObject() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK24CCLEnqueueUnmapMemObjectC1Ev(void) {
    ALOGD("_ZN2MK24CCLEnqueueUnmapMemObjectC1Ev() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_kernel* (*)(_cl_program*, char const*, int*), std::__1::allocator<_cl_kernel* (*)(_cl_program*, char const*, int*)>, _cl_kernel* (_cl_program*, char const*, int*)>::__clone(std::__1::__function::__base<_cl_kernel* (_cl_program*, char const*, int*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFP10_cl_kernelP11_cl_programPKcPiENS_9allocatorISA_EES9_E7__cloneEPNS0_6__baseIS9_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFP10_cl_kernelP11_cl_programPKcPiENS_9allocatorISA_EES9_E7__cloneEPNS0_6__baseIS9_EE() called");
    return 0;
}

/* Demangled: MK::clEnqueueCopyImageToBuffer(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK26clEnqueueCopyImageToBufferEP17_cl_command_queueP7_cl_memS3_PKmS5_mjPKP9_cl_eventPS7_(void) {
    ALOGD("_ZN2MK26clEnqueueCopyImageToBufferEP17_cl_command_queueP7_cl_memS3_PKmS5_mjPKP9_cl_eventPS7_() called");
    return 0;
}

/* Demangled: MK::CCLBuildProgram::CopyConstructTo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK15CCLBuildProgram15CopyConstructToEv(void) {
    ALOGD("_ZNK2MK15CCLBuildProgram15CopyConstructToEv() called");
    return 0;
}

/* Demangled: MK::CCLCreateImage::Factory(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14CCLCreateImage7FactoryERNS_7CStreamE(void) {
    ALOGD("_ZN2MK14CCLCreateImage7FactoryERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CCLReleaseContext::~CCLReleaseContext() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK17CCLReleaseContextD2Ev(void) {
    ALOGD("_ZN2MK17CCLReleaseContextD2Ev() called");
    return 0;
}

/* Demangled: MK::CCLCreateImage::~CCLCreateImage() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14CCLCreateImageD1Ev(void) {
    ALOGD("_ZN2MK14CCLCreateImageD1Ev() called");
    return 0;
}

/* Demangled: MK::CCLReleaseKernel::~CCLReleaseKernel() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLReleaseKernelD2Ev(void) {
    ALOGD("_ZN2MK16CCLReleaseKernelD2Ev() called");
    return 0;
}

/* Demangled: MK::CCLSVMFree::Factory(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK10CCLSVMFree7FactoryERNS_7CStreamE(void) {
    ALOGD("_ZN2MK10CCLSVMFree7FactoryERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CStaticData::Factory(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CStaticData7FactoryERNS_7CStreamE(void) {
    ALOGD("_ZN2MK11CStaticData7FactoryERNS_7CStreamE() called");
    return 0;
}

/* Demangled: clEnqueueCopyBufferToImage */
extern "C" __attribute__((visibility("default"))) int clEnqueueCopyBufferToImage(void) {
    ALOGD("clEnqueueCopyBufferToImage() called");
    return 0;
}

/* Demangled: MK::CCLCommand::RegisterUniqueObject(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK10CCLCommand20RegisterUniqueObjectERNS_7CStreamE(void) {
    ALOGD("_ZN2MK10CCLCommand20RegisterUniqueObjectERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CCLCreateKernel::CCLCreateKernel(MK::CCLCreateKernel const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLCreateKernelC1ERKS0_(void) {
    ALOGD("_ZN2MK15CCLCreateKernelC1ERKS0_() called");
    return 0;
}

/* Demangled: MK::CCLCreateProgramWithBinary::~CCLCreateProgramWithBinary() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK26CCLCreateProgramWithBinaryD1Ev(void) {
    ALOGD("_ZN2MK26CCLCreateProgramWithBinaryD1Ev() called");
    return 0;
}

/* Demangled: MK::CCLRetainCommandQueue::Factory(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK21CCLRetainCommandQueue7FactoryERNS_7CStreamE(void) {
    ALOGD("_ZN2MK21CCLRetainCommandQueue7FactoryERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::COutputTensors::~COutputTensors() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14COutputTensorsD1Ev(void) {
    ALOGD("_ZN2MK14COutputTensorsD1Ev() called");
    return 0;
}

/* Demangled: MKProgram_SetBooleanCondition */
extern "C" __attribute__((visibility("default"))) int MKProgram_SetBooleanCondition(void) {
    ALOGD("MKProgram_SetBooleanCondition() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueUnmapMemObject::~CCLEnqueueUnmapMemObject() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK24CCLEnqueueUnmapMemObjectD0Ev(void) {
    ALOGD("_ZN2MK24CCLEnqueueUnmapMemObjectD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, void*, unsigned int, _cl_event* const*, _cl_event**)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuePvjPKP9_cl_eventPS6_ENS_9allocatorISB_EESA_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queuePvjPKP9_cl_eventPS6_ENS_9allocatorISB_EESA_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: MK::CInputTensors::Load(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK13CInputTensors4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK13CInputTensors4LoadERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: CmdL_AttachclWaitForEvents */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclWaitForEvents(void) {
    ALOGD("CmdL_AttachclWaitForEvents() called");
    return 0;
}

/* Exported Object: MK::CContextGlobal::GetInstance()::ms_kInstance */
extern "C" __attribute__((visibility("default"))) void* _ZZN2MK14CContextGlobal11GetInstanceEvE12ms_kInstance = NULL;

/* Demangled: MK::CCLCreateImage::Log(MK::CJsonLog&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK14CCLCreateImage3LogERNS_8CJsonLogE(void) {
    ALOGD("_ZNK2MK14CCLCreateImage3LogERNS_8CJsonLogE() called");
    return 0;
}

/* Exported Object: MK::CCLReleaseMemObject::ms_kRTTI */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK19CCLReleaseMemObject8ms_kRTTIE = NULL;

/* Demangled: MK::CCLRetainKernel::RegisterUniqueObject(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLRetainKernel20RegisterUniqueObjectERNS_7CStreamE(void) {
    ALOGD("_ZN2MK15CCLRetainKernel20RegisterUniqueObjectERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CCLRetainProgram::Run(MKProgramType, MK::CContextLocal*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLRetainProgram3RunE13MKProgramTypePNS_13CContextLocalE(void) {
    ALOGD("_ZN2MK16CCLRetainProgram3RunE13MKProgramTypePNS_13CContextLocalE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(unsigned int, _cl_event* const*), std::__1::allocator<int (*)(unsigned int, _cl_event* const*)>, int (unsigned int, _cl_event* const*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFijPKP9_cl_eventENS_9allocatorIS7_EES6_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFijPKP9_cl_eventENS_9allocatorIS7_EES6_E7destroyEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<bool*, std::__1::allocator<bool*> >::push_front(bool*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPbNS_9allocatorIS1_EEE10push_frontEOS1_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPbNS_9allocatorIS1_EEE10push_frontEOS1_() called");
    return 0;
}

/* Demangled: MK::opencl_is_available() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK19opencl_is_availableEv(void) {
    ALOGD("_ZN2MK19opencl_is_availableEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<std::__1::function<int (unsigned long, void*)>, std::__1::allocator<std::__1::function<int (unsigned long, void*)> >, int (unsigned int, void*)>::__clone(std::__1::__function::__base<int (unsigned int, void*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcINS_8functionIFimPvEEENS_9allocatorIS5_EEFijS3_EE7__cloneEPNS0_6__baseIS8_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcINS_8functionIFimPvEEENS_9allocatorIS5_EEFijS3_EE7__cloneEPNS0_6__baseIS8_EE() called");
    return 0;
}

/* Demangled: MK::CCLProfileJob::~CCLProfileJob() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK13CCLProfileJobD0Ev(void) {
    ALOGD("_ZN2MK13CCLProfileJobD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_device_id*), std::__1::allocator<int (*)(_cl_device_id*)>, int (_cl_device_id*)>::__clone(std::__1::__function::__base<int (_cl_device_id*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP13_cl_device_idENS_9allocatorIS5_EES4_E7__cloneEPNS0_6__baseIS4_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP13_cl_device_idENS_9allocatorIS5_EES4_E7__cloneEPNS0_6__baseIS4_EE() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMarker::CCLEnqueueMarker() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLEnqueueMarkerC1Ev(void) {
    ALOGD("_ZN2MK16CCLEnqueueMarkerC1Ev() called");
    return 0;
}

/* Demangled: MK::CCLReleaseContext::RegisterFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK17CCLReleaseContext15RegisterFactoryEv(void) {
    ALOGD("_ZN2MK17CCLReleaseContext15RegisterFactoryEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_event*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_event*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_event*, unsigned int, unsigned long, void*, unsigned long*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP9_cl_eventjmPvPmENS_9allocatorIS7_EES6_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP9_cl_eventjmPvPmENS_9allocatorIS7_EES6_E7destroyEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: std::__1::__split_buffer<MK::CPointer<MK::CProgram>*, std::__1::allocator<MK::CPointer<MK::CProgram>*> >::push_front(MK::CPointer<MK::CProgram>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN2MK8CPointerINS1_8CProgramEEENS_9allocatorIS5_EEE10push_frontEOS5_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN2MK8CPointerINS1_8CProgramEEENS_9allocatorIS5_EEE10push_frontEOS5_() called");
    return 0;
}

/* Demangled: clEnqueueSVMMemcpy */
extern "C" __attribute__((visibility("default"))) int clEnqueueSVMMemcpy(void) {
    ALOGD("clEnqueueSVMMemcpy() called");
    return 0;
}

/* Demangled: void std::__1::vector<_cl_event*, std::__1::allocator<_cl_event*> >::__push_back_slow_path<_cl_event*>(_cl_event*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIP9_cl_eventNS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIP9_cl_eventNS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMapBuffer::CopyConstructTo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK19CCLEnqueueMapBuffer15CopyConstructToEv(void) {
    ALOGD("_ZNK2MK19CCLEnqueueMapBuffer15CopyConstructToEv() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueUnmapMemObject::CCLEnqueueUnmapMemObject(MK::CCLEnqueueUnmapMemObject const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK24CCLEnqueueUnmapMemObjectC1ERKS0_(void) {
    ALOGD("_ZN2MK24CCLEnqueueUnmapMemObjectC1ERKS0_() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, char const*, int*), std::__1::allocator<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, char const*, int*)>, _cl_program* (_cl_context*, unsigned int, _cl_device_id* const*, char const*, int*)>::operator()(_cl_context*&&, unsigned int&&, _cl_device_id* const*&&, char const*&&, int*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKcPiENS_9allocatorISE_EESD_EclEOS5_OjOS9_OSB_OSC_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKcPiENS_9allocatorISE_EESD_EclEOS5_OjOS9_OSB_OSC_() called");
    return 0;
}

/* Demangled: MK::CUpdateBool::CUpdateBool(MK::CUpdateBool const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CUpdateBoolC2ERKS0_(void) {
    ALOGD("_ZN2MK11CUpdateBoolC2ERKS0_() called");
    return 0;
}

/* Demangled: MK::clCreateProgramWithBuiltInKernels(_cl_context*, unsigned int, _cl_device_id* const*, char const*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK33clCreateProgramWithBuiltInKernelsEP11_cl_contextjPKP13_cl_device_idPKcPi(void) {
    ALOGD("_ZN2MK33clCreateProgramWithBuiltInKernelsEP11_cl_contextjPKP13_cl_device_idPKcPi() called");
    return 0;
}

/* Demangled: MK::CInputTensors::RegisterUniqueObject(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK13CInputTensors20RegisterUniqueObjectERNS_7CStreamE(void) {
    ALOGD("_ZN2MK13CInputTensors20RegisterUniqueObjectERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::clGetEventProfilingInfo(_cl_event*, unsigned int, unsigned long, void*, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK23clGetEventProfilingInfoEP9_cl_eventjmPvPm(void) {
    ALOGD("_ZN2MK23clGetEventProfilingInfoEP9_cl_eventjmPvPm() called");
    return 0;
}

/* Demangled: MK::CCLRetainKernel::Factory(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLRetainKernel7FactoryERNS_7CStreamE(void) {
    ALOGD("_ZN2MK15CCLRetainKernel7FactoryERNS_7CStreamE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_context* (*)(long const*, unsigned long, void (*)(char const*, void const*, unsigned long, void*), void*, int*), std::__1::allocator<_cl_context* (*)(long const*, unsigned long, void (*)(char const*, void const*, unsigned long, void*), void*, int*)>, _cl_context* (long const*, unsigned long, void (*)(char const*, void const*, unsigned long, void*), void*, int*)>::__clone(std::__1::__function::__base<_cl_context* (long const*, unsigned long, void (*)(char const*, void const*, unsigned long, void*), void*, int*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFP11_cl_contextPKlmPFvPKcPKvmPvESA_PiENS_9allocatorISF_EESE_E7__cloneEPNS0_6__baseISE_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFP11_cl_contextPKlmPFvPKcPKvmPvESA_PiENS_9allocatorISF_EESE_E7__cloneEPNS0_6__baseISE_EE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<void* (*)(_cl_context*, unsigned long, unsigned long, unsigned int), std::__1::allocator<void* (*)(_cl_context*, unsigned long, unsigned long, unsigned int)>, void* (_cl_context*, unsigned long, unsigned long, unsigned int)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFPvP11_cl_contextmmjENS_9allocatorIS6_EES5_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFPvP11_cl_contextmmjENS_9allocatorIS6_EES5_E7__cloneEv() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMarker::~CCLEnqueueMarker() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLEnqueueMarkerD0Ev(void) {
    ALOGD("_ZN2MK16CCLEnqueueMarkerD0Ev() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIlNS_9allocatorIlEEE6insertIPlEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIlNS_15iterator_traitsIS7_E9referenceEEE5valueENS_11__wrap_iterIS5_EEE4typeENSB_IPKlEES7_S7_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIlNS_9allocatorIlEEE6insertIPlEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIlNS_15iterator_traitsIS7_E9referenceEEE5valueENS_11__wrap_iterIS5_EEE4typeENSB_IPKlEES7_S7_(void) {
    ALOGD("_ZNSt3__16vectorIlNS_9allocatorIlEEE6insertIPlEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIlNS_15iterator_traitsIS7_E9referenceEEE5valueENS_11__wrap_iterIS5_EEE4typeENSB_IPKlEES7_S7_() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueSVMUnmap::CCLEnqueueSVMUnmap(MK::CCLEnqueueSVMUnmap const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK18CCLEnqueueSVMUnmapC1ERKS0_(void) {
    ALOGD("_ZN2MK18CCLEnqueueSVMUnmapC1ERKS0_() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::__clone(std::__1::__function::__base<int (_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuejmPvmjPKP9_cl_eventPS6_ENS_9allocatorISB_EESA_E7__cloneEPNS0_6__baseISA_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP17_cl_command_queuejmPvmjPKP9_cl_eventPS6_ENS_9allocatorISB_EESA_E7__cloneEPNS0_6__baseISA_EE() called");
    return 0;
}

/* Demangled: CmdL_AttachclEnqueueWaitForEvents */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclEnqueueWaitForEvents(void) {
    ALOGD("CmdL_AttachclEnqueueWaitForEvents() called");
    return 0;
}

/* Demangled: clRetainDevice */
extern "C" __attribute__((visibility("default"))) int clRetainDevice(void) {
    ALOGD("clRetainDevice() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueWriteBuffer::Run(MKProgramType, MK::CContextLocal*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK21CCLEnqueueWriteBuffer3RunE13MKProgramTypePNS_13CContextLocalE(void) {
    ALOGD("_ZN2MK21CCLEnqueueWriteBuffer3RunE13MKProgramTypePNS_13CContextLocalE() called");
    return 0;
}

/* Demangled: MK::CCLFlush::Link(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK8CCLFlush4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK8CCLFlush4LinkERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: MK::CCLReleaseMemObject::RegisterFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK19CCLReleaseMemObject15RegisterFactoryEv(void) {
    ALOGD("_ZN2MK19CCLReleaseMemObject15RegisterFactoryEv() called");
    return 0;
}

/* Demangled: MK::CObject::DumpLog(MK::CJsonLog&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK7CObject7DumpLogERNS_8CJsonLogE(void) {
    ALOGD("_ZNK2MK7CObject7DumpLogERNS_8CJsonLogE() called");
    return 0;
}

/* Exported Object: MK::CCLEnqueueMapBuffer::ms_kRTTI */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK19CCLEnqueueMapBuffer8ms_kRTTIE = NULL;

/* Demangled: MK::CCLRetainKernel::GetDiskUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK15CCLRetainKernel11GetDiskUsedEv(void) {
    ALOGD("_ZNK2MK15CCLRetainKernel11GetDiskUsedEv() called");
    return 0;
}

/* Demangled: MK::CCLSVMFree::Load(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK10CCLSVMFree4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK10CCLSVMFree4LoadERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueSVMUnmap::CCLEnqueueSVMUnmap() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK18CCLEnqueueSVMUnmapC2Ev(void) {
    ALOGD("_ZN2MK18CCLEnqueueSVMUnmapC2Ev() called");
    return 0;
}

/* Demangled: MK::CJob::CJob() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK4CJobC2Ev(void) {
    ALOGD("_ZN2MK4CJobC2Ev() called");
    return 0;
}

/* Demangled: MK::CCLCommand::Factory(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK10CCLCommand7FactoryERNS_7CStreamE(void) {
    ALOGD("_ZN2MK10CCLCommand7FactoryERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CCLRetainCommandQueue::Run(MKProgramType, MK::CContextLocal*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK21CCLRetainCommandQueue3RunE13MKProgramTypePNS_13CContextLocalE(void) {
    ALOGD("_ZN2MK21CCLRetainCommandQueue3RunE13MKProgramTypePNS_13CContextLocalE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, _cl_image_desc const*, void*, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, _cl_image_desc const*, void*, int*)>, _cl_mem* (_cl_context*, unsigned long, _cl_image_format const*, _cl_image_desc const*, void*, int*)>::__clone(std::__1::__function::__base<_cl_mem* (_cl_context*, unsigned long, _cl_image_format const*, _cl_image_desc const*, void*, int*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatPK14_cl_image_descPvPiENS_9allocatorISF_EESE_E7__cloneEPNS0_6__baseISE_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatPK14_cl_image_descPvPiENS_9allocatorISF_EESE_E7__cloneEPNS0_6__baseISE_EE() called");
    return 0;
}

/* Demangled: clEnqueueMigrateMemObjects */
extern "C" __attribute__((visibility("default"))) int clEnqueueMigrateMemObjects(void) {
    ALOGD("clEnqueueMigrateMemObjects() called");
    return 0;
}

/* Demangled: MK::CCLPrepareMemoryCopy::Save(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK20CCLPrepareMemoryCopy4SaveERNS_7CStreamE(void) {
    ALOGD("_ZN2MK20CCLPrepareMemoryCopy4SaveERNS_7CStreamE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_event*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_event*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_event*, unsigned int, unsigned long, void*, unsigned long*)>::__clone(std::__1::__function::__base<int (_cl_event*, unsigned int, unsigned long, void*, unsigned long*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP9_cl_eventjmPvPmENS_9allocatorIS7_EES6_E7__cloneEPNS0_6__baseIS6_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP9_cl_eventjmPvPmENS_9allocatorIS7_EES6_E7__cloneEPNS0_6__baseIS6_EE() called");
    return 0;
}

/* Demangled: MK::CCLFinish::Factory(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK9CCLFinish7FactoryERNS_7CStreamE(void) {
    ALOGD("_ZN2MK9CCLFinish7FactoryERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CCLRetainMemObject::~CCLRetainMemObject() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK18CCLRetainMemObjectD2Ev(void) {
    ALOGD("_ZN2MK18CCLRetainMemObjectD2Ev() called");
    return 0;
}

/* Demangled: MK::CCLRetainEvent::CCLRetainEvent(MK::CCLRetainEvent const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14CCLRetainEventC2ERKS0_(void) {
    ALOGD("_ZN2MK14CCLRetainEventC2ERKS0_() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueSVMUnmap::Load(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK18CCLEnqueueSVMUnmap4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK18CCLEnqueueSVMUnmap4LoadERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<void* (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long const*, unsigned long const*, unsigned long*, unsigned long*, unsigned int, _cl_event* const*, _cl_event**, int*), std::__1::allocator<void* (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long const*, unsigned long const*, unsigned long*, unsigned long*, unsigned int, _cl_event* const*, _cl_event**, int*)>, void* (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long const*, unsigned long const*, unsigned long*, unsigned long*, unsigned int, _cl_event* const*, _cl_event**, int*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFPvP17_cl_command_queueP7_cl_memjmPKmS8_PmS9_jPKP9_cl_eventPSB_PiENS_9allocatorISH_EESG_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFPvP17_cl_command_queueP7_cl_memjmPKmS8_PmS9_jPKP9_cl_eventPSB_PiENS_9allocatorISH_EESG_E7__cloneEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_program*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_program*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_program*, unsigned int, unsigned long, void*, unsigned long*)>::__clone(std::__1::__function::__base<int (_cl_program*, unsigned int, unsigned long, void*, unsigned long*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP11_cl_programjmPvPmENS_9allocatorIS7_EES6_E7__cloneEPNS0_6__baseIS6_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP11_cl_programjmPvPmENS_9allocatorIS7_EES6_E7__cloneEPNS0_6__baseIS6_EE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>::__clone(std::__1::__function::__base<int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjmmPvjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E7__cloneEPNS0_6__baseISC_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjmmPvjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E7__cloneEPNS0_6__baseISC_EE() called");
    return 0;
}

/* Demangled: void std::__1::vector<MK::CPointer<MK::CCLCreateContext>, std::__1::allocator<MK::CPointer<MK::CCLCreateContext> > >::__push_back_slow_path<MK::CPointer<MK::CCLCreateContext> >(MK::CPointer<MK::CCLCreateContext>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN2MK8CPointerINS1_16CCLCreateContextEEENS_9allocatorIS4_EEE21__push_back_slow_pathIS4_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN2MK8CPointerINS1_16CCLCreateContextEEENS_9allocatorIS4_EEE21__push_back_slow_pathIS4_EEvOT_() called");
    return 0;
}

/* Demangled: CmdL_AttachclCreateImage3D */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclCreateImage3D(void) {
    ALOGD("CmdL_AttachclCreateImage3D() called");
    return 0;
}

/* Demangled: MK::CCLRetainContext::~CCLRetainContext() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLRetainContextD2Ev(void) {
    ALOGD("_ZN2MK16CCLRetainContextD2Ev() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueSVMUnmap::~CCLEnqueueSVMUnmap() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK18CCLEnqueueSVMUnmapD1Ev(void) {
    ALOGD("_ZN2MK18CCLEnqueueSVMUnmapD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_kernel*, unsigned int, void const*), std::__1::allocator<int (*)(_cl_kernel*, unsigned int, void const*)>, int (_cl_kernel*, unsigned int, void const*)>::__clone(std::__1::__function::__base<int (_cl_kernel*, unsigned int, void const*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP10_cl_kerneljPKvENS_9allocatorIS7_EES6_E7__cloneEPNS0_6__baseIS6_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP10_cl_kerneljPKvENS_9allocatorIS7_EES6_E7__cloneEPNS0_6__baseIS6_EE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::operator()(_cl_command_queue*&&, _cl_mem*&&, _cl_mem*&&, unsigned long&&, unsigned long&&, unsigned long&&, unsigned int&&, _cl_event* const*&&, _cl_event**&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_mmmjPKP9_cl_eventPS7_ENS_9allocatorISC_EESB_EclEOS3_OS5_SH_OmSI_SI_OjOS9_OSA_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_mmmjPKP9_cl_eventPS7_ENS_9allocatorISC_EESB_EclEOS3_OS5_SH_OmSI_SI_OjOS9_OSA_() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__emplace_hint_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > const&>(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*, long>, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE30__emplace_hint_unique_key_argsIS7_JRKNS_4pairIKS7_S7_EEEEENS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEElEENS_21__tree_const_iteratorIS8_SP_lEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE30__emplace_hint_unique_key_argsIS7_JRKNS_4pairIKS7_S7_EEEEENS_15__tree_iteratorIS8_PNS_11__tree_nodeIS8_PvEElEENS_21__tree_const_iteratorIS8_SP_lEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: MK::clGetCommandQueueInfo(_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK21clGetCommandQueueInfoEP17_cl_command_queuejmPvPm(void) {
    ALOGD("_ZN2MK21clGetCommandQueueInfoEP17_cl_command_queuejmPvPm() called");
    return 0;
}

/* Demangled: MK::CCLCreateImage::RegisterUniqueObject(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14CCLCreateImage20RegisterUniqueObjectERNS_7CStreamE(void) {
    ALOGD("_ZN2MK14CCLCreateImage20RegisterUniqueObjectERNS_7CStreamE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_program*, unsigned int, _cl_device_id* const*, char const*, void (*)(_cl_program*, void*), void*), std::__1::allocator<int (*)(_cl_program*, unsigned int, _cl_device_id* const*, char const*, void (*)(_cl_program*, void*), void*)>, int (_cl_program*, unsigned int, _cl_device_id* const*, char const*, void (*)(_cl_program*, void*), void*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP11_cl_programjPKP13_cl_device_idPKcPFvS3_PvESA_ENS_9allocatorISE_EESD_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP11_cl_programjPKP13_cl_device_idPKcPFvS3_PvESA_ENS_9allocatorISE_EESD_E18destroy_deallocateEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<int (*)(_cl_platform_id*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_platform_id*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_platform_id*, unsigned int, unsigned long, void*, unsigned long*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFiP15_cl_platform_idjmPvPmENS_9allocatorIS7_EES6_EE = NULL;

/* Demangled: MK::CStaticData::CStaticData() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CStaticDataC2Ev(void) {
    ALOGD("_ZN2MK11CStaticDataC2Ev() called");
    return 0;
}

/* Demangled: MK::CMemoryCopy::Record(void*, void const*, unsigned long, unsigned long*, unsigned long*, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CMemoryCopy6RecordEPvPKvmPmS4_S4_(void) {
    ALOGD("_ZN2MK11CMemoryCopy6RecordEPvPKvmPmS4_S4_() called");
    return 0;
}

/* Demangled: MK::clGetMemObjectInfo(_cl_mem*, unsigned int, unsigned long, void*, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK18clGetMemObjectInfoEP7_cl_memjmPvPm(void) {
    ALOGD("_ZN2MK18clGetMemObjectInfoEP7_cl_memjmPvPm() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueUnmapMemObject::Load(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK24CCLEnqueueUnmapMemObject4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK24CCLEnqueueUnmapMemObject4LoadERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<void* (*)(_cl_context*, unsigned long, unsigned long, unsigned int), std::__1::allocator<void* (*)(_cl_context*, unsigned long, unsigned long, unsigned int)>, void* (_cl_context*, unsigned long, unsigned long, unsigned int)>::__clone(std::__1::__function::__base<void* (_cl_context*, unsigned long, unsigned long, unsigned int)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFPvP11_cl_contextmmjENS_9allocatorIS6_EES5_E7__cloneEPNS0_6__baseIS5_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFPvP11_cl_contextmmjENS_9allocatorIS6_EES5_E7__cloneEPNS0_6__baseIS5_EE() called");
    return 0;
}

/* Demangled: MKConfig_IsRecordEnable */
extern "C" __attribute__((visibility("default"))) int MKConfig_IsRecordEnable(void) {
    ALOGD("MKConfig_IsRecordEnable() called");
    return 0;
}

/* Demangled: MK::clGetKernelWorkGroupInfo(_cl_kernel*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK24clGetKernelWorkGroupInfoEP10_cl_kernelP13_cl_device_idjmPvPm(void) {
    ALOGD("_ZN2MK24clGetKernelWorkGroupInfoEP10_cl_kernelP13_cl_device_idjmPvPm() called");
    return 0;
}

/* Demangled: clGetEventInfo */
extern "C" __attribute__((visibility("default"))) int clGetEventInfo(void) {
    ALOGD("clGetEventInfo() called");
    return 0;
}

/* Exported Object: vtable for MK::CCLCreateProgramWithBinary */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK26CCLCreateProgramWithBinaryE = NULL;

/* Demangled: MK::CCLRetainCommandQueue::CCLRetainCommandQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK21CCLRetainCommandQueueC2Ev(void) {
    ALOGD("_ZN2MK21CCLRetainCommandQueueC2Ev() called");
    return 0;
}

/* Demangled: MK::CProfileDataJob::Handle() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CProfileDataJob6HandleEv(void) {
    ALOGD("_ZN2MK15CProfileDataJob6HandleEv() called");
    return 0;
}

/* Demangled: clEnqueueCopyBufferRect */
extern "C" __attribute__((visibility("default"))) int clEnqueueCopyBufferRect(void) {
    ALOGD("clEnqueueCopyBufferRect() called");
    return 0;
}

/* Demangled: MK::CCLCreateImage::Link(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14CCLCreateImage4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK14CCLCreateImage4LinkERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: MKProgram_AttachCLCreateKernel */
extern "C" __attribute__((visibility("default"))) int MKProgram_AttachCLCreateKernel(void) {
    ALOGD("MKProgram_AttachCLCreateKernel() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_kernel*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_kernel*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_kernel*, unsigned int, unsigned long, void*, unsigned long*)>::__clone(std::__1::__function::__base<int (_cl_kernel*, unsigned int, unsigned long, void*, unsigned long*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP10_cl_kerneljmPvPmENS_9allocatorIS7_EES6_E7__cloneEPNS0_6__baseIS6_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP10_cl_kerneljmPvPmENS_9allocatorIS7_EES6_E7__cloneEPNS0_6__baseIS6_EE() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv() called");
    return 0;
}

/* Demangled: MK::CStaticData::~CStaticData() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CStaticDataD1Ev(void) {
    ALOGD("_ZN2MK11CStaticDataD1Ev() called");
    return 0;
}

/* Demangled: CmdL_SetCLContextExtendedProp */
extern "C" __attribute__((visibility("default"))) int CmdL_SetCLContextExtendedProp(void) {
    ALOGD("CmdL_SetCLContextExtendedProp() called");
    return 0;
}

/* Demangled: MK::CCLCreateCommandQueue::RegisterUniqueObject(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK21CCLCreateCommandQueue20RegisterUniqueObjectERNS_7CStreamE(void) {
    ALOGD("_ZN2MK21CCLCreateCommandQueue20RegisterUniqueObjectERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CStaticData::CStaticData(MK::CStaticData const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CStaticDataC2ERKS0_(void) {
    ALOGD("_ZN2MK11CStaticDataC2ERKS0_() called");
    return 0;
}

/* Demangled: MK::CInputTensors::Run(MKProgramType, MK::CContextLocal*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK13CInputTensors3RunE13MKProgramTypePNS_13CContextLocalE(void) {
    ALOGD("_ZN2MK13CInputTensors3RunE13MKProgramTypePNS_13CContextLocalE() called");
    return 0;
}

/* Demangled: MK::CProfileDataJob::CProfileDataJob(char const*, float) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CProfileDataJobC1EPKcf(void) {
    ALOGD("_ZN2MK15CProfileDataJobC1EPKcf() called");
    return 0;
}

/* Demangled: MK::CProgram::Factory(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK8CProgram7FactoryERNS_7CStreamE(void) {
    ALOGD("_ZN2MK8CProgram7FactoryERNS_7CStreamE() called");
    return 0;
}

/* Demangled: clReleaseDevice */
extern "C" __attribute__((visibility("default"))) int clReleaseDevice(void) {
    ALOGD("clReleaseDevice() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueWriteBuffer::Record(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK21CCLEnqueueWriteBuffer6RecordEP17_cl_command_queueP7_cl_memjmmPKvjPKP9_cl_eventS8_(void) {
    ALOGD("_ZN2MK21CCLEnqueueWriteBuffer6RecordEP17_cl_command_queueP7_cl_memjmmPKvjPKP9_cl_eventS8_() called");
    return 0;
}

/* Demangled: MK::CCLRetainEvent::Load(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14CCLRetainEvent4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK14CCLRetainEvent4LoadERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: MK::clEnqueueBarrierWithWaitList(_cl_command_queue*, unsigned int, _cl_event* const*, _cl_event**) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK28clEnqueueBarrierWithWaitListEP17_cl_command_queuejPKP9_cl_eventPS3_(void) {
    ALOGD("_ZN2MK28clEnqueueBarrierWithWaitListEP17_cl_command_queuejPKP9_cl_eventPS3_() called");
    return 0;
}

/* Demangled: MK::CCLRetainCommandQueue::~CCLRetainCommandQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK21CCLRetainCommandQueueD1Ev(void) {
    ALOGD("_ZN2MK21CCLRetainCommandQueueD1Ev() called");
    return 0;
}

/* Demangled: MK::CCLSVMAlloc::CopyConstructTo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK11CCLSVMAlloc15CopyConstructToEv(void) {
    ALOGD("_ZNK2MK11CCLSVMAlloc15CopyConstructToEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<bool (*)(int, void*), std::__1::allocator<bool (*)(int, void*)>, bool (int, void*)>::__clone(std::__1::__function::__base<bool (int, void*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFbiPvENS_9allocatorIS4_EES3_E7__cloneEPNS0_6__baseIS3_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFbiPvENS_9allocatorIS4_EES3_E7__cloneEPNS0_6__baseIS3_EE() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueReadBuffer::~CCLEnqueueReadBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK20CCLEnqueueReadBufferD2Ev(void) {
    ALOGD("_ZN2MK20CCLEnqueueReadBufferD2Ev() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, _cl_image_desc const*, void*, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, _cl_image_desc const*, void*, int*)>, _cl_mem* (_cl_context*, unsigned long, _cl_image_format const*, _cl_image_desc const*, void*, int*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatPK14_cl_image_descPvPiENS_9allocatorISF_EESE_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatPK14_cl_image_descPvPiENS_9allocatorISF_EESE_E7destroyEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<void* (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long const*, unsigned long const*, unsigned long*, unsigned long*, unsigned int, _cl_event* const*, _cl_event**, int*), std::__1::allocator<void* (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long const*, unsigned long const*, unsigned long*, unsigned long*, unsigned int, _cl_event* const*, _cl_event**, int*)>, void* (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long const*, unsigned long const*, unsigned long*, unsigned long*, unsigned int, _cl_event* const*, _cl_event**, int*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFPvP17_cl_command_queueP7_cl_memjmPKmS8_PmS9_jPKP9_cl_eventPSB_PiENS_9allocatorISH_EESG_EE = NULL;

/* Exported Object: vtable for std::__1::__function::__func<int (*)(_cl_mem*, void (*)(_cl_mem*, void*), void*), std::__1::allocator<int (*)(_cl_mem*, void (*)(_cl_mem*, void*), void*)>, int (_cl_mem*, void (*)(_cl_mem*, void*), void*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFiP7_cl_memPFvS3_PvES4_ENS_9allocatorIS8_EES7_EE = NULL;

/* Demangled: MK::CInputTensors::~CInputTensors() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK13CInputTensorsD2Ev(void) {
    ALOGD("_ZN2MK13CInputTensorsD2Ev() called");
    return 0;
}

/* Demangled: CmdL_AttachclCreateUserEvent */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclCreateUserEvent(void) {
    ALOGD("CmdL_AttachclCreateUserEvent() called");
    return 0;
}

/* Demangled: clRetainEvent */
extern "C" __attribute__((visibility("default"))) int clRetainEvent(void) {
    ALOGD("clRetainEvent() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*), std::__1::allocator<int (*)(_cl_command_queue*)>, int (_cl_command_queue*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueENS_9allocatorIS5_EES4_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queueENS_9allocatorIS5_EES4_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: MK::CCLReleaseCommandQueue::CCLReleaseCommandQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK22CCLReleaseCommandQueueC1Ev(void) {
    ALOGD("_ZN2MK22CCLReleaseCommandQueueC1Ev() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueNDRangeKernel::Run(MKProgramType, MK::CContextLocal*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK23CCLEnqueueNDRangeKernel3RunE13MKProgramTypePNS_13CContextLocalE(void) {
    ALOGD("_ZN2MK23CCLEnqueueNDRangeKernel3RunE13MKProgramTypePNS_13CContextLocalE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_command_queue* (*)(_cl_context*, _cl_device_id*, unsigned long const*, int*), std::__1::allocator<_cl_command_queue* (*)(_cl_context*, _cl_device_id*, unsigned long const*, int*)>, _cl_command_queue* (_cl_context*, _cl_device_id*, unsigned long const*, int*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFP17_cl_command_queueP11_cl_contextP13_cl_device_idPKmPiENS_9allocatorISC_EESB_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFP17_cl_command_queueP11_cl_contextP13_cl_device_idPKmPiENS_9allocatorISC_EESB_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned long, std::__1::allocator<unsigned long> >::__append(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorImNS_9allocatorImEEE8__appendEm(void) {
    ALOGD("_ZNSt3__16vectorImNS_9allocatorImEEE8__appendEm() called");
    return 0;
}

/* Demangled: MK::CUpdateBool::~CUpdateBool() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CUpdateBoolD2Ev(void) {
    ALOGD("_ZN2MK11CUpdateBoolD2Ev() called");
    return 0;
}

/* Demangled: CmdL_AttachclUnloadCompiler */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclUnloadCompiler(void) {
    ALOGD("CmdL_AttachclUnloadCompiler() called");
    return 0;
}

/* Demangled: MK::clRetainProgram(_cl_program*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15clRetainProgramEP11_cl_program(void) {
    ALOGD("_ZN2MK15clRetainProgramEP11_cl_program() called");
    return 0;
}

/* Demangled: MK::CCLReleaseContext::CCLReleaseContext() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK17CCLReleaseContextC2Ev(void) {
    ALOGD("_ZN2MK17CCLReleaseContextC2Ev() called");
    return 0;
}

/* Exported Object: MK::CCLRetainProgram::ms_kRTTI */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK16CCLRetainProgram8ms_kRTTIE = NULL;

/* Demangled: MK::CInputTensors::CInputTensors(MK::CInputTensors const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK13CInputTensorsC2ERKS0_(void) {
    ALOGD("_ZN2MK13CInputTensorsC2ERKS0_() called");
    return 0;
}

/* Demangled: MK::CCLCreateImage::CCLCreateImage() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14CCLCreateImageC1Ev(void) {
    ALOGD("_ZN2MK14CCLCreateImageC1Ev() called");
    return 0;
}

/* Demangled: MK::CCLCreateCommandQueue::GetMemoryUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK21CCLCreateCommandQueue13GetMemoryUsedEv(void) {
    ALOGD("_ZNK2MK21CCLCreateCommandQueue13GetMemoryUsedEv() called");
    return 0;
}

/* Demangled: MK::CCLReleaseKernel::CCLReleaseKernel() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLReleaseKernelC2Ev(void) {
    ALOGD("_ZN2MK16CCLReleaseKernelC2Ev() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, void const*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, void const*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, void const*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::__clone(std::__1::__function::__base<int (_cl_command_queue*, _cl_mem*, void const*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPKvmmmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEPNS0_6__baseISD_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPKvmmmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEPNS0_6__baseISD_EE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, char const*, int*), std::__1::allocator<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, char const*, int*)>, _cl_program* (_cl_context*, unsigned int, _cl_device_id* const*, char const*, int*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKcPiENS_9allocatorISE_EESD_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKcPiENS_9allocatorISE_EESD_E7destroyEv() called");
    return 0;
}

/* Demangled: MK::CLog::Log(char const*, ...) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK4CLog3LogEPKcz(void) {
    ALOGD("_ZN2MK4CLog3LogEPKcz() called");
    return 0;
}

/* Demangled: MK::CThreadJobQ::thread_function(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CThreadJobQ15thread_functionEPv(void) {
    ALOGD("_ZN2MK11CThreadJobQ15thread_functionEPv() called");
    return 0;
}

/* Demangled: MK::COutputTensors::COutputTensors() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14COutputTensorsC1Ev(void) {
    ALOGD("_ZN2MK14COutputTensorsC1Ev() called");
    return 0;
}

/* Demangled: MK::CCLCreateProgramWithBinary::CCLCreateProgramWithBinary() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK26CCLCreateProgramWithBinaryC1Ev(void) {
    ALOGD("_ZN2MK26CCLCreateProgramWithBinaryC1Ev() called");
    return 0;
}

/* Demangled: MK::CStaticData::Allocate(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CStaticData8AllocateEm(void) {
    ALOGD("_ZN2MK11CStaticData8AllocateEm() called");
    return 0;
}

/* Demangled: MK::CCLPrepareMemoryCopy::Link(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK20CCLPrepareMemoryCopy4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK20CCLPrepareMemoryCopy4LinkERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: MK::CCLReleaseCommandQueue::~CCLReleaseCommandQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK22CCLReleaseCommandQueueD0Ev(void) {
    ALOGD("_ZN2MK22CCLReleaseCommandQueueD0Ev() called");
    return 0;
}

/* Demangled: MK::CCLCreateProgramWithBinary::RegisterFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK26CCLCreateProgramWithBinary15RegisterFactoryEv(void) {
    ALOGD("_ZN2MK26CCLCreateProgramWithBinary15RegisterFactoryEv() called");
    return 0;
}

/* Exported Object: vtable for MK::CCLEnqueueCopyBufferToImage */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK27CCLEnqueueCopyBufferToImageE = NULL;

/* Demangled: MK::CCLProfileKernelJob::CCLProfileKernelJob(MK::CCLProfileKernelJob const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK19CCLProfileKernelJobC1ERKS0_(void) {
    ALOGD("_ZN2MK19CCLProfileKernelJobC1ERKS0_() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, void*, void const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, void*, void const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, unsigned int, void*, void const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejPvPKvmjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queuejPvPKvmjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E7destroyEv() called");
    return 0;
}

/* Demangled: MK::CCommand::CopyConstructTo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK8CCommand15CopyConstructToEv(void) {
    ALOGD("_ZNK2MK8CCommand15CopyConstructToEv() called");
    return 0;
}

/* Demangled: MK::CCLCreateProgramWithSource::Factory(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK26CCLCreateProgramWithSource7FactoryERNS_7CStreamE(void) {
    ALOGD("_ZN2MK26CCLCreateProgramWithSource7FactoryERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CCLReleaseContext::~CCLReleaseContext() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK17CCLReleaseContextD1Ev(void) {
    ALOGD("_ZN2MK17CCLReleaseContextD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_program*, unsigned int, _cl_device_id* const*, char const*, void (*)(_cl_program*, void*), void*), std::__1::allocator<int (*)(_cl_program*, unsigned int, _cl_device_id* const*, char const*, void (*)(_cl_program*, void*), void*)>, int (_cl_program*, unsigned int, _cl_device_id* const*, char const*, void (*)(_cl_program*, void*), void*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP11_cl_programjPKP13_cl_device_idPKcPFvS3_PvESA_ENS_9allocatorISE_EESD_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP11_cl_programjPKP13_cl_device_idPKcPFvS3_PvESA_ENS_9allocatorISE_EESD_E7destroyEv() called");
    return 0;
}

/* Demangled: std::__1::__deque_base<MK::CPointer<MK::CProgram>, std::__1::allocator<MK::CPointer<MK::CProgram> > >::clear() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__deque_baseIN2MK8CPointerINS1_8CProgramEEENS_9allocatorIS4_EEE5clearEv(void) {
    ALOGD("_ZNSt3__112__deque_baseIN2MK8CPointerINS1_8CProgramEEENS_9allocatorIS4_EEE5clearEv() called");
    return 0;
}

/* Demangled: MK::CProgram::Log(MK::CJsonLog&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK8CProgram3LogERNS_8CJsonLogE(void) {
    ALOGD("_ZNK2MK8CProgram3LogERNS_8CJsonLogE() called");
    return 0;
}

/* Demangled: MK::clEnqueueCopyImage(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK18clEnqueueCopyImageEP17_cl_command_queueP7_cl_memS3_PKmS5_S5_jPKP9_cl_eventPS7_(void) {
    ALOGD("_ZN2MK18clEnqueueCopyImageEP17_cl_command_queueP7_cl_memS3_PKmS5_S5_jPKP9_cl_eventPS7_() called");
    return 0;
}

/* Demangled: MK::CCLCreateImage::~CCLCreateImage() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14CCLCreateImageD0Ev(void) {
    ALOGD("_ZN2MK14CCLCreateImageD0Ev() called");
    return 0;
}

/* Demangled: MK::CCLCreateCommandQueue::CCLCreateCommandQueue(MK::CCLCreateCommandQueue const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK21CCLCreateCommandQueueC1ERKS0_(void) {
    ALOGD("_ZN2MK21CCLCreateCommandQueueC1ERKS0_() called");
    return 0;
}

/* Demangled: MK::CCLReleaseKernel::~CCLReleaseKernel() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLReleaseKernelD1Ev(void) {
    ALOGD("_ZN2MK16CCLReleaseKernelD1Ev() called");
    return 0;
}

/* Demangled: CmdL_AttachclCreateBuffer */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclCreateBuffer(void) {
    ALOGD("CmdL_AttachclCreateBuffer() called");
    return 0;
}

/* Demangled: MK::CCLCreateProgramWithBinary::~CCLCreateProgramWithBinary() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK26CCLCreateProgramWithBinaryD0Ev(void) {
    ALOGD("_ZN2MK26CCLCreateProgramWithBinaryD0Ev() called");
    return 0;
}

/* Demangled: MK::COutputTensors::~COutputTensors() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14COutputTensorsD0Ev(void) {
    ALOGD("_ZN2MK14COutputTensorsD0Ev() called");
    return 0;
}

/* Demangled: MK::CCLSVMAlloc::~CCLSVMAlloc() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CCLSVMAllocD2Ev(void) {
    ALOGD("_ZN2MK11CCLSVMAllocD2Ev() called");
    return 0;
}

/* Demangled: MKProgram_DetachCommand */
extern "C" __attribute__((visibility("default"))) int MKProgram_DetachCommand(void) {
    ALOGD("MKProgram_DetachCommand() called");
    return 0;
}

/* Demangled: MK::clReleaseSampler(_cl_sampler*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16clReleaseSamplerEP11_cl_sampler(void) {
    ALOGD("_ZN2MK16clReleaseSamplerEP11_cl_sampler() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<int, _cl_mem*>, std::__1::__map_value_compare<int, std::__1::__value_type<int, _cl_mem*>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, _cl_mem*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, _cl_mem*>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiP7_cl_memEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiP7_cl_memEENS_19__map_value_compareIiS4_NS_4lessIiEELb1EEENS_9allocatorIS4_EEE7destroyEPNS_11__tree_nodeIS4_PvEE() called");
    return 0;
}

/* Demangled: MK::CCLImportMemory::Run(MKProgramType, MK::CContextLocal*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLImportMemory3RunE13MKProgramTypePNS_13CContextLocalE(void) {
    ALOGD("_ZN2MK15CCLImportMemory3RunE13MKProgramTypePNS_13CContextLocalE() called");
    return 0;
}

/* Demangled: MK::CCLRetainKernel::CopyConstructTo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK15CCLRetainKernel15CopyConstructToEv(void) {
    ALOGD("_ZNK2MK15CCLRetainKernel15CopyConstructToEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_mem*, unsigned long, unsigned int, void const*, int*), std::__1::allocator<_cl_mem* (*)(_cl_mem*, unsigned long, unsigned int, void const*, int*)>, _cl_mem* (_cl_mem*, unsigned long, unsigned int, void const*, int*)>::__clone(std::__1::__function::__base<_cl_mem* (_cl_mem*, unsigned long, unsigned int, void const*, int*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFP7_cl_memS3_mjPKvPiENS_9allocatorIS8_EES7_E7__cloneEPNS0_6__baseIS7_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFP7_cl_memS3_mjPKvPiENS_9allocatorIS8_EES7_E7__cloneEPNS0_6__baseIS7_EE() called");
    return 0;
}

/* Demangled: MK::CDummyCommand::CopyConstructTo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK13CDummyCommand15CopyConstructToEv(void) {
    ALOGD("_ZNK2MK13CDummyCommand15CopyConstructToEv() called");
    return 0;
}

/* Demangled: CmdL_SetFunc4Fd */
extern "C" __attribute__((visibility("default"))) int CmdL_SetFunc4Fd(void) {
    ALOGD("CmdL_SetFunc4Fd() called");
    return 0;
}

/* Demangled: MK::CCLCreateBuffer::GetMemoryUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK15CCLCreateBuffer13GetMemoryUsedEv(void) {
    ALOGD("_ZNK2MK15CCLCreateBuffer13GetMemoryUsedEv() called");
    return 0;
}

/* Demangled: MKProgram_AttachCLFlush */
extern "C" __attribute__((visibility("default"))) int MKProgram_AttachCLFlush(void) {
    ALOGD("MKProgram_AttachCLFlush() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueUnmapMemObject::GetDiskUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK24CCLEnqueueUnmapMemObject11GetDiskUsedEv(void) {
    ALOGD("_ZNK2MK24CCLEnqueueUnmapMemObject11GetDiskUsedEv() called");
    return 0;
}

/* Demangled: MK::CCLWaitForEvents::Log(MK::CJsonLog&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK16CCLWaitForEvents3LogERNS_8CJsonLogE(void) {
    ALOGD("_ZNK2MK16CCLWaitForEvents3LogERNS_8CJsonLogE() called");
    return 0;
}

/* Demangled: MK::CUpdateBool::Factory(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CUpdateBool7FactoryERNS_7CStreamE(void) {
    ALOGD("_ZN2MK11CUpdateBool7FactoryERNS_7CStreamE() called");
    return 0;
}

/* Demangled: clEnqueueSVMFree */
extern "C" __attribute__((visibility("default"))) int clEnqueueSVMFree(void) {
    ALOGD("clEnqueueSVMFree() called");
    return 0;
}

/* Demangled: MK::CCLCreateProgramWithSource::CCLCreateProgramWithSource(MK::CCLCreateProgramWithSource const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK26CCLCreateProgramWithSourceC2ERKS0_(void) {
    ALOGD("_ZN2MK26CCLCreateProgramWithSourceC2ERKS0_() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMarker::Log(MK::CJsonLog&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK16CCLEnqueueMarker3LogERNS_8CJsonLogE(void) {
    ALOGD("_ZNK2MK16CCLEnqueueMarker3LogERNS_8CJsonLogE() called");
    return 0;
}

/* Demangled: MKUtils_MoveCommandsFrom */
extern "C" __attribute__((visibility("default"))) int MKUtils_MoveCommandsFrom(void) {
    ALOGD("MKUtils_MoveCommandsFrom() called");
    return 0;
}

/* Demangled: CmdL_AttachclEnqueueReadImage */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclEnqueueReadImage(void) {
    ALOGD("CmdL_AttachclEnqueueReadImage() called");
    return 0;
}

/* Demangled: clCreateProgramWithBuiltInKernels */
extern "C" __attribute__((visibility("default"))) int clCreateProgramWithBuiltInKernels(void) {
    ALOGD("clCreateProgramWithBuiltInKernels() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_mem*, void (*)(_cl_mem*, void*), void*), std::__1::allocator<int (*)(_cl_mem*, void (*)(_cl_mem*, void*), void*)>, int (_cl_mem*, void (*)(_cl_mem*, void*), void*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP7_cl_memPFvS3_PvES4_ENS_9allocatorIS8_EES7_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP7_cl_memPFvS3_PvES4_ENS_9allocatorIS8_EES7_E7destroyEv() called");
    return 0;
}

/* Demangled: clGetEventProfilingInfo */
extern "C" __attribute__((visibility("default"))) int clGetEventProfilingInfo(void) {
    ALOGD("clGetEventProfilingInfo() called");
    return 0;
}

/* Demangled: handleFlushFinishNULL(_cl_command_queue*, int) */
extern "C" __attribute__((visibility("default"))) int _Z21handleFlushFinishNULLP17_cl_command_queuei(void) {
    ALOGD("_Z21handleFlushFinishNULLP17_cl_command_queuei() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_kernel*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_kernel*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_kernel*, unsigned int, unsigned long, void*, unsigned long*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP10_cl_kerneljmPvPmENS_9allocatorIS7_EES6_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP10_cl_kerneljmPvPmENS_9allocatorIS7_EES6_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: MK::CMemoryCopy::Run(MKProgramType, MK::CContextLocal*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CMemoryCopy3RunE13MKProgramTypePNS_13CContextLocalE(void) {
    ALOGD("_ZN2MK11CMemoryCopy3RunE13MKProgramTypePNS_13CContextLocalE() called");
    return 0;
}

/* Exported Object: MK::CStream::ms_szTopLevel */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK7CStream13ms_szTopLevelE = NULL;

/* Demangled: CmdL_AttachclSVMAlloc */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclSVMAlloc(void) {
    ALOGD("CmdL_AttachclSVMAlloc() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueWriteBuffer::Link(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK21CCLEnqueueWriteBuffer4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK21CCLEnqueueWriteBuffer4LinkERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: MK::CCLSVMAlloc::GetDiskUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK11CCLSVMAlloc11GetDiskUsedEv(void) {
    ALOGD("_ZNK2MK11CCLSVMAlloc11GetDiskUsedEv() called");
    return 0;
}

/* Demangled: MK::CCLProfileJob::Handle() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK13CCLProfileJob6HandleEv(void) {
    ALOGD("_ZN2MK13CCLProfileJob6HandleEv() called");
    return 0;
}

/* Demangled: MK::CStream::Insert(MK::CObject*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK7CStream6InsertEPNS_7CObjectE(void) {
    ALOGD("_ZN2MK7CStream6InsertEPNS_7CObjectE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE() called");
    return 0;
}

/* Demangled: MK::CCLRetainMemObject::CCLRetainMemObject() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK18CCLRetainMemObjectC2Ev(void) {
    ALOGD("_ZN2MK18CCLRetainMemObjectC2Ev() called");
    return 0;
}

/* Exported Object: MK::CCLProfileJob::ms_kRTTI */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK13CCLProfileJob8ms_kRTTIE = NULL;

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuejmPvPmENS_9allocatorIS7_EES6_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP17_cl_command_queuejmPvPmENS_9allocatorIS7_EES6_E7__cloneEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(unsigned long, void*), std::__1::allocator<int (*)(unsigned long, void*)>, int (unsigned long, void*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFimPvENS_9allocatorIS4_EES3_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFimPvENS_9allocatorIS4_EES3_E7__cloneEv() called");
    return 0;
}

/* Demangled: clCreateProgramWithBinary */
extern "C" __attribute__((visibility("default"))) int clCreateProgramWithBinary(void) {
    ALOGD("clCreateProgramWithBinary() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueSVMUnmap::CCLEnqueueSVMUnmap() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK18CCLEnqueueSVMUnmapC1Ev(void) {
    ALOGD("_ZN2MK18CCLEnqueueSVMUnmapC1Ev() called");
    return 0;
}

/* Exported Object: vtable for MK::CCLBuildProgram */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK15CCLBuildProgramE = NULL;

/* Exported Object: MK::CCLReleaseEvent::ms_kRTTI */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK15CCLReleaseEvent8ms_kRTTIE = NULL;

/* Demangled: MK::CCLRetainContext::CCLRetainContext() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLRetainContextC2Ev(void) {
    ALOGD("_ZN2MK16CCLRetainContextC2Ev() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueSVMMap::GetMemoryUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK16CCLEnqueueSVMMap13GetMemoryUsedEv(void) {
    ALOGD("_ZNK2MK16CCLEnqueueSVMMap13GetMemoryUsedEv() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueReadBuffer::CCLEnqueueReadBuffer(MK::CCLEnqueueReadBuffer const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK20CCLEnqueueReadBufferC1ERKS0_(void) {
    ALOGD("_ZN2MK20CCLEnqueueReadBufferC1ERKS0_() called");
    return 0;
}

/* Demangled: MK::CCLSVMAlloc::Load(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CCLSVMAlloc4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK11CCLSVMAlloc4LoadERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<int (*)(_cl_device_id*, long const*, unsigned int, _cl_device_id**, unsigned int*), std::__1::allocator<int (*)(_cl_device_id*, long const*, unsigned int, _cl_device_id**, unsigned int*)>, int (_cl_device_id*, long const*, unsigned int, _cl_device_id**, unsigned int*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFiP13_cl_device_idPKljPS3_PjENS_9allocatorIS9_EES8_EE = NULL;

/* Demangled: MK::CStream::RemoveAll() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK7CStream9RemoveAllEv(void) {
    ALOGD("_ZN2MK7CStream9RemoveAllEv() called");
    return 0;
}

/* Demangled: MK::CCLImportMemory::Load(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLImportMemory4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK15CCLImportMemory4LoadERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Exported Object: vtable for MK::CCLWaitForEvents */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK16CCLWaitForEventsE = NULL;

/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__push_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIS6_EEvOT_() called");
    return 0;
}

/* Demangled: MK::CCLCreateImage::GetDiskUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK14CCLCreateImage11GetDiskUsedEv(void) {
    ALOGD("_ZNK2MK14CCLCreateImage11GetDiskUsedEv() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueReadBuffer::GetMemoryUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK20CCLEnqueueReadBuffer13GetMemoryUsedEv(void) {
    ALOGD("_ZNK2MK20CCLEnqueueReadBuffer13GetMemoryUsedEv() called");
    return 0;
}

/* Demangled: MK::CCLRetainMemObject::~CCLRetainMemObject() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK18CCLRetainMemObjectD1Ev(void) {
    ALOGD("_ZN2MK18CCLRetainMemObjectD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_mmPvjPKP9_cl_eventPSA_ENS_9allocatorISF_EESE_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_mmPvjPKP9_cl_eventPSA_ENS_9allocatorISF_EESE_E7__cloneEv() called");
    return 0;
}

/* Demangled: clCreateSubDevices */
extern "C" __attribute__((visibility("default"))) int clCreateSubDevices(void) {
    ALOGD("clCreateSubDevices() called");
    return 0;
}

/* Demangled: MK::CCommand::Load(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK8CCommand4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK8CCommand4LoadERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: MK::CCLRetainContext::~CCLRetainContext() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLRetainContextD1Ev(void) {
    ALOGD("_ZN2MK16CCLRetainContextD1Ev() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueSVMUnmap::~CCLEnqueueSVMUnmap() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK18CCLEnqueueSVMUnmapD0Ev(void) {
    ALOGD("_ZN2MK18CCLEnqueueSVMUnmapD0Ev() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueSVMUnmap::CopyConstructTo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK18CCLEnqueueSVMUnmap15CopyConstructToEv(void) {
    ALOGD("_ZNK2MK18CCLEnqueueSVMUnmap15CopyConstructToEv() called");
    return 0;
}

/* Demangled: MK::CStaticData::CStaticData() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CStaticDataC1Ev(void) {
    ALOGD("_ZN2MK11CStaticDataC1Ev() called");
    return 0;
}

/* Demangled: clGetDeviceInfo */
extern "C" __attribute__((visibility("default"))) int clGetDeviceInfo(void) {
    ALOGD("clGetDeviceInfo() called");
    return 0;
}

/* Demangled: MK::CCLProfileKernelJob::CCLProfileKernelJob(_cl_program*, _cl_program*, _cl_kernel*, _cl_kernel*, _cl_event*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK19CCLProfileKernelJobC1EP11_cl_programS2_P10_cl_kernelS4_P9_cl_event(void) {
    ALOGD("_ZN2MK19CCLProfileKernelJobC1EP11_cl_programS2_P10_cl_kernelS4_P9_cl_event() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueWriteBuffer::CCLEnqueueWriteBuffer(MK::CCLEnqueueWriteBuffer const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK21CCLEnqueueWriteBufferC1ERKS0_(void) {
    ALOGD("_ZN2MK21CCLEnqueueWriteBufferC1ERKS0_() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMemoryCopy::GetMemoryUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK20CCLEnqueueMemoryCopy13GetMemoryUsedEv(void) {
    ALOGD("_ZNK2MK20CCLEnqueueMemoryCopy13GetMemoryUsedEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, void (*)(void*), void*, unsigned long, unsigned int, _cl_mem* const*, void const**, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, void (*)(void*), void*, unsigned long, unsigned int, _cl_mem* const*, void const**, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, void (*)(void*), void*, unsigned long, unsigned int, _cl_mem* const*, void const**, unsigned int, _cl_event* const*, _cl_event**)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuePFvPvES4_mjPKP7_cl_memPPKvjPKP9_cl_eventPSF_ENS_9allocatorISK_EESJ_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP17_cl_command_queuePFvPvES4_mjPKP7_cl_memPPKvjPKP9_cl_eventPSF_ENS_9allocatorISK_EESJ_E7__cloneEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_platform_id*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_platform_id*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_platform_id*, unsigned int, unsigned long, void*, unsigned long*)>::operator()(_cl_platform_id*&&, unsigned int&&, unsigned long&&, void*&&, unsigned long*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP15_cl_platform_idjmPvPmENS_9allocatorIS7_EES6_EclEOS3_OjOmOS4_OS5_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP15_cl_platform_idjmPvPmENS_9allocatorIS7_EES6_EclEOS3_OjOmOS4_OS5_() called");
    return 0;
}

/* Demangled: MK::CDynamicData::~CDynamicData() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK12CDynamicDataD2Ev(void) {
    ALOGD("_ZN2MK12CDynamicDataD2Ev() called");
    return 0;
}

/* Demangled: MK::CVersion::operator<(MK::CVersion const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK8CVersionltERKS0_(void) {
    ALOGD("_ZNK2MK8CVersionltERKS0_() called");
    return 0;
}

/* Demangled: MK::CCLRetainContext::Record(_cl_context*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLRetainContext6RecordEP11_cl_context(void) {
    ALOGD("_ZN2MK16CCLRetainContext6RecordEP11_cl_context() called");
    return 0;
}

/* Demangled: MK::CCLImportMemory::~CCLImportMemory() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLImportMemoryD2Ev(void) {
    ALOGD("_ZN2MK15CCLImportMemoryD2Ev() called");
    return 0;
}

/* Exported Object: MK::CCLPrepareMemoryCopy::ms_kRTTI */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK20CCLPrepareMemoryCopy8ms_kRTTIE = NULL;

/* Demangled: MK::CCLEnqueueSVMMap::RegisterFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLEnqueueSVMMap15RegisterFactoryEv(void) {
    ALOGD("_ZN2MK16CCLEnqueueSVMMap15RegisterFactoryEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_device_id*, long const*, unsigned int, _cl_device_id**, unsigned int*), std::__1::allocator<int (*)(_cl_device_id*, long const*, unsigned int, _cl_device_id**, unsigned int*)>, int (_cl_device_id*, long const*, unsigned int, _cl_device_id**, unsigned int*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP13_cl_device_idPKljPS3_PjENS_9allocatorIS9_EES8_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP13_cl_device_idPKljPS3_PjENS_9allocatorIS9_EES8_E7__cloneEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<void (*)(int, void*), std::__1::allocator<void (*)(int, void*)>, void (int, void*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFviPvENS_9allocatorIS4_EES3_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFviPvENS_9allocatorIS4_EES3_E7destroyEv() called");
    return 0;
}

/* Demangled: MK::CCLCreateImage::RegisterFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14CCLCreateImage15RegisterFactoryEv(void) {
    ALOGD("_ZN2MK14CCLCreateImage15RegisterFactoryEv() called");
    return 0;
}

/* Demangled: std::__1::vector<_cl_kernel*, std::__1::allocator<_cl_kernel*> >::__append(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIP10_cl_kernelNS_9allocatorIS2_EEE8__appendEm(void) {
    ALOGD("_ZNSt3__16vectorIP10_cl_kernelNS_9allocatorIS2_EEE8__appendEm() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueUnmapMemObject::Factory(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK24CCLEnqueueUnmapMemObject7FactoryERNS_7CStreamE(void) {
    ALOGD("_ZN2MK24CCLEnqueueUnmapMemObject7FactoryERNS_7CStreamE() called");
    return 0;
}

/* Exported Object: MK::CCLEnqueueSVMUnmap::ms_kRTTI */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK18CCLEnqueueSVMUnmap8ms_kRTTIE = NULL;

/* Demangled: MK::CCLRetainCommandQueue::CCLRetainCommandQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK21CCLRetainCommandQueueC1Ev(void) {
    ALOGD("_ZN2MK21CCLRetainCommandQueueC1Ev() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMapBuffer::RegisterUniqueObject(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK19CCLEnqueueMapBuffer20RegisterUniqueObjectERNS_7CStreamE(void) {
    ALOGD("_ZN2MK19CCLEnqueueMapBuffer20RegisterUniqueObjectERNS_7CStreamE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<void* (*)(_cl_context*, unsigned long, unsigned long, unsigned int), std::__1::allocator<void* (*)(_cl_context*, unsigned long, unsigned long, unsigned int)>, void* (_cl_context*, unsigned long, unsigned long, unsigned int)>::operator()(_cl_context*&&, unsigned long&&, unsigned long&&, unsigned int&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFPvP11_cl_contextmmjENS_9allocatorIS6_EES5_EclEOS4_OmSB_Oj(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFPvP11_cl_contextmmjENS_9allocatorIS6_EES5_EclEOS4_OmSB_Oj() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<void* (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long const*, unsigned long const*, unsigned long*, unsigned long*, unsigned int, _cl_event* const*, _cl_event**, int*), std::__1::allocator<void* (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long const*, unsigned long const*, unsigned long*, unsigned long*, unsigned int, _cl_event* const*, _cl_event**, int*)>, void* (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long const*, unsigned long const*, unsigned long*, unsigned long*, unsigned int, _cl_event* const*, _cl_event**, int*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFPvP17_cl_command_queueP7_cl_memjmPKmS8_PmS9_jPKP9_cl_eventPSB_PiENS_9allocatorISH_EESG_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFPvP17_cl_command_queueP7_cl_memjmPKmS8_PmS9_jPKP9_cl_eventPSB_PiENS_9allocatorISH_EESG_E7destroyEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<int (*)(_cl_command_queue*, void*, void const*, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, void*, void const*, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, void*, void const*, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queuePvPKvmmjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_EE = NULL;

/* Demangled: MK::CStream::WriteDynamicString(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK7CStream18WriteDynamicStringEPKc(void) {
    ALOGD("_ZN2MK7CStream18WriteDynamicStringEPKc() called");
    return 0;
}

/* Demangled: MK::CCLCreateBuffer::GetDiskUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK15CCLCreateBuffer11GetDiskUsedEv(void) {
    ALOGD("_ZNK2MK15CCLCreateBuffer11GetDiskUsedEv() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueReadBuffer::CCLEnqueueReadBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK20CCLEnqueueReadBufferC2Ev(void) {
    ALOGD("_ZN2MK20CCLEnqueueReadBufferC2Ev() called");
    return 0;
}

/* Demangled: MK::CCLReleaseProgram::Load(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK17CCLReleaseProgram4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK17CCLReleaseProgram4LoadERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: MK::CCLSVMFree::CCLSVMFree(MK::CCLSVMFree const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK10CCLSVMFreeC2ERKS0_(void) {
    ALOGD("_ZN2MK10CCLSVMFreeC2ERKS0_() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_event*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_event*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_event*, unsigned int, unsigned long, void*, unsigned long*)>::operator()(_cl_event*&&, unsigned int&&, unsigned long&&, void*&&, unsigned long*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP9_cl_eventjmPvPmENS_9allocatorIS7_EES6_EclEOS3_OjOmOS4_OS5_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP9_cl_eventjmPvPmENS_9allocatorIS7_EES6_EclEOS3_OjOmOS4_OS5_() called");
    return 0;
}

/* Demangled: MK::CStaticData::~CStaticData() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CStaticDataD0Ev(void) {
    ALOGD("_ZN2MK11CStaticDataD0Ev() called");
    return 0;
}

/* Demangled: MK::CInputTensors::CopyConstructTo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK13CInputTensors15CopyConstructToEv(void) {
    ALOGD("_ZNK2MK13CInputTensors15CopyConstructToEv() called");
    return 0;
}

/* Demangled: MK::CMemoryCopy::RegisterUniqueObject(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CMemoryCopy20RegisterUniqueObjectERNS_7CStreamE(void) {
    ALOGD("_ZN2MK11CMemoryCopy20RegisterUniqueObjectERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CCLCreateKernel::GetMemoryUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK15CCLCreateKernel13GetMemoryUsedEv(void) {
    ALOGD("_ZNK2MK15CCLCreateKernel13GetMemoryUsedEv() called");
    return 0;
}

/* Demangled: MK::CInputTensors::CInputTensors() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK13CInputTensorsC2Ev(void) {
    ALOGD("_ZN2MK13CInputTensorsC2Ev() called");
    return 0;
}

/* Demangled: MK::CCLSVMAlloc::Factory(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CCLSVMAlloc7FactoryERNS_7CStreamE(void) {
    ALOGD("_ZN2MK11CCLSVMAlloc7FactoryERNS_7CStreamE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_kernel*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_kernel*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_kernel*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queueP10_cl_kerneljPKmS7_S7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EE = NULL;

/* Exported Object: vtable for std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, void const*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, void const*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, void const*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPKvmmmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EE = NULL;

/* Demangled: MK::CCLCreateContext::~CCLCreateContext() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLCreateContextD2Ev(void) {
    ALOGD("_ZN2MK16CCLCreateContextD2Ev() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueReadBuffer::CopyConstructTo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK20CCLEnqueueReadBuffer15CopyConstructToEv(void) {
    ALOGD("_ZNK2MK20CCLEnqueueReadBuffer15CopyConstructToEv() called");
    return 0;
}

/* Demangled: MK::CCLReleaseProgram::GetMemoryUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK17CCLReleaseProgram13GetMemoryUsedEv(void) {
    ALOGD("_ZNK2MK17CCLReleaseProgram13GetMemoryUsedEv() called");
    return 0;
}

/* Demangled: MK::CCLRetainCommandQueue::~CCLRetainCommandQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK21CCLRetainCommandQueueD0Ev(void) {
    ALOGD("_ZN2MK21CCLRetainCommandQueueD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, char const*, int*), std::__1::allocator<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, char const*, int*)>, _cl_program* (_cl_context*, unsigned int, _cl_device_id* const*, char const*, int*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKcPiENS_9allocatorISE_EESD_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKcPiENS_9allocatorISE_EESD_E7__cloneEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<void* (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**, int*), std::__1::allocator<void* (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**, int*)>, void* (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**, int*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFPvP17_cl_command_queueP7_cl_memjmmmjPKP9_cl_eventPS8_PiENS_9allocatorISE_EESD_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFPvP17_cl_command_queueP7_cl_memjmmmjPKP9_cl_eventPS8_PiENS_9allocatorISE_EESD_E7__cloneEv() called");
    return 0;
}

/* Demangled: MK::CCLCreateKernelsInProgram::RegisterFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK25CCLCreateKernelsInProgram15RegisterFactoryEv(void) {
    ALOGD("_ZN2MK25CCLCreateKernelsInProgram15RegisterFactoryEv() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueReadBuffer::~CCLEnqueueReadBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK20CCLEnqueueReadBufferD1Ev(void) {
    ALOGD("_ZN2MK20CCLEnqueueReadBufferD1Ev() called");
    return 0;
}

/* Demangled: MK::CCLSetKernelArg::Load(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLSetKernelArg4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK15CCLSetKernelArg4LoadERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Exported Object: MK::CJob::ms_kRTTI */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK4CJob8ms_kRTTIE = NULL;

/* Exported Object: MK::CBool::ms_kRTTI */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK5CBool8ms_kRTTIE = NULL;

/* Exported Object: MK::CObject::ms_pkFactory */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK7CObject12ms_pkFactoryE = NULL;

/* Demangled: MK::CCommand::Factory(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK8CCommand7FactoryERNS_7CStreamE(void) {
    ALOGD("_ZN2MK8CCommand7FactoryERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CCLWaitForEvents::Link(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLWaitForEvents4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK16CCLWaitForEvents4LinkERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_context* (*)(long const*, unsigned int, _cl_device_id* const*, void (*)(char const*, void const*, unsigned long, void*), void*, int*), std::__1::allocator<_cl_context* (*)(long const*, unsigned int, _cl_device_id* const*, void (*)(char const*, void const*, unsigned long, void*), void*, int*)>, _cl_context* (long const*, unsigned int, _cl_device_id* const*, void (*)(char const*, void const*, unsigned long, void*), void*, int*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFP11_cl_contextPKljPKP13_cl_device_idPFvPKcPKvmPvESE_PiENS_9allocatorISJ_EESI_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFP11_cl_contextPKljPKP13_cl_device_idPFvPKcPKvmPvESE_PiENS_9allocatorISJ_EESI_E7__cloneEv() called");
    return 0;
}

/* Demangled: MK::CInputTensors::~CInputTensors() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK13CInputTensorsD1Ev(void) {
    ALOGD("_ZN2MK13CInputTensorsD1Ev() called");
    return 0;
}

/* Demangled: MK::CProgram::CProgram(MKProgramType) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK8CProgramC1E13MKProgramType(void) {
    ALOGD("_ZN2MK8CProgramC1E13MKProgramType() called");
    return 0;
}

/* Demangled: CmdL_AttachclEnqueueMarker */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclEnqueueMarker(void) {
    ALOGD("CmdL_AttachclEnqueueMarker() called");
    return 0;
}

/* Demangled: clEnqueueBarrierWithWaitList */
extern "C" __attribute__((visibility("default"))) int clEnqueueBarrierWithWaitList(void) {
    ALOGD("clEnqueueBarrierWithWaitList() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<int (*)(unsigned int, _cl_event* const*), std::__1::allocator<int (*)(unsigned int, _cl_event* const*)>, int (unsigned int, _cl_event* const*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFijPKP9_cl_eventENS_9allocatorIS7_EES6_EE = NULL;

/* Demangled: MK::clGetDeviceInfo(_cl_device_id*, unsigned int, unsigned long, void*, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15clGetDeviceInfoEP13_cl_device_idjmPvPm(void) {
    ALOGD("_ZN2MK15clGetDeviceInfoEP13_cl_device_idjmPvPm() called");
    return 0;
}

/* Demangled: MK::CCLRetainProgram::~CCLRetainProgram() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLRetainProgramD2Ev(void) {
    ALOGD("_ZN2MK16CCLRetainProgramD2Ev() called");
    return 0;
}

/* Demangled: MK::CDynamicData::GetDiskUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK12CDynamicData11GetDiskUsedEv(void) {
    ALOGD("_ZNK2MK12CDynamicData11GetDiskUsedEv() called");
    return 0;
}

/* Demangled: MK::clGetContextInfo(_cl_context*, unsigned int, unsigned long, void*, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16clGetContextInfoEP11_cl_contextjmPvPm(void) {
    ALOGD("_ZN2MK16clGetContextInfoEP11_cl_contextjmPvPm() called");
    return 0;
}

/* Demangled: MK::CCLSVMAlloc::CCLSVMAlloc(MK::CCLSVMAlloc const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CCLSVMAllocC2ERKS0_(void) {
    ALOGD("_ZN2MK11CCLSVMAllocC2ERKS0_() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_mem*), std::__1::allocator<int (*)(_cl_mem*)>, int (_cl_mem*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP7_cl_memENS_9allocatorIS5_EES4_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP7_cl_memENS_9allocatorIS5_EES4_E18destroy_deallocateEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_kernel*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_kernel*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_kernel*, unsigned int, _cl_event* const*, _cl_event**)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queueP10_cl_kerneljPKP9_cl_eventPS7_ENS_9allocatorISC_EESB_EE = NULL;

/* Demangled: MK::CUpdateBool::~CUpdateBool() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CUpdateBoolD1Ev(void) {
    ALOGD("_ZN2MK11CUpdateBoolD1Ev() called");
    return 0;
}

/* Demangled: MK::CCLReleaseContext::CCLReleaseContext() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK17CCLReleaseContextC1Ev(void) {
    ALOGD("_ZN2MK17CCLReleaseContextC1Ev() called");
    return 0;
}

/* Demangled: MK::CCLBuildProgram::RegisterUniqueObject(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLBuildProgram20RegisterUniqueObjectERNS_7CStreamE(void) {
    ALOGD("_ZN2MK15CCLBuildProgram20RegisterUniqueObjectERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMapBuffer::Load(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK19CCLEnqueueMapBuffer4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK19CCLEnqueueMapBuffer4LoadERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: MK::CCLImportMemory::Factory(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLImportMemory7FactoryERNS_7CStreamE(void) {
    ALOGD("_ZN2MK15CCLImportMemory7FactoryERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CCLReleaseKernel::CCLReleaseKernel() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLReleaseKernelC1Ev(void) {
    ALOGD("_ZN2MK16CCLReleaseKernelC1Ev() called");
    return 0;
}

/* Demangled: MKUtils_CompareAsFloat */
extern "C" __attribute__((visibility("default"))) int MKUtils_CompareAsFloat(void) {
    ALOGD("MKUtils_CompareAsFloat() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_sampler* (*)(_cl_context*, unsigned long const*, int*), std::__1::allocator<_cl_sampler* (*)(_cl_context*, unsigned long const*, int*)>, _cl_sampler* (_cl_context*, unsigned long const*, int*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFP11_cl_samplerP11_cl_contextPKmPiENS_9allocatorISA_EES9_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFP11_cl_samplerP11_cl_contextPKmPiENS_9allocatorISA_EES9_E7destroyEv() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueReadBuffer::RegisterUniqueObject(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK20CCLEnqueueReadBuffer20RegisterUniqueObjectERNS_7CStreamE(void) {
    ALOGD("_ZN2MK20CCLEnqueueReadBuffer20RegisterUniqueObjectERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CCLReleaseKernel::RegisterFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLReleaseKernel15RegisterFactoryEv(void) {
    ALOGD("_ZN2MK16CCLReleaseKernel15RegisterFactoryEv() called");
    return 0;
}

/* Demangled: MK::CCLReleaseProgram::RegisterFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK17CCLReleaseProgram15RegisterFactoryEv(void) {
    ALOGD("_ZN2MK17CCLReleaseProgram15RegisterFactoryEv() called");
    return 0;
}

/* Demangled: MK::CCLCreateContext::CCLCreateContext(MK::CCLCreateContext const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLCreateContextC1ERKS0_(void) {
    ALOGD("_ZN2MK16CCLCreateContextC1ERKS0_() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueNDRangeKernel::Load(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK23CCLEnqueueNDRangeKernel4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK23CCLEnqueueNDRangeKernel4LoadERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, void**, void (*)(_cl_command_queue*, unsigned int, void**, void*), void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, void**, void (*)(_cl_command_queue*, unsigned int, void**, void*), void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, unsigned int, void**, void (*)(_cl_command_queue*, unsigned int, void**, void*), void*, unsigned int, _cl_event* const*, _cl_event**)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejPPvPFvS3_jS5_S4_ES4_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queuejPPvPFvS3_jS5_S4_ES4_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E18destroy_deallocateEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<int (*)(_cl_kernel*, unsigned int, unsigned long, void const*), std::__1::allocator<int (*)(_cl_kernel*, unsigned int, unsigned long, void const*)>, int (_cl_kernel*, unsigned int, unsigned long, void const*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFiP10_cl_kerneljmPKvENS_9allocatorIS7_EES6_EE = NULL;

/* Exported Object: vtable for std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, void*, void const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, void*, void const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, unsigned int, void*, void const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queuejPvPKvmjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_EE = NULL;

/* Demangled: MK::COutputTensors::Load(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14COutputTensors4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK14COutputTensors4LoadERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: MKStream_GetObjectOwnership */
extern "C" __attribute__((visibility("default"))) int MKStream_GetObjectOwnership(void) {
    ALOGD("MKStream_GetObjectOwnership() called");
    return 0;
}

/* Demangled: MK::clRetainEvent(_cl_event*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK13clRetainEventEP9_cl_event(void) {
    ALOGD("_ZN2MK13clRetainEventEP9_cl_event() called");
    return 0;
}

/* Demangled: clEnqueueFillBuffer */
extern "C" __attribute__((visibility("default"))) int clEnqueueFillBuffer(void) {
    ALOGD("clEnqueueFillBuffer() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMapBuffer::CCLEnqueueMapBuffer(MK::CCLEnqueueMapBuffer const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK19CCLEnqueueMapBufferC2ERKS0_(void) {
    ALOGD("_ZN2MK19CCLEnqueueMapBufferC2ERKS0_() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueCopyBufferToImage::Factory(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK27CCLEnqueueCopyBufferToImage7FactoryERNS_7CStreamE(void) {
    ALOGD("_ZN2MK27CCLEnqueueCopyBufferToImage7FactoryERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CCLReleaseContext::~CCLReleaseContext() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK17CCLReleaseContextD0Ev(void) {
    ALOGD("_ZN2MK17CCLReleaseContextD0Ev() called");
    return 0;
}

/* Demangled: MK::CCLSVMAlloc::CCLSVMAlloc() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CCLSVMAllocC2Ev(void) {
    ALOGD("_ZN2MK11CCLSVMAllocC2Ev() called");
    return 0;
}

/* Demangled: MK::CCLWaitForEvents::Save(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLWaitForEvents4SaveERNS_7CStreamE(void) {
    ALOGD("_ZN2MK16CCLWaitForEvents4SaveERNS_7CStreamE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_mem*), std::__1::allocator<int (*)(_cl_mem*)>, int (_cl_mem*)>::operator()(_cl_mem*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP7_cl_memENS_9allocatorIS5_EES4_EclEOS3_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP7_cl_memENS_9allocatorIS5_EES4_EclEOS3_() called");
    return 0;
}

/* Demangled: CmdL_SetFd */
extern "C" __attribute__((visibility("default"))) int CmdL_SetFd(void) {
    ALOGD("CmdL_SetFd() called");
    return 0;
}

/* Demangled: MK::clGetPlatformIDs(unsigned int, _cl_platform_id**, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16clGetPlatformIDsEjPP15_cl_platform_idPj(void) {
    ALOGD("_ZN2MK16clGetPlatformIDsEjPP15_cl_platform_idPj() called");
    return 0;
}

/* Demangled: MK::CCLReleaseKernel::~CCLReleaseKernel() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLReleaseKernelD0Ev(void) {
    ALOGD("_ZN2MK16CCLReleaseKernelD0Ev() called");
    return 0;
}

/* Demangled: MK::CCLRetainMemObject::GetDiskUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK18CCLRetainMemObject11GetDiskUsedEv(void) {
    ALOGD("_ZNK2MK18CCLRetainMemObject11GetDiskUsedEv() called");
    return 0;
}

/* Demangled: MK::CCLSVMFree::CopyConstructTo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK10CCLSVMFree15CopyConstructToEv(void) {
    ALOGD("_ZNK2MK10CCLSVMFree15CopyConstructToEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_program*, unsigned int, _cl_kernel**, unsigned int*), std::__1::allocator<int (*)(_cl_program*, unsigned int, _cl_kernel**, unsigned int*)>, int (_cl_program*, unsigned int, _cl_kernel**, unsigned int*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP11_cl_programjPP10_cl_kernelPjENS_9allocatorIS9_EES8_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP11_cl_programjPP10_cl_kernelPjENS_9allocatorIS9_EES8_E7__cloneEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<void (*)(int, void*), std::__1::allocator<void (*)(int, void*)>, void (int, void*)>::operator()(int&&, void*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFviPvENS_9allocatorIS4_EES3_EclEOiOS2_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFviPvENS_9allocatorIS4_EES3_EclEOiOS2_() called");
    return 0;
}

/* Demangled: clRetainProgram */
extern "C" __attribute__((visibility("default"))) int clRetainProgram(void) {
    ALOGD("clRetainProgram() called");
    return 0;
}

/* Demangled: MK::CCLCreateKernel::Record(_cl_program*, char const*, _cl_kernel*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLCreateKernel6RecordEP11_cl_programPKcP10_cl_kernel(void) {
    ALOGD("_ZN2MK15CCLCreateKernel6RecordEP11_cl_programPKcP10_cl_kernel() called");
    return 0;
}

/* Demangled: MK::CCLCreateContext::Link(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLCreateContext4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK16CCLCreateContext4LinkERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_kernel*, unsigned int, unsigned long, void const*), std::__1::allocator<int (*)(_cl_kernel*, unsigned int, unsigned long, void const*)>, int (_cl_kernel*, unsigned int, unsigned long, void const*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP10_cl_kerneljmPKvENS_9allocatorIS7_EES6_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP10_cl_kerneljmPKvENS_9allocatorIS7_EES6_E7destroyEv() called");
    return 0;
}

/* Demangled: MK::CBool::Factory(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK5CBool7FactoryERNS_7CStreamE(void) {
    ALOGD("_ZN2MK5CBool7FactoryERNS_7CStreamE() called");
    return 0;
}

/* Demangled: CmdL_CreateHandle */
extern "C" __attribute__((visibility("default"))) int CmdL_CreateHandle(void) {
    ALOGD("CmdL_CreateHandle() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_S7_mmmmPvjPKP9_cl_eventPSA_ENS_9allocatorISF_EESE_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_S7_mmmmPvjPKP9_cl_eventPSA_ENS_9allocatorISF_EESE_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: MK::CVersion::GetCombined() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK8CVersion11GetCombinedEv(void) {
    ALOGD("_ZNK2MK8CVersion11GetCombinedEv() called");
    return 0;
}

/* Demangled: MK::clEnqueueReadBufferRect(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK23clEnqueueReadBufferRectEP17_cl_command_queueP7_cl_memjPKmS5_S5_mmmmPvjPKP9_cl_eventPS8_(void) {
    ALOGD("_ZN2MK23clEnqueueReadBufferRectEP17_cl_command_queueP7_cl_memjPKmS5_S5_mmmmPvjPKP9_cl_eventPS8_() called");
    return 0;
}

/* Demangled: clGetKernelWorkGroupInfo */
extern "C" __attribute__((visibility("default"))) int clGetKernelWorkGroupInfo(void) {
    ALOGD("clGetKernelWorkGroupInfo() called");
    return 0;
}

/* Demangled: MK::CCLCreateBuffer::Run(MKProgramType, MK::CContextLocal*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLCreateBuffer3RunE13MKProgramTypePNS_13CContextLocalE(void) {
    ALOGD("_ZN2MK15CCLCreateBuffer3RunE13MKProgramTypePNS_13CContextLocalE() called");
    return 0;
}

/* Demangled: MK::CCLPrepareMemoryCopy::GetDiskUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK20CCLPrepareMemoryCopy11GetDiskUsedEv(void) {
    ALOGD("_ZNK2MK20CCLPrepareMemoryCopy11GetDiskUsedEv() called");
    return 0;
}

/* Demangled: MK::CCLSVMAlloc::~CCLSVMAlloc() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CCLSVMAllocD1Ev(void) {
    ALOGD("_ZN2MK11CCLSVMAllocD1Ev() called");
    return 0;
}

/* Demangled: MK::CMemoryCopy::RegisterFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CMemoryCopy15RegisterFactoryEv(void) {
    ALOGD("_ZN2MK11CMemoryCopy15RegisterFactoryEv() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, _cl_device_id*>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, _cl_device_id*>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, _cl_device_id*> > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEP13_cl_device_idEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISL_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEP13_cl_device_idEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISL_EERKT_() called");
    return 0;
}

/* Demangled: MK::CCLCreateProgramWithBinary::Link(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK26CCLCreateProgramWithBinary4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK26CCLCreateProgramWithBinary4LinkERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_program*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, char const**, void (*)(_cl_program*, void*), void*), std::__1::allocator<int (*)(_cl_program*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, char const**, void (*)(_cl_program*, void*), void*)>, int (_cl_program*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, char const**, void (*)(_cl_program*, void*), void*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP11_cl_programjPKP13_cl_device_idPKcjPKS3_PS9_PFvS3_PvESD_ENS_9allocatorISH_EESG_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP11_cl_programjPKP13_cl_device_idPKcjPKS3_PS9_PFvS3_PvESD_ENS_9allocatorISH_EESG_E7destroyEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, _cl_mem* const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, _cl_mem* const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, unsigned int, _cl_mem* const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::__clone(std::__1::__function::__base<int (_cl_command_queue*, unsigned int, _cl_mem* const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuejPKP7_cl_memmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEPNS0_6__baseISD_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP17_cl_command_queuejPKP7_cl_memmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEPNS0_6__baseISD_EE() called");
    return 0;
}

/* Demangled: CmdL_AttachclSVMFree */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclSVMFree(void) {
    ALOGD("CmdL_AttachclSVMFree() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueNDRangeKernel::CCLEnqueueNDRangeKernel(MK::CCLEnqueueNDRangeKernel const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK23CCLEnqueueNDRangeKernelC2ERKS0_(void) {
    ALOGD("_ZN2MK23CCLEnqueueNDRangeKernelC2ERKS0_() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_program* (*)(_cl_context*, unsigned int, char const**, unsigned long const*, int*), std::__1::allocator<_cl_program* (*)(_cl_context*, unsigned int, char const**, unsigned long const*, int*)>, _cl_program* (_cl_context*, unsigned int, char const**, unsigned long const*, int*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPPKcPKmPiENS_9allocatorISD_EESC_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPPKcPKmPiENS_9allocatorISD_EESC_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_sampler*), std::__1::allocator<int (*)(_cl_sampler*)>, int (_cl_sampler*)>::__clone(std::__1::__function::__base<int (_cl_sampler*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP11_cl_samplerENS_9allocatorIS5_EES4_E7__cloneEPNS0_6__baseIS4_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP11_cl_samplerENS_9allocatorIS5_EES4_E7__cloneEPNS0_6__baseIS4_EE() called");
    return 0;
}

/* Demangled: MK::CMemoryCopy::CMemoryCopy(MK::CMemoryCopy const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CMemoryCopyC1ERKS0_(void) {
    ALOGD("_ZN2MK11CMemoryCopyC1ERKS0_() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_command_queue* (*)(_cl_context*, _cl_device_id*, unsigned long, int*), std::__1::allocator<_cl_command_queue* (*)(_cl_context*, _cl_device_id*, unsigned long, int*)>, _cl_command_queue* (_cl_context*, _cl_device_id*, unsigned long, int*)>::operator()(_cl_context*&&, _cl_device_id*&&, unsigned long&&, int*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFP17_cl_command_queueP11_cl_contextP13_cl_device_idmPiENS_9allocatorISA_EES9_EclEOS5_OS7_OmOS8_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFP17_cl_command_queueP11_cl_contextP13_cl_device_idmPiENS_9allocatorISA_EES9_EclEOS5_OS7_OmOS8_() called");
    return 0;
}

/* Demangled: MK::CThreadJobQ::Init() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CThreadJobQ4InitEv(void) {
    ALOGD("_ZN2MK11CThreadJobQ4InitEv() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE16_NS_13basic_ostreamIcS2_EE = NULL;

/* Demangled: MK::clEnqueueSVMUnmap(_cl_command_queue*, void*, unsigned int, _cl_event* const*, _cl_event**) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK17clEnqueueSVMUnmapEP17_cl_command_queuePvjPKP9_cl_eventPS4_(void) {
    ALOGD("_ZN2MK17clEnqueueSVMUnmapEP17_cl_command_queuePvjPKP9_cl_eventPS4_() called");
    return 0;
}

/* Demangled: MK::CCLRetainMemObject::CCLRetainMemObject() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK18CCLRetainMemObjectC1Ev(void) {
    ALOGD("_ZN2MK18CCLRetainMemObjectC1Ev() called");
    return 0;
}

/* Demangled: std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >::__append(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIhNS_9allocatorIhEEE8__appendEm(void) {
    ALOGD("_ZNSt3__16vectorIhNS_9allocatorIhEEE8__appendEm() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, _cl_event* const*), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, _cl_event* const*)>, int (_cl_command_queue*, unsigned int, _cl_event* const*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuejPKP9_cl_eventENS_9allocatorIS9_EES8_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP17_cl_command_queuejPKP9_cl_eventENS_9allocatorIS9_EES8_E7__cloneEv() called");
    return 0;
}

/* Demangled: MK::clBuildProgram(_cl_program*, unsigned int, _cl_device_id* const*, char const*, void (*)(_cl_program*, void*), void*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14clBuildProgramEP11_cl_programjPKP13_cl_device_idPKcPFvS1_PvES8_(void) {
    ALOGD("_ZN2MK14clBuildProgramEP11_cl_programjPKP13_cl_device_idPKcPFvS1_PvES8_() called");
    return 0;
}

/* Demangled: MK::CCLRetainContext::CCLRetainContext() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLRetainContextC1Ev(void) {
    ALOGD("_ZN2MK16CCLRetainContextC1Ev() called");
    return 0;
}

/* Demangled: MK::CCLCreateBuffer::CCLCreateBuffer(MK::CCLCreateBuffer const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLCreateBufferC1ERKS0_(void) {
    ALOGD("_ZN2MK15CCLCreateBufferC1ERKS0_() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMapBuffer::GetDiskUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK19CCLEnqueueMapBuffer11GetDiskUsedEv(void) {
    ALOGD("_ZNK2MK19CCLEnqueueMapBuffer11GetDiskUsedEv() called");
    return 0;
}

/* Demangled: MK::CStream::GetObjectFromLinkMap(MK::CObject*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK7CStream20GetObjectFromLinkMapEPNS_7CObjectE(void) {
    ALOGD("_ZN2MK7CStream20GetObjectFromLinkMapEPNS_7CObjectE() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_iostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_14basic_iostreamIcS2_EE = NULL;

/* Demangled: CmdL_AttachclEnqueueCopyBufferRect */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclEnqueueCopyBufferRect(void) {
    ALOGD("CmdL_AttachclEnqueueCopyBufferRect() called");
    return 0;
}

/* Demangled: MK::CCLCreateImage::Run(MKProgramType, MK::CContextLocal*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14CCLCreateImage3RunE13MKProgramTypePNS_13CContextLocalE(void) {
    ALOGD("_ZN2MK14CCLCreateImage3RunE13MKProgramTypePNS_13CContextLocalE() called");
    return 0;
}

/* Demangled: MK::CCLCreateCommandQueue::GetDiskUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK21CCLCreateCommandQueue11GetDiskUsedEv(void) {
    ALOGD("_ZNK2MK21CCLCreateCommandQueue11GetDiskUsedEv() called");
    return 0;
}

/* Demangled: MK::CCLCreateKernelsInProgram::Log(MK::CJsonLog&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK25CCLCreateKernelsInProgram3LogERNS_8CJsonLogE(void) {
    ALOGD("_ZNK2MK25CCLCreateKernelsInProgram3LogERNS_8CJsonLogE() called");
    return 0;
}

/* Exported Object: vtable for MK::CCLEnqueueMemoryCopy */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK20CCLEnqueueMemoryCopyE = NULL;

/* Demangled: MK::CDynamicData::CDynamicData() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK12CDynamicDataC2Ev(void) {
    ALOGD("_ZN2MK12CDynamicDataC2Ev() called");
    return 0;
}

/* Demangled: MK::CCLCreateImage::Record(_cl_context*, unsigned long, _cl_image_format const*, _cl_image_desc const*, void*, _cl_mem*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14CCLCreateImage6RecordEP11_cl_contextmPK16_cl_image_formatPK14_cl_image_descPvP7_cl_mem(void) {
    ALOGD("_ZN2MK14CCLCreateImage6RecordEP11_cl_contextmPK16_cl_image_formatPK14_cl_image_descPvP7_cl_mem() called");
    return 0;
}

/* Demangled: MK::CCLCreateKernel::CCLCreateKernel(MK::CCLCreateKernel const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLCreateKernelC2ERKS0_(void) {
    ALOGD("_ZN2MK15CCLCreateKernelC2ERKS0_() called");
    return 0;
}

/* Demangled: MK::CCLImportMemory::CCLImportMemory() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLImportMemoryC2Ev(void) {
    ALOGD("_ZN2MK15CCLImportMemoryC2Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<int (*)(_cl_device_id*), std::__1::allocator<int (*)(_cl_device_id*)>, int (_cl_device_id*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFiP13_cl_device_idENS_9allocatorIS5_EES4_EE = NULL;

/* Demangled: MK::clCreateImage3D(_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, void*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15clCreateImage3DEP11_cl_contextmPK16_cl_image_formatmmmmmPvPi(void) {
    ALOGD("_ZN2MK15clCreateImage3DEP11_cl_contextmPK16_cl_image_formatmmmmmPvPi() called");
    return 0;
}

/* Demangled: MK::CCLRetainMemObject::~CCLRetainMemObject() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK18CCLRetainMemObjectD0Ev(void) {
    ALOGD("_ZN2MK18CCLRetainMemObjectD0Ev() called");
    return 0;
}

/* Demangled: MK::CCLRetainContext::~CCLRetainContext() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLRetainContextD0Ev(void) {
    ALOGD("_ZN2MK16CCLRetainContextD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_device_id*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP13_cl_device_idjmPvPmENS_9allocatorIS7_EES6_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP13_cl_device_idjmPvPmENS_9allocatorIS7_EES6_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: MK::COutputTensors::AddRecord(int, void const*, unsigned long, int const*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14COutputTensors9AddRecordEiPKvmPKi(void) {
    ALOGD("_ZN2MK14COutputTensors9AddRecordEiPKvmPKi() called");
    return 0;
}

/* Demangled: CmdL_AttachclReleaseProgram */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclReleaseProgram(void) {
    ALOGD("CmdL_AttachclReleaseProgram() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(unsigned int, _cl_event* const*), std::__1::allocator<int (*)(unsigned int, _cl_event* const*)>, int (unsigned int, _cl_event* const*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFijPKP9_cl_eventENS_9allocatorIS7_EES6_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFijPKP9_cl_eventENS_9allocatorIS7_EES6_E7__cloneEv() called");
    return 0;
}

/* Demangled: MK::CDynamicData::~CDynamicData() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK12CDynamicDataD1Ev(void) {
    ALOGD("_ZN2MK12CDynamicDataD1Ev() called");
    return 0;
}

/* Demangled: MK::CUpdateBool::Save(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CUpdateBool4SaveERNS_7CStreamE(void) {
    ALOGD("_ZN2MK11CUpdateBool4SaveERNS_7CStreamE() called");
    return 0;
}

/* Demangled: CmdL_AttachclRetainKernel */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclRetainKernel(void) {
    ALOGD("CmdL_AttachclRetainKernel() called");
    return 0;
}

/* Demangled: MK::CCLImportMemory::~CCLImportMemory() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLImportMemoryD1Ev(void) {
    ALOGD("_ZN2MK15CCLImportMemoryD1Ev() called");
    return 0;
}

/* Demangled: MK::CCLReleaseMemObject::Factory(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK19CCLReleaseMemObject7FactoryERNS_7CStreamE(void) {
    ALOGD("_ZN2MK19CCLReleaseMemObject7FactoryERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CCLProfileKernelJob::~CCLProfileKernelJob() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK19CCLProfileKernelJobD2Ev(void) {
    ALOGD("_ZN2MK19CCLProfileKernelJobD2Ev() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, void*, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, void*, int*)>, _cl_mem* (_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, void*, int*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatmmmmmPvPiENS_9allocatorISC_EESB_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatmmmmmPvPiENS_9allocatorISC_EESB_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: MK::CCLCreateBuffer::Save(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLCreateBuffer4SaveERNS_7CStreamE(void) {
    ALOGD("_ZN2MK15CCLCreateBuffer4SaveERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CProgram::CProgram(MKProgramType) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK8CProgramC2E13MKProgramType(void) {
    ALOGD("_ZN2MK8CProgramC2E13MKProgramType() called");
    return 0;
}

/* Demangled: MK::CLUtils::GetOpenCLDriverVersionNumber(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK7CLUtils28GetOpenCLDriverVersionNumberENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN2MK7CLUtils28GetOpenCLDriverVersionNumberENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: MK::CStream::Save(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK7CStream4SaveEPKc(void) {
    ALOGD("_ZN2MK7CStream4SaveEPKc() called");
    return 0;
}

/* Demangled: MK::CCLCreateContext::CCLCreateContext() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLCreateContextC2Ev(void) {
    ALOGD("_ZN2MK16CCLCreateContextC2Ev() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueUnmapMemObject::CCLEnqueueUnmapMemObject(MK::CCLEnqueueUnmapMemObject const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK24CCLEnqueueUnmapMemObjectC2ERKS0_(void) {
    ALOGD("_ZN2MK24CCLEnqueueUnmapMemObjectC2ERKS0_() called");
    return 0;
}

/* Demangled: MK::clGetPipeInfo(_cl_mem*, unsigned int, unsigned long, void*, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK13clGetPipeInfoEP7_cl_memjmPvPm(void) {
    ALOGD("_ZN2MK13clGetPipeInfoEP7_cl_memjmPvPm() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueReadBuffer::CCLEnqueueReadBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK20CCLEnqueueReadBufferC1Ev(void) {
    ALOGD("_ZN2MK20CCLEnqueueReadBufferC1Ev() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_sampler*), std::__1::allocator<int (*)(_cl_sampler*)>, int (_cl_sampler*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP11_cl_samplerENS_9allocatorIS5_EES4_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP11_cl_samplerENS_9allocatorIS5_EES4_E7__cloneEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, _cl_image_desc const*, void*, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, _cl_image_desc const*, void*, int*)>, _cl_mem* (_cl_context*, unsigned long, _cl_image_format const*, _cl_image_desc const*, void*, int*)>::operator()(_cl_context*&&, unsigned long&&, _cl_image_format const*&&, _cl_image_desc const*&&, void*&&, int*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatPK14_cl_image_descPvPiENS_9allocatorISF_EESE_EclEOS5_OmOS8_OSB_OSC_OSD_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatPK14_cl_image_descPvPiENS_9allocatorISF_EESE_EclEOS5_OmOS8_OSB_OSC_OSD_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_mmPKvjPKP9_cl_eventPSB_ENS_9allocatorISG_EESF_EE = NULL;

/* Demangled: MK::CVersion::CVersion(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK8CVersionC2EPKc(void) {
    ALOGD("_ZN2MK8CVersionC2EPKc() called");
    return 0;
}

/* Demangled: MK::CInputTensors::CInputTensors() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK13CInputTensorsC1Ev(void) {
    ALOGD("_ZN2MK13CInputTensorsC1Ev() called");
    return 0;
}

/* Demangled: MK::clEnqueueMarker(_cl_command_queue*, _cl_event**) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15clEnqueueMarkerEP17_cl_command_queuePP9_cl_event(void) {
    ALOGD("_ZN2MK15clEnqueueMarkerEP17_cl_command_queuePP9_cl_event() called");
    return 0;
}

/* Demangled: MK::CCLImportMemory::CCLImportMemory(MK::CCLImportMemory const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLImportMemoryC2ERKS0_(void) {
    ALOGD("_ZN2MK15CCLImportMemoryC2ERKS0_() called");
    return 0;
}

/* Demangled: MK::CCLSetKernelArg::CCLSetKernelArg(MK::CCLSetKernelArg const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLSetKernelArgC1ERKS0_(void) {
    ALOGD("_ZN2MK15CCLSetKernelArgC1ERKS0_() called");
    return 0;
}

/* Demangled: MK::CStaticData::GetDiskUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK11CStaticData11GetDiskUsedEv(void) {
    ALOGD("_ZNK2MK11CStaticData11GetDiskUsedEv() called");
    return 0;
}

/* Demangled: std::__1::deque<MK::CPointer<MK::CJob>, std::__1::allocator<MK::CPointer<MK::CJob> > >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN2MK8CPointerINS1_4CJobEEENS_9allocatorIS4_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeIN2MK8CPointerINS1_4CJobEEENS_9allocatorIS4_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: MK::CCLCreateContext::~CCLCreateContext() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLCreateContextD1Ev(void) {
    ALOGD("_ZN2MK16CCLCreateContextD1Ev() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueNDRangeKernel::RegisterUniqueObject(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK23CCLEnqueueNDRangeKernel20RegisterUniqueObjectERNS_7CStreamE(void) {
    ALOGD("_ZN2MK23CCLEnqueueNDRangeKernel20RegisterUniqueObjectERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueUnmapMemObject::Log(MK::CJsonLog&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK24CCLEnqueueUnmapMemObject3LogERNS_8CJsonLogE(void) {
    ALOGD("_ZNK2MK24CCLEnqueueUnmapMemObject3LogERNS_8CJsonLogE() called");
    return 0;
}

/* Demangled: MK::CCLRetainProgram::CCLRetainProgram() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLRetainProgramC2Ev(void) {
    ALOGD("_ZN2MK16CCLRetainProgramC2Ev() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueReadBuffer::~CCLEnqueueReadBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK20CCLEnqueueReadBufferD0Ev(void) {
    ALOGD("_ZN2MK20CCLEnqueueReadBufferD0Ev() called");
    return 0;
}

/* Demangled: MK::CCLRetainProgram::CCLRetainProgram(MK::CCLRetainProgram const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLRetainProgramC2ERKS0_(void) {
    ALOGD("_ZN2MK16CCLRetainProgramC2ERKS0_() called");
    return 0;
}

/* Demangled: MK::CDynamicData::RegisterFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK12CDynamicData15RegisterFactoryEv(void) {
    ALOGD("_ZN2MK12CDynamicData15RegisterFactoryEv() called");
    return 0;
}

/* Demangled: MK::CCLRetainContext::RegisterUniqueObject(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLRetainContext20RegisterUniqueObjectERNS_7CStreamE(void) {
    ALOGD("_ZN2MK16CCLRetainContext20RegisterUniqueObjectERNS_7CStreamE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_program*, unsigned int, _cl_kernel**, unsigned int*), std::__1::allocator<int (*)(_cl_program*, unsigned int, _cl_kernel**, unsigned int*)>, int (_cl_program*, unsigned int, _cl_kernel**, unsigned int*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP11_cl_programjPP10_cl_kernelPjENS_9allocatorIS9_EES8_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP11_cl_programjPP10_cl_kernelPjENS_9allocatorIS9_EES8_E7destroyEv() called");
    return 0;
}

/* Demangled: MK::CDynamicData::Log(MK::CJsonLog&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK12CDynamicData3LogERNS_8CJsonLogE(void) {
    ALOGD("_ZNK2MK12CDynamicData3LogERNS_8CJsonLogE() called");
    return 0;
}

/* Demangled: MK::CInputTensors::~CInputTensors() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK13CInputTensorsD0Ev(void) {
    ALOGD("_ZN2MK13CInputTensorsD0Ev() called");
    return 0;
}

/* Demangled: MK::SaveMemObjectsData(_cl_command_queue*, _cl_mem*, MK::CStaticData*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK18SaveMemObjectsDataEP17_cl_command_queueP7_cl_memPNS_11CStaticDataE(void) {
    ALOGD("_ZN2MK18SaveMemObjectsDataEP17_cl_command_queueP7_cl_memPNS_11CStaticDataE() called");
    return 0;
}

/* Demangled: MK::CCLCreateBuffer::Link(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLCreateBuffer4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK15CCLCreateBuffer4LinkERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueCopyBufferToImage::CopyConstructTo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK27CCLEnqueueCopyBufferToImage15CopyConstructToEv(void) {
    ALOGD("_ZNK2MK27CCLEnqueueCopyBufferToImage15CopyConstructToEv() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMemoryCopy::Load(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK20CCLEnqueueMemoryCopy4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK20CCLEnqueueMemoryCopy4LoadERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_context* (*)(long const*, unsigned long, void (*)(char const*, void const*, unsigned long, void*), void*, int*), std::__1::allocator<_cl_context* (*)(long const*, unsigned long, void (*)(char const*, void const*, unsigned long, void*), void*, int*)>, _cl_context* (long const*, unsigned long, void (*)(char const*, void const*, unsigned long, void*), void*, int*)>::operator()(long const*&&, unsigned long&&, void (*&&)(char const*, void const*, unsigned long, void*), void*&&, int*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFP11_cl_contextPKlmPFvPKcPKvmPvESA_PiENS_9allocatorISF_EESE_EclEOS5_OmOSC_OSA_OSD_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFP11_cl_contextPKlmPFvPKcPKvmPvESA_PiENS_9allocatorISF_EESE_EclEOS5_OmOSC_OSA_OSD_() called");
    return 0;
}

/* Demangled: MK::CCLCreateKernel::Link(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLCreateKernel4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK15CCLCreateKernel4LinkERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMarker::Factory(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLEnqueueMarker7FactoryERNS_7CStreamE(void) {
    ALOGD("_ZN2MK16CCLEnqueueMarker7FactoryERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CCLReleaseProgram::RegisterUniqueObject(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK17CCLReleaseProgram20RegisterUniqueObjectERNS_7CStreamE(void) {
    ALOGD("_ZN2MK17CCLReleaseProgram20RegisterUniqueObjectERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CCLRetainProgram::~CCLRetainProgram() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLRetainProgramD1Ev(void) {
    ALOGD("_ZN2MK16CCLRetainProgramD1Ev() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueSVMUnmap::RegisterFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK18CCLEnqueueSVMUnmap15RegisterFactoryEv(void) {
    ALOGD("_ZN2MK18CCLEnqueueSVMUnmap15RegisterFactoryEv() called");
    return 0;
}

/* Demangled: MK::CObject::RegisterUniqueObject(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK7CObject20RegisterUniqueObjectERNS_7CStreamE(void) {
    ALOGD("_ZN2MK7CObject20RegisterUniqueObjectERNS_7CStreamE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<MK::CObject*, void*>, std::__1::__map_value_compare<MK::CObject*, std::__1::__value_type<MK::CObject*, void*>, std::__1::less<MK::CObject*>, true>, std::__1::allocator<std::__1::__value_type<MK::CObject*, void*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<MK::CObject*, void*>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIPN2MK7CObjectEPvEENS_19__map_value_compareIS4_S6_NS_4lessIS4_EELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_S5_EE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIPN2MK7CObjectEPvEENS_19__map_value_compareIS4_S6_NS_4lessIS4_EELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_S5_EE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<void (*)(int, void*), std::__1::allocator<void (*)(int, void*)>, void (int, void*)>::__clone(std::__1::__function::__base<void (int, void*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFviPvENS_9allocatorIS4_EES3_E7__cloneEPNS0_6__baseIS3_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFviPvENS_9allocatorIS4_EES3_E7__cloneEPNS0_6__baseIS3_EE() called");
    return 0;
}

/* Exported Object: MK::CProfileDataJob::ms_kRTTI */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK15CProfileDataJob8ms_kRTTIE = NULL;

/* Demangled: MK::CUpdateBool::~CUpdateBool() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CUpdateBoolD0Ev(void) {
    ALOGD("_ZN2MK11CUpdateBoolD0Ev() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueNDRangeKernel::Log(MK::CJsonLog&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK23CCLEnqueueNDRangeKernel3LogERNS_8CJsonLogE(void) {
    ALOGD("_ZNK2MK23CCLEnqueueNDRangeKernel3LogERNS_8CJsonLogE() called");
    return 0;
}

/* Demangled: MK::CCLImportMemory::GetMemoryUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK15CCLImportMemory13GetMemoryUsedEv(void) {
    ALOGD("_ZNK2MK15CCLImportMemory13GetMemoryUsedEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, void*, void const*, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, void*, void const*, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, void*, void const*, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuePvPKvmmjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queuePvPKvmmjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E7destroyEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_kernel*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_kernel*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_kernel*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP10_cl_kernelP13_cl_device_idjmPvPmENS_9allocatorIS9_EES8_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP10_cl_kernelP13_cl_device_idjmPvPmENS_9allocatorIS9_EES8_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_device_id*, long const*, unsigned int, _cl_device_id**, unsigned int*), std::__1::allocator<int (*)(_cl_device_id*, long const*, unsigned int, _cl_device_id**, unsigned int*)>, int (_cl_device_id*, long const*, unsigned int, _cl_device_id**, unsigned int*)>::operator()(_cl_device_id*&&, long const*&&, unsigned int&&, _cl_device_id**&&, unsigned int*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP13_cl_device_idPKljPS3_PjENS_9allocatorIS9_EES8_EclEOS3_OS5_OjOS6_OS7_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP13_cl_device_idPKljPS3_PjENS_9allocatorIS9_EES8_EclEOS3_OS5_OjOS6_OS7_() called");
    return 0;
}

/* Demangled: MK::CCLCreateImage::GetMemoryUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK14CCLCreateImage13GetMemoryUsedEv(void) {
    ALOGD("_ZNK2MK14CCLCreateImage13GetMemoryUsedEv() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueNDRangeKernel::~CCLEnqueueNDRangeKernel() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK23CCLEnqueueNDRangeKernelD2Ev(void) {
    ALOGD("_ZN2MK23CCLEnqueueNDRangeKernelD2Ev() called");
    return 0;
}

/* Demangled: MK::CCLReleaseEvent::Log(MK::CJsonLog&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK15CCLReleaseEvent3LogERNS_8CJsonLogE(void) {
    ALOGD("_ZNK2MK15CCLReleaseEvent3LogERNS_8CJsonLogE() called");
    return 0;
}

/* Demangled: CmdL_AttachclReleaseCommandQueue */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclReleaseCommandQueue(void) {
    ALOGD("CmdL_AttachclReleaseCommandQueue() called");
    return 0;
}

/* Demangled: CmdL_AttachclSetKernelArg */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclSetKernelArg(void) {
    ALOGD("CmdL_AttachclSetKernelArg() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_command_queue* (*)(_cl_context*, _cl_device_id*, unsigned long const*, int*), std::__1::allocator<_cl_command_queue* (*)(_cl_context*, _cl_device_id*, unsigned long const*, int*)>, _cl_command_queue* (_cl_context*, _cl_device_id*, unsigned long const*, int*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFP17_cl_command_queueP11_cl_contextP13_cl_device_idPKmPiENS_9allocatorISC_EESB_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFP17_cl_command_queueP11_cl_contextP13_cl_device_idPKmPiENS_9allocatorISC_EESB_E7__cloneEv() called");
    return 0;
}

/* Demangled: MK::CCLSVMAlloc::CCLSVMAlloc() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CCLSVMAllocC1Ev(void) {
    ALOGD("_ZN2MK11CCLSVMAllocC1Ev() called");
    return 0;
}

/* Exported Object: MK::CCLCreateKernelsInProgram::ms_kRTTI */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK25CCLCreateKernelsInProgram8ms_kRTTIE = NULL;

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, void*, unsigned int, _cl_event* const*, _cl_event**)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPvjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPvjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E7__cloneEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<void* (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long const*, unsigned long const*, unsigned long*, unsigned long*, unsigned int, _cl_event* const*, _cl_event**, int*), std::__1::allocator<void* (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long const*, unsigned long const*, unsigned long*, unsigned long*, unsigned int, _cl_event* const*, _cl_event**, int*)>, void* (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long const*, unsigned long const*, unsigned long*, unsigned long*, unsigned int, _cl_event* const*, _cl_event**, int*)>::operator()(_cl_command_queue*&&, _cl_mem*&&, unsigned int&&, unsigned long&&, unsigned long const*&&, unsigned long const*&&, unsigned long*&&, unsigned long*&&, unsigned int&&, _cl_event* const*&&, _cl_event**&&, int*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFPvP17_cl_command_queueP7_cl_memjmPKmS8_PmS9_jPKP9_cl_eventPSB_PiENS_9allocatorISH_EESG_EclEOS4_OS6_OjOmOS8_SP_OS9_SQ_SN_OSD_OSE_OSF_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFPvP17_cl_command_queueP7_cl_memjmPKmS8_PmS9_jPKP9_cl_eventPSB_PiENS_9allocatorISH_EESG_EclEOS4_OS6_OjOmOS8_SP_OS9_SQ_SN_OSD_OSE_OSF_() called");
    return 0;
}

/* Demangled: CmdL_AttachclEnqueueCopyBuffer */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclEnqueueCopyBuffer(void) {
    ALOGD("CmdL_AttachclEnqueueCopyBuffer() called");
    return 0;
}

/* Demangled: MK::clEnqueueSVMMap(_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long, unsigned int, _cl_event* const*, _cl_event**) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15clEnqueueSVMMapEP17_cl_command_queuejmPvmjPKP9_cl_eventPS4_(void) {
    ALOGD("_ZN2MK15clEnqueueSVMMapEP17_cl_command_queuejmPvmjPKP9_cl_eventPS4_() called");
    return 0;
}

/* Demangled: MK::CCLRetainProgram::Record(_cl_program*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLRetainProgram6RecordEP11_cl_program(void) {
    ALOGD("_ZN2MK16CCLRetainProgram6RecordEP11_cl_program() called");
    return 0;
}

/* Demangled: MK::CCLPrepareMemoryCopy::GetMemoryUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK20CCLPrepareMemoryCopy13GetMemoryUsedEv(void) {
    ALOGD("_ZNK2MK20CCLPrepareMemoryCopy13GetMemoryUsedEv() called");
    return 0;
}

/* Demangled: MK::CCLRetainProgram::Load(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLRetainProgram4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK16CCLRetainProgram4LoadERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_program*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_program*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_program*, unsigned int, unsigned long, void*, unsigned long*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP11_cl_programjmPvPmENS_9allocatorIS7_EES6_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP11_cl_programjmPvPmENS_9allocatorIS7_EES6_E7__cloneEv() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMarker::RegisterUniqueObject(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLEnqueueMarker20RegisterUniqueObjectERNS_7CStreamE(void) {
    ALOGD("_ZN2MK16CCLEnqueueMarker20RegisterUniqueObjectERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CDynamicData::CDynamicData(MK::CDynamicData const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK12CDynamicDataC2ERKS0_(void) {
    ALOGD("_ZN2MK12CDynamicDataC2ERKS0_() called");
    return 0;
}

/* Demangled: clCreateContext */
extern "C" __attribute__((visibility("default"))) int clCreateContext(void) {
    ALOGD("clCreateContext() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_program*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, char const**, void (*)(_cl_program*, void*), void*), std::__1::allocator<int (*)(_cl_program*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, char const**, void (*)(_cl_program*, void*), void*)>, int (_cl_program*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, char const**, void (*)(_cl_program*, void*), void*)>::__clone(std::__1::__function::__base<int (_cl_program*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, char const**, void (*)(_cl_program*, void*), void*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP11_cl_programjPKP13_cl_device_idPKcjPKS3_PS9_PFvS3_PvESD_ENS_9allocatorISH_EESG_E7__cloneEPNS0_6__baseISG_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP11_cl_programjPKP13_cl_device_idPKcjPKS3_PS9_PFvS3_PvESD_ENS_9allocatorISH_EESG_E7__cloneEPNS0_6__baseISG_EE() called");
    return 0;
}

/* Demangled: CmdL_AttachclCreateCommandQueue */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclCreateCommandQueue(void) {
    ALOGD("CmdL_AttachclCreateCommandQueue() called");
    return 0;
}

/* Demangled: MK::clEnqueueSVMMemFill(_cl_command_queue*, void*, void const*, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK19clEnqueueSVMMemFillEP17_cl_command_queuePvPKvmmjPKP9_cl_eventPS6_(void) {
    ALOGD("_ZN2MK19clEnqueueSVMMemFillEP17_cl_command_queuePvPKvmmjPKP9_cl_eventPS6_() called");
    return 0;
}

/* Demangled: MK::CCLRetainCommandQueue::GetDiskUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK21CCLRetainCommandQueue11GetDiskUsedEv(void) {
    ALOGD("_ZNK2MK21CCLRetainCommandQueue11GetDiskUsedEv() called");
    return 0;
}

/* Demangled: MK::CCLSVMAlloc::~CCLSVMAlloc() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CCLSVMAllocD0Ev(void) {
    ALOGD("_ZN2MK11CCLSVMAllocD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<void (*)(_cl_context*, void*), std::__1::allocator<void (*)(_cl_context*, void*)>, void (_cl_context*, void*)>::operator()(_cl_context*&&, void*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFvP11_cl_contextPvENS_9allocatorIS6_EES5_EclEOS3_OS4_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFvP11_cl_contextPvENS_9allocatorIS6_EES5_EclEOS3_OS4_() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<MK::CPointer<MK::CJob>*, std::__1::allocator<MK::CPointer<MK::CJob>*>&>::push_front(MK::CPointer<MK::CJob>* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN2MK8CPointerINS1_4CJobEEERNS_9allocatorIS5_EEE10push_frontERKS5_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN2MK8CPointerINS1_4CJobEEERNS_9allocatorIS5_EEE10push_frontERKS5_() called");
    return 0;
}

/* Exported Object: vtable for MK::CCLCommand */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK10CCLCommandE = NULL;

/* Demangled: MK::CCLEnqueueCopyBufferToImage::Load(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK27CCLEnqueueCopyBufferToImage4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK27CCLEnqueueCopyBufferToImage4LoadERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, _cl_event* const*), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, _cl_event* const*)>, int (_cl_command_queue*, unsigned int, _cl_event* const*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejPKP9_cl_eventENS_9allocatorIS9_EES8_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queuejPKP9_cl_eventENS_9allocatorIS9_EES8_E7destroyEv() called");
    return 0;
}

/* Demangled: MK::CStaticData::RegisterFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CStaticData15RegisterFactoryEv(void) {
    ALOGD("_ZN2MK11CStaticData15RegisterFactoryEv() called");
    return 0;
}

/* Demangled: MK::CInputTensors::RegisterFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK13CInputTensors15RegisterFactoryEv(void) {
    ALOGD("_ZN2MK13CInputTensors15RegisterFactoryEv() called");
    return 0;
}

/* Demangled: clCreateSampler */
extern "C" __attribute__((visibility("default"))) int clCreateSampler(void) {
    ALOGD("clCreateSampler() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned long, unsigned int, unsigned long*), std::__1::allocator<int (*)(_cl_command_queue*, unsigned long, unsigned int, unsigned long*)>, int (_cl_command_queue*, unsigned long, unsigned int, unsigned long*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuemjPmENS_9allocatorIS6_EES5_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP17_cl_command_queuemjPmENS_9allocatorIS6_EES5_E7__cloneEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_event*, int), std::__1::allocator<int (*)(_cl_event*, int)>, int (_cl_event*, int)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP9_cl_eventiENS_9allocatorIS5_EES4_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP9_cl_eventiENS_9allocatorIS5_EES4_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, void*, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, void*, int*)>, _cl_mem* (_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, void*, int*)>::__clone(std::__1::__function::__base<_cl_mem* (_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, void*, int*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatmmmPvPiENS_9allocatorISC_EESB_E7__cloneEPNS0_6__baseISB_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatmmmPvPiENS_9allocatorISC_EESB_E7__cloneEPNS0_6__baseISB_EE() called");
    return 0;
}

/* Demangled: MKProgram_AttachProgram */
extern "C" __attribute__((visibility("default"))) int MKProgram_AttachProgram(void) {
    ALOGD("MKProgram_AttachProgram() called");
    return 0;
}

/* Demangled: MK::CUpdateBool::Link(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CUpdateBool4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK11CUpdateBool4LinkERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(unsigned long, void*), std::__1::allocator<int (*)(unsigned long, void*)>, int (unsigned long, void*)>::operator()(unsigned long&&, void*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFimPvENS_9allocatorIS4_EES3_EclEOmOS2_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFimPvENS_9allocatorIS4_EES3_EclEOmOS2_() called");
    return 0;
}

/* Demangled: MK::CCLCreateProgramWithSource::Save(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK26CCLCreateProgramWithSource4SaveERNS_7CStreamE(void) {
    ALOGD("_ZN2MK26CCLCreateProgramWithSource4SaveERNS_7CStreamE() called");
    return 0;
}

/* Exported Object: MK::CCLFinish::ms_kRTTI */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK9CCLFinish8ms_kRTTIE = NULL;

/* Demangled: MK::CCLReleaseContext::CCLReleaseContext(MK::CCLReleaseContext const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK17CCLReleaseContextC1ERKS0_(void) {
    ALOGD("_ZN2MK17CCLReleaseContextC1ERKS0_() called");
    return 0;
}

/* Demangled: MK::CCLReleaseEvent::Factory(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLReleaseEvent7FactoryERNS_7CStreamE(void) {
    ALOGD("_ZN2MK15CCLReleaseEvent7FactoryERNS_7CStreamE() called");
    return 0;
}

/* Exported Object: MK::CVersion::CURRENT */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK8CVersion7CURRENTE = NULL;

/* Demangled: clReleaseMemObject */
extern "C" __attribute__((visibility("default"))) int clReleaseMemObject(void) {
    ALOGD("clReleaseMemObject() called");
    return 0;
}

/* Exported Object: MK::CCLReleaseProgram::ms_kRTTI */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK17CCLReleaseProgram8ms_kRTTIE = NULL;

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, _cl_event* const*), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, _cl_event* const*)>, int (_cl_command_queue*, unsigned int, _cl_event* const*)>::__clone(std::__1::__function::__base<int (_cl_command_queue*, unsigned int, _cl_event* const*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuejPKP9_cl_eventENS_9allocatorIS9_EES8_E7__cloneEPNS0_6__baseIS8_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP17_cl_command_queuejPKP9_cl_eventENS_9allocatorIS9_EES8_E7__cloneEPNS0_6__baseIS8_EE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<bool (*)(int, void*), std::__1::allocator<bool (*)(int, void*)>, bool (int, void*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFbiPvENS_9allocatorIS4_EES3_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFbiPvENS_9allocatorIS4_EES3_E7__cloneEv() called");
    return 0;
}

/* Demangled: MK::CCLReleaseCommandQueue::CopyConstructTo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK22CCLReleaseCommandQueue15CopyConstructToEv(void) {
    ALOGD("_ZNK2MK22CCLReleaseCommandQueue15CopyConstructToEv() called");
    return 0;
}

/* Exported Object: vtable for MK::CDynamicData */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK12CDynamicDataE = NULL;

/* Demangled: MK::CCLEnqueueMemoryCopy::CCLEnqueueMemoryCopy(MK::CCLEnqueueMemoryCopy const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK20CCLEnqueueMemoryCopyC2ERKS0_(void) {
    ALOGD("_ZN2MK20CCLEnqueueMemoryCopyC2ERKS0_() called");
    return 0;
}

/* Exported Object: MK::CCLRetainContext::ms_kRTTI */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK16CCLRetainContext8ms_kRTTIE = NULL;

/* Demangled: std::__1::__function::__func<int (*)(_cl_kernel*, unsigned int, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_kernel*, unsigned int, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_kernel*, unsigned int, unsigned int, unsigned long, void*, unsigned long*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP10_cl_kerneljjmPvPmENS_9allocatorIS7_EES6_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP10_cl_kerneljjmPvPmENS_9allocatorIS7_EES6_E7destroyEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<_cl_mem* (*)(_cl_mem*, unsigned long, unsigned int, void const*, int*), std::__1::allocator<_cl_mem* (*)(_cl_mem*, unsigned long, unsigned int, void const*, int*)>, _cl_mem* (_cl_mem*, unsigned long, unsigned int, void const*, int*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFP7_cl_memS3_mjPKvPiENS_9allocatorIS8_EES7_EE = NULL;

/* Demangled: MK::CCLEnqueueMarker::Link(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLEnqueueMarker4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK16CCLEnqueueMarker4LinkERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, unsigned long const*, unsigned char const**, int*, int*), std::__1::allocator<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, unsigned long const*, unsigned char const**, int*, int*)>, _cl_program* (_cl_context*, unsigned int, _cl_device_id* const*, unsigned long const*, unsigned char const**, int*, int*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKmPPKhPiSF_ENS_9allocatorISH_EESG_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKmPPKhPiSF_ENS_9allocatorISH_EESG_E7__cloneEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_kernel*, unsigned int, unsigned long, void const*), std::__1::allocator<int (*)(_cl_kernel*, unsigned int, unsigned long, void const*)>, int (_cl_kernel*, unsigned int, unsigned long, void const*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP10_cl_kerneljmPKvENS_9allocatorIS7_EES6_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP10_cl_kerneljmPKvENS_9allocatorIS7_EES6_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: clReleaseProgram */
extern "C" __attribute__((visibility("default"))) int clReleaseProgram(void) {
    ALOGD("clReleaseProgram() called");
    return 0;
}

/* Demangled: MK::CCLCreateImage::CopyConstructTo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK14CCLCreateImage15CopyConstructToEv(void) {
    ALOGD("_ZNK2MK14CCLCreateImage15CopyConstructToEv() called");
    return 0;
}

/* Demangled: MK::CCLFinish::Link(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK9CCLFinish4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK9CCLFinish4LinkERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: CmdL_TreeNodeAttachDataCopy */
extern "C" __attribute__((visibility("default"))) int CmdL_TreeNodeAttachDataCopy(void) {
    ALOGD("CmdL_TreeNodeAttachDataCopy() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_program*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_program*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_program*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>::__clone(std::__1::__function::__base<int (_cl_program*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP11_cl_programP13_cl_device_idjmPvPmENS_9allocatorIS9_EES8_E7__cloneEPNS0_6__baseIS8_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP11_cl_programP13_cl_device_idjmPvPmENS_9allocatorIS9_EES8_E7__cloneEPNS0_6__baseIS8_EE() called");
    return 0;
}

/* Demangled: MK::CDynamicData::CDynamicData() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK12CDynamicDataC1Ev(void) {
    ALOGD("_ZN2MK12CDynamicDataC1Ev() called");
    return 0;
}

/* Demangled: MK::CStaticData::Link(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CStaticData4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK11CStaticData4LinkERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: MK::CCLImportMemory::CCLImportMemory() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLImportMemoryC1Ev(void) {
    ALOGD("_ZN2MK15CCLImportMemoryC1Ev() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, void*, void const*, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, void*, void const*, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, void*, void const*, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::operator()(_cl_command_queue*&&, void*&&, void const*&&, unsigned long&&, unsigned long&&, unsigned int&&, _cl_event* const*&&, _cl_event**&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuePvPKvmmjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_EclEOS3_OS4_OS6_OmSK_OjOSA_OSB_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queuePvPKvmmjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_EclEOS3_OS4_OS6_OmSK_OjOSA_OSB_() called");
    return 0;
}

/* Demangled: MK::CCommand::GetMemoryUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK8CCommand13GetMemoryUsedEv(void) {
    ALOGD("_ZNK2MK8CCommand13GetMemoryUsedEv() called");
    return 0;
}

/* Demangled: MK::CCLCreateKernel::Save(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLCreateKernel4SaveERNS_7CStreamE(void) {
    ALOGD("_ZN2MK15CCLCreateKernel4SaveERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CCLCreateProgramWithSource::~CCLCreateProgramWithSource() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK26CCLCreateProgramWithSourceD2Ev(void) {
    ALOGD("_ZN2MK26CCLCreateProgramWithSourceD2Ev() called");
    return 0;
}

/* Demangled: MK::CCLReleaseKernel::Factory(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLReleaseKernel7FactoryERNS_7CStreamE(void) {
    ALOGD("_ZN2MK16CCLReleaseKernel7FactoryERNS_7CStreamE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*), std::__1::allocator<int (*)(_cl_command_queue*)>, int (_cl_command_queue*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueENS_9allocatorIS5_EES4_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP17_cl_command_queueENS_9allocatorIS5_EES4_E7__cloneEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<_cl_sampler* (*)(_cl_context*, unsigned int, unsigned int, unsigned int, int*), std::__1::allocator<_cl_sampler* (*)(_cl_context*, unsigned int, unsigned int, unsigned int, int*)>, _cl_sampler* (_cl_context*, unsigned int, unsigned int, unsigned int, int*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFP11_cl_samplerP11_cl_contextjjjPiENS_9allocatorIS8_EES7_EE = NULL;

/* Demangled: MK::CCLEnqueueReadBuffer::RegisterFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK20CCLEnqueueReadBuffer15RegisterFactoryEv(void) {
    ALOGD("_ZN2MK20CCLEnqueueReadBuffer15RegisterFactoryEv() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueUnmapMemObject::Run(MKProgramType, MK::CContextLocal*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK24CCLEnqueueUnmapMemObject3RunE13MKProgramTypePNS_13CContextLocalE(void) {
    ALOGD("_ZN2MK24CCLEnqueueUnmapMemObject3RunE13MKProgramTypePNS_13CContextLocalE() called");
    return 0;
}

/* Demangled: clGetKernelName(_cl_kernel*) */
extern "C" __attribute__((visibility("default"))) int _Z15clGetKernelNameP10_cl_kernel(void) {
    ALOGD("_Z15clGetKernelNameP10_cl_kernel() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_kernel*, unsigned int, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_kernel*, unsigned int, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_kernel*, unsigned int, unsigned int, unsigned long, void*, unsigned long*)>::operator()(_cl_kernel*&&, unsigned int&&, unsigned int&&, unsigned long&&, void*&&, unsigned long*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP10_cl_kerneljjmPvPmENS_9allocatorIS7_EES6_EclEOS3_OjSC_OmOS4_OS5_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP10_cl_kerneljjmPvPmENS_9allocatorIS7_EES6_EclEOS3_OjSC_OmOS4_OS5_() called");
    return 0;
}

/* Demangled: MK::CDynamicData::~CDynamicData() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK12CDynamicDataD0Ev(void) {
    ALOGD("_ZN2MK12CDynamicDataD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<bool (*)(int, void*), std::__1::allocator<bool (*)(int, void*)>, bool (int, void*)>::operator()(int&&, void*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFbiPvENS_9allocatorIS4_EES3_EclEOiOS2_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFbiPvENS_9allocatorIS4_EES3_EclEOiOS2_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<bool (*)(int, void*), std::__1::allocator<bool (*)(int, void*)>, bool (int, void*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFbiPvENS_9allocatorIS4_EES3_EE = NULL;

/* Demangled: MK::CCLImportMemory::~CCLImportMemory() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLImportMemoryD0Ev(void) {
    ALOGD("_ZN2MK15CCLImportMemoryD0Ev() called");
    return 0;
}

/* Demangled: MK::CCLProfileKernelJob::~CCLProfileKernelJob() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK19CCLProfileKernelJobD1Ev(void) {
    ALOGD("_ZN2MK19CCLProfileKernelJobD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_mem*, unsigned long, unsigned int, void const*, int*), std::__1::allocator<_cl_mem* (*)(_cl_mem*, unsigned long, unsigned int, void const*, int*)>, _cl_mem* (_cl_mem*, unsigned long, unsigned int, void const*, int*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFP7_cl_memS3_mjPKvPiENS_9allocatorIS8_EES7_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFP7_cl_memS3_mjPKvPiENS_9allocatorIS8_EES7_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: MK::CCLCommand::RegisterFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK10CCLCommand15RegisterFactoryEv(void) {
    ALOGD("_ZN2MK10CCLCommand15RegisterFactoryEv() called");
    return 0;
}

/* Demangled: MK::CCLCreateKernelsInProgram::GetMemoryUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK25CCLCreateKernelsInProgram13GetMemoryUsedEv(void) {
    ALOGD("_ZNK2MK25CCLCreateKernelsInProgram13GetMemoryUsedEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, _cl_image_desc const*, void*, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, _cl_image_desc const*, void*, int*)>, _cl_mem* (_cl_context*, unsigned long, _cl_image_format const*, _cl_image_desc const*, void*, int*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatPK14_cl_image_descPvPiENS_9allocatorISF_EESE_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatPK14_cl_image_descPvPiENS_9allocatorISF_EESE_E7__cloneEv() called");
    return 0;
}

/* Demangled: MK::CCLCreateContext::CCLCreateContext() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLCreateContextC1Ev(void) {
    ALOGD("_ZN2MK16CCLCreateContextC1Ev() called");
    return 0;
}

/* Demangled: MK::clEnqueueFillBuffer(_cl_command_queue*, _cl_mem*, void const*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK19clEnqueueFillBufferEP17_cl_command_queueP7_cl_memPKvmmmjPKP9_cl_eventPS7_(void) {
    ALOGD("_ZN2MK19clEnqueueFillBufferEP17_cl_command_queueP7_cl_memPKvmmmjPKP9_cl_eventPS7_() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_program*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_program*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_program*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP11_cl_programP13_cl_device_idjmPvPmENS_9allocatorIS9_EES8_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP11_cl_programP13_cl_device_idjmPvPmENS_9allocatorIS9_EES8_E7__cloneEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, _cl_event* const*), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, _cl_event* const*)>, int (_cl_command_queue*, unsigned int, _cl_event* const*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queuejPKP9_cl_eventENS_9allocatorIS9_EES8_EE = NULL;

/* Demangled: MK::CCLReleaseCommandQueue::RegisterFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK22CCLReleaseCommandQueue15RegisterFactoryEv(void) {
    ALOGD("_ZN2MK22CCLReleaseCommandQueue15RegisterFactoryEv() called");
    return 0;
}

/* Demangled: MK::CStream::Remove(MK::CObject*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK7CStream6RemoveEPNS_7CObjectE(void) {
    ALOGD("_ZN2MK7CStream6RemoveEPNS_7CObjectE() called");
    return 0;
}

/* Demangled: clLinkProgram */
extern "C" __attribute__((visibility("default"))) int clLinkProgram(void) {
    ALOGD("clLinkProgram() called");
    return 0;
}

/* Demangled: void std::__1::vector<_cl_device_id*, std::__1::allocator<_cl_device_id*> >::__push_back_slow_path<_cl_device_id*>(_cl_device_id*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIP13_cl_device_idNS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIP13_cl_device_idNS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_() called");
    return 0;
}

/* Demangled: MK::CCLReleaseEvent::Save(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLReleaseEvent4SaveERNS_7CStreamE(void) {
    ALOGD("_ZN2MK15CCLReleaseEvent4SaveERNS_7CStreamE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_sampler* (*)(_cl_context*, unsigned long const*, int*), std::__1::allocator<_cl_sampler* (*)(_cl_context*, unsigned long const*, int*)>, _cl_sampler* (_cl_context*, unsigned long const*, int*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFP11_cl_samplerP11_cl_contextPKmPiENS_9allocatorISA_EES9_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFP11_cl_samplerP11_cl_contextPKmPiENS_9allocatorISA_EES9_E7__cloneEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_event*), std::__1::allocator<int (*)(_cl_event*)>, int (_cl_event*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP9_cl_eventENS_9allocatorIS5_EES4_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP9_cl_eventENS_9allocatorIS5_EES4_E7__cloneEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_event*, int, void (*)(_cl_event*, int, void*), void*), std::__1::allocator<int (*)(_cl_event*, int, void (*)(_cl_event*, int, void*), void*)>, int (_cl_event*, int, void (*)(_cl_event*, int, void*), void*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP9_cl_eventiPFvS3_iPvES4_ENS_9allocatorIS8_EES7_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP9_cl_eventiPFvS3_iPvES4_ENS_9allocatorIS8_EES7_E7__cloneEv() called");
    return 0;
}

/* Demangled: MK::clEnqueueWriteImage(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK19clEnqueueWriteImageEP17_cl_command_queueP7_cl_memjPKmS5_mmPKvjPKP9_cl_eventPS9_(void) {
    ALOGD("_ZN2MK19clEnqueueWriteImageEP17_cl_command_queueP7_cl_memjPKmS5_mmPKvjPKP9_cl_eventPS9_() called");
    return 0;
}

/* Demangled: MK::CCLRetainProgram::CCLRetainProgram() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLRetainProgramC1Ev(void) {
    ALOGD("_ZN2MK16CCLRetainProgramC1Ev() called");
    return 0;
}

/* Demangled: MK::CCLCreateContext::~CCLCreateContext() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLCreateContextD0Ev(void) {
    ALOGD("_ZN2MK16CCLCreateContextD0Ev() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIhNS_9allocatorIhEEE6assignIPhEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIhNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIhNS_9allocatorIhEEE6assignIPhEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIhNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void) {
    ALOGD("_ZNSt3__16vectorIhNS_9allocatorIhEEE6assignIPhEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIhNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_() called");
    return 0;
}

/* Demangled: MK::CCLImportMemory::Save(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLImportMemory4SaveERNS_7CStreamE(void) {
    ALOGD("_ZN2MK15CCLImportMemory4SaveERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MKStream_LoadByFile */
extern "C" __attribute__((visibility("default"))) int MKStream_LoadByFile(void) {
    ALOGD("MKStream_LoadByFile() called");
    return 0;
}

/* Exported Object: vtable for MK::CUpdateBool */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK11CUpdateBoolE = NULL;

/* Demangled: MK::clSetCommandQueueProperty(_cl_command_queue*, unsigned long, unsigned int, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK25clSetCommandQueuePropertyEP17_cl_command_queuemjPm(void) {
    ALOGD("_ZN2MK25clSetCommandQueuePropertyEP17_cl_command_queuemjPm() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_event* (*)(_cl_context*, int*), std::__1::allocator<_cl_event* (*)(_cl_context*, int*)>, _cl_event* (_cl_context*, int*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFP9_cl_eventP11_cl_contextPiENS_9allocatorIS8_EES7_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFP9_cl_eventP11_cl_contextPiENS_9allocatorIS8_EES7_E7destroyEv() called");
    return 0;
}

/* Demangled: clRetainCommandQueue */
extern "C" __attribute__((visibility("default"))) int clRetainCommandQueue(void) {
    ALOGD("clRetainCommandQueue() called");
    return 0;
}

/* Demangled: MK::CCLBuildProgram::Log(MK::CJsonLog&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK15CCLBuildProgram3LogERNS_8CJsonLogE(void) {
    ALOGD("_ZNK2MK15CCLBuildProgram3LogERNS_8CJsonLogE() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, _cl_device_id*>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, _cl_device_id*>, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, _cl_device_id*>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, _cl_device_id*>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, _cl_device_id*> > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEP13_cl_device_idEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE4findIS7_EENS_15__tree_iteratorISA_PNS_11__tree_nodeISA_PvEElEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEP13_cl_device_idEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE4findIS7_EENS_15__tree_iteratorISA_PNS_11__tree_nodeISA_PvEElEERKT_() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueReadBuffer::CCLEnqueueReadBuffer(MK::CCLEnqueueReadBuffer const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK20CCLEnqueueReadBufferC2ERKS0_(void) {
    ALOGD("_ZN2MK20CCLEnqueueReadBufferC2ERKS0_() called");
    return 0;
}

/* Demangled: MKSysTrace_Init() */
extern "C" __attribute__((visibility("default"))) int _Z15MKSysTrace_Initv(void) {
    ALOGD("_Z15MKSysTrace_Initv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_context*), std::__1::allocator<int (*)(_cl_context*)>, int (_cl_context*)>::operator()(_cl_context*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP11_cl_contextENS_9allocatorIS5_EES4_EclEOS3_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP11_cl_contextENS_9allocatorIS5_EES4_EclEOS3_() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueNDRangeKernel::CCLEnqueueNDRangeKernel() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK23CCLEnqueueNDRangeKernelC2Ev(void) {
    ALOGD("_ZN2MK23CCLEnqueueNDRangeKernelC2Ev() called");
    return 0;
}

/* Demangled: MK::CCLRetainProgram::~CCLRetainProgram() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLRetainProgramD0Ev(void) {
    ALOGD("_ZN2MK16CCLRetainProgramD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_event* (*)(_cl_context*, int*), std::__1::allocator<_cl_event* (*)(_cl_context*, int*)>, _cl_event* (_cl_context*, int*)>::operator()(_cl_context*&&, int*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFP9_cl_eventP11_cl_contextPiENS_9allocatorIS8_EES7_EclEOS5_OS6_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFP9_cl_eventP11_cl_contextPiENS_9allocatorIS8_EES7_EclEOS5_OS6_() called");
    return 0;
}

/* Demangled: std::__1::vector<char, std::__1::allocator<char> >::__append(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIcNS_9allocatorIcEEE8__appendEm(void) {
    ALOGD("_ZNSt3__16vectorIcNS_9allocatorIcEEE8__appendEm() called");
    return 0;
}

/* Demangled: clImportMemoryARM */
extern "C" __attribute__((visibility("default"))) int clImportMemoryARM(void) {
    ALOGD("clImportMemoryARM() called");
    return 0;
}

/* Demangled: MK::CCLSetKernelArg::Record(_cl_kernel*, unsigned int, unsigned long, void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLSetKernelArg6RecordEP10_cl_kerneljmPKv(void) {
    ALOGD("_ZN2MK15CCLSetKernelArg6RecordEP10_cl_kerneljmPKv() called");
    return 0;
}

/* Demangled: MK::CCLRetainMemObject::RegisterFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK18CCLRetainMemObject15RegisterFactoryEv(void) {
    ALOGD("_ZN2MK18CCLRetainMemObject15RegisterFactoryEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_program*, unsigned int, _cl_device_id* const*, char const*, void (*)(_cl_program*, void*), void*), std::__1::allocator<int (*)(_cl_program*, unsigned int, _cl_device_id* const*, char const*, void (*)(_cl_program*, void*), void*)>, int (_cl_program*, unsigned int, _cl_device_id* const*, char const*, void (*)(_cl_program*, void*), void*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP11_cl_programjPKP13_cl_device_idPKcPFvS3_PvESA_ENS_9allocatorISE_EESD_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP11_cl_programjPKP13_cl_device_idPKcPFvS3_PvESA_ENS_9allocatorISE_EESD_E7__cloneEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjmmPvjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjmmPvjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E7destroyEv() called");
    return 0;
}

/* Demangled: MK::CBool::GetMemoryUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK5CBool13GetMemoryUsedEv(void) {
    ALOGD("_ZNK2MK5CBool13GetMemoryUsedEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<MK::CPointer<MK::CJob>*, std::__1::allocator<MK::CPointer<MK::CJob>*>&>::push_back(MK::CPointer<MK::CJob>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN2MK8CPointerINS1_4CJobEEERNS_9allocatorIS5_EEE9push_backEOS5_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN2MK8CPointerINS1_4CJobEEERNS_9allocatorIS5_EEE9push_backEOS5_() called");
    return 0;
}

/* Demangled: clCompileProgram */
extern "C" __attribute__((visibility("default"))) int clCompileProgram(void) {
    ALOGD("clCompileProgram() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueNDRangeKernel::RegisterFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK23CCLEnqueueNDRangeKernel15RegisterFactoryEv(void) {
    ALOGD("_ZN2MK23CCLEnqueueNDRangeKernel15RegisterFactoryEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_program* (*)(_cl_context*, unsigned int, char const**, unsigned long const*, int*), std::__1::allocator<_cl_program* (*)(_cl_context*, unsigned int, char const**, unsigned long const*, int*)>, _cl_program* (_cl_context*, unsigned int, char const**, unsigned long const*, int*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPPKcPKmPiENS_9allocatorISD_EESC_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPPKcPKmPiENS_9allocatorISD_EESC_E7destroyEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_program*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_program*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_program*, unsigned int, unsigned long, void*, unsigned long*)>::operator()(_cl_program*&&, unsigned int&&, unsigned long&&, void*&&, unsigned long*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP11_cl_programjmPvPmENS_9allocatorIS7_EES6_EclEOS3_OjOmOS4_OS5_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP11_cl_programjmPvPmENS_9allocatorIS7_EES6_EclEOS3_OjOmOS4_OS5_() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<int, MK::CPointer<MK::CDynamicData> >, std::__1::__map_value_compare<int, std::__1::__value_type<int, MK::CPointer<MK::CDynamicData> >, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, MK::CPointer<MK::CDynamicData> > > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, MK::CPointer<MK::CDynamicData> >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIiN2MK8CPointerINS2_12CDynamicDataEEEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIiN2MK8CPointerINS2_12CDynamicDataEEEEENS_19__map_value_compareIiS6_NS_4lessIiEELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE() called");
    return 0;
}

/* Demangled: CmdL_AttachclEnqueueFillImage */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclEnqueueFillImage(void) {
    ALOGD("CmdL_AttachclEnqueueFillImage() called");
    return 0;
}

/* Exported Object: MK::CCLFlush::ms_kRTTI */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK8CCLFlush8ms_kRTTIE = NULL;

/* Exported Object: vtable for MK::CCLReleaseCommandQueue */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK22CCLReleaseCommandQueueE = NULL;

/* Demangled: std::__1::__function::__func<int (*)(), std::__1::allocator<int (*)()>, int ()>::__clone(std::__1::__function::__base<int ()>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFivENS_9allocatorIS3_EES2_E7__cloneEPNS0_6__baseIS2_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFivENS_9allocatorIS3_EES2_E7__cloneEPNS0_6__baseIS2_EE() called");
    return 0;
}

/* Demangled: CmdL_AttachclEnqueueBarrier */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclEnqueueBarrier(void) {
    ALOGD("CmdL_AttachclEnqueueBarrier() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueNDRangeKernel::~CCLEnqueueNDRangeKernel() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK23CCLEnqueueNDRangeKernelD1Ev(void) {
    ALOGD("_ZN2MK23CCLEnqueueNDRangeKernelD1Ev() called");
    return 0;
}

/* Demangled: MK::CCLRetainEvent::Save(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14CCLRetainEvent4SaveERNS_7CStreamE(void) {
    ALOGD("_ZN2MK14CCLRetainEvent4SaveERNS_7CStreamE() called");
    return 0;
}

/* Exported Object: MK::CCLProfileKernelJob::ms_kRTTI */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK19CCLProfileKernelJob8ms_kRTTIE = NULL;

/* Demangled: std::__1::__function::__func<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, void (*)(_cl_program*, void*), void*, int*), std::__1::allocator<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, void (*)(_cl_program*, void*), void*, int*)>, _cl_program* (_cl_context*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, void (*)(_cl_program*, void*), void*, int*)>::__clone(std::__1::__function::__base<_cl_program* (_cl_context*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, void (*)(_cl_program*, void*), void*, int*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKcjPKS3_PFvS3_PvESE_PiENS_9allocatorISJ_EESI_E7__cloneEPNS0_6__baseISI_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKcjPKS3_PFvS3_PvESE_PiENS_9allocatorISJ_EESI_E7__cloneEPNS0_6__baseISI_EE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, unsigned long const*, unsigned char const**, int*, int*), std::__1::allocator<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, unsigned long const*, unsigned char const**, int*, int*)>, _cl_program* (_cl_context*, unsigned int, _cl_device_id* const*, unsigned long const*, unsigned char const**, int*, int*)>::__clone(std::__1::__function::__base<_cl_program* (_cl_context*, unsigned int, _cl_device_id* const*, unsigned long const*, unsigned char const**, int*, int*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKmPPKhPiSF_ENS_9allocatorISH_EESG_E7__cloneEPNS0_6__baseISG_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKmPPKhPiSF_ENS_9allocatorISH_EESG_E7__cloneEPNS0_6__baseISG_EE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_mmmjPKP9_cl_eventPS7_ENS_9allocatorISC_EESB_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_mmmjPKP9_cl_eventPS7_ENS_9allocatorISC_EESB_E7__cloneEv() called");
    return 0;
}

/* Demangled: MK::CCLFinish::Record(_cl_command_queue*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK9CCLFinish6RecordEP17_cl_command_queue(void) {
    ALOGD("_ZN2MK9CCLFinish6RecordEP17_cl_command_queue() called");
    return 0;
}

/* Demangled: MK::CCommand::GetDiskUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK8CCommand11GetDiskUsedEv(void) {
    ALOGD("_ZNK2MK8CCommand11GetDiskUsedEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_event**)>, int (_cl_command_queue*, _cl_event**)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuePP9_cl_eventENS_9allocatorIS8_EES7_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP17_cl_command_queuePP9_cl_eventENS_9allocatorIS8_EES7_E7__cloneEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, void**, void (*)(_cl_command_queue*, unsigned int, void**, void*), void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, void**, void (*)(_cl_command_queue*, unsigned int, void**, void*), void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, unsigned int, void**, void (*)(_cl_command_queue*, unsigned int, void**, void*), void*, unsigned int, _cl_event* const*, _cl_event**)>::operator()(_cl_command_queue*&&, unsigned int&&, void**&&, void (*&&)(_cl_command_queue*, unsigned int, void**, void*), void*&&, unsigned int&&, _cl_event* const*&&, _cl_event**&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejPPvPFvS3_jS5_S4_ES4_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EclEOS3_OjOS5_OS7_OS4_SJ_OSB_OSC_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queuejPPvPFvS3_jS5_S4_ES4_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EclEOS3_OjOS5_OS7_OS4_SJ_OSB_OSC_() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<long, MK::CBufferMap::_Buffer>, std::__1::__map_value_compare<long, std::__1::__value_type<long, MK::CBufferMap::_Buffer>, std::__1::less<long>, true>, std::__1::allocator<std::__1::__value_type<long, MK::CBufferMap::_Buffer> > >::destroy(std::__1::__tree_node<std::__1::__value_type<long, MK::CBufferMap::_Buffer>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIlN2MK10CBufferMap7_BufferEEENS_19__map_value_compareIlS5_NS_4lessIlEELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIlN2MK10CBufferMap7_BufferEEENS_19__map_value_compareIlS5_NS_4lessIlEELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE() called");
    return 0;
}

/* Demangled: CmdL_AttachclUnloadPlatformCompiler */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclUnloadPlatformCompiler(void) {
    ALOGD("CmdL_AttachclUnloadPlatformCompiler() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMarker::Record(_cl_command_queue*, _cl_event*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLEnqueueMarker6RecordEP17_cl_command_queueP9_cl_event(void) {
    ALOGD("_ZN2MK16CCLEnqueueMarker6RecordEP17_cl_command_queueP9_cl_event() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMapBuffer::Log(MK::CJsonLog&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK19CCLEnqueueMapBuffer3LogERNS_8CJsonLogE(void) {
    ALOGD("_ZNK2MK19CCLEnqueueMapBuffer3LogERNS_8CJsonLogE() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueCopyBufferToImage::RegisterUniqueObject(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK27CCLEnqueueCopyBufferToImage20RegisterUniqueObjectERNS_7CStreamE(void) {
    ALOGD("_ZN2MK27CCLEnqueueCopyBufferToImage20RegisterUniqueObjectERNS_7CStreamE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_sampler* (*)(_cl_context*, unsigned int, unsigned int, unsigned int, int*), std::__1::allocator<_cl_sampler* (*)(_cl_context*, unsigned int, unsigned int, unsigned int, int*)>, _cl_sampler* (_cl_context*, unsigned int, unsigned int, unsigned int, int*)>::operator()(_cl_context*&&, unsigned int&&, unsigned int&&, unsigned int&&, int*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFP11_cl_samplerP11_cl_contextjjjPiENS_9allocatorIS8_EES7_EclEOS5_OjSD_SD_OS6_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFP11_cl_samplerP11_cl_contextjjjPiENS_9allocatorIS8_EES7_EclEOS5_OjSD_SD_OS6_() called");
    return 0;
}

/* Demangled: MK::clEnqueueCopyBuffer(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK19clEnqueueCopyBufferEP17_cl_command_queueP7_cl_memS3_mmmjPKP9_cl_eventPS5_(void) {
    ALOGD("_ZN2MK19clEnqueueCopyBufferEP17_cl_command_queueP7_cl_memS3_mmmjPKP9_cl_eventPS5_() called");
    return 0;
}

/* Demangled: clCreatePipe */
extern "C" __attribute__((visibility("default"))) int clCreatePipe(void) {
    ALOGD("clCreatePipe() called");
    return 0;
}

/* Exported Object: MK::CCLEnqueueMemoryCopy::ms_kRTTI */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK20CCLEnqueueMemoryCopy8ms_kRTTIE = NULL;

/* Demangled: std::__1::__function::__func<int (*)(_cl_program*, unsigned int, _cl_kernel**, unsigned int*), std::__1::allocator<int (*)(_cl_program*, unsigned int, _cl_kernel**, unsigned int*)>, int (_cl_program*, unsigned int, _cl_kernel**, unsigned int*)>::__clone(std::__1::__function::__base<int (_cl_program*, unsigned int, _cl_kernel**, unsigned int*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP11_cl_programjPP10_cl_kernelPjENS_9allocatorIS9_EES8_E7__cloneEPNS0_6__baseIS8_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP11_cl_programjPP10_cl_kernelPjENS_9allocatorIS9_EES8_E7__cloneEPNS0_6__baseIS8_EE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_kernel*, unsigned int, void const*), std::__1::allocator<int (*)(_cl_kernel*, unsigned int, void const*)>, int (_cl_kernel*, unsigned int, void const*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP10_cl_kerneljPKvENS_9allocatorIS7_EES6_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP10_cl_kerneljPKvENS_9allocatorIS7_EES6_E7destroyEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, _cl_mem* const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, _cl_mem* const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, unsigned int, _cl_mem* const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejPKP7_cl_memmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queuejPKP7_cl_memmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: clEnqueueWriteBufferRect(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**) */
extern "C" __attribute__((visibility("default"))) int _Z24clEnqueueWriteBufferRectP17_cl_command_queueP7_cl_memjPKmS4_S4_mmmmPvjPKP9_cl_eventPS7_(void) {
    ALOGD("_Z24clEnqueueWriteBufferRectP17_cl_command_queueP7_cl_memjPKmS4_S4_mmmmPvjPKP9_cl_eventPS7_() called");
    return 0;
}

/* Demangled: MK::CCLCommand::Link(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK10CCLCommand4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK10CCLCommand4LinkERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_mem*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_mem*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_mem*, unsigned int, unsigned long, void*, unsigned long*)>::__clone(std::__1::__function::__base<int (_cl_mem*, unsigned int, unsigned long, void*, unsigned long*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP7_cl_memjmPvPmENS_9allocatorIS7_EES6_E7__cloneEPNS0_6__baseIS6_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP7_cl_memjmPvPmENS_9allocatorIS7_EES6_E7__cloneEPNS0_6__baseIS6_EE() called");
    return 0;
}

/* Demangled: MK::CCLCreateContext::GetMemoryUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK16CCLCreateContext13GetMemoryUsedEv(void) {
    ALOGD("_ZNK2MK16CCLCreateContext13GetMemoryUsedEv() called");
    return 0;
}

/* Demangled: MK::CCLFinish::GetMemoryUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK9CCLFinish13GetMemoryUsedEv(void) {
    ALOGD("_ZNK2MK9CCLFinish13GetMemoryUsedEv() called");
    return 0;
}

/* Demangled: MKBool_Create */
extern "C" __attribute__((visibility("default"))) int MKBool_Create(void) {
    ALOGD("MKBool_Create() called");
    return 0;
}

/* Demangled: MKProgram_SetInputFd */
extern "C" __attribute__((visibility("default"))) int MKProgram_SetInputFd(void) {
    ALOGD("MKProgram_SetInputFd() called");
    return 0;
}

/* Demangled: MK::CCLRetainMemObject::CCLRetainMemObject(MK::CCLRetainMemObject const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK18CCLRetainMemObjectC2ERKS0_(void) {
    ALOGD("_ZN2MK18CCLRetainMemObjectC2ERKS0_() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void) {
    ALOGD("_ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_S7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EE = NULL;

/* Demangled: MK::CCLRetainCommandQueue::CCLRetainCommandQueue(MK::CCLRetainCommandQueue const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK21CCLRetainCommandQueueC1ERKS0_(void) {
    ALOGD("_ZN2MK21CCLRetainCommandQueueC1ERKS0_() called");
    return 0;
}

/* Demangled: MK::CCLSVMFree::Link(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK10CCLSVMFree4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK10CCLSVMFree4LinkERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: MK::CCLWaitForEvents::GetMemoryUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK16CCLWaitForEvents13GetMemoryUsedEv(void) {
    ALOGD("_ZNK2MK16CCLWaitForEvents13GetMemoryUsedEv() called");
    return 0;
}

/* Demangled: handleCreateKernelProfile(_cl_kernel*, char const*) */
extern "C" __attribute__((visibility("default"))) int _Z25handleCreateKernelProfileP10_cl_kernelPKc(void) {
    ALOGD("_Z25handleCreateKernelProfileP10_cl_kernelPKc() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueNDRangeKernel::GetMemoryUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK23CCLEnqueueNDRangeKernel13GetMemoryUsedEv(void) {
    ALOGD("_ZNK2MK23CCLEnqueueNDRangeKernel13GetMemoryUsedEv() called");
    return 0;
}

/* Demangled: MK::CCLPrepareMemoryCopy::RegisterUniqueObject(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK20CCLPrepareMemoryCopy20RegisterUniqueObjectERNS_7CStreamE(void) {
    ALOGD("_ZN2MK20CCLPrepareMemoryCopy20RegisterUniqueObjectERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MKProgram_AttachCLEnqueueNDRangeKernel */
extern "C" __attribute__((visibility("default"))) int MKProgram_AttachCLEnqueueNDRangeKernel(void) {
    ALOGD("MKProgram_AttachCLEnqueueNDRangeKernel() called");
    return 0;
}

/* Demangled: MK::CBool::RegisterFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK5CBool15RegisterFactoryEv(void) {
    ALOGD("_ZN2MK5CBool15RegisterFactoryEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<MK::CPointer<MK::CProgram>*, std::__1::allocator<MK::CPointer<MK::CProgram>*> >::push_back(MK::CPointer<MK::CProgram>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN2MK8CPointerINS1_8CProgramEEENS_9allocatorIS5_EEE9push_backEOS5_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN2MK8CPointerINS1_8CProgramEEENS_9allocatorIS5_EEE9push_backEOS5_() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, void*, void const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, void*, void const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, unsigned int, void*, void const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuejPvPKvmjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP17_cl_command_queuejPvPKvmjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E7__cloneEv() called");
    return 0;
}

/* Demangled: MK::clCreatePipe(_cl_context*, unsigned long, unsigned int, unsigned int, long const*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK12clCreatePipeEP11_cl_contextmjjPKlPi(void) {
    ALOGD("_ZN2MK12clCreatePipeEP11_cl_contextmjjPKlPi() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueSVMMap::Run(MKProgramType, MK::CContextLocal*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLEnqueueSVMMap3RunE13MKProgramTypePNS_13CContextLocalE(void) {
    ALOGD("_ZN2MK16CCLEnqueueSVMMap3RunE13MKProgramTypePNS_13CContextLocalE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, void**, void (*)(_cl_command_queue*, unsigned int, void**, void*), void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, void**, void (*)(_cl_command_queue*, unsigned int, void**, void*), void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, unsigned int, void**, void (*)(_cl_command_queue*, unsigned int, void**, void*), void*, unsigned int, _cl_event* const*, _cl_event**)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queuejPPvPFvS3_jS5_S4_ES4_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EE = NULL;

/* Demangled: MK::CProgram::CopyConstructTo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK8CProgram15CopyConstructToEv(void) {
    ALOGD("_ZNK2MK8CProgram15CopyConstructToEv() called");
    return 0;
}

/* Demangled: MK::CUpdateBool::GetMemoryUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK11CUpdateBool13GetMemoryUsedEv(void) {
    ALOGD("_ZNK2MK11CUpdateBool13GetMemoryUsedEv() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMarker::GetMemoryUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK16CCLEnqueueMarker13GetMemoryUsedEv(void) {
    ALOGD("_ZNK2MK16CCLEnqueueMarker13GetMemoryUsedEv() called");
    return 0;
}

/* Demangled: MKProgram_AttachCLReleaseMemObject */
extern "C" __attribute__((visibility("default"))) int MKProgram_AttachCLReleaseMemObject(void) {
    ALOGD("MKProgram_AttachCLReleaseMemObject() called");
    return 0;
}

/* Demangled: callback(char const*, unsigned long, unsigned long, void*) */
extern "C" __attribute__((visibility("default"))) int _Z8callbackPKcmmPv(void) {
    ALOGD("_Z8callbackPKcmmPv() called");
    return 0;
}

/* Demangled: MK::CMemoryCopy::GetDiskUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK11CMemoryCopy11GetDiskUsedEv(void) {
    ALOGD("_ZNK2MK11CMemoryCopy11GetDiskUsedEv() called");
    return 0;
}

/* Demangled: MK::CProgram::GetCommand(int) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK8CProgram10GetCommandEi(void) {
    ALOGD("_ZN2MK8CProgram10GetCommandEi() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueUnmapMemObject::Link(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK24CCLEnqueueUnmapMemObject4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK24CCLEnqueueUnmapMemObject4LinkERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<void* (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long const*, unsigned long const*, unsigned long*, unsigned long*, unsigned int, _cl_event* const*, _cl_event**, int*), std::__1::allocator<void* (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long const*, unsigned long const*, unsigned long*, unsigned long*, unsigned int, _cl_event* const*, _cl_event**, int*)>, void* (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long const*, unsigned long const*, unsigned long*, unsigned long*, unsigned int, _cl_event* const*, _cl_event**, int*)>::__clone(std::__1::__function::__base<void* (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long const*, unsigned long const*, unsigned long*, unsigned long*, unsigned int, _cl_event* const*, _cl_event**, int*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFPvP17_cl_command_queueP7_cl_memjmPKmS8_PmS9_jPKP9_cl_eventPSB_PiENS_9allocatorISH_EESG_E7__cloneEPNS0_6__baseISG_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFPvP17_cl_command_queueP7_cl_memjmPKmS8_PmS9_jPKP9_cl_eventPSB_PiENS_9allocatorISH_EESG_E7__cloneEPNS0_6__baseISG_EE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjmmPvjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjmmPvjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E7__cloneEv() called");
    return 0;
}

/* Demangled: MK::CThreadJobQ::~CThreadJobQ() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CThreadJobQD2Ev(void) {
    ALOGD("_ZN2MK11CThreadJobQD2Ev() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueSVMMap::Record(_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long, unsigned int, _cl_event* const*, _cl_event*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLEnqueueSVMMap6RecordEP17_cl_command_queuejmPvmjPKP9_cl_eventS5_(void) {
    ALOGD("_ZN2MK16CCLEnqueueSVMMap6RecordEP17_cl_command_queuejmPvmjPKP9_cl_eventS5_() called");
    return 0;
}

/* Demangled: MK::CCLCreateContext::CCLCreateContext(MK::CCLCreateContext const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLCreateContextC2ERKS0_(void) {
    ALOGD("_ZN2MK16CCLCreateContextC2ERKS0_() called");
    return 0;
}

/* Demangled: MK::CCLCreateProgramWithSource::CCLCreateProgramWithSource() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK26CCLCreateProgramWithSourceC2Ev(void) {
    ALOGD("_ZN2MK26CCLCreateProgramWithSourceC2Ev() called");
    return 0;
}

/* Demangled: MK::CCLRetainEvent::Factory(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14CCLRetainEvent7FactoryERNS_7CStreamE(void) {
    ALOGD("_ZN2MK14CCLRetainEvent7FactoryERNS_7CStreamE() called");
    return 0;
}

/* Demangled: clCreateSubBuffer */
extern "C" __attribute__((visibility("default"))) int clCreateSubBuffer(void) {
    ALOGD("clCreateSubBuffer() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<std::__1::function<int (unsigned long, void*)>, std::__1::allocator<std::__1::function<int (unsigned long, void*)> >, int (unsigned int, void*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcINS_8functionIFimPvEEENS_9allocatorIS5_EEFijS3_EEE = NULL;

/* Demangled: MKProgram_AttachDummyCommand */
extern "C" __attribute__((visibility("default"))) int MKProgram_AttachDummyCommand(void) {
    ALOGD("MKProgram_AttachDummyCommand() called");
    return 0;
}

/* Demangled: MK::CCLCreateKernelsInProgram::CCLCreateKernelsInProgram(MK::CCLCreateKernelsInProgram const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK25CCLCreateKernelsInProgramC2ERKS0_(void) {
    ALOGD("_ZN2MK25CCLCreateKernelsInProgramC2ERKS0_() called");
    return 0;
}

/* Demangled: MK::CCLReleaseMemObject::Save(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK19CCLReleaseMemObject4SaveERNS_7CStreamE(void) {
    ALOGD("_ZN2MK19CCLReleaseMemObject4SaveERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::COutputTensors::CopyConstructTo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK14COutputTensors15CopyConstructToEv(void) {
    ALOGD("_ZNK2MK14COutputTensors15CopyConstructToEv() called");
    return 0;
}

/* Demangled: MK::CCLCreateCommandQueue::RegisterFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK21CCLCreateCommandQueue15RegisterFactoryEv(void) {
    ALOGD("_ZN2MK21CCLCreateCommandQueue15RegisterFactoryEv() called");
    return 0;
}

/* Demangled: MK::CCLCreateProgramWithSource::~CCLCreateProgramWithSource() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK26CCLCreateProgramWithSourceD1Ev(void) {
    ALOGD("_ZN2MK26CCLCreateProgramWithSourceD1Ev() called");
    return 0;
}

/* Demangled: MK::CCLRetainEvent::Link(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14CCLRetainEvent4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK14CCLRetainEvent4LinkERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, unsigned int, unsigned int, long const*, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, unsigned int, unsigned int, long const*, int*)>, _cl_mem* (_cl_context*, unsigned long, unsigned int, unsigned int, long const*, int*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmjjPKlPiENS_9allocatorISA_EES9_EE = NULL;

/* Demangled: clEnqueueNDRangeKernel */
extern "C" __attribute__((visibility("default"))) int clEnqueueNDRangeKernel(void) {
    ALOGD("clEnqueueNDRangeKernel() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMarker::CopyConstructTo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK16CCLEnqueueMarker15CopyConstructToEv(void) {
    ALOGD("_ZNK2MK16CCLEnqueueMarker15CopyConstructToEv() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueWriteBuffer::RegisterFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK21CCLEnqueueWriteBuffer15RegisterFactoryEv(void) {
    ALOGD("_ZN2MK21CCLEnqueueWriteBuffer15RegisterFactoryEv() called");
    return 0;
}

/* Demangled: MK::CCLSVMAlloc::Log(MK::CJsonLog&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK11CCLSVMAlloc3LogERNS_8CJsonLogE(void) {
    ALOGD("_ZNK2MK11CCLSVMAlloc3LogERNS_8CJsonLogE() called");
    return 0;
}

/* Demangled: CmdL_AttachclCreateKernelsInProgram */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclCreateKernelsInProgram(void) {
    ALOGD("CmdL_AttachclCreateKernelsInProgram() called");
    return 0;
}

/* Demangled: clReleaseSampler */
extern "C" __attribute__((visibility("default"))) int clReleaseSampler(void) {
    ALOGD("clReleaseSampler() called");
    return 0;
}

/* Demangled: MK::COutputTensors::GetDiskUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK14COutputTensors11GetDiskUsedEv(void) {
    ALOGD("_ZNK2MK14COutputTensors11GetDiskUsedEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, MK::CObject* (*)(MK::CStream&)>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, MK::CObject* (*)(MK::CStream&)>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, MK::CObject* (*)(MK::CStream&)> > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, MK::CObject* (*)(MK::CStream&)>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPFPN2MK7CObjectERNS8_7CStreamEEEENS_19__map_value_compareIS7_SF_NS_4lessIS7_EELb1EEENS5_ISF_EEE7destroyEPNS_11__tree_nodeISF_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPFPN2MK7CObjectERNS8_7CStreamEEEENS_19__map_value_compareIS7_SF_NS_4lessIS7_EELb1EEENS5_ISF_EEE7destroyEPNS_11__tree_nodeISF_PvEE() called");
    return 0;
}

/* Demangled: MK::clEnqueueSVMFree(_cl_command_queue*, unsigned int, void**, void (*)(_cl_command_queue*, unsigned int, void**, void*), void*, unsigned int, _cl_event* const*, _cl_event**) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16clEnqueueSVMFreeEP17_cl_command_queuejPPvPFvS1_jS3_S2_ES2_jPKP9_cl_eventPS7_(void) {
    ALOGD("_ZN2MK16clEnqueueSVMFreeEP17_cl_command_queuejPPvPFvS1_jS3_S2_ES2_jPKP9_cl_eventPS7_() called");
    return 0;
}

/* Demangled: MK::CCLReleaseContext::Record(_cl_context*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK17CCLReleaseContext6RecordEP11_cl_context(void) {
    ALOGD("_ZN2MK17CCLReleaseContext6RecordEP11_cl_context() called");
    return 0;
}

/* Demangled: MK::CCLPrepareMemoryCopy::~CCLPrepareMemoryCopy() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK20CCLPrepareMemoryCopyD2Ev(void) {
    ALOGD("_ZN2MK20CCLPrepareMemoryCopyD2Ev() called");
    return 0;
}

/* Exported Object: vtable for MK::CCLPrepareMemoryCopy */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK20CCLPrepareMemoryCopyE = NULL;

/* Demangled: MK::CCLRetainCommandQueue::RegisterFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK21CCLRetainCommandQueue15RegisterFactoryEv(void) {
    ALOGD("_ZN2MK21CCLRetainCommandQueue15RegisterFactoryEv() called");
    return 0;
}

/* Demangled: MK::CCLProfileKernelJob::~CCLProfileKernelJob() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK19CCLProfileKernelJobD0Ev(void) {
    ALOGD("_ZN2MK19CCLProfileKernelJobD0Ev() called");
    return 0;
}

/* Demangled: MK::clReleaseMemObject(_cl_mem*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK18clReleaseMemObjectEP7_cl_mem(void) {
    ALOGD("_ZN2MK18clReleaseMemObjectEP7_cl_mem() called");
    return 0;
}

/* Demangled: MK::CCLReleaseContext::Factory(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK17CCLReleaseContext7FactoryERNS_7CStreamE(void) {
    ALOGD("_ZN2MK17CCLReleaseContext7FactoryERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueSVMMap::Load(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLEnqueueSVMMap4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK16CCLEnqueueSVMMap4LoadERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: MK::CMemoryCopy::CMemoryCopy(MK::CMemoryCopy const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CMemoryCopyC2ERKS0_(void) {
    ALOGD("_ZN2MK11CMemoryCopyC2ERKS0_() called");
    return 0;
}

/* Demangled: MKProgram_AttachCLSVMAlloc */
extern "C" __attribute__((visibility("default"))) int MKProgram_AttachCLSVMAlloc(void) {
    ALOGD("MKProgram_AttachCLSVMAlloc() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned long, unsigned int, unsigned long*), std::__1::allocator<int (*)(_cl_command_queue*, unsigned long, unsigned int, unsigned long*)>, int (_cl_command_queue*, unsigned long, unsigned int, unsigned long*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuemjPmENS_9allocatorIS6_EES5_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queuemjPmENS_9allocatorIS6_EES5_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: MK::CCLRetainProgram::GetMemoryUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK16CCLRetainProgram13GetMemoryUsedEv(void) {
    ALOGD("_ZNK2MK16CCLRetainProgram13GetMemoryUsedEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_context* (*)(long const*, unsigned int, _cl_device_id* const*, void (*)(char const*, void const*, unsigned long, void*), void*, int*), std::__1::allocator<_cl_context* (*)(long const*, unsigned int, _cl_device_id* const*, void (*)(char const*, void const*, unsigned long, void*), void*, int*)>, _cl_context* (long const*, unsigned int, _cl_device_id* const*, void (*)(char const*, void const*, unsigned long, void*), void*, int*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFP11_cl_contextPKljPKP13_cl_device_idPFvPKcPKvmPvESE_PiENS_9allocatorISJ_EESI_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFP11_cl_contextPKljPKP13_cl_device_idPFvPKcPKvmPvESE_PiENS_9allocatorISJ_EESI_E18destroy_deallocateEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<int (*)(_cl_device_id*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFiP13_cl_device_idjmPvPmENS_9allocatorIS7_EES6_EE = NULL;

/* Exported Object: MK::CCLEnqueueUnmapMemObject::ms_kRTTI */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK24CCLEnqueueUnmapMemObject8ms_kRTTIE = NULL;

/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, unsigned int, unsigned int, long const*, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, unsigned int, unsigned int, long const*, int*)>, _cl_mem* (_cl_context*, unsigned long, unsigned int, unsigned int, long const*, int*)>::operator()(_cl_context*&&, unsigned long&&, unsigned int&&, unsigned int&&, long const*&&, int*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmjjPKlPiENS_9allocatorISA_EES9_EclEOS5_OmOjSG_OS7_OS8_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmjjPKlPiENS_9allocatorISA_EES9_EclEOS5_OmOjSG_OS7_OS8_() called");
    return 0;
}

/* Demangled: MKStream_Release */
extern "C" __attribute__((visibility("default"))) int MKStream_Release(void) {
    ALOGD("MKStream_Release() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<int (*)(unsigned long, void*), std::__1::allocator<int (*)(unsigned long, void*)>, int (unsigned long, void*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFimPvENS_9allocatorIS4_EES3_EE = NULL;

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>::__clone(std::__1::__function::__base<int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_S7_mmmmPvjPKP9_cl_eventPSA_ENS_9allocatorISF_EESE_E7__cloneEPNS0_6__baseISE_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_S7_mmmmPvjPKP9_cl_eventPSA_ENS_9allocatorISF_EESE_E7__cloneEPNS0_6__baseISE_EE() called");
    return 0;
}

/* Demangled: MK::CCLRetainMemObject::Record(_cl_mem*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK18CCLRetainMemObject6RecordEP7_cl_mem(void) {
    ALOGD("_ZN2MK18CCLRetainMemObject6RecordEP7_cl_mem() called");
    return 0;
}

/* Demangled: MK::CCLCreateBuffer::CCLCreateBuffer(MK::CCLCreateBuffer const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLCreateBufferC2ERKS0_(void) {
    ALOGD("_ZN2MK15CCLCreateBufferC2ERKS0_() called");
    return 0;
}

/* Demangled: MK::CCLProfileKernelJob::CCLProfileKernelJob(_cl_program*, _cl_program*, _cl_kernel*, _cl_kernel*, _cl_event*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK19CCLProfileKernelJobC2EP11_cl_programS2_P10_cl_kernelS4_P9_cl_event(void) {
    ALOGD("_ZN2MK19CCLProfileKernelJobC2EP11_cl_programS2_P10_cl_kernelS4_P9_cl_event() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_kernel*, unsigned int, void const*), std::__1::allocator<int (*)(_cl_kernel*, unsigned int, void const*)>, int (_cl_kernel*, unsigned int, void const*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP10_cl_kerneljPKvENS_9allocatorIS7_EES6_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP10_cl_kerneljPKvENS_9allocatorIS7_EES6_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: CmdL_AttachclImportMemoryARM */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclImportMemoryARM(void) {
    ALOGD("CmdL_AttachclImportMemoryARM() called");
    return 0;
}

/* Demangled: clEnqueueReadBufferRect */
extern "C" __attribute__((visibility("default"))) int clEnqueueReadBufferRect(void) {
    ALOGD("clEnqueueReadBufferRect() called");
    return 0;
}

/* Demangled: MK::CCLCreateContext::GetDeviceInfo(unsigned int, _cl_device_id* const*, std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, _cl_device_id*, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, _cl_device_id*> > >&, std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK16CCLCreateContext13GetDeviceInfoEjPKP13_cl_device_idRNSt3__13mapINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEES2_NS5_4lessISC_EENSA_INS5_4pairIKSC_S2_EEEEEERNS6_ISC_SC_SE_NSA_INSF_ISG_SC_EEEEEE(void) {
    ALOGD("_ZNK2MK16CCLCreateContext13GetDeviceInfoEjPKP13_cl_device_idRNSt3__13mapINS5_12basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEES2_NS5_4lessISC_EENSA_INS5_4pairIKSC_S2_EEEEEERNS6_ISC_SC_SE_NSA_INSF_ISG_SC_EEEEEE() called");
    return 0;
}

/* Exported Object: vtable for MK::CCLSVMFree */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK10CCLSVMFreeE = NULL;

/* Demangled: MKProgram_AttachCLPrepareMemoryCopy */
extern "C" __attribute__((visibility("default"))) int MKProgram_AttachCLPrepareMemoryCopy(void) {
    ALOGD("MKProgram_AttachCLPrepareMemoryCopy() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueNDRangeKernel::CCLEnqueueNDRangeKernel() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK23CCLEnqueueNDRangeKernelC1Ev(void) {
    ALOGD("_ZN2MK23CCLEnqueueNDRangeKernelC1Ev() called");
    return 0;
}

/* Demangled: MK::CObject::~CObject() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK7CObjectD2Ev(void) {
    ALOGD("_ZN2MK7CObjectD2Ev() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMapBuffer::RegisterFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK19CCLEnqueueMapBuffer15RegisterFactoryEv(void) {
    ALOGD("_ZN2MK19CCLEnqueueMapBuffer15RegisterFactoryEv() called");
    return 0;
}

/* Demangled: MK::CCLReleaseMemObject::Link(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK19CCLReleaseMemObject4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK19CCLReleaseMemObject4LinkERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueSVMMap::Log(MK::CJsonLog&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK16CCLEnqueueSVMMap3LogERNS_8CJsonLogE(void) {
    ALOGD("_ZNK2MK16CCLEnqueueSVMMap3LogERNS_8CJsonLogE() called");
    return 0;
}

/* Demangled: clEnqueueCopyBuffer */
extern "C" __attribute__((visibility("default"))) int clEnqueueCopyBuffer(void) {
    ALOGD("clEnqueueCopyBuffer() called");
    return 0;
}

/* Demangled: MK::CCLSetKernelArg::RegisterFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLSetKernelArg15RegisterFactoryEv(void) {
    ALOGD("_ZN2MK15CCLSetKernelArg15RegisterFactoryEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, long const*, void*, unsigned long, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, long const*, void*, unsigned long, int*)>, _cl_mem* (_cl_context*, unsigned long, long const*, void*, unsigned long, int*)>::__clone(std::__1::__function::__base<_cl_mem* (_cl_context*, unsigned long, long const*, void*, unsigned long, int*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPKlPvmPiENS_9allocatorISB_EESA_E7__cloneEPNS0_6__baseISA_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPKlPvmPiENS_9allocatorISB_EESA_E7__cloneEPNS0_6__baseISA_EE() called");
    return 0;
}

/* Demangled: MK::CCLPrepareMemoryCopy::Record(_cl_context*, unsigned int, _cl_device_id* const*, _cl_kernel*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK20CCLPrepareMemoryCopy6RecordEP11_cl_contextjPKP13_cl_device_idP10_cl_kernel(void) {
    ALOGD("_ZN2MK20CCLPrepareMemoryCopy6RecordEP11_cl_contextjPKP13_cl_device_idP10_cl_kernel() called");
    return 0;
}

/* Demangled: MK::CUpdateBool::CUpdateBool(MK::CUpdateBool const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CUpdateBoolC1ERKS0_(void) {
    ALOGD("_ZN2MK11CUpdateBoolC1ERKS0_() called");
    return 0;
}

/* Demangled: MK::clCreateSamplerWithProperties(_cl_context*, unsigned long const*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK29clCreateSamplerWithPropertiesEP11_cl_contextPKmPi(void) {
    ALOGD("_ZN2MK29clCreateSamplerWithPropertiesEP11_cl_contextPKmPi() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__emplace_back_slow_path<char (&) [128]>(char (&) [128]) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE24__emplace_back_slow_pathIJRA128_cEEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE24__emplace_back_slow_pathIJRA128_cEEEvDpOT_() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueNDRangeKernel::GetDiskUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK23CCLEnqueueNDRangeKernel11GetDiskUsedEv(void) {
    ALOGD("_ZNK2MK23CCLEnqueueNDRangeKernel11GetDiskUsedEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_kernel*), std::__1::allocator<int (*)(_cl_kernel*)>, int (_cl_kernel*)>::__clone(std::__1::__function::__base<int (_cl_kernel*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP10_cl_kernelENS_9allocatorIS5_EES4_E7__cloneEPNS0_6__baseIS4_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP10_cl_kernelENS_9allocatorIS5_EES4_E7__cloneEPNS0_6__baseIS4_EE() called");
    return 0;
}

/* Demangled: MK::CUpdateBool::Run(MKProgramType, MK::CContextLocal*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CUpdateBool3RunE13MKProgramTypePNS_13CContextLocalE(void) {
    ALOGD("_ZN2MK11CUpdateBool3RunE13MKProgramTypePNS_13CContextLocalE() called");
    return 0;
}

/* Demangled: CmdL_TreeNodePushStack */
extern "C" __attribute__((visibility("default"))) int CmdL_TreeNodePushStack(void) {
    ALOGD("CmdL_TreeNodePushStack() called");
    return 0;
}

/* Demangled: clEnqueueNativeKernel */
extern "C" __attribute__((visibility("default"))) int clEnqueueNativeKernel(void) {
    ALOGD("clEnqueueNativeKernel() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueNDRangeKernel::~CCLEnqueueNDRangeKernel() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK23CCLEnqueueNDRangeKernelD0Ev(void) {
    ALOGD("_ZN2MK23CCLEnqueueNDRangeKernelD0Ev() called");
    return 0;
}

/* Demangled: MK::CCLSVMFree::RegisterUniqueObject(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK10CCLSVMFree20RegisterUniqueObjectERNS_7CStreamE(void) {
    ALOGD("_ZN2MK10CCLSVMFree20RegisterUniqueObjectERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CProgram::AttachCommand(MK::CCommand*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK8CProgram13AttachCommandEPNS_8CCommandE(void) {
    ALOGD("_ZN2MK8CProgram13AttachCommandEPNS_8CCommandE() called");
    return 0;
}

/* Demangled: CmdL_AttachclSetCommandQueueProperty */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclSetCommandQueueProperty(void) {
    ALOGD("CmdL_AttachclSetCommandQueueProperty() called");
    return 0;
}

/* Demangled: MK::CCLCreateKernel::GetDiskUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK15CCLCreateKernel11GetDiskUsedEv(void) {
    ALOGD("_ZNK2MK15CCLCreateKernel11GetDiskUsedEv() called");
    return 0;
}

/* Demangled: MK::CCLWaitForEvents::Factory(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLWaitForEvents7FactoryERNS_7CStreamE(void) {
    ALOGD("_ZN2MK16CCLWaitForEvents7FactoryERNS_7CStreamE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, unsigned long const*, unsigned char const**, int*, int*), std::__1::allocator<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, unsigned long const*, unsigned char const**, int*, int*)>, _cl_program* (_cl_context*, unsigned int, _cl_device_id* const*, unsigned long const*, unsigned char const**, int*, int*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKmPPKhPiSF_ENS_9allocatorISH_EESG_EE = NULL;

/* Demangled: std::__1::deque<MK::CPointer<MK::CProgram>, std::__1::allocator<MK::CPointer<MK::CProgram> > >::__add_back_capacity() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__15dequeIN2MK8CPointerINS1_8CProgramEEENS_9allocatorIS4_EEE19__add_back_capacityEv(void) {
    ALOGD("_ZNSt3__15dequeIN2MK8CPointerINS1_8CProgramEEENS_9allocatorIS4_EEE19__add_back_capacityEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_context*), std::__1::allocator<int (*)(_cl_context*)>, int (_cl_context*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP11_cl_contextENS_9allocatorIS5_EES4_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP11_cl_contextENS_9allocatorIS5_EES4_E7__cloneEv() called");
    return 0;
}

/* Demangled: MKObject_Release */
extern "C" __attribute__((visibility("default"))) int MKObject_Release(void) {
    ALOGD("MKObject_Release() called");
    return 0;
}

/* Exported Object: vtable for MK::CCLFlush */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK8CCLFlushE = NULL;

/* Demangled: clGetSamplerInfo */
extern "C" __attribute__((visibility("default"))) int clGetSamplerInfo(void) {
    ALOGD("clGetSamplerInfo() called");
    return 0;
}

/* Demangled: MK::CCLCreateProgramWithBinary::Save(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK26CCLCreateProgramWithBinary4SaveERNS_7CStreamE(void) {
    ALOGD("_ZN2MK26CCLCreateProgramWithBinary4SaveERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CCLSetKernelArg::CCLSetKernelArg(MK::CCLSetKernelArg const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLSetKernelArgC2ERKS0_(void) {
    ALOGD("_ZN2MK15CCLSetKernelArgC2ERKS0_() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*), std::__1::allocator<int (*)(_cl_command_queue*)>, int (_cl_command_queue*)>::operator()(_cl_command_queue*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueENS_9allocatorIS5_EES4_EclEOS3_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queueENS_9allocatorIS5_EES4_EclEOS3_() called");
    return 0;
}

/* Demangled: MK::COutputTensors::Run(MKProgramType, MK::CContextLocal*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14COutputTensors3RunE13MKProgramTypePNS_13CContextLocalE(void) {
    ALOGD("_ZN2MK14COutputTensors3RunE13MKProgramTypePNS_13CContextLocalE() called");
    return 0;
}

/* Demangled: clEnqueueCopyImageToBuffer */
extern "C" __attribute__((visibility("default"))) int clEnqueueCopyImageToBuffer(void) {
    ALOGD("clEnqueueCopyImageToBuffer() called");
    return 0;
}

/* Demangled: clGetImageInfo */
extern "C" __attribute__((visibility("default"))) int clGetImageInfo(void) {
    ALOGD("clGetImageInfo() called");
    return 0;
}

/* Demangled: MK::CCLCreateBuffer::CopyConstructTo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK15CCLCreateBuffer15CopyConstructToEv(void) {
    ALOGD("_ZNK2MK15CCLCreateBuffer15CopyConstructToEv() called");
    return 0;
}

/* Exported Object: MK::CCLEnqueueSVMMap::ms_kRTTI */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK16CCLEnqueueSVMMap8ms_kRTTIE = NULL;

/* Demangled: std::__1::__function::__func<int (*)(_cl_event*, int), std::__1::allocator<int (*)(_cl_event*, int)>, int (_cl_event*, int)>::operator()(_cl_event*&&, int&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP9_cl_eventiENS_9allocatorIS5_EES4_EclEOS3_Oi(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP9_cl_eventiENS_9allocatorIS5_EES4_EclEOS3_Oi() called");
    return 0;
}

/* Demangled: MK::CCLRetainEvent::CCLRetainEvent(MK::CCLRetainEvent const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14CCLRetainEventC1ERKS0_(void) {
    ALOGD("_ZN2MK14CCLRetainEventC1ERKS0_() called");
    return 0;
}

/* Demangled: MKProgram_AttachCLEnqueueMapBuffer */
extern "C" __attribute__((visibility("default"))) int MKProgram_AttachCLEnqueueMapBuffer(void) {
    ALOGD("MKProgram_AttachCLEnqueueMapBuffer() called");
    return 0;
}

/* Demangled: MKProgram_AttachCLReleaseContext */
extern "C" __attribute__((visibility("default"))) int MKProgram_AttachCLReleaseContext(void) {
    ALOGD("MKProgram_AttachCLReleaseContext() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, void (*)(_cl_program*, void*), void*, int*), std::__1::allocator<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, void (*)(_cl_program*, void*), void*, int*)>, _cl_program* (_cl_context*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, void (*)(_cl_program*, void*), void*, int*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKcjPKS3_PFvS3_PvESE_PiENS_9allocatorISJ_EESI_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKcjPKS3_PFvS3_PvESE_PiENS_9allocatorISJ_EESI_E7__cloneEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, unsigned int, _cl_event* const*, _cl_event**)>::__clone(std::__1::__function::__base<int (_cl_command_queue*, unsigned int, _cl_event* const*, _cl_event**)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuejPKP9_cl_eventPS5_ENS_9allocatorISA_EES9_E7__cloneEPNS0_6__baseIS9_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP17_cl_command_queuejPKP9_cl_eventPS5_ENS_9allocatorISA_EES9_E7__cloneEPNS0_6__baseIS9_EE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_command_queue* (*)(_cl_context*, _cl_device_id*, unsigned long, int*), std::__1::allocator<_cl_command_queue* (*)(_cl_context*, _cl_device_id*, unsigned long, int*)>, _cl_command_queue* (_cl_context*, _cl_device_id*, unsigned long, int*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFP17_cl_command_queueP11_cl_contextP13_cl_device_idmPiENS_9allocatorISA_EES9_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFP17_cl_command_queueP11_cl_contextP13_cl_device_idmPiENS_9allocatorISA_EES9_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMapBuffer::Factory(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK19CCLEnqueueMapBuffer7FactoryERNS_7CStreamE(void) {
    ALOGD("_ZN2MK19CCLEnqueueMapBuffer7FactoryERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CUpdateBool::CopyConstructTo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK11CUpdateBool15CopyConstructToEv(void) {
    ALOGD("_ZNK2MK11CUpdateBool15CopyConstructToEv() called");
    return 0;
}

/* Demangled: MK::CUpdateBool::CUpdateBool(MK::CBool*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CUpdateBoolC1EPNS_5CBoolEb(void) {
    ALOGD("_ZN2MK11CUpdateBoolC1EPNS_5CBoolEb() called");
    return 0;
}

/* Demangled: MK::clRetainKernel(_cl_kernel*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14clRetainKernelEP10_cl_kernel(void) {
    ALOGD("_ZN2MK14clRetainKernelEP10_cl_kernel() called");
    return 0;
}

/* Demangled: MK::CCLReleaseEvent::Run(MKProgramType, MK::CContextLocal*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLReleaseEvent3RunE13MKProgramTypePNS_13CContextLocalE(void) {
    ALOGD("_ZN2MK15CCLReleaseEvent3RunE13MKProgramTypePNS_13CContextLocalE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<_cl_command_queue* (*)(_cl_context*, _cl_device_id*, unsigned long const*, int*), std::__1::allocator<_cl_command_queue* (*)(_cl_context*, _cl_device_id*, unsigned long const*, int*)>, _cl_command_queue* (_cl_context*, _cl_device_id*, unsigned long const*, int*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFP17_cl_command_queueP11_cl_contextP13_cl_device_idPKmPiENS_9allocatorISC_EESB_EE = NULL;

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, MK::CObject* (*)(MK::CStream&)>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, MK::CObject* (*)(MK::CStream&)>, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, MK::CObject* (*)(MK::CStream&)>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, MK::CObject* (*)(MK::CStream&)>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, MK::CObject* (*)(MK::CStream&)> > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPFPN2MK7CObjectERNS8_7CStreamEEEENS_19__map_value_compareIS7_SF_NS_4lessIS7_EELb1EEENS5_ISF_EEE4findIS7_EENS_15__tree_iteratorISF_PNS_11__tree_nodeISF_PvEElEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPFPN2MK7CObjectERNS8_7CStreamEEEENS_19__map_value_compareIS7_SF_NS_4lessIS7_EELb1EEENS5_ISF_EEE4findIS7_EENS_15__tree_iteratorISF_PNS_11__tree_nodeISF_PvEElEERKT_() called");
    return 0;
}

/* Demangled: MK::CVersion::operator==(MK::CVersion const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK8CVersioneqERKS0_(void) {
    ALOGD("_ZNK2MK8CVersioneqERKS0_() called");
    return 0;
}

/* Demangled: MK::clFlush(_cl_command_queue*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK7clFlushEP17_cl_command_queue(void) {
    ALOGD("_ZN2MK7clFlushEP17_cl_command_queue() called");
    return 0;
}

/* Demangled: MK::clFinish(_cl_command_queue*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK8clFinishEP17_cl_command_queue(void) {
    ALOGD("_ZN2MK8clFinishEP17_cl_command_queue() called");
    return 0;
}

/* Demangled: MK::CCLImportMemory::Link(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLImportMemory4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK15CCLImportMemory4LinkERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: MK::CStaticData::GetMemoryUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK11CStaticData13GetMemoryUsedEv(void) {
    ALOGD("_ZNK2MK11CStaticData13GetMemoryUsedEv() called");
    return 0;
}

/* Demangled: MK::CThreadJobQ::CThreadJobQ() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CThreadJobQC2Ev(void) {
    ALOGD("_ZN2MK11CThreadJobQC2Ev() called");
    return 0;
}

/* Exported Object: MK::CCommand::ms_kRTTI */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK8CCommand8ms_kRTTIE = NULL;

/* Demangled: MK::CCLEnqueueMarkerWithWaitList::CopyConstructTo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK28CCLEnqueueMarkerWithWaitList15CopyConstructToEv(void) {
    ALOGD("_ZNK2MK28CCLEnqueueMarkerWithWaitList15CopyConstructToEv() called");
    return 0;
}

/* Demangled: MK::CCLReleaseKernel::Log(MK::CJsonLog&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK16CCLReleaseKernel3LogERNS_8CJsonLogE(void) {
    ALOGD("_ZNK2MK16CCLReleaseKernel3LogERNS_8CJsonLogE() called");
    return 0;
}

/* Demangled: MK::CCLRetainKernel::GetMemoryUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK15CCLRetainKernel13GetMemoryUsedEv(void) {
    ALOGD("_ZNK2MK15CCLRetainKernel13GetMemoryUsedEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(), std::__1::allocator<int (*)()>, int ()>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFivENS_9allocatorIS3_EES2_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFivENS_9allocatorIS3_EES2_E7__cloneEv() called");
    return 0;
}

/* Demangled: CmdL_AttachclReleaseEvent */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclReleaseEvent(void) {
    ALOGD("CmdL_AttachclReleaseEvent() called");
    return 0;
}

/* Demangled: MK::CCommand::Link(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK8CCommand4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK8CCommand4LinkERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Exported Object: vtable for MK::CCLCreateBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK15CCLCreateBufferE = NULL;

/* Demangled: MK::CCLEnqueueSVMUnmap::Log(MK::CJsonLog&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK18CCLEnqueueSVMUnmap3LogERNS_8CJsonLogE(void) {
    ALOGD("_ZNK2MK18CCLEnqueueSVMUnmap3LogERNS_8CJsonLogE() called");
    return 0;
}

/* Exported Object: vtable for MK::CCLEnqueueSVMUnmap */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK18CCLEnqueueSVMUnmapE = NULL;

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_kernel*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_kernel*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_kernel*, unsigned int, _cl_event* const*, _cl_event**)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP10_cl_kerneljPKP9_cl_eventPS7_ENS_9allocatorISC_EESB_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queueP10_cl_kerneljPKP9_cl_eventPS7_ENS_9allocatorISC_EESB_E7destroyEv() called");
    return 0;
}

/* Demangled: CmdL_AttachclCreateSubBuffer */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclCreateSubBuffer(void) {
    ALOGD("CmdL_AttachclCreateSubBuffer() called");
    return 0;
}

/* Exported Object: guard variable for MK::CThreadJobQ::GetInstance()::gs_kThreadJobQ */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN2MK11CThreadJobQ11GetInstanceEvE14gs_kThreadJobQ = NULL;

/* Demangled: std::__1::__function::__func<int (*)(unsigned int, _cl_platform_id**, unsigned int*), std::__1::allocator<int (*)(unsigned int, _cl_platform_id**, unsigned int*)>, int (unsigned int, _cl_platform_id**, unsigned int*)>::__clone(std::__1::__function::__base<int (unsigned int, _cl_platform_id**, unsigned int*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFijPP15_cl_platform_idPjENS_9allocatorIS7_EES6_E7__cloneEPNS0_6__baseIS6_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFijPP15_cl_platform_idPjENS_9allocatorIS7_EES6_E7__cloneEPNS0_6__baseIS6_EE() called");
    return 0;
}

/* Demangled: MK::CDynamicData::Factory(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK12CDynamicData7FactoryERNS_7CStreamE(void) {
    ALOGD("_ZN2MK12CDynamicData7FactoryERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CMemoryCopy::~CMemoryCopy() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CMemoryCopyD2Ev(void) {
    ALOGD("_ZN2MK11CMemoryCopyD2Ev() called");
    return 0;
}

/* Demangled: MK::CProfileDataJob::~CProfileDataJob() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CProfileDataJobD2Ev(void) {
    ALOGD("_ZN2MK15CProfileDataJobD2Ev() called");
    return 0;
}

/* Demangled: CmdL_AttachclRetainEvent */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclRetainEvent(void) {
    ALOGD("CmdL_AttachclRetainEvent() called");
    return 0;
}

/* Demangled: MK::CThreadJobQ::~CThreadJobQ() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CThreadJobQD1Ev(void) {
    ALOGD("_ZN2MK11CThreadJobQD1Ev() called");
    return 0;
}

/* Exported Object: vtable for MK::CCLEnqueueReadBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK20CCLEnqueueReadBufferE = NULL;

/* Demangled: MK::CCLCreateProgramWithSource::CCLCreateProgramWithSource() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK26CCLCreateProgramWithSourceC1Ev(void) {
    ALOGD("_ZN2MK26CCLCreateProgramWithSourceC1Ev() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_program*, unsigned int, _cl_device_id* const*, char const*, void (*)(_cl_program*, void*), void*), std::__1::allocator<int (*)(_cl_program*, unsigned int, _cl_device_id* const*, char const*, void (*)(_cl_program*, void*), void*)>, int (_cl_program*, unsigned int, _cl_device_id* const*, char const*, void (*)(_cl_program*, void*), void*)>::__clone(std::__1::__function::__base<int (_cl_program*, unsigned int, _cl_device_id* const*, char const*, void (*)(_cl_program*, void*), void*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP11_cl_programjPKP13_cl_device_idPKcPFvS3_PvESA_ENS_9allocatorISE_EESD_E7__cloneEPNS0_6__baseISD_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP11_cl_programjPKP13_cl_device_idPKcPFvS3_PvESA_ENS_9allocatorISE_EESD_E7__cloneEPNS0_6__baseISD_EE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<int (*)(unsigned int, _cl_platform_id**, unsigned int*), std::__1::allocator<int (*)(unsigned int, _cl_platform_id**, unsigned int*)>, int (unsigned int, _cl_platform_id**, unsigned int*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFijPP15_cl_platform_idPjENS_9allocatorIS7_EES6_EE = NULL;

/* Demangled: MK::CCLReleaseProgram::Link(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK17CCLReleaseProgram4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK17CCLReleaseProgram4LinkERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: MK::CInputTensors::Log(MK::CJsonLog&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK13CInputTensors3LogERNS_8CJsonLogE(void) {
    ALOGD("_ZNK2MK13CInputTensors3LogERNS_8CJsonLogE() called");
    return 0;
}

/* Demangled: clCreateContextFromType */
extern "C" __attribute__((visibility("default"))) int clCreateContextFromType(void) {
    ALOGD("clCreateContextFromType() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueCopyBufferToImage::~CCLEnqueueCopyBufferToImage() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK27CCLEnqueueCopyBufferToImageD2Ev(void) {
    ALOGD("_ZN2MK27CCLEnqueueCopyBufferToImageD2Ev() called");
    return 0;
}

/* Demangled: MK::CCLPrepareMemoryCopy::CCLPrepareMemoryCopy() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK20CCLPrepareMemoryCopyC2Ev(void) {
    ALOGD("_ZN2MK20CCLPrepareMemoryCopyC2Ev() called");
    return 0;
}

/* Demangled: MK::CObject::GetMemoryUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK7CObject13GetMemoryUsedEv(void) {
    ALOGD("_ZNK2MK7CObject13GetMemoryUsedEv() called");
    return 0;
}

/* Demangled: handleCreateKernelNULL(_cl_kernel*, char const*) */
extern "C" __attribute__((visibility("default"))) int _Z22handleCreateKernelNULLP10_cl_kernelPKc(void) {
    ALOGD("_Z22handleCreateKernelNULLP10_cl_kernelPKc() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, unsigned int, unsigned int, long const*, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, unsigned int, unsigned int, long const*, int*)>, _cl_mem* (_cl_context*, unsigned long, unsigned int, unsigned int, long const*, int*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmjjPKlPiENS_9allocatorISA_EES9_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmjjPKlPiENS_9allocatorISA_EES9_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_event*), std::__1::allocator<int (*)(_cl_event*)>, int (_cl_event*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP9_cl_eventENS_9allocatorIS5_EES4_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP9_cl_eventENS_9allocatorIS5_EES4_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: MK::COutputTensors::GetMemoryUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK14COutputTensors13GetMemoryUsedEv(void) {
    ALOGD("_ZNK2MK14COutputTensors13GetMemoryUsedEv() called");
    return 0;
}

/* Demangled: MK::clReleaseEvent(_cl_event*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14clReleaseEventEP9_cl_event(void) {
    ALOGD("_ZN2MK14clReleaseEventEP9_cl_event() called");
    return 0;
}

/* Demangled: MK::CCLBuildProgram::GetMemoryUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK15CCLBuildProgram13GetMemoryUsedEv(void) {
    ALOGD("_ZNK2MK15CCLBuildProgram13GetMemoryUsedEv() called");
    return 0;
}

/* Demangled: MK::CCLCreateProgramWithSource::~CCLCreateProgramWithSource() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK26CCLCreateProgramWithSourceD0Ev(void) {
    ALOGD("_ZN2MK26CCLCreateProgramWithSourceD0Ev() called");
    return 0;
}

/* Demangled: MK::clReleaseContext(_cl_context*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16clReleaseContextEP11_cl_context(void) {
    ALOGD("_ZN2MK16clReleaseContextEP11_cl_context() called");
    return 0;
}

/* Demangled: MK::CCLReleaseEvent::Record(_cl_event*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLReleaseEvent6RecordEP9_cl_event(void) {
    ALOGD("_ZN2MK15CCLReleaseEvent6RecordEP9_cl_event() called");
    return 0;
}

/* Exported Object: MK::CCLEnqueueMarkerWithWaitList::ms_kRTTI */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK28CCLEnqueueMarkerWithWaitList8ms_kRTTIE = NULL;

/* Demangled: MK::CCLEnqueueReadBuffer::Log(MK::CJsonLog&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK20CCLEnqueueReadBuffer3LogERNS_8CJsonLogE(void) {
    ALOGD("_ZNK2MK20CCLEnqueueReadBuffer3LogERNS_8CJsonLogE() called");
    return 0;
}

/* Demangled: MK::CCLProfileJob::CCLProfileJob(MK::CCLProfileJob const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK13CCLProfileJobC2ERKS0_(void) {
    ALOGD("_ZN2MK13CCLProfileJobC2ERKS0_() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_S7_mmmmPvjPKP9_cl_eventPSA_ENS_9allocatorISF_EESE_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_S7_mmmmPvjPKP9_cl_eventPSA_ENS_9allocatorISF_EESE_E7__cloneEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_event**)>, int (_cl_command_queue*, _cl_event**)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuePP9_cl_eventENS_9allocatorIS8_EES7_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queuePP9_cl_eventENS_9allocatorIS8_EES7_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: clEnqueueCopyImage */
extern "C" __attribute__((visibility("default"))) int clEnqueueCopyImage(void) {
    ALOGD("clEnqueueCopyImage() called");
    return 0;
}

/* Demangled: clGetKernelAddress(_cl_kernel*) */
extern "C" __attribute__((visibility("default"))) int _Z18clGetKernelAddressP10_cl_kernel(void) {
    ALOGD("_Z18clGetKernelAddressP10_cl_kernel() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<_cl_program* (*)(_cl_context*, unsigned int, char const**, unsigned long const*, int*), std::__1::allocator<_cl_program* (*)(_cl_context*, unsigned int, char const**, unsigned long const*, int*)>, _cl_program* (_cl_context*, unsigned int, char const**, unsigned long const*, int*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPPKcPKmPiENS_9allocatorISD_EESC_EE = NULL;

/* Demangled: MK::COutputTensors::COutputTensors(MK::COutputTensors const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14COutputTensorsC2ERKS0_(void) {
    ALOGD("_ZN2MK14COutputTensorsC2ERKS0_() called");
    return 0;
}

/* Demangled: CmdL_AttachclSetUserEventStatus */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclSetUserEventStatus(void) {
    ALOGD("CmdL_AttachclSetUserEventStatus() called");
    return 0;
}

/* Demangled: MK::CCLCreateProgramWithSource::GetDiskUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK26CCLCreateProgramWithSource11GetDiskUsedEv(void) {
    ALOGD("_ZNK2MK26CCLCreateProgramWithSource11GetDiskUsedEv() called");
    return 0;
}

/* Demangled: MK::CCLPrepareMemoryCopy::~CCLPrepareMemoryCopy() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK20CCLPrepareMemoryCopyD1Ev(void) {
    ALOGD("_ZN2MK20CCLPrepareMemoryCopyD1Ev() called");
    return 0;
}

/* Demangled: MK::CCLRetainEvent::~CCLRetainEvent() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14CCLRetainEventD2Ev(void) {
    ALOGD("_ZN2MK14CCLRetainEventD2Ev() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_kernel*, unsigned int, unsigned long, void const*), std::__1::allocator<int (*)(_cl_kernel*, unsigned int, unsigned long, void const*)>, int (_cl_kernel*, unsigned int, unsigned long, void const*)>::__clone(std::__1::__function::__base<int (_cl_kernel*, unsigned int, unsigned long, void const*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP10_cl_kerneljmPKvENS_9allocatorIS7_EES6_E7__cloneEPNS0_6__baseIS6_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP10_cl_kerneljmPKvENS_9allocatorIS7_EES6_E7__cloneEPNS0_6__baseIS6_EE() called");
    return 0;
}

/* Demangled: MK::CInputTensors::CInputTensors(MK::CInputTensors const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK13CInputTensorsC1ERKS0_(void) {
    ALOGD("_ZN2MK13CInputTensorsC1ERKS0_() called");
    return 0;
}

/* Demangled: MKProgram_GetCommandCount */
extern "C" __attribute__((visibility("default"))) int MKProgram_GetCommandCount(void) {
    ALOGD("MKProgram_GetCommandCount() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<int (*)(_cl_kernel*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_kernel*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_kernel*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFiP10_cl_kernelP13_cl_device_idjmPvPmENS_9allocatorIS9_EES8_EE = NULL;

/* Exported Object: vtable for std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_S7_mmmmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EE = NULL;

/* Demangled: MK::CCLEnqueueUnmapMemObject::Record(_cl_command_queue*, _cl_mem*, void*, unsigned int, _cl_event* const*, _cl_event*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK24CCLEnqueueUnmapMemObject6RecordEP17_cl_command_queueP7_cl_memPvjPKP9_cl_eventS7_(void) {
    ALOGD("_ZN2MK24CCLEnqueueUnmapMemObject6RecordEP17_cl_command_queueP7_cl_memPvjPKP9_cl_eventS7_() called");
    return 0;
}

/* Demangled: MK::CCLCreateKernel::~CCLCreateKernel() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLCreateKernelD2Ev(void) {
    ALOGD("_ZN2MK15CCLCreateKernelD2Ev() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**)>::__clone(std::__1::__function::__base<int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_mmPKvjPKP9_cl_eventPSB_ENS_9allocatorISG_EESF_E7__cloneEPNS0_6__baseISF_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_mmPKvjPKP9_cl_eventPSB_ENS_9allocatorISG_EESF_E7__cloneEPNS0_6__baseISF_EE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_mjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_mjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7destroyEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>::operator()(_cl_command_queue*&&, _cl_mem*&&, unsigned int&&, unsigned long&&, unsigned long&&, void*&&, unsigned int&&, _cl_event* const*&&, _cl_event**&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjmmPvjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_EclEOS3_OS5_OjOmSK_OS6_SJ_OSA_OSB_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjmmPvjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_EclEOS3_OS5_OjOmSK_OS6_SJ_OSA_OSB_() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMapBuffer::Link(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK19CCLEnqueueMapBuffer4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK19CCLEnqueueMapBuffer4LinkERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_command_queue* (*)(_cl_context*, _cl_device_id*, unsigned long const*, int*), std::__1::allocator<_cl_command_queue* (*)(_cl_context*, _cl_device_id*, unsigned long const*, int*)>, _cl_command_queue* (_cl_context*, _cl_device_id*, unsigned long const*, int*)>::__clone(std::__1::__function::__base<_cl_command_queue* (_cl_context*, _cl_device_id*, unsigned long const*, int*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFP17_cl_command_queueP11_cl_contextP13_cl_device_idPKmPiENS_9allocatorISC_EESB_E7__cloneEPNS0_6__baseISB_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFP17_cl_command_queueP11_cl_contextP13_cl_device_idPKmPiENS_9allocatorISC_EESB_E7__cloneEPNS0_6__baseISB_EE() called");
    return 0;
}

/* Demangled: MK::CInputTensors::GetMemoryUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK13CInputTensors13GetMemoryUsedEv(void) {
    ALOGD("_ZNK2MK13CInputTensors13GetMemoryUsedEv() called");
    return 0;
}

/* Demangled: CmdL_AttachclReleaseKernel */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclReleaseKernel(void) {
    ALOGD("CmdL_AttachclReleaseKernel() called");
    return 0;
}

/* Demangled: clEnqueueMarker */
extern "C" __attribute__((visibility("default"))) int clEnqueueMarker(void) {
    ALOGD("clEnqueueMarker() called");
    return 0;
}

/* Demangled: clEnqueueReadBuffer */
extern "C" __attribute__((visibility("default"))) int clEnqueueReadBuffer(void) {
    ALOGD("clEnqueueReadBuffer() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, void*, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, void*, int*)>, _cl_mem* (_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, void*, int*)>::operator()(_cl_context*&&, unsigned long&&, _cl_image_format const*&&, unsigned long&&, unsigned long&&, unsigned long&&, unsigned long&&, unsigned long&&, void*&&, int*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatmmmmmPvPiENS_9allocatorISC_EESB_EclEOS5_OmOS8_SH_SH_SH_SH_SH_OS9_OSA_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatmmmmmPvPiENS_9allocatorISC_EESB_EclEOS5_OmOS8_SH_SH_SH_SH_SH_OS9_OSA_() called");
    return 0;
}

/* Demangled: CmdL_Run */
extern "C" __attribute__((visibility("default"))) int CmdL_Run(void) {
    ALOGD("CmdL_Run() called");
    return 0;
}

/* Demangled: MK::CObject::CObject() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK7CObjectC2Ev(void) {
    ALOGD("_ZN2MK7CObjectC2Ev() called");
    return 0;
}

/* Demangled: CmdL_AttachclEnqueueWriteBufferRect */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclEnqueueWriteBufferRect(void) {
    ALOGD("CmdL_AttachclEnqueueWriteBufferRect() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<std::__1::function<int (unsigned long, void*)>, std::__1::allocator<std::__1::function<int (unsigned long, void*)> >, int (unsigned int, void*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcINS_8functionIFimPvEEENS_9allocatorIS5_EEFijS3_EE7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcINS_8functionIFimPvEEENS_9allocatorIS5_EEFijS3_EE7__cloneEv() called");
    return 0;
}

/* Demangled: MK::CCLCreateKernelsInProgram::Factory(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK25CCLCreateKernelsInProgram7FactoryERNS_7CStreamE(void) {
    ALOGD("_ZN2MK25CCLCreateKernelsInProgram7FactoryERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CLSymbols::get() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK9CLSymbols3getEv(void) {
    ALOGD("_ZN2MK9CLSymbols3getEv() called");
    return 0;
}

/* Demangled: MK::CJsonLog::Log(char const*, std::__1::vector<MK::CObject*, std::__1::allocator<MK::CObject*> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK8CJsonLog3LogEPKcRKNSt3__16vectorIPNS_7CObjectENS3_9allocatorIS6_EEEE(void) {
    ALOGD("_ZN2MK8CJsonLog3LogEPKcRKNSt3__16vectorIPNS_7CObjectENS3_9allocatorIS6_EEEE() called");
    return 0;
}

/* Demangled: MK::CCLCreateProgramWithBinary::RegisterUniqueObject(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK26CCLCreateProgramWithBinary20RegisterUniqueObjectERNS_7CStreamE(void) {
    ALOGD("_ZN2MK26CCLCreateProgramWithBinary20RegisterUniqueObjectERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueNDRangeKernel::Link(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK23CCLEnqueueNDRangeKernel4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK23CCLEnqueueNDRangeKernel4LinkERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: MK::CCLProfileKernelJob::Handle() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK19CCLProfileKernelJob6HandleEv(void) {
    ALOGD("_ZN2MK19CCLProfileKernelJob6HandleEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_context* (*)(long const*, unsigned long, void (*)(char const*, void const*, unsigned long, void*), void*, int*), std::__1::allocator<_cl_context* (*)(long const*, unsigned long, void (*)(char const*, void const*, unsigned long, void*), void*, int*)>, _cl_context* (long const*, unsigned long, void (*)(char const*, void const*, unsigned long, void*), void*, int*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFP11_cl_contextPKlmPFvPKcPKvmPvESA_PiENS_9allocatorISF_EESE_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFP11_cl_contextPKlmPFvPKcPKvmPvESA_PiENS_9allocatorISF_EESE_E7destroyEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, unsigned int, _cl_event* const*, _cl_event**)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queuejPKP9_cl_eventPS5_ENS_9allocatorISA_EES9_EE = NULL;

/* Demangled: MK::COutputTensors::Link(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14COutputTensors4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK14COutputTensors4LinkERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: std::__1::vector<MK::CPointer<MK::CCommand>, std::__1::allocator<MK::CPointer<MK::CCommand> > >::__append(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN2MK8CPointerINS1_8CCommandEEENS_9allocatorIS4_EEE8__appendEm(void) {
    ALOGD("_ZNSt3__16vectorIN2MK8CPointerINS1_8CCommandEEENS_9allocatorIS4_EEE8__appendEm() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMarkerWithWaitList::RegisterFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK28CCLEnqueueMarkerWithWaitList15RegisterFactoryEv(void) {
    ALOGD("_ZN2MK28CCLEnqueueMarkerWithWaitList15RegisterFactoryEv() called");
    return 0;
}

/* Demangled: MK::CCLReleaseContext::CopyConstructTo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK17CCLReleaseContext15CopyConstructToEv(void) {
    ALOGD("_ZNK2MK17CCLReleaseContext15CopyConstructToEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_device_id*), std::__1::allocator<int (*)(_cl_device_id*)>, int (_cl_device_id*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP13_cl_device_idENS_9allocatorIS5_EES4_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP13_cl_device_idENS_9allocatorIS5_EES4_E7__cloneEv() called");
    return 0;
}

/* Demangled: MK::CContextGlobal::RecordKernelName(_cl_kernel*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14CContextGlobal16RecordKernelNameEP10_cl_kernelPKc(void) {
    ALOGD("_ZN2MK14CContextGlobal16RecordKernelNameEP10_cl_kernelPKc() called");
    return 0;
}

/* Demangled: MK::CCLSVMFree::Log(MK::CJsonLog&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK10CCLSVMFree3LogERNS_8CJsonLogE(void) {
    ALOGD("_ZNK2MK10CCLSVMFree3LogERNS_8CJsonLogE() called");
    return 0;
}

/* Demangled: MK::CProgram::~CProgram() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK8CProgramD2Ev(void) {
    ALOGD("_ZN2MK8CProgramD2Ev() called");
    return 0;
}

/* Demangled: CmdL_AttachclReleaseDevice */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclReleaseDevice(void) {
    ALOGD("CmdL_AttachclReleaseDevice() called");
    return 0;
}

/* Demangled: MK::CCLCreateKernelsInProgram::Save(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK25CCLCreateKernelsInProgram4SaveERNS_7CStreamE(void) {
    ALOGD("_ZN2MK25CCLCreateKernelsInProgram4SaveERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueReadBuffer::Link(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK20CCLEnqueueReadBuffer4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK20CCLEnqueueReadBuffer4LinkERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: MK::CObject::~CObject() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK7CObjectD1Ev(void) {
    ALOGD("_ZN2MK7CObjectD1Ev() called");
    return 0;
}

/* Demangled: MK::CCLCreateProgramWithSource::Record(_cl_context*, unsigned int, char const**, unsigned long const*, _cl_program*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK26CCLCreateProgramWithSource6RecordEP11_cl_contextjPPKcPKmP11_cl_program(void) {
    ALOGD("_ZN2MK26CCLCreateProgramWithSource6RecordEP11_cl_contextjPPKcPKmP11_cl_program() called");
    return 0;
}

/* Demangled: MK::CCLCreateProgramWithSource::Load(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK26CCLCreateProgramWithSource4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK26CCLCreateProgramWithSource4LoadERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: MKProgram_AttachCLCreateCommandQueue */
extern "C" __attribute__((visibility("default"))) int MKProgram_AttachCLCreateCommandQueue(void) {
    ALOGD("MKProgram_AttachCLCreateCommandQueue() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*), std::__1::allocator<int (*)(_cl_command_queue*)>, int (_cl_command_queue*)>::__clone(std::__1::__function::__base<int (_cl_command_queue*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueENS_9allocatorIS5_EES4_E7__cloneEPNS0_6__baseIS4_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP17_cl_command_queueENS_9allocatorIS5_EES4_E7__cloneEPNS0_6__baseIS4_EE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_mjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_mjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEv() called");
    return 0;
}

/* Demangled: MK::CCLCreateProgramWithSource::CCLCreateProgramWithSource(MK::CCLCreateProgramWithSource const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK26CCLCreateProgramWithSourceC1ERKS0_(void) {
    ALOGD("_ZN2MK26CCLCreateProgramWithSourceC1ERKS0_() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>::__clone(std::__1::__function::__base<int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_mmPvjPKP9_cl_eventPSA_ENS_9allocatorISF_EESE_E7__cloneEPNS0_6__baseISE_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_mmPvjPKP9_cl_eventPSA_ENS_9allocatorISF_EESE_E7__cloneEPNS0_6__baseISE_EE() called");
    return 0;
}

/* Demangled: MK::CStream::~CStream() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK7CStreamD2Ev(void) {
    ALOGD("_ZN2MK7CStreamD2Ev() called");
    return 0;
}

/* Demangled: CmdL_AttachclEnqueueWriteImage */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclEnqueueWriteImage(void) {
    ALOGD("CmdL_AttachclEnqueueWriteImage() called");
    return 0;
}

/* Exported Object: vtable for MK::CCLCreateKernelsInProgram */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK25CCLCreateKernelsInProgramE = NULL;

/* Exported Object: vtable for MK::CCLReleaseContext */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK17CCLReleaseContextE = NULL;

/* Demangled: MK::CObject::GetRTTIName() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK7CObject11GetRTTINameEv(void) {
    ALOGD("_ZNK2MK7CObject11GetRTTINameEv() called");
    return 0;
}

/* Demangled: MK::CCLCreateKernel::CopyConstructTo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK15CCLCreateKernel15CopyConstructToEv(void) {
    ALOGD("_ZNK2MK15CCLCreateKernel15CopyConstructToEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_device_id*), std::__1::allocator<int (*)(_cl_device_id*)>, int (_cl_device_id*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP13_cl_device_idENS_9allocatorIS5_EES4_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP13_cl_device_idENS_9allocatorIS5_EES4_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: MK::CStream::GetObjectAt(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK7CStream11GetObjectAtEi(void) {
    ALOGD("_ZNK2MK7CStream11GetObjectAtEi() called");
    return 0;
}

/* Demangled: MK::CCLCreateContext::ReplacePropertyContext(_cl_platform_id*&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLCreateContext22ReplacePropertyContextERP15_cl_platform_id(void) {
    ALOGD("_ZN2MK16CCLCreateContext22ReplacePropertyContextERP15_cl_platform_id() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_mem*), std::__1::allocator<int (*)(_cl_mem*)>, int (_cl_mem*)>::__clone(std::__1::__function::__base<int (_cl_mem*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP7_cl_memENS_9allocatorIS5_EES4_E7__cloneEPNS0_6__baseIS4_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP7_cl_memENS_9allocatorIS5_EES4_E7__cloneEPNS0_6__baseIS4_EE() called");
    return 0;
}

/* Demangled: MKProgram_AttachOutputTensor */
extern "C" __attribute__((visibility("default"))) int MKProgram_AttachOutputTensor(void) {
    ALOGD("MKProgram_AttachOutputTensor() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMarkerWithWaitList::Link(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK28CCLEnqueueMarkerWithWaitList4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK28CCLEnqueueMarkerWithWaitList4LinkERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: MK::CDynamicData::CopyConstructTo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK12CDynamicData15CopyConstructToEv(void) {
    ALOGD("_ZNK2MK12CDynamicData15CopyConstructToEv() called");
    return 0;
}

/* Demangled: MK::CCLCreateBuffer::Load(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLCreateBuffer4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK15CCLCreateBuffer4LoadERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorImNS_9allocatorImEEE6assignIPKmEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleImNS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorImNS_9allocatorImEEE6assignIPKmEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleImNS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_(void) {
    ALOGD("_ZNSt3__16vectorImNS_9allocatorImEEE6assignIPKmEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleImNS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_kernel*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_kernel*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_kernel*, unsigned int, _cl_event* const*, _cl_event**)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP10_cl_kerneljPKP9_cl_eventPS7_ENS_9allocatorISC_EESB_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP10_cl_kerneljPKP9_cl_eventPS7_ENS_9allocatorISC_EESB_E7__cloneEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_mjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EE = NULL;

/* Exported Object: vtable for MK::CCLCreateCommandQueue */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK21CCLCreateCommandQueueE = NULL;

/* Demangled: MK::CCLCreateKernel::Load(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLCreateKernel4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK15CCLCreateKernel4LoadERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: MK::CCommand::RegisterFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK8CCommand15RegisterFactoryEv(void) {
    ALOGD("_ZN2MK8CCommand15RegisterFactoryEv() called");
    return 0;
}

/* Exported Object: vtable for MK::CCLEnqueueWriteBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK21CCLEnqueueWriteBufferE = NULL;

/* Demangled: MK::CCLFlush::Factory(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK8CCLFlush7FactoryERNS_7CStreamE(void) {
    ALOGD("_ZN2MK8CCLFlush7FactoryERNS_7CStreamE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, unsigned int, _cl_event* const*, _cl_event**)>::operator()(_cl_command_queue*&&, unsigned int&&, _cl_event* const*&&, _cl_event**&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejPKP9_cl_eventPS5_ENS_9allocatorISA_EES9_EclEOS3_OjOS7_OS8_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queuejPKP9_cl_eventPS5_ENS_9allocatorISA_EES9_EclEOS3_OjOS7_OS8_() called");
    return 0;
}

/* Demangled: CmdL_AttachclSetKernelArgSVMPointer */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclSetKernelArgSVMPointer(void) {
    ALOGD("CmdL_AttachclSetKernelArgSVMPointer() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueNDRangeKernel::CopyConstructTo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK23CCLEnqueueNDRangeKernel15CopyConstructToEv(void) {
    ALOGD("_ZNK2MK23CCLEnqueueNDRangeKernel15CopyConstructToEv() called");
    return 0;
}

/* Demangled: cl_write(char*) */
extern "C" __attribute__((visibility("default"))) int _Z8cl_writePc(void) {
    ALOGD("_Z8cl_writePc() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, void*, void const*, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, void*, void const*, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, void*, void const*, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuePvPKvmmjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP17_cl_command_queuePvPKvmmjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E7__cloneEv() called");
    return 0;
}

/* Demangled: CmdL_AttachclEnqueueTask */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclEnqueueTask(void) {
    ALOGD("CmdL_AttachclEnqueueTask() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMemoryCopy::Save(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK20CCLEnqueueMemoryCopy4SaveERNS_7CStreamE(void) {
    ALOGD("_ZN2MK20CCLEnqueueMemoryCopy4SaveERNS_7CStreamE() called");
    return 0;
}

/* Exported Object: MK::CObject::ms_kRTTI */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK7CObject8ms_kRTTIE = NULL;

/* Demangled: MK::CMemoryCopy::CMemoryCopy() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CMemoryCopyC2Ev(void) {
    ALOGD("_ZN2MK11CMemoryCopyC2Ev() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMarker::Run(MKProgramType, MK::CContextLocal*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLEnqueueMarker3RunE13MKProgramTypePNS_13CContextLocalE(void) {
    ALOGD("_ZN2MK16CCLEnqueueMarker3RunE13MKProgramTypePNS_13CContextLocalE() called");
    return 0;
}

/* Demangled: MK::CThreadJobQ::CThreadJobQ() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CThreadJobQC1Ev(void) {
    ALOGD("_ZN2MK11CThreadJobQC1Ev() called");
    return 0;
}

/* Demangled: MK::CMemoryCopy::Save(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CMemoryCopy4SaveERNS_7CStreamE(void) {
    ALOGD("_ZN2MK11CMemoryCopy4SaveERNS_7CStreamE() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >, std::__1::allocator<std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > > >::__append(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE8__appendEm(void) {
    ALOGD("_ZNSt3__16vectorINS0_IhNS_9allocatorIhEEEENS1_IS3_EEE8__appendEm() called");
    return 0;
}

/* Demangled: MK::CCLImportMemory::CopyConstructTo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK15CCLImportMemory15CopyConstructToEv(void) {
    ALOGD("_ZNK2MK15CCLImportMemory15CopyConstructToEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejmPvmjPKP9_cl_eventPS6_ENS_9allocatorISB_EESA_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queuejmPvmjPKP9_cl_eventPS6_ENS_9allocatorISB_EESA_E7destroyEv() called");
    return 0;
}

/* Demangled: CmdL_TreeNodeDeAttachNode */
extern "C" __attribute__((visibility("default"))) int CmdL_TreeNodeDeAttachNode(void) {
    ALOGD("CmdL_TreeNodeDeAttachNode() called");
    return 0;
}

/* Demangled: CmdL_AttachclEnqueueSVMMap */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclEnqueueSVMMap(void) {
    ALOGD("CmdL_AttachclEnqueueSVMMap() called");
    return 0;
}

/* Demangled: CmdL_AttachclRetainContext */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclRetainContext(void) {
    ALOGD("CmdL_AttachclRetainContext() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMarkerWithWaitList::RegisterUniqueObject(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK28CCLEnqueueMarkerWithWaitList20RegisterUniqueObjectERNS_7CStreamE(void) {
    ALOGD("_ZN2MK28CCLEnqueueMarkerWithWaitList20RegisterUniqueObjectERNS_7CStreamE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_platform_id*, unsigned long, unsigned int, _cl_device_id**, unsigned int*), std::__1::allocator<int (*)(_cl_platform_id*, unsigned long, unsigned int, _cl_device_id**, unsigned int*)>, int (_cl_platform_id*, unsigned long, unsigned int, _cl_device_id**, unsigned int*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP15_cl_platform_idmjPP13_cl_device_idPjENS_9allocatorIS9_EES8_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP15_cl_platform_idmjPP13_cl_device_idPjENS_9allocatorIS9_EES8_E7__cloneEv() called");
    return 0;
}

/* Demangled: CmdL_AttachclEnqueueSVMMemcpy */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclEnqueueSVMMemcpy(void) {
    ALOGD("CmdL_AttachclEnqueueSVMMemcpy() called");
    return 0;
}

/* Demangled: clGetPlatformInfo */
extern "C" __attribute__((visibility("default"))) int clGetPlatformInfo(void) {
    ALOGD("clGetPlatformInfo() called");
    return 0;
}

/* Demangled: MK::CCLCreateProgramWithSource::UpdateCLCreateProgramWithBinary(MK::CCLCreateProgramWithBinary*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK26CCLCreateProgramWithSource31UpdateCLCreateProgramWithBinaryEPNS_26CCLCreateProgramWithBinaryE(void) {
    ALOGD("_ZN2MK26CCLCreateProgramWithSource31UpdateCLCreateProgramWithBinaryEPNS_26CCLCreateProgramWithBinaryE() called");
    return 0;
}

/* Demangled: MK::CCLRetainMemObject::Log(MK::CJsonLog&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK18CCLRetainMemObject3LogERNS_8CJsonLogE(void) {
    ALOGD("_ZNK2MK18CCLRetainMemObject3LogERNS_8CJsonLogE() called");
    return 0;
}

/* Demangled: MK::CCLSVMFree::CCLSVMFree(MK::CCLSVMFree const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK10CCLSVMFreeC1ERKS0_(void) {
    ALOGD("_ZN2MK10CCLSVMFreeC1ERKS0_() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_mPKmS7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_mPKmS7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: MK::CMemoryCopy::~CMemoryCopy() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CMemoryCopyD1Ev(void) {
    ALOGD("_ZN2MK11CMemoryCopyD1Ev() called");
    return 0;
}

/* Demangled: MK::CProfileDataJob::~CProfileDataJob() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CProfileDataJobD1Ev(void) {
    ALOGD("_ZN2MK15CProfileDataJobD1Ev() called");
    return 0;
}

/* Demangled: MK::CCLCreateContext::GetDiskUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK16CCLCreateContext11GetDiskUsedEv(void) {
    ALOGD("_ZNK2MK16CCLCreateContext11GetDiskUsedEv() called");
    return 0;
}

/* Demangled: MK::CCLCreateProgramWithSource::Run(MKProgramType, MK::CContextLocal*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK26CCLCreateProgramWithSource3RunE13MKProgramTypePNS_13CContextLocalE(void) {
    ALOGD("_ZN2MK26CCLCreateProgramWithSource3RunE13MKProgramTypePNS_13CContextLocalE() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueCopyBufferToImage::CCLEnqueueCopyBufferToImage() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK27CCLEnqueueCopyBufferToImageC2Ev(void) {
    ALOGD("_ZN2MK27CCLEnqueueCopyBufferToImageC2Ev() called");
    return 0;
}

/* Demangled: MK::CCLPrepareMemoryCopy::Factory(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK20CCLPrepareMemoryCopy7FactoryERNS_7CStreamE(void) {
    ALOGD("_ZN2MK20CCLPrepareMemoryCopy7FactoryERNS_7CStreamE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_event*), std::__1::allocator<int (*)(_cl_event*)>, int (_cl_event*)>::operator()(_cl_event*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP9_cl_eventENS_9allocatorIS5_EES4_EclEOS3_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP9_cl_eventENS_9allocatorIS5_EES4_EclEOS3_() called");
    return 0;
}

/* Demangled: MK::CThreadJobQ::~CThreadJobQ() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CThreadJobQD0Ev(void) {
    ALOGD("_ZN2MK11CThreadJobQD0Ev() called");
    return 0;
}

/* Demangled: CmdL_AttachclCreateKernel */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclCreateKernel(void) {
    ALOGD("CmdL_AttachclCreateKernel() called");
    return 0;
}

/* Demangled: MK::CCLCommand::CopyConstructTo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK10CCLCommand15CopyConstructToEv(void) {
    ALOGD("_ZNK2MK10CCLCommand15CopyConstructToEv() called");
    return 0;
}

/* Demangled: MKProgram_AttachCLEnqueueCopyBufferToImage */
extern "C" __attribute__((visibility("default"))) int MKProgram_AttachCLEnqueueCopyBufferToImage(void) {
    ALOGD("MKProgram_AttachCLEnqueueCopyBufferToImage() called");
    return 0;
}

/* Demangled: MK::CCLCreateKernelsInProgram::Record(_cl_program*, unsigned int, _cl_kernel**) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK25CCLCreateKernelsInProgram6RecordEP11_cl_programjPP10_cl_kernel(void) {
    ALOGD("_ZN2MK25CCLCreateKernelsInProgram6RecordEP11_cl_programjPP10_cl_kernel() called");
    return 0;
}

/* Demangled: MK::CCLSVMFree::~CCLSVMFree() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK10CCLSVMFreeD2Ev(void) {
    ALOGD("_ZN2MK10CCLSVMFreeD2Ev() called");
    return 0;
}

/* Demangled: CmdL_TreeNodeAttachNode */
extern "C" __attribute__((visibility("default"))) int CmdL_TreeNodeAttachNode(void) {
    ALOGD("CmdL_TreeNodeAttachNode() called");
    return 0;
}

/* Demangled: clCreateSamplerWithProperties */
extern "C" __attribute__((visibility("default"))) int clCreateSamplerWithProperties(void) {
    ALOGD("clCreateSamplerWithProperties() called");
    return 0;
}

/* Demangled: MK::CCLCreateProgramWithBinary::Record(_cl_context*, unsigned int, _cl_device_id* const*, unsigned long const*, unsigned char const**, _cl_program*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK26CCLCreateProgramWithBinary6RecordEP11_cl_contextjPKP13_cl_device_idPKmPPKhP11_cl_program(void) {
    ALOGD("_ZN2MK26CCLCreateProgramWithBinary6RecordEP11_cl_contextjPKP13_cl_device_idPKmPPKhP11_cl_program() called");
    return 0;
}

/* Demangled: MK::CCLBuildProgram::~CCLBuildProgram() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLBuildProgramD2Ev(void) {
    ALOGD("_ZN2MK15CCLBuildProgramD2Ev() called");
    return 0;
}

/* Demangled: MK::CCLFlush::CopyConstructTo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK8CCLFlush15CopyConstructToEv(void) {
    ALOGD("_ZNK2MK8CCLFlush15CopyConstructToEv() called");
    return 0;
}

/* Exported Object: vtable for MK::CCLRetainCommandQueue */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK21CCLRetainCommandQueueE = NULL;

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejmPvPmENS_9allocatorIS7_EES6_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queuejmPvPmENS_9allocatorIS7_EES6_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: CmdL_AttachclEnqueueBarrierWithWaitList */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclEnqueueBarrierWithWaitList(void) {
    ALOGD("CmdL_AttachclEnqueueBarrierWithWaitList() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueCopyBufferToImage::~CCLEnqueueCopyBufferToImage() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK27CCLEnqueueCopyBufferToImageD1Ev(void) {
    ALOGD("_ZN2MK27CCLEnqueueCopyBufferToImageD1Ev() called");
    return 0;
}

/* Demangled: MK::CCLPrepareMemoryCopy::CCLPrepareMemoryCopy() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK20CCLPrepareMemoryCopyC1Ev(void) {
    ALOGD("_ZN2MK20CCLPrepareMemoryCopyC1Ev() called");
    return 0;
}

/* Demangled: MK::CCLRetainEvent::CCLRetainEvent() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14CCLRetainEventC2Ev(void) {
    ALOGD("_ZN2MK14CCLRetainEventC2Ev() called");
    return 0;
}

/* Demangled: MK::CCLSVMFree::Run(MKProgramType, MK::CContextLocal*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK10CCLSVMFree3RunE13MKProgramTypePNS_13CContextLocalE(void) {
    ALOGD("_ZN2MK10CCLSVMFree3RunE13MKProgramTypePNS_13CContextLocalE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_kernel*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_kernel*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_kernel*, unsigned int, _cl_event* const*, _cl_event**)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP10_cl_kerneljPKP9_cl_eventPS7_ENS_9allocatorISC_EESB_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queueP10_cl_kerneljPKP9_cl_eventPS7_ENS_9allocatorISC_EESB_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: MK::clSetKernelExecInfo(_cl_kernel*, unsigned int, unsigned long, void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK19clSetKernelExecInfoEP10_cl_kerneljmPKv(void) {
    ALOGD("_ZN2MK19clSetKernelExecInfoEP10_cl_kerneljmPKv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_kernel*), std::__1::allocator<int (*)(_cl_kernel*)>, int (_cl_kernel*)>::operator()(_cl_kernel*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP10_cl_kernelENS_9allocatorIS5_EES4_EclEOS3_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP10_cl_kernelENS_9allocatorIS5_EES4_EclEOS3_() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::pair<MK::CProgram*, MK::CContextLocal*>, std::__1::allocator<std::__1::pair<MK::CProgram*, MK::CContextLocal*> > >::__push_back_slow_path<std::__1::pair<MK::CProgram*, MK::CContextLocal*> >(std::__1::pair<MK::CProgram*, MK::CContextLocal*>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_4pairIPN2MK8CProgramEPNS2_13CContextLocalEEENS_9allocatorIS7_EEE21__push_back_slow_pathIS7_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_4pairIPN2MK8CProgramEPNS2_13CContextLocalEEENS_9allocatorIS7_EEE21__push_back_slow_pathIS7_EEvOT_() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueSVMMap::~CCLEnqueueSVMMap() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLEnqueueSVMMapD2Ev(void) {
    ALOGD("_ZN2MK16CCLEnqueueSVMMapD2Ev() called");
    return 0;
}

/* Demangled: MK::CCLCreateKernel::CCLCreateKernel() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLCreateKernelC2Ev(void) {
    ALOGD("_ZN2MK15CCLCreateKernelC2Ev() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMarkerWithWaitList::GetDiskUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK28CCLEnqueueMarkerWithWaitList11GetDiskUsedEv(void) {
    ALOGD("_ZNK2MK28CCLEnqueueMarkerWithWaitList11GetDiskUsedEv() called");
    return 0;
}

/* Demangled: MK::CCLSVMAlloc::CCLSVMAlloc(MK::CCLSVMAlloc const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CCLSVMAllocC1ERKS0_(void) {
    ALOGD("_ZN2MK11CCLSVMAllocC1ERKS0_() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_platform_id*, unsigned long, unsigned int, _cl_device_id**, unsigned int*), std::__1::allocator<int (*)(_cl_platform_id*, unsigned long, unsigned int, _cl_device_id**, unsigned int*)>, int (_cl_platform_id*, unsigned long, unsigned int, _cl_device_id**, unsigned int*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP15_cl_platform_idmjPP13_cl_device_idPjENS_9allocatorIS9_EES8_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP15_cl_platform_idmjPP13_cl_device_idPjENS_9allocatorIS9_EES8_E18destroy_deallocateEv() called");
    return 0;
}

/* Exported Object: vtable for MK::CDummyCommand */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK13CDummyCommandE = NULL;

/* Demangled: MKDebug_Printf */
extern "C" __attribute__((visibility("default"))) int MKDebug_Printf(void) {
    ALOGD("MKDebug_Printf() called");
    return 0;
}

/* Demangled: CmdL_AttachclEnqueueReadBufferRect */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclEnqueueReadBufferRect(void) {
    ALOGD("CmdL_AttachclEnqueueReadBufferRect() called");
    return 0;
}

/* Demangled: MK::CCLPrepareMemoryCopy::~CCLPrepareMemoryCopy() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK20CCLPrepareMemoryCopyD0Ev(void) {
    ALOGD("_ZN2MK20CCLPrepareMemoryCopyD0Ev() called");
    return 0;
}

/* Demangled: MK::CCLRetainEvent::~CCLRetainEvent() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14CCLRetainEventD1Ev(void) {
    ALOGD("_ZN2MK14CCLRetainEventD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_context*, unsigned long, unsigned int, unsigned int, _cl_image_format*, unsigned int*), std::__1::allocator<int (*)(_cl_context*, unsigned long, unsigned int, unsigned int, _cl_image_format*, unsigned int*)>, int (_cl_context*, unsigned long, unsigned int, unsigned int, _cl_image_format*, unsigned int*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP11_cl_contextmjjP16_cl_image_formatPjENS_9allocatorIS8_EES7_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP11_cl_contextmjjP16_cl_image_formatPjENS_9allocatorIS8_EES7_E7destroyEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(unsigned long, void*), std::__1::allocator<int (*)(unsigned long, void*)>, int (unsigned long, void*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFimPvENS_9allocatorIS4_EES3_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFimPvENS_9allocatorIS4_EES3_E7destroyEv() called");
    return 0;
}

/* Demangled: MK::CCLFlush::Save(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK8CCLFlush4SaveERNS_7CStreamE(void) {
    ALOGD("_ZN2MK8CCLFlush4SaveERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMemoryCopy::Link(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK20CCLEnqueueMemoryCopy4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK20CCLEnqueueMemoryCopy4LinkERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<int (*)(_cl_program*, unsigned int, _cl_device_id* const*, char const*, void (*)(_cl_program*, void*), void*), std::__1::allocator<int (*)(_cl_program*, unsigned int, _cl_device_id* const*, char const*, void (*)(_cl_program*, void*), void*)>, int (_cl_program*, unsigned int, _cl_device_id* const*, char const*, void (*)(_cl_program*, void*), void*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFiP11_cl_programjPKP13_cl_device_idPKcPFvS3_PvESA_ENS_9allocatorISE_EESD_EE = NULL;

/* Demangled: MK::CCLEnqueueMarker::Load(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLEnqueueMarker4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK16CCLEnqueueMarker4LoadERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, unsigned long const*, unsigned char const**, int*, int*), std::__1::allocator<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, unsigned long const*, unsigned char const**, int*, int*)>, _cl_program* (_cl_context*, unsigned int, _cl_device_id* const*, unsigned long const*, unsigned char const**, int*, int*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKmPPKhPiSF_ENS_9allocatorISH_EESG_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKmPPKhPiSF_ENS_9allocatorISH_EESG_E7destroyEv() called");
    return 0;
}

/* Demangled: MK::CCLCreateKernel::~CCLCreateKernel() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLCreateKernelD1Ev(void) {
    ALOGD("_ZN2MK15CCLCreateKernelD1Ev() called");
    return 0;
}

/* Exported Object: MK::CThreadJobQ::GetInstance()::gs_kThreadJobQ */
extern "C" __attribute__((visibility("default"))) void* _ZZN2MK11CThreadJobQ11GetInstanceEvE14gs_kThreadJobQ = NULL;

/* Demangled: std::__1::__function::__func<_cl_kernel* (*)(_cl_program*, char const*, int*), std::__1::allocator<_cl_kernel* (*)(_cl_program*, char const*, int*)>, _cl_kernel* (_cl_program*, char const*, int*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFP10_cl_kernelP11_cl_programPKcPiENS_9allocatorISA_EES9_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFP10_cl_kernelP11_cl_programPKcPiENS_9allocatorISA_EES9_E7__cloneEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_sampler* (*)(_cl_context*, unsigned int, unsigned int, unsigned int, int*), std::__1::allocator<_cl_sampler* (*)(_cl_context*, unsigned int, unsigned int, unsigned int, int*)>, _cl_sampler* (_cl_context*, unsigned int, unsigned int, unsigned int, int*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFP11_cl_samplerP11_cl_contextjjjPiENS_9allocatorIS8_EES7_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFP11_cl_samplerP11_cl_contextjjjPiENS_9allocatorIS8_EES7_E7destroyEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_context*, unsigned long, unsigned int, unsigned int, _cl_image_format*, unsigned int*), std::__1::allocator<int (*)(_cl_context*, unsigned long, unsigned int, unsigned int, _cl_image_format*, unsigned int*)>, int (_cl_context*, unsigned long, unsigned int, unsigned int, _cl_image_format*, unsigned int*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP11_cl_contextmjjP16_cl_image_formatPjENS_9allocatorIS8_EES7_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP11_cl_contextmjjP16_cl_image_formatPjENS_9allocatorIS8_EES7_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_S7_mmmmPvjPKP9_cl_eventPSA_ENS_9allocatorISF_EESE_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_S7_mmmmPvjPKP9_cl_eventPSA_ENS_9allocatorISF_EESE_E7destroyEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<int (*)(_cl_context*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_context*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_context*, unsigned int, unsigned long, void*, unsigned long*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFiP11_cl_contextjmPvPmENS_9allocatorIS7_EES6_EE = NULL;

/* Demangled: MK::CStream::WriteDynamicString(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK7CStream18WriteDynamicStringERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN2MK7CStream18WriteDynamicStringERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: std::__1::vector<_cl_device_id*, std::__1::allocator<_cl_device_id*> >::__append(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIP13_cl_device_idNS_9allocatorIS2_EEE8__appendEm(void) {
    ALOGD("_ZNSt3__16vectorIP13_cl_device_idNS_9allocatorIS2_EEE8__appendEm() called");
    return 0;
}

/* Demangled: MK::CProgram::SetCommand(int, MK::CCommand*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK8CProgram10SetCommandEiPNS_8CCommandE(void) {
    ALOGD("_ZN2MK8CProgram10SetCommandEiPNS_8CCommandE() called");
    return 0;
}

/* Demangled: MK::CStaticData::Load(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CStaticData4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK11CStaticData4LoadERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, void (*)(void*), void*, unsigned long, unsigned int, _cl_mem* const*, void const**, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, void (*)(void*), void*, unsigned long, unsigned int, _cl_mem* const*, void const**, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, void (*)(void*), void*, unsigned long, unsigned int, _cl_mem* const*, void const**, unsigned int, _cl_event* const*, _cl_event**)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuePFvPvES4_mjPKP7_cl_memPPKvjPKP9_cl_eventPSF_ENS_9allocatorISK_EESJ_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queuePFvPvES4_mjPKP7_cl_memPPKvjPKP9_cl_eventPSF_ENS_9allocatorISK_EESJ_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: clClearKernelNameMap() */
extern "C" __attribute__((visibility("default"))) int _Z20clClearKernelNameMapv(void) {
    ALOGD("_Z20clClearKernelNameMapv() called");
    return 0;
}

/* Demangled: MK::CObject::CObject() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK7CObjectC1Ev(void) {
    ALOGD("_ZN2MK7CObjectC1Ev() called");
    return 0;
}

/* Demangled: CmdL_AttachclCreateCommandQueueWithProperties */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclCreateCommandQueueWithProperties(void) {
    ALOGD("CmdL_AttachclCreateCommandQueueWithProperties() called");
    return 0;
}

/* Demangled: MK::CCLCreateKernelsInProgram::Load(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK25CCLCreateKernelsInProgram4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK25CCLCreateKernelsInProgram4LoadERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueCopyBufferToImage::CCLEnqueueCopyBufferToImage(MK::CCLEnqueueCopyBufferToImage const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK27CCLEnqueueCopyBufferToImageC2ERKS0_(void) {
    ALOGD("_ZN2MK27CCLEnqueueCopyBufferToImageC2ERKS0_() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_context*, unsigned long, unsigned int, unsigned int, _cl_image_format*, unsigned int*), std::__1::allocator<int (*)(_cl_context*, unsigned long, unsigned int, unsigned int, _cl_image_format*, unsigned int*)>, int (_cl_context*, unsigned long, unsigned int, unsigned int, _cl_image_format*, unsigned int*)>::__clone(std::__1::__function::__base<int (_cl_context*, unsigned long, unsigned int, unsigned int, _cl_image_format*, unsigned int*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP11_cl_contextmjjP16_cl_image_formatPjENS_9allocatorIS8_EES7_E7__cloneEPNS0_6__baseIS7_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP11_cl_contextmjjP16_cl_image_formatPjENS_9allocatorIS8_EES7_E7__cloneEPNS0_6__baseIS7_EE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_program*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_program*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_program*, unsigned int, unsigned long, void*, unsigned long*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP11_cl_programjmPvPmENS_9allocatorIS7_EES6_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP11_cl_programjmPvPmENS_9allocatorIS7_EES6_E7destroyEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<bool*, std::__1::allocator<bool*>&>::push_front(bool* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPbRNS_9allocatorIS1_EEE10push_frontERKS1_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPbRNS_9allocatorIS1_EEE10push_frontERKS1_() called");
    return 0;
}

/* Demangled: MK::CObject::DynamicCast(MK::CRTTI const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK7CObject11DynamicCastEPKNS_5CRTTIE(void) {
    ALOGD("_ZNK2MK7CObject11DynamicCastEPKNS_5CRTTIE() called");
    return 0;
}

/* Exported Object: vtable for MK::CCLReleaseMemObject */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK19CCLReleaseMemObjectE = NULL;

/* Demangled: std::__1::__function::__func<void* (*)(_cl_context*, unsigned long, unsigned long, unsigned int), std::__1::allocator<void* (*)(_cl_context*, unsigned long, unsigned long, unsigned int)>, void* (_cl_context*, unsigned long, unsigned long, unsigned int)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFPvP11_cl_contextmmjENS_9allocatorIS6_EES5_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFPvP11_cl_contextmmjENS_9allocatorIS6_EES5_E18destroy_deallocateEv() called");
    return 0;
}

/* Exported Object: vtable for MK::CProgram */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK8CProgramE = NULL;

/* Demangled: MK::CStream::CStream() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK7CStreamC2Ev(void) {
    ALOGD("_ZN2MK7CStreamC2Ev() called");
    return 0;
}

/* Demangled: clCreateCommandQueueWithProperties */
extern "C" __attribute__((visibility("default"))) int clCreateCommandQueueWithProperties(void) {
    ALOGD("clCreateCommandQueueWithProperties() called");
    return 0;
}

/* Demangled: MK::CCLRetainProgram::Link(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLRetainProgram4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK16CCLRetainProgram4LinkERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_device_id*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>::operator()(_cl_device_id*&&, unsigned int&&, unsigned long&&, void*&&, unsigned long*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP13_cl_device_idjmPvPmENS_9allocatorIS7_EES6_EclEOS3_OjOmOS4_OS5_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP13_cl_device_idjmPvPmENS_9allocatorIS7_EES6_EclEOS3_OjOmOS4_OS5_() called");
    return 0;
}

/* Demangled: MK::CProgram::~CProgram() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK8CProgramD1Ev(void) {
    ALOGD("_ZN2MK8CProgramD1Ev() called");
    return 0;
}

/* Exported Object: vtable for MK::CJsonLog */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK8CJsonLogE = NULL;

/* Demangled: MK::CCLCreateImage::CCLCreateImage(MK::CCLCreateImage const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14CCLCreateImageC1ERKS0_(void) {
    ALOGD("_ZN2MK14CCLCreateImageC1ERKS0_() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_mem*, void (*)(_cl_mem*, void*), void*), std::__1::allocator<int (*)(_cl_mem*, void (*)(_cl_mem*, void*), void*)>, int (_cl_mem*, void (*)(_cl_mem*, void*), void*)>::__clone(std::__1::__function::__base<int (_cl_mem*, void (*)(_cl_mem*, void*), void*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP7_cl_memPFvS3_PvES4_ENS_9allocatorIS8_EES7_E7__cloneEPNS0_6__baseIS7_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP7_cl_memPFvS3_PvES4_ENS_9allocatorIS8_EES7_E7__cloneEPNS0_6__baseIS7_EE() called");
    return 0;
}

/* Demangled: MK::CDynamicData::Save(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK12CDynamicData4SaveERNS_7CStreamE(void) {
    ALOGD("_ZN2MK12CDynamicData4SaveERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CObject::~CObject() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK7CObjectD0Ev(void) {
    ALOGD("_ZN2MK7CObjectD0Ev() called");
    return 0;
}

/* Demangled: CmdL_AttachclFinish */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclFinish(void) {
    ALOGD("CmdL_AttachclFinish() called");
    return 0;
}

/* Demangled: MK::CCLRetainCommandQueue::CopyConstructTo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK21CCLRetainCommandQueue15CopyConstructToEv(void) {
    ALOGD("_ZNK2MK21CCLRetainCommandQueue15CopyConstructToEv() called");
    return 0;
}

/* Demangled: MK::CCLRetainCommandQueue::Record(_cl_command_queue*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK21CCLRetainCommandQueue6RecordEP17_cl_command_queue(void) {
    ALOGD("_ZN2MK21CCLRetainCommandQueue6RecordEP17_cl_command_queue() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMarkerWithWaitList::CCLEnqueueMarkerWithWaitList(MK::CCLEnqueueMarkerWithWaitList const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK28CCLEnqueueMarkerWithWaitListC2ERKS0_(void) {
    ALOGD("_ZN2MK28CCLEnqueueMarkerWithWaitListC2ERKS0_() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, void*, unsigned int, _cl_event* const*, _cl_event**)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPvjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPvjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E7destroyEv() called");
    return 0;
}

/* Demangled: MKConfig_EnableRecord */
extern "C" __attribute__((visibility("default"))) int MKConfig_EnableRecord(void) {
    ALOGD("MKConfig_EnableRecord() called");
    return 0;
}

/* Demangled: MK::CStream::~CStream() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK7CStreamD1Ev(void) {
    ALOGD("_ZN2MK7CStreamD1Ev() called");
    return 0;
}

/* Demangled: CmdL_TreeNodeAttachCommands */
extern "C" __attribute__((visibility("default"))) int CmdL_TreeNodeAttachCommands(void) {
    ALOGD("CmdL_TreeNodeAttachCommands() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueCopyBufferToImage::Link(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK27CCLEnqueueCopyBufferToImage4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK27CCLEnqueueCopyBufferToImage4LinkERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueSVMUnmap::Save(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK18CCLEnqueueSVMUnmap4SaveERNS_7CStreamE(void) {
    ALOGD("_ZN2MK18CCLEnqueueSVMUnmap4SaveERNS_7CStreamE() called");
    return 0;
}

/* Exported Object: MK::CCLRetainKernel::ms_kRTTI */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK15CCLRetainKernel8ms_kRTTIE = NULL;

/* Demangled: MK::CCLRetainMemObject::Factory(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK18CCLRetainMemObject7FactoryERNS_7CStreamE(void) {
    ALOGD("_ZN2MK18CCLRetainMemObject7FactoryERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CBool::RegisterUniqueObject(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK5CBool20RegisterUniqueObjectERNS_7CStreamE(void) {
    ALOGD("_ZN2MK5CBool20RegisterUniqueObjectERNS_7CStreamE() called");
    return 0;
}

/* Exported Object: MK::CConfig::GetInstance()::gs_kInstance */
extern "C" __attribute__((visibility("default"))) void* _ZZN2MK7CConfig11GetInstanceEvE12gs_kInstance = NULL;

/* Demangled: clRetainMemObject */
extern "C" __attribute__((visibility("default"))) int clRetainMemObject(void) {
    ALOGD("clRetainMemObject() called");
    return 0;
}

/* Demangled: MK::CCLImportMemory::RegisterUniqueObject(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLImportMemory20RegisterUniqueObjectERNS_7CStreamE(void) {
    ALOGD("_ZN2MK15CCLImportMemory20RegisterUniqueObjectERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CCLReleaseContext::Load(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK17CCLReleaseContext4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK17CCLReleaseContext4LoadERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: MK::CCLRetainKernel::Link(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLRetainKernel4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK15CCLRetainKernel4LinkERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_mem*), std::__1::allocator<int (*)(_cl_mem*)>, int (_cl_mem*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP7_cl_memENS_9allocatorIS5_EES4_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP7_cl_memENS_9allocatorIS5_EES4_E7__cloneEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned long, unsigned int, unsigned long*), std::__1::allocator<int (*)(_cl_command_queue*, unsigned long, unsigned int, unsigned long*)>, int (_cl_command_queue*, unsigned long, unsigned int, unsigned long*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queuemjPmENS_9allocatorIS6_EES5_EE = NULL;

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueCopyBufferToImage::GetDiskUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK27CCLEnqueueCopyBufferToImage11GetDiskUsedEv(void) {
    ALOGD("_ZNK2MK27CCLEnqueueCopyBufferToImage11GetDiskUsedEv() called");
    return 0;
}

/* Demangled: MK::CCLImportMemory::GetPropertyCount(long const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK15CCLImportMemory16GetPropertyCountEPKl(void) {
    ALOGD("_ZNK2MK15CCLImportMemory16GetPropertyCountEPKl() called");
    return 0;
}

/* Demangled: MK::CCLReleaseCommandQueue::Log(MK::CJsonLog&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK22CCLReleaseCommandQueue3LogERNS_8CJsonLogE(void) {
    ALOGD("_ZNK2MK22CCLReleaseCommandQueue3LogERNS_8CJsonLogE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_program*, unsigned int, _cl_kernel**, unsigned int*), std::__1::allocator<int (*)(_cl_program*, unsigned int, _cl_kernel**, unsigned int*)>, int (_cl_program*, unsigned int, _cl_kernel**, unsigned int*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP11_cl_programjPP10_cl_kernelPjENS_9allocatorIS9_EES8_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP11_cl_programjPP10_cl_kernelPjENS_9allocatorIS9_EES8_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_platform_id*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_platform_id*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_platform_id*, unsigned int, unsigned long, void*, unsigned long*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP15_cl_platform_idjmPvPmENS_9allocatorIS7_EES6_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP15_cl_platform_idjmPvPmENS_9allocatorIS7_EES6_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, unsigned int, unsigned int, long const*, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, unsigned int, unsigned int, long const*, int*)>, _cl_mem* (_cl_context*, unsigned long, unsigned int, unsigned int, long const*, int*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmjjPKlPiENS_9allocatorISA_EES9_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmjjPKlPiENS_9allocatorISA_EES9_E7destroyEv() called");
    return 0;
}

/* Demangled: MKSysTrace_Begin */
extern "C" __attribute__((visibility("default"))) int MKSysTrace_Begin(void) {
    ALOGD("MKSysTrace_Begin() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_sampler* (*)(_cl_context*, unsigned long const*, int*), std::__1::allocator<_cl_sampler* (*)(_cl_context*, unsigned long const*, int*)>, _cl_sampler* (_cl_context*, unsigned long const*, int*)>::operator()(_cl_context*&&, unsigned long const*&&, int*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFP11_cl_samplerP11_cl_contextPKmPiENS_9allocatorISA_EES9_EclEOS5_OS7_OS8_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFP11_cl_samplerP11_cl_contextPKmPiENS_9allocatorISA_EES9_EclEOS5_OS7_OS8_() called");
    return 0;
}

/* Demangled: MK::CDummyCommand::Link(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK13CDummyCommand4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK13CDummyCommand4LinkERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: MK::CMemoryCopy::CMemoryCopy() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CMemoryCopyC1Ev(void) {
    ALOGD("_ZN2MK11CMemoryCopyC1Ev() called");
    return 0;
}

/* Demangled: MK::CCLRetainContext::CCLRetainContext(MK::CCLRetainContext const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLRetainContextC2ERKS0_(void) {
    ALOGD("_ZN2MK16CCLRetainContextC2ERKS0_() called");
    return 0;
}

/* Demangled: CmdL_AttachclCreateContextFromType */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclCreateContextFromType(void) {
    ALOGD("CmdL_AttachclCreateContextFromType() called");
    return 0;
}

/* Demangled: CmdL_AttachclEnqueueFillBuffer */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclEnqueueFillBuffer(void) {
    ALOGD("CmdL_AttachclEnqueueFillBuffer() called");
    return 0;
}

/* Demangled: MK::CThreadJobQ::EnqueueJob(MK::CJob*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CThreadJobQ10EnqueueJobEPNS_4CJobE(void) {
    ALOGD("_ZN2MK11CThreadJobQ10EnqueueJobEPNS_4CJobE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<void* (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**, int*), std::__1::allocator<void* (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**, int*)>, void* (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**, int*)>::__clone(std::__1::__function::__base<void* (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**, int*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFPvP17_cl_command_queueP7_cl_memjmmmjPKP9_cl_eventPS8_PiENS_9allocatorISE_EESD_E7__cloneEPNS0_6__baseISD_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFPvP17_cl_command_queueP7_cl_memjmmmjPKP9_cl_eventPS8_PiENS_9allocatorISE_EESD_E7__cloneEPNS0_6__baseISD_EE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_context*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_context*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_context*, unsigned int, unsigned long, void*, unsigned long*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP11_cl_contextjmPvPmENS_9allocatorIS7_EES6_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP11_cl_contextjmPvPmENS_9allocatorIS7_EES6_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_mem*), std::__1::allocator<int (*)(_cl_mem*)>, int (_cl_mem*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP7_cl_memENS_9allocatorIS5_EES4_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP7_cl_memENS_9allocatorIS5_EES4_E7destroyEv() called");
    return 0;
}

/* Demangled: MK::CCLReleaseEvent::CCLReleaseEvent(MK::CCLReleaseEvent const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLReleaseEventC2ERKS0_(void) {
    ALOGD("_ZN2MK15CCLReleaseEventC2ERKS0_() called");
    return 0;
}

/* Demangled: MK::CInputTensors::Save(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK13CInputTensors4SaveERNS_7CStreamE(void) {
    ALOGD("_ZN2MK13CInputTensors4SaveERNS_7CStreamE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<void (*)(int, void*), std::__1::allocator<void (*)(int, void*)>, void (int, void*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFviPvENS_9allocatorIS4_EES3_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFviPvENS_9allocatorIS4_EES3_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: MK::CCommand::RegisterUniqueObject(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK8CCommand20RegisterUniqueObjectERNS_7CStreamE(void) {
    ALOGD("_ZN2MK8CCommand20RegisterUniqueObjectERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CCLSVMFree::CCLSVMFree() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK10CCLSVMFreeC2Ev(void) {
    ALOGD("_ZN2MK10CCLSVMFreeC2Ev() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_sampler*), std::__1::allocator<int (*)(_cl_sampler*)>, int (_cl_sampler*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP11_cl_samplerENS_9allocatorIS5_EES4_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP11_cl_samplerENS_9allocatorIS5_EES4_E7destroyEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**)>::operator()(_cl_command_queue*&&, _cl_mem*&&, unsigned int&&, unsigned long&&, unsigned long&&, void const*&&, unsigned int&&, _cl_event* const*&&, _cl_event**&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjmmPKvjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EclEOS3_OS5_OjOmSL_OS7_SK_OSB_OSC_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjmmPKvjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EclEOS3_OS5_OjOmSL_OS7_SK_OSB_OSC_() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<bool*, std::__1::allocator<bool*> >::push_back(bool*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPbNS_9allocatorIS1_EEE9push_backEOS1_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPbNS_9allocatorIS1_EEE9push_backEOS1_() called");
    return 0;
}

/* Demangled: MK::CCLBuildProgram::CCLBuildProgram() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLBuildProgramC2Ev(void) {
    ALOGD("_ZN2MK15CCLBuildProgramC2Ev() called");
    return 0;
}

/* Demangled: MK::CCLCreateProgramWithSource::CopyConstructTo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK26CCLCreateProgramWithSource15CopyConstructToEv(void) {
    ALOGD("_ZNK2MK26CCLCreateProgramWithSource15CopyConstructToEv() called");
    return 0;
}

/* Demangled: handleEnqueueNDRangeKernelProfile(_cl_kernel*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z33handleEnqueueNDRangeKernelProfileP10_cl_kernelj(void) {
    ALOGD("_Z33handleEnqueueNDRangeKernelProfileP10_cl_kernelj() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_mmmjPKP9_cl_eventPS7_ENS_9allocatorISC_EESB_EE = NULL;

/* Demangled: MK::COutputTensors::RegisterUniqueObject(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14COutputTensors20RegisterUniqueObjectERNS_7CStreamE(void) {
    ALOGD("_ZN2MK14COutputTensors20RegisterUniqueObjectERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CMemoryCopy::~CMemoryCopy() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CMemoryCopyD0Ev(void) {
    ALOGD("_ZN2MK11CMemoryCopyD0Ev() called");
    return 0;
}

/* Demangled: MK::CProfileDataJob::~CProfileDataJob() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CProfileDataJobD0Ev(void) {
    ALOGD("_ZN2MK15CProfileDataJobD0Ev() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueCopyBufferToImage::CCLEnqueueCopyBufferToImage() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK27CCLEnqueueCopyBufferToImageC1Ev(void) {
    ALOGD("_ZN2MK27CCLEnqueueCopyBufferToImageC1Ev() called");
    return 0;
}

/* Demangled: MK::CCLCommand::Load(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK10CCLCommand4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK10CCLCommand4LoadERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueSVMUnmap::Record(_cl_command_queue*, void*, unsigned int, _cl_event* const*, _cl_event*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK18CCLEnqueueSVMUnmap6RecordEP17_cl_command_queuePvjPKP9_cl_eventS5_(void) {
    ALOGD("_ZN2MK18CCLEnqueueSVMUnmap6RecordEP17_cl_command_queuePvjPKP9_cl_eventS5_() called");
    return 0;
}

/* Demangled: MK::CCLCommand::GetDiskUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK10CCLCommand11GetDiskUsedEv(void) {
    ALOGD("_ZNK2MK10CCLCommand11GetDiskUsedEv() called");
    return 0;
}

/* Demangled: MK::CCLImportMemory::CCLImportMemory(MK::CCLImportMemory const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLImportMemoryC1ERKS0_(void) {
    ALOGD("_ZN2MK15CCLImportMemoryC1ERKS0_() called");
    return 0;
}

/* Demangled: MK::CCLPrepareMemoryCopy::Log(MK::CJsonLog&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK20CCLPrepareMemoryCopy3LogERNS_8CJsonLogE(void) {
    ALOGD("_ZNK2MK20CCLPrepareMemoryCopy3LogERNS_8CJsonLogE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, _cl_event* const*), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, _cl_event* const*)>, int (_cl_command_queue*, unsigned int, _cl_event* const*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejPKP9_cl_eventENS_9allocatorIS9_EES8_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queuejPKP9_cl_eventENS_9allocatorIS9_EES8_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: MK::CStream::InsertInOrdered(MK::CObject*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK7CStream15InsertInOrderedEPNS_7CObjectE(void) {
    ALOGD("_ZN2MK7CStream15InsertInOrderedEPNS_7CObjectE() called");
    return 0;
}

/* Demangled: CmdL_AttachclEnqueueCopyBufferToImage */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclEnqueueCopyBufferToImage(void) {
    ALOGD("CmdL_AttachclEnqueueCopyBufferToImage() called");
    return 0;
}

/* Demangled: clGetContextInfo */
extern "C" __attribute__((visibility("default"))) int clGetContextInfo(void) {
    ALOGD("clGetContextInfo() called");
    return 0;
}

/* Demangled: MK::CCLSVMFree::~CCLSVMFree() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK10CCLSVMFreeD1Ev(void) {
    ALOGD("_ZN2MK10CCLSVMFreeD1Ev() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueSVMMap::CCLEnqueueSVMMap() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLEnqueueSVMMapC2Ev(void) {
    ALOGD("_ZN2MK16CCLEnqueueSVMMapC2Ev() called");
    return 0;
}

/* Demangled: MKProgram_AttachCLRetainProgram */
extern "C" __attribute__((visibility("default"))) int MKProgram_AttachCLRetainProgram(void) {
    ALOGD("MKProgram_AttachCLRetainProgram() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_kernel* (*)(_cl_program*, char const*, int*), std::__1::allocator<_cl_kernel* (*)(_cl_program*, char const*, int*)>, _cl_kernel* (_cl_program*, char const*, int*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFP10_cl_kernelP11_cl_programPKcPiENS_9allocatorISA_EES9_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFP10_cl_kernelP11_cl_programPKcPiENS_9allocatorISA_EES9_E7destroyEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<int (*)(_cl_command_queue*), std::__1::allocator<int (*)(_cl_command_queue*)>, int (_cl_command_queue*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queueENS_9allocatorIS5_EES4_EE = NULL;

/* Demangled: CmdL_AttachclEnqueueSVMFree */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclEnqueueSVMFree(void) {
    ALOGD("CmdL_AttachclEnqueueSVMFree() called");
    return 0;
}

/* Demangled: MK::CCLBuildProgram::~CCLBuildProgram() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLBuildProgramD1Ev(void) {
    ALOGD("_ZN2MK15CCLBuildProgramD1Ev() called");
    return 0;
}

/* Demangled: MK::CCLRetainProgram::CCLRetainProgram(MK::CCLRetainProgram const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLRetainProgramC1ERKS0_(void) {
    ALOGD("_ZN2MK16CCLRetainProgramC1ERKS0_() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_command_queue* (*)(_cl_context*, _cl_device_id*, unsigned long, int*), std::__1::allocator<_cl_command_queue* (*)(_cl_context*, _cl_device_id*, unsigned long, int*)>, _cl_command_queue* (_cl_context*, _cl_device_id*, unsigned long, int*)>::__clone(std::__1::__function::__base<_cl_command_queue* (_cl_context*, _cl_device_id*, unsigned long, int*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFP17_cl_command_queueP11_cl_contextP13_cl_device_idmPiENS_9allocatorISA_EES9_E7__cloneEPNS0_6__baseIS9_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFP17_cl_command_queueP11_cl_contextP13_cl_device_idmPiENS_9allocatorISA_EES9_E7__cloneEPNS0_6__baseIS9_EE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_kernel*, unsigned int, void const*), std::__1::allocator<int (*)(_cl_kernel*, unsigned int, void const*)>, int (_cl_kernel*, unsigned int, void const*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP10_cl_kerneljPKvENS_9allocatorIS7_EES6_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP10_cl_kerneljPKvENS_9allocatorIS7_EES6_E7__cloneEv() called");
    return 0;
}

/* Demangled: MK::clEnqueueReadImage(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK18clEnqueueReadImageEP17_cl_command_queueP7_cl_memjPKmS5_mmPvjPKP9_cl_eventPS8_(void) {
    ALOGD("_ZN2MK18clEnqueueReadImageEP17_cl_command_queueP7_cl_memjPKmS5_mmPvjPKP9_cl_eventPS8_() called");
    return 0;
}

/* Demangled: clGetSupportedImageFormats */
extern "C" __attribute__((visibility("default"))) int clGetSupportedImageFormats(void) {
    ALOGD("clGetSupportedImageFormats() called");
    return 0;
}

/* Demangled: MK::CCLRetainEvent::CCLRetainEvent() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14CCLRetainEventC1Ev(void) {
    ALOGD("_ZN2MK14CCLRetainEventC1Ev() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueCopyBufferToImage::~CCLEnqueueCopyBufferToImage() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK27CCLEnqueueCopyBufferToImageD0Ev(void) {
    ALOGD("_ZN2MK27CCLEnqueueCopyBufferToImageD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_event*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_event*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_event*, unsigned int, unsigned long, void*, unsigned long*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP9_cl_eventjmPvPmENS_9allocatorIS7_EES6_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP9_cl_eventjmPvPmENS_9allocatorIS7_EES6_E18destroy_deallocateEv() called");
    return 0;
}

/* Exported Object: vtable for MK::CCLSVMAlloc */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK11CCLSVMAllocE = NULL;

/* Demangled: MKProgram_GetCLContext */
extern "C" __attribute__((visibility("default"))) int MKProgram_GetCLContext(void) {
    ALOGD("MKProgram_GetCLContext() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, void*, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, void*, int*)>, _cl_mem* (_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, void*, int*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatmmmmmPvPiENS_9allocatorISC_EESB_EE = NULL;

/* Demangled: MK::clGetSupportedImageFormats(_cl_context*, unsigned long, unsigned int, unsigned int, _cl_image_format*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK26clGetSupportedImageFormatsEP11_cl_contextmjjP16_cl_image_formatPj(void) {
    ALOGD("_ZN2MK26clGetSupportedImageFormatsEP11_cl_contextmjjP16_cl_image_formatPj() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueReadBuffer::Factory(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK20CCLEnqueueReadBuffer7FactoryERNS_7CStreamE(void) {
    ALOGD("_ZN2MK20CCLEnqueueReadBuffer7FactoryERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CCLReleaseProgram::GetDiskUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK17CCLReleaseProgram11GetDiskUsedEv(void) {
    ALOGD("_ZNK2MK17CCLReleaseProgram11GetDiskUsedEv() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueSVMMap::~CCLEnqueueSVMMap() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLEnqueueSVMMapD1Ev(void) {
    ALOGD("_ZN2MK16CCLEnqueueSVMMapD1Ev() called");
    return 0;
}

/* Demangled: MKProgram_AttachCLRetainMemObject */
extern "C" __attribute__((visibility("default"))) int MKProgram_AttachCLRetainMemObject(void) {
    ALOGD("MKProgram_AttachCLRetainMemObject() called");
    return 0;
}

/* Demangled: MK::clReleaseCommandQueue(_cl_command_queue*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK21clReleaseCommandQueueEP17_cl_command_queue(void) {
    ALOGD("_ZN2MK21clReleaseCommandQueueEP17_cl_command_queue() called");
    return 0;
}

/* Demangled: MK::CCLCreateKernel::CCLCreateKernel() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLCreateKernelC1Ev(void) {
    ALOGD("_ZN2MK15CCLCreateKernelC1Ev() called");
    return 0;
}

/* Demangled: MK::CCLCreateKernel::Run(MKProgramType, MK::CContextLocal*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLCreateKernel3RunE13MKProgramTypePNS_13CContextLocalE(void) {
    ALOGD("_ZN2MK15CCLCreateKernel3RunE13MKProgramTypePNS_13CContextLocalE() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueCopyBufferToImage::RegisterFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK27CCLEnqueueCopyBufferToImage15RegisterFactoryEv(void) {
    ALOGD("_ZN2MK27CCLEnqueueCopyBufferToImage15RegisterFactoryEv() called");
    return 0;
}

/* Demangled: MK::CCLReleaseProgram::CopyConstructTo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK17CCLReleaseProgram15CopyConstructToEv(void) {
    ALOGD("_ZNK2MK17CCLReleaseProgram15CopyConstructToEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_platform_id*), std::__1::allocator<int (*)(_cl_platform_id*)>, int (_cl_platform_id*)>::operator()(_cl_platform_id*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP15_cl_platform_idENS_9allocatorIS5_EES4_EclEOS3_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP15_cl_platform_idENS_9allocatorIS5_EES4_EclEOS3_() called");
    return 0;
}

/* Demangled: CmdL_AttachclCreateSubDevices */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclCreateSubDevices(void) {
    ALOGD("CmdL_AttachclCreateSubDevices() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMarkerWithWaitList::GetMemoryUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK28CCLEnqueueMarkerWithWaitList13GetMemoryUsedEv(void) {
    ALOGD("_ZNK2MK28CCLEnqueueMarkerWithWaitList13GetMemoryUsedEv() called");
    return 0;
}

/* Exported Object: vtable for MK::CCLRetainProgram */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK16CCLRetainProgramE = NULL;

/* Demangled: MK::CCLRetainEvent::~CCLRetainEvent() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14CCLRetainEventD0Ev(void) {
    ALOGD("_ZN2MK14CCLRetainEventD0Ev() called");
    return 0;
}

/* Exported Object: MK::CCLSVMAlloc::ms_kRTTI */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK11CCLSVMAlloc8ms_kRTTIE = NULL;

/* Demangled: std::__1::__function::__func<_cl_command_queue* (*)(_cl_context*, _cl_device_id*, unsigned long const*, int*), std::__1::allocator<_cl_command_queue* (*)(_cl_context*, _cl_device_id*, unsigned long const*, int*)>, _cl_command_queue* (_cl_context*, _cl_device_id*, unsigned long const*, int*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFP17_cl_command_queueP11_cl_contextP13_cl_device_idPKmPiENS_9allocatorISC_EESB_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFP17_cl_command_queueP11_cl_contextP13_cl_device_idPKmPiENS_9allocatorISC_EESB_E7destroyEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, _cl_image_desc const*, void*, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, _cl_image_desc const*, void*, int*)>, _cl_mem* (_cl_context*, unsigned long, _cl_image_format const*, _cl_image_desc const*, void*, int*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatPK14_cl_image_descPvPiENS_9allocatorISF_EESE_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatPK14_cl_image_descPvPiENS_9allocatorISF_EESE_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_kernel*, unsigned int, void const*), std::__1::allocator<int (*)(_cl_kernel*, unsigned int, void const*)>, int (_cl_kernel*, unsigned int, void const*)>::operator()(_cl_kernel*&&, unsigned int&&, void const*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP10_cl_kerneljPKvENS_9allocatorIS7_EES6_EclEOS3_OjOS5_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP10_cl_kerneljPKvENS_9allocatorIS7_EES6_EclEOS3_OjOS5_() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_mjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_mjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<void (*)(_cl_context*, void*), std::__1::allocator<void (*)(_cl_context*, void*)>, void (_cl_context*, void*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFvP11_cl_contextPvENS_9allocatorIS6_EES5_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFvP11_cl_contextPvENS_9allocatorIS6_EES5_E7destroyEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_sampler*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_sampler*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_sampler*, unsigned int, unsigned long, void*, unsigned long*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP11_cl_samplerjmPvPmENS_9allocatorIS7_EES6_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP11_cl_samplerjmPvPmENS_9allocatorIS7_EES6_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueWriteBuffer::~CCLEnqueueWriteBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK21CCLEnqueueWriteBufferD2Ev(void) {
    ALOGD("_ZN2MK21CCLEnqueueWriteBufferD2Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<int (*)(_cl_event*, int, void (*)(_cl_event*, int, void*), void*), std::__1::allocator<int (*)(_cl_event*, int, void (*)(_cl_event*, int, void*), void*)>, int (_cl_event*, int, void (*)(_cl_event*, int, void*), void*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFiP9_cl_eventiPFvS3_iPvES4_ENS_9allocatorIS8_EES7_EE = NULL;

/* Exported Object: MK::CCLCreateContext::ms_kRTTI */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK16CCLCreateContext8ms_kRTTIE = NULL;

/* Demangled: clGetCommandQueueInfo */
extern "C" __attribute__((visibility("default"))) int clGetCommandQueueInfo(void) {
    ALOGD("clGetCommandQueueInfo() called");
    return 0;
}

/* Demangled: MK::CCLCreateCommandQueue::~CCLCreateCommandQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK21CCLCreateCommandQueueD2Ev(void) {
    ALOGD("_ZN2MK21CCLCreateCommandQueueD2Ev() called");
    return 0;
}

/* Demangled: MK::CCLCreateKernel::~CCLCreateKernel() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLCreateKernelD0Ev(void) {
    ALOGD("_ZN2MK15CCLCreateKernelD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_mem*, unsigned long, unsigned int, void const*, int*), std::__1::allocator<_cl_mem* (*)(_cl_mem*, unsigned long, unsigned int, void const*, int*)>, _cl_mem* (_cl_mem*, unsigned long, unsigned int, void const*, int*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFP7_cl_memS3_mjPKvPiENS_9allocatorIS8_EES7_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFP7_cl_memS3_mjPKvPiENS_9allocatorIS8_EES7_E7destroyEv() called");
    return 0;
}

/* Demangled: MK::CCLCommand::Save(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK10CCLCommand4SaveERNS_7CStreamE(void) {
    ALOGD("_ZN2MK10CCLCommand4SaveERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CCLReleaseMemObject::GetDiskUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK19CCLReleaseMemObject11GetDiskUsedEv(void) {
    ALOGD("_ZNK2MK19CCLReleaseMemObject11GetDiskUsedEv() called");
    return 0;
}

/* Demangled: MK::CCLReleaseMemObject::GetMemoryUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK19CCLReleaseMemObject13GetMemoryUsedEv(void) {
    ALOGD("_ZNK2MK19CCLReleaseMemObject13GetMemoryUsedEv() called");
    return 0;
}

/* Demangled: MK::CJob::CJob(MK::CJob const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK4CJobC2ERKS0_(void) {
    ALOGD("_ZN2MK4CJobC2ERKS0_() called");
    return 0;
}

/* Exported Object: MK::CCLCreateBuffer::ms_kRTTI */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK15CCLCreateBuffer8ms_kRTTIE = NULL;

/* Exported Object: MK::CCLImportMemory::ms_kRTTI */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK15CCLImportMemory8ms_kRTTIE = NULL;

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::__clone(std::__1::__function::__base<int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_mjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEPNS0_6__baseISD_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_mjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEPNS0_6__baseISD_EE() called");
    return 0;
}

/* Demangled: MK::CCLCreateKernelsInProgram::~CCLCreateKernelsInProgram() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK25CCLCreateKernelsInProgramD2Ev(void) {
    ALOGD("_ZN2MK25CCLCreateKernelsInProgramD2Ev() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_kernel*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_kernel*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_kernel*, unsigned int, unsigned long, void*, unsigned long*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP10_cl_kerneljmPvPmENS_9allocatorIS7_EES6_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP10_cl_kerneljmPvPmENS_9allocatorIS7_EES6_E7__cloneEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, void (*)(_cl_program*, void*), void*, int*), std::__1::allocator<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, void (*)(_cl_program*, void*), void*, int*)>, _cl_program* (_cl_context*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, void (*)(_cl_program*, void*), void*, int*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKcjPKS3_PFvS3_PvESE_PiENS_9allocatorISJ_EESI_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKcjPKS3_PFvS3_PvESE_PiENS_9allocatorISJ_EESI_E18destroy_deallocateEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_mmPvjPKP9_cl_eventPSA_ENS_9allocatorISF_EESE_EE = NULL;

/* Demangled: MK::CDynamicData::CDynamicData(MK::CDynamicData const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK12CDynamicDataC1ERKS0_(void) {
    ALOGD("_ZN2MK12CDynamicDataC1ERKS0_() called");
    return 0;
}

/* Demangled: MK::CUpdateBool::RegisterUniqueObject(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CUpdateBool20RegisterUniqueObjectERNS_7CStreamE(void) {
    ALOGD("_ZN2MK11CUpdateBool20RegisterUniqueObjectERNS_7CStreamE() called");
    return 0;
}

/* Demangled: clCreateBuffer */
extern "C" __attribute__((visibility("default"))) int clCreateBuffer(void) {
    ALOGD("clCreateBuffer() called");
    return 0;
}

/* Demangled: clEnqueueWriteImage */
extern "C" __attribute__((visibility("default"))) int clEnqueueWriteImage(void) {
    ALOGD("clEnqueueWriteImage() called");
    return 0;
}

/* Demangled: MK::CCLReleaseCommandQueue::Save(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK22CCLReleaseCommandQueue4SaveERNS_7CStreamE(void) {
    ALOGD("_ZN2MK22CCLReleaseCommandQueue4SaveERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CCLReleaseKernel::Load(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLReleaseKernel4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK16CCLReleaseKernel4LoadERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: MK::CCLSetKernelArg::RegisterUniqueObject(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLSetKernelArg20RegisterUniqueObjectERNS_7CStreamE(void) {
    ALOGD("_ZN2MK15CCLSetKernelArg20RegisterUniqueObjectERNS_7CStreamE() called");
    return 0;
}

/* Exported Object: MK::CCLWaitForEvents::ms_kRTTI */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK16CCLWaitForEvents8ms_kRTTIE = NULL;

/* Demangled: MK::CStream::CStream() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK7CStreamC1Ev(void) {
    ALOGD("_ZN2MK7CStreamC1Ev() called");
    return 0;
}

/* Demangled: clUnloadPlatformCompiler */
extern "C" __attribute__((visibility("default"))) int clUnloadPlatformCompiler(void) {
    ALOGD("clUnloadPlatformCompiler() called");
    return 0;
}

/* Demangled: clEnqueueSVMMemFill */
extern "C" __attribute__((visibility("default"))) int clEnqueueSVMMemFill(void) {
    ALOGD("clEnqueueSVMMemFill() called");
    return 0;
}

/* Exported Object: vtable for MK::CObject */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK7CObjectE = NULL;

/* Demangled: MK::CProgram::~CProgram() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK8CProgramD0Ev(void) {
    ALOGD("_ZN2MK8CProgramD0Ev() called");
    return 0;
}

/* Demangled: MK::CStream::Load(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK7CStream4LoadEPKc(void) {
    ALOGD("_ZN2MK7CStream4LoadEPKc() called");
    return 0;
}

/* Demangled: MK::CCLCreateProgramWithBinary::GetDiskUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK26CCLCreateProgramWithBinary11GetDiskUsedEv(void) {
    ALOGD("_ZNK2MK26CCLCreateProgramWithBinary11GetDiskUsedEv() called");
    return 0;
}

/* Demangled: MK::CCLSetKernelArg::GetMemoryUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK15CCLSetKernelArg13GetMemoryUsedEv(void) {
    ALOGD("_ZNK2MK15CCLSetKernelArg13GetMemoryUsedEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_mem*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_mem*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_mem*, unsigned int, unsigned long, void*, unsigned long*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP7_cl_memjmPvPmENS_9allocatorIS7_EES6_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP7_cl_memjmPvPmENS_9allocatorIS7_EES6_E7__cloneEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_sampler*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_sampler*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_sampler*, unsigned int, unsigned long, void*, unsigned long*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP11_cl_samplerjmPvPmENS_9allocatorIS7_EES6_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP11_cl_samplerjmPvPmENS_9allocatorIS7_EES6_E7destroyEv() called");
    return 0;
}

/* Demangled: MK::CCLFlush::GetMemoryUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK8CCLFlush13GetMemoryUsedEv(void) {
    ALOGD("_ZNK2MK8CCLFlush13GetMemoryUsedEv() called");
    return 0;
}

/* Demangled: MKSysTrace_End */
extern "C" __attribute__((visibility("default"))) int MKSysTrace_End(void) {
    ALOGD("MKSysTrace_End() called");
    return 0;
}

/* Demangled: MK::CLSymbols::load_default() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK9CLSymbols12load_defaultEv(void) {
    ALOGD("_ZN2MK9CLSymbols12load_defaultEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, void const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, void const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, void const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPKvPKmS9_jPKP9_cl_eventPSB_ENS_9allocatorISG_EESF_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPKvPKmS9_jPKP9_cl_eventPSB_ENS_9allocatorISG_EESF_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjmmPKvjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjmmPKvjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: MK::CStream::~CStream() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK7CStreamD0Ev(void) {
    ALOGD("_ZN2MK7CStreamD0Ev() called");
    return 0;
}

/* Exported Object: guard variable for MK::CContextGlobal::GetInstance()::ms_kInstance */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN2MK14CContextGlobal11GetInstanceEvE12ms_kInstance = NULL;

/* Demangled: MK::CCLCreateKernel::Factory(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLCreateKernel7FactoryERNS_7CStreamE(void) {
    ALOGD("_ZN2MK15CCLCreateKernel7FactoryERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CLSymbols::met_systrace() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK9CLSymbols12met_systraceEv(void) {
    ALOGD("_ZN2MK9CLSymbols12met_systraceEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_kernel* (*)(_cl_program*, char const*, int*), std::__1::allocator<_cl_kernel* (*)(_cl_program*, char const*, int*)>, _cl_kernel* (_cl_program*, char const*, int*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFP10_cl_kernelP11_cl_programPKcPiENS_9allocatorISA_EES9_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFP10_cl_kernelP11_cl_programPKcPiENS_9allocatorISA_EES9_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**)>::operator()(_cl_command_queue*&&, _cl_mem*&&, unsigned int&&, unsigned long const*&&, unsigned long const*&&, unsigned long&&, unsigned long&&, void const*&&, unsigned int&&, _cl_event* const*&&, _cl_event**&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_mmPKvjPKP9_cl_eventPSB_ENS_9allocatorISG_EESF_EclEOS3_OS5_OjOS7_SN_OmSO_OS9_SM_OSD_OSE_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_mmPKvjPKP9_cl_eventPSB_ENS_9allocatorISG_EESF_EclEOS3_OS5_OjOS7_SN_OmSO_OS9_SM_OSD_OSE_() called");
    return 0;
}

/* Exported Object: vtable for MK::CContextTls */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK11CContextTlsE = NULL;

/* Demangled: CmdL_AttachclRetainMemObject */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclRetainMemObject(void) {
    ALOGD("CmdL_AttachclRetainMemObject() called");
    return 0;
}

/* Demangled: MK::CCLRetainMemObject::Save(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK18CCLRetainMemObject4SaveERNS_7CStreamE(void) {
    ALOGD("_ZN2MK18CCLRetainMemObject4SaveERNS_7CStreamE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_mPKmS7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EE = NULL;

/* Demangled: MK::CCLBuildProgram::GetDiskUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK15CCLBuildProgram11GetDiskUsedEv(void) {
    ALOGD("_ZNK2MK15CCLBuildProgram11GetDiskUsedEv() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueNDRangeKernel::Save(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK23CCLEnqueueNDRangeKernel4SaveERNS_7CStreamE(void) {
    ALOGD("_ZN2MK23CCLEnqueueNDRangeKernel4SaveERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMemoryCopy::CCLEnqueueMemoryCopy(MK::CCLEnqueueMemoryCopy const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK20CCLEnqueueMemoryCopyC1ERKS0_(void) {
    ALOGD("_ZN2MK20CCLEnqueueMemoryCopyC1ERKS0_() called");
    return 0;
}

/* Demangled: CmdL_AttachclCreateProgramWithSource */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclCreateProgramWithSource(void) {
    ALOGD("CmdL_AttachclCreateProgramWithSource() called");
    return 0;
}

/* Demangled: MK::CCLBuildProgram::Record(_cl_program*, unsigned int, _cl_device_id* const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLBuildProgram6RecordEP11_cl_programjPKP13_cl_device_idPKc(void) {
    ALOGD("_ZN2MK15CCLBuildProgram6RecordEP11_cl_programjPKP13_cl_device_idPKc() called");
    return 0;
}

/* Demangled: MK::CCLRetainMemObject::Run(MKProgramType, MK::CContextLocal*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK18CCLRetainMemObject3RunE13MKProgramTypePNS_13CContextLocalE(void) {
    ALOGD("_ZN2MK18CCLRetainMemObject3RunE13MKProgramTypePNS_13CContextLocalE() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueReadBuffer::GetDiskUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK20CCLEnqueueReadBuffer11GetDiskUsedEv(void) {
    ALOGD("_ZNK2MK20CCLEnqueueReadBuffer11GetDiskUsedEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_platform_id*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_platform_id*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_platform_id*, unsigned int, unsigned long, void*, unsigned long*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP15_cl_platform_idjmPvPmENS_9allocatorIS7_EES6_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP15_cl_platform_idjmPvPmENS_9allocatorIS7_EES6_E7__cloneEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, long const*, void*, unsigned long, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, long const*, void*, unsigned long, int*)>, _cl_mem* (_cl_context*, unsigned long, long const*, void*, unsigned long, int*)>::operator()(_cl_context*&&, unsigned long&&, long const*&&, void*&&, unsigned long&&, int*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPKlPvmPiENS_9allocatorISB_EESA_EclEOS5_OmOS7_OS8_SG_OS9_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPKlPvmPiENS_9allocatorISB_EESA_EclEOS5_OmOS7_OS8_SG_OS9_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queuejmPvmjPKP9_cl_eventPS6_ENS_9allocatorISB_EESA_EE = NULL;

/* Demangled: MKProgram_SetInputHostPtr */
extern "C" __attribute__((visibility("default"))) int MKProgram_SetInputHostPtr(void) {
    ALOGD("MKProgram_SetInputHostPtr() called");
    return 0;
}

/* Demangled: MK::clGetDeviceIDs(_cl_platform_id*, unsigned long, unsigned int, _cl_device_id**, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14clGetDeviceIDsEP15_cl_platform_idmjPP13_cl_device_idPj(void) {
    ALOGD("_ZN2MK14clGetDeviceIDsEP15_cl_platform_idmjPP13_cl_device_idPj() called");
    return 0;
}

/* Demangled: MK::CCLBuildProgram::Run(MKProgramType, MK::CContextLocal*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLBuildProgram3RunE13MKProgramTypePNS_13CContextLocalE(void) {
    ALOGD("_ZN2MK15CCLBuildProgram3RunE13MKProgramTypePNS_13CContextLocalE() called");
    return 0;
}

/* Demangled: MK::CVersion::operator>(MK::CVersion const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK8CVersiongtERKS0_(void) {
    ALOGD("_ZNK2MK8CVersiongtERKS0_() called");
    return 0;
}

/* Demangled: MK::CStream::GetObjectCount() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK7CStream14GetObjectCountEv(void) {
    ALOGD("_ZN2MK7CStream14GetObjectCountEv() called");
    return 0;
}

/* Exported Object: vtable for MK::CCLCreateKernel */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK15CCLCreateKernelE = NULL;

/* Demangled: MK::CCLReleaseMemObject::Load(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK19CCLReleaseMemObject4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK19CCLReleaseMemObject4LoadERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueSVMMap::CopyConstructTo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK16CCLEnqueueSVMMap15CopyConstructToEv(void) {
    ALOGD("_ZNK2MK16CCLEnqueueSVMMap15CopyConstructToEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_context*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_context*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_context*, unsigned int, unsigned long, void*, unsigned long*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP11_cl_contextjmPvPmENS_9allocatorIS7_EES6_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP11_cl_contextjmPvPmENS_9allocatorIS7_EES6_E7destroyEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_program*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_program*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_program*, unsigned int, unsigned long, void*, unsigned long*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP11_cl_programjmPvPmENS_9allocatorIS7_EES6_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP11_cl_programjmPvPmENS_9allocatorIS7_EES6_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, void**, void (*)(_cl_command_queue*, unsigned int, void**, void*), void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, void**, void (*)(_cl_command_queue*, unsigned int, void**, void*), void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, unsigned int, void**, void (*)(_cl_command_queue*, unsigned int, void**, void*), void*, unsigned int, _cl_event* const*, _cl_event**)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuejPPvPFvS3_jS5_S4_ES4_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP17_cl_command_queuejPPvPFvS3_jS5_S4_ES4_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, unsigned long const*, unsigned char const**, int*, int*), std::__1::allocator<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, unsigned long const*, unsigned char const**, int*, int*)>, _cl_program* (_cl_context*, unsigned int, _cl_device_id* const*, unsigned long const*, unsigned char const**, int*, int*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKmPPKhPiSF_ENS_9allocatorISH_EESG_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKmPPKhPiSF_ENS_9allocatorISH_EESG_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: clBuildProgram */
extern "C" __attribute__((visibility("default"))) int clBuildProgram(void) {
    ALOGD("clBuildProgram() called");
    return 0;
}

/* Demangled: clSetKernelExecInfo */
extern "C" __attribute__((visibility("default"))) int clSetKernelExecInfo(void) {
    ALOGD("clSetKernelExecInfo() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMapBuffer::Record(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK19CCLEnqueueMapBuffer6RecordEP17_cl_command_queueP7_cl_memjmmmjPKP9_cl_eventS6_Pv(void) {
    ALOGD("_ZN2MK19CCLEnqueueMapBuffer6RecordEP17_cl_command_queueP7_cl_memjmmmjPKP9_cl_eventS6_Pv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_sampler*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_sampler*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_sampler*, unsigned int, unsigned long, void*, unsigned long*)>::__clone(std::__1::__function::__base<int (_cl_sampler*, unsigned int, unsigned long, void*, unsigned long*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP11_cl_samplerjmPvPmENS_9allocatorIS7_EES6_E7__cloneEPNS0_6__baseIS6_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP11_cl_samplerjmPvPmENS_9allocatorIS7_EES6_E7__cloneEPNS0_6__baseIS6_EE() called");
    return 0;
}

/* Demangled: CmdL_AttachclLinkProgram */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclLinkProgram(void) {
    ALOGD("CmdL_AttachclLinkProgram() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_kernel* (*)(_cl_program*, char const*, int*), std::__1::allocator<_cl_kernel* (*)(_cl_program*, char const*, int*)>, _cl_kernel* (_cl_program*, char const*, int*)>::operator()(_cl_program*&&, char const*&&, int*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFP10_cl_kernelP11_cl_programPKcPiENS_9allocatorISA_EES9_EclEOS5_OS7_OS8_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFP10_cl_kernelP11_cl_programPKcPiENS_9allocatorISA_EES9_EclEOS5_OS7_OS8_() called");
    return 0;
}

/* Demangled: MK::COutputTensors::Log(MK::CJsonLog&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK14COutputTensors3LogERNS_8CJsonLogE(void) {
    ALOGD("_ZNK2MK14COutputTensors3LogERNS_8CJsonLogE() called");
    return 0;
}

/* Demangled: CmdL_AttachclCreateContext */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclCreateContext(void) {
    ALOGD("CmdL_AttachclCreateContext() called");
    return 0;
}

/* Demangled: MK::clRetainCommandQueue(_cl_command_queue*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK20clRetainCommandQueueEP17_cl_command_queue(void) {
    ALOGD("_ZN2MK20clRetainCommandQueueEP17_cl_command_queue() called");
    return 0;
}

/* Demangled: MKStream_LoadByBuffer */
extern "C" __attribute__((visibility("default"))) int MKStream_LoadByBuffer(void) {
    ALOGD("MKStream_LoadByBuffer() called");
    return 0;
}

/* Demangled: MK::CCLSVMFree::CCLSVMFree() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK10CCLSVMFreeC1Ev(void) {
    ALOGD("_ZN2MK10CCLSVMFreeC1Ev() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>::operator()(_cl_command_queue*&&, _cl_mem*&&, unsigned int&&, unsigned long const*&&, unsigned long const*&&, unsigned long&&, unsigned long&&, void*&&, unsigned int&&, _cl_event* const*&&, _cl_event**&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_mmPvjPKP9_cl_eventPSA_ENS_9allocatorISF_EESE_EclEOS3_OS5_OjOS7_SM_OmSN_OS8_SL_OSC_OSD_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_mmPvjPKP9_cl_eventPSA_ENS_9allocatorISF_EESE_EclEOS3_OS5_OjOS7_SM_OmSN_OS8_SL_OSC_OSD_() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, void*, void const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, void*, void const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, unsigned int, void*, void const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::operator()(_cl_command_queue*&&, unsigned int&&, void*&&, void const*&&, unsigned long&&, unsigned int&&, _cl_event* const*&&, _cl_event**&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejPvPKvmjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_EclEOS3_OjOS4_OS6_OmSI_OSA_OSB_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queuejPvPKvmjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_EclEOS3_OjOS4_OS6_OmSI_OSA_OSB_() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<long, MK::CResourceMap::_Data>, std::__1::__map_value_compare<long, std::__1::__value_type<long, MK::CResourceMap::_Data>, std::__1::less<long>, true>, std::__1::allocator<std::__1::__value_type<long, MK::CResourceMap::_Data> > >::destroy(std::__1::__tree_node<std::__1::__value_type<long, MK::CResourceMap::_Data>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIlN2MK12CResourceMap5_DataEEENS_19__map_value_compareIlS5_NS_4lessIlEELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIlN2MK12CResourceMap5_DataEEENS_19__map_value_compareIlS5_NS_4lessIlEELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE() called");
    return 0;
}

/* Demangled: clCreateKernelsInProgram */
extern "C" __attribute__((visibility("default"))) int clCreateKernelsInProgram(void) {
    ALOGD("clCreateKernelsInProgram() called");
    return 0;
}

/* Demangled: MK::CCLBuildProgram::CCLBuildProgram() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLBuildProgramC1Ev(void) {
    ALOGD("_ZN2MK15CCLBuildProgramC1Ev() called");
    return 0;
}

/* Demangled: MK::CCLSVMFree::RegisterFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK10CCLSVMFree15RegisterFactoryEv(void) {
    ALOGD("_ZN2MK10CCLSVMFree15RegisterFactoryEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_kernel*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_kernel*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_kernel*, unsigned int, _cl_event* const*, _cl_event**)>::__clone(std::__1::__function::__base<int (_cl_command_queue*, _cl_kernel*, unsigned int, _cl_event* const*, _cl_event**)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP10_cl_kerneljPKP9_cl_eventPS7_ENS_9allocatorISC_EESB_E7__cloneEPNS0_6__baseISB_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP10_cl_kerneljPKP9_cl_eventPS7_ENS_9allocatorISC_EESB_E7__cloneEPNS0_6__baseISB_EE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, unsigned long, void*, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, unsigned long, void*, int*)>, _cl_mem* (_cl_context*, unsigned long, unsigned long, void*, int*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmmPvPiENS_9allocatorIS9_EES8_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmmPvPiENS_9allocatorIS9_EES8_E7destroyEv() called");
    return 0;
}

/* Demangled: MK::CBool::Save(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK5CBool4SaveERNS_7CStreamE(void) {
    ALOGD("_ZN2MK5CBool4SaveERNS_7CStreamE() called");
    return 0;
}

/* Demangled: CmdL_AttachclCreateSampler */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclCreateSampler(void) {
    ALOGD("CmdL_AttachclCreateSampler() called");
    return 0;
}

/* Demangled: MK::CCLCreateContext::GetPropertyCount(long const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK16CCLCreateContext16GetPropertyCountEPKl(void) {
    ALOGD("_ZNK2MK16CCLCreateContext16GetPropertyCountEPKl() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_kernel*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_kernel*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_kernel*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP10_cl_kernelP13_cl_device_idjmPvPmENS_9allocatorIS9_EES8_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP10_cl_kernelP13_cl_device_idjmPvPmENS_9allocatorIS9_EES8_E7__cloneEv() called");
    return 0;
}

/* Demangled: MK::CInputTensors::Factory(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK13CInputTensors7FactoryERNS_7CStreamE(void) {
    ALOGD("_ZN2MK13CInputTensors7FactoryERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CJsonLog::AddNewLine() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK8CJsonLog10AddNewLineEv(void) {
    ALOGD("_ZN2MK8CJsonLog10AddNewLineEv() called");
    return 0;
}

/* Demangled: MK::CUpdateBool::GetDiskUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK11CUpdateBool11GetDiskUsedEv(void) {
    ALOGD("_ZNK2MK11CUpdateBool11GetDiskUsedEv() called");
    return 0;
}

/* Demangled: MK::clReleaseKernel(_cl_kernel*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15clReleaseKernelEP10_cl_kernel(void) {
    ALOGD("_ZN2MK15clReleaseKernelEP10_cl_kernel() called");
    return 0;
}

/* Exported Object: vtable for MK::CCLCreateContext */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK16CCLCreateContextE = NULL;

/* Demangled: MK::clSetEventCallback(_cl_event*, int, void (*)(_cl_event*, int, void*), void*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK18clSetEventCallbackEP9_cl_eventiPFvS1_iPvES2_(void) {
    ALOGD("_ZN2MK18clSetEventCallbackEP9_cl_eventiPFvS1_iPvES2_() called");
    return 0;
}

/* Demangled: MK::clCreateContextFromType(long const*, unsigned long, void (*)(char const*, void const*, unsigned long, void*), void*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK23clCreateContextFromTypeEPKlmPFvPKcPKvmPvES6_Pi(void) {
    ALOGD("_ZN2MK23clCreateContextFromTypeEPKlmPFvPKcPKvmPvES6_Pi() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueSVMMap::CCLEnqueueSVMMap() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLEnqueueSVMMapC1Ev(void) {
    ALOGD("_ZN2MK16CCLEnqueueSVMMapC1Ev() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueUnmapMemObject::Save(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK24CCLEnqueueUnmapMemObject4SaveERNS_7CStreamE(void) {
    ALOGD("_ZN2MK24CCLEnqueueUnmapMemObject4SaveERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CCLSVMFree::~CCLSVMFree() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK10CCLSVMFreeD0Ev(void) {
    ALOGD("_ZN2MK10CCLSVMFreeD0Ev() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueSVMMap::Link(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLEnqueueSVMMap4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK16CCLEnqueueSVMMap4LinkERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_sampler*), std::__1::allocator<int (*)(_cl_sampler*)>, int (_cl_sampler*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP11_cl_samplerENS_9allocatorIS5_EES4_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP11_cl_samplerENS_9allocatorIS5_EES4_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_mem*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_mem*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_mem*, unsigned int, unsigned long, void*, unsigned long*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP7_cl_memjmPvPmENS_9allocatorIS7_EES6_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP7_cl_memjmPvPmENS_9allocatorIS7_EES6_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: clEnqueueUnmapMemObject */
extern "C" __attribute__((visibility("default"))) int clEnqueueUnmapMemObject(void) {
    ALOGD("clEnqueueUnmapMemObject() called");
    return 0;
}

/* Demangled: MK::CCLBuildProgram::~CCLBuildProgram() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLBuildProgramD0Ev(void) {
    ALOGD("_ZN2MK15CCLBuildProgramD0Ev() called");
    return 0;
}

/* Demangled: MKProgram_AttachCLCreateContext */
extern "C" __attribute__((visibility("default"))) int MKProgram_AttachCLCreateContext(void) {
    ALOGD("MKProgram_AttachCLCreateContext() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_sampler* (*)(_cl_context*, unsigned int, unsigned int, unsigned int, int*), std::__1::allocator<_cl_sampler* (*)(_cl_context*, unsigned int, unsigned int, unsigned int, int*)>, _cl_sampler* (_cl_context*, unsigned int, unsigned int, unsigned int, int*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFP11_cl_samplerP11_cl_contextjjjPiENS_9allocatorIS8_EES7_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFP11_cl_samplerP11_cl_contextjjjPiENS_9allocatorIS8_EES7_E7__cloneEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, void*, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, void*, int*)>, _cl_mem* (_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, void*, int*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatmmmPvPiENS_9allocatorISC_EESB_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatmmmPvPiENS_9allocatorISC_EESB_E7destroyEv() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<int (*)(_cl_kernel*, unsigned int, void const*), std::__1::allocator<int (*)(_cl_kernel*, unsigned int, void const*)>, int (_cl_kernel*, unsigned int, void const*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFiP10_cl_kerneljPKvENS_9allocatorIS7_EES6_EE = NULL;

/* Demangled: MK::clEnqueueCopyBufferRect(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK23clEnqueueCopyBufferRectEP17_cl_command_queueP7_cl_memS3_PKmS5_S5_mmmmjPKP9_cl_eventPS7_(void) {
    ALOGD("_ZN2MK23clEnqueueCopyBufferRectEP17_cl_command_queueP7_cl_memS3_PKmS5_S5_mmmmjPKP9_cl_eventPS7_() called");
    return 0;
}

/* Demangled: MK::CCLRetainContext::Load(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLRetainContext4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK16CCLRetainContext4LoadERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_kernel*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_kernel*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_kernel*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP10_cl_kernelP13_cl_device_idjmPvPmENS_9allocatorIS9_EES8_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP10_cl_kernelP13_cl_device_idjmPvPmENS_9allocatorIS9_EES8_E7destroyEv() called");
    return 0;
}

/* Demangled: MK::CCLSVMAlloc::Record(_cl_context*, unsigned long, unsigned long, unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CCLSVMAlloc6RecordEP11_cl_contextmmjPv(void) {
    ALOGD("_ZN2MK11CCLSVMAlloc6RecordEP11_cl_contextmmjPv() called");
    return 0;
}

/* Demangled: MK::CObject::GetObjectByNameRTTI(char const*, MK::CRTTI const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK7CObject19GetObjectByNameRTTIEPKcPKNS_5CRTTIEb(void) {
    ALOGD("_ZN2MK7CObject19GetObjectByNameRTTIEPKcPKNS_5CRTTIEb() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, unsigned long, void*, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, unsigned long, void*, int*)>, _cl_mem* (_cl_context*, unsigned long, unsigned long, void*, int*)>::__clone(std::__1::__function::__base<_cl_mem* (_cl_context*, unsigned long, unsigned long, void*, int*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmmPvPiENS_9allocatorIS9_EES8_E7__cloneEPNS0_6__baseIS8_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmmPvPiENS_9allocatorIS9_EES8_E7__cloneEPNS0_6__baseIS8_EE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_kernel*, unsigned int, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_kernel*, unsigned int, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_kernel*, unsigned int, unsigned int, unsigned long, void*, unsigned long*)>::__clone(std::__1::__function::__base<int (_cl_kernel*, unsigned int, unsigned int, unsigned long, void*, unsigned long*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP10_cl_kerneljjmPvPmENS_9allocatorIS7_EES6_E7__cloneEPNS0_6__baseIS6_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP10_cl_kerneljjmPvPmENS_9allocatorIS7_EES6_E7__cloneEPNS0_6__baseIS6_EE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<bool (*)(int, void*), std::__1::allocator<bool (*)(int, void*)>, bool (int, void*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFbiPvENS_9allocatorIS4_EES3_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFbiPvENS_9allocatorIS4_EES3_E7destroyEv() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueWriteBuffer::CCLEnqueueWriteBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK21CCLEnqueueWriteBufferC2Ev(void) {
    ALOGD("_ZN2MK21CCLEnqueueWriteBufferC2Ev() called");
    return 0;
}

/* Demangled: MK::CCLReleaseKernel::CopyConstructTo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK16CCLReleaseKernel15CopyConstructToEv(void) {
    ALOGD("_ZNK2MK16CCLReleaseKernel15CopyConstructToEv() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueSVMMap::~CCLEnqueueSVMMap() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLEnqueueSVMMapD0Ev(void) {
    ALOGD("_ZN2MK16CCLEnqueueSVMMapD0Ev() called");
    return 0;
}

/* Exported Object: vtable for MK::CCLProfileKernelJob */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK19CCLProfileKernelJobE = NULL;

/* Demangled: std::__1::__function::__func<int (*)(_cl_platform_id*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_platform_id*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_platform_id*, unsigned int, unsigned long, void*, unsigned long*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP15_cl_platform_idjmPvPmENS_9allocatorIS7_EES6_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP15_cl_platform_idjmPvPmENS_9allocatorIS7_EES6_E7destroyEv() called");
    return 0;
}

/* Demangled: MK::clCreateSampler(_cl_context*, unsigned int, unsigned int, unsigned int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15clCreateSamplerEP11_cl_contextjjjPi(void) {
    ALOGD("_ZN2MK15clCreateSamplerEP11_cl_contextjjjPi() called");
    return 0;
}

/* Demangled: MK::CCLCreateCommandQueue::CCLCreateCommandQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK21CCLCreateCommandQueueC2Ev(void) {
    ALOGD("_ZN2MK21CCLCreateCommandQueueC2Ev() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIlNS_9allocatorIlEEE6insertINS_11__wrap_iterIPlEEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIlNS_15iterator_traitsIS9_E9referenceEEE5valueES7_E4typeENS5_IPKlEES9_S9_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIlNS_9allocatorIlEEE6insertINS_11__wrap_iterIPlEEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIlNS_15iterator_traitsIS9_E9referenceEEE5valueES7_E4typeENS5_IPKlEES9_S9_(void) {
    ALOGD("_ZNSt3__16vectorIlNS_9allocatorIlEEE6insertINS_11__wrap_iterIPlEEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIlNS_15iterator_traitsIS9_E9referenceEEE5valueES7_E4typeENS5_IPKlEES9_S9_() called");
    return 0;
}

/* Demangled: MK::clEnqueueUnmapMemObject(_cl_command_queue*, _cl_mem*, void*, unsigned int, _cl_event* const*, _cl_event**) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK23clEnqueueUnmapMemObjectEP17_cl_command_queueP7_cl_memPvjPKP9_cl_eventPS6_(void) {
    ALOGD("_ZN2MK23clEnqueueUnmapMemObjectEP17_cl_command_queueP7_cl_memPvjPKP9_cl_eventPS6_() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_kernel*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_kernel*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_kernel*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP10_cl_kerneljPKmS7_S7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queueP10_cl_kerneljPKmS7_S7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E18destroy_deallocateEv() called");
    return 0;
}

/* Exported Object: MK::CInputTensors::ms_kRTTI */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK13CInputTensors8ms_kRTTIE = NULL;

/* Exported Object: vtable for MK::CContextGlobal */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK14CContextGlobalE = NULL;

/* Exported Object: MK::CCLEnqueueMarker::ms_kRTTI */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK16CCLEnqueueMarker8ms_kRTTIE = NULL;

/* Demangled: MK::CCLCreateKernelsInProgram::CCLCreateKernelsInProgram() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK25CCLCreateKernelsInProgramC2Ev(void) {
    ALOGD("_ZN2MK25CCLCreateKernelsInProgramC2Ev() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueWriteBuffer::~CCLEnqueueWriteBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK21CCLEnqueueWriteBufferD1Ev(void) {
    ALOGD("_ZN2MK21CCLEnqueueWriteBufferD1Ev() called");
    return 0;
}

/* Demangled: MK::CCLReleaseContext::GetMemoryUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK17CCLReleaseContext13GetMemoryUsedEv(void) {
    ALOGD("_ZNK2MK17CCLReleaseContext13GetMemoryUsedEv() called");
    return 0;
}

/* Demangled: MK::CCLRetainContext::Factory(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLRetainContext7FactoryERNS_7CStreamE(void) {
    ALOGD("_ZN2MK16CCLRetainContext7FactoryERNS_7CStreamE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_event*, int, void (*)(_cl_event*, int, void*), void*), std::__1::allocator<int (*)(_cl_event*, int, void (*)(_cl_event*, int, void*), void*)>, int (_cl_event*, int, void (*)(_cl_event*, int, void*), void*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP9_cl_eventiPFvS3_iPvES4_ENS_9allocatorIS8_EES7_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP9_cl_eventiPFvS3_iPvES4_ENS_9allocatorIS8_EES7_E7destroyEv() called");
    return 0;
}

/* Demangled: MK::CCLCreateCommandQueue::~CCLCreateCommandQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK21CCLCreateCommandQueueD1Ev(void) {
    ALOGD("_ZN2MK21CCLCreateCommandQueueD1Ev() called");
    return 0;
}

/* Demangled: MK::CCLReleaseEvent::RegisterFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLReleaseEvent15RegisterFactoryEv(void) {
    ALOGD("_ZN2MK15CCLReleaseEvent15RegisterFactoryEv() called");
    return 0;
}

/* Demangled: MK::CCLRetainCommandQueue::Save(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK21CCLRetainCommandQueue4SaveERNS_7CStreamE(void) {
    ALOGD("_ZN2MK21CCLRetainCommandQueue4SaveERNS_7CStreamE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_kernel*, unsigned int, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_kernel*, unsigned int, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_kernel*, unsigned int, unsigned int, unsigned long, void*, unsigned long*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP10_cl_kerneljjmPvPmENS_9allocatorIS7_EES6_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP10_cl_kerneljjmPvPmENS_9allocatorIS7_EES6_E7__cloneEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, void*, unsigned int, _cl_event* const*, _cl_event**)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuePvjPKP9_cl_eventPS6_ENS_9allocatorISB_EESA_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP17_cl_command_queuePvjPKP9_cl_eventPS6_ENS_9allocatorISB_EESA_E7__cloneEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<int (*)(_cl_command_queue*, void (*)(void*), void*, unsigned long, unsigned int, _cl_mem* const*, void const**, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, void (*)(void*), void*, unsigned long, unsigned int, _cl_mem* const*, void const**, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, void (*)(void*), void*, unsigned long, unsigned int, _cl_mem* const*, void const**, unsigned int, _cl_event* const*, _cl_event**)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queuePFvPvES4_mjPKP7_cl_memPPKvjPKP9_cl_eventPSF_ENS_9allocatorISK_EESJ_EE = NULL;

/* Demangled: MK::clCreateBuffer(_cl_context*, unsigned long, unsigned long, void*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14clCreateBufferEP11_cl_contextmmPvPi(void) {
    ALOGD("_ZN2MK14clCreateBufferEP11_cl_contextmmPvPi() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueSVMMap::RegisterUniqueObject(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLEnqueueSVMMap20RegisterUniqueObjectERNS_7CStreamE(void) {
    ALOGD("_ZN2MK16CCLEnqueueSVMMap20RegisterUniqueObjectERNS_7CStreamE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_program* (*)(_cl_context*, unsigned int, char const**, unsigned long const*, int*), std::__1::allocator<_cl_program* (*)(_cl_context*, unsigned int, char const**, unsigned long const*, int*)>, _cl_program* (_cl_context*, unsigned int, char const**, unsigned long const*, int*)>::operator()(_cl_context*&&, unsigned int&&, char const**&&, unsigned long const*&&, int*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPPKcPKmPiENS_9allocatorISD_EESC_EclEOS5_OjOS8_OSA_OSB_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPPKcPKmPiENS_9allocatorISD_EESC_EclEOS5_OjOS8_OSA_OSB_() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, void const*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, void const*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, void const*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPKvmmmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPKvmmmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E18destroy_deallocateEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, void*, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, void*, int*)>, _cl_mem* (_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, void*, int*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPK16_cl_image_formatmmmPvPiENS_9allocatorISC_EESB_EE = NULL;

/* Exported Object: vtable for std::__1::__function::__func<int (*)(_cl_program*), std::__1::allocator<int (*)(_cl_program*)>, int (_cl_program*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFiP11_cl_programENS_9allocatorIS5_EES4_EE = NULL;

/* Demangled: clEnqueueTask */
extern "C" __attribute__((visibility("default"))) int clEnqueueTask(void) {
    ALOGD("clEnqueueTask() called");
    return 0;
}

/* Demangled: MK::CCLCreateBuffer::Factory(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLCreateBuffer7FactoryERNS_7CStreamE(void) {
    ALOGD("_ZN2MK15CCLCreateBuffer7FactoryERNS_7CStreamE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, _cl_mem* const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, _cl_mem* const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, unsigned int, _cl_mem* const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuejPKP7_cl_memmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP17_cl_command_queuejPKP7_cl_memmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEv() called");
    return 0;
}

/* Demangled: clGetProgramInfo */
extern "C" __attribute__((visibility("default"))) int clGetProgramInfo(void) {
    ALOGD("clGetProgramInfo() called");
    return 0;
}

/* Demangled: clSetMemObjectDestructorCallback */
extern "C" __attribute__((visibility("default"))) int clSetMemObjectDestructorCallback(void) {
    ALOGD("clSetMemObjectDestructorCallback() called");
    return 0;
}

/* Demangled: MK::CCLCommand::GetMemoryUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK10CCLCommand13GetMemoryUsedEv(void) {
    ALOGD("_ZNK2MK10CCLCommand13GetMemoryUsedEv() called");
    return 0;
}

/* Demangled: MK::CCLCreateKernelsInProgram::~CCLCreateKernelsInProgram() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK25CCLCreateKernelsInProgramD1Ev(void) {
    ALOGD("_ZN2MK25CCLCreateKernelsInProgramD1Ev() called");
    return 0;
}

/* Demangled: MK::CCLReleaseKernel::CCLReleaseKernel(MK::CCLReleaseKernel const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLReleaseKernelC2ERKS0_(void) {
    ALOGD("_ZN2MK16CCLReleaseKernelC2ERKS0_() called");
    return 0;
}

/* Demangled: MK::CCLRetainContext::CopyConstructTo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK16CCLRetainContext15CopyConstructToEv(void) {
    ALOGD("_ZNK2MK16CCLRetainContext15CopyConstructToEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_S7_mmmmPvjPKP9_cl_eventPSA_ENS_9allocatorISF_EESE_EE = NULL;

/* Demangled: CmdL_SetControl */
extern "C" __attribute__((visibility("default"))) int CmdL_SetControl(void) {
    ALOGD("CmdL_SetControl() called");
    return 0;
}

/* Demangled: MK::CCLRetainKernel::Record(_cl_kernel*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLRetainKernel6RecordEP10_cl_kernel(void) {
    ALOGD("_ZN2MK15CCLRetainKernel6RecordEP10_cl_kernel() called");
    return 0;
}

/* Demangled: MK::CCLFlush::~CCLFlush() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK8CCLFlushD2Ev(void) {
    ALOGD("_ZN2MK8CCLFlushD2Ev() called");
    return 0;
}

/* Demangled: MK::CLSymbols::load(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK9CLSymbols4loadERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void) {
    ALOGD("_ZN2MK9CLSymbols4loadERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_mmmjPKP9_cl_eventPS7_ENS_9allocatorISC_EESB_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_mmmjPKP9_cl_eventPS7_ENS_9allocatorISC_EESB_E7destroyEv() called");
    return 0;
}

/* Demangled: MK::CDummyCommand::RegisterUniqueObject(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK13CDummyCommand20RegisterUniqueObjectERNS_7CStreamE(void) {
    ALOGD("_ZN2MK13CDummyCommand20RegisterUniqueObjectERNS_7CStreamE() called");
    return 0;
}

/* Demangled: CmdL_TreeNodeCreate */
extern "C" __attribute__((visibility("default"))) int CmdL_TreeNodeCreate(void) {
    ALOGD("CmdL_TreeNodeCreate() called");
    return 0;
}

/* Demangled: clGetPipeInfo */
extern "C" __attribute__((visibility("default"))) int clGetPipeInfo(void) {
    ALOGD("clGetPipeInfo() called");
    return 0;
}

/* Demangled: MK::CCLRetainMemObject::CCLRetainMemObject(MK::CCLRetainMemObject const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK18CCLRetainMemObjectC1ERKS0_(void) {
    ALOGD("_ZN2MK18CCLRetainMemObjectC1ERKS0_() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_S7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_S7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<unsigned char const*, std::__1::allocator<unsigned char const*> >::__push_back_slow_path<unsigned char const*>(unsigned char const*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPKhNS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIPKhNS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_() called");
    return 0;
}

/* Exported Object: MK::CCLRetainMemObject::ms_kRTTI */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK18CCLRetainMemObject8ms_kRTTIE = NULL;

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::__clone(std::__1::__function::__base<int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_S7_mmmmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEPNS0_6__baseISD_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_S7_mmmmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEPNS0_6__baseISD_EE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, void*, void const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, void*, void const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, unsigned int, void*, void const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejPvPKvmjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queuejPvPKvmjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: MK::CMemoryCopy::CopyConstructTo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK11CMemoryCopy15CopyConstructToEv(void) {
    ALOGD("_ZNK2MK11CMemoryCopy15CopyConstructToEv() called");
    return 0;
}

/* Demangled: clGetKernelInfo */
extern "C" __attribute__((visibility("default"))) int clGetKernelInfo(void) {
    ALOGD("clGetKernelInfo() called");
    return 0;
}

/* Demangled: MK::CCLCreateBuffer::Log(MK::CJsonLog&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK15CCLCreateBuffer3LogERNS_8CJsonLogE(void) {
    ALOGD("_ZNK2MK15CCLCreateBuffer3LogERNS_8CJsonLogE() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIcNS_9allocatorIcEEE6assignIPcEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIcNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIcNS_9allocatorIcEEE6assignIPcEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIcNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void) {
    ALOGD("_ZNSt3__16vectorIcNS_9allocatorIcEEE6assignIPcEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIcNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_() called");
    return 0;
}

/* Demangled: MK::CCLWaitForEvents::~CCLWaitForEvents() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLWaitForEventsD2Ev(void) {
    ALOGD("_ZN2MK16CCLWaitForEventsD2Ev() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<void* (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**, int*), std::__1::allocator<void* (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**, int*)>, void* (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**, int*)>::operator()(_cl_command_queue*&&, _cl_mem*&&, unsigned int&&, unsigned long&&, unsigned long&&, unsigned long&&, unsigned int&&, _cl_event* const*&&, _cl_event**&&, int*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFPvP17_cl_command_queueP7_cl_memjmmmjPKP9_cl_eventPS8_PiENS_9allocatorISE_EESD_EclEOS4_OS6_OjOmSL_SL_SK_OSA_OSB_OSC_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFPvP17_cl_command_queueP7_cl_memjmmmjPKP9_cl_eventPS8_PiENS_9allocatorISE_EESD_EclEOS4_OS6_OjOmSL_SL_SK_OSA_OSB_OSC_() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMapBuffer::Save(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK19CCLEnqueueMapBuffer4SaveERNS_7CStreamE(void) {
    ALOGD("_ZN2MK19CCLEnqueueMapBuffer4SaveERNS_7CStreamE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<int (*)(_cl_context*), std::__1::allocator<int (*)(_cl_context*)>, int (_cl_context*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFiP11_cl_contextENS_9allocatorIS5_EES4_EE = NULL;

/* Demangled: MK::CUpdateBool::Log(MK::CJsonLog&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK11CUpdateBool3LogERNS_8CJsonLogE(void) {
    ALOGD("_ZNK2MK11CUpdateBool3LogERNS_8CJsonLogE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(unsigned int, _cl_event* const*), std::__1::allocator<int (*)(unsigned int, _cl_event* const*)>, int (unsigned int, _cl_event* const*)>::operator()(unsigned int&&, _cl_event* const*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFijPKP9_cl_eventENS_9allocatorIS7_EES6_EclEOjOS5_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFijPKP9_cl_eventENS_9allocatorIS7_EES6_EclEOjOS5_() called");
    return 0;
}

/* Demangled: MK::CCLCreateCommandQueue::Record(_cl_context*, _cl_device_id*, unsigned long, _cl_command_queue*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK21CCLCreateCommandQueue6RecordEP11_cl_contextP13_cl_device_idmP17_cl_command_queue(void) {
    ALOGD("_ZN2MK21CCLCreateCommandQueue6RecordEP11_cl_contextP13_cl_device_idmP17_cl_command_queue() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, void const*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, void const*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, void const*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPKvmmmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPKvmmmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7destroyEv() called");
    return 0;
}

/* Demangled: MK::clSVMAlloc(_cl_context*, unsigned long, unsigned long, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK10clSVMAllocEP11_cl_contextmmj(void) {
    ALOGD("_ZN2MK10clSVMAllocEP11_cl_contextmmj() called");
    return 0;
}

/* Demangled: clGetProgramBuildInfo */
extern "C" __attribute__((visibility("default"))) int clGetProgramBuildInfo(void) {
    ALOGD("clGetProgramBuildInfo() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, MK::CObject* (*)(MK::CStream&)>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, MK::CObject* (*)(MK::CStream&)>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, MK::CObject* (*)(MK::CStream&)> > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPFPN2MK7CObjectERNS8_7CStreamEEEENS_19__map_value_compareIS7_SF_NS_4lessIS7_EELb1EEENS5_ISF_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISQ_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPFPN2MK7CObjectERNS8_7CStreamEEEENS_19__map_value_compareIS7_SF_NS_4lessIS7_EELb1EEENS5_ISF_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISQ_EERKT_() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMarkerWithWaitList::Log(MK::CJsonLog&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK28CCLEnqueueMarkerWithWaitList3LogERNS_8CJsonLogE(void) {
    ALOGD("_ZNK2MK28CCLEnqueueMarkerWithWaitList3LogERNS_8CJsonLogE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, unsigned int, unsigned int, long const*, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, unsigned int, unsigned int, long const*, int*)>, _cl_mem* (_cl_context*, unsigned long, unsigned int, unsigned int, long const*, int*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmjjPKlPiENS_9allocatorISA_EES9_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmjjPKlPiENS_9allocatorISA_EES9_E7__cloneEv() called");
    return 0;
}

/* Demangled: MK::CDummyCommand::GetDiskUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK13CDummyCommand11GetDiskUsedEv(void) {
    ALOGD("_ZNK2MK13CDummyCommand11GetDiskUsedEv() called");
    return 0;
}

/* Demangled: MK::CCLReleaseCommandQueue::GetDiskUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK22CCLReleaseCommandQueue11GetDiskUsedEv(void) {
    ALOGD("_ZNK2MK22CCLReleaseCommandQueue11GetDiskUsedEv() called");
    return 0;
}

/* Demangled: MKProgram_AttachCLCreateImage */
extern "C" __attribute__((visibility("default"))) int MKProgram_AttachCLCreateImage(void) {
    ALOGD("MKProgram_AttachCLCreateImage() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_program*), std::__1::allocator<int (*)(_cl_program*)>, int (_cl_program*)>::__clone(std::__1::__function::__base<int (_cl_program*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP11_cl_programENS_9allocatorIS5_EES4_E7__cloneEPNS0_6__baseIS4_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP11_cl_programENS_9allocatorIS5_EES4_E7__cloneEPNS0_6__baseIS4_EE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, unsigned int, _cl_event* const*, _cl_event**)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuejPKP9_cl_eventPS5_ENS_9allocatorISA_EES9_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP17_cl_command_queuejPKP9_cl_eventPS5_ENS_9allocatorISA_EES9_E7__cloneEv() called");
    return 0;
}

/* Demangled: MK::CCLCreateKernelsInProgram::CCLCreateKernelsInProgram(MK::CCLCreateKernelsInProgram const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK25CCLCreateKernelsInProgramC1ERKS0_(void) {
    ALOGD("_ZN2MK25CCLCreateKernelsInProgramC1ERKS0_() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMarker::Save(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLEnqueueMarker4SaveERNS_7CStreamE(void) {
    ALOGD("_ZN2MK16CCLEnqueueMarker4SaveERNS_7CStreamE() called");
    return 0;
}

/* Exported Object: vtable for MK::CBool */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK5CBoolE = NULL;

/* Demangled: clEnqueueWriteBuffer */
extern "C" __attribute__((visibility("default"))) int clEnqueueWriteBuffer(void) {
    ALOGD("clEnqueueWriteBuffer() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueReadBuffer::Load(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK20CCLEnqueueReadBuffer4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK20CCLEnqueueReadBuffer4LoadERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_program* (*)(_cl_context*, unsigned int, char const**, unsigned long const*, int*), std::__1::allocator<_cl_program* (*)(_cl_context*, unsigned int, char const**, unsigned long const*, int*)>, _cl_program* (_cl_context*, unsigned int, char const**, unsigned long const*, int*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPPKcPKmPiENS_9allocatorISD_EESC_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPPKcPKmPiENS_9allocatorISD_EESC_E7__cloneEv() called");
    return 0;
}

/* Demangled: MKStream_Insert */
extern "C" __attribute__((visibility("default"))) int MKStream_Insert(void) {
    ALOGD("MKStream_Insert() called");
    return 0;
}

/* Demangled: MK::CCLCreateProgramWithBinary::CopyConstructTo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK26CCLCreateProgramWithBinary15CopyConstructToEv(void) {
    ALOGD("_ZNK2MK26CCLCreateProgramWithBinary15CopyConstructToEv() called");
    return 0;
}

/* Demangled: MK::CMemoryCopy::Load(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CMemoryCopy4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK11CMemoryCopy4LoadERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMemoryCopy::Run(MKProgramType, MK::CContextLocal*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK20CCLEnqueueMemoryCopy3RunE13MKProgramTypePNS_13CContextLocalE(void) {
    ALOGD("_ZN2MK20CCLEnqueueMemoryCopy3RunE13MKProgramTypePNS_13CContextLocalE() called");
    return 0;
}

/* Demangled: MKProgram_AttachCLReleaseCommandQueue */
extern "C" __attribute__((visibility("default"))) int MKProgram_AttachCLReleaseCommandQueue(void) {
    ALOGD("MKProgram_AttachCLReleaseCommandQueue() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, void*, unsigned int, _cl_event* const*, _cl_event**)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPvjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPvjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMarkerWithWaitList::Run(MKProgramType, MK::CContextLocal*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK28CCLEnqueueMarkerWithWaitList3RunE13MKProgramTypePNS_13CContextLocalE(void) {
    ALOGD("_ZN2MK28CCLEnqueueMarkerWithWaitList3RunE13MKProgramTypePNS_13CContextLocalE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**)>::__clone(std::__1::__function::__base<int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjmmPKvjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEPNS0_6__baseISD_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjmmPKvjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEPNS0_6__baseISD_EE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<_cl_kernel* (*)(_cl_program*, char const*, int*), std::__1::allocator<_cl_kernel* (*)(_cl_program*, char const*, int*)>, _cl_kernel* (_cl_program*, char const*, int*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFP10_cl_kernelP11_cl_programPKcPiENS_9allocatorISA_EES9_EE = NULL;

/* Demangled: MKProgram_AttachInputTensor */
extern "C" __attribute__((visibility("default"))) int MKProgram_AttachInputTensor(void) {
    ALOGD("MKProgram_AttachInputTensor() called");
    return 0;
}

/* Demangled: MKProgram_Create */
extern "C" __attribute__((visibility("default"))) int MKProgram_Create(void) {
    ALOGD("MKProgram_Create() called");
    return 0;
}

/* Exported Object: vtable for MK::CProfileDataJob */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK15CProfileDataJobE = NULL;

/* Demangled: MK::CContextTls::GetInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CContextTls11GetInstanceEv(void) {
    ALOGD("_ZN2MK11CContextTls11GetInstanceEv() called");
    return 0;
}

/* Demangled: MK::CCLCreateImage::CCLCreateImage(MK::CCLCreateImage const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14CCLCreateImageC2ERKS0_(void) {
    ALOGD("_ZN2MK14CCLCreateImageC2ERKS0_() called");
    return 0;
}

/* Demangled: MK::CCLRetainContext::RegisterFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLRetainContext15RegisterFactoryEv(void) {
    ALOGD("_ZN2MK16CCLRetainContext15RegisterFactoryEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__emplace_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE24__emplace_back_slow_pathIJRS6_EEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE24__emplace_back_slow_pathIJRS6_EEEvDpOT_() called");
    return 0;
}

/* Demangled: CmdL_CheckDriverCompatibility */
extern "C" __attribute__((visibility("default"))) int CmdL_CheckDriverCompatibility(void) {
    ALOGD("CmdL_CheckDriverCompatibility() called");
    return 0;
}

/* Demangled: clRetainKernel */
extern "C" __attribute__((visibility("default"))) int clRetainKernel(void) {
    ALOGD("clRetainKernel() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: MK::CCLSetKernelArg::Run(MKProgramType, MK::CContextLocal*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLSetKernelArg3RunE13MKProgramTypePNS_13CContextLocalE(void) {
    ALOGD("_ZN2MK15CCLSetKernelArg3RunE13MKProgramTypePNS_13CContextLocalE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_event*), std::__1::allocator<int (*)(_cl_event*)>, int (_cl_event*)>::__clone(std::__1::__function::__base<int (_cl_event*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP9_cl_eventENS_9allocatorIS5_EES4_E7__cloneEPNS0_6__baseIS4_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP9_cl_eventENS_9allocatorIS5_EES4_E7__cloneEPNS0_6__baseIS4_EE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<int (*)(_cl_sampler*), std::__1::allocator<int (*)(_cl_sampler*)>, int (_cl_sampler*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFiP11_cl_samplerENS_9allocatorIS5_EES4_EE = NULL;

/* Demangled: MK::CCLEnqueueReadBuffer::Run(MKProgramType, MK::CContextLocal*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK20CCLEnqueueReadBuffer3RunE13MKProgramTypePNS_13CContextLocalE(void) {
    ALOGD("_ZN2MK20CCLEnqueueReadBuffer3RunE13MKProgramTypePNS_13CContextLocalE() called");
    return 0;
}

/* Demangled: MK::CJsonLog::LeaveObjectScope() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK8CJsonLog16LeaveObjectScopeEv(void) {
    ALOGD("_ZN2MK8CJsonLog16LeaveObjectScopeEv() called");
    return 0;
}

/* Demangled: MK::CObject::GetRTTI() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK7CObject7GetRTTIEv(void) {
    ALOGD("_ZNK2MK7CObject7GetRTTIEv() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMarkerWithWaitList::Load(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK28CCLEnqueueMarkerWithWaitList4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK28CCLEnqueueMarkerWithWaitList4LoadERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Exported Object: MK::CCLEnqueueCopyBufferToImage::ms_kRTTI */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK27CCLEnqueueCopyBufferToImage8ms_kRTTIE = NULL;

/* Demangled: MK::CCLReleaseEvent::~CCLReleaseEvent() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLReleaseEventD2Ev(void) {
    ALOGD("_ZN2MK15CCLReleaseEventD2Ev() called");
    return 0;
}

/* Demangled: MK::CObject::Save(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK7CObject4SaveERNS_7CStreamE(void) {
    ALOGD("_ZN2MK7CObject4SaveERNS_7CStreamE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<_cl_command_queue* (*)(_cl_context*, _cl_device_id*, unsigned long, int*), std::__1::allocator<_cl_command_queue* (*)(_cl_context*, _cl_device_id*, unsigned long, int*)>, _cl_command_queue* (_cl_context*, _cl_device_id*, unsigned long, int*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFP17_cl_command_queueP11_cl_contextP13_cl_device_idmPiENS_9allocatorISA_EES9_EE = NULL;

/* Demangled: std::__1::__split_buffer<MK::CPointer<MK::CJob>*, std::__1::allocator<MK::CPointer<MK::CJob>*> >::push_back(MK::CPointer<MK::CJob>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN2MK8CPointerINS1_4CJobEEENS_9allocatorIS5_EEE9push_backEOS5_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN2MK8CPointerINS1_4CJobEEENS_9allocatorIS5_EEE9push_backEOS5_() called");
    return 0;
}

/* Demangled: CmdL_AttachclReleaseMemObject */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclReleaseMemObject(void) {
    ALOGD("CmdL_AttachclReleaseMemObject() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMemoryCopy::CopyConstructTo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK20CCLEnqueueMemoryCopy15CopyConstructToEv(void) {
    ALOGD("_ZNK2MK20CCLEnqueueMemoryCopy15CopyConstructToEv() called");
    return 0;
}

/* Demangled: MKProgram_AttachCLWaitForEvents */
extern "C" __attribute__((visibility("default"))) int MKProgram_AttachCLWaitForEvents(void) {
    ALOGD("MKProgram_AttachCLWaitForEvents() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<void (*)(_cl_context*, void*), std::__1::allocator<void (*)(_cl_context*, void*)>, void (_cl_context*, void*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFvP11_cl_contextPvENS_9allocatorIS6_EES5_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFvP11_cl_contextPvENS_9allocatorIS6_EES5_E7__cloneEv() called");
    return 0;
}

/* Demangled: MK::CStream::SaveToBuffer(char*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK7CStream12SaveToBufferEPci(void) {
    ALOGD("_ZN2MK7CStream12SaveToBufferEPci() called");
    return 0;
}

/* Demangled: MK::clCreateSubBuffer(_cl_mem*, unsigned long, unsigned int, void const*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK17clCreateSubBufferEP7_cl_memmjPKvPi(void) {
    ALOGD("_ZN2MK17clCreateSubBufferEP7_cl_memmjPKvPi() called");
    return 0;
}

/* Demangled: MK::CCLRetainMemObject::GetMemoryUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK18CCLRetainMemObject13GetMemoryUsedEv(void) {
    ALOGD("_ZNK2MK18CCLRetainMemObject13GetMemoryUsedEv() called");
    return 0;
}

/* Demangled: clSetCommandQueueProperty(_cl_command_queue*, unsigned long, unsigned int, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _Z25clSetCommandQueuePropertyP17_cl_command_queuemjPm(void) {
    ALOGD("_Z25clSetCommandQueuePropertyP17_cl_command_queuemjPm() called");
    return 0;
}

/* Demangled: clSVMAlloc */
extern "C" __attribute__((visibility("default"))) int clSVMAlloc(void) {
    ALOGD("clSVMAlloc() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(unsigned int, _cl_platform_id**, unsigned int*), std::__1::allocator<int (*)(unsigned int, _cl_platform_id**, unsigned int*)>, int (unsigned int, _cl_platform_id**, unsigned int*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFijPP15_cl_platform_idPjENS_9allocatorIS7_EES6_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFijPP15_cl_platform_idPjENS_9allocatorIS7_EES6_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: MK::CProgram::RegisterFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK8CProgram15RegisterFactoryEv(void) {
    ALOGD("_ZN2MK8CProgram15RegisterFactoryEv() called");
    return 0;
}

/* Demangled: MK::clImportMemoryARM(_cl_context*, unsigned long, long const*, void*, unsigned long, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK17clImportMemoryARMEP11_cl_contextmPKlPvmPi(void) {
    ALOGD("_ZN2MK17clImportMemoryARMEP11_cl_contextmPKlPvmPi() called");
    return 0;
}

/* Demangled: MK::clEnqueueMarkerWithWaitList(_cl_command_queue*, unsigned int, _cl_event* const*, _cl_event**) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK27clEnqueueMarkerWithWaitListEP17_cl_command_queuejPKP9_cl_eventPS3_(void) {
    ALOGD("_ZN2MK27clEnqueueMarkerWithWaitListEP17_cl_command_queuejPKP9_cl_eventPS3_() called");
    return 0;
}

/* Demangled: MK::CCLReleaseCommandQueue::RegisterUniqueObject(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK22CCLReleaseCommandQueue20RegisterUniqueObjectERNS_7CStreamE(void) {
    ALOGD("_ZN2MK22CCLReleaseCommandQueue20RegisterUniqueObjectERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MKProgram_AttachCLEnqueueMarkerWithWaitList */
extern "C" __attribute__((visibility("default"))) int MKProgram_AttachCLEnqueueMarkerWithWaitList(void) {
    ALOGD("MKProgram_AttachCLEnqueueMarkerWithWaitList() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, void*, unsigned int, _cl_event* const*, _cl_event**)>::operator()(_cl_command_queue*&&, _cl_mem*&&, void*&&, unsigned int&&, _cl_event* const*&&, _cl_event**&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPvjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_EclEOS3_OS5_OS6_OjOSA_OSB_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPvjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_EclEOS3_OS5_OS6_OjOSA_OSB_() called");
    return 0;
}

/* Demangled: MK::CCLBuildProgram::RegisterFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLBuildProgram15RegisterFactoryEv(void) {
    ALOGD("_ZN2MK15CCLBuildProgram15RegisterFactoryEv() called");
    return 0;
}

/* Demangled: MK::CCLRetainEvent::GetMemoryUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK14CCLRetainEvent13GetMemoryUsedEv(void) {
    ALOGD("_ZNK2MK14CCLRetainEvent13GetMemoryUsedEv() called");
    return 0;
}

/* Demangled: MK::CContextGlobal::GetProgramBuildOption(_cl_program*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14CContextGlobal21GetProgramBuildOptionEP11_cl_program(void) {
    ALOGD("_ZN2MK14CContextGlobal21GetProgramBuildOptionEP11_cl_program() called");
    return 0;
}

/* Demangled: MK::CJsonLog::Log(char const*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK8CJsonLog3LogEPKcRKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void) {
    ALOGD("_ZN2MK8CJsonLog3LogEPKcRKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: MKProgram_CheckInputTensors */
extern "C" __attribute__((visibility("default"))) int MKProgram_CheckInputTensors(void) {
    ALOGD("MKProgram_CheckInputTensors() called");
    return 0;
}

/* Demangled: CmdL_GetEnable */
extern "C" __attribute__((visibility("default"))) int CmdL_GetEnable(void) {
    ALOGD("CmdL_GetEnable() called");
    return 0;
}

/* Demangled: CmdL_TreeNodeAttachHostPtr */
extern "C" __attribute__((visibility("default"))) int CmdL_TreeNodeAttachHostPtr(void) {
    ALOGD("CmdL_TreeNodeAttachHostPtr() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueWriteBuffer::CCLEnqueueWriteBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK21CCLEnqueueWriteBufferC1Ev(void) {
    ALOGD("_ZN2MK21CCLEnqueueWriteBufferC1Ev() called");
    return 0;
}

/* Demangled: MK::CCLPrepareMemoryCopy::CCLPrepareMemoryCopy(MK::CCLPrepareMemoryCopy const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK20CCLPrepareMemoryCopyC1ERKS0_(void) {
    ALOGD("_ZN2MK20CCLPrepareMemoryCopyC1ERKS0_() called");
    return 0;
}

/* Demangled: MK::CCLReleaseKernel::GetDiskUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK16CCLReleaseKernel11GetDiskUsedEv(void) {
    ALOGD("_ZNK2MK16CCLReleaseKernel11GetDiskUsedEv() called");
    return 0;
}

/* Exported Object: MK::CCLSVMFree::ms_kRTTI */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK10CCLSVMFree8ms_kRTTIE = NULL;

/* Demangled: std::__1::__function::__func<_cl_command_queue* (*)(_cl_context*, _cl_device_id*, unsigned long const*, int*), std::__1::allocator<_cl_command_queue* (*)(_cl_context*, _cl_device_id*, unsigned long const*, int*)>, _cl_command_queue* (_cl_context*, _cl_device_id*, unsigned long const*, int*)>::operator()(_cl_context*&&, _cl_device_id*&&, unsigned long const*&&, int*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFP17_cl_command_queueP11_cl_contextP13_cl_device_idPKmPiENS_9allocatorISC_EESB_EclEOS5_OS7_OS9_OSA_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFP17_cl_command_queueP11_cl_contextP13_cl_device_idPKmPiENS_9allocatorISC_EESB_EclEOS5_OS7_OS9_OSA_() called");
    return 0;
}

/* Demangled: MK::clGetSamplerInfo(_cl_sampler*, unsigned int, unsigned long, void*, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16clGetSamplerInfoEP11_cl_samplerjmPvPm(void) {
    ALOGD("_ZN2MK16clGetSamplerInfoEP11_cl_samplerjmPvPm() called");
    return 0;
}

/* Demangled: MK::CCLCreateCommandQueue::CCLCreateCommandQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK21CCLCreateCommandQueueC1Ev(void) {
    ALOGD("_ZN2MK21CCLCreateCommandQueueC1Ev() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, void const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, void const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, void const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPKvPKmS9_jPKP9_cl_eventPSB_ENS_9allocatorISG_EESF_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPKvPKmS9_jPKP9_cl_eventPSB_ENS_9allocatorISG_EESF_E7__cloneEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_kernel*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_kernel*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_kernel*, unsigned int, _cl_event* const*, _cl_event**)>::operator()(_cl_command_queue*&&, _cl_kernel*&&, unsigned int&&, _cl_event* const*&&, _cl_event**&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP10_cl_kerneljPKP9_cl_eventPS7_ENS_9allocatorISC_EESB_EclEOS3_OS5_OjOS9_OSA_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queueP10_cl_kerneljPKP9_cl_eventPS7_ENS_9allocatorISC_EESB_EclEOS3_OS5_OjOS9_OSA_() called");
    return 0;
}

/* Demangled: MK::clCreateImage(_cl_context*, unsigned long, _cl_image_format const*, _cl_image_desc const*, void*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK13clCreateImageEP11_cl_contextmPK16_cl_image_formatPK14_cl_image_descPvPi(void) {
    ALOGD("_ZN2MK13clCreateImageEP11_cl_contextmPK16_cl_image_formatPK14_cl_image_descPvPi() called");
    return 0;
}

/* Demangled: clFinish */
extern "C" __attribute__((visibility("default"))) int clFinish(void) {
    ALOGD("clFinish() called");
    return 0;
}

/* Demangled: MK::CCLCreateContext::CopyConstructTo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK16CCLCreateContext15CopyConstructToEv(void) {
    ALOGD("_ZNK2MK16CCLCreateContext15CopyConstructToEv() called");
    return 0;
}

/* Demangled: MK::CCLReleaseContext::Log(MK::CJsonLog&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK17CCLReleaseContext3LogERNS_8CJsonLogE(void) {
    ALOGD("_ZNK2MK17CCLReleaseContext3LogERNS_8CJsonLogE() called");
    return 0;
}

/* Demangled: MK::CCLRetainMemObject::CopyConstructTo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK18CCLRetainMemObject15CopyConstructToEv(void) {
    ALOGD("_ZNK2MK18CCLRetainMemObject15CopyConstructToEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_kernel*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_kernel*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_kernel*, unsigned int, unsigned long, void*, unsigned long*)>::operator()(_cl_kernel*&&, unsigned int&&, unsigned long&&, void*&&, unsigned long*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP10_cl_kerneljmPvPmENS_9allocatorIS7_EES6_EclEOS3_OjOmOS4_OS5_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP10_cl_kerneljmPvPmENS_9allocatorIS7_EES6_EclEOS3_OjOmOS4_OS5_() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_sampler*), std::__1::allocator<int (*)(_cl_sampler*)>, int (_cl_sampler*)>::operator()(_cl_sampler*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP11_cl_samplerENS_9allocatorIS5_EES4_EclEOS3_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP11_cl_samplerENS_9allocatorIS5_EES4_EclEOS3_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<_cl_sampler* (*)(_cl_context*, unsigned long const*, int*), std::__1::allocator<_cl_sampler* (*)(_cl_context*, unsigned long const*, int*)>, _cl_sampler* (_cl_context*, unsigned long const*, int*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFP11_cl_samplerP11_cl_contextPKmPiENS_9allocatorISA_EES9_EE = NULL;

/* Demangled: clReleaseKernel */
extern "C" __attribute__((visibility("default"))) int clReleaseKernel(void) {
    ALOGD("clReleaseKernel() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_platform_id*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_platform_id*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_platform_id*, unsigned int, unsigned long, void*, unsigned long*)>::__clone(std::__1::__function::__base<int (_cl_platform_id*, unsigned int, unsigned long, void*, unsigned long*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP15_cl_platform_idjmPvPmENS_9allocatorIS7_EES6_E7__cloneEPNS0_6__baseIS6_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP15_cl_platform_idjmPvPmENS_9allocatorIS7_EES6_E7__cloneEPNS0_6__baseIS6_EE() called");
    return 0;
}

/* Demangled: MK::CCLCreateKernelsInProgram::CCLCreateKernelsInProgram() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK25CCLCreateKernelsInProgramC1Ev(void) {
    ALOGD("_ZN2MK25CCLCreateKernelsInProgramC1Ev() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueWriteBuffer::~CCLEnqueueWriteBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK21CCLEnqueueWriteBufferD0Ev(void) {
    ALOGD("_ZN2MK21CCLEnqueueWriteBufferD0Ev() called");
    return 0;
}

/* Demangled: MK::CCLReleaseContext::Run(MKProgramType, MK::CContextLocal*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK17CCLReleaseContext3RunE13MKProgramTypePNS_13CContextLocalE(void) {
    ALOGD("_ZN2MK17CCLReleaseContext3RunE13MKProgramTypePNS_13CContextLocalE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_device_id*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP13_cl_device_idjmPvPmENS_9allocatorIS7_EES6_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP13_cl_device_idjmPvPmENS_9allocatorIS7_EES6_E7__cloneEv() called");
    return 0;
}

/* Demangled: MK::clCreateUserEvent(_cl_context*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK17clCreateUserEventEP11_cl_contextPi(void) {
    ALOGD("_ZN2MK17clCreateUserEventEP11_cl_contextPi() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<std::__1::function<int (unsigned long, void*)>, std::__1::allocator<std::__1::function<int (unsigned long, void*)> >, int (unsigned int, void*)>::operator()(unsigned int&&, void*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcINS_8functionIFimPvEEENS_9allocatorIS5_EEFijS3_EEclEOjOS3_(void) {
    ALOGD("_ZNSt3__110__function6__funcINS_8functionIFimPvEEENS_9allocatorIS5_EEFijS3_EEclEOjOS3_() called");
    return 0;
}

/* Demangled: MK::CCLCreateCommandQueue::~CCLCreateCommandQueue() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK21CCLCreateCommandQueueD0Ev(void) {
    ALOGD("_ZN2MK21CCLCreateCommandQueueD0Ev() called");
    return 0;
}

/* Demangled: MK::CCLCreateProgramWithSource::Link(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK26CCLCreateProgramWithSource4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK26CCLCreateProgramWithSource4LinkERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: MK::CCLFlush::CCLFlush() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK8CCLFlushC2Ev(void) {
    ALOGD("_ZN2MK8CCLFlushC2Ev() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_platform_id*), std::__1::allocator<int (*)(_cl_platform_id*)>, int (_cl_platform_id*)>::__clone(std::__1::__function::__base<int (_cl_platform_id*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP15_cl_platform_idENS_9allocatorIS5_EES4_E7__cloneEPNS0_6__baseIS4_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP15_cl_platform_idENS_9allocatorIS5_EES4_E7__cloneEPNS0_6__baseIS4_EE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_context*), std::__1::allocator<int (*)(_cl_context*)>, int (_cl_context*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP11_cl_contextENS_9allocatorIS5_EES4_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP11_cl_contextENS_9allocatorIS5_EES4_E7destroyEv() called");
    return 0;
}

/* Exported Object: MK::CVersion::LENGTH */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK8CVersion6LENGTHE = NULL;

/* Demangled: clEnqueueWaitForEvents */
extern "C" __attribute__((visibility("default"))) int clEnqueueWaitForEvents(void) {
    ALOGD("clEnqueueWaitForEvents() called");
    return 0;
}

/* Demangled: clSetKernelArg */
extern "C" __attribute__((visibility("default"))) int clSetKernelArg(void) {
    ALOGD("clSetKernelArg() called");
    return 0;
}

/* Exported Object: MK::CCLSetKernelArg::ms_kRTTI */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK15CCLSetKernelArg8ms_kRTTIE = NULL;

/* Demangled: MK::CDummyCommand::CDummyCommand(MK::CDummyCommand const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK13CDummyCommandC2ERKS0_(void) {
    ALOGD("_ZN2MK13CDummyCommandC2ERKS0_() called");
    return 0;
}

/* Demangled: MK::COutputTensors::RegisterFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14COutputTensors15RegisterFactoryEv(void) {
    ALOGD("_ZN2MK14COutputTensors15RegisterFactoryEv() called");
    return 0;
}

/* Demangled: MK::clEnqueueFillImage(_cl_command_queue*, _cl_mem*, void const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK18clEnqueueFillImageEP17_cl_command_queueP7_cl_memPKvPKmS7_jPKP9_cl_eventPS9_(void) {
    ALOGD("_ZN2MK18clEnqueueFillImageEP17_cl_command_queueP7_cl_memPKvPKmS7_jPKP9_cl_eventPS9_() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueCopyBufferToImage::GetMemoryUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK27CCLEnqueueCopyBufferToImage13GetMemoryUsedEv(void) {
    ALOGD("_ZNK2MK27CCLEnqueueCopyBufferToImage13GetMemoryUsedEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>::operator()(_cl_command_queue*&&, _cl_mem*&&, _cl_mem*&&, unsigned long&&, unsigned long const*&&, unsigned long const*&&, unsigned int&&, _cl_event* const*&&, _cl_event**&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_mPKmS7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EclEOS3_OS5_SJ_OmOS7_SL_OjOSB_OSC_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_mPKmS7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EclEOS3_OS5_SJ_OmOS7_SL_OjOSB_OSC_() called");
    return 0;
}

/* Demangled: CmdL_AttachclRetainDevice */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclRetainDevice(void) {
    ALOGD("CmdL_AttachclRetainDevice() called");
    return 0;
}

/* Demangled: MK::CCLCreateKernelsInProgram::~CCLCreateKernelsInProgram() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK25CCLCreateKernelsInProgramD0Ev(void) {
    ALOGD("_ZN2MK25CCLCreateKernelsInProgramD0Ev() called");
    return 0;
}

/* Demangled: MK::CMemoryCopy::GetMemoryUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK11CMemoryCopy13GetMemoryUsedEv(void) {
    ALOGD("_ZNK2MK11CMemoryCopy13GetMemoryUsedEv() called");
    return 0;
}

/* Demangled: MK::clCreateImage2D(_cl_context*, unsigned long, _cl_image_format const*, unsigned long, unsigned long, unsigned long, void*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15clCreateImage2DEP11_cl_contextmPK16_cl_image_formatmmmPvPi(void) {
    ALOGD("_ZN2MK15clCreateImage2DEP11_cl_contextmPK16_cl_image_formatmmmPvPi() called");
    return 0;
}

/* Demangled: MK::CCLCreateKernel::Log(MK::CJsonLog&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK15CCLCreateKernel3LogERNS_8CJsonLogE(void) {
    ALOGD("_ZNK2MK15CCLCreateKernel3LogERNS_8CJsonLogE() called");
    return 0;
}

/* Demangled: MK::CCLFlush::~CCLFlush() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK8CCLFlushD1Ev(void) {
    ALOGD("_ZN2MK8CCLFlushD1Ev() called");
    return 0;
}

/* Demangled: MK::CCLReleaseEvent::RegisterUniqueObject(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLReleaseEvent20RegisterUniqueObjectERNS_7CStreamE(void) {
    ALOGD("_ZN2MK15CCLReleaseEvent20RegisterUniqueObjectERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CCLWaitForEvents::CCLWaitForEvents() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLWaitForEventsC2Ev(void) {
    ALOGD("_ZN2MK16CCLWaitForEventsC2Ev() called");
    return 0;
}

/* Demangled: MK::CObject::CopyConstructTo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK7CObject15CopyConstructToEv(void) {
    ALOGD("_ZNK2MK7CObject15CopyConstructToEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejmPvPmENS_9allocatorIS7_EES6_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queuejmPvPmENS_9allocatorIS7_EES6_E7destroyEv() called");
    return 0;
}

/* Demangled: CmdL_GetBufferSize */
extern "C" __attribute__((visibility("default"))) int CmdL_GetBufferSize(void) {
    ALOGD("CmdL_GetBufferSize() called");
    return 0;
}

/* Demangled: MK::CJsonLog::Log(char const*, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK8CJsonLog3LogEPKcRKNSt3__16vectorINS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEENS8_ISA_EEEE(void) {
    ALOGD("_ZN2MK8CJsonLog3LogEPKcRKNSt3__16vectorINS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEENS8_ISA_EEEE() called");
    return 0;
}

/* Demangled: MK::clRetainMemObject(_cl_mem*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK17clRetainMemObjectEP7_cl_mem(void) {
    ALOGD("_ZN2MK17clRetainMemObjectEP7_cl_mem() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__emplace_back_slow_path<char (&) [64]>(char (&) [64]) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE24__emplace_back_slow_pathIJRA64_cEEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE24__emplace_back_slow_pathIJRA64_cEEEvDpOT_() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_S7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_S7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7destroyEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, unsigned int, _cl_event* const*, _cl_event**)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejPKP9_cl_eventPS5_ENS_9allocatorISA_EES9_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queuejPKP9_cl_eventPS5_ENS_9allocatorISA_EES9_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(unsigned int, _cl_platform_id**, unsigned int*), std::__1::allocator<int (*)(unsigned int, _cl_platform_id**, unsigned int*)>, int (unsigned int, _cl_platform_id**, unsigned int*)>::operator()(unsigned int&&, _cl_platform_id**&&, unsigned int*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFijPP15_cl_platform_idPjENS_9allocatorIS7_EES6_EclEOjOS4_OS5_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFijPP15_cl_platform_idPjENS_9allocatorIS7_EES6_EclEOjOS4_OS5_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<void (*)(int, void*), std::__1::allocator<void (*)(int, void*)>, void (int, void*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFviPvENS_9allocatorIS4_EES3_EE = NULL;

/* Demangled: MK::clReleaseProgram(_cl_program*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16clReleaseProgramEP11_cl_program(void) {
    ALOGD("_ZN2MK16clReleaseProgramEP11_cl_program() called");
    return 0;
}

/* Demangled: handleFlushFinishReal(_cl_command_queue*, int) */
extern "C" __attribute__((visibility("default"))) int _Z21handleFlushFinishRealP17_cl_command_queuei(void) {
    ALOGD("_Z21handleFlushFinishRealP17_cl_command_queuei() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<bool*, std::__1::allocator<bool*>&>::push_back(bool*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPbRNS_9allocatorIS1_EEE9push_backEOS1_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPbRNS_9allocatorIS1_EEE9push_backEOS1_() called");
    return 0;
}

/* Demangled: CmdL_SaveToFile */
extern "C" __attribute__((visibility("default"))) int CmdL_SaveToFile(void) {
    ALOGD("CmdL_SaveToFile() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMarkerWithWaitList::Save(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK28CCLEnqueueMarkerWithWaitList4SaveERNS_7CStreamE(void) {
    ALOGD("_ZN2MK28CCLEnqueueMarkerWithWaitList4SaveERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMemoryCopy::Record(_cl_command_queue*, _cl_kernel*, unsigned int, _cl_mem*, _cl_mem*, unsigned int, unsigned int*, unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK20CCLEnqueueMemoryCopy6RecordEP17_cl_command_queueP10_cl_kerneljP7_cl_memS6_jPjS7_S7_(void) {
    ALOGD("_ZN2MK20CCLEnqueueMemoryCopy6RecordEP17_cl_command_queueP10_cl_kerneljP7_cl_memS6_jPjS7_S7_() called");
    return 0;
}

/* Demangled: MK::CCLWaitForEvents::~CCLWaitForEvents() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLWaitForEventsD1Ev(void) {
    ALOGD("_ZN2MK16CCLWaitForEventsD1Ev() called");
    return 0;
}

/* Demangled: MK::CDynamicData::RegisterUniqueObject(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK12CDynamicData20RegisterUniqueObjectERNS_7CStreamE(void) {
    ALOGD("_ZN2MK12CDynamicData20RegisterUniqueObjectERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CStaticData::CopyConstructTo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK11CStaticData15CopyConstructToEv(void) {
    ALOGD("_ZNK2MK11CStaticData15CopyConstructToEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<long, std::__1::allocator<long> >::__push_back_slow_path<long>(long&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIlNS_9allocatorIlEEE21__push_back_slow_pathIlEEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIlNS_9allocatorIlEEE21__push_back_slow_pathIlEEvOT_() called");
    return 0;
}

/* Demangled: MK::CCLBuildProgram::CCLBuildProgram(MK::CCLBuildProgram const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLBuildProgramC2ERKS0_(void) {
    ALOGD("_ZN2MK15CCLBuildProgramC2ERKS0_() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMapBuffer::~CCLEnqueueMapBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK19CCLEnqueueMapBufferD2Ev(void) {
    ALOGD("_ZN2MK19CCLEnqueueMapBufferD2Ev() called");
    return 0;
}

/* Exported Object: MK::CCLReleaseCommandQueue::ms_kRTTI */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK22CCLReleaseCommandQueue8ms_kRTTIE = NULL;

/* Exported Object: vtable for std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, long const*, void*, unsigned long, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, long const*, void*, unsigned long, int*)>, _cl_mem* (_cl_context*, unsigned long, long const*, void*, unsigned long, int*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPKlPvmPiENS_9allocatorISB_EESA_EE = NULL;

/* Demangled: clSetKernelArgSVMPointer */
extern "C" __attribute__((visibility("default"))) int clSetKernelArgSVMPointer(void) {
    ALOGD("clSetKernelArgSVMPointer() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<_cl_kernel*, std::__1::map<int, _cl_mem*, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, _cl_mem*> > > >, std::__1::__map_value_compare<_cl_kernel*, std::__1::__value_type<_cl_kernel*, std::__1::map<int, _cl_mem*, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, _cl_mem*> > > >, std::__1::less<_cl_kernel*>, true>, std::__1::allocator<std::__1::__value_type<_cl_kernel*, std::__1::map<int, _cl_mem*, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, _cl_mem*> > > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<_cl_kernel*, std::__1::map<int, _cl_mem*, std::__1::less<int>, std::__1::allocator<std::__1::pair<int const, _cl_mem*> > > >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeIP10_cl_kernelNS_3mapIiP7_cl_memNS_4lessIiEENS_9allocatorINS_4pairIKiS6_EEEEEEEENS_19__map_value_compareIS3_SF_NS7_IS3_EELb1EEENS9_ISF_EEE7destroyEPNS_11__tree_nodeISF_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeIP10_cl_kernelNS_3mapIiP7_cl_memNS_4lessIiEENS_9allocatorINS_4pairIKiS6_EEEEEEEENS_19__map_value_compareIS3_SF_NS7_IS3_EELb1EEENS9_ISF_EEE7destroyEPNS_11__tree_nodeISF_PvEE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_kernel*), std::__1::allocator<int (*)(_cl_kernel*)>, int (_cl_kernel*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP10_cl_kernelENS_9allocatorIS5_EES4_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP10_cl_kernelENS_9allocatorIS5_EES4_E7__cloneEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_event*, int, void (*)(_cl_event*, int, void*), void*), std::__1::allocator<int (*)(_cl_event*, int, void (*)(_cl_event*, int, void*), void*)>, int (_cl_event*, int, void (*)(_cl_event*, int, void*), void*)>::__clone(std::__1::__function::__base<int (_cl_event*, int, void (*)(_cl_event*, int, void*), void*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP9_cl_eventiPFvS3_iPvES4_ENS_9allocatorIS8_EES7_E7__cloneEPNS0_6__baseIS7_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP9_cl_eventiPFvS3_iPvES4_ENS_9allocatorIS8_EES7_E7__cloneEPNS0_6__baseIS7_EE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_device_id*, long const*, unsigned int, _cl_device_id**, unsigned int*), std::__1::allocator<int (*)(_cl_device_id*, long const*, unsigned int, _cl_device_id**, unsigned int*)>, int (_cl_device_id*, long const*, unsigned int, _cl_device_id**, unsigned int*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP13_cl_device_idPKljPS3_PjENS_9allocatorIS9_EES8_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP13_cl_device_idPKljPS3_PjENS_9allocatorIS9_EES8_E7destroyEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::operator()(_cl_command_queue*&&, unsigned int&&, unsigned long&&, void*&&, unsigned long&&, unsigned int&&, _cl_event* const*&&, _cl_event**&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejmPvmjPKP9_cl_eventPS6_ENS_9allocatorISB_EESA_EclEOS3_OjOmOS4_SH_SG_OS8_OS9_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queuejmPvmjPKP9_cl_eventPS6_ENS_9allocatorISB_EESA_EclEOS3_OjOmOS4_SH_SG_OS8_OS9_() called");
    return 0;
}

/* Demangled: MK::CCLReleaseCommandQueue::Run(MKProgramType, MK::CContextLocal*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK22CCLReleaseCommandQueue3RunE13MKProgramTypePNS_13CContextLocalE(void) {
    ALOGD("_ZN2MK22CCLReleaseCommandQueue3RunE13MKProgramTypePNS_13CContextLocalE() called");
    return 0;
}

/* Exported Object: MK::CCLRetainEvent::ms_kRTTI */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK14CCLRetainEvent8ms_kRTTIE = NULL;

/* Demangled: MK::CCLSetKernelArg::Factory(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLSetKernelArg7FactoryERNS_7CStreamE(void) {
    ALOGD("_ZN2MK15CCLSetKernelArg7FactoryERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CObject::CObject(MK::CObject const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK7CObjectC2ERKS0_(void) {
    ALOGD("_ZN2MK7CObjectC2ERKS0_() called");
    return 0;
}

/* Demangled: clCreateProgramWithSource */
extern "C" __attribute__((visibility("default"))) int clCreateProgramWithSource(void) {
    ALOGD("clCreateProgramWithSource() called");
    return 0;
}

/* Demangled: clSetEventCallback */
extern "C" __attribute__((visibility("default"))) int clSetEventCallback(void) {
    ALOGD("clSetEventCallback() called");
    return 0;
}

/* Demangled: MK::CCLImportMemory::Log(MK::CJsonLog&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK15CCLImportMemory3LogERNS_8CJsonLogE(void) {
    ALOGD("_ZNK2MK15CCLImportMemory3LogERNS_8CJsonLogE() called");
    return 0;
}

/* Demangled: MKProgram_SetOutputHostPtr */
extern "C" __attribute__((visibility("default"))) int MKProgram_SetOutputHostPtr(void) {
    ALOGD("MKProgram_SetOutputHostPtr() called");
    return 0;
}

/* Demangled: clGetMemObjectInfo */
extern "C" __attribute__((visibility("default"))) int clGetMemObjectInfo(void) {
    ALOGD("clGetMemObjectInfo() called");
    return 0;
}

/* Demangled: MK::CCLCreateContext::RegisterFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLCreateContext15RegisterFactoryEv(void) {
    ALOGD("_ZN2MK16CCLCreateContext15RegisterFactoryEv() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMapBuffer::GetMemoryUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK19CCLEnqueueMapBuffer13GetMemoryUsedEv(void) {
    ALOGD("_ZNK2MK19CCLEnqueueMapBuffer13GetMemoryUsedEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<int (*)(_cl_mem*), std::__1::allocator<int (*)(_cl_mem*)>, int (_cl_mem*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFiP7_cl_memENS_9allocatorIS5_EES4_EE = NULL;

/* Demangled: CmdL_AttachclCompileProgram */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclCompileProgram(void) {
    ALOGD("CmdL_AttachclCompileProgram() called");
    return 0;
}

/* Demangled: MK::CCLSVMAlloc::RegisterFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CCLSVMAlloc15RegisterFactoryEv(void) {
    ALOGD("_ZN2MK11CCLSVMAlloc15RegisterFactoryEv() called");
    return 0;
}

/* Demangled: MK::CProgram::ClearCommands() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK8CProgram13ClearCommandsEv(void) {
    ALOGD("_ZN2MK8CProgram13ClearCommandsEv() called");
    return 0;
}

/* Demangled: MK::CContextGlobal::RecordKernelMemObject(_cl_kernel*, int, _cl_mem*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14CContextGlobal21RecordKernelMemObjectEP10_cl_kerneliP7_cl_mem(void) {
    ALOGD("_ZN2MK14CContextGlobal21RecordKernelMemObjectEP10_cl_kerneliP7_cl_mem() called");
    return 0;
}

/* Exported Object: vtable for MK::CCommand */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK8CCommandE = NULL;

/* Demangled: CmdL_AttachclEnqueueMapBuffer */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclEnqueueMapBuffer(void) {
    ALOGD("CmdL_AttachclEnqueueMapBuffer() called");
    return 0;
}

/* Demangled: clEnqueueSVMMap */
extern "C" __attribute__((visibility("default"))) int clEnqueueSVMMap(void) {
    ALOGD("clEnqueueSVMMap() called");
    return 0;
}

/* Demangled: clRetainContext */
extern "C" __attribute__((visibility("default"))) int clRetainContext(void) {
    ALOGD("clRetainContext() called");
    return 0;
}

/* Demangled: MK::CCLProfileJob::CCLProfileJob(MK::CCLProfileJob const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK13CCLProfileJobC1ERKS0_(void) {
    ALOGD("_ZN2MK13CCLProfileJobC1ERKS0_() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE = NULL;

/* Demangled: CmdL_AttachclEnqueueUnmapMemObject */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclEnqueueUnmapMemObject(void) {
    ALOGD("CmdL_AttachclEnqueueUnmapMemObject() called");
    return 0;
}

/* Demangled: MK::CCommand::Save(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK8CCommand4SaveERNS_7CStreamE(void) {
    ALOGD("_ZN2MK8CCommand4SaveERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CCLFlush::Log(MK::CJsonLog&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK8CCLFlush3LogERNS_8CJsonLogE(void) {
    ALOGD("_ZNK2MK8CCLFlush3LogERNS_8CJsonLogE() called");
    return 0;
}

/* Demangled: MK::CCLReleaseEvent::CCLReleaseEvent() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLReleaseEventC2Ev(void) {
    ALOGD("_ZN2MK15CCLReleaseEventC2Ev() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_context* (*)(long const*, unsigned long, void (*)(char const*, void const*, unsigned long, void*), void*, int*), std::__1::allocator<_cl_context* (*)(long const*, unsigned long, void (*)(char const*, void const*, unsigned long, void*), void*, int*)>, _cl_context* (long const*, unsigned long, void (*)(char const*, void const*, unsigned long, void*), void*, int*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFP11_cl_contextPKlmPFvPKcPKvmPvESA_PiENS_9allocatorISF_EESE_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFP11_cl_contextPKlmPFvPKcPKvmPvESA_PiENS_9allocatorISF_EESE_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: MK::COutputTensors::COutputTensors(MK::COutputTensors const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14COutputTensorsC1ERKS0_(void) {
    ALOGD("_ZN2MK14COutputTensorsC1ERKS0_() called");
    return 0;
}

/* Demangled: MK::CCLReleaseCommandQueue::Load(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK22CCLReleaseCommandQueue4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK22CCLReleaseCommandQueue4LoadERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: MK::CCLReleaseProgram::CCLReleaseProgram(MK::CCLReleaseProgram const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK17CCLReleaseProgramC2ERKS0_(void) {
    ALOGD("_ZN2MK17CCLReleaseProgramC2ERKS0_() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_program* (*)(_cl_context*, unsigned int, char const**, unsigned long const*, int*), std::__1::allocator<_cl_program* (*)(_cl_context*, unsigned int, char const**, unsigned long const*, int*)>, _cl_program* (_cl_context*, unsigned int, char const**, unsigned long const*, int*)>::__clone(std::__1::__function::__base<_cl_program* (_cl_context*, unsigned int, char const**, unsigned long const*, int*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPPKcPKmPiENS_9allocatorISD_EESC_E7__cloneEPNS0_6__baseISC_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPPKcPKmPiENS_9allocatorISD_EESC_E7__cloneEPNS0_6__baseISC_EE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_platform_id*), std::__1::allocator<int (*)(_cl_platform_id*)>, int (_cl_platform_id*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP15_cl_platform_idENS_9allocatorIS5_EES4_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP15_cl_platform_idENS_9allocatorIS5_EES4_E7destroyEv() called");
    return 0;
}

/* Demangled: std::__1::__split_buffer<MK::CPointer<MK::CJob>*, std::__1::allocator<MK::CPointer<MK::CJob>*> >::push_front(MK::CPointer<MK::CJob>*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__114__split_bufferIPN2MK8CPointerINS1_4CJobEEENS_9allocatorIS5_EEE10push_frontEOS5_(void) {
    ALOGD("_ZNSt3__114__split_bufferIPN2MK8CPointerINS1_4CJobEEENS_9allocatorIS5_EEE10push_frontEOS5_() called");
    return 0;
}

/* Demangled: clRetainSampler */
extern "C" __attribute__((visibility("default"))) int clRetainSampler(void) {
    ALOGD("clRetainSampler() called");
    return 0;
}

/* Demangled: void std::__1::vector<_cl_device_id*, std::__1::allocator<_cl_device_id*> >::__push_back_slow_path<_cl_device_id* const&>(_cl_device_id* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIP13_cl_device_idNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIP13_cl_device_idNS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_() called");
    return 0;
}

/* Demangled: MK::CCLReleaseMemObject::CCLReleaseMemObject(MK::CCLReleaseMemObject const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK19CCLReleaseMemObjectC1ERKS0_(void) {
    ALOGD("_ZN2MK19CCLReleaseMemObjectC1ERKS0_() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueSVMMap::CCLEnqueueSVMMap(MK::CCLEnqueueSVMMap const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLEnqueueSVMMapC1ERKS0_(void) {
    ALOGD("_ZN2MK16CCLEnqueueSVMMapC1ERKS0_() called");
    return 0;
}

/* Demangled: MKProgram_AttachCLFinish */
extern "C" __attribute__((visibility("default"))) int MKProgram_AttachCLFinish(void) {
    ALOGD("MKProgram_AttachCLFinish() called");
    return 0;
}

/* Exported Object: MK::CStaticData::ms_kRTTI */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK11CStaticData8ms_kRTTIE = NULL;

/* Demangled: MK::CProgram::PickCommandFrom(MK::CProgram*, char const*, MK::CRTTI const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK8CProgram15PickCommandFromEPS0_PKcPKNS_5CRTTIEb(void) {
    ALOGD("_ZN2MK8CProgram15PickCommandFromEPS0_PKcPKNS_5CRTTIEb() called");
    return 0;
}

/* Demangled: MK::CStaticData::RegisterUniqueObject(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CStaticData20RegisterUniqueObjectERNS_7CStreamE(void) {
    ALOGD("_ZN2MK11CStaticData20RegisterUniqueObjectERNS_7CStreamE() called");
    return 0;
}

/* Demangled: CmdL_TreeNodeGetTop */
extern "C" __attribute__((visibility("default"))) int CmdL_TreeNodeGetTop(void) {
    ALOGD("CmdL_TreeNodeGetTop() called");
    return 0;
}

/* Exported Object: MK::CCLCreateProgramWithSource::ms_kRTTI */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK26CCLCreateProgramWithSource8ms_kRTTIE = NULL;

/* Demangled: MK::CCLReleaseEvent::~CCLReleaseEvent() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLReleaseEventD1Ev(void) {
    ALOGD("_ZN2MK15CCLReleaseEventD1Ev() called");
    return 0;
}

/* Demangled: MK::CCLRetainKernel::Load(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLRetainKernel4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK15CCLRetainKernel4LoadERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueSVMUnmap::Run(MKProgramType, MK::CContextLocal*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK18CCLEnqueueSVMUnmap3RunE13MKProgramTypePNS_13CContextLocalE(void) {
    ALOGD("_ZN2MK18CCLEnqueueSVMUnmap3RunE13MKProgramTypePNS_13CContextLocalE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_mem*, void (*)(_cl_mem*, void*), void*), std::__1::allocator<int (*)(_cl_mem*, void (*)(_cl_mem*, void*), void*)>, int (_cl_mem*, void (*)(_cl_mem*, void*), void*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP7_cl_memPFvS3_PvES4_ENS_9allocatorIS8_EES7_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP7_cl_memPFvS3_PvES4_ENS_9allocatorIS8_EES7_E7__cloneEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_sampler*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_sampler*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_sampler*, unsigned int, unsigned long, void*, unsigned long*)>::operator()(_cl_sampler*&&, unsigned int&&, unsigned long&&, void*&&, unsigned long*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP11_cl_samplerjmPvPmENS_9allocatorIS7_EES6_EclEOS3_OjOmOS4_OS5_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP11_cl_samplerjmPvPmENS_9allocatorIS7_EES6_EclEOS3_OjOmOS4_OS5_() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjmmPvjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjmmPvjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: MK::CBool::Load(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK5CBool4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK5CBool4LoadERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: MKProgramStack_Pop */
extern "C" __attribute__((visibility("default"))) int MKProgramStack_Pop(void) {
    ALOGD("MKProgramStack_Pop() called");
    return 0;
}

/* Demangled: MK::CProgram::Link(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK8CProgram4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK8CProgram4LinkERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: MK::clSetKernelArg(_cl_kernel*, unsigned int, unsigned long, void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14clSetKernelArgEP10_cl_kerneljmPKv(void) {
    ALOGD("_ZN2MK14clSetKernelArgEP10_cl_kerneljmPKv() called");
    return 0;
}

/* Demangled: MK::CCLFinish::CCLFinish(MK::CCLFinish const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK9CCLFinishC2ERKS0_(void) {
    ALOGD("_ZN2MK9CCLFinishC2ERKS0_() called");
    return 0;
}

/* Demangled: MK::CCLRetainProgram::RegisterUniqueObject(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLRetainProgram20RegisterUniqueObjectERNS_7CStreamE(void) {
    ALOGD("_ZN2MK16CCLRetainProgram20RegisterUniqueObjectERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CCLRetainCommandQueue::Load(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK21CCLRetainCommandQueue4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK21CCLRetainCommandQueue4LoadERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: MK::CCLReleaseKernel::Run(MKProgramType, MK::CContextLocal*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLReleaseKernel3RunE13MKProgramTypePNS_13CContextLocalE(void) {
    ALOGD("_ZN2MK16CCLReleaseKernel3RunE13MKProgramTypePNS_13CContextLocalE() called");
    return 0;
}

/* Demangled: MK::CCLReleaseProgram::~CCLReleaseProgram() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK17CCLReleaseProgramD2Ev(void) {
    ALOGD("_ZN2MK17CCLReleaseProgramD2Ev() called");
    return 0;
}

/* Demangled: MKProgram_AttachCLRetainEvent */
extern "C" __attribute__((visibility("default"))) int MKProgram_AttachCLRetainEvent(void) {
    ALOGD("MKProgram_AttachCLRetainEvent() called");
    return 0;
}

/* Demangled: MK::CDummyCommand::Load(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK13CDummyCommand4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK13CDummyCommand4LoadERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_context*), std::__1::allocator<int (*)(_cl_context*)>, int (_cl_context*)>::__clone(std::__1::__function::__base<int (_cl_context*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP11_cl_contextENS_9allocatorIS5_EES4_E7__cloneEPNS0_6__baseIS4_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP11_cl_contextENS_9allocatorIS5_EES4_E7__cloneEPNS0_6__baseIS4_EE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, void (*)(_cl_program*, void*), void*, int*), std::__1::allocator<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, void (*)(_cl_program*, void*), void*, int*)>, _cl_program* (_cl_context*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, void (*)(_cl_program*, void*), void*, int*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKcjPKS3_PFvS3_PvESE_PiENS_9allocatorISJ_EESI_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKcjPKS3_PFvS3_PvESE_PiENS_9allocatorISJ_EESI_E7destroyEv() called");
    return 0;
}

/* Demangled: MK::clEnqueueMapImage(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long const*, unsigned long const*, unsigned long*, unsigned long*, unsigned int, _cl_event* const*, _cl_event**, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK17clEnqueueMapImageEP17_cl_command_queueP7_cl_memjmPKmS5_PmS6_jPKP9_cl_eventPS8_Pi(void) {
    ALOGD("_ZN2MK17clEnqueueMapImageEP17_cl_command_queueP7_cl_memjmPKmS5_PmS6_jPKP9_cl_eventPS8_Pi() called");
    return 0;
}

/* Demangled: clCreateImage2D */
extern "C" __attribute__((visibility("default"))) int clCreateImage2D(void) {
    ALOGD("clCreateImage2D() called");
    return 0;
}

/* Demangled: clEnqueueSVMUnmap */
extern "C" __attribute__((visibility("default"))) int clEnqueueSVMUnmap(void) {
    ALOGD("clEnqueueSVMUnmap() called");
    return 0;
}

/* Demangled: MK::CCLSVMFree::Record(_cl_context*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK10CCLSVMFree6RecordEP11_cl_contextPv(void) {
    ALOGD("_ZN2MK10CCLSVMFree6RecordEP11_cl_contextPv() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueUnmapMemObject::GetMemoryUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK24CCLEnqueueUnmapMemObject13GetMemoryUsedEv(void) {
    ALOGD("_ZNK2MK24CCLEnqueueUnmapMemObject13GetMemoryUsedEv() called");
    return 0;
}

/* Demangled: MK::CCLRetainProgram::CopyConstructTo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK16CCLRetainProgram15CopyConstructToEv(void) {
    ALOGD("_ZNK2MK16CCLRetainProgram15CopyConstructToEv() called");
    return 0;
}

/* Demangled: MKProgram_AttachCLRetainCommandQueue */
extern "C" __attribute__((visibility("default"))) int MKProgram_AttachCLRetainCommandQueue(void) {
    ALOGD("MKProgram_AttachCLRetainCommandQueue() called");
    return 0;
}

/* Demangled: CmdL_AttachclBuildProgram */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclBuildProgram(void) {
    ALOGD("CmdL_AttachclBuildProgram() called");
    return 0;
}

/* Demangled: clFlush */
extern "C" __attribute__((visibility("default"))) int clFlush(void) {
    ALOGD("clFlush() called");
    return 0;
}

/* Demangled: MK::CCLRetainContext::Run(MKProgramType, MK::CContextLocal*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLRetainContext3RunE13MKProgramTypePNS_13CContextLocalE(void) {
    ALOGD("_ZN2MK16CCLRetainContext3RunE13MKProgramTypePNS_13CContextLocalE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_S7_mmmmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_S7_mmmmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<void (*)(_cl_context*, void*), std::__1::allocator<void (*)(_cl_context*, void*)>, void (_cl_context*, void*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFvP11_cl_contextPvENS_9allocatorIS6_EES5_EE = NULL;

/* Demangled: MK::CVersion::IsValid() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK8CVersion7IsValidEv(void) {
    ALOGD("_ZNK2MK8CVersion7IsValidEv() called");
    return 0;
}

/* Demangled: CmdL_SetEnable */
extern "C" __attribute__((visibility("default"))) int CmdL_SetEnable(void) {
    ALOGD("CmdL_SetEnable() called");
    return 0;
}

/* Demangled: MK::CCLCreateKernelsInProgram::Link(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK25CCLCreateKernelsInProgram4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK25CCLCreateKernelsInProgram4LinkERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueWriteBuffer::RegisterUniqueObject(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK21CCLEnqueueWriteBuffer20RegisterUniqueObjectERNS_7CStreamE(void) {
    ALOGD("_ZN2MK21CCLEnqueueWriteBuffer20RegisterUniqueObjectERNS_7CStreamE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_kernel*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_kernel*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_kernel*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP10_cl_kerneljPKmS7_S7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queueP10_cl_kerneljPKmS7_S7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7destroyEv() called");
    return 0;
}

/* Demangled: MKProgram_GetDummyCommand */
extern "C" __attribute__((visibility("default"))) int MKProgram_GetDummyCommand(void) {
    ALOGD("MKProgram_GetDummyCommand() called");
    return 0;
}

/* Demangled: MK::CObject::GetAllObjectsByNameRTTI(std::__1::vector<MK::CObject*, std::__1::allocator<MK::CObject*> >&, char const*, MK::CRTTI const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK7CObject23GetAllObjectsByNameRTTIERNSt3__16vectorIPS0_NS1_9allocatorIS3_EEEEPKcPKNS_5CRTTIEb(void) {
    ALOGD("_ZN2MK7CObject23GetAllObjectsByNameRTTIERNSt3__16vectorIPS0_NS1_9allocatorIS3_EEEEPKcPKNS_5CRTTIEb() called");
    return 0;
}

/* Demangled: MK::CCLCreateCommandQueue::Log(MK::CJsonLog&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK21CCLCreateCommandQueue3LogERNS_8CJsonLogE(void) {
    ALOGD("_ZNK2MK21CCLCreateCommandQueue3LogERNS_8CJsonLogE() called");
    return 0;
}

/* Demangled: MK::CCLFinish::RegisterFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK9CCLFinish15RegisterFactoryEv(void) {
    ALOGD("_ZN2MK9CCLFinish15RegisterFactoryEv() called");
    return 0;
}

/* Demangled: MKProgram_AttachCLEnqueueReadBuffer */
extern "C" __attribute__((visibility("default"))) int MKProgram_AttachCLEnqueueReadBuffer(void) {
    ALOGD("MKProgram_AttachCLEnqueueReadBuffer() called");
    return 0;
}

/* Demangled: MK::CProfileDataJob::CProfileDataJob(MK::CProfileDataJob const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CProfileDataJobC2ERKS0_(void) {
    ALOGD("_ZN2MK15CProfileDataJobC2ERKS0_() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueWriteBuffer::Log(MK::CJsonLog&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK21CCLEnqueueWriteBuffer3LogERNS_8CJsonLogE(void) {
    ALOGD("_ZNK2MK21CCLEnqueueWriteBuffer3LogERNS_8CJsonLogE() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMemoryCopy::~CCLEnqueueMemoryCopy() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK20CCLEnqueueMemoryCopyD2Ev(void) {
    ALOGD("_ZN2MK20CCLEnqueueMemoryCopyD2Ev() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_kernel*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_kernel*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_kernel*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP10_cl_kerneljPKmS7_S7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP10_cl_kerneljPKmS7_S7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEv() called");
    return 0;
}

/* Demangled: CmdL_AttachclReleaseContext */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclReleaseContext(void) {
    ALOGD("CmdL_AttachclReleaseContext() called");
    return 0;
}

/* Demangled: CmdL_RemoveTreeNode */
extern "C" __attribute__((visibility("default"))) int CmdL_RemoveTreeNode(void) {
    ALOGD("CmdL_RemoveTreeNode() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<std::__1::function<int (unsigned long, void*)>, std::__1::allocator<std::__1::function<int (unsigned long, void*)> >, int (unsigned int, void*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcINS_8functionIFimPvEEENS_9allocatorIS5_EEFijS3_EE18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcINS_8functionIFimPvEEENS_9allocatorIS5_EEFijS3_EE18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: MK::CCLPrepareMemoryCopy::CopyConstructTo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK20CCLPrepareMemoryCopy15CopyConstructToEv(void) {
    ALOGD("_ZNK2MK20CCLPrepareMemoryCopy15CopyConstructToEv() called");
    return 0;
}

/* Demangled: MK::CCLRetainKernel::RegisterFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLRetainKernel15RegisterFactoryEv(void) {
    ALOGD("_ZN2MK15CCLRetainKernel15RegisterFactoryEv() called");
    return 0;
}

/* Demangled: MK::clSVMFree(_cl_context*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK9clSVMFreeEP11_cl_contextPv(void) {
    ALOGD("_ZN2MK9clSVMFreeEP11_cl_contextPv() called");
    return 0;
}

/* Demangled: clSetUserEventStatus */
extern "C" __attribute__((visibility("default"))) int clSetUserEventStatus(void) {
    ALOGD("clSetUserEventStatus() called");
    return 0;
}

/* Demangled: MK::CCLFlush::CCLFlush() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK8CCLFlushC1Ev(void) {
    ALOGD("_ZN2MK8CCLFlushC1Ev() called");
    return 0;
}

/* Demangled: MK::CCLCreateContext::Run(MKProgramType, MK::CContextLocal*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLCreateContext3RunE13MKProgramTypePNS_13CContextLocalE(void) {
    ALOGD("_ZN2MK16CCLCreateContext3RunE13MKProgramTypePNS_13CContextLocalE() called");
    return 0;
}

/* Demangled: MK::CCLRetainCommandQueue::Log(MK::CJsonLog&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK21CCLRetainCommandQueue3LogERNS_8CJsonLogE(void) {
    ALOGD("_ZNK2MK21CCLRetainCommandQueue3LogERNS_8CJsonLogE() called");
    return 0;
}

/* Exported Object: vtable for MK::CCLRetainEvent */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK14CCLRetainEventE = NULL;

/* Demangled: MK::CStream::IsTopLevel(MK::CObject*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK7CStream10IsTopLevelEPNS_7CObjectE(void) {
    ALOGD("_ZN2MK7CStream10IsTopLevelEPNS_7CObjectE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_context* (*)(long const*, unsigned int, _cl_device_id* const*, void (*)(char const*, void const*, unsigned long, void*), void*, int*), std::__1::allocator<_cl_context* (*)(long const*, unsigned int, _cl_device_id* const*, void (*)(char const*, void const*, unsigned long, void*), void*, int*)>, _cl_context* (long const*, unsigned int, _cl_device_id* const*, void (*)(char const*, void const*, unsigned long, void*), void*, int*)>::__clone(std::__1::__function::__base<_cl_context* (long const*, unsigned int, _cl_device_id* const*, void (*)(char const*, void const*, unsigned long, void*), void*, int*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFP11_cl_contextPKljPKP13_cl_device_idPFvPKcPKvmPvESE_PiENS_9allocatorISJ_EESI_E7__cloneEPNS0_6__baseISI_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFP11_cl_contextPKljPKP13_cl_device_idPFvPKcPKvmPvESE_PiENS_9allocatorISJ_EESI_E7__cloneEPNS0_6__baseISI_EE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned long, unsigned int, unsigned long*), std::__1::allocator<int (*)(_cl_command_queue*, unsigned long, unsigned int, unsigned long*)>, int (_cl_command_queue*, unsigned long, unsigned int, unsigned long*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuemjPmENS_9allocatorIS6_EES5_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queuemjPmENS_9allocatorIS6_EES5_E7destroyEv() called");
    return 0;
}

/* Demangled: MK::CVersion::operator>=(MK::CVersion const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK8CVersiongeERKS0_(void) {
    ALOGD("_ZNK2MK8CVersiongeERKS0_() called");
    return 0;
}

/* Demangled: CmdL_AttachclReleaseSampler */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclReleaseSampler(void) {
    ALOGD("CmdL_AttachclReleaseSampler() called");
    return 0;
}

/* Demangled: clEnqueueMarkerWithWaitList */
extern "C" __attribute__((visibility("default"))) int clEnqueueMarkerWithWaitList(void) {
    ALOGD("clEnqueueMarkerWithWaitList() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueNDRangeKernel::Record(_cl_command_queue*, _cl_kernel*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK23CCLEnqueueNDRangeKernel6RecordEP17_cl_command_queueP10_cl_kerneljPKmS6_S6_jPKP9_cl_eventS8_(void) {
    ALOGD("_ZN2MK23CCLEnqueueNDRangeKernel6RecordEP17_cl_command_queueP10_cl_kerneljPKmS6_S6_jPKP9_cl_eventS8_() called");
    return 0;
}

/* Demangled: MK::CCLRetainEvent::CopyConstructTo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK14CCLRetainEvent15CopyConstructToEv(void) {
    ALOGD("_ZNK2MK14CCLRetainEvent15CopyConstructToEv() called");
    return 0;
}

/* Demangled: MK::CBool::Log(MK::CJsonLog&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK5CBool3LogERNS_8CJsonLogE(void) {
    ALOGD("_ZNK2MK5CBool3LogERNS_8CJsonLogE() called");
    return 0;
}

/* Exported Object: vtable for MK::CStream */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK7CStreamE = NULL;

/* Demangled: MK::clEnqueueReadBuffer(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event**) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK19clEnqueueReadBufferEP17_cl_command_queueP7_cl_memjmmPvjPKP9_cl_eventPS6_(void) {
    ALOGD("_ZN2MK19clEnqueueReadBufferEP17_cl_command_queueP7_cl_memjmmPvjPKP9_cl_eventPS6_() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMarker::CCLEnqueueMarker(MK::CCLEnqueueMarker const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLEnqueueMarkerC2ERKS0_(void) {
    ALOGD("_ZN2MK16CCLEnqueueMarkerC2ERKS0_() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueNDRangeKernel::Factory(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK23CCLEnqueueNDRangeKernel7FactoryERNS_7CStreamE(void) {
    ALOGD("_ZN2MK23CCLEnqueueNDRangeKernel7FactoryERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CCLReleaseCommandQueue::CCLReleaseCommandQueue(MK::CCLReleaseCommandQueue const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK22CCLReleaseCommandQueueC2ERKS0_(void) {
    ALOGD("_ZN2MK22CCLReleaseCommandQueueC2ERKS0_() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_kernel*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_kernel*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_kernel*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>::__clone(std::__1::__function::__base<int (_cl_kernel*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP10_cl_kernelP13_cl_device_idjmPvPmENS_9allocatorIS9_EES8_E7__cloneEPNS0_6__baseIS8_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP10_cl_kernelP13_cl_device_idjmPvPmENS_9allocatorIS9_EES8_E7__cloneEPNS0_6__baseIS8_EE() called");
    return 0;
}

/* Demangled: MK::CCLWaitForEvents::CCLWaitForEvents() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLWaitForEventsC1Ev(void) {
    ALOGD("_ZN2MK16CCLWaitForEventsC1Ev() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIP13_cl_device_idNS_9allocatorIS2_EEE6assignIPKS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIP13_cl_device_idNS_9allocatorIS2_EEE6assignIPKS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_(void) {
    ALOGD("_ZNSt3__16vectorIP13_cl_device_idNS_9allocatorIS2_EEE6assignIPKS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsISA_E9referenceEEE5valueEvE4typeESA_SA_() called");
    return 0;
}

/* Demangled: MK::CCLFlush::~CCLFlush() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK8CCLFlushD0Ev(void) {
    ALOGD("_ZN2MK8CCLFlushD0Ev() called");
    return 0;
}

/* Demangled: MKProgram_AttachCLCreateKernelsInProgram */
extern "C" __attribute__((visibility("default"))) int MKProgram_AttachCLCreateKernelsInProgram(void) {
    ALOGD("MKProgram_AttachCLCreateKernelsInProgram() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, void (*)(_cl_program*, void*), void*, int*), std::__1::allocator<_cl_program* (*)(_cl_context*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, void (*)(_cl_program*, void*), void*, int*)>, _cl_program* (_cl_context*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, void (*)(_cl_program*, void*), void*, int*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFP11_cl_programP11_cl_contextjPKP13_cl_device_idPKcjPKS3_PFvS3_PvESE_PiENS_9allocatorISJ_EESI_EE = NULL;

/* Demangled: clUnloadCompiler */
extern "C" __attribute__((visibility("default"))) int clUnloadCompiler(void) {
    ALOGD("clUnloadCompiler() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMapBuffer::CCLEnqueueMapBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK19CCLEnqueueMapBufferC2Ev(void) {
    ALOGD("_ZN2MK19CCLEnqueueMapBufferC2Ev() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, void (*)(void*), void*, unsigned long, unsigned int, _cl_mem* const*, void const**, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, void (*)(void*), void*, unsigned long, unsigned int, _cl_mem* const*, void const**, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, void (*)(void*), void*, unsigned long, unsigned int, _cl_mem* const*, void const**, unsigned int, _cl_event* const*, _cl_event**)>::__clone(std::__1::__function::__base<int (_cl_command_queue*, void (*)(void*), void*, unsigned long, unsigned int, _cl_mem* const*, void const**, unsigned int, _cl_event* const*, _cl_event**)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuePFvPvES4_mjPKP7_cl_memPPKvjPKP9_cl_eventPSF_ENS_9allocatorISK_EESJ_E7__cloneEPNS0_6__baseISJ_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP17_cl_command_queuePFvPvES4_mjPKP7_cl_memPPKvjPKP9_cl_eventPSF_ENS_9allocatorISK_EESJ_E7__cloneEPNS0_6__baseISJ_EE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, void*, void const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, void*, void const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, unsigned int, void*, void const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::__clone(std::__1::__function::__base<int (_cl_command_queue*, unsigned int, void*, void const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuejPvPKvmjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E7__cloneEPNS0_6__baseISC_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP17_cl_command_queuejPvPKvmjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_E7__cloneEPNS0_6__baseISC_EE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<int (*)(_cl_event*, int), std::__1::allocator<int (*)(_cl_event*, int)>, int (_cl_event*, int)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFiP9_cl_eventiENS_9allocatorIS5_EES4_EE = NULL;

/* Demangled: MK::clEnqueueNDRangeKernel(_cl_command_queue*, _cl_kernel*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK22clEnqueueNDRangeKernelEP17_cl_command_queueP10_cl_kerneljPKmS5_S5_jPKP9_cl_eventPS7_(void) {
    ALOGD("_ZN2MK22clEnqueueNDRangeKernelEP17_cl_command_queueP10_cl_kerneljPKmS5_S5_jPKP9_cl_eventPS7_() called");
    return 0;
}

/* Demangled: MK::CCLCreateBuffer::~CCLCreateBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLCreateBufferD2Ev(void) {
    ALOGD("_ZN2MK15CCLCreateBufferD2Ev() called");
    return 0;
}

/* Demangled: MK::CCLReleaseContext::Link(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK17CCLReleaseContext4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK17CCLReleaseContext4LinkERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: MK::CCLWaitForEvents::CCLWaitForEvents(MK::CCLWaitForEvents const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLWaitForEventsC2ERKS0_(void) {
    ALOGD("_ZN2MK16CCLWaitForEventsC2ERKS0_() called");
    return 0;
}

/* Demangled: MKProgram_AttachCLCreateProgramWithSource */
extern "C" __attribute__((visibility("default"))) int MKProgram_AttachCLCreateProgramWithSource(void) {
    ALOGD("MKProgram_AttachCLCreateProgramWithSource() called");
    return 0;
}

/* Exported Object: vtable for MK::CJob */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK4CJobE = NULL;

/* Demangled: MK::CObject::Load(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK7CObject4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK7CObject4LoadERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: MK::CCLWaitForEvents::~CCLWaitForEvents() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLWaitForEventsD0Ev(void) {
    ALOGD("_ZN2MK16CCLWaitForEventsD0Ev() called");
    return 0;
}

/* Demangled: CmdL_AttachclEnqueueReadBuffer */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclEnqueueReadBuffer(void) {
    ALOGD("CmdL_AttachclEnqueueReadBuffer() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMapBuffer::~CCLEnqueueMapBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK19CCLEnqueueMapBufferD1Ev(void) {
    ALOGD("_ZN2MK19CCLEnqueueMapBufferD1Ev() called");
    return 0;
}

/* Exported Object: vtable for MK::CCLEnqueueUnmapMemObject */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK24CCLEnqueueUnmapMemObjectE = NULL;

/* Exported Object: vtable for std::__1::__function::__func<void* (*)(_cl_context*, unsigned long, unsigned long, unsigned int), std::__1::allocator<void* (*)(_cl_context*, unsigned long, unsigned long, unsigned int)>, void* (_cl_context*, unsigned long, unsigned long, unsigned int)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFPvP11_cl_contextmmjENS_9allocatorIS6_EES5_EE = NULL;

/* Exported Object: vtable for std::__1::__function::__func<void* (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**, int*), std::__1::allocator<void* (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**, int*)>, void* (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**, int*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFPvP17_cl_command_queueP7_cl_memjmmmjPKP9_cl_eventPS8_PiENS_9allocatorISE_EESD_EE = NULL;

/* Demangled: MKProgramStack_Push */
extern "C" __attribute__((visibility("default"))) int MKProgramStack_Push(void) {
    ALOGD("MKProgramStack_Push() called");
    return 0;
}

/* Demangled: MK::clGetProgramBuildInfo(_cl_program*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK21clGetProgramBuildInfoEP11_cl_programP13_cl_device_idjmPvPm(void) {
    ALOGD("_ZN2MK21clGetProgramBuildInfoEP11_cl_programP13_cl_device_idjmPvPm() called");
    return 0;
}

/* Demangled: MKProgram_AttachCLEnqueueSVMUnmap */
extern "C" __attribute__((visibility("default"))) int MKProgram_AttachCLEnqueueSVMUnmap(void) {
    ALOGD("MKProgram_AttachCLEnqueueSVMUnmap() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<int (*)(_cl_program*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, char const**, void (*)(_cl_program*, void*), void*), std::__1::allocator<int (*)(_cl_program*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, char const**, void (*)(_cl_program*, void*), void*)>, int (_cl_program*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, char const**, void (*)(_cl_program*, void*), void*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFiP11_cl_programjPKP13_cl_device_idPKcjPKS3_PS9_PFvS3_PvESD_ENS_9allocatorISH_EESG_EE = NULL;

/* Demangled: MKProgram_Release */
extern "C" __attribute__((visibility("default"))) int MKProgram_Release(void) {
    ALOGD("MKProgram_Release() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMarkerWithWaitList::Factory(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK28CCLEnqueueMarkerWithWaitList7FactoryERNS_7CStreamE(void) {
    ALOGD("_ZN2MK28CCLEnqueueMarkerWithWaitList7FactoryERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CCLRetainProgram::RegisterFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLRetainProgram15RegisterFactoryEv(void) {
    ALOGD("_ZN2MK16CCLRetainProgram15RegisterFactoryEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(unsigned int, _cl_platform_id**, unsigned int*), std::__1::allocator<int (*)(unsigned int, _cl_platform_id**, unsigned int*)>, int (unsigned int, _cl_platform_id**, unsigned int*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFijPP15_cl_platform_idPjENS_9allocatorIS7_EES6_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFijPP15_cl_platform_idPjENS_9allocatorIS7_EES6_E7__cloneEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_mmmjPKP9_cl_eventPS7_ENS_9allocatorISC_EESB_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_mmmjPKP9_cl_eventPS7_ENS_9allocatorISC_EESB_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_device_id*, long const*, unsigned int, _cl_device_id**, unsigned int*), std::__1::allocator<int (*)(_cl_device_id*, long const*, unsigned int, _cl_device_id**, unsigned int*)>, int (_cl_device_id*, long const*, unsigned int, _cl_device_id**, unsigned int*)>::__clone(std::__1::__function::__base<int (_cl_device_id*, long const*, unsigned int, _cl_device_id**, unsigned int*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP13_cl_device_idPKljPS3_PjENS_9allocatorIS9_EES8_E7__cloneEPNS0_6__baseIS8_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP13_cl_device_idPKljPS3_PjENS_9allocatorIS9_EES8_E7__cloneEPNS0_6__baseIS8_EE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_kernel*), std::__1::allocator<int (*)(_cl_kernel*)>, int (_cl_kernel*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP10_cl_kernelENS_9allocatorIS5_EES4_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP10_cl_kernelENS_9allocatorIS5_EES4_E7destroyEv() called");
    return 0;
}

/* Demangled: MK::CCLReleaseKernel::RegisterUniqueObject(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLReleaseKernel20RegisterUniqueObjectERNS_7CStreamE(void) {
    ALOGD("_ZN2MK16CCLReleaseKernel20RegisterUniqueObjectERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CCLReleaseMemObject::~CCLReleaseMemObject() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK19CCLReleaseMemObjectD2Ev(void) {
    ALOGD("_ZN2MK19CCLReleaseMemObjectD2Ev() called");
    return 0;
}

/* Demangled: MKProgram_AttachCLEnqueueMarker */
extern "C" __attribute__((visibility("default"))) int MKProgram_AttachCLEnqueueMarker(void) {
    ALOGD("MKProgram_AttachCLEnqueueMarker() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_kernel*, unsigned int, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_kernel*, unsigned int, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_kernel*, unsigned int, unsigned int, unsigned long, void*, unsigned long*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP10_cl_kerneljjmPvPmENS_9allocatorIS7_EES6_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP10_cl_kerneljjmPvPmENS_9allocatorIS7_EES6_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, void const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, void const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, void const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>::operator()(_cl_command_queue*&&, _cl_mem*&&, void const*&&, unsigned long const*&&, unsigned long const*&&, unsigned int&&, _cl_event* const*&&, _cl_event**&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPKvPKmS9_jPKP9_cl_eventPSB_ENS_9allocatorISG_EESF_EclEOS3_OS5_OS7_OS9_SN_OjOSD_OSE_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPKvPKmS9_jPKP9_cl_eventPSB_ENS_9allocatorISG_EESF_EclEOS3_OS5_OS7_OS9_SN_OjOSD_OSE_() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_command_queue*, unsigned int, unsigned long, void*, unsigned long*)>::operator()(_cl_command_queue*&&, unsigned int&&, unsigned long&&, void*&&, unsigned long*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejmPvPmENS_9allocatorIS7_EES6_EclEOS3_OjOmOS4_OS5_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queuejmPvPmENS_9allocatorIS7_EES6_EclEOS3_OjOmOS4_OS5_() called");
    return 0;
}

/* Demangled: clWaitForEvents */
extern "C" __attribute__((visibility("default"))) int clWaitForEvents(void) {
    ALOGD("clWaitForEvents() called");
    return 0;
}

/* Demangled: MKProgram_AttachCLEnqueueUnmapMemObject */
extern "C" __attribute__((visibility("default"))) int MKProgram_AttachCLEnqueueUnmapMemObject(void) {
    ALOGD("MKProgram_AttachCLEnqueueUnmapMemObject() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_device_id*), std::__1::allocator<int (*)(_cl_device_id*)>, int (_cl_device_id*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP13_cl_device_idENS_9allocatorIS5_EES4_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP13_cl_device_idENS_9allocatorIS5_EES4_E7destroyEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_mem*, void (*)(_cl_mem*, void*), void*), std::__1::allocator<int (*)(_cl_mem*, void (*)(_cl_mem*, void*), void*)>, int (_cl_mem*, void (*)(_cl_mem*, void*), void*)>::operator()(_cl_mem*&&, void (*&&)(_cl_mem*, void*), void*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP7_cl_memPFvS3_PvES4_ENS_9allocatorIS8_EES7_EclEOS3_OS6_OS4_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP7_cl_memPFvS3_PvES4_ENS_9allocatorIS8_EES7_EclEOS3_OS6_OS4_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, void*, unsigned int, _cl_event* const*, _cl_event**)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPvjPKP9_cl_eventPS8_ENS_9allocatorISD_EESC_EE = NULL;

/* Demangled: MK::CCLCreateCommandQueue::Link(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK21CCLCreateCommandQueue4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK21CCLCreateCommandQueue4LinkERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: MK::CCLCreateProgramWithSource::Log(MK::CJsonLog&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK26CCLCreateProgramWithSource3LogERNS_8CJsonLogE(void) {
    ALOGD("_ZNK2MK26CCLCreateProgramWithSource3LogERNS_8CJsonLogE() called");
    return 0;
}

/* Demangled: MK::CCLReleaseEvent::Load(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLReleaseEvent4LoadERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK15CCLReleaseEvent4LoadERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: MK::CCLWaitForEvents::GetDiskUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK16CCLWaitForEvents11GetDiskUsedEv(void) {
    ALOGD("_ZNK2MK16CCLWaitForEvents11GetDiskUsedEv() called");
    return 0;
}

/* Demangled: MKProgram_AttachCLSVMFree */
extern "C" __attribute__((visibility("default"))) int MKProgram_AttachCLSVMFree(void) {
    ALOGD("MKProgram_AttachCLSVMFree() called");
    return 0;
}

/* Demangled: MK::CJsonLog::EnterObjectScope() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK8CJsonLog16EnterObjectScopeEv(void) {
    ALOGD("_ZN2MK8CJsonLog16EnterObjectScopeEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_context*, unsigned long, unsigned int, unsigned int, _cl_image_format*, unsigned int*), std::__1::allocator<int (*)(_cl_context*, unsigned long, unsigned int, unsigned int, _cl_image_format*, unsigned int*)>, int (_cl_context*, unsigned long, unsigned int, unsigned int, _cl_image_format*, unsigned int*)>::operator()(_cl_context*&&, unsigned long&&, unsigned int&&, unsigned int&&, _cl_image_format*&&, unsigned int*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP11_cl_contextmjjP16_cl_image_formatPjENS_9allocatorIS8_EES7_EclEOS3_OmOjSE_OS5_OS6_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP11_cl_contextmjjP16_cl_image_formatPjENS_9allocatorIS8_EES7_EclEOS3_OmOjSE_OS5_OS6_() called");
    return 0;
}

/* Demangled: MKObject_CastToProgram */
extern "C" __attribute__((visibility("default"))) int MKObject_CastToProgram(void) {
    ALOGD("MKObject_CastToProgram() called");
    return 0;
}

/* Demangled: MK::CCLCreateProgramWithBinary::Run(MKProgramType, MK::CContextLocal*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK26CCLCreateProgramWithBinary3RunE13MKProgramTypePNS_13CContextLocalE(void) {
    ALOGD("_ZN2MK26CCLCreateProgramWithBinary3RunE13MKProgramTypePNS_13CContextLocalE() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMemoryCopy::RegisterFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK20CCLEnqueueMemoryCopy15RegisterFactoryEv(void) {
    ALOGD("_ZN2MK20CCLEnqueueMemoryCopy15RegisterFactoryEv() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMemoryCopy::GetDiskUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK20CCLEnqueueMemoryCopy11GetDiskUsedEv(void) {
    ALOGD("_ZNK2MK20CCLEnqueueMemoryCopy11GetDiskUsedEv() called");
    return 0;
}

/* Demangled: MK::CCLReleaseContext::GetDiskUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK17CCLReleaseContext11GetDiskUsedEv(void) {
    ALOGD("_ZNK2MK17CCLReleaseContext11GetDiskUsedEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, _cl_mem* const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, _cl_mem* const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, unsigned int, _cl_mem* const*, unsigned long, unsigned int, _cl_event* const*, _cl_event**)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queuejPKP7_cl_memmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EE = NULL;

/* Demangled: MKProgram_AttachUpdateBool */
extern "C" __attribute__((visibility("default"))) int MKProgram_AttachUpdateBool(void) {
    ALOGD("MKProgram_AttachUpdateBool() called");
    return 0;
}

/* Demangled: MKProgram_DumpJsonFile */
extern "C" __attribute__((visibility("default"))) int MKProgram_DumpJsonFile(void) {
    ALOGD("MKProgram_DumpJsonFile() called");
    return 0;
}

/* Demangled: MK::CCLRetainProgram::Factory(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLRetainProgram7FactoryERNS_7CStreamE(void) {
    ALOGD("_ZN2MK16CCLRetainProgram7FactoryERNS_7CStreamE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(), std::__1::allocator<int (*)()>, int ()>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFivENS_9allocatorIS3_EES2_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFivENS_9allocatorIS3_EES2_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: MKProgramStack_GetTop */
extern "C" __attribute__((visibility("default"))) int MKProgramStack_GetTop(void) {
    ALOGD("MKProgramStack_GetTop() called");
    return 0;
}

/* Demangled: MK::CVersion::operator<=(MK::CVersion const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK8CVersionleERKS0_(void) {
    ALOGD("_ZNK2MK8CVersionleERKS0_() called");
    return 0;
}

/* Demangled: MK::clGetKernelInfo(_cl_kernel*, unsigned int, unsigned long, void*, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15clGetKernelInfoEP10_cl_kerneljmPvPm(void) {
    ALOGD("_ZN2MK15clGetKernelInfoEP10_cl_kerneljmPvPm() called");
    return 0;
}

/* Demangled: MK::CCLReleaseEvent::CCLReleaseEvent() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLReleaseEventC1Ev(void) {
    ALOGD("_ZN2MK15CCLReleaseEventC1Ev() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_sampler* (*)(_cl_context*, unsigned int, unsigned int, unsigned int, int*), std::__1::allocator<_cl_sampler* (*)(_cl_context*, unsigned int, unsigned int, unsigned int, int*)>, _cl_sampler* (_cl_context*, unsigned int, unsigned int, unsigned int, int*)>::__clone(std::__1::__function::__base<_cl_sampler* (_cl_context*, unsigned int, unsigned int, unsigned int, int*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFP11_cl_samplerP11_cl_contextjjjPiENS_9allocatorIS8_EES7_E7__cloneEPNS0_6__baseIS7_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFP11_cl_samplerP11_cl_contextjjjPiENS_9allocatorIS8_EES7_E7__cloneEPNS0_6__baseIS7_EE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, _cl_event* const*), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, _cl_event* const*)>, int (_cl_command_queue*, unsigned int, _cl_event* const*)>::operator()(_cl_command_queue*&&, unsigned int&&, _cl_event* const*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuejPKP9_cl_eventENS_9allocatorIS9_EES8_EclEOS3_OjOS7_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queuejPKP9_cl_eventENS_9allocatorIS9_EES8_EclEOS3_OjOS7_() called");
    return 0;
}

/* Demangled: MK::CCLFlush::CCLFlush(MK::CCLFlush const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK8CCLFlushC2ERKS0_(void) {
    ALOGD("_ZN2MK8CCLFlushC2ERKS0_() called");
    return 0;
}

/* Demangled: MKProgram_AttachCLCreateProgramWithBinary */
extern "C" __attribute__((visibility("default"))) int MKProgram_AttachCLCreateProgramWithBinary(void) {
    ALOGD("MKProgram_AttachCLCreateProgramWithBinary() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, void const*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, void const*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, void const*, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPKvmmmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPKvmmmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEv() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi() called");
    return 0;
}

/* Demangled: MK::CProgram::GetObjectByNameRTTI(char const*, MK::CRTTI const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK8CProgram19GetObjectByNameRTTIEPKcPKNS_5CRTTIEb(void) {
    ALOGD("_ZN2MK8CProgram19GetObjectByNameRTTIEPKcPKNS_5CRTTIEb() called");
    return 0;
}

/* Demangled: CmdL_AttachclEnqueueNDRangeKernel */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclEnqueueNDRangeKernel(void) {
    ALOGD("CmdL_AttachclEnqueueNDRangeKernel() called");
    return 0;
}

/* Demangled: MK::clEnqueueTask(_cl_command_queue*, _cl_kernel*, unsigned int, _cl_event* const*, _cl_event**) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK13clEnqueueTaskEP17_cl_command_queueP10_cl_kerneljPKP9_cl_eventPS5_(void) {
    ALOGD("_ZN2MK13clEnqueueTaskEP17_cl_command_queueP10_cl_kerneljPKP9_cl_eventPS5_() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, long const*, void*, unsigned long, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, long const*, void*, unsigned long, int*)>, _cl_mem* (_cl_context*, unsigned long, long const*, void*, unsigned long, int*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPKlPvmPiENS_9allocatorISB_EESA_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPKlPvmPiENS_9allocatorISB_EESA_E7__cloneEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_event**)>, int (_cl_command_queue*, _cl_event**)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queuePP9_cl_eventENS_9allocatorIS8_EES7_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queuePP9_cl_eventENS_9allocatorIS8_EES7_E7destroyEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<int (*)(_cl_kernel*), std::__1::allocator<int (*)(_cl_kernel*)>, int (_cl_kernel*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFiP10_cl_kernelENS_9allocatorIS5_EES4_EE = NULL;

/* Demangled: clEnqueueReadImage */
extern "C" __attribute__((visibility("default"))) int clEnqueueReadImage(void) {
    ALOGD("clEnqueueReadImage() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueReadBuffer::Record(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, void*, unsigned int, _cl_event* const*, _cl_event*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK20CCLEnqueueReadBuffer6RecordEP17_cl_command_queueP7_cl_memjmmPvjPKP9_cl_eventS7_(void) {
    ALOGD("_ZN2MK20CCLEnqueueReadBuffer6RecordEP17_cl_command_queueP7_cl_memjmmPvjPKP9_cl_eventS7_() called");
    return 0;
}

/* Demangled: MK::CCLReleaseProgram::CCLReleaseProgram() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK17CCLReleaseProgramC2Ev(void) {
    ALOGD("_ZN2MK17CCLReleaseProgramC2Ev() called");
    return 0;
}

/* Exported Object: MK::CCLBuildProgram::ms_kRTTI */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK15CCLBuildProgram8ms_kRTTIE = NULL;

/* Demangled: MK::CCLReleaseProgram::Log(MK::CJsonLog&) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK17CCLReleaseProgram3LogERNS_8CJsonLogE(void) {
    ALOGD("_ZNK2MK17CCLReleaseProgram3LogERNS_8CJsonLogE() called");
    return 0;
}

/* Demangled: MK::CCLReleaseEvent::~CCLReleaseEvent() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLReleaseEventD0Ev(void) {
    ALOGD("_ZN2MK15CCLReleaseEventD0Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, unsigned long, void*, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, unsigned long, void*, int*)>, _cl_mem* (_cl_context*, unsigned long, unsigned long, void*, int*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmmPvPiENS_9allocatorIS9_EES8_EE = NULL;

/* Demangled: MK::CStaticData::Run(MKProgramType, MK::CContextLocal*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CStaticData3RunE13MKProgramTypePNS_13CContextLocalE(void) {
    ALOGD("_ZN2MK11CStaticData3RunE13MKProgramTypePNS_13CContextLocalE() called");
    return 0;
}

/* Demangled: MK::clGetEventInfo(_cl_event*, unsigned int, unsigned long, void*, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14clGetEventInfoEP9_cl_eventjmPvPm(void) {
    ALOGD("_ZN2MK14clGetEventInfoEP9_cl_eventjmPvPm() called");
    return 0;
}

/* Demangled: MK::CCLReleaseContext::RegisterUniqueObject(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK17CCLReleaseContext20RegisterUniqueObjectERNS_7CStreamE(void) {
    ALOGD("_ZN2MK17CCLReleaseContext20RegisterUniqueObjectERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CCLReleaseContext::Save(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK17CCLReleaseContext4SaveERNS_7CStreamE(void) {
    ALOGD("_ZN2MK17CCLReleaseContext4SaveERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MKProgram_SetOutputFd */
extern "C" __attribute__((visibility("default"))) int MKProgram_SetOutputFd(void) {
    ALOGD("MKProgram_SetOutputFd() called");
    return 0;
}

/* Exported Object: MK::CCLCreateImage::ms_kRTTI */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK14CCLCreateImage8ms_kRTTIE = NULL;

/* Exported Object: VTT for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: CmdL_ReleaseHandle */
extern "C" __attribute__((visibility("default"))) int CmdL_ReleaseHandle(void) {
    ALOGD("CmdL_ReleaseHandle() called");
    return 0;
}

/* Demangled: CmdL_AttachclEnqueueSVMUnmap */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclEnqueueSVMUnmap(void) {
    ALOGD("CmdL_AttachclEnqueueSVMUnmap() called");
    return 0;
}

/* Demangled: MK::CCLReleaseProgram::~CCLReleaseProgram() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK17CCLReleaseProgramD1Ev(void) {
    ALOGD("_ZN2MK17CCLReleaseProgramD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_event*, int), std::__1::allocator<int (*)(_cl_event*, int)>, int (_cl_event*, int)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP9_cl_eventiENS_9allocatorIS5_EES4_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP9_cl_eventiENS_9allocatorIS5_EES4_E7destroyEv() called");
    return 0;
}

/* Demangled: clCreateImage3D */
extern "C" __attribute__((visibility("default"))) int clCreateImage3D(void) {
    ALOGD("clCreateImage3D() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueCopyBufferToImage::CCLEnqueueCopyBufferToImage(MK::CCLEnqueueCopyBufferToImage const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK27CCLEnqueueCopyBufferToImageC1ERKS0_(void) {
    ALOGD("_ZN2MK27CCLEnqueueCopyBufferToImageC1ERKS0_() called");
    return 0;
}

/* Demangled: MKProgram_AttachCLCreateBuffer */
extern "C" __attribute__((visibility("default"))) int MKProgram_AttachCLCreateBuffer(void) {
    ALOGD("MKProgram_AttachCLCreateBuffer() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_event* (*)(_cl_context*, int*), std::__1::allocator<_cl_event* (*)(_cl_context*, int*)>, _cl_event* (_cl_context*, int*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFP9_cl_eventP11_cl_contextPiENS_9allocatorIS8_EES7_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFP9_cl_eventP11_cl_contextPiENS_9allocatorIS8_EES7_E7__cloneEv() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMemoryCopy::RegisterUniqueObject(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK20CCLEnqueueMemoryCopy20RegisterUniqueObjectERNS_7CStreamE(void) {
    ALOGD("_ZN2MK20CCLEnqueueMemoryCopy20RegisterUniqueObjectERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CCLRetainKernel::~CCLRetainKernel() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLRetainKernelD2Ev(void) {
    ALOGD("_ZN2MK15CCLRetainKernelD2Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISJ_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISJ_EERKT_() called");
    return 0;
}

/* Demangled: clReleaseContext */
extern "C" __attribute__((visibility("default"))) int clReleaseContext(void) {
    ALOGD("clReleaseContext() called");
    return 0;
}

/* Demangled: MK::CCLCreateKernel::RegisterUniqueObject(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLCreateKernel20RegisterUniqueObjectERNS_7CStreamE(void) {
    ALOGD("_ZN2MK15CCLCreateKernel20RegisterUniqueObjectERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMemoryCopy::CCLEnqueueMemoryCopy() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK20CCLEnqueueMemoryCopyC2Ev(void) {
    ALOGD("_ZN2MK20CCLEnqueueMemoryCopyC2Ev() called");
    return 0;
}

/* Demangled: MK::CCLRetainEvent::GetDiskUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK14CCLRetainEvent11GetDiskUsedEv(void) {
    ALOGD("_ZNK2MK14CCLRetainEvent11GetDiskUsedEv() called");
    return 0;
}

/* Demangled: MK::CCLSetKernelArg::CopyConstructTo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK15CCLSetKernelArg15CopyConstructToEv(void) {
    ALOGD("_ZNK2MK15CCLSetKernelArg15CopyConstructToEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_device_id*, long const*, unsigned int, _cl_device_id**, unsigned int*), std::__1::allocator<int (*)(_cl_device_id*, long const*, unsigned int, _cl_device_id**, unsigned int*)>, int (_cl_device_id*, long const*, unsigned int, _cl_device_id**, unsigned int*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP13_cl_device_idPKljPS3_PjENS_9allocatorIS9_EES8_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP13_cl_device_idPKljPS3_PjENS_9allocatorIS9_EES8_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: CmdL_TreeNodeAttachStaticData */
extern "C" __attribute__((visibility("default"))) int CmdL_TreeNodeAttachStaticData(void) {
    ALOGD("CmdL_TreeNodeAttachStaticData() called");
    return 0;
}

/* Exported Object: vtable for MK::CCLFinish */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK9CCLFinishE = NULL;

/* Demangled: MK::CCLImportMemory::IsImportDMA(long const*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLImportMemory11IsImportDMAEPKl(void) {
    ALOGD("_ZN2MK15CCLImportMemory11IsImportDMAEPKl() called");
    return 0;
}

/* Demangled: MK::CCLFlush::RegisterFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK8CCLFlush15RegisterFactoryEv(void) {
    ALOGD("_ZN2MK8CCLFlush15RegisterFactoryEv() called");
    return 0;
}

/* Demangled: MK::CCLReleaseKernel::Link(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLReleaseKernel4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK16CCLReleaseKernel4LinkERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_kernel*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_kernel*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_kernel*, unsigned int, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>::operator()(_cl_command_queue*&&, _cl_kernel*&&, unsigned int&&, unsigned long const*&&, unsigned long const*&&, unsigned long const*&&, unsigned int&&, _cl_event* const*&&, _cl_event**&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP10_cl_kerneljPKmS7_S7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EclEOS3_OS5_OjOS7_SL_SL_SK_OSB_OSC_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queueP10_cl_kerneljPKmS7_S7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_EclEOS3_OS5_OjOS7_SL_SL_SK_OSB_OSC_() called");
    return 0;
}

/* Demangled: MK::CCLWaitForEvents::Record(unsigned int, _cl_event* const*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLWaitForEvents6RecordEjPKP9_cl_event(void) {
    ALOGD("_ZN2MK16CCLWaitForEvents6RecordEjPKP9_cl_event() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, _cl_device_id*>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, _cl_device_id*>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, _cl_device_id*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, _cl_device_id*>, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEP13_cl_device_idEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEP13_cl_device_idEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMarkerWithWaitList::CCLEnqueueMarkerWithWaitList(MK::CCLEnqueueMarkerWithWaitList const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK28CCLEnqueueMarkerWithWaitListC1ERKS0_(void) {
    ALOGD("_ZN2MK28CCLEnqueueMarkerWithWaitListC1ERKS0_() called");
    return 0;
}

/* Exported Object: vtable for MK::CCLImportMemory */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK15CCLImportMemoryE = NULL;

/* Demangled: MK::CCLRetainContext::GetMemoryUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK16CCLRetainContext13GetMemoryUsedEv(void) {
    ALOGD("_ZNK2MK16CCLRetainContext13GetMemoryUsedEv() called");
    return 0;
}

/* Demangled: MK::CCLRetainMemObject::Link(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK18CCLRetainMemObject4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK18CCLRetainMemObject4LinkERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_event*, int), std::__1::allocator<int (*)(_cl_event*, int)>, int (_cl_event*, int)>::__clone(std::__1::__function::__base<int (_cl_event*, int)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP9_cl_eventiENS_9allocatorIS5_EES4_E7__cloneEPNS0_6__baseIS4_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP9_cl_eventiENS_9allocatorIS5_EES4_E7__cloneEPNS0_6__baseIS4_EE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_device_id*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP13_cl_device_idjmPvPmENS_9allocatorIS7_EES6_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP13_cl_device_idjmPvPmENS_9allocatorIS7_EES6_E7destroyEv() called");
    return 0;
}

/* Demangled: CmdL_AttachclEnqueueCopyImage */
extern "C" __attribute__((visibility("default"))) int CmdL_AttachclEnqueueCopyImage(void) {
    ALOGD("CmdL_AttachclEnqueueCopyImage() called");
    return 0;
}

/* Demangled: MK::clCreateProgramWithBinary(_cl_context*, unsigned int, _cl_device_id* const*, unsigned long const*, unsigned char const**, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK25clCreateProgramWithBinaryEP11_cl_contextjPKP13_cl_device_idPKmPPKhPiSB_(void) {
    ALOGD("_ZN2MK25clCreateProgramWithBinaryEP11_cl_contextjPKP13_cl_device_idPKmPPKhPiSB_() called");
    return 0;
}

/* Exported Object: MK::CCLEnqueueWriteBuffer::ms_kRTTI */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK21CCLEnqueueWriteBuffer8ms_kRTTIE = NULL;

/* Demangled: MK::CCLImportMemory::GetDiskUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK15CCLImportMemory11GetDiskUsedEv(void) {
    ALOGD("_ZNK2MK15CCLImportMemory11GetDiskUsedEv() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMemoryCopy::~CCLEnqueueMemoryCopy() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK20CCLEnqueueMemoryCopyD1Ev(void) {
    ALOGD("_ZN2MK20CCLEnqueueMemoryCopyD1Ev() called");
    return 0;
}

/* Demangled: MK::CProgram::GetCommandIndex(MK::CCommand*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK8CProgram15GetCommandIndexEPNS_8CCommandE(void) {
    ALOGD("_ZN2MK8CProgram15GetCommandIndexEPNS_8CCommandE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_platform_id*, unsigned long, unsigned int, _cl_device_id**, unsigned int*), std::__1::allocator<int (*)(_cl_platform_id*, unsigned long, unsigned int, _cl_device_id**, unsigned int*)>, int (_cl_platform_id*, unsigned long, unsigned int, _cl_device_id**, unsigned int*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP15_cl_platform_idmjPP13_cl_device_idPjENS_9allocatorIS9_EES8_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP15_cl_platform_idmjPP13_cl_device_idPjENS_9allocatorIS9_EES8_E7destroyEv() called");
    return 0;
}

/* Demangled: MK::CBool::GetDiskUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK5CBool11GetDiskUsedEv(void) {
    ALOGD("_ZNK2MK5CBool11GetDiskUsedEv() called");
    return 0;
}

/* Exported Object: MK::CProgram::ms_kRTTI */
extern "C" __attribute__((visibility("default"))) void* _ZN2MK8CProgram8ms_kRTTIE = NULL;

/* Demangled: MK::CCLEnqueueCopyBufferToImage::Save(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK27CCLEnqueueCopyBufferToImage4SaveERNS_7CStreamE(void) {
    ALOGD("_ZN2MK27CCLEnqueueCopyBufferToImage4SaveERNS_7CStreamE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<_cl_event* (*)(_cl_context*, int*), std::__1::allocator<_cl_event* (*)(_cl_context*, int*)>, _cl_event* (_cl_context*, int*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFP9_cl_eventP11_cl_contextPiENS_9allocatorIS8_EES7_EE = NULL;

/* Demangled: CmdL_GetTreeNode */
extern "C" __attribute__((visibility("default"))) int CmdL_GetTreeNode(void) {
    ALOGD("CmdL_GetTreeNode() called");
    return 0;
}

/* Exported Object: vtable for MK::CCLReleaseKernel */
extern "C" __attribute__((visibility("default"))) void* _ZTVN2MK16CCLReleaseKernelE = NULL;

/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_mem*, unsigned long, unsigned int, void const*, int*), std::__1::allocator<_cl_mem* (*)(_cl_mem*, unsigned long, unsigned int, void const*, int*)>, _cl_mem* (_cl_mem*, unsigned long, unsigned int, void const*, int*)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFP7_cl_memS3_mjPKvPiENS_9allocatorIS8_EES7_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFP7_cl_memS3_mjPKvPiENS_9allocatorIS8_EES7_E7__cloneEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_S7_mmmmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_S7_mmmmjPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7destroyEv() called");
    return 0;
}

/* Demangled: MK::CDynamicData::Link(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK12CDynamicData4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK12CDynamicData4LinkERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: MK::CDynamicData::Record(int, void const*, unsigned long, int const*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK12CDynamicData6RecordEiPKvmPKi(void) {
    ALOGD("_ZN2MK12CDynamicData6RecordEiPKvmPKi() called");
    return 0;
}

/* Demangled: MKUtils_DumpCLProgramSources */
extern "C" __attribute__((visibility("default"))) int MKUtils_DumpCLProgramSources(void) {
    ALOGD("MKUtils_DumpCLProgramSources() called");
    return 0;
}

/* Demangled: MK::CCommand::CCommand(MK::CCommand const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK8CCommandC2ERKS0_(void) {
    ALOGD("_ZN2MK8CCommandC2ERKS0_() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_program*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, char const**, void (*)(_cl_program*, void*), void*), std::__1::allocator<int (*)(_cl_program*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, char const**, void (*)(_cl_program*, void*), void*)>, int (_cl_program*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, char const**, void (*)(_cl_program*, void*), void*)>::operator()(_cl_program*&&, unsigned int&&, _cl_device_id* const*&&, char const*&&, unsigned int&&, _cl_program* const*&&, char const**&&, void (*&&)(_cl_program*, void*), void*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP11_cl_programjPKP13_cl_device_idPKcjPKS3_PS9_PFvS3_PvESD_ENS_9allocatorISH_EESG_EclEOS3_OjOS7_OS9_SM_OSB_OSC_OSF_OSD_(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP11_cl_programjPKP13_cl_device_idPKcjPKS3_PS9_PFvS3_PvESD_ENS_9allocatorISH_EESG_EclEOS3_OjOS7_OS9_SM_OSB_OSC_OSF_OSD_() called");
    return 0;
}

/* Demangled: MKProgram_DetachProgram */
extern "C" __attribute__((visibility("default"))) int MKProgram_DetachProgram(void) {
    ALOGD("MKProgram_DetachProgram() called");
    return 0;
}

/* Demangled: MK::CStream::Size() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK7CStream4SizeEv(void) {
    ALOGD("_ZN2MK7CStream4SizeEv() called");
    return 0;
}

/* Demangled: MK::CCLCreateBuffer::CCLCreateBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLCreateBufferC2Ev(void) {
    ALOGD("_ZN2MK15CCLCreateBufferC2Ev() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, unsigned long, void*, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, unsigned long, void*, int*)>, _cl_mem* (_cl_context*, unsigned long, unsigned long, void*, int*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmmPvPiENS_9allocatorIS9_EES8_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmmPvPiENS_9allocatorIS9_EES8_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: MK::CDummyCommand::RegisterFactory() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK13CDummyCommand15RegisterFactoryEv(void) {
    ALOGD("_ZN2MK13CDummyCommand15RegisterFactoryEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<bool (*)(int, void*), std::__1::allocator<bool (*)(int, void*)>, bool (int, void*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFbiPvENS_9allocatorIS4_EES3_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFbiPvENS_9allocatorIS4_EES3_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: MK::clRetainDevice(_cl_device_id*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14clRetainDeviceEP13_cl_device_id(void) {
    ALOGD("_ZN2MK14clRetainDeviceEP13_cl_device_id() called");
    return 0;
}

/* Demangled: MK::clCreateContext(long const*, unsigned int, _cl_device_id* const*, void (*)(char const*, void const*, unsigned long, void*), void*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15clCreateContextEPKljPKP13_cl_device_idPFvPKcPKvmPvESA_Pi(void) {
    ALOGD("_ZN2MK15clCreateContextEPKljPKP13_cl_device_idPFvPKcPKvmPvESA_Pi() called");
    return 0;
}

/* Demangled: MK::clUnloadPlatformCompiler(_cl_platform_id*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK24clUnloadPlatformCompilerEP15_cl_platform_id(void) {
    ALOGD("_ZN2MK24clUnloadPlatformCompilerEP15_cl_platform_id() called");
    return 0;
}

/* Demangled: MK::CCLCreateProgramWithBinary::CCLCreateProgramWithBinary(MK::CCLCreateProgramWithBinary const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK26CCLCreateProgramWithBinaryC1ERKS0_(void) {
    ALOGD("_ZN2MK26CCLCreateProgramWithBinaryC1ERKS0_() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueSVMUnmap::CCLEnqueueSVMUnmap(MK::CCLEnqueueSVMUnmap const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK18CCLEnqueueSVMUnmapC2ERKS0_(void) {
    ALOGD("_ZN2MK18CCLEnqueueSVMUnmapC2ERKS0_() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_program*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_program*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_program*, _cl_device_id*, unsigned int, unsigned long, void*, unsigned long*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP11_cl_programP13_cl_device_idjmPvPmENS_9allocatorIS9_EES8_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP11_cl_programP13_cl_device_idjmPvPmENS_9allocatorIS9_EES8_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long const*, unsigned long const*, unsigned long, unsigned long, void const*, unsigned int, _cl_event* const*, _cl_event**)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_mmPKvjPKP9_cl_eventPSB_ENS_9allocatorISG_EESF_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memjPKmS7_mmPKvjPKP9_cl_eventPSB_ENS_9allocatorISG_EESF_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: MK::clCompileProgram(_cl_program*, unsigned int, _cl_device_id* const*, char const*, unsigned int, _cl_program* const*, char const**, void (*)(_cl_program*, void*), void*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16clCompileProgramEP11_cl_programjPKP13_cl_device_idPKcjPKS1_PS7_PFvS1_PvESB_(void) {
    ALOGD("_ZN2MK16clCompileProgramEP11_cl_programjPKP13_cl_device_idPKcjPKS1_PS7_PFvS1_PvESB_() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMapBuffer::CCLEnqueueMapBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK19CCLEnqueueMapBufferC1Ev(void) {
    ALOGD("_ZN2MK19CCLEnqueueMapBufferC1Ev() called");
    return 0;
}

/* Demangled: MK::CCLFlush::RegisterUniqueObject(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK8CCLFlush20RegisterUniqueObjectERNS_7CStreamE(void) {
    ALOGD("_ZN2MK8CCLFlush20RegisterUniqueObjectERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CCLPrepareMemoryCopy::GetCLKernelCode() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK20CCLPrepareMemoryCopy15GetCLKernelCodeEv(void) {
    ALOGD("_ZN2MK20CCLPrepareMemoryCopy15GetCLKernelCodeEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<int (*)(_cl_context*, unsigned long, unsigned int, unsigned int, _cl_image_format*, unsigned int*), std::__1::allocator<int (*)(_cl_context*, unsigned long, unsigned int, unsigned int, _cl_image_format*, unsigned int*)>, int (_cl_context*, unsigned long, unsigned int, unsigned int, _cl_image_format*, unsigned int*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFiP11_cl_contextmjjP16_cl_image_formatPjENS_9allocatorIS8_EES7_EE = NULL;

/* Demangled: MKConfig_EndProfileCL */
extern "C" __attribute__((visibility("default"))) int MKConfig_EndProfileCL(void) {
    ALOGD("MKConfig_EndProfileCL() called");
    return 0;
}

/* Demangled: MK::clSetKernelArgSVMPointer(_cl_kernel*, unsigned int, void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK24clSetKernelArgSVMPointerEP10_cl_kerneljPKv(void) {
    ALOGD("_ZN2MK24clSetKernelArgSVMPointerEP10_cl_kerneljPKv() called");
    return 0;
}

/* Demangled: MK::CCLCreateBuffer::~CCLCreateBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLCreateBufferD1Ev(void) {
    ALOGD("_ZN2MK15CCLCreateBufferD1Ev() called");
    return 0;
}

/* Demangled: MK::CCLReleaseMemObject::CopyConstructTo() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK19CCLReleaseMemObject15CopyConstructToEv(void) {
    ALOGD("_ZNK2MK19CCLReleaseMemObject15CopyConstructToEv() called");
    return 0;
}

/* Demangled: MKProgram_AttachCLBuildProgram */
extern "C" __attribute__((visibility("default"))) int MKProgram_AttachCLBuildProgram(void) {
    ALOGD("MKProgram_AttachCLBuildProgram() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_sampler* (*)(_cl_context*, unsigned int, unsigned int, unsigned int, int*), std::__1::allocator<_cl_sampler* (*)(_cl_context*, unsigned int, unsigned int, unsigned int, int*)>, _cl_sampler* (_cl_context*, unsigned int, unsigned int, unsigned int, int*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFP11_cl_samplerP11_cl_contextjjjPiENS_9allocatorIS8_EES7_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFP11_cl_samplerP11_cl_contextjjjPiENS_9allocatorIS8_EES7_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: MK::CJsonLog::Log(char const*, MK::CObject const*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK8CJsonLog3LogEPKcPKNS_7CObjectE(void) {
    ALOGD("_ZN2MK8CJsonLog3LogEPKcPKNS_7CObjectE() called");
    return 0;
}

/* Demangled: MK::CMemoryCopy::Factory(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CMemoryCopy7FactoryERNS_7CStreamE(void) {
    ALOGD("_ZN2MK11CMemoryCopy7FactoryERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MKConfig_DebugBitTrue */
extern "C" __attribute__((visibility("default"))) int MKConfig_DebugBitTrue(void) {
    ALOGD("MKConfig_DebugBitTrue() called");
    return 0;
}

/* Demangled: MK::CCLBuildProgram::GetDeviceCLVersion(_cl_program*, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLBuildProgram18GetDeviceCLVersionEP11_cl_programRNSt3__16vectorINS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEENS8_ISA_EEEE(void) {
    ALOGD("_ZN2MK15CCLBuildProgram18GetDeviceCLVersionEP11_cl_programRNSt3__16vectorINS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEENS8_ISA_EEEE() called");
    return 0;
}

/* Demangled: MK::CCLBuildProgram::Link(MK::CStream&, MK::CStream::CMemberLink*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLBuildProgram4LinkERNS_7CStreamEPNS1_11CMemberLinkE(void) {
    ALOGD("_ZN2MK15CCLBuildProgram4LinkERNS_7CStreamEPNS1_11CMemberLinkE() called");
    return 0;
}

/* Demangled: MK::CCLCreateContext::RegisterUniqueObject(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLCreateContext20RegisterUniqueObjectERNS_7CStreamE(void) {
    ALOGD("_ZN2MK16CCLCreateContext20RegisterUniqueObjectERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CCLRetainContext::CCLRetainContext(MK::CCLRetainContext const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16CCLRetainContextC1ERKS0_(void) {
    ALOGD("_ZN2MK16CCLRetainContextC1ERKS0_() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, unsigned int, unsigned int, long const*, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, unsigned int, unsigned int, long const*, int*)>, _cl_mem* (_cl_context*, unsigned long, unsigned int, unsigned int, long const*, int*)>::__clone(std::__1::__function::__base<_cl_mem* (_cl_context*, unsigned long, unsigned int, unsigned int, long const*, int*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmjjPKlPiENS_9allocatorISA_EES9_E7__cloneEPNS0_6__baseIS9_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmjjPKlPiENS_9allocatorISA_EES9_E7__cloneEPNS0_6__baseIS9_EE() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_event**)>, int (_cl_command_queue*, _cl_event**)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queuePP9_cl_eventENS_9allocatorIS8_EES7_EE = NULL;

/* Demangled: MK::CCLPrepareMemoryCopy::CCLPrepareMemoryCopy(MK::CCLPrepareMemoryCopy const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK20CCLPrepareMemoryCopyC2ERKS0_(void) {
    ALOGD("_ZN2MK20CCLPrepareMemoryCopyC2ERKS0_() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<void* (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**, int*), std::__1::allocator<void* (*)(_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**, int*)>, void* (_cl_command_queue*, _cl_mem*, unsigned int, unsigned long, unsigned long, unsigned long, unsigned int, _cl_event* const*, _cl_event**, int*)>::destroy_deallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFPvP17_cl_command_queueP7_cl_memjmmmjPKP9_cl_eventPS8_PiENS_9allocatorISE_EESD_E18destroy_deallocateEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFPvP17_cl_command_queueP7_cl_memjmmmjPKP9_cl_eventPS8_PiENS_9allocatorISE_EESD_E18destroy_deallocateEv() called");
    return 0;
}

/* Demangled: MK::CObject::IsDerivedFromClass(MK::CRTTI const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK7CObject18IsDerivedFromClassEPKNS_5CRTTIE(void) {
    ALOGD("_ZNK2MK7CObject18IsDerivedFromClassEPKNS_5CRTTIE() called");
    return 0;
}

/* Demangled: CmdL_InsertTreeNode */
extern "C" __attribute__((visibility("default"))) int CmdL_InsertTreeNode(void) {
    ALOGD("CmdL_InsertTreeNode() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMapBuffer::~CCLEnqueueMapBuffer() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK19CCLEnqueueMapBufferD0Ev(void) {
    ALOGD("_ZN2MK19CCLEnqueueMapBufferD0Ev() called");
    return 0;
}

/* Demangled: MK::CCLReleaseMemObject::CCLReleaseMemObject() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK19CCLReleaseMemObjectC2Ev(void) {
    ALOGD("_ZN2MK19CCLReleaseMemObjectC2Ev() called");
    return 0;
}

/* Demangled: MK::CCLReleaseEvent::CCLReleaseEvent(MK::CCLReleaseEvent const&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK15CCLReleaseEventC1ERKS0_(void) {
    ALOGD("_ZN2MK15CCLReleaseEventC1ERKS0_() called");
    return 0;
}

/* Demangled: MK::CCLReleaseEvent::GetMemoryUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK15CCLReleaseEvent13GetMemoryUsedEv(void) {
    ALOGD("_ZNK2MK15CCLReleaseEvent13GetMemoryUsedEv() called");
    return 0;
}

/* Demangled: MK::clUnloadCompiler() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK16clUnloadCompilerEv(void) {
    ALOGD("_ZN2MK16clUnloadCompilerEv() called");
    return 0;
}

/* Demangled: clReleaseEvent */
extern "C" __attribute__((visibility("default"))) int clReleaseEvent(void) {
    ALOGD("clReleaseEvent() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueWriteBuffer::GetDiskUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK21CCLEnqueueWriteBuffer11GetDiskUsedEv(void) {
    ALOGD("_ZNK2MK21CCLEnqueueWriteBuffer11GetDiskUsedEv() called");
    return 0;
}

/* Demangled: MKProgram_ReplaceWithCLCreateProgramWithBinary */
extern "C" __attribute__((visibility("default"))) int MKProgram_ReplaceWithCLCreateProgramWithBinary(void) {
    ALOGD("MKProgram_ReplaceWithCLCreateProgramWithBinary() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, _cl_mem*, unsigned long const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>::__clone() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_S7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEv(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memS5_PKmS7_S7_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEv() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<_cl_mem* (*)(_cl_context*, unsigned long, long const*, void*, unsigned long, int*), std::__1::allocator<_cl_mem* (*)(_cl_context*, unsigned long, long const*, void*, unsigned long, int*)>, _cl_mem* (_cl_context*, unsigned long, long const*, void*, unsigned long, int*)>::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPKlPvmPiENS_9allocatorISB_EESA_E7destroyEv(void) {
    ALOGD("_ZNSt3__110__function6__funcIPFP7_cl_memP11_cl_contextmPKlPvmPiENS_9allocatorISB_EESA_E7destroyEv() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<int (*)(_cl_kernel*, unsigned int, unsigned int, unsigned long, void*, unsigned long*), std::__1::allocator<int (*)(_cl_kernel*, unsigned int, unsigned int, unsigned long, void*, unsigned long*)>, int (_cl_kernel*, unsigned int, unsigned int, unsigned long, void*, unsigned long*)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFiP10_cl_kerneljjmPvPmENS_9allocatorIS7_EES6_EE = NULL;

/* Demangled: MK::CCLReleaseMemObject::~CCLReleaseMemObject() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK19CCLReleaseMemObjectD1Ev(void) {
    ALOGD("_ZN2MK19CCLReleaseMemObjectD1Ev() called");
    return 0;
}

/* Demangled: MK::CCLRetainCommandQueue::RegisterUniqueObject(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK21CCLRetainCommandQueue20RegisterUniqueObjectERNS_7CStreamE(void) {
    ALOGD("_ZN2MK21CCLRetainCommandQueue20RegisterUniqueObjectERNS_7CStreamE() called");
    return 0;
}

/* Demangled: void std::__1::vector<MK::CPointer<MK::CCLCreateProgramWithSource>, std::__1::allocator<MK::CPointer<MK::CCLCreateProgramWithSource> > >::__push_back_slow_path<MK::CPointer<MK::CCLCreateProgramWithSource> >(MK::CPointer<MK::CCLCreateProgramWithSource>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN2MK8CPointerINS1_26CCLCreateProgramWithSourceEEENS_9allocatorIS4_EEE21__push_back_slow_pathIS4_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN2MK8CPointerINS1_26CCLCreateProgramWithSourceEEENS_9allocatorIS4_EEE21__push_back_slow_pathIS4_EEvOT_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_mem*, void const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_mem*, void const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, _cl_mem*, void const*, unsigned long const*, unsigned long const*, unsigned int, _cl_event* const*, _cl_event**)> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__110__function6__funcIPFiP17_cl_command_queueP7_cl_memPKvPKmS9_jPKP9_cl_eventPSB_ENS_9allocatorISG_EESF_EE = NULL;

/* Demangled: MK::CProgram::GetMemoryUsed() const */
extern "C" __attribute__((visibility("default"))) int _ZNK2MK8CProgram13GetMemoryUsedEv(void) {
    ALOGD("_ZNK2MK8CProgram13GetMemoryUsedEv() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIP10_cl_kernelNS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIP10_cl_kernelNS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_(void) {
    ALOGD("_ZNSt3__16vectorIP10_cl_kernelNS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_() called");
    return 0;
}

/* Demangled: MK::CCLReleaseMemObject::RegisterUniqueObject(MK::CStream&) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK19CCLReleaseMemObject20RegisterUniqueObjectERNS_7CStreamE(void) {
    ALOGD("_ZN2MK19CCLReleaseMemObject20RegisterUniqueObjectERNS_7CStreamE() called");
    return 0;
}

/* Demangled: MK::CInputTensors::AddRecord(int, void const*, unsigned long, int const*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK13CInputTensors9AddRecordEiPKvmPKi(void) {
    ALOGD("_ZN2MK13CInputTensors9AddRecordEiPKvmPKi() called");
    return 0;
}

/* Demangled: MK::CStaticData::Record(void const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK11CStaticData6RecordEPKvm(void) {
    ALOGD("_ZN2MK11CStaticData6RecordEPKvm() called");
    return 0;
}

/* Demangled: MK::CProgram::DetachCommand(MK::CCommand*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK8CProgram13DetachCommandEPNS_8CCommandE(void) {
    ALOGD("_ZN2MK8CProgram13DetachCommandEPNS_8CCommandE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, _cl_event**)>, int (_cl_command_queue*, _cl_event**)>::__clone(std::__1::__function::__base<int (_cl_command_queue*, _cl_event**)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuePP9_cl_eventENS_9allocatorIS8_EES7_E7__cloneEPNS0_6__baseIS7_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP17_cl_command_queuePP9_cl_eventENS_9allocatorIS8_EES7_E7__cloneEPNS0_6__baseIS7_EE() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<int (*)(_cl_command_queue*, unsigned int, void**, void (*)(_cl_command_queue*, unsigned int, void**, void*), void*, unsigned int, _cl_event* const*, _cl_event**), std::__1::allocator<int (*)(_cl_command_queue*, unsigned int, void**, void (*)(_cl_command_queue*, unsigned int, void**, void*), void*, unsigned int, _cl_event* const*, _cl_event**)>, int (_cl_command_queue*, unsigned int, void**, void (*)(_cl_command_queue*, unsigned int, void**, void*), void*, unsigned int, _cl_event* const*, _cl_event**)>::__clone(std::__1::__function::__base<int (_cl_command_queue*, unsigned int, void**, void (*)(_cl_command_queue*, unsigned int, void**, void*), void*, unsigned int, _cl_event* const*, _cl_event**)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFiP17_cl_command_queuejPPvPFvS3_jS5_S4_ES4_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEPNS0_6__baseISD_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFiP17_cl_command_queuejPPvPFvS3_jS5_S4_ES4_jPKP9_cl_eventPS9_ENS_9allocatorISE_EESD_E7__cloneEPNS0_6__baseISD_EE() called");
    return 0;
}

/* Demangled: MK::CContextGlobal::RecordProgramBuildOption(_cl_program*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK14CContextGlobal24RecordProgramBuildOptionEP11_cl_programPKc(void) {
    ALOGD("_ZN2MK14CContextGlobal24RecordProgramBuildOptionEP11_cl_programPKc() called");
    return 0;
}

/* Demangled: MK::CCLEnqueueMarkerWithWaitList::~CCLEnqueueMarkerWithWaitList() */
extern "C" __attribute__((visibility("default"))) int _ZN2MK28CCLEnqueueMarkerWithWaitListD2Ev(void) {
    ALOGD("_ZN2MK28CCLEnqueueMarkerWithWaitListD2Ev() called");
    return 0;
}

/* Demangled: std::__1::__function::__func<void (*)(_cl_context*, void*), std::__1::allocator<void (*)(_cl_context*, void*)>, void (_cl_context*, void*)>::__clone(std::__1::__function::__base<void (_cl_context*, void*)>*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__110__function6__funcIPFvP11_cl_contextPvENS_9allocatorIS6_EES5_E7__cloneEPNS0_6__baseIS5_EE(void) {
    ALOGD("_ZNKSt3__110__function6__funcIPFvP11_cl_contextPvENS_9allocatorIS6_EES5_E7__cloneEPNS0_6__baseIS5_EE() called");
    return 0;
}

/* Demangled: MK::clCreateProgramWithSource(_cl_context*, unsigned int, char const**, unsigned long const*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN2MK25clCreateProgramWithSourceEP11_cl_contextjPPKcPKmPi(void) {
    ALOGD("_ZN2MK25clCreateProgramWithSourceEP11_cl_contextjPPKcPKmPi() called");
    return 0;
}
