/*
 * Reverse-Engineered ABI Specification for: libOpenCL.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libOpenCL.so
 */

#ifndef BEGONIA_RE_LIBOPENCL_H
#define BEGONIA_RE_LIBOPENCL_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: clCreateFromGLTexture3D */
/* Demangled: clCreateFromGLTexture3D */
int clCreateFromGLTexture3D(void);

/* Symbol: clGetEventInfo */
/* Demangled: clGetEventInfo */
int clGetEventInfo(void);

/* Symbol: clRetainDevice */
/* Demangled: clRetainDevice */
int clRetainDevice(void);

/* Symbol: _Z34khrIcdContextPropertiesGetPlatformPKiPP15_cl_platform_id */
/* Demangled: khrIcdContextPropertiesGetPlatform(int const*, _cl_platform_id**) */
int _Z34khrIcdContextPropertiesGetPlatformPKiPP15_cl_platform_id(void);

/* Symbol: _Z7TraceCLPKciz */
/* Demangled: TraceCL(char const*, int, ...) */
int _Z7TraceCLPKciz(void);

/* Symbol: clEnqueueReleaseGLObjects */
/* Demangled: clEnqueueReleaseGLObjects */
int clEnqueueReleaseGLObjects(void);

/* Symbol: clEnqueueSVMMap */
/* Demangled: clEnqueueSVMMap */
int clEnqueueSVMMap(void);

/* Symbol: clGetProgramInfo */
/* Demangled: clGetProgramInfo */
int clGetProgramInfo(void);

/* Symbol: clCreateContextFromType */
/* Demangled: clCreateContextFromType */
int clCreateContextFromType(void);

/* Symbol: clCreateFromGLTexture2D */
/* Demangled: clCreateFromGLTexture2D */
int clCreateFromGLTexture2D(void);

/* Symbol: clCreatePipe */
/* Demangled: clCreatePipe */
int clCreatePipe(void);

/* Symbol: clReleaseMemObject */
/* Demangled: clReleaseMemObject */
int clReleaseMemObject(void);

/* Symbol: clSetKernelArg */
/* Demangled: clSetKernelArg */
int clSetKernelArg(void);

/* Symbol: clEnqueueMapBuffer */
/* Demangled: clEnqueueMapBuffer */
int clEnqueueMapBuffer(void);

/* Symbol: clSVMAlloc */
/* Demangled: clSVMAlloc */
int clSVMAlloc(void);

/* Symbol: sCLSystraceEnabled */
/* Demangled: sCLSystraceEnabled */
extern void* sCLSystraceEnabled;

/* Symbol: _Z24khrIcdOsVendorsEnumeratev */
/* Demangled: khrIcdOsVendorsEnumerate() */
int _Z24khrIcdOsVendorsEnumeratev(void);

/* Symbol: clCreateProgramWithSource */
/* Demangled: clCreateProgramWithSource */
int clCreateProgramWithSource(void);

/* Symbol: clEnqueueMapImage */
/* Demangled: clEnqueueMapImage */
int clEnqueueMapImage(void);

/* Symbol: clGetDeviceInfo */
/* Demangled: clGetDeviceInfo */
int clGetDeviceInfo(void);

/* Symbol: clGetKernelSubGroupInfo */
/* Demangled: clGetKernelSubGroupInfo */
int clGetKernelSubGroupInfo(void);

/* Symbol: clRetainDeviceEXT */
/* Demangled: clRetainDeviceEXT */
int clRetainDeviceEXT(void);

/* Symbol: clUnloadPlatformCompiler */
/* Demangled: clUnloadPlatformCompiler */
int clUnloadPlatformCompiler(void);

/* Symbol: _Z21khrIcdOsLibraryUnloadPv */
/* Demangled: khrIcdOsLibraryUnload(void*) */
int _Z21khrIcdOsLibraryUnloadPv(void);

/* Symbol: khrIcdVendors */
/* Demangled: khrIcdVendors */
extern void* khrIcdVendors;

/* Symbol: clEnqueueReleaseEGLObjectsKHR */
/* Demangled: clEnqueueReleaseEGLObjectsKHR */
int clEnqueueReleaseEGLObjectsKHR(void);

/* Symbol: clEnqueueWriteBufferRect */
/* Demangled: clEnqueueWriteBufferRect */
int clEnqueueWriteBufferRect(void);

/* Symbol: clReleaseProgram */
/* Demangled: clReleaseProgram */
int clReleaseProgram(void);

/* Symbol: clEnqueueCopyImageToBuffer */
/* Demangled: clEnqueueCopyImageToBuffer */
int clEnqueueCopyImageToBuffer(void);

/* Symbol: clRetainContext */
/* Demangled: clRetainContext */
int clRetainContext(void);

/* Symbol: clRetainKernel */
/* Demangled: clRetainKernel */
int clRetainKernel(void);

/* Symbol: clSetKernelExecInfo */
/* Demangled: clSetKernelExecInfo */
int clSetKernelExecInfo(void);

/* Symbol: clCreateEventFromEGLSyncKHR */
/* Demangled: clCreateEventFromEGLSyncKHR */
int clCreateEventFromEGLSyncKHR(void);

/* Symbol: clGetPlatformInfo */
/* Demangled: clGetPlatformInfo */
int clGetPlatformInfo(void);

/* Symbol: clCreateSubDevicesEXT */
/* Demangled: clCreateSubDevicesEXT */
int clCreateSubDevicesEXT(void);

/* Symbol: clCreateUserEvent */
/* Demangled: clCreateUserEvent */
int clCreateUserEvent(void);

/* Symbol: clEnqueueReadBufferRect */
/* Demangled: clEnqueueReadBufferRect */
int clEnqueueReadBufferRect(void);

/* Symbol: clEnqueueSVMFree */
/* Demangled: clEnqueueSVMFree */
int clEnqueueSVMFree(void);

/* Symbol: clSetMemObjectDestructorCallback */
/* Demangled: clSetMemObjectDestructorCallback */
int clSetMemObjectDestructorCallback(void);

/* Symbol: clCreateProgramWithBinary */
/* Demangled: clCreateProgramWithBinary */
int clCreateProgramWithBinary(void);

/* Symbol: clEnqueueBarrierWithWaitList */
/* Demangled: clEnqueueBarrierWithWaitList */
int clEnqueueBarrierWithWaitList(void);

/* Symbol: clEnqueueFillBuffer */
/* Demangled: clEnqueueFillBuffer */
int clEnqueueFillBuffer(void);

/* Symbol: clEnqueueSVMMemcpy */
/* Demangled: clEnqueueSVMMemcpy */
int clEnqueueSVMMemcpy(void);

/* Symbol: clGetImageInfo */
/* Demangled: clGetImageInfo */
int clGetImageInfo(void);

/* Symbol: clWaitForEvents */
/* Demangled: clWaitForEvents */
int clWaitForEvents(void);

/* Symbol: clCreateEventFromGLsyncKHR */
/* Demangled: clCreateEventFromGLsyncKHR */
int clCreateEventFromGLsyncKHR(void);

/* Symbol: clCreateImage3D */
/* Demangled: clCreateImage3D */
int clCreateImage3D(void);

/* Symbol: clCreateSampler */
/* Demangled: clCreateSampler */
int clCreateSampler(void);

/* Symbol: clEnqueueCopyBuffer */
/* Demangled: clEnqueueCopyBuffer */
int clEnqueueCopyBuffer(void);

/* Symbol: clEnqueueWriteImage */
/* Demangled: clEnqueueWriteImage */
int clEnqueueWriteImage(void);

/* Symbol: _Z15khrIcdVendorAddPKc */
/* Demangled: khrIcdVendorAdd(char const*) */
int _Z15khrIcdVendorAddPKc(void);

/* Symbol: _Z33khrIcdOsLibraryGetFunctionAddressPvPKc */
/* Demangled: khrIcdOsLibraryGetFunctionAddress(void*, char const*) */
int _Z33khrIcdOsLibraryGetFunctionAddressPvPKc(void);

/* Symbol: clCloneKernel */
/* Demangled: clCloneKernel */
int clCloneKernel(void);

/* Symbol: clEnqueueMarker */
/* Demangled: clEnqueueMarker */
int clEnqueueMarker(void);

/* Symbol: clGetExtensionFunctionAddressForPlatform */
/* Demangled: clGetExtensionFunctionAddressForPlatform */
int clGetExtensionFunctionAddressForPlatform(void);

/* Symbol: clReleaseContext */
/* Demangled: clReleaseContext */
int clReleaseContext(void);

/* Symbol: clReleaseDevice */
/* Demangled: clReleaseDevice */
int clReleaseDevice(void);

/* Symbol: clRetainMemObject */
/* Demangled: clRetainMemObject */
int clRetainMemObject(void);

/* Symbol: clCreateImage2D */
/* Demangled: clCreateImage2D */
int clCreateImage2D(void);

/* Symbol: clGetGLObjectInfo */
/* Demangled: clGetGLObjectInfo */
int clGetGLObjectInfo(void);

/* Symbol: clLinkProgram */
/* Demangled: clLinkProgram */
int clLinkProgram(void);

/* Symbol: clCreateBuffer */
/* Demangled: clCreateBuffer */
int clCreateBuffer(void);

/* Symbol: clCreateImage */
/* Demangled: clCreateImage */
int clCreateImage(void);

/* Symbol: clCreateKernelsInProgram */
/* Demangled: clCreateKernelsInProgram */
int clCreateKernelsInProgram(void);

/* Symbol: clEnqueueMarkerWithWaitList */
/* Demangled: clEnqueueMarkerWithWaitList */
int clEnqueueMarkerWithWaitList(void);

/* Symbol: clGetGLTextureInfo */
/* Demangled: clGetGLTextureInfo */
int clGetGLTextureInfo(void);

/* Symbol: clGetKernelWorkGroupInfo */
/* Demangled: clGetKernelWorkGroupInfo */
int clGetKernelWorkGroupInfo(void);

/* Symbol: clReleaseEvent */
/* Demangled: clReleaseEvent */
int clReleaseEvent(void);

/* Symbol: clRetainCommandQueue */
/* Demangled: clRetainCommandQueue */
int clRetainCommandQueue(void);

/* Symbol: clSetDefaultDeviceCommandQueue */
/* Demangled: clSetDefaultDeviceCommandQueue */
int clSetDefaultDeviceCommandQueue(void);

/* Symbol: clFinish */
/* Demangled: clFinish */
int clFinish(void);

/* Symbol: clGetMemObjectInfo */
/* Demangled: clGetMemObjectInfo */
int clGetMemObjectInfo(void);

/* Symbol: clGetPipeInfo */
/* Demangled: clGetPipeInfo */
int clGetPipeInfo(void);

/* Symbol: clGetPlatformIDs */
/* Demangled: clGetPlatformIDs */
int clGetPlatformIDs(void);

/* Symbol: clGetSamplerInfo */
/* Demangled: clGetSamplerInfo */
int clGetSamplerInfo(void);

/* Symbol: clReleaseSampler */
/* Demangled: clReleaseSampler */
int clReleaseSampler(void);

/* Symbol: _Z34clSetProgramSpecializationConstantP11_cl_programjjPKv */
/* Demangled: clSetProgramSpecializationConstant(_cl_program*, unsigned int, unsigned int, void const*) */
int _Z34clSetProgramSpecializationConstantP11_cl_programjjPKv(void);

/* Symbol: clCreateFromGLBuffer */
/* Demangled: clCreateFromGLBuffer */
int clCreateFromGLBuffer(void);

/* Symbol: clEnqueueCopyBufferToImage */
/* Demangled: clEnqueueCopyBufferToImage */
int clEnqueueCopyBufferToImage(void);

/* Symbol: clGetGLContextInfoKHR */
/* Demangled: clGetGLContextInfoKHR */
int clGetGLContextInfoKHR(void);

/* Symbol: clEnqueueNDRangeKernel */
/* Demangled: clEnqueueNDRangeKernel */
int clEnqueueNDRangeKernel(void);

/* Symbol: clEnqueueSVMMigrateMem */
/* Demangled: clEnqueueSVMMigrateMem */
int clEnqueueSVMMigrateMem(void);

/* Symbol: clEnqueueWaitForEvents */
/* Demangled: clEnqueueWaitForEvents */
int clEnqueueWaitForEvents(void);

/* Symbol: clGetDeviceIDs */
/* Demangled: clGetDeviceIDs */
int clGetDeviceIDs(void);

/* Symbol: clCompileProgram */
/* Demangled: clCompileProgram */
int clCompileProgram(void);

/* Symbol: clReleaseKernel */
/* Demangled: clReleaseKernel */
int clReleaseKernel(void);

/* Symbol: sCLTraceLevel */
/* Demangled: sCLTraceLevel */
extern void* sCLTraceLevel;

/* Symbol: _Z16initCLTraceLevelv */
/* Demangled: initCLTraceLevel() */
int _Z16initCLTraceLevelv(void);

/* Symbol: _Z19khrIcdOsLibraryLoadPKc */
/* Demangled: khrIcdOsLibraryLoad(char const*) */
int _Z19khrIcdOsLibraryLoadPKc(void);

/* Symbol: clCreateContext */
/* Demangled: clCreateContext */
int clCreateContext(void);

/* Symbol: clEnqueueAcquireGLObjects */
/* Demangled: clEnqueueAcquireGLObjects */
int clEnqueueAcquireGLObjects(void);

/* Symbol: clGetExtensionFunctionAddress */
/* Demangled: clGetExtensionFunctionAddress */
int clGetExtensionFunctionAddress(void);

/* Symbol: clGetHostTimer */
/* Demangled: clGetHostTimer */
int clGetHostTimer(void);

/* Symbol: clFlush */
/* Demangled: clFlush */
int clFlush(void);

/* Symbol: clEnqueueWriteBuffer */
/* Demangled: clEnqueueWriteBuffer */
int clEnqueueWriteBuffer(void);

/* Symbol: clGetKernelInfo */
/* Demangled: clGetKernelInfo */
int clGetKernelInfo(void);

/* Symbol: clGetProgramBuildInfo */
/* Demangled: clGetProgramBuildInfo */
int clGetProgramBuildInfo(void);

/* Symbol: _Z28khrIcdOsVendorsEnumerateOncev */
/* Demangled: khrIcdOsVendorsEnumerateOnce() */
int _Z28khrIcdOsVendorsEnumerateOncev(void);

/* Symbol: clEnqueueReadBuffer */
/* Demangled: clEnqueueReadBuffer */
int clEnqueueReadBuffer(void);

/* Symbol: clGetSupportedImageFormats */
/* Demangled: clGetSupportedImageFormats */
int clGetSupportedImageFormats(void);

/* Symbol: clCreateSubDevices */
/* Demangled: clCreateSubDevices */
int clCreateSubDevices(void);

/* Symbol: clEnqueueFillImage */
/* Demangled: clEnqueueFillImage */
int clEnqueueFillImage(void);

/* Symbol: clSetEventCallback */
/* Demangled: clSetEventCallback */
int clSetEventCallback(void);

/* Symbol: clCreateCommandQueue */
/* Demangled: clCreateCommandQueue */
int clCreateCommandQueue(void);

/* Symbol: clCreateFromGLTexture */
/* Demangled: clCreateFromGLTexture */
int clCreateFromGLTexture(void);

/* Symbol: clCreateProgramWithBuiltInKernels */
/* Demangled: clCreateProgramWithBuiltInKernels */
int clCreateProgramWithBuiltInKernels(void);

/* Symbol: clCreateProgramWithIL */
/* Demangled: clCreateProgramWithIL */
int clCreateProgramWithIL(void);

/* Symbol: clSetCommandQueueProperty */
/* Demangled: clSetCommandQueueProperty */
int clSetCommandQueueProperty(void);

/* Symbol: clCreateCommandQueueWithProperties */
/* Demangled: clCreateCommandQueueWithProperties */
int clCreateCommandQueueWithProperties(void);

/* Symbol: clEnqueueSVMUnmap */
/* Demangled: clEnqueueSVMUnmap */
int clEnqueueSVMUnmap(void);

/* Symbol: clReleaseCommandQueue */
/* Demangled: clReleaseCommandQueue */
int clReleaseCommandQueue(void);

/* Symbol: clRetainEvent */
/* Demangled: clRetainEvent */
int clRetainEvent(void);

/* Symbol: clCreateSubBuffer */
/* Demangled: clCreateSubBuffer */
int clCreateSubBuffer(void);

/* Symbol: clEnqueueCopyBufferRect */
/* Demangled: clEnqueueCopyBufferRect */
int clEnqueueCopyBufferRect(void);

/* Symbol: clUnloadCompiler */
/* Demangled: clUnloadCompiler */
int clUnloadCompiler(void);

/* Symbol: clCreateFromEGLImageKHR */
/* Demangled: clCreateFromEGLImageKHR */
int clCreateFromEGLImageKHR(void);

/* Symbol: clCreateSamplerWithProperties */
/* Demangled: clCreateSamplerWithProperties */
int clCreateSamplerWithProperties(void);

/* Symbol: clGetEventProfilingInfo */
/* Demangled: clGetEventProfilingInfo */
int clGetEventProfilingInfo(void);

/* Symbol: clGetKernelSubGroupInfoKHR */
/* Demangled: clGetKernelSubGroupInfoKHR */
int clGetKernelSubGroupInfoKHR(void);

/* Symbol: clSetKernelArgSVMPointer */
/* Demangled: clSetKernelArgSVMPointer */
int clSetKernelArgSVMPointer(void);

/* Symbol: clSetUserEventStatus */
/* Demangled: clSetUserEventStatus */
int clSetUserEventStatus(void);

/* Symbol: clEnqueueSVMMemFill */
/* Demangled: clEnqueueSVMMemFill */
int clEnqueueSVMMemFill(void);

/* Symbol: clGetCommandQueueInfo */
/* Demangled: clGetCommandQueueInfo */
int clGetCommandQueueInfo(void);

/* Symbol: clReleaseDeviceEXT */
/* Demangled: clReleaseDeviceEXT */
int clReleaseDeviceEXT(void);

/* Symbol: clSVMFree */
/* Demangled: clSVMFree */
int clSVMFree(void);

/* Symbol: clCreateKernel */
/* Demangled: clCreateKernel */
int clCreateKernel(void);

/* Symbol: clGetContextInfo */
/* Demangled: clGetContextInfo */
int clGetContextInfo(void);

/* Symbol: _Z16khrIcdInitializev */
/* Demangled: khrIcdInitialize() */
int _Z16khrIcdInitializev(void);

/* Symbol: clBuildProgram */
/* Demangled: clBuildProgram */
int clBuildProgram(void);

/* Symbol: clEnqueueBarrier */
/* Demangled: clEnqueueBarrier */
int clEnqueueBarrier(void);

/* Symbol: clGetDeviceAndHostTimer */
/* Demangled: clGetDeviceAndHostTimer */
int clGetDeviceAndHostTimer(void);

/* Symbol: _Z27clSetProgramReleaseCallbackP11_cl_programPFvS0_PvES1_ */
/* Demangled: clSetProgramReleaseCallback(_cl_program*, void (*)(_cl_program*, void*), void*) */
int _Z27clSetProgramReleaseCallbackP11_cl_programPFvS0_PvES1_(void);

/* Symbol: clEnqueueMigrateMemObjects */
/* Demangled: clEnqueueMigrateMemObjects */
int clEnqueueMigrateMemObjects(void);

/* Symbol: clCreateFromGLRenderbuffer */
/* Demangled: clCreateFromGLRenderbuffer */
int clCreateFromGLRenderbuffer(void);

/* Symbol: clEnqueueAcquireEGLObjectsKHR */
/* Demangled: clEnqueueAcquireEGLObjectsKHR */
int clEnqueueAcquireEGLObjectsKHR(void);

/* Symbol: clEnqueueReadImage */
/* Demangled: clEnqueueReadImage */
int clEnqueueReadImage(void);

/* Symbol: clEnqueueTask */
/* Demangled: clEnqueueTask */
int clEnqueueTask(void);

/* Symbol: clRetainSampler */
/* Demangled: clRetainSampler */
int clRetainSampler(void);

/* Symbol: clEnqueueCopyImage */
/* Demangled: clEnqueueCopyImage */
int clEnqueueCopyImage(void);

/* Symbol: clEnqueueNativeKernel */
/* Demangled: clEnqueueNativeKernel */
int clEnqueueNativeKernel(void);

/* Symbol: clEnqueueUnmapMemObject */
/* Demangled: clEnqueueUnmapMemObject */
int clEnqueueUnmapMemObject(void);

/* Symbol: clGetKernelArgInfo */
/* Demangled: clGetKernelArgInfo */
int clGetKernelArgInfo(void);

/* Symbol: clRetainProgram */
/* Demangled: clRetainProgram */
int clRetainProgram(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBOPENCL_H */
